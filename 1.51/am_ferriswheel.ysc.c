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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	iLocal_287 = -1003748966;
	iLocal_288 = -1975182244;
	sLocal_289 = "MISSFINALE_C2IG_5";
	fLocal_308 = 2f;
	vLocal_309 = { -1663,97f, -1126,7f, 30,7f };
	vLocal_312 = { 0,5f, 0,5f, -1,94f };
	fLocal_318 = 13f;
	iLocal_319 = -1;
	iLocal_320 = -1;
	iLocal_321 = -1;
	iLocal_322 = -1;
	bLocal_323 = true;
	sLocal_399 = "anim@mp_ferris_wheel";
	iLocal_429 = 1;
	bVar0 = unk_0x8CD06866876216F2();
	if (bVar0)
	{
		if (!func_200(ScriptParam_0))
		{
			func_191();
		}
		func_190();
		unk_0x5D96D8530B3D0904(&Global_76870, 6);
	}
	while (true)
	{
		func_189();
		if (func_180())
		{
			func_191();
		}
		if (((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1645,555f, -1123,872f, 17,3436f, 300f, 300f, 300f, 0, 1, 0) || func_179()) || unk_0xA14BB9332558B949()) || (func_174() && !func_172()))
		{
			Local_1406[unk_0x57270EE11514DC67()] = 3;
		}
		func_160();
		if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 3))
		{
			if (!Global_98796.f_1417)
			{
				unk_0x0674E58A79778E99(&iLocal_418, 3);
			}
		}
		switch (func_159(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_158() > 0)
				{
					Local_1406[unk_0x57270EE11514DC67()] = 1;
				}
				break;
			
			case 1:
				if (func_158() > 1)
				{
					if (func_153())
					{
						Local_1406[unk_0x57270EE11514DC67()] = 2;
					}
				}
				break;
			
			case 2:
				if (func_158() == 2)
				{
					func_31();
				}
				break;
			
			case 3:
				if (!func_30(&uLocal_1140))
				{
					if (!unk_0xEB880D98B5988D0C())
					{
						func_22(64, 0, 0, 1, 0);
					}
				}
				if (((func_20(&uLocal_1140, 3000, 0) || func_19()) || func_18()) || func_14(unk_0xD803B885F5E47A62()))
				{
					func_191();
				}
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_158())
			{
				case 0:
					if (func_12())
					{
						Local_1142.f_1 = 1;
					}
					break;
				
				case 1:
					if (func_11())
					{
						Local_1142.f_1 = 2;
					}
					break;
				
				case 2:
					func_6();
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (iLocal_397 == 0)
	{
	}
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_397)))
	{
		uVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_397));
		switch (Local_1142)
		{
			case 0:
				if (unk_0xEAE0D21A50E6C7F4(Local_1406[iLocal_397].f_2, 4) && !unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[iLocal_397], 1))
				{
					unk_0x0674E58A79778E99(&(Local_1142.f_2), 0);
					unk_0x0674E58A79778E99(&(Local_1142.f_3[iLocal_397]), 0);
					unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 2);
					iLocal_421 = 30000;
					Local_1142 = 1;
					func_5(&uLocal_419);
					unk_0x5D96D8530B3D0904(&(Local_1142.f_3[iLocal_397]), 1);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_1406[iLocal_397].f_2, 3) && !unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[iLocal_397], 0))
				{
					iVar0 = func_4(iLocal_397);
					if (iVar0 == -1)
					{
					}
					else
					{
						Local_1142.f_197[iLocal_397].f_1 = uVar1;
						Local_1142.f_197[iLocal_397] = iVar0;
						Local_1142.f_262 = func_2();
						unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 0);
						unk_0x5D96D8530B3D0904(&(Local_1142.f_3[iLocal_397]), 0);
					}
				}
				break;
			
			case 1:
				if (unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[iLocal_397], 1))
				{
					unk_0x0674E58A79778E99(&(Local_1142.f_3[iLocal_397]), 1);
				}
				break;
		}
	}
	else if ((Local_1142.f_3[iLocal_397] != 0 || Local_1142.f_197[iLocal_397] != -1) || Local_1142.f_197[iLocal_397].f_1 != 0)
	{
		Local_1142.f_3[iLocal_397] = 0;
		Local_1142.f_197[iLocal_397] = -1;
		Local_1142.f_197[iLocal_397].f_1 = 0;
		Local_1142.f_262 = func_2();
	}
	iLocal_397++;
	if (iLocal_397 == unk_0x54EABC0DD106045B())
	{
		iLocal_397 = 0;
	}
}

int func_2()
{
	iVar2 = func_3();
	iVar0 = iVar2;
	while (iVar0 != iVar2 || !bVar3)
	{
		if (!bVar3)
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < unk_0x54EABC0DD106045B())
		{
			if (Local_1142.f_197[iVar1] == iVar0)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
		if (iVar0 == 16)
		{
			iVar0 = 0;
		}
	}
	return -1;
}

int func_3()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (Local_1142.f_36[iVar0].f_6 >= Global_2544351)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (Local_1142.f_36[0].f_6 >= Global_2544351)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_4(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_1406[iParam0].f_2, 0))
		{
			return Local_1406[iParam0].f_3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (iVar0 == 0)
				{
					iVar0 = 1;
				}
				if (!Local_1142.f_36[iVar0].f_3 >= 2)
				{
					if (Local_1142.f_36[iVar0].f_6 >= Global_2544351)
					{
						if (!Local_1142.f_36[iVar0].f_3 > 0 || bVar2)
						{
							return iVar0;
						}
					}
				}
				iVar0++;
			}
			if (!Local_1142.f_36[0].f_3 >= 2)
			{
				if (Local_1142.f_36[0].f_6 >= Global_2544351)
				{
					if (!Local_1142.f_36[0].f_3 > 0 || bVar2)
					{
						return 0;
					}
				}
				else
				{
					return 1;
				}
			}
			if (!bVar2)
			{
				bVar2 = true;
			}
			else
			{
				return -1;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6()
{
	switch (Local_1142)
	{
		case 0:
			break;
		
		case 1:
			if (func_20(&uLocal_419, iLocal_421, 0))
			{
				if (func_9())
				{
					if (Local_1142.f_262 != -1)
					{
						iVar1 = Local_1142.f_197[Local_1142.f_262];
						iVar0 = 0;
						while (iVar0 < 32)
						{
							if (Local_1142.f_197[iVar0] == iVar1)
							{
								unk_0x0674E58A79778E99(&(Local_1142.f_3[iVar0]), 0);
								unk_0x0674E58A79778E99(&(Local_1142.f_3[iVar0]), 1);
								Local_1142.f_197[iVar0] = -1;
								Local_1142.f_197[iVar0].f_1 = 0;
							}
							iVar0++;
						}
						Local_1142.f_197[Local_1142.f_262] = -1;
						Local_1142.f_197[Local_1142.f_262].f_1 = 0;
					}
					if (func_8())
					{
						Local_1142.f_262 = func_2();
					}
					else
					{
						Local_1142.f_262 = -1;
					}
					if (Local_1142.f_262 != -1)
					{
						unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 0);
					}
					unk_0x0674E58A79778E99(&(Local_1142.f_2), 3);
					unk_0x0674E58A79778E99(&(Local_1142.f_2), 4);
					Local_1142 = 0;
				}
				else
				{
					iLocal_421 = 1000;
					func_5(&uLocal_419);
				}
			}
			else
			{
				if ((30000 - func_7(&uLocal_419, 0, 0)) < 4000)
				{
					unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 4);
				}
				if ((30000 - func_7(&uLocal_419, 0, 0)) < 3000)
				{
					unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 3);
				}
				if (((Local_1142.f_262 != -1 && !unk_0xEAE0D21A50E6C7F4(Local_1406[Local_1142.f_262].f_2, 6)) && unk_0x5A91F08DF773C39D(unk_0x9539D44F3E4492F6(Local_1142.f_197[Local_1142.f_262].f_1), -1661,95f, -1127,011f, 12,6973f, 1f, 1f, 2f, 0, 1, 0)) && unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 1);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 1))
				{
					unk_0x0674E58A79778E99(&(Local_1142.f_2), 1);
				}
			}
			break;
	}
}

