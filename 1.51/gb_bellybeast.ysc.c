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
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x8CD06866876216F2())
	{
		if (!func_900(ScriptParam_0))
		{
			func_793(0);
		}
	}
	while (true)
	{
		func_792();
		if (func_784())
		{
			func_793(1);
		}
		func_777();
		switch (func_776(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_775() == 1)
				{
					if (func_774())
					{
						func_773(unk_0x57270EE11514DC67(), 1);
					}
				}
				else if (func_775() == 3)
				{
					func_773(unk_0x57270EE11514DC67(), 3);
				}
				break;
			
			case 1:
				if (func_775() == 1)
				{
					if (!func_772())
					{
						func_110();
					}
					else
					{
						if (func_109())
						{
							func_102();
						}
						func_101();
					}
					if (func_49(1))
					{
						func_773(unk_0x57270EE11514DC67(), 3);
					}
				}
				else if (func_775() == 3)
				{
					func_773(unk_0x57270EE11514DC67(), 3);
				}
				break;
			
			case 3:
				func_793(0);
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_48())
			{
				func_47(3);
			}
			switch (func_775())
			{
				case 0:
					if (func_18())
					{
						func_47(1);
					}
					break;
				
				case 1:
					if (func_17() == 4)
					{
						func_47(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_793(0);
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_112.f_55)
	{
		case 0:
			if (func_16())
			{
				func_15(1);
			}
			func_9();
			break;
		
		case 1:
			func_9();
			func_5();
			func_2();
			break;
		
		case 2:
			func_9();
			func_5();
			func_2();
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 23))
			{
				func_15(4);
			}
			func_9();
			break;
		
		case 4:
			break;
	}
}

void func_2()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 12) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17))
	{
		if (func_3(&(Local_112.f_53), 600000, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 24);
		}
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 19))
	{
		func_8(2);
		func_15(3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 22))
	{
		func_8(0);
		func_15(3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 21))
	{
		func_8(1);
		func_15(3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 16))
	{
		unk_0x5D96D8530B3D0904(&(Local_112.f_1), 22);
		func_8(3);
		func_15(3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 13))
	{
		func_8(0);
		func_15(3);
	}
	if (!func_6(func_7(), 0, 1))
	{
		unk_0x5D96D8530B3D0904(&(Local_112.f_1), 18);
		func_8(4);
		func_15(3);
	}
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

int func_7()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35;
}

void func_8(int iParam0)
{
	Local_112.f_56 = iParam0;
}

void func_9()
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			if (func_17() < 3)
			{
				iVar2 = 0;
				while (iVar2 < func_14())
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, iVar2) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar2))
					{
						unk_0x5D96D8530B3D0904(&(Local_112.f_1), iVar2);
						Local_112.f_34++;
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, iVar2 + 4) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar2 + 4))
					{
						unk_0x5D96D8530B3D0904(&(Local_112.f_1), iVar2 + 4);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, iVar2 + 8) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar2 + 8))
					{
						unk_0x5D96D8530B3D0904(&(Local_112.f_1), iVar2 + 8);
						Local_112.f_35++;
					}
					iVar2++;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, 14))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17))
					{
						func_11(unk_0x117658E336116132(iVar1));
						unk_0x5D96D8530B3D0904(&(Local_112.f_1), 17);
					}
					iVar0++;
				}
			}
			else if (func_17() == 3)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, 21))
				{
					iVar0++;
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_171[iVar1].f_1, 12))
			{
				unk_0x5D96D8530B3D0904(&(Local_112.f_1), 12);
			}
		}
		iVar1++;
	}
	if (func_17() < 3)
	{
		if (iVar0 == (func_14() - (Local_112.f_34 + Local_112.f_35)))
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 14);
		}
		else if (iVar0 == 1 && unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 15))
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 14);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 14))
		{
			unk_0x0674E58A79778E99(&(Local_112.f_1), 14);
		}
		if (Local_112.f_34 + Local_112.f_35) == func_14()
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 22);
		}
		if ((func_14() - (Local_112.f_34 + Local_112.f_35)) == 1)
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 15);
		}
		if (Local_112.f_34 == func_14())
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 13);
		}
		if (Local_112.f_35 == func_14())
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 21);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 12))
		{
			if (func_3(&(Local_112.f_49), func_10(), 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_112.f_1), 16);
			}
		}
	}
	else if (func_17() == 3)
	{
		if (iVar0 == unk_0x0DC0B2DBBD52B0C0())
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 20);
		}
		else if (func_3(&(Local_112.f_51), 15000, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_112.f_1), 23);
		}
	}
}

int func_10()
{
	return Global_262145.f_12463;
}

void func_11(int iParam0)
{
	Var0.f_10 = iParam0;
	Var0.f_11 = func_7();
	Var0.f_2 = 1882489548;
	func_12(Var0, func_13(1));
}

void func_12(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_13(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_14()
{
	return Local_112.f_5;
}

void func_15(int iParam0)
{
	Local_112.f_55 = iParam0;
}

int func_16()
{
	return 1;
}

int func_17()
{
	return Local_112.f_55;
}

int func_18()
{
	if (func_19())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	unk_0xCB466C2A425A9168(&(Local_112.f_57), &(Local_112.f_58));
	if (!iLocal_81)
	{
		iLocal_80 = unk_0x09AC81E49EA267F7(0, 3);
		if (Global_2537071.f_5124.f_6 == -1)
		{
			func_47(3);
			return 0;
		}
		func_46(iLocal_80);
		func_45(Global_2537071.f_5124.f_6);
		func_31();
		iLocal_81 = 1;
	}
	if (func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_29(func_30(iVar0)))
		{
			if (!unk_0xE9F78D191AD5EDBA(func_28(iVar0)))
			{
				if (func_23(&(Local_112.f_6[iVar0]), func_30(iVar0), func_27(iVar0), func_26(iVar0), 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					func_22(unk_0xB177666FAB6F4417(func_28(iVar0)));
					func_21(unk_0xB177666FAB6F4417(func_28(iVar0)));
					unk_0x79E38224B223335B(unk_0xB177666FAB6F4417(func_28(iVar0)), 1);
					unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(func_28(iVar0)), true);
					unk_0xA22F71BBC8173C39(unk_0xB177666FAB6F4417(func_28(iVar0)), false);
					unk_0x44A200C9B6E1CEA6(unk_0xB177666FAB6F4417(func_28(iVar0)), true);
					unk_0xD5A0214B20BCBAD8(unk_0xB177666FAB6F4417(func_28(iVar0)), 1);
					unk_0x09C4C5C870748A1F(unk_0xB177666FAB6F4417(func_28(iVar0)), 0);
					unk_0x1F85B199848ECF4E(unk_0xB177666FAB6F4417(func_28(iVar0)), false, 0);
					unk_0x5072321D4A2E8A10(unk_0xB177666FAB6F4417(func_28(iVar0)), 0);
					unk_0x50782A20AFA26A7D(unk_0xB177666FAB6F4417(func_28(iVar0)), false, 0);
					unk_0x4D27AD6220D5BF1F(unk_0xB177666FAB6F4417(func_28(iVar0)));
					unk_0x443C9A6DC182DDD5(unk_0xB177666FAB6F4417(func_28(iVar0)), 1);
					unk_0xA6B2C9FCA24AAC6F(unk_0xB177666FAB6F4417(func_28(iVar0)), 1);
					unk_0x9A8BCD43DBDDCDCA(unk_0xB177666FAB6F4417(func_28(iVar0)), false, 0);
					unk_0xC3BED1CE092AB15D(unk_0xB177666FAB6F4417(func_28(iVar0)), 1);
					unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(func_28(iVar0)), true);
					unk_0xBA2CB24C70C8E726(unk_0xB177666FAB6F4417(func_28(iVar0)), 1, 1);
					if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(func_28(iVar0)), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xF1D385D359D58F72("MPBitset", 3))
					{
						if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(func_28(iVar0)), "MPBitset"))
						{
							iVar2 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(func_28(iVar0)), "MPBitset");
						}
						unk_0x5D96D8530B3D0904(&iVar2, 10);
						unk_0x5D96D8530B3D0904(&iVar2, 11);
						unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(func_28(iVar0)), "MPBitset", iVar2);
					}
					unk_0x71199B01895C6202(func_30(iVar0));
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == func_14())
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	iVar0 = unk_0x579935D850368851(iParam0);
	iVar1 = unk_0x792D3ECFF774F662(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = unk_0x09AC81E49EA267F7(0, iVar0);
		unk_0x446EA2500F021666(iParam0, iVar3);
	}
	iVar2 = unk_0x09AC81E49EA267F7(0, iVar1);
	unk_0xC6A6B4DDD6DC073A(iParam0, iVar2);
}

void func_22(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x60A2E7213232AA6E(iParam0, 0);
	}
}

int func_23(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, iParam5, bParam7, iParam6, iParam14);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				unk_0x271603AF9C0C7EB3(iVar1, true);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam10);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam8)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam9);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam12)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_24(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_24(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_25(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1].f_5 == iParam5 && Global_2405072.f_2912[1].f_4 == iParam4) && vdist(Global_2405072.f_2912[1], vParam0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0] = { Global_2405072.f_2912[iVar0 + 1] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1] = { vParam0 };
		Global_2405072.f_2912[1].f_3 = iParam3;
		Global_2405072.f_2912[1].f_4 = iParam4;
		Global_2405072.f_2912[1].f_5 = iParam5;
	}
}

int func_25(int iParam0, vector3 vParam1, int iParam4)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0][iVar1].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0][iVar1].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417897.f_461[iVar0][iVar1].f_2;
				}
				if (vdist(Global_2417897.f_461[iVar0][iVar1], vVar2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_26(int iParam0)
{
	return Local_112.f_29[iParam0];
}

Vector3 func_27(int iParam0)
{
	return Local_112.f_16[iParam0];
}

var func_28(int iParam0)
{
	return Local_112.f_6[iParam0];
}

bool func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_30(int iParam0)
{
	return Local_112.f_11[iParam0];
}

void func_31()
{
	func_44(2);
	switch (func_43())
	{
		case 0:
			vVar0 = { -1039,623f, -855,3737f, 3,8758f };
			vVar3 = { -1112,362f, -855,0657f, 12,531f };
			vVar6 = { 0f, 0f, 0f };
			vVar9 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, 1078682497);
			func_37(0, 237,632f);
			func_38(1, 841808271);
			func_37(1, 218,751f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 1:
			vVar0 = { 861,2779f, -1357,735f, 25,0962f };
			vVar3 = { 833,7587f, -1414,288f, 25,1543f };
			vVar6 = { 0f, 0f, 0f };
			vVar9 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, -1045541610);
			func_37(0, 269,772f);
			func_38(1, -1041692462);
			func_37(1, 332,369f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 2:
			vVar0 = { 471,1763f, -1024,233f, 27,1807f };
			vVar3 = { 407,7268f, -993,1101f, 28,2665f };
			vVar6 = { 0f, 0f, 0f };
			vVar9 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, 80636076);
			func_37(0, 95,7556f);
			func_38(1, -1800170043);
			func_37(1, 231,8613f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 3:
			vVar0 = { 530,3759f, -29,6076f, 69,6295f };
			vVar3 = { 628,4064f, 23,6166f, 86,6466f };
			vVar6 = { 0f, 0f, 0f };
			vVar9 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, -1566741232);
			func_37(0, 31,0119f);
			func_38(1, 784565758);
			func_37(1, 71,2592f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 4:
			vVar0 = { 1854,039f, 3675,524f, 32,7389f };
			vVar3 = { 1867,226f, 3694,696f, 32,6526f };
			vVar6 = { 1866,02f, 3682,976f, 32,7085f };
			vVar9 = { 1861,596f, 3681,005f, 32,7102f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, -2128233223);
			func_37(0, 30,2891f);
			func_38(1, -2128233223);
			func_37(1, 209,6525f);
			func_38(2, -2128233223);
			func_37(1, 19,0028f);
			func_38(3, -2128233223);
			func_37(1, 209,3371f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
		
		case 5:
			vVar0 = { -451,4124f, 5998,274f, 30,3405f };
			vVar3 = { -461,0853f, 6047,062f, 30,3405f };
			vVar6 = { -438,0848f, 5980,269f, 30,4901f };
			vVar9 = { -434,6339f, 5983,896f, 30,4901f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, 640818791);
			func_37(0, 267,2382f);
			func_38(1, 640818791);
			func_37(1, 315,4168f);
			func_38(2, 640818791);
			func_37(1, 251,2614f);
			func_38(3, 640818791);
			func_37(1, 44,8117f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
	}
	if (func_14() == 2)
	{
		func_32(0, vVar0);
		func_32(1, vVar3);
	}
	else
	{
		func_32(0, vVar0);
		func_32(1, vVar3);
		func_32(2, vVar6);
		func_32(3, vVar9);
	}
}

void func_32(int iParam0, vector3 vParam1)
{
	Local_112.f_16[iParam0] = { vParam1 };
}

void func_33(int iParam0, vector3 vParam1)
{
	Local_112.f_36[iParam0] = { vParam1 };
}

Vector3 func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1685,737f, 6435,972f, 31,3601f;
				}
				return 255,4336f, -3057,406f, 4,7974f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1576,524f, 5159,825f, 18,7791f;
				}
				return -965,0558f, -2072,717f, 8,4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 756,7225f, 4179,839f, 39,6685f;
				}
				return -1209,318f, -1305,557f, 3,7185f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1682,386f, 6434,001f, 31,1545f;
				}
				return 248,4273f, -3064,162f, 4,7802f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1581,573f, 5159,565f, 18,5702f;
				}
				return -971,9658f, -2065,526f, 8,4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 762,5063f, 4179,577f, 39,6335f;
				}
				return -1207,275f, -1310,006f, 3,7944f;
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (func_36())
		{
			case 0:
				return 252,0648f, -3060,967f, 4,7768f;
				break;
			
			case 1:
				return -975,444f, -2061,842f, 8,4059f;
				break;
			
			case 2:
				return -1222,124f, -1309,285f, 3,5209f;
				break;
		}
	}
	else if (iParam0 == 3)
	{
		switch (func_36())
		{
			case 0:
				return 244,6635f, -3068,048f, 4,7864f;
				break;
			
			case 1:
				return -968,5905f, -2069,149f, 8,4059f;
				break;
			
			case 2:
				return -1229,652f, -1321,23f, 3,0921f;
				break;
			}
	}
	return 1685,737f, 6435,972f, 31,3601f;
}

bool func_35()
{
	return Local_112.f_4;
}

int func_36()
{
	return Local_112.f_3;
}

void func_37(int iParam0, float fParam1)
{
	Local_112.f_29[iParam0] = fParam1;
}

void func_38(int iParam0, int iParam1)
{
	Local_112.f_11[iParam0] = iParam1;
}

