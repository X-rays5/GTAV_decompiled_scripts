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
	func_12();
	while (true)
	{
		wait(0);
		if (func_11())
		{
			return;
		}
		func_1();
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(2))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(2, iVar0);
		if (func_10(iVar1))
		{
			func_9(&Var2);
			func_8(2, iVar0, iVar1, &Var2);
			Var2.f_1 = (unk_0xF4CCC8CB6DE7F1AE() - 1);
			Var2 = iVar1;
			if (!func_7(&Var2, &uVar5))
			{
				func_6(&Var2);
			}
			func_3(&Var2);
		}
		iVar0++;
	}
}

void func_3(int iParam0)
{
	iVar0 = *iParam0;
	if (((func_5() && func_4(iVar0)) && iVar0 != 244) && unk_0x37A36997770AEFC3())
	{
		unk_0xDA303319A57C6FF5(0, 1, 0);
	}
}

bool func_4(int iParam0)
{
	return (((iParam0 == 245 || iParam0 == 246) || iParam0 == 247) || iParam0 == 244);
}

bool func_5()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_6(int iParam0)
{
	if (Global_31045.f_61 < 20)
	{
		Global_31045[Global_31045.f_61] = { *iParam0 };
		Global_31045.f_61++;
		return 1;
	}
	return 0;
}

int func_7(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_31045.f_61)
	{
		if (Global_31045[*uParam1] == *iParam0 && Global_31045[*uParam1].f_2 == iParam0->f_2)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_8(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (((iParam2 == 244 || iParam2 == 245) || iParam2 == 246) || iParam2 == 247)
	{
		if (unk_0x218F818E64020C17(iParam0, iParam1, &uVar0, 1))
		{
			uParam3->f_2 = uVar0;
		}
	}
}

void func_9(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_10(int iParam0)
{
	return func_4(iParam0);
}

int func_11()
{
	return 0;
}

void func_12()
{
	unk_0xB57F88F0123F4C38();
}

