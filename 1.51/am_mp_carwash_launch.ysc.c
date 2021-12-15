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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0,0375f;
	fLocal_36 = 0,17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = -1622245081;
	sVar2 = "carwash1";
	vVar3 = { ScriptParam_0.f_1[0] };
	if (unk_0x8A22C4C08282BF26(1006508663) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0xB57F88F0123F4C38();
		unk_0x256D93AFAE851A7A(0);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (Global_2621550)
	{
		if (unk_0x8A22C4C08282BF26(131838674) == 0)
		{
			unk_0x8CFFBE74CB5C864A(131838674);
			while (!unk_0x64EF15C5E09BAD76(131838674))
			{
				wait(0);
			}
			start_new_script_with_name_hash_and_args(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_11(unk_0x16F2683693E537C9()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((((func_8(unk_0xD803B885F5E47A62(), 1, 0) || func_7()) || !func_6(unk_0xD803B885F5E47A62())) || func_5()) || func_4(unk_0xD803B885F5E47A62())) || func_2(unk_0xD803B885F5E47A62()))
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		wait(0);
	}
	if (vdist2(vVar3, func_1(157)) < vdist2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = unk_0x12AB0310C2281427(sVar2);
	if (unk_0x8A22C4C08282BF26(iVar1) == 0)
	{
		unk_0x92DCE5C81176D2B4(sVar2);
		while (!unk_0x1FBF08B001C4788A(sVar2))
		{
			unk_0x92DCE5C81176D2B4(sVar2);
			wait(0);
			if (unk_0x1C0640BA9A7327B3() > iVar0 + 20000)
			{
				unk_0x10FAF14A60A0DBE1();
			}
		}
		if (unk_0x1FBF08B001C4788A(sVar2))
		{
			start_new_script(sVar2, 1424);
			unk_0x5E8C29AE121DF1C7(sVar2);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

Vector3 func_1(int iParam0)
{
	iVar0 = iParam0;
	return Global_31146[iVar0][0];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_393.f_2, 16);
	}
	return 0;
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 29);
	}
	return 0;
}

bool func_5()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

bool func_6(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_142, 6);
}

int func_7()
{
	iVar0 = Global_2439138;
	if (unk_0xEAE0D21A50E6C7F4(Global_1627020[iVar0].f_14, 0) && Global_1627020[iVar0].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_9(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)
{
	return func_10(iParam0);
}

bool func_10(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_11(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

