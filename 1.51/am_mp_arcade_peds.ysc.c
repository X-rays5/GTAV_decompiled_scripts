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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	func_187();
	if (unk_0x8CD06866876216F2())
	{
		func_183();
	}
	else
	{
		func_180();
	}
	func_175(vScriptParam_0);
	func_163();
	func_158(1);
	func_157();
	while (true)
	{
		func_156();
		if (func_141())
		{
			func_180();
		}
		func_2();
		func_1();
	}
}

void func_1()
{
	if (!Local_47.f_380 || !Local_47.f_381)
	{
		return;
	}
	if (Local_47.f_391)
	{
		if (unk_0x7489207370F94F64())
		{
			unk_0xE96F19797E59AB06();
		}
		Local_47.f_376 = 0;
	}
	else
	{
		if (Local_47.f_376 == 0)
		{
			if (Local_449.f_1 != 0)
			{
				if (unk_0xE3934829A331AF92("Walla_Normal", "DLC_H3_Arcade_Walla_Sounds"))
				{
					Local_47.f_376++;
				}
			}
		}
		if (Local_47.f_376 == 1)
		{
			unk_0xDED18C4572CC8FC6(2729,589f, -383,9195f, -48,9951f);
			Local_47.f_376++;
		}
		if (Local_47.f_376 == 2)
		{
			if (unk_0x7489207370F94F64())
			{
				fVar0 = (to_float(Local_449.f_1) / 6f);
				unk_0xFF38FC7B4A600702("PedDensity", fVar0);
				Local_47.f_376++;
			}
		}
	}
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < func_137())
	{
		if (func_136(&(Local_47[iVar0]), iVar0))
		{
			if (!unk_0xC844350D5D58C99A(Local_47[iVar0]))
			{
				func_110(&(Local_47[iVar0]), iVar0);
			}
			else if (unk_0x437347B10A200C4B(Local_47[iVar0], 0))
			{
				func_109(&(Local_47[iVar0]));
			}
			func_98(&(Local_47[iVar0]), iVar0);
			func_86(&(Local_47[iVar0]));
			func_28(&(Local_47[iVar0]), iVar0);
		}
		iVar0++;
	}
	func_26();
	func_24();
	func_21();
	func_10();
	func_8();
	func_3();
	Local_47.f_377 = 0;
}

void func_3()
{
	if (func_7(&(Local_449.f_24)) && func_5(&(Local_449.f_24), 15000, 0))
	{
		func_4(&(Local_449.f_24));
	}
	if (func_7(&(Local_449.f_26)) && func_5(&(Local_449.f_26), 15000, 0))
	{
		func_4(&(Local_449.f_26));
	}
	if (func_7(&(Local_449.f_28)) && func_5(&(Local_449.f_28), 15000, 0))
	{
		func_4(&(Local_449.f_28));
	}
	if (func_7(&(Local_47.f_394)) && func_5(&(Local_47.f_394), 15000, 0))
	{
		func_4(&(Local_47.f_394));
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
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

void func_6(var uParam0, bool bParam1, bool bParam2)
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

bool func_7(var uParam0)
{
	return uParam0->f_1;
}

void func_8()
{
	if (Local_449.f_9 == 0 && func_9(Local_47[4]))
	{
		unk_0x7EB60BF335619074(Local_47[4], 0,5f);
	}
}

int func_9(int iParam0)
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

void func_10()
{
	if (!Global_1316821)
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 1))
	{
		if (Local_47.f_391 != func_18(Local_47.f_379))
		{
			Local_47.f_391 = func_18(Local_47.f_379);
			unk_0x5D96D8530B3D0904(&(Local_47.f_375), 1);
		}
	}
	else
	{
		if (Local_47.f_391)
		{
			func_17();
		}
		else
		{
			func_11();
		}
		if (Local_47.f_391 != func_18(Local_47.f_379))
		{
			Local_47.f_391 = func_18(Local_47.f_379);
			iVar0 = 5;
			while (iVar0 <= (func_137() - 1))
			{
				unk_0x0674E58A79778E99(&(Local_47[iVar0].f_5), 0);
				unk_0x0674E58A79778E99(&(Local_47[iVar0].f_5), 1);
				iVar0++;
			}
		}
	}
}

void func_11()
{
	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 <= (func_137() - 1))
	{
		if (func_136(&(Local_47[iVar0]), iVar0))
		{
			if (unk_0xC844350D5D58C99A(Local_47[iVar0]) && (unk_0xD1960163A3042274(Local_47[iVar0], 242628503) == 1 || unk_0xD1960163A3042274(Local_47[iVar0], 1785177548) == 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_47[iVar0].f_5, 1))
				{
					if (func_12(&(Local_47[iVar0]), 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_47[iVar0].f_5), 1);
					}
				}
				else
				{
					iVar1++;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == (func_137() - 5))
	{
		iVar0 = 5;
		while (iVar0 <= (func_137() - 1))
		{
			unk_0x0674E58A79778E99(&(Local_47[iVar0].f_5), 1);
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(Local_47.f_375), 1);
	}
}

int func_12(var uParam0, bool bParam1)
{
	func_16(uParam0);
	if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), uParam0->f_4))
	{
		func_15(uParam0, bParam1);
	}
	else
	{
		func_13(uParam0, bParam1);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 0);
		return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (bParam1)
		{
			unk_0x4FB9A846E72E2F23(*uParam0, 255, 0);
			func_14(uParam0, 255);
		}
		else
		{
			unk_0x4FB9A846E72E2F23(*uParam0, 0, 0);
			func_14(uParam0, 0);
		}
	}
}

void func_14(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_1[iVar0]))
		{
			unk_0x4FB9A846E72E2F23(uParam0->f_1[iVar0], iParam1, 0);
		}
		iVar0++;
	}
}

void func_15(var uParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		iVar0 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), uParam0->f_4));
		iVar1 = round(((to_float(iVar0) / 750f) * 255f));
		if (bParam1)
		{
			iVar1 = (255 - round(((to_float(iVar0) / 750f) * 255f)));
		}
		unk_0x4FB9A846E72E2F23(*uParam0, iVar1, 0);
		func_14(uParam0, iVar1);
	}
}

void func_16(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 0))
	{
		uParam0->f_4 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 750);
		unk_0x5D96D8530B3D0904(&(uParam0->f_5), 0);
	}
}

void func_17()
{
	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 <= (func_137() - 1))
	{
		if (func_136(&(Local_47[iVar0]), iVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_47[iVar0].f_5, 1))
			{
				if (func_12(&(Local_47[iVar0]), 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_47[iVar0].f_5), 1);
				}
			}
			else
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == (func_137() - 5))
	{
		iVar0 = 5;
		while (iVar0 <= (func_137() - 1))
		{
			unk_0x0674E58A79778E99(&(Local_47[iVar0].f_5), 1);
			func_109(&(Local_47[iVar0]));
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(Local_47.f_375), 1);
	}
}

bool func_18(int iParam0)
{
	if (iParam0 == func_20() || !func_19(iParam0))
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_393.f_1, 29);
}

bool func_19(int iParam0)
{
	return Global_1590535[iParam0].f_274.f_393 != 0;
}

int func_20()
{
	return -1;
}

void func_21()
{
	if (func_23())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 0))
		{
			func_22(0);
			unk_0x5D96D8530B3D0904(&(Local_47.f_375), 0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 0))
	{
		func_22(1);
		unk_0x0674E58A79778E99(&(Local_47.f_375), 0);
	}
}

void func_22(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < func_137())
	{
		if (unk_0xC844350D5D58C99A(Local_47[iVar0]))
		{
			unk_0x4A4806F9D471E491(Local_47[iVar0], bParam0, 0);
		}
		iVar0++;
	}
}

bool func_23()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1702977, 1);
}

void func_24()
{
	if (Global_1316825)
	{
		func_22(1);
		func_25(1);
		Local_47.f_385 = 0;
		Global_1316825 = 0;
	}
	else if (!Local_47.f_385)
	{
		if (unk_0x22A8E52414415B76())
		{
			func_22(0);
			func_25(0);
			Local_47.f_385 = 1;
		}
	}
}

void func_25(bool bParam0)
{
	if (unk_0xC844350D5D58C99A(Local_47.f_382))
	{
		unk_0x4A4806F9D471E491(Local_47.f_382, bParam0, 0);
	}
	if (unk_0xC844350D5D58C99A(Local_47.f_383))
	{
		unk_0x4A4806F9D471E491(Local_47.f_383, bParam0, 0);
	}
	if (unk_0xC844350D5D58C99A(Local_47.f_384))
	{
		unk_0x4A4806F9D471E491(Local_47.f_384, bParam0, 0);
	}
}

void func_26()
{
	if (!Global_1316821)
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < func_137())
		{
			if ((((((unk_0xC844350D5D58C99A(Local_47[iVar0]) && (unk_0xD1960163A3042274(Local_47[iVar0], 242628503) == 1 || unk_0xD1960163A3042274(Local_47[iVar0], 1785177548) == 1)) || Local_47[iVar0].f_17) || Local_47[iVar0].f_9 > Local_449.f_1) || ((Local_47.f_390 && !Local_47[iVar0].f_18) && !Global_1316826)) || ((!Local_47.f_390 && Local_47[iVar0].f_18) && !Global_1316826)) || (!func_27(iVar0) && Local_47.f_391))
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == func_137())
		{
			Global_1316821 = 1;
		}
	}
}

bool func_27(int iParam0)
{
	return iParam0 <= 4;
}

void func_28(var uParam0, int iParam1)
{
	if (func_76(iParam1, 0))
	{
		func_63(uParam0, iParam1);
		func_29(uParam0, iParam1);
	}
}

void func_29(var uParam0, int iParam1)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_62(iParam1))
		{
			func_55(uParam0, iParam1);
			func_39(uParam0, iParam1);
			func_30(uParam0, iParam1);
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (uParam0->f_8 == 11 || uParam0->f_8 == 12)
			{
				if (Local_449.f_13 != Global_1316831)
				{
					Local_449.f_13 = Global_1316831;
					if (!Local_449.f_13)
					{
						if (func_37(uParam0, iParam1) && !func_36(iParam1, 1))
						{
							func_33(5, 0);
							func_32(&(Local_449.f_16), 0, 0);
						}
					}
				}
			}
			break;
		
		case 2:
			if ((((Local_449.f_7 == 3 && Local_47.f_386 == 4) && Global_1316830 != 0) && !func_36(2, 0)) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 13))
			{
				if (func_31(unk_0xD803B885F5E47A62()))
				{
					func_33(13, 2);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
				}
				else
				{
					Global_1316830 = 0;
				}
			}
			break;
	}
}

int func_31(int iParam0)
{
	if (iParam0 != func_20())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_393.f_2, 27);
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
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

void func_33(int iParam0, int iParam1)
{
	Var0 = -1029221750;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar4 = func_34(1);
	if (!iVar4 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iVar4);
	}
}

var func_34(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_35(iVar2, 0, 0))
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

int func_35(int iParam0, bool bParam1, bool bParam2)
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

int func_36(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if (func_9(Local_47[iParam0]))
	{
		if (unk_0x7DECE00E09F41C95(Local_47[iParam0]))
		{
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if ((Local_47.f_378 == iParam0 && func_7(&(Local_47.f_394))) || func_7(&(Local_449.f_24)))
				{
					iVar0 = 1;
				}
				break;
			
			case 2:
				if ((Local_47.f_378 == iParam0 && func_7(&(Local_47.f_394))) || func_7(&(Local_449.f_26)))
				{
					iVar0 = 1;
				}
				break;
			
			case 3:
				if ((Local_47.f_378 == iParam0 && func_7(&(Local_47.f_394))) || func_7(&(Local_449.f_28)))
				{
					iVar0 = 1;
				}
				break;
			}
	}
	return iVar0;
}

