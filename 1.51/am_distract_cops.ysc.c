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
	if (unk_0x8CD06866876216F2() && func_277(unk_0xD803B885F5E47A62(), 0, 1))
	{
		func_269(ScriptParam_0);
	}
	else
	{
		func_266();
	}
	while (true)
	{
		func_265();
		if (func_255() || func_251(16))
		{
			func_266();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			func_266();
		}
		switch (func_250(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_249() == 1)
				{
					func_248();
					Local_93[unk_0x57270EE11514DC67()] = 1;
				}
				else if (func_249() == 4)
				{
					Local_93[unk_0x57270EE11514DC67()] = 3;
				}
				break;
			
			case 1:
				if (func_249() == 1)
				{
					func_128();
				}
				else if (func_249() == 4)
				{
					func_14();
					Local_93[unk_0x57270EE11514DC67()] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_73.f_18));
				if (func_12(&(Local_73.f_18)))
				{
					Local_93[unk_0x57270EE11514DC67()] = 4;
				}
				break;
			
			case 2:
				Local_93[unk_0x57270EE11514DC67()] = 4;
			
			case 4:
				func_266();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_249())
			{
				case 0:
					Local_73 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_73 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_73.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	switch (Local_73.f_7)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
			{
				Local_73.f_7 = 1;
			}
			else if (func_9(&(Local_73.f_8), 480000, 0))
			{
				Var0.f_2 = 455724956;
				func_7(Var0, func_8(1));
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 1);
				Local_73.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_73.f_10), Local_73.f_12, 0))
	{
		if (func_9(&(Local_73.f_13), Local_73.f_15, 0))
		{
			Local_73.f_17++;
			Local_73.f_16 = func_6();
			func_5(&(Local_73.f_13));
		}
	}
	else
	{
		Local_73.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_73.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_73.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_277(iVar2, 0, 0))
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

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	if (Local_73 == 1)
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_228)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_228));
			if (func_277(iVar0, 1, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_93[iLocal_228].f_1, 0))
					{
						iLocal_229 = 1;
						unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_228++;
	if (iLocal_228 == unk_0x54EABC0DD106045B())
	{
		if (iLocal_229 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 0);
			}
		}
		else
		{
			iLocal_229 = 0;
		}
		iLocal_228 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 1))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_93[unk_0x57270EE11514DC67()].f_1, 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= (Local_73.f_16 - 1)) && Local_93[unk_0x57270EE11514DC67()].f_2 < 10)
		{
			Local_93[unk_0x57270EE11514DC67()].f_2++;
		}
		if (Local_93[unk_0x57270EE11514DC67()].f_2 > 0)
		{
			iVar0 = (Local_93[unk_0x57270EE11514DC67()].f_2 * Global_262145.f_8101);
			Global_2462880 = iVar0;
			func_106(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_103(iVar0, 1, 1, 0);
				if (func_102())
				{
					func_90(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					unk_0x9AC21D04D5646532(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_89())
			{
				func_76(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_76(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_222, 4))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0x5D96D8530B3D0904(&iLocal_222, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Global_2585280[iParam0][func_18(iParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_18(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_75(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_38(uParam0, uParam0->f_17);
	func_35(uParam0);
	if (func_34())
	{
		func_35(uParam0);
	}
	if (func_33(uParam0->f_1))
	{
		func_26();
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
				func_26();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_24(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_23(uParam0->f_69, 128))
			{
				if (func_22(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_24(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
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

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_24(var uParam0, int iParam1)
{
	func_25(uParam0, iParam1);
}

void func_25(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_26()
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
	func_27();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_27()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_31(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_28(&(Global_2439138.f_3047.f_1));
}

void func_28(var uParam0)
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
		unk_0x31A33F7BCB08CB80(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (unk_0x757EF87A33649210() && !func_30(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_29(0);
}

void func_29(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_30(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_31(var uParam0)
{
	func_32(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_32(var uParam0)
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

int func_33(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return Global_2450632.f_17;
}

void func_35(var uParam0)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_72 = func_36();
	}
}

int func_36()
{
	return 21;
}

int func_37(int iParam0)
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

void func_38(var uParam0, int iParam1)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_74() || !func_277(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_39(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_70(iParam0) && !bParam4)
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
	if (((func_70(unk_0xD803B885F5E47A62()) || (func_69() && func_68())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_67();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_277(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_65(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_65(iParam1, iParam0, 0);
				}
				else
				{
					return func_40(0, -1, 0);
				}
			}
			else
			{
				return func_40(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_65(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_40(bool bParam0, int iParam1, bool bParam2)
{
	return func_41(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_51() || (func_50() && func_48())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_47(iParam2, iVar0);
		}
		else
		{
			return func_47(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_46(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_42(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_42(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_43(Global_4456448.f_194990, 1))
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

int func_43(int iParam0, bool bParam1)
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

int func_44(int iParam0, int iParam1, int iParam2)
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
			if (!func_46(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2)
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

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
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

bool func_48()
{
	if (func_49())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_50()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_51()
{
	if (func_49() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_61())
			{
				iVar3 = func_57(iParam0);
				if (!iVar3 == -1)
				{
					return func_55(iVar3);
				}
			}
			if ((func_54(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_46(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_45(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_57(iParam0);
	if (!iVar4 == -1)
	{
		return func_55(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_56(iParam0);
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

var func_56(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_74())
	{
		if (func_59(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_74())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_74();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_74();
}

int func_60(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (Global_1628237[iParam0].f_11 != func_74())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61()
{
	if (((func_64() || func_63()) || func_34()) || func_62())
	{
		return 1;
	}
	return 0;
}

var func_62()
{
	return Global_2450632.f_19;
}

var func_63()
{
	return Global_2450632.f_16;
}

var func_64()
{
	return Global_2450632.f_15;
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_61())
	{
		iVar2 = func_57(iParam1);
		if (!iVar2 == -1)
		{
			return func_55(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_74())
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
			iVar0 = func_41(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_66(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_46(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_53(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_66(int iParam0)
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

var func_67()
{
	return Global_2359302.f_2;
}

bool func_68()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_69()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_70(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_74()
{
	return -1;
}

void func_75(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_74();
	uParam1->f_18 = func_74();
	uParam1->f_19 = func_74();
	uParam1->f_20 = func_74();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_76(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_77(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_77(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	uVar0 = uParam1;
	bVar1 = false;
	func_78(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_78(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		if (unk_0x7724E025FD444F45(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_87();
	if (iVar0 == -1)
	{
		return;
	}
	func_86(iVar0);
	func_85(iVar0, uParam0);
	func_84(iVar0, uParam2, bParam3);
	func_83(iVar0, sParam1);
	if (unk_0xEA6BC48857E0AC4C(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_82(iVar0);
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_80(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_79(iVar0, iParam6);
	}
}

void func_79(int iParam0, int iParam1)
{
	Global_1370527.f_59[iParam0].f_15 = iParam1;
}

void func_80(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1370527.f_59[iParam0].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_81(iParam0);
}

void func_81(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0]), 5);
}

void func_82(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0]), 4);
}

void func_83(int iParam0, char* sParam1)
{
	StringCopy(&Var0, sParam1, 16);
	Global_1370527.f_59[iParam0].f_3 = { Var0 };
}

void func_84(int iParam0, var uParam1, bool bParam2)
{
	Global_1370527.f_59[iParam0].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0]), 2);
		unk_0x0674E58A79778E99(&(Global_1370527.f_59[iParam0]), 3);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0]), 3);
		unk_0x0674E58A79778E99(&(Global_1370527.f_59[iParam0]), 2);
	}
}

void func_85(int iParam0, var uParam1)
{
	Global_1370527.f_59[iParam0].f_1 = uParam1;
}

void func_86(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0]), 0);
}

int func_87()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_88(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_88(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1370527.f_59[iParam0], 0);
}

int func_89()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_102())
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
				func_91(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_91(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_91(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_91(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_98(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_97(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_92(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_92(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_93(iParam0);
	}
}

void func_93(int iParam0)
{
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_96(iParam0))
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
		func_94(&(Global_4263954[iParam0]));
	}
}

void func_94(var uParam0)
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
	func_95(&(uParam0->f_14));
	func_95(&(uParam0->f_14.f_13));
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

void func_95(var uParam0)
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

int func_96(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_97(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_98(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_102())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = uParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = uParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
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
				func_99(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_99(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_101(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_100();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_100()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_101(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_102()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_104(iParam0, iParam1, iParam2, fParam3);
}

void func_104(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_4 = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 = (Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_105(iVar1, 0);
	}
}

void func_105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_106(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_127())
		{
			if (func_126(0))
			{
				if (!func_122(0))
				{
					if (unk_0x40B8C182D63932FC(func_121()))
					{
						if (func_120() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_120());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_118(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_111("GB_BCUT_TICK1", func_121(), iVar0, 0, 0, 1);
						}
						func_110(20);
						func_107(func_121(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	if (func_277(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_109(iParam0);
		func_108(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_101(iParam0));
	}
}

void func_108(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_109(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_110(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_111(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_39(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_116(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_112(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_112(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_115() || !unk_0xA14BB9332558B949()) || !func_72(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_113(iParam2);
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

int func_113(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_114(iVar0);
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

void func_114(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_115()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

var func_116(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_117(&cVar0);
}

var func_117(char[4] cParam0)
{
	return cParam0;
}

void func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_119(1);
	}
	else
	{
		iVar1 = func_119(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_119(bool bParam0)
{
	if (bParam0)
	{
		return round((0,05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_120()
{
	return Global_262145.f_12389;
}

int func_121()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

bool func_122(bool bParam0)
{
	return func_123(unk_0xD803B885F5E47A62(), bParam0);
}

int func_123(int iParam0, bool bParam1)
{
	return func_124(iParam0, bParam1, 1);
}

int func_124(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_74())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_125(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_74() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1628237[iParam0].f_11 != func_74())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_126(bool bParam0)
{
	return func_59(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_127()
{
	return func_60(unk_0xD803B885F5E47A62());
}

void func_128()
{
	func_246();
	if (unk_0xE4EDC4B0E92C078B(uLocal_223))
	{
		if (func_244() || func_243())
		{
			unk_0x9D7CDDB4B55142AF(uLocal_223, 0);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(uLocal_223, 4);
		}
	}
	switch (Local_93[unk_0x57270EE11514DC67()].f_3)
	{
		case 0:
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_5, Local_73.f_5, 1000f, 0, 1, 0))
			{
				func_220();
				unk_0x5D96D8530B3D0904(&(Local_93[unk_0x57270EE11514DC67()].f_1), 0);
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 0);
				Local_93[unk_0x57270EE11514DC67()].f_3 = 1;
			}
			if (Local_73.f_7 > 1)
			{
				Local_93[unk_0x57270EE11514DC67()].f_3 = 2;
			}
			break;
		
		case 1:
			func_194();
			func_129();
			if (Local_73.f_7 > 1)
			{
				Local_93[unk_0x57270EE11514DC67()].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_129()
{
	func_193();
	func_138();
	func_131();
	func_130();
}

void func_130()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 5))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 4))
		{
			if (Local_73.f_17 == 0)
			{
				unk_0x5D96D8530B3D0904(&iLocal_222, 4);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_222, 5);
			}
		}
		else if (!func_277(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x5D96D8530B3D0904(&iLocal_222, 5);
		}
	}
}

void func_131()
{
	if ((((unk_0xB3260A60545D3F11() == 7 || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		func_137();
	}
	else
	{
		func_136();
	}
	if ((Local_73.f_12 - func_135(&(Local_73.f_10), 0, 0)) >= 0)
	{
		func_132((Local_73.f_12 - func_135(&(Local_73.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_132(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_133(7, iVar0);
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

void func_133(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_135(var uParam0, bool bParam1, bool bParam2)
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

void func_136()
{
	Global_1378678.f_1131 = 1;
}

void func_137()
{
	Global_1378678.f_1130 = 1;
}

void func_138()
{
	if (func_9(&uLocal_224, 30000, 0))
	{
		switch (Local_73.f_16)
		{
			case 2:
				func_190(2105, 1, -1);
				break;
			
			case 3:
				func_190(2106, 1, -1);
				break;
			
			case 4:
				func_190(2107, 1, -1);
				break;
			
			case 5:
				func_190(2108, 1, -1);
				break;
		}
		func_139(0, unk_0x16F2683693E537C9(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_8102 * Local_73.f_16), 1, -1, 0, 0, 0);
		Local_93[unk_0x57270EE11514DC67()].f_2++;
		func_5(&uLocal_224);
	}
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_149(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				uVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_145(unk_0x64430C979F516F7A(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_140(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_140(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vVar0 = { func_143(iParam0, 1) };
	if (iParam0 == func_142(unk_0x16F2683693E537C9()))
	{
		func_141(1);
	}
	func_145(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_141(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_142(int iParam0)
{
	return iParam0;
}

Vector3 func_143(int iParam0, bool bParam1)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_144(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
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

int func_144(int iParam0)
{
	return iParam0;
}

void func_145(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_148(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_147();
			Global_2439138.f_1290[iVar1].f_10 = func_146();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), uParam6);
		}
	}
}

int func_146()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_147()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_148(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 1);
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

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_150(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_189(unk_0xD803B885F5E47A62()) || func_188(unk_0xD803B885F5E47A62()))
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
	else if (func_186() || func_182(unk_0xD803B885F5E47A62()))
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
	if (func_181(sParam2))
	{
	}
	if (func_180())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_178(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_177(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_174(0, &iVar1);
					break;
				
				case 3:
					func_174(1, &iVar1);
					break;
				
				case 1:
					func_171(&iVar1);
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
			func_190(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_161((func_170(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_190(1165, iVar1, -1);
				}
				func_155(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_151(int iParam0)
{
	if (func_180())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_152(-1804740956, iParam0);
	}
}

void func_152(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, uParam1, 1);
	}
}

int func_153(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_277(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_154(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_154(-1804740956);
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	uVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_155(int iParam0)
{
	Var0 = { func_160(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_158(func_159(&Var0));
			if (iVar13 == 0)
			{
				func_157(&Global_1387915, iParam0);
				func_156(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_157(&Global_1387916, iParam0);
				func_156(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_157(&Global_1387917, iParam0);
				func_156(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_157(&Global_1387918, iParam0);
				func_156(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_157(&Global_1387919, iParam0);
				func_156(1894078811, Global_1387919);
			}
		}
	}
}

void func_156(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, uParam1, 1);
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

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_158(int iParam0)
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

int func_159(var uParam0)
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

struct<13> func_160(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	if (func_180())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_18(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_18(-1)])
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
		if (func_169(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_167(iParam0, 1);
		}
		func_166(639, iParam0, -1, 1);
		func_165(640, func_167(iParam0, 1), -1, 1, 0);
		Global_1388060[func_18(-1)] = iParam0;
		func_162(-1109644434, 7, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_164(iParam1, iParam2))
	{
		iVar0 = func_163();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_163()
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

int func_164(int iParam0, var uParam1)
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

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_18(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_18(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_18(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_18(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_18(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_18(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_18(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_18(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_18(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_18(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_18(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_18(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_18(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_18(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_18(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_18(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_18(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_18(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_18(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_18(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_18(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_18(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_18(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_18(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_18(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_18(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_18(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_18(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_18(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_18(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_18(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_18(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_18(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_18(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_18(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_18(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_18(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_18(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_18(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_18(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_167(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_168(iParam0, 0);
}

int func_168(int iParam0, int iParam1)
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

int func_169(int iParam0)
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

int func_170(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_18(-1)];
			}
			else if (func_169(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_18(-1)];
	}
	return 0;
}

void func_171(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_46(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_173(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_172(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_172(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_172(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_173(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_160(iParam0) };
		Global_2513231 = { func_160(iParam1) };
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

void func_174(bool bParam0, int iParam1)
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
				if (func_277(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_173(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_277(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_175(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_173(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_172(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_172(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_175(int iParam0, int iParam1)
{
	return vdist(func_176(iParam0), func_176(iParam1));
	return 0f;
}

Vector3 func_176(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_177(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_172(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_178(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_170(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_170(unk_0xD803B885F5E47A62());
		}
	}
	if (func_179(8000, 0, 0) > 0)
	{
		if (func_179(8000, 0, 0) < (iParam0 + func_170(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_179(8000, 0, 0) - func_170(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_179(int iParam0, bool bParam1, int iParam2)
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

int func_180()
{
	return 1;
}

int func_181(char* sParam0)
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

int func_182(int iParam0)
{
	return func_183(func_184(iParam0));
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_185(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_185(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_186()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_34();
	}
	return func_187(Global_4456448.f_194990);
}

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_189(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_192(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_191(iParam0))
	{
		func_165(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_166(iParam0, iVar0, iParam2, 1);
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_18(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_193()
{
	if (func_9(&uLocal_226, 10000, 0))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < Local_73.f_16)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), Local_73.f_16, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
		unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
	}
}

void func_194()
{
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_5, Local_73.f_5, 1000f, 0, 1, 0))
	{
		func_197();
		Local_93[unk_0x57270EE11514DC67()].f_3 = 0;
	}
	else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_6, Local_73.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 0) && unk_0xEAE0D21A50E6C7F4(iLocal_222, 3))
		{
			if (!unk_0xFEBC1E4EC9E001F0() && !func_196())
			{
				if (!func_244())
				{
					func_195("DCP_LEAVE", -1);
				}
				unk_0x5D96D8530B3D0904(&iLocal_222, 0);
			}
		}
	}
	else
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 3))
		{
			unk_0x5D96D8530B3D0904(&iLocal_222, 3);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_222, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_222, 0);
		}
	}
}

void func_195(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

bool func_196()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_197()
{
	func_5(&uLocal_224);
	func_5(&uLocal_226);
	func_198();
	unk_0x0674E58A79778E99(&(Local_93[unk_0x57270EE11514DC67()].f_1), 0);
	unk_0x0674E58A79778E99(&iLocal_222, 3);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 0);
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 5))
	{
		unk_0x5D96D8530B3D0904(&iLocal_222, 5);
	}
}

void func_198()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_222, 2))
	{
		func_199(1, 1, 0);
		unk_0x0674E58A79778E99(&iLocal_222, 2);
	}
}

void func_199(bool bParam0, bool bParam1, bool bParam2)
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
		func_219();
	}
	if (!bParam2)
	{
		func_202(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_201(0);
	func_200();
}

void func_200()
{
	if (Global_2405072.f_487.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_201(bool bParam0)
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

void func_202(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_218())
		{
			func_217();
		}
		Global_2405072.f_706.f_518 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_215();
		func_206(8, 0, 0, 0, 0);
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
		func_203();
	}
}

void func_203()
{
	if (func_218() && !func_205())
	{
		func_217();
	}
	if (func_205())
	{
		func_204();
	}
	else
	{
		func_215();
		func_206(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_204()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_205()
{
	if ((Global_2405072.f_1744 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_74())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16].f_404, 0) && func_207())
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

int func_207()
{
	if ((((((func_184(unk_0xD803B885F5E47A62()) == 229 || func_184(unk_0xD803B885F5E47A62()) == 191) || func_214()) || func_213()) || func_212(unk_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_208(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0)
{
	if (func_211(iParam0))
	{
		return 1;
	}
	if (func_209(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0)
{
	return func_210(iParam0, 20);
}

bool func_210(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_211(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_212(int iParam0)
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
		uVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(uVar0))
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

var func_213()
{
	return Global_1574405;
}

int func_214()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	if (func_218() && !func_205())
	{
		func_217();
	}
	func_216();
	Global_2405072.f_706 = 0;
}

void func_216()
{
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_217()
{
	if (func_205())
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

int func_218()
{
	if ((Global_2405072.f_1745 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_220()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 2))
	{
		func_240(Local_73.f_2, (Local_73.f_6 * 1,5f), 0, 0, 1, 0);
		func_222(Local_73.f_2, Local_73.f_6, 0, 1);
		func_221(Local_73.f_2, 1, 0);
		unk_0x5D96D8530B3D0904(&iLocal_222, 2);
	}
}

void func_221(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

void func_222(vector3 vParam0, var uParam3, int iParam4, int iParam5)
{
	func_223(vParam0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_223(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	if (func_232(unk_0xD803B885F5E47A62()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_231(&vParam0, &vParam3);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_226(Var0))
		{
			Global_2405072.f_45.f_64 = func_225(unk_0xD803B885F5E47A62());
			func_224(Var0, iParam8);
		}
	}
}

void func_224(struct<12> Param0, int iParam12)
{
	Global_2405072.f_365[iParam12] = { Param0 };
	Global_2405072.f_365[iParam12].f_9 = 1;
}

int func_225(int iParam0)
{
	if (func_277(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_226(struct<12> Param0)
{
	Var0[0] = { Param0 };
	Var0[0].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405072.f_45[iVar13].f_9 == 1)
		{
			if (!func_227(Global_2405072.f_45[iVar13], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_227(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if (uParam12[iVar0]->f_9)
		{
			switch (uParam12[iVar0]->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_230(vParam0, vParam0.f_6, *uParam12[iVar0], uParam12[iVar0]->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_228(vParam0, vParam0.f_3, *uParam12[iVar0], uParam12[iVar0]->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_230(vParam0, vParam0.f_6, *uParam12[iVar0], uParam12[iVar0]->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_228(vParam0, vParam0.f_3, *uParam12[iVar0], uParam12[iVar0]->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_228(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	fVar6 = (fParam9 * 0,7071068f);
	vVar0 = { vParam6 - Vector(fVar6, fVar6, fVar6) };
	vVar3 = { vParam6 + Vector(fVar6, fVar6, fVar6) };
	return func_229(vParam0, vParam3, vVar0, vVar3);
}

int func_229(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return 1;
	}
	return 0;
}

int func_230(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	vVar0 = { vParam4 - vParam0 };
	if ((vmag(vVar0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0, var uParam1)
{
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar3.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar3.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar3.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar3.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar3.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar3 };
}

int func_232(int iParam0)
{
	if (((func_235(iParam0, 1) || func_234(iParam0)) || func_185(iParam0, 0)) || func_233(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (!func_277(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

int func_234(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

bool func_235(int iParam0, bool bParam1)
{
	if (func_239() != 0)
	{
		return func_225(iParam0) != 0;
	}
	return func_236(iParam0, bParam1, 0);
}

int func_236(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_237(iParam0))
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

bool func_237(int iParam0)
{
	return func_238(iParam0);
}

bool func_238(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_239()
{
	return Global_30768;
}

void func_240(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_241(vParam0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_241(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	if (func_232(unk_0xD803B885F5E47A62()) || uParam9)
	{
		if (Global_2405072.f_1745)
		{
			func_203();
		}
		if (Var0.f_10 == 1)
		{
			func_231(&vParam0, &vParam3);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2405072.f_45.f_64 = func_225(unk_0xD803B885F5E47A62());
		func_242(Var0, iParam8);
	}
}

void func_242(struct<12> Param0, int iParam12)
{
	Global_2405072.f_45[iParam12] = { Param0 };
	Global_2405072.f_45[iParam12].f_9 = 1;
}

var func_243()
{
	return Global_2416079.f_1812;
}

int func_244()
{
	if (func_245(21))
	{
		return 1;
	}
	if (func_245(0))
	{
		return 1;
	}
	return 0;
}

bool func_245(int iParam0)
{
	uVar0 = func_192(2480, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(uVar0, iParam0);
}

void func_246()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_222, 6))
	{
		if (((((((func_247(60000) && func_249() == 1) && Local_73.f_7 <= 1) && !unk_0xFEBC1E4EC9E001F0()) && !unk_0x798A3F1296751F46()) && func_277(unk_0xD803B885F5E47A62(), 1, 1)) && !func_196()) && Local_73.f_16 != 5)
		{
			if (!func_244())
			{
				func_195("DCP_HELP1", -1);
			}
			unk_0x5D96D8530B3D0904(&iLocal_222, 6);
		}
	}
}

bool func_247(int iParam0)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_2413895, unk_0x2B6E0A53779D29EA())) > iParam0;
}

void func_248()
{
	if (unk_0xE4EDC4B0E92C078B(uLocal_223))
	{
		if (func_244() || func_243())
		{
			unk_0x9D7CDDB4B55142AF(uLocal_223, 0);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(uLocal_223, 4);
		}
	}
	else
	{
		uLocal_223 = unk_0x3F3860E60C44719E(Local_73.f_2, Local_73.f_5);
		unk_0x61755AC17D8F538E(uLocal_223, 50);
		unk_0x7F010F50CE03A8AF(uLocal_223, 220);
		unk_0xF2D30B8ACAF12A39(uLocal_223, 0);
		unk_0xDC5B2F9D0CCE3A10(uLocal_223, "DCP_BLIPN");
		if (func_244())
		{
			unk_0x9D7CDDB4B55142AF(uLocal_223, 0);
		}
	}
}

int func_249()
{
	return Local_73;
}

int func_250(int iParam0)
{
	return Local_93[iParam0];
}

bool func_251(int iParam0)
{
	return !func_252(iParam0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_253(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_277(unk_0x117658E336116132(iVar0), 0, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_255()
{
	func_262(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_261())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259(159))
	{
		if (!func_258())
		{
			return 1;
		}
	}
	if (func_259(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_256() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_256()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_256()
{
	switch (func_239())
	{
		case 0:
			return func_257();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_257()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_258()
{
	return Global_2450632.f_598;
}

int func_259(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_260()
{
	return Global_2460680;
}

bool func_261()
{
	return Global_2450632.f_593;
}

void func_262(var uParam0)
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
					func_263(iVar0);
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

void func_263(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_277(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_264(iVar4, &bVar5))
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

int func_264(int iParam0, var uParam1)
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

void func_265()
{
	wait(0);
}

void func_266()
{
	if (unk_0xE4EDC4B0E92C078B(uLocal_223))
	{
		unk_0x142CC44DB769B57E(&uLocal_223);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 1))
	{
		func_76(12, "DSC_FAIL", 0, 0, -99);
	}
	func_198();
	func_268(16, 0);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 0);
	func_267();
}

void func_267()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_208, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_208), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_208, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_208), iParam0);
	}
}

void func_269(struct<21> Param0)
{
	func_275(func_276(Param0), Param0);
	func_273(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_73, 20);
	unk_0x35B62793EAE9ADDF(&Local_93, 129);
	if (!func_272())
	{
		func_266();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
		if (unk_0xBFF81ED3B99522C7())
		{
			func_270();
		}
		func_268(16, 1);
		Local_93[unk_0x57270EE11514DC67()] = 0;
	}
	else
	{
		func_266();
	}
}

void func_270()
{
	Local_73.f_2 = { func_271() };
	Local_73.f_5 = 200f;
	Local_73.f_6 = 180f;
}

Vector3 func_271()
{
	switch (unk_0x09AC81E49EA267F7(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_272()
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
		if (func_261())
		{
			return 0;
		}
		if (func_259(157))
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

int func_273(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_267();
			}
			else
			{
				return 0;
			}
		}
		if (!func_274())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_267();
					}
					else
					{
						return 0;
					}
				}
				if (func_261())
				{
					if (!bParam2)
					{
						func_267();
					}
					else
					{
						return 0;
					}
				}
				if (func_259(157))
				{
					if (!bParam2)
					{
						func_267();
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
					func_267();
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
				func_267();
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
			func_267();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_274()
{
	return Global_1312854;
}

void func_275(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_267();
	}
	unk_0x37AD2AB54480FA6A(uParam0, 0, Param1.f_16);
}

int func_276(int iParam0)
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

int func_277(int iParam0, bool bParam1, bool bParam2)
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