int func_7(var uParam0, bool bParam1, bool bParam2)
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

int func_8()
{
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (Local_1142.f_197[iVar0] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_9()
{
	iVar0 = func_10();
	while (iVar0 >= 0)
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_1406[iVar0].f_2, 9) || unk_0xEAE0D21A50E6C7F4(Local_1406[iVar0].f_2, 10))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_10()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_11()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Local_1142.f_36[iVar0].f_6 = (((360f / 16f) * IntToFloat(iVar0)) - 21,5f);
		iVar0++;
	}
	Local_1142.f_36[0].f_6 = (Local_1142.f_36[0].f_6 + 360f);
	return 1;
}

int func_12()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (func_13(iVar1, 0, 1))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x9539D44F3E4492F6(iVar1), -1662,01f, -1126,869f, 12,6973f, 500f, 500f, 500f, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
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

int func_14(int iParam0)
{
	if (func_15(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_16(iParam0))
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

bool func_16(int iParam0)
{
	return func_17(iParam0);
}

bool func_17(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_18()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

var func_19()
{
	return Global_1312877;
}

int func_20(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
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

void func_21(var uParam0, bool bParam1, bool bParam2)
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

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			Global_2439138.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_111638.f_7256.f_227[iParam0] = iParam1;
		}
		Global_38398[iParam0] = iParam2;
		Global_38597[iParam0] = 1;
		func_25(iParam0, bParam3, iParam4, 0);
		func_23(iParam0, iParam1);
	}
}

void func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_24(0, 0);
			}
			else
			{
				func_24(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_110276, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_110276, iParam0);
	}
	Global_110275 = 1;
}

bool func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	Global_1652615 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_29(&Var3, iParam0);
	if (func_26())
	{
		iVar1 = Global_111638.f_7256.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2439138.f_75.f_227[iParam0];
	}
	iVar2 = Global_38796[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_1652615 = 1;
	}
	else
	{
		bVar99 = true;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_38398[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
					Global_1652615 = 1;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar99 = false;
						Global_1652615 = 1;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 5))
		{
			bVar99 = false;
			Global_1652615 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_39992[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1]));
								Global_1652615 = 1;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x2404539258C5376B(&(Var3.f_34));
								Global_1652615 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[1])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[1]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[2])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[2]));
							}
						}
					}
					Global_39793[iParam0] = 1;
					Global_39992[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_50)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_50)))
							{
								unk_0xFE3926923F5430AD(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[1]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[2]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0])))
								{
									unk_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[0]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[0]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[2]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1])))
								{
									unk_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[1]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[0]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1])))
								{
									unk_0xFE3926923F5430AD(iVar100, &(Var3.f_8[1]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2])))
								{
									unk_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[2]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar100);
						}
					}
					Global_39992[iParam0] = 1;
					Global_39793[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1) < 250f)
					{
						uVar98 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0]));
						if (unk_0xB39672D8C1F6BB48(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0xCADC8175C61F28E5(uVar98, 3);
								Global_39992[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xD92EF3526CDA283F(uVar98) != 6 && unk_0xD92EF3526CDA283F(uVar98) != 7) && unk_0xD92EF3526CDA283F(uVar98) != 8)
								{
									unk_0xCADC8175C61F28E5(uVar98, 10);
									Global_39992[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x0674E58A79778E99(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x5D96D8530B3D0904(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_38597[iParam0] = 0;
				Global_38796[iParam0] = iVar1;
				if (!func_26())
				{
					if (!Global_39393[iParam0])
					{
						Global_39393[iParam0] = 1;
						Global_39592++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_26()
{
	if ((func_28() == -1 || func_28() == 999) && !func_27() == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_30769;
}

int func_28()
{
	return Global_30768;
}

int func_29(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -842986252;
			uParam0->f_4[1] = -1404869155;
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = -519800699;
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = -1701919363;
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farm", 32);
			StringCopy(&(uParam0->f_8[1]), "farm", 32);
			StringCopy(&(uParam0->f_8[2]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "locked", 32);
			StringCopy(&(uParam0->f_8[1]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

bool func_30(var uParam0)
{
	return uParam0->f_1;
}

void func_31()
{
	switch (Local_1406[unk_0x57270EE11514DC67()].f_1)
	{
		case 0:
			if (Local_1142 == 1)
			{
				unk_0xA37A90C62806D848(1);
				unk_0x0674E58A79778E99(&iLocal_418, 1);
				unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 4);
				iLocal_398 = 0;
				Local_1406[unk_0x57270EE11514DC67()].f_1 = 1;
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 0))
				{
					if (Local_1142.f_262 != -1)
					{
						if (Global_2544351 != Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_6)
						{
							func_149();
						}
					}
				}
				else
				{
					func_149();
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[unk_0x57270EE11514DC67()], 0))
				{
					Local_1406[unk_0x57270EE11514DC67()].f_3 = Local_1142.f_197[unk_0x57270EE11514DC67()];
					if (Local_1406[unk_0x57270EE11514DC67()].f_3 != -1)
					{
						if (Global_2544351 != Local_1142.f_36[Local_1406[unk_0x57270EE11514DC67()].f_3].f_6)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 0))
							{
								unk_0xA37A90C62806D848(1);
								unk_0x0674E58A79778E99(&iLocal_418, 0);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
								{
									func_148("AMFW_WAIT_OFF", -1);
								}
								else
								{
									func_148("AMFW_WAIT", -1);
								}
								unk_0x5D96D8530B3D0904(&iLocal_418, 1);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 4))
						{
							unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 4);
							unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 3);
							iLocal_429 = 1;
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 3);
						iLocal_429 = 1;
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 8))
				{
					if (((((((!func_147(0) && !func_143(unk_0xD803B885F5E47A62())) && !func_142(unk_0xD803B885F5E47A62(), 21)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && unk_0x83C1D4B63BBD91F6(-1661,95f, -1127,011f, 12,6973f, 1f, 0, 6) == 0) && !func_141(unk_0x16F2683693E537C9())) && !func_140(unk_0xD803B885F5E47A62()))
					{
						if (!func_137())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
							{
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1661,95f, -1127,011f, 12,6973f, 1f, 1f, 2f, 0, 1, 0))
								{
									func_136("AMFW_ENTER", Global_262145.f_7789, -1);
									unk_0x5D96D8530B3D0904(&iLocal_418, 0);
									if (unk_0xBFC0798A6E3417F9(2, 51))
									{
										func_117();
										unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 3);
									}
								}
								else if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 0))
								{
									unk_0xA37A90C62806D848(1);
									unk_0x0674E58A79778E99(&iLocal_418, 0);
								}
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
						}
					}
				}
			}
			func_91();
			break;
		
		case 1:
			if (Local_1142 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 5) || unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 7))
				{
					func_83();
					func_81(25);
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[unk_0x57270EE11514DC67()], 0))
				{
					unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 8);
				}
				unk_0xA37A90C62806D848(1);
				unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 7);
				unk_0x0674E58A79778E99(&iLocal_418, 2);
				unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 11);
				unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 6);
				Local_1406[unk_0x57270EE11514DC67()].f_1 = 0;
				if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
				{
					func_91();
				}
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
				{
					if ((Local_1142.f_262 != -1 && Local_1406[unk_0x57270EE11514DC67()].f_3 != -1) && Local_1406[unk_0x57270EE11514DC67()].f_3 == Local_1142.f_197[Local_1142.f_262])
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 7))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 4))
							{
								func_148("AMFW_GET_OUT", -1);
							}
							func_80(&uLocal_395, 0);
							func_80(&uLocal_324, 0);
							func_79(&Local_325, 0, 1);
							unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 7);
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 3))
						{
							if (unk_0xBFC0798A6E3417F9(2, 23))
							{
								func_77(func_78(1));
							}
						}
					}
					else
					{
						func_91();
					}
				}
				else if (((((((!func_147(0) && !func_143(unk_0xD803B885F5E47A62())) && !func_142(unk_0xD803B885F5E47A62(), 21)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && unk_0x83C1D4B63BBD91F6(-1661,95f, -1127,011f, 12,6973f, 1f, 0, 6) == 0) && !func_76()) && !Global_1312418.f_6)
				{
					if (!func_137())
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 1))
						{
							if (Local_1142.f_197[Local_1142.f_262].f_1 == unk_0xD803B885F5E47A62())
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 3))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 11))
									{
										func_77(func_78(1));
										unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 11);
									}
								}
							}
						}
						else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1661,95f, -1127,011f, 12,6973f, 1f, 1f, 2f, 0, 1, 0))
						{
							if ((!unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 3) && !unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 9)) && Local_1142.f_262 != -1)
							{
								if (!Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_3 >= 2)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 8))
									{
										func_148("AMFW_GET_IN", -1);
									}
									else
									{
										func_136("AMFW_GET_IN_P", Global_262145.f_7789, -1);
									}
									if (unk_0xBFC0798A6E3417F9(0, 23))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 8))
										{
											func_117();
										}
										func_77(func_78(1));
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 2))
								{
									func_148("AMFW_CAR_FULL", -1);
									unk_0x5D96D8530B3D0904(&iLocal_418, 2);
								}
							}
						}
					}
					else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
				}
				if (Local_1142.f_262 != -1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 9))
					{
						func_67();
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 10))
					{
						func_39();
					}
				}
			}
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
	{
		func_33(0);
	}
	if (!unk_0xEB880D98B5988D0C())
	{
		unk_0x81CF20E10AAD5FD5("ferris_finale_Anim");
	}
	func_32();
}