int func_37(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_35(iVar1, 1, 1))
			{
				if (func_9(unk_0x16F2683693E537C9()))
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 1), uParam0->f_13, true) < func_38(iParam1))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

float func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 5f;
		
		default:
	}
	return 7f;
}

void func_39(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_43(uParam0, iParam1);
			break;
		
		case 2:
			func_42(uParam0, iParam1);
			break;
		
		case 3:
			func_40(uParam0, iParam1);
			break;
	}
}

void func_40(var uParam0, int iParam1)
{
	if (func_7(&(Local_449.f_22)) && func_5(&(Local_449.f_22), Local_449.f_5, 0))
	{
		if (func_37(uParam0, iParam1))
		{
			bVar0 = true;
			if (Local_449.f_7 == 3)
			{
				bVar0 = false;
			}
			if (((bVar0 && !func_36(2, 0)) && !func_36(3, 0)) || (!bVar0 && !func_36(3, 0)))
			{
				func_33(Local_449.f_21, 3);
				iVar1 = func_41(Local_449.f_21, iParam1);
				unk_0x5D96D8530B3D0904(&Local_449, iVar1);
				func_4(&(Local_449.f_22));
				Local_449.f_21 = 0;
			}
			else
			{
				func_32(&(Local_449.f_22), 0, 0);
			}
		}
		else
		{
			func_32(&(Local_449.f_22), 0, 0);
		}
	}
}

int func_41(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 7:
					return 1;
				
				case 8:
					return 2;
				
				case 9:
					return 3;
				
				case 10:
					return 4;
				
				case 6:
					return 0;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 6:
					return 5;
				
				case 11:
					return 6;
				
				case 12:
					return 7;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 6:
					return 8;
				
				default:
			}
			break;
	}
	return -1;
}

void func_42(var uParam0, int iParam1)
{
	if (func_7(&(Local_449.f_19)) && func_5(&(Local_449.f_19), Local_449.f_4, 0))
	{
		if (func_37(uParam0, iParam1))
		{
			bVar0 = true;
			if (Local_449.f_7 == 3)
			{
				bVar0 = false;
			}
			if (((bVar0 && !func_36(2, 0)) && !func_36(3, 0)) || (!bVar0 && !func_36(2, 0)))
			{
				func_33(Local_449.f_18, 2);
				iVar1 = func_41(Local_449.f_18, iParam1);
				unk_0x5D96D8530B3D0904(&Local_449, iVar1);
				func_4(&(Local_449.f_19));
				Local_449.f_18 = 0;
			}
			else
			{
				func_32(&(Local_449.f_19), 0, 0);
			}
		}
		else
		{
			func_32(&(Local_449.f_19), 0, 0);
		}
	}
}

void func_43(var uParam0, int iParam1)
{
	if (func_7(&(Local_449.f_16)) && func_5(&(Local_449.f_16), Local_449.f_3, 0))
	{
		if (func_37(uParam0, iParam1))
		{
			if (!func_36(iParam1, 1))
			{
				bVar0 = true;
				if (Local_449.f_14 == 9)
				{
					if (func_54())
					{
						func_44();
					}
					else
					{
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					func_33(Local_449.f_14, 0);
				}
				iVar1 = func_41(Local_449.f_14, iParam1);
				unk_0x5D96D8530B3D0904(&Local_449, iVar1);
				func_4(&(Local_449.f_16));
				Local_449.f_14 = 0;
			}
			else
			{
				func_32(&(Local_449.f_16), 0, 0);
			}
		}
		else
		{
			func_32(&(Local_449.f_16), 0, 0);
		}
	}
}

void func_44()
{
	bVar4 = false;
	iVar6 = 0;
	iVar7 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar8[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (func_47(Local_47.f_379, iVar1, iVar0) && func_46(iVar1))
			{
				iVar8[iVar7] = iVar1;
				iVar7++;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (iVar8[iVar1] != -1)
		{
			iVar6++;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	iVar5 = unk_0x09AC81E49EA267F7(0, iVar6);
	iVar2 = func_45(iVar8[iVar5]);
	while (unk_0xEAE0D21A50E6C7F4(Local_449, iVar2) && iVar3 < 10)
	{
		iVar5 = unk_0x09AC81E49EA267F7(0, iVar6);
		iVar2 = func_45(iVar8[iVar5]);
		iVar3++;
	}
	if (iVar3 >= 10)
	{
		iVar1 = 0;
		while (iVar1 < iVar6)
		{
			iVar2 = func_45(iVar8[iVar1]);
			if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar2))
			{
				unk_0x5D96D8530B3D0904(&Local_449, iVar2);
				Local_449.f_15 = iVar8[iVar1];
				bVar4 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (!bVar4)
		{
			iVar1 = 0;
			while (iVar1 <= 13)
			{
				unk_0x0674E58A79778E99(&Local_449, func_45(iVar1));
				iVar1++;
			}
			iVar5 = unk_0x09AC81E49EA267F7(0, iVar6);
			iVar2 = func_45(iVar8[iVar5]);
			unk_0x5D96D8530B3D0904(&Local_449, iVar2);
			Local_449.f_15 = iVar8[iVar5];
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&Local_449, iVar2);
		Local_449.f_15 = iVar8[iVar5];
	}
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		
		case 1:
			return 10;
		
		case 2:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 10:
			return 19;
		
		case 11:
			return 20;
		
		case 12:
			return 21;
		
		case 13:
			return 22;
		
		default:
	}
	return -1;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_53(iParam1, iParam2);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (41 - 1))
	{
		iVar2 = func_48(iParam0, iVar1);
		if (iVar2 != 0)
		{
			if (iVar2 == iVar0)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam0 != func_20())
	{
		iVar0 = func_52(Global_1590535[iParam0].f_274.f_401[iParam1]);
		if (iVar0 != -1)
		{
			if ((func_51(iParam0, iVar0) && func_50(iParam0, iVar0)) || func_49(iVar0))
			{
				return Global_1590535[iParam0].f_274.f_401[iParam1];
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 16:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam0 != func_20())
	{
		iVar0 = iParam1;
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_399.f_1, iVar0);
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 != func_20())
	{
		iVar0 = iParam1;
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_399, iVar0);
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 10;
		
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 5;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 2;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 12;
		
		case 15:
			return 11;
		
		case 16:
			return 13;
		
		case 17:
			return 9;
		
		case 18:
			return 16;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 14;
		
		case 22:
			return 15;
		
		default:
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 10:
					return 1;
				
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 9;
				
				case 5:
					return 7;
				
				case 6:
					return 11;
				
				case 7:
					return 12;
				
				case 8:
					return 13;
				
				case 9:
					return 17;
				
				case 11:
					return 15;
				
				case 12:
					return 14;
				
				case 13:
					return 16;
				
				case 16:
					return 18;
				
				case 17:
					return 19;
				
				case 18:
					return 20;
				
				case 15:
					return 22;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 10:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 10:
					return 3;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 10:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

bool func_54()
{
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (func_47(Local_47.f_379, iVar1, iVar0) && func_46(iVar1))
			{
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar2 > 0;
}

void func_55(var uParam0, int iParam1)
{
	bVar1 = true;
	switch (iParam1)
	{
		case 0:
			if (Local_449.f_14 != 0)
			{
				bVar1 = false;
			}
			if (func_7(&(Local_449.f_24)))
			{
				bVar1 = false;
			}
			if (!bVar1)
			{
				return;
			}
			if (func_61(iParam1))
			{
				iVar3 = 6;
				while (iVar3 <= 10)
				{
					unk_0x0674E58A79778E99(&Local_449, func_41(iVar3, iParam1));
					iVar3++;
				}
			}
			if (!func_60(uParam0->f_8))
			{
				unk_0x5D96D8530B3D0904(&Local_449, func_41(6, iParam1));
			}
			if (!Local_47.f_380 || !Local_47.f_381)
			{
				iVar3 = 7;
				while (iVar3 <= 9)
				{
					unk_0x5D96D8530B3D0904(&Local_449, func_41(iVar3, iParam1));
					iVar3++;
				}
			}
			iVar2 = func_59(iParam1);
			while (unk_0xEAE0D21A50E6C7F4(Local_449, func_41(iVar2, iParam1)) && iVar0 < 10)
			{
				iVar2 = func_59(iParam1);
				iVar0++;
			}
			if (iVar0 >= 10)
			{
				iVar3 = 6;
				while (iVar3 <= 10)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_449, func_41(iVar3, iParam1)))
					{
						iVar2 = iVar3;
					}
					iVar3++;
				}
			}
			Local_449.f_14 = iVar2;
			Local_449.f_3 = func_58(iParam1);
			func_32(&(Local_449.f_16), 0, 0);
			break;
		
		case 1:
			break;
		
		case 2:
			if (Local_449.f_18 != 0)
			{
				bVar1 = false;
			}
			if (func_7(&(Local_449.f_26)))
			{
				bVar1 = false;
			}
			if (!bVar1)
			{
				return;
			}
			if (func_61(iParam1))
			{
				func_57(iParam1);
			}
			iVar2 = func_59(iParam1);
			Local_449.f_18 = iVar2;
			Local_449.f_4 = func_58(iParam1);
			func_32(&(Local_449.f_19), 0, 0);
			break;
		
		case 3:
			if (Local_449.f_21 != 0)
			{
				bVar1 = false;
			}
			if (func_7(&(Local_449.f_28)))
			{
				bVar1 = false;
			}
			if (!bVar1)
			{
				return;
			}
			if (func_61(iParam1))
			{
				func_56(iParam1);
			}
			iVar2 = func_59(iParam1);
			Local_449.f_21 = iVar2;
			Local_449.f_5 = func_58(iParam1);
			func_32(&(Local_449.f_22), 0, 0);
			break;
		
		case 4:
			break;
	}
}

void func_56(int iParam0)
{
	iVar0 = func_41(6, iParam0);
	unk_0x0674E58A79778E99(&Local_449, iVar0);
}

void func_57(int iParam0)
{
	iVar0 = func_41(11, iParam0);
	iVar1 = func_41(6, iParam0);
	iVar2 = func_41(12, iParam0);
	switch (Local_47.f_386)
	{
		case 1:
			unk_0x0674E58A79778E99(&Local_449, iVar0);
			unk_0x0674E58A79778E99(&Local_449, iVar1);
			break;
		
		case 2:
		case 3:
			unk_0x0674E58A79778E99(&Local_449, iVar2);
			unk_0x0674E58A79778E99(&Local_449, iVar1);
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&Local_449, iVar1);
			break;
		
		case 5:
			unk_0x0674E58A79778E99(&Local_449, iVar1);
			break;
	}
}

int func_58(int iParam0)
{
	iVar0 = unk_0x09AC81E49EA267F7(30000, 40001);
	if (iParam0 == 3)
	{
		if (Local_449.f_8 == 0)
		{
			iVar0 = unk_0x09AC81E49EA267F7(10000, 15001);
		}
	}
	return iVar0;
}

int func_59(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = unk_0x09AC81E49EA267F7(6, 10 + 1);
			break;
		
		case 2:
			iVar1 = func_41(11, iParam0);
			iVar2 = func_41(6, iParam0);
			iVar3 = func_41(12, iParam0);
			switch (Local_47.f_386)
			{
				case 1:
					if (Local_449.f_7 == 2)
					{
						iVar0 = unk_0x09AC81E49EA267F7(0, 2);
						if (iVar0 == 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar1))
							{
								iVar0 = 11;
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar2))
							{
								iVar0 = 6;
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar2))
						{
							iVar0 = 6;
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar1))
						{
							iVar0 = 11;
						}
					}
					else
					{
						iVar0 = 11;
					}
					break;
				
				case 2:
				case 3:
					if (Local_449.f_7 == 2)
					{
						if (!Local_47.f_389)
						{
							iVar0 = unk_0x09AC81E49EA267F7(0, 2);
							if (iVar0 == 0)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar3))
								{
									iVar0 = 12;
								}
								else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar2))
								{
									iVar0 = 6;
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar2))
							{
								iVar0 = 6;
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_449, iVar3))
							{
								iVar0 = 12;
							}
						}
						else
						{
							iVar0 = 6;
						}
					}
					else if (!Local_47.f_389)
					{
						iVar0 = 12;
					}
					break;
				
				case 4:
					iVar0 = 6;
					break;
				
				case 5:
					iVar0 = 6;
					break;
			}
			break;
		
		case 3:
			if (Local_449.f_8 == 0)
			{
				iVar0 = 6;
			}
			break;
	}
	return iVar0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_61(int iParam0)
{
	iVar2 = 0;
	iVar3 = func_41(11, iParam0);
	iVar4 = func_41(6, iParam0);
	iVar5 = func_41(12, iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = 6;
			while (iVar1 <= 10)
			{
				iVar0 = func_41(iVar1, iParam0);
				if (unk_0xEAE0D21A50E6C7F4(Local_449, iVar0))
				{
					iVar2++;
				}
				iVar1++;
			}
			return iVar2 == (10 + 1 - 6);
		
		case 2:
			switch (Local_47.f_386)
			{
				case 1:
					if (Local_449.f_7 == 2)
					{
						return (unk_0xEAE0D21A50E6C7F4(Local_449, iVar3) && unk_0xEAE0D21A50E6C7F4(Local_449, iVar4));
					}
					return unk_0xEAE0D21A50E6C7F4(Local_449, iVar3);
				
				case 2:
				case 3:
					if (Local_449.f_7 == 2)
					{
						if (!Local_47.f_389)
						{
							return (unk_0xEAE0D21A50E6C7F4(Local_449, iVar5) && unk_0xEAE0D21A50E6C7F4(Local_449, iVar4));
						}
						return unk_0xEAE0D21A50E6C7F4(Local_449, iVar4);
					}
					else if (!Local_47.f_389)
					{
						return unk_0xEAE0D21A50E6C7F4(Local_449, iVar5);
					}
					break;
				
				case 4:
					return unk_0xEAE0D21A50E6C7F4(Local_449, iVar4);
					break;
				
				case 5:
					return unk_0xEAE0D21A50E6C7F4(Local_449, iVar4);
			}
			break;
		
		case 3:
			return unk_0xEAE0D21A50E6C7F4(Local_449, iVar4);
	}
	return 0;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 0;
		
		case 2:
			switch (Local_47.f_386)
			{
				case 1:
					return 1;
				
				case 2:
				case 3:
					if (Local_449.f_7 == 2 || !Local_47.f_389)
					{
						return 1;
					}
					break;
				
				case 4:
					if (Local_449.f_7 == 2 || Global_1316830 != 0)
					{
						return 1;
					}
					break;
				
				case 5:
					return Local_449.f_7 == 2;
			}
			break;
		
		case 3:
			return Local_449.f_8 == 0;
		
		case 4:
			return 0;
	}
	return 0;
}