int func_39(int iParam0)
{
	if (func_41(iParam0) == func_40())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_40()
{
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_40();
}

void func_42(int iParam0)
{
	Local_112.f_4 = iParam0;
}

int func_43()
{
	return Local_112.f_2;
}

void func_44(int iParam0)
{
	Local_112.f_5 = iParam0;
}

void func_45(var uParam0)
{
	Local_112.f_2 = uParam0;
}

void func_46(int iParam0)
{
	Local_112.f_3 = iParam0;
}

void func_47(int iParam0)
{
	Local_112 = iParam0;
}

int func_48()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_49(bool bParam0)
{
	if (func_56(1))
	{
		return 1;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_7() == func_40() || !func_6(func_7(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_54(unk_0xD803B885F5E47A62()))
	{
		if (func_53(unk_0xD803B885F5E47A62()) && func_50())
		{
			return 1;
		}
	}
	return 0;
}

int func_50()
{
	switch (func_51(func_52(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_51(int iParam0)
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

int func_52(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_53(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_54(int iParam0)
{
	if (func_55(iParam0) != func_40())
	{
		return func_55(iParam0) == func_41(iParam0);
	}
	return 0;
}

int func_55(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_56(bool bParam0)
{
	if (!func_100(1))
	{
		bVar0 = false;
		if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 != func_40())
		{
			if (func_6(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 4 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 8) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_97(func_98(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_96(31);
				if (func_95(func_98(unk_0xD803B885F5E47A62())))
				{
					func_96(81);
				}
				if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 != func_40() && unk_0x40B8C182D63932FC(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57))
				{
					Global_1626725 = func_59(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57, -2, 0, 0, 0);
					if (!func_57(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57))
					{
						func_96(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_57(int iParam0)
{
	return func_58(iParam0, 1);
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 != func_40())
	{
		if (Global_1628237[iParam0].f_11 != func_40())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_90(iParam0) && !bParam4)
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
	if (((func_90(unk_0xD803B885F5E47A62()) || (func_89() && func_88())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_87();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_6(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_85(iParam1, iParam0, 0);
							}
							else
							{
								return func_72(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_72(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_85(iParam1, iParam0, 0);
				}
				else
				{
					return func_60(0, -1, 0);
				}
			}
			else
			{
				return func_60(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_85(iParam1, iParam0, 0);
		}
		else
		{
			return func_72(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_72(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_60(bool bParam0, int iParam1, bool bParam2)
{
	return func_61(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_61(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_71() || (func_70() && func_68())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_67(iParam2, iVar0);
		}
		else
		{
			return func_67(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_66(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_65(1);
				}
				else
				{
					return func_65(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_62(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_62(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_65(1);
	}
	return func_65(0);
}

int func_62(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_64(iParam0, iParam1, iParam3);
	if (func_63(Global_4456448.f_194990, 1))
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

int func_63(int iParam0, bool bParam1)
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

int func_64(int iParam0, int iParam1, int iParam2)
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
			if (!func_66(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_65(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_66(int iParam0, int iParam1, int iParam2)
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

int func_67(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_64(iParam1, iParam0, 4);
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

bool func_68()
{
	if (func_69())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_69()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_70()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_71()
{
	if (func_69() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_80())
			{
				iVar3 = func_77(iParam0);
				if (!iVar3 == -1)
				{
					return func_75(iVar3);
				}
			}
			if ((func_74(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_66(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_65(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_73(1);
			}
			else
			{
				return func_61(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_65(1);
			}
			else
			{
				return func_61(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_77(iParam0);
	if (!iVar4 == -1)
	{
		return func_75(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_73(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_74(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_75(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_76(iParam0);
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

var func_76(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_77(int iParam0)
{
	if (!iParam0 == func_40())
	{
		if (func_78(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

bool func_78(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_79(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_40();
}

int func_79(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1628237[iParam0].f_11 != func_40())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_80()
{
	if (((func_84() || func_83()) || func_82()) || func_81())
	{
		return 1;
	}
	return 0;
}

var func_81()
{
	return Global_2450632.f_19;
}

bool func_82()
{
	return Global_2450632.f_17;
}

var func_83()
{
	return Global_2450632.f_16;
}

var func_84()
{
	return Global_2450632.f_15;
}

int func_85(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_80())
	{
		iVar2 = func_77(iParam1);
		if (!iVar2 == -1)
		{
			return func_75(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_40())
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
			iVar0 = func_61(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_86(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_66(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_73(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_86(int iParam0)
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

var func_87()
{
	return Global_2359302.f_2;
}

bool func_88()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_89()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_90(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return 1;
	}
	if (func_91())
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

bool func_91()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_92(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_93(-1, 0) == 8;
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

int func_93(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_94();
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

int func_94()
{
	return Global_1312745;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[unk_0xD803B885F5E47A62()] == 148 && func_58(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_96(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_97(int iParam0)
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

int func_98(int iParam0)
{
	if (func_99(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_99(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_100(bool bParam0)
{
	return func_78(unk_0xD803B885F5E47A62(), bParam0);
}

void func_101()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_93))
	{
		unk_0x142CC44DB769B57E(&iLocal_93);
	}
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_88[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iLocal_88[iVar0]));
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_83[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iLocal_83[iVar0]));
		}
		iVar0++;
	}
}

void func_102()
{
	if (!func_108())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_103();
}

void func_103()
{
	func_105();
	func_104(0);
}

void func_104(bool bParam0)
{
	bVar0 = unk_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_105()
{
	if (!func_107())
	{
	}
	if (func_108())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_106();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_106()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			unk_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_107()
{
	if (!func_108())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_106();
	return unk_0xB165082A56EE6E7F();
}

int func_108()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_109()
{
	return func_108();
}

void func_110()
{
	switch (func_771())
	{
		case 0:
			if (func_770(func_7(), 1))
			{
				func_755(157, 1, -1, 0);
			}
			else
			{
				func_755(157, 0, -1, 0);
			}
			func_751();
			if (func_17() > 0)
			{
				if (func_770(func_7(), 1))
				{
					func_750(1);
					func_749(1);
				}
				else
				{
					func_749(2);
				}
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 24))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 3))
				{
					func_669();
				}
				func_663();
				func_652();
				func_650();
				func_646();
				func_645();
				func_642();
				func_641();
				func_598(157, vLocal_97, &uLocal_100, 1140457472, 1144750080, 0);
				if (func_17() > 1)
				{
					func_749(3);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 3))
			{
				func_669();
			}
			func_663();
			func_652();
			func_642();
			func_597();
			func_650();
			func_646();
			func_645();
			func_596();
			func_593();
			func_579();
			func_641();
			func_598(157, vLocal_97, &uLocal_100, 1140457472, 1144750080, 0);
			func_465(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
			func_442(157);
			if (func_17() > 1)
			{
				func_749(3);
			}
			break;
		
		case 3:
			func_362();
			func_156();
			func_663();
			func_579();
			if (((unk_0xEAE0D21A50E6C7F4(iLocal_82, 11) && unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 20)) && !func_155()) && func_111(&uLocal_104, 1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 21);
			}
			if (func_17() > 3)
			{
				func_749(4);
			}
			break;
		
		case 4:
			break;
	}
}

int func_111(var uParam0, bool bParam1, int iParam2)
{
	func_154(29);
	if ((*uParam0 > 0 && !func_155()) && func_137(unk_0xD803B885F5E47A62()) != 0)
	{
		if (!func_135())
		{
			func_134();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_133(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_3(&(uParam0->f_3), 1000, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_132(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_133(&(uParam0->f_5)))
			{
				if (func_3(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_121(iParam2);
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			func_121(0);
			if (func_3(&(uParam0->f_1), 15000, 0))
			{
				if (func_112(func_113(0)))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_132(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_3(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
				unk_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
				func_132(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
			unk_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_112(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_113(int iParam0)
{
	if (((func_120(unk_0xD803B885F5E47A62()) || func_119(unk_0xD803B885F5E47A62())) || func_117()) || iParam0)
	{
		if (func_119(unk_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_114(func_116()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_114(int iParam0)
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
	return func_115(iParam0, 0);
	return 0;
}

int func_115(int iParam0, int iParam1)
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

int func_116()
{
	return Global_1650640;
}

bool func_117()
{
	return (func_118() && func_57(func_7()));
}

bool func_118()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 148;
}

bool func_119(int iParam0)
{
	return func_115(func_98(iParam0), 0);
}

bool func_120(int iParam0)
{
	return func_95(func_98(iParam0));
}

void func_121(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0))
	{
		if (((((((((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_6(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !unk_0x757EF87A33649210()) && !func_131(unk_0xD803B885F5E47A62(), 22)) && func_137(unk_0xD803B885F5E47A62()) != 0) && !func_129(func_130())) && !func_120(unk_0xD803B885F5E47A62())) && !func_128(func_98(unk_0xD803B885F5E47A62()))) && !func_127(func_98(unk_0xD803B885F5E47A62())))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 1);
			func_126(func_113(iParam0), -1);
			func_122(1);
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_122(int iParam0)
{
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_123(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_155())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_123(bool bParam0)
{
	return func_124(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_58(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_40() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_126(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_129(int iParam0)
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

int func_130()
{
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_133(var uParam0)
{
	return uParam0->f_1;
}

void func_134()
{
	Global_2462222 = 1;
}

int func_135()
{
	if (((((((func_98(unk_0xD803B885F5E47A62()) == 170 || func_98(unk_0xD803B885F5E47A62()) == 219) || func_98(unk_0xD803B885F5E47A62()) == 221) || func_98(unk_0xD803B885F5E47A62()) == 220) || func_98(unk_0xD803B885F5E47A62()) == 216) || func_98(unk_0xD803B885F5E47A62()) == 215) || func_98(unk_0xD803B885F5E47A62()) == 214) || func_98(unk_0xD803B885F5E47A62()) == 218)
	{
		return 1;
	}
	if (func_136(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_137(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_153(iParam0) && !func_152(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_151(iParam0);
	uVar3 = func_150();
	bVar4 = func_142();
	if ((bVar1 && (func_141(iParam0) || func_140(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_139(iParam0)) && !func_138(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_138(int iParam0)
{
	return func_131(iParam0, 19);
}

int func_139(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_131(iParam0, 9);
	}
	return 0;
}

int func_140(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_141(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_142()
{
	if ((func_131(unk_0xD803B885F5E47A62(), 21) || func_131(unk_0xD803B885F5E47A62(), 22)) || func_147())
	{
		return 1;
	}
	if (func_143())
	{
		func_154(22);
		return 1;
	}
	return 0;
}

int func_143()
{
	if (func_99(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_150() && !func_146()) || func_145(unk_0xD803B885F5E47A62(), 21)) || func_145(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_144(27);
		}
	}
	return 0;
}

void func_144(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

bool func_145(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

bool func_146()
{
	return Global_1312418.f_1;
}

bool func_147()
{
	return func_148(358, -1);
}

int func_148(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_149(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
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

bool func_150()
{
	return Global_1312418;
}

bool func_151(int iParam0)
{
	return func_131(iParam0, 20);
}

bool func_152(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 2);
}

int func_153(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

void func_154(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

bool func_155()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

void func_156()
{
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 20))
	{
		if (func_361())
		{
			unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 20);
			return;
		}
		if (func_142())
		{
			unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 20);
			return;
		}
		func_355(&Var0, &(Var0.f_1), 0, 0);
		if (func_770(func_7(), 1))
		{
			if (Local_112.f_34 > 0)
			{
				func_353(0, unk_0xD803B885F5E47A62());
				func_177(157, 1, &Var0, 0);
			}
			else
			{
				func_353(0, func_40());
				func_177(157, 0, &Var0, 0);
			}
		}
		else
		{
			func_177(157, func_174(0, 0) > 0, &Var0, 0);
			if (func_173() != func_40() && func_98(func_173()) != 157)
			{
				func_355(&iVar23, &uVar24, 0, 1);
				func_157(&iVar23, 1);
			}
		}
		unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 20);
	}
}

void func_157(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_172())
		{
			if (func_100(0))
			{
				if (!func_123(0))
				{
					if (unk_0x40B8C182D63932FC(func_173()))
					{
						if (func_171() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_171());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_169(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_162("GB_BCUT_TICK1", func_173(), iVar0, 0, 0, 1);
						}
						func_96(20);
						func_158(func_173(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	if (func_6(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_161(iParam0);
		func_160(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_159(iParam0));
	}
}

int func_159(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_160(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_161(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

int func_162(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = -1;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_59(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_167(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_163(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_163(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_166() || !unk_0xA14BB9332558B949()) || !func_92(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_164(iParam2);
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

int func_164(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_165(iVar0);
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

void func_165(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_166()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

var func_167(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_168(&cVar0);
}

var func_168(char[4] cParam0)
{
	return cParam0;
}

void func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_170(1);
	}
	else
	{
		iVar1 = func_170(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_170(bool bParam0)
{
	if (bParam0)
	{
		return round((0,05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_171()
{
	return Global_262145.f_12389;
}

bool func_172()
{
	return func_79(unk_0xD803B885F5E47A62());
}

int func_173()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

int func_174(int iParam0, bool bParam1)
{
	if (func_100(1) && !bParam1)
	{
		if (iParam0 || func_172())
		{
			iVar0 = 0;
			while (iVar0 < unk_0x54EABC0DD106045B())
			{
				iVar2 = unk_0xF4FB3A22FC4991C8(iVar0);
				if (unk_0x81A93C8315C28F58(iVar2))
				{
					iVar3 = unk_0x4B2BFE4A3BC248ED(iVar2);
					if (unk_0x40B8C182D63932FC(iVar3))
					{
						if (func_175(iVar3, func_173(), 1))
						{
							iVar1 = (iVar1 + Local_171[iVar0].f_2);
						}
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return Local_171[unk_0x57270EE11514DC67()].f_2;
}

int func_175(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_40())
	{
		if (!bParam2)
		{
			if (func_176(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_40())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (iParam0 != func_40())
		{
			if (Global_1628237[iParam0].f_11 != func_40())
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

void func_177(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	func_351(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_350(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_349(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_347(iParam0))
	{
		if (bParam1)
		{
			if (func_346(unk_0xD803B885F5E47A62()) > 0)
			{
				func_345();
			}
			else
			{
				func_344();
			}
		}
		else
		{
			func_343();
		}
	}
	func_327(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_325(iParam0, uParam2, &iVar0, &iVar5);
	func_300(iParam0, uParam2, &iVar0, &iVar5);
	func_297(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_280(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	iVar8 = func_7();
	if (iVar8 != func_40() && iParam0 != 148)
	{
		if (func_78(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_175(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_157(&iVar0, 1);
			}
		}
	}
	func_275(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_274();
		func_226(0, unk_0x16F2683693E537C9(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674356.f_9 = iVar0;
		func_204(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_203(iParam0, iVar0);
		if (func_202(iParam0))
		{
			if (func_201(iParam0) > -1)
			{
				func_200(func_201(iParam0), iVar0);
			}
		}
		Global_2462880 = iVar0;
		func_199(&Global_2461144, 0, 0);
	}
	if (func_139(unk_0xD803B885F5E47A62()) || func_151(unk_0xD803B885F5E47A62()))
	{
		func_188(iParam0);
	}
	if (func_95(iParam0))
	{
		Global_1674374.f_13 = iVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_128(iParam0))
	{
		Global_1674428.f_13 = iVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_187(iParam0))
	{
		Global_1674491.f_12 = iVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_186(iParam0))
	{
		Global_1674535.f_12 = iVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_185(iParam0))
	{
		Global_1674589.f_12 = iVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_127(iParam0))
	{
		if (func_184(iParam0))
		{
			Global_1674671.f_12 = iVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_180(iParam0))
		{
			Global_1674725.f_12 = iVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_179(iParam0))
	{
		Global_1674809.f_12 = iVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_178(iParam0))
	{
		Global_1674884.f_16 = iVar0;
		Global_1674884.f_17 = iVar1;
	}
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_180(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_181(func_182(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_182(int iParam0)
{
	if (func_98(iParam0) == 237 || func_98(iParam0) == 250)
	{
		return func_183(iParam0);
	}
	return -1;
}

int func_183(int iParam0)
{
	if (func_99(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_184(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_188(int iParam0)
{
	if (func_198(unk_0xD803B885F5E47A62()) && func_197())
	{
		if (func_196(iParam0))
		{
			func_191(10146, -1);
		}
		else if (func_190(iParam0))
		{
			func_191(10148, -1);
		}
		else if (func_115(iParam0, 1))
		{
			func_191(10149, -1);
		}
		else if (func_189(iParam0))
		{
			func_191(10150, -1);
		}
	}
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = func_195(iParam0, func_149(iParam1), 0);
	iVar0++;
	if (!func_194(iParam0))
	{
		func_193(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_192(iParam0, iVar0, iParam1, 1);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_149(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_149(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_149(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_149(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_149(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_149(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_149(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_149(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_149(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_149(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_149(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_149(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_149(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_149(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_149(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_149(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_149(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_149(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_149(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_149(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_149(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_149(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_149(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_149(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_149(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_149(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_149(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_149(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_149(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_149(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_149(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_149(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_149(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_149(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_149(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_149(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_149(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_149(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_149(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_149(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_149(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_149(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_149(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_149(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_149(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_149(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_149(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_149(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_149(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_149(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_149(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_149(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_149(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_149(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_149(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_149(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_149(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_149(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_149(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_149(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_149(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_149(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_149(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_149(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_149(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_149(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_149(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_149(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_149(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_149(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_149(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_149(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_149(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_149(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_149(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_149(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_149(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_149(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_149(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_149(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_149(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_149(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_149(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_149(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_149(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_149(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_149(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_149(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_149(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_149(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_149(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_149(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_149(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_149(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_149(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_149(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_149(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_149(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_149(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_149(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_149(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_149(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_149(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_149(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_149(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_149(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_149(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_149(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_197()
{
	return func_57(unk_0xD803B885F5E47A62());
}

bool func_198(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_123, 14);
}

void func_199(var uParam0, bool bParam1, bool bParam2)
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

void func_200(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_202(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_203(int iParam0, int iParam1)
{
	if (func_198(unk_0xD803B885F5E47A62()) && func_197())
	{
		if (func_196(iParam0) && iParam1 > 0)
		{
			func_193(10147, (func_195(10147, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	iVar5 = func_173();
	if (iVar5 != func_40())
	{
		func_225(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_100(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_224())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_197())
			{
				if (!func_224())
				{
					Var7 = { func_223() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_222(Var7)), func_221(Var7), iParam4);
				}
			}
			else if (func_224())
			{
				func_210(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_172())
			{
				if (!func_224())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_222(func_209(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_224())
			{
				func_210(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_172())
			{
				if (!func_224())
				{
					iVar2 = func_205(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x13A30CD1AD15553C(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_224())
			{
				func_210(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x3CF6953686BFBF61(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_224())
			{
				func_210(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x53D560AAF6BF3D4E(iParam1);
			}
			break;
		
		case 237:
			if (func_172())
			{
				if (!func_224())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_224())
			{
				func_210(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_224())
			{
				func_210(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA106C1682C790290(iParam1);
			}
			break;
		
		case 249:
			if (func_224())
			{
				func_210(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x546613D1293DBF87(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_224())
			{
				func_210(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x163F1C05711ACF77(iParam1);
			}
			break;
		
		case 243:
			if (func_224())
			{
				func_210(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_224())
				{
					func_210(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_224())
			{
				func_210(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_224())
			{
				func_210(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x0C06D61FE6218C43(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_205(int iParam0, int iParam1)
{
	fVar0 = func_208(iParam0, iParam1);
	fVar1 = (to_float(func_206(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_206(int iParam0, int iParam1)
{
	return (func_207(iParam0) * iParam1);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		
		case 0:
			return Global_262145.f_22307;
		
		case 1:
			return Global_262145.f_22308;
		
		case 2:
			return Global_262145.f_22309;
		
		case 3:
			return Global_262145.f_22310;
		
		case 4:
			return Global_262145.f_22311;
		
		case 5:
			return Global_262145.f_22312;
		
		case 6:
			return Global_262145.f_22313;
		
		case 7:
			return Global_262145.f_22314;
		
		default:
	}
	return 0;
}

float func_208(int iParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_209(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_224())
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
				func_211(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_211(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_211(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_211(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_211(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_224())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_94()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_218(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_217(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_212(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_213(iParam0);
	}
}

void func_213(int iParam0)
{
	bVar0 = false;
	if (!func_224())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_216(iParam0))
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
		func_214(&(Global_4263954[iParam0]));
	}
}

void func_214(var uParam0)
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
	func_215(&(uParam0->f_14));
	func_215(&(uParam0->f_14.f_13));
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

void func_215(var uParam0)
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

int func_216(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_217(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_224())
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
				func_219(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_159(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_220();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_220()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_221(int iParam0)
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

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_223()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_193;
}

int func_224()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_225(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[iParam0].f_11.f_8[0];
	*uParam2 = Global_1628237[iParam0].f_11.f_8[1];
}

int func_226(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_227(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_227(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_237(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_233(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_228(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_228(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vVar0 = { func_231(iParam0, 1) };
	if (iParam0 == func_230(unk_0x16F2683693E537C9()))
	{
		func_229(1);
	}
	func_233(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_229(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_230(int iParam0)
{
	return iParam0;
}

Vector3 func_231(int iParam0, bool bParam1)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_232(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
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

int func_232(int iParam0)
{
	return iParam0;
}

void func_233(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_236(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_235();
			Global_2439138.f_1290[iVar1].f_10 = func_234();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_234()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_235()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_236(vector3 vParam0, var uParam3, var uParam4)
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

var func_237(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_238(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_238(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_273(unk_0xD803B885F5E47A62()) || func_272(unk_0xD803B885F5E47A62()))
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
	else if (func_270() || func_269(unk_0xD803B885F5E47A62()))
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
	if (func_268(sParam2))
	{
	}
	if (func_267())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_265(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_264(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_261(0, &iVar1);
					break;
				
				case 3:
					func_261(1, &iVar1);
					break;
				
				case 1:
					func_258(&iVar1);
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
			func_257(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_249((func_256(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_257(1165, iVar1, -1);
				}
				func_243(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_239((func_241(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_239((func_241(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_239(int iParam0)
{
	if (func_267())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_240(-1804740956, iParam0);
	}
}

void func_240(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_241(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_242(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_242(-1804740956);
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_243(int iParam0)
{
	Var0 = { func_248(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_246(func_247(&Var0));
			if (iVar13 == 0)
			{
				func_245(&Global_1387915, iParam0);
				func_244(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_245(&Global_1387916, iParam0);
				func_244(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_245(&Global_1387917, iParam0);
				func_244(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_245(&Global_1387918, iParam0);
				func_244(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_245(&Global_1387919, iParam0);
				func_244(1894078811, Global_1387919);
			}
		}
	}
}

void func_244(int iParam0, int iParam1)
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

void func_245(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_246(int iParam0)
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

int func_247(var uParam0)
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

struct<13> func_248(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	if (func_267())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_149(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_149(-1)])
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
		if (func_255(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_253(iParam0, 1);
		}
		func_192(639, iParam0, -1, 1);
		func_193(640, func_253(iParam0, 1), -1, 1, 0);
		Global_1388060[func_149(-1)] = iParam0;
		func_250(-1109644434, 7, 0);
	}
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	if (func_252(iParam1, iParam2))
	{
		iVar0 = func_251();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_251()
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

int func_252(int iParam0, var uParam1)
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

int func_253(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_254(iParam0, 0);
}

int func_254(int iParam0, int iParam1)
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

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_149(-1)];
			}
			else if (func_255(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_149(-1)];
	}
	return 0;
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_195(iParam0, func_149(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_194(iParam0))
	{
		func_193(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_192(iParam0, iVar0, iParam2, 1);
	}
}

void func_258(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_66(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_260(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_259(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_259(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_259(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_260(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_248(iParam0) };
		Global_2513231 = { func_248(iParam1) };
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

void func_261(bool bParam0, int iParam1)
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
						if (func_260(unk_0xD803B885F5E47A62(), iVar4))
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
					if (func_262(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_260(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_259(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_259(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_262(int iParam0, int iParam1)
{
	return vdist(func_263(iParam0), func_263(iParam1));
	return 0f;
}

Vector3 func_263(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_264(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_259(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_265(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_256(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_256(unk_0xD803B885F5E47A62());
		}
	}
	if (func_266(8000, 0, 0) > 0)
	{
		if (func_266(8000, 0, 0) < (iParam0 + func_256(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_266(8000, 0, 0) - func_256(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_266(int iParam0, bool bParam1, int iParam2)
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

int func_267()
{
	return 1;
}

int func_268(char* sParam0)
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

int func_269(int iParam0)
{
	return func_185(func_98(iParam0));
}

bool func_270()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_82();
	}
	return func_271(Global_4456448.f_194990);
}

int func_271(int iParam0)
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

bool func_272(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_273(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_274()
{
	Global_2462221 = 1;
}

void func_275(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_279(7))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	iVar1 = func_277(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_2537071.f_5124.f_265, unk_0x2B6E0A53779D29EA()));
	if (func_276(iParam0) != -1)
	{
		if (iVar2 > func_276(iParam0))
		{
			iVar2 = func_276(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_276(int iParam0)
{
	if (func_115(iParam0, 0) || func_190(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_196(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		
		case 191:
			return Global_262145.f_18485;
		
		case 190:
			return Global_262145.f_18484;
		
		case 227:
			return Global_262145.f_21043;
		
		case 226:
			return Global_262145.f_21031;
		
		case 225:
			return Global_262145.f_21051;
		
		case 230:
			return Global_262145.f_22303;
		
		case 229:
			return Global_262145.f_22207;
		
		case 233:
			return Global_262145.f_22779;
		
		case 237:
			return Global_262145.f_23942;
		
		case 238:
			return Global_262145.f_24053;
		
		case 249:
			return Global_262145.f_24069;
		
		case 243:
			return Global_262145.f_26301;
		
		default:
	}
	return -1;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14995;
		
		case 171:
			return Global_262145.f_15054;
		
		case 172:
			return Global_262145.f_15072;
		
		case 173:
			return Global_262145.f_15013;
		
		case 166:
			return Global_262145.f_15028;
		
		case 167:
			return Global_262145.f_15119;
		
		case 169:
			return Global_262145.f_15091;
		
		case 168:
			return Global_262145.f_15084;
		
		case 179:
			return Global_262145.f_18366;
		
		case 180:
			return Global_262145.f_18144;
		
		case 182:
			return Global_262145.f_18144;
		
		case 183:
			return Global_262145.f_18144;
		
		case 185:
			return Global_262145.f_18144;
		
		case 186:
			return Global_262145.f_18144;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return Global_262145.f_18020;
		
		case 191:
			return Global_262145.f_18111;
		
		case 192:
			return Global_262145.f_17905;
		
		case 193:
			return Global_262145.f_18366;
		
		case 194:
			return Global_262145.f_18366;
		
		case 195:
			return Global_262145.f_18144;
		
		case 197:
			return Global_262145.f_18144;
		
		case 198:
			return Global_262145.f_18144;
		
		case 199:
			return Global_262145.f_18366;
		
		case 200:
			return Global_262145.f_18366;
		
		case 201:
			return Global_262145.f_18366;
		
		case 205:
			return Global_262145.f_18366;
		
		case 207:
			return Global_262145.f_18144;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return Global_262145.f_18144;
		
		case 210:
			return Global_262145.f_18366;
		
		case 211:
			return Global_262145.f_18366;
		
		case 214:
			return Global_262145.f_19216;
		
		case 215:
			return Global_262145.f_19218;
		
		case 216:
			return Global_262145.f_19220;
		
		case 217:
			return Global_262145.f_19222;
		
		case 218:
			return Global_262145.f_19224;
		
		case 219:
			return Global_262145.f_19226;
		
		case 220:
			return Global_262145.f_19228;
		
		case 221:
			return Global_262145.f_19230;
		
		case 225:
			if (!func_172())
			{
				return Global_262145.f_21053;
			}
			break;
		
		case 226:
			if (!func_172())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 227:
			if (!func_172())
			{
				return Global_262145.f_21045;
			}
			break;
		
		case 229:
			if (!func_172())
			{
				return Global_262145.f_22209;
			}
			break;
		
		case 230:
			if (!func_172())
			{
				return Global_262145.f_22305;
			}
			break;
		
		case 233:
			if (!func_172())
			{
				return Global_262145.f_22778;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_172())
			{
				return Global_262145.f_23944;
			}
			break;
		
		case 238:
			if (!func_172())
			{
				return Global_262145.f_24055;
			}
			break;
		
		case 249:
			if (!func_172())
			{
				return Global_262145.f_24071;
			}
			break;
		
		case 243:
			if (!func_172())
			{
				return Global_262145.f_26304;
			}
			break;
		
		case 158:
			if (!func_172())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14994;
		
		case 171:
			return Global_262145.f_15053;
		
		case 172:
			return Global_262145.f_15071;
		
		case 173:
			return Global_262145.f_15012;
		
		case 166:
			return Global_262145.f_15027;
		
		case 179:
			return Global_262145.f_18365;
		
		case 180:
			return Global_262145.f_18143;
		
		case 182:
			return Global_262145.f_18143;
		
		case 183:
			return Global_262145.f_18143;
		
		case 185:
			return Global_262145.f_18143;
		
		case 186:
			return Global_262145.f_18143;
		
		case 189:
			return Global_262145.f_18365;
		
		case 193:
			return Global_262145.f_18365;
		
		case 194:
			return Global_262145.f_18365;
		
		case 195:
			return Global_262145.f_18143;
		
		case 197:
			return Global_262145.f_18143;
		
		case 198:
			return Global_262145.f_18143;
		
		case 199:
			return Global_262145.f_18365;
		
		case 200:
			return Global_262145.f_18365;
		
		case 201:
			return Global_262145.f_18365;
		
		case 205:
			return Global_262145.f_18365;
		
		case 207:
			return Global_262145.f_18143;
		
		case 208:
			return Global_262145.f_18143;
		
		case 209:
			return Global_262145.f_18143;
		
		case 210:
			return Global_262145.f_18365;
		
		case 211:
			return Global_262145.f_18365;
		
		case 190:
			if (func_123(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_123(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_123(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19215;
		
		case 215:
			return Global_262145.f_19217;
		
		case 216:
			return Global_262145.f_19219;
		
		case 217:
			return Global_262145.f_19221;
		
		case 218:
			return Global_262145.f_19223;
		
		case 219:
			return Global_262145.f_19225;
		
		case 220:
			return Global_262145.f_19227;
		
		case 221:
			return Global_262145.f_19229;
		
		case 225:
			if (func_123(0))
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 226:
			if (func_123(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 227:
			if (func_123(0))
			{
				return Global_262145.f_21044;
			}
			break;
		
		case 229:
			if (func_123(0))
			{
				return Global_262145.f_22208;
			}
			break;
		
		case 230:
			if (func_123(0))
			{
				return Global_262145.f_22304;
			}
			break;
		
		case 233:
			if (func_123(0))
			{
				return Global_262145.f_22780;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_123(0))
			{
				return Global_262145.f_23943;
			}
			break;
		
		case 238:
			if (func_123(0))
			{
				return Global_262145.f_24054;
			}
			break;
		
		case 249:
			if (func_123(0))
			{
				return Global_262145.f_24070;
			}
			break;
		
		case 243:
			return Global_262145.f_26300;
		
		case 158:
			if (func_123(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_279(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, iParam0);
}

void func_280(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar18 = func_123(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_172())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_173();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590535[iVar11].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[iVar11].f_854.f_2;
			}
			else
			{
				iVar2 = func_296(Global_1590535[iVar11].f_854, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0,9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_295(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_294("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1674671.f_49 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_293(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_291(*uParam3);
				}
				iVar6 = func_290(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_96(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x54EABC0DD106045B())
						{
							iVar22 = iVar21;
							if (unk_0x81A93C8315C28F58(iVar22))
							{
								iVar23 = unk_0x4B2BFE4A3BC248ED(iVar22);
								if (func_289(iVar23))
								{
									func_281(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_96(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_283(iParam0);
	func_282(iParam0, uVar0, iParam1, iParam2);
}

void func_282(int iParam0, var uParam1, var uParam2, var uParam3)
{
	Var0 = -601653676;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_161(iParam0);
	func_160(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_40())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_159(iParam0));
		}
	}
}

int func_283(int iParam0)
{
	iVar0 = func_288();
	iVar0 = func_286(iParam0, iVar0);
	iVar1 = Global_1628237[func_173()].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_285())
	{
		iVar0 = func_285();
	}
	if (iVar0 > func_284())
	{
		iVar0 = func_284();
	}
	return iVar0;
}

int func_284()
{
	return Global_262145.f_14956;
}

int func_285()
{
	return Global_262145.f_16131;
}

int func_286(int iParam0, int iParam1)
{
	iVar0 = (func_346(iParam0) * func_287());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_287()
{
	return Global_262145.f_16130;
}

var func_288()
{
	return Global_262145.f_12381;
}

int func_289(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_175(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_131(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (!func_92(iVar2, 0) && !func_175(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_92(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_291(int iParam0)
{
	func_292(iParam0, 7236);
}

void func_292(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_195(iParam1, -1, 0);
	func_193(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_293(int iParam0)
{
	func_292(iParam0, 7231);
}

int func_294(char* sParam0, int iParam1)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_163(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_295(int iParam0)
{
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_296(struct<5> Param0, int iParam5)
{
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam5) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_297(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	*uParam4 = 0;
	bVar16 = func_123(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_172())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_173();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_206(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_205(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_299(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_294("SMTICK_RONCUT", func_299(*iParam2));
				}
				*iParam2 = (*iParam2 - func_299(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_298(iVar2, iVar9);
				iVar6 = func_290(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22321));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_96(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_289(iVar20))
								{
									func_281(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_96(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_292(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_292(iParam1, 6117);
	}
}

int func_299(int iParam0)
{
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > to_float(Global_262145.f_22290))
	{
		fVar1 = to_float(Global_262145.f_22290);
	}
	return round(fVar1);
}

void func_300(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar17 = func_123(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_172())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_173();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_209(iVar15);
			iVar0 = (func_324(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_320(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_314(iVar16, iVar2);
				if (func_310(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_301(5);
				}
				iVar6 = func_290(&uVar5);
				iVar7 = round(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_96(108);
					}
					else
					{
						func_96(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_289(iVar20))
								{
									func_281(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_96(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_301(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_303(Global_262145.f_20572))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_303(Global_262145.f_20574))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_303(Global_262145.f_20576))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_303(Global_262145.f_20578))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_303(Global_262145.f_20580))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_303(Global_262145.f_20582))
				{
					func_294("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_303(Global_262145.f_20585))
				{
					func_294("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_303(Global_262145.f_20588))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_303(Global_262145.f_20590))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_303(Global_262145.f_20592))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_303(Global_262145.f_20594))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_303(Global_262145.f_20596))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_303(Global_262145.f_20598))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_303(Global_262145.f_20600))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_303(Global_262145.f_20602))
				{
					func_302("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_302(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam3);
	}
	unk_0x6B012227B3921E18(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_2513218 = { func_248(unk_0xD803B885F5E47A62()) };
		if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0D020422A92A2236(iVar2, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_163(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_307(15417, -1, -1))
			{
				func_306(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_307(15418, -1, -1))
			{
				func_306(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_307(15425, -1, -1))
			{
				func_306(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_307(15405, -1, -1))
			{
				func_306(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_307(15393, -1, -1))
			{
				func_306(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_307(15409, -1, -1))
			{
				func_306(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_307(15396, -1, -1))
			{
				func_306(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_307(15412, -1, -1))
			{
				func_306(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_307(15403, -1, -1))
			{
				func_306(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_307(15389, -1, -1))
			{
				func_306(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_307(15398, -1, -1))
			{
				func_306(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_307(15400, -1, -1))
			{
				func_306(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_307(15408, -1, -1))
			{
				func_306(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_307(15411, -1, -1))
			{
				func_306(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_307(15397, -1, -1))
			{
				func_306(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_307(15413, -1, -1))
			{
				func_306(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_307(15391, -1, -1))
			{
				func_306(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_307(15388, -1, -1))
			{
				func_306(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_307(15401, -1, -1))
			{
				func_306(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_307(15394, -1, -1))
			{
				func_306(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_307(15406, -1, -1))
			{
				func_306(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_307(15395, -1, -1))
			{
				func_306(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_307(15410, -1, -1))
			{
				func_306(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_307(15407, -1, -1))
			{
				func_306(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_307(15414, -1, -1))
			{
				func_306(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_307(15415, -1, -1))
			{
				func_306(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_307(15399, -1, -1))
			{
				func_306(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_307(15404, -1, -1))
			{
				func_306(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_307(15392, -1, -1))
			{
				func_306(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_307(15390, -1, -1))
			{
				func_306(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_307(15402, -1, -1))
			{
				func_306(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_307(15416, -1, -1))
			{
				func_306(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_148(209, -1))
			{
				func_304(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_307(15426, -1, -1))
			{
				func_306(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_307(15422, -1, -1))
			{
				func_306(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_307(15423, -1, -1))
			{
				func_306(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_307(15421, -1, -1))
			{
				func_306(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_307(15427, -1, -1))
			{
				func_306(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_307(15419, -1, -1))
			{
				func_306(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_307(15420, -1, -1))
			{
				func_306(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_305())
	{
		iVar0 = Global_2583656[iParam0][func_149(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_305()
{
	return 1;
	return 0;
}

int func_306(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_94();
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

int func_307(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar1 = func_309(iParam0, iParam1);
	uVar2 = func_308(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_308(int iParam0)
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

int func_309(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_94();
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

int func_310(int iParam0)
{
	iVar0 = func_312(iParam0);
	return func_195(func_311(iVar0), -1, 0);
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_312(int iParam0)
{
	if (func_313(iParam0))
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

int func_313(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_314(int iParam0, int iParam1)
{
	iVar0 = func_312(iParam0);
	iVar1 = func_311(iVar0);
	iVar2 = (func_195(iVar1, -1, 0) + iParam1);
	func_193(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_317(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar0] != 0)
			{
				iVar1 = func_311(iVar0);
				iVar3 = (iVar3 + func_195(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_316(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_315(9357, iVar5, -1, 1);
	}
}

var func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_94();
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

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_317(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	iVar1 = func_319(iParam0, iParam1);
	iVar2 = func_318(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_318(int iParam0)
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

int func_319(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_94();
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

int func_320(int iParam0, int iParam1, int iParam2)
{
	iVar1 = func_221(iParam1);
	if (func_313(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_321(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_321(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_321(int iParam0, int iParam1, int iParam2)
{
	if (func_323(iParam0, iParam1))
	{
		iVar0 = func_322(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_322(int iParam0, int iParam1)
{
	if (func_313(iParam1) && iParam0 != func_40())
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

int func_323(int iParam0, int iParam1)
{
	if (func_313(iParam1) && iParam0 != func_40())
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

int func_324(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_313(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_325(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_197())
			{
				Var0 = { func_223() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = to_float(uParam1->f_10);
					fVar3 = to_float(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = ceil(fVar6);
				}
				iVar7 = func_320(unk_0xD803B885F5E47A62(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (to_float(iVar7) * Global_262145.f_18595);
					iVar7 = round(fVar8);
				}
				else
				{
					fVar9 = (to_float(iVar7) * Global_262145.f_18594);
					iVar7 = round(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_290(&uVar10);
				iVar12 = round(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = ceil((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_96(86);
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (func_123(0))
			{
				Var15 = { func_326(func_173()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = to_float(uParam1->f_10);
					fVar18 = to_float(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = ceil(fVar21);
				}
				iVar22 = func_320(func_173(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = ceil((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = ceil((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = ceil((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_326(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_193;
}

void func_327(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	if (iParam0 == 167)
	{
		if (func_79(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_342();
			}
			func_341();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_79(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_333(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_332(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_290(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_96(44);
					}
				}
				func_330(*iParam3);
				func_329();
				Global_2537071.f_5124.f_381 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_289(iVar9))
						{
							func_281(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_79(unk_0xD803B885F5E47A62()))
		{
			func_328();
		}
	}
}

void func_328()
{
	iVar0 = Global_2586255[func_94()];
	iVar0++;
	func_192(3667, iVar0, -1, 1);
}

void func_329()
{
	iVar0 = Global_2586261[func_94()];
	iVar0++;
	func_192(3666, iVar0, -1, 1);
}

void func_330(int iParam0)
{
	iVar0 = Global_2586264[func_94()];
	iVar0 = (iVar0 + iParam0);
	func_192(3668, iVar0, -1, 1);
	if (func_317(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_331(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_315(7666, iVar2, -1, 1);
	}
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
			break;
		
		case 2:
			return Global_262145.f_16275;
			break;
		
		case 3:
			return Global_262145.f_16276;
			break;
		
		case 4:
			return Global_262145.f_16277;
			break;
		
		case 5:
			return Global_262145.f_16278;
			break;
		
		case 6:
			return Global_262145.f_16279;
			break;
		
		case 7:
			return Global_262145.f_16280;
			break;
		
		case 8:
			return Global_262145.f_16281;
			break;
		
		case 9:
			return Global_262145.f_16282;
			break;
		
		case 10:
			return Global_262145.f_16283;
			break;
		
		case 11:
			return Global_262145.f_16284;
			break;
		
		case 12:
			return Global_262145.f_16285;
			break;
		
		case 13:
			return Global_262145.f_16286;
			break;
		
		case 14:
			return Global_262145.f_16287;
			break;
		
		case 15:
			return Global_262145.f_16288;
			break;
		
		case 16:
			return Global_262145.f_16289;
			break;
		
		case 17:
			return Global_262145.f_16290;
			break;
		
		case 18:
			return Global_262145.f_16291;
			break;
		
		case 19:
			return Global_262145.f_16292;
			break;
		
		case 20:
			return Global_262145.f_16293;
			break;
		
		case 21:
			return Global_262145.f_16294;
			break;
		
		case 22:
			return Global_262145.f_16295;
			break;
		
		case 23:
			return Global_262145.f_16296;
			break;
		
		case 24:
			return Global_262145.f_16297;
			break;
	}
	return 0;
}

var func_332(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_333(int iParam0)
{
	if (func_340(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_339(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_338(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_334(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_334(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_338(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_334(int iParam0)
{
	if (func_337(iParam0))
	{
		iVar0 = func_335(func_336(iParam0));
		return func_195(iVar0, -1, 0);
	}
	return 0;
}

int func_335(int iParam0)
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

int func_336(int iParam0)
{
	if (func_337(iParam0))
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

int func_337(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

int func_339(int iParam0, int iParam1)
{
	if (func_337(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (func_337(iParam0))
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

void func_341()
{
	iVar0 = Global_2586252[func_94()];
	iVar0++;
	Global_2586252[func_94()] = iVar0;
	func_192(3665, iVar0, -1, 1);
}

void func_342()
{
	iVar0 = Global_2586249[func_94()];
	iVar1 = Global_2586258[func_94()];
	iVar0++;
	iVar1++;
	Global_2586249[func_94()] = iVar0;
	Global_2586258[func_94()] = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_128 = iVar1;
	func_192(3663, iVar0, -1, 1);
	func_192(3664, iVar1, -1, 1);
}

void func_343()
{
	if (func_172())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_344()
{
	if (func_172())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_345()
{
	if (func_172())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_346(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_28;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_100(1) && !func_123(1))
			{
				if (func_348(func_173()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_348(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_349(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15051;
		
		case 172:
			return Global_262145.f_15067;
		
		case 173:
			return Global_262145.f_15010;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18289;
		
		case 180:
			return Global_262145.f_18164;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18172;
		
		case 185:
			return Global_262145.f_18181;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18377;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18394;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18241;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18425;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18303;
		
		case 205:
			return Global_262145.f_18412;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18270;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18407;
		
		case 211:
			return Global_262145.f_18371;
		
		case 214:
			return Global_262145.f_18965;
		
		case 215:
			return Global_262145.f_18975;
		
		case 216:
			return Global_262145.f_18985;
		
		case 217:
			return Global_262145.f_18994;
		
		case 218:
			return Global_262145.f_19003;
		
		case 219:
			return Global_262145.f_19019;
		
		case 241:
			return Global_262145.f_24090;
		
		case 242:
			return Global_262145.f_24086;
		
		case 248:
			return Global_262145.f_24089;
		
		case 244:
			return Global_262145.f_24087;
		
		case 239:
			return Global_262145.f_24091;
		
		case 240:
			return Global_262145.f_24092;
		
		case 243:
			return Global_262145.f_26299;
		
		default:
	}
	return 0;
}

int func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14993;
		
		case 171:
			return Global_262145.f_15052;
		
		case 172:
			return Global_262145.f_15068;
		
		case 173:
			return Global_262145.f_15011;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17090;
		
		case 168:
			return Global_262145.f_17089;
		
		case 179:
			return Global_262145.f_18290;
		
		case 180:
			return Global_262145.f_18165;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18173;
		
		case 185:
			return Global_262145.f_18182;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18378;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18395;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18242;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18426;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18304;
		
		case 205:
			return Global_262145.f_18413;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18271;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18408;
		
		case 211:
			return Global_262145.f_18372;
		
		case 214:
			return Global_262145.f_18966;
		
		case 215:
			return Global_262145.f_18976;
		
		case 216:
			return Global_262145.f_18986;
		
		case 217:
			return Global_262145.f_18995;
		
		case 218:
			return Global_262145.f_19004;
		
		case 219:
			return Global_262145.f_19020;
		
		case 178:
			if (func_172())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		
		case 188:
			if (func_172())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		
		case 225:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_21050;
			}
			break;
		
		case 226:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 227:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 229:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_22206;
			}
			break;
		
		case 230:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_22302;
			}
			break;
		
		case 233:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_22775;
			}
			break;
		
		case 241:
			return Global_262145.f_24097;
		
		case 242:
			return Global_262145.f_24093;
		
		case 244:
			return Global_262145.f_24094;
		
		case 248:
			return Global_262145.f_24096;
		
		case 239:
			return Global_262145.f_24098;
		
		case 240:
			return Global_262145.f_24099;
		
		case 237:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_23941;
			}
			break;
		
		case 238:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_24052;
			}
			break;
		
		case 249:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 243:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_197())
			{
				return Global_262145.f_26302;
			}
			break;
		
		case 158:
			if (func_172() && !func_197())
			{
				if (func_348(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_197())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_351(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_352(iParam0))
	{
		if (!func_172())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_78(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_95(iParam0))
		{
			*uParam1 = (Global_262145.f_18141 / 100f);
			*uParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24100;
			*uParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24101;
			*uParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24103;
			*uParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24104;
			*uParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24105;
			*uParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24106;
			*uParam2 = Global_262145.f_24106;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_95(iParam0))
	{
		*uParam1 = (Global_262145.f_18142 / 100f);
		*uParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24107;
		*uParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24108;
		*uParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24110;
		*uParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24111;
		*uParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24112;
		*uParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24113;
		*uParam2 = Global_262145.f_24113;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_7();
	if (iVar0 != func_40())
	{
		if (func_175(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_353(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_354(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			Global_2537071.f_5124.f_383 = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_354(int iParam0, int iParam1)
{
	if (iParam0 != func_40() && iParam1 != func_40())
	{
		iVar0 = func_41(iParam0);
		if (iVar0 != func_40())
		{
			return iVar0 == func_41(iParam1);
		}
	}
	return 0;
}

void func_355(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_770(func_7(), 1))
	{
		if (func_35())
		{
			*uParam0 = (func_360() * Local_112.f_34);
			*uParam1 = (func_359() * Local_112.f_34);
		}
		else
		{
			*uParam0 = (func_358() * Local_112.f_34);
			*uParam1 = (func_357() * Local_112.f_34);
		}
	}
	else if (func_100(1))
	{
		if (func_172())
		{
			iVar4 = (func_174(iParam2, bParam3) - Local_171[unk_0x57270EE11514DC67()].f_2);
		}
		else
		{
			iVar5 = unk_0x7B9C1F53FE442D06(func_173());
			if (iVar5 != -1)
			{
				iVar4 = (func_174(iParam2, bParam3) - Local_171[iVar5].f_2);
			}
		}
		if (func_35())
		{
			*uParam0 = (func_360() * func_174(iParam2, bParam3));
			*uParam1 = (func_359() * func_174(1, 0));
			iVar3 = (func_360() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		else
		{
			*uParam0 = (func_358() * func_174(iParam2, bParam3));
			*uParam1 = (func_357() * func_174(1, 0));
			iVar3 = (func_360() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		fVar0 = (to_float(*uParam0) * Global_262145.f_12397);
		fVar1 = (to_float(*uParam1) * Global_262145.f_12396);
		fVar2 = (to_float(iVar3) * Global_262145.f_12397);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
		iVar3 = round(fVar2);
		if (func_356() > 0)
		{
			func_169(&iVar3, 0);
		}
		*uParam0 = (*uParam0 + iVar3);
	}
	else
	{
		if (func_35())
		{
			*uParam0 = (func_360() * func_174(0, 0));
			*uParam1 = (func_359() * func_174(0, 0));
		}
		else
		{
			*uParam0 = (func_358() * func_174(0, 0));
			*uParam1 = (func_357() * func_174(0, 0));
		}
		fVar0 = ((to_float(*uParam0) * Global_262145.f_12399) * Global_262145.f_12478);
		fVar1 = ((to_float(*uParam1) * Global_262145.f_12398) * Global_262145.f_12479);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
	}
}

int func_356()
{
	if (func_173() == func_40())
	{
		return 0;
	}
	return func_39(func_173());
}

int func_357()
{
	return Global_262145.f_12473;
}

int func_358()
{
	return Global_262145.f_12471;
}

int func_359()
{
	return Global_262145.f_12474;
}

int func_360()
{
	return Global_262145.f_12472;
}

int func_361()
{
	return 0;
}

void func_362()
{
	if (func_392())
	{
		unk_0x5D96D8530B3D0904(&iLocal_82, 11);
	}
	if (func_109())
	{
		func_102();
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 11))
	{
		return;
	}
	if (func_100(1))
	{
		sVar0 = func_391();
		iVar1 = func_59(unk_0xD803B885F5E47A62(), -2, 0, 0, 0);
	}
	if (func_770(func_7(), 1))
	{
		if (Local_112.f_34 != -1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 22))
			{
				func_355(&iVar2, &uVar3, 0, 0);
				if (Local_112.f_34 == 1)
				{
					func_389(87, "GB_WINNER", "GB_BB_SS_DEL1", sVar0, iVar1, 0, iVar2, -1, -1, 2, -1);
				}
				else if (Local_112.f_34 > 1)
				{
					func_389(87, "GB_WINNER", "GB_BB_SS_DEL", sVar0, iVar1, 0, Local_112.f_34, iVar2, -1, 2, -1);
				}
				else if (Local_112.f_34 == 0)
				{
					if (Local_112.f_35 != func_14())
					{
						if (func_14() > 1)
						{
							func_389(88, "GB_WORK_OVER", "GB_BB_SS_DELL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_389(88, "GB_WORK_OVER", "GB_BB_SS_DELL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
					else if (Local_112.f_35 == func_14())
					{
						if (func_14() > 1)
						{
							func_388(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
						}
						else
						{
							func_388(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
						}
					}
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_82, 11);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 22) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 16))
		{
			iVar4 = func_174(1, 0);
			func_355(&iVar5, &uVar6, 1, 0);
			if (iVar4 == 1)
			{
				if (func_100(1))
				{
					func_389(91, "GB_WORK_OVER", "GB_BB_SS_DES1", sVar0, iVar1, 0, iVar5, -1, -1, 2, -1);
				}
				else
				{
					func_369(91, iVar5, -1, "GB_BB_SS_SDES1", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 > 1)
			{
				if (func_100(1))
				{
					func_389(91, "GB_WORK_OVER", "GB_BB_SS_DES", sVar0, iVar1, 0, iVar4, iVar5, -1, 2, -1);
				}
				else
				{
					func_369(91, iVar4, iVar5, "GB_BB_SS_SDES", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 == 0)
			{
				if (Local_112.f_35 == 0)
				{
					if (Local_112.f_34 != func_14())
					{
						if (func_100(1))
						{
							if (func_14() > 1)
							{
								func_389(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_389(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
						}
						else if (func_14() > 1)
						{
							func_388(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
						}
						else
						{
							func_388(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
						}
					}
					else if (Local_112.f_34 == func_14())
					{
						sVar0 = func_363(func_7());
						iVar1 = func_59(func_7(), -2, 0, 0, 0);
						if (func_14() > 1)
						{
							func_389(88, "GB_WORK_OVER", "GB_BB_SS_DELIV", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_389(88, "GB_WORK_OVER", "GB_BB_SS_DELIV1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
				}
				else if (Local_112.f_35 == func_14())
				{
					if (func_14() > 1)
					{
						func_388(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
					}
					else
					{
						func_388(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
					}
				}
				else if (func_100(1))
				{
					if (func_14() > 1)
					{
						func_389(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
					else
					{
						func_389(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
				}
				else if (func_14() > 1)
				{
					func_388(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
				}
				else
				{
					func_388(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 18))
		{
			func_388(88, "GB_WORK_OVER", "GB_BB_SS_FLEFT", 1, -1, 2, 1, 0);
		}
		func_101();
		unk_0x5D96D8530B3D0904(&iLocal_82, 11);
	}
}

char* func_363(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_368(&(Global_1628237[iParam0].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120)
	{
		sVar0 = func_366(iParam0, 0);
		return sVar0;
	}
	if (((func_131(iParam0, 28) || func_131(unk_0xD803B885F5E47A62(), 28)) || func_365(iParam0)) && !func_364(iParam0))
	{
		return func_366(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_40())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_366(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_40())
	{
		sVar0 = func_368(&(Global_1628237[iVar1].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_366(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_364(int iParam0)
{
	Var0 = { func_248(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	if (iParam0 != func_40())
	{
		Var0 = { func_248(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_366(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(iParam0, 1))
		{
			return func_367();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_367()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

var func_368(var uParam0)
{
	return uParam0;
}

int func_369(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
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
	func_387(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return func_370(&Var0);
}

int func_370(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_386(uParam0, uParam0->f_17);
	func_383(uParam0);
	if (func_82())
	{
		func_383(uParam0);
	}
	if (func_382(uParam0->f_1))
	{
		func_375();
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
				func_375();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_373(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_372(uParam0->f_69, 128))
			{
				if (func_371(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_373(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_371(int iParam0)
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

bool func_372(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_373(var uParam0, int iParam1)
{
	func_374(uParam0, iParam1);
}

void func_374(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_375()
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
	func_376();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_376()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_380(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_377(&(Global_2439138.f_3047.f_1));
}

void func_377(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_379(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_378(0);
}

void func_378(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_379(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_380(var uParam0)
{
	func_381(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_381(var uParam0)
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

int func_382(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_383(var uParam0)
{
	if (func_385(uParam0->f_1))
	{
		uParam0->f_72 = func_384();
	}
}

int func_384()
{
	return 21;
}

int func_385(int iParam0)
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

void func_386(var uParam0, int iParam1)
{
	if (func_385(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_40() || !func_6(iParam1, 0, 1))
	{
		return;
	}
	if (func_371(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_59(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_387(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_40();
	uParam1->f_18 = func_40();
	uParam1->f_19 = func_40();
	uParam1->f_20 = func_40();
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

int func_388(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_387(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_373(&(Var0.f_69), iParam7);
	}
	return func_370(&Var0);
}

int func_389(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = func_40();
	iVar1 = func_40();
	iVar2 = func_40();
	return func_390(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_390(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_387(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_373(&(Var0.f_69), 4);
	return func_370(&Var0);
}

char* func_391()
{
	iVar0 = func_41(unk_0xD803B885F5E47A62());
	if (iVar0 != func_40())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_131(iVar0, 28) || func_131(unk_0xD803B885F5E47A62(), 28)) || func_365(iVar0)) && !func_364(iVar0))
			{
				return func_366(iVar0, 0);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_366(iVar0, 0);
			}
		}
		sVar1 = func_368(&(Global_1628237[iVar0].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_366(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_392()
{
	if ((!func_393(1, 1, 1, 0) || func_772()) || func_137(unk_0xD803B885F5E47A62()) == 0)
	{
		return 1;
	}
	return 0;
}

int func_393(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_441(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_145(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_145(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			return 0;
		}
	}
	if (!func_440(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_438(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (func_435())
	{
		return 0;
	}
	if (func_434())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_432(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_430())
	{
		return 0;
	}
	if (func_145(unk_0xD803B885F5E47A62(), 0) || func_145(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_145(unk_0xD803B885F5E47A62(), 12) || func_145(unk_0xD803B885F5E47A62(), 14)) || func_145(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_423(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_403())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_402())
		{
			return 0;
		}
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_401(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_400())
	{
		return 0;
	}
	if (func_399(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_398(unk_0xD803B885F5E47A62()) && func_52(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_396(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_395(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_151(unk_0xD803B885F5E47A62()))
	{
		if (func_394(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_394(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_395(int iParam0)
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

int func_396(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_397()
{
	return Global_1676377.f_4303 != -1;
}

int func_398(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_399(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

bool func_402()
{
	return Global_98796.f_346 > 0;
}

int func_403()
{
	iVar0 = func_98(unk_0xD803B885F5E47A62());
	if (((func_422(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28) || func_421(unk_0xD803B885F5E47A62())) || func_420(unk_0xD803B885F5E47A62())) || func_415(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_413(unk_0xD803B885F5E47A62()))
	{
		if (func_196(iVar0) || func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_136(unk_0xD803B885F5E47A62()))
	{
		if (func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_411(unk_0xD803B885F5E47A62()))
	{
		if (func_187(iVar0))
		{
			return 1;
		}
	}
	if (func_410(unk_0xD803B885F5E47A62()))
	{
		if (func_186(iVar0))
		{
			return 1;
		}
	}
	if (func_409(unk_0xD803B885F5E47A62()))
	{
		if (func_185(iVar0))
		{
			return 1;
		}
	}
	if (func_408(unk_0xD803B885F5E47A62()))
	{
		if (func_407(iVar0))
		{
			return 1;
		}
	}
	if (func_406(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_405(iVar0))
		{
			if (func_54(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_404(unk_0xD803B885F5E47A62()))
	{
		if (func_178(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_406(int iParam0, bool bParam1)
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
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_40())
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)
{
	if (func_414(Global_1590535[iParam0].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0, int iParam1)
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

int func_415(int iParam0)
{
	if (func_416(Global_1590535[iParam0].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_417(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_417(unk_0xD803B885F5E47A62(), 0))
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

bool func_417(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_40())
	{
		if (!func_419(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_1590373)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373].f_195, 24) || func_418(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 24);
}

int func_418(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_421(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_422(int iParam0)
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

int func_423(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_421(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_136(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_420(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_411(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_410(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_409(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_429(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_408(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_428(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_406(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_427(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_404(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_426(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_424(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_40())
			{
				return func_51(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_430()
{
	if (func_431() == 0)
	{
		return 1;
	}
	return 0;
}

int func_431()
{
	return Global_1312467.f_18;
}

bool func_432(int iParam0)
{
	return func_433(iParam0);
}

bool func_433(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_434()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

bool func_435()
{
	return Global_1312877;
}

bool func_436()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 5;
}

bool func_437()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

int func_438(int iParam0)
{
	if (func_439(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_439(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_432(iParam0))
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

bool func_440(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_142, 22);
}

bool func_441(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_5, iParam1);
}

void func_442(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	if (Global_1674342 != 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1674342, 1))
		{
			if (func_172())
			{
				if (func_443(82, "GB_INTTXT_YA", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0x0674E58A79778E99(&Global_1674342, 1);
				}
			}
			else if (func_443(82, "GB_INTTXT_YA_2", 2, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0x0674E58A79778E99(&Global_1674342, 1);
			}
		}
	}
}

int func_443(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_445(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_444(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_444(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_445(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_458();
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
	if (func_457() == 0)
	{
		func_455();
		return 0;
	}
	func_454(Global_21872);
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
		func_453(0);
		func_453(2);
		func_453(1);
	}
	else
	{
		func_458();
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
					func_453(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_453(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_453(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_453(3);
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
		func_458();
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
			if (!func_435())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_452(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_448(1);
			func_452(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_446(uParam0, sParam1);
	return 1;
}

void func_446(var uParam0, char* sParam1)
{
	if (!func_447())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_447()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_40())
	{
		return 0;
	}
	if (func_151(unk_0xD803B885F5E47A62()))
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

void func_448(int iParam0)
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
		if (func_451(14))
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
								func_450(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_450(&(Global_7363[iVar1]));
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
								func_450(&(Global_7363[iVar1]));
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
								func_450(&(Global_7363[iVar1]));
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
								func_450(&(Global_7363[iVar1]));
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
								func_450(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_449(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

void func_449(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_450(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_450(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_450(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_450(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_450(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_450(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_451(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_452(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_453(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_454(int iParam0)
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

void func_455()
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
		if (!func_456(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_456(struct<6> Param0, struct<6> Param6)
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

int func_457()
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
			if (!func_456(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
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

void func_458()
{
	if (func_451(14))
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
		Global_19486 = func_459();
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

var func_459()
{
	func_460();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_460()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_463(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_462(unk_0x16F2683693E537C9());
			if (func_461(iVar0) && (!func_451(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_461(Global_111638.f_2358.f_539.f_4321))
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

bool func_461(int iParam0)
{
	return iParam0 < 3;
}

int func_462(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_463(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_463(int iParam0)
{
	if (func_461(iParam0))
	{
		return func_464(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_464(int iParam0)
{
	return Global_1798[iParam0];
}

void func_465(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	if (func_578(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_576() || iParam2 == 28)
	{
		if (func_533(iParam1, iParam2, uParam3, Global_1574185, 0, func_574(), sParam7))
		{
			func_532(1);
			if ((!func_531() && !func_530()) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
			{
				if (func_529())
				{
					func_527();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_526(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_525(iParam1, 0, 0);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_6(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
									if (!func_92(iVar35, 0))
									{
										if ((func_524(iVar35) || Global_2425662[iVar35].f_236 != -1) || func_523(iVar35))
										{
											iVar44 = iVar35;
											if (func_79(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_522(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_521(unk_0xD803B885F5E47A62(), 0) && func_98(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_520())
							{
								if (func_6(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
								}
								else
								{
									iVar35 = func_40();
								}
							}
							else
							{
								iVar35 = uParam0[iVar52]->f_1;
							}
							if ((func_519(iVar35) && func_516(iVar35, iParam2)) && func_6(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44].f_211.f_6;
								Var38 = { func_511(iVar35) };
								if (iVar35 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar35), 64);
								*uParam4[iVar52] = { func_248(iVar35) };
								iVar37 = func_505(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if (uParam0[iVar52]->f_22 != -1f)
								{
									fVar45 = uParam0[iVar52]->f_22;
								}
								if (uParam0[iVar52]->f_31 != -1)
								{
									iVar46 = uParam0[iVar52]->f_31;
								}
								if (uParam0[iVar52]->f_41 != -1)
								{
									iVar47 = uParam0[iVar52]->f_41;
								}
								iVar43 = uParam0[iVar52]->f_9;
								if ((uParam0[iVar52]->f_9 != -1 || uParam0[iVar52]->f_22 != -1f) || uParam0[iVar52]->f_31 != -1)
								{
									if (!func_520())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_500(&iVar43, &fVar45, uParam0[iVar52]->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_499(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = uParam0[iVar52]->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_498(iVar35, 0);
								if (bVar34)
								{
									if (func_78(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44].f_1 = iVar53;
								if (uParam0[iVar52]->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, uParam0[iVar52]->f_39, 16);
								}
								if (func_497(iParam5))
								{
									func_496(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								else
								{
									func_496(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x117658E336116132(iVar52);
							if (func_6(iVar35, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar49, iVar35))
							{
								iVar35 = unk_0x117658E336116132(iVar52);
							}
							else
							{
								iVar35 = func_40();
							}
							if (func_519(iVar35))
							{
								if (func_6(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44].f_211.f_6;
									Var38 = { func_511(iVar35) };
									*uParam4[iVar52] = { func_248(iVar35) };
									iVar37 = func_505(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									iVar51 = func_498(iVar35, 1);
									if (bVar34)
									{
										if (func_78(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44].f_1 = iVar53;
									func_479(iVar35, unk_0x6E524813889AECF8(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_476(uParam3, iParam1, iParam2);
						}
						func_475(&(uParam3->f_21));
						func_474();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_473(uParam3, iParam1);
							func_472(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_473(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_468(uParam3))
						{
							Global_1574406 = 1;
						}
						func_466(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(7);
						unk_0xEF45C43067063F18(*iParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_474();
			func_526(0);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_466(var uParam0)
{
	if (!func_133(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_475(&(uParam0->f_21));
		func_467(0);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_468(var uParam0)
{
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x117658E336116132(uParam0->f_37);
	if (iVar15 != func_40() && func_6(iVar15, 0, 1))
	{
		Var2 = { func_248(iVar15) };
		iVar1 = func_471(uParam0, uParam0->f_37);
		if (func_470(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_469(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_469(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_469(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_469(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_469(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_469(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_469(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

bool func_470(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_471(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1];
}

void func_472(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_473(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_35);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_474()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_475(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_476(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_40())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0].f_1 != -1)
				{
					iVar1 = func_478(uParam0->f_38[iVar0], 0, iParam2);
					func_477(iParam1, uParam0->f_38[iVar0].f_1, iVar1, Global_1590535[iVar0].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_477(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_478(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_479(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	if (iParam4 >= func_495() && iParam4 < func_494())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_493("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_493(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_493("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(-1);
			func_493("");
			if (uParam3->f_108 == 6)
			{
				func_493("");
			}
			else
			{
				func_493(&sParam5);
			}
			func_483(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_482(uParam3))
			{
				func_450("DPAD_FRIEND");
			}
			else if (func_481(uParam3))
			{
				func_450("DPAD_FRIEND");
			}
			else if (func_480(uParam3))
			{
				func_450("DPAD_CREW");
			}
			else
			{
				func_450("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_480(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_481(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

int func_482(var uParam0)
{
	if (func_481(uParam0) && func_480(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_483(var uParam0, int iParam1)
{
	if (func_492(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_487(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam1].f_413, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_484())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_36);
	}
}

int func_484()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_485() || func_84())
		{
			return 1;
		}
	}
	return 0;
}

int func_485()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_84();
	}
	return func_486(Global_4456448.f_194990);
}

int func_486(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_487(int iParam0)
{
	if ((func_6(iParam0, 0, 1) && func_488()) && func_124(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_488()
{
	if (func_153(unk_0xD803B885F5E47A62()) || func_491())
	{
		if (!func_489(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_489(int iParam0)
{
	if (func_490(iParam0) == 236 || func_490(iParam0) == 150)
	{
		return func_141(iParam0);
	}
	return 0;
}

int func_490(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_491()
{
	switch (func_98(unk_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_492(int iParam0)
{
	if (func_484())
	{
		if (func_6(iParam0, 0, 1))
		{
			return func_79(iParam0);
		}
	}
	if ((func_6(iParam0, 0, 1) && func_488()) && func_58(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_493(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_494()
{
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_495()
{
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_496(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	if (iParam3 >= func_495() && iParam3 < func_494())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_493("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_450(sParam16);
				}
				else
				{
					func_493(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_493("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(-1);
				}
				if (func_520())
				{
					func_493("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_104));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_450(&(uParam2->f_104));
					}
					else
					{
						func_493("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 6);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != -1)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_493("");
				}
				if (uParam2->f_108 == 6)
				{
					func_493("");
				}
				else
				{
					func_493(&sParam4);
				}
				func_483(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_493("");
					func_493("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_482(uParam2))
				{
					func_450("DPAD_FRIEND");
				}
				else if (func_481(uParam2))
				{
					func_450("DPAD_FRIEND");
				}
				else if (func_480(uParam2))
				{
					func_450("DPAD_CREW");
				}
				else
				{
					func_450("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_497(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_498(int iParam0, bool bParam1)
{
	iVar0 = 116;
	if ((!bParam1 && func_153(iParam0)) && !func_151(iParam0))
	{
		iVar0 = func_384();
	}
	iVar1 = func_77(iParam0);
	if (!iVar1 == -1)
	{
		return func_75(iVar1);
	}
	return iVar0;
}

char* func_499(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_500(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_504(iParam3))
	{
		*fParam1 = (func_501(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_497(iParam3))
	{
		*fParam1 = (func_501(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_501(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_503(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_502(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_502(float fParam0)
{
	return (fParam0 / 1,609344f);
}

float func_503(float fParam0)
{
	return (fParam0 / 0,3048f);
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_505(int iParam0)
{
	iVar0 = func_508(iParam0);
	if (iVar0 == -1)
	{
		func_506(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_506(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_508(iParam0) != -1)
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
	if (func_507(iParam0))
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

int func_507(int iParam0)
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

int func_508(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
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
			func_509(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_509(int iParam0)
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
	func_510(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_510(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_40();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_511(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		Global_2513218 = { func_248(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_470(Global_2513218))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_515(&Global_2513218))
		{
			Global_2513148 = { func_513(iParam0) };
			func_512(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_512(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_513(int iParam0)
{
	if (func_514(iParam0))
	{
		return Global_1312909[unk_0xD803B885F5E47A62()];
	}
	Var0 = { func_248(iParam0) };
	unk_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

int func_514(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_515(var uParam0)
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

int func_516(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_152(iParam0) || func_518(iParam0)) || func_517(iParam0))
		{
			return 0;
		}
	}
	if (!func_440(iParam0))
	{
		return 0;
	}
	if ((!func_524(iParam0) && Global_2425662[iParam0].f_236 == -1) && !func_523(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_517(int iParam0)
{
	if (func_152(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 8);
}

int func_518(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 9));
	}
	return 0;
}

int func_519(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_92(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_520()
{
	switch (func_98(unk_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_490(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_151(unk_0xD803B885F5E47A62()))
	{
		switch (func_98(unk_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_489(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_114(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_114(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_6(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_92(iVar1, 0))
			{
				if ((func_524(iVar1) || Global_2425662[iVar1].f_236 != -1) || func_523(iVar1))
				{
					if (func_175(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_523(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_524(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (func_6(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_98(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_526(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_527()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
	{
		if (func_155())
		{
			func_528();
		}
	}
}

void func_528()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_373(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

int func_529()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0) && func_155())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1) && func_155())
	{
		return 1;
	}
	return 0;
}

int func_530()
{
	if (func_155())
	{
		if (func_371(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_531()
{
	if (func_155())
	{
		if (func_385(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_532(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_533(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_573(iParam1);
	fVar7 = func_572();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_571())
		{
			if (func_570() > 0 && Global_1574187)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar7);
				unk_0x3584F71E5CA29322(18);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_560())
		{
			func_559(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_559(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_133(&(uParam2->f_19)))
	{
		if (func_570() == 1)
		{
			func_558(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_559(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_133(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_570() == 0 && !bParam5))
		{
			func_559(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_557();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(18);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_557();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (func_558(bVar6, iParam0, 0))
				{
					func_525(iParam0, 0, 0);
					sVar4 = func_555(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_553(iParam1) };
					if (bParam4)
					{
						func_550(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_543(iParam0, func_547(uParam2), func_544(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_541(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar9 = sParam6;
						}
						func_539(iParam0, sVar9, func_540(), -1);
					}
					else if (func_484())
					{
						uParam2->f_34 = Global_1574186;
						func_550(iParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_534(iParam1);
						uParam2->f_34 = Global_1574186;
						func_550(iParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_534(iParam1);
						func_550(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	iVar0 = -1;
	if (func_538())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_537(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_536(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_535(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_270())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_535(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_536(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_537(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_538()
{
	return Global_4456448.f_1 == 0;
}

void func_539(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_450(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_450("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_540()
{
	switch (func_98(unk_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_541(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_98(unk_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_117())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_123(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_123(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_542(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_542(int iParam0)
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

void func_543(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_450(sParam1);
		}
		else if (func_490(unk_0xD803B885F5E47A62()) == 133)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_450("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_544(var uParam0)
{
	iVar0 = func_490(unk_0xD803B885F5E47A62());
	if (func_546())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_545())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_545()
{
	if (func_490(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_546()
{
	return Global_1590408;
}

char* func_547(var uParam0)
{
	iVar0 = func_490(unk_0xD803B885F5E47A62());
	if (func_546())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_549() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_549() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_545())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_548() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_548()
{
	return Global_2537071.f_5048;
}

int func_549()
{
	if (func_490(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_550(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_493(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_450(sParam1);
		}
		if (func_571() && iParam6)
		{
			if (func_552())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_450(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_551(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_82())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_551(int iParam0)
{
	if (func_537(iParam0) || func_536(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_552()
{
	return Global_1574187;
}

struct<4> func_553(int iParam0)
{
	StringCopy(&Var0, "", 16);
	if (func_554(unk_0xD803B885F5E47A62()) || func_535(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_484() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_554(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

char* func_555(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0 == 20 && (!func_484() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_556();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_556()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_557()
{
	Global_42351 = 1;
}

bool func_558(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_559(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_474();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_133(&(uParam1->f_19)))
		{
			func_475(&(uParam1->f_19));
			unk_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_33, 0))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_33), 0);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_560()
{
	if (func_569())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (!func_567())
	{
		return 0;
	}
	if (!func_430())
	{
		return 0;
	}
	if (func_566(8, -1))
	{
		return 0;
	}
	if (func_570() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_434())
	{
		return 0;
	}
	else if (!func_439(unk_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0] > 0)
	{
		return 0;
	}
	if (((func_565(1) || func_563(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_562() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_90(unk_0xD803B885F5E47A62()) && !func_562())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_279(0))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_561(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_561(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6);
}

bool func_562()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 0));
}

int func_563(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_564(unk_0x16F2683693E537C9()))
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

int func_564(int iParam0)
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

bool func_565(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_566(int iParam0, int iParam1)
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

int func_567()
{
	if (func_568())
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

bool func_568()
{
	return Global_1312440;
}

bool func_569()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_570()
{
	return Global_1377170.f_68;
}

int func_571()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_572()
{
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_574()
{
	if (func_575(unk_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_575(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_92(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

int func_576()
{
	if (func_574())
	{
		return 1;
	}
	if (func_517(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_546())
	{
		return 1;
	}
	if (func_153(unk_0xD803B885F5E47A62()))
	{
		switch (func_490(unk_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_577(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_577(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_577(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_577(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 4);
}

int func_578(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_153(unk_0xD803B885F5E47A62()) && !func_151(unk_0xD803B885F5E47A62())) && !func_489(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_99(unk_0xD803B885F5E47A62(), 0) && func_151(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_137(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_579()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x0674E58A79778E99(&iLocal_82, 4);
		unk_0x0674E58A79778E99(&(Local_171[unk_0x57270EE11514DC67()].f_1), 14);
		unk_0x0674E58A79778E99(&(Local_171[unk_0x57270EE11514DC67()].f_1), 15);
	}
	iVar14 = 0;
	while (iVar14 < func_14())
	{
		if (unk_0xE5DBF9B6126856CA(func_28(iVar14)))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar14) && !unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, iVar14))
			{
				if (func_17() < 3)
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(func_28(iVar14)), 0))
					{
						func_591();
						unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 15);
						if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(func_28(iVar14)), -1, 0) == unk_0x16F2683693E537C9())
						{
							unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 14);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 4))
						{
							if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(func_28(iVar14)), func_27(iVar14), IntToFloat(func_590()), IntToFloat(func_590()), IntToFloat(func_590()), false, true, 0))
							{
								unk_0x0674E58A79778E99(&iLocal_82, 8);
								unk_0x5D96D8530B3D0904(&iLocal_82, 4);
							}
						}
						iVar15 = 0;
						while (iVar15 < func_14())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar15 + 4))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 16))
								{
									if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 && unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(func_28(iVar14)), -1, 0) == unk_0x16F2683693E537C9())
									{
										if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(func_28(iVar14)), func_589(iVar15), 2f, 1f, 2f, true, true, 0))
										{
											func_587(unk_0xB177666FAB6F4417(func_28(iVar14)), 4f, 1, 0,5f, 0, 0, 0);
											unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar14);
											unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar15 + 4);
											unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 18);
											unk_0x0674E58A79778E99(&(Local_171[unk_0x57270EE11514DC67()].f_1), 14);
											unk_0x0674E58A79778E99(&iLocal_82, 4);
											unk_0x0674E58A79778E99(&iLocal_82, 8);
											Var0.f_10 = unk_0xD803B885F5E47A62();
											Var0.f_11 = func_7();
											Var0.f_2 = 2014020228;
											func_12(Var0, func_13(1));
											iVar15 = func_14();
										}
									}
								}
								else if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(func_28(iVar14)), func_589(iVar15), IntToFloat(func_586()), IntToFloat(func_586()), IntToFloat(func_586()), false, true, 0))
								{
									unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
									if (func_35())
									{
										unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_585(), 0);
									}
									else
									{
										unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_584(), 0);
									}
									unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
									unk_0x0674E58A79778E99(&iLocal_82, 4);
									unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 16);
									unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
								}
							}
							iVar15++;
						}
					}
				}
			}
			else
			{
				func_580(unk_0xB177666FAB6F4417(func_28(iVar14)), &(uLocal_300[iVar14]), 0, 1);
			}
		}
		iVar14++;
	}
}

int func_580(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_582(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x117658E336116132(iVar0);
				if (func_6(iVar1, 0, 1))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iVar1), iParam0, 0))
					{
						func_581(func_159(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x2B6E0A53779D29EA();
		}
	}
	else if (!unk_0xAFE0D3608EDA7039(iParam0))
	{
		unk_0x0C8A454B494DAA0D(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0xC4B4C89FC0D48108(iParam0, true);
		}
		unk_0x1E9649458B15960F(iParam0, false);
		if (bParam2)
		{
			unk_0xE121AE1BBF90E186(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_581(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -130330100;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0xF4CCC8CB6DE7F1AE();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 9, iParam0);
	}
}

int func_582(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_583(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_40()) && func_6(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_583(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xD1960163A3042274(iVar0, 451360105) == 1 || unk_0xD1960163A3042274(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x68F4C0EC296D3901(iParam0, false), unk_0x68F4C0EC296D3901(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

var func_584()
{
	return Global_262145.f_12467;
}

var func_585()
{
	return Global_262145.f_12468;
}

int func_586()
{
	return Global_262145.f_12469;
}

int func_587(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_588(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_588(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

Vector3 func_589(int iParam0)
{
	return Local_112.f_36[iParam0];
}

int func_590()
{
	return Global_262145.f_12470;
}

void func_591()
{
	if (!func_592(unk_0xD803B885F5E47A62()))
	{
		func_154(25);
	}
}

bool func_592(int iParam0)
{
	return func_131(iParam0, 25);
}

void func_593()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 16))
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (unk_0x02A813E6E0380440() != func_595())
			{
				unk_0x34D79252800B23FF(func_595());
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 8))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (func_35())
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_595(), 0);
					}
					else
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_594(), 0);
					}
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					unk_0x5D96D8530B3D0904(&iLocal_82, 8);
				}
			}
			else
			{
				unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
				unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&iLocal_82, 8);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 17))
	{
		if (!func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x5D96D8530B3D0904(&iLocal_82, 7);
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 7))
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				if (iLocal_101 > 0)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iLocal_101, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				unk_0x0674E58A79778E99(&iLocal_82, 7);
			}
		}
		else
		{
			iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
			if (iVar0 == 0)
			{
				unk_0x0674E58A79778E99(&iLocal_82, 8);
				unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 17);
			}
			else if (iVar0 != iLocal_101)
			{
				iLocal_101 = iVar0;
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 4) && !unk_0xEAE0D21A50E6C7F4(iLocal_82, 8))
	{
		if (func_35())
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_595(), 0);
		}
		else
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), func_594(), 0);
		}
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		unk_0x5D96D8530B3D0904(&iLocal_82, 8);
	}
}

var func_594()
{
	return Global_262145.f_12465;
}

int func_595()
{
	return Global_262145.f_12466;
}

void func_596()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 13))
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_27(0), 100f, 100f, 100f, false, true, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 13);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 15) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 14))
		{
			unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 13);
		}
	}
}

void func_597()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 9))
	{
		switch (func_43())
		{
			case 0:
				StringCopy(&Var0, "GB_INTTXT_BOB0", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_INTTXT_BOB1", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_INTTXT_BOB2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_INTTXT_BOB3", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "GB_INTTXT_BOB4", 16);
				break;
			
			case 5:
				StringCopy(&Var0, "GB_INTTXT_BOB5", 16);
				break;
		}
		if (func_14() == 1)
		{
			StringConCat(&Var0, "1", 16);
		}
		if (func_443(82, &Var0, 2, 0, 0, 0, 0, 1, 0, 1))
		{
			unk_0x5D96D8530B3D0904(&iLocal_82, 9);
		}
	}
}

void func_598(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	if ((((func_153(unk_0xD803B885F5E47A62()) && !func_152(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 8)) && (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))) || func_640(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam1);
	func_638(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_139(unk_0xD803B885F5E47A62()) || func_637(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_145(unk_0xD803B885F5E47A62(), 21) || func_145(unk_0xD803B885F5E47A62(), 25)))
		{
			func_636(vParam1, 1, 0);
		}
		if (!*uParam4 && func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam4 = 1;
			if (func_635(iParam0))
			{
				unk_0x51B096AAC60548C1(func_634(iParam0));
				if (func_633(iParam0, -1))
				{
					unk_0x34D79252800B23FF(0);
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 1);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 1);
					}
					unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 0);
				}
			}
			if (func_632(iParam0))
			{
				fVar1 = func_631(iParam0);
				if (fVar1 != 1f)
				{
					func_627(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_626(iParam0) && func_139(unk_0xD803B885F5E47A62()))
				{
					func_624(1);
					func_623(2);
				}
			}
			func_154(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_131(unk_0xD803B885F5E47A62(), 19))
			{
				func_144(19);
			}
		}
		if (*uParam4 && func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam4 = 0;
			if (func_635(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 0))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(5);
					unk_0x0674E58A79778E99(&(Global_1674347.f_3), 0);
				}
			}
			if (func_632(iParam0))
			{
				func_622();
				unk_0x0674E58A79778E99(&(Global_1674347.f_3), 1);
			}
			if (iParam7 && !func_153(unk_0xD803B885F5E47A62()))
			{
				if (func_98(unk_0xD803B885F5E47A62()) != 152)
				{
					func_600();
				}
			}
			if (func_279(2))
			{
				func_624(0);
				func_599(2);
			}
		}
	}
}

void func_599(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_600()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_620();
	func_603(1, 1, 0);
	func_601();
}

void func_601()
{
	func_602(0, 0);
}

void func_602(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_603(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_619();
	}
	if (!bParam2)
	{
		func_606(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_605(0);
	func_604();
}

void func_604()
{
	if (Global_2405072.f_487.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_605(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_606(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_618())
		{
			func_617();
		}
		Global_2405072.f_706.f_518 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_615();
		func_610(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_607();
	}
}

void func_607()
{
	if (func_618() && !func_609())
	{
		func_617();
	}
	if (func_609())
	{
		func_608();
	}
	else
	{
		func_615();
		func_610(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_608()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_609()
{
	if ((Global_2405072.f_1744 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_610(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_40())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16].f_404, 0) && func_611())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_611()
{
	if ((((((func_98(unk_0xD803B885F5E47A62()) == 229 || func_98(unk_0xD803B885F5E47A62()) == 191) || func_614()) || func_613()) || func_395(unk_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_612(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_612(int iParam0)
{
	if (func_141(iParam0))
	{
		return 1;
	}
	if (func_151(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_613()
{
	return Global_1574405;
}

int func_614()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_615()
{
	if (func_618() && !func_609())
	{
		func_617();
	}
	func_616();
	Global_2405072.f_706 = 0;
}

void func_616()
{
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_617()
{
	if (func_609())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_618()
{
	if ((Global_2405072.f_1745 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_619()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_620()
{
	func_621();
	Global_2405072.f_2254 = 0;
}

void func_621()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_622()
{
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_623(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_624(int iParam0)
{
	if (func_625() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_625()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_627(float fParam0)
{
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_628())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = unk_0x0D0A574C76D769AC();
}

int func_628()
{
	switch (func_630())
	{
		case 0:
			return func_629();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_629()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_630()
{
	return Global_30768;
}

float func_631(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
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
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_633(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_634(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_636(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

int func_637(int iParam0)
{
	if (func_79(iParam0))
	{
		if (func_139(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_638(int iParam0, float fParam1)
{
	iVar0 = func_639(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_591();
	}
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_640(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_641()
{
	if (func_3(&uLocal_102, 5000, 0))
	{
		iVar3 = 0;
		while (iVar3 < func_14())
		{
			if (unk_0xE5DBF9B6126856CA(func_28(iVar3)) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar3))
			{
				if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(func_28(iVar3))) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
				{
					if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
					{
						vLocal_94 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					}
					if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(func_28(iVar3)), 0))
					{
						if (func_640(vVar0))
						{
							vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(func_28(iVar3)), true) };
							vLocal_97 = { vVar0 };
						}
						else if (vdist(vLocal_94, vVar0) > vdist(vLocal_94, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(func_28(iVar3)), true)))
						{
							vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(func_28(iVar3)), true) };
						}
					}
				}
			}
			iVar3++;
		}
		vLocal_97 = { vVar0 };
		func_475(&uLocal_102);
	}
}

void func_642()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 13) && func_770(func_7(), 1))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_93))
		{
			iLocal_93 = unk_0x6CC513A908911CF0(func_27(0));
			func_644(&iLocal_93, 12);
			unk_0x661342B9651D16E2(iLocal_93, true);
			unk_0x1BAA838E8491AF04(iLocal_93, func_643(12));
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_93))
		{
			unk_0x142CC44DB769B57E(&iLocal_93);
		}
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if ((((unk_0xE5DBF9B6126856CA(func_28(iVar1)) && !unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(func_28(iVar1)), 0)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(func_28(iVar1)), 0)) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar1)) && !func_392())
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_83[iVar1]))
				{
					iLocal_83[iVar1] = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(func_28(iVar1)));
					unk_0xBC8E0A7390523199(iLocal_83[iVar1], 461);
					if (func_770(func_7(), 1))
					{
						func_644(&(iLocal_83[iVar1]), 9);
					}
					else
					{
						func_644(&(iLocal_83[iVar1]), 6);
					}
					unk_0x4F505BE81426535E(iLocal_83[iVar1], 1);
					unk_0x2A065371C9D96655(iLocal_83[iVar1], 12);
					unk_0xDC5B2F9D0CCE3A10(iLocal_83[iVar1], "GB_BB_B_VEH");
					unk_0x516E63E474722206(iLocal_83[iVar1], Global_262145.f_12355);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 5))
					{
						unk_0xF412DD40DE84CE72(iLocal_83[iVar1], 1);
						unk_0x0EC848EFF66DF45A(iLocal_83[iVar1], 7000);
						if (iVar1 == (func_14() - 1))
						{
							unk_0x5D96D8530B3D0904(&iLocal_82, 5);
						}
					}
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_83[iVar1]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_83[iVar1]));
			}
			if (func_770(func_7(), 1))
			{
				if (((unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 15) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 14)) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar1 + 4)) && !func_392())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_88[iVar1]))
					{
						iLocal_88[iVar1] = unk_0x6CC513A908911CF0(func_589(iVar1));
						func_644(&(iLocal_88[iVar1]), 12);
					}
					iVar0 = iVar1;
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_88[iVar1]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_88[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_88[iVar0]) && !unk_0x327E5A6DA6CE9849(iLocal_88[iVar0]))
		{
			unk_0x661342B9651D16E2(iLocal_88[iVar0], true);
			unk_0x1BAA838E8491AF04(iLocal_88[iVar0], func_643(12));
		}
	}
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_644(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_643(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

void func_645()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 24))
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar0) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar0 + 8))
			{
				if (unk_0xE9F78D191AD5EDBA(func_28(iVar0)))
				{
					if (unk_0x526BC32A660C89E6(func_28(iVar0)))
					{
						unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(func_28(iVar0)), false);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_646()
{
	func_647();
	if (func_392() || func_137(unk_0xD803B885F5E47A62()) != 3)
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 2))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 17) || unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 24))
		{
			if (func_770(func_7(), 1))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_126("GB_BB_ALERT", -1);
					unk_0x5D96D8530B3D0904(&iLocal_82, 2);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_82, 2);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 12))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 16))
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_126("GB_BB_LOSE", -1);
				unk_0x5D96D8530B3D0904(&iLocal_82, 12);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 10))
	{
		if (func_14() == 1)
		{
			unk_0x5D96D8530B3D0904(&iLocal_82, 10);
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar0 + 8))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (func_770(func_7(), 1))
					{
						func_126("GB_BB_DES", -1);
					}
					else if (func_100(1))
					{
						if (func_172())
						{
							func_126("GB_BB_DESF", -1);
						}
						else
						{
							func_126("GB_BB_DESR", -1);
						}
					}
					else
					{
						func_126("GB_BB_DESF", -1);
					}
					func_122(1);
					unk_0x5D96D8530B3D0904(&iLocal_82, 10);
				}
			}
			iVar0++;
		}
	}
}

void func_647()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1737, 22))
	{
		iVar0 = func_490(unk_0xD803B885F5E47A62());
		if (iVar0 != -1)
		{
			if (!func_649(0) && !func_649(func_648(iVar0)))
			{
				func_96(22);
			}
		}
	}
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23634;
}

bool func_649(int iParam0)
{
	iVar0 = func_195(2480, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_650()
{
	if (func_392() || func_137(unk_0xD803B885F5E47A62()) != 3)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < func_14())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar4))
		{
			if (unk_0xE5DBF9B6126856CA(func_28(iVar4)))
			{
				if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(func_28(iVar4))))
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(func_28(iVar4)), 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(func_28(iVar4)), 0))
						{
							if (func_770(func_7(), 1))
							{
								unk_0xA402F6C87C08815C(9, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							else
							{
								unk_0xA402F6C87C08815C(6, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							func_651(unk_0xB177666FAB6F4417(func_28(iVar4)), iVar0, iVar1, iVar2, 0);
						}
					}
				}
			}
		}
		iVar4++;
	}
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	fVar6 = 0,5f;
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar0, &vVar3);
	fVar7 = ((vVar3.z - vVar0.z) / 2f);
	fVar8 = (vVar3.z - fVar7);
	if (fVar6 <= (fVar8 + 0,1f))
	{
		fVar6 = (fVar8 + 0,4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0x922D0EFFF8F2403B(2, unk_0x68F4C0EC296D3901(iParam0, true) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_652()
{
	if (func_392() || func_137(unk_0xD803B885F5E47A62()) != 3)
	{
		if (func_109())
		{
			func_102();
		}
		return;
	}
	if (func_770(func_7(), 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 13))
		{
			func_660("GB_BB_GT_GOTO", func_662(), 0, 0);
		}
		else if ((unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 16) && unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 15)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			func_654("GB_BB_COPS", 0);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 15))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 15))
			{
				func_654("GB_BB_GT_UDLVR", 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 14))
			{
				func_654("GB_BB_GT_DLVR1", 0);
			}
			else
			{
				func_654("GB_BB_GT_STEAL1", 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_171[unk_0x57270EE11514DC67()].f_1, 15))
		{
			func_654("GB_BB_GT_UDLVR", 0);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 14))
		{
			func_654("GB_BB_GT_DLVR", 0);
		}
		else
		{
			func_654("GB_BB_GT_STEAL", 0);
		}
	}
	else if (func_6(func_7(), 0, 1))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 15))
		{
			func_653("GB_BB_GT_DSTRY1", func_363(func_7()), 0, 0);
		}
		else
		{
			func_653("GB_BB_GT_DSTRY", func_363(func_7()), 0, 0);
		}
	}
}

void func_653(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_660(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

void func_654(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_658(sParam0))
	{
		return;
	}
	func_103();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_657();
	func_656(bParam1);
	func_655();
}

void func_655()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_656(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_657()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

bool func_658(char* sParam0)
{
	if (!func_108())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_659(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_659(char* sParam0)
{
	if (!func_108())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

int func_660(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_661(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_103();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_657();
	func_656(bParam2);
	func_655();
	return 1;
}

bool func_661(char* sParam0, char* sParam1)
{
	if (!func_108())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

char* func_662()
{
	switch (func_43())
	{
		case 0:
			return "GB_BB_GT_PS0";
		
		case 1:
			return "GB_BB_GT_PS1";
		
		case 2:
			return "GB_BB_GT_PS2";
		
		case 3:
			return "GB_BB_GT_PS3";
		
		case 4:
			return "GB_BB_GT_PS4";
		
		case 5:
			return "GB_BB_GT_PS5";
		
		default:
	}
	return "GB_BB_GT_PS0";
}

void func_663()
{
	if (func_392() || func_137(unk_0xD803B885F5E47A62()) != 3)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 12))
	{
		if (func_133(&(Local_112.f_49)))
		{
			if (func_17() < 3)
			{
				iLocal_111 = (func_10() - func_668(&(Local_112.f_49), 0, 0));
			}
			if (iLocal_111 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iLocal_111 = func_667(iLocal_111, 0);
			if (iLocal_111 > 0)
			{
				func_664(iLocal_111, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_664(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_664(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_666(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_665(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_665(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_666(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_667(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_668(var uParam0, bool bParam1, bool bParam2)
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

void func_669()
{
	if (func_392())
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 0))
	{
		if (!func_155())
		{
			if (func_770(func_7(), 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 1))
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (func_14() == 1)
						{
							func_126("GB_BB_WARN1", -1);
						}
						else
						{
							func_126("GB_BB_WARN", -1);
						}
						func_122(1);
						unk_0x5D96D8530B3D0904(&iLocal_82, 3);
					}
				}
				else
				{
					if (unk_0xD803B885F5E47A62() != func_7())
					{
						func_126("GB_BB_GSTART", -1);
					}
					else if (func_14() == 1)
					{
						func_126("GB_BB_BSTART1", -1);
					}
					else
					{
						func_126("GB_BB_BSTART", -1);
					}
					func_122(1);
					unk_0x5D96D8530B3D0904(&iLocal_82, 1);
				}
			}
			else
			{
				if (func_14() == 1)
				{
					func_748("GB_BB_FSTART1", func_363(func_7()), func_59(func_7(), -2, 0, 0, 0), -1);
				}
				else
				{
					func_748("GB_BB_FSTART", func_363(func_7()), func_59(func_7(), -2, 0, 0, 0), -1);
				}
				func_122(1);
				unk_0x5D96D8530B3D0904(&iLocal_82, 3);
			}
		}
	}
	else
	{
		if (func_770(func_7(), 1))
		{
			if (func_14() == 1)
			{
				func_388(86, "GB_BB_ST_START", "GB_BB_SS_START1", 1, -1, 2, 1, 0);
			}
			else
			{
				func_388(86, "GB_BB_ST_START", "GB_BB_SS_START", 1, -1, 2, 1, 0);
			}
		}
		else if (func_14() == 1)
		{
			func_389(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY1", func_363(func_7()), func_59(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		else
		{
			func_389(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY", func_363(func_7()), func_59(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		func_670(-1, 0, 0, -1, 0, 0);
		unk_0x5D96D8530B3D0904(&iLocal_82, 0);
		unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), 12);
	}
}

void func_670(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam5)
	{
		iVar0 = func_490(unk_0xD803B885F5E47A62());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_173() != func_40())
		{
			Global_1674635.f_2 = func_747(func_173());
			Global_1674635.f_3 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = unk_0xDD0E7998AE8AD485();
		Global_1674635.f_28 = func_745(unk_0xD803B885F5E47A62());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_744(func_123(1));
		}
	}
	else
	{
		iVar0 = func_98(unk_0xD803B885F5E47A62());
	}
	if (iParam2 || func_95(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_196(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_412(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_115(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_189(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_173() != func_40())
		{
			Global_1674374.f_4 = func_747(func_173());
			Global_1674374.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = unk_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_221(iParam1);
			Global_1674374.f_41 = func_743();
			Global_1674374.f_42 = func_324(unk_0xD803B885F5E47A62(), iParam1);
			Global_1674374.f_44 = func_742(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_172() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_187(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_741(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_183(unk_0xD803B885F5E47A62()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674491.f_1 = 2;
				break;
			
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_173() != func_40())
		{
			Global_1674491.f_4 = func_747(func_173());
			Global_1674491.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_128(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_173() != func_40())
		{
			Global_1674428.f_4 = func_747(func_173());
			Global_1674428.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_186(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_173() != func_40())
		{
			Global_1674535.f_4 = func_747(func_173());
			Global_1674535.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_739(func_94(), 5);
		Global_1674535.f_28 = func_744(func_738(unk_0xD803B885F5E47A62()));
		Global_1674535.f_29 = func_195(6107, -1, 0);
		Global_1674535.f_30 = func_195(6103, -1, 0);
		Global_1674535.f_31 = func_195(6104, -1, 0);
		Global_1674535.f_32 = func_195(6106, -1, 0);
		Global_1674535.f_33 = func_195(6105, -1, 0);
		Global_1674535.f_34 = func_195(6108, -1, 0);
		Global_1674535.f_7 = func_736();
		Global_1674535.f_51 = func_744(bParam4);
	}
	else if (func_185(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_173() != func_40())
		{
			Global_1674589.f_4 = func_747(func_173());
			Global_1674589.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_195(6157, -1, 0);
		Global_1674589.f_25 = func_195(6162, -1, 0);
		Global_1674589.f_26 = func_195(6163, -1, 0);
		Global_1674589.f_27 = func_744((((func_735() || func_734()) || func_733()) || func_732(unk_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_195(6164, -1, 0);
		Global_1674589.f_29 = func_744(func_731());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_736();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_181(func_182(unk_0xD803B885F5E47A62()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_736();
		if (func_173() != func_40())
		{
			Global_1674725.f_4 = func_747(func_173());
			Global_1674725.f_5 = func_746(func_173());
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_173() != -1)
		{
			Global_1674725.f_17 = func_730(func_173());
		}
		Global_1674725.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674725.f_28 = func_745(unk_0xD803B885F5E47A62());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_744(func_123(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_736();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_173() != func_40())
		{
			Global_1674671.f_4 = func_747(func_173());
			Global_1674671.f_5 = func_746(func_173());
		}
		Global_1674671.f_28 = func_745(unk_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_729(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_713(unk_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_712(unk_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_744(func_711(unk_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_744(func_710(unk_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_744(func_709(unk_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_744(func_708(unk_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_707(unk_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_706(unk_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_705(unk_0xD803B885F5E47A62());
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_744(func_123(1));
		}
		if (func_7() != func_40())
		{
			func_225(func_7(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674671.f_28 = func_745(unk_0xD803B885F5E47A62());
	}
	else if (func_179(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_183(unk_0xD803B885F5E47A62());
		Global_1674809.f_2 = func_704();
		Global_1674809.f_3 = func_703();
		Global_1674809.f_4 = func_747(func_173());
		Global_1674809.f_5 = func_746(func_173());
		Global_1674809.f_7 = func_736();
		Global_1674809.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_173() != -1)
		{
			Global_1674809.f_17 = func_730(func_173());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_744(func_702(unk_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_700(21, -1);
	}
	else if (func_178(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_747(func_173());
		Global_1674884.f_7 = func_746(func_173());
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_744(func_123(1));
		}
		if (func_173() != -1)
		{
			Global_1674884.f_9 = func_730(func_173());
		}
		Global_1674884.f_10 = func_736();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_173() != func_40())
		{
			Global_1674356 = func_747(func_173());
			Global_1674356.f_1 = func_746(func_173());
		}
		Global_1674356.f_5 = unk_0xDD0E7998AE8AD485();
		Global_1674356.f_13 = func_699();
		Global_1674356.f_15 = 0;
		if (func_100(1))
		{
			if (func_7() == func_173())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_698())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_697() || func_696()) || func_695()) || func_694()) || func_693()) || func_692(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_690(func_691(-1881846085)))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_679(func_689(1147287684)))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_678(unk_0xD803B885F5E47A62()) || func_677(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_676(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_675(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_674(0, unk_0xD803B885F5E47A62()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_673(unk_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_673(unk_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_672(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_671(unk_0xD803B885F5E47A62(), iVar2);
				if (func_321(unk_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_321(unk_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_321(unk_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_671(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_313(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

int func_672(int iParam0)
{
	if (iParam0 == func_40())
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

int func_673(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_674(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_674(int iParam0, int iParam1)
{
	if (iParam1 == func_40())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 0))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 3))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 6))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 9))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 12))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 15))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 18))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 21))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 1))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 4))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 7))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 10))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 13))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 16))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 19))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 22))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 2))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 5))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 8))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 11))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 14))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 17))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 20))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 23))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_675(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 7);
}

bool func_676(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 8);
}

bool func_677(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_678(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 10);
}

int func_679(int iParam0)
{
	if (func_700(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_687(11));
		func_686(iVar1, &iVar0, 1);
		iVar2 = func_700(func_681(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_195(func_680(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_680(int iParam0, int iParam1)
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

int func_681(int iParam0)
{
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_687(iVar0) && iParam0 < func_682(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_682(int iParam0)
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
		iVar0 = func_685(iParam0);
		return func_684(iVar0);
	}
	return (func_683(iParam0, -1) * iParam0 + 1);
}

int func_683(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_416(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_422(iParam1))
			{
				return 0;
			}
			else if (func_414(iParam1, -1))
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

int func_684(int iParam0)
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

int func_685(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_686(int iParam0, int iParam1, bool bParam2)
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

int func_687(int iParam0)
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
		iVar0 = func_685(iParam0);
		return func_688(iVar0);
	}
	return (func_683(iParam0, -1) * iParam0);
}

int func_688(int iParam0)
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

int func_689(int iParam0)
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

int func_690(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_686(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_195(func_680(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_692(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1590535[iParam0].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_693()
{
	return func_195(6542, -1, 0) != 0;
}

bool func_694()
{
	return func_195(6163, -1, 0) != 0;
}

bool func_695()
{
	return func_195(5380, -1, 0) != 0;
}

bool func_696()
{
	return func_195(3828, -1, 0) != 0;
}

bool func_697()
{
	return func_195(3223, -1, 0) != 0;
}

bool func_698()
{
	return func_195(5379, -1, 0) != 0;
}

int func_699()
{
	iVar0 = func_173();
	if (iVar0 != func_40())
	{
		return Global_1628237[iVar0].f_11.f_98;
	}
	return 0;
}

int func_700(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_94();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_685(iParam0);
		if (iVar1 == 0 && func_195(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_701(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_745(unk_0xD803B885F5E47A62()) && iVar1 == 1)
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

bool func_701(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_195(7207, iParam0, 0) != 0;
}

int func_702(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_703()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_704()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_705(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 12);
	}
	return 0;
}

int func_706(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_707(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 11);
	}
	return 0;
}

bool func_708(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 4);
}

bool func_709(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 3);
}

bool func_710(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 2);
}

bool func_711(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 1);
}

bool func_712(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 31);
}

int func_713(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_40() || !func_728(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_723(iParam0, iParam2);
		
		case 1:
			return func_721(iParam0, iParam2);
		
		case 3:
			return func_720(iParam0);
		
		case 2:
			return func_715(iParam0, iParam2);
		
		case 4:
			return func_714(iParam0);
		
		default:
	}
	return 0;
}

bool func_714(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 6);
}

int func_715(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_719(iParam0);
		
		case 11:
			return func_718(iParam0);
		
		case 12:
			return func_717(iParam0);
		
		case 13:
			return func_716(iParam0);
		
		default:
	}
	return 0;
}

bool func_716(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_717(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_718(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_719(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

bool func_720(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_721(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_722(iParam0);
		
		case 6:
			return func_711(iParam0);
		
		case 7:
			return func_710(iParam0);
		
		case 8:
			return func_709(iParam0);
		
		case 9:
			return func_708(iParam0);
		
		default:
	}
	return 0;
}

bool func_722(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 0);
}

int func_723(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_727(iParam0);
		
		case 1:
			return func_726(iParam0);
		
		case 2:
			return func_725(iParam0);
		
		case 3:
			return func_724(iParam0);
		
		case 4:
			return func_712(iParam0);
		
		default:
	}
	return 0;
}

bool func_724(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 10);
}

bool func_725(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 9);
}

bool func_726(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 8);
}

bool func_727(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 7);
}

bool func_728(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_729(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_713(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_713(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_713(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_713(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_730(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

bool func_731()
{
	return func_195(6156, -1, 0) != 0;
}

int func_732(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

bool func_733()
{
	return func_195(6164, -1, 0) == 3;
}

bool func_734()
{
	return func_195(6164, -1, 0) == 2;
}

bool func_735()
{
	return func_195(6164, -1, 0) == 1;
}

int func_736()
{
	if (func_197())
	{
		return 4;
	}
	else if (func_172())
	{
		if (func_348(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_123(1))
	{
		iVar0 = func_737(unk_0xD803B885F5E47A62());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_100(1))
	{
		if (func_348(func_173()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_737(int iParam0)
{
	if (func_78(iParam0, 1))
	{
		return Global_1628237[iParam0].f_11.f_451;
	}
	return -1;
}

int func_738(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_739(int iParam0, int iParam1)
{
	return func_195(func_740(iParam1), iParam0, 0);
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_741(int iParam0)
{
	if (func_98(iParam0) == 225 || func_98(iParam0) == 226)
	{
		return func_183(iParam0);
	}
	return -1;
}

int func_742(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_313(iParam1))
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

var func_743()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_323(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_744(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_745(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_746(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_747(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

void func_748(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_749(int iParam0)
{
	Local_171[unk_0x57270EE11514DC67()].f_3 = iParam0;
}

void func_750(bool bParam0)
{
	if (bParam0)
	{
		if (!func_131(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_137(unk_0xD803B885F5E47A62()) != 0)
			{
				func_154(9);
			}
		}
	}
	else if (func_131(unk_0xD803B885F5E47A62(), 9))
	{
		func_144(9);
	}
}

void func_751()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0xE5DBF9B6126856CA(func_28(iVar0)))
		{
			if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(func_28(iVar0)), 0))
			{
				if (unk_0xAFE0D3608EDA7039(unk_0xB177666FAB6F4417(func_28(iVar0))))
				{
					if (func_6(unk_0xD803B885F5E47A62(), 0, 1))
					{
						func_752(unk_0xB177666FAB6F4417(func_28(iVar0)));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_752(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (func_6(iVar1, 0, 1))
		{
			if (func_175(iVar1, func_7(), 1) || func_754(iVar1, func_7()))
			{
				unk_0xF1259063ADD6A7AF(iParam0, iVar1, 0);
			}
			else
			{
				func_753(iVar1, iParam0);
				unk_0xF1259063ADD6A7AF(iParam0, iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_753(int iParam0, int iParam1)
{
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		if (unk_0xC42A92762C58E1B9(iVar0, iParam1, 1))
		{
			func_581(func_159(iParam0), 0, 0f, 0, 0, 0, -1);
		}
	}
}

int func_754(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (Global_1628237[iParam0].f_11.f_26 != func_40())
		{
			return iParam1 == Global_1628237[iParam0].f_11.f_26;
		}
	}
	return 0;
}

void func_755(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 != iParam0)
	{
		func_769(-1);
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 = iParam0;
		if (func_768() != -1)
		{
			func_767(-1);
		}
		if (func_766() != -1)
		{
			func_765(-1);
		}
		func_764(iParam2);
		func_762(iParam0);
		if (!func_632(iParam0))
		{
			fVar0 = func_631(iParam0);
			if (fVar0 != 1f)
			{
				func_627(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 1);
			}
		}
		if (!func_635(iParam0) || iParam3)
		{
			if (func_633(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x34D79252800B23FF(0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 0);
			}
			else if (unk_0x02A813E6E0380440() < 5)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0x34D79252800B23FF(5);
			}
		}
		if (func_150())
		{
			func_154(27);
		}
		if (bParam1)
		{
			if (!func_142())
			{
				func_624(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 1) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4)) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 0))
			{
				func_96(6);
			}
			func_761();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_153(unk_0xD803B885F5E47A62()) && func_139(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_1), 8);
		}
		func_757();
		if (func_756(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_757()
{
	iVar3 = func_760();
	iVar2 = func_41(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_175(iVar1, iVar2, 1) || func_758(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, iVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_758(int iParam0, int iParam1)
{
	if (func_78(iParam0, 1) && func_78(iParam1, 1))
	{
		return (func_759(iParam0) == func_41(iParam1) || func_759(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_759(int iParam0)
{
	if (func_78(iParam0, 1))
	{
		return Global_1628237[func_41(iParam0)].f_11.f_484;
	}
	return func_40();
}

int func_760()
{
	iVar0 = func_173();
	if (iVar0 != func_40())
	{
		if (func_6(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar1].f_1, 16);
			}
		}
	}
	return 0;
}

void func_761()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 1))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 6))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 6);
	}
	unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 0);
	unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 2);
	Global_1590535[unk_0xD803B885F5E47A62()].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		unk_0x34D79252800B23FF(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_762(int iParam0)
{
	iVar0 = func_195(3791, -1, 0);
	iVar1 = func_763(iParam0);
	if (iVar1 != -1)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_193(3791, iVar0, -1, 1, 0);
	}
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_764(int iParam0)
{
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_1628237[iVar0].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0].f_11.f_181 = iParam0;
	}
}

void func_765(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_766()
{
	return Global_2537071.f_5124.f_340;
}

void func_767(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_768()
{
	return Global_2537071.f_5124.f_339;
}

void func_769(int iParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_32 = iParam0;
}

bool func_770(int iParam0, bool bParam1)
{
	return func_175(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

int func_771()
{
	return Local_171[unk_0x57270EE11514DC67()].f_3;
}

int func_772()
{
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_773(int iParam0, int iParam1)
{
	Local_171[iParam0] = iParam1;
}

int func_774()
{
	return 1;
}

int func_775()
{
	return Local_112;
}

int func_776(int iParam0)
{
	return Local_171[iParam0];
}

void func_777()
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_778(iVar0);
				break;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < func_14())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar2) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar2 + 8))
		{
			if (unk_0xD803B885F5E47A62() == func_7())
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 12))
				{
					if (unk_0xE5DBF9B6126856CA(func_28(iVar2)))
					{
						if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(func_28(iVar2)), 0))
						{
							if ((unk_0x70EED0761B82965E(unk_0xB177666FAB6F4417(func_28(iVar2))) && !unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(func_28(iVar2)), 0)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(func_28(iVar2)), -1, 0))
							{
								unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar2 + 8);
							}
							else if (func_3(&(Local_305[iVar2]), 60000, 0))
							{
								unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar2 + 8);
							}
						}
						else if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(func_28(iVar2)), 0))
						{
							if (func_3(&(Local_305[iVar2]), 60000, 0))
							{
								unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar2 + 8);
							}
						}
					}
					else if (func_3(&(Local_305[iVar2]), 60000, 0))
					{
						unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar2 + 8);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_778(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		if (unk_0xC844350D5D58C99A(Var0))
		{
			if (unk_0xE2F1E99DD161A861(Var0))
			{
				iVar13 = 0;
				while (iVar13 < func_14())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar13) && !unk_0xEAE0D21A50E6C7F4(Local_112.f_1, iVar13 + 8))
					{
						if (unk_0x96A5FE5834B81CE7(Var0) == unk_0xB177666FAB6F4417(func_28(iVar13)))
						{
							if (unk_0xE5DBF9B6126856CA(func_28(iVar13)) && unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(func_28(iVar13)), 0))
							{
								if ((unk_0x70EED0761B82965E(unk_0xB177666FAB6F4417(func_28(iVar13))) && !unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(func_28(iVar13)), 0)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(func_28(iVar13)), -1, 0))
								{
									return;
								}
							}
							if (unk_0xC844350D5D58C99A(Var0.f_1) && unk_0xEC560E589DF8370E(Var0.f_1))
							{
								if (unk_0x940C1429253D3B1B(Var0.f_1) == unk_0x16F2683693E537C9())
								{
									if (func_142())
									{
										if (Var0.f_5)
										{
											unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar13 + 8);
											func_783(func_40());
										}
									}
									else if (!func_175(unk_0xD803B885F5E47A62(), func_7(), 1))
									{
										func_591();
										if (!func_131(unk_0xD803B885F5E47A62(), 20))
										{
											func_779(0);
										}
										if (Var0.f_5)
										{
											Local_171[unk_0x57270EE11514DC67()].f_2++;
											unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar13 + 8);
											func_783(unk_0xD803B885F5E47A62());
										}
									}
									else if (Var0.f_5)
									{
										unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar13 + 8);
										func_783(func_40());
									}
								}
								else if (!unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var0.f_1)))
								{
									if (Var0.f_5)
									{
										unk_0x5D96D8530B3D0904(&(Local_171[unk_0x57270EE11514DC67()].f_1), iVar13 + 8);
										func_783(func_40());
									}
								}
							}
						}
					}
					iVar13++;
				}
			}
			else if ((!func_142() && unk_0xEC560E589DF8370E(Var0)) && unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var0)))
			{
				if (!func_592(unk_0xD803B885F5E47A62()) && !func_131(unk_0xD803B885F5E47A62(), 20))
				{
					iVar14 = unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var0));
					if (func_6(iVar14, 0, 1))
					{
						if (func_175(iVar14, func_7(), 1))
						{
							if (unk_0xC844350D5D58C99A(Var0.f_1) && unk_0xEC560E589DF8370E(Var0.f_1))
							{
								if (unk_0x940C1429253D3B1B(Var0.f_1) == unk_0x16F2683693E537C9())
								{
									func_591();
									if (!func_131(unk_0xD803B885F5E47A62(), 20))
									{
										func_779(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_779(int iParam0)
{
	if (!func_151(unk_0xD803B885F5E47A62()))
	{
		if (iParam0 || func_137(unk_0xD803B885F5E47A62()) != 0)
		{
			func_154(20);
			func_780(func_782());
			if (func_153(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 8))
				{
					unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_1), 8);
				}
			}
		}
	}
}

void func_780(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_781()].f_6174.f_4111[iVar0] == iParam0)
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

int func_781()
{
	iVar0 = 0;
	return iVar0;
}

int func_782()
{
	iVar0 = func_98(unk_0xD803B885F5E47A62());
	if (func_97(iVar0) == 0)
	{
		return -1;
	}
	if (func_190(iVar0))
	{
		return 65;
	}
	if (func_196(iVar0))
	{
		return 66;
	}
	if (func_405(iVar0))
	{
		return 63;
	}
	return 64;
}

void func_783(int iParam0)
{
	Var0.f_10 = iParam0;
	Var0.f_2 = 209469411;
	func_12(Var0, func_13(1));
}

int func_784()
{
	func_789(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_788())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_787())
	{
		return 1;
	}
	if (func_786(159))
	{
		if (!func_785())
		{
			return 1;
		}
	}
	if (func_786(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_628() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_628()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_785()
{
	return Global_2450632.f_598;
}

int func_786(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_787()
{
	return Global_2460680;
}

bool func_788()
{
	return Global_2450632.f_593;
}

void func_789(var uParam0)
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
					func_790(iVar0);
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

void func_790(int iParam0)
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
						if (func_791(iVar4, &bVar5))
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

int func_791(int iParam0, var uParam1)
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

void func_792()
{
	wait(0);
}

void func_793(bool bParam0)
{
	func_102();
	if (unk_0x02A813E6E0380440() < 5)
	{
		unk_0x34D79252800B23FF(5);
	}
	func_101();
	func_843(bParam0);
	func_840();
	if (unk_0x0DC0B2DBBD52B0C0() > 1)
	{
		func_839();
		func_795(1, 0);
		unk_0x10FAF14A60A0DBE1();
	}
	else if (func_794())
	{
		func_795(1, 0);
		unk_0x10FAF14A60A0DBE1();
	}
}

int func_794()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0xE5DBF9B6126856CA(func_28(iVar0)))
		{
			iVar1 = unk_0xA5FBBC2F619A4DE2(func_28(iVar0));
			if (!unk_0x437347B10A200C4B(iVar1, 0))
			{
				if (func_580(unk_0xB177666FAB6F4417(func_28(iVar0)), &(uLocal_300[iVar0]), 0, 1))
				{
					unk_0x82692E8F6A0D7A22(&iVar1);
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_795(bool bParam0, int iParam1)
{
	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 167 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 168)
	{
		func_837();
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 4);
	}
	if ((func_197() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 190 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 192)
		{
			func_819(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 164 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 208) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 250) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 237)
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
	}
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 != -1)
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 = -1;
		if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_153(unk_0xD803B885F5E47A62()))
		{
			func_624(0);
		}
	}
	else if (func_817(unk_0xD803B885F5E47A62()) != -1)
	{
		func_769(-1);
	}
	func_816(func_40());
	if (func_279(16))
	{
		func_599(16);
	}
	func_813(0);
	func_764(-1);
	func_812();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_811(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_808(iVar1);
		iVar1++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 0))
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(5);
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 5))
	{
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_130();
	if ((func_114(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_807(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_196(iVar2))
	{
		func_804(-1, 1);
	}
	else if (((((func_129(iVar2) || func_803(iVar2)) || func_802(iVar2)) || func_187(iVar2)) || func_186(iVar2)) || func_185(iVar2))
	{
	}
	else
	{
		func_804(-1, 1);
	}
	func_144(19);
	func_144(20);
	func_144(21);
	func_144(22);
	func_144(27);
	func_599(3);
	func_599(4);
	func_599(7);
	func_801();
	if (func_139(unk_0xD803B885F5E47A62()))
	{
		func_750(0);
	}
	func_144(29);
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 = func_40();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_600();
	}
	if (!func_153(unk_0xD803B885F5E47A62()))
	{
		func_622();
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 6))
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 6);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 7))
	{
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 7);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 8))
	{
		func_800("IMPEXP_SELFDES", 0);
		func_798("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 8);
	}
	func_796(iVar2, 0);
}

void func_796(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_797(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_797(iParam0));
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 9);
	}
}

char* func_797(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_798(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 2)
				{
				}
				else
				{
					func_458();
					Global_111638.f_14136[iVar0].f_99[Global_19486] = 0;
					if (func_799(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0].f_24 = 0;
						Global_111638.f_14136[iVar0].f_28 = 0;
						Global_111638.f_14136[iVar0].f_29 = 0;
					}
					unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_799(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_800(char* sParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0].f_24 = 1;
				if (Global_111638.f_14136[iVar0].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0].f_99[0] == 1)
					{
						Global_111638.f_14046[0].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[1] == 1)
					{
						Global_111638.f_14046[1].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[2] == 1)
					{
						Global_111638.f_14046[2].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[3] == 1)
					{
						Global_111638.f_14046[3].f_17 = 0;
					}
					Global_111638.f_14136[iVar0].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_801()
{
	if (func_592(unk_0xD803B885F5E47A62()))
	{
		func_144(25);
	}
}

int func_802(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_803(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_804(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_130();
	}
	if (iParam0 > 0)
	{
		if (func_173() != func_40())
		{
			if (func_55(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_2514606.f_93[func_806(iParam0)] = 1;
			}
		}
		iVar0 = func_806(159);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(157);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(148);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(164);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(142);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(152);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(166);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(170);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(173);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(179);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(200);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(201);
		if (func_805(iVar0, Global_262145.f_12606, bParam1))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(182);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(183);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(185);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(186);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(180);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(195);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(197);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(198);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(207);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(208);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(209);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(214);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(215);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(216);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(217);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(218);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(219);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(220);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(221);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

int func_805(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_131(unk_0xD803B885F5E47A62(), 19) && !func_131(unk_0xD803B885F5E47A62(), 20)) && !func_131(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_133(&(Global_2514606[iParam0])))
	{
		if (func_668(&(Global_2514606[iParam0]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_807(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_130();
	}
	if (iParam0 > 0)
	{
		if (func_173() != func_40())
		{
			Global_2514606.f_93[func_806(iParam0)] = 1;
		}
		iVar0 = func_806(155);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(163);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(160);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(153);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(162);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(154);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(171);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(172);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(199);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(194);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(193);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(210);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(205);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(189);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_806(211);
		if (func_805(iVar0, Global_262145.f_12607, 0))
		{
			func_475(&(Global_2514606[iVar0]));
			func_4(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

void func_808(int iParam0)
{
	if (!func_809(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_337[iParam0], func_810(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_337[iParam0] = { func_810() };
	}
	if (!func_809(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_324[iParam0], func_810(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_324[iParam0] = { func_810() };
	}
}

bool func_809(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_810()
{
	return vVar0;
}

void func_811(int iParam0)
{
	if (!func_809(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_150[iParam0], func_810(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_150[iParam0] = { func_810() };
	}
	if (!func_809(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_125[iParam0], func_810(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_125[iParam0] = { func_810() };
	}
}

void func_812()
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_40();
	if (unk_0xEAE0D21A50E6C7F4(Global_1573344, 3))
	{
		unk_0x0674E58A79778E99(&Global_1573344, 3);
	}
}

void func_813(bool bParam0)
{
	if (bParam0)
	{
		if (!func_441(unk_0xD803B885F5E47A62(), 14))
		{
			func_815(14);
		}
	}
	else if (func_441(unk_0xD803B885F5E47A62(), 14))
	{
		func_814(14);
	}
}

void func_814(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_5), iParam0);
}

void func_815(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_5), iParam0);
}

void func_816(int iParam0)
{
	if (func_79(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_484 != iParam0)
			{
				Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_484 = iParam0;
				if (iParam0 != func_40())
				{
				}
			}
		}
	}
}

int func_817(int iParam0)
{
	if (func_818(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_32;
	}
	return -1;
}

int func_818(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_819(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_323(iParam0, iParam1) && func_836(iParam0, iParam1))
	{
		iVar0 = func_322(iParam0, iParam1);
		func_823(iVar0, bParam2, bParam3);
		func_820(iVar0, 1);
	}
}

void func_820(int iParam0, bool bParam1)
{
	if (!func_822(iParam0))
	{
		return;
	}
	func_306(func_821(iParam0), bParam1, -1, 1);
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_6 = bParam1;
}

int func_821(int iParam0)
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

bool func_822(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_823(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = false;
	iVar2 = func_671(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_835(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_834(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_833(iParam0, 0, bParam2);
	}
	else if (func_831(iParam0, bParam2))
	{
		iVar0 = func_830(iVar2, 0);
		iVar3 = func_742(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_829(iVar2, bParam2);
		iVar5 = func_830(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_828(iVar2) && func_827(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_835(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_826(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_825(iParam0, (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 - (func_829(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_830(iVar2, bParam2) / func_826(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_828(iVar2) && func_827(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_824(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_824(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == func_40())
	{
		return;
	}
	if (func_313(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0].f_274.f_183[iVar0].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_825(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2)
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 = iParam1;
	}
}

int func_826(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_313(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_827(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_313(iParam1) && func_828(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_828(int iParam0)
{
	return func_221(iParam0) == 5;
}

int func_829(int iParam0, bool bParam1)
{
	iVar1 = func_221(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_830(int iParam0, bool bParam1)
{
	iVar1 = func_221(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_321(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_827(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_831(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_307(15384, -1, -1);
	}
	return func_307(func_832(iParam0), -1, -1);
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_833(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_306(15384, bParam1, -1, 1);
		return;
	}
	func_306(func_832(iParam0), bParam1, -1, 1);
}

int func_834(int iParam0, bool bParam1)
{
	iVar0 = Global_2513475[iParam0];
	iVar1 = func_671(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_828(iVar1))
	{
		if (func_827(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_835(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_836(int iParam0, int iParam1)
{
	if (func_323(iParam0, iParam1))
	{
		iVar0 = func_322(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_837()
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 28);
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 29);
	func_838(24);
}

void func_838(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

void func_839()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0xE5DBF9B6126856CA(func_28(iVar0)))
		{
			iVar1 = unk_0xB177666FAB6F4417(func_28(iVar0));
			if (!unk_0x437347B10A200C4B(iVar1, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar1, 0))
				{
					func_581(func_159(unk_0xD803B885F5E47A62()), 0, 0f, 0, 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_840()
{
	iVar0 = 0;
	if (!func_35())
	{
		iVar0 = 1;
	}
	Global_1674356.f_2 = Local_112.f_57;
	Global_1674356.f_3 = Local_112.f_58;
	func_841(iVar0, func_43(), func_36(), -1082130432);
}

void func_841(int iParam0, var uParam1, var uParam2, int iParam3)
{
	sVar0 = unk_0xBB0808A181D4745C();
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_11 = Global_1674356.f_11;
	Var1.f_12 = Global_1674356.f_12;
	Var1.f_13 = Global_1674356.f_14;
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674356.f_15;
			Var15.f_15 = Global_1674356.f_16;
			Var15.f_16 = Global_1674356.f_17;
			unk_0x28C4917D9A295449(&Var15);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674356.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = uParam1;
			unk_0x9E59224EB51EDA45(&Var32);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674356.f_15;
			Var49.f_15 = iParam0;
			unk_0xB1DA4601C652C7C5(&Var49);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674356.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = uParam1;
			unk_0xBC121608DEC826ED(&Var65);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674356.f_15;
			Var82.f_15 = iParam0;
			unk_0x8CE98B2741F42F3A(&Var82);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674356.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = uParam2;
			unk_0xD97D13FD5AE7CC65(&Var98);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1674356.f_15;
			unk_0x7E3D8B81F0B41A06(&Var116);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674356.f_15;
			unk_0xAB72C270A0CBFA80(&Var134);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1674356.f_15;
			unk_0x4C3BFB72890DD032(&Var153);
		}
	}
	func_842();
}

void func_842()
{
	Global_1674356 = { Var0 };
}

void func_843(bool bParam0)
{
	iVar1 = 2;
	if (func_770(func_7(), 1))
	{
		if (Local_112.f_34 > 0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
	}
	else if (func_174(1, 0) > 0)
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 18))
	{
		iVar1 = 8;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_112.f_1, 16))
	{
		iVar1 = 7;
	}
	if (bParam0)
	{
		iVar1 = 4;
	}
	func_844(bVar0, iVar1, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_844(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_490(unk_0xD803B885F5E47A62());
		Global_1674635.f_4 = func_704();
		Global_1674635.f_5 = func_703();
		if (func_140(unk_0xD803B885F5E47A62()) || func_141(unk_0xD803B885F5E47A62()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_894(bParam9);
		Global_1674635.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674635.f_9 = func_744(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_736();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_744(func_123(1));
		}
		Global_1674635.f_24 = func_39(unk_0xD803B885F5E47A62());
		Global_1674635.f_28 = func_745(unk_0xD803B885F5E47A62());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_892(iVar0);
	}
	else
	{
		iVar0 = func_98(unk_0xD803B885F5E47A62());
	}
	if (func_95(iVar0))
	{
		Global_1674374.f_2 = func_704();
		Global_1674374.f_3 = func_703();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = unk_0xDD0E7998AE8AD485();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_888(iVar0, bParam0, func_891(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_742(func_173(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_887(func_173(), iParam2);
		}
		func_885(iVar0);
	}
	else if (func_128(iVar0))
	{
		Global_1674428.f_2 = func_704();
		Global_1674428.f_3 = func_703();
		Global_1674428.f_10 = unk_0xDD0E7998AE8AD485();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_883(iVar0);
	}
	else if (func_187(iVar0))
	{
		Global_1674491.f_2 = func_704();
		Global_1674491.f_3 = func_703();
		Global_1674491.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_736();
		Global_1674491.f_42 = func_739(func_94(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_209(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_744((func_678(iVar1) || func_677(iVar1)));
		Global_1674491.f_30 = func_744(func_882(iVar1));
		Global_1674491.f_32 = func_744(func_675(iVar1));
		Global_1674491.f_33 = func_744(func_676(iVar1));
		Global_1674491.f_34 = func_744(func_881(iVar1));
		Global_1674491.f_35 = func_744(func_674(0, iVar1) == 1);
		Global_1674491.f_36 = func_744(func_880(iVar1));
		Global_1674491.f_37 = func_744(func_879(iVar1));
		Global_1674491.f_38 = func_744(func_878(iVar1));
		Global_1674491.f_39 = func_744(func_321(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_744(func_321(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_744(func_321(iVar1, iVar2, 1));
		if (func_877(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_876(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_874(iVar0);
	}
	else if (func_186(iVar0))
	{
		Global_1674535.f_2 = func_704();
		Global_1674535.f_3 = func_703();
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674535.f_10 = func_744(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_737(func_7());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_873();
		Global_1674535.f_29 = func_195(6107, -1, 0);
		Global_1674535.f_30 = func_195(6103, -1, 0);
		Global_1674535.f_31 = func_195(6104, -1, 0);
		Global_1674535.f_32 = func_195(6106, -1, 0);
		Global_1674535.f_33 = func_195(6105, -1, 0);
		Global_1674535.f_34 = func_195(6108, -1, 0);
		Global_1674535.f_36 = func_744(func_123(1));
		Global_1674535.f_37 = func_871();
		func_861();
		func_859(iVar0);
	}
	else if (func_185(iVar0))
	{
		Global_1674589.f_2 = func_704();
		Global_1674589.f_3 = func_703();
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674589.f_10 = func_744(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_195(6157, -1, 0);
		Global_1674589.f_25 = func_195(6162, -1, 0);
		Global_1674589.f_26 = func_195(6163, -1, 0);
		Global_1674589.f_27 = func_744((((func_735() || func_734()) || func_733()) || func_732(unk_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_195(6164, -1, 0);
		Global_1674589.f_29 = func_744(func_731());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_704();
		Global_1674589.f_42 = func_744(func_123(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_857(iVar0);
	}
	else if (func_180(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_704();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_703();
		}
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_894(0);
		Global_1674725.f_7 = func_736();
		Global_1674725.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674725.f_10 = func_744(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_173() != -1)
		{
			Global_1674725.f_17 = func_730(func_173());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_745(unk_0xD803B885F5E47A62());
		Global_1674725.f_29 = func_744(func_856(unk_0xD803B885F5E47A62()));
		Global_1674725.f_30 = func_744(func_855(unk_0xD803B885F5E47A62()));
		Global_1674725.f_31 = func_712(unk_0xD803B885F5E47A62());
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_744(func_123(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_853(iVar0);
	}
	else if (func_184(iVar0))
	{
		Global_1674671.f_2 = func_704();
		Global_1674671.f_3 = func_703();
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_894(0);
		Global_1674671.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674671.f_10 = func_744(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_745(unk_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_729(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_713(unk_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_712(unk_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_744(func_711(unk_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_744(func_710(unk_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_744(func_709(unk_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_744(func_708(unk_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_707(unk_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_706(unk_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_705(unk_0xD803B885F5E47A62());
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_744(func_123(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_851(iVar0);
	}
	else if (func_179(iVar0))
	{
		Global_1674809.f_2 = func_704();
		Global_1674809.f_3 = func_703();
		Global_1674809.f_4 = func_747(func_173());
		Global_1674809.f_5 = func_746(func_173());
		if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_736();
		Global_1674809.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674809.f_10 = func_744(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_7() != -1)
		{
			Global_1674809.f_17 = func_730(func_7());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_850(unk_0xD803B885F5E47A62());
		Global_1674809.f_27 = func_744(func_702(unk_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_700(21, -1);
		Global_1674809.f_29 = func_744(func_849(unk_0xD803B885F5E47A62()));
		func_847(iVar0);
	}
	else if (func_178(iVar0))
	{
		Global_1674884.f_6 = func_747(func_173());
		Global_1674884.f_7 = func_746(func_173());
		if (func_78(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_744(func_123(1));
		}
		Global_1674884.f_10 = func_736();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (unk_0xDD0E7998AE8AD485() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_845(iVar0);
	}
	else
	{
		Global_1674356.f_6 = unk_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_139(unk_0xD803B885F5E47A62()) || func_138(unk_0xD803B885F5E47A62())) || func_151(unk_0xD803B885F5E47A62()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_845(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_1674884);
	func_846();
}

void func_846()
{
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_847(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_848();
}

void func_848()
{
	Global_1674809 = { Var0 };
}

int func_849(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_850(int iParam0)
{
	if (func_98(iParam0) == 243)
	{
		return func_183(iParam0);
	}
	return -1;
}

void func_851(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_1674671);
	func_852();
}

void func_852()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

void func_853(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_1674725);
	func_854();
}

void func_854()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_855(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 0);
}

bool func_856(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

void func_857(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_1674589);
	func_858();
}

void func_858()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

void func_859(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_1674535);
	func_860();
}

void func_860()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_861()
{
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_687(12));
		func_686(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1].f_66 != 0 && func_863(Global_1323615[iVar1].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_862(Global_1323615[iVar1].f_66))
					{
						if (Global_1323615[iVar1].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_862(int iParam0)
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

int func_863(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !unk_0x8CD06866876216F2()) || (iParam0 == 237764926 && !unk_0x8CD06866876216F2())) || (iParam0 == 349315417 && !unk_0x8CD06866876216F2())) || iParam0 == -613725916) || (iParam0 == -401643538 && !unk_0x8CD06866876216F2()))
	{
		if (!func_870())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_869() && !func_868()) && !func_867()) && !func_866()) && !func_870())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_867())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_865(iParam0))
		{
			return 0;
		}
	}
	if (!func_864(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_864(int iParam0)
{
	if (!func_224())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_866()
{
	return 0;
}

int func_867()
{
	return 1;
}

int func_868()
{
	return 1;
}

int func_869()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_870()
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

var func_871()
{
	uVar0 = func_872();
	if (!func_172())
	{
		if (func_173() != func_40())
		{
			uVar0 = func_39(func_173()) + 1;
		}
	}
	return uVar0;
}

int func_872()
{
	return func_39(unk_0xD803B885F5E47A62()) + 1;
}

int func_873()
{
	return func_195(6113, -1, 0);
}

void func_874(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_1674491);
	func_875();
}

void func_875()
{
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_876(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_877(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 13);
}

int func_878(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 12) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 13)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_879(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_880(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_881(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 6) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_882(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 9);
}

void func_883(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_1674428);
	func_884();
}

void func_884()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

void func_885(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_1674374);
	func_886();
}

void func_886()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_887(int iParam0, int iParam1)
{
	bVar0 = func_321(iParam0, iParam1, 2);
	bVar1 = func_321(iParam0, iParam1, 1);
	bVar2 = func_321(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_888(int iParam0, bool bParam1, bool bParam2)
{
	if (func_196(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_412(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_115(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_95(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF9647457141B11A7(func_747(func_173()), func_746(func_173()), func_704(), func_703(), iVar1, iVar0);
	}
	func_890(iVar0);
	func_889(iVar0);
	return iVar0;
}

void func_889(int iParam0)
{
	iVar0 = func_195(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_490 = iVar0;
	func_193(3968, iVar0, -1, 1, 0);
}

void func_890(int iParam0)
{
	iVar0 = unk_0xD803B885F5E47A62();
	Global_1628237[iVar0].f_11.f_489 = (Global_1628237[iVar0].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
}

int func_891(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_139(unk_0xD803B885F5E47A62()) || func_151(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_892(var uParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_1674635);
	func_893();
}

void func_893()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_894(bool bParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_490(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_98(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_899(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_897(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_896(unk_0xD803B885F5E47A62());
			if (func_181(func_182(unk_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_896(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_895(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_895(unk_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_895(int iParam0)
{
	if (func_98(unk_0xD803B885F5E47A62()) == 238 || func_98(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_1628237[iParam0].f_11.f_499;
	}
	return -1;
}

int func_896(int iParam0)
{
	if (func_98(unk_0xD803B885F5E47A62()) == 237 || func_98(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_1628237[iParam0].f_11.f_498;
	}
	return -1;
}

int func_897(int iParam0)
{
	return func_898(iParam0, 150);
}

int func_898(int iParam0, int iParam1)
{
	if (func_490(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_899(int iParam0)
{
	return func_898(iParam0, 236);
}

int func_900(struct<21> Param0)
{
	func_1012(func_1013(Param0), Param0);
	unk_0x3A4967AE7C71F999(0);
	unk_0x28E5F00F131890E3(func_945(157, -1, 1, -1, -1, -1));
	func_942(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_112, 59);
	unk_0x35B62793EAE9ADDF(&Local_171, 129);
	unk_0x256D93AFAE851A7A(0);
	func_901(157, 0, 0);
	return 1;
}

void func_901(int iParam0, int iParam1, bool bParam2)
{
	func_941();
	if (func_54(unk_0xD803B885F5E47A62()))
	{
		func_903(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_770(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_1674342, 0);
				break;
			}
	}
	if (!func_172() && !func_78(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_147())
		{
			func_623(3);
		}
	}
	func_623(4);
	if (func_100(0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 = func_173();
	}
	if (func_95(iParam0))
	{
		func_886();
		Global_1674374.f_18 = func_737(func_7());
	}
	else if (func_128(func_817(unk_0xD803B885F5E47A62())))
	{
		func_884();
		Global_1674428.f_18 = func_737(func_7());
	}
	if (bParam2)
	{
		if (!func_142())
		{
			func_624(1);
		}
	}
	func_902();
}

void func_902()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0].f_1 = func_40();
		Global_1366905.f_534[iVar0].f_9 = 0;
		iVar0++;
	}
}

void func_903(bool bParam0)
{
	func_838(33);
	func_838(34);
	func_838(35);
	func_838(36);
	func_838(37);
	func_838(38);
	func_838(39);
	func_838(40);
	func_838(43);
	func_838(41);
	func_838(54);
	func_838(42);
	func_838(47);
	func_940(23);
	func_940(24);
	func_838(92);
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 2);
	func_939();
	func_934();
	func_929();
	func_924();
	func_913();
	func_909();
	func_905();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_904(3))
	{
		func_940(3);
	}
	else if (func_904(4))
	{
		func_940(4);
	}
	else if (func_904(5))
	{
		func_940(5);
	}
	else if (func_904(6))
	{
		func_940(6);
	}
	else if (func_904(7))
	{
		func_940(7);
	}
	else if (((((((((((((((((func_904(0) || func_904(1)) || func_904(2)) || func_904(8)) || func_904(9)) || func_904(10)) || func_904(11)) || func_904(12)) || func_904(13)) || func_904(14)) || func_904(15)) || func_904(16)) || func_904(17)) || func_904(18)) || func_904(19)) || func_904(20)) || func_904(21)) || func_904(22))
	{
		func_940(8);
		func_940(0);
		func_940(1);
		func_940(2);
		func_940(9);
		func_940(10);
		func_940(11);
		func_940(12);
		func_940(13);
		func_940(14);
		func_940(15);
		func_940(16);
		func_940(17);
		func_940(18);
		func_940(19);
		func_940(20);
		func_940(21);
		func_940(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_904(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_14[iVar0], iVar1);
}

void func_905()
{
	if (func_907())
	{
		func_906(0);
		func_906(1);
		func_906(2);
		func_906(3);
	}
}

void func_906(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_33[iVar0]), iVar1);
}

int func_907()
{
	if (((func_908(0) || func_908(1)) || func_908(2)) || func_908(3))
	{
		return 1;
	}
	return 0;
}

bool func_908(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_33[iVar0], iVar1);
}

void func_909()
{
	if (func_911())
	{
		func_910(4);
		func_910(5);
		func_910(6);
		func_910(7);
	}
}

void func_910(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_31[iVar0]), iVar1);
}

int func_911()
{
	if (((func_912(4) || func_912(5)) || func_912(6)) || func_912(7))
	{
		return 1;
	}
	return 0;
}

bool func_912(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_31[iVar0], iVar1);
}

void func_913()
{
	if (func_923())
	{
		func_922(8);
		func_922(9);
		func_922(10);
		func_922(12);
		func_922(13);
		func_922(14);
		func_922(19);
		func_922(20);
		func_922(21);
		func_922(22);
		func_922(23);
		func_922(24);
		func_922(25);
		func_922(26);
		func_922(15);
		func_922(16);
		func_922(17);
		func_922(18);
		func_922(35);
		func_922(45);
		func_922(46);
		if (func_921(11))
		{
			func_922(11);
			iVar0 = func_195(7226, -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_193(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_921(48))
	{
		if (func_919(151, 3))
		{
			func_917(151, 3);
		}
		func_922(48);
	}
	if (func_921(49))
	{
		if (func_919(152, 3))
		{
			func_917(152, 3);
		}
		func_922(49);
	}
	if (func_921(50))
	{
		if (func_919(153, 3))
		{
			func_917(153, 3);
		}
		func_922(50);
	}
	if (func_921(51))
	{
		if (func_919(func_914(), 3))
		{
			func_917(func_914(), 3);
		}
		func_922(51);
	}
}

int func_914()
{
	if (func_916())
	{
		func_915(154, Global_19486, 1);
	}
	return 154;
}

void func_915(int iParam0, int iParam1, int iParam2)
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

int func_916()
{
	iVar0 = func_41(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_40()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_917(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_918(iParam0, iVar0, 0);
			func_915(iParam0, iVar0, 0);
		}
	}
}

void func_918(int iParam0, int iParam1, int iParam2)
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

int func_919(int iParam0, int iParam1)
{
	if (func_920(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_920(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

bool func_921(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_26[iVar0], iVar1);
}

void func_922(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_26[iVar0]), iVar1);
}

int func_923()
{
	if (((((((((((((((((((((func_921(8) || func_921(9)) || func_921(10)) || func_921(12)) || func_921(11)) || func_921(13)) || func_921(14)) || func_921(19)) || func_921(20)) || func_921(21)) || func_921(22)) || func_921(23)) || func_921(24)) || func_921(25)) || func_921(26)) || func_921(15)) || func_921(16)) || func_921(17)) || func_921(18)) || func_921(35)) || func_921(45)) || func_921(46))
	{
		return 1;
	}
	return 0;
}

void func_924()
{
	if (func_928())
	{
		func_927(0);
		func_927(1);
		func_927(2);
		func_927(3);
		func_927(4);
		func_927(5);
		if (func_926(32))
		{
			if (func_919(func_925(), 3))
			{
				func_917(func_925(), 3);
			}
			func_927(32);
		}
	}
}

int func_925()
{
	if (func_916())
	{
		func_915(12, Global_19486, 1);
	}
	return 12;
}

bool func_926(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_23[iVar0], iVar1);
}

void func_927(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_23[iVar0]), iVar1);
}

int func_928()
{
	if ((((func_926(1) || func_926(0)) || func_926(2)) || func_926(4)) || func_926(5))
	{
		return 1;
	}
	return 0;
}

void func_929()
{
	if (func_933())
	{
		func_932(0);
		func_932(1);
		func_932(2);
		func_932(3);
		func_932(4);
		func_932(5);
		func_932(6);
		func_932(7);
		if (func_931(8))
		{
			func_932(8);
		}
		if (func_931(15))
		{
			if (func_919(func_930(), 3))
			{
				func_917(func_930(), 3);
			}
			func_932(15);
		}
	}
}

int func_930()
{
	if (func_916())
	{
		func_915(20, Global_19486, 1);
	}
	return 20;
}

bool func_931(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_21[iVar0], iVar1);
}

void func_932(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_21[iVar0]), iVar1);
}

int func_933()
{
	if ((((((((func_931(0) || func_931(1)) || func_931(2)) || func_931(3)) || func_931(4)) || func_931(5)) || func_931(6)) || func_931(7)) || func_931(8))
	{
		return 1;
	}
	return 0;
}

void func_934()
{
	if (func_938())
	{
		func_937(0);
		func_937(1);
		func_937(2);
		func_937(3);
		func_937(4);
		func_937(5);
		func_937(6);
		func_937(7);
		func_937(8);
		func_937(9);
		func_937(10);
		func_937(11);
		func_937(12);
		if (func_936(13))
		{
			if (func_919(func_935(), 3))
			{
				func_917(func_935(), 3);
			}
			func_937(13);
		}
	}
}

int func_935()
{
	if (func_916())
	{
		func_915(76, Global_19486, 1);
	}
	return 76;
}

bool func_936(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_19[iVar0], iVar1);
}

void func_937(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_19[iVar0]), iVar1);
}

int func_938()
{
	if ((((((((((((func_936(0) || func_936(1)) || func_936(2)) || func_936(3)) || func_936(4)) || func_936(5)) || func_936(6)) || func_936(7)) || func_936(8)) || func_936(9)) || func_936(10)) || func_936(11)) || func_936(12))
	{
		return 1;
	}
	return 0;
}

void func_939()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_940(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_941()
{
	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

int func_942(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_944();
			}
			else
			{
				return 0;
			}
		}
		if (!func_943())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_944();
					}
					else
					{
						return 0;
					}
				}
				if (func_788())
				{
					if (!bParam2)
					{
						func_944();
					}
					else
					{
						return 0;
					}
				}
				if (func_786(157))
				{
					if (!bParam2)
					{
						func_944();
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
					func_944();
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
				func_944();
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
			func_944();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_943()
{
	return Global_1312854;
}

void func_944()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_1011(iParam1);
		
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
			return func_1007(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_1000(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_985(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
		
		case 233:
			return func_975(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_970(iParam1, iParam3);
		
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
			return func_968(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_967(iParam1);
		
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
			return func_959(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_952(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_946(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_946(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_951(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_950(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_949(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_948(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_947(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_947(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_948(int iParam0, int iParam1)
{
	return func_947(iParam0, iParam1) > 0;
}

int func_949(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_950(int iParam0, int iParam1)
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

int func_951(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_952(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		iVar0 = (iVar0 + func_958(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_957(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_955(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_954(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_953(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_953(int iParam0, int iParam1)
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

bool func_954(int iParam0, int iParam1)
{
	return func_953(iParam0, iParam1) > 0;
}

int func_955(int iParam0, int iParam1, int iParam2)
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
			if (iParam2 != func_40())
			{
				if (func_78(iParam2, 1))
				{
					vVar0 = { func_956(iParam2) };
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

Vector3 func_956(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

int func_957(int iParam0, int iParam1)
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

int func_958(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_959(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (func_966(iParam0))
		{
			iVar0 = (iVar0 + func_965(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_964(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_963(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_962(func_39(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_961(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_960(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_960(int iParam0, int iParam1)
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

bool func_961(int iParam0, int iParam1)
{
	return func_960(iParam0, iParam1) > 0;
}

int func_962(int iParam0, int iParam1)
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

int func_963(int iParam0, int iParam1)
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

int func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_965(int iParam0, int iParam1)
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
			if (func_39(iParam1) + 1 == 1)
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

int func_966(int iParam0)
{
	return 0;
}

int func_967(int iParam0)
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

int func_968(int iParam0, int iParam1, int iParam2)
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
	if (func_969(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_969(int iParam0)
{
	return 1;
}

int func_970(int iParam0, int iParam1)
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
	if ((func_974(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_971(iParam0, func_356() + 1));
	}
	return iVar0;
}

int func_971(int iParam0, int iParam1)
{
	if (func_542(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_973(iParam0, iParam1);
			iVar2 = func_972(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_974(iParam0))
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

int func_972(int iParam0)
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

int func_973(int iParam0, int iParam1)
{
	if (func_974(iParam0))
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

int func_974(int iParam0)
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

int func_975(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_984(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_981(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_980(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_979(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_978(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_977(iParam0))
		{
			iVar0 = (iVar0 + func_976(iParam0));
		}
	}
	return iVar0;
}

int func_976(int iParam0)
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

bool func_977(int iParam0)
{
	return func_976(iParam0) > 0;
}

int func_978(var uParam0, int iParam1)
{
	return 2;
}

int func_979(int iParam0, int iParam1)
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

int func_980(int iParam0, int iParam1)
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
			iVar0 = func_195(5326, -1, 0);
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

int func_981(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
			if (func_984(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_983(iParam0))
	{
		iVar0 = func_983(iParam0);
	}
	else if (iVar0 < func_982(iParam0))
	{
		iVar0 = func_982(iParam0);
	}
	return iVar0;
}

int func_982(int iParam0)
{
	return 1;
}

int func_983(int iParam0)
{
	return 4;
}

int func_984(int iParam0)
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

int func_985(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_999(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_992(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_991(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_990(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_988(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_987(iParam0))
		{
			iVar0 = (iVar0 + func_986(iParam0));
		}
	}
	return iVar0;
}

int func_986(int iParam0)
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

bool func_987(int iParam0)
{
	return func_986(iParam0) > 0;
}

int func_988(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_989(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_989(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_989(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_989(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_989(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_989(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_989(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_989(iParam1))
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

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_990(int iParam0, int iParam1)
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

int func_991(int iParam0, int iParam1)
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

int func_992(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_998(iParam0))
	{
		iVar1 = func_997(iParam3);
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
	else if (func_996(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_995(iParam2))
		{
			iVar0 = func_995(iParam2);
		}
	}
	if (iVar0 > func_994(iParam0))
	{
		iVar0 = func_994(iParam0);
	}
	else if (iVar0 < func_993(iParam0))
	{
		iVar0 = func_993(iParam0);
	}
	return iVar0;
}

int func_993(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_994(int iParam0)
{
	if (!func_998(iParam0))
	{
		if (func_999(iParam0))
		{
			if (func_989(iParam0))
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

int func_995(int iParam0)
{
	if (iParam0 == func_40() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_997(int iParam0)
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

int func_998(int iParam0)
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

int func_999(int iParam0)
{
	if (func_998(iParam0) || func_996(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1000(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_1005(iParam0, func_356() + 1, -1, iParam2) == 1)
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
		if (func_1004(iParam0))
		{
			iVar0 = (iVar0 + func_1005(iParam0, func_356() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_1003(iParam0, func_356() + 1));
	}
	if (!bParam3)
	{
		if (func_1002(iParam0))
		{
			iVar0 = (iVar0 + func_1001(iParam0));
		}
	}
	return iVar0;
}

int func_1001(int iParam0)
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

bool func_1002(int iParam0)
{
	return func_1001(iParam0) > 0;
}

int func_1003(int iParam0, int iParam1)
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

int func_1004(int iParam0)
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

int func_1005(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_1006(iParam0))
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
	else if (func_1004(iParam0))
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

int func_1006(int iParam0)
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

int func_1007(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_1010(iParam0, func_356() + 1, iParam2));
	iVar0 = (iVar0 + func_1008(iParam0));
	return iVar0;
}

int func_1008(int iParam0)
{
	if (func_1009(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_1009(int iParam0)
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

int func_1010(int iParam0, var uParam1, int iParam2)
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

int func_1011(int iParam0)
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

void func_1012(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_944();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_1013(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