void func_32()
{
	if (unk_0x558ADED8B93EA0F6(-1666,711f, -1127,518f, 12,6973f, 3f) && (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1666,711f, -1127,518f, 12,6973f, 0,5f, 0,5f, 1f, 0, 1, 0) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1666,383f, -1126,286f, 12,6973f, 0,5f, 0,5f, 1f, 0, 1, 0)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 5))
		{
			if (((unk_0x03400AB61DCD2AD4(unk_0x16F2683693E537C9()) || unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9())) || unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9())) || unk_0xAA355D93D9E61D2A(unk_0x16F2683693E537C9()))
			{
				func_5(&uLocal_422);
				unk_0x5D96D8530B3D0904(&iLocal_418, 5);
			}
		}
		else if (func_20(&uLocal_422, 2000, 0))
		{
			if (((unk_0x03400AB61DCD2AD4(unk_0x16F2683693E537C9()) || unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9())) || unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9())) || unk_0xAA355D93D9E61D2A(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, (vVar0.z + 2f), 1, 0, 0, 1);
				unk_0x0674E58A79778E99(&iLocal_418, 5);
			}
		}
	}
}

void func_33(int iParam0)
{
	if (func_38())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_147(0))
		{
			func_34(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_34(int iParam0)
{
	if (func_38())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_37())
		{
			func_36(1, 1);
		}
		else
		{
			func_36(0, 0);
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
	if (!func_35())
	{
		Global_19486.f_1 = 3;
	}
}

int func_35()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_36(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_147(0))
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

bool func_37()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_38()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_39()
{
	StringCopy(&cLocal_412, "exit_player_", 24);
	if (Local_1406[unk_0x57270EE11514DC67()].f_4 == 0)
	{
		StringConCat(&cLocal_412, "one", 24);
	}
	else
	{
		StringConCat(&cLocal_412, "two", 24);
	}
	uLocal_427 = unk_0xF66E5A439A080021(vLocal_315, 0f, 0f, 0f, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uLocal_427, sLocal_399, &cLocal_412, 8f, -8f, 131072, 0, 1148846080, 0);
	unk_0x914E6894744915F8(uLocal_427);
	unk_0xA37A90C62806D848(1);
	func_54(unk_0xD803B885F5E47A62(), 1, 0, 0);
	func_45(0);
	if (func_44(unk_0x16F2683693E537C9()))
	{
		if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
		{
			unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, 1);
		}
	}
	func_43(func_78(0));
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	func_41();
	unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 6);
	unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 7);
	unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 0);
	unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 5);
	unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 10);
	Global_1590535[unk_0xD803B885F5E47A62()].f_748 = 0;
	func_40(func_78(1), Local_1406[unk_0x57270EE11514DC67()].f_4, 0);
	Local_1406[unk_0x57270EE11514DC67()].f_4 = -1;
	unk_0x14CC404CCC1FD25C(0);
}

void func_40(int iParam0, var uParam1, int iParam2)
{
	Var0 = 1757961404;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iParam0);
	}
}

void func_41()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 8))
	{
		func_42(&iLocal_319);
		func_42(&iLocal_321);
		func_42(&iLocal_322);
		func_42(&iLocal_320);
		unk_0x42740B44BA8D7B43("SCRIPT\FERRIS_WHALE_01");
		unk_0x42740B44BA8D7B43("SCRIPT\FERRIS_WHALE_02");
		unk_0x0674E58A79778E99(&iLocal_418, 8);
	}
	unk_0x0674E58A79778E99(&iLocal_418, 7);
}

void func_42(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

void func_43(int iParam0)
{
	Var0 = -1206974469;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

bool func_44(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 6))
		{
			func_52(0, 0);
			unk_0x5D96D8530B3D0904(&iLocal_418, 6);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 6))
	{
		func_46();
		unk_0x0674E58A79778E99(&iLocal_418, 6);
	}
}

void func_46()
{
	if (Global_1312418.f_1 == 1)
	{
		func_47(7, 0, 1);
		Global_1312418.f_1 = 0;
		Global_1628237[unk_0xD803B885F5E47A62()].f_9 = 0;
	}
}