void func_63(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 2))
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		iVar1 = iVar0;
		if (func_75(iVar1))
		{
			if (func_69(uParam0, iVar1, iParam1) && !func_67(uParam0, iVar1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 2);
				func_65(uParam0, iVar1, iParam1, 1);
				func_33(iVar1, iParam1);
			}
		}
		iVar0++;
	}
	func_64(uParam0);
}

void func_64(var uParam0)
{
	if (func_7(&(uParam0->f_20)) && func_5(&(uParam0->f_20), 2000, 0))
	{
		func_4(&(uParam0->f_20));
	}
}

void func_65(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_66(iParam1);
	if (iVar0 == -1 || iParam2 == -1)
	{
		return;
	}
	if (bParam3)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, iVar0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_5), iVar0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, iVar0))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_5), iVar0);
	}
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 5;
		
		case 3:
			return 7;
		
		default:
	}
	return -1;
}

int func_67(var uParam0, int iParam1)
{
	iVar0 = func_68(iParam1);
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(uParam0->f_5, func_68(iParam1));
	}
	return 0;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 8;
		
		default:
	}
	return -1;
}

int func_69(var uParam0, int iParam1, int iParam2)
{
	if (!func_74(iParam2, iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
			{
				if (func_73(iParam2))
				{
					switch (iParam2)
					{
						case 2:
							if (!func_7(&(Local_47.f_396)))
							{
								return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, iParam1);
							}
							else if (func_5(&(Local_47.f_396), 30000, 0))
							{
								func_4(&(Local_47.f_396));
							}
							break;
						
						case 3:
							if (!func_7(&(Local_47.f_398)))
							{
								return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, iParam1);
							}
							else if (func_5(&(Local_47.f_398), 30000, 0))
							{
								func_4(&(Local_47.f_398));
							}
							break;
						
						case 4:
							if (!func_7(&(Local_47.f_400)))
							{
								return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, iParam1);
							}
							else if (func_5(&(Local_47.f_400), 30000, 0))
							{
								func_4(&(Local_47.f_400));
							}
							break;
					}
				}
				else
				{
					return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, iParam1);
				}
			}
			break;
		
		case 2:
			if (func_67(uParam0, 1))
			{
				if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
				{
					return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) > func_72(iParam2, iParam1);
				}
			}
			break;
		
		case 4:
			if (!func_7(&(Local_47.f_394)))
			{
				if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
				{
					iVar0 = 2;
					if (func_73(iParam2))
					{
						iVar0 = 1;
					}
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, iVar0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 9))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_5), 9);
							func_6(&(Local_47.f_392), 0, 0);
							Local_47.f_378 = iParam2;
						}
						else if (Local_47.f_378 == iParam2)
						{
							if (func_7(&(Local_47.f_392)) && func_5(&(Local_47.f_392), 60000, 0))
							{
								if (!func_36(iParam2, 1))
								{
									return 1;
								}
							}
						}
						else if (func_9(Local_47[Local_47.f_378]))
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(Local_47[Local_47.f_378], 1), true))
							{
								func_32(&(Local_47.f_392), 0, 0);
								Local_47.f_378 = iParam2;
							}
						}
					}
					else if (Local_47.f_378 == iParam2 && unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 9))
					{
						unk_0x0674E58A79778E99(&(uParam0->f_5), 9);
						func_4(&(Local_47.f_392));
					}
				}
			}
			else if (func_5(&(Local_47.f_394), 15000, 0))
			{
				func_4(&(Local_47.f_394));
			}
			break;
		
		case 3:
			if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
			{
				if (!func_67(uParam0, iParam1))
				{
					if (func_71(uParam0, iParam2))
					{
						return 1;
					}
				}
				else if (!func_71(uParam0, iParam2))
				{
					func_70(uParam0, iParam1, iParam2, 0);
				}
			}
			break;
	}
	return 0;
}

void func_70(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_68(iParam1);
	if (iVar0 == -1 || iParam2 == -1)
	{
		return;
	}
	if (bParam3)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, iVar0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_5), iVar0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, iVar0))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_5), iVar0);
	}
}

bool func_71(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			if (Local_449.f_8 == 0)
			{
				if (unk_0xC844350D5D58C99A(Local_47.f_383))
				{
					if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), *uParam0) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_47.f_383))
					{
						return 1;
					}
				}
			}
			break;
	}
	return unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), *uParam0);
}

float func_72(int iParam0, int iParam1)
{
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					fVar0 = 2f;
					break;
				
				case 2:
					fVar0 = 4f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					fVar0 = 2f;
					break;
				
				case 2:
					fVar0 = 4f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					fVar0 = 2f;
					break;
				
				case 2:
					fVar0 = 5f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					fVar0 = 2f;
					break;
				
				case 2:
					fVar0 = 3,5f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					fVar0 = 2f;
					break;
				
				case 2:
					fVar0 = 6f;
					break;
			}
			break;
	}
	return fVar0;
}

