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
	iLocal_235 = -1;
	iLocal_1718 = -1;
	iLocal_2863 = -99;
	iLocal_2864 = -99;
	iLocal_2865 = -99;
	if (unk_0x8CD06866876216F2())
	{
		func_908(ScriptParam_0);
	}
	else
	{
		func_906();
	}
	while (true)
	{
		func_905();
		if (Local_248.f_31 > 1)
		{
			unk_0x346413646FA09F4B(0,01f);
		}
		if (func_895())
		{
			func_906();
		}
		if (func_890(ScriptParam_0.f_2, iLocal_2947))
		{
			func_906();
		}
		if (!func_889())
		{
			Global_1676377.f_3322 = 1;
		}
		if (Global_1676377.f_3322)
		{
			if (Global_1676371 == 7 && Local_280[unk_0xD803B885F5E47A62()].f_5 > 1)
			{
				iLocal_476 = 1;
			}
			func_875(0, 1);
			func_874(0);
			if (unk_0xBFF81ED3B99522C7() && iLocal_476)
			{
				func_873(0);
			}
		}
		func_28();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (Local_248.f_31 > 1 && !func_27())
	{
		func_873(0);
	}
	switch (Local_248.f_31)
	{
		case 0:
			Local_248.f_20 = func_26();
			Local_248.f_21 = func_26();
			Local_248.f_3 = 0;
			Local_248.f_4 = -1;
			Local_248.f_5 = 0;
			Local_248.f_6 = 0;
			Local_248.f_7 = -1;
			Local_248.f_8 = 0;
			Local_248.f_9 = 0;
			Local_248 = 0;
			Local_248.f_1 = 0;
			Local_248.f_2 = 0;
			func_25(&(Local_248.f_27));
			func_25(&(Local_248.f_29));
			func_24(1);
			func_873(1);
			break;
		
		case 1:
			Local_248.f_5 = func_22();
			func_21();
			if (Local_248.f_20 == func_26())
			{
				Local_248.f_20 = func_20();
			}
			if (func_19() && func_18())
			{
				Local_248.f_5 = func_22();
				if (Local_248.f_5 > 1)
				{
					Local_248.f_1 = 1;
				}
				func_873(2);
			}
			break;
		
		case 2:
			func_21();
			if (Local_248.f_20 == func_26())
			{
				Local_248.f_20 = func_20();
			}
			Local_248.f_5 = func_22();
			if (Local_248.f_5 > 1)
			{
				Local_248.f_1 = 1;
			}
			else
			{
				Local_248.f_1 = 0;
			}
			if (func_16())
			{
				unk_0x0674E58A79778E99(&(Local_248.f_3), 0);
				func_25(&(Local_248.f_27));
				func_25(&(Local_248.f_29));
				func_873(3);
			}
			break;
		
		case 3:
			func_13();
			if (!func_12(&(Local_248.f_27)))
			{
				if (func_9())
				{
					Local_248.f_4++;
					func_8(&(Local_248.f_27), 0, 0);
				}
			}
			else if (func_12(&(Local_248.f_27)) && !func_7(&(Local_248.f_27), 30000, 0))
			{
				func_6();
			}
			else if (func_7(&(Local_248.f_27), 30000, 0))
			{
				func_873(5);
			}
			if (func_5())
			{
				func_873(4);
			}
			break;
		
		case 4:
			if (func_4())
			{
				func_873(0);
			}
			break;
		
		case 5:
			if (func_4())
			{
				if (!Local_248.f_1)
				{
					if (Local_280[Local_248.f_20])
					{
						func_873(0);
						return;
					}
					unk_0x0674E58A79778E99(&(Local_248.f_3), 0);
					func_25(&(Local_248.f_27));
					func_25(&(Local_248.f_29));
					func_24(0);
					Local_248.f_21 = func_26();
					Local_248.f_4 = -1;
					Local_248.f_6 = 0;
					Local_248.f_7 = -1;
					Local_248.f_8 = 0;
					Local_248.f_9 = 0;
					Local_248 = 0;
					Local_248.f_1 = 0;
					Local_248.f_2 = 0;
					func_873(2);
				}
				else if (Local_248.f_1 && Local_248)
				{
					func_873(0);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_248.f_3), 0);
					func_25(&(Local_248.f_27));
					func_25(&(Local_248.f_29));
					func_24(0);
					Local_248.f_2 = 0;
					func_873(3);
				}
			}
			else if (func_5())
			{
				func_873(0);
			}
			else if (!Local_248.f_2)
			{
				func_6();
				if (!func_12(&uLocal_2945))
				{
					func_8(&uLocal_2945, 0, 0);
				}
				else if (func_7(&uLocal_2945, 2000, 0))
				{
					func_25(&uLocal_2945);
					func_2();
				}
			}
			break;
	}
}

void func_2()
{
	Local_248.f_7 = -1;
	unk_0x0674E58A79778E99(&(Local_248.f_3), 1);
	unk_0x0674E58A79778E99(&(Local_248.f_3), 7);
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 == 9)
			{
				if (Local_280[iVar0].f_2 > Local_248.f_7)
				{
					Local_248.f_7 = Local_280[iVar0].f_2;
				}
			}
		}
		iVar1++;
	}
	Local_248.f_9 = 0;
	Local_248.f_8 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 == 9)
			{
				if (Local_280[iVar0].f_2 == Local_248.f_7)
				{
					iVar2 = func_3(iVar0);
					Local_248.f_15[iVar2]++;
					Local_248.f_21 = iVar0;
					Local_248.f_8++;
					if (Local_248.f_8 > 1)
					{
						unk_0x5D96D8530B3D0904(&(Local_248.f_3), 1);
					}
					if (Local_248.f_15[iVar2] >= 3)
					{
						Local_248.f_9++;
						if (Local_248.f_9 > 1)
						{
							unk_0x5D96D8530B3D0904(&(Local_248.f_3), 7);
						}
						Local_248 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	Local_248.f_2 = 1;
}

int func_3(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam0 == Local_248.f_22[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_4()
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 > 1)
			{
				if (Local_280[iVar0].f_5 != 12)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

int func_5()
{
	iVar2 = 0;
	while (iVar2 < unk_0x54EABC0DD106045B())
	{
		iVar1 = unk_0x117658E336116132(iVar2);
		if (unk_0xFB75B0F82CA525F6(iVar1))
		{
			if (Local_280[iVar1].f_5 > 1)
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (iVar0 <= 1 && Local_248.f_1)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_248.f_22[iVar0] != func_26())
		{
			Local_248.f_10[iVar0] = Local_280[Local_248.f_22[iVar0]].f_2;
		}
		else
		{
			Local_248.f_10[iVar0] = 0;
		}
		iVar0++;
	}
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

int func_9()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_248.f_3, 0))
	{
		if (!func_12(&uVar0))
		{
			func_8(&uVar0, 0, 0);
		}
		if (func_11(&uVar0, &(Local_248.f_29)) || func_10(&uVar0, &(Local_248.f_29)))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	if (unk_0xE7E95E58E001D801(*uParam0, *uParam1))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1)
{
	if (unk_0x4F34DBDF4FE51E6C(*uParam0, *uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_248.f_3, 0))
	{
		if (!func_12(&uVar0))
		{
			func_8(&uVar0, 0, 0);
		}
		func_15(&(Local_248.f_29), 0, 0);
		Local_248.f_29 = { func_14(&uVar0, 3500) };
		unk_0x5D96D8530B3D0904(&(Local_248.f_3), 0);
	}
}

struct<2> func_14(var uParam0, int iParam1)
{
	Var0 = unk_0x04787588C7E736F8(*uParam0, iParam1);
	return Var0;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 == 6)
			{
				Local_248.f_6 = func_17(iVar0);
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_17(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_280[iParam0].f_3, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

int func_18()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_248.f_22[iVar0] != func_26())
		{
			iVar1 = unk_0x9539D44F3E4492F6(Local_248.f_22[iVar0]);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (unk_0xD1960163A3042274(iVar1, 2106541073) == 1 || unk_0xD1960163A3042274(iVar1, 2106541073) == 0)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_19()
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 >= 4 && Local_280[iVar0].f_5 <= 6)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_20()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 >= 2)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return func_26();
}

void func_21()
{
	if (Local_248.f_20 != func_26())
	{
		if (unk_0xFB75B0F82CA525F6(Local_248.f_20))
		{
			if (Local_280[Local_248.f_20].f_5 == 0 || Local_280[Local_248.f_20].f_5 == 1)
			{
				Local_248.f_20 = func_26();
			}
		}
		else
		{
			Local_248.f_20 = func_26();
		}
	}
}

int func_22()
{
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x117658E336116132(iVar2);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 > 1)
			{
				if (Local_248.f_22[Local_280[iVar0].f_4] == func_26())
				{
					Local_248.f_22[Local_280[iVar0].f_4] = iVar0;
				}
				iVar1++;
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (Local_248.f_22[iVar3] == iVar0 || !func_23(Local_248.f_22[iVar3], 1, 1))
					{
						Local_248.f_22[iVar3] = func_26();
					}
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
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

void func_24(bool bParam0)
{
	if (bParam0)
	{
		Local_248.f_22[0] = func_26();
		Local_248.f_22[1] = func_26();
		Local_248.f_22[2] = func_26();
		Local_248.f_22[3] = func_26();
		Local_248.f_15[0] = 0;
		Local_248.f_15[1] = 0;
		Local_248.f_15[2] = 0;
		Local_248.f_15[3] = 0;
	}
	Local_248.f_10[0] = 0;
	Local_248.f_10[1] = 0;
	Local_248.f_10[2] = 0;
	Local_248.f_10[3] = 0;
}

void func_25(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_26()
{
	return -1;
}

int func_27()
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			if (Local_280[iVar0].f_5 != 0 && Local_280[iVar0].f_5 != 1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_28()
{
	func_872();
	func_871();
	func_870(&Local_1704, &Local_1726);
	func_867();
	func_864();
	func_861();
	func_857();
	func_854(&iLocal_478);
	func_853();
	func_852();
	func_847();
	func_846();
	func_845();
	iVar0 = 0;
	switch (Local_280[unk_0xD803B885F5E47A62()].f_5)
	{
		case 0:
			Stack.Push(Local_248.f_31 > 0);
			Call_Loc(Local_1704.f_1);
			if (StackVal && StackVal)
			{
				func_788(&Local_1704, &Local_1726, 0, iLocal_2947);
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 19))
				{
					unk_0x0674E58A79778E99(&iLocal_1715, 19);
					func_787();
					func_780(&iLocal_478, 1, 0, 0);
					unk_0xE17FDF9E3068281B(&iLocal_2931);
				}
				func_874(1);
			}
			break;
		
		case 1:
			if (iLocal_476 && unk_0x0F1CCD77290EE12F())
			{
				func_779("MP_SR_RENO", -1);
				iLocal_476 = 0;
			}
			if (Local_280[unk_0xD803B885F5E47A62()])
			{
				func_774();
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 3))
			{
				unk_0x0674E58A79778E99(&iLocal_1715, 3);
			}
			if ((((((((((((func_23(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1199.f_4, 0)) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_773()) && !func_772()) && !func_771(unk_0xD803B885F5E47A62())) && (func_770(Global_1590375) || func_769(Global_1590375))) && !func_768()) && !Global_262145.f_20990) && !func_766(unk_0xD803B885F5E47A62())) && !func_765()) && !func_764()) && !func_762())
			{
				if ((func_760() && func_759(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 350f, 35f)) && !func_773())
				{
					unk_0x5D96D8530B3D0904(&iLocal_1715, 3);
				}
			}
			if (unk_0xB8E3620B82AD47D7(2))
			{
				func_758();
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 3))
			{
				if (Local_248.f_31 >= 2)
				{
					if (func_757("MP_SR_START_SP") || func_757("MP_SR_START_MP"))
					{
						func_758();
					}
					if (((!func_757("MP_SR_IN_USE") && !func_12(&uLocal_2943)) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0)
					{
						func_756("MP_SR_IN_USE");
					}
				}
				else
				{
					if (func_757("MP_SR_IN_USE"))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (iLocal_1718 == -1)
					{
						unk_0xA37A90C62806D848(1);
						if (Local_248.f_5 >= 1)
						{
							func_754(&iLocal_1718, 5, "MP_SR_START_MP", 0, 0, 0, 0);
						}
						else
						{
							func_754(&iLocal_1718, 5, "MP_SR_START_SP", 0, 0, 0, 0);
						}
					}
					else if (func_752(iLocal_1718, 1) && !func_772())
					{
						Global_1370230 = 1;
						Global_1662008 = 1;
						func_751();
						unk_0xBFE31971E49FA500(false);
						func_750();
						func_747(&Local_1726, func_748());
						Local_280[unk_0xD803B885F5E47A62()].f_4 = Local_1726.f_4;
						func_758();
						func_874(2);
					}
				}
			}
			else
			{
				func_758();
				if (func_757("MP_SR_IN_USE"))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			break;
		
		case 2:
			if (Local_248.f_22[Local_1726.f_4] != func_26() && Local_248.f_22[Local_1726.f_4] == unk_0xD803B885F5E47A62())
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
				unk_0x5D96D8530B3D0904(&iLocal_1715, 10);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
				}
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_746(Local_1726.f_4), 1f, 5000, func_745(Local_1726.f_4), 0,25f);
				func_874(3);
			}
			else if (Local_248.f_22[Local_1726.f_4] != func_26() && Local_248.f_22[Local_1726.f_4] != unk_0xD803B885F5E47A62())
			{
				func_875(0, 0);
				func_874(0);
			}
			break;
		
		case 3:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1)
				{
					if (iLocal_1723 != Local_248.f_5)
					{
						unk_0xA37A90C62806D848(1);
						iLocal_1723 = Local_248.f_5;
					}
					if (Local_248.f_20 == unk_0xD803B885F5E47A62())
					{
						if (unk_0xB8E3620B82AD47D7(2))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						func_740();
					}
					if (!func_772())
					{
						if (unk_0xD245978525608929(2, 202) || unk_0xBFC0798A6E3417F9(2, 202))
						{
							unk_0xA37A90C62806D848(1);
							func_875(0, 0);
							func_874(0);
							return;
						}
						else if ((unk_0xD245978525608929(2, 201) || unk_0xBFC0798A6E3417F9(2, 201)) && Local_248.f_20 == unk_0xD803B885F5E47A62())
						{
							unk_0xA37A90C62806D848(1);
							func_874(4);
							return;
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14))
					{
						func_739(&iLocal_2948, 0, 0, 0, 1);
						func_738(&iLocal_2948, "IB_QUIT", 2, 202, 1, 0, 0);
						func_737(&iLocal_2948, 1);
						unk_0x5D96D8530B3D0904(&iLocal_1715, 14);
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14))
					{
						func_736(1);
						func_730(&iLocal_2948, 1128792064, 5, 0, 1, 1065353216);
					}
					if (Local_248.f_31 >= 2)
					{
						func_729(&iLocal_2948);
						unk_0x0674E58A79778E99(&iLocal_1715, 14);
						unk_0xA37A90C62806D848(1);
						func_874(5);
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			if (Local_248.f_31 == 2)
			{
				func_874(5);
			}
			break;
		
		case 5:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 19))
			{
				unk_0x5D96D8530B3D0904(&iLocal_1715, 19);
				func_728();
				func_727(&iLocal_478, 0);
				iLocal_2931 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
			}
			if (Local_248.f_20 == unk_0xD803B885F5E47A62())
			{
				if (iLocal_1723 != Local_248.f_5)
				{
					iLocal_1723 = Local_248.f_5;
					unk_0x0674E58A79778E99(&iLocal_1715, 2);
				}
				if (!func_772())
				{
					func_717();
					if (func_715("SNK_MNU", -1, 1))
					{
						func_702();
						func_701(iLocal_1719, 1, 1);
						func_694();
						func_664(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 4))
						{
							unk_0x0674E58A79778E99(&iLocal_1715, 4);
							func_662(&Local_1726, func_663());
							func_874(6);
							func_659(1, -1);
							return;
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 5))
				{
					func_875(0, 0);
					func_874(0);
					return;
				}
			}
			else
			{
				if (iLocal_1723 != Local_248.f_5)
				{
					unk_0xA37A90C62806D848(1);
					iLocal_1723 = Local_248.f_5;
				}
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_740();
				}
				if (!func_772())
				{
					if (unk_0xD245978525608929(2, 202) || unk_0xBFC0798A6E3417F9(2, 202))
					{
						unk_0xA37A90C62806D848(1);
						func_875(0, 0);
						func_874(0);
						return;
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14))
				{
					func_739(&iLocal_2948, 0, 0, 0, 1);
					func_738(&iLocal_2948, "IB_QUIT", 2, 202, 1, 0, 0);
					func_737(&iLocal_2948, 1);
					unk_0x5D96D8530B3D0904(&iLocal_1715, 14);
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14))
				{
					func_736(1);
					func_730(&iLocal_2948, 1128792064, 5, 0, 1, 1065353216);
				}
			}
			if (Local_248.f_31 == 3)
			{
				unk_0xA37A90C62806D848(1);
				func_659(1, -1);
				func_874(7);
			}
			break;
		
		case 6:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			if (Local_248.f_31 == 3)
			{
				func_874(7);
			}
			break;
		
		case 7:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			if (func_658(unk_0xD803B885F5E47A62()))
			{
				func_650(2, 0, 1);
				unk_0x5D96D8530B3D0904(&iLocal_1715, 16);
			}
			if (!func_649(unk_0x16F2683693E537C9()) && !func_648(unk_0x16F2683693E537C9()))
			{
				if (Local_248.f_4 == -1 && func_644() == 0)
				{
					func_641(unk_0x16F2683693E537C9(), &uLocal_2866, 1, -1);
				}
				func_634();
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 1, -1, 0);
			}
			func_626();
			func_788(&Local_1704, &Local_1726, 0, iLocal_2947);
			Call_Loc(Local_1704);
			unk_0x5D96D8530B3D0904(&iLocal_1715, 0);
			func_729(&iLocal_2948);
			unk_0x0674E58A79778E99(&iLocal_1715, 14);
			func_874(8);
			break;
		
		case 8:
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			}
			func_613();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 17))
			{
				if (Local_248.f_1)
				{
					if (Local_248.f_4 == -1)
					{
						unk_0xA37A90C62806D848(1);
						func_779("MP_SR_HELP_3", 5000);
						unk_0x5D96D8530B3D0904(&iLocal_1715, 17);
					}
				}
				else
				{
					unk_0xA37A90C62806D848(1);
					if (func_612())
					{
						func_779("MP_SR_HELP_4", 5000);
					}
					else
					{
						func_779("MP_SR_HELP_5", 5000);
					}
					unk_0x5D96D8530B3D0904(&iLocal_1715, 17);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 6))
			{
				if (Local_1726.f_1122 == 2)
				{
					Local_1726.f_1129 = Global_262145.f_21021;
				}
				else
				{
					Local_1726.f_1129 = -1f;
				}
				Stack.Push(&Local_1726);
				Stack.Push(func_611(Local_1726.f_1122));
				Stack.Push(func_610());
				Stack.Push(func_608(0));
				Call_Loc(Local_1704.f_3);
				func_874(9);
				unk_0x0674E58A79778E99(&iLocal_1715, 6);
			}
			break;
		
		case 9:
			if (unk_0xB8E3620B82AD47D7(2))
			{
				func_729(&iLocal_2948);
				unk_0x0674E58A79778E99(&iLocal_1715, 14);
			}
			if (Local_248.f_31 == 5)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEAE0D21A50E6C7F4(iLocal_1715, 18))
				{
					if (!func_649(unk_0x16F2683693E537C9()) && !func_648(unk_0x16F2683693E537C9()))
					{
						func_607();
						func_606();
						func_605();
						if (func_644() == 0)
						{
							func_375(unk_0x16F2683693E537C9(), &uLocal_2866, 0, 0, 1, 0);
						}
						else
						{
							Global_2546381.f_14 = 1;
						}
					}
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
					unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_1715, 18);
				}
				unk_0x38C3A68D7861DCFD(0, 24, 1);
				unk_0x38C3A68D7861DCFD(0, 257, 1);
				unk_0x38C3A68D7861DCFD(0, 25, 1);
				if (!Local_248.f_2)
				{
					func_613();
					return;
				}
				if (!Local_248.f_1 || Local_248)
				{
					func_366();
				}
				if (!Local_248.f_1)
				{
					func_317(105, func_365(), 0, 1, -1, 2, 1, 0);
					func_315(func_316());
					func_313("MP_SR_SUM_I_1", func_314(Local_1726.f_1122, iLocal_1720));
					func_313("MP_SR_SUM_I_2", Local_280[unk_0xD803B885F5E47A62()].f_1);
					func_313("MP_SR_SUM_I_3", (iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))));
					iVar0 = 0;
					if ((iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))) > 0)
					{
						iVar0 = round(((to_float(Local_1726.f_1114) / to_float((iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))))) * 100f));
					}
					func_312("MP_SR_SUM_I_4", iVar0);
					func_310(func_311());
				}
				else
				{
					if (Local_280[unk_0xD803B885F5E47A62()].f_1 < Local_248.f_7)
					{
						func_317(105, "MP_SR_SUM_T_7", 0, 1, -1, 2, 1, 0);
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_248.f_3, 1))
					{
						func_317(105, "MP_SR_SUM_T_8", 0, 1, -1, 2, 1, 0);
					}
					else
					{
						func_317(105, "MP_SR_SUM_T_7", 0, 1, -1, 2, 1, 0);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_248.f_3, 1))
					{
						func_315("");
					}
					else
					{
						func_308(unk_0x6E524813889AECF8(Local_248.f_21));
					}
					func_313("MP_SR_SUM_I_2", Local_280[unk_0xD803B885F5E47A62()].f_2);
					func_313("MP_SR_SUM_I_3", (iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))));
					iVar0 = 0;
					if ((iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))) > 0)
					{
						iVar0 = round(((to_float(Local_1726.f_1114) / to_float((iLocal_1722 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_608(1))))) * 100f));
					}
					func_312("MP_SR_SUM_I_4", iVar0);
					func_306(&Local_3075, 0);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if ((Local_248.f_22[iVar1] != func_26() && !unk_0x7F8A39872A07D2CE(unk_0x6E524813889AECF8(Local_248.f_22[iVar1]), "**Invalid**")) && Local_280[Local_248.f_22[iVar1]].f_5 > 1)
						{
							func_305(&Local_3075, Local_248.f_22[iVar1], Local_248.f_10[iVar1]);
							func_304(&Local_3075, Local_248.f_22[iVar1], Local_248.f_10[iVar1], 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if ((Local_3075[iVar1] != func_26() && !unk_0x7F8A39872A07D2CE(unk_0x6E524813889AECF8(Local_3075[iVar1]), "**Invalid**")) && Local_280[Local_3075[iVar1]].f_5 > 1)
						{
							func_302(Local_3075[iVar1], Local_3075[iVar1].f_1);
						}
						iVar1++;
					}
					func_300(3);
				}
				Stack.Push(&Local_1726);
				Call_Loc(Local_1704.f_7);
				func_874(10);
				return;
			}
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 10))
				{
					unk_0x0674E58A79778E99(&iLocal_1715, 10);
				}
			}
			Stack.Push(&Local_1726);
			Call_Loc(Local_1704.f_4);
			if (Local_280[unk_0xD803B885F5E47A62()].f_2 != Local_1726.f_3)
			{
				Local_280[unk_0xD803B885F5E47A62()].f_1 = (Local_280[unk_0xD803B885F5E47A62()].f_1 + (Local_1726.f_3 - Local_280[unk_0xD803B885F5E47A62()].f_2));
				Local_280[unk_0xD803B885F5E47A62()].f_2 = Local_1726.f_3;
			}
			func_613();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14))
			{
				if (unk_0x91E3F625EF57450D(2))
				{
					iVar2 = 202;
				}
				else
				{
					iVar2 = 51;
				}
				func_739(&iLocal_2948, 0, 0, 0, 1);
				func_738(&iLocal_2948, "IB_QUIT", 2, iVar2, 1, 0, 0);
				func_737(&iLocal_2948, 1);
				unk_0x5D96D8530B3D0904(&iLocal_1715, 14);
			}
			else if ((unk_0xEAE0D21A50E6C7F4(iLocal_1715, 14) && !func_299()) && !func_297())
			{
				func_736(1);
				func_730(&iLocal_2948, 1128792064, 5, 0, 1, 1065353216);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 7))
			{
				_set_warning_message_2("IB_QUIT", "MP_SR_QUIT", 36, 0, 0, -1, 0, 0, 1, 0);
				if (unk_0xD245978525608929(2, 201) || unk_0xBFC0798A6E3417F9(2, 201))
				{
					func_875(0, 1);
					func_295();
					func_874(0);
					return;
				}
				if (unk_0xD245978525608929(2, 202) || unk_0xBFC0798A6E3417F9(2, 202))
				{
					unk_0x0674E58A79778E99(&iLocal_1715, 7);
					return;
				}
			}
			if ((((((!unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, 235)) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, 202))) && !unk_0xEAE0D21A50E6C7F4(iLocal_1715, 7)) && !func_772()) && !func_299()) && !func_297())
			{
				unk_0x5D96D8530B3D0904(&iLocal_1715, 7);
			}
			break;
		
		case 10:
			unk_0x857E3CE01DEA2D26();
			unk_0x7BBABEC524CBF883(0);
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
				unk_0x5D96D8530B3D0904(&iLocal_1715, 10);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1715, 11))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 12))
				{
					func_292(&iLocal_2931, "MP_SR_GAME_OVER", "MP_SR_S_LEFT", 3000, 0, 1);
					unk_0x5D96D8530B3D0904(&iLocal_1715, 12);
				}
				else if (!func_284(&iLocal_2931, 0))
				{
					func_874(12);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_1715, 12))
			{
				unk_0x5D96D8530B3D0904(&iLocal_1715, 12);
			}
			else if (!func_283())
			{
				func_281(&iLocal_2931);
				if (!Local_248.f_1 || Local_248)
				{
					func_279(130);
					func_270(&iLocal_478, 0);
					func_874(11);
				}
				else
				{
					func_874(12);
				}
			}
			break;
		
		case 11:
			unk_0x857E3CE01DEA2D26();
			if (func_29(&iLocal_478, &uLocal_477, "MP_SR_XPT", -1636175450, -1495394995, iLocal_1714, iLocal_1725, 0, &uLocal_1713, unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0))
			{
				func_874(12);
			}
			break;
		
		case 12:
			if (Local_248.f_1)
			{
				if (Local_248.f_31 == 1)
				{
					func_875(0, 1);
					func_874(0);
				}
				else if (Local_248.f_31 == 3)
				{
					func_875(1, 0);
					func_874(7);
				}
			}
			else if (Local_248.f_31 == 2)
			{
				func_875(0, 1);
				Global_1370230 = 1;
				Global_1662008 = 1;
				unk_0xBFE31971E49FA500(false);
				func_750();
				func_747(&Local_1726, func_748());
				Local_280[unk_0xD803B885F5E47A62()].f_4 = Local_1726.f_4;
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
				unk_0x5D96D8530B3D0904(&iLocal_1715, 10);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
				}
				func_788(&Local_1704, &Local_1726, 0, iLocal_2947);
				func_728();
				func_874(5);
			}
			else if (Local_248.f_31 == 1)
			{
				func_875(0, 1);
				func_874(0);
			}
			break;
	}
}