void func_47(int iParam0, int iParam1, bool bParam2)
{
	if (func_51())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_50(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_50(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[unk_0xD803B885F5E47A62()].f_8 = 0;
				func_49(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[unk_0xD803B885F5E47A62()].f_8 = 0;
			func_49(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_48()) && !func_14(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

bool func_48()
{
	return Global_2450632.f_740;
}

void func_49(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_51())
		{
			if (func_13(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, 0);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, 0);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, 1);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0,5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(0);
		}
	}
}

void func_50(var uParam0, bool bParam1, bool bParam2)
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

bool func_51()
{
	return Global_1312418;
}

void func_52(int iParam0, int iParam1)
{
	if (!func_15(unk_0xD803B885F5E47A62(), 1, 0) || iParam1)
	{
		if (!func_51())
		{
			Global_1312418.f_1 = 1;
			Global_1628237[unk_0xD803B885F5E47A62()].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_53(7, 0, -1);
		}
	}
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	if (!func_51() || iParam1)
	{
		Global_1312418 = 1;
		func_49(1);
		if (((!unk_0xA14BB9332558B949() && !func_48()) && !func_14(unk_0xD803B885F5E47A62())) && !func_143(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 1;
		}
		Global_1628237[unk_0xD803B885F5E47A62()].f_8 = 1;
		unk_0x6EC9FBED3024FDF5(1, iParam0, iParam2, -1);
	}
}

void func_54(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0);
		}
	}
	if (func_66())
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
		if (!func_172())
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
				else if (bVar14 || (!func_63(unk_0xD803B885F5E47A62(), 0) && !func_62()))
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
					func_59(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_58(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					unk_0x120A395B0ECB8EA5(iVar27, 1);
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
					func_57();
					func_56();
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
				if (!func_58(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
							unk_0x120A395B0ECB8EA5(iVar27, 1);
						}
					}
					if (func_55(Global_4456448.f_232883))
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

bool func_55(int iParam0)
{
	return iParam0 == 17;
}

void func_56()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_57()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_58(int iParam0)
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

void func_59(int iParam0, int iParam1, int iParam2)
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
				func_61();
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
		if (func_63(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_60(-2008016205, iParam0);
	}
}

void func_60(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_61()
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

bool func_62()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_63(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_64(-1, 0) == 8;
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

int func_64(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
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

int func_65()
{
	return Global_1312745;
}

int func_66()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	vVar0 = { -1661,914f, -1126,842f, 12,6973f };
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 7))
	{
		if (!unk_0xAE317D00A5A55DF6("SCRIPT\FERRIS_WHALE_01", 0, -1) || !unk_0xAE317D00A5A55DF6("SCRIPT\FERRIS_WHALE_02", 0, -1))
		{
			if (!func_30(&Local_424))
			{
				func_21(&Local_424, 1, 0);
			}
			else if (func_75(Local_424, 4000, 1))
			{
				unk_0x5D96D8530B3D0904(&iLocal_418, 7);
			}
			return;
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iLocal_418, 8);
			unk_0x5D96D8530B3D0904(&iLocal_418, 7);
		}
	}
	switch (iLocal_428)
	{
		case 0:
			if (func_13(unk_0xD803B885F5E47A62(), 1, 1) && !Global_1312418.f_6)
			{
				Local_1406[unk_0x57270EE11514DC67()].f_3 = Local_1142.f_197[Local_1142.f_262];
				vLocal_315 = { unk_0x68E4ADDDDCD7BDDE(iLocal_290[Local_1406[unk_0x57270EE11514DC67()].f_3], 0f, 0f, 0f) };
				if (!Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]][0])
				{
					Local_1406[unk_0x57270EE11514DC67()].f_4 = 0;
				}
				else if (!Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]][1])
				{
					Local_1406[unk_0x57270EE11514DC67()].f_4 = 1;
				}
				StringCopy(&cLocal_400, "enter_player_", 24);
				StringCopy(&cLocal_406, "idle_a_player_", 24);
				if (Local_1406[unk_0x57270EE11514DC67()].f_4 == 0)
				{
					StringConCat(&cLocal_400, "one", 24);
					StringConCat(&cLocal_406, "one", 24);
				}
				else
				{
					StringConCat(&cLocal_400, "two", 24);
					StringConCat(&cLocal_406, "two", 24);
				}
				func_54(unk_0xD803B885F5E47A62(), 0, 260, 0);
				func_45(1);
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vVar0, 1f, 20000, 98,6981f, 0,2f);
				Global_1590535[unk_0xD803B885F5E47A62()].f_748 = 1;
				unk_0x14CC404CCC1FD25C(1);
				func_69();
				iLocal_428 = 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 9);
				func_40(func_78(1), Local_1406[unk_0x57270EE11514DC67()].f_4, 1);
			}
			break;
		
		case 1:
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1)
			{
				uLocal_426 = unk_0xF66E5A439A080021(vLocal_315, 0f, 0f, 0f, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uLocal_426, sLocal_399, &cLocal_400, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x914E6894744915F8(uLocal_426);
				iLocal_428 = 2;
			}
			break;
		
		case 2:
			uVar6 = unk_0xF958843510932FF6(uLocal_426);
			if (unk_0xA45992A6CE82FB43(uVar6) > 0,99f)
			{
				uLocal_426 = unk_0xF66E5A439A080021(vLocal_315, 0f, 0f, 0f, 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uLocal_426, sLocal_399, &cLocal_406, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x914E6894744915F8(uLocal_426);
				iLocal_428 = 3;
			}
			break;
		
		case 3:
			if (func_44(unk_0x16F2683693E537C9()))
			{
				unk_0x25BD67336EA4AECE(unk_0x16F2683693E537C9(), 1000);
			}
			vVar3 = { unk_0x5293C88BD2F4DE13(iLocal_290[Local_1406[unk_0x57270EE11514DC67()].f_3], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) };
			unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), iLocal_290[Local_1406[unk_0x57270EE11514DC67()].f_3], 0, vVar3, 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 0, 0, 0, 0, 2, 1);
			unk_0xF8BBEE601D3667D7(unk_0x16F2683693E537C9(), 1);
			func_68(func_78(0), Local_1406[unk_0x57270EE11514DC67()].f_3, vVar3, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
			unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 5);
			unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 0);
			unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 9);
			iLocal_428 = 0;
			func_40(func_78(1), Local_1406[unk_0x57270EE11514DC67()].f_4, 1);
			break;
	}
}

void func_68(int iParam0, var uParam1, vector3 vParam2, float fParam5)
{
	Var0 = -454287864;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_6 = fParam5;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iParam0);
	}
}

void func_69()
{
	if (func_74() || func_73())
	{
		func_72();
		func_70();
	}
}