bool func_73(int iParam0)
{
	return (iParam0 >= 2 && iParam0 <= 4);
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					if (!Local_47.f_380 || !Local_47.f_381)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 2:
			switch (Local_47.f_386)
			{
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (Local_47.f_387)
			{
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			switch (Local_47.f_388)
			{
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam1)
					{
						case 1:
						case 2:
						case 3:
							return 1;
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	return (iParam0 != 0 && iParam0 != 14);
}

int func_76(int iParam0, bool bParam1)
{
	if (!func_85(iParam0) || !func_77(iParam0, bParam1, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0 && unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4, 13))
	{
		return 0;
	}
	if (iParam0 == 0 && func_84())
	{
		iVar0 = unk_0x12AB0310C2281427(&(Global_22350.f_1));
		if (iVar0 == -1794358814)
		{
			return 0;
		}
	}
	if (iParam0 == 0 || iParam0 == 1)
	{
		if ((unk_0xE5DBF9B6126856CA(Global_2514605) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Global_2514605))) && unk_0x7DECE00E09F41C95(unk_0x1B50683925F00106(Global_2514605)))
		{
			return 0;
		}
	}
	if (!Global_1316821)
	{
		return 0;
	}
	if (func_83(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam1 && func_36(iParam0, bParam1))
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (func_82())
	{
		return 0;
	}
	if (unk_0xF929B1A0A409FF93() || func_81(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_80() || func_79()) || func_78())
	{
		return 0;
	}
	if (Global_2460712)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		return 0;
	}
	if (bParam3)
	{
		if ((iParam0 == 2 && Local_449.f_7 == 3) && Local_47.f_386 == 4)
		{
			if (func_31(unk_0xD803B885F5E47A62()) && iParam2 != 13)
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_78()
{
	return Global_2450632.f_592;
}

var func_79()
{
	return Global_2450632.f_591;
}

bool func_80()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_20() && func_35(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_556, 0);
	}
	return 0;
}

bool func_82()
{
	return Global_73825;
}

int func_83(int iParam0)
{
	if (iParam0 != func_20() && func_35(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

bool func_84()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_85(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 4);
}

void func_86(var uParam0)
{
	if (!unk_0xC844350D5D58C99A(*uParam0) || unk_0x437347B10A200C4B(*uParam0, 0))
	{
		return;
	}
	sVar0 = func_97();
	sVar1 = func_96(uParam0, 0);
	fVar2 = unk_0x79833B02DBD2A244(0f, 0,7f);
	if (func_95(uParam0))
	{
		func_91(uParam0);
	}
	else
	{
		iVar3 = unk_0xD1960163A3042274(*uParam0, 242628503);
		if (iVar3 != 0 && iVar3 != 1)
		{
			if (unk_0xB4AE0788C1587752(sVar0))
			{
				unk_0xDD353D0E9C789D0E(&uVar4);
				if (!func_90(uParam0))
				{
					if (func_89(uParam0))
					{
						if (func_88(uParam0))
						{
							unk_0x3E8E48829F3C7624(0, sVar0, sVar1, uParam0->f_13, 0f, 0f, uParam0->f_12, 8f, -8f, -1, 135008257, fVar2, 2, 1);
						}
						else
						{
							unk_0x3E8E48829F3C7624(0, sVar0, sVar1, uParam0->f_13, 0f, 0f, uParam0->f_12, 8f, -8f, -1, 790529, fVar2, 2, 1);
						}
					}
					else
					{
						unk_0xC6EB89C59F2AF6B8(0, sVar0, sVar1, 8f, -8f, -1, 1, fVar2, 0, 0, 0);
					}
				}
				else
				{
					iVar5[0] = 0;
					iVar5[1] = 1;
					iVar5[2] = 2;
					iVar5[3] = 3;
					iVar12 = 0;
					while (iVar12 < 10)
					{
						iVar10 = unk_0x09AC81E49EA267F7(0, 4);
						iVar11 = unk_0x09AC81E49EA267F7(0, 4);
						iVar13 = iVar5[iVar10];
						iVar5[iVar10] = iVar5[iVar11];
						iVar5[iVar11] = iVar13;
						iVar12++;
					}
					if (func_87(uParam0))
					{
						iVar14 = 0;
						while (iVar14 < 4)
						{
							if (iVar5[iVar14] == 3)
							{
								iVar5[iVar14] = -1;
							}
							iVar14++;
						}
					}
					iVar12 = 0;
					while (iVar12 < 4)
					{
						unk_0xC6EB89C59F2AF6B8(0, sVar0, func_96(uParam0, iVar5[iVar12]), 8f, -8f, -1, 0, 0f, 0, 0, 0);
						iVar12++;
					}
				}
				unk_0x25644C31B4B6E9F3(uVar4, 1);
				unk_0x75ABDC5F81978924(uVar4);
				unk_0x78ADC381772E3D54(*uParam0, uVar4);
				unk_0xF82EA857DA10E0CD(&uVar4);
			}
		}
	}
}

int func_87(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 27:
			return 1;
		
		default:
	}
	return 0;
}

int func_88(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 8:
		case 16:
		case 23:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_89(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 8:
		case 11:
		case 12:
		case 16:
		case 21:
		case 23:
		case 24:
		case 27:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 0:
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
			return 0;
		
		default:
	}
	return 1;
}

void func_91(var uParam0)
{
	sVar0 = func_97();
	sVar1 = func_96(uParam0, 0);
	sVar2 = func_94(uParam0, 0);
	if (func_93(uParam0))
	{
		if (uParam0->f_10 == -1)
		{
			uParam0->f_10 = unk_0xE9744DB7B8CA6965(uParam0->f_13, 0f, 0f, uParam0->f_12, 2);
			if ((unk_0xC844350D5D58C99A(*uParam0) && !unk_0xEA6BC48857E0AC4C(sVar0)) && !unk_0xEA6BC48857E0AC4C(sVar1))
			{
				unk_0x915804B434753CBD(*uParam0, uParam0->f_10, sVar0, sVar1, 1000f, -1000f, 5, 0, 1148846080, 0);
			}
			if (((unk_0xC844350D5D58C99A(uParam0->f_1[0]) && unk_0x1A5AE8A9B1D42A10(uParam0->f_1[0])) && !unk_0xEA6BC48857E0AC4C(sVar0)) && !unk_0xEA6BC48857E0AC4C(sVar2))
			{
				unk_0xE14EC663EED44AD5(uParam0->f_1[0], uParam0->f_10, sVar2, sVar0, 1000f, -1000f, 0, 1148846080);
			}
			unk_0xC90224D9E95E5E3A(uParam0->f_10, 1);
			unk_0x11AD11297DC58CC7(*uParam0, true);
			unk_0xFADC0A217229F6B5(*uParam0, 1);
		}
	}
	else
	{
		iVar3 = unk_0xD1960163A3042274(*uParam0, 1785177548);
		if ((iVar3 != 0 && iVar3 != 1) || unk_0xA45992A6CE82FB43(uParam0->f_10) >= 1f)
		{
			iVar4 = unk_0x09AC81E49EA267F7(0, func_92(uParam0->f_8));
			sVar1 = func_96(uParam0, iVar4);
			sVar2 = func_94(uParam0, iVar4);
			iVar5 = 0;
			iVar6 = 5;
			if (func_88(uParam0))
			{
				iVar5 = 1;
				iVar6 = 261;
			}
			uParam0->f_10 = unk_0xE9744DB7B8CA6965(uParam0->f_13, 0f, 0f, uParam0->f_12, 2);
			if ((unk_0xC844350D5D58C99A(*uParam0) && !unk_0xEA6BC48857E0AC4C(sVar0)) && !unk_0xEA6BC48857E0AC4C(sVar1))
			{
				unk_0x915804B434753CBD(*uParam0, uParam0->f_10, sVar0, sVar1, 1000f, -1000f, iVar6, 0, 1148846080, iVar5);
			}
			if (((unk_0xC844350D5D58C99A(uParam0->f_1[0]) && unk_0x1A5AE8A9B1D42A10(uParam0->f_1[0])) && !unk_0xEA6BC48857E0AC4C(sVar0)) && !unk_0xEA6BC48857E0AC4C(sVar2))
			{
				unk_0xE14EC663EED44AD5(uParam0->f_1[0], uParam0->f_10, sVar2, sVar0, 1000f, -1000f, 0, 1148846080);
			}
			unk_0xC90224D9E95E5E3A(uParam0->f_10, 0);
			unk_0x11AD11297DC58CC7(*uParam0, true);
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 4;
		
		case 12:
			return 7;
		
		default:
	}
	return 0;
}

int func_93(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

char* func_94(var uParam0, int iParam1)
{
	switch (uParam0->f_8)
	{
		case 24:
			return "ANIM@AMB@RANGE@ASSEMBLE_GUNS@Base_W_AR_CarbineRifleMK2";
		
		case 25:
			return "ANIM@AMB@RANGE@WEAPON_TEST@Weapon_Test_Busrt_01_W_AR_AssaultRifleMK2";
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return "JIMMY@_SMOKING_BASE_P_CS_Ciggy_01b_S";
				
				case 1:
					return "JIMMY@_SMOKING_IDLE_01_P_CS_Ciggy_01b_S";
				
				case 2:
					return "JIMMY@_SMOKING_IDLE_02_P_CS_Ciggy_01b_S";
				
				case 3:
					return "JIMMY@_SMOKING_IDLE_03_P_CS_Ciggy_01b_S";
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return "JIMMY@_DRINKING@_BEER_BASE";
				
				case 1:
					return "JIMMY@_DRINKING@_BEER_IDLE_A";
				
				case 2:
					return "JIMMY@_DRINKING@_BEER_IDLE_B";
				
				case 3:
					return "JIMMY@_DRINKING@_BEER_IDLE_C";
				
				case 4:
					return "JIMMY@_DRINKING@_BEER_IDLE_D";
				
				case 5:
					return "JIMMY@_DRINKING@_BEER_IDLE_E";
				
				case 6:
					return "JIMMY@_DRINKING@_BEER_IDLE_F";
				
				default:
			}
			break;
	}
	return "";
}

int func_95(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 24:
		case 25:
		case 16:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

char* func_96(var uParam0, int iParam1)
{
	switch (uParam0->f_8)
	{
		case 9:
			return "world_human_stand_mobile@_female@_standing@_call@_idle_a";
		
		case 10:
			return "world_human_clipboard@_male@_idle_d";
		
		case 7:
			return "WORLD_HUMAN_AA_SMOKE@_MALE@_IDLE_A";
		
		case 8:
			return "world_human_seat_wall_tablet@_male@_idle_a";
		
		case 11:
			return "SWITCH@_MICHAEL@_ON_SOFA_BASE_JIMMY";
		
		case 13:
			return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
		
		case 14:
			return "male@_standing@_call@_idle_a";
		
		case 15:
			return "WORLD_HUMAN_STAND_MOBILE@_MALE@_TEXT@_idle_a";
		
		case 17:
			return "AMB@WORLD_HUMAN_LEANING@MALE@WALL@BACK@MOBILE@IDLE_A";
		
		case 18:
			return "Inspecting_HIGH_Idle_01_inspector";
		
		case 19:
			return "WORLD_HUMAN_STAND_MOBILE@_MALE@_TEXT@_idle_a";
		
		case 20:
			return "AMB@WORLD_HUMAN_CLIPBOARD@MALE@IDLE_A_IDLE_A";
		
		case 21:
			return "prop_human_seat_computer@_male@_idle_a";
		
		case 22:
			return "AMB@WORLD_HUMAN_LEANING@MALE@COFFEE@IDLE_A_IDLE_A";
		
		case 23:
			return "world_human_seat_wall_tablet@_male@_idle_a";
		
		case 24:
			return "ANIM@AMB@RANGE@ASSEMBLE_GUNS@Base_AMY_Skater_01";
		
		case 25:
			return "Weapon_Test_Busrt_01_AMY_Skater_01";
		
		case 26:
			return "stand_phone_lookaround_nowork";
		
		case 27:
			return "AMB@PROP_HUMAN_SEAT_BAR@MALE@ELBOWS_ON_BAR@IDLE_A";
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return "JIMMY@_SMOKING_BASE";
				
				case 1:
					return "JIMMY@_SMOKING_IDLE_01";
				
				case 2:
					return "JIMMY@_SMOKING_IDLE_02";
				
				case 3:
					return "JIMMY@_SMOKING_IDLE_03";
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return "JIMMY@_DRINKING@_BASE";
				
				case 1:
					return "JIMMY@_DRINKING@_IDLE_A";
				
				case 2:
					return "JIMMY@_DRINKING@_IDLE_B";
				
				case 3:
					return "JIMMY@_DRINKING@_IDLE_C";
				
				case 4:
					return "JIMMY@_DRINKING@_IDLE_D";
				
				case 5:
					return "JIMMY@_DRINKING@_IDLE_E";
				
				case 6:
					return "JIMMY@_DRINKING@_IDLE_F";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_A";
				
				case 1:
					return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_B";
				
				case 2:
					return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_C";
				
				case 3:
					return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_D";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
				
				case 1:
					return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_B";
				
				case 2:
					return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_C";
				
				case 3:
					return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_D";
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_A";
				
				case 1:
					return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_B";
				
				case 2:
					return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_C";
				
				case 3:
					return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_D";
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_A";
				
				case 1:
					return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_B";
				
				case 2:
					return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_C";
				
				case 3:
					return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_D";
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_A";
				
				case 1:
					return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_B";
				
				case 2:
					return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_C";
				
				case 3:
					return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_D";
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
				
				case 1:
					return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_B";
				
				case 2:
					return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_C";
				
				case 3:
					return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_D";
				
				default:
			}
			break;
	}
	if (uParam0->f_16)
	{
		switch (uParam0->f_8)
		{
			case 0:
				return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
			
			default:
		}
	}
	else
	{
		switch (uParam0->f_8)
		{
			case 0:
				return "amb_world_human_hang_out_street_male_c_base";
			}
		
		default:
	}
	return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
}

char* func_97()
{
	return "ANIM_HEIST@ARCADE_COMBINED@";
}

void func_98(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1029221750:
						if (Global_1391799.f_787)
						{
							return;
						}
						func_99(uParam0, iParam1, iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_99(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x218F818E64020C17(1, iParam2, &Var0, 4))
	{
		if (unk_0xFB75B0F82CA525F6(Var0.f_1))
		{
			if (Var0.f_3 == iParam1)
			{
				if (!func_7(&(uParam0->f_20)) || Var0.f_2 != uParam0->f_19)
				{
					if (func_108(uParam0, iParam1) && func_77(iParam1, func_107(Var0.f_2), Var0.f_2, 1))
					{
						func_103(uParam0, Var0.f_2, Var0.f_3);
						func_100(uParam0, Var0, 1);
					}
					else
					{
						func_100(uParam0, Var0, 1);
					}
				}
				else if (func_7(&(uParam0->f_20)))
				{
					func_100(uParam0, Var0, 0);
				}
			}
		}
	}
}

void func_100(var uParam0, struct<4> Param1, bool bParam5)
{
	func_101(uParam0, Param1.f_2, Param1.f_3);
	uParam0->f_19 = Param1.f_2;
	if (bParam5)
	{
		func_6(&(uParam0->f_20), 0, 0);
	}
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
			{
				if (func_102(uParam0, iParam1) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_72(iParam2, 2))
				{
					func_65(uParam0, iParam1, iParam2, 0);
					func_70(uParam0, 1, iParam2, 1);
					func_70(uParam0, 2, iParam2, 0);
					unk_0x0674E58A79778E99(&(uParam0->f_5), 2);
					if (func_73(iParam2))
					{
						switch (iParam2)
						{
							case 2:
								func_32(&(Local_47.f_396), 0, 0);
								break;
							
							case 3:
								func_32(&(Local_47.f_398), 0, 0);
								break;
							
							case 4:
								func_32(&(Local_47.f_400), 0, 0);
								break;
							}
						}
					}
			}
			break;
		
		case 2:
			if (func_102(uParam0, iParam1))
			{
				func_65(uParam0, iParam1, iParam2, 0);
				func_70(uParam0, 2, iParam2, 1);
				func_70(uParam0, 1, iParam2, 0);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 2);
			}
			break;
		
		case 4:
			func_4(&(Local_47.f_392));
			func_32(&(Local_47.f_394), 0, 0);
			unk_0x0674E58A79778E99(&(uParam0->f_5), 9);
			unk_0x0674E58A79778E99(&(uParam0->f_5), 2);
			break;
		
		case 3:
			if (func_102(uParam0, iParam1))
			{
				func_65(uParam0, iParam1, iParam2, 0);
				func_70(uParam0, iParam1, iParam2, 1);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 2);
			}
			break;
		
		case 5:
			break;
		
		case 13:
			Global_1316830 = 0;
			unk_0x0674E58A79778E99(&(uParam0->f_5), 13);
			break;
		
		default:
			switch (iParam2)
			{
				case 0:
					func_32(&(Local_449.f_24), 0, 0);
					break;
				
				case 2:
					func_32(&(Local_449.f_26), 0, 0);
					break;
				
				case 3:
					func_32(&(Local_449.f_28), 0, 0);
					break;
			}
			break;
	}
}

int func_102(var uParam0, int iParam1)
{
	iVar0 = func_66(iParam1);
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(uParam0->f_5, func_66(iParam1));
	}
	return 0;
}

int func_103(var uParam0, int iParam1, int iParam2)
{
	sVar0 = func_106(iParam1, iParam2);
	if (unk_0xEA6BC48857E0AC4C(sVar0))
	{
		return 0;
	}
	sVar1 = func_105(iParam2);
	if (unk_0xEA6BC48857E0AC4C(sVar1))
	{
		return 0;
	}
	unk_0xEB0A515D699A7E90(*uParam0, sVar0, sVar1, func_104(6), 0);
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_105(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "JIMMY";
			break;
		
		case 1:
			sVar0 = "HS3_WENDY";
			break;
		
		case 2:
			switch (Local_47.f_386)
			{
				case 1:
					sVar0 = "KARIM";
					break;
				
				case 2:
					sVar0 = "TALINA";
					break;
				
				case 3:
					sVar0 = "EDDIE";
					break;
				
				case 4:
					sVar0 = "BIKE_MECHANIC";
					break;
				
				case 5:
					sVar0 = "WEPSEXP";
					break;
			}
			break;
		
		case 3:
			switch (Local_47.f_387)
			{
				case 1:
					sVar0 = "LIENGINEER";
					break;
				
				case 2:
					sVar0 = "CHRISTIAN";
					break;
				
				case 3:
					sVar0 = "BTL_YOHAN";
					break;
				
				case 4:
					sVar0 = "AVI";
					break;
				
				case 5:
					sVar0 = "PAIGE";
					break;
			}
			break;
		
		case 4:
			switch (Local_47.f_388)
			{
				case 1:
					sVar0 = "KARL";
					break;
				
				case 2:
					sVar0 = "GUSTAVO";
					break;
				
				case 3:
					sVar0 = "AIRMECH";
					break;
				
				case 4:
					sVar0 = "WEPSEXP";
					break;
				
				case 5:
					sVar0 = "PACKIE";
					break;
			}
			break;
	}
	return sVar0;
}

char* func_106(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					sVar0 = "ARCADE_HI";
					break;
				
				case 2:
					sVar0 = "ARCADE_BYE";
					break;
				
				case 3:
					sVar0 = "ARCADE_BUMP";
					break;
				
				case 4:
					sVar0 = "ARCADE_LOITER";
					break;
				
				case 5:
					sVar0 = "ARCADE_TV_TURNEDOFF";
					break;
				
				case 10:
					sVar0 = "ARCADE_HOWSITGOING";
					break;
				
				case 6:
					switch (Local_449.f_6)
					{
						case 0:
						case 1:
							sVar0 = "ARCADE_TV_OFF";
							if (Global_1316831)
							{
								sVar0 = "ARCADE_WATCHING_TV";
							}
							break;
						
						case 3:
							sVar0 = "ARCADE_PHONE";
							break;
						
						case 4:
							sVar0 = "ARCADE_TEXTING";
							break;
						
						case 5:
							sVar0 = "ARCADE_SMOKING";
							break;
					}
					if (!Local_47.f_380 && !Local_47.f_381)
					{
						sVar0 = "ARCADE_SETUP";
					}
					else if (Local_47.f_380 && !Local_47.f_381)
					{
						sVar0 = "ARCADE_TEXTING";
					}
					break;
				
				case 7:
					sVar0 = "ARCADE_LOW";
					if (Local_449.f_1 >= 4)
					{
						sVar0 = "ARCADE_HIGH";
					}
					break;
				
				case 8:
					sVar0 = "ARCADE_CABINETS";
					if (Local_449.f_10 == 14)
					{
						sVar0 = "ARCADE_ALL_CABINETS";
					}
					break;
				
				case 9:
					switch (Local_449.f_15)
					{
						case 0:
							sVar0 = "ARCADE_SPACE";
							break;
						
						case 1:
							sVar0 = "ARCADE_LIGHTGUN";
							break;
						
						case 3:
							sVar0 = "ARCADE_DRIVING";
							break;
						
						case 4:
							sVar0 = "ARCADE_DRIVING";
							break;
						
						case 5:
							sVar0 = "ARCADE_DRIVING";
							break;
						
						case 9:
							sVar0 = "ARCADE_INVADE";
							break;
						
						case 11:
							sVar0 = "ARCADE_FORTUNE";
							break;
						
						case 12:
							sVar0 = "ARCADE_CRANE";
							break;
						
						case 13:
							sVar0 = "ARCADE_LOVETEST";
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					sVar0 = "ARCADE_PLAYER_HI";
					break;
				
				case 2:
					sVar0 = "ARCADE_PLAYER_BYE";
					break;
				
				case 3:
					sVar0 = "BUMP";
					break;
				
				case 4:
					sVar0 = "ARCADE_LOITER";
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 1:
					sVar0 = "ARCADE_HI";
					break;
				
				case 2:
					sVar0 = "ARCADE_BYE";
					break;
				
				case 3:
					sVar0 = "ARCADE_BUMP";
					break;
				
				case 4:
					sVar0 = "ARCADE_LOITER";
					break;
				
				case 11:
					sVar0 = "ARCADE_IDLE";
					break;
				
				case 6:
					if (Local_449.f_7 == 2)
					{
						sVar0 = "ARCADE_PHONE";
					}
					break;
				
				case 12:
					switch (Local_47.f_386)
					{
						case 2:
							if (!Local_47.f_389)
							{
								sVar0 = "ARCADE_NOVEHICLE";
							}
							break;
						
						case 3:
							if (!Local_47.f_389)
							{
								sVar0 = "ARCADE_NOVEHICLE";
							}
							break;
					}
					break;
				
				case 13:
					switch (Local_47.f_386)
					{
						case 4:
							if (Global_1316830 == 1)
							{
								sVar0 = "ARCADE_FIRST_UPGRADE";
							}
							else if (Global_1316830 == 2)
							{
								sVar0 = "ARCADE_SECOND_UPGRADE";
							}
							break;
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "ARCADE_HI";
					break;
				
				case 2:
					sVar0 = "ARCADE_BYE";
					break;
				
				case 3:
					sVar0 = "ARCADE_BUMP";
					break;
				
				case 4:
					sVar0 = "ARCADE_LOITER";
					break;
				
				case 6:
					if (Local_449.f_8 == 0)
					{
						sVar0 = "ARCADE_COMPUTER";
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 1:
					sVar0 = "ARCADE_HI";
					break;
				
				case 2:
					sVar0 = "ARCADE_BYE";
					break;
				
				case 3:
					sVar0 = "ARCADE_BUMP";
					break;
				
				case 4:
					sVar0 = "ARCADE_LOITER";
					break;
			}
			break;
	}
	return sVar0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_108(var uParam0, int iParam1)
{
	if (func_9(unk_0x16F2683693E537C9()) && func_9(*uParam0))
	{
		return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(*uParam0, 1), true) < func_38(iParam1);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0xEBA53F35D0085654(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_1[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iParam0->f_1[iVar0]));
		}
		iVar0++;
	}
}

void func_110(var uParam0, int iParam1)
{
	if (Local_47.f_377 < 2)
	{
		if (!func_133(uParam0))
		{
			func_132(uParam0, iParam1);
			if (func_131(uParam0, iParam1))
			{
				*uParam0 = unk_0x36F2404464202779(26, func_130(iParam1, uParam0->f_16, Local_47.f_386, Local_47.f_387, Local_47.f_388, uParam0->f_11), uParam0->f_13, uParam0->f_12, 0, false);
				if (unk_0xC844350D5D58C99A(*uParam0))
				{
					if (func_129(iParam1))
					{
						if (func_128(uParam0->f_6, uParam0->f_7))
						{
							func_124(*uParam0, uParam0->f_6, uParam0->f_7);
						}
						else
						{
							func_121(*uParam0, &(uParam0->f_6), &(uParam0->f_7));
						}
					}
					func_120(uParam0);
					func_119(uParam0, iParam1);
					if (func_118(uParam0))
					{
						func_112(uParam0);
					}
					if (func_90(uParam0))
					{
						unk_0x6569264C5DBAC6F6(*uParam0, 0, func_97(), func_111(uParam0), 8f, 1);
					}
					if (Local_47.f_385)
					{
						unk_0x4A4806F9D471E491(*uParam0, false, 0);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 1))
					{
						unk_0x4FB9A846E72E2F23(*uParam0, 0, 0);
					}
					Local_47.f_377++;
				}
			}
		}
	}
}

