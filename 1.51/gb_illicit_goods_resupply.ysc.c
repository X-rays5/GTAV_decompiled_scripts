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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0,5f;
	iLocal_675 = -1;
	fLocal_752 = 99999f;
	fLocal_762 = 99999f;
	fLocal_763 = 99999f;
	iLocal_2240 = -1;
	if (unk_0x8CD06866876216F2())
	{
		if (func_2503(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (!func_2452(ScriptParam_0))
			{
				func_2401(0, 1);
				func_2349();
			}
		}
		else
		{
			func_2349();
		}
	}
	else
	{
		func_2401(0, 1);
		func_2349();
	}
	while (true)
	{
		func_2348();
		if (func_2347() > 0)
		{
			if (Local_933.f_2 == 0)
			{
				iVar0 = 0;
				while (iVar0 < func_2346())
				{
					unk_0xD3DD9662CCFC031F(func_2345(iVar0), 1);
					iVar0++;
				}
			}
		}
		if (func_2341(1))
		{
			func_2401(0, 1);
			func_2349();
		}
		if (func_2334())
		{
			func_2401(0, 1);
			func_2349();
		}
		if (func_2347() > 0)
		{
			if (func_2331(Local_933, 1))
			{
				if (!func_2330(unk_0xFB04705FDFDCE640(), 11))
				{
					func_2329(11);
				}
			}
			else if (func_2330(unk_0xFB04705FDFDCE640(), 11))
			{
				func_2328(11);
			}
		}
		func_2327();
		func_2326();
		func_2322();
		func_2304();
		func_2297();
		func_2282();
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 0))
		{
			func_2329(3);
		}
		else
		{
			func_2328(3);
		}
		switch (func_2281(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_2280() == 1)
				{
					func_2279(unk_0x57270EE11514DC67(), 1);
				}
				break;
			
			case 1:
				if (func_2280() == 1)
				{
					func_778();
				}
				else if (func_2280() == 3)
				{
					if (func_2503(unk_0xD803B885F5E47A62(), 1, 1))
					{
						func_2279(unk_0x57270EE11514DC67(), 3);
					}
				}
				break;
			
			case 3:
				func_2349();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_777())
			{
				func_776(3);
			}
			switch (func_2280())
			{
				case 0:
					func_776(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_2349();
					break;
				}
		}
	}
}

void func_1()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_755(iVar0);
		func_747(iVar0);
		iVar0++;
	}
	if (func_2347() > 0)
	{
		func_707();
		func_706();
	}
	func_705();
	func_701();
	func_700();
	func_697();
	func_551();
	func_549();
	func_177();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_174(iVar0);
		func_173(iVar0);
		iVar0++;
	}
	func_166();
	func_164();
	func_163();
	func_162();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_159(iVar0);
		func_156(iVar0);
		iVar0++;
	}
	func_155();
	func_151();
	func_150();
	func_149();
	func_144();
	func_141();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_139(iVar0);
		iVar0++;
	}
	func_138();
	func_134();
	func_117();
	func_112();
	switch (func_2347())
	{
		case 0:
			switch (Local_933.f_727)
			{
				case 0:
					Local_933 = { func_111() };
					Local_933.f_728 = func_107() + 1;
					if (func_106() == 26)
					{
						fVar1 = 500f;
					}
					func_102(fVar1);
					func_101();
					func_96();
					Local_933.f_55 = func_95(Local_933);
					Local_933.f_54 = 0;
					if (func_106() == 20)
					{
						func_93();
					}
					func_92(1623637790);
					func_90();
					if (Local_933.f_2 == 1)
					{
						iVar0 = 0;
						while (iVar0 < func_2346())
						{
							Local_933.f_42[iVar0] = func_89(iVar0, Local_933.f_5, Local_933.f_6);
							iVar0++;
						}
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < func_2346())
						{
							Local_933.f_42[iVar0] = func_89(iVar0, Local_933.f_5, Local_933.f_6);
							iVar0++;
						}
					}
					if (func_106() == 38)
					{
						iVar2 = unk_0x09AC81E49EA267F7(0, 50);
						if (iVar2 < 25)
						{
							func_88(5);
						}
					}
					func_86();
					func_67();
					func_63();
					func_49();
					Local_933.f_51 = func_48();
					Local_933.f_52 = func_48();
					Local_933.f_574 = unk_0x09AC81E49EA267F7(0, 3);
					iVar0 = 0;
					while (iVar0 < func_2346())
					{
						Local_933.f_688[iVar0] = unk_0x09AC81E49EA267F7(0, 100);
						iVar0++;
					}
					Local_933.f_727++;
					break;
				
				case 1:
					if (func_106() == 39 || func_106() == 36)
					{
						if (func_47())
						{
							func_46();
							Local_933.f_727++;
						}
					}
					else if (func_106() == 37)
					{
						if (func_36())
						{
							Local_933.f_727++;
						}
					}
					else
					{
						Local_933.f_727++;
					}
					break;
				
				case 2:
					if (func_106() == 37 || func_106() == 38)
					{
						func_35(2);
					}
					else if (func_106() == 7)
					{
						func_35(5);
					}
					else
					{
						func_35(4);
					}
					unk_0xCB466C2A425A9168(&(Local_933.f_526), &(Local_933.f_527));
					break;
			}
			break;
		
		case 2:
			func_23();
			if (func_22(13) || func_22(14))
			{
				if (func_106() == 37 || func_106() == 38)
				{
					func_35(3);
				}
				else
				{
					func_35(4);
				}
			}
			break;
		
		case 3:
			func_23();
			if (func_21())
			{
				if (func_106() == 37)
				{
					func_20(15);
				}
				func_35(4);
			}
			break;
		
		case 4:
			func_23();
			if ((((func_106() == 4 || func_106() == 6) || func_106() == 9) || func_106() == 12) || func_106() == 13)
			{
				if (func_19() || func_17())
				{
					if (func_19())
					{
					}
					if (func_17())
					{
					}
					func_35(5);
				}
			}
			else if (func_19() && func_17())
			{
				func_35(5);
			}
			break;
		
		case 5:
			if (func_16())
			{
				func_35(6);
			}
			if (func_15())
			{
				if (func_14())
				{
					func_13(4);
					func_35(7);
				}
				else
				{
					func_13(5);
					func_35(8);
				}
			}
			else
			{
				func_23();
			}
			break;
		
		case 6:
			if (func_15())
			{
				if (func_14())
				{
					func_13(4);
					func_35(7);
				}
				else
				{
					func_13(5);
					func_35(8);
				}
			}
			else
			{
				func_23();
			}
			break;
		
		case 7:
			if (func_22(3))
			{
				func_35(8);
			}
			break;
		
		case 8:
			bVar3 = true;
			if (Local_933.f_2 == 1)
			{
				if (func_12() == 4)
				{
					iVar0 = 0;
					while (iVar0 < func_2346())
					{
						if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
						{
							if (func_11(iVar0, 2) || func_11(iVar0, 13))
							{
								if (!func_11(iVar0, 6))
								{
									bVar3 = false;
								}
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < func_2346())
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
					{
						if (func_9(Local_933.f_33[iVar0]))
						{
							if (!func_11(iVar0, 15) && !func_8(iVar0))
							{
								bVar3 = false;
							}
						}
					}
					iVar0++;
				}
			}
			if (!func_7(0))
			{
				bVar3 = false;
			}
			if (func_22(0))
			{
				bVar3 = false;
			}
			if (!func_6(8) && func_12() != 2)
			{
				bVar3 = false;
			}
			if (func_106() == 38)
			{
				if (!func_5(&(Local_933.f_744)))
				{
					func_4(&(Local_933.f_744), 0, 0);
					bVar3 = false;
				}
				else if (!func_3(&(Local_933.f_744), 10000, 0))
				{
					iVar4 = 0;
					while (iVar4 < 22)
					{
						if (func_2(iVar4, 13))
						{
							if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar4]))
							{
								if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar4]), 0))
								{
									if (!func_6(26))
									{
										bVar3 = false;
									}
								}
							}
						}
						iVar4++;
					}
				}
			}
			if (bVar3)
			{
				func_35(9);
			}
			break;
		
		case 9:
			func_776(3);
			break;
	}
}

bool func_2(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_476[iParam0], iParam1);
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

bool func_6(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_459, iParam0);
}

bool func_7(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_456, iParam0);
}

int func_8(int iParam0)
{
	if (func_11(iParam0, 2) || func_11(iParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_10(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_796[iParam0], iParam1);
}

int func_12()
{
	return Local_933.f_506;
}

void func_13(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_933.f_506 = iParam0;
}

int func_14()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15()
{
	if (func_106() == 16)
	{
		if (unk_0xE5DBF9B6126856CA(Local_933.f_404[0]))
		{
			if (unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_404[0]), 0))
			{
				return 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!func_8(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_16()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 8))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17()
{
	if (func_16())
	{
		return 1;
	}
	if (func_106() == 14)
	{
		if (!func_22(1))
		{
			return 0;
		}
	}
	else if (func_18(func_106()))
	{
		if (!func_7(2))
		{
			return 0;
		}
	}
	return 1;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 26:
		case 30:
		case 31:
		case 33:
		case 14:
		case 35:
		case 39:
		case 36:
		case 21:
		case 27:
		case 32:
		case 0:
		case 1:
		case 2:
		case 4:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 6:
		case 5:
		case 9:
		case 3:
		case 10:
		case 8:
		case 11:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_19()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_20(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_458), iParam0);
}

int func_21()
{
	if (func_106() == 37)
	{
		if (func_22(10))
		{
			iVar0++;
		}
		if (func_22(11))
		{
			iVar0++;
		}
		if (func_22(12))
		{
			iVar0++;
		}
		if (iVar0 == func_2346())
		{
			return 1;
		}
	}
	else if (func_106() == 38)
	{
		if (func_22(10))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_458, iParam0);
}

void func_23()
{
	if (func_12() == 0)
	{
		if (!func_5(&(Local_933.f_503)))
		{
			func_4(&(Local_933.f_503), 0, 0);
		}
		else
		{
			bVar0 = func_16();
			if (bVar0)
			{
				if (!func_7(15))
				{
					func_34(&(Local_933.f_503));
					func_33(15);
					func_32(14);
				}
			}
			if (func_3(&(Local_933.f_503), (func_29(bVar0) - func_28()), 0))
			{
				if (!func_27(11))
				{
					if (!func_7(15))
					{
						func_33(14);
					}
					else
					{
						func_88(25);
					}
				}
			}
			if (func_3(&(Local_933.f_503), func_29(bVar0), 0))
			{
				if (!func_27(11))
				{
					if (func_14())
					{
						func_13(4);
					}
					else
					{
						func_13(1);
					}
				}
			}
			if (func_3(&(Local_933.f_503), (func_29(bVar0) - 5000), 0))
			{
				if (!func_26(0))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					func_25(0);
				}
			}
			else if (func_26(0))
			{
				func_24(0);
			}
		}
	}
	else
	{
		func_35(8);
	}
}

void func_24(int iParam0)
{
	unk_0x0674E58A79778E99(&iLocal_639, iParam0);
}

void func_25(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_639, iParam0);
}

bool func_26(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_639, iParam0);
}

bool func_27(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_640, iParam0);
}

int func_28()
{
	return 300000;
}

int func_29(bool bParam0)
{
	return (func_30(bParam0) + iLocal_899);
}

int func_30(bool bParam0)
{
	if (bParam0)
	{
		if (func_31(func_106()))
		{
			return Global_262145.f_17791 * 1000;
		}
		return Global_262145.f_17909 * 1000;
	}
	if (func_31(func_106()))
	{
		return Global_262145.f_17790 * 1000;
	}
	return Global_262145.f_17908 * 1000;
}

int func_31(int iParam0)
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

void func_32(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_933.f_456), iParam0);
}

void func_33(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_456), iParam0);
}

void func_34(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_35(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_933.f_505 = iParam0;
}

int func_36()
{
	iVar26 = 0;
	while (iVar26 < 22)
	{
		if ((((((((((((((func_45(iVar26, 9) || func_45(iVar26, 10)) || func_45(iVar26, 11)) || func_45(iVar26, 12)) || func_45(iVar26, 13)) || func_45(iVar26, 14)) || func_45(iVar26, 15)) || func_45(iVar26, 16)) || func_45(iVar26, 17)) || func_45(iVar26, 18)) || func_45(iVar26, 19)) || func_45(iVar26, 20)) || func_45(iVar26, 21)) || func_45(iVar26, 22)) || func_45(iVar26, 23))
		{
			if (!func_2(iVar26, 9))
			{
				iVar3[iVar27] = iVar26;
				iVar27++;
			}
		}
		iVar26++;
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, iVar27);
	iVar1 = func_44(0, iVar27, iVar0, -1, -1);
	iVar2 = func_44(0, iVar27, iVar0, iVar1, -1);
	if (iVar1 == -1 || iVar2 == -1)
	{
		iLocal_889++;
		if (iLocal_889 >= 100)
		{
			iVar0 = 0;
			iVar1 = 1;
			iVar2 = 2;
		}
		else
		{
			return 0;
		}
	}
	if (func_43() >= 1)
	{
		func_38(iVar3[iVar0], 0);
		func_37(iVar3[iVar0], 24);
	}
	if (func_43() >= 2)
	{
		func_38(iVar3[iVar1], 1);
		func_37(iVar3[iVar1], 25);
	}
	if (func_43() >= 3)
	{
		func_38(iVar3[iVar2], 2);
		func_37(iVar3[iVar2], 26);
	}
	return 1;
}

void func_37(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_5), iParam1);
}

void func_38(int iParam0, int iParam1)
{
	switch (func_42())
	{
		case 230:
			switch (iParam1)
			{
				case 0:
					func_41(iParam0, 28);
					Local_933.f_626[iParam1] = 516505552;
					break;
				
				case 1:
					func_41(iParam0, 29);
					Local_933.f_626[iParam1] = 390939205;
					break;
				
				case 2:
					func_41(iParam0, 29);
					Local_933.f_626[iParam1] = 516505552;
					break;
			}
			break;
		
		case 231:
			switch (iParam1)
			{
				case 0:
					func_41(iParam0, 30);
					Local_933.f_626[iParam1] = 2010389054;
					break;
				
				case 1:
					func_40(iParam0, 1);
					Local_933.f_626[iParam1] = 1755064960;
					break;
				
				case 2:
					func_40(iParam0, 1);
					Local_933.f_626[iParam1] = 2010389054;
					break;
			}
			break;
		
		case 232:
			switch (iParam1)
			{
				case 0:
					func_41(iParam0, 19);
					Local_933.f_626[iParam1] = 1264920838;
					break;
				
				case 1:
					func_41(iParam0, 20);
					Local_933.f_626[iParam1] = 1004114196;
					break;
				
				case 2:
					func_41(iParam0, 20);
					Local_933.f_626[iParam1] = 1264920838;
					break;
			}
			break;
		
		case 233:
			switch (iParam1)
			{
				case 0:
					func_39(iParam0, 21);
					Local_933.f_626[iParam1] = -730659924;
					break;
				
				case 1:
					func_40(iParam0, 1);
					Local_933.f_626[iParam1] = -1420211530;
					break;
				
				case 2:
					func_40(iParam0, 1);
					Local_933.f_626[iParam1] = -1286380898;
					break;
			}
			break;
		
		case 234:
			switch (iParam1)
			{
				case 0:
					func_41(iParam0, 27);
					Local_933.f_626[iParam1] = -407694286;
					break;
				
				case 1:
					func_41(iParam0, 21);
					Local_933.f_626[iParam1] = -598109171;
					break;
				
				case 2:
					func_41(iParam0, 29);
					Local_933.f_626[iParam1] = -1404353274;
					break;
			}
			break;
	}
}

void func_39(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_3), iParam1);
}

void func_40(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_4), iParam1);
}

void func_41(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_6), iParam1);
}

int func_42()
{
	return Local_933.f_6;
}

int func_43()
{
	return Local_933.f_507;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = unk_0x09AC81E49EA267F7(iParam0, iParam1);
	if ((iVar0 == iParam2 || iVar0 == iParam3) || iVar0 == iParam4)
	{
		return -1;
	}
	return iVar0;
}

bool func_45(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_453[iParam0], iParam1);
}

void func_46()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_933.f_581[iVar0] = -1216765807;
		iVar0++;
	}
}

int func_47()
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 4);
	iVar1 = func_44(0, 4, iVar0, -1, -1);
	iVar2 = func_44(0, 4, iVar0, iVar1, -1);
	iVar3 = func_44(0, 4, iVar0, iVar1, iVar2);
	if ((iVar1 == -1 || iVar2 == -1) || iVar3 == -1)
	{
		iLocal_889++;
		if (iLocal_889 >= 100)
		{
			iVar0 = 3;
			iVar1 = 2;
			iVar2 = 0;
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	Local_933.f_576[0] = iVar0;
	Local_933.f_576[1] = iVar1;
	Local_933.f_576[2] = iVar2;
	Local_933.f_576[3] = iVar3;
	return 1;
}

int func_48()
{
	return -1;
}

void func_49()
{
	switch (func_106())
	{
		case 6:
			func_62(0, 8);
			func_62(1, 8);
			func_62(2, 8);
			func_62(3, 8);
			func_62(4, 8);
			func_62(5, 8);
			func_62(6, 8);
			func_62(7, 8);
			func_62(8, 8);
			func_62(9, 8);
			func_62(10, 8);
			func_62(11, 8);
			func_50();
			break;
	}
}

void func_50()
{
	iVar14 = 12;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		iVar15 = unk_0x09AC81E49EA267F7(0, iVar14);
		switch (iVar0)
		{
			case 0:
				func_62(iVar1[iVar15], 0);
				Local_933.f_585[0] = { func_51(iVar1[iVar15]) };
				break;
			
			case 1:
				func_62(iVar1[iVar15], 1);
				Local_933.f_585[1] = { func_51(iVar1[iVar15]) };
				break;
			
			case 2:
				func_62(iVar1[iVar15], 2);
				Local_933.f_585[2] = { func_51(iVar1[iVar15]) };
				break;
			
			case 3:
				func_62(iVar1[iVar15], 3);
				Local_933.f_585[3] = { func_51(iVar1[iVar15]) };
				break;
			
			case 4:
				func_62(iVar1[iVar15], 4);
				Local_933.f_585[4] = { func_51(iVar1[iVar15]) };
				break;
			
			case 5:
				func_62(iVar1[iVar15], 5);
				Local_933.f_585[5] = { func_51(iVar1[iVar15]) };
				break;
			
			case 6:
				func_62(iVar1[iVar15], 6);
				Local_933.f_585[6] = { func_51(iVar1[iVar15]) };
				break;
			
			case 7:
				func_62(iVar1[iVar15], 7);
				Local_933.f_585[7] = { func_51(iVar1[iVar15]) };
				break;
		}
		iVar16 = iVar1[(iVar14 - 1)];
		iVar1[(iVar14 - 1)] = iVar1[iVar15];
		iVar1[iVar15] = iVar16;
		iVar14 = (iVar14 - 1);
		iVar0++;
	}
}

Vector3 func_51(int iParam0)
{
	switch (func_106())
	{
		case 32:
			return func_61(iParam0);
		
		case 37:
			return func_60(iParam0);
		
		case 1:
			return func_59(iParam0);
		
		case 0:
			return func_58(iParam0);
		
		case 2:
			return func_57(iParam0);
		
		case 4:
			return func_56(iParam0);
		
		case 6:
			return func_55(iParam0);
		
		case 3:
			return func_54(iParam0);
		
		case 8:
			return func_53(iParam0);
		
		case 14:
			return func_52(iParam0);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_52(int iParam0)
{
	switch (func_42())
	{
		case 38:
			switch (iParam0)
			{
				case 0:
					return -1169,887f, -2031,279f, 12,2374f;
				
				case 1:
					return -1151,262f, -2046,568f, 12,186f;
				
				case 2:
					return -1177,845f, -2071,43f, 13,2404f;
				
				case 3:
					return -1165,517f, -2051,132f, 13,23f;
				
				case 4:
					return -1165,517f, -2051,132f, 13,45f;
				
				case 5:
					return -1165,517f, -2051,132f, 13,45f;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 0:
					return 1434,484f, -2280,204f, 66,104f;
				
				case 1:
					return 1435,418f, -2290,744f, 66,396f;
				
				case 2:
					return 1443,664f, -2279,3f, 66,261f;
				
				case 3:
					return 1434,367f, -2285,871f, 65,8053f;
				
				case 4:
					return 1434,367f, -2285,871f, 66,0053f;
				
				case 5:
					return 1434,367f, -2285,871f, 66,0053f;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 0:
					return 2940,028f, 2787,441f, 39,563f;
				
				case 1:
					return 2945,585f, 2772,879f, 38,217f;
				
				case 2:
					return 2954,008f, 2780,874f, 40,105f;
				
				case 3:
					return 2943,185f, 2776,365f, 38,2086f;
				
				case 4:
					return 2943,185f, 2776,365f, 38,4086f;
				
				case 5:
					return 2954,547f, 2786,988f, 41,062f;
				
				case 6:
					return 2954,547f, 2786,988f, 41,062f;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 0:
					return 3689,49f, 4551,439f, 24,461f;
				
				case 1:
					return 3691,515f, 4549,038f, 24,46f;
				
				case 2:
					return 3700,198f, 4549,598f, 24,077f;
				
				case 3:
					return 3688,927f, 4566,872f, 24,1199f;
				
				case 4:
					return 3688,927f, 4566,872f, 24,3199f;
				
				case 5:
					return 3688,927f, 4566,872f, 24,3199f;
				
				default:
			}
			break;
	}
	return -1170,291f, -2031,559f, 12,428f;
}

Vector3 func_53(int iParam0)
{
	switch (func_42())
	{
		case 64:
			switch (iParam0)
			{
				case 0:
					return 1527,33f, 792,887f, 76,4583f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return 1451,048f, 6492,402f, 19,468f;
				
				default:
			}
			break;
	}
	return 1527,33f, 792,887f, 76,4583f;
}

Vector3 func_54(int iParam0)
{
	switch (func_42())
	{
		case 74:
			switch (iParam0)
			{
				case 0:
					return -500,1698f, 5185,4f, 89,3084f;
				
				case 1:
					return -513,2891f, 5177,163f, 90,0205f;
				
				case 2:
					return -514,2963f, 5195,65f, 87,4422f;
				
				case 3:
					return -507,5084f, 5168,971f, 88,9131f;
				
				case 4:
					return -506,067f, 5167,793f, 89,0455f;
				
				case 5:
					return -495,8642f, 5167,178f, 87,562f;
				
				case 6:
					return -497,1675f, 5164,553f, 87,365f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return 2198,394f, -609,8857f, 98,4014f;
				
				case 1:
					return 2189,221f, -634,1282f, 93,5437f;
				
				case 2:
					return 2166,738f, -614,8666f, 95,7341f;
				
				case 3:
					return 2190,831f, -623,8657f, 96,9587f;
				
				case 4:
					return 2184,943f, -617,2799f, 95,5584f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return 666,9285f, -1323,955f, 21,116f;
				
				case 1:
					return 671,1415f, -1309,092f, 23,2069f;
				
				case 2:
					return 672,8722f, -1332,248f, 23,8516f;
				
				case 3:
					return 662,7617f, -1310,583f, 21,9354f;
				
				case 4:
					return 661,6511f, -1305,37f, 21,9551f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return 1591,707f, 3384,391f, 38,202f;
				
				case 1:
					return 1573,641f, 3369,604f, 35,586f;
				
				case 2:
					return 1586,375f, 3371,639f, 36,4039f;
				
				case 3:
					return 1582,588f, 3374,218f, 35,8536f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_55(int iParam0)
{
	switch (func_42())
	{
		case 25:
			switch (iParam0)
			{
				case 0:
					return -442,1719f, -2647,225f, 7,761f;
				
				case 1:
					return -478,6793f, -2683,788f, 7,761f;
				
				case 2:
					return -494,2111f, -2708,784f, 7,7585f;
				
				case 3:
					return -402,2132f, -2591,849f, 12,6639f;
				
				case 4:
					return -491,5153f, -2680,082f, 7,7609f;
				
				case 5:
					return -505,3509f, -2700,425f, 7,758f;
				
				case 6:
					return -460,7979f, -2659,636f, 7,761f;
				
				case 7:
					return -390,1487f, -2595,549f, 12,6602f;
				
				case 8:
					return -426,1813f, -2617,948f, 7,761f;
				
				case 9:
					return -412,4378f, -2623,608f, 7,7609f;
				
				case 10:
					return -499,662f, -2697,702f, 13,4937f;
				
				case 11:
					return -496,1714f, -2701,201f, 13,4937f;
				
				case 12:
					return -493,748f, -2682,11f, 7,762f;
				
				case 13:
					return -389,522f, -2597,577f, 12,663f;
				
				case 14:
					return -404,614f, -2592,716f, 12,659f;
				
				case 15:
					return -492,719f, -2707,515f, 7,766f;
				
				case 16:
					return -440,003f, -2638,155f, 7,765f;
				
				case 17:
					return -439,984f, -2648,666f, 7,765f;
				
				case 18:
					return -424,813f, -2637,722f, 7,761f;
				
				case 19:
					return -455,645f, -2670,724f, 8,525f;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 0:
					return 1088,556f, -2285,108f, 29,186f;
				
				case 1:
					return 1089,662f, -2275,215f, 29,168f;
				
				case 2:
					return 1087,46f, -2305,076f, 31,918f;
				
				case 3:
					return 1075,367f, -2318,78f, 29,299f;
				
				case 4:
					return 1100,477f, -2226,646f, 30,309f;
				
				case 5:
					return 1091,972f, -2248,184f, 29,299f;
				
				case 6:
					return 1111,444f, -2307,025f, 29,462f;
				
				case 7:
					return 1106,506f, -2346,51f, 29,376f;
				
				case 8:
					return 1082,672f, -2354,977f, 29,282f;
				
				case 9:
					return 1089,64f, -2368,025f, 29,393f;
				
				case 10:
					return 1123,222f, -2247,949f, 29,253f;
				
				case 11:
					return 1092,564f, -2231,02f, 29,318f;
				
				case 12:
					return 1093,044f, -2232,867f, 29,31f;
				
				case 13:
					return 1089,828f, -2371,056f, 30,272f;
				
				case 14:
					return 1105,614f, -2349,479f, 29,673f;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 0:
					return -34,84f, -1276,346f, 28,515f;
				
				case 1:
					return -36,844f, -1289,745f, 28,296f;
				
				case 2:
					return -8,172f, -1290f, 28,323f;
				
				case 3:
					return -21,529f, -1281,041f, 28,445f;
				
				case 4:
					return -9,009f, -1273,47f, 28,2907f;
				
				case 5:
					return -44,793f, -1302,164f, 28,163f;
				
				case 6:
					return -13,006f, -1296,023f, 28,347f;
				
				case 7:
					return -14,72f, -1276,19f, 28,301f;
				
				case 8:
					return -14,038f, -1310,482f, 28,263f;
				
				case 9:
					return -24,656f, -1307,375f, 28,274f;
				
				case 10:
					return -55,093f, -1326,822f, 28,263f;
				
				case 11:
					return -52,446f, -1323,593f, 28,247f;
				
				case 12:
					return -16,002f, -1296,389f, 29,116f;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 0:
					return 2731,2f, 1572,361f, 23,501f;
				
				case 1:
					return 2765,581f, 1573,208f, 23,501f;
				
				case 2:
					return 2777,938f, 1547,646f, 23,501f;
				
				case 3:
					return 2764,024f, 1562,729f, 23,501f;
				
				case 4:
					return 2745,839f, 1511,591f, 23,501f;
				
				case 5:
					return 2748,549f, 1538,587f, 23,501f;
				
				case 6:
					return 2721,82f, 1557,829f, 23,501f;
				
				case 7:
					return 2775,114f, 1527,981f, 29,791f;
				
				case 8:
					return 2760,273f, 1546,262f, 29,792f;
				
				case 9:
					return 2769,291f, 1583,272f, 29,7918f;
				
				case 10:
					return 2781,483f, 1556,733f, 29,7918f;
				
				case 11:
					return 2761,479f, 1550,813f, 29,7921f;
				
				case 12:
					return 2763,318f, 1574,115f, 23,504f;
				
				case 13:
					return 2744,111f, 1512,567f, 23,503f;
				
				case 14:
					return 2775,623f, 1548,422f, 23,6252f;
				
				case 15:
					return 2722,626f, 1560,018f, 23,6255f;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam0)
			{
				case 0:
					return 3477,017f, 3751,293f, 31,685f;
				
				case 1:
					return 3492,887f, 3743,161f, 35,643f;
				
				case 2:
					return 3523,505f, 3737,766f, 35,725f;
				
				case 3:
					return 3510,459f, 3708,166f, 35,643f;
				
				case 4:
					return 3528,272f, 3712,931f, 35,643f;
				
				case 5:
					return 3552,352f, 3702,005f, 35,642f;
				
				case 6:
					return 3571,758f, 3735,455f, 35,298f;
				
				case 7:
					return 3599,316f, 3733,867f, 35,311f;
				
				case 8:
					return 3563,968f, 3705,639f, 35,642f;
				
				case 9:
					return 3598,767f, 3700,73f, 35,643f;
				
				case 10:
					return 3470,778f, 3717,192f, 35,643f;
				
				case 11:
					return 3546,192f, 3732,215f, 35,643f;
				
				case 12:
					return 3527,793f, 3710,536f, 35,645f;
				
				case 13:
					return 3550,054f, 3701,449f, 35,645f;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam0)
			{
				case 0:
					return -1652,669f, 3012,946f, 30,825f;
				
				case 1:
					return -1637,742f, 3034,219f, 31,911f;
				
				case 2:
					return -1665,51f, 3051,072f, 30,824f;
				
				case 3:
					return -1669,357f, 3144,404f, 30,767f;
				
				case 4:
					return -1673,302f, 3118,891f, 30,721f;
				
				case 5:
					return -1644,529f, 3162,38f, 31,839f;
				
				case 6:
					return -1605,47f, 3065,364f, 31,566f;
				
				case 7:
					return -1595,738f, 3102,136f, 31,566f;
				
				case 8:
					return -1592,932f, 3056,168f, 31,566f;
				
				case 9:
					return -1609,624f, 3083,918f, 31,566f;
				
				case 10:
					return -1666,483f, 3038,523f, 30,824f;
				
				case 11:
					return -1654,389f, 3110,779f, 30,717f;
				
				case 12:
					return -1598,422f, 3102,39f, 31,568f;
				
				case 13:
					return -1609,434f, 3081,63f, 32,33f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_56(int iParam0)
{
	switch (func_42())
	{
		case 19:
			switch (iParam0)
			{
				case 0:
					return 148,523f, -3184,808f, 5,621f;
				
				case 1:
					return 157,755f, -3190,156f, 6,038f;
				
				case 2:
					return 145,169f, -3190,652f, 4,982f;
				
				case 3:
					return 143,982f, -3178,865f, 5,812f;
				
				case 4:
					return 141,286f, -3184,234f, 4,982f;
				
				case 5:
					return 153,155f, -3189,127f, 5,302f;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return -953,694f, 599,75f, 108,317f;
				
				case 1:
					return -953,221f, 608,722f, 108,68f;
				
				case 2:
					return -955,163f, 609,369f, 108,68f;
				
				case 3:
					return -948,242f, 594,108f, 104,462f;
				
				case 4:
					return -939,837f, 597,227f, 104,462f;
				
				case 5:
					return -944,722f, 605,992f, 108,68f;
				
				case 6:
					return -946,668f, 606,61f, 108,68f;
				
				case 7:
					return -949,839f, 610,624f, 108,689f;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 344,9007f, -1251,28f, 31,5103f;
				
				case 1:
					return 351,773f, -1234,232f, 31,5117f;
				
				case 2:
					return 350,8794f, -1236,38f, 31,5117f;
				
				case 3:
					return 343,2916f, -1242,774f, 31,8273f;
				
				default:
			}
			break;
		
		case 22:
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					return -1868,4f, 2075,907f, 140,002f;
				
				case 1:
					return -1867f, 2079,539f, 140,002f;
				
				case 2:
					return -1886,376f, 2083,124f, 140,003f;
				
				case 3:
					return -1884,955f, 2086,993f, 140,002f;
				
				case 4:
					return -1864,194f, 2072,042f, 139,999f;
				
				case 5:
					return -1893,375f, 2089,929f, 139,997f;
				
				case 6:
					return -1887,196f, 2076,825f, 140,761f;
				
				case 7:
					return -1885,451f, 2075,939f, 140,761f;
				
				case 8:
					return -1862,697f, 2073,759f, 140,76f;
				
				case 9:
					return -1876,129f, 2088,101f, 140,758f;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					return 1799,084f, 3910,457f, 32,8623f;
				
				default:
			}
			break;
	}
	return 148,523f, -3184,808f, 5,621f;
}

Vector3 func_57(int iParam0)
{
	switch (func_42())
	{
		case 13:
			switch (iParam0)
			{
				case 0:
					return 1592,741f, 3593,958f, 37,7742f;
				
				case 1:
					return 1597,637f, 3586,94f, 37,7742f;
				
				case 2:
					return 1605,176f, 3568,496f, 37,7829f;
				
				case 3:
					return 1599,179f, 3580,86f, 37,7742f;
				
				case 4:
					return 1576,724f, 3617,035f, 37,7829f;
				
				case 5:
					return 1590,065f, 3588,651f, 37,7765f;
				
				case 6:
					return 1600,959f, 3568,639f, 38,2251f;
				
				case 7:
					return 1595,268f, 3584,632f, 38,2164f;
				
				case 8:
					return 1590,87f, 3593,134f, 38,2164f;
				
				case 9:
					return 1580,492f, 3614,672f, 38,2251f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					return 2318,432f, 2585,554f, 45,65f;
				
				case 1:
					return 2326,069f, 2580,444f, 45,6628f;
				
				case 2:
					return 2325,831f, 2573,043f, 45,6677f;
				
				case 3:
					return 2318,946f, 2570,519f, 45,6677f;
				
				case 4:
					return 2315,638f, 2571,771f, 45,6677f;
				
				case 5:
					return 2314,201f, 2579,745f, 45,6633f;
				
				case 6:
					return 2315,265f, 2578,273f, 45,6665f;
				
				case 7:
					return 2321,217f, 2575,157f, 45,6677f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					return 1350,854f, 3276,541f, 36,619f;
				
				case 1:
					return 1353,208f, 3264,837f, 37,469f;
				
				case 2:
					return 1357,088f, 3275,81f, 36,873f;
				
				case 3:
					return 1361,947f, 3272,855f, 37,189f;
				
				case 4:
					return 1361,604f, 3269,102f, 37,42f;
				
				case 5:
					return 1353,855f, 3265,847f, 37,432f;
				
				case 6:
					return 1354,877f, 3269,529f, 37,41f;
				
				case 7:
					return 1355,116f, 3273,781f, 37,134f;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					return 601,5241f, -423,6442f, 23,7476f;
				
				case 1:
					return 606,8229f, -437,1162f, 23,7449f;
				
				case 2:
					return 606,1436f, -443,9395f, 23,7449f;
				
				case 3:
					return 605,3414f, -452,1189f, 23,7449f;
				
				case 4:
					return 597,3616f, -436,941f, 23,9446f;
				
				case 5:
					return 601,5187f, -442,3731f, 23,7476f;
				
				case 6:
					return 600,4033f, -442,6918f, 23,7449f;
				
				case 7:
					return 597,1152f, -454,9978f, 23,9446f;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					return -434,868f, -2165,989f, 9,3196f;
				
				case 1:
					return -435,3788f, -2164,907f, 9,3181f;
				
				case 2:
					return -428,1313f, -2168,294f, 9,3282f;
				
				case 3:
					return -436,509f, -2178,259f, 9,3278f;
				
				case 4:
					return -447,0417f, -2175,996f, 9,5179f;
				
				case 5:
					return -444,6164f, -2182,521f, 9,3182f;
				
				case 6:
					return -440,3467f, -2182,621f, 9,324f;
				
				case 7:
					return -436,8156f, -2181,036f, 9,5266f;
				
				case 8:
					return -441,206f, -2168,144f, 9,443f;
				
				case 9:
					return -442,0404f, -2176,756f, 9,4483f;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					return -1106,622f, -1665,932f, 6,4f;
				
				case 1:
					return -1106,427f, -1664,26f, 6,3571f;
				
				case 2:
					return -1104,948f, -1666,527f, 6,3571f;
				
				case 3:
					return -1091,008f, -1655,891f, 6,3569f;
				
				case 4:
					return -1096,825f, -1657,553f, 6,3553f;
				
				case 5:
					return -1096,695f, -1660,365f, 9,1832f;
				
				case 6:
					return -1097,005f, -1661,374f, 9,1832f;
				
				case 7:
					return -1092,575f, -1652,444f, 9,3564f;
				
				case 8:
					return -1101,834f, -1661,997f, 9,3622f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_58(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 2209,837f, 5590,353f, 53,204f;
				
				case 1:
					return 2210,522f, 5592,961f, 53,146f;
				
				case 2:
					return 2240f, 5598,741f, 53,072f;
				
				case 3:
					return 2194,608f, 5610,109f, 52,688f;
				
				case 4:
					return 2192,345f, 5601,136f, 52,65f;
				
				case 5:
					return 2198,182f, 5601,025f, 52,597f;
				
				case 6:
					return 2200,315f, 5610,95f, 52,787f;
				
				case 7:
					return 2216,589f, 5611,688f, 53,578f;
				
				case 8:
					return 2197,458f, 5596,338f, 53,095f;
				
				case 9:
					return 2191,671f, 5595,482f, 52,897f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1542,192f, 6338,161f, 23,0812f;
				
				case 1:
					return 1544,427f, 6336,8f, 23,0806f;
				
				case 2:
					return 1539,07f, 6333,663f, 23,0706f;
				
				case 3:
					return 1540,444f, 6332,714f, 23,0715f;
				
				case 4:
					return 1541,894f, 6331,986f, 23,0736f;
				
				case 5:
					return 1537,679f, 6334,28f, 23,0696f;
				
				case 6:
					return 1543,437f, 6331,061f, 23,2f;
				
				case 7:
					return 1516,123f, 6336,166f, 23,234f;
				
				case 8:
					return 1528,36f, 6334,409f, 23,459f;
				
				case 9:
					return 1522,95f, 6346,529f, 23,176f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1538,824f, 1700,8f, 108,6628f;
				
				case 1:
					return 1539,291f, 1703,326f, 108,6565f;
				
				case 2:
					return 1532,281f, 1706,082f, 108,7961f;
				
				case 3:
					return 1533,839f, 1705,354f, 108,7375f;
				
				case 4:
					return 1535,61f, 1705,161f, 108,7016f;
				
				case 5:
					return 1537,653f, 1705,214f, 108,6766f;
				
				case 6:
					return 1528,779f, 1705,389f, 108,8073f;
				
				case 7:
					return 1539,613f, 1708,56f, 108,894f;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 107,1676f, -1975,191f, 19,9544f;
				
				case 1:
					return 104,9169f, -1976,083f, 19,9594f;
				
				case 2:
					return 95,4142f, -1984,5f, 19,4436f;
				
				case 3:
					return 120,1053f, -1976,865f, 19,9325f;
				
				case 4:
					return 120,5012f, -1978,31f, 19,9414f;
				
				case 5:
					return 118,8375f, -1979,09f, 19,9241f;
				
				case 6:
					return 112,7897f, -1980,331f, 20,0028f;
				
				case 7:
					return 114,1847f, -1980,419f, 19,9759f;
				
				case 8:
					return 103,5307f, -1971,867f, 19,8779f;
				
				case 9:
					return 99,2668f, -1977,509f, 19,8007f;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1339,277f, -518,065f, 71,066f;
				
				case 1:
					return 1340,389f, -520,167f, 71,066f;
				
				case 2:
					return 1342,037f, -518,949f, 71,066f;
				
				case 3:
					return 1340,714f, -518,385f, 71,066f;
				
				case 4:
					return 1341,749f, -517,352f, 71,066f;
				
				case 5:
					return 1333,211f, -520,623f, 71,066f;
				
				case 6:
					return 1331,667f, -520,031f, 71,066f;
				
				case 7:
					return 1330,478f, -519,62f, 71,066f;
				
				case 8:
					return 1339,297f, -528,317f, 71,356f;
				
				case 9:
					return 1342,426f, -529,7f, 71,551f;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return -1878,131f, 246,899f, 85,064f;
				
				case 1:
					return -1890,269f, 261,155f, 85,256f;
				
				case 2:
					return -1889,204f, 268,0821f, 85,4544f;
				
				case 3:
					return -1888,132f, 266,0371f, 85,4546f;
				
				case 4:
					return -1882,019f, 272,0897f, 85,4544f;
				
				case 5:
					return -1881,235f, 270,5648f, 85,4546f;
				
				case 6:
					return -1883,547f, 271,3698f, 85,4544f;
				
				case 7:
					return -1885,408f, 270,234f, 85,4544f;
				
				case 8:
					return -1887,185f, 269,1834f, 85,4544f;
				
				case 9:
					return -1885,876f, 254,1726f, 85,0613f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_59(int iParam0)
{
	switch (func_42())
	{
		case 7:
			switch (iParam0)
			{
				case 0:
					return 149,5056f, 321,186f, 111,1413f;
				
				case 1:
					return 145,5894f, 313,9755f, 111,1399f;
				
				case 2:
					return 137,2878f, 310,8617f, 111,1413f;
				
				case 3:
					return 126,8432f, 307,8894f, 111,2522f;
				
				case 4:
					return 124,8953f, 308,6154f, 111,2524f;
				
				case 5:
					return 122,7206f, 309,4104f, 111,1263f;
				
				case 6:
					return 150,5452f, 319,0387f, 111,2632f;
				
				case 7:
					return 134,7344f, 319,4543f, 111,2632f;
				
				case 8:
					return 137,5059f, 309,17f, 111,58f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 180,2215f, -1248,609f, 28,2748f;
				
				case 1:
					return 180,8905f, -1246,555f, 28,2748f;
				
				case 2:
					return 166,1979f, -1246,536f, 28,1998f;
				
				case 3:
					return 151,8316f, -1253,35f, 28,1998f;
				
				case 4:
					return 158,2437f, -1244,102f, 28,2052f;
				
				case 5:
					return 159,0952f, -1245,816f, 28,2052f;
				
				case 6:
					return 163,1736f, -1253,485f, 28,4166f;
				
				case 7:
					return 150,0007f, -1238,146f, 28,323f;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1354,47f, 476,7088f, 102,8654f;
				
				case 1:
					return -1372,564f, 479,2037f, 103,8624f;
				
				case 2:
					return -1369,492f, 488,6752f, 103,5984f;
				
				case 3:
					return -1359,106f, 499,8156f, 102,8987f;
				
				case 4:
					return -1354,724f, 493,6383f, 102,8976f;
				
				case 5:
					return -1351,173f, 491,9337f, 103,016f;
				
				case 6:
					return -1358,222f, 486,42f, 102,9618f;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return 2603,456f, 2811,399f, 32,7565f;
				
				case 1:
					return 2611,24f, 2816,071f, 32,6299f;
				
				case 2:
					return 2618,589f, 2801,21f, 32,694f;
				
				case 3:
					return 2596,484f, 2818,215f, 32,7556f;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					return -2769,258f, 1441,665f, 100,083f;
				
				case 1:
					return -2764,561f, 1437,394f, 100,081f;
				
				case 2:
					return -2776,489f, 1424,865f, 99,931f;
				
				case 3:
					return -2778,164f, 1433,458f, 99,942f;
				
				case 4:
					return -2784,938f, 1427,143f, 100,053f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return 719,982f, 4170,399f, 39,712f;
				
				case 1:
					return 708,417f, 4174,94f, 39,782f;
				
				case 2:
					return 710,969f, 4182,493f, 40,473f;
				
				case 3:
					return 727,411f, 4175,81f, 39,716f;
				
				case 4:
					return 728,008f, 4177,104f, 39,716f;
				
				case 5:
					return 727,451f, 4178,085f, 40,172f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_60(int iParam0)
{
	switch (func_42())
	{
		case 231:
			switch (iParam0)
			{
				case 0:
					return -1761,004f, -262,566f, 47,415f;
				
				case 1:
					return -1761,715f, -260,426f, 48,124f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_61(int iParam0)
{
	switch (func_42())
	{
		case 195:
			switch (iParam0)
			{
				case 0:
					return 1623,662f, 1859,398f, 101f;
				
				case 1:
					return 1610,148f, 1848,839f, 102,1518f;
				
				case 2:
					return 1611,81f, 1868,603f, 101,0888f;
				
				default:
			}
			break;
		
		case 196:
			switch (iParam0)
			{
				case 0:
					return 1881,855f, 265,177f, 160,88f;
				
				case 1:
					return 1872,152f, 253,152f, 161,899f;
				
				case 2:
					return 1879,675f, 282,137f, 161,758f;
				
				default:
			}
			break;
		
		case 197:
			switch (iParam0)
			{
				case 0:
					return -174,424f, 817,3596f, 202,0046f;
				
				case 1:
					return -232,8233f, 740,2721f, 199,6616f;
				
				case 2:
					return -178,4178f, 783,711f, 194,55f;
				
				default:
			}
			break;
		
		case 198:
			switch (iParam0)
			{
				case 0:
					return -478,082f, -1141,492f, 23,536f;
				
				case 1:
					return -469,9f, -1128,833f, 26,168f;
				
				case 2:
					return -485,674f, -1160,378f, 20,593f;
				
				default:
			}
			break;
		
		case 199:
			switch (iParam0)
			{
				case 0:
					return -3094,319f, 506,952f, 0,051f;
				
				case 1:
					return -3079,157f, 497,4973f, 1,3682f;
				
				case 2:
					return -3083,236f, 516,8828f, 1,3573f;
				
				default:
			}
			break;
	}
	return 1610,148f, 1848,839f, 102,1518f;
}

void func_62(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_462[iParam0]), iParam1);
}

void func_63()
{
	switch (func_106())
	{
		case 25:
			func_66(0, 0);
			func_66(1, 1);
			break;
		
		case 24:
			func_66(0, 11);
			func_66(1, 12);
			func_66(2, 13);
			func_66(3, 14);
			func_66(4, 0);
			func_66(5, 1);
			break;
		
		case 28:
			func_66(0, 3);
			func_66(1, 2);
			func_66(2, 4);
			func_66(3, 5);
			func_66(4, 6);
			break;
		
		case 29:
			func_66(0, 7);
			func_66(1, 8);
			if (func_42() != 208)
			{
				func_66(2, 9);
			}
			func_66(3, 0);
			func_66(4, 1);
			break;
		
		case 30:
			if (func_43() >= 1)
			{
				func_66(0, 10);
			}
			if (func_43() >= 2)
			{
				func_66(1, 29);
			}
			if (func_43() >= 3)
			{
				func_66(2, 30);
			}
			break;
		
		case 31:
			func_66(0, 10);
			func_66(1, 0);
			func_66(2, 1);
			break;
		
		case 32:
			func_66(0, 15);
			func_66(1, 16);
			break;
		
		case 33:
			func_66(0, 17);
			break;
		
		case 34:
			func_66(0, 18);
			func_66(1, 19);
			break;
		
		case 35:
			func_66(0, 20);
			func_66(1, 21);
			func_66(2, 22);
			func_66(3, 0);
			func_66(4, 1);
			break;
		
		case 36:
			func_66(0, 23);
			func_66(1, 0);
			func_66(2, 1);
			if (func_43() >= 2)
			{
				func_66(3, 25);
			}
			if (func_43() >= 3)
			{
				func_66(4, 26);
			}
			break;
		
		case 37:
			if (func_42() == 231)
			{
				func_66(0, 24);
			}
			break;
		
		case 39:
			if (func_43() >= 1)
			{
				func_66(0, 25);
			}
			if (func_43() >= 2)
			{
				func_66(1, 26);
			}
			if (func_43() >= 3)
			{
				func_66(2, 27);
			}
			break;
		
		case 38:
			func_65(0, 0);
			func_65(1, 1);
			func_65(2, 2);
			func_65(3, 3);
			if (func_6(5))
			{
				func_66(4, 28);
			}
			break;
		
		case 20:
			func_66(2, 0);
			func_66(3, 1);
			break;
		
		case 21:
			func_66(0, 0);
			func_66(1, 1);
			break;
		
		case 1:
			if ((func_42() == 7 || func_42() == 8) || func_42() == 12)
			{
				func_65(0, 9);
				func_65(1, 10);
			}
			func_66(2, 0);
			func_66(3, 1);
			break;
		
		case 8:
			func_65(0, 24);
			func_65(1, 25);
			func_65(2, 26);
			func_65(3, 27);
			func_66(4, 0);
			func_66(5, 1);
			break;
		
		case 0:
			switch (func_42())
			{
				case 1:
					func_65(0, 11);
					func_65(1, 12);
					func_65(2, 13);
					func_65(3, 14);
					func_65(4, 15);
					break;
				
				case 2:
					func_65(0, 11);
					func_65(1, 12);
					func_65(2, 13);
					func_65(3, 14);
					break;
				
				case 3:
					func_65(0, 11);
					func_65(1, 12);
					break;
				
				case 4:
					break;
				
				case 5:
					func_65(0, 11);
					break;
				
				case 6:
					break;
			}
			func_66(5, 0);
			func_66(6, 1);
			break;
		
		case 2:
			switch (func_42())
			{
				case 13:
					break;
				
				case 14:
					func_64(0, 14);
					func_64(1, 15);
					break;
				
				case 15:
					func_64(0, 14);
					func_64(1, 15);
					func_64(2, 16);
					func_64(3, 17);
					break;
				
				case 16:
					func_64(0, 14);
					break;
				
				case 17:
					func_64(0, 14);
					break;
				
				case 18:
					break;
			}
			func_66(4, 0);
			func_66(5, 1);
			break;
		
		case 4:
			switch (Local_933.f_3)
			{
				case 83:
					func_65(0, 16);
					func_65(1, 17);
					func_65(2, 18);
					break;
				
				case 84:
					func_65(0, 16);
					func_65(1, 17);
					break;
				
				case 85:
					func_65(0, 16);
					func_65(1, 17);
					func_65(2, 18);
					func_65(5, 29);
					break;
				
				case 86:
					break;
				
				case 87:
					func_65(0, 16);
					func_65(1, 17);
					break;
				
				case 88:
					func_65(0, 16);
					func_65(1, 17);
					func_65(2, 18);
					break;
			}
			func_66(3, 0);
			func_66(4, 1);
			break;
		
		case 5:
			switch (Local_933.f_3)
			{
				case 95:
					func_65(0, 19);
					func_65(1, 20);
					func_65(2, 21);
					break;
				
				case 97:
					func_65(0, 19);
					break;
				
				case 96:
					break;
				
				case 98:
					func_65(0, 19);
					func_65(1, 20);
					func_65(2, 21);
					break;
				
				case 99:
					func_65(0, 19);
					func_65(1, 20);
					func_65(2, 21);
					break;
				
				case 100:
					func_65(0, 19);
					func_65(1, 20);
					func_65(2, 21);
					break;
			}
			func_66(3, 0);
			func_66(4, 1);
			break;
		
		case 3:
			func_65(0, 23);
			break;
		
		case 12:
			if (func_2346() >= 1)
			{
				func_64(0, 0);
				func_64(1, 1);
				func_64(2, 2);
			}
			if (func_2346() >= 2)
			{
				func_64(3, 3);
			}
			if (func_2346() >= 3)
			{
				func_64(4, 4);
			}
			if (func_2346() >= 4)
			{
				func_64(5, 5);
			}
			if (func_2346() >= 5)
			{
				func_64(6, 6);
			}
			if (func_2346() >= 6)
			{
				func_64(7, 7);
			}
			if (func_2346() >= 7)
			{
				func_64(8, 8);
			}
			if (func_2346() >= 8)
			{
				func_64(9, 9);
			}
			break;
		
		case 13:
			func_65(0, 28);
			func_66(1, 0);
			func_66(2, 1);
			break;
		
		case 14:
			func_64(0, 10);
			func_64(1, 11);
			func_64(2, 12);
			func_64(3, 13);
			break;
	}
}

void func_64(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_404[iParam0].f_4), iParam1);
}

void func_65(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_404[iParam0].f_3), iParam1);
}

void func_66(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_404[iParam0].f_2), iParam1);
}

void func_67()
{
	switch (func_106())
	{
		case 21:
			func_85(0, 0);
			func_85(1, 14);
			func_85(2, 15);
			func_85(3, 16);
			func_85(4, 17);
			break;
		
		case 26:
			func_85(0, 1);
			if (func_42() == 218)
			{
				func_41(0, 25);
			}
			else if (func_42() == 216)
			{
				func_39(0, 24);
			}
			else
			{
				func_39(0, 23);
			}
			func_85(1, 2);
			func_39(1, 21);
			func_85(2, 3);
			if (func_42() == 217)
			{
				func_41(2, 25);
			}
			else if (func_42() == 219)
			{
				func_39(2, 20);
			}
			else
			{
				func_39(2, 24);
			}
			func_85(3, 4);
			if (func_42() == 216)
			{
				func_39(3, 20);
			}
			else
			{
				func_39(3, 24);
			}
			break;
		
		case 27:
			func_85(0, 5);
			break;
		
		case 24:
			func_85(0, 7);
			func_39(0, 21);
			func_85(1, 8);
			func_39(1, 20);
			func_85(2, 9);
			func_39(2, 24);
			func_39(3, 14);
			func_39(3, 24);
			func_39(4, 15);
			func_39(4, 23);
			func_85(5, 10);
			func_39(5, 22);
			func_85(6, 11);
			func_39(6, 24);
			func_85(7, 12);
			func_39(7, 24);
			func_39(8, 16);
			func_39(8, 23);
			func_39(9, 17);
			func_39(9, 20);
			func_85(10, 14);
			func_85(11, 16);
			break;
		
		case 25:
			func_85(0, 14);
			func_85(1, 15);
			func_85(2, 16);
			func_85(3, 17);
			break;
		
		case 28:
			func_85(0, 18);
			func_85(1, 19);
			func_85(2, 20);
			func_85(3, 26);
			func_85(4, 27);
			func_85(5, 22);
			func_85(6, 23);
			func_85(7, 24);
			func_39(8, 10);
			func_39(9, 11);
			func_39(10, 12);
			func_39(11, 13);
			break;
		
		case 29:
			func_85(0, 28);
			func_39(0, 22);
			func_85(1, 29);
			func_39(1, 20);
			func_39(2, 4);
			func_41(2, 18);
			func_39(3, 5);
			func_39(3, 23);
			func_85(4, 30);
			func_39(4, 24);
			func_85(5, 31);
			func_41(5, 18);
			func_39(6, 0);
			func_39(6, 24);
			func_39(7, 3);
			func_39(7, 24);
			func_39(8, 1);
			func_39(8, 22);
			func_39(9, 2);
			func_41(9, 18);
			func_85(10, 14);
			func_85(11, 16);
			break;
		
		case 30:
			if (func_43() >= 1)
			{
				func_39(0, 6);
				func_39(1, 8);
				func_39(2, 9);
			}
			if (func_43() >= 2)
			{
				func_84(3, 0);
				func_84(4, 1);
				func_84(5, 2);
			}
			if (func_43() >= 3)
			{
				func_84(6, 3);
				func_84(7, 4);
				func_84(8, 5);
			}
			break;
		
		case 31:
			func_39(0, 6);
			func_39(1, 7);
			func_39(2, 8);
			func_39(3, 9);
			func_85(4, 14);
			func_85(5, 15);
			func_85(6, 16);
			func_85(7, 17);
			if (func_43() >= 1)
			{
				func_83(0, 20);
				func_40(0, 16);
			}
			if (func_43() >= 2)
			{
				func_83(2, 21);
				func_40(2, 16);
			}
			if (func_43() >= 3)
			{
				func_83(3, 22);
				func_40(3, 16);
			}
			break;
		
		case 32:
			func_39(0, 25);
			func_39(1, 26);
			func_39(2, 27);
			func_39(3, 28);
			func_39(4, 29);
			func_39(5, 30);
			if (func_42() == 195)
			{
				func_39(6, 31);
			}
			func_82();
			break;
		
		case 33:
			func_40(1, 3);
			func_40(2, 4);
			if (func_43() >= 1)
			{
				func_40(0, 2);
				func_83(0, 20);
			}
			if (func_43() >= 2)
			{
				func_37(3, 6);
				func_83(4, 21);
			}
			if (func_43() >= 3)
			{
				func_37(4, 7);
				func_83(4, 22);
			}
			break;
		
		case 34:
			func_40(0, 5);
			func_40(1, 6);
			func_40(2, 7);
			func_40(3, 8);
			func_40(4, 9);
			func_40(5, 10);
			func_40(6, 11);
			func_40(7, 12);
			func_40(8, 13);
			func_40(9, 14);
			func_81();
			break;
		
		case 35:
			func_40(0, 19);
			func_40(1, 20);
			func_40(2, 21);
			func_40(3, 22);
			func_40(4, 23);
			func_40(5, 24);
			func_40(6, 25);
			func_40(7, 26);
			func_37(8, 0);
			func_37(9, 1);
			if (func_42() == 225 || func_42() == 228)
			{
				func_37(10, 2);
			}
			func_85(11, 14);
			func_85(12, 16);
			if (func_43() >= 1)
			{
				switch (func_42())
				{
					case 225:
						func_40(5, 18);
						break;
					
					case 226:
						func_40(5, 18);
						break;
					
					case 227:
						func_40(8, 18);
						break;
					
					case 228:
						func_40(9, 18);
						break;
					
					case 229:
						func_40(3, 18);
						break;
					}
			}
			if (func_43() >= 2)
			{
				switch (func_42())
				{
					case 225:
						func_40(10, 18);
						break;
					
					case 226:
						func_40(9, 18);
						break;
					
					case 227:
						func_40(9, 18);
						break;
					
					case 228:
						func_40(10, 18);
						break;
					
					case 229:
						func_40(9, 18);
						break;
					}
			}
			if (func_43() >= 3)
			{
				switch (func_42())
				{
					case 225:
						func_40(2, 18);
						break;
					
					case 226:
						func_40(4, 18);
						break;
					
					case 227:
						func_40(6, 18);
						break;
					
					case 228:
						func_40(2, 18);
						break;
					
					case 229:
						func_40(6, 18);
						break;
					}
			}
			break;
		
		case 36:
			func_37(0, 8);
			func_85(1, 14);
			func_85(2, 16);
			if (func_43() >= 2)
			{
				func_37(3, 28);
			}
			if (func_43() >= 3)
			{
				func_37(4, 29);
			}
			break;
		
		case 37:
			func_37(0, 9);
			func_80(0, 30);
			func_37(1, 10);
			func_39(1, 22);
			func_37(2, 11);
			func_39(2, 23);
			func_37(3, 12);
			func_80(3, 30);
			func_37(4, 13);
			func_39(4, 24);
			func_37(5, 14);
			func_39(5, 23);
			func_37(6, 15);
			func_39(6, 24);
			func_37(7, 16);
			func_80(7, 30);
			func_37(8, 17);
			func_39(8, 20);
			func_37(9, 18);
			func_39(9, 24);
			if (((func_42() == 231 || func_42() == 232) || func_42() == 233) || func_42() == 234)
			{
				func_37(10, 19);
				func_39(10, 23);
			}
			if ((func_42() == 231 || func_42() == 232) || func_42() == 234)
			{
				func_37(11, 20);
				func_80(11, 30);
			}
			if (func_42() == 231 || func_42() == 234)
			{
				func_37(12, 21);
				func_39(12, 24);
			}
			if (func_42() == 231)
			{
				func_37(13, 22);
				func_39(13, 20);
				func_37(14, 23);
				func_39(14, 22);
			}
			break;
		
		case 39:
			func_40(0, 30);
			func_37(1, 28);
			func_37(2, 29);
			func_37(3, 30);
			break;
		
		case 38:
			func_41(0, 0);
			func_41(1, 1);
			func_41(2, 2);
			func_41(3, 3);
			func_41(4, 4);
			func_41(5, 5);
			func_41(6, 6);
			func_41(7, 7);
			func_41(8, 8);
			if (func_6(5))
			{
				func_41(9, 13);
				func_41(10, 14);
			}
			break;
		
		case 1:
			func_80(0, 0);
			func_80(0, 10);
			func_80(1, 1);
			func_41(1, 30);
			func_80(2, 2);
			func_41(2, 30);
			func_80(3, 3);
			func_80(3, 11);
			func_80(4, 4);
			func_39(4, 20);
			func_80(5, 5);
			func_41(5, 30);
			func_80(6, 6);
			func_41(6, 30);
			func_80(7, 7);
			func_80(7, 10);
			func_80(8, 8);
			func_80(8, 10);
			func_80(9, 9);
			func_80(9, 11);
			func_85(10, 14);
			func_85(11, 16);
			break;
		
		case 20:
			if (func_79(25))
			{
				func_78(0, 29);
			}
			if (func_79(26))
			{
				func_78(1, 30);
			}
			func_85(2, 14);
			func_85(3, 16);
			break;
		
		case 11:
			func_83(0, 9);
			func_77(1, 1);
			func_77(2, 2);
			func_76();
			break;
		
		case 8:
			func_83(0, 3);
			func_83(1, 4);
			func_83(2, 5);
			switch (func_42())
			{
				case 62:
					func_39(2, 23);
					break;
				
				case 63:
					func_80(2, 27);
					break;
				
				case 64:
					func_80(2, 27);
					break;
				
				case 65:
					func_80(2, 10);
					break;
				
				case 66:
					func_80(2, 27);
					break;
				
				case 67:
					func_80(2, 10);
					break;
			}
			func_83(3, 6);
			switch (func_42())
			{
				case 62:
					func_39(3, 20);
					break;
				
				case 63:
					func_39(3, 20);
					break;
				
				case 64:
					func_39(3, 23);
					break;
				
				case 65:
					func_80(3, 27);
					break;
				
				case 66:
					func_80(3, 10);
					break;
				
				case 67:
					func_39(3, 20);
					break;
			}
			func_83(4, 7);
			switch (func_42())
			{
				case 62:
					func_80(4, 10);
					break;
				
				case 63:
					func_80(4, 10);
					break;
				
				case 64:
					func_80(4, 10);
					break;
				
				case 65:
					func_39(4, 20);
					break;
				
				case 66:
					func_39(4, 20);
					break;
				
				case 67:
					func_80(4, 12);
					break;
			}
			func_83(5, 8);
			switch (func_42())
			{
				case 62:
					func_80(5, 12);
					break;
				
				case 63:
					func_80(5, 12);
					break;
				
				case 64:
					func_39(5, 20);
					break;
				
				case 65:
					func_39(5, 23);
					break;
				
				case 66:
					func_39(5, 23);
					break;
				
				case 67:
					func_80(5, 12);
					break;
			}
			func_85(6, 14);
			func_85(7, 16);
			break;
		
		case 7:
			func_77(0, 4);
			func_77(1, 5);
			func_77(2, 6);
			func_77(3, 7);
			func_77(4, 8);
			func_77(5, 10);
			func_77(6, 9);
			func_77(7, 11);
			func_83(unk_0x09AC81E49EA267F7(0, 8), 28);
			switch (func_42())
			{
				case 42:
					func_80(0, 30);
					func_39(1, 20);
					func_80(2, 27);
					func_39(3, 20);
					break;
				
				case 43:
					func_39(0, 20);
					func_80(1, 30);
					func_41(2, 22);
					func_39(3, 20);
					break;
				
				case 44:
					func_80(0, 30);
					func_39(1, 20);
					func_80(2, 10);
					func_39(3, 20);
					break;
				
				case 45:
					func_39(0, 20);
					func_80(1, 30);
					func_80(2, 30);
					func_39(3, 20);
					break;
				
				case 46:
					func_80(0, 29);
					func_39(1, 20);
					func_80(2, 29);
					func_39(3, 20);
					break;
				
				case 47:
					func_80(0, 10);
					func_39(1, 20);
					func_80(2, 29);
					func_39(3, 20);
					break;
				
				case 48:
					func_80(0, 30);
					func_39(1, 20);
					func_39(2, 20);
					func_80(3, 30);
					break;
				
				case 49:
					func_80(0, 30);
					func_39(1, 20);
					func_41(2, 22);
					func_39(3, 20);
					break;
				
				case 50:
					func_39(0, 20);
					func_80(1, 30);
					func_80(2, 30);
					func_39(3, 20);
					break;
				
				case 51:
					func_80(0, 30);
					func_39(1, 20);
					func_80(2, 30);
					func_39(3, 20);
					break;
				
				case 52:
					func_80(0, 30);
					func_39(1, 20);
					func_41(2, 22);
					func_39(3, 20);
					break;
				
				case 53:
					func_80(0, 10);
					func_39(1, 20);
					func_75(2, 30);
					func_39(3, 20);
					break;
				
				case 54:
					func_80(0, 29);
					func_39(1, 20);
					func_39(2, 20);
					func_75(3, 30);
					break;
				
				case 55:
					func_80(0, 30);
					func_39(1, 20);
					func_80(2, 10);
					func_39(3, 20);
					break;
				
				case 56:
					func_39(0, 20);
					func_80(1, 30);
					func_80(2, 10);
					func_39(3, 20);
					break;
				
				case 57:
					func_41(0, 22);
					func_39(1, 20);
					func_80(2, 27);
					func_39(3, 20);
					break;
				
				case 58:
					func_80(0, 29);
					func_39(1, 20);
					func_80(2, 30);
					func_39(3, 20);
					break;
				
				case 59:
					func_40(0, 1);
					func_39(1, 20);
					func_39(2, 20);
					func_80(3, 30);
					break;
				
				case 60:
					func_80(0, 10);
					func_80(1, 30);
					func_39(2, 20);
					func_80(3, 30);
					break;
				
				case 61:
					func_80(0, 10);
					func_39(1, 20);
					func_80(2, 29);
					func_80(3, 30);
					break;
			}
			break;
		
		case 0:
			switch (func_42())
			{
				case 1:
					func_80(0, 13);
					func_39(0, 20);
					func_80(1, 14);
					func_41(1, 30);
					func_80(2, 15);
					func_41(2, 30);
					func_80(3, 16);
					func_80(3, 10);
					func_80(4, 17);
					func_80(4, 10);
					func_80(5, 18);
					func_80(5, 27);
					func_80(6, 19);
					func_80(6, 10);
					func_80(7, 20);
					func_80(7, 28);
					func_80(8, 21);
					func_41(8, 30);
					func_80(9, 22);
					func_41(9, 30);
					func_80(10, 23);
					func_41(10, 24);
					func_80(11, 24);
					func_41(11, 24);
					func_80(12, 25);
					func_80(12, 29);
					func_80(13, 26);
					func_80(13, 12);
					func_85(14, 14);
					func_85(15, 16);
					break;
				
				case 2:
					func_80(0, 13);
					func_80(0, 10);
					func_80(1, 14);
					func_80(1, 10);
					func_80(2, 15);
					func_80(2, 10);
					func_80(3, 16);
					func_41(3, 30);
					func_80(4, 17);
					func_41(4, 30);
					func_80(5, 18);
					func_80(5, 27);
					func_80(6, 19);
					func_80(6, 12);
					func_80(7, 20);
					func_80(7, 27);
					func_80(8, 21);
					func_39(8, 20);
					func_80(9, 22);
					func_80(9, 10);
					func_80(10, 23);
					func_41(10, 30);
					func_80(11, 24);
					func_41(11, 30);
					func_85(14, 14);
					func_85(15, 16);
					break;
				
				case 3:
					func_80(0, 13);
					func_80(0, 10);
					func_80(1, 14);
					func_41(1, 30);
					func_80(2, 15);
					func_41(2, 30);
					func_80(3, 16);
					func_80(3, 12);
					func_80(4, 17);
					func_80(4, 10);
					func_80(5, 18);
					func_80(5, 10);
					func_80(6, 19);
					func_80(6, 10);
					func_80(7, 20);
					func_80(7, 27);
					func_80(8, 21);
					func_80(8, 27);
					func_80(9, 22);
					func_41(9, 30);
					func_80(10, 23);
					func_41(10, 30);
					func_85(14, 14);
					func_85(15, 16);
					break;
				
				case 4:
					func_80(0, 13);
					func_80(0, 10);
					func_80(1, 14);
					func_80(1, 10);
					func_80(2, 15);
					func_80(2, 10);
					func_80(3, 16);
					func_39(3, 23);
					func_80(4, 17);
					func_80(4, 10);
					func_80(5, 18);
					func_41(5, 30);
					func_80(6, 19);
					func_41(6, 30);
					func_80(7, 20);
					func_41(7, 30);
					func_80(8, 21);
					func_41(8, 30);
					func_80(9, 22);
					func_39(9, 20);
					func_85(14, 14);
					func_85(15, 16);
					break;
				
				case 5:
					func_80(0, 13);
					func_80(0, 12);
					func_80(1, 14);
					func_80(1, 10);
					func_80(2, 15);
					func_80(2, 27);
					func_80(3, 16);
					func_39(3, 21);
					func_80(4, 17);
					func_80(4, 27);
					func_80(5, 18);
					func_80(5, 10);
					func_80(6, 19);
					func_80(6, 27);
					func_80(7, 20);
					func_41(7, 30);
					func_80(8, 21);
					func_41(8, 30);
					func_80(9, 22);
					func_39(9, 20);
					func_85(14, 14);
					func_85(15, 16);
					break;
				
				case 6:
					func_80(0, 13);
					func_80(0, 10);
					func_80(1, 14);
					func_80(1, 10);
					func_80(2, 15);
					func_80(2, 27);
					func_80(3, 16);
					func_41(3, 30);
					func_80(4, 17);
					func_41(4, 30);
					func_80(5, 18);
					func_39(5, 23);
					func_80(6, 19);
					func_39(6, 20);
					func_80(7, 20);
					func_80(7, 12);
					func_80(8, 21);
					func_41(8, 30);
					func_80(9, 22);
					func_41(9, 30);
					func_85(14, 14);
					func_85(15, 16);
					break;
			}
			break;
		
		case 2:
			switch (func_42())
			{
				case 13:
					func_74(0, 0);
					func_39(0, 22);
					func_74(0, 19);
					func_74(1, 1);
					func_80(1, 12);
					func_74(2, 2);
					func_39(2, 23);
					func_74(2, 19);
					func_74(3, 3);
					func_80(3, 12);
					func_74(3, 19);
					func_74(4, 4);
					func_80(4, 12);
					func_74(5, 5);
					func_41(5, 29);
					func_74(6, 6);
					func_41(6, 29);
					func_74(7, 7);
					func_41(7, 29);
					func_74(8, 8);
					func_41(8, 29);
					func_74(9, 9);
					func_80(9, 10);
					func_74(10, 10);
					func_41(10, 18);
					func_74(11, 11);
					func_41(11, 29);
					func_74(12, 12);
					func_80(12, 12);
					func_74(13, 13);
					func_80(13, 29);
					func_74(14, 14);
					func_80(14, 12);
					break;
				
				case 14:
					func_74(0, 0);
					func_80(0, 10);
					func_74(1, 1);
					func_39(1, 23);
					func_74(1, 19);
					func_74(2, 2);
					func_80(2, 10);
					func_74(3, 3);
					func_39(3, 21);
					func_74(4, 4);
					func_80(4, 10);
					func_74(5, 5);
					func_80(5, 29);
					func_74(5, 19);
					func_74(6, 6);
					func_41(6, 30);
					func_74(7, 7);
					func_41(7, 30);
					func_74(8, 8);
					func_41(8, 30);
					func_74(9, 9);
					func_41(9, 30);
					break;
				
				case 15:
					func_74(0, 0);
					func_39(0, 20);
					func_74(1, 1);
					func_39(1, 24);
					func_74(2, 2);
					func_80(2, 27);
					func_74(3, 3);
					func_41(3, 30);
					func_74(4, 4);
					func_41(4, 30);
					func_74(5, 5);
					func_39(5, 23);
					func_74(6, 6);
					func_80(6, 10);
					func_74(7, 7);
					func_80(7, 10);
					func_74(8, 8);
					func_80(8, 10);
					func_74(9, 9);
					func_80(9, 10);
					func_74(10, 10);
					func_39(10, 21);
					break;
				
				case 16:
					func_74(0, 0);
					func_39(0, 20);
					func_74(0, 19);
					func_74(1, 1);
					func_80(1, 12);
					func_74(1, 19);
					func_74(2, 2);
					func_39(2, 21);
					func_74(3, 3);
					func_80(3, 10);
					func_74(4, 4);
					func_80(4, 27);
					func_74(5, 5);
					func_41(5, 30);
					func_74(6, 6);
					func_41(6, 30);
					func_74(7, 7);
					func_41(7, 30);
					func_74(8, 8);
					func_41(8, 30);
					func_74(9, 9);
					func_80(9, 27);
					func_74(10, 10);
					func_80(10, 10);
					func_74(11, 10);
					func_39(11, 23);
					break;
				
				case 17:
					func_74(0, 0);
					func_39(0, 20);
					func_74(1, 1);
					func_80(1, 12);
					func_74(2, 2);
					func_41(2, 30);
					func_74(3, 3);
					func_41(3, 30);
					func_74(4, 4);
					func_80(4, 27);
					func_74(5, 5);
					func_80(5, 10);
					func_74(6, 6);
					func_80(6, 10);
					func_74(7, 7);
					func_39(7, 24);
					func_74(8, 8);
					func_39(8, 21);
					func_74(9, 9);
					func_39(9, 21);
					break;
				
				case 18:
					func_74(0, 0);
					func_39(0, 20);
					func_74(0, 19);
					func_74(1, 1);
					func_80(1, 12);
					func_74(1, 19);
					func_74(2, 2);
					func_80(2, 10);
					func_74(3, 3);
					func_80(3, 10);
					func_74(4, 4);
					func_41(4, 30);
					func_74(5, 5);
					func_41(5, 30);
					func_74(6, 6);
					func_80(6, 11);
					func_74(6, 19);
					func_74(7, 7);
					func_78(7, 31);
					func_74(8, 8);
					func_80(8, 27);
					func_74(9, 9);
					func_80(9, 27);
					func_74(10, 10);
					func_80(10, 10);
					func_74(11, 10);
					func_80(11, 27);
					break;
			}
			func_85(16, 14);
			func_85(17, 16);
			break;
		
		case 4:
			func_73(0, 0);
			func_73(1, 1);
			func_73(2, 2);
			func_73(3, 3);
			func_73(4, 4);
			func_73(5, 5);
			func_73(6, 6);
			func_73(7, 7);
			func_73(8, 8);
			func_73(9, 9);
			func_73(10, 10);
			func_72();
			func_85(11, 14);
			func_85(12, 16);
			func_78(13, 25);
			switch (func_42())
			{
				case 19:
					func_80(0, 29);
					func_80(1, 10);
					func_80(2, 30);
					func_39(3, 22);
					func_78(4, 26);
					func_80(5, 29);
					func_80(6, 10);
					func_39(7, 20);
					func_80(8, 12);
					func_39(9, 22);
					func_39(10, 21);
					func_39(13, 21);
					break;
				
				case 20:
					func_39(0, 20);
					func_80(1, 12);
					func_41(2, 30);
					func_41(3, 30);
					func_41(4, 30);
					func_41(5, 30);
					func_39(6, 20);
					func_41(7, 30);
					func_41(8, 30);
					func_41(9, 30);
					func_41(10, 30);
					func_80(13, 12);
					break;
				
				case 21:
					func_39(0, 20);
					func_80(1, 10);
					func_80(2, 10);
					func_41(3, 30);
					func_41(4, 30);
					func_41(5, 30);
					func_41(6, 30);
					func_80(7, 27);
					func_80(8, 27);
					func_80(9, 27);
					func_41(10, 30);
					func_41(13, 30);
					break;
				
				case 22:
					func_80(0, 10);
					func_80(1, 27);
					func_80(2, 10);
					func_80(3, 10);
					func_80(4, 27);
					func_41(5, 30);
					func_41(6, 30);
					func_39(7, 20);
					func_41(8, 30);
					func_41(9, 30);
					func_39(10, 21);
					func_39(13, 23);
					break;
				
				case 23:
					func_39(0, 21);
					func_80(1, 12);
					func_41(2, 27);
					func_78(3, 27);
					func_39(4, 21);
					func_41(5, 30);
					func_41(6, 30);
					func_39(7, 20);
					func_41(8, 30);
					func_41(9, 30);
					func_80(10, 30);
					func_39(13, 20);
					break;
				
				case 24:
					func_41(0, 30);
					func_41(1, 30);
					func_80(2, 27);
					func_39(3, 23);
					func_80(4, 12);
					func_39(5, 20);
					func_78(6, 28);
					func_41(7, 30);
					func_41(8, 30);
					func_80(9, 27);
					func_80(10, 10);
					func_80(13, 30);
					break;
			}
			break;
		
		case 6:
			func_73(0, 11);
			func_73(1, 12);
			func_73(2, 13);
			func_73(3, 14);
			switch (func_42())
			{
				case 25:
					func_80(0, 11);
					func_80(1, 12);
					func_80(2, 11);
					func_80(3, 12);
					break;
				
				case 26:
					func_80(0, 11);
					func_80(1, 12);
					func_80(2, 11);
					func_41(3, 25);
					break;
				
				case 27:
					func_80(0, 11);
					func_80(1, 12);
					func_80(2, 11);
					func_41(3, 25);
					break;
				
				case 28:
					func_80(0, 11);
					func_80(1, 12);
					func_41(2, 25);
					func_41(3, 26);
					break;
				
				case 29:
					func_41(0, 26);
					func_80(1, 12);
					func_80(2, 11);
					func_41(3, 25);
					break;
				
				case 30:
					func_41(0, 25);
					func_41(1, 26);
					func_80(2, 11);
					func_80(3, 12);
					break;
			}
			break;
		
		case 5:
			func_73(0, 15);
			func_73(1, 16);
			func_73(2, 17);
			func_73(3, 18);
			func_73(4, 19);
			func_73(5, 20);
			func_73(6, 21);
			func_73(7, 22);
			func_73(8, 23);
			func_85(9, 14);
			func_85(10, 15);
			func_85(11, 16);
			func_85(12, 17);
			func_71();
			break;
		
		case 9:
			func_74(0, 20);
			func_74(1, 22);
			break;
		
		case 3:
			func_74(0, 24);
			func_74(1, 25);
			func_74(2, 26);
			func_74(3, 27);
			func_74(4, 28);
			func_74(5, 29);
			func_74(6, 30);
			func_74(7, 31);
			func_73(8, 26);
			func_73(9, 27);
			func_70();
			break;
		
		case 10:
			func_73(0, 28);
			func_73(1, 29);
			func_73(2, 30);
			if (func_42() == 82)
			{
				func_73(3, 31);
				func_80(4, 31);
			}
			func_69();
			break;
		
		case 12:
			if (func_2346() >= 1)
			{
				func_83(0, 10);
				func_83(1, 11);
				func_83(2, 12);
			}
			if (func_2346() >= 2)
			{
				func_83(3, 13);
			}
			if (func_2346() >= 3)
			{
				func_83(4, 14);
			}
			if (func_2346() >= 4)
			{
				func_83(5, 15);
			}
			if (func_2346() >= 5)
			{
				func_83(6, 16);
			}
			if (func_2346() >= 6)
			{
				func_83(7, 17);
			}
			if (func_2346() >= 7)
			{
				func_83(8, 18);
			}
			if (func_2346() >= 8)
			{
				func_83(9, 19);
			}
			if (func_2346() >= 1)
			{
				func_83(0, 20);
			}
			if (func_2346() >= 2)
			{
				func_83(1, 21);
			}
			if (func_2346() >= 3)
			{
				func_83(2, 22);
			}
			if (func_2346() >= 4)
			{
				func_83(3, 23);
			}
			if (func_2346() >= 5)
			{
				func_83(4, 24);
			}
			if (func_2346() >= 6)
			{
				func_83(5, 25);
			}
			if (func_2346() >= 7)
			{
				func_83(6, 26);
			}
			if (func_2346() >= 8)
			{
				func_83(7, 27);
			}
			break;
		
		case 13:
			func_78(0, 0);
			func_74(0, 18);
			func_78(1, 1);
			func_41(1, 18);
			func_78(2, 2);
			func_41(2, 18);
			func_78(3, 3);
			func_80(3, 10);
			func_78(4, 4);
			func_41(4, 30);
			func_78(5, 5);
			func_80(5, 12);
			func_78(6, 6);
			func_41(6, 30);
			func_78(7, 7);
			func_41(7, 18);
			func_78(8, 8);
			func_41(8, 18);
			func_78(9, 9);
			func_39(9, 20);
			func_78(10, 10);
			func_41(10, 18);
			func_78(11, 11);
			func_41(11, 18);
			func_78(12, 15);
			func_41(12, 30);
			func_78(13, 12);
			func_41(13, 30);
			func_78(14, 13);
			func_80(14, 10);
			func_78(15, 14);
			func_39(15, 20);
			func_68();
			func_85(16, 14);
			func_85(17, 16);
			break;
		
		case 14:
			func_78(0, 16);
			func_78(1, 17);
			func_78(2, 18);
			func_78(3, 19);
			func_78(4, 20);
			func_78(5, 21);
			func_78(6, 22);
			func_78(7, 23);
			switch (func_42())
			{
				case 38:
					func_41(0, 30);
					func_39(1, 20);
					func_41(2, 30);
					func_39(3, 23);
					func_80(4, 27);
					func_41(5, 30);
					func_41(6, 30);
					func_80(7, 27);
					break;
				
				case 39:
					func_41(0, 30);
					func_41(1, 30);
					func_41(2, 30);
					func_41(3, 30);
					func_80(4, 27);
					func_39(5, 20);
					func_39(6, 23);
					func_80(7, 30);
					break;
				
				case 40:
					func_41(0, 30);
					func_41(1, 30);
					func_80(2, 27);
					func_80(3, 27);
					func_41(4, 30);
					func_41(5, 30);
					func_39(6, 20);
					func_80(7, 27);
					break;
				
				case 41:
					func_39(0, 20);
					func_41(1, 30);
					func_41(2, 30);
					func_80(3, 27);
					func_41(4, 30);
					func_41(5, 30);
					func_80(6, 10);
					func_80(7, 27);
					break;
			}
			break;
	}
}

void func_68()
{
	iVar12 = 10;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		iVar13 = unk_0x09AC81E49EA267F7(0, iVar12);
		switch (iVar0)
		{
			case 0:
				func_83(iVar1[iVar13], 20);
				break;
			
			case 1:
				func_83(iVar1[iVar13], 21);
				break;
			
			case 2:
				func_83(iVar1[iVar13], 22);
				break;
			
			case 3:
				func_83(iVar1[iVar13], 23);
				break;
			
			case 4:
				func_83(iVar1[iVar13], 24);
				break;
			
			case 5:
				func_83(iVar1[iVar13], 25);
				break;
			
			case 6:
				func_83(iVar1[iVar13], 26);
				break;
			
			case 7:
				func_83(iVar1[iVar13], 27);
				break;
		}
		iVar14 = iVar1[(iVar12 - 1)];
		iVar1[(iVar12 - 1)] = iVar1[iVar13];
		iVar1[iVar13] = iVar14;
		iVar12 = (iVar12 - 1);
		iVar0++;
	}
}

void func_69()
{
	switch (func_42())
	{
		case 78:
			func_80(0, 10);
			func_80(1, 12);
			func_80(2, 12);
			func_83(0, 2);
			break;
		
		case 79:
			func_80(0, 10);
			func_80(1, 12);
			func_80(2, 12);
			func_83(0, 2);
			break;
		
		case 80:
			func_80(0, 12);
			func_80(1, 12);
			func_80(2, 10);
			func_83(2, 2);
			break;
		
		case 81:
			func_80(0, 10);
			func_80(1, 12);
			func_80(2, 12);
			func_83(0, 2);
			break;
		
		case 82:
			func_80(0, 12);
			func_80(1, 12);
			func_80(2, 12);
			func_80(3, 10);
			func_80(4, 12);
			func_83(3, 2);
			break;
		
		case 83:
			func_80(0, 10);
			func_80(1, 12);
			func_80(2, 12);
			func_83(0, 2);
			break;
		
		case 84:
			func_80(0, 12);
			func_80(1, 12);
			func_80(2, 10);
			func_83(2, 2);
			break;
	}
}

void func_70()
{
	switch (func_42())
	{
		case 74:
			func_39(0, 21);
			func_80(1, 10);
			func_40(2, 1);
			func_80(3, 12);
			func_39(4, 21);
			func_40(5, 1);
			func_80(6, 12);
			func_80(7, 27);
			func_40(8, 1);
			func_39(9, 21);
			break;
		
		case 75:
			func_39(0, 21);
			func_80(1, 12);
			func_80(2, 10);
			func_40(3, 1);
			func_80(4, 27);
			func_80(5, 12);
			func_40(6, 1);
			func_80(7, 12);
			func_80(8, 12);
			func_80(9, 12);
			break;
		
		case 76:
			func_80(0, 10);
			func_39(1, 21);
			func_80(2, 27);
			func_40(3, 1);
			func_39(4, 21);
			func_80(5, 12);
			func_80(6, 12);
			func_39(7, 20);
			func_74(8, 18);
			func_39(9, 21);
			break;
		
		case 77:
			func_80(0, 10);
			func_39(1, 21);
			func_40(2, 1);
			func_39(3, 21);
			func_75(4, 30);
			func_80(5, 27);
			func_80(6, 12);
			func_80(7, 12);
			func_39(8, 21);
			func_40(9, 1);
			break;
	}
}

void func_71()
{
	switch (func_42())
	{
		case 31:
			func_39(0, 22);
			func_80(1, 27);
			func_39(2, 23);
			func_39(3, 23);
			func_80(4, 30);
			func_80(5, 29);
			func_39(6, 21);
			func_39(7, 23);
			func_73(0, 24);
			func_73(1, 25);
			break;
		
		case 32:
			func_39(0, 22);
			func_80(1, 27);
			func_80(2, 27);
			func_80(3, 10);
			func_80(4, 30);
			func_39(5, 20);
			func_41(6, 22);
			func_39(7, 23);
			func_39(8, 20);
			func_73(0, 24);
			func_73(1, 25);
			func_73(2, 25);
			break;
		
		case 33:
			func_39(0, 22);
			func_80(1, 27);
			func_80(2, 30);
			func_39(3, 20);
			func_39(4, 23);
			func_39(5, 20);
			func_80(6, 30);
			func_80(7, 10);
			func_39(8, 23);
			func_73(0, 24);
			func_73(1, 25);
			break;
		
		case 34:
			func_39(0, 22);
			func_80(1, 27);
			func_39(2, 20);
			func_39(3, 23);
			func_39(5, 23);
			func_39(6, 20);
			func_39(7, 21);
			func_80(8, 27);
			func_73(0, 24);
			func_73(1, 25);
			break;
		
		case 35:
			func_80(0, 29);
			func_80(1, 27);
			func_39(3, 21);
			func_39(4, 23);
			func_39(5, 20);
			func_39(6, 23);
			func_39(7, 20);
			func_39(8, 20);
			func_73(0, 24);
			func_73(1, 25);
			break;
		
		case 36:
			func_39(0, 22);
			func_80(1, 27);
			func_39(6, 20);
			func_39(7, 23);
			func_39(8, 23);
			func_73(0, 24);
			func_73(1, 25);
			break;
	}
}

void func_72()
{
	iVar13 = 11;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		iVar14 = unk_0x09AC81E49EA267F7(0, iVar13);
		switch (iVar0)
		{
			case 0:
				func_83(iVar1[iVar14], 20);
				break;
			
			case 1:
				func_83(iVar1[iVar14], 21);
				break;
			
			case 2:
				func_83(iVar1[iVar14], 22);
				break;
			
			case 3:
				func_83(iVar1[iVar14], 23);
				break;
			
			case 4:
				func_83(iVar1[iVar14], 24);
				break;
			
			case 5:
				func_83(iVar1[iVar14], 25);
				break;
			
			case 6:
				func_83(iVar1[iVar14], 26);
				break;
			
			case 7:
				func_83(iVar1[iVar14], 27);
				break;
		}
		iVar15 = iVar1[(iVar13 - 1)];
		iVar1[(iVar13 - 1)] = iVar1[iVar14];
		iVar1[iVar14] = iVar15;
		iVar13 = (iVar13 - 1);
		iVar0++;
	}
}

void func_73(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_11), iParam1);
}

void func_74(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_10), iParam1);
}

void func_75(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_8), iParam1);
}

void func_76()
{
	switch (func_42())
	{
		case 85:
			func_39(0, 21);
			func_39(1, 20);
			func_41(2, 30);
			break;
		
		case 86:
			func_39(0, 21);
			func_41(1, 30);
			func_39(2, 20);
			break;
		
		case 87:
			func_39(0, 21);
			func_39(1, 20);
			func_41(2, 30);
			break;
		
		case 88:
			func_39(0, 21);
			func_41(1, 30);
			func_39(2, 20);
			break;
		
		case 89:
			func_39(0, 21);
			func_39(1, 20);
			func_41(2, 30);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_14), iParam1);
}

void func_78(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_13), iParam1);
}

bool func_79(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_457, iParam0);
}

void func_80(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_9), iParam1);
}

void func_81()
{
	switch (func_42())
	{
		case 210:
			func_39(2, 21);
			func_39(3, 20);
			func_41(4, 24);
			func_41(5, 24);
			func_39(6, 20);
			func_40(7, 1);
			func_39(8, 20);
			func_39(9, 23);
			break;
		
		case 211:
			func_39(2, 21);
			func_39(3, 20);
			func_41(4, 24);
			func_41(5, 24);
			func_39(6, 20);
			func_40(7, 1);
			func_39(8, 20);
			func_39(9, 23);
			break;
		
		case 212:
			func_39(2, 21);
			func_39(3, 20);
			func_41(4, 24);
			func_39(5, 20);
			func_39(6, 20);
			func_40(7, 1);
			func_39(8, 20);
			func_39(9, 23);
			break;
		
		case 213:
			func_39(2, 21);
			func_39(3, 21);
			func_39(4, 23);
			func_39(5, 23);
			func_39(6, 20);
			func_40(7, 1);
			func_39(8, 20);
			func_39(9, 20);
			break;
		
		case 214:
			func_39(2, 21);
			func_39(3, 20);
			func_40(4, 1);
			func_39(5, 23);
			func_39(6, 20);
			func_41(7, 24);
			func_39(8, 20);
			func_39(9, 23);
			break;
	}
}

void func_82()
{
	switch (func_42())
	{
		case 195:
			func_39(0, 23);
			func_41(1, 25);
			func_41(2, 26);
			func_80(3, 30);
			func_40(4, 1);
			func_40(5, 0);
			func_40(6, 0);
			break;
		
		case 196:
			func_41(0, 25);
			func_41(1, 26);
			func_80(2, 30);
			func_40(3, 0);
			func_40(4, 1);
			func_39(5, 21);
			break;
		
		case 197:
			func_39(0, 23);
			func_80(1, 30);
			func_41(2, 25);
			func_41(3, 26);
			func_40(4, 0);
			func_40(5, 1);
			break;
		
		case 198:
			func_80(0, 30);
			func_41(1, 25);
			func_41(2, 26);
			func_40(3, 0);
			func_40(4, 1);
			func_40(5, 0);
			break;
		
		case 199:
			func_39(0, 23);
			func_80(1, 30);
			func_41(2, 25);
			func_40(3, 0);
			func_40(4, 1);
			func_40(5, 0);
			break;
	}
}

void func_83(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_12), iParam1);
}

void func_84(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_7), iParam1);
}

void func_85(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_73[iParam0].f_2), iParam1);
}

void func_86()
{
	if (func_106() == 7)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_87(iVar0))
			{
				iVar1[iVar7] = iVar0;
				iVar7++;
			}
			iVar0++;
		}
		Local_933.f_779[0] = iVar1[unk_0x09AC81E49EA267F7(0, iVar7)];
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1[iVar0] = -1;
			iVar0++;
		}
		iVar7 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar0 != Local_933.f_779[0])
			{
				if (func_87(iVar0))
				{
					iVar1[iVar7] = iVar0;
					iVar7++;
				}
			}
			iVar0++;
		}
		Local_933.f_779[1] = iVar1[unk_0x09AC81E49EA267F7(0, iVar7)];
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1[iVar0] = -1;
			iVar0++;
		}
		iVar7 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar7 <= 1)
			{
				if ((func_2346() > 1 || (func_2346() <= 1 && iVar0 != 1)) || (func_2346() > 1 && iVar0 <= 3))
				{
					if ((Local_933.f_779[0] != iVar0 && Local_933.f_779[1] != iVar0) && Local_933.f_782[0] != iVar0)
					{
						Local_933.f_782[iVar7] = iVar0;
						iVar7++;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_87(int iParam0)
{
	if (func_2346() <= 1)
	{
		if (iParam0 == 1)
		{
			return 0;
		}
	}
	if (func_2346() > 1)
	{
		if (iParam0 == 4)
		{
			return 0;
		}
	}
	return 1;
}

void func_88(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_459), iParam0);
}

int func_89(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
			return 1002246134;
		
		case 1:
			return -810318068;
		
		case 11:
			return -907477130;
		
		case 2:
			return 652625140;
		
		case 4:
			return 1666748342;
		
		case 6:
			return -36934887;
		
		case 5:
			return 880595258;
		
		case 10:
			return -1249748547;
		
		case 9:
			return -34623805;
		
		case 8:
			return -1346687836;
		
		case 7:
			return 1747439474;
		
		case 15:
			return 943752001;
		
		case 16:
			return 2112052861;
		
		case 17:
			return 972671128;
		
		case 18:
			return 1666748342;
		
		case 19:
			return 1747439474;
		
		case 3:
			return 121658888;
		
		case 12:
			return 1666748342;
		
		case 13:
			return 1666748342;
		
		case 14:
			return 1688540826;
		
		case 20:
			return -2140431165;
		
		default:
	}
	return -810318068;
}

void func_90()
{
	switch (Local_933.f_55)
	{
		case -1:
			func_91(1);
			break;
		
		case 0:
			switch (Global_262145.f_17786)
			{
				case 0:
					func_91(1);
					return;
				
				case 1:
					func_91(2);
					return;
				
				case 2:
					func_91(3);
					return;
				
				default:
			}
			break;
		
		case 1:
			switch (Global_262145.f_17785)
			{
				case 0:
					func_91(1);
					return;
				
				case 1:
					func_91(2);
					return;
				
				case 2:
					func_91(3);
					return;
				
				default:
			}
			break;
		
		case 2:
			switch (Global_262145.f_17787)
			{
				case 0:
					func_91(1);
					return;
				
				case 1:
					func_91(2);
					return;
				
				case 2:
					func_91(3);
					return;
				
				default:
			}
			break;
		
		case 3:
			switch (Global_262145.f_17788)
			{
				case 0:
					func_91(1);
					return;
				
				case 1:
					func_91(2);
					return;
				
				case 2:
					func_91(3);
					return;
				
				default:
			}
			break;
		
		case 4:
			switch (Global_262145.f_17789)
			{
				case 0:
					func_91(1);
					return;
				
				case 1:
					func_91(2);
					return;
				
				case 2:
					func_91(3);
					return;
				
				default:
			}
			break;
	}
}

void func_91(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_933.f_507 = iParam0;
}

void func_92(int iParam0)
{
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_485 != iParam0)
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_485 = iParam0;
	}
}

void func_93()
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 100);
	if (iVar0 < 25)
	{
		func_94(24);
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, 100);
	if (iVar0 < 25)
	{
		func_94(28);
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, 100);
	if (iVar0 < 50)
	{
		func_94(25);
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, 100);
	if (iVar0 < 50)
	{
		func_94(26);
	}
	if (!func_79(24) && !func_79(28))
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 100);
		if (iVar0 < 50)
		{
			func_94(27);
		}
	}
}

void func_94(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_457), iParam0);
}

int func_95(int iParam0)
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

void func_96()
{
	Local_933.f_772 = func_97(func_106(), Local_933.f_728);
}

int func_97(int iParam0, int iParam1)
{
	if (func_31(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_100(iParam0, iParam1);
			iVar2 = func_99(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_98(iParam0))
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

int func_98(int iParam0)
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

int func_99(int iParam0)
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

int func_100(int iParam0, int iParam1)
{
	if (func_98(iParam0))
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

void func_101()
{
	switch (func_106())
	{
		case 20:
		case 22:
		case 21:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 34:
		case 36:
		case 37:
		case 39:
		case 1:
		case 15:
		case 16:
		case 17:
		case 19:
		case 9:
		case 3:
		case 7:
		case 8:
		case 11:
			Local_933.f_2 = 1;
			break;
		
		case 14:
		case 30:
		case 32:
		case 33:
		case 31:
		case 35:
		case 38:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			Local_933.f_2 = 0;
			break;
	}
}

void func_102(float fParam0)
{
	if (!func_7(1))
	{
		iVar0 = func_105();
		iVar1 = func_104();
		uVar2 = func_103();
		Local_933.f_5 = iVar0;
		Local_933.f_6 = iVar1;
		Local_933.f_3 = uVar2;
		func_33(1);
	}
}

var func_103()
{
	return Global_2537071.f_5124.f_341;
}

int func_104()
{
	return Global_2537071.f_5124.f_340;
}

int func_105()
{
	return Global_2537071.f_5124.f_339;
}

int func_106()
{
	return Local_933.f_5;
}

int func_107()
{
	if (func_110() == func_48())
	{
		return 0;
	}
	return func_108(func_110());
}

int func_108(int iParam0)
{
	if (func_109(iParam0) == func_48())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_109(int iParam0)
{
	if (iParam0 != func_48())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_48();
}

int func_110()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

struct<2> func_111()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_193;
}

void func_112()
{
	if (func_106() == 7)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (unk_0xE5DBF9B6126856CA(func_116(iVar0)))
			{
				if (!unk_0xE5DBF9B6126856CA(Local_933.f_816[iVar0]))
				{
					if (func_115(1302435108))
					{
						if (func_114(func_116(iVar0)))
						{
							if (func_113(&(Local_933.f_816[iVar0]), 1302435108, 0f, -3,57f, 1,04f, 1, 1, 0, 1, 0, 0, 0))
							{
								unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_933.f_816[iVar0]), unk_0xB177666FAB6F4417(func_116(iVar0)), 0, 0f, -3,57f, 1,04f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								unk_0xD458AC1C1D29C3B4(unk_0x09AD4CE7DA179533(Local_933.f_816[iVar0]), (unk_0x7F6DC62EA9922664(unk_0x09AD4CE7DA179533(Local_933.f_816[iVar0])) / 2), 0);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_933.f_816[iVar0]), false, 0);
								unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_816[iVar0]), false, true, false, false, false, false, 0, false);
								unk_0x71199B01895C6202(1302435108);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_113(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x081C8BC5094A7B76(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam6, bParam5, bParam7));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam8);
		if (bParam10)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), true);
		}
		if (bParam11)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), false, 0);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0;
}

bool func_115(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_933.f_33[0];
		
		case 1:
			return Local_933.f_33[1];
		
		case 2:
			return Local_933.f_404[0];
		
		case 3:
			return Local_933.f_404[1];
		
		case 4:
			return Local_933.f_404[2];
		
		default:
	}
	return -1;
}

void func_117()
{
	if (func_106() != 8)
	{
		return;
	}
	if (!func_133(14))
	{
		if (unk_0xE5DBF9B6126856CA(Local_933.f_33[0]))
		{
			if (func_2503(iLocal_2231, 1, 1))
			{
				if (func_132(unk_0x9539D44F3E4492F6(iLocal_2231), unk_0xB177666FAB6F4417(Local_933.f_33[0]), 1) <= 130f)
				{
					iVar0 = 0;
					while (iVar0 < 22)
					{
						if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]))
						{
							if (func_114(Local_933.f_73[iVar0]))
							{
								if (func_131(iVar0))
								{
									func_119(iVar0);
								}
							}
						}
						iVar0++;
					}
					func_118(14);
				}
			}
		}
		iLocal_2231++;
		if (iLocal_2231 >= 32)
		{
			iLocal_2231 = 0;
		}
	}
}

void func_118(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_461), iParam0);
}

void func_119(int iParam0)
{
	vVar0 = { unk_0x64430C979F516F7A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 31086, -0,25f, -0,25f, 0f) };
	vVar3 = { unk_0x64430C979F516F7A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 31086, 0,25f, 0,25f, 0f) };
	if (func_122(iParam0) == -1)
	{
		unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 227, true);
		unk_0xECC26BBDC0AD318B(vVar0, vVar3, 300, 1, -494615257, 0, 1, 1, -1082130432);
		unk_0xECC26BBDC0AD318B(vVar3, vVar0, 300, 1, -494615257, 0, 1, 1, -1082130432);
		unk_0xECC26BBDC0AD318B(vVar0, vVar3, 300, 1, 205991906, 0, 1, 1, 80f);
		unk_0xECC26BBDC0AD318B(vVar3, vVar0, 300, 1, 205991906, 0, 1, 1, 80f);
		unk_0xECC26BBDC0AD318B(vVar0, vVar3, 300, 1, 205991906, 0, 1, 1, 80f);
		unk_0xECC26BBDC0AD318B(vVar3, vVar0, 300, 1, -494615257, 0, 1, 1, -1082130432);
	}
	else if (unk_0xE5DBF9B6126856CA(func_122(iParam0)))
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0xB177666FAB6F4417(func_122(iParam0)), -0,58f, 1f, 0,74f) };
		vVar3 = { unk_0x68E4ADDDDCD7BDDE(unk_0xB177666FAB6F4417(func_122(iParam0)), -0,5f, 2,12f, 1,15f) };
		unk_0xECC26BBDC0AD318B(vVar0, vVar3, 25, 1, 205991906, 0, 1, 1, -1082130432);
		unk_0xECC26BBDC0AD318B(vVar3, vVar0, 25, 1, -494615257, 0, 1, 1, -1082130432);
		unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 227, false);
		unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 115, false);
		unk_0xD458AC1C1D29C3B4(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), 0, 0);
	}
	func_120(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), -1, 0);
}

void func_120(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_121(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_121(iVar0, iParam0);
	}
}

void func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9F3FF84D9E7E76F7(iParam1, 0, 0,727f, 0,625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0x9F3FF84D9E7E76F7(iParam1, 0, 0,727f, 0,518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0x9F3FF84D9E7E76F7(iParam1, 0, 0,727f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0x9F3FF84D9E7E76F7(iParam1, 0, 0,806f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0x9F3FF84D9E7E76F7(iParam1, 1, 0,379f, 0,324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0x9F3FF84D9E7E76F7(iParam1, 1, 0,379f, 0,534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0x9F3FF84D9E7E76F7(iParam1, 2, 0,628f, 0,277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0x9F3FF84D9E7E76F7(iParam1, 2, 0,609f, 0,344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0x9F3FF84D9E7E76F7(iParam1, 4, 0,719f, 0,802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0x9F3FF84D9E7E76F7(iParam1, 4, 0,775f, 0,68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0x9F3FF84D9E7E76F7(iParam1, 4, 0,775f, 0,561f, "ShotgunLargeMonolithic");
			break;
	}
}

int func_122(int iParam0)
{
	switch (func_106())
	{
		case 9:
			if (func_130(iParam0, 20) || func_130(iParam0, 21))
			{
				return Local_933.f_33[0];
			}
			if (func_130(iParam0, 22) || func_130(iParam0, 23))
			{
				return Local_933.f_33[1];
			}
			break;
		
		case 21:
			if (func_129(iParam0, 0))
			{
				return Local_933.f_33[0];
			}
			if (func_129(iParam0, 14) || func_129(iParam0, 15))
			{
				return Local_933.f_404[0];
			}
			if (func_129(iParam0, 16) || func_129(iParam0, 17))
			{
				return Local_933.f_404[1];
			}
			break;
		
		case 0:
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[5];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[6];
			}
			break;
		
		case 1:
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[2];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[3];
			}
			break;
		
		case 2:
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[4];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[5];
			}
			break;
		
		case 4:
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[3];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[4];
			}
			break;
		
		case 5:
			if (func_129(iParam0, 14) || func_129(iParam0, 15))
			{
				return Local_933.f_404[3];
			}
			if (func_129(iParam0, 16) || func_129(iParam0, 17))
			{
				return Local_933.f_404[4];
			}
			return func_127(iParam0);
			break;
		
		case 20:
			if (func_126(iParam0, 29))
			{
				return Local_933.f_33[0];
			}
			if (func_126(iParam0, 30))
			{
				return Local_933.f_33[1];
			}
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[2];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[3];
			}
			break;
		
		case 7:
			if (func_125(iParam0, 8) || func_125(iParam0, 10))
			{
				return func_124(0);
			}
			if (func_125(iParam0, 9) || func_125(iParam0, 11))
			{
				return func_124(1);
			}
			break;
		
		case 8:
			switch (func_42())
			{
				case 64:
					if (func_123(iParam0, 3))
					{
						return Local_933.f_33[0];
					}
					break;
				
				case 65:
					if (func_123(iParam0, 3))
					{
						return Local_933.f_33[0];
					}
					break;
				
				case 66:
					if (func_123(iParam0, 3))
					{
						return Local_933.f_33[0];
					}
					break;
			}
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[4];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[5];
			}
			break;
		
		case 12:
			if (func_123(iParam0, 10))
			{
				return Local_933.f_404[0];
			}
			else if (func_123(iParam0, 11))
			{
				return Local_933.f_404[1];
			}
			else if (func_123(iParam0, 12))
			{
				return Local_933.f_404[2];
			}
			else if (func_123(iParam0, 13))
			{
				return Local_933.f_404[3];
			}
			else if (func_123(iParam0, 14))
			{
				return Local_933.f_404[4];
			}
			else if (func_123(iParam0, 15))
			{
				return Local_933.f_404[5];
			}
			else if (func_123(iParam0, 16))
			{
				return Local_933.f_404[6];
			}
			else if (func_123(iParam0, 17))
			{
				return Local_933.f_404[7];
			}
			else if (func_123(iParam0, 18))
			{
				return Local_933.f_404[8];
			}
			else if (func_123(iParam0, 19))
			{
				return Local_933.f_404[9];
			}
			break;
		
		case 13:
			if (func_129(iParam0, 14))
			{
				return Local_933.f_404[1];
			}
			if (func_129(iParam0, 16))
			{
				return Local_933.f_404[2];
			}
			break;
	}
	return -1;
}

bool func_123(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_614[iParam0], iParam1);
}

int func_124(int iParam0)
{
	switch (Local_933.f_782[iParam0])
	{
		case 0:
			return Local_933.f_33[0];
		
		case 1:
			return Local_933.f_33[1];
		
		case 2:
			return Local_933.f_404[0];
		
		case 3:
			return Local_933.f_404[1];
		
		case 4:
			return Local_933.f_404[2];
		
		default:
	}
	return -1;
}

bool func_125(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_660[iParam0], iParam1);
}

bool func_126(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_637[iParam0], iParam1);
}

int func_127(int iParam0)
{
	switch (func_42())
	{
		case 31:
			if (func_128(iParam0, 22))
			{
				return Local_933.f_404[1];
			}
			if (func_128(iParam0, 23))
			{
				return Local_933.f_404[2];
			}
			break;
		
		case 34:
			if (func_128(iParam0, 19))
			{
				return Local_933.f_404[2];
			}
			break;
		
		case 35:
			if (func_128(iParam0, 17))
			{
				return Local_933.f_404[1];
			}
			break;
		
		case 36:
			if ((func_128(iParam0, 17) || func_128(iParam0, 19)) || func_128(iParam0, 20))
			{
				return Local_933.f_404[1];
			}
			else if (func_128(iParam0, 18))
			{
				return Local_933.f_404[2];
			}
			break;
	}
	return -1;
}

bool func_128(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_591[iParam0], iParam1);
}

bool func_129(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_384[iParam0], iParam1);
}

bool func_130(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_568[iParam0], iParam1);
}

int func_131(int iParam0)
{
	if (func_123(iParam0, 3) || func_123(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

float func_132(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, bParam2);
}

bool func_133(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_461, iParam0);
}

void func_134()
{
	if (func_106() == 9)
	{
		if (!func_137(1))
		{
			if (func_137(2))
			{
				if (!func_5(&(Local_933.f_765)))
				{
					func_4(&(Local_933.f_765), 0, 0);
				}
				else if (func_3(&(Local_933.f_765), func_136(), 0))
				{
					func_135(1);
				}
			}
			else if (func_5(&(Local_933.f_765)))
			{
				func_34(&(Local_933.f_765));
			}
		}
	}
}

void func_135(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_460), iParam0);
}

int func_136()
{
	return Global_262145.f_17943;
}

bool func_137(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_933.f_460, iParam0);
}

void func_138()
{
	if (func_106() == 16)
	{
		if (!func_133(3))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_33[0]) && unk_0xE5DBF9B6126856CA(Local_933.f_404[0]))
			{
				if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[0]), 0) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_404[0]), 0))
				{
					if (func_114(Local_933.f_33[0]) && func_114(Local_933.f_404[0]))
					{
						unk_0xC74DAD25331A5425(unk_0xB177666FAB6F4417(Local_933.f_33[0]), unk_0xB177666FAB6F4417(Local_933.f_404[0]), 1065353216);
						func_118(3);
					}
				}
			}
		}
	}
}

void func_139(int iParam0)
{
	if (Local_933.f_2 == 1)
	{
		if (func_11(iParam0, 2))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]))
			{
				if (!func_11(iParam0, 13))
				{
					func_140(iParam0, 13);
				}
			}
		}
	}
}

void func_140(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_933.f_796[iParam0]), iParam1);
}

void func_141()
{
	if (func_106() == 38)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_143(iVar0, 0))
			{
				if (func_9(Local_933.f_404[iVar0]))
				{
					vLocal_894 = { unk_0x68F4C0EC296D3901(func_142(unk_0xB177666FAB6F4417(Local_933.f_404[iVar0])), true) };
				}
			}
			iVar0++;
		}
	}
}

int func_142(int iParam0)
{
	return iParam0;
}

bool func_143(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_694[iParam0], iParam1);
}

void func_144()
{
	if (func_106() != 33 && func_106() != 31)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (func_148(iVar0))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]))
			{
				if (func_147(iVar0) == 11)
				{
					if (!func_5(&(Local_933.f_732)))
					{
						Local_933.f_702[func_146(iVar0)] = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar0]), false) };
					}
					else if (func_3(&(Local_933.f_732), 10000, 0))
					{
						if (unk_0x0EB28750412C3A5A(Local_933.f_702[func_146(iVar0)], unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar0]), false), true) < 10f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar0]), false), true) < 250f)
						{
							func_88(func_145(func_146(iVar0)));
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_5(&(Local_933.f_732)))
	{
		func_4(&(Local_933.f_732), 0, 0);
	}
	if (func_3(&(Local_933.f_732), 10000, 0))
	{
		func_34(&(Local_933.f_732));
	}
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 22;
		
		case 1:
			return 23;
		
		case 2:
			return 24;
		
		default:
	}
	return 22;
}

int func_146(int iParam0)
{
	if (func_123(iParam0, 20))
	{
		return 0;
	}
	else if (func_123(iParam0, 21))
	{
		return 1;
	}
	else if (func_123(iParam0, 22))
	{
		return 2;
	}
	else if (func_123(iParam0, 23))
	{
		return 3;
	}
	return 0;
}

int func_147(int iParam0)
{
	return Local_933.f_73[iParam0].f_1;
}

int func_148(int iParam0)
{
	if (((((((func_123(iParam0, 20) || func_123(iParam0, 21)) || func_123(iParam0, 22)) || func_123(iParam0, 23)) || func_123(iParam0, 24)) || func_123(iParam0, 25)) || func_123(iParam0, 26)) || func_123(iParam0, 27))
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	if (func_6(15))
	{
		switch (func_106())
		{
			case 24:
			case 29:
			case 32:
			case 34:
			case 38:
			case 0:
			case 1:
			case 2:
			case 4:
			case 5:
			case 3:
			case 10:
			case 8:
			case 13:
			case 14:
				func_33(9);
				break;
			
			case 21:
			case 27:
			case 39:
				func_33(4);
				break;
			
			case 36:
				func_33(4);
				break;
			}
	}
}

void func_150()
{
}

void func_151()
{
	if (func_106() != 24)
	{
		return;
	}
	if (func_42() == 201)
	{
		return;
	}
	if (!func_6(7))
	{
		if (func_79(0))
		{
			if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 2 + 5)
			{
				fVar0 = 99999f;
				iVar1 = -1;
				iVar4 = 0;
				while (iVar4 < 22)
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar4]))
					{
						if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar4]), 0))
						{
							if (func_153(iVar4))
							{
								iVar2 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
					iVar4++;
				}
				if (iVar2 && iVar3)
				{
					return;
				}
				else
				{
					func_33(9);
				}
				iVar4 = 0;
				while (iVar4 < 22)
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar4]))
					{
						if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar4]), 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_933.f_33[0]))
							{
								vVar5 = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[0]), false) };
								vVar8 = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar4]), false) };
								fVar11 = func_152(vVar5, vVar8);
								if (fVar11 < fVar0)
								{
									fVar0 = fVar11;
									iVar1 = iVar4;
								}
							}
						}
					}
					iVar4++;
				}
				if (iVar1 != -1)
				{
					func_41(iVar1, 15);
				}
				func_88(7);
			}
		}
	}
}

float func_152(vector3 vParam0, vector3 vParam3)
{
	vParam0.z = 0f;
	vParam3.z = 0f;
	return vdist(vParam0, vParam3);
}

int func_153(int iParam0)
{
	if ((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
	{
		return 1;
	}
	return 0;
}

bool func_154(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_407[iParam0], iParam1);
}

void func_155()
{
	if (!func_6(0))
	{
		if (func_22(1))
		{
			if (!func_5(&(Local_933.f_736)))
			{
				func_4(&(Local_933.f_736), 0, 0);
			}
			else if (func_3(&(Local_933.f_736), 15000, 0))
			{
				func_88(0);
			}
		}
	}
}

void func_156(int iParam0)
{
	if (!func_5(&(Local_933.f_746[iParam0])))
	{
		switch (func_106())
		{
			case 33:
			case 30:
			case 31:
			case 14:
			case 38:
			case 4:
			case 6:
			case 12:
			case 13:
				if (func_11(iParam0, 4))
				{
					iVar0[iParam0] = 1;
				}
				break;
			
			case 35:
				if (func_11(iParam0, 5))
				{
					iVar0[iParam0] = 1;
				}
				break;
			
			case 20:
			case 22:
			case 21:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 34:
			case 36:
			case 37:
			case 39:
			case 0:
			case 1:
			case 2:
			case 5:
			case 9:
			case 3:
			case 10:
			case 8:
			case 11:
				if (func_11(iParam0, 8))
				{
					iVar0[iParam0] = 1;
				}
				break;
			
			case 7:
				if (func_157() && func_16())
				{
					iVar0[iParam0] = 1;
				}
				break;
			
			case 32:
				if (func_11(iParam0, 8))
				{
					iVar0[iParam0] = 1;
				}
				break;
		}
		if (iVar0[iParam0])
		{
			if (!func_5(&(Local_933.f_746[iParam0])))
			{
				func_4(&(Local_933.f_746[iParam0]), 0, 0);
			}
		}
	}
}

int func_157()
{
	if (func_158() < func_2346())
	{
		return 0;
	}
	return 1;
}

int func_158()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 5))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_159(int iParam0)
{
	if (Local_933.f_2 == 0)
	{
		if (func_11(iParam0, 1))
		{
			if (Local_933.f_563[iParam0] != -1 && unk_0xDD0E7998AE8AD485() > Local_933.f_563[iParam0] + 5)
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]))
				{
					if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), 0))
					{
						if (unk_0xBDEB2DEEF1D23A18(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0])))
						{
							Local_933.f_563[iParam0] = unk_0xDD0E7998AE8AD485();
							func_161(iParam0, 11);
						}
						else if (!func_11(iParam0, 11))
						{
							if (unk_0x526BC32A660C89E6(Local_933.f_33[iParam0]) || (!unk_0x83F012E6200426DB(Local_933.f_33[iParam0]) && unk_0xBFF81ED3B99522C7()))
							{
								if (func_114(Local_933.f_33[iParam0]))
								{
									unk_0xE121AE1BBF90E186(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), false);
									func_160(iParam0, 7);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_160(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Local_1755[unk_0x57270EE11514DC67()].f_24[iParam0]), iParam1);
}

void func_161(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Local_933.f_796[iParam0]), iParam1);
}

void func_162()
{
}

void func_163()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!func_79(14))
		{
			if (fLocal_753[iVar0] <= 500f && func_11(iVar0, 8))
			{
				func_94(14);
				func_94(15);
			}
		}
		iVar0++;
	}
}

void func_164()
{
	if (func_7(9))
	{
		switch (func_106())
		{
			case 32:
			case 24:
			case 34:
			case 37:
			case 38:
				func_165();
				break;
			}
	}
}

void func_165()
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!func_154(iVar0, 18))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]))
			{
				if (func_114(Local_933.f_73[iVar0]))
				{
					iVar1 = unk_0x1B50683925F00106(Local_933.f_73[iVar0]);
					if (!unk_0xEB6A8945D1AC98A1(iVar1))
					{
						unk_0x11AD11297DC58CC7(iVar1, false);
						unk_0x9FA191B317572861(iVar1, 200f);
						func_39(iVar0, 18);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_166()
{
	if (func_106() == 24)
	{
		if (func_7(24))
		{
			if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 2 && !func_7(9))
			{
				func_94(0);
			}
		}
		if (func_79(0))
		{
			func_170(0);
			func_169();
		}
	}
	else if (func_106() == 35)
	{
		if (func_79(18))
		{
			if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 180)
			{
				func_94(19);
			}
		}
	}
	else if (func_106() == 28)
	{
		if (!func_79(21) && !func_7(8))
		{
			if (func_168())
			{
				func_94(21);
			}
			if (func_7(9))
			{
				func_33(8);
			}
			if (func_79(20))
			{
				if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 5 && !func_79(21))
				{
					func_33(9);
					func_33(8);
				}
			}
		}
	}
	else if (func_106() == 37)
	{
		if (func_167() || func_22(16))
		{
			if (Local_933.f_622 == -1)
			{
				Local_933.f_622 = unk_0xDD0E7998AE8AD485();
			}
			else if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 3 && !func_22(15))
			{
				func_20(14);
			}
		}
	}
	else if (func_106() == 34)
	{
		if (func_79(11))
		{
			if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 10)
			{
				func_33(9);
			}
		}
	}
}

int func_167()
{
	if (func_22(10))
	{
		return 1;
	}
	if (func_22(11))
	{
		return 1;
	}
	if (func_22(12))
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 22)
	{
		if (((func_154(iVar1, 10) || func_154(iVar1, 11)) || func_154(iVar1, 12)) || func_154(iVar1, 13))
		{
			if (func_147(iVar1) != 23)
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!func_154(iVar0, 19))
		{
			if (((((((((func_129(iVar0, 7) || func_129(iVar0, 8)) || func_129(iVar0, 9)) || func_154(iVar0, 14)) || func_154(iVar0, 15)) || func_129(iVar0, 10)) || func_129(iVar0, 11)) || func_129(iVar0, 12)) || func_154(iVar0, 16)) || func_154(iVar0, 17))
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]))
				{
					if (func_114(Local_933.f_73[iVar0]))
					{
						iVar1 = unk_0x1B50683925F00106(Local_933.f_73[iVar0]);
						if (!unk_0xEB6A8945D1AC98A1(iVar1))
						{
							unk_0x11AD11297DC58CC7(iVar1, false);
							if ((((func_129(iVar0, 10) || func_129(iVar0, 11)) || func_129(iVar0, 12)) || func_154(iVar0, 16)) || func_154(iVar0, 17))
							{
								unk_0x6DF7BF67E86AAE86(iVar1, Global_1575008);
							}
							func_39(iVar0, 19);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_170(int iParam0)
{
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (func_129(iVar0, 7))
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]))
				{
					if (unk_0x526BC32A660C89E6(Local_933.f_73[iVar0]))
					{
						if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_933.f_73[iVar0]), 0))
						{
							unk_0x33CE5A9E32EA10B2(unk_0x1B50683925F00106(Local_933.f_73[iVar0]), true);
							func_171(unk_0x1B50683925F00106(Local_933.f_73[iVar0]), "PROVOKE_GENERIC", 34);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 22)
		{
			if (func_129(iVar1, 7))
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar1]))
				{
					if (unk_0x526BC32A660C89E6(Local_933.f_73[iVar1]))
					{
						if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_933.f_73[iVar1]), 0))
						{
							func_171(unk_0x1B50683925F00106(Local_933.f_73[iVar1]), "SHOUT_INSULT", 34);
							unk_0x33CE5A9E32EA10B2(unk_0x1B50683925F00106(Local_933.f_73[iVar1]), false);
						}
					}
				}
			}
			iVar1++;
		}
	}
}

void func_171(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_172(iParam2), 1);
}

int func_172(int iParam0)
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

void func_173(int iParam0)
{
	if (func_106() == 1)
	{
		if (func_11(iParam0, 8))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]) || !func_9(Local_933.f_33[iParam0]))
			{
				Local_933.f_773[iParam0] = 0;
			}
			if (Local_933.f_773[iParam0] == 0)
			{
				func_140(iParam0, 10);
			}
		}
		else if (Local_933.f_773[iParam0] != Global_262145.f_17934)
		{
			Local_933.f_773[iParam0] = Global_262145.f_17934;
		}
	}
}

void func_174(int iParam0)
{
	if (Local_933.f_2 == 1)
	{
		bVar0 = true;
		if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]))
		{
			if (unk_0xE2F1E99DD161A861(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0])))
			{
				if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]), 0))
				{
					if (!func_175(unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]), 1, 1, 0, 1, 1, 1, 1, 1))
					{
						bVar0 = false;
					}
				}
			}
		}
		if (func_11(iParam0, 12) != bVar0)
		{
			if (bVar0)
			{
				func_140(iParam0, 12);
			}
			else
			{
				func_161(iParam0, 12);
			}
		}
	}
}

int func_175(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_176(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_48()) && func_2503(iVar3, 1, 1)) || iParam8)
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

int func_176(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_177()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (func_548(iVar0))
		{
			case 0:
				break;
			
			case 1:
				if (func_546(iVar0))
				{
					if (!unk_0xE5DBF9B6126856CA(Local_933.f_404[iVar0]))
					{
						if (func_106() == 39)
						{
							if (func_115(func_545(iVar0)))
							{
								func_204(iVar0);
							}
						}
						else if (func_115(func_202(func_106(), func_42(), iVar0)))
						{
							func_204(iVar0);
						}
					}
				}
				break;
			
			case 2:
				func_178(iVar0);
				break;
			
			case 3:
				func_178(iVar0);
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		iVar0++;
	}
}

void func_178(int iParam0)
{
	if (func_201())
	{
		if (func_200(iParam0, 0) || func_200(iParam0, 1))
		{
			if (func_194() && func_193())
			{
				if (Local_933.f_575 != Local_933.f_573)
				{
					if (func_192(1))
					{
						func_190(iParam0);
						func_189(iParam0, 1);
					}
					else
					{
						func_186(func_187(func_188(iParam0)));
					}
				}
				if (func_185())
				{
					if (Local_933.f_575 != Local_933.f_573)
					{
						Local_933.f_575++;
					}
				}
			}
		}
	}
	if (func_106() == 30)
	{
		if ((func_200(iParam0, 10) || func_200(iParam0, 29)) || func_200(iParam0, 30))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_404[iParam0]))
			{
				iVar0 = unk_0xA5FBBC2F619A4DE2(Local_933.f_404[iParam0]);
				if (!func_9(Local_933.f_404[iParam0]))
				{
					Local_933.f_585[func_184(iParam0)] = { unk_0x68F4C0EC296D3901(iVar0, false) };
					if (func_183(func_184(iParam0)))
					{
						func_140(func_184(iParam0), 3);
					}
					func_182(&(Local_933.f_404[func_184(iParam0)]));
				}
				else if (unk_0x5A91F08DF773C39D(iVar0, func_181(func_184(iParam0)), 60f, 60f, 100f, false, false, 0))
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_404[iParam0]))
					{
						iVar1 = unk_0x1B50683925F00106(Local_933.f_73[func_180(iParam0)]);
						unk_0xA3BF0AA5A2608191(iVar1);
						Local_933.f_610[func_184(iParam0)]++;
						if (Local_933.f_610[func_184(iParam0)] > 2)
						{
							Local_933.f_610[func_184(iParam0)] = 0;
						}
					}
				}
			}
		}
	}
	else if (func_106() == 31)
	{
		if (!func_79(12))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_404[iParam0]))
			{
				iVar2 = unk_0xA5FBBC2F619A4DE2(Local_933.f_404[iParam0]);
				if (!func_9(Local_933.f_404[iParam0]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(iVar2, false) };
					if (!func_179(Local_933.f_619) || unk_0xDE5F9F54005367A1(vVar3 + Vector(0f, 0f, 200f), &(Local_933.f_619), 1, 0f, 0))
					{
						iVar6 = 0;
						while (iVar6 < func_2346())
						{
							Local_933.f_585[iVar6] = { vVar3 };
							iVar6++;
						}
						iVar7 = 0;
						while (iVar7 < 22)
						{
							if (func_148(iVar7))
							{
								unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_933.f_73[iVar7]));
							}
							iVar7++;
						}
						func_94(12);
						func_182(&(Local_933.f_404[iParam0]));
					}
				}
				else
				{
					if (func_22(6))
					{
						if (!func_22(7))
						{
							unk_0x0A2CA2E508C0AED3(unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]), -50f);
							func_20(7);
						}
					}
					if (unk_0x5A91F08DF773C39D(iVar2, func_181(func_184(iParam0)), 60f, 60f, 100f, false, false, 0))
					{
						if (unk_0xE5DBF9B6126856CA(Local_933.f_404[iParam0]))
						{
							iVar8 = unk_0x1B50683925F00106(Local_933.f_73[func_180(iParam0)]);
							unk_0xA3BF0AA5A2608191(iVar8);
							Local_933.f_610[func_184(iParam0)]++;
							if (Local_933.f_610[func_184(iParam0)] > 2)
							{
								Local_933.f_610[func_184(iParam0)] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
{
	if (func_200(iParam0, 10))
	{
		return 0;
	}
	else if (func_200(iParam0, 29))
	{
		return 3;
	}
	else if (func_200(iParam0, 30))
	{
		return 6;
	}
	return 0;
}

Vector3 func_181(int iParam0)
{
	switch (Local_933.f_610[iParam0])
	{
		case 0:
			return 2914,67f, 3672,918f, 200,6378f;
		
		case 1:
			return -2736,906f, 2266,786f, 200,5602f;
		
		case 2:
			return -676,1427f, -1126,051f, 200,2562f;
		
		default:
	}
	return 2914,67f, 3672,918f, 150,6378f;
}

void func_182(var uParam0)
{
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_183(int iParam0)
{
	if (func_22(2))
	{
		if (func_11(0, 3))
		{
			return 0;
		}
		if (iParam0 > 0)
		{
			return 0;
		}
	}
	return 1;
}

int func_184(int iParam0)
{
	if (func_200(iParam0, 10))
	{
		return 0;
	}
	else if (func_200(iParam0, 29))
	{
		return 1;
	}
	else if (func_200(iParam0, 30))
	{
		return 2;
	}
	return 0;
}

int func_185()
{
	switch (func_106())
	{
		case 29:
		case 35:
			if (func_548(3) == 1 && func_548(4) == 1)
			{
				return 1;
			}
			break;
		
		case 24:
			if (func_548(4) == 1 && func_548(5) == 1)
			{
				return 1;
			}
			break;
		
		case 36:
		case 31:
			if (func_548(1) == 1 && func_548(2) == 1)
			{
				return 1;
			}
			break;
		
		case 20:
			if (func_548(2) == 1 && func_548(3) == 1)
			{
				return 1;
			}
			break;
		
		case 21:
			if (func_548(0) == 1 && func_548(1) == 1)
			{
				return 1;
			}
			break;
		
		case 0:
			if (func_548(5) == 1 && func_548(6) == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_548(2) == 1 && func_548(3) == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_548(4) == 1 && func_548(5) == 1)
			{
				return 1;
			}
			break;
		
		case 4:
		case 5:
			if (func_548(3) == 1 && func_548(4) == 1)
			{
				return 1;
			}
			break;
		
		case 8:
			if (func_548(4) == 1 && func_548(5) == 1)
			{
				return 1;
			}
			break;
		
		case 13:
			if (func_548(1) == 1 && func_548(2) == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_186(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_933.f_459), iParam0);
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 27;
		
		case 1:
			return 28;
		
		default:
	}
	return 27;
}

int func_188(int iParam0)
{
	if (func_200(iParam0, 0))
	{
		return 0;
	}
	else if (func_200(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_933.f_404[iParam0].f_1 = iParam1;
}

void func_190(int iParam0)
{
	if (func_201())
	{
		Local_933.f_514 = -1;
		Local_933.f_516 = { 0f, 0f, 0f };
		Local_933.f_519 = 0f;
		Local_933.f_521 = 0;
		Local_933.f_520 = 0;
		func_191(iParam0);
		func_182(&(Local_933.f_404[iParam0]));
		func_186(func_187(func_188(iParam0)));
	}
}

void func_191(int iParam0)
{
	if (func_200(iParam0, 0))
	{
		Local_933.f_623[0] = -1;
	}
	else if (func_200(iParam0, 1))
	{
		Local_933.f_623[1] = -1;
	}
}

int func_192(bool bParam0)
{
	iVar0 = 5;
	if (bParam0)
	{
		iVar0 = 4;
	}
	if (unk_0xDD0E7998AE8AD485() > (Local_933.f_572 + iVar0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	switch (func_106())
	{
		case 29:
		case 1:
			if (func_147(10) == 23 && func_147(11) == 23)
			{
				return 1;
			}
			break;
		
		case 20:
			if (func_147(2) == 23 && func_147(3) == 23)
			{
				return 1;
			}
			break;
		
		case 35:
			if (func_147(11) == 23 && func_147(12) == 23)
			{
				return 1;
			}
			break;
		
		case 24:
			if (func_147(10) == 23 && func_147(11) == 23)
			{
				return 1;
			}
			break;
		
		case 36:
			if (func_147(1) == 23 && func_147(2) == 23)
			{
				return 1;
			}
			break;
		
		case 25:
			if (((func_147(0) == 23 && func_147(1) == 23) && func_147(2) == 23) && func_147(3) == 23)
			{
				return 1;
			}
			break;
		
		case 31:
			if (((func_147(4) == 23 && func_147(5) == 23) && func_147(6) == 23) && func_147(7) == 23)
			{
				return 1;
			}
			break;
		
		case 21:
			if (((func_147(1) == 23 && func_147(2) == 23) && func_147(3) == 23) && func_147(4) == 23)
			{
				return 1;
			}
			break;
		
		case 0:
			if (func_147(14) == 23 && func_147(15) == 23)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_147(16) == 23 && func_147(17) == 23)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147(11) == 23 && func_147(12) == 23)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((func_147(9) == 23 && func_147(10) == 23) && func_147(11) == 23) && func_147(12) == 23)
			{
				return 1;
			}
			break;
		
		case 8:
			if (func_147(6) == 23 && func_147(7) == 23)
			{
				return 1;
			}
			break;
		
		case 13:
			if (func_147(16) == 23 && func_147(17) == 23)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_194()
{
	if ((((func_7(13) && func_199() < func_198()) && func_12() == 0) && func_197()) && !func_195())
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_196(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_196(int iParam0)
{
	if (Local_933.f_2 == 1)
	{
		if (fLocal_753[iParam0] < 200f)
		{
			return 1;
		}
	}
	return 0;
}

int func_197()
{
	switch (func_106())
	{
		case 29:
		case 1:
			if (func_147(10) > 1 && func_147(11) > 1)
			{
				return 1;
			}
			break;
		
		case 20:
			if (func_147(2) > 1 && func_147(3) > 1)
			{
				return 1;
			}
			break;
		
		case 35:
			if (func_147(11) > 1 && func_147(12) > 1)
			{
				return 1;
			}
			break;
		
		case 24:
			if (func_147(10) > 1 && func_147(11) > 1)
			{
				return 1;
			}
			break;
		
		case 36:
			if (func_147(1) > 1 && func_147(2) > 1)
			{
				return 1;
			}
			break;
		
		case 25:
			if (((func_147(0) > 1 && func_147(1) > 1) && func_147(2) > 1) && func_147(3) > 1)
			{
				return 1;
			}
			break;
		
		case 31:
			if (((func_147(4) > 1 && func_147(5) > 1) && func_147(6) > 1) && func_147(7) > 1)
			{
				return 1;
			}
			break;
		
		case 21:
			if (((func_147(1) > 1 && func_147(2) > 1) && func_147(3) > 1) && func_147(4) > 1)
			{
				return 1;
			}
			break;
		
		case 0:
			if (func_147(14) > 1 && func_147(15) > 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_147(16) > 1 && func_147(17) > 1)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147(11) > 1 && func_147(12) > 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((func_147(9) > 1 && func_147(10) > 1) && func_147(11) > 1) && func_147(12) > 1)
			{
				return 1;
			}
			break;
		
		case 8:
			if (func_147(6) > 1 && func_147(7) > 1)
			{
				return 1;
			}
			break;
		
		case 13:
			if (func_147(16) > 1 && func_147(17) > 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_198()
{
	if (func_106() == 31 || func_106() == 21)
	{
		if (func_43() == 1)
		{
			if (func_106() == 31)
			{
				return Global_262145.f_16227;
			}
			return 0;
		}
		else if (func_43() == 2)
		{
			if (func_106() == 31)
			{
				return Global_262145.f_16228;
			}
			return 1;
		}
		else if (func_43() == 3)
		{
			if (func_106() == 31)
			{
				return Global_262145.f_16229;
			}
			return 2;
		}
	}
	if (func_43() == 1)
	{
		return Global_262145.f_16233;
	}
	else if (func_43() == 2)
	{
		return Global_262145.f_16234;
	}
	return Global_262145.f_16235;
}

int func_199()
{
	return Local_933.f_573;
}

bool func_200(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_683[iParam0], iParam1);
}

int func_201()
{
	switch (func_106())
	{
		case 25:
		case 29:
		case 35:
		case 24:
		case 36:
		case 31:
		case 21:
		case 1:
		case 0:
		case 4:
		case 2:
		case 5:
		case 8:
		case 13:
		case 20:
			return 1;
		
		default:
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 20:
			return -114291515;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return -159126838;
						
						case 1:
							return 1753414259;
						
						case 2:
							return 1507916787;
						
						case 3:
							return 1507916787;
						
						case 4:
							return 1507916787;
						
						case 5:
							return 1507916787;
						
						case 6:
							return 1507916787;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return -1745203402;
						
						case 1:
							return -1745203402;
						
						case 2:
							return 2006142190;
						
						case 3:
							return 2006142190;
						
						case 5:
							return -1745203402;
						
						case 6:
							return -1745203402;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return -2096818938;
						
						case 1:
							return -2096818938;
						
						case 5:
							return -1207771834;
						
						case 6:
							return -1207771834;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 5:
							return -808831384;
						
						case 6:
							return -808831384;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 1531094468;
						
						case 5:
							return 1531094468;
						
						case 6:
							return 1531094468;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 5:
							return 683047626;
						
						case 6:
							return 683047626;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					switch (iParam2)
					{
						case 0:
							return 1909141499;
						
						case 1:
							return 486987393;
						
						case 2:
							return 1909141499;
						
						case 3:
							return 1909141499;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 486987393;
						
						case 1:
							return 486987393;
						
						case 2:
							return 1909141499;
						
						case 3:
							return 1909141499;
						
						default:
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							return 486987393;
						
						case 1:
							return 486987393;
						
						case 2:
							return 1909141499;
						
						case 3:
							return 1909141499;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					switch (iParam2)
					{
						case 0:
							return 2053223216;
						
						case 1:
							return -682211828;
						
						case 2:
							return -682211828;
						
						case 3:
							return -909201658;
						
						case 4:
							return -909201658;
						
						default:
					}
					break;
				
				case 20:
					switch (iParam2)
					{
						case 0:
							return 1909141499;
						
						case 1:
							return -810318068;
						
						case 3:
							return -114291515;
						
						case 4:
							return -114291515;
						
						default:
					}
					break;
				
				case 21:
					switch (iParam2)
					{
						case 0:
							return -634879114;
						
						case 1:
							return -634879114;
						
						case 2:
							return -634879114;
						
						case 3:
							return -634879114;
						
						case 4:
							return -634879114;
						
						case 5:
							return -634879114;
						
						default:
					}
					break;
				
				case 22:
					switch (iParam2)
					{
						case 3:
							return 486987393;
						
						case 4:
							return 486987393;
						
						default:
					}
					break;
				
				case 23:
					switch (iParam2)
					{
						case 0:
							return -789894171;
						
						case 1:
							return -789894171;
						
						case 3:
							return -909201658;
						
						case 4:
							return -909201658;
						
						default:
					}
					break;
				
				case 24:
					switch (iParam2)
					{
						case 0:
							return -1745203402;
						
						case 1:
							return 2006142190;
						
						case 2:
							return 2006142190;
						
						case 3:
							return 2006142190;
						
						case 4:
							return 2006142190;
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					switch (iParam2)
					{
						case 0:
							return 1560980623;
						
						case 1:
							return 1560980623;
						
						case 2:
							return 1560980623;
						
						case 3:
							return 1909141499;
						
						case 4:
							return 1909141499;
						
						default:
					}
					break;
				
				case 33:
					switch (iParam2)
					{
						case 0:
							return -233098306;
						
						case 3:
							return 1909141499;
						
						case 4:
							return 1909141499;
						
						default:
					}
					break;
				
				case 34:
					switch (iParam2)
					{
						case 0:
							return -14495224;
						
						case 1:
							return 48339065;
						
						case 2:
							return 1886712733;
						
						case 3:
							return 1909141499;
						
						case 4:
							return 1909141499;
						
						default:
					}
					break;
				
				case 35:
					switch (iParam2)
					{
						case 0:
							return -1435919434;
						
						case 1:
							return 1886712733;
						
						case 2:
							return -784816453;
						
						case 3:
							return 1909141499;
						
						case 4:
							return 1909141499;
						
						default:
					}
					break;
				
				case 36:
					switch (iParam2)
					{
						case 0:
							return 75131841;
						
						case 1:
							return 1909141499;
						
						case 2:
							return 1909141499;
						
						case 3:
							return 1909141499;
						
						case 4:
							return 1909141499;
						
						default:
					}
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 0:
					return -2058878099;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return 1030400667;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 0:
					return 1747439474;
				
				case 1:
					return 1747439474;
				
				case 2:
					return 1747439474;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					switch (iParam2)
					{
						case 0:
							return -909201658;
						
						case 1:
							return -909201658;
						
						case 2:
							return -909201658;
						
						case 3:
							return -909201658;
						
						case 4:
							return -909201658;
						
						case 5:
							return -909201658;
						
						default:
					}
					break;
				
				case 63:
					switch (iParam2)
					{
						case 0:
							return 1265391242;
						
						case 1:
							return 1265391242;
						
						case 2:
							return 1265391242;
						
						case 3:
							return 1265391242;
						
						case 4:
							return 1265391242;
						
						case 5:
							return 1265391242;
						
						default:
					}
					break;
				
				case 64:
					switch (iParam2)
					{
						case 0:
							return 2006142190;
						
						case 1:
							return 2006142190;
						
						case 2:
							return 2006142190;
						
						case 3:
							return 2006142190;
						
						case 4:
							return 2006142190;
						
						case 5:
							return 2006142190;
						
						default:
					}
					break;
				
				case 65:
					switch (iParam2)
					{
						case 0:
							return -1670998136;
						
						case 1:
							return -1670998136;
						
						case 2:
							return -1670998136;
						
						case 3:
							return -1670998136;
						
						case 4:
							return -1670998136;
						
						case 5:
							return -1670998136;
						
						default:
					}
					break;
				
				case 66:
					switch (iParam2)
					{
						case 0:
							return 1753414259;
						
						case 1:
							return 1753414259;
						
						case 2:
							return 1753414259;
						
						case 3:
							return 1753414259;
						
						case 4:
							return 1753414259;
						
						case 5:
							return 1753414259;
						
						default:
					}
					break;
				
				case 67:
					switch (iParam2)
					{
						case 0:
							return 2006142190;
						
						case 1:
							return 2006142190;
						
						case 2:
							return 2006142190;
						
						case 3:
							return 2006142190;
						
						case 4:
							return 2006142190;
						
						case 5:
							return 2006142190;
						
						default:
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					return 2006142190;
				
				case 91:
					return -893578776;
				
				case 92:
					return -1670998136;
				
				case 93:
					return -909201658;
				
				case 94:
					return 1753414259;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					return -1745203402;
				
				case 1:
					return 2006142190;
				
				case 2:
					return 2006142190;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					switch (iParam2)
					{
						case 0:
							return 683047626;
						
						case 1:
							return -909201658;
						
						case 2:
							return -909201658;
						
						case 3:
							return -909201658;
						
						default:
					}
					break;
				
				case 39:
					switch (iParam2)
					{
						case 0:
							return 683047626;
						
						case 1:
							return -909201658;
						
						case 2:
							return -909201658;
						
						case 3:
							return 683047626;
						
						default:
					}
					break;
				
				case 40:
					switch (iParam2)
					{
						case 0:
							return 683047626;
						
						case 1:
							return -909201658;
						
						case 2:
							return -909201658;
						
						case 3:
							return -909201658;
						
						default:
					}
					break;
				
				case 41:
					switch (iParam2)
					{
						case 0:
							return 683047626;
						
						case 1:
							return -909201658;
						
						case 2:
							return -909201658;
						
						case 3:
							return -909201658;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 4:
							return 788045382;
						
						case 5:
							return 788045382;
						
						default:
					}
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							return -120287622;
						
						case 1:
							return -120287622;
						
						case 4:
							return -349601129;
						
						case 5:
							return -349601129;
						
						default:
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							return -120287622;
						
						case 1:
							return -1745203402;
						
						case 2:
							return -1745203402;
						
						case 3:
							return -120287622;
						
						case 4:
							return 2006142190;
						
						case 5:
							return 2006142190;
						
						default:
					}
					break;
				
				case 16:
					switch (iParam2)
					{
						case 0:
							return -682211828;
						
						case 4:
							return -893578776;
						
						case 5:
							return -893578776;
						
						default:
					}
					break;
				
				case 17:
					switch (iParam2)
					{
						case 0:
							return -789894171;
						
						case 4:
							return 1265391242;
						
						case 5:
							return 1265391242;
						
						default:
					}
					break;
				
				case 18:
					switch (iParam2)
					{
						case 4:
							return -909201658;
						
						case 5:
							return -909201658;
						
						default:
					}
					break;
			}
			break;
	}
	return func_203(iParam0);
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1912215274;
		
		case 27:
			return 1912215274;
		
		case 28:
			return 1912215274;
		
		case 29:
			return 301427732;
		
		case 30:
			return 744705981;
		
		case 33:
			return 904750859;
		
		case 34:
			return 2053223216;
		
		case 31:
			return -1600252419;
		
		case 38:
			return -1043459709;
		
		case 1:
			return 1909141499;
		
		case 4:
			return 2053223216;
		
		case 3:
			return 1909141499;
		
		case 7:
			return 1747439474;
		
		case 8:
			return -1346687836;
		
		case 11:
			return 448402357;
		
		case 12:
			return 2006142190;
		
		case 13:
			return -1745203402;
		
		case 14:
			return -909201658;
		
		case 20:
			return 2006142190;
		
		default:
	}
	return 486987393;
}

void func_204(int iParam0)
{
	func_438(func_106(), iParam0);
	switch (func_106())
	{
		case 1:
		case 0:
		case 4:
		case 5:
		case 16:
		case 3:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 20:
		case 2:
			if (func_225(iParam0, func_436(iParam0)))
			{
				func_207(iParam0);
				func_189(iParam0, func_206(iParam0));
				func_205();
				unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam0));
			}
			break;
	}
}

void func_205()
{
	Local_933.f_514 = -1;
	Local_933.f_516 = { 0f, 0f, 0f };
	Local_933.f_519 = 0f;
	Local_933.f_520 = 0;
	Local_933.f_525 = 0;
}

int func_206(int iParam0)
{
	if ((((func_200(iParam0, 0) || func_200(iParam0, 1)) || func_200(iParam0, 2)) || func_200(iParam0, 3)) || func_200(iParam0, 28))
	{
		return 2;
	}
	if (((func_200(iParam0, 11) || func_200(iParam0, 12)) || func_200(iParam0, 13)) || func_200(iParam0, 14))
	{
		return 2;
	}
	if ((func_200(iParam0, 7) || func_200(iParam0, 8)) || func_200(iParam0, 9))
	{
		return 2;
	}
	if (func_200(iParam0, 10))
	{
		return 2;
	}
	if (func_200(iParam0, 15) || func_200(iParam0, 16))
	{
		return 2;
	}
	if (func_200(iParam0, 17))
	{
		return 2;
	}
	if (func_200(iParam0, 18) || func_200(iParam0, 19))
	{
		return 2;
	}
	if ((func_200(iParam0, 20) || func_200(iParam0, 21)) || func_200(iParam0, 22))
	{
		return 3;
	}
	if (((func_143(iParam0, 0) || func_143(iParam0, 1)) || func_143(iParam0, 2)) || func_143(iParam0, 3))
	{
		return 2;
	}
	if (func_143(iParam0, 28))
	{
		return 2;
	}
	return 2;
}

void func_207(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	switch (func_106())
	{
		case 1:
			func_224(iParam0, iVar0);
			break;
		
		case 0:
			func_223(iParam0, iVar0);
			break;
		
		case 3:
			func_221(iParam0, iVar0);
			break;
		
		case 16:
			func_209(iParam0, func_202(func_106(), func_42(), iParam0), Local_933.f_404[iParam0], 1);
			break;
		
		case 4:
			func_208(iParam0, iVar0);
			break;
	}
}

void func_208(int iParam0, int iParam1)
{
	switch (func_42())
	{
		case 19:
			switch (iParam0)
			{
				case 0:
					unk_0xF50D17A63556B8D4(iParam1, 2, 1, 1f);
					unk_0xF50D17A63556B8D4(iParam1, 3, 1, 1f);
					break;
				
				case 2:
					unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
					break;
				
				case 1:
					unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					unk_0xF50D17A63556B8D4(iParam1, 2, 1, 1f);
					unk_0xF50D17A63556B8D4(iParam1, 3, 1, 1f);
					break;
			}
			break;
	}
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = false;
	iVar1 = unk_0xB177666FAB6F4417(iParam2);
	if (!bParam3)
	{
		unk_0xE121AE1BBF90E186(iVar1, true);
	}
	unk_0xA22F71BBC8173C39(iVar1, false);
	unk_0x44A200C9B6E1CEA6(iVar1, true);
	unk_0x09C4C5C870748A1F(iVar1, 0);
	unk_0x3F169EF6AE57D03F(iVar1, 0);
	func_220(iVar1);
	unk_0x9A8BCD43DBDDCDCA(iVar1, false, 0);
	if (func_106() != 1)
	{
		unk_0x0F94CA38DF58080C(iVar1, func_219(iParam1));
		unk_0xD5A0214B20BCBAD8(iVar1, 1);
	}
	unk_0xD458AC1C1D29C3B4(iVar1, Global_262145.f_15083, 0);
	if (func_2345(iParam0) == 904750859)
	{
		unk_0x0A2CA2E508C0AED3(iVar1, 10f);
	}
	else if (func_2345(iParam0) != 1876516712)
	{
		unk_0x0A2CA2E508C0AED3(iVar1, -10f);
	}
	if (!bParam3)
	{
		func_216(unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]), iParam0, 1623637790, 0, 0);
	}
	func_215(iVar1, 1);
	if (func_106() == 7)
	{
		unk_0x453A018B4CABC718(iVar1, 2, 10);
		unk_0x453A018B4CABC718(iVar1, 3, 10);
	}
	else
	{
		if (func_214(func_2345(iParam0)))
		{
			unk_0x453A018B4CABC718(iVar1, 2, 2);
			unk_0x453A018B4CABC718(iVar1, 3, 2);
		}
		unk_0x8B07ECBFF00D7FF9(iVar1, 0);
	}
	if (func_213(iParam0))
	{
		unk_0x453A018B4CABC718(iVar1, 2, 10);
		unk_0x453A018B4CABC718(iVar1, 3, 10);
		unk_0xF50D17A63556B8D4(iVar1, 2, 1, 1f);
		unk_0xF50D17A63556B8D4(iVar1, 3, 1, 1f);
	}
	if (func_212())
	{
		unk_0x446EA2500F021666(iVar1, func_211());
	}
	if (func_210(iParam0))
	{
		unk_0xF50D17A63556B8D4(iVar1, 4, 0, 1f);
	}
	unk_0x79E38224B223335B(iVar1, 1);
	unk_0xA6B2C9FCA24AAC6F(iVar1, 1);
	unk_0x443C9A6DC182DDD5(iVar1, 1);
	if (func_106() == 37 || func_106() == 11)
	{
		unk_0xC4B4C89FC0D48108(iVar1, true);
	}
	unk_0x1F85B199848ECF4E(iVar1, bVar0, 0);
	unk_0x5072321D4A2E8A10(iVar1, bVar0);
	if (!bParam3)
	{
		if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
		{
			unk_0xB7E567188872123E(iVar1, "Not_Allow_As_Saved_Veh", 1);
		}
		if (unk_0xF1D385D359D58F72("MPBitset", 3))
		{
			if (unk_0x30F813723591D02E(iVar1, "MPBitset"))
			{
				iVar2 = unk_0x1E2DFB0EF4BB4566(iVar1, "MPBitset");
			}
			unk_0x5D96D8530B3D0904(&iVar2, 10);
			unk_0x5D96D8530B3D0904(&iVar2, 11);
			unk_0xB7E567188872123E(iVar1, "MPBitset", iVar2);
		}
	}
	if (iParam1 == 972671128)
	{
		iVar3 = unk_0x09AC81E49EA267F7(0, 5);
		switch (iVar3)
		{
			case 0:
				iVar4 = 28;
				break;
			
			case 1:
				iVar4 = 15;
				break;
			
			case 2:
				iVar4 = 50;
				break;
			
			case 3:
				iVar4 = 75;
				break;
			
			case 4:
				iVar4 = 145;
				break;
		}
		unk_0xC002508A277213DE(iVar1, iVar4, 0);
	}
}

int func_210(int iParam0)
{
	if (iParam0 == 0)
	{
		if ((func_42() == 64 || func_42() == 65) || func_42() == 66)
		{
			return 1;
		}
	}
	return 0;
}

int func_211()
{
	if (func_106() == 8)
	{
		return 0;
	}
	return 0;
}

int func_212()
{
	if (func_106() != 8)
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0)
{
	if (!func_214(func_2345(iParam0)))
	{
		return 0;
	}
	if (func_2345(iParam0) == 121658888)
	{
		return 1;
	}
	if (func_106() != 8)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (((((func_42() == 62 || func_42() == 63) || func_42() == 64) || func_42() == 65) || func_42() == 66) || func_42() == 67)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if ((((((((((iParam0 == 904750859 || iParam0 == -1346687836) || iParam0 == 1747439474) || iParam0 == 1488164764) || iParam0 == -810318068) || iParam0 == 456714581) || iParam0 == -119658072) || iParam0 == 943752001) || iParam0 == -1987130134) || iParam0 == 121658888) || iParam0 == -907477130)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 13);
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, 13);
		}
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xF1D385D359D58F72("ContrabandOwner", 3))
	{
		iVar0 = func_218();
		func_217(iParam1, &iVar0);
		unk_0xB7E567188872123E(iParam0, "ContrabandOwner", iVar0);
		if (unk_0xF1D385D359D58F72("ContrabandDeliveryType", 3))
		{
			unk_0xB7E567188872123E(iParam0, "ContrabandDeliveryType", iParam2);
		}
		func_92(iParam2);
		if (iParam2 == -81613951)
		{
			if (unk_0xF1D385D359D58F72("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				unk_0xB7E567188872123E(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_217(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 8)
	{
		iVar0 = (24 + iParam0);
		unk_0x5D96D8530B3D0904(iParam1, iVar0);
	}
}

int func_218()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35;
}

float func_219(int iParam0)
{
	if (iParam0 == 1747439474)
	{
		return 0,35f;
	}
	return 0,2f;
}

void func_220(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x60A2E7213232AA6E(iParam0, 0);
	}
}

void func_221(int iParam0, int iParam1)
{
	unk_0xCCD53AC1B5D5E456(iParam1, 14,9f);
	unk_0xC023D1C4BF532815(iParam1, func_222(), 2, 1);
	unk_0x1E9649458B15960F(iParam1, true);
	iParam0 = iParam0;
}

Vector3 func_222()
{
	switch (func_42())
	{
		case 74:
			return -21,5844f, 95,5086f, 9,42171f;
		
		case 75:
			return -14,3921f, -26,2124f, -175,298f;
		
		case 76:
			return 0,157125f, 92,4088f, -166,477f;
		
		case 77:
			return 1,39107f, -80,4198f, 121,556f;
		
		default:
	}
	return -21,5844f, 95,5086f, 9,42171f;
}

void func_223(int iParam0, int iParam1)
{
	unk_0xA22F71BBC8173C39(iParam1, true);
	unk_0x44A200C9B6E1CEA6(iParam1, false);
	unk_0x09C4C5C870748A1F(iParam1, 1);
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 2:
					unk_0xCCD53AC1B5D5E456(iParam1, 7,5f);
					break;
				
				case 3:
				case 4:
					unk_0xCCD53AC1B5D5E456(iParam1, 10f);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
				case 1:
					unk_0xF50D17A63556B8D4(iParam1, 2, 1, 1f);
					unk_0xF50D17A63556B8D4(iParam1, 3, 1, 1f);
					break;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
	}
}

void func_224(int iParam0, int iParam1)
{
	switch (func_42())
	{
		case 7:
			if (func_143(iParam0, 10))
			{
				unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
			}
			break;
		
		case 12:
			if (func_143(iParam0, 9))
			{
				unk_0xF50D17A63556B8D4(iParam1, 5, 5, 1f);
			}
			break;
	}
	unk_0xC002508A277213DE(iParam1, 21, 21);
}

int func_225(int iParam0, bool bParam1)
{
	if (func_435(iParam0))
	{
		func_417(iParam0);
	}
	else if (Local_933.f_508 == -1 && Local_933.f_515 == -1)
	{
		if (Local_933.f_514 == -1 || Local_933.f_514 == iParam0)
		{
			if (Local_933.f_514 != iParam0)
			{
				Local_933.f_514 = iParam0;
			}
			if (func_106() == 7)
			{
				if (!unk_0xE5DBF9B6126856CA(Local_933.f_404[iParam0]))
				{
					if (func_179(Local_933.f_516))
					{
						if (bParam1)
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0 = 750f;
							Var0.f_1 = 1;
							Var0.f_4 = 1500f;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_12 = 1;
							Var0.f_10 = 0;
							vVar30 = { func_416(Local_933.f_3, Local_933.f_778) };
							func_279(vVar30, vVar33, func_202(func_106(), func_42(), iParam0), 0, &(Local_933.f_516), &(Local_933.f_519), &Var0);
						}
						else
						{
							iVar36 = 0;
							while (iVar36 < 2)
							{
								if (func_277(iParam0, iVar36))
								{
									Local_933.f_516 = { func_416(Local_933.f_3, iVar36) };
									Local_933.f_519 = func_276(Local_933.f_3, iVar36);
								}
								iVar36++;
							}
						}
					}
					else
					{
						func_254(Local_933.f_516, 30f, 0);
						if (func_251(&(Local_933.f_404[iParam0]), func_202(func_106(), func_42(), iParam0), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							func_209(0, func_202(func_106(), func_42(), iParam0), Local_933.f_404[iParam0], 1);
							unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam0));
							Local_933.f_516 = { 0f, 0f, 0f };
							Local_933.f_519 = 0f;
							Local_933.f_514 = -1;
							Local_933.f_778++;
							return 1;
						}
					}
				}
			}
			else if (func_179(Local_933.f_516))
			{
				if (bParam1)
				{
					Var37.f_4 = 1125515264;
					Var37.f_5 = 1;
					Var37.f_6 = 1;
					Var37.f_8 = 1082130432;
					Var37.f_9 = 1176255488;
					Var37.f_10 = 1;
					Var37.f_13 = 1;
					Var37.f_15 = 2;
					Var37.f_22 = 2;
					Var37.f_25 = 1;
					Var37.f_26 = 1;
					Var37.f_29 = 1123024896;
					Var37.f_1 = 1;
					Var37.f_5 = 1;
					Var37.f_6 = 1;
					Var37.f_10 = 0;
					Var37.f_12 = 1;
					Var37.f_4 = func_250();
					Var37 = func_249();
					vVar67 = { func_246(func_106(), Local_933.f_3, iParam0) };
					func_279(vVar67, vVar67, func_202(func_106(), func_42(), iParam0), 0, &(Local_933.f_516), &(Local_933.f_519), &Var37);
				}
				else
				{
					Local_933.f_516 = { func_236(func_106(), Local_933.f_3, iParam0) };
					Local_933.f_519 = func_226(func_106(), Local_933.f_3, iParam0);
				}
			}
			else
			{
				func_254(Local_933.f_516, 30f, 0);
				if (func_251(&(Local_933.f_404[iParam0]), func_202(func_106(), func_42(), iParam0), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					Local_933.f_514 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_226(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_235(iParam1, iParam2);
		
		case 1:
			return func_234(iParam1, iParam2);
		
		case 4:
			return func_233(iParam1, iParam2);
		
		case 5:
			return func_232(iParam1, iParam2);
		
		case 3:
			return func_231(iParam1, iParam2);
		
		case 8:
			return func_230(iParam1, iParam2);
		
		case 13:
			return func_229(iParam1, iParam2);
		
		case 14:
			return func_228(iParam1, iParam2);
		
		case 2:
			return func_227(iParam1, iParam2);
		
		default:
	}
	return 201,5907f;
}

float func_227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 77:
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 194,4f;
				
				case 1:
					return 67,9976f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 71,5999f;
				
				case 1:
					return 192,999f;
				
				case 2:
					return 28,199f;
				
				case 3:
					return 175,9995f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 135,9998f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 224,999f;
				
				default:
			}
			break;
		
		case 82:
			break;
	}
	return 194,4f;
}

float func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 171:
			switch (iParam1)
			{
				case 0:
					return 158,7991f;
				
				case 1:
					return 228,999f;
				
				case 2:
					return 163,999f;
				
				case 3:
					return 150,5997f;
				
				default:
			}
			break;
		
		case 172:
			switch (iParam1)
			{
				case 0:
					return 122,393f;
				
				case 1:
					return 135,197f;
				
				case 2:
					return 79,997f;
				
				case 3:
					return 301,8f;
				
				default:
			}
			break;
		
		case 173:
			switch (iParam1)
			{
				case 0:
					return 173,8f;
				
				case 1:
					return 213,798f;
				
				case 2:
					return 254,799f;
				
				case 3:
					return 292,799f;
				
				default:
			}
			break;
		
		case 174:
			switch (iParam1)
			{
				case 0:
					return 12,2f;
				
				case 1:
					return 127,399f;
				
				case 2:
					return 222,348f;
				
				case 3:
					return 328,4f;
				
				default:
			}
			break;
	}
	return 158,7991f;
}

float func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 170:
			switch (iParam1)
			{
				case 0:
					return 74,6439f;
				
				default:
			}
			break;
	}
	return 74,6439f;
}

float func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 119:
			switch (iParam1)
			{
				case 0:
					return 37,5986f;
				
				case 1:
					return 10,3986f;
				
				case 2:
					return 52,5985f;
				
				case 3:
					return 336,9985f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 232,9446f;
				
				case 1:
					return 129,1458f;
				
				case 2:
					return 155,1441f;
				
				case 3:
					return 131,5448f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 155,9402f;
				
				case 1:
					return 202,9401f;
				
				case 2:
					return 278,1396f;
				
				case 3:
					return 309,3399f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 123,9974f;
				
				case 1:
					return 144,5971f;
				
				case 2:
					return 82,5968f;
				
				case 3:
					return 147,7965f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 205,1999f;
				
				case 1:
					return 226,3999f;
				
				case 2:
					return 168,9997f;
				
				case 3:
					return 196,1996f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 125,7962f;
				
				case 1:
					return 101,796f;
				
				case 2:
					return 159,9963f;
				
				case 3:
					return 144,3965f;
				
				default:
			}
			break;
	}
	return 37,5986f;
}

float func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 101:
			switch (iParam1)
			{
				case 0:
					return 337,6614f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 190,7315f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 179,5778f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 163,563f;
				
				default:
			}
			break;
	}
	return 337,6614f;
}

float func_232(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 95:
			switch (iParam1)
			{
				case 0:
					return 12,5963f;
				
				case 1:
					return 148,8232f;
				
				case 2:
					return 59,4579f;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 222,343f;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 221,9977f;
				
				case 1:
					return 22,14f;
				
				case 2:
					return 218,7401f;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 258,1985f;
				
				case 1:
					return 284,1459f;
				
				case 2:
					return 69,5448f;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 89,8496f;
				
				case 1:
					return 77,6451f;
				
				case 2:
					return 171,4443f;
				
				default:
			}
			break;
	}
	return 73,3981f;
}

float func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 83:
			switch (iParam1)
			{
				case 0:
					return 270,399f;
				
				case 1:
					return 77,197f;
				
				case 2:
					return 33,397f;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 157f;
				
				case 1:
					return 342,799f;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 207,3988f;
				
				case 1:
					return 175,1993f;
				
				case 2:
					return 127,3988f;
				
				case 5:
					return 197,5988f;
				
				default:
			}
			break;
		
		case 86:
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 322,598f;
				
				case 1:
					return 59,197f;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 212,3998f;
				
				case 1:
					return 78,7984f;
				
				case 2:
					return 28,1984f;
				
				default:
			}
			break;
	}
	return 270,399f;
}

float func_234(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 71:
			switch (iParam1)
			{
				case 0:
					return 201,5907f;
				
				case 1:
					return 270,5914f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 53,198f;
				
				case 1:
					return 134,799f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 56,999f;
				
				case 1:
					return 148,199f;
				
				default:
			}
			break;
	}
	return 201,5907f;
}

float func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 65:
			switch (iParam1)
			{
				case 0:
					return 229,6f;
				
				case 1:
					return 207,4f;
				
				case 2:
					return 352,197f;
				
				case 3:
					return 341,397f;
				
				case 4:
					return 197,797f;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam1)
			{
				case 0:
					return 71,2f;
				
				case 1:
					return 218,799f;
				
				case 2:
					return 292,8f;
				
				case 3:
					return 193,4f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 245,2f;
				
				case 1:
					return 300,4f;
				
				default:
			}
			break;
		
		case 68:
			break;
		
		case 69:
			switch (iParam1)
			{
				case 0:
					return 329,45f;
				
				default:
			}
			break;
		
		case 70:
			break;
	}
	return 229,6f;
}

Vector3 func_236(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_245(iParam1, iParam2);
		
		case 1:
			return func_244(iParam1, iParam2);
		
		case 4:
			return func_243(iParam1, iParam2);
		
		case 5:
			return func_242(iParam1, iParam2);
		
		case 3:
			return func_241(iParam1, iParam2);
		
		case 8:
			return func_240(iParam1, iParam2);
		
		case 13:
			return func_239(iParam1, iParam2);
		
		case 14:
			return func_238(iParam1, iParam2);
		
		case 2:
			return func_237(iParam1, iParam2);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_237(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 77:
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2310,425f, 2576,674f, 45,668f;
				
				case 1:
					return 2316,211f, 2569,325f, 45,6676f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 1356,587f, 3277,928f, 36,718f;
				
				case 1:
					return 1358,944f, 3262,885f, 37,693f;
				
				case 2:
					return 1349,387f, 3269,412f, 37,041f;
				
				case 3:
					return 1363,482f, 3270,408f, 37,381f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 605,2227f, -411,4341f, 23,7449f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return -445,808f, -2166,288f, 9,315f;
				
				default:
			}
			break;
		
		case 82:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 171:
			switch (iParam1)
			{
				case 0:
					return -1163,548f, -2055,846f, 13,1351f;
				
				case 1:
					return -1169,451f, -2041,319f, 12,8438f;
				
				case 2:
					return -1171,37f, -2039,624f, 12,7696f;
				
				case 3:
					return -1175,97f, -2057,476f, 13,2069f;
				
				default:
			}
			break;
		
		case 172:
			switch (iParam1)
			{
				case 0:
					return 1433,809f, -2275,971f, 65,388f;
				
				case 1:
					return 1443,335f, -2290,114f, 65,91f;
				
				case 2:
					return 1441,933f, -2292,376f, 65,914f;
				
				case 3:
					return 1444,888f, -2283,464f, 65,823f;
				
				default:
			}
			break;
		
		case 173:
			switch (iParam1)
			{
				case 0:
					return 2940,298f, 2779,291f, 38,361f;
				
				case 1:
					return 2956,752f, 2780,818f, 39,706f;
				
				case 2:
					return 2946,773f, 2785,261f, 39,067f;
				
				case 3:
					return 2950,609f, 2783,721f, 39,473f;
				
				default:
			}
			break;
		
		case 174:
			switch (iParam1)
			{
				case 0:
					return 3695,73f, 4556,726f, 24,469f;
				
				case 1:
					return 3689,444f, 4557,407f, 24,097f;
				
				case 2:
					return 3695,104f, 4570,355f, 24,131f;
				
				case 3:
					return 3697,431f, 4551,241f, 24,367f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 170:
			switch (iParam1)
			{
				case 0:
					return -570,8359f, 270,0006f, 81,9375f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 119:
			switch (iParam1)
			{
				case 0:
					return 505,9079f, -1503,962f, 28,2896f;
				
				case 1:
					return 498,3448f, -1499,526f, 28,2837f;
				
				case 2:
					return 500,0175f, -1502,406f, 28,289f;
				
				case 3:
					return 508,5004f, -1501,781f, 28,288f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return -305,1115f, -1188,113f, 23,0365f;
				
				case 1:
					return -306,7497f, -1179,784f, 22,6717f;
				
				case 2:
					return -307,8149f, -1175,425f, 22,4597f;
				
				case 3:
					return -308,8598f, -1190,628f, 23,2157f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 1512,659f, 771,6665f, 76,4418f;
				
				case 1:
					return 1515,871f, 770,1014f, 76,4299f;
				
				case 2:
					return 1525,159f, 786,407f, 76,4403f;
				
				case 3:
					return 1527,516f, 786,0479f, 76,4403f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 1549,187f, 3720,55f, 33,4943f;
				
				case 1:
					return 1548,791f, 3717,948f, 33,5295f;
				
				case 2:
					return 1553,934f, 3721,252f, 33,5035f;
				
				case 3:
					return 1546,883f, 3728,011f, 33,5095f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 1248,48f, 1832,582f, 79,7751f;
				
				case 1:
					return 1248,891f, 1835,258f, 79,7037f;
				
				case 2:
					return 1248,408f, 1818,921f, 80,0257f;
				
				case 3:
					return 1249,825f, 1822,426f, 80,1329f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 1445,13f, 6500,799f, 19,1339f;
				
				case 1:
					return 1456,221f, 6499,19f, 19,4999f;
				
				case 2:
					return 1445,788f, 6498,671f, 19,1849f;
				
				case 3:
					return 1453,81f, 6497,915f, 19,4341f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 101:
			switch (iParam1)
			{
				case 0:
					return -521,7769f, 5207,142f, 82,5625f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 2178,58f, -650,239f, 90,9213f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 654,8974f, -1368,319f, 8,7287f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 1554,557f, 3360,823f, 36,1612f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 95:
			switch (iParam1)
			{
				case 0:
					return -1086,85f, -2403,147f, 12,9452f;
				
				case 1:
					return -1101,91f, -2394,005f, 12,9452f;
				
				case 2:
					return -1083,178f, -2427,972f, 12,9452f;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 1337,403f, -1549,493f, 52,0003f;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 378,2609f, 3405,089f, 35,4042f;
				
				case 1:
					return 363,709f, 3409,639f, 35,4035f;
				
				case 2:
					return 360,7429f, 3424,746f, 34,9333f;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 875,5771f, 2379,905f, 53,0068f;
				
				case 1:
					return 847,553f, 2374,094f, 53,0725f;
				
				case 2:
					return 865,3605f, 2370,948f, 53,3108f;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return -1933,619f, 2062,065f, 139,8399f;
				
				case 1:
					return -1921,214f, 2048,8f, 139,7353f;
				
				case 2:
					return -1920,473f, 2086,273f, 135,8039f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 83:
			switch (iParam1)
			{
				case 0:
					return 154,591f, -3196,471f, 4,955f;
				
				case 1:
					return 123,804f, -3203,889f, 4,941f;
				
				case 2:
					return 138,352f, -3192,5f, 4,858f;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return -947,097f, 591,678f, 100,005f;
				
				case 1:
					return -942,417f, 590,367f, 100,005f;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 348,9772f, -1243,331f, 31,509f;
				
				case 1:
					return 341,1945f, -1252,711f, 31,509f;
				
				case 2:
					return 343,6731f, -1245,827f, 31,509f;
				
				case 5:
					return 347,9085f, -1245,289f, 31,509f;
				
				default:
			}
			break;
		
		case 86:
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return -1870,021f, 2093,39f, 138,659f;
				
				case 1:
					return -1877,535f, 2094,948f, 139,357f;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 1809,352f, 3923,507f, 32,6609f;
				
				case 1:
					return 1809,593f, 3893,83f, 32,7868f;
				
				case 2:
					return 1810,875f, 3898,518f, 32,7994f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 71:
			switch (iParam1)
			{
				case 0:
					return 132,747f, 316,5055f, 111,1377f;
				
				case 1:
					return 140,2464f, 308,1164f, 111,1379f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 161,659f, -1237,582f, 28,317f;
				
				case 1:
					return 177,517f, -1244,61f, 28,198f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 718,551f, 4181,505f, 39,709f;
				
				case 1:
					return 725,318f, 4176,248f, 39,709f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 65:
			switch (iParam1)
			{
				case 0:
					return 2213,984f, 5609,228f, 53,214f;
				
				case 1:
					return 2214,707f, 5605,734f, 53,191f;
				
				case 2:
					return 2215,606f, 5635,041f, 54,991f;
				
				case 3:
					return 2197,249f, 5611,383f, 52,583f;
				
				case 4:
					return 2211,3f, 5598,106f, 52,88f;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam1)
			{
				case 0:
					return 1530,994f, 6339,446f, 23,162f;
				
				case 1:
					return 1514,96f, 6332,875f, 23,075f;
				
				case 2:
					return 1501,002f, 6340,393f, 22,931f;
				
				case 3:
					return 1506,711f, 6328,714f, 22,971f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 1521,399f, 1702,741f, 109,002f;
				
				case 1:
					return 1532,12f, 1716,856f, 109,128f;
				
				default:
			}
			break;
		
		case 68:
			break;
		
		case 69:
			switch (iParam1)
			{
				case 0:
					return 1320,872f, -528,087f, 71,121f;
				
				default:
			}
			break;
		
		case 70:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_246(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 12:
			return func_247(iParam1, iParam2, 1155596288);
		
		default:
	}
	return func_236(iParam0, iParam1, iParam2);
}

Vector3 func_247(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { func_248(iParam0, 0, 0) };
	switch (iParam1)
	{
		case 0:
			return vVar0 + Vector(0f, fParam2, 0f);
		
		case 1:
			return vVar0 + Vector(0f, 0f, fParam2);
		
		case 2:
			return vVar0 + Vector(0f, -fParam2, 0f);
		
		case 3:
			return vVar0 + Vector(0f, 0f, -fParam2);
		
		case 4:
			return vVar0 + Vector(0f, fParam2, fParam2);
		
		case 5:
			return vVar0 + Vector(0f, -fParam2, fParam2);
		
		case 6:
			return vVar0 + Vector(0f, fParam2, -fParam2);
		
		case 7:
			return vVar0 + Vector(0f, -fParam2, -fParam2);
		
		default:
	}
	return vVar0;
}

Vector3 func_248(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			return -1238,851f, -1400,535f, 3,2165f;
		
		case 1:
			return -1014,217f, -533,1254f, 35,2295f;
		
		case 2:
			return -20,5298f, -1271,142f, 28,273f;
		
		case 3:
			return 1284,595f, -2562,123f, 43,0983f;
		
		case 4:
			return 450,3504f, -1230,471f, 29,034f;
		
		case 5:
			return 145,7378f, 322,3651f, 111,1386f;
		
		case 11:
			return 1121,212f, 239,838f, 79,8556f;
		
		case 12:
			return -3054,277f, 608,0347f, 6,2058f;
		
		case 13:
			return -2955,04f, 402,565f, 14,059f;
		
		case 14:
			return 1220,405f, 1870,591f, 77,908f;
		
		case 15:
			return 1110,427f, -1262,882f, 19,3388f;
		
		case 16:
			return -1307,914f, -1258,692f, 3,536f;
		
		case 17:
			return -172,4439f, -41,4259f, 51,3666f;
		
		case 18:
			return -500,5161f, -64,1044f, 38,8799f;
		
		case 19:
			return 1141,102f, -1319,199f, 33,6567f;
		
		case 20:
			return -1567,839f, -239,2559f, 48,4769f;
		
		case 21:
			return -1033,653f, -2216,249f, 7,9812f;
		
		case 22:
			return 491,1942f, -2136,79f, 4,9175f;
		
		case 23:
			return 2548,739f, 341,2728f, 107,4612f;
		
		case 24:
			return -480,7506f, -450,5746f, 33,2013f;
		
		case 45:
			return 187,2586f, 1246,989f, 224,4599f;
		
		case 46:
			return 1881,098f, -1032,18f, 77,8668f;
		
		case 47:
			return -803,2568f, 884,084f, 202,1938f;
		
		case 48:
			return -2334,767f, 263,5585f, 168,6021f;
		
		case 49:
			return 822,6735f, -2979,961f, 5,0207f;
		
		case 6:
			return 1511,717f, -2098,712f, 75,777f;
		
		case 7:
			return 777,491f, 1287,714f, 359,297f;
		
		case 8:
			return -1715,441f, -1134,02f, 12,075f;
		
		case 9:
			return -1832,078f, -2805,618f, 12,944f;
		
		case 10:
			return 848,653f, -3209,231f, 4,901f;
		
		case 30:
			return 979,195f, -127,704f, 72,938f;
		
		case 31:
			return 977,524f, -1824,118f, 30,159f;
		
		case 32:
			return -680,7855f, -879,4637f, 23,4991f;
		
		case 33:
			return -1578,277f, -85,852f, 53,134f;
		
		case 34:
			return -145,437f, -956,396f, 20,277f;
		
		case 40:
			return -53,0294f, -1418,961f, 28,328f;
		
		case 41:
			return 85,7264f, -824,765f, 30,0518f;
		
		case 42:
			return -892,1681f, 132,276f, 58,3107f;
		
		case 43:
			return 192,946f, 61,563f, 82,601f;
		
		case 44:
			return -703,855f, -1137,8f, 9,613f;
		
		case 50:
			return 370,895f, 793,555f, 186,567f;
		
		case 51:
			return 348,939f, -1098,917f, 28,413f;
		
		case 52:
			return -138,215f, 984,602f, 235,012f;
		
		case 53:
			return -3188,038f, 1209,957f, 8,607f;
		
		case 54:
			return 1220,717f, -3000,777f, 4,865f;
		
		case 25:
			return -575,8843f, -133,6788f, 34,8194f;
		
		case 26:
			return 385,3026f, -1633,933f, 28,2919f;
		
		case 27:
			return -1079,755f, -883,9249f, 3,6029f;
		
		case 28:
			return 851,1126f, -1403,54f, 25,1226f;
		
		case 29:
			return -1307,583f, -1527,499f, 3,3451f;
		
		case 55:
			return -690,8977f, -611,4503f, 31,1423f;
		
		case 56:
			return -1776,953f, -252,487f, 48,395f;
		
		case 57:
			return -1327,994f, 350,675f, 62,719f;
		
		case 58:
			return -523,9545f, -249,077f, 34,7553f;
		
		case 59:
			return 291,944f, 195,6205f, 103,3726f;
		
		case 60:
			return 717,497f, -3858,922f, 0f;
		
		case 61:
			return 1983,776f, -3537,736f, -0,187f;
		
		case 62:
			return -2529,737f, -3526,052f, 0,375f;
		
		case 63:
			return 58,069f, -4048,858f, 0f;
		
		case 64:
			return -2531,218f, -1086,706f, 0,937f;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 145,7378f, 322,3651f, 111,1386f;
				
				case 1:
					return 140,3634f, 315,898f, 111,1386f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 159,484f, -1256,225f, 28,185f;
				
				case 1:
					return 150,465f, -1245,846f, 28,198f;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return -1362,216f, 493,5369f, 102,9044f;
				
				case 1:
					return -1353,808f, 483,3299f, 102,8865f;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 2607,515f, 2794,158f, 32,709f;
				
				case 1:
					return 2612,903f, 2807,067f, 32,719f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return -2784,369f, 1432,235f, 99,9284f;
				
				case 1:
					return -2781,294f, 1424,859f, 99,9284f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 707,0178f, 4181,916f, 39,7092f;
				
				case 1:
					return 714,0385f, 4172,131f, 39,7091f;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return -502,7667f, 5167,565f, 88,5884f;
				
				case 1:
					return -505,3714f, 5163,871f, 88,9852f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 2182,595f, -625,5231f, 95,8305f;
				
				case 1:
					return 2158,371f, -620,7534f, 95,3615f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 665,8118f, -1302,871f, 22,2289f;
				
				case 1:
					return 670,1454f, -1335,563f, 22,9101f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 1585,022f, 3367,705f, 36,389f;
				
				case 1:
					return 1590,242f, 3373,579f, 36,0557f;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam1)
			{
				case 0:
					return 1249,812f, -334,981f, 68,082f;
				
				case 1:
					return 1257,59f, -335,9944f, 68,0822f;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					return -646,743f, -1749,078f, 23,432f;
				
				case 1:
					return -634,7629f, -1730,286f, 23,1686f;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam1)
			{
				case 0:
					return 1982,629f, 3786,232f, 31,181f;
				
				case 1:
					return 1978,498f, 3784,034f, 31,1808f;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam1)
			{
				case 0:
					return 2588,205f, 443,4924f, 107,4557f;
				
				case 1:
					return 2583,297f, 438,5674f, 107,4557f;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam1)
			{
				case 0:
					return 970,9243f, 3616,476f, 31,6212f;
				
				case 1:
					return 951,5305f, 3615,41f, 31,6283f;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return 1362,819f, -554,5222f, 73,3379f;
				
				case 1:
					return 1353,164f, -554,6558f, 73,1354f;
				
				default:
			}
			break;
		
		case 151:
			switch (iParam1)
			{
				case 0:
					return -1151,868f, 948,8068f, 198,0139f;
				
				case 1:
					return -1163,288f, 928,6395f, 196,5032f;
				
				default:
			}
			break;
		
		case 152:
			switch (iParam1)
			{
				case 0:
					return 140,45f, -246,704f, 50,504f;
				
				case 1:
					return 145,775f, -248,609f, 50,468f;
				
				default:
			}
			break;
		
		case 153:
			switch (iParam1)
			{
				case 0:
					return 874,578f, -2174,948f, 29,519f;
				
				case 1:
					return 886,236f, -2178,334f, 29,519f;
				
				default:
			}
			break;
		
		case 154:
			switch (iParam1)
			{
				case 0:
					return 45,724f, -1450,489f, 28,312f;
				
				case 1:
					return 52,295f, -1437,391f, 28,312f;
				
				default:
			}
			break;
		
		case 155:
			switch (iParam1)
			{
				case 0:
					return -493,817f, -2224,67f, 5,788f;
				
				case 1:
					return -511,959f, -2231,29f, 5,489f;
				
				default:
			}
			break;
		
		case 156:
			switch (iParam1)
			{
				case 0:
					return 674,72f, 672,161f, 127,911f;
				
				case 1:
					return 666,681f, 674,893f, 127,911f;
				
				default:
			}
			break;
		
		case 157:
			switch (iParam1)
			{
				case 0:
					return -3169,228f, 1105,144f, 19,706f;
				
				case 1:
					return -3172,253f, 1099,131f, 19,784f;
				
				default:
			}
			break;
		
		case 158:
			switch (iParam1)
			{
				case 0:
					return 2863,803f, 1513,051f, 23,567f;
				
				case 1:
					return 2865,857f, 1518,958f, 23,567f;
				
				default:
			}
			break;
		
		case 159:
			switch (iParam1)
			{
				case 0:
					return -1183,289f, -363,908f, 35,547f;
				
				case 1:
					return -1182,461f, -368,997f, 35,47f;
				
				default:
			}
			break;
		
		case 160:
			switch (iParam1)
			{
				case 0:
					return 2352,142f, 4872,04f, 40,8114f;
				
				case 1:
					return 2353,829f, 4879,823f, 40,836f;
				
				default:
			}
			break;
		
		case 161:
			switch (iParam1)
			{
				case 0:
					return 2593,027f, 3171,48f, 50,0521f;
				
				case 1:
					return 2585,175f, 3178,916f, 50,2472f;
				
				default:
			}
			break;
		
		case 162:
			switch (iParam1)
			{
				case 0:
					return 854,003f, 2357,536f, 52,059f;
				
				case 1:
					return 861,425f, 2370,523f, 53,583f;
				
				default:
			}
			break;
		
		case 163:
			switch (iParam1)
			{
				case 0:
					return 1438,18f, 3615,838f, 33,93f;
				
				case 1:
					return 1433,082f, 3613,894f, 33,944f;
				
				default:
			}
			break;
		
		case 164:
			switch (iParam1)
			{
				case 0:
					return 736,687f, 4191,176f, 39,728f;
				
				case 1:
					return 736,269f, 4177,403f, 39,722f;
				
				default:
			}
			break;
		
		case 165:
			switch (iParam1)
			{
				case 0:
					return 1458,731f, 6542,056f, 13,836f;
				
				case 1:
					return 1459,857f, 6548,396f, 13,55f;
				
				default:
			}
			break;
		
		case 166:
			switch (iParam1)
			{
				case 0:
					return -2271,835f, 4280,214f, 44,651f;
				
				case 1:
					return -2268,572f, 4285,391f, 45,135f;
				
				default:
			}
			break;
		
		case 167:
			switch (iParam1)
			{
				case 0:
					return -1132,408f, 2694,927f, 17,8f;
				
				case 1:
					return -1137,807f, 2687,475f, 17,694f;
				
				default:
			}
			break;
		
		case 168:
			switch (iParam1)
			{
				case 0:
					return -744,342f, 5538,266f, 32,486f;
				
				case 1:
					return -773,501f, 5532,21f, 32,479f;
				
				default:
			}
			break;
		
		case 169:
			switch (iParam1)
			{
				case 0:
					return -100,727f, 6580,415f, 28,402f;
				
				case 1:
					return -96,114f, 6584,069f, 28,436f;
				
				default:
			}
			break;
		
		case 175:
			return -1159,809f, -1563,512f, 3,4034f;
		
		case 176:
			return -1843,748f, -609,2866f, 10,3629f;
		
		case 177:
			return -2212,135f, 4241,07f, 46,5893f;
		
		case 178:
			return 243,1526f, 3153,899f, 41,4894f;
		
		case 179:
			return -582,7752f, 5332,255f, 69,2145f;
		
		case 180:
			return 50,8194f, -862,91f, 29,5896f;
		
		case 181:
			return 1187,601f, -1336,945f, 33,9648f;
		
		case 182:
			return -1135,378f, 550,3592f, 100,9672f;
		
		case 183:
			return 1406,436f, 2161,135f, 97,5442f;
		
		case 184:
			return 1775,927f, 4597,86f, 36,7104f;
		
		case 185:
			return -1149,59f, -1562,984f, 3,38f;
		
		case 186:
			return -1854,571f, -599,049f, 10,539f;
		
		case 187:
			return 42,807f, -883,648f, 29,265f;
		
		case 188:
			return 1194,16f, -1309,266f, 34,093f;
		
		case 189:
			return -1166,469f, 543,194f, 100,298f;
		
		case 190:
			return 1418,145f, 2164,872f, 96,573f;
		
		case 191:
			return 256,753f, 3155,149f, 41,554f;
		
		case 192:
			return -2172,257f, 4267,015f, 47,949f;
		
		case 193:
			return -584,472f, 5321,835f, 69,214f;
		
		case 194:
			return 1816,334f, 4601,093f, 36,368f;
		
		case 195:
			return 2946,521f, 4649,378f, 47,5449f;
		
		case 196:
			return 2594,956f, 2413,781f, 22,4907f;
		
		case 197:
			return 2636,992f, 579,6707f, 94,2817f;
		
		case 198:
			return -225,6168f, -2484,773f, 5,0014f;
		
		case 199:
			return -1128,903f, -1752,743f, 3,0021f;
		
		case 200:
			return -3110,97f, 779,9443f, 17,9071f;
		
		case 201:
			return -1478,159f, 1509,55f, 114,1521f;
		
		case 202:
			return -2285,361f, 4251,587f, 42,1319f;
		
		case 203:
			return 660,4508f, 771,1481f, 204,403f;
		
		case 204:
			return 112,201f, -433,5972f, 40,1284f;
		
		case 205:
			return -2267,608f, 4279,202f, 44,716f;
		
		case 206:
			return 2924,765f, 4643,386f, 47,545f;
		
		case 207:
			return 2590,391f, 2386,328f, 21,566f;
		
		case 208:
			return -1487,848f, 1533,011f, 112,763f;
		
		case 209:
			return -1146,516f, -1769,043f, 3,077f;
		
		case 210:
			return -258,795f, -2508,146f, 5,001f;
		
		case 211:
			return 2626,946f, 614,5991f, 93,7752f;
		
		case 212:
			return -3093,367f, 803,7929f, 17,5624f;
		
		case 213:
			return 690,1229f, 769,2505f, 204,4732f;
		
		case 214:
			return 131,4018f, -400,5652f, 40,1941f;
		
		case 215:
			return 485,3851f, -1102,124f, 28,2009f;
		
		case 216:
			return 1707,998f, 4822,285f, 41,0202f;
		
		case 217:
			return 2661,973f, 3278,093f, 54,2405f;
		
		case 218:
			return 448,609f, -559,5212f, 27,5003f;
		
		case 219:
			return -632,399f, -1751,88f, 23,0026f;
		
		case 220:
			return 878,5939f, -1663,995f, 29,4561f;
		
		case 221:
			return -3166,658f, 1136,24f, 20,0759f;
		
		case 222:
			return -798,1126f, 5390,643f, 33,3131f;
		
		case 223:
			return -1048,352f, -1557,898f, 3,9761f;
		
		case 224:
			return -495,7263f, 43,5551f, 51,5799f;
		
		case 225:
			return 2645,03f, 3289,791f, 54,251f;
		
		case 226:
			return -780,5065f, 5401,407f, 33,2569f;
		
		case 227:
			return 2045,923f, 3164,532f, 44,2689f;
		
		case 228:
			return -134,167f, 1931,651f, 195,4121f;
		
		case 229:
			return 968,2727f, 2715,777f, 38,4835f;
		
		case 230:
			return 2760,283f, 3437,324f, 55,0227f;
		
		case 231:
			return -1050,661f, -1574,378f, 3,9315f;
		
		case 232:
			return -512,3326f, 45,0425f, 51,5799f;
		
		case 233:
			return 459,0626f, -1099,047f, 28,2015f;
		
		case 234:
			return 866,4947f, -1635,401f, 29,1943f;
		
		case 255:
			return 35,6848f, -581,3895f, 30,6286f;
		
		case 256:
			return 939,8113f, -90,7924f, 77,7643f;
		
		case 257:
			return 237,2429f, 1141,505f, 224,4801f;
		
		case 258:
			return 387,0771f, -1295,109f, 37,5539f;
		
		case 259:
			return -1256,11f, -385,716f, 41,792f;
		
		case 260:
			return -3141,204f, 1117,236f, 19,7013f;
		
		case 261:
			return 2799,818f, 3497,44f, 53,8581f;
		
		case 262:
			return -2270,441f, 4282,083f, 44,9072f;
		
		case 263:
			return -1677,13f, 41,8815f, 62,4449f;
		
		case 264:
			return 1688,967f, 4774,191f, 40,9215f;
		
		case 265:
			return 8,335f, -596,793f, 30,629f;
		
		case 266:
			return 424,868f, -1309,468f, 35,34f;
		
		case 267:
			return -1699,592f, 44,893f, 64,281f;
		
		case 268:
			return 907,222f, -59,256f, 77,764f;
		
		case 269:
			return 1686,309f, 4798,634f, 40,897f;
		
		case 270:
			return 2793,665f, 3482,302f, 54,092f;
		
		case 271:
			return -2278,17f, 4272,064f, 43,6124f;
		
		case 272:
			return -3137,196f, 1098,879f, 19,645f;
		
		case 273:
			return 2930,288f, 4323,032f, 49,555f;
		
		case 274:
			return 2454,865f, 4076,7f, 37,068f;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 500,9953f, -1495,606f, 28,2887f;
				
				case 1:
					return 507,7525f, -1495,943f, 28,2882f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return -306,078f, -1194,304f, 23,3644f;
				
				case 1:
					return -307,3654f, -1201,962f, 23,8176f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 1514,299f, 766,6217f, 76,5565f;
				
				case 1:
					return 1531,355f, 786,8307f, 76,4458f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 1551,146f, 3723,742f, 33,5063f;
				
				case 1:
					return 1543,306f, 3724,003f, 33,7059f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 1253,897f, 1829,725f, 80,3815f;
				
				case 1:
					return 1237,748f, 1861,037f, 78,1461f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 1443,396f, 6493,772f, 19,2088f;
				
				case 1:
					return 1439,965f, 6493,985f, 19,1188f;
				
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

float func_249()
{
	switch (func_106())
	{
		case 12:
			return 100f;
		
		default:
	}
	return 0f;
}

float func_250()
{
	switch (func_106())
	{
		case 12:
			return 500f;
		
		default:
	}
	return 150f;
}

int func_251(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, iParam5, bParam7, bParam6, bParam14);
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
			func_252(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_252(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_253(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
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

int func_253(int iParam0, vector3 vParam1, int iParam4)
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

void func_254(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_271(&(Global_75441.f_555[0]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0], bParam4) <= fParam3)
			{
				func_255(iVar0);
			}
		}
		iVar0++;
	}
}

void func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_271(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				unk_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_270(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_259(0, Global_75441.f_555[0].f_12) || !func_259(1, Global_75441.f_555[0].f_12)))
			{
				func_258(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_256(iParam0, 0);
		}
	}
}

void func_256(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_270(iParam0, 0))
		{
			func_257(iParam0, 1, 0);
			func_257(iParam0, 2, 0);
			func_257(iParam0, 3, 0);
			func_257(iParam0, 4, 0);
			func_257(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_257(iParam0, 0, 0);
	}
}

void func_257(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

void func_258(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_259(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_269(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_260(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_260(int iParam0, bool bParam1)
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
		if (!func_268())
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
		if ((((!func_267() && !func_266()) && !func_265()) && !func_264()) && !func_268())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_265())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_263(iParam0))
		{
			return 0;
		}
	}
	if (!func_261(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)
{
	if (!func_262())
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

int func_262()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_263(int iParam0)
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

int func_264()
{
	return 0;
}

int func_265()
{
	return 1;
}

int func_266()
{
	return 1;
}

int func_267()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_268()
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

int func_269(var uParam0)
{
	return *uParam0;
}

bool func_270(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

int func_271(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_273(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_273(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_273(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_273(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_273(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_273(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_273(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_273(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_273(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = -186537451;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = -1008861746;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = 356391690;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = 771711535;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = -1323100960;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = 1917016601;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = -823509173;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_268())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_268())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = -1269889662;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_272(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_272(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_272(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_272(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_273(int iParam0, int iParam1)
{
	if (func_275(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_274(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_274(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_275(int iParam0)
{
	return iParam0 < 3;
}

float func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 125:
			switch (iParam1)
			{
				case 0:
					return 250,798f;
				
				case 1:
					return 182,9838f;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 270,1964f;
				
				case 1:
					return 181,9853f;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 301,5943f;
				
				case 1:
					return 263,1922f;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 75,5937f;
				
				case 1:
					return 337,3849f;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 202,9915f;
				
				case 1:
					return 118,387f;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 44,9886f;
				
				case 1:
					return 82,3829f;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return 46,1852f;
				
				case 1:
					return 31,1897f;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 81,5918f;
				
				case 1:
					return 237,7839f;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 48,7906f;
				
				case 1:
					return 158,7972f;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return 23,5893f;
				
				case 1:
					return 272,1882f;
				
				default:
			}
			break;
	}
	return 250,798f;
}

bool func_277(int iParam0, int iParam1)
{
	return func_278(iParam0) == Local_933.f_779[iParam1];
}

int func_278(int iParam0)
{
	return iParam0 + 2;
}

int func_279(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!unk_0x00A15D69BCAA5267() > 7 && !unk_0x00A15D69BCAA5267() == 5)
		{
			return 0;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return 0;
	}
	if (!func_415(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_605) < func_414(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_413();
			func_412();
		}
		return 0;
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) < func_414(0))
			{
				return 0;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) > func_414(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_405(vParam0))
		{
			if (func_404(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (vdist(Global_2405072.f_688, vParam0) > 50f)
		{
			return 0;
		}
	}
	unk_0x10FEEAFF01E32639((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = unk_0x6794171A1021C2D8();
		Global_2405072.f_669 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_673 = unk_0x6794171A1021C2D8();
		Global_2405072.f_688 = { vParam0 };
		Global_2405072.f_674 = unk_0x6794171A1021C2D8();
		Global_2405072.f_670 = 2;
		func_403();
		func_413();
		if (!uParam10->f_27 || (((((func_402(vParam0, 1, 1133903872) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_383(vParam0, iParam6);
		}
		if (func_368(vParam0))
		{
			func_383(vParam0, iParam6);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (unk_0xD1B4D22E0BA9B0C8((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405072.f_676 = { vParam0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_363(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_361(vParam0, *uParam9, iParam6, unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_676 = { vParam0 };
					Global_2405072.f_679 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = -1008861746;
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { vParam3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1] = { uParam10->f_15[iVar1] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_309(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_303(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = unk_0x6794171A1021C2D8();
				Global_2405072.f_671 = unk_0x6794171A1021C2D8();
				Global_2405072.f_670 = 3;
			}
			break;
		
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_302(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = unk_0x6794171A1021C2D8();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_300(Global_2405072.f_676, 0);
						func_299(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_672) > 3000)
			{
				func_299(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_692) < 10000)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_691))
					{
						if (unk_0x9E6C7E283363593B(Global_2405072.f_691))
						{
							if (!unk_0x6FE31D882B028E10(Global_2405072.f_691))
							{
								if (func_298(Global_2405072.f_676, Global_2405072.f_679, iParam6, unk_0xD803B885F5E47A62(), 0) || func_281(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_300(Global_2405072.f_676, 0);
									func_299(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_300(Global_2405072.f_676, 0);
								func_299(-1);
							}
						}
					}
					else
					{
						func_299(-1);
					}
				}
				else
				{
					func_299(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405072.f_676 = { vParam0 };
			Global_2405072.f_679 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = -1008861746;
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3,5f;
			Var64.f_10 = uParam10->f_5;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_6;
			Var64.f_11 = uParam10->f_7;
			Var64.f_6 = uParam10->f_8;
			Var64.f_7 = uParam10->f_9;
			Var64 = { vParam3 };
			Var64.f_34 = iParam6;
			Var64.f_31 = uParam10->f_13;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_14;
			Var64.f_56 = uParam10->f_25;
			Var64.f_57 = uParam10->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1] = { uParam10->f_15[iVar1] };
				Var64.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var64.f_49 = uParam10->f_29;
			func_309(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
			Global_2405072.f_670 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { vParam0 };
	Global_2405072.f_673 = unk_0x6794171A1021C2D8();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam8 = { Global_2405072.f_676 };
		*uParam9 = Global_2405072.f_679;
		func_280(1);
		return 1;
	}
	return 0;
}

void func_280(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_403();
	func_413();
	if (bParam0)
	{
		func_412();
	}
}

int func_281(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam9 == 0)
		{
			if (func_2503(iVar1, bParam5, bParam6))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_297(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam10) && bParam7) && func_293(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar1), 0))
								{
									iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0);
									if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0))
									{
										iVar4 = unk_0x134B62B726CEC8E6(iVar3);
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, false) };
										fVar8 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_292(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_282(func_291(iVar1), vParam0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_282(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	if (vdist(vParam0, vParam3) < func_290(iParam7, 1008981770))
	{
		func_283(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_283(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vVar0 = { 0f, 1f, 0f };
	func_289(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_284(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = unk_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_284(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_287(iParam0);
		if (iVar0 != 0)
		{
			func_285(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0,01f || vmag(*uParam2) <= 0,01f)
	{
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_285(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_286(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0]), &(Global_1315823[iVar0]));
		}
		if (vmag(Global_1315816[iVar0]) <= 0,01f || vmag(Global_1315823[iVar0]) <= 0,01f)
		{
			Global_1315816[iVar0] = (0f - (fParam4 * 0,5f));
			Global_1315823[iVar0] = (0f + (fParam4 * 0,5f));
			Global_1315816[iVar0].f_1 = (0f - (fParam3 * 0,5f));
			Global_1315823[iVar0].f_1 = (0f + (fParam3 * 0,5f));
			Global_1315816[iVar0].f_2 = (0f - (fParam5 * 0,5f));
			Global_1315823[iVar0].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0] - Global_1315816[iVar0]);
		Global_1315833[iVar0] = (Global_1315823[iVar0].f_1 - Global_1315816[iVar0].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0].f_2 - Global_1315816[iVar0].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0,5f);
	Global_1315844 = (Global_1315839 * 0,5f);
	Global_1315841.f_1 = ((((0,5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0,5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0,5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0,5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_286(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_287(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_288(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_288(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_289(var uParam0, vector3 vParam1)
{
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_290(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_284(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (sqrt(((((vVar6.x * 0,5f) * (vVar6.x * 0,5f)) + ((vVar6.y * 0,5f) * (vVar6.y * 0,5f))) + ((vVar6.z * 0,5f) * (vVar6.z * 0,5f)))) + fParam1);
	return fVar9;
}

Vector3 func_291(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_292(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	if (func_282(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_284(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_289(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_289(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (unk_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0,5f), 0f, 0f };
	func_289(&vVar26, 0f, 0f, fParam3);
	vVar1[0] = { vParam0 + vVar20 + vVar26 };
	vVar1[0].f_2 = (vVar1[0].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1] = { vParam0 + vVar20 - vVar26 };
	vVar1[1].f_2 = (vVar1[1].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2] = { vParam0 + vVar23 + vVar26 };
	vVar1[2].f_2 = (vVar1[2].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3] = { vParam0 + vVar23 - vVar26 };
	vVar1[3].f_2 = (vVar1[3].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_282(vVar1[iVar0], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_292(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0)
{
	if (func_296(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_295(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_294(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
{
	iVar0 = func_109(iParam0);
	if (!iVar0 == func_48())
	{
		if (iVar0 == func_109(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_295(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_296(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_295(iParam0) };
		Global_2513231 = { func_295(iParam1) };
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

int func_297(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

int func_298(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_2503(iVar1, 0, 1) && func_2503(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_282(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_282(func_291(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_282(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2503(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_282(func_291(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

void func_299(int iParam0)
{
	if (Global_2405072.f_675 < 20 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_300(vector3 vParam0, int iParam3)
{
	if (iParam3 == 0 && func_301(vParam0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && vmag(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam3] };
		Global_2405072.f_2728[iParam3] = { vParam0 };
		func_300(vVar0, iParam3 + 1);
	}
}

int func_301(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405072.f_2728[iVar0]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_302(vector3 vParam0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	else
	{
		func_413();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && unk_0xBFF81ED3B99522C7())
			{
				func_283(vParam0, fParam3, iParam4, &vVar0, &vVar3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = unk_0x755FF954DAE327E1((vVar0.z - vVar3.z));
					vVar0.z = (vVar0.z + ((fVar8 * 0,5f) - 2f));
					vVar3.z = (vVar3.z + (fVar8 * 0,5f));
				}
				Global_2405072.f_680[iVar7] = unk_0x3CED806443E1AA85(vVar0, vVar3, fParam6);
				Global_2405072.f_684[iVar7] = unk_0x0D0A574C76D769AC();
				Global_2405072.f_691 = Global_2405072.f_680[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_303(vector3 vParam0, var uParam3, int iParam4, var uParam5)
{
	*uParam5 = func_308(&vParam0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xFB061A86A7AC749F(1, &Var0, 8, func_304(1, 1));
}

int func_304(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_2503(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_305(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_305(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_306(-1, 0) == 8;
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

int func_306(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_307();
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

int func_307()
{
	return Global_1312745;
}

int func_308(var uParam0, var uParam1, var uParam2)
{
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	return iVar16;
}

void func_309(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_358(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_310(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_310(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_354(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_349(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	iVar13 = 3f;
	iVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			iVar13 = 3f;
			iVar14 = 5f;
			break;
		
		case 1:
			iVar13 = 2,75f;
			iVar14 = 7,5f;
			break;
		
		default:
			iVar13 = 2,5f;
			iVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_287(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, iVar13, iVar14);
		if (unk_0x5DD62183BBF151CD(iVar8))
		{
			unk_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x5B33870CBB8B6AC1(iVar8)) || unk_0xD9DC3EBC8290FF92(iVar8))
			{
				unk_0x968116EE0D84C042(vVar1, &uVar6, &uVar7);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_342(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_339(vVar1))
									{
										vVar1 = { func_334(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_333(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_329(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_349(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_328(vVar1, fVar4, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_354(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0,375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_327(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_363(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_363(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_281(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_319(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0] = { vVar1 };
																										Global_2412474.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412474[iVar16], uParam2->f_35))
																												{
																													func_318(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar4;
																									Global_2412474.f_162++;
																									if (func_329(vVar1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_316(0, uParam2);
						}
						iVar26 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0] = { Global_2412474[iVar26] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_315(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, iVar13, iVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_354(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_349(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_311(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_311(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*uParam0[iVar2], vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_312(*uParam0[iVar2], 5f, unk_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *uParam0[iVar3] };
		*uParam2 = uParam0[iVar3]->f_3;
	}
}

int func_312(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_314(vParam0, fParam3, iParam4, iParam5, 0) || func_313(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_313(vector3 vParam0, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0][iVar1].f_4 == 0)
				{
					if (func_282(vParam0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_2503(iVar2, 0, 1) && func_2503(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_314(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_2503(iVar1, 0, 1) && func_2503(iParam4, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2503(iVar1, 0, 1) && func_2503(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (vdist(func_291(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_2503(iVar1, 0, 1))
				{
					if (vdist(func_291(iVar1), vParam0) < 1f)
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

void func_315(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, iParam11, iParam12);
		*uParam5 = { func_334(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_339(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_316(int iParam0, var uParam1)
{
	if (!func_329(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_317(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_316(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_316(iParam0 + 1, uParam1);
	}
}

void func_317(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0] = { Global_2412474[iParam0 + 1] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_318(vector3 vParam0, float fParam3, int iParam4)
{
	vVar0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { vParam0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_318(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_319(vector3 vParam0, float fParam3, float fParam4)
{
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_320(iVar5))
		{
			vVar1 = { func_291(iVar5) };
			fVar7 = vdist(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_320(int iParam0)
{
	if (func_2503(iParam0, 0, 1))
	{
		if (!func_325(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_322(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_321(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
				{
					if (!func_322(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_293(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_321(int iParam0, int iParam1, int iParam2)
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

int func_322(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_323(iParam0))
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

bool func_323(int iParam0)
{
	return func_324(iParam0);
}

bool func_324(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_325(int iParam0)
{
	if (func_305(iParam0, 0))
	{
		return 1;
	}
	if (func_326())
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

bool func_326()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_327(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, false) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_292(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, false) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_292(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_298(vParam0, fParam3, iParam4, iParam5, iParam6) || func_361(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_329(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_332(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_330(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_330(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_331(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_332(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
}

int func_333(vector3 vParam0, float fParam3)
{
	if (func_322(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_282(vParam0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0].f_15 != 0)
				{
					if (func_282(vParam0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0].f_12 != 0)
				{
					if (func_282(vParam0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_282(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_282(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_334(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_337(vParam0, *fParam3, vParam6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x968116EE0D84C042(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xAFB8495D36825275(iParam11) && func_336(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (to_float(iVar8) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * to_float(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (to_float(iVar9) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * to_float(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0,95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0,5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4,2f * -0,5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_335(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_335(iParam11, 1,5f);
				}
				if (fVar14 > 1,8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (vmag(vParam6) > 0f)
	{
		if (!func_337(vParam0, *fParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { unk_0x8A5E176FF719A014(vParam0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2E466A8362971293(vParam0, *fParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(vmag(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_335(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_335(iParam11, 1,5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0,5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_335(int iParam0, float fParam1)
{
	func_284(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_336(vector3 vParam0)
{
	if (unk_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_337(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vVar0 = { 0f, 1f, 0f };
	func_289(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_338(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_338(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_339(vector3 vParam0)
{
	iVar1 = func_341(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_340(vParam0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_340(vParam0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_340(vector3 vParam0, var uParam3)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_341(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_342(var uParam0, bool bParam1)
{
	if (func_348(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = unk_0x79833B02DBD2A244(0,01f, 360f);
			func_347(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_343(vVar1, &uVar0) || func_348(vVar1))
			{
				vVar1 = { *uParam0 };
				func_347(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_343(vector3 vParam0, var uParam3)
{
	if (func_346())
	{
		return 0;
	}
	iVar1 = func_345();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_344(vParam0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_344(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_332(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_330(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_345()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_346()
{
	return Global_1676377.f_474;
}

void func_347(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_289(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_289(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

int func_348(vector3 vParam0)
{
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

bool func_349(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_332(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_330(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_350(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_350(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_347(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_353(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_351(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_332(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_330(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x0399732A9EBC368E(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

void func_351(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_352(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
	fVar9 = (vmag(vVar3) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_338(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_338(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = vdist(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_352(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0,5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_352(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		fVar9 = (vmag(vVar29) * sin(unk_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_338(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_338(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (vdist(vVar10, *uParam0, uParam0->f_1, 0f) < vdist(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

Vector3 func_352(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_353(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

int func_354(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_405(vParam0))
	{
		if (func_357(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_355(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_301(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (vdist(*uParam3, *uParam4[iVar0]) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_347(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_355(var uParam0, bool bParam1, bool bParam2)
{
	if (func_343(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_356(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_343(vVar2, &uVar1) || func_348(vVar2))
			{
				vVar2 = { *uParam0 };
				func_356(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

void func_356(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_350(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_350(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_350(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_347(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_353(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_351(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_357(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_344(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0].f_12)
						{
							*uParam0 = { Global_2409984[iVar0].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_356(&vVar1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_357(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_356(&vVar1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_358(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_354(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_349(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_359(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1] };
				fVar5 = Global_2405072.f_1747[iVar1].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_328(vVar2, fVar5, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_354(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0,375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0,375f);
												}
											}
										}
										bVar11 = false;
										if (!func_327(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_363(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_363(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_281(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_319(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0] = { vVar2 };
															Global_2412474.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412474[iVar6], uParam2->f_35))
																	{
																		func_318(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_316(0, uParam2);
				}
				iVar14 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
				vVar15 = { Global_2412474[0] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0] = { Global_2412474[iVar14] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_359(vector3 vParam0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_360(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_360(vector3 vParam0, float fParam3, float fParam4)
{
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = vdist2(vParam0, Global_2405072.f_1747[iVar3]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_361(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_362(vParam0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_292(vParam0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_2503(iVar2, 0, 1) && func_2503(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_362(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	fVar0 = func_290(iParam3, 1008981770);
	fVar1 = func_290(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_363(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || unk_0xEA19D5D9230DBB67(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_367(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_364(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_364(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_2503(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_365(unk_0xD803B885F5E47A62()), vParam0, true) <= (fVar2 + fParam3))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2503(iVar1, 1, 1))
		{
			if (!func_305(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_297(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_365(iVar1), vParam0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam8 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_365(iVar1), vParam0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_365(int iParam0)
{
	iVar0 = iParam0;
	if ((func_366() && Global_1590535[iVar0].f_847) && !func_179(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_291(iParam0);
}

bool func_366()
{
	return Global_2450632.f_17;
}

int func_367(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_2503(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_297(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam9) && bParam6) && func_293(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_291(iVar1), vParam0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_368(vector3 vParam0)
{
	if (Global_2537071.f_883 && func_369(vParam0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_369(vector3 vParam0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_382(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_370(iVar1))
			{
				if (func_382(Global_1676377.f_488[iVar0], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	iVar0 = func_381(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_48())
	{
		if (Global_1590535[iVar1].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	if (func_380(unk_0xD803B885F5E47A62(), 0) || (func_377(unk_0xD803B885F5E47A62()) && func_375(func_376(unk_0xD803B885F5E47A62())) == 12))
	{
		return 1;
	}
	if (func_374(unk_0xD803B885F5E47A62()) || (func_377(unk_0xD803B885F5E47A62()) && func_375(func_376(unk_0xD803B885F5E47A62())) == 8))
	{
		return 1;
	}
	if (func_373(unk_0xD803B885F5E47A62()) || (func_377(unk_0xD803B885F5E47A62()) && func_375(func_376(unk_0xD803B885F5E47A62())) == 5))
	{
		return 1;
	}
	if (func_372(unk_0xD803B885F5E47A62()) || (func_377(unk_0xD803B885F5E47A62()) && func_375(func_376(unk_0xD803B885F5E47A62())) == 10))
	{
		return 1;
	}
	if (func_371(unk_0xD803B885F5E47A62()) || (func_377(unk_0xD803B885F5E47A62()) && func_375(func_376(unk_0xD803B885F5E47A62())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_2503(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_375(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_2503(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_375(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_2503(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_48())
			{
				return func_375(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_2503(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_48())
			{
				return func_375(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	if (iParam0 != func_48() && func_2503(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_377(int iParam0)
{
	if (iParam0 != func_48() && func_2503(iParam0, 1, 1))
	{
		if (func_379(iParam0) && !func_378(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_48() && func_2503(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_48() && func_2503(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_380(int iParam0, bool bParam1)
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
	if (iParam0 != func_48())
	{
		if (func_2503(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_48())
			{
				return func_375(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_382(vector3 vParam0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_344(vParam0, &(Global_2409984[iVar0]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_383(vector3 vParam0, int iParam3)
{
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_401())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_400(vParam0);
		if (iVar1 > -1)
		{
			func_412();
			switch (iVar1)
			{
				case 0:
					func_399(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_399(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_399(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_399(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_399(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_399(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_399(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_399(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_399(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_399(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_399(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_399(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_399(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_399(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_399(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_399(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_399(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_399(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_399(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_399(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_399(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_399(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_399(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_399(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_399(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_399(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_399(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_399(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_399(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_399(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_399(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_399(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_399(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_399(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_399(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_399(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_399(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_399(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_399(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_399(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_399(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_399(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_399(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_399(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_399(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_399(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_399(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_399(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_399(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_399(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_399(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_399(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_399(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_397(78);
					break;
				
				case 11:
					func_397(79);
					break;
				
				case 12:
					func_397(82);
					break;
				
				case 13:
					func_397(81);
					break;
				
				case 14:
					func_397(73);
					break;
				
				case 15:
					func_399(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_399(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_399(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_399(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_397(75);
					break;
				
				case 17:
					func_397(76);
					break;
				
				case 18:
					func_397(77);
					break;
				
				case 19:
					func_399(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_399(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_399(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_399(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_397(80);
					break;
				
				case 21:
				case 25:
					func_397(87);
					break;
				
				case 22:
				case 26:
					func_397(88);
					break;
				
				case 23:
				case 27:
					func_397(89);
					break;
				
				case 24:
				case 28:
					func_397(90);
					break;
				
				case 29:
				case 30:
					if (func_396(iParam3))
					{
						func_397(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
					}
					break;
				
				case 31:
					func_399(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_399(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_399(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_399(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_399(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_399(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_399(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_399(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_399(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_399(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_399(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_399(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_399(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_399(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_399(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_399(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_399(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_399(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_399(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_399(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_399(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_399(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_399(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_399(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_399(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_399(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_399(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_399(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_399(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_399(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_399(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_399(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_399(-194,254f, -2018,756f, 26,62f, 75f);
					func_399(-186,956f, -2031,369f, 26,62f, 338f);
					func_399(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_399(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_399(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_399(-233,372f, -2089,601f, 26,62f, 304f);
					func_399(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_399(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_399(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_399(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_399(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_399(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_399(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_399(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_399(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_399(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_399(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_399(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_399(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_399(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_399(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_399(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_393(vParam0, &iVar2, &iVar6) || (func_369(vParam0, &(iVar2[0])) && (unk_0xC41A9202669A24C4(iParam3) || unk_0xAFB8495D36825275(iParam3))))
		{
			func_412();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_392(iVar2[iVar0], -1))
				{
					if (func_396(iParam3))
					{
						func_397(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_391(unk_0x16F2683693E537C9()) || func_390(unk_0x16F2683693E537C9())) && unk_0xC41A9202669A24C4(iParam3)) || unk_0xAFB8495D36825275(iParam3))
					{
						if (func_389(iParam3))
						{
							func_388(iVar2[iVar0]);
						}
						else if (func_387(iParam3))
						{
							func_386(iVar2[iVar0]);
							func_388(iVar2[iVar0]);
						}
						else
						{
							func_386(iVar2[iVar0]);
							func_388(iVar2[iVar0]);
						}
					}
					else
					{
						func_384(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_397(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_399(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_399(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_399(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_399(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_399(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_399(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_399(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_399(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_399(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_399(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_399(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_399(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_399(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_399(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_399(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_399(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_399(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_399(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_399(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_399(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_399(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_399(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_399(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_399(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_399(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_399(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_399(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_399(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_399(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_399(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_399(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_399(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_399(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_399(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_399(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_399(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_399(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_399(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_399(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_399(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_399(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_399(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_399(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_399(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_399(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_399(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_399(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_399(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_399(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_399(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_399(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_399(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_399(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_399(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_399(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_399(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_399(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_399(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_399(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_399(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_399(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_399(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_399(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_399(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_399(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_399(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_399(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_399(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_399(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_399(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_399(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_399(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_399(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_399(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_399(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_399(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_399(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_399(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_399(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_399(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_399(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_399(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_399(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_399(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_399(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_399(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_399(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_399(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_399(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_399(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_399(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_399(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_399(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_399(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_399(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_399(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_399(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_399(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_399(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_399(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_399(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_399(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_399(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_399(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_399(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_399(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_399(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_399(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_399(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_399(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_399(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_399(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_399(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_399(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_399(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_399(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_399(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_399(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_399(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_399(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_399(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_399(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_399(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_399(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_399(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_399(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_399(142,7427f, -2536,147f, 5f, 205,0002f);
			func_399(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_399(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_399(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_399(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_399(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_399(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_399(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_399(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_399(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_399(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_399(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_399(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_399(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_399(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_399(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_399(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_399(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_399(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_399(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_399(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_399(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_399(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_399(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_399(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_399(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_399(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_399(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_399(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_399(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_399(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_399(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_399(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_399(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_399(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_399(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_399(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_399(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_399(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_399(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_399(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_399(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_399(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_399(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_399(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_399(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_399(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_399(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_399(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_399(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_399(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_399(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_399(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_399(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_399(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_399(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_399(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_399(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_399(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_399(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_399(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_399(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_399(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_399(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_399(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_399(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_399(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_399(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_399(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_399(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_399(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_399(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_399(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_399(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_399(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_399(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_399(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_399(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_399(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_399(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_399(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_399(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_399(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_399(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_399(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_399(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_399(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_399(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_399(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_399(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_399(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_399(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_399(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_399(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_399(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_399(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_399(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_399(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_399(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_399(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_399(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_399(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_399(-1823,414f, 3092,762f, 31,843f, 330f);
			func_399(-1819,045f, 3100,435f, 31,845f, 330f);
			func_399(-1833,313f, 3075,722f, 31,838f, 330f);
			func_399(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_399(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_399(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_399(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_399(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_399(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_399(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_399(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_399(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_399(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_399(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_399(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_399(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_399(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_399(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_399(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_399(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_399(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_399(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_399(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_399(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_399(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_399(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_399(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_399(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_399(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_399(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_399(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_399(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_399(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_399(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_399(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_399(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_399(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_399(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_399(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_399(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_399(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_399(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_399(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_399(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_399(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_399(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_399(1231,279f, 2910,881f, 43,3085f, 12f);
				func_399(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_399(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_399(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_399(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_399(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_399(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_399(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_399(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_399(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_399(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_399(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_399(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_399(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_399(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_399(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_399(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_399(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_399(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_399(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_399(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_399(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_399(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_399(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_399(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_399(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_399(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_399(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_399(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_399(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_399(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_399(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_399(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_399(3,855f, 2672,388f, 78,437f, 319,2f);
				func_399(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_399(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_399(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_399(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_399(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_399(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_399(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_399(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_399(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_399(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_399(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_399(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_399(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_399(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_399(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_399(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_399(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_399(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_399(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_399(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_399(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_399(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_399(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_399(102,851f, 2688,009f, 51,732f, 224f);
				func_399(109,815f, 2681,012f, 51,112f, 224f);
				func_399(116,355f, 2674,26f, 50,529f, 224f);
				func_399(125,138f, 2665,98f, 49,8f, 224f);
				func_399(132,228f, 2659,865f, 49,26f, 228,4f);
				func_399(139,354f, 2653,536f, 48,737f, 228,4f);
				func_399(88,512f, 2702,995f, 53,042f, 224,199f);
				func_399(81,565f, 2710,357f, 53,67f, 224,199f);
				func_399(75,156f, 2716,981f, 54,223f, 224,199f);
				func_399(68,442f, 2723,806f, 54,775f, 226,199f);
				func_399(61,449f, 2730,606f, 55,308f, 226,199f);
				func_399(53,702f, 2738,167f, 55,855f, 226,199f);
				func_399(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_399(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_399(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_399(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_399(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_399(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_399(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_399(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_399(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_399(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_399(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_399(2714,633f, 3918,283f, 42,938f, 16f);
				func_399(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_399(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_399(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_399(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_399(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_399(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_399(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_399(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_399(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_399(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_399(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_399(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_399(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_399(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_399(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_399(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_399(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_399(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_399(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_399(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_399(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_399(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_399(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_399(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_399(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_399(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_399(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_399(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_399(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_399(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_399(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_399(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_399(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_399(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_399(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_399(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_399(3374,923f, 5520,177f, 20,3207f, 86f);
				func_399(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_399(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_399(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_399(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_399(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_399(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_399(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_399(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_399(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_399(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_399(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_399(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_399(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_399(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_399(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_399(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_399(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_399(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_399(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_399(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_399(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_399(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_399(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_399(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_399(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_399(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(43,848f, 6845,657f, 13,379f, 247,2f);
				func_399(50,379f, 6861,146f, 15,105f, 247,2f);
				func_399(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_399(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_399(55,806f, 6875,081f, 14,824f, 247,2f);
				func_399(11,616f, 6877,079f, 11,466f, 247,2f);
				func_399(18,954f, 6891,633f, 11,37f, 247,2f);
				func_399(26,68f, 6907,587f, 11,869f, 247,2f);
				func_399(7,479f, 6907,895f, 12,024f, 247,2f);
				func_399(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_399(35,591f, 6836,608f, 13,288f, 274,4f);
				func_399(36,028f, 6830,135f, 13,801f, 270,8f);
				func_399(35,114f, 6823,884f, 14,527f, 260,8f);
				func_399(48,779f, 6838,693f, 14,337f, 273,6f);
				func_399(56,738f, 6821,8f, 15,244f, 244,8f);
				func_399(48,377f, 6825,895f, 14,656f, 249,8f);
				func_399(49,11f, 6831,439f, 13,991f, 274,8f);
				func_399(53,544f, 6818,275f, 16,342f, 243f);
				func_399(46,162f, 6821,945f, 15,483f, 249,8f);
				func_399(60,129f, 6836,8f, 15,605f, 269,6f);
				func_399(40,88f, 6802,952f, 20,113f, 242,6f);
				func_399(48,203f, 6799,134f, 20,897f, 244,4f);
				func_399(70,449f, 6809,271f, 16,846f, 243f);
				func_399(61,436f, 6814,266f, 16,71f, 244,2f);
				func_399(56,142f, 6793,458f, 19,806f, 242,6f);
				func_399(65,759f, 6791,12f, 18,433f, 276,4f);
				func_399(77,305f, 6805,391f, 18,558f, 245,6f);
				func_399(85,893f, 6800,243f, 18,535f, 249,8f);
				func_399(56,85f, 6780,582f, 18,822f, 297,999f);
				func_399(65,636f, 6784,669f, 18,789f, 293,799f);
				func_399(74,121f, 6788,498f, 18,739f, 293,799f);
				func_399(97,779f, 6796,32f, 19,02f, 276,799f);
				func_399(106,76f, 6796,983f, 18,914f, 272,599f);
				func_399(112,387f, 6802,858f, 18,994f, 210,599f);
				func_399(117,58f, 6802,644f, 18,663f, 209,399f);
				func_399(122,481f, 6802,693f, 18,468f, 209,399f);
				func_399(127,182f, 6802,686f, 18,218f, 209,399f);
				func_399(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_399(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_399(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_399(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_399(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_399(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_399(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_399(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_399(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_399(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_399(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_399(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_399(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_399(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_399(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_399(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_399(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_399(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_399(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_399(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_399(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_399(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_399(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_399(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_399(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_399(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_399(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_399(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_399(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_399(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_399(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_399(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_399(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_399(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_399(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_399(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_399(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_399(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_399(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_399(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_399(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_399(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_399(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_399(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_399(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_399(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_399(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_399(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_399(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_399(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_399(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_399(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_399(30,027f, 3292,351f, 38,604f, 140,199f);
				func_399(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_399(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_399(23,897f, 3283,152f, 39,381f, 145,399f);
				func_399(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_399(18,723f, 3274,025f, 40,054f, 155,799f);
				func_399(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_399(36,958f, 3298,847f, 38,001f, 127,799f);
				func_399(54,165f, 3311,582f, 36,517f, 303,799f);
				func_399(61,607f, 3317,105f, 35,916f, 306,999f);
				func_399(68,994f, 3323,129f, 35,364f, 308,199f);
				func_399(76,266f, 3329,467f, 34,805f, 311,399f);
				func_399(82,757f, 3335,915f, 34,344f, 316,598f);
				func_399(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_399(14,664f, 3263,688f, 40,931f, 160,398f);
				func_399(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_399(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_399(89,575f, 3343,311f, 33,932f, 318,398f);
				func_399(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_399(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_399(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_399(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_399(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_399(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_399(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_399(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_399(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_399(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_399(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_399(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_399(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_399(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_399(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_399(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_399(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_399(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_399(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_399(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_399(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_399(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_399(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_399(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_399(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_399(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_399(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_399(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_399(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_399(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_399(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_399(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_399(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_399(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_399(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_399(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_399(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_399(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_399(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_399(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_399(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_399(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_399(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_399(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_399(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_399(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_399(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_399(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_399(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_399(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_399(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_399(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_399(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_399(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_399(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_399(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_399(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_399(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_399(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_399(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_399(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_399(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_399(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_399(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_399(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_399(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_399(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_399(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_399(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_399(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_399(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_399(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_399(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_399(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_399(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_399(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_399(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_399(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_399(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_399(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_385(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_385(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_385(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_385(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_385(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_385(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_385(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_385(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_385(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_385(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_385(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_385(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_385(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_385(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_385(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_385(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_385(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_385(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_385(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_385(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_385(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_385(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_385(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_385(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_385(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_385(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_385(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_385(vector3 vParam0, float fParam3, int iParam4, bool bParam5)
{
	if (!iParam4 == 0)
	{
		func_284(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		vVar7 = { 0f, fVar6, 0f };
		vVar10 = { unk_0x8A5E176FF719A014(vParam0, fParam3, vVar7) };
		func_399(vVar10, fParam3);
	}
	else
	{
		func_399(vParam0, fParam3);
	}
}

void func_386(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_399(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_399(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_399(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_399(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_399(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_399(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_399(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_399(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_399(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_399(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_399(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_399(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_399(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_399(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_399(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_399(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_399(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_399(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_399(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_399(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_399(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_399(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_399(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_399(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_399(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_399(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_399(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_399(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_399(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_399(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_399(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_399(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_399(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_399(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_399(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_399(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_399(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_399(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_399(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_399(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_399(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_399(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_399(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_399(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_399(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_399(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_399(-1356,991f, -3242,228f, 12,945f, 330f);
			func_399(-1369,313f, -3234,758f, 12,945f, 330f);
			func_399(-1381,751f, -3227,408f, 12,945f, 330f);
			func_399(-1394,302f, -3220,021f, 12,945f, 330f);
			func_399(-1354,339f, -3223,129f, 12,945f, 330f);
			func_399(-1366,302f, -3215,809f, 12,945f, 330f);
			func_399(-1378,492f, -3208,645f, 12,945f, 330f);
			func_399(-1350,322f, -3203,405f, 12,945f, 330f);
			func_399(-1362,684f, -3196,451f, 12,945f, 330f);
			func_399(-1347,089f, -3182,69f, 12,945f, 330f);
			func_399(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_399(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_399(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_399(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_399(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_399(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_399(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_399(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_399(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_399(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_399(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_399(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_399(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_399(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_399(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_399(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_399(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_399(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_399(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_399(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_399(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_399(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_399(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_399(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_399(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_399(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_399(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_399(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_399(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_399(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_399(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_399(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_399(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_399(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_399(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_399(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_399(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_399(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_399(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_399(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_399(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_399(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_399(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_399(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_399(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_399(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_399(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_399(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_399(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_399(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_399(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_399(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_399(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_399(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_399(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_399(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_399(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_399(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_399(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_399(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_399(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_399(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_399(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_399(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_399(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_399(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_399(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_399(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_399(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_399(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_399(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_399(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_399(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_399(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_399(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_399(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_399(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_399(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_399(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_399(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_399(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_399(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_399(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_399(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_399(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_399(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_399(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_399(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_399(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_399(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_399(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_399(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_399(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_399(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_399(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_399(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_399(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_399(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_399(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_399(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_399(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_399(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_399(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_399(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_399(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_399(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_399(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_399(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_399(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_399(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_399(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_399(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_399(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_399(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_399(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_399(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_399(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_399(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_399(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_399(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_399(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_399(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_399(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_399(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_399(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_399(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_399(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_399(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_399(-2484,323f, 3249,294f, 31,828f, 151f);
			func_399(-2495,313f, 3255,746f, 31,828f, 151f);
			func_399(-2472,644f, 3242,684f, 31,828f, 151f);
			func_399(-2506,313f, 3262,27f, 31,823f, 151f);
			func_399(-2461,494f, 3235,93f, 31,828f, 151f);
			func_399(-2505,602f, 3238,049f, 31,828f, 151f);
			func_399(-2481,937f, 3224,8f, 31,828f, 151f);
			func_399(-2516,813f, 3244,266f, 31,823f, 151f);
			func_399(-2470,03f, 3217,899f, 31,828f, 151f);
			func_399(-2493,933f, 3231,308f, 31,828f, 151f);
			func_399(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_399(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_399(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_399(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_399(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_399(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_399(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_399(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_399(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_399(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_399(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_399(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_399(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_399(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_399(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_399(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_399(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_399(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_399(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_399(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_399(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_399(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_399(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_399(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_399(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_399(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_399(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_399(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_399(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_399(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_399(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_399(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_399(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_399(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_399(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_399(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
		case -1984275979:
		case -392675425:
		case -975345305:
		case -1386191424:
		case 788747387:
		case 744705981:
		case -1660661558:
		case 710198397:
		case -1671539132:
		case -1845487887:
		case -644710429:
		case 1824333165:
		case 970356638:
		case -2122757008:
		case -1673356438:
		case 1077420264:
		case 1341619767:
		case -1281684762:
		case -1523619738:
		case -1007528109:
		case 1565978651:
		case 1036591958:
		case -1700874274:
			return 1;
		
		default:
	}
	return 0;
}

void func_388(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_399(-947,712f, -3367,704f, 12,944f, 60f);
			func_399(-904,692f, -3293,072f, 12,944f, 60f);
			func_399(-863,71f, -3221,978f, 12,944f, 60f);
			func_399(-966,418f, -3162,773f, 12,944f, 60f);
			func_399(-1007,435f, -3233,93f, 12,944f, 60f);
			func_399(-1050,455f, -3308,559f, 12,944f, 60f);
			func_399(-1145,673f, -3253,456f, 12,944f, 60f);
			func_399(-1098,386f, -3181,428f, 12,944f, 60f);
			func_399(-1060,474f, -3108,903f, 12,944f, 60f);
			func_399(-1155,391f, -3053,632f, 12,944f, 60f);
			func_399(-1196,114f, -3125,146f, 12,948f, 60f);
			func_399(-1235,552f, -3201,86f, 12,944f, 60f);
			func_399(-1344,446f, -3139,177f, 12,944f, 60f);
			func_399(-1301,308f, -3064,341f, 12,944f, 60f);
			func_399(-1260,135f, -2992,912f, 12,944f, 60f);
			func_399(-1364,244f, -2932,9f, 12,98f, 60f);
			func_399(-1405,284f, -3004,108f, 12,96f, 60f);
			func_399(-1448,29f, -3078,72f, 12,95f, 60f);
			func_399(-1535,732f, -3028,318f, 12,945f, 60f);
			func_399(-1492,639f, -2953,558f, 12,945f, 60f);
			func_399(-1451,506f, -2882,2f, 12,944f, 60f);
			func_399(-1553,927f, -2823,12f, 13,002f, 60f);
			func_399(-1595,097f, -2894,571f, 12,944f, 60f);
			func_399(-1637,836f, -2968,714f, 12,945f, 60f);
			func_399(-1740,971f, -2911,484f, 12,944f, 330f);
			func_399(-1696,293f, -2833,978f, 12,944f, 330f);
			func_399(-1651,502f, -2756,273f, 12,945f, 330f);
			func_399(-1588,258f, -2647,575f, 12,944f, 330f);
			func_399(-1536,862f, -2681,378f, 12,945f, 330f);
			func_399(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_399(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_399(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_399(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_399(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_399(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_399(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_399(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_399(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_399(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_399(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_399(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_399(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_399(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_399(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_399(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_399(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_399(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_399(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_399(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_399(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_399(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_399(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_399(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_399(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_399(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_399(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_399(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_399(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_399(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_399(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 970385471:
		case -901163259:
		case -1746576111:
		case 837858166:
		case 1043222410:
		case -42959138:
		case -749299473:
		case -50547061:
		case 1621617168:
		case -1214505995:
		case -82626025:
		case 621481054:
		case -1214293858:
		case -1295027632:
		case -339587598:
		case 1075432268:
		case -1600252419:
		case 1981688531:
		case 1044954915:
		case 165154707:
		case -32878452:
		case 447548909:
			return 1;
		
		default:
	}
	return 0;
}

int func_390(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
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

int func_393(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049922[iVar0].f_3[iVar1], Global_1049922[iVar0].f_3[iVar1].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_370(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_394(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0)
{
	iVar0 = func_395(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_48())
	{
		if (Global_1590535[iVar1].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)
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

int func_396(int iParam0)
{
	if ((unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0)) || unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_397(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_399(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_399(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_399(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_399(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case 79:
			func_399(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_399(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_399(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_399(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_399(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_399(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_399(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_399(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_399(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_399(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_399(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_399(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_399(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_399(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_399(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_399(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_399(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_399(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_399(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_399(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_399(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_399(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_399(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_399(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_399(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_399(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_399(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_399(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_399(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_399(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_399(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_399(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_398())
			{
				func_399(-1608,297f, -556,875f, 33,406f, 310f);
				func_399(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_399(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_399(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_399(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_399(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_399(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_399(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_399(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_399(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_399(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_399(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_398())
			{
				func_399(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_399(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_399(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_399(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_399(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_399(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_399(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_399(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_399(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_399(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_399(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_399(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_398())
			{
				func_399(-102,737f, -597,379f, 35,053f, 160,999f);
				func_399(-97,793f, -589,568f, 35,082f, 134,799f);
				func_399(-110,357f, -619,402f, 35,055f, 160,599f);
				func_399(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_399(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_399(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_399(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_399(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_399(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_399(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_399(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_399(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_398())
			{
				func_399(-59,349f, -779,238f, 43,134f, 228,398f);
				func_399(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_399(-65,212f, -772,66f, 43,151f, 219,398f);
				func_399(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_399(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_399(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_399(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_399(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_399(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_399(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_399(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_399(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_399(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_399(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_399(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_399(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_399(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_399(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_399(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_399(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_399(-1464,5f, -927,9f, 9f, 296,7991f);
			func_399(-1466f, -926,1f, 9f, 296,7991f);
			func_399(-1467,9f, -924,7f, 9f, 296,7991f);
			func_399(-1469,7f, -923,7f, 9f, 296,7991f);
			func_399(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_399(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_399(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_399(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_399(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_399(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_399(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_399(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_399(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_399(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_399(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_399(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_399(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_399(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_399(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_399(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_399(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_399(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_399(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_399(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_399(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_399(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_399(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_399(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_399(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_399(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_399(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_399(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_399(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_399(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_399(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_399(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_399(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_399(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_399(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_399(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_399(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_399(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_399(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_399(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_399(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_399(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_399(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_399(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_399(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_399(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_399(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_399(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_399(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_399(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_399(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_399(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_399(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_399(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_399(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_399(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_399(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_399(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_399(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_399(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_399(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_399(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_399(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_399(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_399(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_399(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_399(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_399(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_399(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_399(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_399(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_399(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_399(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_399(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_399(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_399(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_399(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_399(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_399(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_399(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_399(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_399(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_399(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_399(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_398()
{
	return Global_2450632.f_15;
}

void func_399(vector3 vParam0, float fParam3)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (vmag(vParam0) <= 0,01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746] = { vParam0 };
		Global_2405072.f_1747[Global_2405072.f_1746].f_3 = fParam3;
		Global_2405072.f_1746++;
	}
}

int func_400(vector3 vParam0)
{
	if (vdist(Global_2405072.f_2895, vParam0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.z = ((Global_2412235[iVar0].f_2 + Global_2412235[iVar0].f_3.f_2) * 0,5f);
		}
		if (func_340(vParam0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_401()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_402(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_370(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_403()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_404(var uParam0, bool bParam1)
{
	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = ((Global_2412191[iVar0].f_2 + Global_2412191[iVar0].f_3.f_2) * 0,5f);
		}
		if (func_340(vVar1, &(Global_2412191[iVar0])))
		{
			if (bParam1)
			{
				func_351(&vVar1, Global_2412191[iVar0], Global_2412191[iVar0].f_3, Global_2412191[iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_405(vector3 vParam0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_409(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_408(vParam0, 1008981770))
			{
				if (!func_357(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_357(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_407(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_406(&(Global_2405072.f_45[iVar0])) };
					if (!func_357(&vVar1, 0, 0, 0, 1))
					{
						if (!func_357(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_406(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_407(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_344(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_408(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_344(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_409(int iParam0, bool bParam1)
{
	if (func_411() != 0)
	{
		return func_410(iParam0) != 0;
	}
	return func_322(iParam0, bParam1, 0);
}

int func_410(int iParam0)
{
	if (func_2503(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_411()
{
	return Global_30768;
}

void func_412()
{
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_413()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1727A44C562FBED2(Global_2405072.f_684[iVar0]))
		{
			if (unk_0x0D0A574C76D769AC() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_680[iVar0]))
					{
						unk_0xBD63401BCCEC233B(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_414(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_415(int iParam0)
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

Vector3 func_416(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 125:
			switch (iParam1)
			{
				case 0:
					return 57,3017f, -791,4691f, 30,7154f;
				
				case 1:
					return 1958,351f, -978,7599f, 77,7687f;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return -514,9622f, -669,4672f, 32,0413f;
				
				case 1:
					return -1152,584f, 943,5826f, 197,6761f;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return -1169,071f, -883,6486f, 13,108f;
				
				case 1:
					return 1080,312f, -765,7935f, 56,7779f;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 1262,496f, -364,4529f, 68,0618f;
				
				case 1:
					return -963,8774f, -2499,383f, 12,9821f;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 406,7423f, -1904,111f, 24,3385f;
				
				case 1:
					return -2977,825f, 358,1691f, 13,786f;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return -1816,668f, 787,3514f, 136,8655f;
				
				case 1:
					return 741,0908f, -1727,314f, 28,3926f;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return -419,8018f, 1590,275f, 354,1647f;
				
				case 1:
					return -305,0774f, -1166,563f, 22,235f;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 812,7371f, -1080,016f, 27,5708f;
				
				case 1:
					return -1561,357f, 1370,296f, 126,7063f;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 47,4088f, -1484,759f, 28,1257f;
				
				case 1:
					return -130,8417f, -254,2748f, 42,5088f;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return -639,7956f, -307,4761f, 34,044f;
				
				case 1:
					return 2588,773f, 446,9389f, 107,4557f;
				
				default:
			}
			break;
	}
	return 57,3017f, -791,4691f, 30,7154f;
}

void func_417(int iParam0)
{
	if (Local_933.f_508 == -1 && Local_933.f_515 == -1)
	{
		if (Local_933.f_514 == -1 || Local_933.f_514 == iParam0)
		{
			Local_933.f_514 = iParam0;
			if (func_179(Local_933.f_516))
			{
				iVar0 = func_433(iParam0);
				if (func_200(iParam0, 0))
				{
					Local_933.f_623[0] = iVar0;
				}
				else if (func_200(iParam0, 1))
				{
					Local_933.f_623[1] = iVar0;
				}
				if (func_179(Local_933.f_522))
				{
					Local_933.f_522 = { func_432(iVar0) };
				}
				else
				{
					if ((Local_933.f_522.f_2 >= 0f && Local_933.f_522.f_2 < 90f) || (Local_933.f_522.f_2 >= 270f && Local_933.f_522.f_2 < 360f))
					{
						fVar1 = 160f;
					}
					else
					{
						fVar1 = 120f;
					}
					if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
					{
						bVar2 = true;
						if (unk_0x913A58CA04510D94(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), true), Local_933.f_522, fVar1, &(Local_933.f_516)))
						{
							fVar3 = unk_0x0EB28750412C3A5A(Local_933.f_516, unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), true), false);
							fVar4 = unk_0x0EB28750412C3A5A(Local_933.f_516, func_421(), false);
							vVar5 = { unk_0x5293C88BD2F4DE13(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), Local_933.f_516) };
							if (fVar4 < 200f)
							{
								bVar2 = false;
							}
							if (fVar3 > 200f)
							{
								bVar2 = false;
							}
							if (!func_363(Local_933.f_516, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar2 = false;
							}
							if (unk_0x755FF954DAE327E1(vVar5.x) > 100f)
							{
								bVar2 = false;
							}
							if (!bVar2)
							{
								Local_933.f_516 = { 0f, 0f, 0f };
								func_191(iParam0);
							}
							else
							{
								Local_933.f_519 = func_420(Local_933.f_516, unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), true));
							}
						}
						else
						{
							func_419(&(Local_933.f_522));
						}
					}
					else
					{
						Local_933.f_516 = { 0f, 0f, 0f };
						func_191(iParam0);
					}
				}
			}
			else if (func_251(&(Local_933.f_404[iParam0]), func_202(func_106(), func_42(), iParam0), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				func_418(iParam0);
				unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam0));
				func_88(func_187(func_188(iParam0)));
				func_189(iParam0, func_206(iParam0));
				Local_933.f_514 = -1;
				Local_933.f_516 = { 0f, 0f, 0f };
				Local_933.f_519 = 0f;
				Local_933.f_521 = 0;
				Local_933.f_520 = 0;
				Local_933.f_522 = { 0f, 0f, 0f };
			}
		}
	}
}

void func_418(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	unk_0xA22F71BBC8173C39(iVar0, true);
	unk_0x44A200C9B6E1CEA6(iVar0, false);
	unk_0x09C4C5C870748A1F(iVar0, 1);
	unk_0xC4B4C89FC0D48108(iVar0, true);
	unk_0x56FDC9ADE35F7DB0(iVar0, true, true, 0);
}

void func_419(var uParam0)
{
	Local_933.f_521++;
	if (Local_933.f_521 < 5)
	{
		switch (Local_933.f_521)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_933.f_521 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

float func_420(struct<2> Param0, var uParam2, struct<2> Param3, float fParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_421()
{
	if (Local_933.f_2 == 1)
	{
		return func_429();
	}
	if (unk_0xC844350D5D58C99A(iLocal_738))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_738, 0))
		{
			return func_429();
		}
	}
	if (func_427())
	{
		if (!func_27(9))
		{
			return func_429();
		}
	}
	return func_422();
}

Vector3 func_422()
{
	return func_423(func_425(Local_933));
}

Vector3 func_423(int iParam0)
{
	func_424(iParam0, &vVar0);
	return vVar0;
}

void func_424(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			*uParam1 = { 52,903f, 6338,585f, 30,35f };
			break;
		
		case 23:
			*uParam1 = { 416,7524f, 6520,753f, 26,7121f };
			break;
		
		case 24:
			*uParam1 = { 51,7653f, 6486,163f, 30,428f };
			break;
		
		case 25:
			*uParam1 = { -413,6606f, 6171,938f, 30,4782f };
			break;
		
		case 26:
			*uParam1 = { -163,6828f, 6334,845f, 30,5808f };
			break;
		
		case 27:
			*uParam1 = { 1454,671f, -1651,986f, 66f };
			break;
		
		case 28:
			*uParam1 = { 102,14f, 175,26f, 103,56f };
			break;
		
		case 29:
			*uParam1 = { -1462,622f, -381,826f, 37,802f };
			break;
		
		case 30:
			*uParam1 = { -1171,005f, -1380,922f, 3,937f };
			break;
		
		case 31:
			*uParam1 = { 299,071f, -759,072f, 28,333f };
			break;
		
		case 32:
			*uParam1 = { 201,8909f, 2461,782f, 54,6885f };
			break;
		
		case 33:
			*uParam1 = { 2848,369f, 4450,147f, 47,5139f };
			break;
		
		case 34:
			*uParam1 = { 387,5332f, 3585,042f, 32,2922f };
			break;
		
		case 35:
			*uParam1 = { 636,6344f, 2785,126f, 41,0111f };
			break;
		
		case 36:
			*uParam1 = { 1657,066f, 4851,732f, 40,9882f };
			break;
		
		case 37:
			*uParam1 = { 1181,44f, -3113,82f, 5,03f };
			break;
		
		case 38:
			*uParam1 = { 136,973f, -2472,795f, 4,98f };
			break;
		
		case 39:
			*uParam1 = { -253,31f, -2591,15f, 4,97f };
			break;
		
		case 40:
			*uParam1 = { 671,451f, -2667,502f, 5,0812f };
			break;
		
		case 41:
			*uParam1 = { -331,52f, -2778,97f, 4,12f };
			break;
	}
}

int func_425(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_426(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_426(int iParam0)
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

int func_427()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_428(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_428(int iParam0)
{
	return iLocal_697[iParam0] != func_48();
}

Vector3 func_429()
{
	if (func_106() == 7)
	{
		iVar0 = 1;
	}
	return func_430(Local_933, iVar0);
}

Vector3 func_430(int iParam0, int iParam1)
{
	vVar0[0] = { 0f, 0f, 0f };
	vVar0[1] = { 0f, 0f, 0f };
	if (!func_431(iParam0))
	{
		return vVar0[0];
	}
	switch (iParam0)
	{
		case 1:
			vVar0[0] = { 46,57f, 6298,997f, 30,2003f };
			break;
		
		case 2:
			vVar0[0] = { 405,3243f, 6493,409f, 26,71f };
			break;
		
		case 3:
			vVar0[0] = { 58,64f, 6469,08f, 30,3094f };
			break;
		
		case 4:
			vVar0[0] = { -441,42f, 6144,01f, 30,44f };
			break;
		
		case 5:
			vVar0[0] = { -179,1551f, 6317,944f, 30,2184f };
			break;
		
		case 6:
			vVar0[0] = { 1453,143f, -1686,121f, 64,9563f };
			break;
		
		case 7:
			vVar0[0] = { 114,6697f, 164,4655f, 103,4672f };
			break;
		
		case 8:
			vVar0[0] = { -1464,77f, -390,1486f, 37,3017f };
			break;
		
		case 9:
			vVar0[0] = { -1172,126f, -1390,925f, 3,7783f };
			break;
		
		case 10:
			vVar0[0] = { 311,3521f, -760,6975f, 28,0504f };
			vVar0[1] = { 307,7254f, -699,9282f, 28,3096f };
			break;
		
		case 11:
			vVar0[0] = { 208,0649f, 2456,774f, 54,8342f };
			break;
		
		case 12:
			vVar0[0] = { 2878,758f, 4459,61f, 47,3484f };
			break;
		
		case 13:
			vVar0[0] = { 376,971f, 3590,405f, 32,2221f };
			break;
		
		case 14:
			vVar0[0] = { 646,3618f, 2792,016f, 40,6392f };
			break;
		
		case 15:
			vVar0[0] = { 1642,669f, 4839,135f, 40,9704f };
			break;
		
		case 16:
			vVar0[0] = { 1189,591f, -3098,619f, 4,7346f };
			break;
		
		case 17:
			vVar0[0] = { 140,2878f, -2477,946f, 4,94f };
			break;
		
		case 18:
			vVar0[0] = { -256,8373f, -2586,215f, 4,9106f };
			break;
		
		case 19:
			vVar0[0] = { 666,0431f, -2672,718f, 4,9612f };
			break;
		
		case 20:
			vVar0[0] = { -337,6264f, -2769,627f, 3,944f };
			break;
		
		case 21:
			vVar0[0] = { 494,0037f, 3015,448f, 40,0526f };
			break;
		
		case 22:
			vVar0[0] = { 849,5273f, 3023,794f, 40,2763f };
			break;
		
		case 23:
			vVar0[0] = { 40,4676f, 2928,654f, 54,7342f };
			break;
		
		case 24:
			vVar0[0] = { 1572,055f, 2224,068f, 77,3731f };
			break;
		
		case 25:
			vVar0[0] = { 2107,983f, 3324,722f, 44,3713f };
			break;
		
		case 26:
			vVar0[0] = { 2488,974f, 3164,124f, 48,0622f };
			break;
		
		case 27:
			vVar0[0] = { 1798,893f, 4705,239f, 38,955f };
			break;
		
		case 28:
			vVar0[0] = { -753,681f, 5944,054f, 18,8012f };
			break;
		
		case 29:
			vVar0[0] = { -388,6984f, 4338,543f, 55,1304f };
			break;
		
		case 30:
			vVar0[0] = { -3029,436f, 3334,414f, 9,0759f };
			break;
		
		case 31:
			vVar0[0] = { -3155,589f, 1376,788f, 16,0949f };
			break;
	}
	if (iParam1 && !func_272(vVar0[1], 0f, 0f, 0f, 0))
	{
		return vVar0[1];
	}
	return vVar0[0];
}

int func_431(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_432(int iParam0)
{
	switch (Local_933.f_2)
	{
		case 1:
			return unk_0x08D89CE2E20AE305(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]));
		
		case 0:
			if (iLocal_697[iParam0] != func_48())
			{
				iVar0 = unk_0x9539D44F3E4492F6(iLocal_697[iParam0]);
				return unk_0x08D89CE2E20AE305(iVar0);
			}
			break;
	}
	return unk_0x08D89CE2E20AE305(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]));
}

var func_433(int iParam0)
{
	if (func_200(iParam0, 0))
	{
		if (Local_933.f_623[0] == -1)
		{
			uVar0 = func_434();
		}
		else
		{
			uVar0 = Local_933.f_623[0];
		}
	}
	else if (func_200(iParam0, 1))
	{
		if (Local_933.f_623[1] == -1)
		{
			uVar0 = func_434();
		}
		else
		{
			uVar0 = Local_933.f_623[1];
		}
	}
	return uVar0;
}

int func_434()
{
	iVar9 = 0;
	while (iVar9 < func_2346())
	{
		if (fLocal_753[iVar9] > 200f)
		{
			if (iLocal_697[iVar9] != func_48())
			{
				iVar0[iVar10] = iVar9;
				iVar10++;
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar9]))
		{
			iVar12 = iVar9;
		}
		iVar9++;
	}
	if (iVar10 > 0)
	{
		iVar11 = iVar0[unk_0x09AC81E49EA267F7(0, iVar10)];
	}
	else
	{
		iVar11 = iVar12;
	}
	return iVar11;
}

int func_435(int iParam0)
{
	if (func_200(iParam0, 0) || func_200(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0)
{
	if (func_200(iParam0, 0) || func_200(iParam0, 1))
	{
		return 1;
	}
	if (func_106() == 7)
	{
		if (!func_277(iParam0, 0) && !func_277(iParam0, 1))
		{
			return 1;
		}
	}
	if (((((((((func_437(iParam0, 0) || func_437(iParam0, 1)) || func_437(iParam0, 2)) || func_437(iParam0, 3)) || func_437(iParam0, 4)) || func_437(iParam0, 5)) || func_437(iParam0, 6)) || func_437(iParam0, 7)) || func_437(iParam0, 8)) || func_437(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

bool func_437(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_705[iParam0], iParam1);
}

void func_438(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 25:
		case 21:
			func_417(iParam1);
			break;
		
		case 28:
			if (Local_933.f_508 == -1 && Local_933.f_515 == -1)
			{
				if (Local_933.f_514 == -1 || Local_933.f_514 == iParam1)
				{
					Local_933.f_514 = iParam1;
					if (func_179(Local_933.f_516))
					{
						func_465(iParam1);
					}
					else if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_463(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
						Local_933.f_514 = -1;
						Local_933.f_516 = { 0f, 0f, 0f };
						Local_933.f_519 = 0f;
						Local_933.f_520 = 0;
						Local_933.f_525 = 0;
					}
				}
			}
			break;
		
		case 24:
			if (func_200(iParam1, 0) || func_200(iParam1, 1))
			{
				func_417(iParam1);
			}
			else
			{
				if (func_179(Local_933.f_516))
				{
					func_462(iParam1);
				}
				if (!func_179(Local_933.f_516))
				{
					if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_461(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
					}
				}
				Local_933.f_514 = -1;
				Local_933.f_516 = { 0f, 0f, 0f };
				Local_933.f_519 = 0f;
				Local_933.f_520 = 0;
				Local_933.f_525 = 0;
			}
			break;
		
		case 29:
			if (func_200(iParam1, 0) || func_200(iParam1, 1))
			{
				func_417(iParam1);
			}
			else
			{
				if (func_179(Local_933.f_516))
				{
					func_460(iParam1);
				}
				if (!func_179(Local_933.f_516))
				{
					if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_459(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
					}
				}
				Local_933.f_514 = -1;
				Local_933.f_516 = { 0f, 0f, 0f };
				Local_933.f_519 = 0f;
				Local_933.f_520 = 0;
				Local_933.f_525 = 0;
			}
			break;
		
		case 30:
		case 31:
			if (func_200(iParam1, 0) || func_200(iParam1, 1))
			{
				func_417(iParam1);
			}
			else
			{
				if (func_179(Local_933.f_516))
				{
					func_456(iParam1);
				}
				if (!func_179(Local_933.f_516))
				{
					if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_455(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
					}
				}
				Local_933.f_514 = -1;
				Local_933.f_516 = { 0f, 0f, 0f };
				Local_933.f_519 = 0f;
				Local_933.f_520 = 0;
				Local_933.f_525 = 0;
			}
			break;
		
		case 32:
			if (func_179(Local_933.f_516))
			{
				func_454(iParam1);
			}
			if (!func_179(Local_933.f_516))
			{
				if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
					func_189(iParam1, func_206(iParam1));
				}
			}
			Local_933.f_514 = -1;
			Local_933.f_516 = { 0f, 0f, 0f };
			Local_933.f_519 = 0f;
			Local_933.f_520 = 0;
			Local_933.f_525 = 0;
			break;
		
		case 33:
		case 36:
			if (func_200(iParam1, 0) || func_200(iParam1, 1))
			{
				func_417(iParam1);
			}
			else if ((func_200(iParam1, 25) || func_200(iParam1, 26)) || func_200(iParam1, 27))
			{
				func_453(iParam1);
			}
			else if (Local_933.f_508 == -1)
			{
				if (Local_933.f_514 == -1 || Local_933.f_514 == iParam1)
				{
					Local_933.f_514 = iParam1;
					if (func_179(Local_933.f_516))
					{
						fVar0 = (func_452(Local_933.f_3, 0) + 180f);
						if (fVar0 > 360f)
						{
							fVar0 = (fVar0 - 360f);
						}
						Local_933.f_516 = { func_248(Local_933.f_3, 0, 0) };
						Local_933.f_519 = fVar0;
					}
					else if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						unk_0xF50D17A63556B8D4(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), 2, 5, 1f);
						unk_0xF50D17A63556B8D4(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), 3, 5, 1f);
						unk_0x79E38224B223335B(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), 1);
						Local_933.f_514 = -1;
						Local_933.f_516 = { 0f, 0f, 0f };
						Local_933.f_519 = 0f;
						Local_933.f_521 = 0;
						Local_933.f_520 = 0;
						Local_933.f_522 = { 0f, 0f, 0f };
						func_189(iParam1, func_206(iParam1));
					}
				}
			}
			break;
		
		case 34:
			if (Local_933.f_508 == -1)
			{
				if (Local_933.f_514 == -1 || Local_933.f_514 == iParam1)
				{
					Local_933.f_514 = iParam1;
					if (func_179(Local_933.f_516))
					{
						func_451(iParam1);
					}
					else if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
						unk_0xC4B4C89FC0D48108(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), true);
						unk_0xA6B2C9FCA24AAC6F(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), 1);
						unk_0x443C9A6DC182DDD5(unk_0xB177666FAB6F4417(Local_933.f_404[iParam1]), 1);
						Local_933.f_514 = -1;
						Local_933.f_516 = { 0f, 0f, 0f };
						Local_933.f_519 = 0f;
						Local_933.f_520 = 0;
						Local_933.f_525 = 0;
					}
				}
			}
			break;
		
		case 35:
			if (func_200(iParam1, 0) || func_200(iParam1, 1))
			{
				func_417(iParam1);
			}
			else
			{
				if (func_179(Local_933.f_516))
				{
					func_450(iParam1);
				}
				if (!func_179(Local_933.f_516))
				{
					if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_449(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
					}
				}
				Local_933.f_514 = -1;
				Local_933.f_516 = { 0f, 0f, 0f };
				Local_933.f_519 = 0f;
				Local_933.f_520 = 0;
				Local_933.f_525 = 0;
			}
			break;
		
		case 37:
			if (func_200(iParam1, 24))
			{
				if (Local_933.f_508 == -1)
				{
					if (Local_933.f_514 == -1 || Local_933.f_514 == iParam1)
					{
						Local_933.f_514 = iParam1;
						if (func_179(Local_933.f_516))
						{
							func_448(iParam1);
						}
						else if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							func_447(iParam1);
							unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
							func_189(iParam1, func_206(iParam1));
							Local_933.f_514 = -1;
							Local_933.f_516 = { 0f, 0f, 0f };
							Local_933.f_519 = 0f;
							Local_933.f_520 = 0;
							Local_933.f_525 = 0;
						}
					}
				}
			}
			break;
		
		case 39:
			func_453(iParam1);
			break;
		
		case 38:
			if (Local_933.f_508 == -1)
			{
				if (Local_933.f_514 == -1 || Local_933.f_514 == iParam1)
				{
					Local_933.f_514 = iParam1;
					if (func_179(Local_933.f_516))
					{
						func_440(iParam1);
					}
					else if (func_251(&(Local_933.f_404[iParam1]), func_202(func_106(), func_42(), iParam1), Local_933.f_516, Local_933.f_519, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_439(iParam1);
						unk_0x71199B01895C6202(func_202(func_106(), func_42(), iParam1));
						func_189(iParam1, func_206(iParam1));
						if (!func_200(iParam1, 28))
						{
							unk_0x1E9649458B15960F(unk_0xA5FBBC2F619A4DE2(Local_933.f_404[iParam1]), true);
						}
						Local_933.f_514 = -1;
						Local_933.f_516 = { 0f, 0f, 0f };
						Local_933.f_519 = 0f;
						Local_933.f_520 = 0;
						Local_933.f_525 = 0;
					}
				}
			}
			break;
	}
}

void func_439(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	if (func_143(iParam0, 0))
	{
		unk_0xC4B4C89FC0D48108(iVar0, true);
		unk_0xC002508A277213DE(iVar0, 12, 12);
	}
	unk_0x09C4C5C870748A1F(iVar0, 1);
	if (!func_200(iParam0, 28))
	{
		unk_0x56FDC9ADE35F7DB0(iVar0, true, true, 0);
		if (unk_0x6AC695D09170F27D(iVar0))
		{
			unk_0xB078AFA7242F1F7B(iVar0, true);
			unk_0xE52EED22AB2D2450(iVar0, 0);
			unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
			unk_0x657C23FBB4F6EEA5(iVar0, 99999f);
		}
		unk_0xE7ACFBAADCCAEDB4(iVar0, 1);
	}
	else
	{
		unk_0x873BCADC75FF6D20(iVar0);
		unk_0x56FDC9ADE35F7DB0(iVar0, true, true, 0);
		unk_0xAC0C6241732E36F6(iVar0);
		unk_0xEF190091B5B9F5EB(iVar0, 1);
		if (unk_0x579935D850368851(iVar0) > 0)
		{
			unk_0x446EA2500F021666(iVar0, 0);
		}
	}
}

void func_440(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			if (func_200(iParam0, 28))
			{
				if (func_441(0, 75f))
				{
					Local_933.f_519 = func_420(Local_933.f_516, unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_404[0]), false));
					Local_933.f_520++;
				}
			}
			else
			{
				Local_933.f_520++;
			}
			break;
		
		case 1:
			break;
	}
}

int func_441(bool bParam0, float fParam1)
{
	if (func_179(Local_933.f_516))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { func_442(func_443(func_106(), Local_933.f_3, bParam0, 0, 0), 0f, (-200f * sin((to_float(Local_933.f_525) * 30f))), (200f * cos((to_float(Local_933.f_525) * 30f))), 0f) };
				vVar0.z = unk_0x44488BFC08C50559(vVar0.x, vVar0.y);
				vVar0.z = (vVar0.z + fParam1);
				if (func_363(vVar0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_933.f_516 = { vVar0 };
					return 1;
				}
				else
				{
					Local_933.f_525++;
					if (Local_933.f_525 >= 12)
					{
						Local_933.f_525 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_442(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

Vector3 func_443(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (iParam0)
		{
			case 14:
			case 30:
			case 33:
			case 31:
			case 39:
			case 36:
			case 4:
			case 6:
			case 9:
			case 12:
				return 0f, 0f, 0f;
			}
		
		default:
	}
	switch (iParam0)
	{
		case 26:
			if (!bParam2 || bParam4)
			{
				return func_248(iParam1, iParam3, 0);
			}
			break;
		
		case 14:
		case 32:
		case 0:
		case 2:
		case 18:
		case 5:
		case 10:
			return func_446(iParam1, iParam3, 0);
		
		case 4:
		case 13:
		case 12:
			vVar0 = { func_444(iParam0, iParam3) };
			vVar0.z = (vVar0.z + 0,5f);
			return vVar0;
		
		case 6:
			vVar0 = { func_444(iParam0, iParam3) };
			vVar0.z = (vVar0.z + 0,2f);
			return vVar0;
	}
	return func_248(iParam1, iParam3, 0);
}

Vector3 func_444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 6:
		case 12:
		case 13:
			return func_445(iParam1);
		
		default:
	}
	return -1256,895f, -1401,264f, 3,2038f;
}

Vector3 func_445(int iParam0)
{
	return Global_2537071.f_5124.f_716[iParam0];
}

Vector3 func_446(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1256,895f, -1401,264f, 3,2038f;
				
				case 1:
					return -1219,46f, -1422,403f, 3,3108f;
				
				case 2:
					return -1240,949f, -1429,772f, 3,3237f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1041,461f, -545,3951f, 34,1047f;
				
				case 1:
					return -1051,776f, -513,1072f, 35,0386f;
				
				case 2:
					return -1001,189f, -534,113f, 35,6678f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -19,7349f, -1271,83f, 28,2653f;
				
				case 1:
					return -40,504f, -1302,909f, 28,0199f;
				
				case 2:
					return -17,0678f, -1299,953f, 28,2507f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1288,205f, -2536,42f, 42,6742f;
				
				case 1:
					return 1306,986f, -2568,439f, 44,0014f;
				
				case 2:
					return 1313,369f, -2530,523f, 44,7044f;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 430,6789f, -1242,723f, 30,6437f;
				
				case 1:
					return 477,4944f, -1277,345f, 28,5466f;
				
				case 2:
					return 514,2444f, -1259,903f, 29,4124f;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 67,0038f, 51,4473f, 72,5151f;
				
				case 1:
					return 44,0364f, 93,7276f, 77,5862f;
				
				case 2:
					return 132,1119f, 50,6618f, 73,5083f;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1134,093f, 271,932f, 79,9903f;
				
				case 1:
					return 1109,375f, 216,3957f, 79,9906f;
				
				case 2:
					return 1153,906f, 251,8428f, 80,8457f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3073,072f, 595,7681f, 0,2499f;
				
				case 1:
					return -3039,775f, 602,9285f, 6,5674f;
				
				case 2:
					return -3072,139f, 557,0007f, 1,3571f;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return -500,0567f, -51,7028f, 38,9927f;
				
				case 1:
					return -522,8772f, -91,4064f, 38,6031f;
				
				case 2:
					return -533,3924f, -42,155f, 41,5272f;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 1157,676f, -1321,066f, 33,7427f;
				
				case 1:
					return 1141,956f, -1288,349f, 33,6199f;
				
				case 2:
					return 1141,467f, -1332,853f, 33,6567f;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return -1556,994f, -265,8279f, 47,2667f;
				
				case 1:
					return -1575,509f, -267,0629f, 47,2757f;
				
				case 2:
					return -1526,625f, -224,5333f, 51,7633f;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return -999,7197f, -2231,475f, 8,0025f;
				
				case 1:
					return -1051,127f, -2236,094f, 10,6505f;
				
				case 2:
					return -1009,925f, -2213,719f, 7,9803f;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 481,8191f, -2160,389f, 4,9183f;
				
				case 1:
					return 522,6403f, -2116,97f, 4,9863f;
				
				case 2:
					return 515,8954f, -2185,151f, 4,9867f;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2545,011f, 342,3033f, 107,4631f;
				
				case 1:
					return 2573,672f, 340,7719f, 107,4573f;
				
				case 2:
					return 2551,875f, 321,9144f, 107,4558f;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return -506,8551f, -451,5504f, 33,2013f;
				
				case 1:
					return -520,6168f, -425,5922f, 33,5149f;
				
				case 2:
					return -542,0139f, -452,4395f, 33,2769f;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 189,0431f, 1163,193f, 224,5952f;
				
				case 1:
					return 234,9972f, 1175,117f, 224,4599f;
				
				case 2:
					return 182,205f, 1222,788f, 230,3316f;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 1859,047f, -1073,043f, 80,9805f;
				
				case 1:
					return 1930,92f, -1002,131f, 79,1197f;
				
				case 2:
					return 1932,382f, -1073,107f, 94,7213f;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return -819,274f, 864,5092f, 201,9619f;
				
				case 1:
					return -857,0323f, 848,2087f, 201,8778f;
				
				case 2:
					return -896,3553f, 812,055f, 186,5013f;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return -2335,419f, 247,1339f, 168,6021f;
				
				case 1:
					return -2346,368f, 320,6201f, 168,3408f;
				
				case 2:
					return -2252,172f, 262,6512f, 173,6154f;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 788,3173f, -2993,31f, 5,025f;
				
				case 1:
					return 846,7418f, -2942,504f, 4,9008f;
				
				case 2:
					return 812,6157f, -2912,628f, 4,9009f;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 1624,918f, 1863,313f, 101,1631f;
				
				case 1:
					return 1617,804f, 1855,837f, 101,9317f;
				
				case 2:
					return 1625,762f, 1858,705f, 101,4484f;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 1881,229f, 261,8945f, 162,4245f;
				
				case 1:
					return 1877,444f, 270,607f, 162,44f;
				
				case 2:
					return 1888,044f, 263,175f, 162,6105f;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return -180,4747f, 787,4429f, 195,0948f;
				
				case 1:
					return -172,8306f, 784,4172f, 194,8954f;
				
				case 2:
					return -187,724f, 790,6658f, 195,0194f;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return -477,9237f, -1138,003f, 24,5716f;
				
				case 1:
					return -469,9054f, -1141,298f, 24,7503f;
				
				case 2:
					return -481,2089f, -1130,281f, 24,9773f;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return -3087,525f, 504,0114f, 2,2315f;
				
				case 1:
					return -3102,243f, 503,1497f, -0,4763f;
				
				case 2:
					return -3102,208f, 518,6061f, -0,1891f;
				
				default:
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 435,0352f, 782,0305f, 191,7786f;
				
				case 1:
					return 377,7029f, 791,6837f, 189,4136f;
				
				case 2:
					return 373,5618f, 800,5087f, 186,4587f;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 329,6051f, -1105,142f, 38,3562f;
				
				case 1:
					return 355,2695f, -1109,06f, 28,4064f;
				
				case 2:
					return 335,8394f, -1099,472f, 28,4064f;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return -38,649f, 934,988f, 227,4654f;
				
				case 1:
					return -84,6997f, 935,5812f, 232,0286f;
				
				case 2:
					return -135,8327f, 988,8337f, 235,1435f;
				
				default:
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return -3182,173f, 1245,304f, 5,6321f;
				
				case 1:
					return -3219,602f, 1199,855f, 2,5499f;
				
				case 2:
					return -3204,121f, 1201,814f, 11,8282f;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 1241,967f, -3052,028f, 13,2977f;
				
				case 1:
					return 1227,938f, -2995,829f, 8,3193f;
				
				case 2:
					return 1238,255f, -3008,73f, 8,3193f;
				
				default:
			}
			break;
		
		case 65:
			switch (iParam1)
			{
				case 0:
					return 2190,927f, 5597,746f, 53,888f;
				
				case 1:
					return 2191,333f, 5599,56f, 53,888f;
				
				case 2:
					return 2193,567f, 5593,311f, 54,816f;
				
				case 3:
					return 2194,416f, 5592,744f, 54,8155f;
				
				case 4:
					return 2196,028f, 5593,105f, 52,7751f;
				
				case 5:
					return 2197,294f, 5597,863f, 52,795f;
				
				case 6:
					return 2193,616f, 5607,517f, 52,6446f;
				
				case 7:
					return 2199,21f, 5605,126f, 52,3881f;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam1)
			{
				case 0:
					return 1546,04f, 6335,923f, 23,0798f;
				
				case 1:
					return 1545,319f, 6331,356f, 23,0772f;
				
				case 2:
					return 1539,019f, 6340,617f, 23,0839f;
				
				case 3:
					return 1535,893f, 6335,108f, 23,0793f;
				
				case 4:
					return 1540,822f, 6339,38f, 23,0841f;
				
				case 5:
					return 1546,315f, 6333,015f, 23,0785f;
				
				case 6:
					return 1532,261f, 6335,159f, 23,1988f;
				
				case 7:
					return 1524,256f, 6347,302f, 23,0527f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 1538,335f, 1699,095f, 108,76f;
				
				case 1:
					return 1530,262f, 1705,909f, 108,7935f;
				
				case 2:
					return 1524,131f, 1709,41f, 109,018f;
				
				case 3:
					return 1541,88f, 1708,617f, 108,9052f;
				
				case 4:
					return 1539,812f, 1705,313f, 108,6894f;
				
				case 5:
					return 1532,825f, 1699,727f, 108,8229f;
				
				case 6:
					return 1526,543f, 1706,856f, 108,8677f;
				
				case 7:
					return 1543,872f, 1707,332f, 108,9219f;
				
				default:
			}
			break;
		
		case 68:
			switch (iParam1)
			{
				case 0:
					return 115,1577f, -1973,678f, 19,9256f;
				
				case 1:
					return 94,0767f, -1983,043f, 19,4422f;
				
				case 2:
					return 108,8288f, -1974,469f, 19,9499f;
				
				case 3:
					return 115,9279f, -1980,242f, 19,9547f;
				
				case 4:
					return 102,984f, -1976,957f, 19,9425f;
				
				case 5:
					return 96,9154f, -1986,156f, 19,4501f;
				
				case 6:
					return 111,5553f, -1977,185f, 19,9311f;
				
				case 7:
					return 95,2271f, -1988,814f, 19,5397f;
				
				default:
			}
			break;
		
		case 69:
			switch (iParam1)
			{
				case 0:
					return 1337,891f, -523,091f, 71,252f;
				
				case 1:
					return 1343,539f, -518,574f, 71,064f;
				
				case 2:
					return 1332,99f, -514,29f, 71,064f;
				
				case 3:
					return 1332,458f, -520,082f, 71,064f;
				
				case 4:
					return 1339,331f, -527,5964f, 71,2974f;
				
				case 5:
					return 1340,533f, -516,3754f, 71,1645f;
				
				case 6:
					return 1328,952f, -518,884f, 71,0643f;
				
				case 7:
					return 1338,461f, -519,61f, 71,0643f;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return -1886,451f, 266,735f, 85,453f;
				
				case 1:
					return -1884,307f, 254,934f, 85,06f;
				
				case 2:
					return -1895,644f, 256,713f, 85,252f;
				
				case 3:
					return -1894,9f, 255,12f, 85,252f;
				
				case 4:
					return -1880,686f, 269,3765f, 85,4533f;
				
				case 5:
					return -1891,306f, 267,4326f, 85,4529f;
				
				case 6:
					return -1887,29f, 253,37f, 85,2516f;
				
				case 7:
					return -1890,743f, 259,6429f, 85,2516f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 1579,244f, 3618,102f, 37,917f;
				
				case 1:
					return 1601,256f, 3588,378f, 37,908f;
				
				case 2:
					return 1602,889f, 3566,926f, 37,917f;
				
				case 3:
					return 1593,125f, 3583,698f, 37,908f;
				
				case 4:
					return 1602,754f, 3585,825f, 37,908f;
				
				case 5:
					return 1608,945f, 3574,883f, 37,9167f;
				
				case 6:
					return 1582,741f, 3619,545f, 37,9167f;
				
				case 7:
					return 1596,951f, 3588,483f, 37,908f;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2320,201f, 2575,099f, 45,668f;
				
				case 1:
					return 2313,012f, 2578,312f, 45,6663f;
				
				case 2:
					return 2317,501f, 2571,376f, 45,6677f;
				
				case 3:
					return 2326,389f, 2574,56f, 45,6677f;
				
				case 4:
					return 2321,374f, 2573,906f, 45,6677f;
				
				case 5:
					return 2325,531f, 2570,958f, 45,6677f;
				
				case 6:
					return 2318,351f, 2584,319f, 45,6476f;
				
				case 7:
					return 2311,584f, 2573,776f, 45,6677f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 1354,259f, 3271,617f, 37,049f;
				
				case 1:
					return 1355,543f, 3266,002f, 37,465f;
				
				case 2:
					return 1361,623f, 3271,034f, 37,2991f;
				
				case 3:
					return 1355,459f, 3276,244f, 36,7898f;
				
				case 4:
					return 1356,806f, 3270,757f, 37,1961f;
				
				case 5:
					return 1358,829f, 3275,286f, 36,9648f;
				
				case 6:
					return 1349,819f, 3275,35f, 36,6586f;
				
				case 7:
					return 1359,482f, 3266,528f, 37,5162f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 602,296f, -441,343f, 23,745f;
				
				case 1:
					return 601,444f, -443,897f, 23,745f;
				
				case 2:
					return 605,446f, -453,7786f, 23,7449f;
				
				case 3:
					return 598,2006f, -435,8751f, 23,7449f;
				
				case 4:
					return 606,8058f, -445,4673f, 23,7449f;
				
				case 5:
					return 596,5114f, -448,6344f, 23,7449f;
				
				case 6:
					return 606,7935f, -435,4074f, 23,7449f;
				
				case 7:
					return 598,0101f, -456,0507f, 23,7449f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return -441,5815f, -2177,953f, 9,3216f;
				
				case 1:
					return -442,4689f, -2182,698f, 9,3188f;
				
				case 2:
					return -446,9228f, -2178,109f, 9,3182f;
				
				case 3:
					return -436,6671f, -2177,43f, 9,3279f;
				
				case 4:
					return -448,1396f, -2183,373f, 9,3182f;
				
				case 5:
					return -437,8727f, -2183,602f, 9,3282f;
				
				case 6:
					return -448,1035f, -2173,061f, 9,327f;
				
				case 7:
					return -448,5648f, -2175,626f, 10,446f;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return -1097,839f, -1657,69f, 6,348f;
				
				case 1:
					return -1091,055f, -1657,613f, 6,357f;
				
				case 2:
					return -1095,609f, -1660,779f, 9,1832f;
				
				case 3:
					return -1107,645f, -1662,989f, 6,3571f;
				
				case 4:
					return -1102,953f, -1661,738f, 9,1626f;
				
				case 5:
					return -1096,906f, -1656,534f, 6,3553f;
				
				case 6:
					return -1090,82f, -1654,522f, 6,3569f;
				
				case 7:
					return -1098,066f, -1661,537f, 9,1832f;
				
				default:
			}
			break;
		
		case 235:
			return -1248,458f, -1542,468f, 3,43f;
		
		case 236:
			return 179,729f, 704,633f, 206,158f;
		
		case 237:
			return 1112,473f, -642,005f, 56,473f;
		
		case 238:
			return -270,123f, -2098,021f, 27,045f;
		
		case 239:
			return -3334,143f, 967,425f, 7,431f;
		
		case 240:
			return 3819,462f, 4469,256f, 3,1526f;
		
		case 241:
			return -1599,838f, 5189,934f, 3,4559f;
		
		case 242:
			return 1456,446f, 3753,367f, 32,1787f;
		
		case 243:
			return -430,9754f, 1594,745f, 355,9766f;
		
		case 244:
			return 1604,978f, 6610,486f, 15,1458f;
		
		case 245:
			return -274,372f, -2047,993f, 29,08f;
		
		case 246:
			return -1245,778f, -1531,359f, 3,43f;
		
		case 247:
			return 1113,154f, -645,61f, 56,578f;
		
		case 248:
			return 163,083f, 679,009f, 205,927f;
		
		case 249:
			return -3370,647f, 968,319f, 7,431f;
		
		case 250:
			return -429,974f, 1590,215f, 355,956f;
		
		case 251:
			return 1442,715f, 3748,756f, 30,9342f;
		
		case 252:
			return 3850,747f, 4461,128f, 0,989f;
		
		case 253:
			return -1590,209f, 5200,783f, 3,456f;
		
		case 254:
			return 1601,191f, 6633,852f, 14,576f;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return -1087,672f, -2404,69f, 13,2966f;
				
				case 1:
					return -1086,039f, -2402,626f, 13,2966f;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return -2240,347f, 259,9966f, 173,9552f;
				
				case 1:
					return -2238,614f, 259,0553f, 173,9532f;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 1333,773f, -1562,171f, 53,403f;
				
				case 1:
					return 1333,081f, -1561,091f, 53,403f;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 375,1288f, 3408,736f, 35,7556f;
				
				case 1:
					return 377,9695f, 3407,334f, 35,7563f;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 870,6751f, 2381,233f, 53,4304f;
				
				case 1:
					return 872,383f, 2381,122f, 53,411f;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return -1929,879f, 2061,409f, 140,1897f;
				
				case 1:
					return -1931,109f, 2062,988f, 140,1909f;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return -1211,841f, -334,6595f, 37,1451f;
				
				case 1:
					return -1210,894f, -336,6016f, 37,1451f;
				
				case 2:
					return -1214,29f, -335,7108f, 37,145f;
				
				case 3:
					return -1212,153f, -335,9989f, 37,1599f;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 146,7809f, -1046,026f, 28,7322f;
				
				case 1:
					return 147,5188f, -1044,134f, 28,7321f;
				
				case 2:
					return 146,4878f, -1044,695f, 28,7469f;
				
				case 3:
					return 144,9762f, -1042,942f, 28,732f;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 311,1413f, -284,7076f, 53,5364f;
				
				case 1:
					return 311,9048f, -282,4539f, 53,5364f;
				
				case 2:
					return 310,5685f, -283,3445f, 53,5437f;
				
				case 3:
					return 309,2298f, -281,5316f, 53,5364f;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return -353,2305f, -53,4055f, 48,4006f;
				
				case 1:
					return -353,6685f, -55,2274f, 48,4007f;
				
				case 2:
					return -354,6395f, -54,1951f, 48,4155f;
				
				case 3:
					return -355,7474f, -52,3414f, 48,4005f;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return -102,3358f, 6476,589f, 30,9908f;
				
				case 1:
					return -105,703f, 6478,646f, 30,9908f;
				
				case 2:
					return -114,1662f, 6474,007f, 30,9908f;
				
				case 3:
					return -113,3049f, 6472,217f, 30,9908f;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 1175,983f, 2712,901f, 37,4521f;
				
				case 1:
					return 1176,062f, 2710,57f, 37,4521f;
				
				case 2:
					return 1176,425f, 2711,807f, 37,4521f;
				
				case 3:
					return 1178,875f, 2710,653f, 37,452f;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return -2958,764f, 481,6773f, 15,0611f;
				
				case 1:
					return -2956,557f, 481,8295f, 15,0612f;
				
				case 2:
					return -2957,427f, 480,7684f, 15,076f;
				
				case 3:
					return -2959,045f, 478,9727f, 15,0611f;
				
				default:
			}
			break;
		
		case 171:
			switch (iParam1)
			{
				case 0:
					return -1174,899f, -2061,462f, 13,322f;
				
				case 1:
					return -1166,679f, -2061,563f, 13,142f;
				
				case 2:
					return -1177,037f, -2047,963f, 12,962f;
				
				case 3:
					return -1175,386f, -2034,878f, 12,739f;
				
				case 4:
					return -1170,302f, -2026,042f, 12,164f;
				
				case 5:
					return -1158,823f, -2042,788f, 12,464f;
				
				case 6:
					return -1188,571f, -2042,045f, 13,2f;
				
				case 7:
					return -1192,589f, -2056,433f, 13,371f;
				
				default:
			}
			break;
		
		case 172:
			switch (iParam1)
			{
				case 0:
					return 1439,817f, -2276,898f, 65,5886f;
				
				case 1:
					return 1426,775f, -2279,958f, 65,3883f;
				
				case 2:
					return 1429,759f, -2294,852f, 65,8534f;
				
				case 3:
					return 1448,753f, -2284,703f, 66,1776f;
				
				case 4:
					return 1441,481f, -2300,357f, 66,0341f;
				
				case 5:
					return 1418,96f, -2284,074f, 65,2903f;
				
				case 6:
					return 1452,431f, -2274,051f, 65,9382f;
				
				case 7:
					return 1422,921f, -2270,988f, 65,1793f;
				
				default:
			}
			break;
		
		case 173:
			switch (iParam1)
			{
				case 0:
					return 2951,53f, 2791,529f, 40,0484f;
				
				case 1:
					return 2948,111f, 2778,07f, 38,3401f;
				
				case 2:
					return 2932,768f, 2795,18f, 39,6753f;
				
				case 3:
					return 2967,656f, 2781,29f, 37,9867f;
				
				case 4:
					return 2970,964f, 2791,593f, 39,2295f;
				
				case 5:
					return 2950,725f, 2806,474f, 40,5958f;
				
				case 6:
					return 2934,853f, 2807,538f, 41,1871f;
				
				case 7:
					return 2962,403f, 2801,924f, 40,4953f;
				
				default:
			}
			break;
		
		case 174:
			switch (iParam1)
			{
				case 0:
					return 3666,816f, 4561,401f, 24,669f;
				
				case 1:
					return 3704,943f, 4553,061f, 23,237f;
				
				case 2:
					return 3680,383f, 4583,401f, 23,12f;
				
				case 3:
					return 3689,937f, 4577,661f, 23,995f;
				
				case 4:
					return 3710,729f, 4571,15f, 22,646f;
				
				case 5:
					return 3676,667f, 4554,031f, 24,151f;
				
				case 6:
					return 3697,51f, 4581,133f, 23,176f;
				
				case 7:
					return 3710,66f, 4562,066f, 22,991f;
				
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

void func_447(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
	{
		unk_0xB7E567188872123E(iVar0, "Not_Allow_As_Saved_Veh", 1);
	}
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iVar0, "MPBitset"))
		{
			iVar1 = unk_0x1E2DFB0EF4BB4566(iVar0, "MPBitset");
		}
		unk_0x5D96D8530B3D0904(&iVar1, 11);
		unk_0xB7E567188872123E(iVar0, "MPBitset", iVar1);
	}
}

void func_448(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

void func_449(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	iVar1 = unk_0x134B62B726CEC8E6(iVar0);
	if (func_200(iParam0, 20))
	{
		if (!unk_0x7D8B2A8F9EA82DB7(iVar1))
		{
			if (iVar1 != -1745203402)
			{
				unk_0x611DFA9294B339CA(iVar0, 5, 0, false);
			}
			unk_0x611DFA9294B339CA(iVar0, 1, 0, false);
		}
		unk_0xCCD53AC1B5D5E456(iVar0, 10f);
	}
	else if (func_200(iParam0, 21))
	{
		if (!unk_0x7D8B2A8F9EA82DB7(iVar1))
		{
			unk_0x611DFA9294B339CA(iVar0, 0, 0, false);
			unk_0x611DFA9294B339CA(iVar0, 1, 0, false);
		}
		unk_0xCCD53AC1B5D5E456(iVar0, 14,9f);
	}
	else if (func_200(iParam0, 22))
	{
		if (!unk_0x7D8B2A8F9EA82DB7(iVar1))
		{
			unk_0x611DFA9294B339CA(iVar0, 0, 0, false);
			unk_0x611DFA9294B339CA(iVar0, 1, 0, false);
			if (iVar1 != -1745203402)
			{
				unk_0x611DFA9294B339CA(iVar0, 4, 0, false);
			}
		}
		unk_0xCCD53AC1B5D5E456(iVar0, 14,9f);
	}
	unk_0x5DAB50E08C3C504A(iVar0, 0f);
	unk_0x71EDC33E5A423750(iVar0, 10);
}

void func_450(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

void func_451(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

float func_452(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 30,5195f;
		
		case 1:
			return 291,9666f;
		
		case 2:
			return 65,2108f;
		
		case 3:
			return 343,4849f;
		
		case 4:
			return 88,8319f;
		
		case 5:
			return 295,3997f;
		
		case 11:
			return 58,6248f;
		
		case 12:
			return 289,9245f;
		
		case 18:
			return 155,3888f;
		
		case 19:
			return 270,9419f;
		
		case 20:
			return 329,162f;
		
		case 21:
			return 225,8214f;
		
		case 22:
			return 219,2346f;
		
		case 23:
			return 267,1999f;
		
		case 24:
			return 261,8444f;
		
		case 45:
			return 283,493f;
		
		case 46:
			return 262,2857f;
		
		case 47:
			return 178,3301f;
		
		case 48:
			return 24,1105f;
		
		case 49:
			return 179,9154f;
		
		case 13:
			return 107,999f;
		
		case 14:
			return 129f;
		
		case 15:
			return 306,1999f;
		
		case 16:
			return 18,2f;
		
		case 17:
			return 167,1999f;
		
		case 6:
			return 265,5989f;
		
		case 7:
			return 268,593f;
		
		case 8:
			return 47,995f;
		
		case 9:
			return 240,394f;
		
		case 10:
			return 179,799f;
		
		case 30:
			return 60,993f;
		
		case 31:
			return 176,193f;
		
		case 32:
			return 90,596f;
		
		case 33:
			return 90,396f;
		
		case 34:
			return 162,139f;
		
		case 40:
			return 268,9868f;
		
		case 41:
			return 159,9966f;
		
		case 42:
			return 89,5853f;
		
		case 43:
			return 69,593f;
		
		case 44:
			return 39,199f;
		
		case 50:
			return 0f;
		
		case 51:
			return 0f;
		
		case 52:
			return 0f;
		
		case 53:
			return 0f;
		
		case 54:
			return 0f;
		
		case 25:
			return 23,2626f;
		
		case 26:
			return 320,4246f;
		
		case 27:
			return 30,8051f;
		
		case 28:
			return 36,804f;
		
		case 29:
			return 340,7839f;
		
		case 55:
			return 0f;
		
		case 56:
			return 0f;
		
		case 57:
			return 0f;
		
		case 58:
			return 0f;
		
		case 59:
			return 0f;
		
		case 60:
			return 100,999f;
		
		case 61:
			return 178f;
		
		case 62:
			return 227,999f;
		
		case 63:
			return 233,999f;
		
		case 64:
			return 90,847f;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 295,3997f;
				
				case 1:
					return 99,7926f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 215,398f;
				
				case 1:
					return 127,4f;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 327,5987f;
				
				case 1:
					return 202,797f;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 80,8f;
				
				case 1:
					return 232,599f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 72,7998f;
				
				case 1:
					return 123,3996f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 50,6f;
				
				case 1:
					return 120,5991f;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 210,5969f;
				
				case 1:
					return 225,1917f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 109,997f;
				
				case 1:
					return 109,997f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 330,8488f;
				
				case 1:
					return 213,9985f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 192,6f;
				
				case 1:
					return 248,3989f;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam1)
			{
				case 0:
					return 350f;
				
				case 1:
					return 350f;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					return 34,2f;
				
				case 1:
					return 39,8873f;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam1)
			{
				case 0:
					return 208,998f;
				
				case 1:
					return 207,6001f;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam1)
			{
				case 0:
					return 270,3997f;
				
				case 1:
					return 179,791f;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam1)
			{
				case 0:
					return 1,999f;
				
				case 1:
					return 91,5468f;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return 158,0001f;
				
				case 1:
					return 157,4001f;
				
				default:
			}
			break;
		
		case 151:
			switch (iParam1)
			{
				case 0:
					return 10,399f;
				
				case 1:
					return 23,1995f;
				
				default:
			}
			break;
		
		case 152:
			switch (iParam1)
			{
				case 0:
					return 159,599f;
				
				case 1:
					return 159,599f;
				
				default:
			}
			break;
		
		case 153:
			switch (iParam1)
			{
				case 0:
					return 174,398f;
				
				case 1:
					return 85,398f;
				
				default:
			}
			break;
		
		case 154:
			switch (iParam1)
			{
				case 0:
					return 49,596f;
				
				case 1:
					return 319,595f;
				
				default:
			}
			break;
		
		case 155:
			switch (iParam1)
			{
				case 0:
					return 47,795f;
				
				case 1:
					return 311,394f;
				
				default:
			}
			break;
		
		case 156:
			switch (iParam1)
			{
				case 0:
					return 190,993f;
				
				case 1:
					return 190,993f;
				
				default:
			}
			break;
		
		case 157:
			switch (iParam1)
			{
				case 0:
					return 49,993f;
				
				case 1:
					return 63,193f;
				
				default:
			}
			break;
		
		case 158:
			switch (iParam1)
			{
				case 0:
					return 67,393f;
				
				case 1:
					return 75,993f;
				
				default:
			}
			break;
		
		case 159:
			switch (iParam1)
			{
				case 0:
					return 97,592f;
				
				case 1:
					return 90,592f;
				
				default:
			}
			break;
		
		case 160:
			switch (iParam1)
			{
				case 0:
					return 195,1999f;
				
				case 1:
					return 238,6002f;
				
				default:
			}
			break;
		
		case 161:
			switch (iParam1)
			{
				case 0:
					return 260,3992f;
				
				case 1:
					return 281,3992f;
				
				default:
			}
			break;
		
		case 162:
			switch (iParam1)
			{
				case 0:
					return 187,991f;
				
				case 1:
					return 119,991f;
				
				default:
			}
			break;
		
		case 163:
			switch (iParam1)
			{
				case 0:
					return 199,591f;
				
				case 1:
					return 211,79f;
				
				default:
			}
			break;
		
		case 164:
			switch (iParam1)
			{
				case 0:
					return 271,791f;
				
				case 1:
					return 344,39f;
				
				default:
			}
			break;
		
		case 165:
			switch (iParam1)
			{
				case 0:
					return 95,989f;
				
				case 1:
					return 80,389f;
				
				default:
			}
			break;
		
		case 166:
			switch (iParam1)
			{
				case 0:
					return 233,988f;
				
				case 1:
					return 241,188f;
				
				default:
			}
			break;
		
		case 167:
			switch (iParam1)
			{
				case 0:
					return 149,586f;
				
				case 1:
					return 177,386f;
				
				default:
			}
			break;
		
		case 168:
			switch (iParam1)
			{
				case 0:
					return 36,186f;
				
				case 1:
					return 26,386f;
				
				default:
			}
			break;
		
		case 169:
			switch (iParam1)
			{
				case 0:
					return 231,186f;
				
				case 1:
					return 218,186f;
				
				default:
			}
			break;
		
		case 175:
			return 301,7999f;
		
		case 176:
			return 48,1995f;
		
		case 177:
			return 37,9994f;
		
		case 178:
			return 182,799f;
		
		case 179:
			return 243,9944f;
		
		case 180:
			return 340,5934f;
		
		case 181:
			return 270,9917f;
		
		case 182:
			return 336,7903f;
		
		case 183:
			return 358,5902f;
		
		case 184:
			return 183,0001f;
		
		case 185:
			return 43,8f;
		
		case 186:
			return 230,598f;
		
		case 187:
			return 340,398f;
		
		case 188:
			return 246,598f;
		
		case 189:
			return 345,798f;
		
		case 190:
			return 184,998f;
		
		case 191:
			return 175,398f;
		
		case 192:
			return 152,598f;
		
		case 193:
			return 159,197f;
		
		case 194:
			return 179,8003f;
		
		case 195:
			return 11f;
		
		case 196:
			return 172,3998f;
		
		case 197:
			return 12,7995f;
		
		case 198:
			return 89,7991f;
		
		case 199:
			return 307,9989f;
		
		case 200:
			return 215,1983f;
		
		case 201:
			return 345,1981f;
		
		case 202:
			return 158,198f;
		
		case 203:
			return 275,7973f;
		
		case 204:
			return 340,1967f;
		
		case 205:
			return 180,599f;
		
		case 206:
			return 314,799f;
		
		case 207:
			return 185,599f;
		
		case 208:
			return 171,998f;
		
		case 209:
			return 346,598f;
		
		case 210:
			return 229,597f;
		
		case 211:
			return 23,4f;
		
		case 212:
			return 36,1998f;
		
		case 213:
			return 295,1997f;
		
		case 214:
			return 223,3986f;
		
		case 215:
			return 87,7987f;
		
		case 216:
			return 5,5967f;
		
		case 217:
			return 61,3963f;
		
		case 218:
			return 178,3958f;
		
		case 219:
			return 127,9953f;
		
		case 220:
			return 265,3998f;
		
		case 221:
			return 335,5944f;
		
		case 222:
			return 0,5944f;
		
		case 223:
			return 215,1943f;
		
		case 224:
			return 84,1942f;
		
		case 225:
			return 153,3993f;
		
		case 226:
			return 90,5989f;
		
		case 227:
			return 64,3999f;
		
		case 228:
			return 330,5999f;
		
		case 229:
			return 176,7996f;
		
		case 230:
			return 246,9988f;
		
		case 231:
			return 33,9961f;
		
		case 232:
			return 84,3982f;
		
		case 233:
			return 269,5977f;
		
		case 234:
			return 179,6f;
		
		case 255:
			return 340,5992f;
		
		case 256:
			return 42,9989f;
		
		case 257:
			return 283,1981f;
		
		case 258:
			return 50,8459f;
		
		case 259:
			return 299,1972f;
		
		case 260:
			return 281,3968f;
		
		case 261:
			return 67,1965f;
		
		case 262:
			return 225,7962f;
		
		case 263:
			return 161,9961f;
		
		case 264:
			return 89,9956f;
		
		case 265:
			return 248,8f;
		
		case 266:
			return 141,399f;
		
		case 267:
			return 288,799f;
		
		case 268:
			return 56,998f;
		
		case 269:
			return 203,398f;
		
		case 270:
			return 67,598f;
		
		case 271:
			return 52,6921f;
		
		case 272:
			return 80,797f;
		
		case 273:
			return 113,993f;
		
		case 274:
			return 245,192f;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0f;
				
				case 1:
					return 181,2001f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 4,1977f;
				
				case 1:
					return 13,1977f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 186,1426f;
				
				case 1:
					return 309,9437f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 270,1992f;
				
				case 1:
					return 134,3985f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 216,3998f;
				
				case 1:
					return 39,9998f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 178,7981f;
				
				case 1:
					return 8,598f;
				
				default:
			}
			break;
	}
	return 30,5195f;
}

void func_453(int iParam0)
{
}

void func_454(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

void func_455(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	unk_0x09C4C5C870748A1F(iVar0, 1);
	if (func_106() == 31)
	{
		unk_0xD5A0214B20BCBAD8(iVar0, 1);
	}
	unk_0x873BCADC75FF6D20(iVar0);
	unk_0x56FDC9ADE35F7DB0(iVar0, true, true, 0);
	unk_0xAC0C6241732E36F6(iVar0);
	unk_0xEF190091B5B9F5EB(iVar0, 1);
	if (unk_0x579935D850368851(iVar0) > 0)
	{
		unk_0x446EA2500F021666(iVar0, 0);
	}
}

void func_456(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			if (func_200(iParam0, 10))
			{
				if (func_441(1, func_458()))
				{
					Local_933.f_520++;
				}
			}
			else if (func_200(iParam0, 29) || func_200(iParam0, 30))
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_404[0]))
				{
					iVar0 = unk_0xA5FBBC2F619A4DE2(Local_933.f_404[0]);
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						vVar1 = { func_457(iParam0) };
						vVar4 = { unk_0x68F4C0EC296D3901(iVar0, true) };
						Local_933.f_516 = { func_442(vVar4, unk_0xD9522BA9E27E1349(iVar0), vVar1) };
						Local_933.f_519 = unk_0xD9522BA9E27E1349(iVar0);
						Local_933.f_520++;
					}
				}
			}
			break;
		
		case 1:
			break;
	}
}

Vector3 func_457(int iParam0)
{
	if (func_200(iParam0, 29))
	{
		return -30f, 30f, 30f;
	}
	else if (func_200(iParam0, 30))
	{
		return 30f, 30f, 30f;
	}
	return 0f, 0f, 0f;
}

float func_458()
{
	if (func_106() == 31)
	{
		return 200f;
	}
	return 100f;
}

void func_459(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	unk_0xA22F71BBC8173C39(iVar0, true);
	unk_0x44A200C9B6E1CEA6(iVar0, false);
	unk_0x09C4C5C870748A1F(iVar0, 1);
}

void func_460(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

void func_461(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	unk_0xA22F71BBC8173C39(iVar0, true);
	unk_0x44A200C9B6E1CEA6(iVar0, false);
	unk_0x09C4C5C870748A1F(iVar0, 1);
	if (unk_0x134B62B726CEC8E6(iVar0) == -810318068)
	{
		unk_0xC002508A277213DE(iVar0, 21, 21);
	}
}

void func_462(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			Local_933.f_520++;
			break;
		
		case 1:
			break;
	}
}

void func_463(int iParam0)
{
	iVar0 = unk_0xB177666FAB6F4417(Local_933.f_404[iParam0]);
	unk_0xA22F71BBC8173C39(iVar0, true);
	unk_0x44A200C9B6E1CEA6(iVar0, false);
	unk_0x09C4C5C870748A1F(iVar0, 1);
	if (func_200(iParam0, 4))
	{
		iVar1 = unk_0x09AC81E49EA267F7(0, 6);
		unk_0xC002508A277213DE(iVar0, func_464(iVar1), 0);
		unk_0xCCD53AC1B5D5E456(iVar0, 10f);
	}
	if (func_200(iParam0, 5))
	{
		iVar2 = unk_0x09AC81E49EA267F7(0, 6);
		unk_0xC002508A277213DE(iVar0, func_464(iVar2), 0);
		unk_0xCCD53AC1B5D5E456(iVar0, 7,5f);
	}
	if (func_200(iParam0, 2))
	{
		unk_0x873BCADC75FF6D20(iVar0);
		unk_0x56FDC9ADE35F7DB0(iVar0, true, true, 0);
		unk_0xAC0C6241732E36F6(iVar0);
		unk_0xEF190091B5B9F5EB(iVar0, 1);
		if (unk_0x579935D850368851(iVar0) > 0)
		{
			unk_0x446EA2500F021666(iVar0, 0);
		}
	}
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 98;
		
		case 3:
			return 45;
		
		case 4:
			return 49;
		
		case 5:
			return 62;
		
		default:
	}
	return 62;
}

void func_465(int iParam0)
{
	switch (Local_933.f_520)
	{
		case 0:
			if (func_200(iParam0, 2))
			{
				if (func_441(0, 200f))
				{
					Local_933.f_519 = func_420(Local_933.f_516, unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[0]), true));
					Local_933.f_520++;
				}
			}
			else if ((func_200(iParam0, 4) || func_200(iParam0, 5)) || func_200(iParam0, 6))
			{
				Local_933.f_520++;
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < func_2346())
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar3]))
					{
						if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar3]), 0))
						{
							if (func_42() == 222)
							{
								vVar0 = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar3]), true) };
							}
							else
							{
								vVar0 = { func_443(func_106(), Local_933.f_3, 0, iVar3, 0) };
							}
						}
					}
					iVar3++;
				}
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_32 = -1082130432;
				Var4.f_34 = 1;
				Var4 = { vVar0 };
				Var4.f_5 = 15f;
				Var4.f_20[0] = 15f;
				Var4.f_8 = 1;
				if (func_466(vVar0, 45f, &(Local_933.f_516), &(Local_933.f_519), &Var4))
				{
					Local_933.f_520++;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_466(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_467(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_467(var uParam0, var uParam1, var uParam2)
{
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (unk_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == unk_0x0D0A574C76D769AC())
				{
					if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_414(0))
					{
						return 0;
					}
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_414(0))
				{
					return 0;
				}
			}
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_544();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_414(0))
	{
		Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
		func_538();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x10FEEAFF01E32639(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	vVar11 = { vVar8 + Vector(-0,1f, -0,1f, -0,1f) };
	vVar14 = { vVar8 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2405072.f_2456)
	{
		unk_0xDEED9606C7D093F7();
		unk_0x0FB2CEE58DA4A6EE();
		func_544();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_363(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*uParam2[0] = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_537(vVar8.x, vVar8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (unk_0xD1B4D22E0BA9B0C8(fVar4, fVar5, fVar6, fVar7) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*uParam2[0] = { uParam0->f_18 };
					}
					else
					{
						*uParam2[0] = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = -1008861746;
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17] = { uParam1->f_13[iVar17] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_536(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_309(uParam2[0], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_332(*uParam2[0], *uParam0, uParam0->f_4, 1, 1))
						{
							*uParam2[0] = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((unk_0xF8A3B10A1B8ACCDD(vVar11, vVar14) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || unk_0x7D293360C866EB8E(vVar11, vVar14) == 0)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_305(unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_535(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_534() || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (unk_0xC79C8A78EC708587())
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_538();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xAFED075B5A62767B(unk_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 1:
							func_533(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_533(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							unk_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_478(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *uParam2[0] };
							uParam2->f_16[0] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_477(uParam0->f_4))
				{
					if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_476(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_533(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					unk_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_478(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*uParam2[0]) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (vmag(*uParam2[0]) == 0f)
						{
							if (!vmag(Global_2405072.f_2617[iVar17]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_332(Global_2405072.f_2617[iVar17], *uParam0, uParam0->f_4, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 1:
										if (func_330(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 2:
										if (unk_0x0399732A9EBC368E(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (vmag(*uParam2[0]) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_470(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*uParam2[0] = { vVar1 };
					}
				}
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (!vmag(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *uParam2[iVar17] };
						uParam2->f_16[iVar17] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_469(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_468(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*uParam2[0] = { Global_2405072.f_2458 };
				func_470(uParam2[0], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_544();
			return 1;
		}
		Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
	}
	return 0;
}

void func_468(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*uParam0[iVar0] = { uParam1[iVar0]->f_4 };
		uParam0->f_16[iVar0] = uParam1[iVar0]->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
}

int func_469(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_470(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = -1008861746;
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_477(uParam5->f_4) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_476(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_476(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_472(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64] = { uParam6->f_13[iVar64] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_380(unk_0xD803B885F5E47A62(), 0))
		{
			Var4.f_9 = 1;
		}
		func_309(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_471(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_472(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_471(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (unk_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
					}
				}
			}
			else if (func_357(uParam0, 1, 1, 1, 1))
			{
				func_470(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (unk_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

int func_471(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (vdist(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_330(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return 0;
}

int func_472(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_475(vParam0, uParam3))
	{
		if (func_473(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xB885EF0389689E54(vParam0, 0, uParam3, iParam4))
	{
		if (func_473(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_473(vector3 vParam0, var uParam3, int iParam4, bool bParam5)
{
	fVar0 = vdist(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_354(Global_2405072.f_509, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_333(*uParam3, 1056964608))
			{
				if (!func_474(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_474(var uParam0, bool bParam1)
{
	vVar1 = { *uParam0 };
	iVar4 = func_341(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_340(vVar1, &(Global_2410189[iVar4][iVar0])))
		{
			if (bParam1)
			{
				func_351(&vVar1, Global_2410189[iVar4][iVar0], Global_2410189[iVar4][iVar0].f_3, Global_2410189[iVar4][iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_340(vVar1, &(Global_2410189[8][iVar0])))
		{
			if (bParam1)
			{
				func_351(&vVar1, Global_2410189[8][iVar0], Global_2410189[8][iVar0].f_3, Global_2410189[8][iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_475(vector3 vParam0, var uParam3)
{
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = vdist(Global_2405072.f_2255[iVar0], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405072.f_2255[iVar1] };
			return 1;
		}
	}
	return 0;
}

int func_476(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_477(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_478(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_531(uParam1, uParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (uParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*uParam0[0] = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*uParam0[0] = { uParam1->f_18 };
							}
							else
							{
								*uParam0[0] = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_469(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_470(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_470(uParam0[0], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_531(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xC79C8A78EC708587())
		{
			if (!unk_0xFA2A5CC35287E5B8())
			{
				if (unk_0x4FC9A1459CD5C324())
				{
					func_531(uParam1, uParam2);
					Global_2405072.f_2483.f_1 = unk_0xEAD4FBE79458D592();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x0FB2CEE58DA4A6EE();
				func_531(uParam1, uParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_528(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (uParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_486(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || unk_0xC79C8A78EC708587())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE0463990929F9949(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57,29578f);
					}
					else
					{
						unk_0xB2C5D6F8163D4A45(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x00C66A3E05649B75(iVar4);
					}
					else
					{
						unk_0xD38A4489EFBF773A(iVar4, &iVar5);
					}
					func_486(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_480(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
			}
			if (uParam1->f_5 && func_469(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_468(uParam0, &(Global_2405072.f_2483.f_6));
					func_479(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_470(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_479(*uParam0[0]);
					return 1;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_468(uParam0, &(Global_2405072.f_2483.f_6));
				func_479(*uParam0[0]);
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x09AC81E49EA267F7(0, Global_2405072.f_2483.f_1);
				unk_0xE0463990929F9949(iVar4, uParam0[0], &(uParam0->f_16[0]));
				if (!func_474(uParam0[0], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_479(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_470(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_479(*uParam0[0]);
					return 1;
				}
			}
			else
			{
				*uParam0[0] = { Global_2405072.f_2458 };
				func_470(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
				func_479(*uParam0[0]);
				return 1;
			}
		}
	}
	else
	{
		*uParam0[0] = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_469(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_470(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_470(uParam0[0], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
		func_479(*uParam0[0]);
		return 1;
	}
	return 0;
}

void func_479(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0)] = { Global_2405072.f_2617[(3 - iVar0 + 1)] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0] = { vParam0 };
}

void func_480(var uParam0, var uParam1, var uParam2)
{
	if (func_469(Global_2405072.f_486) && func_485() < 4096)
	{
		func_484(uParam0, 0f);
		func_484(uParam1, uParam0->f_2);
		func_484(uParam2, uParam1->f_2);
	}
	else
	{
		func_483(uParam0);
		func_482(uParam2, uParam0->f_4);
		func_481(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_481(var uParam0, vector3 vParam1, vector3 vParam4)
{
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0].f_4, vParam1);
			fVar3 = vdist(Global_2408006[iVar0].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_482(var uParam0, vector3 vParam1)
{
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_483(var uParam0)
{
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0].f_1;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_484(var uParam0, float fParam1)
{
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_2 < fVar1 && Global_2408006[iVar0].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0].f_2;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_485()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > iVar1)
		{
			iVar1 = Global_2408006[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

void func_486(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (unk_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_524(unk_0xD803B885F5E47A62()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_523(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_367(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam5->f_13[iVar11]) > 0f)
		{
			if (!vdist(vParam0, uParam5->f_13[iVar11]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((vmag(uParam5->f_23) > 0f && vmag(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x0399732A9EBC368E(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_517(vParam0, fParam3, uParam4->f_15, func_522(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_312(vParam0, 25f, unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_364(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_364(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_301(vParam0, 0,5f))
			{
				if (func_405(vVar12))
				{
					if (!func_357(&vParam0, 0, 0, 0, 1) && !func_342(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_342(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_516(vParam0, 2,5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_515(unk_0xD803B885F5E47A62()) && func_513(unk_0xD803B885F5E47A62())))
		{
			if (!func_512(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_513(unk_0xD803B885F5E47A62()))
		{
			if (!func_511(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_510(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_469(Global_2405072.f_486))
			{
				if (func_408(vParam0, 0,01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_509(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_355(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_474(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_407(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_508(vParam0, &vVar17, &vVar20, &fVar23);
			if (!func_503(&(Global_2405072.f_45[iVar16]), vVar17, vVar20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_333(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0,3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_502(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_494(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_494(vParam0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_469(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_492(vParam0);
			}
			uVar7 = func_491(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_490(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_494(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_494(vParam0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_469(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_492(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_489(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar0 > Global_2405072.f_2483.f_6[iVar24].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_489(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_488(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_491(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_487(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_487(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar3 > Global_2405072.f_2483.f_6[iVar24].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_489(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_487(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_488(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_2503(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
				{
					fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2503(iVar1, 1, 1))
		{
			if (!func_305(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if (func_297(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
								{
									fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam7 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
							{
								fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_489(struct<10> Param0, int iParam10)
{
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10] };
	Global_2405072.f_2483.f_6[iParam10] = { Param0 };
	if (iParam10 < 4)
	{
		func_489(Var0, iParam10 + 1);
	}
}

void func_490(struct<10> Param0)
{
	Var1.f_2 = 1176256410;
	iVar11 = func_485();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] < iVar11)
		{
			Global_2408006[iVar0] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] == 0)
		{
			Global_2408006[iVar0] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999,9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13] = { Param0 };
	}
}

float func_491(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_2503(iVar11, 1, 1) || (iParam7 == 1 && func_2503(iVar11, 0, 0)))
		{
			if (!iVar11 == unk_0xD803B885F5E47A62() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_320(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x08067D4957B73C02(iVar11) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x08067D4957B73C02(iVar11) == -1 || !func_409(unk_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar11) || !bParam6)
					{
						if (func_297(iVar11))
						{
							vVar5 = { func_291(iVar11) };
							if (!iVar11 == unk_0xD803B885F5E47A62())
							{
								vVar8 = { unk_0x088E3BBDA11FE175(unk_0x9539D44F3E4492F6(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar5, true);
							fVar2 = unk_0x0EB28750412C3A5A(vParam0, vVar8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

float func_492(vector3 vParam0)
{
	return func_493(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_493(vector3 vParam0, var uParam3, var uParam4)
{
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (uParam3[iVar0]->f_9)
		{
			fVar1 = 0f;
			switch (uParam3[iVar0]->f_10)
			{
				case 0:
					fVar1 = vdist(*uParam3[iVar0], vParam0);
					fVar1 = (fVar1 - (uParam3[iVar0]->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam3[iVar0]->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0] - vParam0.x));
					}
					else if (vParam0.x > uParam3[iVar0]->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - uParam3[iVar0]->f_3));
					}
					if (vParam0.y < uParam3[iVar0]->f_1)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_1 - vParam0.y));
					}
					else if (vParam0.y > uParam3[iVar0]->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - uParam3[iVar0]->f_3.f_1));
					}
					if (vParam0.z < uParam3[iVar0]->f_2)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_2 - vParam0.z));
					}
					else if (vParam0.z > uParam3[iVar0]->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - uParam3[iVar0]->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_494(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (to_float(iParam9) / to_float(8));
	}
	if (bParam6)
	{
		fVar0 = func_487(vdist(vParam0, vParam3), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_491(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_487(fVar4, 0f, func_501(), func_499(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_497(vParam0);
	fVar0 = func_487(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !func_409(unk_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_496(vParam0, unk_0xD803B885F5E47A62(), 0);
	fVar0 = func_487(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_495(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_487(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_487(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_487(vdist(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_495(vector3 vParam0, var uParam3, var uParam4)
{
	iVar3 = unk_0x8529439EA7EEBA65(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x5DD62183BBF151CD(iVar3))
	{
		unk_0x8502D8EBA9E78216(iVar3, &vVar0);
		*uParam3 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = unk_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_496(vector3 vParam0, int iParam3, int iParam4)
{
	fVar0 = 999999,9f;
	if (func_2503(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_2503(iVar3, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar3) != unk_0x08067D4957B73C02(iParam3) || (unk_0x08067D4957B73C02(iVar3) == -1 && unk_0x08067D4957B73C02(iParam3) == -1))
					{
						if (Global_2417897.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417897.f_131[iVar2], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_497(vector3 vParam0)
{
	iVar39 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xC844350D5D58C99A(uVar6[iVar2]))
		{
			if (!unk_0x437347B10A200C4B(uVar6[iVar2], 0))
			{
				if (func_498(uVar6[iVar2]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(uVar6[iVar2], true) };
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!unk_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_498(Global_969031.f_152[iVar2]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], true) };
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_498(int iParam0)
{
	iVar0 = unk_0xD09DF7101876AFB8(iParam0);
	switch (unk_0x256517DE1B6755D4(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x1C43D178459D5730(Global_1574967[unk_0xD803B885F5E47A62()]))
	{
		switch (unk_0x256517DE1B6755D4(iVar0, Global_1574967[unk_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()] == 0)
	{
		iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (unk_0x256517DE1B6755D4(iVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_499()
{
	if (func_500())
	{
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_500()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_325(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

float func_501()
{
	if (func_500())
	{
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_502(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x558ADED8B93EA0F6(vParam0, fParam7)) || (fVar0 > 0f && unk_0xEA19D5D9230DBB67(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_503(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_507(*uParam0, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_506(*uParam0, uParam0->f_3, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_504(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_504(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, float fParam13)
{
	func_505(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar25], vParam7, vParam10, fParam13, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_505(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0,01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_352(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(vmag(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0,5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*uParam7[0] = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*uParam7[1] = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*uParam7[2] = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*uParam7[3] = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*uParam7[4] = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*uParam7[5] = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*uParam7[6] = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*uParam7[7] = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_506(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)
{
	vVar0[0] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar25], vParam6, vParam9, fParam12, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_507(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	vVar0[0] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar13], vParam4, vParam7, fParam10, 0, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_508(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	vVar1 = { vParam0 };
	iVar4 = func_341(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_340(vVar1, &(Global_2410189[iVar4][iVar0])))
		{
			*uParam3 = { Global_2410189[iVar4][iVar0] };
			*uParam4 = { Global_2410189[iVar4][iVar0].f_3 };
			*uParam5 = Global_2410189[iVar4][iVar0].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_340(vVar1, &(Global_2410189[8][iVar0])))
		{
			*uParam3 = { Global_2410189[8][iVar0] };
			*uParam4 = { Global_2410189[8][iVar0].f_3 };
			*uParam5 = Global_2410189[8][iVar0].f_6;
			return;
		}
		iVar0++;
	}
}

int func_509(vector3 vParam0)
{
	if (Global_2405072.f_45.f_55)
	{
		if (unk_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!unk_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = unk_0xFBD08BECC9B87937(vParam0);
				if (unk_0x31609A585163CBAC(iVar0))
				{
					iVar1 = unk_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
					{
						return 0;
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
	}
	return 1;
}

int func_510(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_332(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
			break;
		
		case 1:
			return func_330(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, true);
			break;
	}
	return 0;
}

int func_511(vector3 vParam0, var uParam3, var uParam4, float fParam5)
{
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = (uParam3[iVar1]->f_3 + fParam5);
		if (vdist(*uParam3[iVar1], vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *uParam4[iVar1] };
		vVar5 = { uParam4[iVar1]->f_3 };
		fVar8 = uParam4[iVar1]->f_6;
		if (unk_0x0399732A9EBC368E(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_512(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist(uParam1[iVar0]->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_347(&vVar1, uParam1[iVar0]->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_513(int iParam0)
{
	switch (func_411())
	{
		case 0:
			if (!func_514(iParam0))
			{
				if (Global_1590535[iParam0] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_514(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_515(int iParam0)
{
	if (func_322(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_516(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (vdist2(Global_2405072.f_2617[iVar0], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_312(vParam0, 0,5f, unk_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_363(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_521(vParam0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_333(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_363(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_521(vParam0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_518(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405072.f_3++;
						if (!func_333(vParam0, 1056964608))
						{
							Global_2405072.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_363(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_521(vParam0, fParam12))
			{
				Global_2405072.f_3++;
				if (!func_518(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405072.f_3++;
					if (!func_333(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return 0;
}

int func_518(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xD803B885F5E47A62() == iVar1)
		{
			if ((func_2503(iVar1, 1, 1) && func_297(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (!func_520(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
				{
					if (func_519(func_291(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
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

bool func_519(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = sin(fParam6);
	vVar0.y = cos(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return unk_0x0399732A9EBC368E(vParam0, vParam3, vVar3, fParam8, 0, true);
}

bool func_520(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_521(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_2503(iVar1, 1, 1) && func_297(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
		{
			if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && unk_0x08067D4957B73C02(iVar1) == -1) && !func_409(unk_0xD803B885F5E47A62(), 1))
			{
				return 0;
			}
			else if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !unk_0xD803B885F5E47A62() == iVar1) || !func_520(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_291(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_522(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_523(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	iVar3 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_2503(iVar1, 1, 1))
			{
				if ((!func_305(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1)) && iVar1 != unk_0xD803B885F5E47A62())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x08067D4957B73C02(iVar1) == iVar3)
					{
						if (unk_0x0EB28750412C3A5A(func_291(iVar1), vParam0, true) <= (fVar2 + fParam3))
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_524(int iParam0)
{
	if (((func_409(iParam0, 1) || func_527(iParam0)) || func_526(iParam0, 0)) || func_525(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)
{
	if (!func_2503(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

int func_526(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

void func_528(vector3 vParam0, var uParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*uParam3[iVar0] = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*uParam4[iVar0] = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar1].f_12, 11))
			{
				if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_2359721[iVar1].f_3, vParam0) < vdist(*uParam3[iVar0], vParam0))
				{
					Var3 = { Global_2359721[iVar1].f_3 };
					Var3.f_3 = Global_2359721[iVar1].f_6.f_2;
					func_530(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_262145.f_5999[iVar1], vParam0) < vdist(*uParam3[iVar0], vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1] };
				Var3.f_3 = 3f;
				func_530(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_262145.f_6045[iVar1][iVar2], vParam0) < vdist(*uParam3[iVar0], vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1][iVar2] };
					Var3.f_3 = 3f;
					func_530(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1].f_1 + Global_1311025[iVar1].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			vVar20 = { *uParam4[iVar0] + uParam4[iVar0]->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (vmag(*uParam4[iVar0]) == 0f || vdist(vVar17, vParam0) < vdist(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1].f_1 };
				Var7.f_3 = { Global_1311025[iVar1].f_4 };
				Var7.f_6 = Global_1311025[iVar1].f_7;
				Var7.f_7 = { Global_2359397[iVar1] };
				func_529(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_529(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_529(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_530(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_530(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_531(var uParam0, var uParam1)
{
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_532(Global_2405072.f_2255[iVar0], uParam0))
			{
				fVar4 = Global_2405072.f_2255[iVar0].f_3;
				if (vmag(*uParam1) > 0,01f)
				{
					vVar1 = { *uParam1 - Global_2405072.f_2255[iVar0] };
					fVar4 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_486(Global_2405072.f_2255[iVar0], fVar4, uParam0, uParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_480(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
	}
}

int func_532(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_471(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_471(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_533(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	func_331(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0,5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0,5f);
}

var func_534()
{
	return Global_1310987.f_4;
}

void func_535(float fParam0, float fParam1)
{
	func_544();
	func_537(fParam0, fParam1);
}

bool func_536(int iParam0)
{
	return iParam0 == 50;
}

void func_537(float fParam0, float fParam1)
{
	unk_0x8A1BBF3B7D62C45F(fParam0, fParam1, 0,1f);
	Global_2405072.f_2466 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = unk_0x2B6E0A53779D29EA();
}

void func_538()
{
	func_543();
	func_542();
	func_541();
	func_540();
	func_539();
}

void func_539()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_540()
{
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_541()
{
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4] = { Var0 };
		iVar4++;
	}
}

void func_542()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_543()
{
	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_544()
{
	if (Global_2405072.f_2464)
	{
		if (unk_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			unk_0xDA46A23FFDBCF876();
		}
		else
		{
			unk_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_545(int iParam0)
{
	if (func_200(iParam0, 25))
	{
		return Local_933.f_581[0];
	}
	else if (func_200(iParam0, 26))
	{
		return Local_933.f_581[1];
	}
	else if (func_200(iParam0, 27))
	{
		return Local_933.f_581[2];
	}
	return -810318068;
}

int func_546(int iParam0)
{
	if ((func_200(iParam0, 10) || func_200(iParam0, 29)) || func_200(iParam0, 30))
	{
		if (!func_7(2))
		{
			return 0;
		}
	}
	if (func_200(iParam0, 29) || func_200(iParam0, 30))
	{
		if (!func_9(Local_933.f_404[0]))
		{
			return 0;
		}
	}
	if (func_200(iParam0, 0) || func_200(iParam0, 1))
	{
		if (!func_547())
		{
			return 0;
		}
		if (func_7(10))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_200(iParam0, 28))
	{
		if (func_6(5))
		{
			if (func_7(9))
			{
				if (!func_5(&(Local_933.f_740)))
				{
					func_4(&(Local_933.f_740), 0, 0);
					return 0;
				}
				else if (!func_3(&(Local_933.f_740), 30000, 0))
				{
					return 0;
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
	if (((((((((func_200(iParam0, 0) || func_200(iParam0, 1)) || func_200(iParam0, 2)) || func_200(iParam0, 3)) || func_200(iParam0, 4)) || func_200(iParam0, 5)) || func_200(iParam0, 6)) || func_200(iParam0, 7)) || func_200(iParam0, 8)) || func_200(iParam0, 9))
	{
		if (!func_19())
		{
			return 0;
		}
		else if (func_15())
		{
			return 0;
		}
		if (func_200(iParam0, 3))
		{
			if (func_42() == 222)
			{
				if (!func_7(10))
				{
					return 0;
				}
			}
		}
	}
	if (func_143(iParam0, 22))
	{
		if (!func_19())
		{
			return 0;
		}
	}
	if (func_143(iParam0, 23))
	{
		if (!func_19())
		{
			return 0;
		}
	}
	if (func_106() == 20)
	{
		if (!func_7(11))
		{
			return 0;
		}
	}
	return 1;
}

int func_547()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_548(int iParam0)
{
	return Local_933.f_404[iParam0].f_1;
}

void func_549()
{
	if (!func_201() && func_42() != 222)
	{
		return;
	}
	if (func_106() == 31 || func_106() == 21)
	{
		if (!func_16())
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!func_7(10))
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
			{
				iVar1 = unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]);
				if (!unk_0x437347B10A200C4B(iVar1, 0))
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iVar1, true), func_443(func_106(), Local_933.f_3, 0, iVar0, 0), true) >= func_550())
					{
						func_33(10);
					}
				}
			}
		}
		iVar0++;
	}
}

float func_550()
{
	switch (func_106())
	{
		case 31:
			return 10f;
		
		case 21:
			return 0f;
		
		case 0:
			return 180f;
		
		case 4:
			return 100f;
		
		case 2:
			return 200f;
		
		case 5:
			return 1200f;
		
		case 13:
			return 200f;
		
		case 28:
			return 125f;
		
		default:
	}
	return 300f;
}

void func_551()
{
	bVar0 = true;
	iVar1 = 1;
	iVar2 = 0;
	while (iVar2 < 22)
	{
		func_695(iVar2);
		if (func_147(iVar2) > 1)
		{
			if (func_147(iVar2) > 23)
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					iVar3 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
					if (!unk_0x437347B10A200C4B(iVar3, 0))
					{
						if (unk_0x0A5D59F37DC7E974(iVar3) == 6)
						{
							if (func_12() != 0)
							{
								func_694(iVar2, 9);
							}
						}
					}
				}
			}
			if (func_106() == 7)
			{
				if (!func_137(9))
				{
					if (func_123(iVar2, 28))
					{
						if (func_147(iVar2) == 8 || func_147(iVar2) == 4)
						{
							if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
							{
								iVar4 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
								if (!unk_0x437347B10A200C4B(iVar4, 0))
								{
									if (func_3(&(Local_933.f_769), 15000, 0))
									{
										func_135(9);
									}
								}
							}
						}
					}
				}
			}
		}
		switch (func_147(iVar2))
		{
			case 0:
				break;
			
			case 1:
				if (func_692(iVar2))
				{
					if (!unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
					{
						if (func_115(func_659(iVar2)))
						{
							func_583(iVar2);
						}
					}
				}
				break;
			
			case 13:
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					iVar5 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
					if (!unk_0x405E212DDE472467(iVar5, 0))
					{
						func_694(iVar2, 8);
					}
				}
				if (func_582(iVar2))
				{
					func_694(iVar2, 18);
				}
				break;
			
			case 14:
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					if (func_582(iVar2))
					{
						func_694(iVar2, 18);
					}
					iVar6 = func_581(iVar2);
					if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar6]))
					{
						vVar7 = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar6]), false) };
						iVar10 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
						if (unk_0x5A91F08DF773C39D(iVar10, vVar7, 30f, 30f, 30f, false, true, 0))
						{
							if (iLocal_697[iVar6] == func_48())
							{
								func_694(iVar2, 13);
							}
							else
							{
								func_694(iVar2, 8);
							}
						}
					}
					else
					{
						func_694(iVar2, 8);
					}
				}
				break;
			
			case 2:
				if (func_106() == 7)
				{
					if (((func_580(iVar2) || (func_125(iVar2, 10) && func_6(20))) || (func_125(iVar2, 11) && func_6(31))) || func_123(iVar2, 1))
					{
						func_694(iVar2, 8);
					}
				}
				else if (((func_106() == 29 || func_106() == 1) || func_106() == 3) || func_106() == 10)
				{
					if (func_7(18) || func_7(9))
					{
						func_694(iVar2, 8);
					}
				}
				else if ((((func_106() == 0 || func_106() == 2) || func_106() == 4) || func_106() == 8) || func_106() == 14)
				{
					if (func_7(26) || func_7(9))
					{
						func_694(iVar2, 8);
					}
				}
				else if (func_106() == 13)
				{
					if (func_7(26) || func_7(9))
					{
						if (((((((((func_126(iVar2, 0) || func_126(iVar2, 1)) || func_126(iVar2, 2)) || func_126(iVar2, 3)) || func_126(iVar2, 4)) || func_126(iVar2, 5)) || func_126(iVar2, 6)) || func_126(iVar2, 7)) || func_126(iVar2, 8)) || func_126(iVar2, 9))
						{
							func_694(iVar2, 8);
						}
						if (((((func_126(iVar2, 10) || func_126(iVar2, 11)) || func_126(iVar2, 15)) || func_126(iVar2, 12)) || func_126(iVar2, 13)) || func_126(iVar2, 14))
						{
							func_694(iVar2, 18);
						}
					}
				}
				else if (func_106() == 6)
				{
					if (func_7(9))
					{
						func_694(iVar2, 8);
					}
				}
				else if (func_106() == 38)
				{
					if ((func_11(0, 8) || func_7(9)) || func_6(15))
					{
						if (!func_2(iVar2, 14))
						{
							func_694(iVar2, 8);
						}
						else if (func_2347() <= 6)
						{
							func_694(iVar2, 8);
						}
					}
				}
				else if (func_106() == 27)
				{
					if ((func_580(iVar2) || func_6(20)) || func_6(6))
					{
						func_694(iVar2, 8);
					}
				}
				else if ((((func_579() || func_6(11)) || func_7(6)) || func_7(9)) || func_6(18))
				{
					func_694(iVar2, 8);
				}
				if (func_106() == 34 || func_106() == 5)
				{
					if (func_7(9))
					{
						func_694(iVar2, 8);
					}
					if (func_79(11) || func_133(2))
					{
						if (!func_578(iVar2, 15))
						{
							if (func_577(iVar2))
							{
								func_694(iVar2, 12);
							}
						}
					}
				}
				break;
			
			case 3:
				if (func_7(4) || func_6(29))
				{
					if (((((func_129(iVar2, 0) || func_45(iVar2, 8)) || func_578(iVar2, 30)) || func_45(iVar2, 28)) || func_45(iVar2, 29)) || func_45(iVar2, 30))
					{
						func_694(iVar2, 4);
					}
				}
				if (func_106() == 7)
				{
					if ((func_580(iVar2) || (func_125(iVar2, 8) && func_6(20))) || (func_125(iVar2, 9) && func_6(31)))
					{
						func_694(iVar2, 8);
					}
					if (func_123(iVar2, 1))
					{
						func_694(iVar2, 4);
					}
				}
				else if (func_106() == 20)
				{
					if ((((func_580(iVar2) || (func_126(iVar2, 29) && func_6(20))) || (func_126(iVar2, 30) && func_6(31))) || (func_126(iVar2, 29) && func_6(29))) || (func_126(iVar2, 30) && func_6(30)))
					{
						func_694(iVar2, 8);
					}
					if (func_123(iVar2, 1))
					{
						func_694(iVar2, 4);
					}
				}
				else if (func_106() == 12)
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]) && !func_576(Local_933.f_73[iVar2]))
					{
						iVar11 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
						if (unk_0xFA4CE147B4D9AEE0(iVar11, 69) || unk_0xFA4CE147B4D9AEE0(iVar11, 17))
						{
							func_694(iVar2, 4);
						}
						else if (!unk_0x405E212DDE472467(iVar11, 0))
						{
							func_694(iVar2, 8);
						}
					}
				}
				else if (func_106() == 20)
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
					{
						if (!func_576(Local_933.f_73[iVar2]))
						{
							if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_933.f_73[iVar2]), 0))
							{
								func_694(iVar2, 8);
							}
						}
					}
				}
				else
				{
					if ((func_7(6) || func_6(29)) || func_6(21))
					{
						if (func_129(iVar2, 5))
						{
							func_694(iVar2, 4);
						}
					}
					if (func_106() == 36 || func_106() == 39)
					{
						if (func_12() != 0)
						{
							if (func_575(iVar2))
							{
								func_694(iVar2, 11);
							}
						}
					}
					if (((func_106() == 36 || func_106() == 39) || func_106() == 27) || func_106() == 21)
					{
						if (func_580(iVar2) || func_6(20))
						{
							iVar12 = unk_0x09AC81E49EA267F7(0, 100);
							if (iVar12 > 50 || func_106() == 27)
							{
								func_694(iVar2, 8);
							}
							else
							{
								func_694(iVar2, 11);
							}
						}
					}
				}
				break;
			
			case 11:
				if (func_148(iVar2))
				{
					if (func_573(iVar2))
					{
						func_694(iVar2, 8);
					}
				}
				break;
			
			case 18:
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					iVar13 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
					if (unk_0xD1960163A3042274(iVar13, -1273030092) == 1 || unk_0xD1960163A3042274(iVar13, -251125078) == 1)
					{
						func_694(iVar2, 23);
					}
				}
				else
				{
					func_694(iVar2, 23);
				}
				break;
			
			case 4:
				if (func_106() == 12)
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]) && !func_576(Local_933.f_73[iVar2]))
					{
						iVar14 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
						if (!unk_0x405E212DDE472467(iVar14, 0))
						{
							func_694(iVar2, 8);
						}
					}
				}
				if (func_106() == 27)
				{
					if (func_6(6))
					{
						func_694(iVar2, 8);
					}
				}
				if (func_106() == 21)
				{
					if (func_6(19))
					{
						func_694(iVar2, 11);
					}
				}
				if (func_2(iVar2, 15))
				{
					if (func_570(iVar2))
					{
						func_694(iVar2, 8);
						func_569(iVar2, 15);
					}
				}
				if (func_106() == 36 || func_106() == 39)
				{
					if (func_12() != 0)
					{
						if (func_575(iVar2))
						{
							func_694(iVar2, 11);
						}
					}
				}
				if (func_106() == 7)
				{
					if ((func_580(iVar2) || (func_125(iVar2, 8) && func_6(20))) || (func_125(iVar2, 9) && func_6(31)))
					{
						func_694(iVar2, 8);
					}
				}
				if (func_106() == 20)
				{
					if ((func_580(iVar2) || (func_126(iVar2, 29) && func_6(20))) || (func_126(iVar2, 30) && func_6(31)))
					{
						func_694(iVar2, 8);
					}
				}
				if (((func_106() == 36 || func_106() == 39) || func_106() == 27) || func_106() == 21)
				{
					if (func_580(iVar2) || func_6(20))
					{
						iVar15 = unk_0x09AC81E49EA267F7(0, 100);
						if (iVar15 > 50 || func_106() == 27)
						{
							func_694(iVar2, 8);
						}
						else
						{
							func_694(iVar2, 11);
						}
					}
				}
				break;
			
			case 19:
				break;
			
			case 5:
				if (func_7(4))
				{
					func_694(iVar2, 4);
				}
				if (func_79(12))
				{
					if (func_578(iVar2, 16))
					{
						func_694(iVar2, 15);
					}
				}
				break;
			
			case 17:
				break;
			
			case 22:
				if (func_106() == 11)
				{
					if (func_123(iVar2, 9))
					{
						if (func_3(&(Local_933.f_730), 60000, 0))
						{
							func_694(iVar2, 11);
						}
					}
				}
				break;
			
			case 16:
			case 10:
				if (func_106() == 7)
				{
					if (func_123(iVar2, 0) || func_125(iVar2, 0))
					{
						func_694(iVar2, 8);
					}
				}
				if (func_106() == 11)
				{
					if (func_133(16))
					{
						if (func_3(&uLocal_2236, 4000, 0))
						{
							if (func_123(iVar2, 9))
							{
								func_694(iVar2, 21);
							}
							else if (func_125(iVar2, 1) || func_125(iVar2, 2))
							{
								func_694(iVar2, 11);
							}
						}
					}
				}
				if (func_106() == 34 || func_106() == 5)
				{
					if (func_7(9))
					{
						if (func_128(iVar2, 24))
						{
							func_694(iVar2, 11);
						}
						else
						{
							func_694(iVar2, 8);
						}
					}
					if (func_79(11) || func_133(2))
					{
						if (!func_578(iVar2, 15))
						{
							if (func_577(iVar2))
							{
								func_694(iVar2, 12);
							}
						}
					}
				}
				else if (func_106() == 26)
				{
					if ((((func_7(7) || func_7(6)) || func_11(0, 8)) || func_6(15)) || func_6(21))
					{
						if (!func_5(&(Local_933.f_742)))
						{
							func_4(&(Local_933.f_742), 0, 0);
						}
						else if (func_3(&(Local_933.f_742), 2500, 0))
						{
							func_694(iVar2, 9);
						}
					}
				}
				else if (((func_106() == 29 || func_106() == 1) || func_106() == 3) || func_106() == 10)
				{
					if (func_7(18) || func_7(9))
					{
						if (!func_123(iVar2, 2))
						{
							func_694(iVar2, 8);
						}
						else
						{
							func_694(iVar2, 21);
						}
					}
				}
				else if (((func_106() == 0 || func_106() == 4) || func_106() == 8) || func_106() == 14)
				{
					if (func_7(26) || func_7(9))
					{
						func_694(iVar2, 8);
					}
				}
				else if (func_106() == 13)
				{
					if (func_7(26) || func_7(9))
					{
						if (((((((((func_126(iVar2, 0) || func_126(iVar2, 1)) || func_126(iVar2, 2)) || func_126(iVar2, 3)) || func_126(iVar2, 4)) || func_126(iVar2, 5)) || func_126(iVar2, 6)) || func_126(iVar2, 7)) || func_126(iVar2, 8)) || func_126(iVar2, 9))
						{
							func_694(iVar2, 8);
						}
						if (((((func_126(iVar2, 10) || func_126(iVar2, 11)) || func_126(iVar2, 15)) || func_126(iVar2, 12)) || func_126(iVar2, 13)) || func_126(iVar2, 14))
						{
							func_694(iVar2, 18);
						}
					}
				}
				else if (func_106() == 2)
				{
					if (func_7(26) || func_7(9))
					{
						if (func_567(iVar2))
						{
							if (unk_0x09AC81E49EA267F7(0, 2) == 0)
							{
								bVar16 = false;
							}
							else if (iLocal_2235 < 2)
							{
								iLocal_2235++;
								bVar16 = true;
							}
							else
							{
								bVar16 = false;
							}
						}
						else
						{
							bVar16 = true;
						}
						if (bVar16)
						{
							func_694(iVar2, 8);
						}
						else
						{
							func_694(iVar2, 18);
						}
					}
				}
				else if (func_106() == 6)
				{
					if (func_7(9))
					{
						func_694(iVar2, 8);
					}
				}
				else if (func_106() == 32)
				{
					if (func_7(9) || func_6(21))
					{
						func_694(iVar2, 9);
					}
				}
				else if (func_106() != 35 && func_106() != 37)
				{
					if (((func_79(0) || func_7(9)) || func_11(0, 8)) || func_7(6))
					{
						if (func_2(iVar2, 15))
						{
							func_694(iVar2, 4);
						}
						else
						{
							func_694(iVar2, 8);
						}
					}
				}
				else if (func_106() == 37)
				{
					if (func_22(16))
					{
						func_694(iVar2, 11);
					}
				}
				break;
			
			case 7:
				break;
			
			case 6:
				break;
			
			case 8:
				if (func_566(iVar2))
				{
					if (func_106() == 9)
					{
						iVar17 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
						if (!unk_0x405E212DDE472467(iVar17, 0))
						{
							func_694(iVar2, 9);
						}
					}
					else if (func_564())
					{
						if (func_11(0, 12))
						{
							func_694(iVar2, 9);
						}
					}
				}
				if (func_2(iVar2, 15))
				{
					func_694(iVar2, 4);
				}
				if (!func_573(iVar2))
				{
					if (func_79(12))
					{
						if (func_578(iVar2, 16))
						{
							func_694(iVar2, 15);
						}
					}
				}
				if (func_2347() > 6)
				{
					if (func_2(iVar2, 13))
					{
						func_694(iVar2, 19);
					}
					else if (func_2(iVar2, 14))
					{
						func_694(iVar2, 2);
					}
				}
				if (((func_129(iVar2, 14) || func_129(iVar2, 15)) || func_129(iVar2, 16)) || func_129(iVar2, 17))
				{
					if (func_582(iVar2))
					{
						func_694(iVar2, 18);
					}
					if (func_201())
					{
						if (iLocal_697[func_581(iVar2)] == func_48())
						{
							if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
							{
								if (unk_0xE5DBF9B6126856CA(Local_933.f_33[func_581(iVar2)]))
								{
									iVar18 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
									if (unk_0x5A91F08DF773C39D(iVar18, unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[func_581(iVar2)]), true), 10f, 10f, 10f, false, true, 0))
									{
										func_694(iVar2, 13);
									}
								}
							}
						}
					}
				}
				break;
			
			case 15:
				if (func_578(iVar2, 16))
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
					{
						if (!func_576(Local_933.f_73[iVar2]))
						{
							if (unk_0x75B806D0A76CB67D(unk_0x1B50683925F00106(Local_933.f_73[iVar2])) == 2)
							{
								func_40(iVar2, 17);
							}
							if (func_578(iVar2, 17))
							{
								if ((unk_0x75B806D0A76CB67D(unk_0x1B50683925F00106(Local_933.f_73[iVar2])) == -1 && !unk_0xE934758D273C899A(unk_0x1B50683925F00106(Local_933.f_73[iVar2]))) && !unk_0x92444005288A72ED(unk_0x1B50683925F00106(Local_933.f_73[iVar2])))
								{
									func_694(iVar2, 11);
								}
							}
							vVar19 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_933.f_73[iVar2]), false) };
							if (vVar19.z < (unk_0x1B5F75EF87755C4E(vVar19.x, vVar19.y) + 20f))
							{
								if ((unk_0x75B806D0A76CB67D(unk_0x1B50683925F00106(Local_933.f_73[iVar2])) == -1 && !unk_0xE934758D273C899A(unk_0x1B50683925F00106(Local_933.f_73[iVar2]))) && !unk_0x92444005288A72ED(unk_0x1B50683925F00106(Local_933.f_73[iVar2])))
								{
									func_694(iVar2, 11);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				break;
			
			case 20:
				if (func_128(iVar2, 25))
				{
					if (func_133(0))
					{
						func_694(iVar2, 8);
					}
				}
				break;
			
			case 21:
				if (func_123(iVar2, 9))
				{
					if (func_137(3))
					{
						func_694(iVar2, 22);
					}
				}
				break;
			
			case 12:
				if (func_578(iVar2, 15))
				{
					func_694(iVar2, 2);
				}
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					iVar22 = unk_0x1B50683925F00106(Local_933.f_73[iVar2]);
					vVar23 = { func_563(iVar2) };
					iVar26 = func_122(iVar2);
					if ((func_562(iVar22, vVar23, 0) <= 0,3f || func_561(iVar26)) || func_560(vVar23, iVar26))
					{
						func_694(iVar2, 2);
						func_40(iVar2, 15);
						unk_0xAFF39FB306F8E232(iVar22, 1, false);
					}
				}
				break;
			
			case 23:
				if (func_201())
				{
					if (func_129(iVar2, 14) || func_129(iVar2, 15))
					{
						if (func_194())
						{
							if (func_192(0) && func_6(func_187(0)))
							{
								func_559(iVar2);
								func_694(iVar2, 1);
							}
						}
					}
					if (func_129(iVar2, 16) || func_129(iVar2, 17))
					{
						if (func_194())
						{
							if (func_192(0) && func_6(func_187(1)))
							{
								func_559(iVar2);
								func_694(iVar2, 1);
							}
						}
					}
				}
				if (func_558(iVar2))
				{
					if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
					{
						func_182(&(Local_933.f_73[iVar2]));
					}
				}
				break;
			
			case 25:
				break;
		}
		if (func_147(iVar2) > 1)
		{
			if (func_147(iVar2) != 23)
			{
				if (!func_557(iVar2))
				{
					iVar1 = 0;
				}
				if (!unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar2]))
				{
					func_694(iVar2, 23);
				}
				else if (unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_933.f_73[iVar2]), 0))
				{
					func_694(iVar2, 23);
				}
				else if (func_554(iVar2))
				{
					func_694(iVar2, 23);
				}
				else if (func_582(iVar2))
				{
					func_694(iVar2, 18);
				}
				else if (((func_129(iVar2, 14) || func_129(iVar2, 15)) || func_129(iVar2, 16)) || func_129(iVar2, 17))
				{
					bVar0 = false;
				}
			}
		}
		else if (func_147(iVar2) == 1)
		{
			if (!func_557(iVar2))
			{
				iVar1 = 0;
			}
		}
		iVar2++;
	}
	if (iVar1 && func_7(3))
	{
		func_118(13);
	}
	if (func_201())
	{
		if (func_7(10) && func_197())
		{
			if (func_7(13))
			{
				if (func_553())
				{
					Local_933.f_572 = -1;
					func_32(13);
				}
				iVar27 = 0;
				while (iVar27 < 2)
				{
					if (func_6(func_187(iVar27)))
					{
						if (func_552(iVar27))
						{
							func_186(func_187(iVar27));
						}
					}
					iVar27++;
				}
			}
			if (bVar0)
			{
				if (!func_7(13))
				{
					Local_933.f_572 = unk_0xDD0E7998AE8AD485();
					Local_933.f_573++;
					func_33(13);
				}
			}
		}
	}
}

int func_552(int iParam0)
{
	switch (func_106())
	{
		case 29:
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_147(10) > 1 && func_147(10) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(11) > 1 && func_147(11) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 2:
					if (func_147(2) > 1 && func_147(2) != 23)
					{
						return 1;
					}
					break;
				
				case 3:
					if (func_147(3) > 1 && func_147(3) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 0:
					if (func_147(11) > 1 && func_147(11) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(12) > 1 && func_147(12) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					if (func_147(10) > 1 && func_147(10) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(11) > 1 && func_147(11) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 0:
					if (func_147(1) > 1 && func_147(1) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(2) > 1 && func_147(2) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					if (((func_147(0) > 1 && func_147(0) != 23) && func_147(1) > 1) && func_147(1) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (((func_147(2) > 1 && func_147(2) != 23) && func_147(3) > 1) && func_147(3) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 0:
					if (((func_147(4) > 1 && func_147(4) != 23) && func_147(5) > 1) && func_147(5) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (((func_147(6) > 1 && func_147(6) != 23) && func_147(7) > 1) && func_147(7) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (((func_147(1) > 1 && func_147(1) != 23) && func_147(2) > 1) && func_147(2) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (((func_147(3) > 1 && func_147(3) != 23) && func_147(4) > 1) && func_147(4) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_147(14) > 1 && func_147(14) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(15) > 1 && func_147(15) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					if (func_147(16) > 1 && func_147(16) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(17) > 1 && func_147(17) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					if (func_147(11) > 1 && func_147(11) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(12) > 1 && func_147(12) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					if (((func_147(9) > 1 && func_147(9) != 23) && func_147(10) > 1) && func_147(10) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (((func_147(11) > 1 && func_147(11) != 23) && func_147(12) > 1) && func_147(12) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					if (func_147(6) > 1 && func_147(6) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(7) > 1 && func_147(7) != 23)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					if (func_147(16) > 1 && func_147(16) != 23)
					{
						return 1;
					}
					break;
				
				case 1:
					if (func_147(17) > 1 && func_147(17) != 23)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_553()
{
	switch (func_106())
	{
		case 29:
		case 1:
			if (((func_147(10) > 1 && func_147(10) != 23) && func_147(11) > 1) && func_147(11) != 23)
			{
				return 1;
			}
			break;
		
		case 20:
			if (((func_147(2) > 1 && func_147(2) != 23) && func_147(3) > 1) && func_147(3) != 23)
			{
				return 1;
			}
			break;
		
		case 35:
			if (((func_147(11) > 1 && func_147(11) != 23) && func_147(12) > 1) && func_147(12) != 23)
			{
				return 1;
			}
			break;
		
		case 24:
			if (((func_147(10) > 1 && func_147(10) != 23) && func_147(11) > 1) && func_147(11) != 23)
			{
				return 1;
			}
			break;
		
		case 36:
			if (((func_147(1) > 1 && func_147(1) != 23) && func_147(2) > 1) && func_147(2) != 23)
			{
				return 1;
			}
			break;
		
		case 25:
			if (((((((func_147(0) > 1 && func_147(0) != 23) && func_147(1) > 1) && func_147(1) != 23) && func_147(2) > 1) && func_147(2) != 23) && func_147(3) > 1) && func_147(3) != 23)
			{
				return 1;
			}
			break;
		
		case 31:
			if (((((((func_147(4) > 1 && func_147(4) != 23) && func_147(5) > 1) && func_147(5) != 23) && func_147(6) > 1) && func_147(6) != 23) && func_147(7) > 1) && func_147(7) != 23)
			{
				return 1;
			}
			break;
		
		case 21:
			if (((((((func_147(1) > 1 && func_147(1) != 23) && func_147(2) > 1) && func_147(2) != 23) && func_147(3) > 1) && func_147(3) != 23) && func_147(4) > 1) && func_147(4) != 23)
			{
				return 1;
			}
			break;
		
		case 0:
			if (((func_147(14) > 1 && func_147(14) != 23) && func_147(15) > 1) && func_147(15) != 23)
			{
				return 1;
			}
			break;
		
		case 2:
			if (((func_147(16) > 1 && func_147(16) != 23) && func_147(17) > 1) && func_147(17) != 23)
			{
				return 1;
			}
			break;
		
		case 4:
			if (((func_147(11) > 1 && func_147(11) != 23) && func_147(12) > 1) && func_147(12) != 23)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((((((func_147(9) > 1 && func_147(9) != 23) && func_147(10) > 1) && func_147(10) != 23) && func_147(11) > 1) && func_147(11) != 23) && func_147(12) > 1) && func_147(12) != 23)
			{
				return 1;
			}
			break;
		
		case 8:
			if (((func_147(6) > 1 && func_147(6) != 23) && func_147(7) > 1) && func_147(7) != 23)
			{
				return 1;
			}
			break;
		
		case 13:
			if (((func_147(16) > 1 && func_147(16) != 23) && func_147(17) > 1) && func_147(17) != 23)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_554(int iParam0)
{
	if (func_201())
	{
		if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
		{
			iVar0 = func_581(iParam0);
			if (iVar0 != -1)
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]) && unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
				{
					iVar1 = unk_0x1B50683925F00106(Local_933.f_73[iParam0]);
					iVar2 = unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]);
					if (!unk_0x437347B10A200C4B(iVar1, 0) && !unk_0x437347B10A200C4B(iVar2, 0))
					{
						if (!func_555(iVar1, iVar2, func_556(), 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_555(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

float func_556()
{
	switch (func_106())
	{
		case 35:
			return 600f;
		
		case 31:
			return 600f;
		
		default:
	}
	return 500f;
}

int func_557(int iParam0)
{
	if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	if (func_106() == 35)
	{
		if (!func_129(iParam0, 14) && !func_129(iParam0, 16))
		{
			return 0;
		}
	}
	else if (func_106() == 33)
	{
		if (func_578(iParam0, 3) || func_578(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_106() == 8)
	{
		if (func_123(iParam0, 3) || func_123(iParam0, 4))
		{
			return 0;
		}
	}
	return 1;
}

void func_559(int iParam0)
{
	if (func_201())
	{
		Local_933.f_509 = { 0f, 0f, 0f };
		Local_933.f_512 = 0f;
		Local_933.f_508 = -1;
		Local_933.f_513 = 0;
	}
}

int func_560(vector3 vParam0, int iParam3)
{
	if (unk_0xE5DBF9B6126856CA(iParam3))
	{
		iVar0 = unk_0xB177666FAB6F4417(iParam3);
	}
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 2f, 0, 67711);
	if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != iVar0)
	{
		return 1;
	}
	return 0;
}

int func_561(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(iParam0))
	{
		iVar0 = unk_0xB177666FAB6F4417(iParam0);
		if (!unk_0x437347B10A200C4B(iVar0, 0) && ((unk_0x7B5606C651AB51B5(iVar0, 3, 10000) || unk_0x7B5606C651AB51B5(iVar0, 0, 10000)) || unk_0x7B5606C651AB51B5(iVar0, 1, 10000)))
		{
			return 1;
		}
	}
	return 0;
}

float func_562(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam4);
}

Vector3 func_563(int iParam0)
{
	switch (func_42())
	{
		case 31:
			if (func_128(iParam0, 22))
			{
				return -1095,274f, -2413,758f, 12,9452f;
			}
			else if (func_128(iParam0, 23))
			{
				return -1091,539f, -2418,548f, 12,9452f;
			}
			break;
		
		case 34:
			if (func_128(iParam0, 19))
			{
				return 370,4007f, 3412,959f, 35,4051f;
			}
			break;
		
		case 35:
			if (func_128(iParam0, 17))
			{
				return 863,2701f, 2379,475f, 53,2767f;
			}
			break;
		
		case 36:
			if (func_128(iParam0, 18))
			{
				return -1922,183f, 2063,903f, 139,6749f;
			}
			break;
	}
	return -1091,852f, -2417,671f, 12,9452f;
}

int func_564()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 8))
		{
			return 1;
		}
		iVar0++;
	}
	if ((((func_7(7) || func_7(8)) || func_565(19)) || func_6(11)) || func_6(18))
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_636, iParam0);
}

int func_566(int iParam0)
{
	if (func_129(iParam0, 1))
	{
		return 1;
	}
	if (func_129(iParam0, 2))
	{
		return 1;
	}
	if (func_129(iParam0, 3))
	{
		return 1;
	}
	if (func_129(iParam0, 4))
	{
		return 1;
	}
	if (func_129(iParam0, 5))
	{
		return 1;
	}
	if (func_129(iParam0, 18))
	{
		return 1;
	}
	if (func_129(iParam0, 19))
	{
		return 1;
	}
	if (func_129(iParam0, 20))
	{
		return 1;
	}
	if (func_129(iParam0, 21))
	{
		return 1;
	}
	if (func_129(iParam0, 22))
	{
		return 1;
	}
	if (func_129(iParam0, 23))
	{
		return 1;
	}
	if (func_129(iParam0, 24))
	{
		return 1;
	}
	if (func_129(iParam0, 25))
	{
		return 1;
	}
	if (func_129(iParam0, 26))
	{
		return 1;
	}
	if (func_129(iParam0, 27))
	{
		return 1;
	}
	if (func_154(iParam0, 10))
	{
		return 1;
	}
	if (func_154(iParam0, 11))
	{
		return 1;
	}
	if (func_154(iParam0, 12))
	{
		return 1;
	}
	if (func_154(iParam0, 13))
	{
		return 1;
	}
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		return 1;
	}
	if (((func_130(iParam0, 20) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_567(int iParam0)
{
	if (func_106() == 2)
	{
		if (func_568(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_568(int iParam0)
{
	if (((func_659(iParam0) == 1768677545 || func_659(iParam0) == 2140736771) || func_659(iParam0) == -1913214530) || func_659(iParam0) == -1839058191)
	{
		return 1;
	}
	return 0;
}

void func_569(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Local_933.f_73[iParam0].f_6), iParam1);
}

int func_570(int iParam0)
{
	if (func_106() != 24)
	{
		return 0;
	}
	if (func_42() == 201)
	{
		return 0;
	}
	if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]))
	{
		iVar0 = func_571(iParam0);
		if (unk_0xE5DBF9B6126856CA(iVar0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iVar0), 0))
			{
				iVar1 = unk_0x1B50683925F00106(Local_933.f_73[iParam0]);
				if (!unk_0x437347B10A200C4B(iVar1, 0))
				{
					if (unk_0x36646919F20EAFFC(iVar1))
					{
						return 1;
					}
					if (!unk_0xC42A92762C58E1B9(iVar1, unk_0xB177666FAB6F4417(iVar0), 0))
					{
						if (unk_0xD1960163A3042274(iVar1, -1794415470) == 1 && unk_0xD1960163A3042274(iVar1, -1794415470) == 0)
						{
							if (func_132(iVar1, unk_0xB177666FAB6F4417(iVar0), 1) < 7,5f)
							{
								if (!func_5(&uLocal_2233))
								{
									func_4(&uLocal_2233, 0, 0);
								}
								else if (func_3(&uLocal_2233, 10000, 0))
								{
									return 1;
								}
							}
							else
							{
								func_34(&uLocal_2233);
							}
						}
						else
						{
							func_34(&uLocal_2233);
						}
					}
					else
					{
						func_34(&uLocal_2233);
					}
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_571(int iParam0)
{
	if ((func_45(iParam0, 28) || func_45(iParam0, 29)) || func_45(iParam0, 30))
	{
		uVar0 = Local_933.f_404[func_572(iParam0)];
	}
	else
	{
		uVar0 = Local_933.f_33[0];
	}
	return uVar0;
}

int func_572(int iParam0)
{
	if (func_578(iParam0, 30))
	{
		if (func_106() == 39)
		{
			return 0;
		}
	}
	else if (func_45(iParam0, 28))
	{
		if (func_106() == 39)
		{
			return 0;
		}
		else if (func_106() == 36)
		{
			return 3;
		}
	}
	else if (func_45(iParam0, 29))
	{
		if (func_106() == 39)
		{
			return 1;
		}
		else if (func_106() == 36)
		{
			return 4;
		}
	}
	else if (func_45(iParam0, 30))
	{
		if (func_106() == 39)
		{
			return 2;
		}
		else if (func_106() == 36)
		{
			return 5;
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	if (func_6(func_574(iParam0)) || func_6(func_145(func_146(iParam0))))
	{
		if (func_106() == 33)
		{
			if (Local_933.f_688[func_146(iParam0)] >= 50 || func_6(func_145(func_146(iParam0))))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_574(int iParam0)
{
	if (func_123(iParam0, 20))
	{
		return 12;
	}
	else if (func_123(iParam0, 21))
	{
		return 13;
	}
	else if (func_123(iParam0, 22))
	{
		return 14;
	}
	return 12;
}

int func_575(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]))
	{
		iVar0 = unk_0x1B50683925F00106(Local_933.f_73[iParam0]);
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x405E212DDE472467(iVar0, 0))
			{
				iVar1 = unk_0x6937EA2286828455(iVar0, 0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0))
				{
					if (unk_0x4E861BC5B1EDA7BD(iVar1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_576(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 1;
}

int func_577(int iParam0)
{
	if (func_578(iParam0, 5) || func_578(iParam0, 6))
	{
		return 1;
	}
	switch (func_42())
	{
		case 31:
			if (func_128(iParam0, 22) || func_128(iParam0, 23))
			{
				return 1;
			}
			break;
		
		case 34:
			if (func_128(iParam0, 19))
			{
				return 1;
			}
			break;
		
		case 35:
			if (func_128(iParam0, 17))
			{
				return 1;
			}
			break;
		
		case 36:
			if (func_128(iParam0, 18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_578(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_430[iParam0], iParam1);
}

int func_579()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_11(iVar0, 8))
		{
			if (iLocal_697[iVar0] != func_48())
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_652, iLocal_697[iVar0]))
				{
					if (!func_2330(iLocal_679[iVar0], 3))
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

int func_580(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]))
	{
		iVar0 = unk_0x1B50683925F00106(Local_933.f_73[iParam0]);
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
{
	if (func_129(iParam0, 14) || func_129(iParam0, 15))
	{
		iVar0 = Local_933.f_623[0];
	}
	else if (func_129(iParam0, 16) || func_129(iParam0, 17))
	{
		iVar0 = Local_933.f_623[1];
	}
	if (iVar0 == -1)
	{
		return func_434();
	}
	return iVar0;
}

int func_582(int iParam0)
{
	if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
	{
		if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]))
		{
			if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), 0))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), true), func_421()) < (200f * 200f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_583(int iParam0)
{
	func_642(iParam0);
	switch (func_106())
	{
		case 1:
		case 0:
		case 2:
		case 4:
		case 6:
		case 5:
		case 9:
		case 3:
		case 10:
		case 7:
		case 8:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			if (func_692(iParam0))
			{
				if (func_625(iParam0, func_641(iParam0)))
				{
					func_588(iParam0);
					func_694(iParam0, func_585(iParam0));
					func_584();
					unk_0x71199B01895C6202(func_659(iParam0));
				}
			}
			break;
	}
}

void func_584()
{
	Local_933.f_509 = { 0f, 0f, 0f };
	Local_933.f_512 = 0f;
	Local_933.f_508 = -1;
	Local_933.f_513 = 0;
}

int func_585(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return 3;
	}
	if (func_129(iParam0, 5))
	{
		return 3;
	}
	if (((func_129(iParam0, 1) || func_129(iParam0, 2)) || func_129(iParam0, 3)) || func_129(iParam0, 4))
	{
		if (func_2(iParam0, 25))
		{
			return 16;
		}
		return 10;
	}
	if (((((((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15)) || func_129(iParam0, 10)) || func_129(iParam0, 11)) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
	{
		return 10;
	}
	if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
	{
		if (func_129(iParam0, 14) || func_129(iParam0, 16))
		{
			return 14;
		}
		return 8;
	}
	if (((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27))
	{
		return 8;
	}
	if (((func_154(iParam0, 10) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
	{
		return 2;
	}
	if ((((((((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 1)) || func_154(iParam0, 2)) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29))
	{
		return 10;
	}
	if ((func_154(iParam0, 6) || func_587(iParam0, 0)) || func_587(iParam0, 3))
	{
		return 5;
	}
	if ((((((func_154(iParam0, 7) || func_154(iParam0, 8)) || func_154(iParam0, 9)) || func_587(iParam0, 1)) || func_587(iParam0, 2)) || func_587(iParam0, 4)) || func_587(iParam0, 5))
	{
		return 8;
	}
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		if (func_2(iParam0, 25) || func_2(iParam0, 26))
		{
			return 16;
		}
		return 10;
	}
	if ((((func_578(iParam0, 2) || func_578(iParam0, 3)) || func_578(iParam0, 4)) || func_45(iParam0, 6)) || func_45(iParam0, 7))
	{
		if (func_148(iParam0))
		{
			return 11;
		}
		return 23;
	}
	if (func_578(iParam0, 5) || func_578(iParam0, 6))
	{
		return 2;
	}
	if (((((((((func_578(iParam0, 7) || func_578(iParam0, 8)) || func_578(iParam0, 9)) || func_578(iParam0, 10)) || func_578(iParam0, 11)) || func_578(iParam0, 12)) || func_578(iParam0, 13)) || func_578(iParam0, 14)) || func_2(iParam0, 11)) || func_2(iParam0, 12))
	{
		return 10;
	}
	if ((((((((((func_578(iParam0, 19) || func_578(iParam0, 20)) || func_578(iParam0, 21)) || func_578(iParam0, 22)) || func_578(iParam0, 23)) || func_578(iParam0, 24)) || func_578(iParam0, 25)) || func_578(iParam0, 26)) || func_45(iParam0, 0)) || func_45(iParam0, 1)) || func_45(iParam0, 2))
	{
		if (func_578(iParam0, 18))
		{
			return 17;
		}
		return 23;
	}
	if (func_45(iParam0, 8))
	{
		return 3;
	}
	if ((((((((((((((func_45(iParam0, 9) || func_45(iParam0, 10)) || func_45(iParam0, 11)) || func_45(iParam0, 12)) || func_45(iParam0, 13)) || func_45(iParam0, 14)) || func_45(iParam0, 15)) || func_45(iParam0, 16)) || func_45(iParam0, 17)) || func_45(iParam0, 18)) || func_45(iParam0, 19)) || func_45(iParam0, 20)) || func_45(iParam0, 21)) || func_45(iParam0, 22)) || func_45(iParam0, 23))
	{
		return 10;
	}
	if (((func_578(iParam0, 30) || func_45(iParam0, 28)) || func_45(iParam0, 29)) || func_45(iParam0, 30))
	{
		return 3;
	}
	if ((((((((func_2(iParam0, 0) || func_2(iParam0, 1)) || func_2(iParam0, 2)) || func_2(iParam0, 3)) || func_2(iParam0, 4)) || func_2(iParam0, 5)) || func_2(iParam0, 6)) || func_2(iParam0, 7)) || func_2(iParam0, 8))
	{
		return 2;
	}
	if (func_2(iParam0, 13) || func_2(iParam0, 14))
	{
		return 8;
	}
	if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
	{
		return 10;
	}
	if (((((((((((((func_586(iParam0, 13) || func_586(iParam0, 14)) || func_586(iParam0, 15)) || func_586(iParam0, 16)) || func_586(iParam0, 17)) || func_586(iParam0, 18)) || func_586(iParam0, 19)) || func_586(iParam0, 20)) || func_586(iParam0, 21)) || func_586(iParam0, 22)) || func_586(iParam0, 23)) || func_586(iParam0, 24)) || func_586(iParam0, 25)) || func_586(iParam0, 26))
	{
		return 10;
	}
	if ((((((((((((((func_130(iParam0, 0) || func_130(iParam0, 1)) || func_130(iParam0, 2)) || func_130(iParam0, 3)) || func_130(iParam0, 4)) || func_130(iParam0, 5)) || func_130(iParam0, 6)) || func_130(iParam0, 7)) || func_130(iParam0, 8)) || func_130(iParam0, 9)) || func_130(iParam0, 10)) || func_130(iParam0, 11)) || func_130(iParam0, 12)) || func_130(iParam0, 13)) || func_130(iParam0, 14))
	{
		return 10;
	}
	if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
	{
		return 10;
	}
	if (((func_128(iParam0, 11) || func_128(iParam0, 12)) || func_128(iParam0, 13)) || func_128(iParam0, 14))
	{
		switch (func_42())
		{
			case 25:
				return 10;
				break;
			
			case 26:
				if (iParam0 == 3)
				{
					return 16;
				}
				return 10;
				break;
			
			case 27:
				if (iParam0 == 3)
				{
					return 16;
				}
				return 10;
				break;
			
			case 28:
				if (iParam0 == 2 || iParam0 == 3)
				{
					return 16;
				}
				return 10;
				break;
			
			case 29:
				if (iParam0 == 0 || iParam0 == 3)
				{
					return 16;
				}
				return 10;
				break;
			
			case 30:
				if (iParam0 == 0 || iParam0 == 1)
				{
					return 16;
				}
				return 10;
				break;
			}
	}
	if ((((((((func_128(iParam0, 15) || func_128(iParam0, 16)) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
	{
		if (func_128(iParam0, 25))
		{
			return 20;
		}
		if (func_577(iParam0))
		{
			return 2;
		}
		return 10;
	}
	if ((((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_128(iParam0, 31)) || func_586(iParam0, 31))
	{
		return 10;
	}
	if (((func_130(iParam0, 20) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
	{
		return 8;
	}
	if (((((((((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 26)) || func_130(iParam0, 27)) || func_130(iParam0, 28)) || func_130(iParam0, 29)) || func_130(iParam0, 30)) || func_130(iParam0, 31)) || func_128(iParam0, 26)) || func_128(iParam0, 27))
	{
		return 10;
	}
	if (func_125(iParam0, 8) || func_125(iParam0, 9))
	{
		return 3;
	}
	if (func_125(iParam0, 10) || func_125(iParam0, 11))
	{
		return 2;
	}
	if (((func_125(iParam0, 4) || func_125(iParam0, 5)) || func_125(iParam0, 6)) || func_125(iParam0, 7))
	{
		return 10;
	}
	if (((func_123(iParam0, 5) || func_123(iParam0, 6)) || func_123(iParam0, 7)) || func_123(iParam0, 8))
	{
		return 10;
	}
	if ((func_123(iParam0, 9) || func_125(iParam0, 1)) || func_125(iParam0, 2))
	{
		return 10;
	}
	if (((((((((func_123(iParam0, 10) || func_123(iParam0, 11)) || func_123(iParam0, 12)) || func_123(iParam0, 13)) || func_123(iParam0, 14)) || func_123(iParam0, 15)) || func_123(iParam0, 16)) || func_123(iParam0, 17)) || func_123(iParam0, 18)) || func_123(iParam0, 19))
	{
		return 3;
	}
	if (func_126(iParam0, 29) || func_126(iParam0, 30))
	{
		return 3;
	}
	if (((((((((((((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 2)) || func_126(iParam0, 3)) || func_126(iParam0, 4)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7)) || func_126(iParam0, 8)) || func_126(iParam0, 9)) || func_126(iParam0, 10)) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
	{
		return 10;
	}
	if (((((((func_126(iParam0, 16) || func_126(iParam0, 17)) || func_126(iParam0, 18)) || func_126(iParam0, 19)) || func_126(iParam0, 20)) || func_126(iParam0, 21)) || func_126(iParam0, 22)) || func_126(iParam0, 23))
	{
		return 10;
	}
	return 2;
}

bool func_586(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_545[iParam0], iParam1);
}

bool func_587(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_499[iParam0], iParam1);
}

void func_588(int iParam0)
{
	iVar0 = unk_0x1B50683925F00106(Local_933.f_73[iParam0]);
	switch (func_106())
	{
		case 20:
			if (func_126(iParam0, 29) || func_126(iParam0, 30))
			{
				func_624(iParam0, iVar0);
			}
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			break;
		
		case 21:
			if (func_129(iParam0, 0))
			{
				func_620(iParam0, iVar0);
			}
			else
			{
				func_621(iParam0, iVar0, 0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 0:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			else
			{
				func_617(iParam0, iVar0, 0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 1:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			else
			{
				func_616(iParam0, iVar0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 11:
			func_615(iParam0, iVar0);
			break;
		
		case 2:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			else
			{
				func_613(iParam0, iVar0, func_568(iParam0));
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 4:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			else
			{
				func_612(iParam0, iVar0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 6:
			func_611(iParam0, iVar0);
			func_618(iParam0, iVar0, 1);
			break;
		
		case 5:
			func_610(iParam0, iVar0);
			func_618(iParam0, iVar0, 1);
			break;
		
		case 9:
			if (func_130(iParam0, 20) || func_130(iParam0, 22))
			{
				func_609(iParam0, iVar0);
			}
			if (func_130(iParam0, 21) || func_130(iParam0, 23))
			{
				func_608(iParam0, iVar0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 3:
			func_606(iParam0, iVar0);
			func_618(iParam0, iVar0, 1);
			break;
		
		case 10:
			func_605(iParam0, iVar0);
			func_618(iParam0, iVar0, 1);
			break;
		
		case 7:
			if (((func_125(iParam0, 8) || func_125(iParam0, 9)) || func_125(iParam0, 10)) || func_125(iParam0, 11))
			{
				func_604(iParam0, iVar0);
			}
			if (((func_125(iParam0, 4) || func_125(iParam0, 5)) || func_125(iParam0, 6)) || func_125(iParam0, 7))
			{
				func_603(iParam0, iVar0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 8:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			if (((func_123(iParam0, 5) || func_123(iParam0, 6)) || func_123(iParam0, 7)) || func_123(iParam0, 8))
			{
				func_602(iParam0, iVar0);
			}
			else
			{
				func_617(iParam0, iVar0, 0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 12:
			func_601(iParam0, iVar0);
			break;
		
		case 13:
			if (func_129(iParam0, 14) || func_129(iParam0, 16))
			{
				func_621(iParam0, iVar0, 0);
			}
			if (((((((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 2)) || func_126(iParam0, 3)) || func_126(iParam0, 4)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7)) || func_126(iParam0, 8)) || func_126(iParam0, 9))
			{
				func_600(iParam0, iVar0);
			}
			if (((((func_126(iParam0, 10) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
			{
				func_599(iParam0, iVar0);
			}
			func_618(iParam0, iVar0, 1);
			break;
		
		case 14:
			if (((((((func_126(iParam0, 16) || func_126(iParam0, 17)) || func_126(iParam0, 18)) || func_126(iParam0, 19)) || func_126(iParam0, 20)) || func_126(iParam0, 21)) || func_126(iParam0, 22)) || func_126(iParam0, 23))
			{
				func_589(iParam0, iVar0);
			}
			break;
	}
}

void func_589(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

int func_590(int iParam0)
{
	if (((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 10)) || func_129(iParam0, 11))
	{
		return 1;
	}
	if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
	{
		return 2;
	}
	if (((((((((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13)) || func_2(iParam0, 13)) || func_2(iParam0, 14))
	{
		return 2;
	}
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		return 2;
	}
	if (func_42() == 211 && (((func_578(iParam0, 9) || func_578(iParam0, 10)) || func_578(iParam0, 12)) || func_578(iParam0, 13)))
	{
		return 0;
	}
	if (func_128(iParam0, 25))
	{
		return 0;
	}
	if ((((((func_128(iParam0, 15) || func_128(iParam0, 16)) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21))
	{
		return 2;
	}
	if ((((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_128(iParam0, 31)) || func_586(iParam0, 31))
	{
		return 2;
	}
	return 1;
}

int func_591(int iParam0)
{
	if (func_129(iParam0, 7) || func_129(iParam0, 10))
	{
		return 324215364;
	}
	if ((func_578(iParam0, 2) || func_578(iParam0, 3)) || func_578(iParam0, 4))
	{
		return 2017895192;
	}
	if (((func_129(iParam0, 9) || func_129(iParam0, 11)) || func_2(iParam0, 6)) || func_2(iParam0, 0))
	{
		return -1074790547;
	}
	if (((((((func_129(iParam0, 15) || func_129(iParam0, 17)) || func_129(iParam0, 21)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_2(iParam0, 1)) || func_2(iParam0, 4)) || func_2(iParam0, 5))
	{
		return 324215364;
	}
	if (func_129(iParam0, 19))
	{
		return -1063057011;
	}
	if (func_106() == 0)
	{
		func_597(iParam0);
	}
	if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
	{
		return func_596(iParam0);
	}
	if ((((((((func_128(iParam0, 15) || func_128(iParam0, 16)) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
	{
		return func_595(iParam0);
	}
	if ((((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_128(iParam0, 31)) || func_586(iParam0, 31))
	{
		return func_594(iParam0);
	}
	if (((func_128(iParam0, 11) || func_128(iParam0, 12)) || func_128(iParam0, 13)) || func_128(iParam0, 14))
	{
		return 453432689;
	}
	if (((((((func_125(iParam0, 4) || func_125(iParam0, 5)) || func_125(iParam0, 6)) || func_125(iParam0, 7)) || func_125(iParam0, 8)) || func_125(iParam0, 9)) || func_125(iParam0, 10)) || func_125(iParam0, 11))
	{
		return -2084633992;
	}
	if (func_123(iParam0, 5))
	{
		return 2017895192;
	}
	if (func_123(iParam0, 6))
	{
		return 453432689;
	}
	if (func_123(iParam0, 7) || func_123(iParam0, 8))
	{
		return 324215364;
	}
	if (func_106() == 4)
	{
		func_593(iParam0);
	}
	if (((((((((func_123(iParam0, 10) || func_123(iParam0, 11)) || func_123(iParam0, 12)) || func_123(iParam0, 13)) || func_123(iParam0, 14)) || func_123(iParam0, 15)) || func_123(iParam0, 16)) || func_123(iParam0, 17)) || func_123(iParam0, 18)) || func_123(iParam0, 19))
	{
		return 453432689;
	}
	if (func_126(iParam0, 6) || func_126(iParam0, 9))
	{
		return -656458692;
	}
	if (func_126(iParam0, 1) || func_126(iParam0, 7))
	{
		return -102323637;
	}
	if (func_126(iParam0, 3) || func_126(iParam0, 4))
	{
		return -1810795771;
	}
	if (((((((((func_126(iParam0, 0) || func_126(iParam0, 2)) || func_126(iParam0, 8)) || func_126(iParam0, 5)) || func_126(iParam0, 10)) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
	{
		return -1569615261;
	}
	if (func_106() == 14)
	{
		return func_592(iParam0);
	}
	return 453432689;
}

int func_592(int iParam0)
{
	switch (func_42())
	{
		case 38:
			if ((((func_126(iParam0, 16) || func_126(iParam0, 18)) || func_126(iParam0, 19)) || func_126(iParam0, 21)) || func_126(iParam0, 23))
			{
				return 736523883;
			}
			if ((func_126(iParam0, 17) || func_126(iParam0, 20)) || func_126(iParam0, 22))
			{
				return 324215364;
			}
			break;
		
		case 39:
			if ((func_126(iParam0, 16) || func_126(iParam0, 18)) || func_126(iParam0, 21))
			{
				return 324215364;
			}
			if ((((func_126(iParam0, 17) || func_126(iParam0, 19)) || func_126(iParam0, 23)) || func_126(iParam0, 20)) || func_126(iParam0, 22))
			{
				return 736523883;
			}
			break;
		
		case 40:
			if ((func_126(iParam0, 18) || func_126(iParam0, 20)) || func_126(iParam0, 22))
			{
				return 324215364;
			}
			if ((((func_126(iParam0, 16) || func_126(iParam0, 21)) || func_126(iParam0, 17)) || func_126(iParam0, 19)) || func_126(iParam0, 23))
			{
				return 736523883;
			}
			break;
		
		case 41:
			if ((func_126(iParam0, 16) || func_126(iParam0, 18)) || func_126(iParam0, 17))
			{
				return 324215364;
			}
			if ((((func_126(iParam0, 21) || func_126(iParam0, 20)) || func_126(iParam0, 22)) || func_126(iParam0, 19)) || func_126(iParam0, 23))
			{
				return 736523883;
			}
			break;
	}
	return 1593441988;
}

int func_593(int iParam0)
{
	switch (func_42())
	{
		case 19:
			if (func_128(iParam0, 0))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 1))
			{
				return 453432689;
			}
			if (func_128(iParam0, 2))
			{
				return 453432689;
			}
			if (func_128(iParam0, 3))
			{
				return 453432689;
			}
			if (func_128(iParam0, 4))
			{
				return 324215364;
			}
			if (func_128(iParam0, 5))
			{
				return 453432689;
			}
			if (func_128(iParam0, 6))
			{
				return 453432689;
			}
			if (func_128(iParam0, 7))
			{
				return 324215364;
			}
			if (func_128(iParam0, 8))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 9))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 10))
			{
				return 453432689;
			}
			if (func_126(iParam0, 25))
			{
				return 324215364;
			}
			break;
		
		case 20:
			if (func_128(iParam0, 0))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 1))
			{
				return -2084633992;
			}
			if (func_128(iParam0, 2))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 3))
			{
				return -2084633992;
			}
			if (func_128(iParam0, 4))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 5))
			{
				return -2084633992;
			}
			if (func_128(iParam0, 6))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 7))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 8))
			{
				return -2084633992;
			}
			if (func_128(iParam0, 9))
			{
				return -1063057011;
			}
			if (func_128(iParam0, 10))
			{
				return -2084633992;
			}
			if (func_126(iParam0, 25))
			{
				return -2084633992;
			}
			break;
		
		case 21:
			if (func_128(iParam0, 0))
			{
				return 324215364;
			}
			if (func_128(iParam0, 1))
			{
				return 736523883;
			}
			if (func_128(iParam0, 2))
			{
				return 736523883;
			}
			if (func_128(iParam0, 3))
			{
				return 324215364;
			}
			if (func_128(iParam0, 4))
			{
				return 736523883;
			}
			if (func_128(iParam0, 5))
			{
				return 324215364;
			}
			if (func_128(iParam0, 6))
			{
				return 736523883;
			}
			if (func_128(iParam0, 7))
			{
				return 736523883;
			}
			if (func_128(iParam0, 8))
			{
				return 324215364;
			}
			if (func_128(iParam0, 9))
			{
				return 736523883;
			}
			if (func_128(iParam0, 10))
			{
				return 324215364;
			}
			if (func_126(iParam0, 25))
			{
				return 736523883;
			}
			break;
		
		case 22:
			if (func_128(iParam0, 0))
			{
				return 736523883;
			}
			if (func_128(iParam0, 1))
			{
				return 736523883;
			}
			if (func_128(iParam0, 2))
			{
				return 324215364;
			}
			if (func_128(iParam0, 3))
			{
				return 736523883;
			}
			if (func_128(iParam0, 4))
			{
				return 736523883;
			}
			if (func_128(iParam0, 5))
			{
				return 324215364;
			}
			if (func_128(iParam0, 6))
			{
				return 736523883;
			}
			if (func_128(iParam0, 7))
			{
				return 324215364;
			}
			if (func_128(iParam0, 8))
			{
				return 324215364;
			}
			if (func_128(iParam0, 9))
			{
				return 736523883;
			}
			if (func_128(iParam0, 10))
			{
				return 324215364;
			}
			if (func_126(iParam0, 25))
			{
				return 324215364;
			}
			break;
		
		case 23:
			if (func_128(iParam0, 0))
			{
				return 736523883;
			}
			if (func_128(iParam0, 1))
			{
				return 736523883;
			}
			if (func_128(iParam0, 2))
			{
				return 324215364;
			}
			if (func_128(iParam0, 3))
			{
				return 324215364;
			}
			if (func_128(iParam0, 4))
			{
				return 736523883;
			}
			if (func_128(iParam0, 5))
			{
				return 736523883;
			}
			if (func_128(iParam0, 6))
			{
				return 324215364;
			}
			if (func_128(iParam0, 7))
			{
				return 736523883;
			}
			if (func_128(iParam0, 8))
			{
				return 324215364;
			}
			if (func_128(iParam0, 9))
			{
				return 324215364;
			}
			if (func_128(iParam0, 10))
			{
				return 324215364;
			}
			if (func_126(iParam0, 25))
			{
				return 324215364;
			}
			break;
		
		case 24:
			if (func_128(iParam0, 0))
			{
				return 487013001;
			}
			if (func_128(iParam0, 1))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 2))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 3))
			{
				return 487013001;
			}
			if (func_128(iParam0, 4))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 5))
			{
				return 487013001;
			}
			if (func_128(iParam0, 6))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 7))
			{
				return 487013001;
			}
			if (func_128(iParam0, 8))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 9))
			{
				return -1074790547;
			}
			if (func_128(iParam0, 10))
			{
				return 487013001;
			}
			if (func_126(iParam0, 25))
			{
				return 487013001;
			}
			break;
	}
	return 453432689;
}

int func_594(int iParam0)
{
	iParam0 = iParam0;
	return 1593441988;
}

int func_595(int iParam0)
{
	switch (func_42())
	{
		case 31:
			if (func_128(iParam0, 16))
			{
				return 205991906;
			}
			if ((func_128(iParam0, 17) || func_128(iParam0, 18)) || func_128(iParam0, 21))
			{
				return -1357824103;
			}
			if (func_128(iParam0, 19) || func_128(iParam0, 20))
			{
				return -1654528753;
			}
			break;
		
		case 32:
			if (func_128(iParam0, 16) || func_128(iParam0, 17))
			{
				return 205991906;
			}
			if ((func_128(iParam0, 20) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -1357824103;
			}
			if ((func_128(iParam0, 18) || func_128(iParam0, 19)) || func_128(iParam0, 21))
			{
				return -1654528753;
			}
			break;
		
		case 33:
			if (func_128(iParam0, 16))
			{
				return 205991906;
			}
			if (((func_128(iParam0, 18) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 23))
			{
				return -1357824103;
			}
			if ((func_128(iParam0, 17) || func_128(iParam0, 21)) || func_128(iParam0, 22))
			{
				return -1654528753;
			}
			break;
		
		case 34:
			if (func_128(iParam0, 16))
			{
				return 205991906;
			}
			if ((func_128(iParam0, 18) || func_128(iParam0, 20)) || func_128(iParam0, 22))
			{
				return -1357824103;
			}
			if (func_128(iParam0, 17) || func_128(iParam0, 21))
			{
				return -1654528753;
			}
			if (func_128(iParam0, 19))
			{
				return 1593441988;
			}
			if (func_128(iParam0, 23))
			{
				return -1660422300;
			}
			break;
		
		case 35:
			if (func_128(iParam0, 16))
			{
				return 205991906;
			}
			if ((func_128(iParam0, 18) || func_128(iParam0, 19)) || func_128(iParam0, 21))
			{
				return -1357824103;
			}
			if ((func_128(iParam0, 20) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -1654528753;
			}
			if (func_128(iParam0, 17))
			{
				return 1593441988;
			}
			break;
		
		case 36:
			if (func_128(iParam0, 16))
			{
				return 205991906;
			}
			if (func_128(iParam0, 22) || func_128(iParam0, 23))
			{
				return -1357824103;
			}
			if (func_128(iParam0, 21))
			{
				return -1654528753;
			}
			if (((func_128(iParam0, 17) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20))
			{
				return 1593441988;
			}
			break;
	}
	return 324215364;
}

int func_596(int iParam0)
{
	switch (func_42())
	{
		case 7:
			if ((func_586(iParam0, 0) || func_586(iParam0, 3)) || func_586(iParam0, 6))
			{
				return 487013001;
			}
			if (((func_586(iParam0, 1) || func_586(iParam0, 4)) || func_586(iParam0, 7)) || func_586(iParam0, 9))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 2) || func_586(iParam0, 5)) || func_586(iParam0, 8))
			{
				return -1063057011;
			}
			break;
		
		case 8:
			if (((func_586(iParam0, 0) || func_586(iParam0, 3)) || func_586(iParam0, 6)) || func_586(iParam0, 9))
			{
				return 487013001;
			}
			if ((func_586(iParam0, 1) || func_586(iParam0, 4)) || func_586(iParam0, 7))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 2) || func_586(iParam0, 5)) || func_586(iParam0, 8))
			{
				return -1063057011;
			}
			break;
		
		case 9:
			if (((func_586(iParam0, 0) || func_586(iParam0, 3)) || func_586(iParam0, 5)) || func_586(iParam0, 8))
			{
				return 487013001;
			}
			if ((func_586(iParam0, 1) || func_586(iParam0, 6)) || func_586(iParam0, 9))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 2) || func_586(iParam0, 4)) || func_586(iParam0, 7))
			{
				return -1063057011;
			}
			break;
		
		case 10:
			if ((((func_586(iParam0, 2) || func_586(iParam0, 4)) || func_586(iParam0, 6)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
			{
				return 487013001;
			}
			if (func_586(iParam0, 1) || func_586(iParam0, 7))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 0) || func_586(iParam0, 3)) || func_586(iParam0, 5))
			{
				return -1063057011;
			}
			break;
		
		case 11:
			if ((func_586(iParam0, 1) || func_586(iParam0, 5)) || func_586(iParam0, 9))
			{
				return 487013001;
			}
			if (((func_586(iParam0, 0) || func_586(iParam0, 2)) || func_586(iParam0, 6)) || func_586(iParam0, 7))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 3) || func_586(iParam0, 4)) || func_586(iParam0, 8))
			{
				return -1063057011;
			}
			break;
		
		case 12:
			if ((func_586(iParam0, 1) || func_586(iParam0, 5)) || func_586(iParam0, 8))
			{
				return 487013001;
			}
			if (((func_586(iParam0, 0) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 9))
			{
				return -2084633992;
			}
			if ((func_586(iParam0, 4) || func_586(iParam0, 6)) || func_586(iParam0, 7))
			{
				return -1063057011;
			}
			break;
	}
	return -1063057011;
}

int func_597(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 2017895192;
				
				case 1:
					return 736523883;
				
				case 2:
					return 324215364;
				
				case 3:
					return 2017895192;
				
				case 4:
					return 736523883;
				
				case 5:
					return 324215364;
				
				case 6:
					return 2017895192;
				
				case 7:
					return 736523883;
				
				case 8:
					return 324215364;
				
				case 9:
					return 2017895192;
				
				case 10:
					return 736523883;
				
				case 11:
					return 324215364;
				
				case 12:
					return 2017895192;
				
				case 13:
					return 736523883;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1074790547;
				
				case 1:
					return 487013001;
				
				case 2:
					return 487013001;
				
				case 3:
					return 487013001;
				
				case 4:
					return -1074790547;
				
				case 5:
					return -1074790547;
				
				case 6:
					return -1074790547;
				
				case 7:
					return -1074790547;
				
				case 8:
					return 487013001;
				
				case 9:
					return 487013001;
				
				case 10:
					return 487013001;
				
				case 11:
					return -1074790547;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1074790547;
				
				case 1:
					return 487013001;
				
				case 2:
					return -1074790547;
				
				case 3:
					return -1074790547;
				
				case 4:
					return -1074790547;
				
				case 5:
					return -1074790547;
				
				case 6:
					return -1074790547;
				
				case 7:
					return 487013001;
				
				case 8:
					return 487013001;
				
				case 9:
					return 487013001;
				
				case 10:
					return -1074790547;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 736523883;
				
				case 1:
					return 736523883;
				
				case 2:
					return 736523883;
				
				case 3:
					return 324215364;
				
				case 4:
					return 324215364;
				
				case 5:
					return 324215364;
				
				case 6:
					return 736523883;
				
				case 7:
					return 324215364;
				
				case 8:
					return 736523883;
				
				case 9:
					return 324215364;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 736523883;
				
				case 1:
					return 736523883;
				
				case 2:
					return 453432689;
				
				case 3:
					return 736523883;
				
				case 4:
					return 453432689;
				
				case 5:
					return 736523883;
				
				case 6:
					return 453432689;
				
				case 7:
					return 453432689;
				
				case 8:
					return 736523883;
				
				case 9:
					return 453432689;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 736523883;
				
				case 1:
					return 736523883;
				
				case 2:
					return 324215364;
				
				case 3:
					return 324215364;
				
				case 4:
					return 736523883;
				
				case 5:
					return 736523883;
				
				case 6:
					return 324215364;
				
				case 7:
					return 736523883;
				
				case 8:
					return 324215364;
				
				case 9:
					return 736523883;
				
				default:
			}
			break;
	}
	return 453432689;
}

var func_598(int iParam0)
{
	if ((((func_129(iParam0, 10) || func_129(iParam0, 11)) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
	{
		if (func_79(0))
		{
			return Global_1575008;
		}
	}
	if ((((((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 5)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_2(iParam0, 13)) || func_2(iParam0, 14))
	{
		return Global_1575003;
	}
	if (func_128(iParam0, 24))
	{
		return Global_1575000;
	}
	return Global_1575003;
}

void func_599(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

void func_600(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
	unk_0x17EAEF3CBDBACF1B(iParam1, -549,4377f, 285,6847f, 72,18763f, -577,2286f, 288,7755f, 88,17664f, 12f, 0, 0);
	unk_0xAFF39FB306F8E232(iParam1, 46, true);
}

void func_601(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0x545E1397F38D9D5A(iParam1, 3);
	func_618(iParam0, iParam1, 1);
	unk_0xD458AC1C1D29C3B4(iParam1, Global_262145.f_18000, 0);
}

void func_602(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

void func_603(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

void func_604(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

void func_605(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	if (!func_123(iParam0, 2))
	{
		unk_0x262EF6C6306BEA6C(iParam1, 736523883, 9999999, false, true);
	}
	unk_0x6D80F1AEBA734886(iParam1, 0);
}

void func_606(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_607(iParam0), 9999999, false, true);
	unk_0x6D80F1AEBA734886(iParam1, 0);
}

int func_607(int iParam0)
{
	if (((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 28)) || func_130(iParam0, 30))
	{
		return -270015777;
	}
	return 584646201;
}

void func_608(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

void func_609(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

void func_610(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	if (func_128(iParam0, 25))
	{
		unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	}
	else if (!func_128(iParam0, 24))
	{
		unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, false, true);
		unk_0xAFF39FB306F8E232(iParam1, 43, true);
	}
	if (func_128(iParam0, 24))
	{
		unk_0x6D80F1AEBA734886(iParam1, 0);
	}
}

void func_611(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
	unk_0x9FA191B317572861(iParam1, 10f);
}

void func_612(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

void func_613(int iParam0, int iParam1, bool bParam2)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	if (!bParam2)
	{
		unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	}
	else
	{
		unk_0x262EF6C6306BEA6C(iParam1, -1716189206, 9999999, false, true);
		unk_0xAFF39FB306F8E232(iParam1, 46, true);
	}
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	func_618(iParam0, iParam1, 1);
	if (func_130(iParam0, 19))
	{
		unk_0x9FA191B317572861(iParam1, 10f);
	}
	func_614(iParam1);
}

void func_614(int iParam0)
{
	switch (func_42())
	{
		case 13:
			vVar0 = { 1577,207f, 3621,819f, 37,23136f };
			vVar3 = { 1611,548f, 3560,857f, 40,73133f };
			fVar6 = 18f;
			break;
		
		case 14:
			vVar0 = { 2320,627f, 2568,336f, 44,66767f };
			vVar3 = { 2319,978f, 2588,174f, 50,64766f };
			fVar6 = 20f;
			break;
		
		case 15:
			vVar0 = { 1354,501f, 3280,951f, 35,46497f };
			vVar3 = { 1359,352f, 3259,324f, 42,84805f };
			fVar6 = 20f;
			break;
		
		case 16:
			vVar0 = { 600,2188f, -469,671f, 23,3506f };
			vVar3 = { 605,687f, -407,8969f, 28,75747f };
			fVar6 = 14f;
			break;
		
		case 17:
			vVar0 = { -442,5967f, -2167,585f, 8,318186f };
			vVar3 = { -442,6629f, -2183,952f, 14,31821f };
			fVar6 = 14f;
			break;
		
		case 18:
			vVar0 = { -1090,925f, -1652,443f, 2,398428f };
			vVar3 = { -1107,525f, -1665,33f, 13,65601f };
			fVar6 = 10f;
			break;
	}
	unk_0x17EAEF3CBDBACF1B(iParam0, vVar0, vVar3, fVar6, 0, 0);
}

void func_615(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0x25C5402CC10F76CD(iParam1, true);
	if (func_123(iParam0, 9))
	{
		unk_0x00A6D36F507FD6EA(iParam1, 0);
		unk_0x4E885A246A9D983A(iParam1, 281, true);
		unk_0x722454E43E496678(iParam1, 1000);
		unk_0xD458AC1C1D29C3B4(iParam1, 1000, 0);
		unk_0x33CE5A9E32EA10B2(iParam1, true);
		unk_0xAA6B3A4292417750(iParam1, false, true, false, false, false, false, 0, false);
	}
}

void func_616(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, true, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	func_618(iParam0, iParam1, 1);
}

void func_617(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xE733200EEF894A35(iParam1, 1);
	}
	unk_0x11AD11297DC58CC7(iParam1, true);
	if (!bParam2)
	{
		unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	}
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	if (bParam2)
	{
	}
	if (!bParam2)
	{
	}
	if (func_154(iParam0, 3))
	{
		unk_0x262EF6C6306BEA6C(iParam1, -494615257, 9999999, false, true);
	}
	else if (((((((((((func_154(iParam0, 4) || func_154(iParam0, 5)) || func_129(iParam0, 28)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29)) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
	{
		unk_0x262EF6C6306BEA6C(iParam1, -2084633992, 9999999, false, true);
	}
	else
	{
		unk_0x262EF6C6306BEA6C(iParam1, 736523883, 9999999, false, true);
	}
}

void func_618(int iParam0, int iParam1, bool bParam2)
{
	fVar0 = 1f;
	iVar1 = 200;
	if (func_619(iParam0))
	{
		return;
	}
	if (func_43() == 1)
	{
		unk_0x298903DD96203C2C(iParam1, Global_262145.f_17892);
		unk_0x29CD9554726C7577(iParam1, Global_262145.f_17898);
		unk_0x083F03A847B640E9(iParam1, 0);
		unk_0xAFF39FB306F8E232(iParam1, 24, false);
		unk_0xAFF39FB306F8E232(iParam1, 49, true);
	}
	else if (func_43() == 2)
	{
		unk_0x298903DD96203C2C(iParam1, Global_262145.f_17893);
		unk_0x29CD9554726C7577(iParam1, Global_262145.f_17899);
		unk_0xAFF39FB306F8E232(iParam1, 24, false);
		unk_0xAFF39FB306F8E232(iParam1, 49, true);
	}
	else if (func_43() == 3)
	{
		unk_0x298903DD96203C2C(iParam1, Global_262145.f_17894);
		unk_0x29CD9554726C7577(iParam1, Global_262145.f_17900);
		unk_0xAFF39FB306F8E232(iParam1, 24, false);
		unk_0xAFF39FB306F8E232(iParam1, 49, true);
	}
	else if (func_557(iParam0))
	{
		unk_0x298903DD96203C2C(iParam1, 40);
	}
	if (bParam2)
	{
		if (func_43() == 1)
		{
			fVar0 = Global_262145.f_17895;
		}
		else if (func_43() == 2)
		{
			fVar0 = Global_262145.f_17896;
		}
		else if (func_43() == 3)
		{
			fVar0 = Global_262145.f_17897;
		}
		fVar2 = (100f + (fVar0 * IntToFloat((iVar1 - 100))));
		iVar1 = round(fVar2);
		unk_0xD458AC1C1D29C3B4(iParam1, iVar1, 0);
	}
}

int func_619(int iParam0)
{
	if ((((func_129(iParam0, 18) || func_154(iParam0, 6)) || func_2(iParam0, 13)) || func_587(iParam0, 0)) || func_587(iParam0, 3))
	{
		return 1;
	}
	return 0;
}

void func_620(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	if (func_106() == 36 || func_106() == 39)
	{
		unk_0x004A9F3F2E1E4B43(iParam1, 1);
	}
}

void func_621(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_623(iParam0);
	bVar1 = false;
	if (bParam2)
	{
		unk_0xE733200EEF894A35(iParam1, 1);
	}
	if (func_147(iParam0) != 8)
	{
		if (((((((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15)) || func_129(iParam0, 10)) || func_129(iParam0, 11)) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
		{
			bVar1 = true;
			unk_0x9FA191B317572861(iParam1, 15f);
		}
	}
	if ((func_154(iParam0, 7) || func_154(iParam0, 8)) || func_154(iParam0, 9))
	{
		unk_0xAA714ADDDC372E0F(iParam1, -1857128337);
	}
	if (func_578(iParam0, 16))
	{
		unk_0x4E885A246A9D983A(iParam1, 146, false);
		unk_0xAFF39FB306F8E232(iParam1, 53, true);
		unk_0x11AD11297DC58CC7(iParam1, true);
		unk_0xE8832A9E16A57A1F(iParam1, true, 1);
		unk_0x120A395B0ECB8EA5(iParam1, true);
	}
	else
	{
		unk_0x11AD11297DC58CC7(iParam1, bVar1);
	}
	if (!bParam2)
	{
		unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	}
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, false);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x298903DD96203C2C(iParam1, iVar0);
	if (((func_129(iParam0, 14) || func_129(iParam0, 16)) || func_129(iParam0, 15)) || func_129(iParam0, 17))
	{
		unk_0x66ADF7B538DC60DC(iParam1, 1f);
		unk_0x7D9DF2375774CFE5(iParam1, 1f);
		unk_0x67415F01577A142E(iParam1, 17, 2,2f);
		unk_0xFADC0A217229F6B5(iParam1, false);
	}
	else
	{
		unk_0xFADC0A217229F6B5(iParam1, true);
	}
	if (func_129(iParam0, 13))
	{
		unk_0xCA84BD02FBA0BEA4(iParam1, false, func_622(iParam0));
	}
	else
	{
		unk_0xCA84BD02FBA0BEA4(iParam1, true, func_622(iParam0));
	}
	if (((func_154(iParam0, 10) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
	{
		unk_0x11AD11297DC58CC7(iParam1, true);
		unk_0x4E885A246A9D983A(iParam1, 42, true);
		unk_0x4E885A246A9D983A(iParam1, 395, true);
		unk_0x4E885A246A9D983A(iParam1, 372, true);
		unk_0xD69ADA1AA251FFD6(iParam1, 0);
		unk_0x4E885A246A9D983A(iParam1, 46, true);
		unk_0xCAC78D14D05349E7(iParam1, true);
		unk_0x561C1BF2863AB0B1(iParam1);
	}
	if ((((((((((((((((((((((((((((((((((func_129(iParam0, 5) || func_129(iParam0, 14)) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17)) || func_129(iParam0, 18)) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 6)) || func_154(iParam0, 7)) || func_154(iParam0, 8)) || func_154(iParam0, 9)) || func_587(iParam0, 0)) || func_587(iParam0, 1)) || func_587(iParam0, 2)) || func_587(iParam0, 3)) || func_587(iParam0, 4)) || func_587(iParam0, 5)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13)) || func_2(iParam0, 13)) || func_2(iParam0, 14)) || func_130(iParam0, 20)) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
	{
		unk_0xAFF39FB306F8E232(iParam1, 2, true);
	}
}

var func_622(int iParam0)
{
	iParam0 = iParam0;
	return Global_1575003;
}

int func_623(int iParam0)
{
	if (func_129(iParam0, 13))
	{
		return 0;
	}
	if (func_43() >= 1)
	{
		return Global_262145.f_17892;
	}
	else if (func_43() >= 2)
	{
		return Global_262145.f_17893;
	}
	else if (func_43() >= 3)
	{
		return Global_262145.f_17894;
	}
	return Global_262145.f_17892;
}

void func_624(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

int func_625(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_639(func_122(iParam0), func_640(iParam0)))
		{
			if (func_114(func_122(iParam0)))
			{
				if (func_637(&(Local_933.f_73[iParam0]), func_122(iParam0), func_638(iParam0), func_659(iParam0), func_640(iParam0), 1, 1, 1))
				{
					return 1;
				}
			}
		}
	}
	else if (Local_933.f_514 == -1 && Local_933.f_515 == -1)
	{
		if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
		{
			Local_933.f_508 = iParam0;
			if (func_179(Local_933.f_509))
			{
				func_632(iParam0);
			}
			else if (func_627(iParam0))
			{
				if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
				{
					if (func_131(iParam0))
					{
						func_119(iParam0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_626(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, bParam9);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam7)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_627(int iParam0)
{
	if (!func_631(iParam0))
	{
		return 1;
	}
	if (!unk_0x31609A585163CBAC(iLocal_2232))
	{
		iLocal_2232 = unk_0x0D1736C2E221BCEA(func_629(func_630(iParam0)), func_628(func_630(iParam0)));
	}
	else if (!unk_0x3C4C57B70481C643(iLocal_2232))
	{
		return 1;
	}
	return 0;
}

char* func_628(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_629(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984,1552f, -95,3662f, 75,9326f;
		
		case 0:
			return 443,2281f, -984,0744f, 29,6896f;
		
		case 2:
			return -1216,762f, -333,0008f, 36,8508f;
		
		case 3:
			return 145,4168f, -1039,277f, 28,4379f;
		
		case 4:
			return 309,7465f, -277,6442f, 53,2346f;
		
		case 5:
			return -355,4359f, -48,5326f, 48,1064f;
		
		case 6:
			return -109,4503f, 6467,768f, 30,4388f;
		
		case 7:
			return 1179,745f, 2706,985f, 37,1578f;
		
		case 8:
			return -2962,591f, 478,238f, 14,7669f;
		
		case 9:
			return -556,5089f, 286,3181f, 81,1763f;
		
		case 10:
			return -76,6618f, 6222,191f, 32,2412f;
		
		case 11:
			return -100,7106f, 6205,7f, 30,0499f;
		
		case 12:
			return -125,6972f, 6172,923f, 30,0499f;
		
		case 13:
			return -162,4785f, 6155,384f, 30,0499f;
		
		case 14:
			return 2449,785f, 4983,825f, 45,8106f;
		
		case 15:
			return -1426,362f, 6754,506f, 11,7821f;
		
		case 16:
			return -583,2097f, -1599,302f, 26,3052f;
		
		case 17:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853,625f, 3687,826f, 33,2671f;
		
		case 22:
			return -447,5651f, 6013,988f, 30,7164f;
		
		case 23:
			return -28,1023f, -688,8687f, 34,4437f;
		
		case 24:
			return -40,2938f, -1097,321f, 25,4223f;
		
		case 27:
			return -1074,853f, -250,3996f, 36,7388f;
		
		case 25:
			return 982,233f, -2160,382f, 28,4761f;
		
		case 26:
			return -630,4205f, -236,7843f, 37,057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078,561f, -1678,615f, 3,5752f;
		
		case 30:
			return 479,88f, -1318,57f, 28,2f;
		
		case 31:
			return 1392,512f, 3603,185f, 38,5f;
		
		case 32:
			return 105,4557f, -745,4835f, 44,7548f;
		
		case 33:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 34:
			return 1087,195f, -1988,445f, 28,649f;
		
		case 35:
			return -583,1606f, -282,3967f, 35,394f;
		
		case 36:
			return 3053,565f, -4653,67f, 5,0773f;
		
		case 37:
			return 3058,002f, -4700,8f, 5,0773f;
		
		case 38:
			return 3080,619f, -4772,69f, 5,0773f;
		
		case 39:
			return 3088,469f, -4708,33f, 20,567f;
		
		case 40:
			return 3085,222f, -4690,66f, 26,2522f;
		
		case 41:
			return 3092,459f, -4711,389f, 26,2657f;
		
		case 42:
			return 2329,242f, 2571,494f, 45,6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_630(int iParam0)
{
	if (((((((((((((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 2)) || func_126(iParam0, 3)) || func_126(iParam0, 4)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7)) || func_126(iParam0, 8)) || func_126(iParam0, 9)) || func_126(iParam0, 10)) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
	{
		return 9;
	}
	return 9;
}

int func_631(int iParam0)
{
	if (((((((((((((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 2)) || func_126(iParam0, 3)) || func_126(iParam0, 4)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7)) || func_126(iParam0, 8)) || func_126(iParam0, 9)) || func_126(iParam0, 10)) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
	{
		return 1;
	}
	return 0;
}

void func_632(int iParam0)
{
	switch (Local_933.f_513)
	{
		case 0:
			if (func_636(iParam0))
			{
				Local_933.f_509 = { func_635(iParam0, Local_933.f_3, 0) };
				Local_933.f_512 = func_634(iParam0, Local_933.f_3);
			}
			else
			{
				Local_933.f_513++;
			}
			break;
		
		case 1:
			if (func_106() == 33)
			{
				vVar0 = { func_443(func_106(), Local_933.f_3, 1, 0, 0) };
				vVar0 = { func_633(iParam0, vVar0) };
			}
			else if (unk_0xE5DBF9B6126856CA(Local_933.f_33[0]))
			{
				if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[0]), 0))
				{
					vVar0 = { func_443(func_106(), Local_933.f_3, 0, 0, 0) };
				}
			}
			Var3.f_5 = 1115815936;
			Var3.f_13 = 2;
			Var3.f_20 = 2;
			Var3.f_32 = -1082130432;
			Var3.f_34 = 1;
			Var3 = { vVar0 };
			Var3.f_5 = 10f;
			Var3.f_20[0] = 0f;
			fVar38 = 10f;
			if (((((((((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13)) || func_2(iParam0, 13)) || func_2(iParam0, 14))
			{
				fVar38 = 50f;
				Var3.f_20[0] = 20f;
			}
			if ((func_129(iParam0, 10) || func_129(iParam0, 10)) || func_129(iParam0, 10))
			{
				fVar38 = 20f;
				Var3.f_20[0] = 10f;
			}
			if (func_148(iParam0))
			{
				fVar38 = 200f;
				Var3.f_20[0] = 100f;
			}
			if (func_466(vVar0, fVar38, &(Local_933.f_509), &(Local_933.f_512), &Var3))
			{
				Local_933.f_513++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_633(int iParam0, vector3 vParam1)
{
	if (func_123(iParam0, 20))
	{
		return vParam1 + Vector(0f, 100f, 0f);
	}
	else if (func_123(iParam0, 21))
	{
		return vParam1 + Vector(0f, -100f, 100f);
	}
	else if (func_123(iParam0, 22))
	{
		return vParam1 + Vector(0f, -100f, -100f);
	}
	return vParam1;
}

float func_634(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65:
			switch (iParam0)
			{
				case 0:
					return 118,593f;
				
				case 1:
					return 7,592f;
				
				case 2:
					return 197,192f;
				
				case 3:
					return 253,592f;
				
				case 4:
					return 92,191f;
				
				case 5:
					return 267,191f;
				
				case 6:
					return 350,9999f;
				
				case 7:
					return 336,591f;
				
				case 8:
					return 322,99f;
				
				case 9:
					return 143,99f;
				
				case 10:
					return 189,589f;
				
				case 11:
					return 9,989f;
				
				case 12:
					return 340,5996f;
				
				case 13:
					return 280,997f;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 0:
					return 178f;
				
				case 1:
					return 340,599f;
				
				case 2:
					return 71,199f;
				
				case 3:
					return 190,198f;
				
				case 4:
					return 28,798f;
				
				case 5:
					return 74,198f;
				
				case 6:
					return 50,198f;
				
				case 7:
					return 288,998f;
				
				case 8:
					return 70,597f;
				
				case 9:
					return 204,997f;
				
				case 10:
					return 128,997f;
				
				case 11:
					return 311,996f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return 253,2f;
				
				case 1:
					return 134,199f;
				
				case 2:
					return 327,199f;
				
				case 3:
					return 76,199f;
				
				case 4:
					return 356,199f;
				
				case 5:
					return 356,199f;
				
				case 6:
					return 280,398f;
				
				case 7:
					return 299,9983f;
				
				case 8:
					return 129,797f;
				
				case 9:
					return 205,797f;
				
				case 10:
					return 38,797f;
				
				default:
			}
			break;
		
		case 68:
			switch (iParam0)
			{
				case 0:
					return 133,999f;
				
				case 1:
					return 200,799f;
				
				case 2:
					return 234,999f;
				
				case 3:
					return 37,799f;
				
				case 4:
					return 194,198f;
				
				case 5:
					return 264,4f;
				
				case 6:
					return 78,2f;
				
				case 7:
					return 39,997f;
				
				case 8:
					return 227,797f;
				
				case 9:
					return 131,797f;
				
				default:
			}
			break;
		
		case 69:
			switch (iParam0)
			{
				case 0:
					return 161,249f;
				
				case 1:
					return 260,7989f;
				
				case 2:
					return 98,7984f;
				
				case 3:
					return 333,9988f;
				
				case 4:
					return 33,7983f;
				
				case 5:
					return 164,5978f;
				
				case 6:
					return 215,5976f;
				
				case 7:
					return 51,648f;
				
				case 8:
					return 230,247f;
				
				case 9:
					return 143,6f;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam0)
			{
				case 0:
					return 309,598f;
				
				case 1:
					return 81,199f;
				
				case 2:
					return 322,399f;
				
				case 3:
					return 262,799f;
				
				case 4:
					return 64,799f;
				
				case 5:
					return 315,998f;
				
				case 6:
					return 209,999f;
				
				case 7:
					return 53,6f;
				
				case 8:
					return 140,598f;
				
				case 9:
					return 308,997f;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam0)
			{
				case 0:
					return 351,5925f;
				
				case 1:
					return 340,9953f;
				
				case 2:
					return 170,1956f;
				
				case 3:
					return 74,3906f;
				
				case 4:
					return 288,6545f;
				
				case 5:
					return 236,993f;
				
				case 6:
					return 56,393f;
				
				case 7:
					return 22,794f;
				
				case 8:
					return 305,7935f;
				
				case 9:
					return 74,3906f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam0)
			{
				case 0:
					return 246,1969f;
				
				case 1:
					return 199,9968f;
				
				case 2:
					return 131,7966f;
				
				case 3:
					return 342,9962f;
				
				case 4:
					return 342,9962f;
				
				case 5:
					return 199,1957f;
				
				case 6:
					return 111,9955f;
				
				case 7:
					return 292,195f;
				
				case 8:
					return 90,9943f;
				
				case 9:
					return 264,7939f;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 0:
					return 117,396f;
				
				case 1:
					return 147,996f;
				
				case 2:
					return 326,3987f;
				
				case 3:
					return 88,8f;
				
				case 4:
					return 137,995f;
				
				case 5:
					return 317,395f;
				
				case 6:
					return 276,194f;
				
				case 7:
					return 248,194f;
				
				case 8:
					return 76,794f;
				
				case 9:
					return 332,193f;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 0:
					return 186,398f;
				
				case 1:
					return 75,799f;
				
				case 2:
					return 115f;
				
				case 3:
					return 217,797f;
				
				case 4:
					return 41,797f;
				
				case 5:
					return 90,597f;
				
				case 6:
					return 279,397f;
				
				case 7:
					return 165,396f;
				
				case 8:
					return 310,2f;
				
				case 9:
					return 125,999f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return 71,5984f;
				
				case 1:
					return 311,2f;
				
				case 2:
					return 317,9977f;
				
				case 3:
					return 149,1971f;
				
				case 4:
					return 42,1967f;
				
				case 5:
					return 221,5965f;
				
				case 6:
					return 234,3965f;
				
				case 7:
					return 45,9964f;
				
				case 8:
					return 357,7963f;
				
				case 9:
					return 170,9958f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return 47,196f;
				
				case 1:
					return 159,996f;
				
				case 2:
					return 71,799f;
				
				case 3:
					return 47,196f;
				
				case 4:
					return 73,995f;
				
				case 5:
					return 253,795f;
				
				case 6:
					return -0,005f;
				
				case 7:
					return 228,198f;
				
				case 8:
					return 55,998f;
				
				case 9:
					return 278,794f;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam0)
			{
				case 0:
					return 308,7996f;
				
				case 1:
					return 191,1995f;
				
				case 2:
					return 73,7993f;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam0)
			{
				case 0:
					return 237,7995f;
				
				case 1:
					return 84,6f;
				
				case 2:
					return 9f;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam0)
			{
				case 0:
					return 315,3997f;
				
				case 1:
					return 89,7993f;
				
				case 2:
					return 155,999f;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam0)
			{
				case 0:
					return 203,1995f;
				
				case 1:
					return 330,799f;
				
				case 2:
					return 75,1992f;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam0)
			{
				case 0:
					return 31,4f;
				
				case 1:
					return 231,3997f;
				
				case 2:
					return 155,7997f;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 0:
					return 213,5968f;
				
				case 1:
					return 213,5968f;
				
				case 2:
					return 177,187f;
				
				case 3:
					return 245,39f;
				
				case 4:
					return 226,3896f;
				
				case 5:
					return 366,9892f;
				
				case 6:
					return 50,3889f;
				
				case 7:
					return 314,3885f;
				
				case 8:
					return 31,1882f;
				
				case 9:
					return 343,7866f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 0:
					return 276,1964f;
				
				case 1:
					return 56,996f;
				
				case 2:
					return 102,5959f;
				
				case 3:
					return 178,3954f;
				
				case 4:
					return 175,9948f;
				
				case 5:
					return 215,9942f;
				
				case 6:
					return 99,5941f;
				
				case 7:
					return 79,5935f;
				
				case 8:
					return 350,1926f;
				
				case 9:
					return 247,192f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 0:
					return 237,1955f;
				
				case 1:
					return 323,9979f;
				
				case 2:
					return 310,7977f;
				
				case 3:
					return 75,1972f;
				
				case 4:
					return 60,1969f;
				
				case 5:
					return -3,804f;
				
				case 6:
					return 322,9951f;
				
				case 7:
					return 98,5946f;
				
				case 8:
					return 286,3945f;
				
				case 9:
					return 105,7941f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 0:
					return 196,7989f;
				
				case 1:
					return 178,5989f;
				
				case 2:
					return 217,5988f;
				
				case 3:
					return 244,1987f;
				
				case 4:
					return 320,1978f;
				
				case 5:
					return 201,1976f;
				
				case 6:
					return 233,5962f;
				
				case 7:
					return 187,3962f;
				
				case 8:
					return 78,1959f;
				
				case 9:
					return 136,3954f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return 165,1995f;
				
				case 1:
					return 117,5991f;
				
				case 2:
					return 271,1958f;
				
				case 3:
					return 308,5968f;
				
				case 4:
					return 119,7964f;
				
				case 5:
					return 21,394f;
				
				case 6:
					return 23,394f;
				
				case 7:
					return 307,3937f;
				
				case 8:
					return 124,1931f;
				
				case 9:
					return 175,9927f;
				
				case 10:
					return 356,3924f;
				
				case 11:
					return 298,1915f;
				
				case 12:
					return 332,9909f;
				
				case 13:
					return 126,1903f;
				
				case 14:
					return 161,5894f;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam0)
			{
				case 0:
					return 228,399f;
				
				case 1:
					return 277,598f;
				
				case 2:
					return 150,198f;
				
				case 3:
					return 150,198f;
				
				case 4:
					return 308,5984f;
				
				case 5:
					return 353,398f;
				
				case 6:
					return 141,597f;
				
				case 7:
					return 326,797f;
				
				case 8:
					return 67,997f;
				
				case 9:
					return 237,596f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam0)
			{
				case 0:
					return 301,398f;
				
				case 1:
					return 140,598f;
				
				case 2:
					return 93,8f;
				
				case 3:
					return 164f;
				
				case 4:
					return 2,399f;
				
				case 5:
					return 40,796f;
				
				case 6:
					return 188,599f;
				
				case 7:
					return 266,597f;
				
				case 8:
					return 266,597f;
				
				case 9:
					return 151,797f;
				
				case 10:
					return 334,997f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 0:
					return 354,9995f;
				
				case 1:
					return 184,398f;
				
				case 2:
					return 280,198f;
				
				case 3:
					return 274,598f;
				
				case 4:
					return 97,597f;
				
				case 5:
					return 251,397f;
				
				case 6:
					return 73,597f;
				
				case 7:
					return 53,797f;
				
				case 8:
					return 224,796f;
				
				case 9:
					return 309,9974f;
				
				case 10:
					return 275,396f;
				
				case 11:
					return 97,396f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 0:
					return 0f;
				
				case 1:
					return 321,198f;
				
				case 2:
					return 121,598f;
				
				case 3:
					return 305,197f;
				
				case 4:
					return 357,5988f;
				
				case 5:
					return 190,195f;
				
				case 6:
					return 190,195f;
				
				case 7:
					return 245,995f;
				
				case 8:
					return 339,795f;
				
				case 9:
					return 266,9994f;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam0)
			{
				case 0:
					return 14,4f;
				
				case 1:
					return 325,6f;
				
				case 2:
					return 142,399f;
				
				case 3:
					return 142,399f;
				
				case 4:
					return 219,199f;
				
				case 5:
					return 21,799f;
				
				case 6:
					return 339,799f;
				
				case 7:
					return 360,3984f;
				
				case 8:
					return 157,198f;
				
				case 9:
					return 39,598f;
				
				case 10:
					return 229,997f;
				
				case 11:
					return 240,199f;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam0)
			{
				case 0:
					return 160,99f;
				
				case 1:
					return 20,992f;
				
				case 2:
					return 32,795f;
				
				case 3:
					return 215,195f;
				
				case 4:
					return 254,794f;
				
				case 5:
					return 147,989f;
				
				case 6:
					return 360,994f;
				
				case 7:
					return 245,593f;
				
				case 8:
					return 279,391f;
				
				case 9:
					return 301,989f;
				
				case 10:
					return 269,59f;
				
				case 13:
					return 269,59f;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam0)
			{
				case 0:
					return 177,748f;
				
				case 1:
					return 161,148f;
				
				case 2:
					return 301,798f;
				
				case 3:
					return 114,597f;
				
				case 4:
					return 219,997f;
				
				case 5:
					return 34,596f;
				
				case 6:
					return 178,396f;
				
				case 7:
					return 259,596f;
				
				case 8:
					return 70,796f;
				
				case 9:
					return 294,794f;
				
				case 10:
					return 96,794f;
				
				case 13:
					return 204,994f;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam0)
			{
				case 0:
					return 238,194f;
				
				case 1:
					return 306,9979f;
				
				case 2:
					return 189,199f;
				
				case 3:
					return 305,5971f;
				
				case 4:
					return 124,7966f;
				
				case 5:
					return 103,1964f;
				
				case 6:
					return 272,7961f;
				
				case 7:
					return 89,7956f;
				
				case 8:
					return 224,5954f;
				
				case 9:
					return 226,5954f;
				
				case 10:
					return 196,1946f;
				
				case 13:
					return 4,1942f;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam0)
			{
				case 0:
					return 295,5996f;
				
				case 1:
					return 288,3994f;
				
				case 2:
					return 185,5992f;
				
				case 3:
					return 185,5992f;
				
				case 4:
					return 355,399f;
				
				case 5:
					return 50,5988f;
				
				case 6:
					return 225,7983f;
				
				case 7:
					return 355,798f;
				
				case 8:
					return 320,7965f;
				
				case 9:
					return 139,5969f;
				
				case 10:
					return 189,196f;
				
				case 13:
					return 162,3952f;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 0:
					return 222,595f;
				
				case 1:
					return 77,996f;
				
				case 2:
					return 119,398f;
				
				case 3:
					return 311,198f;
				
				case 4:
					return 152,644f;
				
				case 5:
					return 39,996f;
				
				case 6:
					return 220,796f;
				
				case 7:
					return 0,396f;
				
				case 8:
					return 14,997f;
				
				case 9:
					return 195,596f;
				
				case 10:
					return 325,995f;
				
				case 13:
					return 78,995f;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 0:
					return 330,7985f;
				
				case 1:
					return 155,5989f;
				
				case 2:
					return 358,1984f;
				
				case 3:
					return 194,7981f;
				
				case 4:
					return 17,798f;
				
				case 5:
					return 205,5978f;
				
				case 6:
					return 106,3977f;
				
				case 7:
					return 325,1974f;
				
				case 8:
					return 158,1967f;
				
				case 9:
					return 134,7963f;
				
				case 10:
					return 204,9961f;
				
				case 13:
					return 300,7954f;
				
				default:
			}
			break;
		
		case 170:
			switch (iParam0)
			{
				case 0:
					return 40,3989f;
				
				case 1:
					return 51f;
				
				case 2:
					return 211,8f;
				
				case 3:
					return 272,599f;
				
				case 4:
					return 18,399f;
				
				case 5:
					return 131,7985f;
				
				case 6:
					return 260,1972f;
				
				case 7:
					return 12,998f;
				
				case 8:
					return 200,798f;
				
				case 9:
					return 284,9996f;
				
				case 10:
					return 174,995f;
				
				case 11:
					return 14,794f;
				
				case 12:
					return 281,593f;
				
				case 13:
					return 178,793f;
				
				case 14:
					return 175,1975f;
				
				case 15:
					return 111,192f;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 0:
					return 51,397f;
				
				case 1:
					return 235,397f;
				
				case 2:
					return 132,197f;
				
				case 3:
					return 220,997f;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 0:
					return 257,194f;
				
				case 1:
					return 270,795f;
				
				case 2:
					return 58,794f;
				
				case 3:
					return 168,7996f;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 0:
					return 177,598f;
				
				case 1:
					return 176,048f;
				
				case 2:
					return 179,7458f;
				
				case 3:
					return 355,999f;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 0:
					return 75,597f;
				
				case 1:
					return 246,5967f;
				
				case 2:
					return 247,7967f;
				
				case 3:
					return 343,5961f;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 0:
					return 79,1941f;
				
				case 1:
					return 344,8f;
				
				case 2:
					return 347,5934f;
				
				case 3:
					return 266,393f;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 0:
					return 169,3969f;
				
				case 1:
					return 349,5961f;
				
				case 2:
					return 288,395f;
				
				case 3:
					return 88,1947f;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 0:
					return 151,7961f;
				
				case 1:
					return 116,1975f;
				
				case 2:
					return 87,7956f;
				
				case 3:
					return 276,9952f;
				
				case 4:
					return 27,1934f;
				
				case 5:
					return 197,9933f;
				
				case 6:
					return 309,1855f;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam0)
			{
				case 0:
					return 24f;
				
				case 1:
					return 176,3995f;
				
				case 2:
					return 252,199f;
				
				case 3:
					return 209,999f;
				
				case 4:
					return 228,1983f;
				
				case 5:
					return 35,3981f;
				
				case 6:
					return 278,3979f;
				
				case 7:
					return 253,3969f;
				
				case 8:
					return 57,3967f;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 0:
					return 131,1976f;
				
				case 1:
					return 275,998f;
				
				case 2:
					return 32,7966f;
				
				case 3:
					return 218,5965f;
				
				case 4:
					return 22,5961f;
				
				case 5:
					return 131,7431f;
				
				case 6:
					return 172,7433f;
				
				case 7:
					return 331,5436f;
				
				case 8:
					return 151,744f;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam0)
			{
				case 0:
					return 33,1973f;
				
				case 1:
					return 114,9996f;
				
				case 2:
					return 344,1407f;
				
				case 3:
					return 180,1403f;
				
				case 4:
					return 218,7401f;
				
				case 5:
					return 89,5414f;
				
				case 6:
					return 270,1411f;
				
				case 7:
					return 13,9414f;
				
				case 8:
					return 321,939f;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 0:
					return 91,5981f;
				
				case 1:
					return 93,7468f;
				
				case 2:
					return 284,1459f;
				
				case 3:
					return 232,3455f;
				
				case 4:
					return 210,1445f;
				
				case 5:
					return 20,9444f;
				
				case 6:
					return 323,3442f;
				
				case 7:
					return 116,3439f;
				
				case 8:
					return 274,5428f;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 0:
					return 260,6468f;
				
				case 1:
					return 220,6458f;
				
				case 2:
					return 65,2439f;
				
				case 3:
					return 65,2439f;
				
				case 4:
					return 65,2439f;
				
				case 5:
					return 65,2439f;
				
				case 6:
					return 200,0433f;
				
				case 7:
					return 19,443f;
				
				case 8:
					return 33,2429f;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 0:
					return 28,5935f;
				
				case 1:
					return 85,5966f;
				
				case 2:
					return 113,7981f;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 0:
					return 338,5906f;
				
				case 1:
					return 38,1903f;
				
				case 2:
					return 65,1903f;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 0:
					return 52,74f;
				
				case 1:
					return 55,14f;
				
				case 2:
					return 349,1398f;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 0:
					return 339,3397f;
				
				case 1:
					return 25,5394f;
				
				case 2:
					return 25,5394f;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 0:
					return 215,1964f;
				
				case 1:
					return 133,994f;
				
				case 2:
					return 46,9938f;
				
				case 3:
					return 149,3951f;
				
				case 4:
					return 155,195f;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 0:
					return 185,3934f;
				
				case 1:
					return 256,1926f;
				
				case 2:
					return 232,1927f;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 0:
					return 152,3926f;
				
				case 1:
					return 178,1918f;
				
				case 2:
					return 99,5916f;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 0:
					return 333,5975f;
				
				case 1:
					return 301,7996f;
				
				case 2:
					return 52,583f;
				
				case 3:
					return 150,399f;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 0:
					return 318,9947f;
				
				case 1:
					return 102,9988f;
				
				case 2:
					return 208,5851f;
				
				case 3:
					return 211,5983f;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 0:
					return 283,5941f;
				
				case 1:
					return 4,7976f;
				
				case 2:
					return 179,1922f;
				
				case 3:
					return 341,7973f;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 0:
					return 318,3926f;
				
				case 1:
					return 30,5965f;
				
				case 2:
					return 123,9845f;
				
				case 3:
					return 16,3962f;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 0:
					return 41,591f;
				
				case 1:
					return 180,396f;
				
				case 2:
					return 261,5358f;
				
				case 3:
					return 168,7958f;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 0:
					return 86,7884f;
				
				case 1:
					return 266,7956f;
				
				case 2:
					return 48,1828f;
				
				case 3:
					return 133,5952f;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 0:
					return 319,1851f;
				
				case 1:
					return 328,394f;
				
				case 2:
					return 124,3895f;
				
				case 3:
					return 162,1932f;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 0:
					return 153,7915f;
				
				case 1:
					return 127,1929f;
				
				case 2:
					return 231,7406f;
				
				case 3:
					return 82,7923f;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 0:
					return 186,5901f;
				
				case 1:
					return 171,5924f;
				
				case 2:
					return 285,5967f;
				
				case 3:
					return 270,7922f;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 0:
					return 155,5889f;
				
				case 1:
					return 133,3921f;
				
				case 2:
					return 118,387f;
				
				case 3:
					return 217,5918f;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 0:
					return 256,399f;
				
				case 1:
					return 74,7915f;
				
				case 2:
					return 239,998f;
				
				case 3:
					return 227,7912f;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 0:
					return 37,598f;
				
				case 1:
					return 174,1912f;
				
				case 2:
					return 253,794f;
				
				case 3:
					return 153,1905f;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam0)
			{
				case 0:
					return 128,9998f;
				
				case 1:
					return 243,5899f;
				
				case 2:
					return 227,5986f;
				
				case 3:
					return 192,3898f;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam0)
			{
				case 0:
					return 283,7969f;
				
				case 1:
					return 252,3895f;
				
				case 2:
					return 357,1966f;
				
				case 3:
					return 153,7891f;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam0)
			{
				case 0:
					return 60,1946f;
				
				case 1:
					return 68,9887f;
				
				case 2:
					return 232,3944f;
				
				case 3:
					return 53,3887f;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam0)
			{
				case 0:
					return 277,3437f;
				
				case 1:
					return 220,3883f;
				
				case 2:
					return 324,3434f;
				
				case 3:
					return 309,588f;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam0)
			{
				case 0:
					return 96,3417f;
				
				case 1:
					return 120,3875f;
				
				case 2:
					return 341,7408f;
				
				case 3:
					return 309,1871f;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam0)
			{
				case 0:
					return 1,5405f;
				
				case 1:
					return 155,9866f;
				
				case 2:
					return 130,9383f;
				
				case 3:
					return 274,9863f;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam0)
			{
				case 0:
					return 221,5376f;
				
				case 1:
					return 112,5859f;
				
				case 2:
					return 283,9369f;
				
				case 3:
					return 237,7855f;
				
				default:
			}
			break;
		
		case 144:
			switch (iParam0)
			{
				case 0:
					return 175,3866f;
				
				case 1:
					return 325,9853f;
				
				case 2:
					return 111,9354f;
				
				case 3:
					return 133,5846f;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 0:
					return 198,6f;
				
				case 1:
					return 169,9999f;
				
				case 2:
					return 12,7997f;
				
				case 3:
					return 351,7997f;
				
				case 4:
					return 356,9995f;
				
				case 5:
					return 215,998f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 0:
					return 271,3464f;
				
				case 1:
					return 250,3462f;
				
				case 2:
					return 88,7975f;
				
				case 3:
					return 58,1976f;
				
				case 4:
					return 360,347f;
				
				case 5:
					return 360,347f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 0:
					return 186,1426f;
				
				case 1:
					return 124,9422f;
				
				case 2:
					return 324,5418f;
				
				case 3:
					return 267,1412f;
				
				case 4:
					return 194,941f;
				
				case 5:
					return 110,3405f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 0:
					return 137,599f;
				
				case 1:
					return 152,5986f;
				
				case 2:
					return 264,3982f;
				
				case 3:
					return 70,5979f;
				
				case 4:
					return 1,3978f;
				
				case 5:
					return 181,9976f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 0:
					return 23,1998f;
				
				case 1:
					return 168,9997f;
				
				case 2:
					return 193,1996f;
				
				case 3:
					return 236,7992f;
				
				case 4:
					return 251,199f;
				
				case 5:
					return 173,5988f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 0:
					return 357,597f;
				
				case 1:
					return 357,597f;
				
				case 2:
					return 178,5977f;
				
				case 3:
					return 195,9977f;
				
				case 4:
					return 185,1967f;
				
				case 5:
					return 185,1967f;
				
				default:
			}
			break;
		
		case 171:
			switch (iParam0)
			{
				case 0:
					return 35,3982f;
				
				case 1:
					return 239,9983f;
				
				case 2:
					return 205,9977f;
				
				case 3:
					return 25,3976f;
				
				case 4:
					return 35,598f;
				
				case 5:
					return 197,9964f;
				
				case 6:
					return 76,9953f;
				
				case 7:
					return 243,5995f;
				
				default:
			}
			break;
		
		case 172:
			switch (iParam0)
			{
				case 0:
					return 190,1984f;
				
				case 1:
					return 42,7982f;
				
				case 2:
					return 96,7947f;
				
				case 3:
					return 270,5937f;
				
				case 4:
					return 236,599f;
				
				case 5:
					return 103,5958f;
				
				case 6:
					return 303,9954f;
				
				case 7:
					return 136,9951f;
				
				default:
			}
			break;
		
		case 173:
			switch (iParam0)
			{
				case 0:
					return 80,799f;
				
				case 1:
					return 261,399f;
				
				case 2:
					return 41,795f;
				
				case 3:
					return 172,994f;
				
				case 4:
					return 102,794f;
				
				case 5:
					return 283,794f;
				
				case 6:
					return 288,198f;
				
				case 7:
					return 189,199f;
				
				default:
			}
			break;
		
		case 174:
			switch (iParam0)
			{
				case 0:
					return 271,398f;
				
				case 1:
					return 67,398f;
				
				case 2:
					return 271,397f;
				
				case 3:
					return 48,796f;
				
				case 4:
					return 248,748f;
				
				case 5:
					return 44,748f;
				
				case 6:
					return 44,399f;
				
				case 7:
					return 218,747f;
				
				default:
			}
			break;
	}
	return 3,2318f;
}

Vector3 func_635(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 65:
			switch (iParam0)
			{
				case 0:
					return 2223,367f, 5604,375f, 53,73f;
				
				case 1:
					return 2207,813f, 5594,278f, 52,789f;
				
				case 2:
					return 2207,595f, 5596,149f, 52,771f;
				
				case 3:
					return 2196,89f, 5601,636f, 52,579f;
				
				case 4:
					return 2192,467f, 5599,118f, 52,705f;
				
				case 5:
					return 2196,249f, 5595,646f, 52,778f;
				
				case 6:
					return 2196,366f, 5608,13f, 52,4936f;
				
				case 7:
					return 2213,252f, 5608,22f, 53,016f;
				
				case 8:
					return 2227,766f, 5596,991f, 53,129f;
				
				case 9:
					return 2228,625f, 5598,366f, 53,23f;
				
				case 10:
					return 2227,284f, 5575,317f, 52,664f;
				
				case 11:
					return 2220,734f, 5578,728f, 52,755f;
				
				case 12:
					return 2200,605f, 5612,011f, 52,5211f;
				
				case 13:
					return 2217,144f, 5634,98f, 54,933f;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 0:
					return 1541,822f, 6332,851f, 23,074f;
				
				case 1:
					return 1541,99f, 6337,129f, 23,078f;
				
				case 2:
					return 1534,581f, 6338,251f, 23,172f;
				
				case 3:
					return 1532,25f, 6331,198f, 23,291f;
				
				case 4:
					return 1532,586f, 6329,914f, 23,295f;
				
				case 5:
					return 1517,545f, 6335,366f, 23,112f;
				
				case 6:
					return 1500,878f, 6341,661f, 22,925f;
				
				case 7:
					return 1505,647f, 6328,62f, 23,061f;
				
				case 8:
					return 1510,234f, 6326,173f, 23,612f;
				
				case 9:
					return 1512,621f, 6335,822f, 23,036f;
				
				case 10:
					return 1525,219f, 6346,145f, 23,07f;
				
				case 11:
					return 1524,152f, 6345,247f, 23,087f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return 1538,296f, 1709,668f, 108,789f;
				
				case 1:
					return 1533,71f, 1714,037f, 109,065f;
				
				case 2:
					return 1533,096f, 1712,738f, 108,895f;
				
				case 3:
					return 1518,351f, 1704,085f, 109,087f;
				
				case 4:
					return 1537,05f, 1703,378f, 108,671f;
				
				case 5:
					return 1534,037f, 1704,027f, 108,719f;
				
				case 6:
					return 1537,546f, 1700,259f, 108,679f;
				
				case 7:
					return 1525,434f, 1706,584f, 108,8623f;
				
				case 8:
					return 1525,013f, 1710,231f, 109,012f;
				
				case 9:
					return 1520,279f, 1714,443f, 109,163f;
				
				case 10:
					return 1521,151f, 1713,333f, 109,035f;
				
				default:
			}
			break;
		
		case 68:
			switch (iParam0)
			{
				case 0:
					return 96,485f, -1983,731f, 19,444f;
				
				case 1:
					return 113,232f, -1978,512f, 19,975f;
				
				case 2:
					return 118,232f, -1977,591f, 19,924f;
				
				case 3:
					return 114,068f, -1960,969f, 20,339f;
				
				case 4:
					return 106,097f, -1974,508f, 19,944f;
				
				case 5:
					return 101,501f, -1975,017f, 19,933f;
				
				case 6:
					return 102,711f, -1975,196f, 19,94f;
				
				case 7:
					return 101,809f, -1981,893f, 19,773f;
				
				case 8:
					return 100,652f, -1980,782f, 19,718f;
				
				case 9:
					return 82,546f, -1984,14f, 19,662f;
				
				default:
			}
			break;
		
		case 69:
			switch (iParam0)
			{
				case 0:
					return 1319,396f, -531,179f, 71,122f;
				
				case 1:
					return 1338,372f, -517,6409f, 71,0657f;
				
				case 2:
					return 1342,796f, -516,9342f, 71,185f;
				
				case 3:
					return 1340,008f, -521,2045f, 71,0657f;
				
				case 4:
					return 1342,437f, -519,9394f, 71,0657f;
				
				case 5:
					return 1333,382f, -519,825f, 71,0657f;
				
				case 6:
					return 1330,056f, -519,116f, 71,0657f;
				
				case 7:
					return 1332,344f, -515,08f, 71,066f;
				
				case 8:
					return 1331,303f, -514,235f, 71,21f;
				
				case 9:
					return 1341,311f, -528,554f, 71,312f;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam0)
			{
				case 0:
					return -1890,009f, 267,117f, 85,454f;
				
				case 1:
					return -1886,013f, 269,056f, 85,454f;
				
				case 2:
					return -1882,118f, 270,111f, 85,455f;
				
				case 3:
					return -1887,092f, 258,803f, 85,061f;
				
				case 4:
					return -1885,693f, 258,062f, 85,061f;
				
				case 5:
					return -1892,735f, 251,989f, 85,253f;
				
				case 6:
					return -1887,144f, 240,055f, 85,453f;
				
				case 7:
					return -1894,838f, 265,323f, 85,252f;
				
				case 8:
					return -1875,175f, 250,379f, 85,061f;
				
				case 9:
					return -1876,528f, 249,424f, 85,061f;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam0)
			{
				case 0:
					return 145,0552f, 320,328f, 111,1386f;
				
				case 1:
					return 139,682f, 310,455f, 111,1386f;
				
				case 2:
					return 139,8206f, 311,9205f, 111,1386f;
				
				case 3:
					return 123,034f, 313,4146f, 111,1395f;
				
				case 4:
					return 136,981f, 307,6854f, 111,1386f;
				
				case 5:
					return 136,7762f, 319,34f, 111,1386f;
				
				case 6:
					return 137,5527f, 318,8812f, 111,1386f;
				
				case 7:
					return 146,11f, 312,8365f, 111,1386f;
				
				case 8:
					return 148,5522f, 320,4322f, 111,1386f;
				
				case 9:
					return 122,8357f, 311,8524f, 111,135f;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam0)
			{
				case 0:
					return 179,3272f, -1245,557f, 28,1985f;
				
				case 1:
					return 157,433f, -1253,183f, 28,1731f;
				
				case 2:
					return 153,6207f, -1243,474f, 28,1985f;
				
				case 3:
					return 165,7601f, -1248,041f, 28,1985f;
				
				case 4:
					return 162,8093f, -1254,958f, 28,2921f;
				
				case 5:
					return 149,6924f, -1236,488f, 28,1985f;
				
				case 6:
					return 160,4743f, -1233,709f, 28,3196f;
				
				case 7:
					return 159,0182f, -1234,442f, 28,3195f;
				
				case 8:
					return 155,6285f, -1249,219f, 28,1985f;
				
				case 9:
					return 154,1779f, -1249,454f, 28,1985f;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 0:
					return -1371,8f, 479,778f, 103,7f;
				
				case 1:
					return -1368,935f, 489,403f, 103,455f;
				
				case 2:
					return -1363,879f, 490,7928f, 102,9601f;
				
				case 3:
					return -1350,56f, 485,545f, 102,691f;
				
				case 4:
					return -1351,437f, 475,254f, 102,891f;
				
				case 5:
					return -1352,445f, 474,243f, 102,866f;
				
				case 6:
					return -1352,563f, 491,796f, 102,891f;
				
				case 7:
					return -1360,365f, 492,321f, 102,837f;
				
				case 8:
					return -1359,085f, 492,115f, 102,846f;
				
				case 9:
					return -1358,079f, 479,265f, 103,516f;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 0:
					return 2601,185f, 2804,296f, 32,82f;
				
				case 1:
					return 2610,962f, 2793,66f, 32,708f;
				
				case 2:
					return 2606,106f, 2812,86f, 32,742f;
				
				case 3:
					return 2606,094f, 2797,879f, 32,721f;
				
				case 4:
					return 2606,948f, 2796,563f, 32,725f;
				
				case 5:
					return 2615,565f, 2801,733f, 32,718f;
				
				case 6:
					return 2614,184f, 2801,586f, 32,719f;
				
				case 7:
					return 2609,883f, 2819,251f, 32,562f;
				
				case 8:
					return 2605,283f, 2812,256f, 32,738f;
				
				case 9:
					return 2598,273f, 2817,808f, 32,748f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return -2781,346f, 1431,235f, 99,9285f;
				
				case 1:
					return -2765,037f, 1436,872f, 100f;
				
				case 2:
					return -2769,716f, 1440,675f, 100,0007f;
				
				case 3:
					return -2784,798f, 1445,631f, 99,8553f;
				
				case 4:
					return -2788,124f, 1429,918f, 99,9284f;
				
				case 5:
					return -2789,174f, 1431,149f, 99,9284f;
				
				case 6:
					return -2792,187f, 1439,355f, 99,9284f;
				
				case 7:
					return -2777,18f, 1432,879f, 99,9362f;
				
				case 8:
					return -2779,691f, 1421,464f, 99,9284f;
				
				case 9:
					return -2779,679f, 1423,085f, 99,9284f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return 709,744f, 4179,829f, 39,709f;
				
				case 1:
					return 709,092f, 4169,224f, 39,718f;
				
				case 2:
					return 721,219f, 4179,948f, 39,709f;
				
				case 3:
					return 728,306f, 4175,113f, 39,709f;
				
				case 4:
					return 721,302f, 4175,081f, 39,709f;
				
				case 5:
					return 719,737f, 4175,373f, 39,709f;
				
				case 6:
					return 723,024f, 4166,637f, 39,757f;
				
				case 7:
					return 723,152f, 4185,554f, 39,709f;
				
				case 8:
					return 723,98f, 4184,852f, 39,709f;
				
				case 9:
					return 729,379f, 4192,108f, 39,705f;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam0)
			{
				case 0:
					return 122,511f, -403,8626f, 40,2514f;
				
				case 1:
					return 122,8352f, -402,7485f, 40,2618f;
				
				case 2:
					return 123,8882f, -403,5907f, 40,2321f;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam0)
			{
				case 0:
					return -115,5588f, -1049,114f, 26,2735f;
				
				case 1:
					return -114,5336f, -1049,182f, 26,2736f;
				
				case 2:
					return -115,1324f, -1050,182f, 26,2736f;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam0)
			{
				case 0:
					return 1138,875f, 2208,523f, 47,8392f;
				
				case 1:
					return 1140,042f, 2208,711f, 47,8138f;
				
				case 2:
					return 1139,493f, 2209,801f, 47,8564f;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam0)
			{
				case 0:
					return 2768,789f, 1408,702f, 23,5584f;
				
				case 1:
					return 2768,405f, 1407,302f, 23,557f;
				
				case 2:
					return 2769,875f, 1408,082f, 23,4569f;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam0)
			{
				case 0:
					return 588,9854f, 2907,29f, 38,9311f;
				
				case 1:
					return 587,764f, 2908,06f, 38,984f;
				
				case 2:
					return 588,8641f, 2908,739f, 39,0047f;
				
				default:
			}
			break;
		
		case 171:
			switch (iParam0)
			{
				case 0:
					return -1171,919f, -2042,672f, 12,9125f;
				
				case 1:
					return -1172,993f, -2041,829f, 12,8701f;
				
				case 2:
					return -1167,701f, -2056,38f, 13,2615f;
				
				case 3:
					return -1167,315f, -2058,135f, 13,2319f;
				
				case 4:
					return -1164,931f, -2052,323f, 13,221f;
				
				case 5:
					return -1175,652f, -2052,292f, 13,0852f;
				
				case 6:
					return -1175,265f, -2053,702f, 13,1304f;
				
				case 7:
					return -1176,649f, -2057,081f, 13,171f;
				
				default:
			}
			break;
		
		case 172:
			switch (iParam0)
			{
				case 0:
					return 1440,448f, -2294,412f, 65,9201f;
				
				case 1:
					return 1440,94f, -2295,857f, 65,9362f;
				
				case 2:
					return 1438,056f, -2280,34f, 65,5469f;
				
				case 3:
					return 1436,222f, -2280,247f, 65,5056f;
				
				case 4:
					return 1442,895f, -2289,436f, 65,891f;
				
				case 5:
					return 1428,886f, -2288,006f, 65,7408f;
				
				case 6:
					return 1441,939f, -2286,106f, 65,7996f;
				
				case 7:
					return 1436,611f, -2289,051f, 65,7644f;
				
				default:
			}
			break;
		
		case 173:
			switch (iParam0)
			{
				case 0:
					return 2941,746f, 2782,836f, 38,598f;
				
				case 1:
					return 2941,007f, 2783,663f, 38,657f;
				
				case 2:
					return 2950,76f, 2782,689f, 39,282f;
				
				case 3:
					return 2943,992f, 2777,432f, 38,255f;
				
				case 4:
					return 2959,039f, 2788,094f, 39,776f;
				
				case 5:
					return 2957,401f, 2787,937f, 40,116f;
				
				case 6:
					return 2955,751f, 2780,115f, 39,567f;
				
				case 7:
					return 2946,387f, 2786,273f, 39,192f;
				
				default:
			}
			break;
		
		case 174:
			switch (iParam0)
			{
				case 0:
					return 3688,924f, 4562,783f, 24,188f;
				
				case 1:
					return 3693,908f, 4554,682f, 24,38f;
				
				case 2:
					return 3692,726f, 4555,004f, 24,355f;
				
				case 3:
					return 3698,433f, 4550,899f, 24,243f;
				
				case 4:
					return 3693,553f, 4570,021f, 24,128f;
				
				case 5:
					return 3694,23f, 4569,421f, 24,139f;
				
				case 6:
					return 3684,385f, 4557,763f, 24,087f;
				
				case 7:
					return 3689,067f, 4558,266f, 24,095f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return 1607,271f, 3560,033f, 34,43f;
				
				case 1:
					return 1613,674f, 3573,632f, 37,7314f;
				
				case 2:
					return 1594,111f, 3598,124f, 34,4349f;
				
				case 3:
					return 1584,598f, 3624,226f, 37,7353f;
				
				case 4:
					return 1585,217f, 3590,056f, 37,7369f;
				
				case 5:
					return 1577,211f, 3616,232f, 37,7802f;
				
				case 6:
					return 1593,301f, 3593,138f, 37,7715f;
				
				case 7:
					return 1596,752f, 3586,558f, 37,7715f;
				
				case 8:
					return 1600,148f, 3581,624f, 37,9148f;
				
				case 9:
					return 1592,849f, 3586,968f, 37,7715f;
				
				case 10:
					return 1593,034f, 3585,947f, 37,7715f;
				
				case 11:
					return 1604,2f, 3568,24f, 37,7802f;
				
				case 12:
					return 1576,392f, 3614,959f, 37,7802f;
				
				case 13:
					return 1594,403f, 3579,756f, 37,7715f;
				
				case 14:
					return 1605,61f, 3570,639f, 37,7802f;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam0)
			{
				case 0:
					return 2324,722f, 2573,176f, 45,668f;
				
				case 1:
					return 2329,891f, 2578,899f, 45,6677f;
				
				case 2:
					return 2319,66f, 2571,708f, 45,668f;
				
				case 3:
					return 2315,873f, 2572,822f, 45,668f;
				
				case 4:
					return 2314,292f, 2577,628f, 45,6677f;
				
				case 5:
					return 2318,56f, 2587,299f, 45,648f;
				
				case 6:
					return 2324,464f, 2581,219f, 45,655f;
				
				case 7:
					return 2323,737f, 2580,018f, 45,659f;
				
				case 8:
					return 2317,847f, 2577,786f, 45,668f;
				
				case 9:
					return 2316,579f, 2578,618f, 45,665f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam0)
			{
				case 0:
					return 1351,564f, 3266,227f, 37,337f;
				
				case 1:
					return 1360,848f, 3275,43f, 36,984f;
				
				case 2:
					return 1356,158f, 3271,952f, 37,093f;
				
				case 3:
					return 1352,212f, 3276,117f, 36,688f;
				
				case 4:
					return 1351,645f, 3274,88f, 36,748f;
				
				case 5:
					return 1360,5f, 3266,615f, 37,531f;
				
				case 6:
					return 1358,225f, 3266,394f, 37,5f;
				
				case 7:
					return 1360,982f, 3272,951f, 37,164f;
				
				case 8:
					return 1360,684f, 3269,181f, 37,393f;
				
				case 9:
					return 1354,493f, 3266,777f, 37,389f;
				
				case 10:
					return 1356,688f, 3274,843f, 36,92f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 0:
					return 607,7536f, -411,5009f, 23,7449f;
				
				case 1:
					return 600,722f, -469,078f, 25,043f;
				
				case 2:
					return 605,769f, -437,312f, 23,745f;
				
				case 3:
					return 604,969f, -444,218f, 23,745f;
				
				case 4:
					return 598,725f, -438,335f, 23,745f;
				
				case 5:
					return 599,535f, -426,803f, 23,745f;
				
				case 6:
					return 601,719f, -427,373f, 23,745f;
				
				case 7:
					return 601,823f, -456,221f, 23,745f;
				
				case 8:
					return 600,545f, -455,114f, 23,745f;
				
				case 9:
					return 600,7632f, -444,4445f, 23,7449f;
				
				case 10:
					return 604,319f, -452,014f, 23,745f;
				
				case 11:
					return 609,438f, -420,677f, 23,745f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 0:
					return -434,221f, -2170,867f, 10,344f;
				
				case 1:
					return -444,407f, -2165,335f, 9,318f;
				
				case 2:
					return -435,927f, -2165,662f, 9,318f;
				
				case 3:
					return -436,842f, -2166,187f, 9,32f;
				
				case 4:
					return -437,1024f, -2182,081f, 9,3279f;
				
				case 5:
					return -440,36f, -2181,536f, 9,323f;
				
				case 6:
					return -444,922f, -2181,474f, 9,318f;
				
				case 7:
					return -448,192f, -2176,427f, 10,446f;
				
				case 8:
					return -442,883f, -2178,217f, 9,318f;
				
				case 9:
					return -429,1713f, -2168,343f, 9,3281f;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam0)
			{
				case 0:
					return -1095,199f, -1647,733f, 3,398f;
				
				case 1:
					return -1098,474f, -1656,623f, 3,398f;
				
				case 2:
					return -1104,352f, -1665,612f, 6,357f;
				
				case 3:
					return -1105,561f, -1663,448f, 6,357f;
				
				case 4:
					return -1097,655f, -1659,29f, 6,348f;
				
				case 5:
					return -1097,363f, -1660,376f, 6,348f;
				
				case 6:
					return -1102,56f, -1653,979f, 6,97f;
				
				case 7:
					return -1091,195f, -1651,069f, 6,4484f;
				
				case 8:
					return -1100,763f, -1659,896f, 9,163f;
				
				case 9:
					return -1091,983f, -1655,087f, 9,157f;
				
				case 10:
					return -1097,723f, -1660,198f, 9,222f;
				
				case 11:
					return -1091,782f, -1656,833f, 6,3569f;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam0)
			{
				case 0:
					return 157,597f, -3198,468f, 5,022f;
				
				case 1:
					return 139,965f, -3195,321f, 4,858f;
				
				case 2:
					return 146,403f, -3189,602f, 4,858f;
				
				case 3:
					return 145,926f, -3188,727f, 4,858f;
				
				case 4:
					return 152,849f, -3191,688f, 4,907f;
				
				case 5:
					return 140,876f, -3193,478f, 4,858f;
				
				case 6:
					return 143,964f, -3179,925f, 4,858f;
				
				case 7:
					return 151,914f, -3190,29f, 4,882f;
				
				case 8:
					return 156,843f, -3190,249f, 6,036f;
				
				case 9:
					return 156,86f, -3199,295f, 5,022f;
				
				case 10:
					return 153,1f, -3187,523f, 4,915f;
				
				case 13:
					return 142,677f, -3184,256f, 4,858f;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam0)
			{
				case 0:
					return -946,112f, 595,853f, 100,005f;
				
				case 1:
					return -945,925f, 594,656f, 100,005f;
				
				case 2:
					return -941,838f, 599,332f, 104,443f;
				
				case 3:
					return -940,698f, 599,931f, 104,443f;
				
				case 4:
					return -953,5f, 612,659f, 108,67f;
				
				case 5:
					return -952,311f, 611,441f, 108,669f;
				
				case 6:
					return -934,049f, 604,464f, 108,769f;
				
				case 7:
					return -939,451f, 616,915f, 108,769f;
				
				case 8:
					return -938,23f, 616,831f, 108,767f;
				
				case 9:
					return -955,852f, 597,821f, 108,303f;
				
				case 10:
					return -954,158f, 597,961f, 108,303f;
				
				case 13:
					return -944,777f, 601,722f, 108,224f;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam0)
			{
				case 0:
					return 372,4159f, -1249,619f, 31,5091f;
				
				case 1:
					return 368,3938f, -1242,368f, 31,5089f;
				
				case 2:
					return 349,628f, -1230,797f, 31,509f;
				
				case 3:
					return 347,2758f, -1236,865f, 31,509f;
				
				case 4:
					return 348,3792f, -1236,194f, 31,509f;
				
				case 5:
					return 351,2424f, -1246,243f, 31,509f;
				
				case 6:
					return 349,7538f, -1246,544f, 31,509f;
				
				case 7:
					return 342,2336f, -1252,623f, 31,509f;
				
				case 8:
					return 342,6555f, -1245,044f, 31,509f;
				
				case 9:
					return 364,4041f, -1236,99f, 31,5088f;
				
				case 10:
					return 361,7885f, -1244,577f, 31,509f;
				
				case 13:
					return 362,276f, -1246,363f, 31,509f;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam0)
			{
				case 0:
					return 1456,246f, 1136,576f, 113,3255f;
				
				case 1:
					return 1469,455f, 1133,427f, 113,3289f;
				
				case 2:
					return 1460,608f, 1133,299f, 113,3287f;
				
				case 3:
					return 1485,584f, 1135,078f, 113,3343f;
				
				case 4:
					return 1487,618f, 1128,572f, 113,3367f;
				
				case 5:
					return 1474,733f, 1134,895f, 113,3343f;
				
				case 6:
					return 1473,373f, 1136,181f, 113,3343f;
				
				case 7:
					return 1471,734f, 1144,967f, 113,3343f;
				
				case 8:
					return 1461,756f, 1146,647f, 113,334f;
				
				case 9:
					return 1462,519f, 1147,878f, 113,3342f;
				
				case 10:
					return 1491,328f, 1128,624f, 113,3343f;
				
				case 13:
					return 1480,16f, 1125,418f, 113,3343f;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 0:
					return -1864,608f, 2073,913f, 139,996f;
				
				case 1:
					return -1892,682f, 2087,707f, 139,995f;
				
				case 2:
					return -1872,658f, 2074,342f, 139,996f;
				
				case 3:
					return -1873,718f, 2073,737f, 139,997f;
				
				case 4:
					return -1885,1f, 2078,153f, 139,997f;
				
				case 5:
					return -1886,219f, 2085,255f, 139,995f;
				
				case 6:
					return -1886,928f, 2086,261f, 139,995f;
				
				case 7:
					return -1879,955f, 2092,161f, 139,994f;
				
				case 8:
					return -1873,387f, 2093,955f, 139,065f;
				
				case 9:
					return -1873,677f, 2095,339f, 138,873f;
				
				case 10:
					return -1894,432f, 2078,717f, 139,998f;
				
				case 13:
					return -1874,26f, 2080,988f, 139,996f;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 0:
					return 1815,799f, 3906,374f, 36,2175f;
				
				case 1:
					return 1816,509f, 3907,74f, 36,2175f;
				
				case 2:
					return 1809,589f, 3892,674f, 32,8064f;
				
				case 3:
					return 1808,876f, 3907,579f, 32,7256f;
				
				case 4:
					return 1802,535f, 3915,002f, 36,0727f;
				
				case 5:
					return 1819,607f, 3894,38f, 32,6855f;
				
				case 6:
					return 1816,922f, 3917,37f, 32,5425f;
				
				case 7:
					return 1799,21f, 3908,035f, 32,9844f;
				
				case 8:
					return 1800,078f, 3909,353f, 32,9114f;
				
				case 9:
					return 1811,974f, 3898,99f, 32,7084f;
				
				case 10:
					return 1807,343f, 3926,388f, 32,7042f;
				
				case 13:
					return 1821,167f, 3902,716f, 32,6102f;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 0:
					return -462,759f, -2683,652f, 7,761f;
				
				case 1:
					return -460,096f, -2643,152f, 7,761f;
				
				case 2:
					return -508,391f, -2710,002f, 7,76f;
				
				case 3:
					return -430,529f, -2641,913f, 7,761f;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 0:
					return 1087,279f, -2337,688f, 29,22f;
				
				case 1:
					return 1092,878f, -2257,544f, 29,176f;
				
				case 2:
					return 1082,428f, -2270,471f, 29,36f;
				
				case 3:
					return 1095,076f, -2314,987f, 29,0931f;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 0:
					return -21,441f, -1286,825f, 32,276f;
				
				case 1:
					return -47,145f, -1327,893f, 28,977f;
				
				case 2:
					return -29,358f, -1268,328f, 28,293f;
				
				case 3:
					return -40,5522f, -1302,085f, 28,0832f;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 0:
					return 2718,743f, 1553,78f, 23,501f;
				
				case 1:
					return 2759,937f, 1514,651f, 23,5007f;
				
				case 2:
					return 2756,587f, 1549,815f, 23,501f;
				
				case 3:
					return 2772,056f, 1571,234f, 29,7919f;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 0:
					return 3546,534f, 3704,495f, 35,6426f;
				
				case 1:
					return 3478,473f, 3756,13f, 31,685f;
				
				case 2:
					return 3534,414f, 3739,473f, 35,673f;
				
				case 3:
					return 3600,971f, 3729,209f, 35,3106f;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 0:
					return -1614,264f, 3105,805f, 31,5659f;
				
				case 1:
					return -1653,535f, 3152,891f, 30,7075f;
				
				case 2:
					return -1634,888f, 3018,352f, 30,8255f;
				
				case 3:
					return -1617,525f, 3071,379f, 31,3001f;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 0:
					return -1088,358f, -2404,311f, 12,9452f;
				
				case 1:
					return -1049,307f, -2387,774f, 27,506f;
				
				case 2:
					return -1094,313f, -2402,987f, 12,9452f;
				
				case 3:
					return -1095,361f, -2402,917f, 12,9452f;
				
				case 4:
					return -1098,59f, -2423,031f, 12,9451f;
				
				case 5:
					return -1099,147f, -2422,031f, 12,9452f;
				
				case 6:
					return -1080,67f, -2423,135f, 12,9451f;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam0)
			{
				case 0:
					return -2239,795f, 259,7494f, 173,6024f;
				
				case 1:
					return -2239,837f, 294,7111f, 183,6052f;
				
				case 2:
					return -2266,982f, 266,6433f, 183,6016f;
				
				case 3:
					return -2247,1f, 267,64f, 173,614f;
				
				case 4:
					return -2255,509f, 252,2386f, 173,6017f;
				
				case 5:
					return -2254,687f, 251,205f, 173,6017f;
				
				case 6:
					return -2228,562f, 253,4118f, 173,6017f;
				
				case 7:
					return -2246,109f, 275,7967f, 173,6017f;
				
				case 8:
					return -2245,053f, 275,3733f, 173,6017f;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 0:
					return 1331,741f, -1563,044f, 53,0515f;
				
				case 1:
					return 1261,172f, -1574,21f, 77,9697f;
				
				case 2:
					return 1335,829f, -1553,238f, 53,0515f;
				
				case 3:
					return 1334,696f, -1552,012f, 53,0515f;
				
				case 4:
					return 1323,994f, -1552,891f, 50,2518f;
				
				case 5:
					return 1331,265f, -1579,581f, 53,1856f;
				
				case 6:
					return 1328,531f, -1572,607f, 53,0515f;
				
				case 7:
					return 1340,797f, -1585,037f, 53,2821f;
				
				case 8:
					return 1341,653f, -1583,806f, 53,2069f;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam0)
			{
				case 0:
					return 374,8803f, 3408,046f, 35,4035f;
				
				case 1:
					return 438,3903f, 3440,399f, 50,4609f;
				
				case 2:
					return 360,845f, 3412,136f, 35,4035f;
				
				case 3:
					return 360,9516f, 3413,238f, 35,3456f;
				
				case 4:
					return 361,0782f, 3425,275f, 37,552f;
				
				case 5:
					return 370,6835f, 3419,19f, 35,2934f;
				
				case 6:
					return 369,6345f, 3419,205f, 35,3212f;
				
				case 7:
					return 356,8638f, 3409,303f, 35,4036f;
				
				case 8:
					return 350,1174f, 3399,601f, 41,2786f;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 0:
					return 871,0349f, 2380,638f, 53,0893f;
				
				case 1:
					return 958,0237f, 2393,081f, 80,6777f;
				
				case 2:
					return 847,1891f, 2373,943f, 55,802f;
				
				case 3:
					return 849,9548f, 2384,442f, 53,1459f;
				
				case 4:
					return 860,9609f, 2371,259f, 53,7342f;
				
				case 5:
					return 861,5726f, 2370,25f, 53,5292f;
				
				case 6:
					return 860,7336f, 2386,621f, 53,1126f;
				
				case 7:
					return 861,8477f, 2387,594f, 53,1267f;
				
				case 8:
					return 830,2946f, 2361,697f, 51,4858f;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 0:
					return -1929,882f, 2062,079f, 139,8384f;
				
				case 1:
					return -1949,026f, 2083,688f, 151,6173f;
				
				case 2:
					return -1921,893f, 2048,104f, 140,5228f;
				
				case 3:
					return -1920,654f, 2048,075f, 140,9686f;
				
				case 4:
					return -1921,303f, 2085,419f, 137,0539f;
				
				case 5:
					return -1921,185f, 2086,283f, 136,9374f;
				
				case 6:
					return -1896,056f, 2060,401f, 139,9598f;
				
				case 7:
					return -1896,223f, 2059,389f, 139,9545f;
				
				case 8:
					return -1898,694f, 2045,036f, 139,9082f;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 0:
					return -496,4034f, 5167,859f, 87,247f;
				
				case 1:
					return -505,7346f, 5172,369f, 88,4034f;
				
				case 2:
					return -509,012f, 5167,83f, 88,4932f;
				
				case 3:
					return -499,9164f, 5167,611f, 88,579f;
				
				case 4:
					return -506,9306f, 5172,289f, 88,4298f;
				
				case 5:
					return -495,6701f, 5166,151f, 86,9289f;
				
				case 6:
					return -510,7925f, 5208,158f, 87,0017f;
				
				case 7:
					return -515,2978f, 5187,306f, 88,5829f;
				
				case 8:
					return -514,0782f, 5186,49f, 88,5858f;
				
				case 9:
					return -509,5667f, 5166,706f, 88,5283f;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 0:
					return 2183,875f, -617,4717f, 95,2203f;
				
				case 1:
					return 2202,287f, -612,2864f, 100,591f;
				
				case 2:
					return 2187,412f, -623,7012f, 96,3205f;
				
				case 3:
					return 2191,388f, -622,7308f, 96,9525f;
				
				case 4:
					return 2191,345f, -625,5317f, 96,2943f;
				
				case 5:
					return 2163,73f, -616,7684f, 95,3207f;
				
				case 6:
					return 2167,74f, -614,5851f, 95,2831f;
				
				case 7:
					return 2176,981f, -625,3688f, 95,3616f;
				
				case 8:
					return 2163,942f, -617,7948f, 95,3149f;
				
				case 9:
					return 2174,169f, -639,7013f, 94,7061f;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 0:
					return 673,7896f, -1349,146f, 23,2366f;
				
				case 1:
					return 663,4261f, -1307,248f, 21,8231f;
				
				case 2:
					return 662,0548f, -1308,018f, 21,6201f;
				
				case 3:
					return 671,4999f, -1317,472f, 23,2987f;
				
				case 4:
					return 672,1763f, -1318,481f, 23,3581f;
				
				case 5:
					return 672,8774f, -1332,926f, 23,403f;
				
				case 6:
					return 666,6895f, -1278,315f, 22,2916f;
				
				case 7:
					return 669,2861f, -1295,697f, 22,8336f;
				
				case 8:
					return 668,1089f, -1295,993f, 22,691f;
				
				case 9:
					return 661,7819f, -1325,882f, 18,8096f;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 0:
					return 1583,895f, 3372,437f, 35,8814f;
				
				case 1:
					return 1583,47f, 3375,865f, 35,3822f;
				
				case 2:
					return 1582,232f, 3375,775f, 35,3474f;
				
				case 3:
					return 1583,084f, 3382,204f, 37,3376f;
				
				case 4:
					return 1576,719f, 3365,861f, 41,1266f;
				
				case 5:
					return 1584,239f, 3382,731f, 37,316f;
				
				case 6:
					return 1591,349f, 3368,393f, 36,5576f;
				
				case 7:
					return 1580,521f, 3362,836f, 36,6727f;
				
				case 8:
					return 1603,304f, 3383,291f, 35,6733f;
				
				case 9:
					return 1567,01f, 3368,621f, 35,3179f;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 0:
					return -1213,204f, -332,6346f, 36,7809f;
				
				case 1:
					return -1210,38f, -329,2486f, 36,781f;
				
				case 2:
					return -1212,784f, -336,277f, 36,7958f;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 0:
					return 148,0202f, -1041,553f, 28,3679f;
				
				case 1:
					return 152,6281f, -1041,16f, 28,368f;
				
				case 2:
					return 145,239f, -1044,243f, 28,368f;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 0:
					return 316,9535f, -279,7082f, 53,1647f;
				
				case 1:
					return 309,3881f, -282,5396f, 53,1647f;
				
				case 2:
					return 312,3035f, -280,0294f, 53,1646f;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 0:
					return -352,8193f, -50,7577f, 48,0364f;
				
				case 1:
					return -355,9316f, -53,6013f, 48,0364f;
				
				case 2:
					return -348,337f, -50,4038f, 48,0477f;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 0:
					return -114,7433f, 6468,952f, 30,6267f;
				
				case 1:
					return -105,6677f, 6470,665f, 30,6267f;
				
				case 2:
					return -101,3648f, 6463,091f, 30,6267f;
				
				case 3:
					return -111,2817f, 6470,286f, 30,6267f;
				
				case 4:
					return -104,0783f, 6478,014f, 30,6267f;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 0:
					return 1176,428f, 2708,34f, 37,0879f;
				
				case 1:
					return 1177,777f, 2711,73f, 37,1028f;
				
				case 2:
					return 1172,592f, 2706,429f, 37,0991f;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 0:
					return -2963,109f, 485,4919f, 14,7082f;
				
				case 1:
					return -2957,84f, 479,6408f, 14,697f;
				
				case 2:
					return -2961,081f, 481,3181f, 14,6969f;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 0:
					return 53,1556f, -798,3552f, 30,5914f;
				
				case 1:
					return 51,6393f, -796,5381f, 30,597f;
				
				case 2:
					return 1964,851f, -973,1319f, 77,4328f;
				
				case 3:
					return 1964,234f, -968,517f, 77,5038f;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 0:
					return -517,5797f, -678,1479f, 32,6712f;
				
				case 1:
					return -515,9768f, -675,8896f, 32,6712f;
				
				case 2:
					return -1153,774f, 927,059f, 197,3179f;
				
				case 3:
					return -1156,26f, 925,5966f, 197,076f;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 0:
					return -1183,123f, -883,3275f, 12,7615f;
				
				case 1:
					return -1180,474f, -885,1118f, 12,8006f;
				
				case 2:
					return 1083,717f, -775,5884f, 57,2062f;
				
				case 3:
					return 1080,247f, -775,7218f, 57,2125f;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 0:
					return 1266,059f, -363,5351f, 68,0571f;
				
				case 1:
					return 1267,096f, -364,6997f, 68,0488f;
				
				case 2:
					return -944,8234f, -2501,629f, 13,5492f;
				
				case 3:
					return -947,8298f, -2503,362f, 13,5389f;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 0:
					return 415,9828f, -1902,391f, 24,6188f;
				
				case 1:
					return 413,5625f, -1899,916f, 24,6624f;
				
				case 2:
					return -2981,339f, 355,0246f, 13,9461f;
				
				case 3:
					return -2981,028f, 356,5624f, 13,9469f;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 0:
					return -1825,326f, 789,7377f, 137,2213f;
				
				case 1:
					return -1824,733f, 792,2637f, 137,1852f;
				
				case 2:
					return 748,6979f, -1720,107f, 28,3946f;
				
				case 3:
					return 748,9615f, -1717,627f, 28,314f;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 0:
					return -438,8133f, 1597,59f, 357,4732f;
				
				case 1:
					return -440,1783f, 1598,889f, 357,4732f;
				
				case 2:
					return -299,6683f, -1164,148f, 22,1059f;
				
				case 3:
					return -301,289f, -1162,004f, 22,0686f;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 0:
					return 806,726f, -1073,218f, 27,926f;
				
				case 1:
					return 805,5734f, -1071,886f, 27,4709f;
				
				case 2:
					return -1549,755f, 1380,099f, 125,1934f;
				
				case 3:
					return -1551,263f, 1379,36f, 125,297f;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 0:
					return 52,7956f, -1480,081f, 28,2709f;
				
				case 1:
					return 48,9854f, -1479,625f, 28,2728f;
				
				case 2:
					return -138,309f, -257,174f, 42,6f;
				
				case 3:
					return -139,6279f, -254,0565f, 42,4574f;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 0:
					return -627,9026f, -306,3939f, 34,344f;
				
				case 1:
					return -628,0246f, -303,3065f, 34,344f;
				
				case 2:
					return 2583,988f, 462,0469f, 107,6029f;
				
				case 3:
					return 2580,507f, 464,5832f, 107,6221f;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 0:
					return -760,229f, 5580,359f, 35,715f;
				
				case 1:
					return -761,0624f, 5582,312f, 35,7147f;
				
				case 2:
					return 869,051f, 4277,67f, 49,818f;
				
				case 3:
					return 871,7905f, 4274,402f, 49,7146f;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1262,771f, 3545,986f, 34,156f;
				
				case 1:
					return 1262,579f, 3543,2f, 34,0949f;
				
				case 2:
					return 3267,652f, 5193,673f, 18,647f;
				
				case 3:
					return 3267,535f, 5195,878f, 18,5816f;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam0)
			{
				case 0:
					return 2367,248f, 2543,451f, 45,6674f;
				
				case 1:
					return 2367,014f, 2545,721f, 45,6677f;
				
				case 2:
					return -150,2777f, 4254,731f, 43,9326f;
				
				case 3:
					return -152,0774f, 4253,445f, 43,9326f;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam0)
			{
				case 0:
					return 2663,858f, 1647,215f, 23,591f;
				
				case 1:
					return 2666,016f, 1647,944f, 23,591f;
				
				case 2:
					return -1280,633f, 2547,46f, 17,3591f;
				
				case 3:
					return -1282,371f, 2547,876f, 17,37f;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam0)
			{
				case 0:
					return 1469,529f, 6551,833f, 13,6859f;
				
				case 1:
					return 1467,004f, 6553,542f, 13,0021f;
				
				case 2:
					return -2194,738f, 4289,563f, 48,1788f;
				
				case 3:
					return -2194,927f, 4294,458f, 48,1778f;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam0)
			{
				case 0:
					return -1493,868f, 4971,427f, 62,8999f;
				
				case 1:
					return -1493,724f, 4973,524f, 62,8252f;
				
				case 2:
					return -275,9652f, 2843,377f, 52,7614f;
				
				case 3:
					return -277,7419f, 2842,275f, 52,9643f;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam0)
			{
				case 0:
					return 1877,726f, 6408,415f, 45,6693f;
				
				case 1:
					return 1875,782f, 6410,669f, 45,7787f;
				
				case 2:
					return 1988,311f, 3057,091f, 46,2154f;
				
				case 3:
					return 1986,222f, 3058,368f, 46,2142f;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam0)
			{
				case 0:
					return 3427,592f, 3761,231f, 29,6426f;
				
				case 1:
					return 3425,21f, 3760,805f, 29,6426f;
				
				case 2:
					return -882,5007f, 4411,087f, 19,9037f;
				
				case 3:
					return -883,6259f, 4412,307f, 19,9037f;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam0)
			{
				case 0:
					return 2693,03f, 3272,094f, 54,2405f;
				
				case 1:
					return 2694,956f, 3273,563f, 54,2405f;
				
				case 2:
					return -1894,451f, 1990,114f, 141,1348f;
				
				case 3:
					return -1894,868f, 1992,274f, 141,0269f;
				
				default:
			}
			break;
		
		case 144:
			switch (iParam0)
			{
				case 0:
					return -2549,511f, 2316,669f, 32,2158f;
				
				case 1:
					return -2547,563f, 2317,384f, 32,2157f;
				
				case 2:
					return 1546,036f, 2166,394f, 77,7272f;
				
				case 3:
					return 1545,655f, 2168,622f, 77,7442f;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 0:
					return 503,867f, -1493,363f, 28,2883f;
				
				case 1:
					return 504,6224f, -1494,405f, 28,2883f;
				
				case 2:
					return 504,6451f, -1496,9f, 28,2883f;
				
				case 3:
					return 503,6253f, -1498,007f, 28,2887f;
				
				case 4:
					return 500,9527f, -1499,14f, 28,2889f;
				
				case 5:
					return 507,4373f, -1503,883f, 28,2889f;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 0:
					return -312,1628f, -1186,042f, 23,0713f;
				
				case 1:
					return -310,6528f, -1185,669f, 23,0333f;
				
				case 2:
					return -308,4798f, -1185,584f, 22,9995f;
				
				case 3:
					return -309,139f, -1186,971f, 23,0649f;
				
				case 4:
					return -305,8925f, -1198,135f, 23,564f;
				
				case 5:
					return -306,1386f, -1182,09f, 22,8008f;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 0:
					return 1513,673f, 765,7475f, 78,4001f;
				
				case 1:
					return 1527,02f, 789,6424f, 76,447f;
				
				case 2:
					return 1525,936f, 788,211f, 76,4419f;
				
				case 3:
					return 1526,019f, 789,6067f, 76,4456f;
				
				case 4:
					return 1513,723f, 770,645f, 76,4407f;
				
				case 5:
					return 1516,191f, 766,4432f, 76,5476f;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 0:
					return 1551,116f, 3724,427f, 35,4848f;
				
				case 1:
					return 1545,121f, 3722,03f, 33,5886f;
				
				case 2:
					return 1547,548f, 3723,741f, 33,4954f;
				
				case 3:
					return 1546,201f, 3721,774f, 33,545f;
				
				case 4:
					return 1545,146f, 3720,886f, 33,6064f;
				
				case 5:
					return 1551,819f, 3725,827f, 33,516f;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 0:
					return 1254,124f, 1829,985f, 82,4135f;
				
				case 1:
					return 1249,17f, 1815,615f, 80,1246f;
				
				case 2:
					return 1249,341f, 1816,916f, 80,1305f;
				
				case 3:
					return 1251,643f, 1832,683f, 80,0746f;
				
				case 4:
					return 1249,712f, 1833,293f, 79,8703f;
				
				case 5:
					return 1251,076f, 1822,674f, 80,2503f;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 0:
					return 1449,911f, 6495,073f, 19,3625f;
				
				case 1:
					return 1448,102f, 6495,157f, 19,3114f;
				
				case 2:
					return 1443,498f, 6497,688f, 19,1405f;
				
				case 3:
					return 1442,653f, 6498,777f, 19,0986f;
				
				case 4:
					return 1449,916f, 6497,037f, 19,3262f;
				
				case 5:
					return 1448,121f, 6497,12f, 19,2761f;
				
				default:
			}
			break;
		
		case 170:
			switch (iParam0)
			{
				case 0:
					return -556,357f, 290,0981f, 81,1763f;
				
				case 1:
					return -553,958f, 286,753f, 81,176f;
				
				case 2:
					return -554,596f, 287,779f, 81,176f;
				
				case 3:
					return -571,696f, 289,116f, 78,177f;
				
				case 4:
					return -575,702f, 287,487f, 78,177f;
				
				case 5:
					return -564,3809f, 290,6519f, 84,3764f;
				
				case 6:
					return -559,0345f, 286,976f, 84,3764f;
				
				case 7:
					return -560,352f, 284,717f, 84,376f;
				
				case 8:
					return -560,747f, 285,985f, 84,376f;
				
				case 9:
					return -557,0615f, 287,471f, 81,1763f;
				
				case 10:
					return -554,796f, 282,944f, 81,176f;
				
				case 11:
					return -554,748f, 281,804f, 81,176f;
				
				case 12:
					return -561,814f, 288,184f, 81,177f;
				
				case 13:
					return -575,763f, 288,792f, 78,177f;
				
				case 14:
					return -561,92f, 281,7512f, 84,6764f;
				
				case 15:
					return -563,477f, 286,831f, 84,376f;
				
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

int func_636(int iParam0)
{
	if (((func_129(iParam0, 1) || func_129(iParam0, 2)) || func_129(iParam0, 3)) || func_129(iParam0, 4))
	{
		return 1;
	}
	if ((((((((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 1)) || func_154(iParam0, 2)) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29))
	{
		return 1;
	}
	if (((((((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15)) || func_129(iParam0, 10)) || func_129(iParam0, 11)) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
	{
		return 1;
	}
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		return 1;
	}
	if (((((((((func_578(iParam0, 5) || func_578(iParam0, 6)) || func_578(iParam0, 7)) || func_578(iParam0, 8)) || func_578(iParam0, 9)) || func_578(iParam0, 10)) || func_578(iParam0, 11)) || func_578(iParam0, 12)) || func_578(iParam0, 13)) || func_578(iParam0, 14))
	{
		return 1;
	}
	if ((((((((((func_578(iParam0, 19) || func_578(iParam0, 20)) || func_578(iParam0, 21)) || func_578(iParam0, 22)) || func_578(iParam0, 23)) || func_578(iParam0, 24)) || func_578(iParam0, 25)) || func_578(iParam0, 26)) || func_45(iParam0, 0)) || func_45(iParam0, 1)) || func_45(iParam0, 2))
	{
		return 1;
	}
	if ((((((((((((((func_45(iParam0, 9) || func_45(iParam0, 10)) || func_45(iParam0, 11)) || func_45(iParam0, 12)) || func_45(iParam0, 13)) || func_45(iParam0, 14)) || func_45(iParam0, 15)) || func_45(iParam0, 16)) || func_45(iParam0, 17)) || func_45(iParam0, 18)) || func_45(iParam0, 19)) || func_45(iParam0, 20)) || func_45(iParam0, 21)) || func_45(iParam0, 22)) || func_45(iParam0, 23))
	{
		return 1;
	}
	if ((((((((func_2(iParam0, 0) || func_2(iParam0, 1)) || func_2(iParam0, 2)) || func_2(iParam0, 3)) || func_2(iParam0, 4)) || func_2(iParam0, 5)) || func_2(iParam0, 6)) || func_2(iParam0, 7)) || func_2(iParam0, 8))
	{
		return 1;
	}
	if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
	{
		return 1;
	}
	if (((((((((((((func_586(iParam0, 13) || func_586(iParam0, 14)) || func_586(iParam0, 15)) || func_586(iParam0, 16)) || func_586(iParam0, 17)) || func_586(iParam0, 18)) || func_586(iParam0, 19)) || func_586(iParam0, 20)) || func_586(iParam0, 21)) || func_586(iParam0, 22)) || func_586(iParam0, 23)) || func_586(iParam0, 24)) || func_586(iParam0, 25)) || func_586(iParam0, 26))
	{
		return 1;
	}
	if ((((((((((((((func_130(iParam0, 0) || func_130(iParam0, 1)) || func_130(iParam0, 2)) || func_130(iParam0, 3)) || func_130(iParam0, 4)) || func_130(iParam0, 5)) || func_130(iParam0, 6)) || func_130(iParam0, 7)) || func_130(iParam0, 8)) || func_130(iParam0, 9)) || func_130(iParam0, 10)) || func_130(iParam0, 11)) || func_130(iParam0, 12)) || func_130(iParam0, 13)) || func_130(iParam0, 14))
	{
		return 1;
	}
	if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
	{
		return 1;
	}
	if (((func_128(iParam0, 11) || func_128(iParam0, 12)) || func_128(iParam0, 13)) || func_128(iParam0, 14))
	{
		return 1;
	}
	if ((((((((func_128(iParam0, 15) || func_128(iParam0, 16)) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
	{
		return 1;
	}
	if (((((((((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 26)) || func_130(iParam0, 27)) || func_130(iParam0, 28)) || func_130(iParam0, 29)) || func_130(iParam0, 30)) || func_130(iParam0, 31)) || func_128(iParam0, 26)) || func_128(iParam0, 27))
	{
		return 1;
	}
	if ((((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_128(iParam0, 31)) || func_586(iParam0, 31))
	{
		return 1;
	}
	if (((func_125(iParam0, 4) || func_125(iParam0, 5)) || func_125(iParam0, 6)) || func_125(iParam0, 7))
	{
		return 1;
	}
	if (func_123(iParam0, 3))
	{
		if (func_122(iParam0) == -1)
		{
			return 1;
		}
	}
	if ((((func_123(iParam0, 4) || func_123(iParam0, 5)) || func_123(iParam0, 6)) || func_123(iParam0, 7)) || func_123(iParam0, 8))
	{
		return 1;
	}
	if ((func_123(iParam0, 9) || func_125(iParam0, 1)) || func_125(iParam0, 2))
	{
		return 1;
	}
	if (((((((((((((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 2)) || func_126(iParam0, 3)) || func_126(iParam0, 4)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7)) || func_126(iParam0, 8)) || func_126(iParam0, 9)) || func_126(iParam0, 10)) || func_126(iParam0, 11)) || func_126(iParam0, 15)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14))
	{
		return 1;
	}
	if (((((((func_126(iParam0, 16) || func_126(iParam0, 17)) || func_126(iParam0, 18)) || func_126(iParam0, 19)) || func_126(iParam0, 20)) || func_126(iParam0, 21)) || func_126(iParam0, 22)) || func_126(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_637(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_638(int iParam0)
{
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		return 6;
	}
	if (((((((((((((((((((((func_129(iParam0, 1) || func_129(iParam0, 2)) || func_129(iParam0, 3)) || func_129(iParam0, 5)) || func_129(iParam0, 18)) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13)) || func_130(iParam0, 20)) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
	{
		return 6;
	}
	if ((((((((((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 1)) || func_154(iParam0, 2)) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29)) || func_2(iParam0, 13)) || func_2(iParam0, 14))
	{
		return 26;
	}
	return 26;
}

bool func_639(int iParam0, int iParam1)
{
	return ((unk_0xE5DBF9B6126856CA(iParam0) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam0), 0)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(iParam0), iParam1, 0));
}

int func_640(int iParam0)
{
	if (func_106() == 21)
	{
		if ((func_129(iParam0, 0) || func_129(iParam0, 14)) || func_129(iParam0, 16))
		{
			return -1;
		}
		if (func_129(iParam0, 15) || func_129(iParam0, 17))
		{
			return 0;
		}
	}
	if (func_129(iParam0, 14) || func_129(iParam0, 16))
	{
		return -1;
	}
	if (func_129(iParam0, 15) || func_129(iParam0, 17))
	{
		return 0;
	}
	if (func_125(iParam0, 10) || func_125(iParam0, 11))
	{
		return 0;
	}
	if (func_42() == 36)
	{
		if (func_128(iParam0, 17))
		{
			return -1;
		}
		else if (func_128(iParam0, 19))
		{
			return 0;
		}
		else if (func_128(iParam0, 20))
		{
			return 1;
		}
	}
	return -1;
}

int func_641(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return 1;
	}
	if (((func_129(iParam0, 14) || func_129(iParam0, 16)) || func_129(iParam0, 15)) || func_129(iParam0, 17))
	{
		return 1;
	}
	if (func_577(iParam0))
	{
		return 1;
	}
	if (func_42() == 36)
	{
		if ((func_128(iParam0, 17) || func_128(iParam0, 19)) || func_128(iParam0, 20))
		{
			return 1;
		}
	}
	if (((func_130(iParam0, 20) || func_130(iParam0, 22)) || func_130(iParam0, 21)) || func_130(iParam0, 23))
	{
		return 1;
	}
	if (((func_125(iParam0, 8) || func_125(iParam0, 9)) || func_125(iParam0, 10)) || func_125(iParam0, 11))
	{
		return 1;
	}
	if (func_123(iParam0, 3))
	{
		if (func_122(iParam0) != -1)
		{
			return 1;
		}
	}
	if (((((((((func_123(iParam0, 10) || func_123(iParam0, 11)) || func_123(iParam0, 12)) || func_123(iParam0, 13)) || func_123(iParam0, 14)) || func_123(iParam0, 15)) || func_123(iParam0, 16)) || func_123(iParam0, 17)) || func_123(iParam0, 18)) || func_123(iParam0, 19))
	{
		return 1;
	}
	if (func_126(iParam0, 29) || func_126(iParam0, 30))
	{
		return 1;
	}
	return 0;
}

void func_642(int iParam0)
{
	switch (func_106())
	{
		case 26:
			if (func_692(iParam0))
			{
				if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_658(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 27:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 5))
				{
					if (func_114(Local_933.f_33[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_33[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_657(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_114(Local_933.f_33[0]))
				{
					if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_33[0], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
					{
						func_656(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
						func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
						unk_0x71199B01895C6202(func_659(iParam0));
						func_694(iParam0, func_585(iParam0));
					}
				}
			}
			break;
		
		case 24:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[4], -1))
					{
						if (func_114(Local_933.f_404[4]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[5], -1))
					{
						if (func_114(Local_933.f_404[5]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[5], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 25:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[0], -1))
					{
						if (func_114(Local_933.f_404[0]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 15))
				{
					if (func_639(Local_933.f_404[0], 0))
					{
						if (func_114(Local_933.f_404[0]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
							{
								func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[1], -1))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 17))
				{
					if (func_639(Local_933.f_404[1], 0))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
							{
								func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
			}
			break;
		
		case 28:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 18))
				{
					if (func_114(Local_933.f_404[1]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_655(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_129(iParam0, 19))
				{
					if (func_114(Local_933.f_404[1]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
						{
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_129(iParam0, 20))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_129(iParam0, 21))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_129(iParam0, 26))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 5, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_129(iParam0, 27))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 6, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 10))
				{
					if (func_114(Local_933.f_404[2]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[2], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 11))
				{
					if (func_114(Local_933.f_404[3]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[3], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 12))
				{
					if (func_114(Local_933.f_404[4]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 13))
				{
					if (func_114(Local_933.f_404[4]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (((func_129(iParam0, 22) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25))
				{
					if (Local_933.f_514 == -1)
					{
						if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
						{
							Local_933.f_508 = iParam0;
							if (func_179(Local_933.f_509))
							{
								func_632(iParam0);
							}
							else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
							{
								Local_933.f_509 = { 0f, 0f, 0f };
								Local_933.f_512 = 0f;
								Local_933.f_508 = -1;
								Local_933.f_513 = 0;
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
			}
			break;
		
		case 29:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[3], -1))
					{
						if (func_114(Local_933.f_404[3]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[3], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[4], -1))
					{
						if (func_114(Local_933.f_404[4]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 30:
			if (func_692(iParam0))
			{
				iVar0 = func_654(iParam0);
				if (func_154(iParam0, 6))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_653(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_652(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 8))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 9))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 2, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 0))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_653(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 1))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 2))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 2, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 3))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_653(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 4))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_587(iParam0, 5))
				{
					if (func_114(Local_933.f_404[iVar0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[iVar0], func_638(iParam0), func_659(iParam0), 2, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 31:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[1], -1))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 15))
				{
					if (func_639(Local_933.f_404[1], 0))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
							{
								func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[2], -1))
					{
						if (func_114(Local_933.f_404[2]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[2], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 17))
				{
					if (func_639(Local_933.f_404[2], 0))
					{
						if (func_114(Local_933.f_404[2]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[2], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
							{
								func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_154(iParam0, 6))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							func_653(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_652(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							if (func_578(iParam0, 16))
							{
								unk_0xE121AE1BBF90E186(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), true);
							}
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 7))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 0, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_652(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							if (func_578(iParam0, 16))
							{
								unk_0xE121AE1BBF90E186(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), true);
							}
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 8))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_652(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							if (func_578(iParam0, 16))
							{
								unk_0xE121AE1BBF90E186(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), true);
							}
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_154(iParam0, 9))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), 2, 1, 1, 1))
						{
							func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
							func_652(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							if (func_578(iParam0, 16))
							{
								unk_0xE121AE1BBF90E186(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), true);
							}
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 32:
			if (func_692(iParam0))
			{
				if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_651(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 33:
			if (func_692(iParam0))
			{
				if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_578(iParam0, 3) || func_578(iParam0, 4))
						{
							if (func_179(Local_933.f_509))
							{
								func_648(iParam0);
							}
							else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
							{
								Local_933.f_509 = { 0f, 0f, 0f };
								Local_933.f_512 = 0f;
								Local_933.f_508 = -1;
								Local_933.f_513 = 0;
								unk_0x1365063FA6365BE8(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), true);
								if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), 0))
								{
									vVar1 = { unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), true) };
									unk_0xECC26BBDC0AD318B(vVar1.x, (vVar1.y - 0,1f), (vVar1.z - 0,1f), vVar1.x, (vVar1.y + 0,1f), (vVar1.z + 0,1f), 300, 1, -494615257, 0, 1, 1, -1082130432);
									unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 227, true);
									unk_0xD458AC1C1D29C3B4(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), 0, 0);
									func_120(unk_0x1B50683925F00106(Local_933.f_73[iParam0]), -1, 0);
								}
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
						else if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_647(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 34:
			if (func_692(iParam0))
			{
				if (func_578(iParam0, 5))
				{
					if (func_114(Local_933.f_404[0]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							unk_0x71199B01895C6202(func_659(iParam0));
							func_646(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (func_578(iParam0, 6))
				{
					if (func_114(Local_933.f_404[1]))
					{
						if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
						{
							unk_0x71199B01895C6202(func_659(iParam0));
							func_646(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
				else if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_646(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 35:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[3], -1))
					{
						if (func_114(Local_933.f_404[3]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[3], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[4], -1))
					{
						if (func_114(Local_933.f_404[4]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_645(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							if (!unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]), 0))
							{
								if (!func_578(iParam0, 18))
								{
									func_119(iParam0);
								}
							}
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 36:
			if (func_692(iParam0))
			{
				if (func_129(iParam0, 14))
				{
					if (func_639(Local_933.f_404[1], -1))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_129(iParam0, 16))
				{
					if (func_639(Local_933.f_404[2], -1))
					{
						if (func_114(Local_933.f_404[2]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[2], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_45(iParam0, 8))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_33[0]), -1, 0))
					{
						if (func_114(Local_933.f_33[0]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_33[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_45(iParam0, 28) || func_45(iParam0, 29))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_404[func_572(iParam0)]), -1, 0))
					{
						if (func_114(Local_933.f_404[func_572(iParam0)]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[func_572(iParam0)], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
			}
			break;
		
		case 37:
			if (func_692(iParam0))
			{
				if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_644(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
		
		case 39:
			if (func_692(iParam0))
			{
				if (func_578(iParam0, 30))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_33[0]), -1, 0))
					{
						if (func_114(Local_933.f_33[0]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_33[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_45(iParam0, 28))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_404[0]), -1, 0))
					{
						if (func_114(Local_933.f_404[0]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[0], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_45(iParam0, 29))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_404[1]), -1, 0))
					{
						if (func_114(Local_933.f_404[1]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[1], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
				else if (func_45(iParam0, 30))
				{
					if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_933.f_404[2]), -1, 0))
					{
						if (func_114(Local_933.f_404[2]))
						{
							if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[2], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
							{
								func_620(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
								func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
								unk_0x71199B01895C6202(func_659(iParam0));
								func_694(iParam0, func_585(iParam0));
							}
						}
					}
				}
			}
			break;
		
		case 38:
			if (func_692(iParam0))
			{
				if (Local_933.f_514 == -1)
				{
					if (Local_933.f_508 == -1 || Local_933.f_508 == iParam0)
					{
						Local_933.f_508 = iParam0;
						if (func_2(iParam0, 13))
						{
							if (func_114(Local_933.f_404[4]))
							{
								if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), -1, 1, 1, 1))
								{
									Local_933.f_509 = { 0f, 0f, 0f };
									Local_933.f_512 = 0f;
									Local_933.f_508 = -1;
									Local_933.f_513 = 0;
									func_621(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
									func_655(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
									unk_0x71199B01895C6202(func_659(iParam0));
									func_694(iParam0, func_585(iParam0));
								}
							}
						}
						else if (func_2(iParam0, 14))
						{
							if (func_114(Local_933.f_404[4]))
							{
								if (func_637(&(Local_933.f_73[iParam0]), Local_933.f_404[4], func_638(iParam0), func_659(iParam0), 1, 1, 1, 1))
								{
									Local_933.f_509 = { 0f, 0f, 0f };
									Local_933.f_512 = 0f;
									Local_933.f_508 = -1;
									Local_933.f_513 = 0;
									func_617(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 0);
									func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
									unk_0x71199B01895C6202(func_659(iParam0));
									func_694(iParam0, func_585(iParam0));
								}
							}
						}
						else if (func_179(Local_933.f_509))
						{
							func_632(iParam0);
						}
						else if (func_626(&(Local_933.f_73[iParam0]), func_638(iParam0), func_659(iParam0), Local_933.f_509, Local_933.f_512, 1, 1, 1))
						{
							Local_933.f_509 = { 0f, 0f, 0f };
							Local_933.f_512 = 0f;
							Local_933.f_508 = -1;
							Local_933.f_513 = 0;
							func_643(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]));
							func_618(iParam0, unk_0x1B50683925F00106(Local_933.f_73[iParam0]), 1);
							unk_0x71199B01895C6202(func_659(iParam0));
							func_694(iParam0, func_585(iParam0));
						}
					}
				}
			}
			break;
	}
}

void func_643(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, false, true);
	unk_0xAFF39FB306F8E232(iParam1, 5, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 0);
}

void func_644(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0xAFF39FB306F8E232(iParam1, 17, true);
	unk_0xFADC0A217229F6B5(iParam1, true);
}

void func_645(int iParam0, int iParam1)
{
	if ((((((((((func_578(iParam0, 19) || func_578(iParam0, 20)) || func_578(iParam0, 21)) || func_578(iParam0, 22)) || func_578(iParam0, 23)) || func_578(iParam0, 24)) || func_578(iParam0, 25)) || func_578(iParam0, 26)) || func_45(iParam0, 0)) || func_45(iParam0, 1)) || func_45(iParam0, 2))
	{
		unk_0x11AD11297DC58CC7(iParam1, true);
		if (!func_578(iParam0, 18))
		{
			unk_0x1365063FA6365BE8(iParam1, true);
		}
		else
		{
			unk_0x1365063FA6365BE8(iParam1, false);
		}
		unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
		unk_0xFADC0A217229F6B5(iParam1, true);
	}
}

void func_646(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
}

void func_647(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 2017895192, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x298903DD96203C2C(iParam1, 100);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE8832A9E16A57A1F(iParam1, true, 1);
	unk_0x120A395B0ECB8EA5(iParam1, true);
}

void func_648(int iParam0)
{
	switch (Local_933.f_513)
	{
		case 0:
			if (unk_0xE5DBF9B6126856CA(Local_933.f_404[0]))
			{
				iVar0 = unk_0xA5FBBC2F619A4DE2(Local_933.f_404[0]);
				if (!unk_0x437347B10A200C4B(iVar0, 0))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, func_650(iParam0)) };
					Local_933.f_509 = { vVar1 };
					Local_933.f_512 = (unk_0xD9522BA9E27E1349(iVar0) + func_649(iParam0));
					Local_933.f_513++;
				}
			}
			break;
		
		case 1:
			break;
	}
}

float func_649(int iParam0)
{
	if (func_578(iParam0, 3))
	{
		return -70f;
	}
	else if (func_578(iParam0, 4))
	{
		return 30f;
	}
	return 0f;
}

Vector3 func_650(int iParam0)
{
	if (func_578(iParam0, 3))
	{
		return -2f, -5f, -1f;
	}
	else if (func_578(iParam0, 4))
	{
		return 2f, -6f, -1f;
	}
	return 0f, -2f, 0f;
}

void func_651(int iParam0, int iParam1)
{
	iVar0 = func_623(iParam0);
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, func_598(iParam0));
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, func_591(iParam0), 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, func_590(iParam0));
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, iVar0);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
	func_618(iParam0, iParam1, 1);
}

void func_652(int iParam0, int iParam1)
{
	if (func_578(iParam0, 16))
	{
		unk_0xAFF39FB306F8E232(iParam1, 0, true);
		unk_0x3CC33E4E9CE523F4(iParam1, 1);
		unk_0xB8AFFA077E15E999(iParam1, 1);
		unk_0x25C5402CC10F76CD(iParam1, true);
		unk_0x9FA191B317572861(iParam1, 200f);
	}
}

void func_653(int iParam0, int iParam1)
{
	unk_0xAFF39FB306F8E232(iParam1, 17, true);
	unk_0xAFF39FB306F8E232(iParam1, 3, false);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x25C5402CC10F76CD(iParam1, true);
	unk_0x9FA191B317572861(iParam1, 200f);
	if (func_578(iParam0, 16))
	{
		if (!func_79(12))
		{
			unk_0xE121AE1BBF90E186(iParam1, true);
		}
		unk_0x11AD11297DC58CC7(iParam1, true);
		unk_0xE8832A9E16A57A1F(iParam1, true, 1);
		unk_0x120A395B0ECB8EA5(iParam1, true);
	}
	if (func_578(iParam0, 16))
	{
	}
}

int func_654(int iParam0)
{
	if (((func_154(iParam0, 6) || func_154(iParam0, 7)) || func_154(iParam0, 8)) || func_154(iParam0, 9))
	{
		return 0;
	}
	else if ((func_587(iParam0, 0) || func_587(iParam0, 1)) || func_587(iParam0, 2))
	{
		return 1;
	}
	else if ((func_587(iParam0, 3) || func_587(iParam0, 4)) || func_587(iParam0, 5))
	{
		return 2;
	}
	return 0;
}

void func_655(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xE733200EEF894A35(iParam1, 1);
	}
	unk_0xAFF39FB306F8E232(iParam1, 5, true);
	unk_0xAFF39FB306F8E232(iParam1, 3, false);
	unk_0x3CC33E4E9CE523F4(iParam1, 2);
	unk_0x083F03A847B640E9(iParam1, 1);
	unk_0xB35CCEC0D4946813(iParam1, 2);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x25C5402CC10F76CD(iParam1, true);
	unk_0x9FA191B317572861(iParam1, 200f);
	if (bParam2)
	{
	}
}

void func_656(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, -2084633992, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

void func_657(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, -2084633992, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

void func_658(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, true);
	unk_0x6DF7BF67E86AAE86(iParam1, Global_1575003);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x262EF6C6306BEA6C(iParam1, 453432689, 9999999, false, true);
	unk_0x3CC33E4E9CE523F4(iParam1, 3);
	unk_0x4E885A246A9D983A(iParam1, 42, false);
	unk_0xB8AFFA077E15E999(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 43, true);
	unk_0x26A6B1686E33113F(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 146, true);
	unk_0x298903DD96203C2C(iParam1, 75);
	unk_0xFADC0A217229F6B5(iParam1, true);
	unk_0xE733200EEF894A35(iParam1, 1);
}

int func_659(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return func_691();
	}
	if (((func_129(iParam0, 1) || func_129(iParam0, 2)) || func_129(iParam0, 3)) || func_129(iParam0, 4))
	{
		return func_690();
	}
	if (func_129(iParam0, 5))
	{
		return func_689();
	}
	if (((((((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15)) || func_129(iParam0, 10)) || func_129(iParam0, 11)) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
	{
		return func_688(iParam0);
	}
	if (((func_129(iParam0, 14) || func_129(iParam0, 15)) || func_129(iParam0, 16)) || func_129(iParam0, 17))
	{
		return func_687(iParam0);
	}
	if (((((((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
	{
		return func_686(iParam0);
	}
	if ((((((((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 1)) || func_154(iParam0, 2)) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29))
	{
		return func_685(iParam0);
	}
	if (((((((((func_154(iParam0, 6) || func_154(iParam0, 7)) || func_154(iParam0, 8)) || func_154(iParam0, 9)) || func_587(iParam0, 0)) || func_587(iParam0, 1)) || func_587(iParam0, 2)) || func_587(iParam0, 3)) || func_587(iParam0, 4)) || func_587(iParam0, 5))
	{
		return func_684(iParam0);
	}
	if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
	{
		return func_683(iParam0);
	}
	if ((((func_578(iParam0, 2) || func_578(iParam0, 3)) || func_578(iParam0, 4)) || func_45(iParam0, 6)) || func_45(iParam0, 7))
	{
		return func_681(iParam0);
	}
	if (((((((((((func_578(iParam0, 5) || func_578(iParam0, 6)) || func_578(iParam0, 7)) || func_578(iParam0, 8)) || func_578(iParam0, 9)) || func_578(iParam0, 10)) || func_578(iParam0, 11)) || func_578(iParam0, 12)) || func_578(iParam0, 13)) || func_578(iParam0, 14)) || func_2(iParam0, 11)) || func_2(iParam0, 12))
	{
		return func_680(iParam0);
	}
	if ((((((((((func_578(iParam0, 19) || func_578(iParam0, 20)) || func_578(iParam0, 21)) || func_578(iParam0, 22)) || func_578(iParam0, 23)) || func_578(iParam0, 24)) || func_578(iParam0, 25)) || func_578(iParam0, 26)) || func_45(iParam0, 0)) || func_45(iParam0, 1)) || func_45(iParam0, 2))
	{
		return func_679(iParam0);
	}
	if (func_45(iParam0, 8))
	{
		return func_691();
	}
	if ((((((((((((((func_45(iParam0, 9) || func_45(iParam0, 10)) || func_45(iParam0, 11)) || func_45(iParam0, 12)) || func_45(iParam0, 13)) || func_45(iParam0, 14)) || func_45(iParam0, 15)) || func_45(iParam0, 16)) || func_45(iParam0, 17)) || func_45(iParam0, 18)) || func_45(iParam0, 19)) || func_45(iParam0, 20)) || func_45(iParam0, 21)) || func_45(iParam0, 22)) || func_45(iParam0, 23))
	{
		return func_677(iParam0);
	}
	if (((func_578(iParam0, 30) || func_45(iParam0, 28)) || func_45(iParam0, 29)) || func_45(iParam0, 30))
	{
		return func_691();
	}
	if ((((((((((func_2(iParam0, 0) || func_2(iParam0, 1)) || func_2(iParam0, 2)) || func_2(iParam0, 3)) || func_2(iParam0, 4)) || func_2(iParam0, 5)) || func_2(iParam0, 6)) || func_2(iParam0, 7)) || func_2(iParam0, 8)) || func_2(iParam0, 13)) || func_2(iParam0, 14))
	{
		return func_676(iParam0);
	}
	if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
	{
		return func_675(iParam0);
	}
	if ((func_123(iParam0, 9) || func_125(iParam0, 1)) || func_125(iParam0, 2))
	{
		return func_674(iParam0);
	}
	if (((((((((((((func_586(iParam0, 13) || func_586(iParam0, 14)) || func_586(iParam0, 15)) || func_586(iParam0, 16)) || func_586(iParam0, 17)) || func_586(iParam0, 18)) || func_586(iParam0, 19)) || func_586(iParam0, 20)) || func_586(iParam0, 21)) || func_586(iParam0, 22)) || func_586(iParam0, 23)) || func_586(iParam0, 24)) || func_586(iParam0, 25)) || func_586(iParam0, 26))
	{
		return func_673(iParam0);
	}
	if ((((((((((((((func_130(iParam0, 0) || func_130(iParam0, 1)) || func_130(iParam0, 2)) || func_130(iParam0, 3)) || func_130(iParam0, 4)) || func_130(iParam0, 5)) || func_130(iParam0, 6)) || func_130(iParam0, 7)) || func_130(iParam0, 8)) || func_130(iParam0, 9)) || func_130(iParam0, 10)) || func_130(iParam0, 11)) || func_130(iParam0, 12)) || func_130(iParam0, 13)) || func_130(iParam0, 14))
	{
		return func_672(iParam0);
	}
	if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
	{
		return func_671(iParam0);
	}
	if (((((((((func_123(iParam0, 10) || func_123(iParam0, 11)) || func_123(iParam0, 12)) || func_123(iParam0, 13)) || func_123(iParam0, 14)) || func_123(iParam0, 15)) || func_123(iParam0, 16)) || func_123(iParam0, 17)) || func_123(iParam0, 18)) || func_123(iParam0, 19))
	{
		return func_670(iParam0);
	}
	if (((func_128(iParam0, 11) || func_128(iParam0, 12)) || func_128(iParam0, 13)) || func_128(iParam0, 14))
	{
		return func_669(iParam0);
	}
	if ((((((((func_128(iParam0, 15) || func_128(iParam0, 16)) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
	{
		return func_668(iParam0);
	}
	if (((func_130(iParam0, 20) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
	{
		return func_667();
	}
	if (((((((((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 26)) || func_130(iParam0, 27)) || func_130(iParam0, 28)) || func_130(iParam0, 29)) || func_130(iParam0, 30)) || func_130(iParam0, 31)) || func_128(iParam0, 26)) || func_128(iParam0, 27))
	{
		return func_666(iParam0);
	}
	if ((((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_128(iParam0, 31)) || func_586(iParam0, 31))
	{
		return func_665(iParam0);
	}
	if (((((((func_125(iParam0, 4) || func_125(iParam0, 5)) || func_125(iParam0, 6)) || func_125(iParam0, 7)) || func_125(iParam0, 8)) || func_125(iParam0, 9)) || func_125(iParam0, 10)) || func_125(iParam0, 11))
	{
		return func_664();
	}
	if (((((func_123(iParam0, 3) || func_123(iParam0, 4)) || func_123(iParam0, 5)) || func_123(iParam0, 6)) || func_123(iParam0, 7)) || func_123(iParam0, 8))
	{
		return func_663(iParam0);
	}
	if (func_106() == 13)
	{
		return func_662(iParam0);
	}
	if (func_106() == 14)
	{
		return func_661(iParam0);
	}
	return func_660();
}

int func_660()
{
	switch (func_106())
	{
		case 26:
			return 1581098148;
		
		case 27:
			return -1920001264;
		
		case 28:
			return -1920001264;
		
		case 29:
			return 1330042375;
		
		case 30:
			return 1466037421;
		
		case 32:
			return 1581098148;
		
		case 33:
			return 1752208920;
		
		case 34:
			return 1330042375;
		
		case 31:
			return 788443093;
		
		case 38:
			return -39239064;
		
		case 0:
			return 1752208920;
		
		case 1:
			return 1822283721;
		
		case 2:
			return 2064532783;
		
		case 4:
			return 588969535;
		
		case 6:
			return -681004504;
		
		case 5:
			return 1644266841;
		
		case 9:
			return 1581098148;
		
		case 3:
			return -166363761;
		
		case 10:
			return -681004504;
		
		case 7:
			return -1782092083;
		
		case 8:
			return 1752208920;
		
		case 11:
			return 587703123;
		
		case 12:
			return 1330042375;
		
		case 13:
			return 1330042375;
		
		case 14:
			return 1520708641;
		
		case 20:
			return 1330042375;
		
		default:
	}
	return 1822283721;
}

int func_661(int iParam0)
{
	switch (func_42())
	{
		case 38:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 1520708641;
				
				case 2:
					return 832784782;
				
				case 3:
					return 832784782;
				
				case 4:
					return 832784782;
				
				case 5:
					return 832784782;
				
				case 6:
					return 1520708641;
				
				case 7:
					return 832784782;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 1520708641;
				
				case 2:
					return 832784782;
				
				case 3:
					return 832784782;
				
				case 4:
					return 1520708641;
				
				case 5:
					return 832784782;
				
				case 6:
					return 832784782;
				
				case 7:
					return 832784782;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 1520708641;
				
				case 2:
					return 1520708641;
				
				case 3:
					return 832784782;
				
				case 4:
					return 832784782;
				
				case 5:
					return 832784782;
				
				case 6:
					return 832784782;
				
				case 7:
					return 832784782;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 832784782;
				
				case 2:
					return 1520708641;
				
				case 3:
					return 832784782;
				
				case 4:
					return 832784782;
				
				case 5:
					return 1520708641;
				
				case 6:
					return 832784782;
				
				case 7:
					return 832784782;
				
				default:
			}
			break;
	}
	return 1520708641;
}

int func_662(int iParam0)
{
	switch (func_42())
	{
		case 37:
			if ((((func_126(iParam0, 0) || func_126(iParam0, 1)) || func_126(iParam0, 4)) || func_126(iParam0, 8)) || func_126(iParam0, 9))
			{
				return 1032073858;
			}
			if ((((func_126(iParam0, 2) || func_126(iParam0, 3)) || func_126(iParam0, 5)) || func_126(iParam0, 6)) || func_126(iParam0, 7))
			{
				return 1330042375;
			}
			if (((((func_126(iParam0, 10) || func_126(iParam0, 11)) || func_126(iParam0, 12)) || func_126(iParam0, 13)) || func_126(iParam0, 14)) || func_126(iParam0, 15))
			{
				return 42647445;
			}
			break;
	}
	return 1330042375;
}

int func_663(int iParam0)
{
	if (func_106() == 8)
	{
		switch (func_42())
		{
			case 62:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 653210662;
				}
				else if (func_123(iParam0, 6))
				{
					return 653210662;
				}
				else if (func_123(iParam0, 7))
				{
					return 653210662;
				}
				else if (func_123(iParam0, 8))
				{
					return 653210662;
				}
				break;
			
			case 63:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 2119136831;
				}
				else if (func_123(iParam0, 6))
				{
					return 2119136831;
				}
				else if (func_123(iParam0, 7))
				{
					return 2119136831;
				}
				else if (func_123(iParam0, 8))
				{
					return 2119136831;
				}
				break;
			
			case 64:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 6))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 7))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 8))
				{
					return 1330042375;
				}
				break;
			
			case 65:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 611648169;
				}
				else if (func_123(iParam0, 6))
				{
					return 611648169;
				}
				else if (func_123(iParam0, 7))
				{
					return 611648169;
				}
				else if (func_123(iParam0, 8))
				{
					return 611648169;
				}
				break;
			
			case 66:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 1752208920;
				}
				else if (func_123(iParam0, 6))
				{
					return 1752208920;
				}
				else if (func_123(iParam0, 7))
				{
					return 1752208920;
				}
				else if (func_123(iParam0, 8))
				{
					return 1752208920;
				}
				break;
			
			case 67:
				if (func_123(iParam0, 3))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 4))
				{
					return -1635724594;
				}
				else if (func_123(iParam0, 5))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 6))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 7))
				{
					return 1330042375;
				}
				else if (func_123(iParam0, 8))
				{
					return 1330042375;
				}
				break;
			}
	}
	return func_660();
}

int func_664()
{
	switch (func_42())
	{
		case 42:
		case 43:
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
		case 60:
		case 61:
			return -1782092083;
		
		default:
	}
	return -1782092083;
}

int func_665(int iParam0)
{
	switch (func_42())
	{
		case 78:
		case 79:
		case 81:
		case 83:
			if (func_128(iParam0, 28))
			{
				return -1211756494;
			}
			else if (func_128(iParam0, 29) || func_128(iParam0, 30))
			{
				return -681004504;
			}
			break;
		
		case 80:
		case 84:
			if (func_128(iParam0, 28) || func_128(iParam0, 29))
			{
				return -681004504;
			}
			else if (func_128(iParam0, 30))
			{
				return -1211756494;
			}
			break;
		
		case 82:
			if (((func_128(iParam0, 28) || func_128(iParam0, 29)) || func_128(iParam0, 30)) || func_586(iParam0, 31))
			{
				return -681004504;
			}
			else if (func_128(iParam0, 31))
			{
				return -1211756494;
			}
			break;
	}
	return -681004504;
}

int func_666(int iParam0)
{
	switch (func_42())
	{
		case 74:
		case 75:
		case 76:
		case 77:
			if (((((((((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 26)) || func_130(iParam0, 27)) || func_130(iParam0, 28)) || func_130(iParam0, 29)) || func_130(iParam0, 30)) || func_130(iParam0, 31)) || func_128(iParam0, 26)) || func_128(iParam0, 27))
			{
				return -166363761;
			}
			break;
	}
	return -166363761;
}

int func_667()
{
	switch (func_42())
	{
		case 68:
		case 69:
			return 1939545845;
		
		default:
	}
	return 1939545845;
}

int func_668(int iParam0)
{
	switch (func_42())
	{
		case 31:
			if (((((((func_128(iParam0, 15) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return 1644266841;
			}
			else if (func_128(iParam0, 16))
			{
				return 1822283721;
			}
			break;
		
		case 32:
			if (func_128(iParam0, 15))
			{
				return -1211756494;
			}
			else if (((((func_128(iParam0, 18) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -1697435671;
			}
			else if (func_128(iParam0, 16) || func_128(iParam0, 17))
			{
				return 1822283721;
			}
			break;
		
		case 33:
			if (func_128(iParam0, 15))
			{
				return 1936142927;
			}
			else if ((((((func_128(iParam0, 17) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -673538407;
			}
			else if (func_128(iParam0, 16))
			{
				return 1822283721;
			}
			break;
		
		case 34:
			if (func_128(iParam0, 15))
			{
				return 330231874;
			}
			else if (((((func_128(iParam0, 17) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22))
			{
				return -673538407;
			}
			else if (func_128(iParam0, 16) || func_128(iParam0, 23))
			{
				return 1822283721;
			}
			break;
		
		case 35:
			if (func_128(iParam0, 15))
			{
				return 2097407511;
			}
			else if ((((((func_128(iParam0, 17) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20)) || func_128(iParam0, 21)) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -673538407;
			}
			else if (func_128(iParam0, 16))
			{
				return 1822283721;
			}
			break;
		
		case 36:
			if (func_128(iParam0, 15))
			{
				return -1589423867;
			}
			else if ((((func_128(iParam0, 16) || func_128(iParam0, 17)) || func_128(iParam0, 18)) || func_128(iParam0, 19)) || func_128(iParam0, 20))
			{
				return 1822283721;
			}
			else if ((func_128(iParam0, 21) || func_128(iParam0, 22)) || func_128(iParam0, 23))
			{
				return -245247470;
			}
			break;
	}
	return 1644266841;
}

int func_669(int iParam0)
{
	if (((func_128(iParam0, 11) || func_128(iParam0, 12)) || func_128(iParam0, 13)) || func_128(iParam0, 14))
	{
		return -681004504;
	}
	return -681004504;
}

int func_670(int iParam0)
{
	switch (func_42())
	{
		case 90:
			return 1330042375;
		
		case 91:
			return 588969535;
		
		case 92:
			return 611648169;
		
		case 93:
			return -1773333796;
		
		case 94:
			return 1752208920;
		
		default:
	}
	return 1330042375;
}

int func_671(int iParam0)
{
	switch (func_42())
	{
		case 19:
			if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return -48477765;
			}
			break;
		
		case 20:
			if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return 1822283721;
			}
			break;
		
		case 21:
			if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return -398748745;
			}
			break;
		
		case 22:
			if (((((((((((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2)) || func_128(iParam0, 3)) || func_128(iParam0, 4)) || func_128(iParam0, 5)) || func_128(iParam0, 6)) || func_128(iParam0, 7)) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return 1329576454;
			}
			break;
		
		case 23:
			if ((func_128(iParam0, 0) || func_128(iParam0, 1)) || func_128(iParam0, 2))
			{
				return 832784782;
			}
			if (func_128(iParam0, 3))
			{
				return 1520708641;
			}
			if (func_128(iParam0, 4) || func_128(iParam0, 5))
			{
				return 1466037421;
			}
			if (func_128(iParam0, 6))
			{
				return 1520708641;
			}
			if ((((func_128(iParam0, 7) || func_128(iParam0, 8)) || func_128(iParam0, 9)) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return 832784782;
			}
			break;
		
		case 24:
			if (func_128(iParam0, 0))
			{
				return 1330042375;
			}
			if (func_128(iParam0, 1))
			{
				return -44746786;
			}
			if ((func_128(iParam0, 2) || func_128(iParam0, 3)) || func_128(iParam0, 4))
			{
				return 1330042375;
			}
			if (func_128(iParam0, 5))
			{
				return -44746786;
			}
			if (func_128(iParam0, 6) || func_128(iParam0, 7))
			{
				return 1330042375;
			}
			if (func_128(iParam0, 8))
			{
				return -44746786;
			}
			if ((func_128(iParam0, 9) || func_128(iParam0, 10)) || func_126(iParam0, 25))
			{
				return 1330042375;
			}
			break;
	}
	return -48477765;
}

int func_672(int iParam0)
{
	switch (func_42())
	{
		case 13:
			switch (iParam0)
			{
				case 0:
					return 2064532783;
				
				case 1:
					return 1822107721;
				
				case 2:
					return 2064532783;
				
				case 3:
					return 2064532783;
				
				case 4:
					return 1822107721;
				
				case 5:
					return 1768677545;
				
				case 6:
					return 1768677545;
				
				case 7:
					return 1768677545;
				
				case 8:
					return 1768677545;
				
				case 9:
					return 1822107721;
				
				case 10:
					return 2064532783;
				
				case 11:
					return 1768677545;
				
				case 12:
					return 1822107721;
				
				case 13:
					return 2064532783;
				
				case 14:
					return 2064532783;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					return 2097407511;
				
				case 1:
					return 2097407511;
				
				case 2:
					return 2097407511;
				
				case 3:
					return 2097407511;
				
				case 4:
					return 2097407511;
				
				case 5:
					return 2097407511;
				
				case 6:
					return 2097407511;
				
				case 7:
					return 343259175;
				
				case 8:
					return 343259175;
				
				case 9:
					return 343259175;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					return 1330042375;
				
				case 1:
					return -44746786;
				
				case 2:
					return 1330042375;
				
				case 3:
					return 1330042375;
				
				case 4:
					return -44746786;
				
				case 5:
					return -44746786;
				
				case 6:
					return 1330042375;
				
				case 7:
					return 1768677545;
				
				case 8:
					return 1768677545;
				
				case 9:
					return 1768677545;
				
				case 10:
					return 1768677545;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					return -198252413;
				
				case 1:
					return -198252413;
				
				case 2:
					return -198252413;
				
				case 3:
					return -198252413;
				
				case 4:
					return -198252413;
				
				case 5:
					return -198252413;
				
				case 6:
					return -198252413;
				
				case 7:
					return -198252413;
				
				case 8:
					return -198252413;
				
				case 9:
					return -198252413;
				
				case 10:
					return -198252413;
				
				case 11:
					return -198252413;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					return -9308122;
				
				case 1:
					return -9308122;
				
				case 2:
					return -9308122;
				
				case 3:
					return -1176698112;
				
				case 4:
					return -9308122;
				
				case 5:
					return -9308122;
				
				case 6:
					return -9308122;
				
				case 7:
					return -1176698112;
				
				case 8:
					return -1176698112;
				
				case 9:
					return -9308122;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 832784782;
				
				case 2:
					return 832784782;
				
				case 3:
					return 1520708641;
				
				case 4:
					return 1520708641;
				
				case 5:
					return 832784782;
				
				case 6:
					return 832784782;
				
				case 7:
					return 832784782;
				
				case 8:
					return 832784782;
				
				case 9:
					return 832784782;
				
				case 10:
					return 1520708641;
				
				case 11:
					return 1520708641;
				
				default:
			}
			break;
	}
	return 2064532783;
}

int func_673(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1752208920;
				
				case 1:
					return 1752208920;
				
				case 2:
					return 1752208920;
				
				case 3:
					return 1752208920;
				
				case 4:
					return 1752208920;
				
				case 5:
					return 1752208920;
				
				case 6:
					return 1752208920;
				
				case 7:
					return 1752208920;
				
				case 8:
					return 1752208920;
				
				case 9:
					return 1752208920;
				
				case 10:
					return 1752208920;
				
				case 11:
					return 1752208920;
				
				case 12:
					return 1752208920;
				
				case 13:
					return 1752208920;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1330042375;
				
				case 1:
					return 1330042375;
				
				case 2:
					return 1330042375;
				
				case 3:
					return 1330042375;
				
				case 4:
					return -44746786;
				
				case 5:
					return -44746786;
				
				case 6:
					return 1330042375;
				
				case 7:
					return 1330042375;
				
				case 8:
					return -44746786;
				
				case 9:
					return 1330042375;
				
				case 10:
					return 1330042375;
				
				case 11:
					return -44746786;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2064532783;
				
				case 1:
					return 2064532783;
				
				case 2:
					return 1822107721;
				
				case 3:
					return 1822107721;
				
				case 4:
					return 1822107721;
				
				case 5:
					return 2064532783;
				
				case 6:
					return 2064532783;
				
				case 7:
					return 2064532783;
				
				case 8:
					return 2064532783;
				
				case 9:
					return 2064532783;
				
				case 10:
					return 1822107721;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 588969535;
				
				case 1:
					return 588969535;
				
				case 2:
					return 588969535;
				
				case 3:
					return 588969535;
				
				case 4:
					return 588969535;
				
				case 5:
					return 588969535;
				
				case 6:
					return 588969535;
				
				case 7:
					return 588969535;
				
				case 8:
					return 588969535;
				
				case 9:
					return 588969535;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 663522487;
				
				case 1:
					return 663522487;
				
				case 2:
					return 663522487;
				
				case 3:
					return -1872961334;
				
				case 4:
					return 663522487;
				
				case 5:
					return 663522487;
				
				case 6:
					return 663522487;
				
				case 7:
					return 663522487;
				
				case 8:
					return -1872961334;
				
				case 9:
					return 663522487;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 832784782;
				
				case 1:
					return 832784782;
				
				case 2:
					return 1520708641;
				
				case 3:
					return 1520708641;
				
				case 4:
					return 832784782;
				
				case 5:
					return 832784782;
				
				case 6:
					return 832784782;
				
				case 7:
					return 832784782;
				
				case 8:
					return 832784782;
				
				case 9:
					return 832784782;
				
				default:
			}
			break;
	}
	return 1752208920;
}

int func_674(int iParam0)
{
	switch (func_42())
	{
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
			if (func_123(iParam0, 9))
			{
				return -673538407;
			}
			else if (func_125(iParam0, 1) || func_125(iParam0, 2))
			{
				return -973145378;
			}
			break;
	}
	return -673538407;
}

int func_675(int iParam0)
{
	switch (func_42())
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
			{
				return 1822283721;
			}
			break;
	}
	return 1822283721;
}

int func_676(int iParam0)
{
	switch (func_42())
	{
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
			if (func_2(iParam0, 0))
			{
				return -236444766;
			}
			return -39239064;
			break;
	}
	return -39239064;
}

int func_677(int iParam0)
{
	if ((func_45(iParam0, 24) || func_45(iParam0, 25)) || func_45(iParam0, 26))
	{
		return Local_933.f_626[func_678(iParam0)];
	}
	switch (func_42())
	{
		case 230:
			if ((func_45(iParam0, 9) || func_45(iParam0, 10)) || func_45(iParam0, 12))
			{
				return -1211756494;
			}
			if (func_45(iParam0, 11) || func_45(iParam0, 13))
			{
				return -1745486195;
			}
			if (func_45(iParam0, 14) || func_45(iParam0, 15))
			{
				return 587703123;
			}
			if (func_45(iParam0, 16) || func_45(iParam0, 17))
			{
				return -1697435671;
			}
			if (func_45(iParam0, 18))
			{
				return -1589423867;
			}
			break;
		
		case 231:
			if (func_45(iParam0, 9) || func_45(iParam0, 18))
			{
				return -1697435671;
			}
			if (func_45(iParam0, 10))
			{
				return -1589423867;
			}
			if (func_45(iParam0, 11) || func_45(iParam0, 12))
			{
				return -1745486195;
			}
			if (func_45(iParam0, 13))
			{
				return -245247470;
			}
			if (func_45(iParam0, 14))
			{
				return -995747907;
			}
			if (func_45(iParam0, 15))
			{
				return -236444766;
			}
			if (func_45(iParam0, 16))
			{
				return -1211756494;
			}
			if (func_45(iParam0, 17))
			{
				return 587703123;
			}
			if (func_45(iParam0, 19) || func_45(iParam0, 20))
			{
				return -245247470;
			}
			if (func_45(iParam0, 21))
			{
				return -1176698112;
			}
			if (func_45(iParam0, 22) || func_45(iParam0, 23))
			{
				return -9308122;
			}
			break;
		
		case 232:
			if ((func_45(iParam0, 9) || func_45(iParam0, 15)) || func_45(iParam0, 16))
			{
				return -945854168;
			}
			if (((func_45(iParam0, 10) || func_45(iParam0, 11)) || func_45(iParam0, 12)) || func_45(iParam0, 18))
			{
				return -945854168;
			}
			if (func_45(iParam0, 13))
			{
				return 330231874;
			}
			if (func_45(iParam0, 14))
			{
				return 587703123;
			}
			if (func_45(iParam0, 17))
			{
				return -951490775;
			}
			if (func_45(iParam0, 19))
			{
				return 587703123;
			}
			if (func_45(iParam0, 20))
			{
				return -951490775;
			}
			break;
		
		case 233:
			if (func_45(iParam0, 9) || func_45(iParam0, 10))
			{
				return -1589423867;
			}
			if (func_45(iParam0, 11) || func_45(iParam0, 17))
			{
				return -1211756494;
			}
			if (func_45(iParam0, 12))
			{
				return -1745486195;
			}
			if (func_45(iParam0, 13) || func_45(iParam0, 14))
			{
				return 587703123;
			}
			if ((func_45(iParam0, 15) || func_45(iParam0, 16)) || func_45(iParam0, 18))
			{
				return -1697435671;
			}
			if (func_45(iParam0, 19))
			{
				return -951490775;
			}
			break;
		
		case 234:
			if (func_45(iParam0, 9) || func_45(iParam0, 10))
			{
				return 587703123;
			}
			if ((((((func_45(iParam0, 11) || func_45(iParam0, 12)) || func_45(iParam0, 15)) || func_45(iParam0, 16)) || func_45(iParam0, 18)) || func_45(iParam0, 19)) || func_45(iParam0, 20))
			{
				return -1697435671;
			}
			if (func_45(iParam0, 13) || func_45(iParam0, 14))
			{
				return -1211756494;
			}
			if (func_45(iParam0, 17))
			{
				return -775102410;
			}
			if (func_45(iParam0, 21))
			{
				return 343259175;
			}
			break;
	}
	return -1589423867;
}

int func_678(int iParam0)
{
	if (func_45(iParam0, 24))
	{
		return 0;
	}
	else if (func_45(iParam0, 25))
	{
		return 1;
	}
	else if (func_45(iParam0, 26))
	{
		return 2;
	}
	return 0;
}

int func_679(int iParam0)
{
	if ((((((((((func_578(iParam0, 19) || func_578(iParam0, 20)) || func_578(iParam0, 21)) || func_578(iParam0, 22)) || func_578(iParam0, 23)) || func_578(iParam0, 24)) || func_578(iParam0, 25)) || func_578(iParam0, 26)) || func_45(iParam0, 0)) || func_45(iParam0, 1)) || func_45(iParam0, 2))
	{
		switch (func_42())
		{
			case 225:
			case 227:
			case 229:
				return 832784782;
			
			case 226:
			case 228:
				return 1330042375;
			}
		
		default:
	}
	return 832784782;
}

int func_680(int iParam0)
{
	if (((((((((((func_578(iParam0, 5) || func_578(iParam0, 6)) || func_578(iParam0, 7)) || func_578(iParam0, 8)) || func_578(iParam0, 9)) || func_578(iParam0, 10)) || func_578(iParam0, 11)) || func_578(iParam0, 12)) || func_578(iParam0, 13)) || func_578(iParam0, 14)) || func_2(iParam0, 11)) || func_2(iParam0, 12))
	{
		switch (func_42())
		{
			case 210:
				return -261389155;
			
			case 211:
				return -261389155;
			
			case 212:
				return -673538407;
			
			case 213:
				return -261389155;
			
			case 214:
				return -261389155;
			}
		
		default:
	}
	return -261389155;
}

int func_681(int iParam0)
{
	if (func_148(iParam0))
	{
		return 1752208920;
	}
	if ((((func_578(iParam0, 2) || func_578(iParam0, 3)) || func_578(iParam0, 4)) || func_45(iParam0, 6)) || func_45(iParam0, 7))
	{
		return func_682();
	}
	return 1752208920;
}

int func_682()
{
	switch (Local_933.f_574)
	{
		case 0:
			return -39239064;
			break;
		
		case 1:
			return 1466037421;
			break;
		
		case 2:
			return 611648169;
			break;
	}
	return -39239064;
}

int func_683(int iParam0)
{
	switch (func_42())
	{
		case 195:
			if ((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 28))
			{
				return 1581098148;
			}
			if (func_154(iParam0, 27))
			{
				return 368603149;
			}
			if ((func_154(iParam0, 29) || func_154(iParam0, 30)) || func_154(iParam0, 31))
			{
				return 2072724299;
			}
			break;
		
		case 196:
			if (func_154(iParam0, 25) || func_154(iParam0, 26))
			{
				return 1581098148;
			}
			if (func_154(iParam0, 27))
			{
				return 368603149;
			}
			if (((func_154(iParam0, 29) || func_154(iParam0, 30)) || func_154(iParam0, 31)) || func_154(iParam0, 28))
			{
				return 2072724299;
			}
			break;
		
		case 197:
			if ((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 28))
			{
				return 1581098148;
			}
			if (func_154(iParam0, 27))
			{
				return 368603149;
			}
			if ((func_154(iParam0, 29) || func_154(iParam0, 30)) || func_154(iParam0, 31))
			{
				return 2072724299;
			}
			break;
		
		case 198:
			if (func_154(iParam0, 25) || func_154(iParam0, 26))
			{
				return 1581098148;
			}
			if (func_154(iParam0, 27))
			{
				return 368603149;
			}
			if (((func_154(iParam0, 28) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
			{
				return 2072724299;
			}
			break;
		
		case 199:
			if (func_154(iParam0, 25) || func_154(iParam0, 26))
			{
				return 1581098148;
			}
			if (func_154(iParam0, 27))
			{
				return 368603149;
			}
			if (((func_154(iParam0, 28) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
			{
				return 2072724299;
			}
			break;
	}
	return 1581098148;
}

int func_684(int iParam0)
{
	if (((((((((func_154(iParam0, 6) || func_154(iParam0, 7)) || func_154(iParam0, 8)) || func_154(iParam0, 9)) || func_587(iParam0, 0)) || func_587(iParam0, 1)) || func_587(iParam0, 2)) || func_587(iParam0, 3)) || func_587(iParam0, 4)) || func_587(iParam0, 5))
	{
		if (func_106() == 30)
		{
			return 1466037421;
		}
		else
		{
			return 788443093;
		}
	}
	return 1466037421;
}

int func_685(int iParam0)
{
	if (((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 2)) || func_578(iParam0, 27)) || func_578(iParam0, 28))
	{
		switch (func_42())
		{
			case 205:
				return 1330042375;
			
			case 206:
				return 832784782;
			
			case 207:
				return 611648169;
			
			case 208:
				return 1466037421;
			
			case 209:
				return -39239064;
			}
		
		default:
	}
	if (func_154(iParam0, 4) || func_154(iParam0, 5))
	{
		switch (func_42())
		{
			case 205:
				return 1330042375;
			
			case 206:
				return 1520708641;
			
			case 207:
				return 611648169;
			
			case 208:
				return 1466037421;
			
			case 209:
				return -39239064;
			}
		
		default:
	}
	if ((func_154(iParam0, 3) || func_154(iParam0, 1)) || func_578(iParam0, 28))
	{
		switch (func_42())
		{
			case 205:
				return 1330042375;
			
			case 206:
				return 1520708641;
			
			case 207:
				return 611648169;
			
			case 208:
				return 1466037421;
			
			case 209:
				return -236444766;
			}
		
		default:
	}
	return 1330042375;
}

int func_686(int iParam0)
{
	if (((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27))
	{
		return -1920001264;
	}
	if (((func_154(iParam0, 10) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
	{
		return 2072724299;
	}
	return -1920001264;
}

int func_687(int iParam0)
{
	uVar0 = func_682();
	if (func_106() == 8)
	{
		switch (func_42())
		{
			case 62:
				return 832784782;
			
			case 63:
				return -9308122;
			
			case 64:
				return 1330042375;
			
			case 65:
				return 611648169;
			
			case 66:
				return 1752208920;
			
			case 67:
				return 1330042375;
			}
		
		default:
	}
	if (func_129(iParam0, 14))
	{
		if (func_106() == 29)
		{
			switch (func_42())
			{
				case 205:
					return 1330042375;
				
				case 206:
					return 1520708641;
				
				case 207:
					return 611648169;
				
				case 208:
					return 1466037421;
				
				case 209:
					return -39239064;
				}
			
			default:
		}
		switch (func_106())
		{
			case 20:
				return 1822283721;
			
			case 36:
			case 21:
				return 1752208920;
			
			case 31:
				return 788443093;
			
			case 0:
				switch (func_42())
				{
					case 1:
						return 1752208920;
					
					case 2:
						return 1330042375;
					
					case 3:
						return 2064532783;
					
					case 4:
						return 588969535;
					
					case 5:
						return 663522487;
					
					case 6:
						return 832784782;
					
					default:
				}
				break;
			
			case 2:
				switch (func_42())
				{
					case 13:
						return 2064532783;
					
					case 14:
						return 2097407511;
					
					case 15:
						return 1330042375;
					
					case 16:
						return -198252413;
					
					case 17:
						return -9308122;
					
					case 18:
						return 832784782;
					
					default:
				}
				break;
			
			case 1:
				return 1822283721;
			
			case 4:
				switch (func_42())
				{
					case 19:
						return -48477765;
					
					case 20:
						return 1822283721;
					
					case 21:
						return -398748745;
					
					case 22:
						return 1329576454;
					
					case 23:
						return 832784782;
					
					case 24:
						return 1330042375;
					
					default:
				}
				break;
			
			case 5:
				return 1822283721;
			
			case 13:
				return 1330042375;
		}
		return uVar0;
	}
	if (func_129(iParam0, 15))
	{
		switch (func_106())
		{
			case 36:
			case 21:
				return 1752208920;
			
			case 31:
				return 788443093;
			
			case 5:
				return 1822283721;
			
			default:
		}
		return uVar0;
	}
	if (func_129(iParam0, 16))
	{
		if (func_106() == 29)
		{
			switch (func_42())
			{
				case 205:
					return 1330042375;
				
				case 206:
					return 1520708641;
				
				case 207:
					return 611648169;
				
				case 208:
					return 1466037421;
				
				case 209:
					return -39239064;
				}
			
			default:
		}
		switch (func_106())
		{
			case 20:
				return 1822283721;
			
			case 36:
			case 21:
				return 1752208920;
			
			case 31:
				return 788443093;
			
			case 0:
				switch (func_42())
				{
					case 1:
						return 1752208920;
					
					case 2:
						return 1330042375;
					
					case 3:
						return 2064532783;
					
					case 4:
						return 588969535;
					
					case 5:
						return 663522487;
					
					case 6:
						return 832784782;
					
					default:
				}
				break;
			
			case 1:
				return 1822283721;
			
			case 2:
				switch (func_42())
				{
					case 13:
						return 2064532783;
					
					case 14:
						return 2097407511;
					
					case 15:
						return 1330042375;
					
					case 16:
						return -198252413;
					
					case 17:
						return -9308122;
					
					case 18:
						return 832784782;
					
					default:
				}
				break;
			
			case 4:
				switch (func_42())
				{
					case 19:
						return -48477765;
					
					case 20:
						return 1822283721;
					
					case 21:
						return -398748745;
					
					case 22:
						return 1329576454;
					
					case 23:
						return 832784782;
					
					case 24:
						return 1330042375;
					
					default:
				}
				break;
			
			case 5:
				return 1822283721;
			
			case 13:
				return 1330042375;
		}
		return uVar0;
	}
	if (func_129(iParam0, 17))
	{
		switch (func_106())
		{
			case 36:
			case 21:
				return 1752208920;
			
			case 31:
				return 788443093;
			
			case 5:
				return 1822283721;
			
			default:
		}
		return uVar0;
	}
	return -39239064;
}

int func_688(int iParam0)
{
	switch (func_42())
	{
		case 200:
			if (func_129(iParam0, 7))
			{
				return -236444766;
			}
			if (((func_129(iParam0, 8) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
			{
				return -39239064;
			}
			if (func_129(iParam0, 10))
			{
				return 891945583;
			}
			if (((func_129(iParam0, 11) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
			{
				return 611648169;
			}
			break;
		
		case 201:
			if (func_129(iParam0, 7))
			{
				return 1466037421;
			}
			if (((func_129(iParam0, 8) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
			{
				return 832784782;
			}
			if (func_129(iParam0, 10))
			{
				return 891945583;
			}
			if (((func_129(iParam0, 11) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
			{
				return 611648169;
			}
			break;
		
		case 202:
			if (func_129(iParam0, 7))
			{
				return 1466037421;
			}
			if (((func_129(iParam0, 8) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
			{
				return 832784782;
			}
			if (func_129(iParam0, 10))
			{
				return 1330042375;
			}
			if (((func_129(iParam0, 11) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
			{
				return 1330042375;
			}
			break;
		
		case 203:
			if (func_129(iParam0, 7))
			{
				return -1176698112;
			}
			if (((func_129(iParam0, 8) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
			{
				return -9308122;
			}
			if (func_129(iParam0, 10))
			{
				return 1330042375;
			}
			if (((func_129(iParam0, 11) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
			{
				return 1330042375;
			}
			break;
		
		case 204:
			if (func_129(iParam0, 7))
			{
				return 1752208920;
			}
			if (((func_129(iParam0, 8) || func_129(iParam0, 9)) || func_154(iParam0, 14)) || func_154(iParam0, 15))
			{
				return 1752208920;
			}
			if (func_129(iParam0, 10))
			{
				return 1822283721;
			}
			if (((func_129(iParam0, 11) || func_129(iParam0, 12)) || func_154(iParam0, 16)) || func_154(iParam0, 17))
			{
				return 1822283721;
			}
			break;
	}
	return -39239064;
}

int func_689()
{
	return -1920001264;
}

int func_690()
{
	return 1581098148;
}

int func_691()
{
	return 1752208920;
}

int func_692(int iParam0)
{
	if (func_693(1))
	{
		bVar0 = true;
	}
	if (func_129(iParam0, 0))
	{
		if (!bVar0)
		{
			return 0;
		}
	}
	if (func_129(iParam0, 5))
	{
		if (!bVar0)
		{
			return 0;
		}
	}
	if (((func_129(iParam0, 1) || func_129(iParam0, 2)) || func_129(iParam0, 3)) || func_129(iParam0, 4))
	{
		if (!bVar0)
		{
			return 0;
		}
	}
	if (((((func_129(iParam0, 7) || func_129(iParam0, 8)) || func_129(iParam0, 9)) || func_129(iParam0, 10)) || func_129(iParam0, 11)) || func_129(iParam0, 12))
	{
		if (!bVar0)
		{
			return 0;
		}
	}
	if (func_129(iParam0, 14) || func_129(iParam0, 15))
	{
		switch (func_106())
		{
			case 20:
				if (!func_9(Local_933.f_404[2]))
				{
					return 0;
				}
				break;
			
			case 29:
			case 35:
				if (!func_9(Local_933.f_404[3]))
				{
					return 0;
				}
				break;
			
			case 24:
				if (!func_9(Local_933.f_404[4]))
				{
					return 0;
				}
				break;
			
			case 36:
			case 31:
				if (!func_9(Local_933.f_404[1]))
				{
					return 0;
				}
				break;
			
			case 1:
			case 0:
			case 2:
			case 4:
			case 5:
			case 13:
			case 8:
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
				break;
			
			default:
				if (!func_9(Local_933.f_404[0]))
				{
					return 0;
				}
				break;
			}
	}
	if (func_578(iParam0, 3) || func_578(iParam0, 4))
	{
		if (!func_9(Local_933.f_404[0]))
		{
			return 0;
		}
	}
	if (func_129(iParam0, 16) || func_129(iParam0, 17))
	{
		switch (func_106())
		{
			case 20:
				if (!func_9(Local_933.f_404[3]))
				{
					return 0;
				}
				break;
			
			case 29:
			case 35:
				if (!func_9(Local_933.f_404[4]))
				{
					return 0;
				}
				break;
			
			case 24:
				if (!func_9(Local_933.f_404[5]))
				{
					return 0;
				}
				break;
			
			case 36:
			case 31:
				if (!func_9(Local_933.f_404[2]))
				{
					return 0;
				}
				break;
			
			case 1:
			case 0:
			case 2:
			case 4:
			case 5:
			case 13:
			case 8:
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
				break;
			
			default:
				if (!func_9(Local_933.f_404[1]))
				{
					return 0;
				}
				break;
			}
	}
	switch (func_106())
	{
		case 20:
			if (func_126(iParam0, 29) || func_126(iParam0, 30))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 28:
			if (((((((((((((func_129(iParam0, 18) || func_129(iParam0, 19)) || func_129(iParam0, 20)) || func_129(iParam0, 21)) || func_129(iParam0, 22)) || func_129(iParam0, 23)) || func_129(iParam0, 24)) || func_129(iParam0, 25)) || func_129(iParam0, 26)) || func_129(iParam0, 27)) || func_154(iParam0, 10)) || func_154(iParam0, 11)) || func_154(iParam0, 12)) || func_154(iParam0, 13))
			{
				if (!bVar0)
				{
					return 0;
				}
				if (func_154(iParam0, 10))
				{
					if (!func_9(Local_933.f_404[2]))
					{
						return 0;
					}
				}
				if (func_154(iParam0, 11))
				{
					if (!func_9(Local_933.f_404[3]))
					{
						return 0;
					}
				}
				if (func_154(iParam0, 12) || func_154(iParam0, 13))
				{
					if (!func_9(Local_933.f_404[4]))
					{
						return 0;
					}
				}
				if (func_129(iParam0, 18) || func_129(iParam0, 19))
				{
					if (!func_9(Local_933.f_404[1]))
					{
						return 0;
					}
				}
				if (((func_129(iParam0, 20) || func_129(iParam0, 21)) || func_129(iParam0, 26)) || func_129(iParam0, 27))
				{
					if (!func_9(Local_933.f_404[0]))
					{
						return 0;
					}
				}
			}
			break;
		
		case 30:
			if (((((((((func_154(iParam0, 6) || func_154(iParam0, 7)) || func_154(iParam0, 8)) || func_154(iParam0, 9)) || func_587(iParam0, 0)) || func_587(iParam0, 1)) || func_587(iParam0, 2)) || func_587(iParam0, 3)) || func_587(iParam0, 4)) || func_587(iParam0, 5))
			{
				if (!func_9(Local_933.f_404[func_654(iParam0)]))
				{
					return 0;
				}
			}
			break;
		
		case 29:
			if ((((((((((((func_129(iParam0, 28) || func_129(iParam0, 29)) || func_129(iParam0, 30)) || func_129(iParam0, 31)) || func_154(iParam0, 0)) || func_154(iParam0, 1)) || func_154(iParam0, 2)) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5)) || func_578(iParam0, 27)) || func_578(iParam0, 28)) || func_578(iParam0, 29))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			if (((func_154(iParam0, 2) || func_154(iParam0, 3)) || func_154(iParam0, 4)) || func_154(iParam0, 5))
			{
				if (!func_9(Local_933.f_404[0]))
				{
					return 0;
				}
			}
			break;
		
		case 32:
			if ((((((func_154(iParam0, 25) || func_154(iParam0, 26)) || func_154(iParam0, 27)) || func_154(iParam0, 28)) || func_154(iParam0, 29)) || func_154(iParam0, 30)) || func_154(iParam0, 31))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 34:
			if (func_578(iParam0, 5))
			{
				if (!func_9(Local_933.f_404[0]))
				{
					return 0;
				}
			}
			if (func_578(iParam0, 6))
			{
				if (!func_9(Local_933.f_404[1]))
				{
					return 0;
				}
			}
			if (((((((func_578(iParam0, 7) || func_578(iParam0, 8)) || func_578(iParam0, 9)) || func_578(iParam0, 10)) || func_578(iParam0, 11)) || func_578(iParam0, 12)) || func_578(iParam0, 13)) || func_578(iParam0, 14))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 36:
			if (func_45(iParam0, 8))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 39:
			if (((func_578(iParam0, 30) || func_45(iParam0, 28)) || func_45(iParam0, 29)) || func_45(iParam0, 30))
			{
				if (func_578(iParam0, 30))
				{
					if (!bVar0)
					{
						return 0;
					}
				}
				else if (!func_9(Local_933.f_404[func_572(iParam0)]))
				{
					return 0;
				}
			}
			break;
		
		case 38:
			if ((((((((func_2(iParam0, 0) || func_2(iParam0, 1)) || func_2(iParam0, 2)) || func_2(iParam0, 3)) || func_2(iParam0, 4)) || func_2(iParam0, 5)) || func_2(iParam0, 6)) || func_2(iParam0, 7)) || func_2(iParam0, 8))
			{
				if (!func_9(Local_933.f_404[0]))
				{
					return 0;
				}
				if (!func_9(Local_933.f_404[1]))
				{
					return 0;
				}
				if (!func_9(Local_933.f_404[2]))
				{
					return 0;
				}
				if (!func_9(Local_933.f_404[3]))
				{
					return 0;
				}
			}
			if (func_2(iParam0, 13) || func_2(iParam0, 14))
			{
				if (!func_9(Local_933.f_404[4]))
				{
					return 0;
				}
			}
			break;
		
		case 1:
			if (((((((((func_586(iParam0, 0) || func_586(iParam0, 1)) || func_586(iParam0, 2)) || func_586(iParam0, 3)) || func_586(iParam0, 4)) || func_586(iParam0, 5)) || func_586(iParam0, 6)) || func_586(iParam0, 7)) || func_586(iParam0, 8)) || func_586(iParam0, 9))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 0:
			if (((((((((((((func_586(iParam0, 13) || func_586(iParam0, 14)) || func_586(iParam0, 15)) || func_586(iParam0, 16)) || func_586(iParam0, 17)) || func_586(iParam0, 18)) || func_586(iParam0, 19)) || func_586(iParam0, 20)) || func_586(iParam0, 21)) || func_586(iParam0, 22)) || func_586(iParam0, 23)) || func_586(iParam0, 24)) || func_586(iParam0, 25)) || func_586(iParam0, 26))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 2:
			if ((((((((((((((func_130(iParam0, 0) || func_130(iParam0, 1)) || func_130(iParam0, 2)) || func_130(iParam0, 3)) || func_130(iParam0, 4)) || func_130(iParam0, 5)) || func_130(iParam0, 6)) || func_130(iParam0, 7)) || func_130(iParam0, 8)) || func_130(iParam0, 9)) || func_130(iParam0, 10)) || func_130(iParam0, 11)) || func_130(iParam0, 12)) || func_130(iParam0, 13)) || func_130(iParam0, 14))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 5:
			if (func_641(iParam0))
			{
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
			}
			break;
		
		case 9:
			if (((func_130(iParam0, 20) || func_130(iParam0, 21)) || func_130(iParam0, 22)) || func_130(iParam0, 23))
			{
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
			}
			break;
		
		case 3:
			if (((((((((func_130(iParam0, 24) || func_130(iParam0, 25)) || func_130(iParam0, 26)) || func_130(iParam0, 27)) || func_130(iParam0, 28)) || func_130(iParam0, 29)) || func_130(iParam0, 30)) || func_130(iParam0, 31)) || func_128(iParam0, 26)) || func_128(iParam0, 27))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 7:
			if (((func_125(iParam0, 8) || func_125(iParam0, 9)) || func_125(iParam0, 10)) || func_125(iParam0, 11))
			{
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
			}
			break;
		
		case 8:
			if (func_123(iParam0, 3))
			{
				switch (func_42())
				{
					case 64:
					case 65:
					case 66:
						if (!func_9(func_122(iParam0)))
						{
							return 0;
						}
						break;
					}
			}
			break;
		
		case 11:
			if ((func_123(iParam0, 9) || func_125(iParam0, 1)) || func_125(iParam0, 2))
			{
				if (!bVar0)
				{
					return 0;
				}
			}
			break;
		
		case 12:
			if (((((((((func_123(iParam0, 10) || func_123(iParam0, 11)) || func_123(iParam0, 12)) || func_123(iParam0, 13)) || func_123(iParam0, 14)) || func_123(iParam0, 15)) || func_123(iParam0, 16)) || func_123(iParam0, 17)) || func_123(iParam0, 18)) || func_123(iParam0, 19))
			{
				if (!func_9(func_122(iParam0)))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_693(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!unk_0xE5DBF9B6126856CA(Local_933.f_33[iVar0]))
		{
			return 0;
		}
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_694(int iParam0, int iParam1)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_933.f_73[iParam0].f_1 = iParam1;
}

void func_695(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_123(iParam0, func_696(iVar0)))
		{
			if (!func_11(iVar0, 3))
			{
				if (unk_0xE5DBF9B6126856CA(Local_933.f_73[iParam0]))
				{
					iVar1 = unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iParam0]);
					if (func_576(Local_933.f_73[iParam0]))
					{
						Local_933.f_585[iVar0] = { unk_0x68F4C0EC296D3901(iVar1, false) };
						if (func_183(iVar0))
						{
							func_140(iVar0, 3);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_696(int iParam0)
{
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
		
		case 4:
			return 24;
		
		case 5:
			return 25;
		
		case 6:
			return 26;
		
		case 7:
			return 27;
		
		default:
	}
	return 20;
}

void func_697()
{
	switch (func_106())
	{
		case 21:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_33(11);
				}
			}
			break;
		
		case 26:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_33(3);
				}
			}
			break;
		
		case 27:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_33(3);
				}
			}
			break;
		
		case 24:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_694(8, 1);
					func_694(9, 1);
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(10, 1);
					func_694(11, 1);
					func_33(11);
				}
			}
			break;
		
		case 25:
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_33(11);
				}
			}
			break;
		
		case 29:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_694(8, 1);
					func_694(9, 1);
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(10, 1);
					func_694(11, 1);
					func_33(11);
				}
			}
			break;
		
		case 30:
			if (!func_7(21))
			{
				if (func_7(2))
				{
					if (func_43() >= 1)
					{
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
					}
					if (func_43() >= 2)
					{
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
					}
					if (func_43() >= 3)
					{
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
					}
					func_33(21);
				}
			}
			break;
		
		case 31:
			if (!func_7(21))
			{
				if (func_7(2))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_33(21);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10) && func_699())
				{
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_33(11);
				}
			}
			break;
		
		case 32:
			if (!func_79(3))
			{
				if (func_698())
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					if (func_42() == 195)
					{
						func_694(6, 1);
					}
					func_94(3);
				}
			}
			break;
		
		case 33:
			if (!func_79(5))
			{
				if (func_7(2))
				{
					if (func_43() >= 1)
					{
						func_694(0, 1);
					}
					if (func_43() >= 2)
					{
						func_694(3, 1);
					}
					if (func_43() >= 3)
					{
						func_694(4, 1);
					}
					func_94(5);
				}
			}
			if (!func_79(8))
			{
				if (func_79(7))
				{
					func_694(1, 1);
					func_694(2, 1);
					func_94(8);
				}
			}
			break;
		
		case 34:
			if (!func_79(9))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_694(8, 1);
					func_694(9, 1);
					func_94(9);
				}
			}
			break;
		
		case 35:
			if (!func_79(16))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_694(8, 1);
				func_694(9, 1);
				if (func_42() == 225 || func_42() == 228)
				{
					func_694(10, 1);
				}
				func_94(16);
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(11, 1);
					func_694(12, 1);
					func_33(11);
				}
			}
			break;
		
		case 36:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					if (func_43() >= 2)
					{
						func_694(3, 1);
					}
					if (func_43() >= 3)
					{
						func_694(4, 1);
					}
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10) && func_6(9))
				{
					func_694(1, 1);
					func_694(2, 1);
					func_33(11);
				}
			}
			break;
		
		case 37:
			if (!func_22(8))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_694(8, 1);
				func_694(9, 1);
				if (((func_42() == 231 || func_42() == 232) || func_42() == 233) || func_42() == 234)
				{
					func_694(10, 1);
				}
				if ((func_42() == 231 || func_42() == 232) || func_42() == 234)
				{
					func_694(11, 1);
				}
				if (func_42() == 231 || func_42() == 234)
				{
					func_694(12, 1);
				}
				if (func_42() == 231)
				{
					func_694(13, 1);
					func_694(14, 1);
				}
				func_20(8);
			}
			break;
		
		case 20:
			if (!func_7(3))
			{
				if (func_79(25))
				{
					func_694(0, 1);
				}
				if (func_2346() >= 1)
				{
					if (func_79(26))
					{
						func_694(1, 1);
					}
				}
				func_33(3);
			}
			if (func_79(27))
			{
				if (!func_7(11))
				{
					if (func_16())
					{
						if (func_3(&(Local_933.f_767), 30000, 0))
						{
							func_694(2, 1);
							func_694(3, 1);
							func_33(11);
						}
					}
				}
			}
			break;
		
		case 39:
			if (!func_7(3))
			{
				if (func_11(0, 4))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_33(3);
				}
			}
			break;
		
		case 38:
			if (!func_7(3))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_694(8, 1);
				if (func_6(5))
				{
					func_694(9, 1);
					func_694(10, 1);
				}
				func_33(3);
			}
			break;
		
		case 1:
			if (!func_7(3))
			{
				if (func_698())
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_694(8, 1);
					func_694(9, 1);
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(10, 1);
					func_694(11, 1);
					func_33(11);
				}
			}
			break;
		
		case 11:
			if (!func_7(3))
			{
				if (func_698())
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_33(3);
				}
			}
			break;
		
		case 0:
			if (!func_7(3))
			{
				if (func_698())
				{
					switch (func_42())
					{
						case 1:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							func_694(11, 1);
							func_694(12, 1);
							func_694(13, 1);
							break;
						
						case 2:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							func_694(11, 1);
							break;
						
						case 3:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							break;
						
						case 4:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							break;
						
						case 5:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							break;
						
						case 6:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							break;
					}
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(14, 1);
					func_694(15, 1);
					func_33(11);
				}
			}
			break;
		
		case 2:
			if (!func_7(3))
			{
				if (func_698())
				{
					switch (func_42())
					{
						case 13:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							func_694(11, 1);
							func_694(12, 1);
							func_694(13, 1);
							func_694(14, 1);
							break;
						
						case 14:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							break;
						
						case 15:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							break;
						
						case 16:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							func_694(11, 1);
							break;
						
						case 17:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							break;
						
						case 18:
							func_694(0, 1);
							func_694(1, 1);
							func_694(2, 1);
							func_694(3, 1);
							func_694(4, 1);
							func_694(5, 1);
							func_694(6, 1);
							func_694(7, 1);
							func_694(8, 1);
							func_694(9, 1);
							func_694(10, 1);
							func_694(11, 1);
							break;
					}
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(16, 1);
					func_694(17, 1);
					func_33(11);
				}
			}
			break;
		
		case 4:
			if (!func_79(22))
			{
				switch (func_42())
				{
					case 19:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
					
					case 20:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
					
					case 21:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
					
					case 22:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
					
					case 23:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
					
					case 24:
						func_694(0, 1);
						func_694(1, 1);
						func_694(2, 1);
						func_694(3, 1);
						func_694(4, 1);
						func_694(5, 1);
						func_694(6, 1);
						func_694(7, 1);
						func_694(8, 1);
						func_694(9, 1);
						func_694(10, 1);
						func_694(11, 1);
						func_694(13, 1);
						break;
				}
				func_94(22);
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(12, 1);
					func_694(13, 1);
					func_33(11);
				}
			}
			break;
		
		case 6:
			if (!func_7(27))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_33(27);
			}
			break;
		
		case 10:
			if (!func_7(3))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				if (func_42() == 82)
				{
					func_694(3, 1);
					func_694(4, 1);
				}
				func_33(3);
			}
			break;
		
		case 5:
			if (!func_7(3))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_694(8, 1);
				func_33(3);
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(9, 1);
					func_694(10, 1);
					func_694(11, 1);
					func_694(12, 1);
					func_33(11);
				}
			}
			break;
		
		case 9:
			if (!func_7(3))
			{
				if (func_137(1))
				{
					func_694(0, 1);
					func_694(1, 1);
					func_33(3);
				}
			}
			break;
		
		case 3:
			if (!func_7(3))
			{
				if (func_698())
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_694(6, 1);
					func_694(7, 1);
					func_694(8, 1);
					func_694(9, 1);
					func_33(3);
				}
			}
			break;
		
		case 7:
			if (!func_7(3))
			{
				iVar0 = 0;
				while (iVar0 < 22)
				{
					if (((((((func_125(iVar0, 8) || func_125(iVar0, 9)) || func_125(iVar0, 10)) || func_125(iVar0, 11)) || func_125(iVar0, 4)) || func_125(iVar0, 5)) || func_125(iVar0, 6)) || func_125(iVar0, 7))
					{
						func_694(iVar0, 1);
					}
					iVar0++;
				}
				func_33(3);
			}
			break;
		
		case 8:
			if (!func_7(3))
			{
				if (func_698())
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
					func_694(3, 1);
					func_694(4, 1);
					func_694(5, 1);
					func_33(3);
				}
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(6, 1);
					func_694(7, 1);
					func_33(11);
				}
			}
			break;
		
		case 12:
			if (!func_7(28))
			{
				if (func_2346() >= 1)
				{
					func_694(0, 1);
					func_694(1, 1);
					func_694(2, 1);
				}
				if (func_2346() >= 2)
				{
					func_694(3, 1);
				}
				if (func_2346() >= 3)
				{
					func_694(4, 1);
				}
				if (func_2346() >= 4)
				{
					func_694(5, 1);
				}
				if (func_2346() >= 5)
				{
					func_694(6, 1);
				}
				if (func_2346() >= 6)
				{
					func_694(7, 1);
				}
				if (func_2346() >= 7)
				{
					func_694(8, 1);
				}
				if (func_2346() >= 8)
				{
					func_694(9, 1);
				}
				func_33(28);
			}
			break;
		
		case 13:
			if (!func_7(3))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_694(8, 1);
				func_694(9, 1);
				func_694(10, 1);
				func_694(11, 1);
				func_694(12, 1);
				func_694(13, 1);
				func_694(14, 1);
				func_694(15, 1);
				func_33(3);
			}
			if (!func_7(11))
			{
				if (func_7(10))
				{
					func_694(16, 1);
					func_694(17, 1);
					func_33(11);
				}
			}
			break;
		
		case 14:
			if (!func_7(3))
			{
				func_694(0, 1);
				func_694(1, 1);
				func_694(2, 1);
				func_694(3, 1);
				func_694(4, 1);
				func_694(5, 1);
				func_694(6, 1);
				func_694(7, 1);
				func_33(3);
			}
			break;
	}
}

int func_698()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!func_11(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_699()
{
	if (func_43() == 1)
	{
		if (Global_262145.f_16227 == 0)
		{
			return 0;
		}
	}
	else if (func_43() == 2)
	{
		if (Global_262145.f_16228 == 0)
		{
			return 0;
		}
	}
	else if (func_43() == 3)
	{
		if (Global_262145.f_16229 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_700()
{
	switch (func_106())
	{
		case 25:
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(0, 1);
					func_189(1, 1);
					func_33(12);
				}
			}
			break;
		
		case 24:
			if (!func_79(1))
			{
				if (func_11(0, 4))
				{
					func_189(0, 1);
					func_189(1, 1);
					func_189(2, 1);
					func_189(3, 1);
					func_94(1);
				}
			}
			if (!func_7(12))
			{
				if ((func_7(10) && func_7(9)) && !func_79(0))
				{
					func_189(4, 1);
					func_189(5, 1);
					func_33(12);
				}
			}
			break;
		
		case 29:
			if (!func_7(19))
			{
				if (func_11(0, 4))
				{
					func_189(0, 1);
					func_189(1, 1);
					if (func_42() != 208)
					{
						func_189(2, 1);
					}
					func_33(19);
				}
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(3, 1);
					func_189(4, 1);
					func_33(12);
				}
			}
			break;
		
		case 30:
			if (!func_7(20))
			{
				if (func_7(2))
				{
					if (func_43() >= 1)
					{
						func_189(0, 1);
					}
					if (func_43() >= 2)
					{
						func_189(1, 1);
					}
					if (func_43() >= 3)
					{
						func_189(2, 1);
					}
					func_33(20);
				}
			}
			break;
		
		case 31:
			if (!func_7(20))
			{
				if (func_7(2))
				{
					func_189(0, 1);
					func_33(20);
				}
			}
			if (!func_7(12))
			{
				if (func_7(10) && func_699())
				{
					func_189(1, 1);
					func_189(2, 1);
					func_33(12);
				}
			}
			break;
		
		case 32:
			if (!func_79(2))
			{
				if (func_698())
				{
					func_189(0, 1);
					func_189(1, 1);
					func_94(2);
				}
			}
			break;
		
		case 33:
			if (!func_79(4))
			{
				if (func_79(7))
				{
					func_189(0, 1);
					func_94(4);
				}
			}
			break;
		
		case 34:
			if (!func_79(10))
			{
				if (func_11(0, 4))
				{
					func_189(0, 1);
					func_189(1, 1);
					func_94(10);
				}
			}
			break;
		
		case 35:
			if (!func_79(17))
			{
				func_189(0, 1);
				func_189(1, 1);
				func_189(2, 1);
				func_94(17);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(3, 1);
					func_189(4, 1);
					func_33(12);
				}
			}
			break;
		
		case 36:
			if (!func_22(5))
			{
				if (func_11(0, 4))
				{
					func_189(0, 1);
					if (func_43() >= 2)
					{
						func_189(3, 1);
					}
					if (func_43() >= 3)
					{
						func_189(4, 1);
					}
					func_20(5);
				}
			}
			if (!func_7(12))
			{
				if (func_7(10) && func_6(9))
				{
					func_189(1, 1);
					func_189(2, 1);
					func_33(12);
				}
			}
			break;
		
		case 37:
			if (!func_22(9))
			{
				if (func_42() == 231)
				{
					func_189(0, 1);
				}
				func_20(9);
			}
			break;
		
		case 39:
			if (!func_22(17))
			{
				if (func_11(0, 4))
				{
					if (func_43() >= 1)
					{
						func_189(0, 1);
					}
					if (func_43() >= 2)
					{
						func_189(1, 1);
					}
					if (func_43() >= 3)
					{
						func_189(2, 1);
					}
					func_20(17);
				}
			}
			break;
		
		case 38:
			if (!func_22(18))
			{
				func_189(0, 1);
				func_189(1, 1);
				func_189(2, 1);
				func_189(3, 1);
				if (func_6(5))
				{
					func_189(4, 1);
				}
				func_20(18);
			}
			break;
		
		case 21:
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(0, 1);
					func_189(1, 1);
					func_33(12);
				}
			}
			break;
		
		case 1:
			if (!func_137(0))
			{
				if ((func_42() == 7 || func_42() == 8) || func_42() == 12)
				{
					func_189(0, 1);
					func_189(1, 1);
				}
				func_135(0);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(2, 1);
					func_189(3, 1);
					func_33(12);
				}
			}
			break;
		
		case 0:
			if (!func_137(0))
			{
				switch (func_42())
				{
					case 1:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_189(3, 1);
						func_189(4, 1);
						break;
					
					case 2:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_189(3, 1);
						break;
					
					case 3:
						func_189(0, 1);
						func_189(1, 1);
						break;
					
					case 4:
						break;
					
					case 5:
						func_189(0, 1);
						break;
					
					case 6:
						break;
				}
				func_135(0);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(5, 1);
					func_189(6, 1);
					func_33(12);
				}
			}
			break;
		
		case 2:
			if (!func_137(0))
			{
				switch (func_42())
				{
					case 13:
						break;
					
					case 14:
						func_189(0, 1);
						func_189(1, 1);
						break;
					
					case 15:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_189(3, 1);
						break;
					
					case 16:
						func_189(0, 1);
						break;
					
					case 17:
						func_189(0, 1);
						break;
					
					case 18:
						break;
				}
				func_135(0);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(4, 1);
					func_189(5, 1);
					func_33(12);
				}
			}
			break;
		
		case 4:
			if (!func_79(23))
			{
				switch (Local_933.f_3)
				{
					case 83:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						break;
					
					case 84:
						func_189(0, 1);
						func_189(1, 1);
						break;
					
					case 85:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_189(5, 1);
						break;
					
					case 86:
						break;
					
					case 87:
						func_189(0, 1);
						func_189(1, 1);
						break;
					
					case 88:
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						break;
				}
				func_94(23);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(3, 1);
					func_189(4, 1);
					func_33(12);
				}
			}
			break;
		
		case 5:
			switch (Local_933.f_3)
			{
				case 95:
					if (!func_137(0))
					{
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_135(0);
					}
					break;
				
				case 97:
					if (!func_137(0))
					{
						func_189(0, 1);
						func_135(0);
					}
					break;
				
				case 96:
					break;
				
				case 98:
					if (!func_137(0))
					{
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_135(0);
					}
					break;
				
				case 99:
					if (!func_137(0))
					{
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_135(0);
					}
					break;
				
				case 100:
					if (!func_137(0))
					{
						func_189(0, 1);
						func_189(1, 1);
						func_189(2, 1);
						func_135(0);
					}
					break;
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(3, 1);
					func_189(4, 1);
					func_33(12);
				}
			}
			break;
		
		case 16:
			break;
		
		case 3:
			if (!func_137(0))
			{
				func_189(0, 1);
				func_135(0);
			}
			break;
		
		case 7:
			if (!func_137(0))
			{
				func_189(0, 1);
				func_189(1, 1);
				if (func_2346() <= 1)
				{
					func_189(2, 1);
				}
				func_135(0);
			}
			break;
		
		case 8:
			if (!func_137(0))
			{
				func_189(0, 1);
				func_189(1, 1);
				func_189(2, 1);
				func_189(3, 1);
				func_135(0);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(4, 1);
					func_189(5, 1);
					func_33(12);
				}
			}
			break;
		
		case 12:
			if (!func_137(0))
			{
				if (func_2346() >= 1)
				{
					func_189(0, 1);
					func_189(1, 1);
					func_189(2, 1);
				}
				if (func_2346() >= 2)
				{
					func_189(3, 1);
				}
				if (func_2346() >= 3)
				{
					func_189(4, 1);
				}
				if (func_2346() >= 4)
				{
					func_189(5, 1);
				}
				if (func_2346() >= 5)
				{
					func_189(6, 1);
				}
				if (func_2346() >= 6)
				{
					func_189(7, 1);
				}
				if (func_2346() >= 7)
				{
					func_189(8, 1);
				}
				if (func_2346() >= 8)
				{
					func_189(9, 1);
				}
				func_135(0);
			}
			break;
		
		case 13:
			if (!func_137(0))
			{
				func_189(0, 1);
				func_135(0);
			}
			if (!func_7(12))
			{
				if (func_7(10))
				{
					func_189(1, 1);
					func_189(2, 1);
					func_33(12);
				}
			}
			break;
		
		case 14:
			if (!func_137(0))
			{
				func_189(0, 1);
				func_189(1, 1);
				func_189(2, 1);
				func_189(3, 1);
				func_135(0);
			}
			break;
		
		case 20:
			if (!func_7(12))
			{
				if (func_7(11))
				{
					func_189(2, 1);
					func_189(3, 1);
					func_33(12);
				}
			}
			break;
	}
}

void func_701()
{
	if (func_698())
	{
		switch (Local_933.f_2)
		{
			case 1:
				if (func_12() == 0)
				{
					if (func_106() == 1)
					{
						if (func_703())
						{
							func_13(5);
						}
					}
					else if (func_106() == 11)
					{
						if (!func_137(3) && func_147(0) >= 23)
						{
							func_13(5);
						}
					}
					if (func_702())
					{
						func_13(5);
					}
				}
				break;
			
			case 0:
				if (func_702())
				{
					func_13(5);
				}
				break;
			}
	}
}

int func_702()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (!func_11(iVar0, 10))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_703()
{
	if (Local_933.f_773[0] == 0)
	{
		iVar0++;
	}
	if (Local_933.f_773[1] == 0)
	{
		iVar0++;
	}
	if (Local_933.f_773[2] == 0)
	{
		iVar0++;
	}
	if (Local_933.f_773[3] == 0)
	{
		iVar0++;
	}
	if (iVar0 == func_704(0, 0))
	{
		return 1;
	}
	return 0;
}

int func_704(int iParam0, bool bParam1)
{
	switch (func_106())
	{
		case 22:
		case 21:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 34:
		case 36:
		case 37:
		case 39:
			if (bParam1)
			{
				return func_2346() * 2;
			}
			return func_2346();
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 38:
		case 0:
		case 1:
		case 2:
		case 4:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 6:
		case 5:
		case 9:
		case 3:
		case 10:
		case 7:
		case 8:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return func_2346();
		
		default:
	}
	return func_2346();
}

void func_705()
{
	if (func_106() == 11)
	{
		if (Local_933.f_729 >= 1000f)
		{
			func_135(3);
		}
	}
}

void func_706()
{
	if (func_106() == 5)
	{
		if (!func_133(0) && func_133(1))
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (func_128(iVar0, 24))
				{
					if (!unk_0xE5DBF9B6126856CA(Local_933.f_73[iVar0]) || unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_933.f_73[iVar0]), 0))
					{
						if (Local_933.f_622 == -1)
						{
							Local_933.f_622 = unk_0xDD0E7998AE8AD485();
						}
						else if (unk_0xDD0E7998AE8AD485() > Local_933.f_622 + 2)
						{
							func_118(0);
						}
					}
				}
				iVar0++;
			}
		}
		if (func_133(0))
		{
			func_33(9);
		}
	}
}

void func_707()
{
	if (!func_79(6))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < func_746(func_106(), func_42()))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_933.f_635[iVar1]))
			{
				if (func_115(func_735(iVar1)))
				{
					if (func_733(iVar1))
					{
						if (func_732(iVar1))
						{
							if (func_113(&(Local_933.f_635[iVar1]), func_735(iVar1), func_51(iVar1), 1, 1, 0, 1, 1, 0, 0))
							{
								iVar2 = unk_0xA5FBBC2F619A4DE2(Local_933.f_635[iVar1]);
								if (func_731(iVar1))
								{
									if (unk_0x31609A585163CBAC(iLocal_2278))
									{
										unk_0xAA738CBC845A2BD8(iVar2, iLocal_2278);
									}
								}
								unk_0xD8F6A53F4799FAFE(iVar2, func_720(iVar1));
								unk_0xC023D1C4BF532815(iVar2, func_709(iVar1), 2, 1);
								unk_0x120A395B0ECB8EA5(iVar2, true);
								unk_0x71199B01895C6202(func_735(iVar1));
								unk_0xDE0AF66AD14CC2DF(unk_0x09AD4CE7DA179533(Local_933.f_635[iVar1]), 300);
								if (func_708(func_735(iVar1)))
								{
									unk_0xEF190091B5B9F5EB(iVar2, 0);
									unk_0x1E9649458B15960F(iVar2, true);
								}
								if (func_106() == 14)
								{
									if (func_735(iVar1) == -1920611843)
									{
										vVar3 = { unk_0x68E4ADDDDCD7BDDE(unk_0xA5FBBC2F619A4DE2(Local_933.f_635[3]), 0,33f, 0,1f, 0,08f) };
										unk_0xA47B46945FF6DE74(iVar2, vVar3, 1, false, 0, 1);
										unk_0xD8F6A53F4799FAFE(iVar2, (func_720(iVar1) + 320f));
									}
								}
							}
						}
					}
				}
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_94(6);
		}
	}
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 538990259:
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_709(int iParam0)
{
	switch (func_106())
	{
		case 32:
			return func_719(iParam0);
		
		case 37:
			return func_718(iParam0);
		
		case 1:
			return func_717(iParam0);
		
		case 0:
			return func_716(iParam0);
		
		case 2:
			return func_715(iParam0);
		
		case 4:
			return func_714(iParam0);
		
		case 6:
			return func_713(iParam0);
		
		case 3:
			return func_712(iParam0);
		
		case 8:
			return func_711(iParam0);
		
		case 14:
			return func_710(iParam0);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_710(int iParam0)
{
	switch (func_42())
	{
		case 38:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -80,0003f;
				
				case 1:
					return 0f, 0f, 22,5994f;
				
				case 2:
					return 0f, 0f, 21,9991f;
				
				case 3:
					return 0f, 0f, 37,398f;
				
				case 4:
					return 0f, 0f, 37,398f;
				
				case 5:
					return 0f, 0f, 37,398f;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -152,805f;
				
				case 1:
					return 0f, 0f, -89,801f;
				
				case 2:
					return 0f, 0f, 67,399f;
				
				case 3:
					return 0f, 0f, 10,9981f;
				
				case 4:
					return 0f, 0f, 10,9981f;
				
				case 5:
					return 0f, 0f, 10,9981f;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3,588f, 3,637f, -61,316f;
				
				case 1:
					return 0f, 0f, 159,595f;
				
				case 2:
					return -12,231f, 5,383f, 167,974f;
				
				case 3:
					return 0f, 0f, 159,5953f;
				
				case 4:
					return 0f, 0f, 159,5953f;
				
				case 5:
					return -4,604f, -3,832f, -175,156f;
				
				case 6:
					return -4,604f, -3,832f, -175,156f;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -5,2f;
				
				case 1:
					return -7,501f, 3,068f, -111,399f;
				
				case 2:
					return 7,941f, 8,38f, 27,217f;
				
				case 3:
					return 0f, 0f, 90,3983f;
				
				case 4:
					return 0f, 0f, 90,3983f;
				
				case 5:
					return 0f, 0f, 90,3983f;
				
				default:
			}
			break;
	}
	return -2,827f, -2,443f, -86,263f;
}

Vector3 func_711(int iParam0)
{
	switch (func_42())
	{
		case 64:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -29,2562f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 179,7974f;
				
				default:
			}
			break;
	}
	return 0f, 0f, -29,2562f;
}

Vector3 func_712(int iParam0)
{
	switch (func_42())
	{
		case 74:
			switch (iParam0)
			{
				case 0:
					return 11,4039f, -0,9267f, -114,5126f;
				
				case 1:
					return 89,7013f, 0f, -101,007f;
				
				case 2:
					return 6,8f, -10,6007f, -90,2072f;
				
				case 3:
					return -9,1199f, 3,6641f, 82,4839f;
				
				case 4:
					return -0,6871f, -3,5646f, -53,4305f;
				
				case 5:
					return -3,9843f, -7,3044f, 111,7346f;
				
				case 6:
					return 0f, 0f, 111,989f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return -67,7998f, -177,7f, -121,8295f;
				
				case 1:
					return 8,2f, -16,1f, 74,1984f;
				
				case 2:
					return 0f, 0f, 105,3947f;
				
				case 3:
					return -7,8755f, 11,2344f, -134,8283f;
				
				case 4:
					return -4,7221f, -0,2682f, 41,1861f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return -17,3002f, -18,1004f, 55,4997f;
				
				case 1:
					return -10,7003f, 2,2f, 86,2994f;
				
				case 2:
					return -2,5209f, -6,4699f, 24,2539f;
				
				case 3:
					return -0,6184f, -8,2305f, 17,7519f;
				
				case 4:
					return -8,223f, 0,7115f, 108,4473f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return -67,899f, -180f, 24f;
				
				case 1:
					return 9,791f, -1,741f, -145,251f;
				
				case 2:
					return -0,2561f, -7,141f, -63,4167f;
				
				case 3:
					return -9,2359f, -0,9444f, 19,7231f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_713(int iParam0)
{
	switch (func_42())
	{
		case 25:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 134,7992f;
				
				case 1:
					return 0f, 0f, -44,601f;
				
				case 2:
					return 0f, 0f, 40,1984f;
				
				case 3:
					return 0f, 0f, 26,3984f;
				
				case 4:
					return 0f, 0f, -136,8022f;
				
				case 5:
					return 0f, 0f, -45,4026f;
				
				case 6:
					return 0f, 0f, -44,8026f;
				
				case 7:
					return 0f, 0f, -44,8038f;
				
				case 8:
					return 0f, 0f, -44,8038f;
				
				case 9:
					return 0f, 0f, 45,3958f;
				
				case 10:
					return 0f, 0f, -44,6f;
				
				case 11:
					return 0f, 0f, -44,6f;
				
				case 12:
					return 0f, 0f, -135,606f;
				
				case 13:
					return 0f, 0f, -169,805f;
				
				case 14:
					return 0f, 0f, 46,795f;
				
				case 15:
					return 0f, 0f, 41,994f;
				
				case 16:
					return 0f, 0f, -134,606f;
				
				case 17:
					return 0f, 0f, -135,805f;
				
				case 18:
					return 0f, 0f, -134,605f;
				
				case 19:
					return 0f, 0f, -135,405f;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 130,8f;
				
				case 1:
					return 0f, 0f, -0,201f;
				
				case 2:
					return 0f, 0f, -177,401f;
				
				case 3:
					return 0f, 0f, -2,601f;
				
				case 4:
					return 0f, 0f, -94,001f;
				
				case 5:
					return 0f, 0f, 84,599f;
				
				case 6:
					return 0f, 0f, 176,198f;
				
				case 7:
					return 0f, 0f, 69,998f;
				
				case 8:
					return 0f, 0f, 83,798f;
				
				case 9:
					return 0f, 0f, 1,398f;
				
				case 10:
					return 0f, 0f, 175,398f;
				
				case 11:
					return 0f, 0f, 86,197f;
				
				case 12:
					return 0f, 0f, -3,803f;
				
				case 13:
					return 0f, 0f, 85,796f;
				
				case 14:
					return 0f, 0f, 71,796f;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 1,2f;
				
				case 1:
					return 0f, 0f, 175f;
				
				case 2:
					return 0f, 0f, -91,4f;
				
				case 3:
					return 0f, 0f, 3,199f;
				
				case 4:
					return 0f, 0f, 0,3994f;
				
				case 5:
					return 6,078f, -0,073f, 89,603f;
				
				case 6:
					return 0f, 0f, -0,801f;
				
				case 7:
					return 0f, 0f, -87,401f;
				
				case 8:
					return 0f, 0f, 2,999f;
				
				case 9:
					return 0f, 0f, 88,599f;
				
				case 10:
					return 0f, 0f, 143,398f;
				
				case 11:
					return 0f, 0f, -171,152f;
				
				case 12:
					return 0f, 0f, -89,853f;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -15,8f;
				
				case 1:
					return 0f, 0f, 164,2f;
				
				case 2:
					return 0f, 0f, 164,8f;
				
				case 3:
					return 0f, 0f, -15,801f;
				
				case 4:
					return 0f, 0f, 164,599f;
				
				case 5:
					return 0f, 0f, 164,599f;
				
				case 6:
					return 0f, 0f, 73,599f;
				
				case 7:
					return 0f, 0f, 75,599f;
				
				case 8:
					return 0f, 0f, 74,999f;
				
				case 9:
					return 0f, 0f, 75,1999f;
				
				case 10:
					return 0f, 0f, 75,7999f;
				
				case 11:
					return 0f, 0f, 75,1999f;
				
				case 12:
					return 0f, 0f, -105,202f;
				
				case 13:
					return 0f, 0f, -103,202f;
				
				case 14:
					return 0f, 0f, 75,3972f;
				
				case 15:
					return 0f, 0f, 74,1972f;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 169,6f;
				
				case 1:
					return 0f, 0f, -11f;
				
				case 2:
					return 0f, 0f, -11,001f;
				
				case 3:
					return 0f, 0f, -11,001f;
				
				case 4:
					return 0f, 0f, -94,201f;
				
				case 5:
					return 0f, 0f, -125,401f;
				
				case 6:
					return 0f, 0f, -101,201f;
				
				case 7:
					return 0f, 0f, 174,999f;
				
				case 8:
					return 0f, 0f, -126,401f;
				
				case 9:
					return 0f, 0f, -126,401f;
				
				case 10:
					return 0f, 0f, -90f;
				
				case 11:
					return 0f, 0f, -100,401f;
				
				case 12:
					return 0f, 0f, -107,401f;
				
				case 13:
					return 0f, 0f, -177,001f;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 114,8f;
				
				case 1:
					return 0f, 0f, -65,601f;
				
				case 2:
					return 0f, 0f, 109,599f;
				
				case 3:
					return 0f, 0f, -173,601f;
				
				case 4:
					return 0f, 0f, 92,199f;
				
				case 5:
					return 0f, 0f, -55,002f;
				
				case 6:
					return 0f, 0f, -89,602f;
				
				case 7:
					return 0f, 0f, -34,402f;
				
				case 8:
					return 0f, 0f, -178,602f;
				
				case 9:
					return 0f, 0f, 85,997f;
				
				case 10:
					return 0f, 0f, 15,797f;
				
				case 11:
					return 0f, 0f, 0,197f;
				
				case 12:
					return 0f, 0f, -164,802f;
				
				case 13:
					return 0f, 0f, 95,397f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_714(int iParam0)
{
	switch (func_42())
	{
		case 19:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 102,396f;
				
				case 1:
					return 0f, 0f, -80,609f;
				
				case 2:
					return 0f, 0f, 46,396f;
				
				case 3:
					return 0f, 0f, 0,994f;
				
				case 4:
					return 0f, 0f, 9,994f;
				
				case 5:
					return 0f, 0f, -90,41f;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -19,4f;
				
				case 1:
					return 0f, 0f, -17,805f;
				
				case 2:
					return 0f, 0f, -17,805f;
				
				case 3:
					return 0f, 0f, 161,148f;
				
				case 4:
					return 0f, 0f, 161,148f;
				
				case 5:
					return 0f, 0f, -18,407f;
				
				case 6:
					return 0f, 0f, -18,407f;
				
				case 7:
					return 0f, 0f, 161,148f;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -38,8003f;
				
				case 1:
					return 0f, 0f, 88,3996f;
				
				case 2:
					return 0f, 0f, 42,1995f;
				
				case 3:
					return 0f, 0f, 132,5986f;
				
				default:
			}
			break;
		
		case 22:
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 69,2f;
				
				case 1:
					return 0f, 0f, 70,4f;
				
				case 2:
					return 0f, 0f, 70,4f;
				
				case 3:
					return 0f, 0f, 70,4f;
				
				case 4:
					return 0f, 0f, 32,4f;
				
				case 5:
					return 0f, 0f, 62,796f;
				
				case 6:
					return 0f, 0f, 161,599f;
				
				case 7:
					return 0f, 0f, 71,999f;
				
				case 8:
					return 0f, 0f, -105,402f;
				
				case 9:
					return 0f, 0f, -178,405f;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					return -3,2837f, 1,9929f, -5,7464f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 102,396f;
}

Vector3 func_715(int iParam0)
{
	switch (func_42())
	{
		case 13:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -146,4057f;
				
				case 1:
					return 0f, 0f, -57,8053f;
				
				case 2:
					return 0f, 0f, -57,8053f;
				
				case 3:
					return 0f, 0f, 122,1943f;
				
				case 4:
					return 0f, 0f, -149,6058f;
				
				case 5:
					return 0f, 0f, 117,1999f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				case 8:
					return 0f, 0f, 0f;
				
				case 9:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 172,599f;
				
				case 1:
					return 0f, 0f, -93,4019f;
				
				case 2:
					return 0f, 0f, 65,5996f;
				
				case 3:
					return 0f, 0f, -25,6004f;
				
				case 4:
					return 0f, 0f, 156,1993f;
				
				case 5:
					return 0f, 0f, 19,7989f;
				
				case 6:
					return 0f, 0f, 110,1987f;
				
				case 7:
					return 0f, 0f, 4,1975f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					return -3,882f, 1,288f, 45,643f;
				
				case 1:
					return 0f, 0f, 140,95f;
				
				case 2:
					return -2,781f, -3,027f, -19,276f;
				
				case 3:
					return -0,926f, 4,195f, 86,834f;
				
				case 4:
					return 1,551f, -3,49f, -93,753f;
				
				case 5:
					return 0f, 0f, -39,601f;
				
				case 6:
					return -2,453f, -3,565f, -27,878f;
				
				case 7:
					return 4,159f, -1,192f, -136,358f;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -21,2027f;
				
				case 1:
					return 0f, 0f, -98,4005f;
				
				case 2:
					return 0f, 0f, 85,1992f;
				
				case 3:
					return 0f, 0f, -92,4011f;
				
				case 4:
					return 0f, 0f, -119,2013f;
				
				case 5:
					return 0f, 0f, -79,4015f;
				
				case 6:
					return 0f, 0f, -79,4024f;
				
				case 7:
					return 0f, 0f, -36,8027f;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 16,7999f;
				
				case 1:
					return 0f, 0f, 16,7999f;
				
				case 2:
					return 0f, 0f, 16,7999f;
				
				case 3:
					return 0f, 0f, -67,2516f;
				
				case 4:
					return 0f, 0f, -105,0007f;
				
				case 5:
					return 0f, 0f, 177,7994f;
				
				case 6:
					return 0f, 0f, -178,0007f;
				
				case 7:
					return 0f, 0f, 70,7989f;
				
				case 8:
					return 0f, 0f, 125,996f;
				
				case 9:
					return 0f, 0f, -140,0004f;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -55,601f;
				
				case 1:
					return 0f, 0f, 124,9997f;
				
				case 2:
					return 0f, 0f, 124,9997f;
				
				case 3:
					return 0f, 0f, 128,7994f;
				
				case 4:
					return 0f, 0f, 124,9997f;
				
				case 5:
					return 0f, 0f, 128,7994f;
				
				case 6:
					return 0f, 0f, 128,7994f;
				
				case 7:
					return 0f, 0f, -173,2005f;
				
				case 8:
					return 0f, 0f, -10,6008f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_716(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -11,801f;
				
				case 1:
					return 0f, 0f, -11,801f;
				
				case 2:
					return 0f, 0f, 0,798f;
				
				case 3:
					return 0,85f, 4,016f, -14,233f;
				
				case 4:
					return -2,078f, -5,083f, 165,504f;
				
				case 5:
					return -1,447f, 3,733f, 77,243f;
				
				case 6:
					return 0f, 0f, -13,804f;
				
				case 7:
					return 0f, 0f, -74,005f;
				
				case 8:
					return 0f, 0f, -103,206f;
				
				case 9:
					return 0f, 0f, 76,794f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -32,8f;
				
				case 1:
					return 0f, 0f, 147,7996f;
				
				case 2:
					return 0f, 0f, 147,7996f;
				
				case 3:
					return 0f, 0f, 147,7996f;
				
				case 4:
					return 0f, 0f, 147,7996f;
				
				case 5:
					return 0f, 0f, 147,7996f;
				
				case 6:
					return 0f, 0f, 149,199f;
				
				case 7:
					return 0f, 0f, -51,202f;
				
				case 8:
					return 0f, 0f, 0f;
				
				case 39:
					return 0f, 0f, 24f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -99,4003f;
				
				case 1:
					return 0f, 0f, 79,9996f;
				
				case 2:
					return 0f, 0f, 79,9996f;
				
				case 3:
					return 0f, 0f, 79,9996f;
				
				case 4:
					return 0f, 0f, 79,9996f;
				
				case 5:
					return 1,2347f, -3,9208f, 80,0419f;
				
				case 6:
					return 0f, 0f, 94,1989f;
				
				case 7:
					return 0f, 0f, 160,1987f;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 21,8f;
				
				case 1:
					return 0f, 0f, -158f;
				
				case 2:
					return 0f, 0f, 133,5999f;
				
				case 3:
					return 0f, 0f, 133,5999f;
				
				case 4:
					return 0f, 0f, 133,5999f;
				
				case 5:
					return 0f, 0f, 133,5999f;
				
				case 6:
					return 4,4943f, -0,4959f, 133,6194f;
				
				case 7:
					return 0f, 0f, 133,5999f;
				
				case 8:
					return 0f, 0f, -124,6004f;
				
				case 9:
					return 0f, 0f, -5,6003f;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -108,6f;
				
				case 1:
					return 0f, 0f, -21,001f;
				
				case 2:
					return 0f, 0f, -99,201f;
				
				case 3:
					return 0f, 0f, -99,201f;
				
				case 4:
					return 0f, 0f, -99,201f;
				
				case 5:
					return 0f, 0f, 33,798f;
				
				case 6:
					return 0f, 0f, 33,798f;
				
				case 7:
					return 0f, 0f, 33,798f;
				
				case 8:
					return 0f, 0f, -18,4f;
				
				case 9:
					return 0f, 0f, -18,4f;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 179,399f;
				
				case 1:
					return 0f, 0f, 71,4f;
				
				case 2:
					return 0f, 0f, -60,8005f;
				
				case 3:
					return 0f, 0f, -60,8005f;
				
				case 4:
					return 0f, 0f, -60,8005f;
				
				case 5:
					return 0f, 0f, -60,8005f;
				
				case 6:
					return 0f, 0f, -60,8005f;
				
				case 7:
					return 0f, 0f, -60,8005f;
				
				case 8:
					return 0f, 0f, -60,8005f;
				
				case 9:
					return 0f, 0f, -151,4006f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_717(int iParam0)
{
	switch (func_42())
	{
		case 7:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 115,999f;
				
				case 1:
					return 0f, 0f, 23,9971f;
				
				case 2:
					return 0f, 0f, -34,8033f;
				
				case 3:
					return 0f, 0f, -19,2033f;
				
				case 4:
					return 0f, 0f, -19,2033f;
				
				case 5:
					return 0f, 0f, -19,2033f;
				
				case 6:
					return 0f, 0f, 113,999f;
				
				case 7:
					return 0f, 0f, 23,5978f;
				
				case 8:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -107,8006f;
				
				case 1:
					return 0f, 0f, -107,8006f;
				
				case 2:
					return 0f, 0f, -14,6019f;
				
				case 3:
					return 0f, 0f, -29,8019f;
				
				case 4:
					return 0f, 0f, 70,7975f;
				
				case 5:
					return 0f, 0f, -21,8025f;
				
				case 6:
					return 0f, 0f, -110,2017f;
				
				case 7:
					return 0f, 0f, 6,3981f;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 90,9989f;
				
				case 1:
					return -4,8416f, 4,7107f, -58,003f;
				
				case 2:
					return -3,1451f, 5,8841f, -27,4408f;
				
				case 3:
					return 0f, 0f, -144,0037f;
				
				case 4:
					return 0f, 0f, 134,7964f;
				
				case 5:
					return 0f, 0f, -176,4026f;
				
				case 6:
					return 0f, 0f, -99,0031f;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -120,2008f;
				
				case 1:
					return 0f, 0f, -39,6012f;
				
				case 2:
					return 0f, 0f, -101,6018f;
				
				case 3:
					return 0f, 0f, -125,6019f;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -41,8f;
				
				case 1:
					return 0f, 0f, -43,2f;
				
				case 2:
					return 0f, 0f, -108,401f;
				
				case 3:
					return 0f, 0f, -42,601f;
				
				case 4:
					return 0f, 0f, 144,9992f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -87,201f;
				
				case 1:
					return -4f, 5,204f, -36,42f;
				
				case 2:
					return 0f, 0f, -85,002f;
				
				case 3:
					return 0f, 0f, 41,397f;
				
				case 4:
					return 0f, 0f, 130,396f;
				
				case 5:
					return 4,762f, -1,252f, -2,749f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_718(int iParam0)
{
	switch (func_42())
	{
		case 231:
			switch (iParam0)
			{
				case 0:
					return 90f, -120,004f, 0f;
				
				case 1:
					return 6,087f, 2,533f, -32,535f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_719(int iParam0)
{
	switch (func_42())
	{
		case 195:
			switch (iParam0)
			{
				case 0:
					return -4,209f, -1,058f, -41,439f;
				
				case 1:
					return 0f, 0f, -67,6056f;
				
				case 2:
					return 0,1192f, -4,3994f, -113,8012f;
				
				default:
			}
			break;
		
		case 196:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 138,999f;
				
				case 1:
					return 0f, 0f, -74,604f;
				
				case 2:
					return 0f, 0f, -179,604f;
				
				default:
			}
			break;
		
		case 197:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -25,8012f;
				
				case 1:
					return -21,2783f, -0,3635f, -47,4697f;
				
				case 2:
					return 0f, 0f, -1,0791f;
				
				default:
			}
			break;
		
		case 198:
			switch (iParam0)
			{
				case 0:
					return 10,159f, -1,37f, -32,478f;
				
				case 1:
					return 6,296f, -1,74f, -11,705f;
				
				case 2:
					return 12,533f, 1,008f, -50,112f;
				
				default:
			}
			break;
		
		case 199:
			switch (iParam0)
			{
				case 0:
					return 6,038f, 13,545f, -129,518f;
				
				case 1:
					return 0f, 0f, -7,8006f;
				
				case 2:
					return 0f, 0f, -14,8006f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_720(int iParam0)
{
	switch (func_106())
	{
		case 32:
			return func_730(iParam0);
		
		case 37:
			return func_729(iParam0);
		
		case 1:
			return func_728(iParam0);
		
		case 0:
			return func_727(iParam0);
		
		case 2:
			return func_726(iParam0);
		
		case 4:
			return func_725(iParam0);
		
		case 6:
			return func_724(iParam0);
		
		case 3:
			return func_723(iParam0);
		
		case 8:
			return func_722(iParam0);
		
		case 14:
			return func_721(iParam0);
		
		default:
	}
	return 0f;
}

float func_721(int iParam0)
{
	switch (func_42())
	{
		case 38:
			switch (iParam0)
			{
				case 0:
					return 279,9997f;
				
				case 1:
					return 22,5994f;
				
				case 2:
					return 21,9991f;
				
				case 3:
					return 37,398f;
				
				case 4:
					return 37,398f;
				
				case 5:
					return 37,398f;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 0:
					return 207,195f;
				
				case 1:
					return 270,199f;
				
				case 2:
					return 67,399f;
				
				case 3:
					return 10,9981f;
				
				case 4:
					return 10,9981f;
				
				case 5:
					return 10,9981f;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 0:
					return 298,798f;
				
				case 1:
					return 159,595f;
				
				case 2:
					return 167,397f;
				
				case 3:
					return 159,5954f;
				
				case 4:
					return 159,5954f;
				
				case 5:
					return 184,998f;
				
				case 6:
					return 184,998f;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 0:
					return 354,8f;
				
				case 1:
					return 248,399f;
				
				case 2:
					return 27,8f;
				
				case 3:
					return 90,3983f;
				
				case 4:
					return 90,3983f;
				
				case 5:
					return 90,3983f;
				
				default:
			}
			break;
	}
	return 273,798f;
}

float func_722(int iParam0)
{
	switch (func_42())
	{
		case 64:
			switch (iParam0)
			{
				case 0:
					return 330,7438f;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return 179,7974f;
				
				default:
			}
			break;
	}
	return 330,7438f;
}

float func_723(int iParam0)
{
	switch (func_42())
	{
		case 74:
			switch (iParam0)
			{
				case 0:
					return 245,3949f;
				
				case 1:
					return 258,993f;
				
				case 2:
					return 269,7928f;
				
				case 3:
					return 82,1916f;
				
				case 4:
					return 306,5909f;
				
				case 5:
					return 111,9891f;
				
				case 6:
					return 111,9891f;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return 58,1705f;
				
				case 1:
					return 74,1984f;
				
				case 2:
					return 105,3947f;
				
				case 3:
					return 224,3959f;
				
				case 4:
					return 41,1971f;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return 55,4997f;
				
				case 1:
					return 86,2994f;
				
				case 2:
					return 24,3964f;
				
				case 3:
					return 17,7964f;
				
				case 4:
					return 108,3961f;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return 204f;
				
				case 1:
					return 214,6f;
				
				case 2:
					return 296,5993f;
				
				case 3:
					return 19,7994f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

float func_724(int iParam0)
{
	switch (func_42())
	{
		case 25:
			switch (iParam0)
			{
				case 0:
					return 134,7992f;
				
				case 1:
					return 315,399f;
				
				case 2:
					return 40,1984f;
				
				case 3:
					return 26,3984f;
				
				case 4:
					return 223,1978f;
				
				case 5:
					return 314,5974f;
				
				case 6:
					return 315,1974f;
				
				case 7:
					return 315,1962f;
				
				case 8:
					return 315,1962f;
				
				case 9:
					return 45,3958f;
				
				case 10:
					return 315,4f;
				
				case 11:
					return 315,4f;
				
				case 12:
					return 224,394f;
				
				case 13:
					return 190,195f;
				
				case 14:
					return 46,795f;
				
				case 15:
					return 41,994f;
				
				case 16:
					return 1,2f;
				
				case 17:
					return -3f;
				
				case 18:
					return -1,2f;
				
				case 19:
					return 4,2f;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 0:
					return 130,8f;
				
				case 1:
					return -0,201f;
				
				case 2:
					return 182,599f;
				
				case 3:
					return 357,399f;
				
				case 4:
					return 265,999f;
				
				case 5:
					return 84,599f;
				
				case 6:
					return 176,198f;
				
				case 7:
					return 69,998f;
				
				case 8:
					return 83,798f;
				
				case 9:
					return 1,398f;
				
				case 10:
					return 175,398f;
				
				case 11:
					return 86,197f;
				
				case 12:
					return 356,197f;
				
				case 13:
					return 85,796f;
				
				case 14:
					return 71,796f;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 0:
					return 1,2f;
				
				case 1:
					return 175f;
				
				case 2:
					return 268,6f;
				
				case 3:
					return 3,199f;
				
				case 4:
					return 360,3994f;
				
				case 5:
					return 89,599f;
				
				case 6:
					return 359,199f;
				
				case 7:
					return 272,599f;
				
				case 8:
					return 2,999f;
				
				case 9:
					return 88,599f;
				
				case 10:
					return 143,398f;
				
				case 11:
					return 188,848f;
				
				case 12:
					return 270,147f;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 0:
					return 344,2f;
				
				case 1:
					return 164,2f;
				
				case 2:
					return 164,8f;
				
				case 3:
					return 344,199f;
				
				case 4:
					return 164,599f;
				
				case 5:
					return 164,599f;
				
				case 6:
					return 73,599f;
				
				case 7:
					return 75,599f;
				
				case 8:
					return 74,999f;
				
				case 9:
					return 75,1999f;
				
				case 10:
					return 75,7999f;
				
				case 11:
					return 75,1999f;
				
				case 12:
					return 254,798f;
				
				case 13:
					return 256,798f;
				
				case 14:
					return 75,3972f;
				
				case 15:
					return 74,1972f;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam0)
			{
				case 0:
					return 169,6f;
				
				case 1:
					return 349f;
				
				case 2:
					return 348,999f;
				
				case 3:
					return 348,999f;
				
				case 4:
					return 265,799f;
				
				case 5:
					return 234,599f;
				
				case 6:
					return 258,799f;
				
				case 7:
					return 174,999f;
				
				case 8:
					return 233,599f;
				
				case 9:
					return 233,599f;
				
				case 10:
					return 270f;
				
				case 11:
					return 259,599f;
				
				case 12:
					return 252,599f;
				
				case 13:
					return 182,999f;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam0)
			{
				case 0:
					return 114,8f;
				
				case 1:
					return 294,399f;
				
				case 2:
					return 109,599f;
				
				case 3:
					return 186,399f;
				
				case 4:
					return 92,199f;
				
				case 5:
					return 304,998f;
				
				case 6:
					return 270,398f;
				
				case 7:
					return 325,598f;
				
				case 8:
					return 181,398f;
				
				case 9:
					return 85,997f;
				
				case 10:
					return 15,797f;
				
				case 11:
					return 0,197f;
				
				case 12:
					return 195,198f;
				
				case 13:
					return 95,397f;
				
				default:
			}
			break;
	}
	return 0f;
}

float func_725(int iParam0)
{
	switch (func_42())
	{
		case 19:
			switch (iParam0)
			{
				case 0:
					return 102,396f;
				
				case 1:
					return 279,391f;
				
				case 2:
					return 46,396f;
				
				case 3:
					return 0,994f;
				
				case 4:
					return 9,994f;
				
				case 5:
					return 269,59f;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 340,6f;
				
				case 1:
					return 342,195f;
				
				case 2:
					return 342,195f;
				
				case 3:
					return 161,148f;
				
				case 4:
					return 161,148f;
				
				case 5:
					return 341,593f;
				
				case 6:
					return 341,593f;
				
				case 7:
					return 161,148f;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 321,1997f;
				
				case 1:
					return 88,3996f;
				
				case 2:
					return 42,1995f;
				
				case 3:
					return 132,5986f;
				
				default:
			}
			break;
		
		case 22:
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					return 69,2f;
				
				case 1:
					return 70,4f;
				
				case 2:
					return 70,4f;
				
				case 3:
					return 70,4f;
				
				case 4:
					return 32,4f;
				
				case 5:
					return 62,796f;
				
				case 6:
					return 161,599f;
				
				case 7:
					return 71,999f;
				
				case 8:
					return 254,598f;
				
				case 9:
					return 181,595f;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					return -5,8035f;
				
				default:
			}
			break;
	}
	return 102,396f;
}

float func_726(int iParam0)
{
	switch (func_42())
	{
		case 13:
			switch (iParam0)
			{
				case 0:
					return 213,5942f;
				
				case 1:
					return 302,1947f;
				
				case 2:
					return 302,1947f;
				
				case 3:
					return 122,1943f;
				
				case 4:
					return 210,3942f;
				
				case 5:
					return 117,1999f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				case 8:
					return 0f;
				
				case 9:
					return 0f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					return 172,599f;
				
				case 1:
					return 266,5981f;
				
				case 2:
					return 65,5996f;
				
				case 3:
					return 334,3996f;
				
				case 4:
					return 156,1994f;
				
				case 5:
					return 19,7989f;
				
				case 6:
					return 110,1987f;
				
				case 7:
					return 4,1975f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					return 45,599f;
				
				case 1:
					return 140,95f;
				
				case 2:
					return 340,798f;
				
				case 3:
					return 86,8f;
				
				case 4:
					return 266,2f;
				
				case 5:
					return 320,399f;
				
				case 6:
					return 332,199f;
				
				case 7:
					return 223,599f;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					return 338,7973f;
				
				case 1:
					return 261,5995f;
				
				case 2:
					return 85,1993f;
				
				case 3:
					return 267,5989f;
				
				case 4:
					return 240,7987f;
				
				case 5:
					return 280,5985f;
				
				case 6:
					return 280,5976f;
				
				case 7:
					return 323,1973f;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					return 16,7999f;
				
				case 1:
					return 16,7999f;
				
				case 2:
					return 16,7999f;
				
				case 3:
					return 292,7484f;
				
				case 4:
					return 254,9993f;
				
				case 5:
					return 177,7994f;
				
				case 6:
					return 181,9993f;
				
				case 7:
					return 70,7989f;
				
				case 8:
					return 125,996f;
				
				case 9:
					return 219,9996f;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					return 304,399f;
				
				case 1:
					return 124,9997f;
				
				case 2:
					return 124,9997f;
				
				case 3:
					return 128,7994f;
				
				case 4:
					return 124,9997f;
				
				case 5:
					return 128,7994f;
				
				case 6:
					return 128,7994f;
				
				case 7:
					return 186,7995f;
				
				case 8:
					return 349,3992f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

float func_727(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 348,199f;
				
				case 1:
					return 348,199f;
				
				case 2:
					return 0,798f;
				
				case 3:
					return 345,797f;
				
				case 4:
					return 165,597f;
				
				case 5:
					return 77,196f;
				
				case 6:
					return 346,196f;
				
				case 7:
					return 285,995f;
				
				case 8:
					return 256,794f;
				
				case 9:
					return 76,794f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 327,2f;
				
				case 1:
					return 147,7996f;
				
				case 2:
					return 147,7996f;
				
				case 3:
					return 147,7996f;
				
				case 4:
					return 147,7996f;
				
				case 5:
					return 147,7996f;
				
				case 6:
					return 149,199f;
				
				case 7:
					return 308,798f;
				
				case 8:
					return 0f;
				
				case 9:
					return 24f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 260,5997f;
				
				case 1:
					return 79,9996f;
				
				case 2:
					return 79,9996f;
				
				case 3:
					return 79,9996f;
				
				case 4:
					return 79,9996f;
				
				case 5:
					return 79,9996f;
				
				case 6:
					return 94,199f;
				
				case 7:
					return 160,1987f;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 21,8f;
				
				case 1:
					return 202f;
				
				case 2:
					return 133,5999f;
				
				case 3:
					return 133,5999f;
				
				case 4:
					return 133,5999f;
				
				case 5:
					return 133,5999f;
				
				case 6:
					return 133,5999f;
				
				case 7:
					return 133,5999f;
				
				case 8:
					return 235,3995f;
				
				case 9:
					return 354,3997f;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 251,4f;
				
				case 1:
					return 338,999f;
				
				case 2:
					return 260,799f;
				
				case 3:
					return 260,799f;
				
				case 4:
					return 260,799f;
				
				case 5:
					return 33,798f;
				
				case 6:
					return 33,798f;
				
				case 7:
					return 33,798f;
				
				case 8:
					return 341,6f;
				
				case 9:
					return 341,6f;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 179,399f;
				
				case 1:
					return 71,4f;
				
				case 2:
					return 299,1996f;
				
				case 3:
					return 299,1996f;
				
				case 4:
					return 299,1996f;
				
				case 5:
					return 299,1996f;
				
				case 6:
					return 299,1996f;
				
				case 7:
					return 299,1996f;
				
				case 8:
					return 299,1996f;
				
				case 9:
					return 208,5993f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

float func_728(int iParam0)
{
	switch (func_42())
	{
		case 7:
			switch (iParam0)
			{
				case 0:
					return 115,999f;
				
				case 1:
					return 23,9971f;
				
				case 2:
					return 325,1967f;
				
				case 3:
					return 340,7967f;
				
				case 4:
					return 340,7967f;
				
				case 5:
					return 340,7967f;
				
				case 6:
					return 113,999f;
				
				case 7:
					return 23,5978f;
				
				case 8:
					return 74,1205f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 252,1994f;
				
				case 1:
					return 252,1994f;
				
				case 2:
					return 345,3981f;
				
				case 3:
					return 330,1981f;
				
				case 4:
					return 70,7976f;
				
				case 5:
					return 338,1975f;
				
				case 6:
					return 249,7983f;
				
				case 7:
					return 6,3981f;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return 90,9989f;
				
				case 1:
					return 301,7977f;
				
				case 2:
					return 332,3976f;
				
				case 3:
					return 215,9963f;
				
				case 4:
					return 134,7964f;
				
				case 5:
					return 183,5974f;
				
				case 6:
					return 260,9969f;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return 239,7992f;
				
				case 1:
					return 320,3988f;
				
				case 2:
					return 258,3982f;
				
				case 3:
					return 234,3981f;
				
				case 4:
					return 80,8f;
				
				case 5:
					return 232,599f;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					return 318,2f;
				
				case 1:
					return 316,8f;
				
				case 2:
					return 251,599f;
				
				case 3:
					return 317,399f;
				
				case 4:
					return 144,9992f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return 272,799f;
				
				case 1:
					return 323,398f;
				
				case 2:
					return 274,998f;
				
				case 3:
					return 41,397f;
				
				case 4:
					return 130,396f;
				
				case 5:
					return -2,801f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

float func_729(int iParam0)
{
	switch (func_42())
	{
		case 231:
			switch (iParam0)
			{
				case 0:
					return 0f;
				
				case 1:
					return 327,6f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

float func_730(int iParam0)
{
	switch (func_42())
	{
		case 195:
			switch (iParam0)
			{
				case 0:
					return 318,6f;
				
				case 1:
					return 292,3944f;
				
				case 2:
					return 246,1942f;
				
				default:
			}
			break;
		
		case 196:
			switch (iParam0)
			{
				case 0:
					return 138,999f;
				
				case 1:
					return 285,396f;
				
				case 2:
					return 180,396f;
				
				default:
			}
			break;
		
		case 197:
			switch (iParam0)
			{
				case 0:
					return 334,1988f;
				
				case 1:
					return 312,5986f;
				
				case 2:
					return -1,0791f;
				
				default:
			}
			break;
		
		case 198:
			switch (iParam0)
			{
				case 0:
					return 327,4f;
				
				case 1:
					return 348,199f;
				
				case 2:
					return 309,999f;
				
				default:
			}
			break;
		
		case 199:
			switch (iParam0)
			{
				case 0:
					return 231,2f;
				
				case 1:
					return 352,1994f;
				
				case 2:
					return 345,1994f;
				
				default:
			}
			break;
	}
	return 292,3944f;
}

int func_731(int iParam0)
{
	if (func_106() == 4)
	{
		return 0;
	}
	return 0;
}

int func_732(int iParam0)
{
	if (func_106() == 14)
	{
		if (func_735(iParam0) == -1920611843)
		{
			if (!unk_0xE5DBF9B6126856CA(Local_933.f_635[3]))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_733(int iParam0)
{
	if (func_731(iParam0))
	{
		if (!unk_0x31609A585163CBAC(iLocal_2278))
		{
			iLocal_2278 = unk_0x0D1736C2E221BCEA(func_51(iParam0), func_734(iParam0));
		}
		else
		{
			if (unk_0x3C4C57B70481C643(iLocal_2278))
			{
				unk_0xE9C847D3387E544A(iLocal_2278, 0);
				iLocal_2279 = 1;
			}
			if (unk_0x13CCE7704923A895(iLocal_2278))
			{
				unk_0xD65FA6F2BAD953C8(iLocal_2278, false);
				iLocal_2280 = 1;
			}
			unk_0x0007C2367F4F23F3(iLocal_2278);
			if (unk_0xBD307E66C0669BFC(iLocal_2278))
			{
				iLocal_2281 = 1;
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_734(int iParam0)
{
	if (func_106() == 4)
	{
		return "po1_08_warehouseint2";
	}
	return "";
}

int func_735(int iParam0)
{
	switch (func_106())
	{
		case 32:
			return func_745(iParam0);
		
		case 37:
			return func_744(iParam0);
		
		case 1:
			return func_743(iParam0);
		
		case 0:
			return func_742(iParam0);
		
		case 2:
			return func_741(iParam0);
		
		case 4:
			return func_740(iParam0);
		
		case 6:
			return func_739(iParam0);
		
		case 3:
			return func_738(iParam0);
		
		case 8:
			return func_737(iParam0);
		
		case 14:
			return func_736(iParam0);
		
		default:
	}
	return 0;
}

int func_736(int iParam0)
{
	switch (func_42())
	{
		case 38:
			switch (iParam0)
			{
				case 0:
					return -1748303324;
				
				case 1:
					return -1748303324;
				
				case 2:
					return -1748303324;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1920611843;
				
				case 5:
					return -2071229766;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 0:
					return 63237339;
				
				case 1:
					return 63237339;
				
				case 2:
					return 63237339;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1920611843;
				
				case 5:
					return -2071229766;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 0:
					return 63237339;
				
				case 1:
					return -1098506160;
				
				case 2:
					return 63237339;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1920611843;
				
				case 5:
					return 63237339;
				
				case 6:
					return -2071229766;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 0:
					return -2073573168;
				
				case 1:
					return -2073573168;
				
				case 2:
					return -2073573168;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1920611843;
				
				case 5:
					return -2071229766;
				
				default:
			}
			break;
	}
	return 0;
}

int func_737(int iParam0)
{
	switch (func_42())
	{
		case 64:
			switch (iParam0)
			{
				case 0:
					return -1098506160;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam0)
			{
				case 0:
					return -1098506160;
				
				default:
			}
			break;
	}
	return 0;
}

int func_738(int iParam0)
{
	switch (func_42())
	{
		case 74:
			switch (iParam0)
			{
				case 0:
					return 887112569;
				
				case 1:
					return 2097329273;
				
				case 2:
					return 1961489851;
				
				case 3:
					return 1652026494;
				
				case 4:
					return 1652026494;
				
				case 5:
					return -757971088;
				
				case 6:
					return -757971088;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam0)
			{
				case 0:
					return 2097329273;
				
				case 1:
					return 1961489851;
				
				case 2:
					return -757971088;
				
				case 3:
					return 1652026494;
				
				case 4:
					return 1652026494;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam0)
			{
				case 0:
					return 2097329273;
				
				case 1:
					return 1961489851;
				
				case 2:
					return -757971088;
				
				case 3:
					return 1652026494;
				
				case 4:
					return 1652026494;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 0:
					return 2097329273;
				
				case 1:
					return 1961489851;
				
				case 2:
					return 1652026494;
				
				case 3:
					return 1652026494;
				
				default:
			}
			break;
	}
	return 0;
}

int func_739(int iParam0)
{
	switch (func_42())
	{
		case 25:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1032791704;
				
				case 5:
					return -1032791704;
				
				case 6:
					return -1032791704;
				
				case 7:
					return -1032791704;
				
				case 8:
					return -1032791704;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1032791704;
				
				case 12:
					return -1726996371;
				
				case 13:
					return 1165008631;
				
				case 14:
					return -2022916910;
				
				case 15:
					return -2022916910;
				
				case 16:
					return -1322183878;
				
				case 17:
					return 628478833;
				
				case 18:
					return 1197039142;
				
				case 19:
					return 300547451;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1861623876;
				
				case 5:
					return -1861623876;
				
				case 6:
					return -1861623876;
				
				case 7:
					return -1861623876;
				
				case 8:
					return -1861623876;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1861623876;
				
				case 12:
					return -1322183878;
				
				case 13:
					return 300547451;
				
				case 14:
					return -2073573168;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1861623876;
				
				case 5:
					return -1861623876;
				
				case 6:
					return -1861623876;
				
				case 7:
					return -1861623876;
				
				case 8:
					return -1861623876;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1861623876;
				
				case 12:
					return 300547451;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1861623876;
				
				case 5:
					return -1861623876;
				
				case 6:
					return -1861623876;
				
				case 7:
					return -1861623876;
				
				case 8:
					return -1861623876;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1861623876;
				
				case 12:
					return -1322183878;
				
				case 13:
					return -1322183878;
				
				case 14:
					return 1524671283;
				
				case 15:
					return 1524671283;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1861623876;
				
				case 5:
					return -1861623876;
				
				case 6:
					return -1861623876;
				
				case 7:
					return -1861623876;
				
				case 8:
					return -1861623876;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1861623876;
				
				case 12:
					return -1322183878;
				
				case 13:
					return -1322183878;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam0)
			{
				case 0:
					return -1861623876;
				
				case 1:
					return -1861623876;
				
				case 2:
					return -1861623876;
				
				case 3:
					return -1861623876;
				
				case 4:
					return -1861623876;
				
				case 5:
					return -1861623876;
				
				case 6:
					return -1861623876;
				
				case 7:
					return -1861623876;
				
				case 8:
					return -1861623876;
				
				case 9:
					return -1861623876;
				
				case 10:
					return -1861623876;
				
				case 11:
					return -1861623876;
				
				case 12:
					return -1322183878;
				
				case 13:
					return 300547451;
				
				default:
			}
			break;
	}
	return 0;
}

int func_740(int iParam0)
{
	switch (func_42())
	{
		case 19:
			switch (iParam0)
			{
				case 0:
					return 300547451;
				
				case 1:
					return -1322183878;
				
				case 2:
					return 1524671283;
				
				case 3:
					return -1034034125;
				
				case 4:
					return 1524671283;
				
				case 5:
					return 1270590574;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 1805980844;
				
				case 1:
					return -503017940;
				
				case 2:
					return -503017940;
				
				case 3:
					return 702880916;
				
				case 4:
					return 702880916;
				
				case 5:
					return -503017940;
				
				case 6:
					return -503017940;
				
				case 7:
					return 702880916;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return -1726996371;
				
				case 1:
					return -1322183878;
				
				case 2:
					return -1322183878;
				
				case 3:
					return -2073573168;
				
				default:
			}
			break;
		
		case 22:
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					return -503017940;
				
				case 1:
					return -503017940;
				
				case 2:
					return -503017940;
				
				case 3:
					return -503017940;
				
				case 4:
					return -1322183878;
				
				case 5:
					return -1322183878;
				
				case 6:
					return 300547451;
				
				case 7:
					return 300547451;
				
				case 8:
					return 300547451;
				
				case 9:
					return 300547451;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				default:
			}
			break;
	}
	return 0;
}

int func_741(int iParam0)
{
	switch (func_42())
	{
		case 13:
			switch (iParam0)
			{
				case 0:
					return 538990259;
				
				case 1:
					return 538990259;
				
				case 2:
					return 538990259;
				
				case 3:
					return 538990259;
				
				case 4:
					return 538990259;
				
				case 5:
					return -2059889071;
				
				case 6:
					return 1265521483;
				
				case 7:
					return 1265521483;
				
				case 8:
					return 1265521483;
				
				case 9:
					return 1265521483;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return -1322183878;
				
				case 2:
					return 538990259;
				
				case 3:
					return 538990259;
				
				case 4:
					return 538990259;
				
				case 5:
					return -1322183878;
				
				case 6:
					return 538990259;
				
				case 7:
					return -524235091;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return -1322183878;
				
				case 2:
					return 538990259;
				
				case 3:
					return 538990259;
				
				case 4:
					return 538990259;
				
				case 5:
					return 538990259;
				
				case 6:
					return -2059889071;
				
				case 7:
					return -2059889071;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return 538990259;
				
				case 2:
					return 538990259;
				
				case 3:
					return 538990259;
				
				case 4:
					return -2059889071;
				
				case 5:
					return -1322183878;
				
				case 6:
					return 538990259;
				
				case 7:
					return -2059889071;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					return -524235091;
				
				case 1:
					return -524235091;
				
				case 2:
					return -524235091;
				
				case 3:
					return -524235091;
				
				case 4:
					return -2059889071;
				
				case 5:
					return 538990259;
				
				case 6:
					return 538990259;
				
				case 7:
					return -2059889071;
				
				case 8:
					return 1524671283;
				
				case 9:
					return 1524671283;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					return -940719073;
				
				case 1:
					return 538990259;
				
				case 2:
					return 538990259;
				
				case 3:
					return 538990259;
				
				case 4:
					return -524235091;
				
				case 5:
					return -524235091;
				
				case 6:
					return -524235091;
				
				case 7:
					return -2059889071;
				
				case 8:
					return -2059889071;
				
				default:
			}
			break;
	}
	return 0;
}

int func_742(int iParam0)
{
	switch (func_42())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1700312454;
				
				case 1:
					return 1700312454;
				
				case 2:
					return 1731900299;
				
				case 3:
					return 1861370687;
				
				case 4:
					return -1322183878;
				
				case 5:
					return -1726996371;
				
				case 6:
					return -2073573168;
				
				case 7:
					return 1748268526;
				
				case 8:
					return 1652026494;
				
				case 9:
					return 1524671283;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 518749770;
				
				case 1:
					return 518749770;
				
				case 2:
					return 716763602;
				
				case 3:
					return 716763602;
				
				case 4:
					return 870605061;
				
				case 5:
					return 870605061;
				
				case 6:
					return 1524671283;
				
				case 7:
					return 1524671283;
				
				case 8:
					return 1524671283;
				
				case 9:
					return 1524671283;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return 518749770;
				
				case 1:
					return 518749770;
				
				case 2:
					return 716763602;
				
				case 3:
					return 716763602;
				
				case 4:
					return 870605061;
				
				case 5:
					return 870605061;
				
				case 6:
					return -1322183878;
				
				case 7:
					return -1322183878;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return 518749770;
				
				case 1:
					return 518749770;
				
				case 2:
					return 518749770;
				
				case 3:
					return 716763602;
				
				case 4:
					return 716763602;
				
				case 5:
					return 870605061;
				
				case 6:
					return 716763602;
				
				case 7:
					return 716763602;
				
				case 8:
					return -1322183878;
				
				case 9:
					return -1322183878;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 518749770;
				
				case 1:
					return 518749770;
				
				case 2:
					return 870605061;
				
				case 3:
					return 870605061;
				
				case 4:
					return 870605061;
				
				case 5:
					return 716763602;
				
				case 6:
					return 716763602;
				
				case 7:
					return 870605061;
				
				case 8:
					return -1243802026;
				
				case 9:
					return -964053093;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return -1322183878;
				
				case 2:
					return 518749770;
				
				case 3:
					return 518749770;
				
				case 4:
					return 870605061;
				
				case 5:
					return 870605061;
				
				case 6:
					return 716763602;
				
				case 7:
					return 716763602;
				
				case 8:
					return 716763602;
				
				case 9:
					return 518749770;
				
				default:
			}
			break;
	}
	return 0;
}

int func_743(int iParam0)
{
	switch (func_42())
	{
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return -1726996371;
				
				case 2:
					return -1322183878;
				
				case 3:
					return -3872440;
				
				case 4:
					return -3872440;
				
				case 5:
					return -1853453107;
				
				case 6:
					return 1524671283;
				
				case 7:
					return 1524671283;
				
				case 8:
					return -1935686084;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1228223417;
				
				case 1:
					return -1228223417;
				
				case 2:
					return -1726996371;
				
				case 3:
					return -1726996371;
				
				case 4:
					return -2022916910;
				
				case 5:
					return -2022916910;
				
				case 6:
					return 1524671283;
				
				case 7:
					return 1524671283;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return 218085040;
				
				case 1:
					return -1228223417;
				
				case 2:
					return -1228223417;
				
				case 3:
					return -1322183878;
				
				case 4:
					return -1322183878;
				
				case 5:
					return 1524671283;
				
				case 6:
					return 1524671283;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1951226014;
				
				case 1:
					return 1861370687;
				
				case 2:
					return 1899123601;
				
				case 3:
					return 1899123601;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1228223417;
				
				case 1:
					return -1228223417;
				
				case 2:
					return -1322183878;
				
				case 3:
					return -2022916910;
				
				case 4:
					return 1524671283;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return -1322183878;
				
				case 1:
					return -1322183878;
				
				case 2:
					return 300547451;
				
				case 3:
					return -2022916910;
				
				case 4:
					return -2022916910;
				
				case 5:
					return -757971088;
				
				default:
			}
			break;
	}
	return 0;
}

int func_744(int iParam0)
{
	switch (func_42())
	{
		case 231:
			switch (iParam0)
			{
				case 0:
					return 1087520462;
				
				case 1:
					return 1325339411;
				
				default:
			}
			break;
	}
	return 0;
}

int func_745(int iParam0)
{
	switch (func_42())
	{
		case 195:
			switch (iParam0)
			{
				case 0:
					return -1584410403;
				
				case 1:
					return -143315610;
				
				case 2:
					return -143315610;
				
				default:
			}
			break;
		
		case 196:
			switch (iParam0)
			{
				case 0:
					return -1584410403;
				
				case 1:
					return -143315610;
				
				case 2:
					return -143315610;
				
				default:
			}
			break;
		
		case 197:
			switch (iParam0)
			{
				case 0:
					return -143315610;
				
				case 1:
					return -143315610;
				
				case 2:
					return -1584410403;
				
				default:
			}
			break;
		
		case 198:
			switch (iParam0)
			{
				case 0:
					return -1584410403;
				
				case 1:
					return -143315610;
				
				case 2:
					return -143315610;
				
				default:
			}
			break;
		
		case 199:
			switch (iParam0)
			{
				case 0:
					return -1584410403;
				
				case 1:
					return -143315610;
				
				case 2:
					return -143315610;
				
				default:
			}
			break;
	}
	return 0;
}

int func_746(int iParam0, int iParam1)
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

void func_747(int iParam0)
{
	if (func_11(iParam0, 4) && !func_11(iParam0, 14))
	{
		if (Local_933.f_2 == 1)
		{
			if (unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]))
			{
				iVar0 = unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]);
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (func_754(unk_0x134B62B726CEC8E6(iVar0)))
					{
						switch (func_106())
						{
							case 17:
								if (func_753(iParam0, iVar0))
								{
									func_140(iParam0, 14);
								}
								break;
							
							default:
								if (func_748(iParam0, iVar0))
								{
									func_140(iParam0, 14);
								}
								break;
							}
						}
					}
				}
			}
	}
}

int func_748(int iParam0, int iParam1)
{
	iVar0 = func_752(unk_0x134B62B726CEC8E6(iParam1));
	if (iVar0 != 0)
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_933.f_682[iParam0]))
		{
			if (unk_0x081C8BC5094A7B76(1))
			{
				unk_0x523BCC9DC80CD82F(iVar0);
				if (unk_0xB87F6CF6E5628C67(iVar0))
				{
					if (func_113(&(Local_933.f_682[iParam0]), iVar0, unk_0xBF584557291FDD31(iParam1, unk_0xF653B9B22DA806A9(iParam1, "chassis_dummy")), 1, 1, 0, 1, 0, 0, 0))
					{
						func_749(iParam0, iParam1);
						unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), 100);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), true, 0);
						unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), true);
						unk_0x71199B01895C6202(iVar0);
						unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), true, true, true, true, true, true, 1, true);
						if (iVar0 == 1652026494)
						{
							unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), 0);
						}
						return 1;
					}
				}
			}
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
	return 0;
}

void func_749(int iParam0, int iParam1)
{
	if (!unk_0x50B5F6F3C29E9380(unk_0xB177666FAB6F4417(Local_933.f_682[iParam0]), iParam1))
	{
		sVar0 = "chassis_dummy";
		unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_933.f_682[iParam0]), iParam1, unk_0xF653B9B22DA806A9(iParam1, sVar0), func_751(unk_0x134B62B726CEC8E6(iParam1), 0), func_750(unk_0x134B62B726CEC8E6(iParam1)), 1, 0, 0, 0, 2, 1);
	}
}

Vector3 func_750(int iParam0)
{
	switch (iParam0)
	{
		case 1747439474:
			return 0f, 0f, 0f;
		
		default:
	}
	return 0f, 0f, 90f;
}

Vector3 func_751(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1488164764:
			return 0f, -1,25f, -0,2f;
		
		case 1475773103:
			return 0f, -1,8f, -0,4f;
		
		case -120287622:
			return 0,55f, -2,73f, 0,4f;
		
		case 699456151:
			return 0f, 0f, -0,3f;
		
		case 1747439474:
			return 0f, -2,5f, 0,45f;
		
		case 121658888:
			return 0f, -2,25f, 0f;
		
		case -907477130:
			return 0f, -1,5f, -0,1f;
		
		case 972671128:
			switch (iParam1)
			{
				case 0:
					return -0,24f, -2,18f, 0,12f;
				
				default:
			}
			return 0,28f, -2,1f, 0,12f;
		
		default:
	}
	return 0f, -1,25f, -0,1f;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 456714581:
		case -810318068:
		case 1488164764:
			return -1322183878;
		
		case -1987130134:
		case 699456151:
			return -2022916910;
		
		case 1475773103:
		case -120287622:
			return 1165008631;
		
		case 121658888:
			return 1652026494;
		
		case 972671128:
			return 1666748342;
		
		case -907477130:
		case -1346687836:
			return 247892203;
		
		case 1747439474:
			return 788248216;
		
		default:
	}
	return -1322183878;
}

int func_753(int iParam0, int iParam1)
{
	iVar0 = func_752(unk_0x134B62B726CEC8E6(iParam1));
	if (func_748(iParam0, iParam1))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_933.f_687))
		{
			if (unk_0x081C8BC5094A7B76(1))
			{
				unk_0x523BCC9DC80CD82F(iVar0);
				if (unk_0xB87F6CF6E5628C67(iVar0))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam1, func_751(unk_0x134B62B726CEC8E6(iParam1), 1)) };
					if (func_113(&(Local_933.f_687), iVar0, vVar1, 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_933.f_687), iParam1, unk_0xF653B9B22DA806A9(iParam1, "chassis_dummy"), func_751(unk_0x134B62B726CEC8E6(iParam1), 1), 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_933.f_687), 100);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_933.f_687), true, 0);
						unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_933.f_687), true);
						unk_0x71199B01895C6202(iVar0);
						unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_687), true, true, true, true, true, true, 1, true);
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 456714581:
		case -810318068:
		case 1488164764:
		case 1475773103:
		case -120287622:
		case -1346687836:
		case -1987130134:
		case -119658072:
		case 943752001:
		case 65402552:
		case 699456151:
		case 1747439474:
		case 121658888:
		case 972671128:
		case -907477130:
			return 1;
		
		default:
	}
	return 0;
}

void func_755(int iParam0)
{
	if ((func_11(iParam0, 7) || func_6(0)) || func_137(1))
	{
		if (!func_11(iParam0, 4))
		{
			if (!func_698())
			{
				if (func_115(func_2345(iParam0)))
				{
					switch (func_106())
					{
						case 7:
							Var1.f_4 = 1125515264;
							Var1.f_5 = 1;
							Var1.f_6 = 1;
							Var1.f_8 = 1082130432;
							Var1.f_9 = 1176255488;
							Var1.f_10 = 1;
							Var1.f_13 = 1;
							Var1.f_15 = 2;
							Var1.f_22 = 2;
							Var1.f_25 = 1;
							Var1.f_26 = 1;
							Var1.f_29 = 1123024896;
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!unk_0xE5DBF9B6126856CA(Local_933.f_33[iParam0]))
								{
									if (func_775(iParam0, iVar0))
									{
										if (func_179(Local_933.f_7[iParam0]))
										{
											Local_933.f_7[iParam0] = { func_416(Local_933.f_3, iVar0) };
											Local_933.f_32 = func_276(Local_933.f_3, iVar0);
										}
										else
										{
											func_254(Local_933.f_7[iParam0], 30f, 0);
											if (func_251(&(Local_933.f_33[iParam0]), func_2345(iParam0), Local_933.f_7[iParam0], Local_933.f_32, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
											{
												func_209(iParam0, func_2345(iParam0), Local_933.f_33[iParam0], 0);
												unk_0x71199B01895C6202(func_2345(iParam0));
												func_140(iParam0, 4);
												Local_933.f_7[iParam0] = { 0f, 0f, 0f };
												Local_933.f_32 = 0f;
											}
										}
									}
									else if (Local_933.f_508 == -1 && Local_933.f_514 == -1)
									{
										if (Local_933.f_515 == -1 || Local_933.f_515 == iParam0)
										{
											if (func_179(Local_933.f_7[iParam0]))
											{
												Local_933.f_515 = iParam0;
												Var1 = 750f;
												Var1.f_1 = 1;
												Var1.f_4 = 1500f;
												Var1.f_5 = 1;
												Var1.f_6 = 1;
												Var1.f_12 = 1;
												Var1.f_10 = 0;
												vVar31 = { func_416(Local_933.f_3, Local_933.f_778) };
												func_279(vVar31, vVar34, func_2345(iParam0), 0, &(Local_933.f_7[iParam0]), &(Local_933.f_32), &Var1);
											}
											else if (func_251(&(Local_933.f_33[iParam0]), func_2345(iParam0), Local_933.f_7[iParam0], Local_933.f_32, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
											{
												func_209(iParam0, func_2345(iParam0), Local_933.f_33[iParam0], 0);
												unk_0x71199B01895C6202(func_2345(iParam0));
												func_140(iParam0, 4);
												Local_933.f_7[iParam0] = { 0f, 0f, 0f };
												Local_933.f_32 = 0f;
												Local_933.f_515 = -1;
												Local_933.f_778++;
											}
										}
									}
								}
								iVar0++;
							}
							break;
						
						case 20:
							if (func_179(Local_933.f_7[iParam0]))
							{
								if (iParam0 == 0)
								{
									if (func_79(25))
									{
										bVar37 = true;
									}
								}
								if (iParam0 == 1)
								{
									if (func_79(26))
									{
										bVar37 = true;
									}
								}
								if (bVar37)
								{
									if (Local_933.f_508 == -1 && Local_933.f_514 == -1)
									{
										if (Local_933.f_514 == -1 || Local_933.f_515 == iParam0)
										{
											Local_933.f_515 = iParam0;
											Var1 = 25f;
											Var1.f_1 = 1;
											Var1.f_4 = 250f;
											Var1.f_5 = 1;
											Var1.f_6 = 1;
											Var1.f_12 = 1;
											Var1.f_10 = 0;
											func_773(iParam0, func_443(func_106(), Local_933.f_3, 0, iParam0, 0), &(Local_933.f_7[iParam0]), &(Local_933.f_32), 0);
										}
									}
								}
								else
								{
									Local_933.f_7[iParam0] = { func_443(func_106(), Local_933.f_3, 0, iParam0, 0) };
									Local_933.f_32 = func_772(func_106(), Local_933.f_3, 0, iParam0, 0);
								}
							}
							else if (func_251(&(Local_933.f_33[iParam0]), func_2345(iParam0), Local_933.f_7[iParam0], Local_933.f_32, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								func_209(iParam0, func_2345(iParam0), Local_933.f_33[iParam0], 0);
								func_771(iParam0);
								unk_0x71199B01895C6202(func_2345(iParam0));
								func_140(iParam0, 4);
								Local_933.f_7[iParam0] = { 0f, 0f, 0f };
								Local_933.f_32 = 0f;
								Local_933.f_515 = -1;
							}
							break;
						
						case 22:
						case 24:
						case 25:
						case 26:
						case 29:
						case 1:
						case 15:
						case 16:
						case 17:
						case 19:
						case 3:
						case 8:
						case 11:
							if (func_179(Local_933.f_7[iParam0]))
							{
								Local_933.f_7[iParam0] = { func_443(func_106(), Local_933.f_3, 0, iParam0, 0) };
								Local_933.f_32 = func_772(func_106(), Local_933.f_3, 0, iParam0, 0);
							}
							else
							{
								func_254(Local_933.f_7[iParam0], 30f, 0);
								if (func_251(&(Local_933.f_33[iParam0]), func_2345(iParam0), Local_933.f_7[iParam0], Local_933.f_32, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_209(iParam0, func_2345(iParam0), Local_933.f_33[iParam0], 0);
									func_771(iParam0);
									unk_0x71199B01895C6202(func_2345(iParam0));
									func_140(iParam0, 4);
								}
							}
							break;
						
						case 9:
							if (Local_933.f_508 == -1 && Local_933.f_514 == -1)
							{
								if (Local_933.f_514 == -1 || Local_933.f_515 == iParam0)
								{
									if (func_179(Local_933.f_7[iParam0]))
									{
										Local_933.f_515 = iParam0;
										func_773(iParam0, func_770(), &(Local_933.f_7[iParam0]), &(Local_933.f_32), 0);
									}
									else if (func_251(&(Local_933.f_33[iParam0]), func_2345(iParam0), Local_933.f_7[iParam0], Local_933.f_32, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
									{
										func_209(iParam0, func_2345(iParam0), Local_933.f_33[iParam0], 0);
										func_771(iParam0);
										unk_0x71199B01895C6202(func_2345(iParam0));
										func_140(iParam0, 4);
										Local_933.f_7[iParam0] = { 0f, 0f, 0f };
										Local_933.f_515 = -1;
									}
								}
							}
							break;
						
						case 14:
							func_766();
							break;
						
						case 0:
						case 2:
						case 4:
						case 18:
						case 6:
						case 5:
						case 10:
						case 12:
						case 13:
							func_756();
							break;
						}
					}
				}
			}
	}
}

void func_756()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_763(iVar0))
		{
			if (iVar0 < func_704(0, 0))
			{
				if (func_762(iVar0))
				{
					if (!func_11(iVar0, 4))
					{
						if (unk_0x4CC720B42A6F53CA(1))
						{
							if (func_106() == 38)
							{
								if (func_759(iVar0))
								{
									func_140(iVar0, 4);
								}
							}
							else if (func_757(iVar0))
							{
								func_140(iVar0, 4);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_757(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		vVar0 = { func_443(func_106(), Local_933.f_3, 0, iParam0, 0) };
		bVar3 = true;
		if (func_106() == 6)
		{
			bVar3 = false;
		}
		Local_933.f_33[iParam0] = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(1263688126, vVar0, bVar3, func_2345(iParam0)));
		unk_0xF4F945BB00F6E31C(Local_933.f_33[iParam0], 1);
		unk_0xD458AC1C1D29C3B4(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 50, 0);
		unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true);
		unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true, true, false, true, true, true, 1, false);
		unk_0xCA9092D0E562B691(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), 1);
		unk_0xE8832A9E16A57A1F(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), true, 1);
		unk_0x120A395B0ECB8EA5(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), true);
		if (func_106() == 10)
		{
			unk_0xD8F6A53F4799FAFE(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), func_758(iParam0));
		}
		unk_0xC6C861E67FF442D8(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 1);
	}
	if (unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		Local_933.f_563[iParam0] = unk_0xDD0E7998AE8AD485();
		return 1;
	}
	return 0;
}

float func_758(int iParam0)
{
	switch (func_42())
	{
		case 78:
			switch (iParam0)
			{
				case 0:
					return 191,999f;
				
				case 1:
					return 65,999f;
				
				case 2:
					return 191,999f;
				
				case 3:
					return 304,9987f;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam0)
			{
				case 0:
					return 342,9986f;
				
				case 1:
					return 304,9987f;
				
				case 2:
					return 296,7986f;
				
				case 3:
					return 330,9984f;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 0:
					return 344,1984f;
				
				case 1:
					return 325,9984f;
				
				case 2:
					return 297,1982f;
				
				case 3:
					return 331,398f;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 0:
					return 315,798f;
				
				case 1:
					return 240,1975f;
				
				case 2:
					return 240,1975f;
				
				case 3:
					return 310,3974f;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam0)
			{
				case 0:
					return 155,3952f;
				
				case 1:
					return 230,995f;
				
				case 2:
					return 11,7942f;
				
				case 3:
					return 112,9941f;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam0)
			{
				case 0:
					return 36,1999f;
				
				case 1:
					return -1,8001f;
				
				case 2:
					return 287,9998f;
				
				case 3:
					return 322,1996f;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam0)
			{
				case 0:
					return 266,9995f;
				
				case 1:
					return 322,1996f;
				
				case 2:
					return 19,7994f;
				
				case 3:
					return 79,7993f;
				
				default:
			}
			break;
	}
	return 0f;
}

int func_759(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		vVar0 = { func_760(iParam0) };
		if (func_363(vVar0, 3f, 1f, 1f, 0f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0f, 0, 0))
		{
			Local_933.f_33[iParam0] = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(1263688126, vVar0, true, func_2345(iParam0)));
			unk_0xF4F945BB00F6E31C(Local_933.f_33[iParam0], 1);
			unk_0xD458AC1C1D29C3B4(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 50, 0);
			unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true);
			unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true, true, false, true, true, true, 1, false);
			unk_0xCA9092D0E562B691(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), 1);
		}
		else
		{
			fLocal_2029[iParam0] = (fLocal_2029[iParam0] + 30f);
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		Local_933.f_563[iParam0] = unk_0xDD0E7998AE8AD485();
		return 1;
	}
	return 0;
}

Vector3 func_760(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_143(iVar0, 0))
		{
			if (func_9(Local_933.f_404[iVar0]))
			{
				return unk_0x68E4ADDDDCD7BDDE(unk_0xA5FBBC2F619A4DE2(Local_933.f_404[iVar0]), func_761(iParam0));
			}
		}
		iVar0++;
	}
	return vLocal_894 + func_761(iParam0);
}

Vector3 func_761(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { 0f, 15f, 0f };
			break;
		
		case 1:
			vVar0 = { 5f, -15f, 0f };
			break;
		
		case 2:
			vVar0 = { -10f, -15f, 0f };
			break;
	}
	vVar0.z = (vVar0.z + fLocal_2029[iParam0]);
	return vVar0;
}

int func_762(int iParam0)
{
	if (func_11(iParam0, 4))
	{
		return 0;
	}
	switch (func_106())
	{
		case 0:
		case 2:
		case 18:
			return 1;
		
		case 33:
		case 30:
		case 31:
		case 4:
		case 12:
		case 13:
			if (!func_11(iParam0, 3))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_11(iParam0, 16))
			{
				return 0;
			}
			break;
		
		case 38:
			if (!func_21())
			{
				return 0;
			}
			break;
		
		case 14:
			if (!func_6(0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_763(int iParam0)
{
	unk_0x523BCC9DC80CD82F(func_2345(iParam0));
	unk_0x523BCC9DC80CD82F(func_765());
	unk_0x3F423BF5B8125A50(func_764());
	if ((unk_0xB87F6CF6E5628C67(func_2345(iParam0)) && unk_0xB87F6CF6E5628C67(func_765())) && unk_0xB4AE0788C1587752(func_764()))
	{
		return 1;
	}
	return 0;
}

char* func_764()
{
	return "P_cargo_chute_S";
}

int func_765()
{
	return 886894755;
}

void func_766()
{
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		if (func_763(iVar0))
		{
			if (iVar0 < func_2346())
			{
				if (func_762(iVar0))
				{
					if (func_768(iVar0))
					{
						if (unk_0x4CC720B42A6F53CA(1))
						{
							func_767(iVar0);
							func_140(iVar0, 4);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_767(int iParam0)
{
	vVar0 = { 0f, 0f, 100f };
	if (func_106() == 38)
	{
		if (iParam0 == 2)
		{
			vVar0 = { -5f, -5f, 0f };
		}
		else if (iParam0 == 1)
		{
			vVar0 = { 5f, 5f, 0f };
		}
		else
		{
			vVar0 = { 0f, 0f, 0f };
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		Local_933.f_33[iParam0] = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(1263688126, func_443(func_106(), Local_933.f_3, 0, iParam0, 0) + vVar0, false, func_2345(iParam0)));
		unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 30,5195f);
		unk_0xF4F945BB00F6E31C(Local_933.f_33[iParam0], 1);
		unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true);
		unk_0xD458AC1C1D29C3B4(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 50, 0);
		unk_0xEDD4DD1B0A096072(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 1);
		unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 1);
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true);
		unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]));
		unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 0f, 0f, -0,2f);
		unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true, 0);
		unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true, true, false, true, true, true, 1, false);
		unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 1200);
		unk_0xCA9092D0E562B691(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), 1);
		unk_0xE8832A9E16A57A1F(unk_0xA5FBBC2F619A4DE2(Local_933.f_33[iParam0]), true, 1);
		unk_0xC6C861E67FF442D8(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 1);
	}
	if (unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_933.f_528[iParam0]))
		{
			if (func_113(&(Local_933.f_528[iParam0]), func_765(), unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), true) + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
			{
				unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]), unk_0x09AD4CE7DA179533(Local_933.f_33[iParam0]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]), 1);
				unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]), false);
				unk_0xD65E6E13E145467B(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, 0, 0f, 0);
				unk_0x295ACC5727E47CB7(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]));
				unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_933.f_528[iParam0]), 1200);
				func_34(&(Local_933.f_537[iParam0]));
			}
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_933.f_33[iParam0]) && unk_0xE9F78D191AD5EDBA(Local_933.f_528[iParam0]))
	{
		Local_933.f_563[iParam0] = unk_0xDD0E7998AE8AD485();
		return 1;
	}
	return 0;
}

int func_768(int iParam0)
{
	if (func_106() != 14)
	{
		return 1;
	}
	if (!func_5(&(Local_933.f_738)))
	{
		func_4(&(Local_933.f_738), 0, 0);
	}
	else if (func_3(&(Local_933.f_738), func_769(iParam0), 0))
	{
		return 1;
	}
	return 0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 2000;
		
		case 2:
			return 3000;
		
		case 3:
			return 4000;
		
		case 4:
			return 4500;
		
		case 5:
			return 7000;
		
		case 6:
			return 7750;
		
		case 7:
			return 9000;
		
		default:
	}
	return iParam0 * 2000;
}

Vector3 func_770()
{
	if (func_106() == 9)
	{
		switch (func_42())
		{
			case 68:
				return -421,5801f, 6031,294f, 30,3913f;
			
			case 69:
				return 1861,159f, 3673,516f, 32,8167f;
			
			case 70:
				return 622,8243f, 27,644f, 87,3165f;
			
			case 71:
				return -1082,217f, -786,8298f, 18,2366f;
			
			case 72:
				return 410,4437f, -964,8663f, 28,4713f;
			
			case 73:
				return 813,8412f, -1420,534f, 26,2128f;
			}
		
		default:
	}
	return -437,9446f, -2675,74f, 5,0002f;
}

void func_771(int iParam0)
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]), true), func_443(func_106(), Local_933.f_3, 0, iParam0, 0), true) <= 2f)
	{
		fVar0 = func_772(func_106(), Local_933.f_3, 0, iParam0, 0);
		unk_0xD8F6A53F4799FAFE(unk_0xB177666FAB6F4417(Local_933.f_33[iParam0]), fVar0);
	}
}

float func_772(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (iParam0 == 26)
	{
		if (!bParam2 || iParam4)
		{
			return func_452(iParam1, iParam3);
		}
	}
	return func_452(iParam1, iParam3);
}

int func_773(int iParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6)
{
	if (func_179(*uParam4))
	{
		Local_933.f_515 = iParam0;
		Var0.f_4 = 1125515264;
		Var0.f_5 = 1;
		Var0.f_6 = 1;
		Var0.f_8 = 1082130432;
		Var0.f_9 = 1176255488;
		Var0.f_10 = 1;
		Var0.f_13 = 1;
		Var0.f_15 = 2;
		Var0.f_22 = 2;
		Var0.f_25 = 1;
		Var0.f_26 = 1;
		Var0.f_29 = 1123024896;
		Var0 = 85f;
		Var0.f_1 = 1;
		Var0.f_4 = 135f;
		if (bParam6)
		{
			Var0 = 100f;
			Var0.f_4 = 250f;
		}
		Var0.f_5 = 1;
		Var0.f_6 = 1;
		Var0.f_12 = 1;
		Var0.f_10 = 0;
		if (func_279(vParam1, vParam1, func_2345(iParam0), 0, uParam4, uParam5, &Var0))
		{
			return 1;
		}
	}
	return 0;
	if (func_179(*uParam4))
	{
		fVar30 = unk_0x79833B02DBD2A244(75f, 100f);
		bVar31 = true;
		Local_933.f_522 = { func_774(Local_933.f_522) };
		if (unk_0x913A58CA04510D94(vParam1, Local_933.f_522, fVar30, uParam4))
		{
			fVar32 = unk_0x0EB28750412C3A5A(*uParam4, vParam1, false);
			if (fVar32 > 120f)
			{
				bVar31 = false;
			}
			if (!func_363(*uParam4, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				bVar31 = false;
			}
			if (!bVar31)
			{
				*uParam4 = { 0f, 0f, 0f };
				func_419(&(Local_933.f_522));
			}
			else
			{
				*uParam5 = func_420(*uParam4, vParam1);
				return 1;
			}
		}
		else
		{
			*uParam4 = { 0f, 0f, 0f };
			func_419(&(Local_933.f_522));
		}
	}
	return 0;
}

Vector3 func_774(vector3 vParam0)
{
	return (-sin(vParam0.z) * cos(vParam0.x)), (cos(vParam0.z) * cos(vParam0.x)), sin(vParam0.x);
}

bool func_775(int iParam0, int iParam1)
{
	return iParam0 == Local_933.f_779[iParam1];
}

void func_776(int iParam0)
{
	Local_933.f_455 = iParam0;
}

int func_777()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

void func_778()
{
	func_2278();
	func_2274();
	func_2271();
	func_2267();
	func_2241();
	func_2240();
	func_2237();
	func_2236();
	func_2233();
	func_2232();
	func_2228();
	func_2227();
	func_2226();
	func_2225();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_2224(iVar0);
		iVar0++;
	}
	func_2221();
	func_2219();
	func_2216();
	func_2206();
	func_2103();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_2102(iVar0);
		func_2101(iVar0);
		func_2100(iVar0);
		func_2097(iVar0);
		iVar0++;
	}
	func_2095();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_2094(iVar0);
		func_2089(iVar0);
		iVar0++;
	}
	func_2085();
	func_2081();
	func_2076();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_2074(iVar0);
		func_2073(iVar0);
		func_2066(iVar0);
		func_2065(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_2063(iVar0);
		iVar0++;
	}
	func_2059();
	func_2058();
	func_2025();
	func_1971();
	func_1968();
	func_1963();
	func_1959();
	func_1950();
	func_1942();
	func_1929();
	func_1812();
	func_1811();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_1810(iVar0);
		iVar0++;
	}
	func_1801();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_1800(iVar0);
		iVar0++;
	}
	func_1799();
	func_1796();
	func_1795();
	func_1789();
	func_1786();
	func_1783();
	func_1782();
	func_1780();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_1778(iVar0);
		iVar0++;
	}
	func_1777();
	func_1753();
	func_1745();
	func_1742();
	func_1724();
	func_1717();
	func_1712();
	func_1708();
	func_1707();
	func_1706();
	func_1703();
	func_1702();
	func_1689();
	func_1688();
	func_1685();
	func_1684();
	func_1682();
	func_1680();
	func_1640();
	func_1639();
	func_1637();
	func_1635();
	iVar0 = 0;
	while (iVar0 < func_2346())
	{
		func_1634(iVar0);
		func_1629(iVar0);
		iVar0++;
	}
	func_1625();
	func_1607();
	func_1605();
	func_1603();
	func_1597();
	func_1596();
	func_1593();
	func_1567();
	func_1566();
	func_1565();
	func_1563();
	func_1540();
	func_1536();
	func_1535();
	func_1532();
	func_1530();
	func_1527();
	switch (func_1526())
	{
		case 0:
			if (func_7(1))
			{
				if (!func_1525(29))
				{
					if (func_18(func_106()))
					{
						func_1503(&iLocal_901, &(Local_933.f_785), func_1507(0), iLocal_764);
					}
					if (func_106() == 13)
					{
						unk_0x837C600ECEE8ABA2("SE_DLC_Biker_Tequilala_Exterior_Emitter", true);
					}
					func_1502(29);
				}
			}
			break;
		
		case 1:
			if ((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0))
			{
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
					}
				}
			}
			break;
		
		case 2:
			if ((((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0)) && func_27(7)) && !func_27(10))
			{
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						if (iLocal_663 > -1)
						{
						}
					}
				}
			}
			else
			{
				func_1345();
			}
			break;
		
		case 3:
			if ((((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0)) && func_27(7)) && !func_27(10))
			{
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						if (iLocal_663 > -1)
						{
						}
					}
				}
			}
			else
			{
				func_1345();
			}
			break;
		
		case 4:
			if ((((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0)) && func_27(7)) && !func_27(10))
			{
				func_1297();
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						if (iLocal_663 > -1)
						{
							if (func_106() == 14)
							{
								if (!func_565(5))
								{
									if (func_1295(0))
									{
										func_1274(86, func_1294(), func_1293(), 1, -1, 2, 1, 0);
										func_1273(5);
									}
								}
								else if (!func_565(6))
								{
									if (func_1272(86))
									{
										func_1273(6);
									}
								}
								if (!func_7(2))
								{
									func_1271();
									func_1265();
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										func_1256(iVar0);
										iVar0++;
									}
								}
								else if (!func_1255(4))
								{
									func_1271();
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										func_1254(iVar0);
										iVar0++;
									}
									func_1251("BRS_KILLEN", "BRS_ENEMIES", 6, 0);
								}
								else
								{
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										func_1254(iVar0);
										iVar0++;
									}
									if (!func_22(1))
									{
										if (!func_1250())
										{
											func_1249();
											if (!func_133(15))
											{
												func_1237("BRS_SFL_BRKFL", 0);
											}
											else
											{
												func_1237("BRS_SFL_GETFL", 0);
											}
											func_1236();
										}
										else
										{
											func_1271();
											if (!func_22(1))
											{
												func_1265();
												func_1235();
											}
										}
									}
									else
									{
										if (func_2346() <= 1)
										{
											func_1237("BRS_WAITCRa", 0);
										}
										else
										{
											func_1237("BRS_WAITCRb", 0);
										}
										func_1236();
									}
								}
							}
							else
							{
								iVar0 = 0;
								while (iVar0 < func_2346())
								{
									func_1256(iVar0);
									iVar0++;
								}
								func_1265();
							}
						}
					}
				}
			}
			else
			{
				func_1345();
			}
			break;
		
		case 5:
			if (func_106() != 36 && func_106() != 9)
			{
				iVar0 = 0;
				while (iVar0 < func_2346())
				{
					func_1254(iVar0);
					iVar0++;
				}
			}
			if (func_106() == 37)
			{
				func_1234();
				func_1233();
			}
			else if (func_106() == 38)
			{
				func_1232();
			}
			else if (func_106() == 14)
			{
				func_1271();
			}
			if ((((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0)) && func_27(7)) && !func_27(10))
			{
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						if (((((func_19() || func_106() == 4) || func_106() == 6) || func_106() == 9) || func_106() == 12) || func_106() == 13)
						{
							if (iLocal_663 > -1)
							{
								if (func_106() == 9)
								{
									if (func_19())
									{
										bVar1 = true;
										func_1229();
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											func_1254(iVar0);
											iVar0++;
										}
									}
									else if (!func_1228(unk_0xFB04705FDFDCE640(), 2) && !func_1228(unk_0xFB04705FDFDCE640(), 3))
									{
										if (!func_1227(3))
										{
											if (!unk_0xFEBC1E4EC9E001F0() && !func_1226())
											{
												if (fLocal_752 <= func_1225())
												{
													func_1224("BRS_LURE_WTD", -1);
												}
											}
										}
										func_1222();
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											func_1256(iVar0);
											iVar0++;
										}
									}
									else
									{
										if (!func_1221(15))
										{
											if (!unk_0xFEBC1E4EC9E001F0())
											{
												if (!func_1226())
												{
													func_1224("BRS_LURE_GWTD", -1);
													func_1220(15);
												}
											}
										}
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											func_1254(iVar0);
											iVar0++;
										}
										if (func_137(2))
										{
											func_1237("BRS_KPWANTD", 0);
										}
										else if (!func_1228(unk_0xFB04705FDFDCE640(), 2))
										{
											func_1237("BRS_GETWANTD", 0);
										}
									}
								}
								else if (func_106() == 7)
								{
									func_1217(&bVar1, 0);
								}
								else
								{
									if (func_1216())
									{
										bVar1 = true;
									}
									func_1229();
								}
								if (bVar1)
								{
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										func_1215(iVar0);
										if (iLocal_697[iVar0] == func_48() && !func_8(iVar0))
										{
											func_1211(iVar0);
										}
										else
										{
											func_1210(iVar0);
										}
										iVar0++;
									}
								}
								if (func_106() == 5)
								{
									if (!func_133(1))
									{
										func_1209();
									}
									else
									{
										func_1208();
									}
								}
								else if (func_106() == 11)
								{
									if (!func_137(3) || (func_137(3) && !func_3(&uLocal_890, 4000, 0)))
									{
										func_1206();
									}
									else
									{
										func_1205();
									}
								}
								else if (func_106() == 12)
								{
									if (!func_698())
									{
										func_1154();
									}
									else
									{
										func_1153();
									}
								}
								else if (func_106() == 13)
								{
									func_1150();
								}
							}
						}
					}
				}
			}
			else
			{
				func_1345();
				iVar0 = 0;
				while (iVar0 < func_2346())
				{
					func_1210(iVar0);
					iVar0++;
				}
			}
			break;
		
		case 6:
			if (unk_0xE4EDC4B0E92C078B(iLocal_839))
			{
				unk_0x142CC44DB769B57E(&iLocal_839);
			}
			if (func_106() == 31 || func_106() == 33)
			{
				func_1148(0);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < func_2346())
				{
					func_1254(iVar0);
					iVar0++;
				}
			}
			if (func_106() == 38)
			{
				func_1232();
			}
			else if (func_106() == 14)
			{
				func_1271();
			}
			if ((((!func_1497() && !func_1496()) && func_1468(1, 1, 1, 0)) && func_27(7)) && !func_27(10))
			{
				if (func_565(3))
				{
					if (func_12() == 0)
					{
						func_1346(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						if (iLocal_663 > -1)
						{
							if (func_106() == 7)
							{
								func_1217(&bVar2, 1);
							}
							if (func_106() == 12)
							{
								if (!func_698())
								{
									func_1154();
								}
								else
								{
									func_1153();
								}
							}
							if (func_1146(unk_0xD803B885F5E47A62(), 1))
							{
								if (func_106() == 13)
								{
									func_1145();
								}
								iVar0 = 0;
								while (iVar0 < func_2346())
								{
									if (func_1144(iVar0, unk_0xD803B885F5E47A62()))
									{
										func_1143(10);
										func_1143(11);
										if (func_11(iVar0, 1))
										{
											func_1143(12);
										}
									}
									iVar0++;
								}
								if (func_1142())
								{
									func_1125();
									func_1237(func_1124(0), 0);
									if (!func_565(5))
									{
										if (func_1295(0))
										{
											func_1274(86, func_1294(), func_1124(1), 1, -1, 2, 1, 0);
											func_1273(5);
										}
									}
									else if (!func_565(6))
									{
										if (func_1272(86))
										{
											func_1273(6);
										}
									}
								}
								else
								{
									if (Local_933.f_2 == 1)
									{
										func_1121();
									}
									else if (func_1146(unk_0xD803B885F5E47A62(), 1))
									{
										if (unk_0xC844350D5D58C99A(iLocal_738))
										{
											if (unk_0xDF1306B443CD3D15(iLocal_738, 0))
											{
												func_1121();
											}
										}
									}
									func_1118();
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										if (iLocal_697[iVar0] != func_48() || func_8(iVar0))
										{
											func_1210(iVar0);
										}
										else if (func_106() == 35)
										{
											if (func_11(iVar0, 5) && !func_8(iVar0))
											{
												func_1211(iVar0);
											}
										}
										else
										{
											func_1211(iVar0);
										}
										iVar0++;
									}
									func_1116(1);
								}
							}
							else
							{
								func_1115(10);
								func_1115(11);
								func_1115(12);
								if (func_1114() && func_698())
								{
									if (func_106() == 13)
									{
										func_1145();
									}
									if (func_106() == 31 || func_106() == 33)
									{
										func_1113();
									}
									iVar0 = 0;
									while (iVar0 < func_2346())
									{
										func_1210(iVar0);
										iVar0++;
									}
									func_1118();
									if (Local_933.f_2 == 1)
									{
										func_1121();
									}
									else if (func_1146(unk_0xD803B885F5E47A62(), 1))
									{
										if (unk_0xC844350D5D58C99A(iLocal_738))
										{
											if (unk_0xDF1306B443CD3D15(iLocal_738, 0))
											{
												func_1121();
											}
										}
									}
									func_1107();
								}
								else
								{
									if (func_106() == 31 || func_106() == 33)
									{
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											if (func_11(iVar0, 4))
											{
												func_1215(iVar0);
												if (iLocal_697[iVar0] == func_48() && !func_8(iVar0))
												{
													func_1211(iVar0);
												}
												else
												{
													func_1210(iVar0);
												}
											}
											else
											{
												func_1256(iVar0);
											}
											iVar0++;
										}
									}
									else if (func_106() == 7)
									{
										func_1217(&bVar2, 0);
										if (bVar2)
										{
											iVar0 = 0;
											while (iVar0 < func_2346())
											{
												func_1215(iVar0);
												if (iLocal_697[iVar0] == func_48() && !func_8(iVar0))
												{
													func_1211(iVar0);
												}
												else
												{
													func_1210(iVar0);
												}
												iVar0++;
											}
										}
									}
									else if (func_106() == 35)
									{
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											if (func_11(iVar0, 5))
											{
												func_1215(iVar0);
												if (iLocal_697[iVar0] == func_48() && !func_8(iVar0))
												{
													func_1211(iVar0);
												}
												else
												{
													func_1210(iVar0);
												}
											}
											else
											{
												func_1256(iVar0);
											}
											iVar0++;
										}
									}
									else if (func_106() == 39)
									{
										iVar3 = 0;
										while (iVar3 < func_1106())
										{
											func_1215(iVar3);
											if (iLocal_697[0] == func_48() && !func_8(iVar0))
											{
												func_1211(0);
											}
											else
											{
												func_1210(0);
											}
											if ((!func_22(func_1105(iVar3)) && !func_22(4)) && !func_1104(iVar3))
											{
												func_1101(iVar3);
											}
											else
											{
												func_1099(func_1100(iVar3));
												func_1098(iVar3);
											}
											iVar3++;
										}
									}
									func_1096();
									if ((func_106() == 35 && func_1095()) || func_106() != 35)
									{
										iVar0 = 0;
										while (iVar0 < func_2346())
										{
											if (iLocal_697[iVar0] == func_48() && !func_8(iVar0))
											{
												func_1211(iVar0);
											}
											else
											{
												func_1210(iVar0);
											}
											iVar0++;
										}
									}
									if (func_106() == 13)
									{
										func_1150();
									}
									func_1229();
								}
							}
						}
					}
				}
				if (func_346() || func_2330(unk_0xFB04705FDFDCE640(), 13))
				{
					func_1345();
					func_1096();
					func_1115(10);
					func_1115(11);
					func_1115(12);
					iVar0 = 0;
					while (iVar0 < func_2346())
					{
						func_1210(iVar0);
						func_1215(iVar0);
						iVar0++;
					}
				}
			}
			else
			{
				func_1345();
				func_1125();
			}
			break;
		
		case 7:
			if (!func_1094(unk_0xFB04705FDFDCE640(), 14))
			{
				if (func_27(8))
				{
					func_1093(14);
				}
				else if (!func_2330(unk_0xFB04705FDFDCE640(), 13))
				{
					if (Local_1755[unk_0x57270EE11514DC67()].f_6 != 0)
					{
						Local_1755[unk_0x57270EE11514DC67()].f_6 = 0;
					}
					func_2329(13);
				}
			}
			break;
		
		case 8:
			func_1093(14);
			func_1077();
			func_1125();
			func_1076();
			func_1345();
			func_779();
			break;
		
		case 9:
			break;
	}
}

void func_779()
{
	if (func_1075(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (!func_565(0))
	{
		if (!func_346())
		{
			if (func_2503(unk_0xD803B885F5E47A62(), 1, 1))
			{
				if (func_12() != 0)
				{
					if (func_1468(1, 1, 1, 0))
					{
						if ((!func_1497() && !func_1496()) && !func_1074(192))
						{
							if (func_1295(1))
							{
								switch (func_12())
								{
									case 2:
										unk_0xA37A90C62806D848(1);
										break;
									
									case 3:
										unk_0xA37A90C62806D848(1);
										func_1274(91, func_1073(), "BRS_MBRSLFT", 1, -1, 2, 1, 0);
										break;
									
									case 1:
									case 7:
										unk_0xA37A90C62806D848(1);
										sVar0 = "BRS_NODEL1";
										if (!func_11(0, 8) || func_12() == 7)
										{
											sVar0 = "BRS_NODEL2";
										}
										func_1274(91, func_1073(), sVar0, 1, -1, 2, 1, 0);
										break;
									
									case 4:
										unk_0xA37A90C62806D848(1);
										break;
									
									case 5:
										unk_0xA37A90C62806D848(1);
										func_1274(89, func_1073(), func_1072(), 1, -1, 2, 1, 0);
										break;
									
									case 6:
										unk_0xA37A90C62806D848(1);
										func_1274(89, func_1073(), "BRS_LOST", 1, -1, 2, 1, 0);
										break;
								}
							}
						}
					}
				}
				if (func_12() == 4)
				{
					func_1067(Local_933);
					bLocal_2210 = true;
				}
				iVar1 = func_48();
				if (bLocal_2210)
				{
					iVar1 = unk_0xD803B885F5E47A62();
					if (func_1066())
					{
						if (func_31(func_106()))
						{
							func_1063(func_1065(Local_933));
						}
						func_1061(func_1065(Local_933));
					}
				}
				func_1059(0, iVar1);
				if (bLocal_2210)
				{
					if (func_31(func_106()))
					{
						if (func_1058(unk_0xD803B885F5E47A62()))
						{
							func_1057(35);
						}
					}
					else
					{
						func_1057(33);
					}
				}
				else if (func_31(func_106()))
				{
					if (func_1058(unk_0xD803B885F5E47A62()))
					{
						func_1057(36);
					}
				}
				else
				{
					func_1057(34);
				}
				func_853(192, bLocal_2210, &uLocal_393, 0);
				func_2401(bLocal_2210, 0);
				func_1273(0);
				func_1093(0);
			}
		}
	}
	else if (func_1066())
	{
		if (!func_852(unk_0xFB04705FDFDCE640(), 15))
		{
			if (!iLocal_2211)
			{
				if (func_31(func_106()))
				{
					if (func_1066())
					{
						iVar2 = 0;
						while (iVar2 < func_2346())
						{
							if (func_11(iVar2, 2))
							{
								if (func_851(unk_0xD803B885F5E47A62(), Local_933))
								{
									iVar3 = func_850(unk_0xD803B885F5E47A62(), Local_933);
									func_846(unk_0xD803B885F5E47A62(), iVar3, 1, 1);
									func_843(-174779026, 0, 0);
								}
								iLocal_2211 = 1;
							}
							iVar2++;
						}
					}
				}
			}
			switch (Local_933.f_2)
			{
				case 1:
					iVar5 = func_842();
					break;
				
				case 0:
					iVar4 = func_842();
					break;
			}
			if (bLocal_2210)
			{
				func_781(Local_933, &iLocal_2209, iVar4, iVar5, func_31(func_106()), 0, 0);
			}
			else if (func_842() > 0)
			{
				func_781(Local_933, &iLocal_2209, iVar4, iVar5, func_31(func_106()), 0, 0);
			}
			else
			{
				func_780(15);
			}
			if (iLocal_2209 != 0 && iLocal_2209 != 1)
			{
				func_780(15);
			}
		}
	}
}

void func_780(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Local_1755[unk_0x57270EE11514DC67()].f_2), iParam0);
}

void func_781(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if ((!bParam4 && !bParam5) && !bParam6)
	{
	}
	fVar0 = to_float(Global_262145.f_17910);
	fVar1 = to_float(Global_262145.f_17911);
	if (func_841(iParam0))
	{
		fVar0 = to_float(Global_262145.f_21046);
		fVar1 = to_float(Global_262145.f_21047);
	}
	fVar2 = 0f;
	fVar2 = (fVar2 + (to_float(iParam2) * fVar0));
	fVar2 = (fVar2 + (to_float(iParam3) * fVar1));
	iVar3 = func_840(unk_0xD803B885F5E47A62(), iParam0);
	iVar4 = func_1065(iParam0);
	if (iVar4 >= 0)
	{
		iVar5 = func_835(iParam0);
		iVar6 = (iVar3 + round(fVar2));
		if (bParam4)
		{
			iVar6 = 100;
		}
		if (bParam5 || bParam6)
		{
			iVar6 = (100 + iVar5);
		}
		if (iVar6 > (100 + iVar5))
		{
			iVar6 = (100 + iVar5);
		}
		if (iVar6 < 0)
		{
			iVar6 = 0;
		}
		if (iVar6 > (100 + func_834(iParam0, 0)))
		{
			iVar6 = (100 + func_834(iParam0, 0));
		}
		if (func_841(iParam0) && iVar6 >= 100)
		{
			Global_1370232 = 1;
		}
		if (!func_262())
		{
			func_832(func_833(iVar4), 0, -1, 1);
			func_829(func_831(iVar4), iVar6, -1, 1, 0);
			func_828(iVar4, iVar6);
			func_827(iVar4, iVar6);
			Global_2460611 = 1;
			*uParam1 = 2;
			if ((!bParam4 && !bParam5) && func_841(iParam0))
			{
				func_806();
			}
			func_803(func_805(iParam0));
		}
		else
		{
			iVar7 = round(fVar2);
			if (iVar5 > func_834(iParam0, 0))
			{
				iVar5 = func_834(iParam0, 0);
			}
			if ((bParam4 || bParam5) || bParam6)
			{
				iVar7 = (100 + iVar5);
			}
			if (((bParam4 || bParam5) || bParam6) || (iVar7 + iVar3) > (100 + iVar5))
			{
				iVar7 = ((100 + iVar5) - iVar3);
			}
			if (iVar7 <= 0)
			{
				*uParam1 = 2;
				return;
			}
			if (func_785(iVar4, iVar7, uParam1))
			{
				if (*uParam1 == 2)
				{
					func_832(func_833(iVar4), 0, -1, 1);
					func_829(func_831(iVar4), iVar6, -1, 1, 0);
					func_828(iVar4, iVar6);
					func_827(iVar4, iVar6);
					Global_2460611 = 1;
					if ((!bParam4 && !bParam5) && func_841(iParam0))
					{
						func_806();
					}
					func_803(func_805(iParam0));
				}
			}
			else if (*uParam1 == 1 && func_782() == -1)
			{
				*uParam1 = 3;
			}
		}
	}
	else
	{
		*uParam1 = 3;
	}
}

int func_782()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_784(iVar0) != 2147483647)
		{
			if (func_783(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_783(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_784(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

bool func_785(int iParam0, int iParam1, var uParam2)
{
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_782() != -1)
			{
				return 0;
			}
			iVar0 = func_802(iParam0);
			iVar1 = func_801();
			iVar2 = func_800(iParam0);
			if (func_796(78225582, -1799524201, iVar1, 2108234284, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_796(78225582, 69656641, iVar2, 2108234284, iParam1, 0, 0, 4, 0, 3))
				{
					if (func_796(78225582, -739932302, 297710065, 2108234284, 1, 0, iParam1, 4, iVar2, 3))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_791())
			{
			}
			else
			{
				*uParam2 = 3;
				func_788(func_782());
			}
			break;
		
		case 1:
			if (func_787(func_782()))
			{
				if (func_786(func_782()) == 2)
				{
					*uParam2 = 2;
					func_788(func_782());
				}
				else
				{
					*uParam2 = 3;
					func_788(func_782());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_786(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_787(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

void func_788(int iParam0)
{
	bVar0 = false;
	if (!func_262())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_783(iParam0))
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
		func_789(&(Global_4263954[iParam0]));
	}
}

void func_789(var uParam0)
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
	func_790(&(uParam0->f_14));
	func_790(&(uParam0->f_14.f_13));
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

void func_790(var uParam0)
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

int func_791()
{
	bVar0 = false;
	if (!func_262())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_782();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_307()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_795(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_784(iVar2);
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
				func_792(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_792(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_794(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_793();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_793()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_794(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_795(int iParam0, int iParam1, int iParam2)
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

int func_796(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_262())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_307()) || unk_0xDD2EE1F5DA6A6AB0())
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
	iVar1 = func_782();
	if (iVar1 == -1)
	{
		if (!func_798(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_797(iParam1))
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

int func_797(int iParam0)
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

int func_798(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_262())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_307()) || unk_0xDD2EE1F5DA6A6AB0())
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
	if (bVar0 || unk_0xA28E08E034174728(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_799(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_262())
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_792(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

var func_801()
{
	return Global_4264525;
}

int func_802(int iParam0)
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

void func_803(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_804()].f_6174.f_4111[iVar0] == iParam0)
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

int func_804()
{
	iVar0 = 0;
	return iVar0;
}

int func_805(int iParam0)
{
	switch (func_95(iParam0))
	{
		case 4:
			return 135;
			break;
		
		case 1:
			return 136;
			break;
		
		case 2:
			return 137;
			break;
		
		case 3:
			return 138;
			break;
		
		case 0:
			return 139;
			break;
		
		case 5:
			return 140;
			break;
	}
	return -1;
}

void func_806()
{
	if (func_826(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_825(unk_0xD803B885F5E47A62());
		if (func_824(unk_0xD803B885F5E47A62(), iVar0) <= 0 && func_823(unk_0xD803B885F5E47A62(), iVar0) != 0)
		{
			func_820(unk_0xD803B885F5E47A62(), iVar0, 0, 1);
			func_808(5, 0, 1);
			func_807(unk_0xD803B885F5E47A62(), iVar0, 5000, 1);
		}
	}
}

void func_807(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == func_48())
	{
		return;
	}
	if (func_431(iParam1))
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

void func_808(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = false;
	iVar2 = func_819(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_818(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_817(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_816(iParam0, 0, bParam2);
	}
	else if (func_812(iParam0, bParam2))
	{
		iVar0 = func_810(iVar2, 0);
		iVar3 = func_840(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_834(iVar2, bParam2);
		iVar5 = func_810(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_841(iVar2) && func_823(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_818(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_809(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_828(iParam0, (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 - (func_834(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_810(iVar2, bParam2) / func_809(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_841(iVar2) && func_823(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_807(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

int func_809(int iParam0, int iParam1)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (func_431(iParam1))
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

int func_810(int iParam0, bool bParam1)
{
	iVar1 = func_95(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 0))
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
			if (func_811(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_823(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

int func_811(int iParam0, int iParam1, int iParam2)
{
	if (func_851(iParam0, iParam1))
	{
		iVar0 = func_850(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

bool func_812(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_813(15384, -1, -1);
	}
	return func_813(func_833(iParam0), -1, -1);
}

int func_813(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_307();
	}
	iVar1 = func_815(iParam0, iParam1);
	uVar2 = func_814(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_814(int iParam0)
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

int func_815(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_307();
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

void func_816(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_832(15384, bParam1, -1, 1);
		return;
	}
	func_832(func_833(iParam0), bParam1, -1, 1);
}

int func_817(int iParam0, bool bParam1)
{
	iVar0 = Global_2513475[iParam0];
	iVar1 = func_819(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_841(iVar1))
	{
		if (func_823(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_818(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_819(int iParam0, int iParam1)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_431(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

void func_820(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_431(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				Global_1590535[iParam0].f_274.f_183[iVar0].f_8 = iParam2;
				if (bParam3)
				{
					func_832(func_822(iVar0), func_821(iParam2), -1, 1);
				}
			}
			iVar0++;
		}
	}
}

bool func_821(int iParam0)
{
	return iParam0 == 1;
}

int func_822(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9394;
		
		case 1:
			return 9395;
		
		case 2:
			return 9396;
		
		case 3:
			return 9397;
		
		case 4:
			return 9398;
		
		case 5:
			return 15371;
		
		default:
	}
	return 9394;
}

int func_823(int iParam0, int iParam1)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (func_431(iParam1) && func_841(iParam1))
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

int func_824(int iParam0, int iParam1)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (func_431(iParam1) && func_841(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_256;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_825(int iParam0)
{
	if (iParam0 == func_48())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

bool func_826(int iParam0)
{
	return func_825(iParam0) != 0;
}

void func_827(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1370164[iParam0])
	{
		Global_1370164[iParam0] = iParam1;
	}
}

void func_828(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2)
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 = iParam1;
	}
}

void func_829(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_830(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_830(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_307();
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

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3847;
		
		case 1:
			return 3848;
		
		case 2:
			return 3849;
		
		case 3:
			return 3850;
		
		case 4:
			return 3851;
		
		case 5:
			return 5443;
		
		default:
	}
	return 3847;
}

int func_832(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_307();
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
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}