void func_70()
{
	if ((!func_179() && !func_71()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_71()
{
	return Global_2450632.f_591;
}

void func_72()
{
	Global_2450632.f_656 = 1;
}

var func_73()
{
	return Global_2450632.f_635;
}

bool func_74()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_75(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_77(int iParam0)
{
	Var0 = -1968435631;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

int func_78(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_13(iVar2, 0, 0))
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

void func_79(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, 0);
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

void func_80(var uParam0, int iParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0xB3A1B75CB59FEB56(0, iParam1, 3000, 1, 0, 0);
		unk_0xE3BB8E05FCEB3FBE(*uParam0, 0);
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
		*uParam0 = 0;
	}
}

void func_81(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_82()].f_6174.f_4111[iVar0] == iParam0)
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

int func_82()
{
	iVar0 = 0;
	return iVar0;
}

void func_83()
{
	func_89(&uLocal_356, -1703,854f, -1082,222f, 42,006f, -8,3096f, 0f, -111,8213f, 0, 0);
	func_87(&uLocal_356, &uLocal_395, 0, 0, 1, 1);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 8))
	{
		iLocal_319 = unk_0xD68EA767274B7444();
		unk_0xCEAA091B490F8407(iLocal_319, "GENERATOR", iLocal_307, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
		iLocal_321 = unk_0xD68EA767274B7444();
		unk_0xCEAA091B490F8407(iLocal_321, "SLOW_SQUEAK", iLocal_307, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
		iLocal_322 = unk_0xD68EA767274B7444();
		unk_0xCEAA091B490F8407(iLocal_322, "SLOW_SQUEAK", iLocal_290[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
		iLocal_320 = unk_0xD68EA767274B7444();
		unk_0xCEAA091B490F8407(iLocal_320, "CARRIAGE", iLocal_290[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	}
	func_84();
	unk_0x0674E58A79778E99(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 5);
}

void func_84()
{
	if (func_44(unk_0x16F2683693E537C9()))
	{
		func_85(&uLocal_379);
		func_79(&Local_325, 0, 1);
		func_87(&uLocal_356, &uLocal_395, 0, 0, 1, 1);
		iLocal_396 = 0;
		if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
		{
			unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE");
		}
		unk_0x8BC9595FD2792B5D("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
}

void func_85(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_10))
	{
		func_86(uParam0);
		unk_0x9A8DDC7C522F5BF5(uParam0->f_10, 0);
	}
	uParam0->f_10 = 0;
}

void func_86(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_10))
	{
		unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
		unk_0xE3BB8E05FCEB3FBE(uParam0->f_10, 0);
	}
}

void func_87(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	func_80(uParam1, 0);
	vVar0 = { uParam0->f_1[0] };
	if (bParam2)
	{
		vVar0.z = (vVar0.z + uParam0->f_18);
	}
	*uParam1 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vVar0, uParam0->f_8[0], uParam0->f_15[0], 1, 2);
	if (!unk_0x9F4FE516EAACCFC5(*uParam1))
	{
		return;
	}
	uParam0->f_19 = unk_0x1C0640BA9A7327B3();
	unk_0xE3BB8E05FCEB3FBE(*uParam1, 1);
	unk_0xB3A1B75CB59FEB56(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !func_88(uParam0->f_1[1]))
	{
		vVar0 = { uParam0->f_1[1] };
		if (bParam2)
		{
			vVar0.z = (vVar0.z + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		unk_0x86F44313DFA8F00C(*uParam1, vVar0, uParam0->f_8[1], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (func_44(uParam0->f_21))
	{
		unk_0x1305278186D1C53E(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

int func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8)
{
	func_90(uParam0);
	uParam0->f_1[0] = { vParam1 };
	uParam0->f_8[0] = { vParam4 };
	*uParam0 = 1;
	uParam0->f_21 = iParam7;
	uParam0->f_18 = iParam8;
	uParam0->f_20 = 0;
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1[0] = { 0f, 0f, 0f };
	uParam0->f_1[1] = { 0f, 0f, 0f };
	uParam0->f_8[0] = { 0f, 0f, 0f };
	uParam0->f_8[1] = { 0f, 0f, 0f };
	uParam0->f_15[0] = 50f;
	uParam0->f_15[1] = 0f;
	uParam0->f_21 = 0;
	uParam0->f_20 = 0;
}

void func_91()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
	{
		unk_0x3FC8DBCC154CA56B();
		unk_0x38C3A68D7861DCFD(1, 0, 1);
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iLocal_429 = 1;
		}
		if (!unk_0x798A3F1296751F46())
		{
			if (unk_0xBFC0798A6E3417F9(2, 236))
			{
				if (iLocal_396 == 0)
				{
					func_113();
				}
				else
				{
					func_84();
				}
			}
			if ((!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 4) && !unk_0xEAE0D21A50E6C7F4(Local_1142.f_3[unk_0x57270EE11514DC67()], 0)) && !unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 3))
			{
				if (unk_0xBFC0798A6E3417F9(2, 51))
				{
					unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 3);
					iLocal_429 = 1;
				}
			}
		}
		if (iLocal_396 == 1)
		{
			if (bLocal_323 == 0)
			{
				func_110(&uLocal_379);
			}
			else
			{
				func_106(&Local_325, 1, 1, 0, 0, 0,1f, 0, 1065353216, 0);
				unk_0x5F3CBA6EB9341C90(Local_325, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 2) + Local_325.f_14, 2);
				unk_0x7C8F595F56164501(0);
			}
		}
	}
	func_92();
}

void func_92()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_418, 4))
		{
			if (unk_0x83D8570832F172A7(uLocal_430))
			{
				if (iLocal_429)
				{
					Local_1131 = { func_105() };
					func_103(&uLocal_431);
					func_102(unk_0xF59058FCB716F903(2, 236, true), "AMFW_BTNCV", &uLocal_431, 0);
					if (!unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 3))
					{
						func_102(unk_0xF59058FCB716F903(2, 51, true), "AMFW_BTNEX", &uLocal_431, 0);
					}
					iLocal_429 = 0;
				}
				unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
				unk_0x5DD950F92F816F03(0);
				func_101(1);
				func_100(1);
				func_93(&uLocal_430, &Local_1131, &uLocal_431, func_99(&uLocal_431));
			}
		}
		else
		{
			uLocal_430 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
			unk_0x5D96D8530B3D0904(&iLocal_418, 4);
		}
	}
	else
	{
		unk_0xE17FDF9E3068281B(&uLocal_430);
		unk_0x0674E58A79778E99(&iLocal_418, 4);
		iLocal_429 = 1;
	}
}

void func_93(var uParam0, var uParam1, var uParam2, int iParam3)
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
		func_98(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_100(1);
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
						func_97(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_97(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0].f_54;
						uVar5 = uParam2->f_1[iVar0].f_55;
						func_97(unk_0xE32F7AC5E6DF304A(uVar4, uVar5, true));
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
						func_96(&(uParam2->f_1[iVar0].f_32));
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
					func_97(&(uParam2->f_1[iVar0]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0].f_16)))
					{
						func_97(&(uParam2->f_1[iVar0].f_16));
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
						func_96(&(uParam2->f_1[iVar0].f_32));
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
		func_95(*uParam0, uParam1);
	}
	func_94();
}