char* func_111(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 1:
			return "PED_MALE@_STAND_WITHDRINK@_01A@_BASE_BASE";
		
		case 2:
			return "PED_MALE@_STAND_WITHDRINK@_01B@_BASE_BASE";
		
		case 3:
			return "PED_FEMALE@_STAND@_03A@_BASE_BASE";
		
		case 4:
			return "PED_FEMALE@_STAND@_03B@_BASE_BASE";
		
		case 5:
			return "PED_FEMALE@_STAND@_02A@_BASE_BASE";
		
		case 6:
			return "PED_FEMALE@_STAND_WITHDRINK@_01B@_BASE_BASE";
		
		case 27:
			return "AMB@PROP_HUMAN_SEAT_BAR@MALE@ELBOWS_ON_BAR@BASE";
		
		default:
	}
	return "";
}

void func_112(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xC844350D5D58C99A(uParam0->f_1[iVar0]) && func_117(uParam0, iVar0) != 0)
		{
			uParam0->f_1[iVar0] = unk_0x7707E48765093646(func_117(uParam0, iVar0), unk_0x64430C979F516F7A(*uParam0, func_116(uParam0, iVar0), 0f, 0f, 0f), 0, false, false);
			if (unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 1))
			{
				unk_0x4FB9A846E72E2F23(uParam0->f_1[iVar0], 0, 0);
			}
			if (func_115(uParam0))
			{
				unk_0x9F528B1B53FBC5D9(uParam0->f_1[iVar0], *uParam0, unk_0x4A089F2B762B8D33(*uParam0, func_116(uParam0, iVar0)), func_114(uParam0), func_113(uParam0), 1, 1, 0, 0, 2, 1);
			}
		}
		iVar0++;
	}
}