int func_29(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, int iParam15)
{
	if (iParam0->f_435 > 0)
	{
		func_259(0);
	}
	iVar32 = iParam9;
	*uParam8 = 1;
	if (bParam14)
	{
		func_258();
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xBA301E03A078FA59())
	{
		func_250(&(iParam0->f_23), &(iParam0->f_144), iParam0->f_435, iParam0->f_2);
	}
	else
	{
		func_242(iParam0, &(iParam0->f_450), &(iParam0->f_451), &(iParam0->f_23), &(iParam0->f_144), iParam0->f_435, &(iParam0->f_2), &(iParam0->f_3), &(iParam0->f_474));
	}
	func_241(iParam0);
	switch (*uParam8)
	{
		case 0:
			switch (iParam0->f_435)
			{
				case 0:
					func_727(iParam0, 0);
					if (func_240(iParam0))
					{
						func_239(iParam0, 0);
						if ((func_7(&(iParam0->f_431), 500, 0) || unk_0x757EF87A33649210()) && func_166(iParam0, uParam1, iParam9, 0))
						{
							func_165(Global_2425662[iVar32].f_250, unk_0xCED082ADD3739B9F(iParam0->f_23[0]), 0, &sVar0, &cVar16, Global_2425662[iVar32].f_249, Global_2425662[iVar32].f_251, 0);
							unk_0x3F423BF5B8125A50(&sVar0);
							if (unk_0xB4AE0788C1587752(&sVar0) || func_164(iParam0))
							{
								func_25(&(iParam0->f_429));
								func_8(&(iParam0->f_429), 0, 0);
								func_161(1, 1);
								iParam0->f_435 = 1;
							}
						}
					}
					break;
				
				case 1:
					func_160(iParam0, &(iParam0->f_20), 0, 1);
					func_159(iParam0, 0);
					if (func_7(&(iParam0->f_429), 375, 0))
					{
						func_158(iParam0);
					}
					if (func_7(&(iParam0->f_429), 750, 0))
					{
						sVar33 = "WINNER";
						StringCopy(&Var35, unk_0x6E524813889AECF8(iParam9), 64);
						cVar51 = { func_154(iParam9) };
						iParam0->f_418 = 666;
						if (!func_153() || !func_152(unk_0xD803B885F5E47A62()))
						{
							StringCopy(&cVar51, "", 64);
						}
						if (iParam6 == 0)
						{
							sVar34 = "HUD_COLOUR_FRIENDLY";
						}
						else
						{
							sVar34 = "HUD_COLOUR_NET_PLAYER1";
						}
						func_151(iParam0, sVar33, sVar34, 1, 0);
						func_148(iParam0, sVar33, iParam6, &Var35, &cVar51, "", iParam7, 1, 0, 0, 0);
						iParam0->f_418 += 4666;
						iParam0->f_418 += 666;
						func_147(iParam0, sVar33, 75, 0);
						func_146(iParam0, sVar33);
						func_25(&(iParam0->f_429));
						func_8(&(iParam0->f_429), 0, 0);
						func_141(1, 0, 1);
						unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
						unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
						func_140(iParam0);
						unk_0x76366A5156F91F51(1);
						iParam0->f_435 = 3;
					}
					break;
				
				case 3:
					func_160(iParam0, &(iParam0->f_20), 0, 1);
					if (func_7(&(iParam0->f_429), iParam0->f_418, 0))
					{
						iParam0->f_435 = 5;
					}
					break;
				
				case 5:
					func_139(iParam0);
					unk_0x76366A5156F91F51(0);
					*uParam8 = 1;
					iParam0->f_435 = 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam0->f_435)
			{
				case 0:
					if (!bParam10)
					{
						if (func_127(iParam0, uParam1, &bVar67, 0, 0))
						{
							func_727(iParam0, 0);
							func_161(1, 1);
							func_119(0);
							func_259(0);
							func_107(unk_0xD803B885F5E47A62(), 0, 0, 0);
							if (bVar67)
							{
								unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							}
							iParam0->f_435 = 1;
						}
					}
					else
					{
						func_727(iParam0, 0);
						func_161(1, 1);
						func_119(0);
						func_259(0);
						func_107(unk_0xD803B885F5E47A62(), 0, 0, 0);
						iParam0->f_435 = 1;
					}
					break;
				
				case 1:
					func_727(iParam0, 0);
					if ((func_240(iParam0) && unk_0x0F1CCD77290EE12F()) && !unk_0xED4934AFB6EC6451("DeathFailMPIn"))
					{
						StringCopy(&Var76, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
						cVar92 = { func_154(unk_0xD803B885F5E47A62()) };
						iParam0->f_418 = 666;
						sVar68 = "SUMMARY";
						sVar69 = "HUD_COLOUR_BLACK";
						iVar70 = func_106(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
						iVar75 = func_60(iParam15, sParam2, iParam3, iParam4, iParam5, 1, -1, 0);
						iVar71 = func_59(iVar70, 0);
						iVar72 = iVar71 + 1;
						iVar73 = func_58(iVar71, 0, 0);
						iVar74 = func_58(iVar72, 0, 0);
						iParam0->f_418 = 666;
						if (!func_153() || !func_152(unk_0xD803B885F5E47A62()))
						{
							StringCopy(&cVar92, "", 64);
						}
						func_151(iParam0, sVar68, sVar69, 1, 0);
						if (iParam6 == 2)
						{
							func_148(iParam0, sVar68, iParam6, "", "", "", iParam7, 1, 0, 0, 0);
						}
						else
						{
							func_148(iParam0, sVar68, iParam6, &Var76, &cVar92, "", iParam7, 1, 0, 0, 0);
						}
						iParam0->f_418 += 2333;
						if (iParam12 > 0)
						{
							func_55(iParam0, sVar68, iParam11, iParam12);
							iParam0->f_418 += 2333;
						}
						func_54(iParam0, sVar68, iVar75, iVar70, iVar73, iVar74, iVar71, iVar72);
						iParam0->f_418 += 2333;
						if ((iVar70 + iVar75) >= iVar74)
						{
							iParam0->f_418 = (iParam0->f_418 + round((to_float(2333) / 1,75f)));
						}
						func_147(iParam0, sVar68, -1, 0);
						func_146(iParam0, sVar68);
						func_25(&(iParam0->f_429));
						func_8(&(iParam0->f_429), 0, 0);
						if (func_53())
						{
							unk_0x8BC9595FD2792B5D("MP_CELEB_SCREEN_SCENE");
						}
						else
						{
							unk_0x8BC9595FD2792B5D("MP_CELEB_SCREEN_SCENE");
						}
						func_140(iParam0);
						iParam0->f_435 = 3;
						unk_0x76366A5156F91F51(1);
					}
					else if (unk_0xED4934AFB6EC6451("DeathFailMPIn"))
					{
						if (!func_12(&(iParam0->f_455)))
						{
							func_8(&(iParam0->f_455), 0, 0);
						}
						else if (func_7(&(iParam0->f_455), 1000, 0))
						{
							func_49();
						}
					}
					break;
				
				case 3:
					func_48(iParam0, 0);
					if (func_7(&(iParam0->f_429), iParam0->f_418, 0))
					{
						if (bParam13)
						{
							unk_0x82A772610883F395("MinigameEndNeutral", 0, 0);
							unk_0x4D7F4CC43D4D0DE3(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
							func_751();
							func_47(iParam0, "SUMMARY");
							func_780(iParam0, 1, "SUMMARY", 0);
							func_161(0, 1);
							if (unk_0x9F4FE516EAACCFC5(*uParam1))
							{
								unk_0x9A8DDC7C522F5BF5(*uParam1, 1);
								unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xEF6276132B396452(0f, 1065353216);
							}
							iParam0->f_435 = 5;
							if (func_53())
							{
								unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
							}
							else
							{
								unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
							}
							return 1;
						}
						else
						{
							if (!bParam10)
							{
								func_45(uParam1);
							}
							func_25(&(iParam0->f_429));
							func_8(&(iParam0->f_429), 0, 0);
							iParam0->f_435 = 4;
						}
					}
					break;
				
				case 4:
					func_48(iParam0, 0);
					unk_0x82A772610883F395("MinigameEndNeutral", 0, 0);
					unk_0x4D7F4CC43D4D0DE3(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					func_751();
					func_47(iParam0, "SUMMARY");
					func_780(iParam0, 1, "SUMMARY", 0);
					func_161(0, 1);
					if (unk_0x9F4FE516EAACCFC5(*uParam1))
					{
						unk_0x9A8DDC7C522F5BF5(*uParam1, 1);
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 1065353216);
					}
					iParam0->f_435 = 5;
					if (func_53())
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
				
				case 5:
					unk_0x76366A5156F91F51(0);
					if (func_53())
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
			}
			break;
	}
	if (iParam0->f_435 > 0 && iParam0->f_435 < 5)
	{
		if (unk_0x9F4FE516EAACCFC5(*uParam1))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam1))
			{
				func_30(iParam0, &(iParam0->f_20), iVar32, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0);
			}
		}
	}
	return 0;
}

void func_30(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (iParam8 == iParam8)
	{
		iParam8 = iParam8;
	}
	if (iParam11 == iParam11)
	{
		iParam11 = iParam11;
	}
	func_31(iParam0, uParam1, iParam2, iParam3, bParam4, bParam5, bParam6, iParam7, iParam9, iParam10, bParam12);
}

void func_31(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_34 = 3;
	Var0.f_40 = -1;
	if (!unk_0xEB6A8945D1AC98A1(*uParam1) && (iParam2 >= 0 || bParam4))
	{
		unk_0x9DD8618CA5BF832D(*uParam1, 150, true);
		StringCopy(&Var42, "", 64);
		StringCopy(&cVar58, "", 64);
		StringCopy(&Var77, "", 64);
		StringCopy(&cVar93, "", 64);
		if (iParam8 > -1)
		{
			iVar74 = iParam8;
		}
		else
		{
			iVar74 = Global_2425662[iParam2].f_250;
			iVar75 = Global_2425662[iParam2].f_249;
			iVar76 = Global_2425662[iParam2].f_251;
		}
		if (iParam9 == iParam9)
		{
			iParam9 = iParam9;
		}
		if (!bParam5)
		{
			func_165(iVar74, unk_0xCED082ADD3739B9F(*uParam1), bParam4, &Var42, &cVar58, iVar75, iVar76, bParam10);
		}
		else
		{
			func_44(iParam7, Global_2425662[iParam2].f_252, *uParam1, bParam6, &Var42, &cVar58);
		}
		func_43(uParam0, &Var77, &cVar93, unk_0xCED082ADD3739B9F(*uParam1));
		if (uParam0->f_448 != 0)
		{
			if (!unk_0xEA6BC48857E0AC4C(&Var42) && !unk_0xEA6BC48857E0AC4C(&Var77))
			{
				unk_0x3F423BF5B8125A50(&Var42);
				unk_0x3F423BF5B8125A50(&Var77);
				if (((unk_0xB4AE0788C1587752(&Var42) && unk_0xB4AE0788C1587752(&Var77)) && func_42(iVar74, bParam5)) && func_41(iVar74, bParam5))
				{
					switch (uParam0->f_449)
					{
						case 0:
							if (iParam2 > -1 && ((bParam5 && iParam3 > -1) || !bParam5))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_425, iParam2) || (bParam5 && !unk_0xEAE0D21A50E6C7F4(uParam0->f_425, iParam3)))
								{
									if (bParam5)
									{
										func_35(&Var0, 0, &vVar109, &vVar112, 1, 0, 1);
										vVar112.z = (vVar112.z + 90f);
										uParam0->f_437 = unk_0xE9744DB7B8CA6965(vVar109, vVar112, 2);
										vVar115 = { unk_0x1BB04F10296A1C5E(&Var42, &cVar58, vVar109, vVar112, 0, 2) };
										vVar118 = { unk_0xEEB20D14BD38615E(&Var42, &cVar58, vVar109, vVar112, 0, 2) };
										if (unk_0xC844350D5D58C99A(*uParam1))
										{
											if (!unk_0x437347B10A200C4B(*uParam1, 0))
											{
												unk_0x08841CDB215AE18F(*uParam1, vVar115, 0, 0, 1);
												unk_0xC023D1C4BF532815(*uParam1, vVar118, 2, 1);
											}
										}
									}
									else
									{
										vVar121 = { unk_0x68F4C0EC296D3901(*uParam1, true) };
										vVar124 = { vVar121 };
										func_34(&(uParam0->f_440), iVar74, bParam5, vVar124);
										uParam0->f_437 = unk_0xE9744DB7B8CA6965(vVar121, unk_0x835730A2D89F6093(*uParam1, 2), 2);
									}
									if (unk_0xC844350D5D58C99A(uParam0->f_440))
									{
										unk_0xE14EC663EED44AD5(uParam0->f_440, uParam0->f_437, &cVar58, &Var42, 1000f, -1000f, 0, 1148846080);
									}
									unk_0x915804B434753CBD(*uParam1, uParam0->f_437, &Var42, &cVar58, 1000f, -8f, 0, 0, 1000f, 31);
									if (bParam5)
									{
										if (bParam6)
										{
											if (iParam2 >= 0 && iParam2 < 32)
											{
												unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam2);
											}
										}
										else if (iParam3 >= 0 && iParam3 < 32)
										{
											unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam3);
										}
									}
									else if (iParam2 >= 0 && iParam2 < 32)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam2);
									}
								}
								else
								{
									uParam0->f_449++;
								}
							}
							else
							{
								uParam0->f_449 = 2;
							}
							break;
						
						case 1:
							if (unk_0x69DF961355195C3C(uParam0->f_437))
							{
								if (!bParam5)
								{
									if (iVar74 == 8)
									{
										func_33(uParam0, uParam1);
									}
									if (iVar74 == 9)
									{
										func_32(uParam0, uParam1);
									}
								}
								if (uParam0->f_1195)
								{
									if (unk_0xA45992A6CE82FB43(uParam0->f_437) < 0,98f)
									{
										if (iVar74 == 8)
										{
											func_33(uParam0, uParam1);
										}
										if (iVar74 == 9)
										{
											func_32(uParam0, uParam1);
										}
									}
									else
									{
										unk_0x3E8E48829F3C7624(*uParam1, &Var77, &cVar93, unk_0x68F4C0EC296D3901(*uParam1, true), unk_0x835730A2D89F6093(*uParam1, 2), 2f, -8f, -1, 0, 0f, 2, 31);
										uParam0->f_449++;
									}
								}
							}
							break;
						
						case 2:
							break;
					}
				}
				else
				{
					if (!unk_0xB4AE0788C1587752(&Var42))
					{
					}
					if (!func_42(iVar74, bParam5))
					{
					}
					if (!unk_0xB4AE0788C1587752(&Var77))
					{
					}
					if (!func_41(iVar74, bParam5))
					{
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(*uParam1))
		{
		}
		if (iParam2 < 0)
		{
		}
	}
}

void func_32(var uParam0, var uParam1)
{
	if (unk_0x69DF961355195C3C(uParam0->f_437))
	{
		fVar0 = unk_0xA45992A6CE82FB43(uParam0->f_437);
		if (!unk_0xC844350D5D58C99A(*uParam1))
		{
			return;
		}
		if (unk_0x437347B10A200C4B(*uParam1, 0))
		{
			return;
		}
		if (uParam0->f_439 == -1)
		{
			uParam0->f_439 = unk_0xD68EA767274B7444();
		}
		else if (fVar0 >= 0,595f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
			}
		}
		else if (fVar0 >= 0,371f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
			}
		}
		else if (fVar0 >= 0,152f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
			}
		}
	}
}

void func_33(var uParam0, var uParam1)
{
	if (unk_0x69DF961355195C3C(uParam0->f_437))
	{
		fVar0 = unk_0xA45992A6CE82FB43(uParam0->f_437);
		if (!unk_0xC844350D5D58C99A(*uParam1))
		{
			return;
		}
		if (unk_0x437347B10A200C4B(*uParam1, 0))
		{
			return;
		}
		if (uParam0->f_439 == -1)
		{
			uParam0->f_439 = unk_0xD68EA767274B7444();
		}
		if (!unk_0xCED082ADD3739B9F(*uParam1))
		{
			if (fVar0 >= 0,622f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
				}
			}
			else if (fVar0 >= 0,495f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
				}
			}
			else if (fVar0 >= 0,333f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
				}
			}
			else if (fVar0 >= 0,162f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 3))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 3);
				}
			}
			else if (fVar0 >= 0,131f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 4))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 4);
				}
			}
		}
		else if (fVar0 >= 0,595f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
			}
		}
		else if (fVar0 >= 0,445f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
			}
		}
		else if (fVar0 >= 0,282f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
			}
		}
		else if (fVar0 >= 0,141f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 3))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 3);
			}
		}
	}
}

bool func_34(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	fVar1 = -1f;
	if (bParam2)
	{
		return 1;
	}
	if (iParam1 == 52)
	{
		iVar0 = -917746868;
	}
	else
	{
		return 1;
	}
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		return 1;
	}
	if (unk_0x081C8BC5094A7B76(1))
	{
		unk_0x3A4967AE7C71F999(unk_0xBF3DE18643F54472(false, 0) + 1);
		if (func_41(iParam1, bParam2))
		{
			*uParam0 = unk_0x7707E48765093646(iVar0, vParam3, 0, false, false);
			if (fVar1 != -1f)
			{
				unk_0xD8F6A53F4799FAFE(*uParam0, fVar1);
			}
		}
	}
	else
	{
		return 1;
	}
	return unk_0xC844350D5D58C99A(*uParam0);
}

void func_35(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam4 == bParam4)
	{
		bParam4 = bParam4;
	}
	if (func_53())
	{
		func_36(uParam0, iParam1, uParam2, uParam3, iParam1);
		return;
	}
	if (bParam5)
	{
		*uParam2 = { 414,4f, -977,6f, -100,0042f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	else if (bParam6)
	{
		*uParam2 = { 414,65f, -978,46f, -99,004f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 414,4f, -977,6f, -100,0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 1:
			if (bParam4)
			{
				*uParam2 = { 412,5202f, -977,6f, -100,0042f };
				*uParam3 = { 0f, 0f, 225,375f };
			}
			else
			{
				*uParam2 = { 413,0202f, -976,6559f, -100,0042f };
				*uParam3 = { 0f, 0f, 225,375f };
			}
			break;
		
		case 2:
			*uParam2 = { 414,9879f, -975,4411f, -100,0042f };
			*uParam3 = { 0f, 0f, 183,625f };
			break;
		
		case 3:
			*uParam2 = { 416,2123f, -975,5722f, -100,0042f };
			*uParam3 = { 0f, 0f, 155,3f };
			break;
		
		case 4:
			*uParam2 = { 410,7824f, -976,5933f, -100,0042f };
			*uParam3 = { 0f, 0f, 240,9f };
			break;
		
		case 5:
			*uParam2 = { 411,1806f, -975,819f, -100,0042f };
			*uParam3 = { 0f, 0f, 227,5f };
			break;
		
		case 6:
			*uParam2 = { 414,0178f, -974,6259f, -100,0042f };
			*uParam3 = { 0f, 0f, 206,65f };
			break;
		
		case 7:
			*uParam2 = { 415,7338f, -972,9619f, -100,0042f };
			*uParam3 = { 0f, 0f, 170,775f };
			break;
		
		case 8:
			*uParam2 = { 412,1275f, -974,0275f, -100,0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 9:
			*uParam2 = { 417,3252f, -970,7984f, -100,0042f };
			*uParam3 = { 0f, 0f, 160,025f };
			break;
		
		case 10:
			*uParam2 = { 409,805f, -975,0361f, -100,0042f };
			*uParam3 = { 0f, 0f, 240,65f };
			break;
		
		case 11:
			*uParam2 = { 410,6598f, -974,3722f, -100,0042f };
			*uParam3 = { 0f, 0f, 222,15f };
			break;
		
		case 12:
			*uParam2 = { 407,5374f, -974,3933f, -100,0042f };
			*uParam3 = { 0f, 0f, 258,175f };
			break;
		
		case 13:
			*uParam2 = { 413,1881f, -969,019f, -100,0042f };
			*uParam3 = { 0f, 0f, 204,025f };
			break;
		
		case 14:
			*uParam2 = { 415,0103f, -969,1959f, -100,0042f };
			*uParam3 = { 0f, 0f, 182,35f };
			break;
	}
	uParam2->f_2 = (uParam2->f_2 - 1f);
}

void func_36(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			*uParam2 = { 2956,984f, -3866,815f, 140f };
			switch (Global_4456448.f_226026)
			{
				case 3:
					uParam2->f_2 = (uParam2->f_2 + 0,05f);
					break;
			}
			*uParam3 = { 0f, 0f, 48f };
			break;
		
		case 1:
			if (iParam4 == 0 || (func_40(uParam0->f_1[iParam4]) && iParam4 == 1))
			{
				*uParam2 = { 2966,769f, -3874,841f, 140,0011f };
				*uParam3 = { 0f, 0f, 48f };
			}
			else
			{
				*uParam2 = { func_38(uParam0, iParam1) };
				uParam2->f_2 = (uParam2->f_2 - 1f);
				*uParam3 = { 0f, 0f, func_37(iParam1) };
			}
			break;
		
		default:
			*uParam2 = { func_38(uParam0, iParam1) };
			uParam2->f_2 = (uParam2->f_2 - 1f);
			*uParam3 = { 0f, 0f, func_37(iParam1) };
			break;
	}
}

float func_37(int iParam0)
{
	if (func_53())
	{
		switch (iParam0)
		{
			case 0:
				return 203,6f;
			
			case 1:
				return 214,6f;
			
			case 2:
				return 256,8f;
			
			case 3:
				return 247,1997f;
			
			case 4:
				return 188,6f;
			
			case 5:
				return 229,199f;
			
			case 6:
				return 203,799f;
			
			case 7:
				return 212,599f;
			
			case 8:
				return 247,999f;
			
			case 9:
				return 247,999f;
			
			case 10:
				return 189,199f;
			
			case 11:
				return 213,599f;
			
			case 12:
				return 242,399f;
			
			case 13:
				return 269,599f;
			
			case 14:
				return 218,199f;
			
			case 15:
				return 266,6238f;
			
			default:
		}
		return 306,5976f;
	}
	return 0f;
}

Vector3 func_38(var uParam0, int iParam1)
{
	if (func_53())
	{
		if (func_39(uParam0))
		{
			switch (iParam1)
			{
				case 0:
					return 2828,92f, -3901,475f, 139,3957f;
					break;
				
				case 1:
					return 2829,51f, -3902,015f, 139,2491f;
					break;
				
				case 2:
					return 2828,365f, -3900,967f, 139,2491f;
					break;
			}
			return 2828,92f, -3901,475f, 139,3957f;
		}
		switch (iParam1)
		{
			case 0:
				return 2963,925f, -3870,137f, 140,082f;
			
			case 1:
				return 2963,068f, -3870,597f, 140,082f;
			
			case 2:
				return 2960,217f, -3874,703f, 140,082f;
			
			case 3:
				return 2960,612f, -3873,702f, 140,0732f;
			
			case 4:
				return 2965,272f, -3869,305f, 140,082f;
			
			case 5:
				return 2959,643f, -3871,999f, 140,082f;
			
			case 6:
				return 2964,449f, -3869,2f, 140,082f;
			
			case 7:
				return 2963,433f, -3868,566f, 140,082f;
			
			case 8:
				return 2959,914f, -3872,786f, 140,082f;
			
			case 9:
				return 2959,735f, -3873,895f, 140,075f;
			
			case 10:
				return 2965,66f, -3868,658f, 140,082f;
			
			case 11:
				return 2962,806f, -3869,486f, 140,082f;
			
			case 12:
				return 2960,431f, -3871,78f, 140,082f;
			
			case 13:
				return 2959,737f, -3875,456f, 140,082f;
			
			case 14:
				return 2961,832f, -3870,305f, 140,082f;
			
			case 15:
				return 2957,675f, -3874,198f, 140,0816f;
			
			default:
		}
		return 2828,286f, -3904,493f, 139,01f;
	}
	return 418,9326f, -979,3876f, -100,0042f;
}

bool func_39(var uParam0)
{
	return *uParam0 == 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 25:
		case 52:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
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
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
		case 84:
		case 104:
		case 85:
		case 105:
		case 86:
		case 106:
		case 67:
		case 87:
		case 68:
		case 88:
		case 69:
		case 89:
		case 70:
		case 90:
		case 71:
		case 91:
		case 72:
		case 92:
		case 73:
		case 93:
		case 74:
		case 94:
		case 75:
		case 95:
		case 76:
		case 96:
		case 77:
		case 97:
		case 78:
		case 98:
		case 79:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (iParam0 == 52)
		{
			iVar0 = -917746868;
		}
		else
		{
			return 1;
		}
		unk_0x523BCC9DC80CD82F(iVar0);
		if (!unk_0xB87F6CF6E5628C67(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if (iParam0 != 8 && iParam0 != 9)
	{
		return 1;
	}
	return unk_0xAE317D00A5A55DF6("DLC_GTAO/SNACKS", 0, -1);
}

void func_43(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (uParam0->f_448 == 0)
	{
		if (bParam3)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 2);
			if (iVar0 == 0)
			{
				uParam0->f_448 = 1;
			}
			else
			{
				uParam0->f_448 = 2;
			}
		}
		else
		{
			uParam0->f_448 = 3;
		}
	}
	switch (uParam0->f_448)
	{
		case 1:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_A", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_B", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@FEMALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_F_A", 64);
			break;
		
		case 0:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "", 64);
			break;
	}
}

void func_44(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 2:
			if (unk_0xCED082ADD3739B9F(iParam2))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 1:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
		
		case 3:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BACKSLAP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "COWERING_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "COWERING_RIGHT", 64);
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "SARCASTIC_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BRO_HUG_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
			}
			break;
	}
}

int func_45(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		vVar0 = { unk_0xD06724447386BC29(*uParam0) };
		vVar3 = { unk_0x17D61C69BA58F815(*uParam0, 2) };
		fVar6 = unk_0x86CC98177DFF41EC(*uParam0);
		unk_0x70D5C5F31B79F27C(*uParam0);
		unk_0x86F44313DFA8F00C(*uParam0, vVar0, vVar3, (fVar6 - 3f), 0, 1, 1, 2);
		unk_0x86F44313DFA8F00C(*uParam0, vVar0, vVar3, fVar6, 1500, 0, 0, 2);
		func_46(uParam0, 0,3f);
		return 1;
	}
	return 0;
}

void func_46(var uParam0, float fParam1)
{
	if (func_53())
	{
		return;
	}
	unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", fParam1);
}

void func_47(int iParam0, char* sParam1)
{
	if (*iParam0 != 0 && unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_1 != 0 && unk_0x83D8570832F172A7(iParam0->f_1))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_1, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_2 != 0 && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_2, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xC6DE3DEA8C15F7B8();
	}
	if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
	{
		unk_0xD6158AD4034B8A41(*iParam0, iParam0->f_1, 255, 255, 255, 255);
		unk_0x6567AE843FADBA94(iParam0->f_2, 255, 255, 255, 255, 0);
	}
}

void func_49()
{
	if (unk_0xED4934AFB6EC6451("MP_race_crash"))
	{
		unk_0x9A1335ECD7BD117F("MP_race_crash");
	}
	func_52(0);
	func_51(0);
	func_50(0);
	Global_2439138.f_2717.f_2 = 0;
}

void func_50(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 2);
	}
}

void func_51(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 1);
	}
	else
	{
		if (unk_0xED4934AFB6EC6451("DeathFailMPDark"))
		{
			unk_0x9A1335ECD7BD117F("DeathFailMPDark");
		}
		if (unk_0xED4934AFB6EC6451("DeathFailMPIn"))
		{
			unk_0x9A1335ECD7BD117F("DeathFailMPIn");
		}
		unk_0x4AED3E7834924DC8(0);
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 1);
	}
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9A1335ECD7BD117F("MP_race_crash");
		if (unk_0xED4934AFB6EC6451("CrossLine"))
		{
			unk_0x9A1335ECD7BD117F("CrossLine");
		}
		if (unk_0x6EB03BF238979740())
		{
			unk_0x82A772610883F395("DeathFailMPDark", 0, 0);
		}
		else
		{
			unk_0x82A772610883F395("DeathFailMPIn", 0, 0);
		}
		unk_0x4AED3E7834924DC8(1);
		Global_2439138.f_2717 = unk_0x2B6E0A53779D29EA();
		Global_2439138.f_2717.f_1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 0);
	}
}

bool func_53()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

void func_54(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
}