void func_94()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_95(var uParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_96(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_97(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_98(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_99(var uParam0)
{
	return uParam0->f_692;
}

void func_100(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_101(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_102(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_103(var uParam0)
{
	func_104(uParam0);
	uParam0->f_692 = 1;
}

void func_104(var uParam0)
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

struct<9> func_105()
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

void func_106(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	unk_0xA2E3EDD0E119882F(2);
	func_109(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
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
		iVar0[2] = func_108((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_108((iVar0[3] + uParam0->f_25), -127, 127);
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
		uParam0->f_14 = (uParam0->f_14 + func_107(((((vVar10.x - uParam0->f_14) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_107(((((vVar10.y - uParam0->f_14.f_1) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_107(((((vVar10.z - uParam0->f_14.f_2) * 0,05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_107(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_107(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_107(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
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
				uParam0->f_17 = func_107(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_107(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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

float func_107(float fParam0, float fParam1, float fParam2)
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

int func_108(int iParam0, int iParam1, int iParam2)
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

void func_109(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_110(var uParam0)
{
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	unk_0xA2E3EDD0E119882F(2);
	if (*uParam0 == 1)
	{
		if (unk_0x755FF954DAE327E1(unk_0x4F3973434662D795(2, 220)) > 0,1f)
		{
			uParam0->f_12 = (uParam0->f_12 - ((unk_0x4F3973434662D795(2, 220) * 60f) * timestep()));
			if (uParam0->f_15)
			{
				if (uParam0->f_12 < -180f)
				{
					uParam0->f_12 = (uParam0->f_12 + 360f);
				}
				if (uParam0->f_12 > 180f)
				{
					uParam0->f_12 = (uParam0->f_12 - 360f);
				}
			}
			else
			{
				uParam0->f_12 = func_107(uParam0->f_12, -80f, 80f);
			}
		}
		if (unk_0x755FF954DAE327E1(unk_0x4F3973434662D795(2, 221)) > 0,1f)
		{
			fVar2 = ((unk_0x4F3973434662D795(2, 221) * 60f) * timestep());
			if (unk_0x89DF0B812BA6383B())
			{
				fVar2 = (fVar2 * -1f);
			}
			uParam0->f_11 = (uParam0->f_11 - fVar2);
			if (uParam0->f_14)
			{
				if (uParam0->f_11 < -180f)
				{
					uParam0->f_11 = (uParam0->f_11 + 360f);
				}
				if (uParam0->f_11 > 180f)
				{
					uParam0->f_11 = (uParam0->f_11 - 360f);
				}
			}
			else
			{
				uParam0->f_11 = func_107(uParam0->f_11, -30f, 30f);
			}
		}
		if (unk_0xBFC0798A6E3417F9(2, 231))
		{
			uParam0->f_11 = 0f;
			uParam0->f_12 = 0f;
		}
		if (unk_0x755FF954DAE327E1(unk_0x4F3973434662D795(2, 219)) > 0,1f)
		{
			fVar2 = ((unk_0x4F3973434662D795(2, 219) * (60f / 2f)) * timestep());
			uParam0->f_13 = (uParam0->f_13 + fVar2);
			uParam0->f_13 = func_107(uParam0->f_13, 20f, 50f);
		}
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_10))
		{
			unk_0x5818C8D5303DCCF8(uParam0->f_10, uParam0->f_13);
			if (!func_44(uParam0->f_8) && func_44(unk_0x16F2683693E537C9()))
			{
				unk_0x5F3CBA6EB9341C90(uParam0->f_10, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 2) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
			else if (func_44(uParam0->f_8) && func_44(uParam0->f_9))
			{
				func_111(unk_0x68F4C0EC296D3901(uParam0->f_8, 1), unk_0x68F4C0EC296D3901(uParam0->f_9, 1), &uVar0, &uVar1, 1);
				unk_0x5F3CBA6EB9341C90(uParam0->f_10, Vector(uVar1, 0f, uVar0) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
		}
	}
}

void func_111(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, int iParam8)
{
	vVar0 = { vParam3 - vParam0 };
	func_112(vVar0, uParam6, uParam7, iParam8);
}

void func_112(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	if (vParam0.y != 0f)
	{
		*uParam4 = unk_0x5D8ABF6396A76564(vParam0.x, vParam0.y);
	}
	else if (vParam0.x < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = sqrt(((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0x5D8ABF6396A76564(vParam0.z, fVar0);
	}
	else if (vParam0.z < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

void func_113()
{
	if (func_44(unk_0x16F2683693E537C9()))
	{
		func_80(&uLocal_395, 0);
		Local_325.f_20 = 160;
		Local_325.f_21 = 20;
		if (bLocal_323)
		{
			vVar0 = { unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 31086, 0f, -0,25f, 0f) };
			func_116(&Local_325, vVar0, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 2), 50f, Local_325.f_20, Local_325.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
			unk_0x9730E2596B7BB6FF(Local_325, unk_0x16F2683693E537C9(), 31086, 0f, -0,25f, 0f, 1);
		}
		else
		{
			func_115(&uLocal_379, 1);
			func_114(&uLocal_379, 0, 3000);
		}
		if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
		{
			unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
		}
		unk_0x8BC9595FD2792B5D("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_396 = 1;
}

int func_114(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_1 == 1)
	{
		return 0;
	}
	uParam0->f_13 = 50f;
	if (!unk_0x9F4FE516EAACCFC5(uParam0->f_10))
	{
		uParam0->f_10 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", uParam0->f_2, uParam0->f_5, 50f, 1, 2);
	}
	if (func_44(uParam0->f_8))
	{
		unk_0xC5940439E4EB9A33(uParam0->f_10, uParam0->f_8, 0f, 0f, 0f, 1);
	}
	if (*uParam0 == 1)
	{
		if (func_44(unk_0x16F2683693E537C9()) && !func_44(uParam0->f_8))
		{
			unk_0x9730E2596B7BB6FF(uParam0->f_10, unk_0x16F2683693E537C9(), 31086, 0f, 0,2f, 0f, 1);
		}
		uParam0->f_11 = 0f;
		uParam0->f_12 = 0f;
	}
	else if (func_44(uParam0->f_9))
	{
		unk_0x1305278186D1C53E(uParam0->f_10, uParam0->f_9, 0f, 0f, 0f, 1);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_10))
	{
		unk_0xE3BB8E05FCEB3FBE(uParam0->f_10, 1);
		unk_0xB3A1B75CB59FEB56(1, iParam1, iParam2, 1, 0, 0);
	}
	return 1;
}

void func_115(var uParam0, bool bParam1)
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_9 = unk_0x16F2683693E537C9();
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	if (bParam1)
	{
		uParam0->f_15 = 1;
	}
}

void func_116(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = uParam8;
	uParam0->f_21 = uParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, 1);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xB3A1B75CB59FEB56(1, 0, 3000, 1, 0, 0);
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

void func_117()
{
	if (func_135(1) >= Global_262145.f_7789 || unk_0x7A7BDE279347E517(Global_262145.f_7789, 0, 0, 1, -1, 0))
	{
		if (func_134())
		{
			func_122(1643659499, Global_262145.f_7789, &iVar0, 0, 1, 0);
			Global_4263954[iVar0].f_1 = 2;
		}
		else
		{
			unk_0x6C5C42DFA8BC6886(Global_262145.f_7789, 2, 0, 1);
		}
		unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 8);
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_418, 3))
	{
		func_118(0, 31, 5);
		unk_0x5D96D8530B3D0904(&iLocal_418, 3);
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x4C2428CBA698034D())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() && func_15(unk_0xD803B885F5E47A62(), 1, 0))
	{
		return;
	}
	if (unk_0x06F8112AA79C53D9(2, 199) || unk_0x7FEE810EE9E768EB(2, 199))
	{
		return;
	}
	if (unk_0x8BB17FEBE0394018() != 0)
	{
		return;
	}
	if (unk_0x798A3F1296751F46())
	{
		return;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return;
	}
	if (func_121())
	{
		return;
	}
	if (!func_119())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() || iParam0)
	{
		if (!Global_98796.f_1417 && !unk_0x590766B2AF637235())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2461734 = iParam1;
			Global_98796.f_1417 = 1;
			Global_98796.f_1418 = iParam2;
		}
	}
}

int func_119()
{
	if (func_120())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_120()
{
	return Global_2461181;
}

bool func_121()
{
	return Global_2461839;
}

void func_122(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_134())
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
				func_123(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_123(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_123(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_123(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_123(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_134())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_65()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_130(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_129(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_124(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_125(iParam0);
	}
}

void func_125(int iParam0)
{
	bVar0 = false;
	if (!func_134())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
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
		func_126(&(Global_4263954[iParam0]));
	}
}

void func_126(var uParam0)
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
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
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

void func_127(var uParam0)
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

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_129(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_134())
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
				func_131(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_131(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_133(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_132();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_132()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_133(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_134()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_135(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = unk_0x3A6D64D2A1228113();
	}
	iVar0 = (iVar0 + unk_0x62F8C2EDB26F57B3(-1));
	return iVar0;
}

void func_136(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam2);
}

bool func_137()
{
	return (((func_139() || func_174()) || func_138() == 2) || func_138() == 16);
}

int func_138()
{
	return Global_968397;
}

bool func_139()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 5);
}

int func_140(int iParam0)
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

int func_141(int iParam0)
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

bool func_142(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_143(int iParam0)
{
	if (func_146(iParam0))
	{
		return 1;
	}
	if (func_144(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_145(iParam0, 9);
	}
	return 0;
}

bool func_145(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_146(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_147(int iParam0)
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

void func_148(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

void func_149()
{
	if (iLocal_398 != 0)
	{
		fVar4 = (IntToFloat(unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), iLocal_398)) / 1000f);
	}
	iLocal_398 = unk_0x6794171A1021C2D8();
	if (((Local_1142.f_262 != -1 && unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 0)) && Global_2544351 < Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_6) && (Global_2544351 + (fLocal_308 * fVar4)) > Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_6)
	{
		Global_2544351 = Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_6;
	}
	else
	{
		Global_2544351 = (Global_2544351 + (fLocal_308 * fVar4));
	}
	if (Global_2544351 >= 360f)
	{
		Global_2544351 = (Global_2544351 - 360f);
	}
	if (func_44(iLocal_307))
	{
		unk_0xA47B46945FF6DE74(iLocal_307, vLocal_309, 1, 0, 0, 1);
		unk_0xC023D1C4BF532815(iLocal_307, (-Global_2544351 - (360f / 16f)), 0f, 0f, 2, 1);
		unk_0x1E9649458B15960F(iLocal_307, true);
	}
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		if (func_44(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
		unk_0x58350770D73D313A("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (vVar1.z - fLocal_318));
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_150(&(Local_1142.f_36[iVar0]));
		iVar0++;
	}
}

void func_150(var uParam0)
{
	vVar0 = { func_152(uParam0->f_5) };
	if (func_151(iLocal_290[uParam0->f_5]))
	{
		unk_0xA47B46945FF6DE74(iLocal_290[uParam0->f_5], vVar0, 1, 0, 0, 1);
		unk_0x25BD67336EA4AECE(iLocal_290[uParam0->f_5], 1000);
		unk_0x1E9649458B15960F(iLocal_290[uParam0->f_5], true);
	}
}

int func_151(int iParam0)
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

Vector3 func_152(int iParam0)
{
	fVar0 = ((360f / to_float(16)) * to_float(iParam0));
	return unk_0x68E4ADDDDCD7BDDE(iLocal_307, 0f, (15,3f * sin(fVar0)), (-15,3f * cos(fVar0)));
}

int func_153()
{
	unk_0x3F423BF5B8125A50(sLocal_399);
	unk_0x3F423BF5B8125A50(sLocal_289);
	unk_0x523BCC9DC80CD82F(iLocal_287);
	unk_0x523BCC9DC80CD82F(iLocal_288);
	if (!unk_0xB4AE0788C1587752(sLocal_399))
	{
		return 0;
	}
	if (!unk_0xB4AE0788C1587752(sLocal_289))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_287))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_288))
	{
		return 0;
	}
	func_156();
	func_155(func_78(0));
	func_154(func_78(0));
	iLocal_428 = 0;
	return 1;
}

void func_154(int iParam0)
{
	Var0 = 1749543472;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

void func_155(int iParam0)
{
	Var0 = -811043419;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

void func_156()
{
	iVar0 = 0;
	Global_2544351 = 0f;
	iLocal_307 = unk_0x7707E48765093646(iLocal_287, 0f, 1f, 2f, 0, 0, 0);
	unk_0xA47B46945FF6DE74(iLocal_307, vLocal_309, 1, 0, 0, 1);
	unk_0xC023D1C4BF532815(iLocal_307, Global_2544351, 0f, 0f, 2, 1);
	unk_0x1E9649458B15960F(iLocal_307, true);
	unk_0x25BD67336EA4AECE(iLocal_307, 1000);
	unk_0xE121AE1BBF90E186(iLocal_307, 1);
	unk_0xFA0589A03B16D5D1(iLocal_307, 0);
	if (!unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0x8BC9595FD2792B5D("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_157(&(Local_1142.f_36[iVar0]), iVar0);
		iVar0++;
	}
	if (!unk_0xEB880D98B5988D0C())
	{
		func_22(64, 1, 0, 1, 0);
	}
}

void func_157(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	iLocal_290[uParam0->f_5] = unk_0x7707E48765093646(iLocal_288, 0f, 1f, 2f, 0, 0, 0);
	unk_0xE121AE1BBF90E186(iLocal_290[uParam0->f_5], 1);
	func_150(uParam0);
}

int func_158()
{
	return Local_1142.f_1;
}

int func_159(int iParam0)
{
	return Local_1406[iParam0];
}

void func_160()
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x218F818E64020C17(1, iVar0, &Var2, 2);
				if (func_13(Var2.f_1, 0, 1))
				{
					if (unk_0xFB75B0F82CA525F6(Var2.f_1))
					{
						switch (Var2)
						{
							case -811043419:
								func_171(iVar0);
								break;
							
							case -454287864:
								func_170(iVar0);
								break;
							
							case -1206974469:
								func_169(iVar0);
								break;
							
							case 2043690704:
								func_168(iVar0);
								break;
							
							case 1749543472:
								func_166(iVar0);
								break;
							
							case -1968435631:
								func_164(iVar0);
								break;
							
							case 1621316394:
								func_163(iVar0);
								break;
							
							case 1757961404:
								func_162(iVar0);
								break;
							
							case 165840760:
								func_161(iVar0);
								break;
							}
						}
				}
				break;
		}
		iVar0++;
	}
}

void func_161(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
		{
			Local_1142.f_3[vVar0.z] = 0;
			Local_1142.f_197[vVar0.z] = -1;
			Local_1142.f_197[vVar0.z].f_1 = 0;
			Local_1142.f_262 = func_2();
		}
	}
}

void func_162(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0x218F818E64020C17(1, iParam0, &Var0, 4))
		{
			unk_0x0674E58A79778E99(&(Local_1142.f_2), 3);
			unk_0x0674E58A79778E99(&(Local_1142.f_2), 2);
			if ((Local_1142.f_262 != -1 && Local_1142.f_197[Local_1142.f_262] != -1) && Var0.f_2 != -1)
			{
				if (!Var0.f_3)
				{
					Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_3 = (Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_3 - 1);
					Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]][Var0.f_2] = 0;
				}
				else
				{
					Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]].f_3++;
					Local_1142.f_36[Local_1142.f_197[Local_1142.f_262]][Var0.f_2] = 1;
				}
			}
		}
	}
}

void func_163(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (!vVar0.z)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 10);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Local_1406[unk_0x57270EE11514DC67()].f_2), 9);
			}
		}
	}
}

void func_164(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0x218F818E64020C17(1, iParam0, &Var0, 2))
		{
			bVar2 = unk_0xEAE0D21A50E6C7F4(Local_1142.f_2, 3);
			func_165(func_133(Var0.f_1), bVar2);
			if (!bVar2)
			{
				unk_0x5D96D8530B3D0904(&(Local_1142.f_2), 3);
			}
		}
	}
}

void func_165(int iParam0, bool bParam1)
{
	vVar0.x = 1621316394;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = bParam1;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iParam0);
	}
}

void func_166(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0x218F818E64020C17(1, iParam0, &Var0, 2))
		{
			func_167(func_133(Var0.f_1));
		}
	}
}

void func_167(int iParam0)
{
	vVar0.x = 2043690704;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = Global_2544351;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iParam0);
	}
}

void func_168(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		Global_2544351 = vVar0.z;
	}
}

void func_169(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 2))
	{
		iVar2 = unk_0x9539D44F3E4492F6(Var0.f_1);
		if (func_13(Var0.f_1, 1, 1))
		{
			unk_0xF8BBEE601D3667D7(iVar2, 1);
			unk_0x15AFB6CBDE990FB6(iVar2, 0, 1);
		}
	}
}

void func_170(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 7))
	{
		if (Var0.f_2 != -1)
		{
			iVar7 = unk_0x9539D44F3E4492F6(Var0.f_1);
			if (func_13(Var0.f_1, 1, 1))
			{
				unk_0xF8BBEE601D3667D7(iVar7, 1);
				unk_0x9F528B1B53FBC5D9(iVar7, iLocal_290[Var0.f_2], 0, Var0.f_3, 0f, 0f, Var0.f_6, 0, 0, 0, 0, 2, 1);
			}
		}
	}
}

void func_171(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 2))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
		{
			unk_0xF8BBEE601D3667D7(unk_0x16F2683693E537C9(), 1);
			vVar2 = { unk_0x5293C88BD2F4DE13(iLocal_290[Local_1406[unk_0x57270EE11514DC67()].f_3], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) };
			func_68(func_133(Var0.f_1), Local_1406[unk_0x57270EE11514DC67()].f_3, vVar2, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
		}
	}
}

int func_172()
{
	if (func_173() == 0)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return Global_1312467.f_18;
}

int func_174()
{
	if (((func_178() || func_177()) || func_176()) || func_175())
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 1);
}

bool func_176()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_177()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_178()
{
	return Global_2450632.f_598;
}

bool func_179()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_180()
{
	func_186(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_185())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_184())
	{
		return 1;
	}
	if (func_183(159))
	{
		if (!func_178())
		{
			return 1;
		}
	}
	if (func_183(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_181() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_181()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_181()
{
	switch (func_28())
	{
		case 0:
			return func_182();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_182()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_183(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_184()
{
	return Global_2460680;
}

bool func_185()
{
	return Global_2450632.f_593;
}

void func_186(var uParam0)
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
					func_187(iVar0);
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

void func_187(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_188(iVar4, &bVar5))
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

int func_188(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
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

void func_189()
{
	wait(0);
}

void func_190()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
	}
}

void func_191()
{
	func_197();
	func_195(0);
	func_80(&uLocal_395, 0);
	func_80(&uLocal_324, 0);
	func_79(&Local_325, 0, 1);
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	Global_1590535[unk_0xD803B885F5E47A62()].f_748 = 0;
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0) || func_179())
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_1406[unk_0x57270EE11514DC67()].f_2, 0))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
		}
		func_45(0);
	}
	func_41();
	func_192(&uLocal_51);
	func_192(&uLocal_169);
	unk_0xB38702A5025BB490("fairgroundHub");
	unk_0x10FAF14A60A0DBE1();
}

void func_192(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_193(uParam0, iVar0);
		iVar0++;
	}
}

int func_193(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_114, iParam1) || (*uParam0)[iParam1] == 0)
	{
		return 1;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			if (unk_0xC528DF93B7EC4D04(uParam0[iParam1]->f_3))
			{
				unk_0xF8018A9AE1B6C5F6(uParam0[iParam1]->f_3);
			}
			break;
		
		case 2:
			if (unk_0xB4AE0788C1587752(uParam0[iParam1]->f_3))
			{
				unk_0x8D17794CE3273D70(uParam0[iParam1]->f_3);
			}
			break;
		
		case 3:
			if (unk_0xDF3FDDA1EADEDD07(uParam0[iParam1]->f_3))
			{
				unk_0xDD465543E2028AEA(uParam0[iParam1]->f_3);
			}
			break;
		
		case 4:
			unk_0x8C26F31DFF77D124();
			break;
		
		case 5:
			break;
		
		case 6:
			if (unk_0xB87F6CF6E5628C67(uParam0[iParam1]->f_1))
			{
				unk_0x71199B01895C6202(uParam0[iParam1]->f_1);
			}
			break;
		
		case 7:
			if (unk_0x25F7A4D42AF2AB93())
			{
				unk_0x29D7581AEF4440C2();
			}
			break;
		
		case 8:
			if (unk_0x67C1D9E5B91B2E37(uParam0[iParam1]->f_5))
			{
				unk_0x11CCD0ACA866C6C5(uParam0[iParam1]->f_5, 0);
			}
			break;
		
		case 9:
			if (unk_0x27117E2CDD4D67C3(uParam0[iParam1]->f_3))
			{
				unk_0xF5A41F3D3B38EFE3(uParam0[iParam1]->f_3);
			}
			break;
		
		case 10:
			if (unk_0x3DDA6C6A285628E4(uParam0[iParam1]->f_5, uParam0[iParam1]->f_3))
			{
				unk_0xDB8844D4B7C60440(uParam0[iParam1]->f_5, uParam0[iParam1]->f_3);
			}
			break;
		
		case 11:
			if (unk_0x1C2E18E9C63BEB77(uParam0[iParam1]->f_3))
			{
				unk_0x2F3540C2227116A3(uParam0[iParam1]->f_3);
			}
			break;
		
		case 12:
			if (unk_0x1787731C4D1D6B19(uParam0[iParam1]->f_2))
			{
				unk_0x2914827AC2790D54(uParam0[iParam1]->f_2);
			}
			break;
		
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	func_194(uParam0[iParam1]);
	return 1;
}

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		func_196();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_147(0))
		{
			func_34(0);
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

void func_196()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_197()
{
	if (!unk_0xEB880D98B5988D0C())
	{
		func_22(64, 0, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_1142.f_36)
	{
		func_199(&(Local_1142.f_36[iVar0]));
		iVar0++;
	}
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	func_42(&iLocal_322);
	func_42(&iLocal_322);
	func_42(&iLocal_319);
	func_42(&iLocal_320);
	func_198(&iLocal_307);
}

void func_198(var uParam0)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*uParam0))
		{
			unk_0x15AFB6CBDE990FB6(*uParam0, 1, 1);
		}
		unk_0xF690C84DADBB3551(uParam0);
	}
}