Vector3 func_113(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 8:
			return 0f, -90f, 0f;
		
		case 12:
			return 10f, 0f, 0f;
		
		case 13:
			return -2f, -5f, 0f;
		
		case 15:
		case 19:
			return 0f, 10f, 0f;
		
		case 24:
		case 25:
			return 270f, 20f, 10f;
		
		case 26:
			return 270f, 0f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_114(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 7:
			return 0,005f, 0,0175f, 0,02f;
		
		case 8:
			return -0,03f, 0f, -0,02f;
		
		case 12:
			return 0,02f, -0,02f, -0,04f;
		
		case 13:
			return 0,02f, -0,02f, -0,08f;
		
		case 15:
		case 19:
			return 0,015f, -0,012f, -0,02f;
		
		case 16:
			return 0,01f, 0,023f, 0,02f;
		
		case 24:
		case 25:
			return 0,13f, 0,075f, 0f;
		
		case 26:
			return 0,07f, 0,05f, 0f;
		
		case 23:
			return 0f, 0f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_115(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 24:
		case 25:
		case 16:
		case 12:
			return 0;
		
		default:
	}
	return 1;
}

int func_116(var uParam0, int iParam1)
{
	switch (uParam0->f_8)
	{
		case 2:
		case 6:
		case 12:
		case 13:
		case 22:
		case 24:
		case 25:
		case 7:
		case 16:
		case 9:
		case 14:
		case 15:
		case 17:
		case 19:
			return 28422;
		
		case 1:
		case 8:
		case 26:
		case 23:
		case 10:
		case 20:
			return 60309;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 28422;
				
				case 1:
					return 60309;
				
				default:
			}
			break;
	}
	return 28422;
}

int func_117(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (uParam0->f_8)
			{
				case 1:
				case 2:
				case 6:
				case 13:
				case 12:
					return 683570518;
				
				case 7:
				case 16:
					return -917746868;
				
				case 23:
					return -1585232418;
				
				case 8:
				case 26:
				case 9:
				case 14:
				case 15:
				case 17:
				case 19:
					return 974883178;
				
				case 10:
				case 20:
					return 1027109416;
				
				case 22:
					return -598185919;
				
				case 24:
					return 1026431720;
				
				case 25:
					return 273925117;
				
				case 18:
					return 463086472;
				
				default:
			}
			break;
		
		case 1:
			switch (uParam0->f_8)
			{
				case 18:
					return -297480469;
				
				default:
			}
			break;
	}
	return 0;
}

int func_118(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 1:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

void func_119(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			unk_0x9A28E8CB86CD4694(*uParam0, 0, 0, 0, false);
			unk_0x9A28E8CB86CD4694(*uParam0, 1, 0, 0, false);
			break;
		
		case 2:
			switch (Local_47.f_386)
			{
				case 1:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 4, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 3, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 6, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 9, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 10, 1, 0, 0);
					break;
				
				case 2:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 2, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 2, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 2, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 2, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 6, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 9, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 10, 1, 0, 0);
					break;
				
				case 4:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 1, 1, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 0, 1, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 1, 1, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 10, 1, 0, 0);
					break;
				
				case 5:
					unk_0x9A28E8CB86CD4694(*uParam0, 0, 0, 0, false);
					break;
			}
			break;
		
		case 3:
			switch (Local_47.f_387)
			{
				case 1:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 2, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 3, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 3, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 3, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 5, 2, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					unk_0x9A28E8CB86CD4694(*uParam0, 1, 0, 0, false);
					unk_0x9A28E8CB86CD4694(*uParam0, 2, 0, 0, false);
					break;
				
				case 2:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 5, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					break;
				
				case 3:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 5, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 5, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 5, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 4, 0, 0);
					break;
			}
			break;
		
		case 4:
			switch (Local_47.f_388)
			{
				case 1:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 1, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 6, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 6, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 6, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 9, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 10, 1, 0, 0);
					break;
				
				case 2:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 4, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 1, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 6, 1, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 6, 1, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 6, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 9, 0, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 10, 1, 0, 0);
					break;
				
				case 5:
					unk_0x78ED16BE998AECC7(*uParam0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 0, 5, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 1, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 2, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 3, 6, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 4, 6, 2, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 6, 1, 0, 0);
					unk_0x64F9F278AB9DCA2C(*uParam0, 8, 0, 0, 0);
					break;
				
				case 4:
					unk_0x9A28E8CB86CD4694(*uParam0, 0, 0, 0, false);
					break;
			}
			break;
	}
}

void func_120(var uParam0)
{
	unk_0x98868AF51859FC75(*uParam0, 0);
	unk_0x20EC6650986ACDC7(*uParam0, 0);
	unk_0x5745EA6329A91E29(*uParam0, -1569615261, true);
	unk_0x11AD11297DC58CC7(*uParam0, true);
	unk_0x9DD8618CA5BF832D(*uParam0, 249, true);
	unk_0x4E885A246A9D983A(*uParam0, 185, true);
	unk_0x4E885A246A9D983A(*uParam0, 108, true);
	unk_0x4E885A246A9D983A(*uParam0, 106, true);
	unk_0xC978532B427F303B(*uParam0, 0);
	unk_0x004A9F3F2E1E4B43(*uParam0, 1);
	unk_0xF4CB0B98F8F79D8D(*uParam0, 0);
	unk_0x46CB381A452EF99D(*uParam0, 0);
	unk_0x4E885A246A9D983A(*uParam0, 208, true);
	unk_0xA3BF0AA5A2608191(*uParam0);
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	Var1 = 10;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar22 = unk_0x36C584991B4C183F(iParam0, iVar0);
		iVar23 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
		if (iVar0 < 10)
		{
			Var1[iVar0] = iVar22;
			Var1[iVar0].f_1 = iVar23;
		}
		iVar0++;
	}
	func_122(Var1, iParam1, iParam2);
}

void func_122(struct<2>[] Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21, int iParam22)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0 * 3;
		func_123(iParam21, Param0[iVar0], iVar1);
		func_123(iParam22, Param0[iVar0].f_1, iVar1);
		iVar0++;
	}
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			unk_0x0674E58A79778E99(iParam0, iParam2);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 1);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 2);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(iParam0, iParam2);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 1);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 2);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(iParam0, iParam2);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 1);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 2);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(iParam0, iParam2);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 1);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 2);
			break;
		
		case 4:
			unk_0x0674E58A79778E99(iParam0, iParam2);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 1);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 2);
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(iParam0, iParam2);
			unk_0x0674E58A79778E99(iParam0, iParam2 + 1);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 2);
			break;
		
		case 6:
			unk_0x0674E58A79778E99(iParam0, iParam2);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 1);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 2);
			break;
		
		case 7:
			unk_0x5D96D8530B3D0904(iParam0, iParam2);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 1);
			unk_0x5D96D8530B3D0904(iParam0, iParam2 + 2);
			break;
	}
}

void func_124(int iParam0, var uParam1, var uParam2)
{
	Var0 = 10;
	func_126(&Var0, uParam1, uParam2);
	func_125(iParam0, Var0);
}

void func_125(int iParam0, struct<2>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x64F9F278AB9DCA2C(iParam0, iVar0, Param1[iVar0], Param1[iVar0].f_1, 0);
		iVar0++;
	}
}

void func_126(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0 * 3;
		(*uParam0)[iVar0] = func_127(&uParam1, iVar1);
		uParam0[iVar0]->f_1 = func_127(&uParam2, iVar1);
		iVar0++;
	}
}

int func_127(var uParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1))
	{
		iVar0++;
	}
	if (unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1 + 1))
	{
		iVar0 += 2;
	}
	if (unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1 + 2))
	{
		iVar0 += 4;
	}
	return iVar0;
}

bool func_128(int iParam0, int iParam1)
{
	return (iParam0 > 0 || iParam1 > 0);
}

bool func_129(int iParam0)
{
	return iParam0 > 4;
}

int func_130(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x12AB0310C2281427("ig_jimmydisanto2");
		
		case 1:
			return unk_0x12AB0310C2281427("ig_wendy");
		
		case 2:
			switch (iParam2)
			{
				case 1:
					return 994527967;
				
				case 2:
					return 994527967;
				
				case 3:
					return 712602007;
				
				case 4:
					return -1105135100;
				
				case 5:
					return 921328393;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam3)
			{
				case 1:
					return -1715797768;
				
				case 2:
					return -1715797768;
				
				case 3:
					return 1221043248;
				
				case 4:
					return 939183526;
				
				case 5:
					return 357551935;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam4)
			{
				case 1:
					return 193469166;
				
				case 2:
					return 193469166;
				
				case 3:
					return -848871003;
				
				case 4:
					return 921328393;
				
				case 5:
					return 193469166;
				
				default:
			}
			break;
	}
	if (bParam1)
	{
		switch (iParam5)
		{
			case 0:
				return -1745486195;
			
			case 1:
				return 429425116;
			
			case 2:
				return 1767892582;
			
			default:
		}
	}
	else
	{
		switch (iParam5)
		{
			case 0:
				return 2114544056;
			
			case 1:
				return -1044093321;
			
			case 2:
				return -1342520604;
			
			case 3:
				return 587703123;
			
			case 4:
				return 919005580;
			}
		
		default:
	}
	return 587703123;
}

int func_131(var uParam0, int iParam1)
{
	if (func_136(uParam0, iParam1))
	{
		iVar0 = func_130(iParam1, uParam0->f_16, Local_47.f_386, Local_47.f_387, Local_47.f_388, uParam0->f_11);
		if (unk_0x468C1AC3ABF95C57(iVar0))
		{
			if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB4AE0788C1587752(func_97()))
			{
				if (func_118(uParam0))
				{
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						iVar3 = func_117(uParam0, iVar1);
						if (unk_0x468C1AC3ABF95C57(iVar3))
						{
							if (unk_0xB87F6CF6E5628C67(iVar3))
							{
								iVar2++;
							}
						}
						else
						{
							iVar2++;
						}
						iVar1++;
					}
					return iVar2 == 2;
				}
				else
				{
					return 1;
				}
			}
		}
		return 0;
	}
	return 1;
}