void func_55(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	sVar0 = func_56(iParam3);
	sVar1 = "CELEB_GAMES_WON";
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

var func_56(int iParam0)
{
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_57(&cVar0);
}

var func_57(char[4] cParam0)
{
	return cParam0;
}

int func_58(int iParam0, bool bParam1, int iParam2)
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

int func_59(int iParam0, int iParam1)
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

var func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_61(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_62(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_62(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_105(unk_0xD803B885F5E47A62()) || func_104(unk_0xD803B885F5E47A62()))
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
	else if (func_101() || func_97(unk_0xD803B885F5E47A62()))
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
	if (func_96(sParam2))
	{
	}
	if (func_95())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_94(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_93(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_90(0, &iVar1);
					break;
				
				case 3:
					func_90(1, &iVar1);
					break;
				
				case 1:
					func_86(&iVar1);
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
			func_83(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_73((func_106(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_83(1165, iVar1, -1);
				}
				func_67(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_63((func_65(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_63((func_65(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_63(int iParam0)
{
	if (func_95())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_64(-1804740956, iParam0);
	}
}

void func_64(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_65(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_66(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_66(-1804740956);
		}
	}
	return 0;
}

int func_66(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_67(int iParam0)
{
	Var0 = { func_72(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_70(func_71(&Var0));
			if (iVar13 == 0)
			{
				func_69(&Global_1387915, iParam0);
				func_68(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_69(&Global_1387916, iParam0);
				func_68(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_69(&Global_1387917, iParam0);
				func_68(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_69(&Global_1387918, iParam0);
				func_68(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_69(&Global_1387919, iParam0);
				func_68(1894078811, Global_1387919);
			}
		}
	}
}

void func_68(int iParam0, int iParam1)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_70(int iParam0)
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

int func_71(var uParam0)
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

struct<13> func_72(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_95())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_81(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_81(-1)])
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
		if (func_80(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_79(iParam0, 1);
		}
		func_78(639, iParam0, -1, 1);
		func_77(640, func_79(iParam0, 1), -1, 1, 0);
		Global_1388060[func_81(-1)] = iParam0;
		func_74(-1109644434, 7, 0);
	}
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (func_76(iParam1, iParam2))
	{
		iVar0 = func_75();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_75()
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

int func_76(int iParam0, var uParam1)
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

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_81(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_81(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_81(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_81(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_81(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_81(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_81(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_81(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_81(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_81(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_81(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_81(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_81(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_81(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_81(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_81(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_81(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_81(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_81(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_81(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_81(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_81(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_81(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_81(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_81(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_81(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_81(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_81(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_81(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_81(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_81(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_81(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_81(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_81(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_81(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_81(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_81(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_81(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_81(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_81(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_81(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_81(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_81(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_81(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_81(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_81(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_81(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_81(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_81(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_81(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_81(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_81(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_81(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_81(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_59(iParam0, 0);
}

int func_80(int iParam0)
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

int func_81(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_82();
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

int func_82()
{
	return Global_1312745;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_85(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_84(iParam0))
	{
		func_77(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_78(iParam0, iVar0, iParam2, 1);
	}
}

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_81(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_86(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_89(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_88(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_87(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_87(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_87(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_88(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_72(iParam0) };
		Global_2513231 = { func_72(iParam1) };
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

int func_89(int iParam0, int iParam1, int iParam2)
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

void func_90(bool bParam0, int iParam1)
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
				if (func_23(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_88(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_23(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_91(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_88(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_87(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_87(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_91(int iParam0, int iParam1)
{
	return vdist(func_92(iParam0), func_92(iParam1));
	return 0f;
}

Vector3 func_92(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_93(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_87(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_94(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_106(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_106(unk_0xD803B885F5E47A62());
		}
	}
	if (func_58(8000, 0, 0) > 0)
	{
		if (func_58(8000, 0, 0) < (iParam0 + func_106(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_58(8000, 0, 0) - func_106(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_95()
{
	return 1;
}

int func_96(char* sParam0)
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

int func_97(int iParam0)
{
	return func_98(func_99(iParam0));
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_100(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_100(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_103();
	}
	return func_102(Global_4456448.f_194990);
}

int func_102(int iParam0)
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

bool func_103()
{
	return Global_2450632.f_17;
}

bool func_104(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_105(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_106(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_81(-1)];
			}
			else if (func_80(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_81(-1)];
	}
	return 0;
}

void func_107(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_118())
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
		if (!func_889())
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
				else if (bVar14 || (!func_116(unk_0xD803B885F5E47A62(), 0) && !func_115()))
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
					func_112(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_111(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_110();
					func_109();
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
				if (!func_111(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_108(Global_4456448.f_232883))
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

bool func_108(int iParam0)
{
	return iParam0 == 17;
}

void func_109()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_110()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_111(int iParam0)
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

void func_112(int iParam0, int iParam1, int iParam2)
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
				func_114();
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
		if (func_116(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_113(-2008016205, iParam0);
	}
}

void func_113(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_114()
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

bool func_115()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_116(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_82();
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

int func_118()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_119(bool bParam0)
{
	if (!bParam0)
	{
		func_121(0);
	}
	func_751();
	func_120();
}

void func_120()
{
	Global_73828 = 1;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_125())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
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
	if (!func_122())
	{
		Global_19486.f_1 = 3;
	}
}

int func_122()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0))
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

int func_124(int iParam0)
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

bool func_125()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_126()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_127(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4)
{
	if (func_23(unk_0xD803B885F5E47A62(), 1, 1))
	{
		bVar23 = true;
		if (bParam3)
		{
			if (iParam0->f_436 == 0)
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (iParam0->f_420 < 6)
			{
				if (iParam0->f_421 == 0)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,305f, 3,404f, 1,873f };
					vVar11 = { 0,3318f, 0,6829f, 0,782f };
					fVar17 = 48,872f;
				}
				else if (iParam0->f_421 == 1)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,3027f, 1,9371f, 0,8861f };
					vVar11 = { 0,7526f, -0,7846f, 0,1942f };
					fVar17 = 49,9607f;
				}
				else if (iParam0->f_421 == 2)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,3685f, 5,6646f, 3,8144f };
					vVar11 = { 0,3407f, 3,2028f, 2,2534f };
					fVar17 = 49,9607f;
				}
				else if (iParam0->f_421 == 3)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,551f, 1,5299f, 0,0099f };
					vVar11 = { 1,1136f, -0,8876f, 0,6298f };
					fVar17 = 40,5195f;
				}
				else if (iParam0->f_421 == 4)
				{
					vVar14 = { -0,6761f, 2,3219f, 0,3315f };
					vVar8 = { 0,1252f, 1,692f, 0,0052f };
					vVar11 = { -0,9193f, -1,0597f, 0,5854f };
					fVar17 = 40,5195f;
				}
				else if (iParam0->f_421 == 5)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,098f, 1,4671f, 0,0645f };
					vVar11 = { 0,3334f, -1,4352f, 0,6893f };
					fVar17 = 40,5195f;
				}
			}
			else
			{
				*uParam2 = 0;
				iParam0->f_436 = 0;
				iParam0->f_420 = 0;
				return 1;
			}
		}
		else
		{
			if (iParam0->f_436 == 0)
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (!func_131(unk_0x16F2683693E537C9()))
			{
				fVar18 = -0,09f;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar24 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				iVar25 = unk_0x134B62B726CEC8E6(iVar24);
				if (unk_0xAD09C9A4B56FA133(iVar25))
				{
					bVar23 = false;
					bVar21 = true;
				}
			}
			else
			{
				bVar23 = false;
			}
			if (bVar23 && iParam4)
			{
				if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 7);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (!func_129(iParam0, fVar19, fVar18, bVar21, (iParam4 && bVar23), &vVar14, &vVar8, &vVar11, &fVar17, &bVar22, &bVar20))
			{
				*uParam2 = 0;
				iParam0->f_436 = 0;
				iParam0->f_420 = 0;
				return 1;
			}
			if (bVar23 && iParam4)
			{
				bVar23 = false;
			}
		}
		vVar26 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar8) };
		vVar29 = { vVar26 };
		vVar32 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		vVar35 = { unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9()) };
		fVar38 = vmag(vVar35);
		if (unk_0x755FF954DAE327E1(fVar38) > 0,5f)
		{
			vVar39 = { vVar35 / Vector(fVar38, fVar38, fVar38) };
			vVar29 = { vVar26 + vVar39 };
		}
		if (iParam0->f_436 == 0)
		{
			iVar42 = 343;
			iParam0->f_436 = unk_0xD7C553FB028E03E7(vVar29, vVar32, 0,25f, iVar42, unk_0x16F2683693E537C9(), 7);
		}
		else
		{
			iVar43 = unk_0x1EC301670B54C6DE(iParam0->f_436, &iVar0, &uVar1, &uVar4, &uVar7);
			switch (iVar43)
			{
				case 2:
					iParam0->f_436 = 0;
					if (iVar0 > 0)
					{
						iParam0->f_420++;
					}
					else if (((((!bVar23 && !unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) && !unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9()))
					{
						unk_0xE82754C349C7B581(vVar32, &fVar44, 0, 0);
						unk_0xE82754C349C7B581(vVar26, &fVar45, 0, 0);
						if (unk_0x755FF954DAE327E1((fVar44 - fVar45)) > 5f)
						{
							iParam0->f_420++;
						}
						else
						{
							if (!unk_0x9F4FE516EAACCFC5(*uParam1))
							{
								*uParam1 = unk_0x92B061D59B9B540A(26379945, 1);
							}
							unk_0x70D5C5F31B79F27C(*uParam1);
							if (!func_128(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xC5940439E4EB9A33(*uParam1, unk_0x16F2683693E537C9(), vVar8, 1);
							}
							unk_0x1305278186D1C53E(*uParam1, unk_0x16F2683693E537C9(), vVar11, 1);
							unk_0x5818C8D5303DCCF8(*uParam1, fVar17);
							func_46(uParam1, 0,3f);
							unk_0xDC3CC6D1845B0567(*uParam1, 0,15f);
							if (!bVar22)
							{
								if (bVar20)
								{
									unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar14), 20000, 2048, 2);
								}
								else
								{
									unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar14), 20000, 10240, 2);
								}
							}
							*uParam2 = 1;
							iParam0->f_420 = 0;
							return 1;
						}
					}
					else
					{
						iParam0->f_420++;
					}
					break;
				
				case 0:
					iParam0->f_436 = 0;
					iParam0->f_420++;
					break;
				}
		}
	}
	else
	{
		*uParam2 = 0;
		iParam0->f_420 = 0;
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_115())
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

int func_129(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9, var uParam10)
{
	if (bParam3)
	{
		if (uParam0->f_420 < 6)
		{
			if (uParam0->f_421 == 0)
			{
				*uParam6 = { 0,3792f, 1,6661f, 0,253f };
				*uParam7 = { -0,1166f, -1,2463f, 0,7746f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 1)
			{
				*uParam6 = { 0,8206f, 2,4757f, -0,14f };
				*uParam7 = { 0,0702f, -0,392f, 0,3218f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 2)
			{
				*uParam6 = { -0,5169f, 2,6701f, 0,1763f };
				*uParam7 = { -0,1689f, -0,3063f, 0,3164f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 3)
			{
				*uParam6 = { -1,7521f, 1,9222f, 0,2656f };
				*uParam7 = { 0,3639f, -0,2033f, 0,2015f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 4)
			{
				*uParam6 = { -1,1718f, 1,6414f, 0,7172f };
				*uParam7 = { 1,3122f, 0,1011f, 0,0411f };
				*fParam8 = 32,6085f;
				return 1;
			}
			else if (uParam0->f_421 == 5)
			{
				*uParam6 = { -0,0185f, 1,7642f, 0,4961f };
				*uParam7 = { 0,6648f, -1,1468f, 0,2534f };
				*fParam8 = 35,6186f;
				return 1;
			}
		}
	}
	else if (bParam4)
	{
		if (uParam0->f_420 < 6)
		{
			if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) || func_130(unk_0x16F2683693E537C9()))
			{
				switch ((uParam0->f_421 % 7))
				{
					case 0:
						*uParam6 = { -0,45f, 2,5f, 0,35f };
						*uParam7 = { 0,3f, 0f, 0,45f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1,1f, 2,5f, 0,05f };
						*uParam7 = { -0,3f, 0f, 0,5f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1,45f, 2,15f, 0,05f };
						*uParam7 = { 0,5f, 0f, 0,5f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { -0,175f, 1,1f, 0,788f };
						*uParam7 = { 0,063f, 0f, 0,466f };
						*fParam8 = 37,8f;
						break;
					
					case 4:
						*uParam6 = { 1,6f, 1,338f, 0,688f };
						*uParam7 = { 0,025f, 0f, 0,416f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -1,013f, 0,726f, 0,813f };
						*uParam7 = { -0,05f, 0f, 0,441f };
						*fParam8 = 37,8f;
						break;
					
					case 6:
						*uParam6 = { 1,038f, 1,376f, 0,826f };
						*uParam7 = { -0,05f, 0f, 0,466f };
						*fParam8 = 26f;
						break;
				}
			}
			else
			{
				switch ((uParam0->f_421 % 6))
				{
					case 0:
						*uParam6 = { -0,45f, 2,5f, 0,35f };
						*uParam7 = { 0,3f, 0f, 0,263f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1,1f, 2,5f, 0,05f };
						*uParam7 = { -0,3f, 0f, 0,375f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1,45f, 2,15f, 0,05f };
						*uParam7 = { 0,5f, 0f, 0,375f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { 0,388f, 2,489f, 0,4f };
						*uParam7 = { -0,287f, 0f, 0,304f };
						*fParam8 = 26f;
						break;
					
					case 4:
						*uParam6 = { 0,388f, 2,177f, -0,575f };
						*uParam7 = { -0,237f, 0f, 0,617f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -0,575f, 1,901f, -0,112f };
						*uParam7 = { 0,275f, 0f, 0,516f };
						*fParam8 = 26f;
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
	{
		*uParam9 = 1;
		if (unk_0xD997DD51E6A0DBE5(unk_0x16F2683693E537C9()))
		{
			if (uParam0->f_420 < 6)
			{
				if (uParam0->f_421 == 0)
				{
					*uParam6 = { -0,5356f, 1,4423f, 0,3999f };
					*uParam7 = { 0,9181f, -1,1788f, 0,5275f };
					*fParam8 = 29,2736f;
					return 1;
				}
				else if (uParam0->f_421 == 1)
				{
					*uParam6 = { 0,0181f, 1,4527f, 0,4043f };
					*uParam7 = { -0,1861f, -1,5314f, 0,6351f };
					*fParam8 = 29,2736f;
					return 1;
				}
				else if (uParam0->f_421 == 2)
				{
					*uParam6 = { -0,5997f, 1,0214f, 0,417f };
					*uParam7 = { 1,4133f, -1,1792f, 0,7419f };
					*fParam8 = 29,2736f;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (uParam0->f_420 < 6)
		{
			if (uParam0->f_421 > 2)
			{
				uParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
			}
			if (uParam0->f_421 == 0)
			{
				*uParam6 = { -0,5893f, 1,4073f, -0,09f };
				*uParam7 = { 0,8156f, -1,2407f, -0,2103f };
				*fParam8 = 31,7183f;
				return 1;
			}
			else if (uParam0->f_421 == 1)
			{
				*uParam6 = { -0,003f, 1,4062f, -0,096f };
				*uParam7 = { -0,5691f, -1,5399f, -0,1137f };
				*fParam8 = 31,7183f;
				return 1;
			}
			else if (uParam0->f_421 == 2)
			{
				*uParam6 = { -0,6984f, 1,1364f, -0,0971f };
				*uParam7 = { 1,2011f, -1,1855f, -0,1149f };
				*fParam8 = 31,7183f;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		if (!unk_0x182C501E11FA2132(unk_0x16F2683693E537C9()))
		{
			*uParam6 = (*uParam6 * -1f);
			*uParam7 = (*uParam7 * -1f);
		}
	}
	else if (uParam0->f_420 < 6)
	{
		if (uParam0->f_421 == 0)
		{
			*uParam5 = { 1,3494f, 0,8708f, 0,3814f };
			*uParam6 = { 0,6428f, (1,0178f + fParam1), (0,0411f + fParam2) };
			*uParam7 = { -0,3699f, (-1,5251f + fParam1), (1,2691f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
		else if (uParam0->f_421 == 1)
		{
			*uParam5 = { 0,2657f, 1,3743f, 0,364f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0,6768f, (0,9824f + fParam1), (0,1864f + fParam2) };
			*uParam7 = { -1,3043f, (-1,0657f + fParam1), (1,1243f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 2)
		{
			*uParam5 = { 0,5182f, 1,1454f, 0,4312f };
			*uParam6 = { 0,2419f, (1,1082f + fParam1), (0,5226f + fParam2) };
			*uParam7 = { 0,1327f, (-1,8846f + fParam1), (0,6999f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
		else if (uParam0->f_421 == 3)
		{
			*uParam5 = { 0,4529f, 1,0868f, 0,365f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0,6216f, (0,9493f + fParam1), (0,4129f + fParam2) };
			*uParam7 = { -1,4273f, (-1,1768f + fParam1), (0,9439f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 4)
		{
			*uParam5 = { 1,3811f, 1,7491f, 0,296f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 1,7091f, (1,1087f + fParam1), (0,3014f + fParam2) };
			*uParam7 = { -1,0311f, (-0,1093f + fParam1), (0,3918f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 5)
		{
			*uParam5 = { 1,3494f, 0,8708f, 0,3814f };
			*uParam6 = { 0,7036f, (1,7661f + fParam1), (0,2981f + fParam2) };
			*uParam7 = { 0,2668f, (-1,2009f + fParam1), (0,377f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0) || !unk_0x405E212DDE472467(iParam0, 0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(iParam0, 0));
	if (unk_0x83496B932152D4D4(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == -1667301416)
	{
		iVar1 = func_137(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_133(iVar0, iVar1, 6, 4);
			iVar3 = func_132(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -474018129, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x1A5A491D253EA7BA(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_136(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_134(iParam0, func_135(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_135(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xC578687D5A643830(iVar38, &Var21);
			if (!unk_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
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
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_137(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_135(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_138(iParam0, iVar1, iVar2, iParam1);
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_135(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_139(int iParam0)
{
	iParam0->f_435 = 0;
	iParam0->f_418 = 0;
	iParam0->f_419 = 0;
	iParam0->f_436 = 0;
	iParam0->f_425 = 0;
	iParam0->f_426 = 0;
	iParam0->f_1208 = 0;
	func_25(&(iParam0->f_429));
	func_25(&(iParam0->f_431));
	if (unk_0xC844350D5D58C99A(iParam0->f_20))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_20));
	}
}

void func_140(int iParam0)
{
	iParam0->f_452 = 0;
	Global_1312798 = 0;
	func_25(&(iParam0->f_453));
	if (unk_0xED4934AFB6EC6451("MP_Celeb_Preload_Fade"))
	{
		unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
	}
}

void func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (func_144())
	{
		return;
	}
	if ((func_143() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_142(0);
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

void func_142(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_143()
{
	return Global_1312467.f_20;
}

int func_144()
{
	if (func_145())
	{
		return Global_2460590;
	}
	return 0;
}

int func_145()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

void func_146(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_147(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_103())
	{
		iParam3 = 1;
	}
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
}

void func_148(int iParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam2 == 0)
	{
		if (bParam9)
		{
			sVar0 = "CELEB_FINCOMP";
		}
		else if (bParam8)
		{
			sVar0 = "CELEB_WINNERS";
		}
		else
		{
			sVar0 = "CELEB_WINNER";
		}
	}
	else if (iParam2 == 1)
	{
		sVar0 = "CELEB_LOSER";
	}
	else if (iParam2 == 3)
	{
		sVar0 = "CELEB_PASSED";
	}
	else if (iParam2 == 4)
	{
		sVar0 = "CELEB_FAILED";
	}
	else
	{
		sVar0 = "CELEB_DRAW";
		sParam3 = "";
		sParam4 = "";
	}
	if (!func_150() || !func_152(unk_0xD803B885F5E47A62()))
	{
		sParam4 = "";
	}
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_149(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	func_149(sParam3);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_149(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_149(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
}

void func_149(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_150()
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	if (unk_0xBA301E03A078FA59())
	{
		if (unk_0xB5E18209CA3E7DE6(1, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x4DEB7B48DD0AABA4(1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (unk_0x05449BDA851F5199(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK";
	}
	if (func_103())
	{
		if (Global_2451426.f_3473)
		{
			sParam2 = "HUD_COLOUR_TECH_GREEN_VERY_DARK";
		}
	}
	func_47(iParam0, sParam1);
	unk_0x9ECFFAD42511CB5A(10);
	if (*iParam0 != 0 && unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_1 != 0 && unk_0x83D8570832F172A7(iParam0->f_1))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_1, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_2 != 0 && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_2, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_152(int iParam0)
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0, -3, 1) || unk_0xB5E18209CA3E7DE6(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_72(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0, -1) || (unk_0xB5E18209CA3E7DE6(1, -1) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153()
{
	if (unk_0xBA301E03A078FA59() && unk_0x26F0988F7719D17A() == 3)
	{
		return 1;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x26F0988F7719D17A() == 3)
	{
		return 1;
	}
	if (unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0)
	{
		return 1;
	}
	if (unk_0xDC30EF462887322E() && unk_0x9AE561F9BC3F06D8() == 0)
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	return 0;
}

struct<16> func_154(int iParam0)
{
	if (func_23(iParam0, 0, 1))
	{
		Var16 = { func_72(iParam0) };
		if (func_157(&Var16))
		{
			Var29 = { func_155(iParam0) };
			Var0 = { Var29.f_1 };
		}
	}
	return Var0;
}

struct<35> func_155(int iParam0)
{
	if (func_156(iParam0))
	{
		return Global_1312909[unk_0xD803B885F5E47A62()];
	}
	Var0 = { func_72(iParam0) };
	unk_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

int func_156(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_157(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_158(int iParam0)
{
	if (!iParam0->f_1205)
	{
		iParam0->f_1205 = 1;
	}
}

int func_159(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	iParam0->f_419 = (iParam0->f_419 - 30);
	if (iParam0->f_419 < 0)
	{
		iParam0->f_419 = 0;
	}
	if (iParam0->f_419 != 0)
	{
		unk_0xD9ACBBA59FD5A09E(7);
		unk_0xC1032CAC14DE468A(0,5f, 0,5f, 3f, 3f, iVar0, iVar1, iVar2, iParam0->f_419, 0);
	}
	if (iParam0->f_419 <= 0)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xC6DE3DEA8C15F7B8();
	}
	if (unk_0x15B7983D0EB30E49())
	{
		if (unk_0xF227AB5FFC5E7C36("CELEBRATION_WINNER"))
		{
			if (!unk_0xEB6A8945D1AC98A1(*uParam1))
			{
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
			}
			unk_0xD9ACBBA59FD5A09E(1);
			unk_0xC1032CAC14DE468A(0,5f, 0,5f, 1,5f, 1,5f, 0, 0, 0, 255, 0);
			if (bParam2)
			{
				unk_0xD9ACBBA59FD5A09E(7);
			}
			unk_0xD6158AD4034B8A41(*iParam0, iParam0->f_1, 255, 255, 255, 255);
			unk_0xD9ACBBA59FD5A09E(7);
			unk_0x6567AE843FADBA94(iParam0->f_2, 255, 255, 255, 255, 0);
		}
	}
}

void func_161(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_750();
		func_163(1, 0, 1, 0);
		unk_0x5413873D3F67BF93(true, 0);
	}
	else
	{
		if (bParam1)
		{
			func_162();
			func_163(0, 0, 1, 0);
		}
		unk_0x5413873D3F67BF93(false, 0);
	}
	Global_1662006 = bParam0;
	if (bParam0 == 0)
	{
		Global_1662008 = 0;
	}
}

void func_162()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_164(int iParam0)
{
	if (!func_12(&(iParam0->f_433)))
	{
		func_8(&(iParam0->f_433), 0, 0);
	}
	else if (func_7(&(iParam0->f_433), 10000, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam2)
	{
		StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
		StringCopy(sParam4, "finger", 64);
		return;
	}
	if (bParam7)
	{
		StringCopy(sParam3, "ANIM@MP_JUGGERNAUT@", 64);
		StringCopy(sParam4, "Idle_Intro", 64);
		return;
	}
	switch (iParam5)
	{
		case 1:
			switch (iParam6)
			{
				case 0:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 3:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 5:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(sParam4, "rock", 64);
					break;
				
				case 3:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
				
				case 4:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 6:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					break;
				
				case 7:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					break;
				
				case 8:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					break;
				
				case 9:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					break;
				
				case 10:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					break;
				
				case 11:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					break;
				
				case 12:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					break;
				
				case 13:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					break;
				
				case 52:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					break;
				
				case 14:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					break;
				
				case 15:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					break;
				
				case 16:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					break;
				
				case 17:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					break;
				
				case 18:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					break;
				
				case 19:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					break;
				
				case 20:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					break;
				
				case 21:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					break;
				
				case 22:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					break;
				
				case 23:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					break;
				
				case 26:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					break;
				
				case 24:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					break;
				
				case 25:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					break;
				
				case 27:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					break;
				
				case 28:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					break;
				
				case 30:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 29:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 31:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 32:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					break;
				
				case 33:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					break;
				
				case 34:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					break;
				
				case 35:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					break;
				
				case 36:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					break;
				
				case 37:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					break;
				
				case 38:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					break;
				
				case 39:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					break;
				
				case 40:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					break;
				
				case 41:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					break;
				
				case 42:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					break;
				
				case 43:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					break;
				
				case 44:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					break;
				
				case 45:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					break;
				
				case 46:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					break;
				
				case 47:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					break;
				
				case 48:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					break;
				
				case 49:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					break;
				
				case 50:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					break;
				
				case 51:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					break;
				
				case 55:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					break;
				
				default:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
			}
			break;
		
		default:
			StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
			StringCopy(sParam4, "salute", 64);
			break;
	}
}

int func_166(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_20))
	{
		return 1;
	}
	else
	{
		vVar0 = { unk_0xF1EE614CA05DDE75() };
		vVar3 = { vVar0.x, vVar0.y, 1320f };
		if (iParam3 != 0)
		{
			func_184(&(iParam0->f_20), iParam3, vVar3, 0f, -1, 0, 1);
		}
		else
		{
			iVar7 = unk_0x9539D44F3E4492F6(iParam2);
			if (unk_0xEB6A8945D1AC98A1(iVar7))
			{
				iParam2 = unk_0xD803B885F5E47A62();
				iVar7 = unk_0x16F2683693E537C9();
			}
			bVar6 = func_168(iVar7, Global_2425662[iParam2].f_249, Global_2425662[iParam2].f_250, 1, 0, 0);
			func_184(&(iParam0->f_20), iVar7, vVar3, 0f, iParam2, bVar6, 1);
			unk_0xDCDFC17557D5706C(iParam0->f_20, func_167(Global_1590535[iParam2].f_272), 0);
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_20))
		{
			unk_0xA47B46945FF6DE74(iParam0->f_20, vVar3 + Vector(-2,85f, -0,26f, (20f + IntToFloat(unk_0xD803B885F5E47A62()))), 1, false, 0, 1);
			unk_0xC023D1C4BF532815(iParam0->f_20, 0f, 0f, 0f, 2, 1);
			unk_0x1E9649458B15960F(iParam0->f_20, true);
			if (unk_0xCED082ADD3739B9F(iParam0->f_20))
			{
				unk_0xC6EB89C59F2AF6B8(iParam0->f_20, "move_m@generic", "idle", 1000f, -1,5f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(iParam0->f_20, "move_f@generic", "idle", 1000f, -1,5f, -1, 9, 0, 0, 0, 0);
			}
			unk_0xDBE4EC9C88839074(iParam0->f_20, unk_0x68E4ADDDDCD7BDDE(iParam0->f_20, 0,7866f, 2,2904f, 0,7608f), -1, 2048, 2);
			unk_0xF895E10BF4C72645(iParam0->f_20, 0, 0);
			unk_0x11AD11297DC58CC7(iParam0->f_20, true);
		}
		if (!unk_0x9F4FE516EAACCFC5(*uParam1))
		{
			*uParam1 = unk_0x92B061D59B9B540A(26379945, 1);
		}
		unk_0x70D5C5F31B79F27C(*uParam1);
		unk_0x608A456FDD8A83D8(*uParam1, vVar3);
		unk_0x5F3CBA6EB9341C90(*uParam1, 0f, 0f, 0f, 2);
		unk_0x5818C8D5303DCCF8(*uParam1, 45f);
		func_46(uParam1, 0,05f);
		unk_0xDC3CC6D1845B0567(*uParam1, 0,01f);
		if (!unk_0x9CF8D5C7090408A2(*uParam1))
		{
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		}
		return 1;
	}
	return 0;
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_Aiming_1";
		
		case 1:
			return "mood_Angry_1";
		
		case 2:
			return "mood_Happy_1";
		
		case 3:
			return "mood_Injured_1";
		
		case 4:
			return "mood_Normal_1";
		
		case 5:
			return "mood_stressed_1";
		
		case 6:
			return "mood_smug_1";
		
		case 7:
			return "mood_sulk_1";
		
		default:
	}
	return "mood_Normal_1";
}

int func_168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_183())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 6;
	if (iParam1 == 0)
	{
		iVar22 = 3;
	}
	else if (bParam3)
	{
		iVar22 = 1;
	}
	else if (bParam4)
	{
		iVar22 = 2;
	}
	else
	{
		iVar22 = 0;
	}
	func_176(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == -1667301416)
		{
			iVar19 = func_175(iParam0);
			if (!iVar19 == -1)
			{
				if (func_174(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_173(iParam0);
			if (!iVar20 == -1)
			{
				if (func_171(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			iVar21 = func_170(iParam0);
			if (!iVar21 == 0)
			{
				if (func_169(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169(var uParam0, int iParam1)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 1);
	return iVar0;
}

bool func_171(var uParam0, int iParam1)
{
	return func_172(uParam0, iParam1);
}

int func_172(var uParam0, int iParam1)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

bool func_174(var uParam0, int iParam1)
{
	return func_172(uParam0, iParam1);
}

int func_175(int iParam0)
{
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_182(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_181(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 13, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 1:
							func_180(uParam3, 4, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 2:
							func_180(uParam3, 13, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 39, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 38, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 62, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_182(uParam4, 136, 1);
							func_182(uParam4, 138, 1);
							func_182(uParam4, 139, 1);
							func_182(uParam4, 143, 1);
							func_182(uParam4, 144, 1);
							func_182(uParam4, 145, 1);
							func_182(uParam4, 147, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 1:
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 2:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_182(uParam4, 136, 1);
							func_182(uParam4, 138, 1);
							func_182(uParam4, 139, 1);
							func_182(uParam4, 143, 1);
							func_182(uParam4, 144, 1);
							func_182(uParam4, 145, 1);
							func_182(uParam4, 147, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
					}
					break;
				
				case 52:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 66, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 77, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 53:
					func_180(uParam3, 67, 1);
					func_180(uParam3, 68, 1);
					func_180(uParam3, 69, 1);
					func_180(uParam3, 70, 1);
					func_180(uParam3, 71, 1);
					func_180(uParam3, 72, 1);
					func_180(uParam3, 73, 1);
					func_180(uParam3, 74, 1);
					func_180(uParam3, 78, 1);
					func_180(uParam3, 79, 1);
					func_180(uParam3, 80, 1);
					func_180(uParam3, 81, 1);
					func_180(uParam3, 82, 1);
					func_180(uParam3, 91, 1);
					func_180(uParam3, 92, 1);
					func_178(uParam2, 66, 1);
					func_178(uParam2, 67, 1);
					func_178(uParam2, 68, 1);
					func_178(uParam2, 69, 1);
					func_178(uParam2, 70, 1);
					func_178(uParam2, 71, 1);
					func_178(uParam2, 72, 1);
					func_178(uParam2, 73, 1);
					func_178(uParam2, 77, 1);
					func_178(uParam2, 78, 1);
					func_178(uParam2, 79, 1);
					func_178(uParam2, 80, 1);
					func_178(uParam2, 81, 1);
					func_178(uParam2, 90, 1);
					func_178(uParam2, 91, 1);
					func_180(uParam3, 38, 1);
					func_180(uParam3, 47, 1);
					func_180(uParam3, 111, 1);
					func_178(uParam2, 37, 1);
					func_178(uParam2, 46, 1);
					func_178(uParam2, 110, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_177(uParam2, uParam3, uParam4);
					break;
				
				case 54:
					func_180(uParam3, 67, 1);
					func_180(uParam3, 68, 1);
					func_180(uParam3, 69, 1);
					func_180(uParam3, 70, 1);
					func_180(uParam3, 71, 1);
					func_180(uParam3, 72, 1);
					func_180(uParam3, 73, 1);
					func_180(uParam3, 74, 1);
					func_180(uParam3, 78, 1);
					func_180(uParam3, 79, 1);
					func_180(uParam3, 80, 1);
					func_180(uParam3, 81, 1);
					func_180(uParam3, 82, 1);
					func_180(uParam3, 91, 1);
					func_180(uParam3, 92, 1);
					func_178(uParam2, 66, 1);
					func_178(uParam2, 67, 1);
					func_178(uParam2, 68, 1);
					func_178(uParam2, 69, 1);
					func_178(uParam2, 70, 1);
					func_178(uParam2, 71, 1);
					func_178(uParam2, 72, 1);
					func_178(uParam2, 73, 1);
					func_178(uParam2, 77, 1);
					func_178(uParam2, 78, 1);
					func_178(uParam2, 79, 1);
					func_178(uParam2, 80, 1);
					func_178(uParam2, 81, 1);
					func_178(uParam2, 90, 1);
					func_178(uParam2, 91, 1);
					func_180(uParam3, 38, 1);
					func_180(uParam3, 47, 1);
					func_180(uParam3, 111, 1);
					func_178(uParam2, 37, 1);
					func_178(uParam2, 46, 1);
					func_178(uParam2, 110, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_177(uParam2, uParam3, uParam4);
					break;
				
				case 55:
					func_180(uParam3, 67, 1);
					func_180(uParam3, 68, 1);
					func_180(uParam3, 69, 1);
					func_180(uParam3, 70, 1);
					func_180(uParam3, 71, 1);
					func_180(uParam3, 72, 1);
					func_180(uParam3, 73, 1);
					func_180(uParam3, 74, 1);
					func_180(uParam3, 78, 1);
					func_180(uParam3, 79, 1);
					func_180(uParam3, 80, 1);
					func_180(uParam3, 81, 1);
					func_180(uParam3, 82, 1);
					func_180(uParam3, 91, 1);
					func_180(uParam3, 92, 1);
					func_178(uParam2, 66, 1);
					func_178(uParam2, 67, 1);
					func_178(uParam2, 68, 1);
					func_178(uParam2, 69, 1);
					func_178(uParam2, 70, 1);
					func_178(uParam2, 71, 1);
					func_178(uParam2, 72, 1);
					func_178(uParam2, 73, 1);
					func_178(uParam2, 77, 1);
					func_178(uParam2, 78, 1);
					func_178(uParam2, 79, 1);
					func_178(uParam2, 80, 1);
					func_178(uParam2, 81, 1);
					func_178(uParam2, 90, 1);
					func_178(uParam2, 91, 1);
					func_180(uParam3, 38, 1);
					func_180(uParam3, 47, 1);
					func_180(uParam3, 111, 1);
					func_178(uParam2, 37, 1);
					func_178(uParam2, 46, 1);
					func_178(uParam2, 110, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_177(uParam2, uParam3, uParam4);
					break;
				
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 3, 1);
							func_180(uParam3, 4, 1);
							func_180(uParam3, 6, 1);
							func_180(uParam3, 10, 1);
							func_180(uParam3, 54, 1);
							func_180(uParam3, 55, 1);
							func_180(uParam3, 56, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 20, 1);
							func_180(uParam3, 26, 1);
							func_180(uParam3, 27, 1);
							func_180(uParam3, 32, 1);
							func_180(uParam3, 33, 1);
							func_180(uParam3, 37, 1);
							func_180(uParam3, 39, 1);
							func_180(uParam3, 55, 1);
							func_180(uParam3, 106, 1);
							func_180(uParam3, 114, 1);
							func_180(uParam3, 116, 1);
							func_180(uParam3, 117, 1);
							func_180(uParam3, 118, 1);
							func_180(uParam3, 119, 1);
							func_178(uParam2, 3, 1);
							func_178(uParam2, 4, 1);
							func_178(uParam2, 6, 1);
							func_178(uParam2, 8, 1);
							func_178(uParam2, 9, 1);
							func_178(uParam2, 10, 1);
							func_178(uParam2, 53, 1);
							func_178(uParam2, 56, 1);
							func_178(uParam2, 55, 1);
							func_178(uParam2, 13, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 21, 1);
							func_178(uParam2, 26, 1);
							func_178(uParam2, 27, 1);
							func_178(uParam2, 28, 1);
							func_178(uParam2, 32, 1);
							func_178(uParam2, 36, 1);
							func_178(uParam2, 38, 1);
							func_178(uParam2, 55, 1);
							func_178(uParam2, 14, 1);
							func_178(uParam2, 105, 1);
							func_178(uParam2, 113, 1);
							func_178(uParam2, 114, 1);
							func_178(uParam2, 115, 1);
							func_178(uParam2, 116, 1);
							func_178(uParam2, 117, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_180(uParam3, 3, 1);
							func_180(uParam3, 4, 1);
							func_180(uParam3, 6, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 19, 1);
							func_180(uParam3, 20, 1);
							func_180(uParam3, 26, 1);
							func_180(uParam3, 27, 1);
							func_180(uParam3, 32, 1);
							func_180(uParam3, 33, 1);
							func_180(uParam3, 37, 1);
							func_180(uParam3, 39, 1);
							func_180(uParam3, 55, 1);
							func_180(uParam3, 106, 1);
							func_180(uParam3, 114, 1);
							func_180(uParam3, 116, 1);
							func_180(uParam3, 117, 1);
							func_180(uParam3, 118, 1);
							func_180(uParam3, 119, 1);
							func_178(uParam2, 3, 1);
							func_178(uParam2, 4, 1);
							func_178(uParam2, 6, 1);
							func_178(uParam2, 8, 1);
							func_178(uParam2, 9, 1);
							func_178(uParam2, 10, 1);
							func_178(uParam2, 53, 1);
							func_178(uParam2, 56, 1);
							func_178(uParam2, 55, 1);
							func_178(uParam2, 11, 1);
							func_178(uParam2, 13, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 21, 1);
							func_178(uParam2, 22, 1);
							func_178(uParam2, 54, 1);
							func_178(uParam2, 26, 1);
							func_178(uParam2, 27, 1);
							func_178(uParam2, 28, 1);
							func_178(uParam2, 30, 1);
							func_178(uParam2, 31, 1);
							func_178(uParam2, 32, 1);
							func_178(uParam2, 36, 1);
							func_178(uParam2, 38, 1);
							func_178(uParam2, 55, 1);
							func_178(uParam2, 14, 1);
							func_178(uParam2, 105, 1);
							func_178(uParam2, 113, 1);
							func_178(uParam2, 114, 1);
							func_178(uParam2, 115, 1);
							func_178(uParam2, 116, 1);
							func_178(uParam2, 117, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 39, 1);
							func_180(uParam3, 106, 1);
							func_180(uParam3, 114, 1);
							func_180(uParam3, 116, 1);
							func_180(uParam3, 117, 1);
							func_180(uParam3, 118, 1);
							func_180(uParam3, 119, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 38, 1);
							func_178(uParam2, 14, 1);
							func_178(uParam2, 105, 1);
							func_178(uParam2, 113, 1);
							func_178(uParam2, 114, 1);
							func_178(uParam2, 115, 1);
							func_178(uParam2, 116, 1);
							func_178(uParam2, 117, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 19, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_177(uParam2, uParam3, uParam4);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 2:
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_182(uParam4, 115, 1);
							func_182(uParam4, 116, 1);
							func_177(uParam2, uParam3, uParam4);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 4, 1);
							break;
						
						case 1:
							func_182(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_182(uParam4, 110, 1);
							func_182(uParam4, 112, 1);
							func_177(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 6, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 1:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 6, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 2:
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 5, 1);
							func_182(uParam4, 6, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 3, 1);
							func_180(uParam3, 7, 1);
							func_180(uParam3, 0, 1);
							func_180(uParam3, 12, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 15, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 17, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 20, 1);
							func_180(uParam3, 21, 1);
							func_180(uParam3, 25, 1);
							func_180(uParam3, 26, 1);
							func_180(uParam3, 27, 1);
							func_180(uParam3, 30, 1);
							func_180(uParam3, 31, 1);
							func_180(uParam3, 32, 1);
							func_180(uParam3, 33, 1);
							func_180(uParam3, 39, 1);
							func_180(uParam3, 37, 1);
							func_178(uParam2, 0, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 3, 1);
							func_178(uParam2, 4, 1);
							func_178(uParam2, 6, 1);
							func_178(uParam2, 7, 1);
							func_178(uParam2, 8, 1);
							func_178(uParam2, 11, 1);
							func_178(uParam2, 13, 1);
							func_178(uParam2, 15, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 17, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 19, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 21, 1);
							func_178(uParam2, 22, 1);
							func_178(uParam2, 54, 1);
							func_178(uParam2, 24, 1);
							func_178(uParam2, 26, 1);
							func_178(uParam2, 27, 1);
							func_178(uParam2, 28, 1);
							func_178(uParam2, 30, 1);
							func_178(uParam2, 31, 1);
							func_178(uParam2, 32, 1);
							func_178(uParam2, 38, 1);
							func_178(uParam2, 36, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 77, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 1:
							func_180(uParam3, 3, 1);
							func_180(uParam3, 7, 1);
							func_180(uParam3, 0, 1);
							func_180(uParam3, 12, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 15, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 17, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 20, 1);
							func_180(uParam3, 21, 1);
							func_180(uParam3, 25, 1);
							func_180(uParam3, 26, 1);
							func_180(uParam3, 27, 1);
							func_180(uParam3, 30, 1);
							func_180(uParam3, 31, 1);
							func_180(uParam3, 32, 1);
							func_180(uParam3, 33, 1);
							func_180(uParam3, 39, 1);
							func_178(uParam2, 0, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 3, 1);
							func_178(uParam2, 4, 1);
							func_178(uParam2, 6, 1);
							func_178(uParam2, 7, 1);
							func_178(uParam2, 11, 1);
							func_178(uParam2, 13, 1);
							func_178(uParam2, 15, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 17, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 19, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 21, 1);
							func_178(uParam2, 22, 1);
							func_178(uParam2, 54, 1);
							func_178(uParam2, 24, 1);
							func_178(uParam2, 38, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 6, 1);
							func_182(uParam4, 7, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 43, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 77, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
						
						case 2:
							func_180(uParam3, 1, 1);
							func_180(uParam3, 3, 1);
							func_180(uParam3, 4, 1);
							func_180(uParam3, 5, 1);
							func_180(uParam3, 7, 1);
							func_180(uParam3, 10, 1);
							func_180(uParam3, 54, 1);
							func_180(uParam3, 55, 1);
							func_180(uParam3, 56, 1);
							func_180(uParam3, 0, 1);
							func_180(uParam3, 12, 1);
							func_180(uParam3, 13, 1);
							func_180(uParam3, 15, 1);
							func_180(uParam3, 16, 1);
							func_180(uParam3, 48, 1);
							func_180(uParam3, 49, 1);
							func_180(uParam3, 17, 1);
							func_180(uParam3, 18, 1);
							func_180(uParam3, 50, 1);
							func_180(uParam3, 51, 1);
							func_180(uParam3, 52, 1);
							func_180(uParam3, 53, 1);
							func_180(uParam3, 62, 1);
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_180(uParam3, 20, 1);
							func_180(uParam3, 21, 1);
							func_180(uParam3, 25, 1);
							func_180(uParam3, 26, 1);
							func_180(uParam3, 27, 1);
							func_180(uParam3, 30, 1);
							func_180(uParam3, 31, 1);
							func_180(uParam3, 32, 1);
							func_180(uParam3, 33, 1);
							func_180(uParam3, 37, 1);
							func_180(uParam3, 39, 1);
							func_178(uParam2, 0, 1);
							func_178(uParam2, 1, 1);
							func_178(uParam2, 2, 1);
							func_178(uParam2, 3, 1);
							func_178(uParam2, 4, 1);
							func_178(uParam2, 5, 1);
							func_178(uParam2, 6, 1);
							func_178(uParam2, 7, 1);
							func_178(uParam2, 8, 1);
							func_178(uParam2, 9, 1);
							func_178(uParam2, 10, 1);
							func_178(uParam2, 53, 1);
							func_178(uParam2, 56, 1);
							func_178(uParam2, 55, 1);
							func_178(uParam2, 11, 1);
							func_178(uParam2, 12, 1);
							func_178(uParam2, 13, 1);
							func_178(uParam2, 14, 1);
							func_178(uParam2, 15, 1);
							func_178(uParam2, 16, 1);
							func_178(uParam2, 47, 1);
							func_178(uParam2, 48, 1);
							func_178(uParam2, 17, 1);
							func_178(uParam2, 18, 1);
							func_178(uParam2, 49, 1);
							func_178(uParam2, 50, 1);
							func_178(uParam2, 51, 1);
							func_178(uParam2, 52, 1);
							func_178(uParam2, 62, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							func_178(uParam2, 19, 1);
							func_178(uParam2, 20, 1);
							func_178(uParam2, 21, 1);
							func_178(uParam2, 22, 1);
							func_178(uParam2, 54, 1);
							func_178(uParam2, 23, 1);
							func_178(uParam2, 24, 1);
							func_178(uParam2, 26, 1);
							func_178(uParam2, 27, 1);
							func_178(uParam2, 28, 1);
							func_178(uParam2, 29, 1);
							func_178(uParam2, 30, 1);
							func_178(uParam2, 31, 1);
							func_178(uParam2, 32, 1);
							func_178(uParam2, 33, 1);
							func_178(uParam2, 36, 1);
							func_178(uParam2, 38, 1);
							func_178(uParam2, 55, 1);
							func_182(uParam4, 1, 1);
							func_182(uParam4, 2, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 3, 1);
							func_182(uParam4, 4, 1);
							func_182(uParam4, 14, 1);
							func_182(uParam4, 15, 1);
							func_182(uParam4, 16, 1);
							func_182(uParam4, 6, 1);
							func_182(uParam4, 8, 1);
							func_182(uParam4, 9, 1);
							func_182(uParam4, 10, 1);
							func_182(uParam4, 12, 1);
							func_182(uParam4, 13, 1);
							func_182(uParam4, 17, 1);
							func_182(uParam4, 18, 1);
							func_182(uParam4, 19, 1);
							func_182(uParam4, 20, 1);
							func_182(uParam4, 59, 1);
							func_182(uParam4, 60, 1);
							func_182(uParam4, 61, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 62, 1);
							func_182(uParam4, 63, 1);
							func_182(uParam4, 64, 1);
							func_182(uParam4, 65, 1);
							func_182(uParam4, 66, 1);
							func_182(uParam4, 67, 1);
							func_182(uParam4, 68, 1);
							func_182(uParam4, 69, 1);
							func_182(uParam4, 70, 1);
							func_182(uParam4, 71, 1);
							func_182(uParam4, 72, 1);
							func_182(uParam4, 21, 1);
							func_182(uParam4, 22, 1);
							func_182(uParam4, 23, 1);
							func_182(uParam4, 24, 1);
							func_182(uParam4, 25, 1);
							func_182(uParam4, 26, 1);
							func_182(uParam4, 36, 1);
							func_182(uParam4, 46, 1);
							func_182(uParam4, 38, 1);
							func_182(uParam4, 29, 1);
							func_182(uParam4, 28, 1);
							func_182(uParam4, 31, 1);
							func_182(uParam4, 33, 1);
							func_182(uParam4, 34, 1);
							func_182(uParam4, 32, 1);
							func_182(uParam4, 92, 1);
							func_182(uParam4, 93, 1);
							func_182(uParam4, 94, 1);
							func_182(uParam4, 96, 1);
							func_182(uParam4, 97, 1);
							func_182(uParam4, 98, 1);
							func_182(uParam4, 100, 1);
							func_182(uParam4, 103, 1);
							func_182(uParam4, 104, 1);
							func_182(uParam4, 105, 1);
							func_182(uParam4, 106, 1);
							func_182(uParam4, 107, 1);
							func_182(uParam4, 108, 1);
							func_180(uParam3, 65, 1);
							func_180(uParam3, 67, 1);
							func_180(uParam3, 68, 1);
							func_180(uParam3, 69, 1);
							func_180(uParam3, 70, 1);
							func_180(uParam3, 71, 1);
							func_180(uParam3, 72, 1);
							func_180(uParam3, 73, 1);
							func_180(uParam3, 74, 1);
							func_180(uParam3, 75, 1);
							func_180(uParam3, 76, 1);
							func_180(uParam3, 77, 1);
							func_180(uParam3, 78, 1);
							func_180(uParam3, 79, 1);
							func_180(uParam3, 80, 1);
							func_180(uParam3, 81, 1);
							func_180(uParam3, 82, 1);
							func_180(uParam3, 91, 1);
							func_180(uParam3, 92, 1);
							func_178(uParam2, 64, 1);
							func_178(uParam2, 65, 1);
							func_178(uParam2, 66, 1);
							func_178(uParam2, 67, 1);
							func_178(uParam2, 68, 1);
							func_178(uParam2, 69, 1);
							func_178(uParam2, 70, 1);
							func_178(uParam2, 71, 1);
							func_178(uParam2, 72, 1);
							func_178(uParam2, 73, 1);
							func_178(uParam2, 74, 1);
							func_178(uParam2, 75, 1);
							func_178(uParam2, 77, 1);
							func_178(uParam2, 78, 1);
							func_178(uParam2, 79, 1);
							func_178(uParam2, 80, 1);
							func_178(uParam2, 81, 1);
							func_178(uParam2, 90, 1);
							func_178(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_178(uParam2, 2, 1);
							func_178(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_176(2, 52, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_176(2, 53, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_182(uParam2, 124, 1);
	func_182(uParam2, 125, 1);
	func_182(uParam2, 126, 1);
	func_182(uParam2, 127, 1);
	func_182(uParam2, 128, 1);
	func_182(uParam2, 129, 1);
	func_182(uParam2, 130, 1);
	func_182(uParam2, 131, 1);
	func_182(uParam2, 132, 1);
	func_182(uParam2, 133, 1);
	func_182(uParam2, 136, 1);
	func_182(uParam2, 138, 1);
	func_182(uParam2, 139, 1);
	func_182(uParam2, 143, 1);
	func_182(uParam2, 144, 1);
	func_182(uParam2, 145, 1);
	func_182(uParam2, 147, 1);
}

void func_178(var uParam0, int iParam1, bool bParam2)
{
	func_179(uParam0, iParam1, bParam2);
}

void func_179(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_180(var uParam0, int iParam1, bool bParam2)
{
	func_179(uParam0, iParam1, bParam2);
}

void func_181(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_182(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							break;
						
						case 1:
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							break;
						
						case 2:
							func_180(uParam3, 38, 1);
							func_180(uParam3, 47, 1);
							func_180(uParam3, 111, 1);
							func_178(uParam2, 37, 1);
							func_178(uParam2, 46, 1);
							func_178(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_178(uParam2, 16, 1);
						func_178(uParam2, 47, 1);
						func_178(uParam2, 48, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
					}
					func_182(uParam4, 3, 1);
					func_182(uParam4, 4, 1);
					func_182(uParam4, 5, 1);
					func_182(uParam4, 6, 1);
					func_182(uParam4, 7, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 9, 1);
					func_182(uParam4, 12, 1);
					func_182(uParam4, 14, 1);
					func_182(uParam4, 15, 1);
					func_182(uParam4, 16, 1);
					func_182(uParam4, 17, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 28, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 33, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_182(uParam4, 110, 1);
					func_182(uParam4, 112, 1);
					func_182(uParam4, 115, 1);
					func_182(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 49, 1);
						func_178(uParam2, 50, 1);
						func_178(uParam2, 51, 1);
						func_178(uParam2, 52, 1);
						func_178(uParam2, 62, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
					}
					func_182(uParam4, 9, 1);
					func_182(uParam4, 12, 1);
					func_182(uParam4, 13, 1);
					func_182(uParam4, 17, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 29, 1);
					func_182(uParam4, 28, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 31, 1);
					func_182(uParam4, 33, 1);
					func_182(uParam4, 34, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					break;
				
				case 10:
					func_182(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_180(uParam3, 3, 1);
						func_180(uParam3, 4, 1);
						func_180(uParam3, 6, 1);
						func_180(uParam3, 10, 1);
						func_180(uParam3, 54, 1);
						func_180(uParam3, 55, 1);
						func_180(uParam3, 56, 1);
						func_180(uParam3, 13, 1);
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_180(uParam3, 20, 1);
						func_180(uParam3, 26, 1);
						func_180(uParam3, 27, 1);
						func_180(uParam3, 32, 1);
						func_180(uParam3, 33, 1);
						func_180(uParam3, 37, 1);
						func_180(uParam3, 39, 1);
						func_180(uParam3, 106, 1);
						func_180(uParam3, 114, 1);
						func_180(uParam3, 116, 1);
						func_180(uParam3, 117, 1);
						func_180(uParam3, 118, 1);
						func_180(uParam3, 119, 1);
						func_178(uParam2, 3, 1);
						func_178(uParam2, 4, 1);
						func_178(uParam2, 6, 1);
						func_178(uParam2, 8, 1);
						func_178(uParam2, 9, 1);
						func_178(uParam2, 10, 1);
						func_178(uParam2, 53, 1);
						func_178(uParam2, 56, 1);
						func_178(uParam2, 55, 1);
						func_178(uParam2, 13, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 49, 1);
						func_178(uParam2, 50, 1);
						func_178(uParam2, 51, 1);
						func_178(uParam2, 52, 1);
						func_178(uParam2, 62, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
						func_178(uParam2, 21, 1);
						func_178(uParam2, 26, 1);
						func_178(uParam2, 27, 1);
						func_178(uParam2, 28, 1);
						func_178(uParam2, 32, 1);
						func_178(uParam2, 36, 1);
						func_178(uParam2, 38, 1);
						func_178(uParam2, 55, 1);
						func_178(uParam2, 14, 1);
						func_178(uParam2, 105, 1);
						func_178(uParam2, 113, 1);
						func_178(uParam2, 114, 1);
						func_178(uParam2, 115, 1);
						func_178(uParam2, 116, 1);
						func_178(uParam2, 117, 1);
					}
					func_182(uParam4, 2, 1);
					func_182(uParam4, 3, 1);
					func_182(uParam4, 4, 1);
					func_182(uParam4, 14, 1);
					func_182(uParam4, 15, 1);
					func_182(uParam4, 16, 1);
					func_182(uParam4, 9, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 12, 1);
					func_182(uParam4, 13, 1);
					func_182(uParam4, 17, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 29, 1);
					func_182(uParam4, 28, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 31, 1);
					func_182(uParam4, 32, 1);
					func_182(uParam4, 33, 1);
					func_182(uParam4, 34, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_182(uParam4, 110, 1);
					func_182(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 49, 1);
						func_178(uParam2, 50, 1);
						func_178(uParam2, 51, 1);
						func_178(uParam2, 52, 1);
						func_178(uParam2, 62, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
						func_178(uParam2, 19, 1);
					}
					func_182(uParam4, 3, 1);
					func_182(uParam4, 6, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 9, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 13, 1);
					func_182(uParam4, 17, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 29, 1);
					func_182(uParam4, 28, 1);
					func_182(uParam4, 31, 1);
					func_182(uParam4, 32, 1);
					func_182(uParam4, 33, 1);
					func_182(uParam4, 34, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					func_182(uParam4, 110, 1);
					func_182(uParam4, 112, 1);
					func_182(uParam4, 115, 1);
					func_182(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_180(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_182(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_178(uParam2, 16, 1);
						func_178(uParam2, 47, 1);
						func_178(uParam2, 48, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 49, 1);
						func_178(uParam2, 50, 1);
						func_178(uParam2, 51, 1);
						func_178(uParam2, 52, 1);
						func_178(uParam2, 62, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
					}
					func_182(uParam4, 9, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 29, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_180(uParam3, 3, 1);
						func_180(uParam3, 7, 1);
						func_180(uParam3, 0, 1);
						func_180(uParam3, 12, 1);
						func_180(uParam3, 13, 1);
						func_180(uParam3, 15, 1);
						func_180(uParam3, 16, 1);
						func_180(uParam3, 48, 1);
						func_180(uParam3, 49, 1);
						func_180(uParam3, 17, 1);
						func_180(uParam3, 18, 1);
						func_180(uParam3, 50, 1);
						func_180(uParam3, 51, 1);
						func_180(uParam3, 52, 1);
						func_180(uParam3, 53, 1);
						func_180(uParam3, 38, 1);
						func_180(uParam3, 47, 1);
						func_180(uParam3, 111, 1);
						func_180(uParam3, 62, 1);
						func_180(uParam3, 20, 1);
						func_180(uParam3, 21, 1);
						func_180(uParam3, 25, 1);
						func_180(uParam3, 26, 1);
						func_180(uParam3, 27, 1);
						func_180(uParam3, 30, 1);
						func_180(uParam3, 31, 1);
						func_180(uParam3, 32, 1);
						func_180(uParam3, 33, 1);
						func_180(uParam3, 39, 1);
						func_180(uParam3, 37, 1);
						func_180(uParam3, 55, 1);
						func_178(uParam2, 0, 1);
						func_178(uParam2, 2, 1);
						func_178(uParam2, 3, 1);
						func_178(uParam2, 4, 1);
						func_178(uParam2, 6, 1);
						func_178(uParam2, 7, 1);
						func_178(uParam2, 8, 1);
						func_178(uParam2, 11, 1);
						func_178(uParam2, 13, 1);
						func_178(uParam2, 15, 1);
						func_178(uParam2, 16, 1);
						func_178(uParam2, 47, 1);
						func_178(uParam2, 48, 1);
						func_178(uParam2, 17, 1);
						func_178(uParam2, 18, 1);
						func_178(uParam2, 49, 1);
						func_178(uParam2, 50, 1);
						func_178(uParam2, 51, 1);
						func_178(uParam2, 52, 1);
						func_178(uParam2, 62, 1);
						func_178(uParam2, 37, 1);
						func_178(uParam2, 46, 1);
						func_178(uParam2, 110, 1);
						func_178(uParam2, 19, 1);
						func_178(uParam2, 20, 1);
						func_178(uParam2, 21, 1);
						func_178(uParam2, 22, 1);
						func_178(uParam2, 54, 1);
						func_178(uParam2, 24, 1);
						func_178(uParam2, 26, 1);
						func_178(uParam2, 27, 1);
						func_178(uParam2, 28, 1);
						func_178(uParam2, 30, 1);
						func_178(uParam2, 31, 1);
						func_178(uParam2, 32, 1);
						func_178(uParam2, 38, 1);
						func_178(uParam2, 36, 1);
					}
					func_182(uParam4, 3, 1);
					func_182(uParam4, 3, 1);
					func_182(uParam4, 4, 1);
					func_182(uParam4, 14, 1);
					func_182(uParam4, 15, 1);
					func_182(uParam4, 16, 1);
					func_182(uParam4, 8, 1);
					func_182(uParam4, 9, 1);
					func_182(uParam4, 10, 1);
					func_182(uParam4, 12, 1);
					func_182(uParam4, 13, 1);
					func_182(uParam4, 17, 1);
					func_182(uParam4, 18, 1);
					func_182(uParam4, 19, 1);
					func_182(uParam4, 20, 1);
					func_182(uParam4, 59, 1);
					func_182(uParam4, 60, 1);
					func_182(uParam4, 61, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 62, 1);
					func_182(uParam4, 63, 1);
					func_182(uParam4, 64, 1);
					func_182(uParam4, 65, 1);
					func_182(uParam4, 66, 1);
					func_182(uParam4, 67, 1);
					func_182(uParam4, 68, 1);
					func_182(uParam4, 69, 1);
					func_182(uParam4, 70, 1);
					func_182(uParam4, 71, 1);
					func_182(uParam4, 72, 1);
					func_182(uParam4, 21, 1);
					func_182(uParam4, 22, 1);
					func_182(uParam4, 23, 1);
					func_182(uParam4, 24, 1);
					func_182(uParam4, 25, 1);
					func_182(uParam4, 26, 1);
					func_182(uParam4, 36, 1);
					func_182(uParam4, 46, 1);
					func_182(uParam4, 38, 1);
					func_182(uParam4, 29, 1);
					func_182(uParam4, 28, 1);
					func_182(uParam4, 31, 1);
					func_182(uParam4, 33, 1);
					func_182(uParam4, 34, 1);
					func_182(uParam4, 92, 1);
					func_182(uParam4, 93, 1);
					func_182(uParam4, 94, 1);
					func_182(uParam4, 96, 1);
					func_182(uParam4, 97, 1);
					func_182(uParam4, 98, 1);
					func_182(uParam4, 100, 1);
					func_182(uParam4, 103, 1);
					func_182(uParam4, 104, 1);
					func_182(uParam4, 105, 1);
					func_182(uParam4, 106, 1);
					func_182(uParam4, 107, 1);
					func_182(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_182(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_183()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	vParam2.z = (vParam2.z + 1f);
	func_186(uParam0, iParam1, vParam2, fParam5, iParam6, bParam7);
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (func_185(*uParam0) && iParam8)
		{
			unk_0x262EF6C6306BEA6C(*uParam0, 1119849093, -1, true, true);
		}
		if (func_53())
		{
			if (func_131(*uParam0))
			{
				unk_0x64F9F278AB9DCA2C(*uParam0, 6, 3, 0, 0);
			}
		}
	}
}

int func_185(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11)), 1148412551, 0))
	{
		return 1;
	}
	return 0;
}

void func_186(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
		}
		*uParam0 = unk_0x0FBDF2FFE3C74512(iParam1, 0, 0, 0);
		if (unk_0xEB6A8945D1AC98A1(*uParam0))
		{
			unk_0x5006E314C731BB09(*uParam0);
		}
		unk_0xADCFE13F048E110C(*uParam0);
		unk_0xA47B46945FF6DE74(*uParam0, vParam2, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(*uParam0, fParam5);
		unk_0x20641932E5104B25(*uParam0, false, 0);
		unk_0xE121AE1BBF90E186(*uParam0, true);
		unk_0x1E9649458B15960F(*uParam0, true);
		unk_0x11AD11297DC58CC7(*uParam0, true);
		unk_0x5745EA6329A91E29(*uParam0, -1569615261, true);
		unk_0x64F9F278AB9DCA2C(*uParam0, 5, 0, 0, 0);
		if (bParam7)
		{
			unk_0xCC095276B3DD380E(*uParam0, 0);
			unk_0xE731059548189243(*uParam0, 1);
			unk_0x64F9F278AB9DCA2C(*uParam0, 1, 0, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(*uParam0, 0);
			if (iParam6 > -1 && iParam6 < 32)
			{
				Var0 = { func_188(unk_0x134B62B726CEC8E6(*uParam0), 2, Global_2425662[iParam6].f_240, -1) };
				unk_0x64F9F278AB9DCA2C(*uParam0, 2, Var0.f_3, Var0.f_4, 0);
				unk_0x64F9F278AB9DCA2C(*uParam0, 7, 0, 0, 0);
			}
		}
		if (func_187(*uParam0, 11))
		{
			unk_0x64F9F278AB9DCA2C(*uParam0, 7, 0, 0, 0);
		}
		unk_0x327AAEE25F323797(*uParam0);
		unk_0xE7EE28867F07D06D(*uParam0);
	}
}

int func_187(int iParam0, int iParam1)
{
	iVar0 = unk_0x4F4B24509D6989D0(iParam0, iParam1, unk_0x36C584991B4C183F(iParam0, iParam1), unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1));
	if (unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0))
	{
		return 1;
	}
	return 0;
}

struct<14> func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_238();
	if (iParam0 == 1885233650)
	{
		func_222(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == -1667301416)
	{
		func_189(iParam1, iParam2, iParam3);
	}
	return Global_76434[0];
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_221(iParam1, iParam2);
			break;
		
		case 11:
			func_220(iParam1, iParam2);
			break;
		
		case 8:
			func_212(iParam1, iParam2);
			break;
		
		case 9:
			func_211(iParam1, iParam2);
			break;
		
		case 3:
			func_210(iParam1, iParam2);
			break;
		
		case 4:
			func_209(iParam1, iParam2);
			break;
		
		case 6:
			func_208(iParam1, iParam2);
			break;
		
		case 1:
			func_207(iParam1, iParam2);
			break;
		
		case 7:
			func_206(iParam1, iParam2);
			break;
		
		case 10:
			func_205(iParam1, iParam2);
			break;
		
		case 14:
			func_204(iParam1, iParam2);
			break;
		
		case 12:
			func_203(iParam1, iParam2);
			break;
		
		case 5:
			func_202(iParam1, iParam2);
			break;
		
		case 0:
			func_200(iParam1, iParam2);
			break;
		
		case 13:
			func_190(iParam1);
			break;
	}
}

void func_190(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_191(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_199(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_198(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_196(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_196(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_196(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_196(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_196(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_196(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_195(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_195(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_195(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_198(14))
			{
				return;
			}
			iVar0 = func_85(func_194(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_85(func_193(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_192(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_85(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_192(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_193(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_194(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_197(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_85(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

bool func_197(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

bool func_198(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_200(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 4;
	func_201(iVar0, iParam0, 0, iParam1);
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_191(&(Global_76434[0]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_191(&(Global_76434[0]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x4F79808059300187(iVar38, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_191(&(Global_76434[0]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x1A5A491D253EA7BA(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var41);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_191(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_135(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xC578687D5A643830(iVar58, &Var41);
			if (!unk_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_191(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_202(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_203(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_204(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2044[iVar12]) * Global_291063.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2165[iVar13]) * Global_291063.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2190[iVar14]) * Global_291063.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2319[iVar15]) * Global_291063.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 327, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_26));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_56));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_28));
			}
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_205(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_206(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 55, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_207(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 26, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2017[iVar11]) * Global_291063.f_29));
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_208(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1760[iVar11]) * Global_291063.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_25));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_209(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1246[iVar11]) * Global_291063.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_23));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_210(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_211(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 136, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_213(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_213(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar12]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_24));
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

bool func_213(int iParam0, int iParam1)
{
	if (func_216(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_215(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_214(iVar1));
}

int func_214(int iParam0)
{
	return (iParam0 % 32);
}

int func_215(var uParam0, int iParam1)
{
	iVar0 = func_85(func_216(uParam0), iParam1, 0);
	return iVar0;
}

int func_216(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_219(iVar0);
	if ((func_218() == 0 || func_217() == 0) || (func_218() == 999 && func_217() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_217()
{
	return Global_30769;
}

int func_218()
{
	return Global_30768;
}

int func_219(int iParam0)
{
	return (iParam0 / 32);
}

void func_220(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_213(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[4]) * Global_291063.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_213(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[9]) * Global_291063.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1503[iVar11]) * Global_291063.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_201(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_24));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_221(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_201(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_237(iParam1, iParam2);
			break;
		
		case 11:
			func_236(iParam1, iParam2);
			break;
		
		case 8:
			func_235(iParam1, iParam2);
			break;
		
		case 9:
			func_234(iParam1, iParam2);
			break;
		
		case 3:
			func_233(iParam1, iParam2);
			break;
		
		case 4:
			func_232(iParam1, iParam2);
			break;
		
		case 6:
			func_231(iParam1, iParam2);
			break;
		
		case 1:
			func_230(iParam1, iParam2);
			break;
		
		case 7:
			func_229(iParam1, iParam2);
			break;
		
		case 10:
			func_228(iParam1, iParam2);
			break;
		
		case 14:
			func_227(iParam1, iParam2);
			break;
		
		case 12:
			func_226(iParam1, iParam2);
			break;
		
		case 5:
			func_225(iParam1, iParam2);
			break;
		
		case 0:
			func_224(iParam1, iParam2);
			break;
		
		case 13:
			func_223(iParam1);
			break;
	}
}

void func_223(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 3;
	func_201(iVar0, iParam0, 0, iParam1);
}

void func_225(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_227(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_955[iVar12]) * Global_291063.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1076[iVar13]) * Global_291063.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1101[iVar14]) * Global_291063.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1230[iVar15]) * Global_291063.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0].f_5 = 3;
		func_201(iVar10, iParam0, 327, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_18));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_20));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_21));
			}
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_228(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 92, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_57));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_928[iVar11]) * Global_291063.f_22));
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_671[iVar11]) * Global_291063.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 3;
		func_201(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_17));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_232(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_176[iVar11]) * Global_291063.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 3;
		func_201(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_15));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_233(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_234(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_191(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_235(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_213(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(45) * Global_262145.f_433[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_213(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(55) * Global_262145.f_433[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar14]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_16));
	if (iParam0 >= 241)
	{
		Global_76434[0].f_5 = 3;
		func_201(iVar10, iParam0, 241, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_236(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_213(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(45) * Global_262145.f_433[23]) * Global_291063.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_213(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(55) * Global_262145.f_433[28]) * Global_291063.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_433[iVar11]) * Global_291063.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_76434[0].f_5 = 3;
		func_201(iVar10, iParam0, 237, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_237(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[65]));
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_201(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_191(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238()
{
	Global_76434[0].f_1 = -1;
	Global_76434[0].f_2 = -1;
	Global_76434[0].f_5 = -1;
	Global_76434[0].f_3 = -1;
	Global_76434[0].f_4 = -1;
	Global_76434[0].f_7 = 0;
	Global_76434[0].f_6 = 0;
	Global_76434[0].f_13 = -1;
	Global_76434[0].f_12 = 0;
	Global_76434[0] = 0;
	StringCopy(&(Global_76434[0].f_8), "NO_LABEL", 16);
}

int func_239(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	iParam0->f_419 += 30;
	if (iParam0->f_419 > 255)
	{
		iParam0->f_419 = 255;
	}
	unk_0xD9ACBBA59FD5A09E(7);
	unk_0xC1032CAC14DE468A(0,5f, 0,5f, 3f, 3f, iVar0, iVar1, iVar2, iParam0->f_419, 0);
	if (iParam0->f_419 >= 255)
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)
{
	if ((unk_0x83D8570832F172A7(*iParam0) && unk_0x83D8570832F172A7(iParam0->f_1)) && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!unk_0x83D8570832F172A7(*iParam0))
		{
		}
		if (!unk_0x83D8570832F172A7(iParam0->f_1))
		{
		}
		if (!unk_0x83D8570832F172A7(iParam0->f_2))
		{
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	if (uParam0->f_1205)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar1 = iVar0;
			if (func_23(iVar1, 0, 1))
			{
				unk_0xA550CB601D5066B5(iVar1, 0);
			}
			iVar0++;
		}
	}
}

void func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8)
{
	if (unk_0xBA301E03A078FA59() || unk_0xA3F916BCE430ED26())
	{
		return;
	}
	if (unk_0x991B1F0980C62628())
	{
		return;
	}
	if (iParam5 == iParam5)
	{
		iParam5 = iParam5;
	}
	if (*uParam6 == 0)
	{
		return;
	}
	switch (*uParam1)
	{
		case 0:
			if (*uParam2 == -1)
			{
				iVar0 = 0;
				while (iVar0 < *uParam3)
				{
					if (iVar0 <= 7)
					{
						if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]))
						{
							if (!unk_0x437347B10A200C4B((*uParam3)[iVar0], 0))
							{
								iVar1++;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 > 0)
				{
					*uParam2 = iVar1;
				}
			}
			else
			{
				bVar18 = true;
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						StringCopy(&cVar2, "PLAYER_NAME_0", 64);
						StringIntConCat(&cVar2, iVar0 + 1, 64);
						(*uParam7)[iVar0] = unk_0xB01F55A0FD1CFD49(&cVar2);
						if (!unk_0x83D8570832F172A7((*uParam7)[iVar0]))
						{
							bVar18 = false;
						}
					}
					iVar0++;
				}
				if (bVar18)
				{
					*uParam1++;
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < *uParam2)
			{
				unk_0x7E60C62A7CE58FC8((*uParam7)[iVar0], "SET_PLAYER_NAME");
				func_149(uParam4[iVar0]);
				unk_0x7E60D21B163E9D56();
				iVar0++;
			}
			*uParam1++;
			break;
		
		case 2:
			if (unk_0xB9132A06AE472728(2, 204) || unk_0x9A01369A10646AFE(2, 204))
			{
				if (*uParam8)
				{
					*uParam8 = 0;
				}
				else
				{
					*uParam8 = 1;
				}
				unk_0x4D7F4CC43D4D0DE3(-1, "TOGGLE_ON", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			if (*uParam8)
			{
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]))
						{
							if (!unk_0x437347B10A200C4B((*uParam3)[iVar0], 0))
							{
								if (unk_0xBA301E03A078FA59() || unk_0xA3F916BCE430ED26())
								{
									vVar22 = { unk_0x64430C979F516F7A((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									func_249(uParam3[iVar0], &vVar22, iVar0);
									vVar19 = { func_247(vVar22, unk_0xF1EE614CA05DDE75()) };
									unk_0x5655C0F8DE67F0E6((*uParam7)[iVar0], vVar22, vVar19, 0,75f, 0,5f, 0,375f, 0,75f, 0,5f, 0,375f, 2);
								}
								else
								{
									vVar25 = { func_246(uParam3[iVar0], iVar0) };
									vVar22 = { unk_0x64430C979F516F7A((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									vVar31 = { unk_0x68E4ADDDDCD7BDDE((*uParam3)[iVar0], vVar25) - unk_0x68F4C0EC296D3901((*uParam3)[iVar0], true) };
									vVar34 = { vVar22 + vVar31 };
									vVar19 = { func_247(vVar22, unk_0xF1EE614CA05DDE75()) };
									vVar28 = { func_245(iVar0) };
									unk_0x5655C0F8DE67F0E6((*uParam7)[iVar0], vVar34, vVar19, vVar28, vVar28, 2);
									func_243(uParam0, iVar0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_243(var uParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 16)
	{
		if (uParam0->f_401[iParam1] > -1 && uParam0->f_401[iParam1] < 32)
		{
			iVar0 = unk_0x117658E336116132(uParam0->f_401[iParam1]);
			if (func_23(iVar0, 0, 1))
			{
				Var1 = { func_72(iVar0) };
				if (unk_0xD01DD90A3EAEC725(&Var1))
				{
					if (unk_0x8086012EEEB2D3DF(&Var1))
					{
						iVar14 = 2;
					}
					else
					{
						iVar14 = 3;
					}
				}
				else if (unk_0x74684D5E87B13DBD(&Var1))
				{
					iVar14 = 1;
				}
				else
				{
					iVar14 = 0;
				}
				if (uParam0->f_1178[iParam1] != iVar14)
				{
					switch (iVar14)
					{
						case 0:
							func_244(uParam0, 1, iParam1);
							break;
						
						case 1:
							func_244(uParam0, 4, iParam1);
							break;
						
						case 2:
							func_244(uParam0, 3, iParam1);
							break;
						
						case 3:
							func_244(uParam0, 2, iParam1);
							break;
					}
					uParam0->f_1178[iParam1] = iVar14;
				}
			}
		}
	}
}

void func_244(var uParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

Vector3 func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,9f, 0,6f, 2f;
		
		case 1:
			return 1,2f, 0,7f, 2f;
		
		case 2:
			return 1,3f, 0,7f, 2f;
		
		case 3:
			return 1,2f, 0,7f, 2f;
		
		case 4:
			return 1,3f, 0,8f, 2f;
		
		case 5:
			return 1,4f, 0,8f, 2f;
		
		case 6:
			return 1,6f, 0,8f, 2f;
		
		case 7:
			return 1,7f, 0,9f, 2f;
		
		default:
	}
	return 1,4f, 0,8f, 2f;
}

Vector3 func_246(var uParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = 0,5f;
	if (iParam1 == 5)
	{
		if (func_131(*uParam0))
		{
			fVar2 = 0,1f;
		}
		else
		{
			fVar2 = 0,05f;
		}
	}
	else if (func_131(*uParam0))
	{
		fVar2 = 0,1f;
	}
	else
	{
		fVar2 = 0,05f;
	}
	return fVar0, fVar1, fVar2;
}

Vector3 func_247(struct<2> Param0, var uParam2, vector3 vParam3)
{
	if (func_248(vParam3))
	{
		return 0f, 0f, 0f;
	}
	vVar0.z = (180f - unk_0xE7D606C557C86100((vParam3.x - Param0), (vParam3.y - Param0.f_1)));
	vVar0.x = 0f;
	vVar0.y = 0f;
	return vVar0;
}

int func_248(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_249(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 5)
	{
		if (func_131(*uParam0))
		{
			uParam1->f_2 = (uParam1->f_2 + 0,15f);
		}
		else
		{
			uParam1->f_2 = (uParam1->f_2 + 0,1f);
		}
	}
	else if (func_131(*uParam0))
	{
		uParam1->f_2 = (uParam1->f_2 + 0,15f);
	}
	else
	{
		uParam1->f_2 = (uParam1->f_2 + 0,1f);
	}
	if (!unk_0xBA301E03A078FA59() && !unk_0xA3F916BCE430ED26())
	{
		uParam1->f_1 = (uParam1->f_1 - 0,5f);
	}
}

void func_250(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xBA301E03A078FA59() && !unk_0xA3F916BCE430ED26())
	{
		return;
	}
	vVar0 = { unk_0x9382F04ED9CDA21A(2) };
	if (unk_0x755FF954DAE327E1(vVar0.x) >= 45f)
	{
		return;
	}
	if (!(iParam2 > 2 && iParam2 < 5))
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	fVar7 = -1f;
	fVar8 = -1f;
	iVar3 = 0;
	while (iVar3 < 8)
	{
		func_257(&vVar27, 3);
		vVar27.x = 1;
		switch (iVar3)
		{
			case 0:
				vVar27.y = 0,55f;
				vVar27.z = 0,55f;
				break;
			
			case 1:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 2:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 3:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 4:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 5:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 6:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 7:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
		}
		cVar9 = { *uParam1[iVar3] };
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar3]))
		{
			if (!unk_0x437347B10A200C4B((*uParam0)[iVar3], 0))
			{
				vVar4 = { unk_0x64430C979F516F7A((*uParam0)[iVar3], 24818, 0f, 0f, 0f) };
				if (iVar3 == 5)
				{
					if (func_131((*uParam0)[iVar3]))
					{
						vVar4.z = (vVar4.z + 0,25f);
					}
					else
					{
						vVar4.z = (vVar4.z + 0,22f);
					}
				}
				else if (func_131((*uParam0)[iVar3]))
				{
					vVar4.z = (vVar4.z + 0,25f);
				}
				else
				{
					vVar4.z = (vVar4.z + 0,22f);
				}
				unk_0x362FD95670BFA2A6(vVar4, &fVar7, &fVar8);
				if (fVar7 != -1f && fVar8 != -1f)
				{
					Var25 = fVar7;
					Var25.f_1 = fVar8;
				}
				func_251(&Var25, &vVar27, &cVar9, "", 1, 0);
			}
		}
		iVar3++;
	}
}

void func_251(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	if (!func_96(sParam2))
	{
		if (func_255())
		{
			func_254(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam5);
			if (func_96(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			unk_0x070005E852D4C0E9(sVar0);
			unk_0x3A820E495A7BA3E5(iParam4);
			unk_0xD06AC7C87A34A6AD(sParam2);
			unk_0xE0026608C37C7C41(func_253(*uParam0), func_252(uParam0->f_1), 0);
		}
	}
}

float func_252(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_253(float fParam0)
{
	return (fParam0 + fLocal_12);
}

void func_254(var uParam0, bool bParam1)
{
	unk_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	unk_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x5C3AC46FC4D891D1();
			unk_0xC8CFC125861F0537();
			break;
		
		case 3:
			unk_0xC8CFC125861F0537();
			break;
		
		case 2:
			unk_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

int func_255()
{
	if (func_256())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_256()
{
	return Global_1312440;
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (((0,5f + 0,004f) - 0,01f) - 0,11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_258()
{
	unk_0x7C8F595F56164501(1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_23(iVar0, 0, 1))
		{
			unk_0xA550CB601D5066B5(iVar0, 1);
		}
		iVar0++;
	}
}

void func_259(bool bParam0)
{
	if (func_269() || func_268())
	{
		return;
	}
	unk_0x5024DE80A08E9E70(19);
	func_267();
	func_266(0);
	func_265();
	unk_0xB8E3919889462ACD();
	unk_0xD1B833B834838C01();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!(unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x137240CA2BADB0D2(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), func_264(unk_0x16F2683693E537C9(), 0))))
		{
			unk_0x4C81063C30E87DDB();
			func_262();
			unk_0xDC355804A9511111();
		}
		unk_0x38C3A68D7861DCFD(0, 25, 1);
	}
	func_260();
	bVar0 = false;
	bVar0 = func_757("HQRHELP");
	if (!bVar0)
	{
		unk_0xE19C2AAC820D8ED5();
	}
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(3);
	unk_0x3584F71E5CA29322(4);
	unk_0x3584F71E5CA29322(13);
	if (!bParam0)
	{
		unk_0x3584F71E5CA29322(15);
	}
	unk_0x3584F71E5CA29322(11);
	unk_0x3584F71E5CA29322(12);
	unk_0x3584F71E5CA29322(18);
}

void func_260()
{
	unk_0xC2127C0F64D6A3B9();
	func_261();
}

void func_261()
{
	Global_22211.f_134 = 1;
}

void func_262()
{
	if (!func_263(unk_0xD803B885F5E47A62(), 0, 0))
	{
		unk_0xD1B833B834838C01();
		unk_0x4C81063C30E87DDB();
	}
}

int func_263(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2425662[iParam0].f_222 == 99)
	{
		if ((iParam2 && Global_2425662[iParam0].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2425662[iParam0].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_264(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_265()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_266(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_124(0))
		{
			func_121(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_267()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 7);
}

bool func_268()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 148;
}

bool func_269()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 5;
}

void func_270(int iParam0, bool bParam1)
{
	if (func_278())
	{
		return;
	}
	if (!func_23(unk_0xD803B885F5E47A62(), 1, 1))
	{
		bParam1 = false;
	}
	if (!Global_1312798)
	{
		if (bParam1)
		{
			if (!func_277(Global_4456448.f_232883))
			{
				if (unk_0x6EB03BF238979740() || unk_0xB541E437375DFA3D())
				{
					func_276(1);
					func_272(1, 2);
				}
				func_271(&(iParam0->f_1202), &(iParam0->f_1199));
			}
		}
		Global_1312798 = 1;
	}
}

void func_271(var uParam0, var uParam1)
{
	if (!unk_0xED4934AFB6EC6451("MP_Celeb_Preload_Fade"))
	{
		if (!*uParam0)
		{
			unk_0x82A772610883F395("MP_Celeb_Preload_Fade", 0, 1);
			unk_0x4D7F4CC43D4D0DE3(-1, "Pre_Screen_Stinger", "DLC_HEISTS_PREP_SCREEN_SOUNDS", 0);
			*uParam0 = 1;
			if (!func_12(uParam1))
			{
				func_8(uParam1, 0, 0);
			}
		}
	}
}

void func_272(int iParam0, int iParam1)
{
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0xE3036C83E6030758())
			{
				unk_0x72ABAF57BD8416C7(Global_1661288);
				Global_1661288 = -1f;
				unk_0x260B67E197780222(false);
				bVar2 = true;
			}
			unk_0xCD5125FFD341A313(bVar0);
			unk_0x5D96D8530B3D0904(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 0);
		}
		else
		{
			if (unk_0x6EB03BF238979740() || unk_0xB541E437375DFA3D())
			{
				unk_0xCD5125FFD341A313(false);
				bVar2 = true;
			}
			unk_0x260B67E197780222(bVar0);
			Global_1661288 = unk_0xF7D882B599631E46();
			unk_0x72ABAF57BD8416C7(0,5f);
			unk_0x5D96D8530B3D0904(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = unk_0xD68EA767274B7444();
			}
			if (!Global_1661289 == -1 && unk_0x8AA6DC470ABA63A2(Global_1661289))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x6EB03BF238979740() || unk_0xB541E437375DFA3D())
		{
			unk_0xCD5125FFD341A313(bVar0);
			unk_0x0674E58A79778E99(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 0);
		}
		if (unk_0xE3036C83E6030758())
		{
			unk_0x72ABAF57BD8416C7(Global_1661288);
			Global_1661288 = -1f;
			unk_0x260B67E197780222(bVar0);
			unk_0x0674E58A79778E99(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = unk_0xD68EA767274B7444();
			}
			if (!Global_1661289 == -1 && unk_0x8AA6DC470ABA63A2(Global_1661289))
			{
				if (iParam1 == 1)
				{
					unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_273(!bVar0);
}

void func_273(bool bParam0)
{
	func_274(304, bParam0, -1, 1);
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_275())
	{
		iVar0 = Global_2583656[iParam0][func_81(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_275()
{
	return 1;
	return 0;
}

void func_276(bool bParam0)
{
	if (Global_4267487 != bParam0)
	{
		Global_4267487 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4267488, unk_0xBB0808A181D4745C(), 64);
		}
		else
		{
			StringCopy(&Global_4267488, "", 64);
		}
	}
}

bool func_277(int iParam0)
{
	return iParam0 == 2;
}

bool func_278()
{
	return Global_2450632.f_39.f_57;
}

void func_279(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_280()].f_6174.f_4111[iVar0] == iParam0)
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

int func_280()
{
	iVar0 = 0;
	return iVar0;
}

void func_281(int iParam0)
{
	iParam0->f_8 = 0;
	func_282(&(iParam0->f_2));
	func_282(&(iParam0->f_5));
}

void func_282(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_283()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

int func_284(int iParam0, int iParam1)
{
	if (!func_291(&(iParam0->f_2)))
	{
		func_289(&(iParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(2, 201) || iParam0->f_8)
		{
			if (!func_291(&(iParam0->f_5)))
			{
				func_289(&(iParam0->f_5));
				func_288(iParam0, 1051260355);
			}
		}
		if (func_291(&(iParam0->f_5)))
		{
			if (func_285(&(iParam0->f_5)) > 0,33f)
			{
				func_282(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_285(&(iParam0->f_2)) * 1000f) > to_float(iParam0->f_1)
	{
		if (!func_291(&(iParam0->f_5)))
		{
			func_289(&(iParam0->f_5));
			func_288(iParam0, 1051260355);
		}
		else if (func_285(&(iParam0->f_5)) > 0,33f)
		{
			func_282(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

float func_285(var uParam0)
{
	if (func_291(uParam0))
	{
		if (func_287(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_286(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_286(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_287(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_288(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_289(int iParam0)
{
	func_290(iParam0, 0f);
}

void func_290(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_286(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_291(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_292(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	sVar0 = func_294(iParam4);
	if (iParam4 != 5)
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "RESET_MOVIE");
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(*iParam0, sVar0);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x6B012227B3921E18(sParam1);
	unk_0x779B34565F4D71B1();
	func_293(sParam2);
	unk_0x7E60D21B163E9D56();
	func_289(&(iParam0->f_2));
	iParam0->f_1 = iParam3;
	iParam0->f_9 = iParam5;
}

void func_293(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

char* func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x8CD06866876216F2())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_295()
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = unk_0x84F1BBE0C800DB62();
	iVar1 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_968149, unk_0x2B6E0A53779D29EA()));
	unk_0x1B95DBEA868760F4(Global_4456448, &(Global_4456448.f_195277), uVar0, iVar1, Global_968149.f_1);
	func_296();
}

void func_296()
{
	Global_968149 = 0;
	Global_968149.f_1 = 0;
}

int func_297()
{
	if (func_298() == 1 || func_298() == 4)
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	return Global_1312467.f_18;
}

int func_299()
{
	if (func_298() == 3 || func_298() == 2)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0)
{
	func_301(&(Global_2439138.f_3047.f_1), 1, "", -1, -1, 4, 0, iParam0);
	Global_2439138.f_3047 = 1;
}

void func_301(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_302(int iParam0, var uParam1)
{
	func_303(&(Global_2439138.f_3047.f_1), 1, unk_0x6E524813889AECF8(iParam0), "", uParam1, 0, 0, 1);
	Global_2439138.f_3047 = 1;
}

void func_303(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_304(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == func_26())
	{
		return;
	}
	iVar2 = *uParam0;
	if (iParam3 == 3 || iParam3 == 4)
	{
		iVar3 = 0;
		while (iVar3 <= (iVar2 - 1))
		{
			if ((*uParam0)[iVar3] == iParam1)
			{
				bVar4 = true;
				if (iParam2 > uParam0[iVar3]->f_1)
				{
					if (iParam3 == 4)
					{
						iParam3 = 5;
					}
					else
					{
						iParam3 = 0;
					}
				}
				else if (iParam2 < uParam0[iVar3]->f_1)
				{
					if (iParam3 == 4)
					{
						iParam3 = 1;
					}
					else
					{
						iParam3 = 2;
					}
				}
				else
				{
					return;
				}
				iVar3 = iVar2;
			}
			iVar3++;
		}
		if (!bVar4)
		{
			iParam3 = 0;
		}
	}
	if (iParam3 == 2 || iParam3 == 5)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar2 - 1))
		{
			if (!bVar1)
			{
				if ((*uParam0)[iVar0] == iParam1)
				{
					uParam0[iVar0]->f_1 = iParam2;
					bVar1 = true;
				}
			}
			else if (iParam3 == 2)
			{
				if (iParam2 < uParam0[iVar0]->f_1)
				{
					*(uParam0[(iVar0 - 1)]) = { *uParam0[iVar0] };
					(*uParam0)[iVar0] = iParam1;
					uParam0[iVar0]->f_1 = iParam2;
				}
			}
			else if (iParam2 > uParam0[iVar0]->f_1)
			{
				*(uParam0[(iVar0 - 1)]) = { *uParam0[iVar0] };
				(*uParam0)[iVar0] = iParam1;
				uParam0[iVar0]->f_1 = iParam2;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = (iVar2 - 1);
		while (iVar0 >= 0)
		{
			if (!bVar1)
			{
				if ((*uParam0)[iVar0] == iParam1)
				{
					uParam0[iVar0]->f_1 = iParam2;
					bVar1 = true;
				}
			}
			else if (iParam3 == 0)
			{
				if (iParam2 > uParam0[iVar0]->f_1)
				{
					*(uParam0[iVar0 + 1]) = { *uParam0[iVar0] };
					(*uParam0)[iVar0] = iParam1;
					uParam0[iVar0]->f_1 = iParam2;
				}
			}
			else if (iParam3 == 1)
			{
				if (iParam2 < uParam0[iVar0]->f_1)
				{
					*(uParam0[iVar0 + 1]) = { *uParam0[iVar0] };
					(*uParam0)[iVar0] = iParam1;
					uParam0[iVar0]->f_1 = iParam2;
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (!bVar1)
	{
		func_305(uParam0, iParam1, iParam2);
	}
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (*uParam0)[iVar0] == func_26()
		{
			(*uParam0)[iVar0] = iParam1;
			uParam0[iVar0]->f_1 = iParam2;
			return;
		}
		iVar0++;
	}
}

void func_306(var uParam0, int iParam1)
{
	uVar0 = func_307(iParam1);
	iVar2 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		(*uParam0)[iVar1] = func_26();
		uParam0[iVar1]->f_1 = uVar0;
		iVar1++;
	}
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return 2147483647;
		
		case 2:
			return -1;
		
		case 3:
			return -1;
		
		case 4:
			return 2147483647;
		
		case 5:
			return 2147483647;
		
		default:
	}
	return 0;
}

void func_308(char* sParam0)
{
	Global_2439138.f_3047 = 1;
	func_309(&(Global_2439138.f_3047.f_1), "", sParam0, 1);
}

void func_309(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_310(char* sParam0)
{
	func_301(&(Global_2439138.f_3047.f_1), 1, sParam0, -1, -1, 3, 0, 0);
	Global_2439138.f_3047 = 1;
}

char* func_311()
{
	sVar0 = "";
	switch (iLocal_1725)
	{
		case 3:
			sVar0 = "MP_SR_SUM_E_1";
			break;
		
		case 4:
			sVar0 = "MP_SR_SUM_E_2";
			break;
	}
	return sVar0;
}

void func_312(char* sParam0, int iParam1)
{
	func_303(&(Global_2439138.f_3047.f_1), 11, sParam0, "", iParam1, 0, 0, 0);
	Global_2439138.f_3047 = 1;
}

void func_313(char* sParam0, int iParam1)
{
	func_303(&(Global_2439138.f_3047.f_1), 1, sParam0, "", iParam1, 0, 0, 0);
	Global_2439138.f_3047 = 1;
}

int func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_20991;
					break;
				
				case 1:
					return Global_262145.f_20994;
					break;
				
				case 2:
					return Global_262145.f_20997;
					break;
				
				case 3:
					return Global_262145.f_21000;
					break;
				
				case 4:
					return Global_262145.f_21003;
					break;
				
				case 5:
					return Global_262145.f_21006;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_20992;
					break;
				
				case 1:
					return Global_262145.f_20995;
					break;
				
				case 2:
					return Global_262145.f_20998;
					break;
				
				case 3:
					return Global_262145.f_21001;
					break;
				
				case 4:
					return Global_262145.f_21004;
					break;
				
				case 5:
					return Global_262145.f_21007;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_20993;
					break;
				
				case 1:
					return Global_262145.f_20996;
					break;
				
				case 2:
					return Global_262145.f_20999;
					break;
				
				case 3:
					return Global_262145.f_21002;
					break;
				
				case 4:
					return Global_262145.f_21005;
					break;
				
				case 5:
					return Global_262145.f_21008;
					break;
			}
			break;
	}
	return 0;
}

void func_315(char* sParam0)
{
	Global_2439138.f_3047 = 1;
	func_309(&(Global_2439138.f_3047.f_1), "", sParam0, 0);
}

char* func_316()
{
	sVar0 = "";
	switch (Local_1726.f_1122)
	{
		case 0:
			sVar0 = "MP_SR_SUM_ST_1";
			break;
		
		case 1:
			sVar0 = "MP_SR_SUM_ST_2";
			break;
		
		case 2:
			sVar0 = "MP_SR_SUM_ST_3";
			break;
	}
	return sVar0;
}

int func_317(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_364(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_362(&(Var0.f_69), iParam7);
	}
	return func_318(&Var0);
}

int func_318(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_332(uParam0, uParam0->f_17);
	func_329(uParam0);
	if (func_103())
	{
		func_329(uParam0);
	}
	if (func_328(uParam0->f_1))
	{
		func_321();
		if (Global_2439138.f_2723[0].f_2 == 0)
		{
			Global_2439138.f_2723[0] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0].f_1 == 13 || Global_2439138.f_2723[0].f_1 == 53) || Global_2439138.f_2723[0].f_1 == 54) || Global_2439138.f_2723[0].f_1 == 58)
		{
			Global_2439138.f_2723[0].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1] = { Global_2439138.f_2723[iVar0] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_321();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_362(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_320(uParam0->f_69, 128))
			{
				if (func_319(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_362(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_320(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_321()
{
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_322();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_322()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_326(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_323(&(Global_2439138.f_3047.f_1));
}

void func_323(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (unk_0x757EF87A33649210() && !func_325(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_324(0);
}

void func_324(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_325(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_326(var uParam0)
{
	func_327(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_327(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_328(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_329(var uParam0)
{
	if (func_331(uParam0->f_1))
	{
		uParam0->f_72 = func_330();
	}
}

int func_330()
{
	return 21;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

void func_332(var uParam0, int iParam1)
{
	if (func_331(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_26() || !func_23(iParam1, 0, 1))
	{
		return;
	}
	if (func_319(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_333(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_333(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_128(iParam0) && !bParam4)
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
	if (((func_128(unk_0xD803B885F5E47A62()) || (func_361() && func_360())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_359();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_23(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_357(iParam1, iParam0, 0);
							}
							else
							{
								return func_344(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_344(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_357(iParam1, iParam0, 0);
				}
				else
				{
					return func_334(0, -1, 0);
				}
			}
			else
			{
				return func_334(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_357(iParam1, iParam0, 0);
		}
		else
		{
			return func_344(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_344(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_334(bool bParam0, int iParam1, bool bParam2)
{
	return func_335(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_335(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_343() || (func_342() && func_341())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_340(iParam2, iVar0);
		}
		else
		{
			return func_340(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_339(1);
				}
				else
				{
					return func_339(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_336(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_336(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_339(1);
	}
	return func_339(0);
}

int func_336(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_338(iParam0, iParam1, iParam3);
	if (func_337(Global_4456448.f_194990, 1))
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

int func_337(int iParam0, bool bParam1)
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

int func_338(int iParam0, int iParam1, int iParam2)
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
			if (!func_89(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_339(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_340(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_338(iParam1, iParam0, 4);
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

bool func_341()
{
	if (func_53())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_342()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_343()
{
	if (func_53() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_353())
			{
				iVar3 = func_349(iParam0);
				if (!iVar3 == -1)
				{
					return func_347(iVar3);
				}
			}
			if ((func_346(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_89(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_339(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_345(1);
			}
			else
			{
				return func_335(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_339(1);
			}
			else
			{
				return func_335(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_349(iParam0);
	if (!iVar4 == -1)
	{
		return func_347(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_345(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_346(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_347(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_348(iParam0);
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

var func_348(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_349(int iParam0)
{
	if (!iParam0 == func_26())
	{
		if (func_351(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_350(iParam0)];
		}
	}
	return -1;
}

int func_350(int iParam0)
{
	if (iParam0 != func_26())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_26();
}

bool func_351(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_352(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_26();
}

int func_352(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (Global_1628237[iParam0].f_11 != func_26())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_353()
{
	if (((func_356() || func_355()) || func_103()) || func_354())
	{
		return 1;
	}
	return 0;
}

var func_354()
{
	return Global_2450632.f_19;
}

var func_355()
{
	return Global_2450632.f_16;
}

var func_356()
{
	return Global_2450632.f_15;
}

int func_357(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_353())
	{
		iVar2 = func_349(iParam1);
		if (!iVar2 == -1)
		{
			return func_347(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_26())
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
			iVar0 = func_335(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_358(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_89(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_345(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_358(int iParam0)
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

var func_359()
{
	return Global_2359302.f_2;
}

bool func_360()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_361()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

void func_362(var uParam0, int iParam1)
{
	func_363(uParam0, iParam1);
}

void func_363(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_364(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_26();
	uParam1->f_18 = func_26();
	uParam1->f_19 = func_26();
	uParam1->f_20 = func_26();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

char* func_365()
{
	sVar0 = "";
	switch (iLocal_3073)
	{
		case 453432689:
		case -1075685676:
			sVar0 = "MP_SR_SUM_T_1";
			break;
		
		case 736523883:
		case 2024373456:
			sVar0 = "MP_SR_SUM_T_2";
			break;
		
		case -1074790547:
		case 961495388:
			sVar0 = "MP_SR_SUM_T_3";
			break;
		
		case -2084633992:
		case -86904375:
			sVar0 = "MP_SR_SUM_T_4";
			break;
		
		case 2144741730:
		case -608341376:
			sVar0 = "MP_SR_SUM_T_5";
			break;
		
		case 205991906:
		case 177293209:
			sVar0 = "MP_SR_SUM_T_6";
			break;
	}
	return sVar0;
}

void func_366()
{
	if (!Local_248.f_1)
	{
		if (func_612() && Local_1726.f_1122 == 2)
		{
			func_374();
		}
		iVar0 = func_314(func_663(), iLocal_1720);
		if (Local_280[unk_0xD803B885F5E47A62()].f_1 >= iVar0)
		{
			iLocal_1725 = 3;
			iLocal_1714 = func_373();
			func_372(3, 6, 2);
			if (func_612())
			{
				iVar1 = func_85(5392, -1, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar1, (Local_248.f_6 * 3 + Local_1726.f_1122)))
				{
					unk_0x5D96D8530B3D0904(&iVar1, (Local_248.f_6 * 3 + Local_1726.f_1122));
					func_77(5392, iVar1, -1, 1, 0);
				}
				func_367(Local_1726.f_1122);
			}
		}
		else
		{
			iLocal_1725 = 4;
			iLocal_1714 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_248.f_3, 7))
	{
		if (Local_248.f_15[func_748()] >= 3)
		{
			iLocal_1725 = 2;
			iLocal_1714 = round((to_float(func_373()) / IntToFloat(Local_248.f_9)));
		}
		else
		{
			iLocal_1725 = 1;
			iLocal_1714 = func_373();
		}
	}
	else if (Local_248.f_21 == unk_0xD803B885F5E47A62())
	{
		iVar2 = func_85(5391, -1, 0);
		iVar2++;
		func_77(5391, iVar2, -1, 1, 0);
		if ((iVar2 % 5) == 0)
		{
			func_372(3, 6, 2);
		}
		iLocal_1725 = 0;
		iLocal_1714 = func_373();
	}
	else
	{
		iLocal_1725 = 1;
		iLocal_1714 = func_373();
	}
}

void func_367(int iParam0)
{
	bVar0 = true;
	iVar1 = func_85(5392, -1, 0);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (bVar0 && !unk_0xEAE0D21A50E6C7F4(iVar1, (iVar2 * 3 + Local_1726.f_1122)))
		{
			bVar0 = false;
		}
		iVar2++;
	}
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0:
				if (!func_371(208, -1) && !Global_262145.f_21017)
				{
					func_274(208, 1, -1, 1);
					Local_280[unk_0xD803B885F5E47A62()] = 1;
				}
				break;
			
			case 1:
				if (!func_371(210, -1) && !Global_262145.f_21018)
				{
					func_274(210, 1, -1, 1);
					func_368();
					Local_280[unk_0xD803B885F5E47A62()] = 1;
				}
				break;
			
			case 2:
				if (!func_371(209, -1) && !Global_262145.f_21019)
				{
					func_274(209, 1, -1, 1);
					Local_280[unk_0xD803B885F5E47A62()] = 1;
				}
				break;
			}
	}
}

void func_368()
{
	if (!func_369(-1813897027))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -1813897027, 30, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), -1813897027, 30, 0);
	}
	if (!func_369(741814745))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 741814745, 30, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), 741814745, 30, 0);
	}
	if (!func_369(-37975472))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -37975472, 30, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), -37975472, 30, 0);
	}
	if (!func_369(615608432))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 615608432, 30, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), 615608432, 30, 0);
	}
	if (!func_369(-1169823560))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -1169823560, 15, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), -1169823560, 15, 0);
	}
	if (!func_369(-1420407917))
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -1420407917, 10, false, false);
	}
	else
	{
		unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), -1420407917, 10, 0);
	}
}

int func_369(int iParam0)
{
	if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iParam0, 0))
	{
		if (func_370(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	if ((((((((((iParam0 == -72657034 || iParam0 == -1716189206) || iParam0 == -1786099057) || iParam0 == -2067956739) || iParam0 == 1737195953) || iParam0 == 1141786504) || iParam0 == 1317494643) || iParam0 == -1786099057) || iParam0 == -102323637) || iParam0 == -1834847097) || iParam0 == -102973651)
	{
		return 0;
	}
	return 1;
}

int func_371(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_81(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				iVar0 = func_85(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_77(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_373()
{
	iVar0 = 0;
	if (iLocal_1725 == 1 || iLocal_1725 == 4)
	{
		iVar0 = Global_262145.f_21016;
	}
	else if (!Local_248.f_1)
	{
		if (func_612())
		{
			iVar1 = func_85(5392, -1, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar1, Local_248.f_6 * 3 + 2))
			{
				iVar0 = Global_262145.f_21012;
			}
			else if (unk_0xEAE0D21A50E6C7F4(iVar1, Local_248.f_6 * 3 + 1))
			{
				iVar0 = Global_262145.f_21011;
			}
			else if (unk_0xEAE0D21A50E6C7F4(iVar1, Local_248.f_6 * 3))
			{
				iVar0 = Global_262145.f_21010;
			}
			else
			{
				iVar0 = Global_262145.f_21009;
			}
		}
		else
		{
			iVar0 = Global_262145.f_21012;
		}
	}
	else if (Local_248.f_5 == 2)
	{
		iVar0 = Global_262145.f_21013;
	}
	else if (Local_248.f_5 == 3)
	{
		iVar0 = Global_262145.f_21014;
	}
	else if (Local_248.f_5 == 4)
	{
		iVar0 = Global_262145.f_21015;
	}
	return iVar0;
}

void func_374()
{
	switch (Local_1726.f_1116)
	{
		case 453432689:
			iVar0 = 5384;
			break;
		
		case 736523883:
			iVar0 = 5385;
			break;
		
		case -1074790547:
			iVar0 = 5386;
			break;
		
		case -2084633992:
			iVar0 = 5387;
			break;
		
		case 2144741730:
			iVar0 = 5388;
			break;
		
		case 205991906:
			iVar0 = 5389;
			break;
	}
	iLocal_1724 = func_85(iVar0, -1, 0);
	if (Local_280[unk_0xD803B885F5E47A62()].f_1 > iLocal_1724)
	{
		func_77(iVar0, Local_280[unk_0xD803B885F5E47A62()].f_1, -1, 1, 0);
	}
}

void func_375(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0) || iParam5)
	{
		iVar0 = func_602(iParam0);
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD2C792E5A65B6BF1(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x0F84621831DD8D8A(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0xB0D40A53430D217C(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0xFEDCD54A497F3495(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x9A28E8CB86CD4694(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_601(iVar0))
		{
			Global_111638.f_2358.f_539[iVar0].f_59 = uParam1->f_59;
			Global_111638.f_2358.f_539[iVar0].f_60 = uParam1->f_60;
			Global_111638.f_2358.f_539[iVar0].f_61 = uParam1->f_61;
			if (func_600(iParam0, iVar1, &iVar2, 0))
			{
				func_585(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111638.f_2358.f_539[iVar0].f_62 = uParam1->f_62;
			Global_111638.f_2358.f_539[iVar0].f_63 = uParam1->f_63;
			Global_111638.f_2358.f_539[iVar0].f_64 = uParam1->f_64;
			if (func_526(iParam0, iVar1, &iVar2))
			{
				func_585(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			bVar4 = func_523(iParam0);
			func_77(753, uParam1->f_60, Global_76431, 1, 0);
			func_77(754, uParam1->f_61, Global_76431, 1, 0);
			iVar5 = func_138(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == 1885233650)
				{
					iVar6 = func_521(iVar5);
				}
				else if (iVar1 == -1667301416)
				{
					iVar6 = func_519(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_380(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_138(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_376(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_380(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == 1885233650)
			{
				iVar9 = func_521(iVar9);
			}
			else
			{
				iVar9 = func_519(iVar9);
			}
			func_77(752, iVar9, Global_76431, 1, 0);
			func_77(2051, iVar9, Global_76431, 1, 0);
			func_274(161, 1, -1, 1);
		}
		if (iVar1 == 1885233650 || iVar1 == -1667301416)
		{
			iVar10 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
			iVar11 = unk_0xD1BC07002824FE76(iParam0, 1, unk_0x98F1B512A2CC07C5(iParam0, 1), unk_0x22286A85EDEAEC56(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
				{
					unk_0x30BBA34DD235D7FE(&Var12);
					if (iVar10 == 1551873674)
					{
						unk_0x4F79808059300187(-518535904, &Var12);
					}
					else
					{
						unk_0x4F79808059300187(530896308, &Var12);
					}
					unk_0x9A28E8CB86CD4694(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			}
		}
	}
}

int func_376(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_379(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_378(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_378(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_377(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_379(iParam3);
}

int func_377(int iParam0, int iParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_378(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_136(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_135(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_134(iParam0, func_135(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!unk_0x8CD06866876216F2())
	{
		if ((Global_1312811 != 4 && Global_1312811 != 5) && Global_1312811 != 7)
		{
			return 0;
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x16F2683693E537C9() && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76431;
	}
	Global_76432++;
	iVar5 = unk_0x134B62B726CEC8E6(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
		if (!func_518(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76432 > 1)
		{
		}
		else
		{
			func_515(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76477 };
		}
		else
		{
			uVar15 = { func_511(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76434[1] = { func_188(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_135(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_135(iVar0)));
					}
					else
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_135(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
					{
						func_515(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76434[1] = { func_188(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76494 };
							}
							else
							{
								uVar32 = { func_508(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76434[1] = { func_188(iVar5, 14, uVar32[iVar1], -1) };
								func_507(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
								if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
								{
									func_515(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_135(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_135(iVar0)));
								}
								else
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_135(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
								}
							}
							else
							{
								func_380(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
							{
								func_515(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_188(iVar5, iVar0, func_505(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 3))
				{
					uVar42 = { func_511(iVar5, 0) };
					func_380(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_504();
			if (iVar59 != -1)
			{
				func_501(iVar59, 0, iParam10);
			}
			func_499(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_508(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_188(iVar5, 14, uVar60[iVar1], -1) };
			func_507(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
			{
				func_515(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76432 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_497(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_507(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			func_515(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76434[1].f_12 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
				if (unk_0x1A5A491D253EA7BA(iVar70, 66092876, 0))
				{
					func_380(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76434[1].f_12 == 0)
		{
			func_490(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_135(iParam1);
		if (unk_0x36C584991B4C183F(iParam0, iVar71) != Global_76434[1].f_3 || unk_0xDADA8E1DD0D0D9D9(iParam0, iVar71) != Global_76434[1].f_4)
		{
			iVar72 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
			iVar73 = unk_0x4F4B24509D6989D0(iParam0, 7, unk_0x36C584991B4C183F(iParam0, 7), unk_0xDADA8E1DD0D0D9D9(iParam0, 7));
			if (((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x1A5A491D253EA7BA(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar73, -2095729091, 0)))
			{
				unk_0x64F9F278AB9DCA2C(iParam0, 7, 0, 0, unk_0xAA973E78065E07A0(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar72, -2095729091, 0)))
			{
				if (iVar5 == 1885233650)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 15, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 2, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, -1996375172, 11))
				{
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 0);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 1);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 2);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 3);
				}
				iVar75 = func_137(iParam0, 11);
				iVar76 = func_137(iParam0, 8);
				iVar77 = func_137(iParam0, 4);
				iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
				if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
				{
					if (iVar5 == 1885233650)
					{
						iVar74 = func_133(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == -1667301416)
					{
						iVar74 = func_133(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x1A5A491D253EA7BA(iVar74, 320460654, 0) || unk_0x1A5A491D253EA7BA(iVar74, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1420825402, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_137(iParam0, 8);
					}
				}
				iVar78 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
				if (unk_0x1A5A491D253EA7BA(iVar78, -356646862, 0))
				{
					iVar79 = func_489(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_497(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar79 = 11;
							iVar74 = func_133(iVar5, iParam2, 11, 4);
							if (!unk_0x1A5A491D253EA7BA(iVar74, -530089825, 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_488(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == -1667301416 && iParam2 >= 256) && unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar75 = func_137(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_133(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0))
					{
						iVar81 = func_486(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
						if (iVar81 != -99)
						{
							func_380(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_485(iVar5, iParam2, -1))
				{
					if (iVar5 == 1885233650)
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_133(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == -1667301416)
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_133(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_485(iVar5, iVar75, -1))
					{
						if ((iVar5 == -1667301416 && iVar75 >= 256) && (unk_0x1A5A491D253EA7BA(iVar74, -1200513218, 0) || unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0)))
						{
						}
						else if ((iVar5 == -1667301416 && iVar75 >= 256) && ((((((((unk_0x1A5A491D253EA7BA(iVar74, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar74, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 1830529185, 0)))
						{
						}
						else
						{
							iVar82 = func_484(iParam0, iParam2);
							iVar83 = func_486(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
							if (iVar83 != -99)
							{
								func_380(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								func_380(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == 1885233650)
								{
									iVar84 = func_483(iVar5, 11, -1);
									Global_76434[1] = { func_188(iVar5, 11, iVar84, -1) };
									iVar83 = func_486(iVar5, iVar84, iParam2, Global_76434[1].f_4);
									if (iVar83 == -99 || unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_380(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76434[1] = { func_188(iVar5, 11, iVar75, -1) };
						iVar85 = Global_76434[1].f_3;
						Global_76434[1] = { func_188(iVar5, 11, iParam2, -1) };
						iVar86 = Global_76434[1].f_3;
						if (iVar85 != iVar86)
						{
							iVar88 = func_484(iParam0, iParam2);
							Global_76434[1] = { func_188(iVar5, 8, iVar76, -1) };
							iVar87 = Global_76434[1].f_4;
							iVar89 = func_482(iVar5, iVar76, iVar87);
							if (iVar88 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								iVar90 = iVar88;
							}
							else if (iVar89 == -99)
							{
								iVar90 = iVar76;
								if (iVar5 == 1885233650)
								{
									iVar91 = func_133(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_132(iVar91) == 6) || unk_0x1A5A491D253EA7BA(iVar91, -1237899132, 0))
									{
										iVar89 = func_483(iVar5, 11, -1);
										Global_76434[1] = { func_188(iVar5, 11, iVar89, -1) };
										iVar90 = func_486(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								if (iVar5 == -1667301416 && (iVar76 == 32 || iVar76 == 33))
								{
									if (!unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar89 = func_483(iVar5, 11, -1);
										Global_76434[1] = { func_188(iVar5, 11, iVar89, -1) };
										iVar90 = func_486(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								iVar92 = -1;
								if (iVar5 == 1885233650)
								{
									iVar92 = func_133(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == -1667301416)
								{
									iVar92 = func_133(iVar5, iVar76, 8, 4);
								}
								if (unk_0x1A5A491D253EA7BA(iVar92, -316495692, 0))
								{
									iVar89 = func_483(iVar5, 11, -1);
									Global_76434[1] = { func_188(iVar5, 11, iVar89, -1) };
									iVar90 = func_486(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								}
							}
							else
							{
								iVar90 = func_486(iVar5, iVar89, iParam2, iVar87);
								if (iVar5 == 1885233650)
								{
									if (unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_481(iVar5, func_137(iParam0, 4), iVar89))
										{
											iVar90 = 240;
										}
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_133(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_481(iVar5, func_137(iParam0, 4), iVar89))
										{
											iVar90 = 48;
										}
									}
								}
							}
							if (iVar90 != -99)
							{
								func_380(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == 1885233650)
							{
								iVar89 = func_483(iVar5, 11, -1);
								Global_76434[1] = { func_188(iVar5, 11, iVar89, -1) };
								iVar90 = func_486(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								if (iVar90 == -99)
								{
									iVar90 = 240;
								}
								func_380(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == -1667301416)
							{
								func_380(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_478(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, unk_0xAA973E78065E07A0(iParam0, 10));
				}
			}
			func_499(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_489(iVar5, func_505(iParam0, 8, -1), iParam2, func_505(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_85(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_85(2158, iParam10, 0);
				}
				unk_0xBF2343612F661793(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar93 = -99;
					if (iVar5 == 1885233650)
					{
						iVar93 = func_521(iParam2);
					}
					else if (iVar5 == -1667301416)
					{
						iVar93 = func_519(iParam2);
					}
					if (iVar93 != -99 && iParam2 != iVar93)
					{
						iParam2 = iVar93;
					}
				}
				func_431(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar94 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar94, -356646862, 0))
			{
				iVar95 = func_137(iParam0, 11);
				iVar96 = func_137(iParam0, 4);
				iVar97 = func_489(iVar5, iParam2, iVar95, iVar96);
				if (iVar97 == -99)
				{
					iVar97 = func_497(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar94)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar97 = 11;
						iVar98 = func_133(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar98, -530089825, 0))
						{
							iVar97 = -99;
						}
						break;
				}
				if (iVar97 != -99)
				{
					iVar99 = 0;
					while (iVar99 < 18)
					{
						if (func_488(iVar5, iVar97, iVar99) == iVar94)
						{
							iVar11 = iVar99;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar99++;
					}
				}
			}
			func_499(iParam0, iParam1, iParam2, iParam6, 0);
			iVar100 = func_137(iParam0, 11);
			if (func_485(iVar5, iVar100, -1))
			{
				iVar101 = func_482(iVar5, iParam2, Global_76434[1].f_4);
				func_478(iVar5, iVar101);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_489(iVar5, iParam2, func_137(iParam0, 11), func_137(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar102 = func_137(iParam0, 7);
				if (!func_428(iVar5, iVar102, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x64F9F278AB9DCA2C(iParam0, func_135(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == 1885233650 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)) || ((iVar5 == -1667301416 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)))
			{
				iVar103 = func_85(2098, iParam10, 0);
				iVar104 = func_85(2099, iParam10, 0);
				iVar105 = func_85(2100, iParam10, 0);
				fVar106 = func_427(135, iParam10);
				if (iVar5 == 1885233650)
				{
					unk_0x466ED20F52F36C02(iParam0, 0, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x466ED20F52F36C02(iParam0, 21, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				iVar107 = 0;
				while (iVar107 < 20)
				{
					unk_0x8173BC90AE40BF1F(iParam0, iVar107, 0f);
					iVar107++;
				}
			}
			else
			{
				func_411(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar108 = func_137(iParam0, 11);
			iVar109 = func_137(iParam0, 8);
			if (iVar5 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(func_133(iVar5, iVar108, 11, 3), -1719338724, 0))
				{
					if (!func_481(iVar5, iParam2, func_482(iVar5, iVar109, 0)))
					{
						func_380(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == -1667301416)
			{
				if (unk_0x1A5A491D253EA7BA(func_133(iVar5, iVar108, 11, 4), -1719338724, 0))
				{
					if (!func_481(iVar5, iParam2, func_482(iVar5, iVar109, 0)))
					{
						func_380(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_188(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_489(iVar5, func_137(iParam0, 8), func_137(iParam0, 11), iParam2);
			}
			iVar110 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar110, -356646862, 0))
			{
				iVar111 = func_489(iVar5, iVar109, iVar108, iParam2);
				if (iVar111 == -99)
				{
					iVar111 = func_497(iParam0, iVar5, 11, iVar108, 3, 0);
				}
				switch (iVar110)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar111 = 11;
						iVar112 = func_133(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar112, -530089825, 0))
						{
							iVar111 = -99;
						}
						break;
				}
				if (iVar111 != -99)
				{
					iVar113 = 0;
					while (iVar113 < 18)
					{
						if (func_488(iVar5, iVar111, iVar113) == iVar110)
						{
							iVar11 = iVar113;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar113++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_135(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_135(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_135(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_489(iVar5, iVar3, func_137(iParam0, 11), func_137(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_410(iParam0))
				{
					iVar114 = func_408(iParam0, iVar5, iParam1, iParam2);
					if (iVar114 > 0)
					{
						iVar114 = (iVar114 + unk_0xDADA8E1DD0D0D9D9(iParam0, 9));
						if (!func_402(iParam0, 9, iVar114))
						{
							func_380(iParam0, 9, iVar114, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
					if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar115 = func_85(2040, -1, 0);
				if (unk_0x36C584991B4C183F(iParam0, 5) != 0)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 5, func_396(iParam0, iVar115), func_395(iParam0, iVar115), func_394(iParam0, iVar115));
				}
				if (iParam0 == unk_0x16F2683693E537C9())
				{
					unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_396(unk_0x16F2683693E537C9(), iVar115), func_395(unk_0x16F2683693E537C9(), iVar115), 0);
					unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_394(unk_0x16F2683693E537C9(), iVar115));
					func_393(unk_0xD803B885F5E47A62(), iVar115);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == 1885233650 && iParam2 >= 92) || (iVar5 == -1667301416 && iParam2 >= 55))
				{
					if (unk_0x1A5A491D253EA7BA(Global_2621444, -319568873, 0))
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == -1667301416 && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar116 = func_505(iParam0, 4, -1);
					iVar117 = iParam2;
				}
				else
				{
					iVar116 = iParam2;
					iVar117 = func_505(iParam0, 11, -1);
				}
				if (func_392(iVar5, 11, iVar117, -1))
				{
					if (!func_391(iVar5, 4, iVar116, -1))
					{
						if (func_390(iVar5, 4, iVar116, &uVar118))
						{
							func_380(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_391(iVar5, 4, iVar116, -1))
				{
					if (func_389(iVar5, 4, iVar116, &uVar118))
					{
						func_380(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar119 = unk_0x36C584991B4C183F(iParam0, 6);
				iVar120 = unk_0xDADA8E1DD0D0D9D9(iParam0, 6);
				iVar121 = unk_0x4F4B24509D6989D0(iParam0, 6, iVar119, iVar120);
				iVar122 = unk_0x36C584991B4C183F(iParam0, 4);
				iVar123 = unk_0xDADA8E1DD0D0D9D9(iParam0, 4);
				iVar124 = unk_0x4F4B24509D6989D0(iParam0, 4, iVar122, iVar123);
				iVar125 = func_137(iParam0, 4);
				iVar126 = func_137(iParam0, 6);
				if (func_388(iVar5, iVar121))
				{
					if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_387(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_378(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_380(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_378(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_380(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_386(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_378(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_380(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_378(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_380(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
				if (func_388(iVar5, iVar124))
				{
					if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_386(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_378(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_380(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_378(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_380(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_387(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_378(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_380(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_378(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_380(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_490(iParam0);
				iVar132 = unk_0x36C584991B4C183F(iParam0, 1);
				iVar133 = unk_0xDADA8E1DD0D0D9D9(iParam0, 1);
				iVar134 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar132, iVar133);
				if (unk_0x1A5A491D253EA7BA(iVar134, 838607662, 0))
				{
					iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_497(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_381(iParam0, &uVar4))
		{
			func_380(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_380(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_380(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar135 = func_488(iVar5, func_505(iParam0, 3, -1), iVar11);
		if (iVar135 != -1)
		{
			if (iVar5 == 1885233650)
			{
				iVar10 = func_378(iVar5, iVar135, 3, 3);
			}
			else if (iVar5 == -1667301416)
			{
				iVar10 = func_378(iVar5, iVar135, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_380(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_381(int iParam0, var uParam1)
{
	*uParam1 = func_505(unk_0x16F2683693E537C9(), 2, -1);
	if (func_85(753, Global_76431, 0) != -99 && func_383())
	{
		if (func_382() == 4)
		{
			return 1;
		}
		if (func_85(753, Global_76431, 0) == 0 && func_85(754, Global_76431, 0) == 0)
		{
			if (func_371(161, Global_76431))
			{
				if (func_85(2051, Global_76431, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_85(752, Global_76431, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_85(753, Global_76431, 0);
		iVar1 = func_85(754, Global_76431, 0);
		if (!func_402(iParam0, iVar1, iVar0))
		{
			if (func_371(161, Global_76431))
			{
				*uParam1 = func_85(2051, Global_76431, 0);
			}
			else
			{
				*uParam1 = func_85(752, Global_76431, 0);
			}
			func_77(753, -99, Global_76431, 1, 0);
			func_77(754, 2, Global_76431, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_382()
{
	return Global_1312811;
}

int func_383()
{
	if (func_385() && func_384(0))
	{
		return 1;
	}
	return 0;
}

var func_384(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_385()
{
	return func_384(func_82() + 1);
}

int func_386(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_133(iParam0, iParam1, 6, 3);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
			{
				if ((unk_0x1A5A491D253EA7BA(iParam2, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iParam2, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_133(iParam0, iParam1, 6, 4);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_387(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_133(iParam0, iParam1, 4, 3);
				iVar1 = func_132(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || (unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 713391749, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 434101562, 0))
				{
					if ((((((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_133(iParam0, iParam1, 4, 4);
				iVar1 = func_132(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
				{
					if ((((unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1207283343, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1052059919, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1885233650:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_389(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_133(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_378(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_133(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_378(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_391(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 4, 4);
						}
						if (unk_0x1A5A491D253EA7BA(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 11, 4);
						}
						return unk_0x1A5A491D253EA7BA(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_393(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xF1C520A9D38679DE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_394(int iParam0, int iParam1)
{
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_396(int iParam0, int iParam1)
{
	bVar0 = unk_0x36C584991B4C183F(iParam0, 9) != false;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_397(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == -1667301416)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == 1885233650)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_397(int iParam0, int iParam1)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
	if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	if (unk_0x1A5A491D253EA7BA(iVar4, 240476421, 8))
	{
		if (iVar2 == 1885233650)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		return func_401(iParam0, iParam1);
	}
	if (func_400(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
		if (unk_0x1A5A491D253EA7BA(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == 1885233650)
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1882920022, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -317649054, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1536649085, 0) && !unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			iVar6 = func_399(iVar5, 0);
			if (iVar2 == 1885233650)
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_132(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_132(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 248194463, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 396458410, 0))
		{
			iVar7 = func_398(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_132(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -779835469, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1119232689, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2102859770, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1784133476, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1607949555, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1976716889, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2099109084, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1488441032, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1719167561, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1431529976, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1274099003, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1723403459, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(iVar5, -1407614029, 0))
				{
					return func_401(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 912543594, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -1086258388, 0) || unk_0x1A5A491D253EA7BA(iVar5, 103539798, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -994703884, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044466679, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2020757158, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1064262817, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1419806467, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1053842259, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1358888880, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -441291342, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747583185, 0))
		{
			if (iVar2 == -1667301416)
			{
				if (bVar1)
				{
					return func_401(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2088146832, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -872449705, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 700658917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1714969731, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 745826556, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1055526375, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 144417099, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 492620493, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -416620954, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -102825006, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -733792105, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 137011325, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -641612092, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1351486939, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2119756144, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1507532917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 947651647, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1506370874, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1927516484, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1786447517, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1010805287, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1325813684, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -549843760, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -828478571, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1690933245, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1360588936, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2136821028, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1830529185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -269266203, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 201427653, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 967829025, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -685039259, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1266557933, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1813210391, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 263623295, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -309899747, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -89003918, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747858475, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 490219883, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1208450825, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 297865853, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 602650322, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 905042630, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1204125293, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 310055897, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 606713654, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1831422288, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -838136846, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 655638019, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 970679185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 83294665, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 382246252, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -99064836, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -697656159, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -398213037, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1380605304, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1711219157, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1466664110, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1968575702, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 245429010, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 15161247, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044923487, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -915352927, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -538378351, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2139144017, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -435539886, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 695107163, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1499233212, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2124629577, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1877382859, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1375878737, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, 2006289597, 0))
			{
				if (iVar2 == 1885233650)
				{
					return func_401(iParam0, iParam1) + 15;
				}
				else
				{
					return func_401(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -540436505, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1207461955, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (4 + iVar3);
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1663871176, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1);
			}
			else
			{
				return func_401(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 398019854, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_401(iParam0, iParam1) + 15;
			}
			else
			{
				return func_401(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1965569012, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2026620439, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1410897066, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -2017999390, 0) || unk_0x1A5A491D253EA7BA(iVar5, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_132(iVar5);
		}
	}
	if (iVar2 == 1885233650)
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_398(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_400(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_402(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_76434[1] = { func_188(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_511(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_402(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_508(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_402(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76434[2] = { func_188(iVar0, 14, iVar6, -1) };
									if (Global_76434[2].f_12 == iVar5)
									{
										if (func_402(iParam0, 14, iVar6))
										{
											if (!func_403(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76434[2])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_137(iParam0, iVar4);
						Global_76434[2] = { func_188(iVar0, iVar4, iVar1, -1) };
						if (!func_403(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76434[2])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_85(1757, Global_76431, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_508(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_402(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1].f_12) == Global_76434[1].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_76434[1].f_12) == Global_76434[1].f_4 || Global_76434[1].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76434[1].f_12 == 0 && unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6)) && unk_0x1A5A491D253EA7BA(Global_2621444, -1033433901, 1)) && unk_0x03A72E78F74F2DEC(Global_2621444) > 0)
		{
			iVar50 = unk_0x03A72E78F74F2DEC(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0xE6C0870CB80884BF(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579)
				{
					unk_0x30BBA34DD235D7FE(&Var51);
					unk_0x7467B50942D9D7EE(iVar47, &Var51);
					if (Var51.f_3 == unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1].f_12) && Var51.f_4 == unk_0x22286A85EDEAEC56(iParam0, Global_76434[1].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_76434[1].f_3 == unk_0x36C584991B4C183F(iParam0, func_135(iParam1)) && Global_76434[1].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_135(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76433++;
			if (Global_76433 == 1)
			{
				if (func_392(iVar0, 11, func_137(iParam0, 11), -1))
				{
					if (func_390(iVar0, 4, iParam2, &uVar68))
					{
						return func_402(iParam0, 4, uVar68);
					}
				}
				else if (func_389(iVar0, 4, iParam2, &uVar68))
				{
					return func_402(iParam0, 4, uVar68);
				}
			}
			Global_76433 = (Global_76433 - 1);
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_508(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_407(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == 225514697)
	{
		if (func_406(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (func_406(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_406(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 14, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 1, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 14, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_133(iParam0, iParam2, 1, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_133(iParam0, iParam2, 1, 3);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_133(iParam0, iParam2, 1, 4);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case -1692214353:
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case -1686040670:
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case 1885233650:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_133(iParam0, iParam2, 14, 3);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_133(iParam0, iParam2, 14, 4);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_407(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_408(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_400(iParam0))
	{
		return -99;
	}
	if (func_409(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == 1885233650)
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_133(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0xB3A1A93269979713(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_378(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == -1667301416)
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_133(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0xB3A1A93269979713(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xAEF3D5EB046168F2(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_378(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_409(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam0);
		if (iVar0 == 1885233650)
		{
			if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == -1667301416)
		{
			if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_411(int iParam0, int iParam1)
{
	if (!unk_0xCCBA4C0B3BD2AB7B(iParam0))
	{
	}
	unk_0x85EC76A805FF970B(iParam0, &Var0);
	iVar10 = func_85(2095, iParam1, 0);
	iVar11 = func_85(2096, iParam1, 0);
	iVar12 = func_85(2097, iParam1, 0);
	iVar13 = func_85(2098, iParam1, 0);
	iVar14 = func_85(2099, iParam1, 0);
	iVar15 = func_85(2100, iParam1, 0);
	fVar16 = func_427(134, iParam1);
	fVar17 = func_427(135, iParam1);
	fVar18 = func_427(136, iParam1);
	bVar19 = func_371(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x466ED20F52F36C02(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_85(2101, iParam1, 0);
		if (iVar20 > 0)
		{
			func_412(iParam0, iParam1, 0);
		}
	}
}

void func_412(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_426(iVar1);
		if (!bParam2)
		{
			fVar3 = func_427(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_425(iVar2, iParam1);
		}
		unk_0x8173BC90AE40BF1F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_424(iVar4);
		iVar6 = func_423(iVar5);
		iVar7 = func_422(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_419(iVar6, iParam1, -1);
				fVar11 = func_427(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_418(iVar6, iParam1);
				fVar11 = func_425(iVar7, iParam1);
			}
			unk_0xD1F6F90A501388DD(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_417(iVar5);
			iVar9 = func_416(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_85(iVar8, iParam1, 0);
					iVar14 = func_85(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_415(iVar8, iParam1);
					iVar14 = func_415(iVar9, iParam1);
				}
				func_414(iVar13, &iVar12, &iVar15);
				unk_0xF7EB0C8006400E03(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_413(&iParam0, iParam1, bParam2);
}

void func_413(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		fVar0 = func_427(157, iParam1);
	}
	else
	{
		fVar0 = func_425(157, iParam1);
	}
	if (*iParam0 == unk_0x16F2683693E537C9())
	{
	}
	unk_0x4258D118A5836248(*iParam0, round(fVar0));
}

void func_414(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_415(int iParam0, int iParam1)
{
	uVar0 = Global_2548434[iParam0][func_81(iParam1)];
	if (unk_0xB2F7928AAEE89A48(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return -1;
}

int func_418(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_82();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	if (!unk_0xB076A81AAD8BC406(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_419(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_82();
	}
	iVar0 = 0;
	iVar1 = func_421(iParam0, iParam1);
	uVar2 = func_420(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_420(int iParam0)
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

int func_421(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_82();
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

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_425(int iParam0, int iParam1)
{
	uVar0 = Global_2582968[iParam0][func_81(iParam1)];
	if (unk_0x0D91FA9057C5153C(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_427(int iParam0, int iParam1)
{
	iVar0 = Global_2582968[iParam0][func_81(iParam1)];
	if (unk_0x893A626C476B583D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0 == 1885233650)
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar2 = Global_4267116;
			iVar1 = Global_4267115;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_133(iParam0, iParam1, 7, 3);
			iVar1 = func_132(iVar2);
			Global_4267117 = iParam1;
			Global_4267116 = iVar2;
			Global_4267115 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar4 = Global_4267119;
			iVar3 = Global_4267118;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_133(iParam0, iParam3, 11, 3);
			iVar3 = func_132(iVar4);
			Global_4267120 = iParam3;
			Global_4267119 = iVar4;
			Global_4267118 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar6 = Global_4267122;
			iVar5 = Global_4267121;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_133(iParam0, iParam4, 8, 3);
			iVar5 = func_132(iVar6);
			Global_4267123 = iParam4;
			Global_4267122 = iVar6;
			Global_4267121 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar8 = Global_4267125;
			iVar7 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_133(iParam0, iParam10, 1, 3);
			iVar7 = func_132(iVar8);
			Global_4267126 = iParam10;
			Global_4267125 = iVar8;
			Global_4267124 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x1A5A491D253EA7BA(iVar4, -1855618474, 0) || unk_0x1A5A491D253EA7BA(iVar4, 351511157, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0) && !unk_0x1A5A491D253EA7BA(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -372885432, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, 531704825, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -372885432, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_133(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x1A5A491D253EA7BA(iVar4, -63750166, 0) || unk_0x1A5A491D253EA7BA(iVar4, -870074461, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1834446747, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1274099003, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 137011325, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_430(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_430(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -353070590, 0))
			{
				if (((unk_0x1A5A491D253EA7BA(iVar4, -870074461, 0) || unk_0x1A5A491D253EA7BA(iVar4, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0)) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_133(iParam0, iParam11, 4, 3);
				}
				if (unk_0x1A5A491D253EA7BA(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 654065530, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x1A5A491D253EA7BA(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, 974680318, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1625463492, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -779835469, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1086258388, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1021189127, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -672871169, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -196114988, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1322269404, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1655154167, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 137011325, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -491588875, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!unk_0x1A5A491D253EA7BA(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 974680318, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, 248194463, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572350888, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1817355735, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1538937264, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 602650322, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -99064836, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -148928294, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -435539886, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1914383230, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1553766533, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_485(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0)))
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_137(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_132(func_133(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_485(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0))) || unk_0x1A5A491D253EA7BA(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_137(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_132(func_133(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0))) || unk_0x1A5A491D253EA7BA(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) && unk_0x1A5A491D253EA7BA(iVar2, -277681306, 0)) || (((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -277681306, 0)) && !unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x1A5A491D253EA7BA(iVar6, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1458930564, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 2048281121, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 19149565, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x1A5A491D253EA7BA(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x1A5A491D253EA7BA(iVar6, 684992453, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x1A5A491D253EA7BA(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_429(iVar6)) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar12 = Global_4267116;
			iVar11 = Global_4267115;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_133(iParam0, iParam1, 7, 4);
			iVar11 = func_132(iVar12);
			Global_4267117 = iParam1;
			Global_4267116 = iVar12;
			Global_4267115 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar14 = Global_4267119;
			iVar13 = Global_4267118;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_133(iParam0, iParam3, 11, 4);
			iVar13 = func_132(iVar14);
			Global_4267120 = iParam3;
			Global_4267119 = iVar14;
			Global_4267118 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar16 = Global_4267122;
			iVar15 = Global_4267121;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_133(iParam0, iParam4, 8, 4);
			iVar15 = func_132(iVar16);
			Global_4267123 = iParam4;
			Global_4267122 = iVar16;
			Global_4267121 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar18 = Global_4267125;
			iVar17 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_133(iParam0, iParam10, 1, 4);
			iVar17 = func_132(iVar18);
			Global_4267126 = iParam10;
			Global_4267125 = iVar18;
			Global_4267124 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_133(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x1A5A491D253EA7BA(iVar14, -1855618474, 0) || unk_0x1A5A491D253EA7BA(iVar14, 351511157, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -299089347, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0) && !unk_0x1A5A491D253EA7BA(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar12, -372885432, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar12, 531704825, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar12, -372885432, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((unk_0x1A5A491D253EA7BA(iVar14, -63750166, 0) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_430(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_430(iParam0, iParam3) || unk_0x1A5A491D253EA7BA(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -353070590, 0))
			{
				if ((((unk_0x1A5A491D253EA7BA(iVar14, -870074461, 0) || unk_0x1A5A491D253EA7BA(iVar14, -1174924468, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 596326873, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0)) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_133(iParam0, iParam11, 4, 4);
				}
				if (unk_0x1A5A491D253EA7BA(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x1A5A491D253EA7BA(iVar12, -920534092, 0) || unk_0x1A5A491D253EA7BA(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x1A5A491D253EA7BA(iVar14, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar14, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1714969731, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 947651647, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x1A5A491D253EA7BA(iVar14, 700658917, 0) || unk_0x1A5A491D253EA7BA(iVar14, 745826556, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 144417099, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, 1553766533, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1914383230, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, -920534092, 0))
					{
						if (unk_0x1A5A491D253EA7BA(iVar16, 441715397, 0) || unk_0x1A5A491D253EA7BA(iVar16, 264959411, 0))
						{
							if (unk_0x1A5A491D253EA7BA(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x1A5A491D253EA7BA(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, 1406402954, 1)) || (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_485(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -939525357, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || unk_0x1A5A491D253EA7BA(iVar14, -55550566, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -55104292, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -779835469, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1086258388, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -672871169, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -196114988, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1407863332, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x1A5A491D253EA7BA(iVar16, 1455992833, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -870074461, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1174924468, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1177480446, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1347486026, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1655154167, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2105858993, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1893564692, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1710451520, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1416808511, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1641506460, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || unk_0x1A5A491D253EA7BA(iVar16, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -352447393, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -642551350, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -819569488, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2020068325, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -58412562, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -435539886, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 974680318, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x1A5A491D253EA7BA(iVar16, 1965569012, 0) || unk_0x1A5A491D253EA7BA(iVar16, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1353777856, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_482(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 654065530, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					unk_0x7467B50942D9D7EE(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_133(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0))) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 602650322, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 905042630, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1204125293, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 821147517, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1607949555, 0))) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1831422288, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, 1965569012, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((unk_0x1A5A491D253EA7BA(iVar16, -1703203608, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1415000253, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, -7109286, 0) || unk_0x1A5A491D253EA7BA(iVar16, 1943347821, 0))
				{
					return 0;
				}
				else if (((unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar38 = -1;
				if (iParam11 >= 256)
				{
					iVar38 = func_133(iParam0, iParam11, 4, 4);
				}
				if (unk_0x1A5A491D253EA7BA(iVar38, -33031567, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_429(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_430(int iParam0, int iParam1)
{
	if (iParam0 == 1885233650)
	{
		iVar0 = func_133(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0) || unk_0x1A5A491D253EA7BA(iVar0, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1274099003, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_485(iParam0, iParam1, -1);
	}
	else if (iParam0 == -1667301416)
	{
		iVar1 = func_133(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_132(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x1A5A491D253EA7BA(iVar1, -1393156190, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_431(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	func_477(unk_0x12AB0310C2281427("hairOverlay"), iParam0);
	iVar1 = func_476(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_76431;
		}
		func_501(iVar1, 1, iParam2);
	}
	func_432(iParam0, bParam3, 0);
}

void func_432(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = Global_76431;
		unk_0x68E65DDE8CFEDD57(iParam0);
		iVar14 = func_475(iParam0);
		bVar15 = func_470(iParam0, 0);
		bVar16 = func_466(iParam0);
		bVar17 = func_465(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_462(iVar18, iVar0))
			{
				if (func_455(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_452(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						unk_0x8A01F93D41A7B4C6(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_462(123, iVar0))
		{
			if (unk_0x6470E293FA6E8179(-1719270477, -1824026490) != 7)
			{
				unk_0x8A01F93D41A7B4C6(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = unk_0x7CD02DB660471C17(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (unk_0x835E39F167B067AB(iVar14, iVar19, &Var21))
			{
				if (!unk_0x232048AB4B0E0259(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_462(iVar36, iVar0))
					{
						if (func_452(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_434(Var21.f_2, Var21.f_3, iVar36))
							{
								unk_0x8A01F93D41A7B4C6(iParam0, Var21.f_2, Var21.f_3);
								func_433(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_433(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -2083543812);
					break;
				
				case -485989621:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1873408074);
					break;
				
				case 711356870:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1873408074);
					break;
				
				case 111487556:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 510898066);
					break;
				
				case 588276502:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 510898066);
					break;
				
				case -3335024:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 557464221);
					break;
				
				case 1184770609:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 557464221);
					break;
				
				case 359647189:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2089193796);
					break;
				
				case 1545327916:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1305509445);
					break;
				
				case 954502846:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -638853135);
					break;
				
				case -893208491:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -638853135);
					break;
				
				case -1661674318:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1601527241);
					break;
				
				case -1624645348:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1960396175);
					break;
				
				case 620358850:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 54045697);
					break;
				
				case 122204512:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1310058833);
					break;
				
				case -645147161:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 251854291);
					break;
				
				case -375556598:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2062329004);
					break;
				
				case 1841102407:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1538230799);
					break;
				
				case 831620593:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -59766962);
					break;
				
				case 1129884031:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1480518916);
					break;
				
				case 2092301321:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -482380281);
					break;
				
				case 580667351:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -76867803);
					break;
				
				case 1538832911:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -76867803);
					break;
				
				case -1355259635:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -533311445);
					break;
				
				case -1583168030:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2137255691);
					break;
				
				case -1831032746:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2137255691);
					break;
				
				case -2060448515:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -2042378246);
					break;
				
				case -50365286:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 756993084);
					break;
				
				case -364095692:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 756993084);
					break;
				
				case -606979520:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1161584545);
					break;
				
				case -1057062007:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1161584545);
					break;
				
				case -1253872621:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1528861297);
					break;
				
				case -1525625938:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1528861297);
					break;
				
				case 603801989:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 806416816);
					break;
				
				case 432289043:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 806416816);
					break;
				
				case 176592536:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1433191244);
					break;
				
				case -126291331:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1433191244);
					break;
				
				case 2093415191:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1917136673);
					break;
				
				case 1383966341:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1917136673);
					break;
				
				case 1061027846:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1634927571);
					break;
				
				case 610754913:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1634927571);
					break;
				
				case 1856271834:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1965545249);
					break;
				
				case 151235226:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1965545249);
					break;
				
				case 1292317344:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1855774824);
					break;
				
				case 1592055387:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1855774824);
					break;
			}
			switch (iParam2)
			{
				case 1389004292:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -408720218);
					break;
				
				case 459577145:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -789630253);
					break;
				
				case 697971620:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -789630253);
					break;
				
				case -157037136:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1104646403);
					break;
				
				case 70412493:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1104646403);
					break;
				
				case -861963864:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1535753965);
					break;
				
				case -496458438:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1535753965);
					break;
				
				case -1356579150:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -99283873);
					break;
				
				case -1125721545:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -485563451);
					break;
				
				case -2065044930:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1432409825);
					break;
				
				case -346765569:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1432409825);
					break;
				
				case -734816067:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -302122276);
					break;
				
				case -961282630:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -717650362);
					break;
				
				case 1134491538:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -233338433);
					break;
				
				case 842421441:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 314602147);
					break;
				
				case 523316919:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1900511936);
					break;
				
				case 158466873:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 821039296);
					break;
				
				case 1789019544:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -545035086);
					break;
				
				case 1426332252:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1960507422);
					break;
				
				case 1178893529:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -694062896);
					break;
				
				case -1101107129:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1829603753);
					break;
				
				case -1790763503:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2045678662);
					break;
				
				case -1550271812:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2045678662);
					break;
				
				case -384612940:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1648833799);
					break;
				
				case -45257176:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -75503803);
					break;
				
				case -866087857:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -75503803);
					break;
				
				case -623761102:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1501392494);
					break;
				
				case 1075770310:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1390523363);
					break;
				
				case 342137938:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1390523363);
					break;
				
				case 599407357:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1233403366);
					break;
				
				case 335056082:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1233403366);
					break;
				
				case 1164668855:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1084269847);
					break;
				
				case -424365493:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1084269847);
					break;
				
				case -1995737350:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1344114351);
					break;
				
				case 2052610452:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1344114351);
					break;
				
				case 745160145:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1154163217);
					break;
				
				case 238944633:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1154163217);
					break;
				
				case -1894874368:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1174984361);
					break;
				
				case -1050515545:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1174984361);
					break;
				
				case -1296283045:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 495811116);
					break;
				
				case -254061820:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 495811116);
					break;
				
				case -482822209:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1152130184);
					break;
				
				case -1148622755:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1152130184);
					break;
				
				case 499821790:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1987407913);
					break;
				
				case 132940066:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1987407913);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					unk_0x8A01F93D41A7B4C6(iParam0, 202420620, -501147160);
					break;
			}
			switch (iParam2)
			{
				case -1214222467:
					unk_0x8A01F93D41A7B4C6(iParam0, 202420620, -1739422168);
					break;
			}
			break;
		
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					unk_0x8A01F93D41A7B4C6(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					unk_0x8A01F93D41A7B4C6(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					unk_0x8A01F93D41A7B4C6(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					unk_0x8A01F93D41A7B4C6(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					unk_0x8A01F93D41A7B4C6(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					unk_0x8A01F93D41A7B4C6(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, -588549683);
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, -965491494);
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_434(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_449(30260, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_449(30261, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_449(30262, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_449(30263, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_449(30264, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_449(30265, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_449(30266, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_449(30267, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_449(30268, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_449(30269, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_449(30270, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_449(30271, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_449(30272, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_449(30273, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_449(30274, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_449(30275, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_449(30276, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_449(30277, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_449(30278, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_449(30279, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_449(30280, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_449(30281, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_449(30282, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_449(30283, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_449(30284, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_449(30285, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_449(30286, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_449(30287, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_449(30288, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_449(30289, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_449(28255, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_445(89, -1) || func_449(30254, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_445(90, -1) || func_449(30255, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_445(92, -1) || func_449(30256, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_445(89, -1) && func_445(90, -1)) && func_445(92, -1)) && func_445(91, -1)) || func_449(30257, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -502214028:
				case -1413356029:
					if (func_445(78, -1) || func_449(28199, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1413356029);
					break;
				
				case 836015556:
				case -1849502305:
					if (((func_445(77, -1) && func_445(78, -1)) && func_444(92, -1) >= func_443(92, 5, 9)) || func_449(28200, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1849502305);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -104345338:
				case 1184426490:
				case 47527010:
				case 1505693935:
				case -1551981580:
				case 1572497951:
					if (((func_444(93, -1) >= func_443(93, 5, 9) && func_445(79, -1)) && func_445(80, -1)) || func_449(28204, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, ((iParam1 == 1505693935 || iParam1 == -1551981580) || iParam1 == 1572497951));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case 1848216712:
				case -965460704:
					if (func_445(81, -1) || func_449(28206, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -965460704);
					break;
				
				case 223413431:
				case -1917254263:
					if (func_444(94, -1) >= func_443(94, 5, 9) || func_449(28207, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1917254263);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -432155816:
				case 1777785544:
					if (((func_445(84, -1) && func_445(85, -1)) && func_444(97, -1) >= func_443(97, 5, 9)) || func_449(28212, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1777785544);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1838365509:
				case -2062177771:
					if (func_449(28249, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2062177771);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -73524046:
				case 1921321590:
					if (func_449(28183, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1921321590);
					break;
				
				case -1843193891:
				case -822177429:
					if (func_449(28182, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -822177429);
					break;
				
				case -1224204417:
				case -531271155:
					if (func_449(28184, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -531271155);
					break;
				
				case 921109652:
				case 412829693:
					if (func_449(28181, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 412829693);
					break;
				
				case -1009122462:
				case -1411787934:
					if (func_449(28178, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1411787934);
					break;
				
				case -2143877160:
				case 653645139:
					if (func_449(28177, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 653645139);
					break;
				
				case 985961343:
				case 1848048195:
					if (func_449(28176, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1848048195);
					break;
				
				case 906071982:
				case -781400442:
					if (func_449(28180, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -781400442);
					break;
				
				case 566663142:
				case 1507919906:
					if (func_449(28179, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1507919906);
					break;
				
				case 764251611:
				case -1381102054:
					if (((((((((func_449(28176, -1, -1) && func_449(28177, -1, -1)) && func_449(28178, -1, -1)) && func_449(28179, -1, -1)) && func_449(28180, -1, -1)) && func_449(28181, -1, -1)) && func_449(28182, -1, -1)) && func_449(28183, -1, -1)) && func_449(28184, -1, -1)) || func_449(28221, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1381102054);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1575240476:
				case 565394453:
					if (func_449(28191, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 565394453);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -809444617:
				case -498335731:
					if (func_449(28190, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -498335731);
					break;
				
				case -1643354138:
				case -137061435:
					if (func_449(28189, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -137061435);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -547605203:
				case 2077453849:
					if (func_440(0, 1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2077453849);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1576036346:
				case 585832887:
					if ((((((((((((((((((func_445(77, -1) && func_445(78, -1)) && func_444(92, -1) >= func_443(92, 5, 9)) && func_444(93, -1) >= func_443(93, 5, 9)) && func_445(79, -1)) && func_445(80, -1)) && func_445(81, -1)) && func_444(94, -1) >= func_443(94, 5, 9)) && func_444(95, -1) >= func_443(95, 5, 9)) && func_445(82, -1)) && func_445(83, -1)) && func_444(96, -1) >= func_443(96, 5, 9)) && func_445(84, -1)) && func_445(85, -1)) && func_444(97, -1) >= func_443(97, 5, 9)) && func_445(86, -1)) && func_445(87, -1)) && func_445(88, -1)) || func_449(28222, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 585832887);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1347816957:
			switch (iParam1)
			{
				case 1352224647:
				case 1896190035:
					return !func_446(iParam2, iParam1, iParam1 == 1352224647);
					break;
				
				case 1857392409:
				case -524815620:
					return !func_446(iParam2, iParam1, iParam1 == 1857392409);
					break;
				
				case 580667351:
				case -1790763503:
					if (func_449(27109, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 580667351);
					break;
				
				case -1355259635:
				case -384612940:
					if (func_449(27110, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1355259635);
					break;
				
				case 711356870:
				case 697971620:
					if (func_449(27111, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 711356870);
					break;
				
				case 588276502:
				case 70412493:
					if (func_449(27112, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 588276502);
					break;
				
				case 1184770609:
				case -496458438:
					if (func_449(27113, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1184770609);
					break;
				
				case -893208491:
				case -346765569:
					if (func_449(27114, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -893208491);
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_449(27115, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1538832911);
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_449(25032, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1015392647);
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_449(25033, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1742471685);
					break;
				
				case 408116861:
				case 1306937694:
					if (func_449(25034, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 408116861);
					break;
				
				case -1855327598:
				case -95533995:
					if (func_449(25035, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1855327598);
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_449(25036, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1578402908);
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_449(25037, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1423366674);
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_449(25038, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1611107047);
					break;
				
				case 742927305:
				case -1339214923:
					if (func_449(25039, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 742927305);
					break;
				
				case -1578833665:
				case 9807447:
					if (func_449(25040, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1578833665);
					break;
				
				case 773738667:
				case -236005319:
					if (func_449(25041, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 773738667);
					break;
				
				case 213007702:
				case -1470794594:
					if (func_449(25042, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 213007702);
					break;
				
				case 432208089:
				case -2100868384:
					if (func_449(25043, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 432208089);
					break;
				
				case 35817542:
				case 805626890:
					if (func_449(25044, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 35817542);
					break;
				
				case -1786080093:
				case -438487729:
					if (func_449(25045, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1786080093);
					break;
				
				case -215923306:
				case 1258452311:
					if (func_449(25046, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -215923306);
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_449(25047, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1275581512);
					break;
				
				case -1214009019:
				case 390131826:
					if (func_449(25048, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1214009019);
					break;
				
				case 1639713863:
				case -933865090:
					if (func_449(25049, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1639713863);
					break;
				
				case 529311368:
				case 42888304:
					if (func_449(25050, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 529311368);
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_449(25051, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1033895864);
					break;
				
				case 924043677:
				case 1805955770:
					if (func_449(25052, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 924043677);
					break;
				
				case -574749266:
				case 2040741242:
					if (func_449(25053, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -574749266);
					break;
				
				case 519463901:
				case -1572115827:
					if (func_449(25054, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 519463901);
					break;
				
				case -643353187:
				case -2101278774:
					if (func_449(25055, -1, -1))
					{
						return 0;
					}
					if (func_449(27077, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -643353187);
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_449(25056, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1571011017);
					break;
				
				case -94540936:
				case 1445470992:
					if (func_449(25057, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -94540936);
					break;
				
				case 1884218662:
				case 31459402:
					if (func_449(25058, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1884218662);
					break;
				
				case -345261869:
				case 850282323:
					if (func_449(25059, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -345261869);
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_449(25060, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1022859058);
					break;
				
				case -1786322924:
				case 576453072:
					if (func_449(25061, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1786322924);
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_449(25062, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2085269022);
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_449(25063, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1511882653);
					break;
				
				case -506986385:
				case 1650491806:
					if (func_449(25064, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -506986385);
					break;
				
				case -874081588:
				case 507754313:
					if (func_449(25065, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -874081588);
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_449(25066, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2043405937);
					break;
				
				case 59038842:
				case 539301314:
					if (func_449(25067, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 59038842);
					break;
				
				case 1101237057:
				case 485114319:
					if (func_449(25068, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1101237057);
					break;
				
				case -657535677:
				case 1397146165:
					if (func_449(25069, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -657535677);
					break;
				
				case -2093585025:
				case -922912500:
					if (func_449(25070, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2093585025);
					break;
				
				case 908383468:
				case 898093918:
					if (func_449(25071, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 908383468);
					break;
				
				case -1608760399:
				case -513817029:
					if (func_449(25072, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1608760399);
					break;
				
				case 1373660540:
				case 134762953:
					if (func_449(25073, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1373660540);
					break;
				
				case 1854316713:
				case 252404144:
					if (func_449(25074, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1854316713);
					break;
				
				case -119951196:
				case 168579849:
					if (func_449(25075, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -119951196);
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_449(25076, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1649842228);
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_449(25077, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1640764925);
					break;
				
				case 1787927716:
				case 33901453:
					if (func_449(25078, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1787927716);
					break;
				
				case 104283481:
				case -2043232938:
					if (func_449(25079, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 104283481);
					break;
				
				case 378263500:
				case 1113927554:
					if (func_449(25080, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 378263500);
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_449(25081, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1061215309);
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_449(25082, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1034166199);
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_449(25083, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1828057305);
					break;
				
				case -1486297381:
				case 647456058:
					if (func_449(25084, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1486297381);
					break;
				
				case -540767159:
				case -717523161:
					if (func_449(25085, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -540767159);
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_449(25086, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1235960692);
					break;
				
				case -329316995:
				case 1857030685:
					if (func_449(25087, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -329316995);
					break;
				
				case -581880272:
				case -1074922646:
					if (func_449(25088, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -581880272);
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_449(25089, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1807345434);
					break;
				
				case -1018409435:
				case -480375220:
					if (func_449(25090, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1018409435);
					break;
				
				case -136011898:
				case -1158306419:
					if (func_449(25091, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -136011898);
					break;
				
				case -2069494727:
				case 808115088:
					if (func_449(25092, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2069494727);
					break;
				
				case -642887005:
				case 1544542048:
					if (func_449(25093, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -642887005);
					break;
				
				case -1810837638:
				case 212713658:
					if (func_449(25094, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1810837638);
					break;
				
				case 1034484576:
				case -537477127:
					if (func_449(25095, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1034484576);
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_449(25096, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1979445594);
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_449(25097, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1533877336);
					break;
				
				case -892254987:
				case 2038375002:
					if (func_449(25098, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -892254987);
					break;
				
				case -654222260:
				case -256374303:
					if (func_449(25099, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -654222260);
					break;
				
				case 450544862:
				case -964420554:
					return !func_446(iParam2, iParam1, iParam1 == 450544862);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_449(22108, -1, -1) || func_449(25006, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1495413374);
					break;
				
				case 370906922:
				case -1079776812:
					if (func_449(9481, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 370906922);
					break;
				
				case 531742637:
				case -948990166:
					if (func_449(9470, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 531742637);
					break;
				
				case -225805790:
				case 1382201813:
					if (func_449(9475, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -225805790);
					break;
				
				case -624586952:
				case 1576375706:
					if (func_449(9472, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -624586952);
					break;
				
				case 915144902:
				case -1356500517:
					if (func_449(9465, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 915144902);
					break;
				
				case -242746043:
				case 1838019927:
					if (func_449(9463, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -242746043);
					break;
				
				case 1620048835:
				case 618955885:
					if (func_449(9464, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1620048835);
					break;
				
				case -1097603268:
				case 909858453:
					if (func_449(9468, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1097603268);
					break;
				
				case -660672539:
				case 1809389163:
					if (func_449(9469, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -660672539);
					break;
				
				case -4642188:
				case -382370447:
					if (func_449(9479, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -4642188);
					break;
				
				case 1855977539:
				case -290949038:
					if (func_449(9473, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1855977539);
					break;
				
				case 1537270222:
				case 381474823:
					if (func_449(9480, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1537270222);
					break;
				
				case -1226569770:
				case 570088958:
					if (func_449(9476, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1226569770);
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_449(9477, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1641457991);
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_449(9471, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1366312361);
					break;
				
				case -1557113221:
				case 655777349:
					if (func_449(9474, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1557113221);
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_449(9467, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1690570414);
					break;
				
				case -507204255:
				case -1043010182:
					if (func_449(9478, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -507204255);
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_449(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_449(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_449(27084, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1804897639);
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_449(9466, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1375233423);
					break;
				
				case 490066935:
				case -1583620927:
					if (func_449(22126, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 490066935);
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_449(22127, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1193725595);
					break;
				
				case 628493116:
				case -244079832:
					if (func_449(22128, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 628493116);
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_449(22124, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2112155518);
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_449(22130, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1511337702);
					break;
				
				case -627666528:
				case -1874854660:
					if (func_449(22125, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -627666528);
					break;
				
				case 768324163:
				case -1379192256:
					if (func_449(22129, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 768324163);
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_449(22131, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1448761813);
					break;
				
				case 868551738:
				case -1252683947:
					if (func_449(22132, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 868551738);
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_449(22147, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1021262861);
					break;
				
				case -264447931:
				case 1010167914:
					if (func_449(22148, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -264447931);
					break;
				
				case -652127435:
				case 1059266367:
					if (func_449(22149, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -652127435);
					break;
				
				case -610014599:
				case 1869746711:
					if (func_449(22150, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -610014599);
					break;
				
				case 848073973:
				case 167494616:
					if (func_449(22151, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 848073973);
					break;
				
				case 1561087717:
				case 231256171:
					if (func_449(22152, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1561087717);
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_449(22153, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2067249852);
					break;
				
				case 1963924398:
				case -231795220:
					if (func_449(22154, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1963924398);
					break;
				
				case -898550276:
				case -1207463639:
					if (func_449(22155, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -898550276);
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_449(22156, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1074178691);
					break;
				
				case -368616744:
				case -1293194083:
					if (func_449(22157, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -368616744);
					break;
				
				case -78566501:
				case 767365246:
					if (func_449(22158, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -78566501);
					break;
				
				case 1623651387:
				case -318042939:
					if (func_449(22159, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1623651387);
					break;
				
				case -1229980240:
				case -740608006:
					if (func_449(22160, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1229980240);
					break;
				
				case -1558321426:
				case 126660566:
					if (func_449(22161, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1558321426);
					break;
				
				case 518190097:
				case -252733393:
					if (func_449(22162, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 518190097);
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_449(22163, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1996043294);
					break;
				
				case 1720844546:
				case -891762294:
					if (func_449(22164, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1720844546);
					break;
				
				case -20709979:
				case 1410738248:
					if (func_449(22165, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -20709979);
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_449(22166, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1617383579);
					break;
				
				case -525135065:
				case 1684642458:
					if (func_449(22167, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -525135065);
					break;
				
				case 1796039054:
				case -147490340:
					if (func_449(22168, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1796039054);
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_449(22169, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1250030109);
					break;
				
				case -1195876295:
				case -313931425:
					if (func_449(22170, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1195876295);
					break;
				
				case 672890092:
				case 211076563:
					if (func_449(22171, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 672890092);
					break;
				
				case 413298313:
				case 355035035:
					if (func_449(22172, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 413298313);
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_449(22173, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1157302328);
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_449(22174, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1564457471);
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_449(22175, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1152621988);
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_449(22176, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1961291349);
					break;
				
				case -1912591074:
				case 73898487:
					if (func_449(22177, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1912591074);
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_449(22178, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1049766626);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_449(15426, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2123485438);
					break;
				
				case -815706791:
				case -1066127505:
					if (func_449(15422, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -815706791);
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_449(15423, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1318802347);
					break;
				
				case 306110040:
				case 1944822196:
					if (func_449(15421, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 306110040);
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_449(15427, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1828101251);
					break;
				
				case -919314748:
				case 1282565442:
					if (func_449(15419, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -919314748);
					break;
				
				case 1971111649:
				case -884280700:
					if (func_449(15420, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1971111649);
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_449(15394, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1029334921);
					break;
				
				case -534855486:
				case -1168575065:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -534855486);
					break;
				
				case -516333262:
				case 756873456:
					if (func_449(15406, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -516333262);
					break;
				
				case 485135095:
				case -730037708:
					if (func_449(15395, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 485135095);
					break;
				
				case 1713551997:
				case -970458486:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1713551997);
					break;
				
				case -1490658501:
				case 975601953:
					if (func_449(15410, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1490658501);
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_449(15407, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1735635238);
					break;
				
				case 1931303956:
				case -726032561:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1931303956);
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1931617488);
					break;
				
				case -1726332301:
				case 417579524:
					if (func_449(15414, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1726332301);
					break;
				
				case -1382922530:
				case 734151492:
					if (func_449(15415, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1382922530);
					break;
				
				case 452778672:
				case -1766862320:
					if (func_449(15399, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 452778672);
					break;
				
				case -1776790350:
				case 579562906:
					if (func_449(15404, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1776790350);
					break;
				
				case -1988057295:
				case -619754931:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1988057295);
					break;
				
				case 816707921:
				case 1424441799:
					if (func_449(15392, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 816707921);
					break;
				
				case 744446190:
				case -1405036369:
					if (func_449(15390, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 744446190);
					break;
				
				case 917772807:
				case 1929056908:
					if (func_449(15402, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 917772807);
					break;
				
				case -292922355:
				case -34538790:
					if (func_449(15416, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -292922355);
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_371(209, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1495432685);
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_449(9366, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 769964545);
					break;
				
				case 1424500982:
				case -701486200:
					if (func_449(9367, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1424500982);
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_449(9369, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1810785185);
					break;
				
				case 837990279:
				case -1981978861:
					if (func_449(9368, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 837990279);
					break;
				
				case 1752551314:
				case 468661890:
					if (func_449(9365, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1752551314);
					break;
				
				case 735155845:
				case 1907925586:
					if (func_449(9364, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 735155845);
					break;
				
				case 1863251462:
				case 646243571:
					if (func_449(27078, -1, -1))
					{
						return 0;
					}
					if (func_449(9363, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1863251462);
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_449(9362, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2142058763);
					break;
				
				case -207591105:
				case 874867224:
					if (func_449(9370, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -207591105);
					break;
				
				case -932813887:
				case 1344008898:
					if (func_449(9371, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -932813887);
					break;
				
				case -313503199:
				case 1297781304:
					if (func_449(9372, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -313503199);
					break;
				
				case 718936417:
				case 1977233252:
					if (func_449(9373, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 718936417);
					break;
				
				case -1107649605:
				case -194410344:
					if (func_449(9374, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1107649605);
					break;
				
				case 39090475:
				case 392012609:
					if (func_449(9384, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 39090475);
					break;
				
				case 1628251208:
				case 705148450:
					if (func_449(9385, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1628251208);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_449(7551, -1, -1) || func_85(3789, -1, 0) >= Global_262145.f_16308)
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -621355603);
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_449(7467, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1006202521);
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_449(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_449(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_449(27086, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1834049539);
					break;
				
				case -2060372580:
				case -254669596:
					if (func_449(7469, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2060372580);
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_449(7470, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1057304170);
					break;
				
				case 1421572640:
				case -941072260:
					if (func_449(7471, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1421572640);
					break;
				
				case 481259621:
				case -1844749517:
					if (func_449(7472, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 481259621);
					break;
				
				case 1227497670:
				case 82745424:
					if (func_449(7473, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1227497670);
					break;
				
				case 319276780:
				case -673460083:
					if (func_449(7474, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 319276780);
					break;
				
				case 2070827921:
				case -99954496:
					if (func_449(7475, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2070827921);
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_449(7476, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1433629991);
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_449(7477, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1712994650);
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_449(7478, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 2125094286);
					break;
				
				case 712298404:
				case -1504557219:
					if (func_449(7479, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 712298404);
					break;
				
				case 1998072324:
				case 367912881:
					if (func_449(7480, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1998072324);
					break;
				
				case 1249206960:
				case -836343280:
					if (func_449(7481, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1249206960);
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_449(4260, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 283190173);
					break;
				
				case -60867780:
				case 1528527015:
					if (func_449(4257, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1528527015);
					break;
				
				case 926967912:
				case -1690029966:
					if (func_449(4269, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1690029966);
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_449(4261, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1685994466);
					break;
				
				case -1314959708:
				case 255166927:
					if (func_449(4259, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 255166927);
					break;
				
				case -1696774529:
				case -271257487:
					if (func_449(4268, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -271257487);
					break;
				
				case -356446484:
				case 1885215284:
					if (func_449(4265, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1885215284);
					break;
				
				case 857810380:
				case -1935156988:
					if (func_449(4258, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1935156988);
					break;
				
				case -629676646:
				case 1061465906:
					if (func_449(4264, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 1061465906);
					break;
				
				case -1879530481:
				case -871031729:
					if (func_449(4267, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -871031729);
					break;
				
				case -1265847311:
				case -101171485:
					if (func_449(4262, -1, -1))
					{
						return 0;
					}
					if (func_449(27079, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -101171485);
					break;
				
				case 32094424:
				case -1590298770:
					if (func_449(4263, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -1590298770);
					break;
				
				case 1969286744:
				case 303441856:
					if (func_449(4266, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == 303441856);
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_85(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_449(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_446(iParam2, iParam1, 1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_85(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_449(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_446(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_449(113, -1, -1))
					{
						return 0;
					}
					return !func_446(iParam2, iParam1, iParam1 == -2049689650);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_449(27082, -1, -1))
						{
							return 0;
						}
						if (func_449(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_449(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_449(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_449(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_449(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_449(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_449(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_449(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_449(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_449(3779, -1, -1) || func_449(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_446(iParam2, iParam1, 1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_449(3770, -1, -1))
						{
							return 0;
						}
						if (func_449(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_449(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_449(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_449(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_449(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_449(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_449(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_449(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_449(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_449(3779, -1, -1) || func_449(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_446(iParam2, iParam1, 0);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_449(3765, -1, -1) && func_449(3766, -1, -1)) && func_449(3767, -1, -1)) && func_449(3768, -1, -1)) && func_449(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_449(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_371(152, -1) && !func_449(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_371(151, -1) && !func_449(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_213(func_437(iParam1, 3), -1) && !func_449(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_213(func_437(iParam1, 4), -1) && !func_449(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_436();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_449(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_449(3615, -1, -1) && !func_449(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_449(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_449(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_449(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_449(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					break;
				
				
		