void func_199(var uParam0)
{
	if (iLocal_290[uParam0->f_5] == 0)
	{
		return;
	}
	func_198(&(iLocal_290[uParam0->f_5]));
	iLocal_290[uParam0->f_5] = 0;
}

int func_200(struct<21> Param0)
{
	func_205(func_206(Param0), Param0);
	unk_0x3A4967AE7C71F999(0);
	func_202(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_1142, 264);
	unk_0x35B62793EAE9ADDF(&Local_1406, 161);
	unk_0x256D93AFAE851A7A(0);
	Local_1406[unk_0x57270EE11514DC67()] = 0;
	func_201(func_78(1));
	return 1;
}

void func_201(int iParam0)
{
	vVar0.x = 165840760;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = unk_0x57270EE11514DC67();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iParam0);
	}
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_204();
			}
			else
			{
				return 0;
			}
		}
		if (!func_203())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_204();
					}
					else
					{
						return 0;
					}
				}
				if (func_185())
				{
					if (!bParam2)
					{
						func_204();
					}
					else
					{
						return 0;
					}
				}
				if (func_183(157))
				{
					if (!bParam2)
					{
						func_204();
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
					func_204();
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
				func_204();
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
			func_204();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_203()
{
	return Global_1312854;
}

void func_204()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_205(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_204();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_206(int iParam0)
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