void func_132(var uParam0, int iParam1)
{
	if (func_136(uParam0, iParam1))
	{
		unk_0x523BCC9DC80CD82F(func_130(iParam1, uParam0->f_16, Local_47.f_386, Local_47.f_387, Local_47.f_388, uParam0->f_11));
		unk_0x3F423BF5B8125A50(func_97());
		if (func_118(uParam0))
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				iVar1 = func_117(uParam0, iVar0);
				if (iVar1 != 0)
				{
					unk_0x523BCC9DC80CD82F(iVar1);
				}
				iVar0++;
			}
		}
	}
}

int func_133(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_35(iVar1, 1, 1))
			{
				if (func_134(func_135(iVar1), uParam0->f_13, 0,75f, 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_135(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

bool func_136(var uParam0, int iParam1)
{
	if (uParam0->f_17)
	{
		return 0;
	}
	if ((Local_47.f_391 && !func_27(iParam1)) && !unk_0xEAE0D21A50E6C7F4(Local_47.f_375, 1))
	{
		return 0;
	}
	if (Local_47.f_390)
	{
		if (!uParam0->f_18)
		{
			return (Global_1316826 && uParam0->f_9 <= Local_449.f_1);
		}
	}
	else if (uParam0->f_18)
	{
		return (Global_1316826 && uParam0->f_9 <= Local_449.f_1);
	}
	return uParam0->f_9 <= Local_449.f_1;
}

int func_137()
{
	if (!func_138(Local_47.f_379))
	{
		return 2;
	}
	return 17;
}

bool func_138(int iParam0)
{
	return (func_140(iParam0) && func_139(iParam0));
}

int func_139(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 4);
	}
	return 0;
}

int func_140(int iParam0)
{
	if (iParam0 != func_20())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_393.f_1, 2);
	}
	return 0;
}

int func_141()
{
	iVar0 = 0;
	if (func_145())
	{
		iVar0 = 1;
	}
	if ((!func_143(unk_0xD803B885F5E47A62()) && !func_142(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_310, 28))
	{
		iVar0 = 1;
	}
	if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("AM_MP_ARCADE")) < 1)
	{
		iVar0 = 1;
	}
	if (unk_0xA14BB9332558B949())
	{
		iVar0 = 1;
	}
	if (Global_1316824 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	if (iParam0 != func_20() && func_35(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_35(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_144(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_144(int iParam0)
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

int func_145()
{
	func_153(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_152())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (func_150(159))
	{
		if (!func_149())
		{
			return 1;
		}
	}
	if (func_150(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_146() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_146()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	switch (func_148())
	{
		case 0:
			return func_147();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_147()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_148()
{
	return Global_30768;
}

bool func_149()
{
	return Global_2450632.f_598;
}

int func_150(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_151()
{
	return Global_2460680;
}

bool func_152()
{
	return Global_2450632.f_593;
}

void func_153(var uParam0)
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
					func_154(iVar0);
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

void func_154(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_35(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_155(iVar4, &bVar5))
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

int func_155(int iParam0, var uParam1)
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

void func_156()
{
	wait(0);
}

void func_157()
{
	if (!Local_47.f_380)
	{
		if (!unk_0xC844350D5D58C99A(Local_47.f_382))
		{
			Local_47.f_382 = unk_0xB0BE3DFBBB59A620(-113902346, 2733,13f, -387,578f, -49,33f, 0, false, false);
			unk_0x08841CDB215AE18F(Local_47.f_382, 2733,13f, -387,578f, -49,33f, 0, 0, 1);
			unk_0xC023D1C4BF532815(Local_47.f_382, -12f, 0f, 225f, 2, 1);
			unk_0xE121AE1BBF90E186(Local_47.f_382, true);
			unk_0x98868AF51859FC75(Local_47.f_382, 0);
			unk_0x1E9649458B15960F(Local_47.f_382, true);
			unk_0x71199B01895C6202(-113902346);
			if (Local_47.f_385)
			{
				unk_0x4A4806F9D471E491(Local_47.f_382, false, 0);
			}
		}
	}
	if (((Local_47.f_380 && Local_47.f_381) && Local_47.f_387 != 0) && Local_449.f_8 == 0)
	{
		if (!unk_0xC844350D5D58C99A(Local_47.f_383))
		{
			Local_47.f_383 = unk_0xB0BE3DFBBB59A620(1580642483, 2712,377f, -352,966f, -55,587f, 0, false, false);
			unk_0x08841CDB215AE18F(Local_47.f_383, 2712,377f, -352,966f, -55,587f, 0, 0, 1);
			unk_0xC023D1C4BF532815(Local_47.f_383, 0f, 0f, 180f, 2, 1);
			unk_0xE121AE1BBF90E186(Local_47.f_383, true);
			unk_0x98868AF51859FC75(Local_47.f_383, 0);
			unk_0x1E9649458B15960F(Local_47.f_383, true);
			unk_0x71199B01895C6202(1580642483);
			if (Local_47.f_385)
			{
				unk_0x4A4806F9D471E491(Local_47.f_383, false, 0);
			}
		}
	}
	if (((Local_47.f_380 && Local_47.f_381) && Local_47.f_388 != 0) && Local_449.f_9 == 0)
	{
		if (!unk_0xC844350D5D58C99A(Local_47.f_384))
		{
			Local_47.f_384 = unk_0xB0BE3DFBBB59A620(1580642483, 2714,403f, -355,905f, -55,587f, 0, false, false);
			unk_0x08841CDB215AE18F(Local_47.f_384, 2714,403f, -355,905f, -55,587f, 0, 0, 1);
			unk_0xC023D1C4BF532815(Local_47.f_384, 0f, 0f, -55f, 2, 1);
			unk_0xE121AE1BBF90E186(Local_47.f_384, true);
			unk_0x98868AF51859FC75(Local_47.f_384, 0);
			unk_0x1E9649458B15960F(Local_47.f_384, true);
			unk_0x71199B01895C6202(1580642483);
			unk_0x20641932E5104B25(Local_47.f_384, false, 0);
			if (Local_47.f_385)
			{
				unk_0x4A4806F9D471E491(Local_47.f_384, false, 0);
			}
		}
	}
}

void func_158(bool bParam0)
{
	func_162();
	if (bParam0)
	{
		func_160();
	}
	func_159();
	Global_1316829 = Local_449.f_6;
}

void func_159()
{
	iVar0 = 0;
	while (iVar0 < func_137())
	{
		func_132(&(Local_47[iVar0]), iVar0);
		iVar0++;
	}
}

void func_160()
{
	iVar0 = 0;
	while (iVar0 < func_137())
	{
		func_161(Local_449, &(Local_47[iVar0]), iVar0, Local_47.f_380, Local_47.f_381, Local_47.f_386, Local_47.f_387, Local_47.f_388);
		iVar0++;
	}
}

void func_161(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, int iParam31, bool bParam32, bool bParam33, int iParam34, int iParam35, int iParam36)
{
	switch (Param0.f_2)
	{
		case 0:
			switch (iParam31)
			{
				case 0:
					if (!bParam32)
					{
						uParam30->f_13 = { 2732,426f, -387,6855f, -49,02532f };
						uParam30->f_12 = 17,28f;
						uParam30->f_16 = 0;
						uParam30->f_8 = 7;
						uParam30->f_9 = 0;
					}
					else if (!bParam33)
					{
						uParam30->f_13 = { 2724,772f, -383,15f, -48,9625f };
						uParam30->f_12 = -90f;
						uParam30->f_16 = 0;
						uParam30->f_8 = 8;
						uParam30->f_9 = 0;
					}
					else
					{
						switch (Param0.f_6)
						{
							case 0:
								uParam30->f_13 = { 2737,947f, -381,5125f, -48,56255f };
								uParam30->f_12 = 1,25f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 11;
								uParam30->f_9 = 0;
								break;
							
							case 1:
								uParam30->f_13 = { 2738,195f, -380,763f, -49,43f };
								uParam30->f_12 = 95f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 12;
								uParam30->f_9 = 0;
								break;
							
							case 2:
								uParam30->f_13 = { 2723,006f, -389,275f, -49,0089f };
								uParam30->f_12 = -74,5f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 13;
								uParam30->f_9 = 0;
								break;
							
							case 3:
								uParam30->f_13 = { 2735,208f, -380,53f, -49,345f };
								uParam30->f_12 = 38,16f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 14;
								uParam30->f_9 = 0;
								break;
							
							case 4:
								uParam30->f_13 = { 2722,576f, -382,3125f, -49,005f };
								uParam30->f_12 = -43f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 15;
								uParam30->f_9 = 0;
								break;
							
							case 5:
								uParam30->f_13 = { 2728,902f, -389,2875f, -49,99f };
								uParam30->f_12 = 88,75f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 16;
								uParam30->f_9 = 0;
								break;
							}
					}
					break;
				
				case 1:
					if (!bParam32)
					{
						uParam30->f_13 = { 2723,778f, -384,875f, -49,02532f };
						uParam30->f_12 = -57f;
						uParam30->f_16 = 1;
						uParam30->f_8 = 9;
						uParam30->f_9 = 0;
					}
					else if (!bParam33)
					{
						uParam30->f_13 = { 2731,507f, -381,1375f, -49,02532f };
						uParam30->f_12 = 141,75f;
						uParam30->f_16 = 1;
						uParam30->f_8 = 10;
						uParam30->f_9 = 0;
					}
					else
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 2:
					if ((bParam32 && bParam33) && iParam34 != 0)
					{
						switch (Param0.f_7)
						{
							case 0:
								uParam30->f_13 = { 2710,603f, -354,328f, -56,162f };
								uParam30->f_12 = 104,5f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 18;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 1:
								uParam30->f_13 = { 2710,709f, -355,79f, -56,162f };
								uParam30->f_12 = -128f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 19;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 2:
								uParam30->f_13 = { 2709,916f, -357,1025f, -55,16993f };
								uParam30->f_12 = -90f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 17;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 3:
								uParam30->f_13 = { 2694,033f, -358,24f, -55,18243f };
								uParam30->f_12 = -68,5f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 20;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
						}
					}
					else
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 3:
					if ((bParam32 && bParam33) && iParam35 != 0)
					{
						switch (Param0.f_8)
						{
							case 0:
								uParam30->f_13 = { 2712,357f, -352,9247f, -55,65743f };
								uParam30->f_12 = 0f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 21;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 1:
								uParam30->f_13 = { 2711,475f, -352,9872f, -55,19493f };
								uParam30->f_12 = -19,25f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 15;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 2:
								uParam30->f_13 = { 2713,429f, -352,94f, -55,19493f };
								uParam30->f_12 = 180f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 22;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 3:
								uParam30->f_13 = { 2716,49f, -359,0622f, -54,59493f };
								uParam30->f_12 = 180f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 23;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
						}
					}
					else
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 4:
					if ((bParam32 && bParam33) && iParam36 != 0)
					{
						switch (Param0.f_9)
						{
							case 0:
								uParam30->f_13 = { 2712,863f, -356,7349f, -55,82305f };
								uParam30->f_12 = -150,5f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 24;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 1:
								uParam30->f_13 = { 2714,122f, -355,6775f, -56,15743f };
								uParam30->f_12 = -99,25f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 25;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
							
							case 2:
								uParam30->f_13 = { 2715,202f, -357,2525f, -55,20743f };
								uParam30->f_12 = 90f;
								uParam30->f_16 = 0;
								uParam30->f_8 = 26;
								uParam30->f_9 = 0;
								uParam30->f_18 = 1;
								break;
						}
					}
					else
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 5:
					uParam30->f_13 = { 2725,394f, -382,9775f, -49,9124f };
					uParam30->f_12 = 34,9f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 4608;
					uParam30->f_7 = 13314;
					uParam30->f_8 = 2;
					uParam30->f_9 = 1;
					uParam30->f_11 = 0;
					break;
				
				case 6:
					uParam30->f_13 = { 2724,975f, -382,305f, -49,9999f };
					uParam30->f_12 = 217,665f;
					uParam30->f_16 = 1;
					uParam30->f_6 = 65;
					uParam30->f_7 = 4608;
					uParam30->f_8 = 5;
					uParam30->f_9 = 1;
					uParam30->f_11 = 1;
					break;
				
				case 7:
					uParam30->f_13 = { 2729,888f, -388,92f, -49,3124f };
					uParam30->f_12 = 300f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 37377;
					uParam30->f_7 = 33587265;
					uParam30->f_8 = 14;
					uParam30->f_9 = 2;
					uParam30->f_11 = 1;
					break;
				
				case 8:
					uParam30->f_13 = { 2725,378f, -386,4875f, -49,2124f };
					uParam30->f_12 = 90f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 16781313;
					uParam30->f_7 = 268444160;
					uParam30->f_8 = 27;
					uParam30->f_9 = 2;
					uParam30->f_11 = 2;
					break;
				
				case 9:
					uParam30->f_13 = { 2734,232f, -387,2575f, -49,3799f };
					uParam30->f_12 = 134,565f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 4160;
					uParam30->f_7 = 16781826;
					uParam30->f_8 = 15;
					uParam30->f_9 = 3;
					uParam30->f_11 = 3;
					if (!Global_262145.f_8930)
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 10:
					uParam30->f_13 = { 2733,669f, -387,7975f, -49,3624f };
					uParam30->f_12 = -47,575f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 134218241;
					uParam30->f_7 = 33559553;
					uParam30->f_8 = 15;
					uParam30->f_9 = 3;
					uParam30->f_11 = 2;
					if (!Global_262145.f_8930)
					{
						uParam30->f_17 = 1;
					}
					break;
				
				case 11:
					uParam30->f_13 = { 2725,313f, -387,165f, -49,9525f };
					uParam30->f_12 = 38,64f;
					uParam30->f_16 = 1;
					uParam30->f_6 = 4673;
					uParam30->f_7 = 9281;
					uParam30->f_8 = 3;
					uParam30->f_9 = 4;
					uParam30->f_11 = 0;
					break;
				
				case 12:
					uParam30->f_13 = { 2728,143f, -387,5425f, -49,1974f };
					uParam30->f_12 = 180f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 1;
					uParam30->f_7 = 8704;
					uParam30->f_8 = 27;
					uParam30->f_9 = 4;
					uParam30->f_11 = 0;
					break;
				
				case 13:
					uParam30->f_13 = { 2736,281f, -374,2325f, -49,9999f };
					uParam30->f_12 = 6,48f;
					uParam30->f_16 = 1;
					uParam30->f_6 = 16777216;
					uParam30->f_7 = 4673;
					uParam30->f_8 = 6;
					uParam30->f_9 = 5;
					uParam30->f_11 = 2;
					break;
				
				case 14:
					uParam30->f_13 = { 2736,237f, -373,4775f, -50,0024f };
					uParam30->f_12 = 190,165f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 16777857;
					uParam30->f_7 = 8194;
					uParam30->f_8 = 0;
					uParam30->f_9 = 5;
					uParam30->f_11 = 3;
					break;
				
				case 15:
					uParam30->f_13 = { 2736,418f, -379,0775f, -49,3649f };
					uParam30->f_12 = 100,64f;
					uParam30->f_16 = 0;
					uParam30->f_6 = 65;
					uParam30->f_7 = 6721;
					uParam30->f_8 = 1;
					uParam30->f_9 = 6;
					uParam30->f_11 = 4;
					break;
				
				case 16:
					uParam30->f_13 = { 2735,684f, -379,1575f, -49,3649f };
					uParam30->f_12 = 280,63f;
					uParam30->f_16 = 1;
					uParam30->f_6 = 4097;
					uParam30->f_7 = 9281;
					uParam30->f_8 = 4;
					uParam30->f_9 = 6;
					uParam30->f_11 = 1;
					break;
			}
			break;
	}
}

void func_162()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_109(&(Local_47[iVar0]));
		iVar0++;
	}
}

void func_163()
{
	while (Local_449.f_12 == 0)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_449.f_2 = 0;
			Local_449.f_12 = 1;
			Local_449.f_6 = func_174();
			Local_449.f_7 = func_170();
			Local_449.f_8 = func_169();
			Local_449.f_9 = func_168();
			Local_449.f_10 = func_167();
			Local_449.f_11 = func_165(Local_47.f_379);
			Local_449.f_1 = func_164();
			Local_449.f_13 = Global_1316831;
		}
		else
		{
			wait(0);
		}
	}
}

int func_164()
{
	if (Local_449.f_10 >= 13 && Local_449.f_11 >= 20)
	{
		return 6;
	}
	else if (Local_449.f_10 >= 11 && Local_449.f_11 >= 17)
	{
		return 5;
	}
	else if (Local_449.f_10 >= 9 && Local_449.f_11 >= 14)
	{
		return 4;
	}
	else if (Local_449.f_10 >= 7 && Local_449.f_11 >= 9)
	{
		return 3;
	}
	else if (Local_449.f_10 >= 5 && Local_449.f_11 >= 5)
	{
		return 2;
	}
	else if (Local_449.f_10 >= 2 && Local_449.f_11 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (41 - 1))
	{
		iVar2 = func_48(iParam0, iVar1);
		if (iVar2 != 0 && !func_166(iVar2))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 19:
		case 20:
			return 1;
			break;
	}
	return 0;
}

int func_167()
{
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (func_50(Local_47.f_379, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_168()
{
	iVar0 = 2;
	if (Local_47.f_388 == 1)
	{
		iVar0 = 3;
	}
	iVar1 = unk_0x09AC81E49EA267F7(0, iVar0);
	return iVar1;
}

int func_169()
{
	iVar0 = 4;
	if (Local_449.f_6 == 7)
	{
		iVar0 = 3;
	}
	iVar1 = unk_0x09AC81E49EA267F7(0, iVar0);
	return iVar1;
}

int func_170()
{
	iVar0[0] = 1;
	iVar0[1] = 1;
	if (Local_449.f_6 != 9)
	{
		iVar0[2] = 1;
	}
	if ((Local_47.f_389 && Local_47.f_386 != 0) && func_171(1, Local_47.f_386, Local_47.f_379) != 0)
	{
		iVar0[3] = 1;
	}
	iVar5 = unk_0x09AC81E49EA267F7(0, 4);
	while (iVar0[iVar5] == 0)
	{
		iVar5 = unk_0x09AC81E49EA267F7(0, 4);
	}
	return iVar5;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == func_20())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (func_173(iParam2))
					{
						case 0:
							return 931280609;
						
						case 1:
							return 1118611807;
						
						case 2:
							return 409049982;
						
						case 3:
							return 1104234922;
						
						default:
					}
					break;
				
				case 2:
					switch (func_173(iParam2))
					{
						case 0:
							return 2031587082;
						
						case 1:
							return 1693751655;
						
						case 2:
							return 987469656;
						
						case 3:
							return -208911803;
						
						default:
					}
					break;
				
				case 3:
					switch (func_173(iParam2))
					{
						case 0:
							return 872704284;
						
						case 1:
							return 722226637;
						
						case 2:
							return -1267543371;
						
						case 3:
							return -834353991;
						
						default:
					}
					break;
				
				case 4:
					switch (func_173(iParam2))
					{
						case 0:
							return -1523428744;
						
						case 1:
							return 301304410;
						
						case 2:
							return 822018448;
						
						case 3:
							return 640818791;
						
						default:
					}
					break;
				
				case 5:
					switch (func_173(iParam2))
					{
						case 0:
							return 1284356689;
						
						case 1:
							return 740289177;
						
						case 2:
							return 408825843;
						
						case 3:
							return -1756021720;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			if (Global_1700796[iParam2].f_62 != 0)
			{
				switch (Global_1700796[iParam2].f_62)
				{
					case 1:
						return -907477130;
					
					case 2:
						return -1987130134;
					
					case 3:
						return 1747439474;
					
					case 4:
						return 1747439474;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return 1645267888;
					
					case 2:
						return 970598228;
					
					case 4:
						return 1026149675;
					
					case 5:
						return -121446169;
					
					case 3:
						if (func_172(iParam2))
						{
							return -1372848492;
						}
						else
						{
							return -1903012613;
						}
						break;
					}
			}
			break;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (iParam0 != func_20())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_393.f_2, 1);
	}
	return 0;
}

int func_173(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_13;
	}
	return 0;
}

int func_174()
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 6);
	return iVar0;
}

void func_175(vector3 vParam0)
{
	Local_47.f_379 = vParam0.x;
	Local_47.f_385 = vParam0.y;
	Local_47.f_380 = func_140(vParam0.x);
	Local_47.f_381 = func_139(vParam0.x);
	Local_47.f_386 = func_179(vParam0.x, 0);
	Local_47.f_387 = func_178(vParam0.x, 0);
	Local_47.f_388 = func_177(vParam0.x, 0);
	Local_47.f_389 = func_176(vParam0.x);
	Local_47.f_390 = vParam0.z;
	Local_47.f_391 = func_18(vParam0.x);
}

int func_176(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 3);
	}
	return 0;
}

int func_177(int iParam0, bool bParam1)
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

int func_178(int iParam0, bool bParam1)
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

int func_179(int iParam0, bool bParam1)
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

void func_180()
{
	if (unk_0x7489207370F94F64())
	{
		unk_0xE96F19797E59AB06();
	}
	Global_1316821 = 0;
	Global_1316825 = 0;
	Global_1316829 = -1;
	func_162();
	func_182();
	func_181();
}

void func_181()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_182()
{
	if (unk_0xC844350D5D58C99A(Local_47.f_382))
	{
		unk_0xF690C84DADBB3551(&(Local_47.f_382));
	}
	if (unk_0xC844350D5D58C99A(Local_47.f_383))
	{
		unk_0xF690C84DADBB3551(&(Local_47.f_383));
	}
	if (unk_0xC844350D5D58C99A(Local_47.f_384))
	{
		unk_0xF690C84DADBB3551(&(Local_47.f_384));
	}
}

void func_183()
{
	while (!unk_0x5F4FB6573A5696A1(32, 0, Global_1316839))
	{
		wait(0);
	}
	Global_1316839++;
	func_185(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_449, 30);
	if (!func_184())
	{
		func_180();
	}
	unk_0x256D93AFAE851A7A(0);
}

int func_184()
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
		if (func_152())
		{
			return 0;
		}
		if (func_150(157))
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

int func_185(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_181();
			}
			else
			{
				return 0;
			}
		}
		if (!func_186())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_152())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_150(157))
				{
					if (!bParam2)
					{
						func_181();
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
					func_181();
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
				func_181();
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
			func_181();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_186()
{
	return Global_1312854;
}

void func_187()
{
	Global_1316824 = 1;
	Global_1316821 = 0;
	Global_1316825 = 0;
	Global_1316829 = -1;
}

