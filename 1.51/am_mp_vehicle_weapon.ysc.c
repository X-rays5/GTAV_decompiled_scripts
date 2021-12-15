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
	if (unk_0x8CD06866876216F2())
	{
		func_205(ScriptParam_0);
	}
	else
	{
		func_196(0);
	}
	while (true)
	{
		func_195();
		if (func_184())
		{
			func_196(0);
		}
		if (func_181())
		{
			func_196(0);
		}
		func_2();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_178();
	if (func_177(0))
	{
		func_165();
	}
	else if (func_177(1))
	{
		if (func_164())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_177(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_177(3))
	{
		func_196(1);
	}
}

void func_3()
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_5(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_6()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (unk_0x91E3F625EF57450D(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (unk_0x91E3F625EF57450D(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x5D96D8530B3D0904(&(Local_117.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x91E3F625EF57450D(0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 6))
		{
			unk_0x5D96D8530B3D0904(&(Local_117.f_5), 6);
			unk_0x0674E58A79778E99(&(Local_117.f_5), 4);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 6))
	{
		unk_0x0674E58A79778E99(&(Local_117.f_5), 6);
		unk_0x0674E58A79778E99(&(Local_117.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xF59058FCB716F903(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar1])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_9(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_9(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_8(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_22350.f_5052, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_16)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_9(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_8(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0,0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_9(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_10(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_14()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_17(8, -1) && func_16() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1312812;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_20(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = unk_0xE32F7AC5E6DF304A(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_21(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_18(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_24()
{
	if (func_164())
	{
		if (!unk_0x83D8570832F172A7(Local_117.f_62))
		{
			Local_117.f_62 = unk_0xB01F55A0FD1CFD49(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_117.f_8 > -1 || unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (unk_0x9F4FE516EAACCFC5(Local_117.f_61))
		{
			vVar0 = { unk_0x17D61C69BA58F815(Local_117.f_61, 2) };
			func_32(round(-vVar0.z));
		}
		func_31(Local_117.f_33);
	}
	else if (unk_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		vVar3 = { unk_0x17D61C69BA58F815(Local_117.f_61, 2) };
		fVar6 = vVar3.z;
		if (unk_0xC844350D5D58C99A(func_30()))
		{
			if (!unk_0x437347B10A200C4B(func_30(), 0))
			{
				vVar12 = { unk_0x68F4C0EC296D3901(func_30(), true) };
				fVar8 = unk_0xD9522BA9E27E1349(func_30());
			}
		}
		while (fVar6 < 0f)
		{
			fVar6 = (fVar6 + 360f);
		}
		while (fVar6 > 360f)
		{
			fVar6 = (fVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = fVar6;
		func_25(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		fVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (fVar7 == 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 == -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 < 0f && fVar7 >= -0,5f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 < 0f && fVar7 > -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 > 1,5f && fVar7 < 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 > 2f || fVar7 < -1f)
		{
			fVar7 = 0,5f;
		}
		unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_ALT_FOV_HEADING");
		unk_0x7C19E5E4784BD7CF(vVar12.z);
		unk_0x7C19E5E4784BD7CF(fVar7);
		unk_0x7C19E5E4784BD7CF(fVar6);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_CAM_LOGO");
		unk_0x3CAEA85DA607305E(0);
		unk_0x7E60D21B163E9D56();
	}
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(Local_117.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
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
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xC844350D5D58C99A(Global_1370256))
		{
			return Global_1370256;
		}
		if (Global_1590382 != -1)
		{
			if (unk_0xC844350D5D58C99A(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_MISSILE_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_32(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_HEADING");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_33()
{
	if (Local_117.f_59 <= 60f && Local_117.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_117.f_59 <= 55f && Local_117.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_117.f_59 <= 50f && Local_117.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_117.f_59 <= 45f && Local_117.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_117.f_59 <= 40f && Local_117.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_ZOOM");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_35(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_RETICLE_STATE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_36(bool bParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_RETICLE_ON_TARGET");
	unk_0x1200CC973A2399C8(bParam0);
	unk_0x7E60D21B163E9D56();
}

void func_37(char* sParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(Local_117.f_62, sParam0);
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

char* func_38()
{
	if (func_164())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_41())
	{
		Global_19486.f_1 = 3;
	}
}

int func_41()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_46()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_47()
{
	if (!func_164())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((unk_0x9F4FE516EAACCFC5(Local_117.f_61) && unk_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(Local_117.f_84[iVar1])) && func_48(func_30()))
		{
			vVar10 = { unk_0xD06724447386BC29(Local_117.f_61) };
			vVar13 = { unk_0x68F4C0EC296D3901(Local_117.f_84[iVar1], true) };
			switch (Local_117.f_10[iVar1])
			{
				case 0:
					Local_117.f_98[iVar1] = unk_0xCD02F8660C47B801(vVar10, vVar13, 511, 0, 7);
					if (Local_117.f_98[iVar1] != 0)
					{
						Local_117.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar9 = unk_0x1EC301670B54C6DE(Local_117.f_98[iVar1], &iVar0, &vVar5, &uVar2, &iVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_117.f_17[iVar1] = 1;
							vVar5 = { 0f, 0f, 0f };
							if (unk_0xEAE0D21A50E6C7F4(Local_117.f_7, iVar1))
							{
								unk_0x0674E58A79778E99(&(Local_117.f_7), iVar1);
							}
						}
						else
						{
							Local_117.f_17[iVar1] = 2;
							if (unk_0xEAE0D21A50E6C7F4(Local_117.f_7, iVar1))
							{
								unk_0x0674E58A79778E99(&(Local_117.f_7), iVar1);
							}
							if (unk_0xC844350D5D58C99A(iVar8))
							{
								if (Local_117.f_84[iVar1] == iVar8)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_7, iVar1))
									{
										unk_0x5D96D8530B3D0904(&(Local_117.f_7), iVar1);
									}
								}
							}
							Local_117.f_98[iVar1] = 0;
							Local_117.f_10[iVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_117.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_7, iVar1))
		{
			unk_0x0674E58A79778E99(&(Local_117.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_48(int iParam0)
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

void func_49()
{
	if (!func_164())
	{
		return;
	}
	iVar0 = 208;
	if (unk_0x91E3F625EF57450D(0))
	{
		iVar0 = 237;
	}
	if ((unk_0x06F8112AA79C53D9(2, iVar0) || unk_0x7FEE810EE9E768EB(2, iVar0)) || unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 5))
	{
		iVar1 = 250;
		iVar2 = func_59();
		if (Local_117.f_8 > -1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
			{
				if (!func_58(&(Local_117.f_115)))
				{
					func_57(&(Local_117.f_115), 0, 0);
					Local_117.f_31 = 0;
					unk_0x5D96D8530B3D0904(&(Local_117.f_5), 5);
				}
				else if (func_56(&(Local_117.f_115), 300, 0) || Local_117.f_31 == 0)
				{
					if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
					{
						Local_117.f_31 = 0;
					}
					if (unk_0xC844350D5D58C99A(Local_117.f_84[Local_117.f_31]) && !unk_0x437347B10A200C4B(Local_117.f_84[Local_117.f_31], 0))
					{
						iVar3 = unk_0xF653B9B22DA806A9(func_30(), func_55());
						if (iVar3 != -1)
						{
							vVar4 = { unk_0xBF584557291FDD31(func_30(), iVar3) + func_54(Local_117.f_31) };
							vVar7 = { unk_0x9382F04ED9CDA21A(2) };
							vVar10 = { (-sin(vVar7.z) * cos(vVar7.x)), (cos(vVar7.z) * cos(vVar7.x)), sin(vVar7.x) };
							vVar13 = { 1f, 1f, 1f };
							vVar16 = { vVar4 + vVar10 * vVar13 };
							unk_0x4A21BDDF4D038ECF(vVar4, vVar16, iVar1, 1, func_53(0), unk_0x16F2683693E537C9(), 1, 1, -1f, iVar2, 0, 0, Local_117.f_84[Local_117.f_31], 1, 0, 1);
							unk_0xEB819BD1E585E9CB(-1, "Fire", vVar4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_117.f_32++;
							func_52(&(Local_117.f_115), 0, 0);
						}
					}
					if (Local_117.f_32 == Local_117.f_8)
					{
						Local_117.f_31 = 0;
						Local_117.f_33 = 0;
						Local_117.f_32 = -1;
						unk_0x5D96D8530B3D0904(&(Local_117.f_5), 3);
						unk_0x0674E58A79778E99(&(Local_117.f_5), 5);
						func_57(&(Local_117.f_119), 0, 0);
						func_51(&(Local_117.f_115));
					}
					Local_117.f_31++;
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 1))
		{
			if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
			{
				Local_117.f_31 = 0;
			}
			iVar19 = unk_0xF653B9B22DA806A9(func_30(), func_55());
			if (iVar19 != -1)
			{
				vVar20 = { unk_0xBF584557291FDD31(func_30(), iVar19) + func_54(Local_117.f_31) };
				vVar23 = { unk_0xF1EE614CA05DDE75() };
				vVar26 = { unk_0x9382F04ED9CDA21A(2) };
				vVar29 = { (-sin(vVar26.z) * cos(vVar26.x)), (cos(vVar26.z) * cos(vVar26.x)), sin(vVar26.x) };
				vVar32 = { 10f, 10f, 10f };
				if (!func_50(Local_117.f_56))
				{
					vVar32.x = unk_0x0EB28750412C3A5A(Local_117.f_56, vVar23, false);
					vVar32.y = unk_0x0EB28750412C3A5A(Local_117.f_56, vVar23, false);
					vVar32.z = unk_0x0EB28750412C3A5A(Local_117.f_56, vVar23, false);
				}
				vVar35 = { vVar23 + vVar29 * vVar32 };
				unk_0x4A21BDDF4D038ECF(vVar20, vVar35, iVar1, 1, func_53(1), unk_0x16F2683693E537C9(), 1, 1, -1f, iVar2, 0, 0, 0, 1, 0, 1);
				unk_0xEB819BD1E585E9CB(-1, "Fire", vVar20, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				unk_0x5D96D8530B3D0904(&(Local_117.f_5), 1);
				Local_117.f_33 = 0;
				func_57(&(Local_117.f_134), 0, 0);
				Local_117.f_31++;
			}
		}
	}
}

int func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (iParam0 == 0)
		{
			return 2011877270;
		}
		else
		{
			return 1987049393;
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0,6f, -0,6f, 0,9f;
			
			case 1:
				return -0,3f, -0,3f, 0,8f;
			
			case 2:
				return -0,1f, -0,1f, 0,8f;
			
			case 3:
				return 0,1f, 0,1f, 0,8f;
			
			case 4:
				return 0,3f, 0,3f, 0,8f;
			
			case 5:
				return 0,6f, 0,6f, 0,9f;
			
			case 6:
				return 0f, 0f, 0,8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_55()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
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

void func_57(var uParam0, bool bParam1, bool bParam2)
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

bool func_58(var uParam0)
{
	return uParam0->f_1;
}

int func_59()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		return Global_1370256;
	}
	return -1;
}

void func_60()
{
	if (!func_164())
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
	{
		if (func_58(&(Local_117.f_119)))
		{
			if (!func_56(&(Local_117.f_119), 5000, 0))
			{
				iVar0 = (100 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_117.f_119)));
				Local_117.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_119));
				unk_0x0674E58A79778E99(&(Local_117.f_5), 3);
				Local_117.f_32 = -1;
				Local_117.f_33 = 100;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 1))
	{
		if (func_58(&(Local_117.f_134)))
		{
			if (!func_56(&(Local_117.f_134), 1500, 0))
			{
				iVar1 = (100 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_117.f_134)));
				Local_117.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_134));
				unk_0x0674E58A79778E99(&(Local_117.f_5), 1);
				Local_117.f_33 = 100;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 1) && !unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 5))
	{
		switch (Local_117.f_111)
		{
			case 0:
				func_85();
				break;
			
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()
{
	if ((unk_0x9F4FE516EAACCFC5(Local_117.f_61) && unk_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(func_30()))
	{
		vVar6 = { unk_0xF1EE614CA05DDE75() };
		vVar9 = { unk_0x9382F04ED9CDA21A(2) };
		vVar12 = { (-sin(vVar9.z) * cos(vVar9.x)), (cos(vVar9.z) * cos(vVar9.x)), sin(vVar9.x) };
		vVar15 = { 300f, 300f, 300f };
		vVar18 = { vVar6 + vVar12 * vVar15 };
		vVar21 = { vVar6 + vVar12 * Vector(1f, 1f, 1f) };
		switch (Local_117.f_27)
		{
			case 0:
				Local_117.f_106 = unk_0xCD02F8660C47B801(vVar21, vVar18, 511, func_30(), 7);
				if (Local_117.f_106 != 0)
				{
					Local_117.f_27 = 1;
				}
				break;
			
			case 1:
				iVar5 = unk_0x1EC301670B54C6DE(Local_117.f_106, &iVar0, &(Local_117.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_117.f_26 = 1;
						Local_117.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_117.f_26 = 2;
						Local_117.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_117.f_27 = 0;
				}
				break;
			}
	}
}

void func_62()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_63(Local_117.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_63(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x27117E2CDD4D67C3("helicopterhud"))
	{
		unk_0xD9ACBBA59FD5A09E(1);
		if (Local_117.f_8 > -1)
		{
			if (func_48(iParam0))
			{
				unk_0x362FD95670BFA2A6(unk_0x68F4C0EC296D3901(iParam0, true), &fVar1, &fVar2);
				fVar0 = 0,03f;
				if (((fVar1 > 0,1f && fVar1 < 0,9f) && fVar2 > 0,1f) && fVar2 < 0,9f)
				{
					if (unk_0xEC560E589DF8370E(iParam0))
					{
						iVar7 = unk_0x940C1429253D3B1B(iParam0);
						if (unk_0x34BFC6F0CB887BC2(iVar7))
						{
							iVar8 = unk_0x83FACCC48B68F9D1(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_67(iVar8, -1))
								{
									unk_0x237ED1D0CF5139C4(unk_0x6937EA2286828455(iVar7, 0), 2);
								}
							}
						}
					}
					else if (unk_0xE2F1E99DD161A861(iParam0))
					{
						iVar9 = unk_0xA30B8362589C124A(unk_0x96A5FE5834B81CE7(iParam0), -1, 0);
						if (unk_0xC844350D5D58C99A(iVar9))
						{
							if (unk_0x34BFC6F0CB887BC2(iVar9))
							{
								iVar10 = unk_0x83FACCC48B68F9D1(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									unk_0x237ED1D0CF5139C4(unk_0x96A5FE5834B81CE7(iParam0), 2);
								}
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_48, iParam2))
					{
						if ((unk_0x8AA6DC470ABA63A2(Local_117.f_34[iParam2]) && Local_117.f_34[iParam2] == -1) && !func_66())
						{
							Local_117.f_34[iParam2] = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_117.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_57(&(Local_117.f_136[iParam2]), 0, 0);
							unk_0x5D96D8530B3D0904(&(Local_117.f_48), iParam2);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_48, iParam2 + 6))
					{
						if (func_58(&(Local_117.f_136[iParam2])))
						{
							if (func_56(&(Local_117.f_136[iParam2]), 1000, 0))
							{
								func_65(iParam2, 0);
								if (unk_0x8AA6DC470ABA63A2(Local_117.f_41[iParam2]) && Local_117.f_41[iParam2] == -1)
								{
									Local_117.f_41[iParam2] = unk_0xD68EA767274B7444();
									unk_0x4D7F4CC43D4D0DE3(Local_117.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_57(&(Local_117.f_149[iParam2]), 0, 0);
									unk_0x5D96D8530B3D0904(&(Local_117.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_117.f_149[iParam2])))
					{
						if (func_56(&(Local_117.f_149[iParam2]), 700, 0))
						{
							func_64(iParam2, 0);
						}
					}
					unk_0x7CE7752990174928(unk_0x68F4C0EC296D3901(iParam0, true), 0);
					if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_48, iParam2 + 6))
					{
						unk_0xA402F6C87C08815C(15, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					else
					{
						unk_0xA402F6C87C08815C(6, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					if (!bParam1)
					{
						unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fVar0 * 0,6f), -fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 0f, iVar3, iVar4, iVar5, iVar6, 1);
					}
					unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fVar0 * 0,6f), -fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 90f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fVar0 * 0,6f), fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 270f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fVar0 * 0,6f), fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 180f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0xB90B8DD97A132327();
				}
				else
				{
					func_65(iParam2, 1);
					func_64(iParam2, 1);
				}
			}
			else
			{
				func_65(iParam2, 1);
				func_64(iParam2, 1);
			}
		}
		else
		{
			func_65(iParam2, 1);
			func_64(iParam2, 1);
		}
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_117.f_48, iParam0 + 6))
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_117.f_41[iParam0]))
		{
			unk_0x55D0A2DB35045A35(Local_117.f_41[iParam0]);
			unk_0x43A06902454A1172(Local_117.f_41[iParam0]);
		}
		Local_117.f_41[iParam0] = -1;
		if (bParam1)
		{
			unk_0x0674E58A79778E99(&(Local_117.f_48), iParam0 + 6);
		}
		func_51(&(Local_117.f_149[iParam0]));
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_117.f_48, iParam0))
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_117.f_34[iParam0]))
		{
			unk_0x55D0A2DB35045A35(Local_117.f_34[iParam0]);
			unk_0x43A06902454A1172(Local_117.f_34[iParam0]);
		}
		Local_117.f_34[iParam0] = -1;
		if (bParam1)
		{
			unk_0x0674E58A79778E99(&(Local_117.f_48), iParam0);
		}
		func_51(&(Local_117.f_136[iParam0]));
	}
}

int func_66()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_117.f_34[iVar0]) || !unk_0x8AA6DC470ABA63A2(Local_117.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_68()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
		{
			if (unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_7, iVar0))
				{
					if (func_58(&(Local_117.f_121[iVar0])))
					{
						if (func_56(&(Local_117.f_121[iVar0]), 1000, 0))
						{
							Local_117.f_84[iVar0] = -1;
							if (Local_117.f_8 > -1)
							{
								Local_117.f_17[iVar0] = 0;
								func_51(&(Local_117.f_121[iVar0]));
								Local_117.f_8 = (Local_117.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_117.f_121[iVar0]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_117.f_121[iVar0]));
				}
				if ((!func_74(Local_117.f_84[iVar0]) || !unk_0xC844350D5D58C99A(Local_117.f_84[iVar0])) || !func_69(Local_117.f_84[iVar0]))
				{
					if (!unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
					{
					}
					if (!func_74(Local_117.f_84[iVar0]))
					{
					}
					Local_117.f_84[iVar0] = -1;
					if (Local_117.f_8 > -1)
					{
						Local_117.f_17[iVar0] = 0;
						func_51(&(Local_117.f_121[iVar0]));
						Local_117.f_8 = (Local_117.f_8 - 1);
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_117.f_8 != iVar1)
	{
		Local_117.f_8 = iVar1;
	}
}

int func_69(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (func_73(unk_0x96A5FE5834B81CE7(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_72(unk_0x134B62B726CEC8E6(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam0);
			if (unk_0x34BFC6F0CB887BC2(iVar0))
			{
				if (!func_70(unk_0x83FACCC48B68F9D1(iVar0), unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_29();
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1779120616:
		case -1536924937:
		case -1683328900:
		case 1922257928:
			return 1;
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBBA8A868118C90ED(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xA30B8362589C124A(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0x34BFC6F0CB887BC2(iVar2))
						{
							if (!bParam2 && func_70(unk_0x83FACCC48B68F9D1(iVar2), unk_0xD803B885F5E47A62()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (!bParam2 && func_70(unk_0x83FACCC48B68F9D1(iVar2), unk_0xD803B885F5E47A62()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		unk_0x362FD95670BFA2A6(unk_0x68F4C0EC296D3901(iParam0, true), &fVar0, &fVar1);
		if (((fVar0 < 0,1f || fVar0 > 0,9f) || fVar1 < 0,1f) || fVar1 > 0,9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_75()
{
	if (Local_117.f_28 < 0 || Local_117.f_28 >= 20)
	{
		Local_117.f_28 = 0;
	}
	else if (unk_0xC844350D5D58C99A(Local_117.f_63[Local_117.f_28]) && !unk_0x437347B10A200C4B(Local_117.f_63[Local_117.f_28], 0))
	{
		func_83(Local_117.f_63[Local_117.f_28]);
		if (func_56(&(Local_117.f_117), 1000, 0))
		{
			if (Local_117.f_112 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 0))
				{
					if (Local_117.f_8 < 5)
					{
						if (func_82(Local_117.f_63[Local_117.f_28]))
						{
							Local_117.f_63[Local_117.f_28] = -1;
							unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
							func_51(&(Local_117.f_117));
							Local_117.f_28++;
						}
					}
					else
					{
						if (func_79(Local_117.f_63[Local_117.f_28]))
						{
							func_76(Local_117.f_63[Local_117.f_28]);
						}
						Local_117.f_63[Local_117.f_28] = -1;
						unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
						Local_117.f_25 = 0;
						func_51(&(Local_117.f_117));
						Local_117.f_28++;
					}
				}
				else
				{
					Local_117.f_25 = 0;
					Local_117.f_63[Local_117.f_28] = -1;
					unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
					func_52(&(Local_117.f_117), 0, 0);
					Local_117.f_28++;
				}
			}
		}
	}
	else
	{
		Local_117.f_63[Local_117.f_28] = -1;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28++;
	}
	if (Local_117.f_28 == 20)
	{
		Local_117.f_111 = 0;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28 = 0;
	}
}

void func_76(int iParam0)
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (unk_0xC844350D5D58C99A(Local_117.f_84[func_77()]) && unk_0xC844350D5D58C99A(iParam0))
		{
			Local_117.f_84[func_77()] = iParam0;
		}
	}
}

int func_77()
{
	iVar0 = -1;
	fVar1 = 0f;
	if (unk_0x9F4FE516EAACCFC5(Local_117.f_61) && unk_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		vVar2 = { unk_0xD06724447386BC29(Local_117.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (unk_0xC844350D5D58C99A(Local_117.f_84[iVar5]) && !unk_0x437347B10A200C4B(Local_117.f_84[iVar5], 0))
			{
				vVar6 = { unk_0x68F4C0EC296D3901(Local_117.f_84[iVar5], true) - vVar2 };
				fVar9 = func_78(vVar6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_117.f_9 = iVar0;
	return iVar0;
}

float func_78(vector3 vParam0)
{
	return sqrt((((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)) + (vParam0.z * vParam0.z)));
}

int func_79(int iParam0)
{
	if (func_77() != -1)
	{
		if ((func_48(Local_117.f_84[func_77()]) && func_48(iParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_117.f_84[func_77()], 1) > func_80(func_81(), iParam0, 1) && func_80(Local_117.f_84[func_77()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_80(int iParam0, int iParam1, bool bParam2)
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

int func_81()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0x6E61BE9E61434AC1() != -1)
		{
			return Global_2439138.f_1123[unk_0x6E61BE9E61434AC1()];
		}
	}
	return -1;
}

int func_82(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
		{
			Local_117.f_84[iVar0] = uParam0;
			Local_117.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_83(int iParam0)
{
	if (((unk_0x9F4FE516EAACCFC5(Local_117.f_61) && unk_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(iParam0)) && func_48(func_30()))
	{
		vVar0 = { unk_0xD06724447386BC29(Local_117.f_61) };
		vVar3 = { unk_0x68F4C0EC296D3901(iParam0, true) };
		switch (Local_117.f_25)
		{
			case 0:
				Local_117.f_105 = unk_0xCD02F8660C47B801(vVar0, vVar3, 511, 0, 7);
				if (Local_117.f_105 != 0)
				{
					Local_117.f_25 = 1;
				}
				break;
			
			case 1:
				Local_117.f_112 = unk_0x1EC301670B54C6DE(Local_117.f_105, &iVar6, &vVar10, &uVar7, &iVar13);
				if (Local_117.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_117.f_24 = 1;
						vVar10 = { 0f, 0f, 0f };
						if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 0))
						{
							unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
						}
					}
					else
					{
						Local_117.f_24 = 2;
						if (unk_0xC844350D5D58C99A(iVar13))
						{
							if (unk_0xE2F1E99DD161A861(iVar13) || (unk_0xEC560E589DF8370E(iVar13) && unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar13))))
							{
								if (iVar13 == func_84(iParam0))
								{
									if (!unk_0x437347B10A200C4B(iParam0, 0))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 0))
										{
											unk_0x5D96D8530B3D0904(&(Local_117.f_5), 0);
										}
									}
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 0))
							{
								unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
							}
						}
						Local_117.f_105 = 0;
						Local_117.f_25 = 0;
					}
				}
				else if (Local_117.f_112 == 0)
				{
					Local_117.f_25 = 0;
				}
				break;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 0))
	{
		unk_0x0674E58A79778E99(&(Local_117.f_5), 0);
	}
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85()
{
	if (unk_0x9F4FE516EAACCFC5(Local_117.f_61) && unk_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		if (func_28(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar105 = unk_0x9ED5EF2B539772F7(&uVar2);
				if (iVar105 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar105)
					{
						if (!unk_0xC844350D5D58C99A(uVar2[iVar0]))
						{
						}
						else if ((!unk_0xE2F1E99DD161A861(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_69(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[iVar0]) && !func_86(uVar2[iVar0]))
						{
							if (func_74(uVar2[iVar0]) && func_80(uVar2[iVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
					{
						iVar103 = unk_0x117658E336116132(iVar0);
						iVar104 = unk_0x9539D44F3E4492F6(iVar103);
						if ((iVar103 == unk_0xD803B885F5E47A62() || !func_69(iVar104)) || unk_0x437347B10A200C4B(iVar104, 0))
						{
						}
						else if (func_87(iVar104) && !func_86(iVar104))
						{
							if (func_80(iVar104, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = iVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_117.f_111 = 1;
			}
		}
	}
}

int func_86(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((unk_0xC844350D5D58C99A(Local_117.f_84[iVar0]) && !unk_0x437347B10A200C4B(Local_117.f_84[iVar0], 0)) && unk_0xC844350D5D58C99A(iParam0)) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (iParam0 == Local_117.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (iParam0 == Local_117.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_65(iVar0, 1);
		func_64(iVar0, 1);
		iVar0++;
	}
}

void func_89()
{
	if ((func_48(func_30()) && unk_0x9F4FE516EAACCFC5(Local_117.f_61)) && unk_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		iVar0 = unk_0xF653B9B22DA806A9(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_382, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_382), 0);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_382, 0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_382), 0);
	}
}

void func_90()
{
	if (((unk_0x9F4FE516EAACCFC5(Local_117.f_61) && (unk_0x9CF8D5C7090408A2(Local_117.f_61) || !unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0,25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (unk_0x91E3F625EF57450D(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&fVar12, &fVar11);
		func_25(&fVar13);
		unk_0xA2E3EDD0E119882F(2);
		unk_0x558EC149EB2BC0A2(0, 39);
		if (unk_0x91E3F625EF57450D(0))
		{
			fVar14 = 15f;
			fVar5 = (unk_0x8A6BC5D9CAEACD0F(0, 291) * -fVar14);
			fVar6 = (unk_0x8A6BC5D9CAEACD0F(0, 290) * fVar14);
		}
		else
		{
			iVar4 = floor((unk_0x8A6BC5D9CAEACD0F(0, 291) * -fVar14));
			iVar3 = floor((unk_0x8A6BC5D9CAEACD0F(0, 290) * fVar14));
		}
		iVar2 = floor((unk_0x4B7163B4D6E4A3C2(0, 39) * fVar14));
		if (!unk_0x91E3F625EF57450D(0))
		{
			iVar18 = round((IntToFloat(iVar18) * fVar14));
			if (unk_0x51D1D19912234EA0(iVar2) < iVar18)
			{
				iVar2 = 0;
			}
			vVar19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (vmag(vVar19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((vVar15.x / fVar7) * 0,5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (unk_0x91E3F625EF57450D(0))
		{
			Local_117[2] = ((fVar5 * Local_117.f_59) * fVar1);
			Local_117[3] = (((fVar6 * Local_117.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_117[2] = (((to_float(iVar4) * Local_117.f_59) * fVar1) * timestep());
			Local_117[3] = ((((to_float(iVar3) * Local_117.f_59) * fVar1) * fVar22) * timestep());
		}
		Local_117[3] = func_94(Local_117[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			vVar15 = { unk_0x17D61C69BA58F815(Local_117.f_61, 2) };
		}
		if (!func_93(unk_0xD06724447386BC29(Local_117.f_61), 0f, 0f, 0f, 0))
		{
			if (!unk_0x437347B10A200C4B(func_30(), 0))
			{
				fVar23 = unk_0xD9522BA9E27E1349(func_30());
				fVar24 = (fVar23 - vVar15.z);
				while (unk_0x755FF954DAE327E1(fVar24) >= 180f && iVar25 < 30)
				{
					if (fVar24 < 0f)
					{
						fVar24 = (fVar24 + 360f);
					}
					else
					{
						fVar24 = (fVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (fVar24 >= fVar11)
				{
					if (fVar24 > 0f)
					{
						vVar15.z = (fVar23 - fVar11);
					}
					else
					{
						vVar15.z = (fVar23 + fVar11);
					}
				}
				if (fVar24 < fVar12)
				{
					if (fVar24 > 0f)
					{
						vVar15.z = (fVar23 - unk_0x755FF954DAE327E1(fVar12));
					}
					else
					{
						vVar15.z = (fVar23 + unk_0x755FF954DAE327E1(fVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_93(Local_117.f_50, 0f, 0f, 0f, 0))
			{
				Local_117.f_50 = { unk_0x835730A2D89F6093(func_30(), 2) };
			}
			else
			{
				vVar28 = { unk_0x835730A2D89F6093(func_30(), 2) };
				fVar31 = ((unk_0x755FF954DAE327E1(Local_117.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((vVar28.x - Local_117.f_50) * fVar31));
				fVar27 = (fVar27 + (vVar28.z - Local_117.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (vVar28.x < -80f || vVar28.x > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (unk_0x377BE9A1BF38C7CE(func_30()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_117.f_50 = { vVar28 };
			}
			if ((((Local_117[2] != 0f || Local_117[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
			{
				fVar32 = (((Local_117.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_117[2] = (Local_117[2] * fVar32);
				Local_117[3] = (Local_117[3] * fVar32);
				Local_117.f_53 = (Local_117.f_53 + Local_117[2]);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - Local_117[3]);
				Local_117.f_53 = (Local_117.f_53 - fVar26);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - fVar27);
				if (Local_117.f_53 < fVar8)
				{
					Local_117.f_53 = fVar8;
				}
				if (Local_117.f_53 > fVar7)
				{
					Local_117.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_117.f_53.f_2 > 180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 - 360f);
					}
					while (Local_117.f_53.f_2 < -180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_117.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_117.f_53.f_2 > (fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
			{
				if (func_164())
				{
					Local_117.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_117.f_53 = { fVar7, 0f, 0f };
				}
				unk_0x5D96D8530B3D0904(&(Local_117.f_5), 2);
			}
			if (!func_92(Global_2425662[unk_0xD803B885F5E47A62()].f_383[0], Local_117.f_53, 0f, Local_117.f_53.f_2, 1056964608, 0))
			{
				Global_2425662[unk_0xD803B885F5E47A62()].f_383[0] = { Local_117.f_53, 0f, Local_117.f_53.f_2 };
			}
			if (func_164())
			{
				unk_0xF42E0F9B569BF0A5(Local_117.f_61, func_30(), unk_0xF653B9B22DA806A9(func_30(), "weapon_1d"), 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
			else
			{
				unk_0xF42E0F9B569BF0A5(Local_117.f_61, func_30(), 0, 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
		}
		Local_117.f_59 = (Local_117.f_59 + (((to_float(iVar2) / 5f) * timestep()) * fVar0));
		if (Local_117.f_59 > fVar9)
		{
			Local_117.f_59 = fVar9;
		}
		if (Local_117.f_59 < fVar10)
		{
			Local_117.f_59 = fVar10;
		}
		unk_0x36629DB72EBCB78C(1f);
		unk_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
		fVar33 = ((Local_117.f_59 - 5f) / 42f);
		unk_0x7B0A869D38A120EA(fVar33);
		if (unk_0x64F604CF561734A9("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((unk_0x51D1D19912234EA0(iVar2) > 0 && Local_117.f_59 <= fVar9) && Local_117.f_59 >= fVar10)
			{
				iVar34 = Local_117.f_29;
				if (iVar34 != -1)
				{
					if (unk_0x8AA6DC470ABA63A2(iVar34))
					{
						unk_0x4D7F4CC43D4D0DE3(iVar34, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					unk_0x6F6BA3FE885E6C91(iVar34, "Ctrl", to_float(iVar2));
					if (iVar2 < 0)
					{
						unk_0x6F6BA3FE885E6C91(iVar34, "Dir", -1f);
					}
					else
					{
						unk_0x6F6BA3FE885E6C91(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_117.f_29 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(Local_117.f_29))
				{
					unk_0x55D0A2DB35045A35(Local_117.f_29);
				}
			}
			vVar35 = { -Vector(unk_0x8A6BC5D9CAEACD0F(0, 290), 0f, unk_0x8A6BC5D9CAEACD0F(0, 291)) };
			if (vmag(vVar35) > 0f)
			{
				iVar38 = Local_117.f_30;
				if (iVar38 != -1)
				{
					if (unk_0x8AA6DC470ABA63A2(iVar38))
					{
						unk_0x4D7F4CC43D4D0DE3(iVar38, "COP_HELI_CAM_TURN", 0, 1);
					}
					unk_0x6F6BA3FE885E6C91(iVar38, "Ctrl", vmag(vVar35));
				}
			}
			else
			{
				iVar39 = Local_117.f_30;
				if (iVar39 != -1)
				{
					if (!unk_0x8AA6DC470ABA63A2(iVar39))
					{
						unk_0x55D0A2DB35045A35(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_91()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		return -0,25f, -1f, 1,1f;
	}
	if (unk_0xC844350D5D58C99A(func_30()))
	{
		switch (unk_0x134B62B726CEC8E6(func_30()))
		{
			case -1660661558:
				return 0f, 2,75f, -1,25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_92(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_93(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)
{
	*fParam0 = 0,0015f;
}

int func_99()
{
	if (unk_0x798A3F1296751F46() || unk_0x590766B2AF637235())
	{
		return 1;
	}
	if (func_102(1))
	{
		return 1;
	}
	if (func_100(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
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

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_102(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_103()
{
	if (!func_111())
	{
		func_110(1);
	}
	unk_0x58D1E74A3FBADA8D(0, 1);
	if (func_164())
	{
		func_109();
	}
	else if (unk_0xC844350D5D58C99A(Local_117.f_107))
	{
		unk_0xB12423B4F533017F(Local_117.f_107);
	}
	vVar0 = { unk_0xF1EE614CA05DDE75() };
	if ((((unk_0x798A3F1296751F46() || func_108()) || unk_0xBFC0798A6E3417F9(2, 199)) || unk_0x06F8112AA79C53D9(2, 199)) || unk_0xB9132A06AE472728(2, 199))
	{
		unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
		unk_0xA464CD2441CD9CE2(vVar0.x, vVar0.y, 0);
		if (unk_0x798A3F1296751F46() || func_108())
		{
			if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
			{
				unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 255);
			}
		}
	}
	else if (func_164())
	{
		if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
		{
			unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 0);
		}
	}
	unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
	unk_0x6476077988E40DA0();
	unk_0xB243B37593BB6C38();
	if (unk_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		unk_0xA2071E69C1AE8451(Local_117.f_61, 1);
	}
	unk_0xF91D0B1DCE756AFB(0);
	if (func_164())
	{
		vVar3 = { unk_0x9382F04ED9CDA21A(0) };
		vVar3 = { func_107(vVar3) };
		if (!unk_0xE4EDC4B0E92C078B(Local_117.f_109))
		{
			Local_117.f_108 = func_105(vVar0, 0);
			unk_0xBC8E0A7390523199(Local_117.f_108, 425);
			unk_0xF2D30B8ACAF12A39(Local_117.f_108, false);
			unk_0x9D7CDDB4B55142AF(Local_117.f_108, 4);
			unk_0x61755AC17D8F538E(Local_117.f_108, func_104(2));
			unk_0x029222ED35E8A217(Local_117.f_108, true);
			unk_0x516E63E474722206(Local_117.f_108, 0,54f);
			unk_0x2A065371C9D96655(Local_117.f_108, 13 + 1);
			Local_117.f_109 = func_105(vVar0, 0);
			unk_0xBC8E0A7390523199(Local_117.f_109, 425);
			unk_0xF2D30B8ACAF12A39(Local_117.f_109, false);
			unk_0x9D7CDDB4B55142AF(Local_117.f_109, 4);
			unk_0x61755AC17D8F538E(Local_117.f_109, func_104(18));
			unk_0x029222ED35E8A217(Local_117.f_109, true);
			unk_0x516E63E474722206(Local_117.f_109, 0,44f);
			unk_0x2A065371C9D96655(Local_117.f_109, 13 + 1);
			unk_0x54B31D18C3F36EB7(Local_117.f_109, 1);
			unk_0x436F3596830D7DC3(Local_117.f_109, round(unk_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			unk_0x54B31D18C3F36EB7(Local_117.f_108, 1);
			unk_0x436F3596830D7DC3(Local_117.f_108, round(unk_0xE7D606C557C86100(vVar3.x, vVar3.y)));
		}
		else
		{
			unk_0x2F9282246F89FFD1(Local_117.f_109, vVar0);
			unk_0x436F3596830D7DC3(Local_117.f_109, round(unk_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			unk_0x9D7CDDB4B55142AF(Local_117.f_109, 5);
			unk_0x2F9282246F89FFD1(Local_117.f_108, vVar0);
			unk_0x436F3596830D7DC3(Local_117.f_108, round(unk_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			unk_0x9D7CDDB4B55142AF(Local_117.f_108, 5);
		}
	}
}

int func_104(int iParam0)
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

int func_105(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_106(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(vector3 vParam0)
{
	vVar0.x = cos(vParam0.x);
	vVar0.y = cos(vParam0.z);
	vVar0.z = sin(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -sin(vParam0.z));
	return vVar0;
}

bool func_108()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

void func_109()
{
	Global_1312666 = 1;
}

void func_110(int iParam0)
{
	Global_2462959 = iParam0;
}

bool func_111()
{
	return Global_2462959;
}

void func_112(int iParam0)
{
	if (Local_117.f_110 != iParam0)
	{
		Local_117.f_110 = iParam0;
	}
}

int func_113()
{
	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_164())
			{
				if (unk_0xBFC0798A6E3417F9(2, 80) || unk_0xD245978525608929(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (unk_0xBFC0798A6E3417F9(0, 51) || unk_0xD245978525608929(0, 51))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_117.f_107, 0))
					{
						unk_0x8A11CFBA6F8D36BF(Local_117.f_107, 1f);
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					}
					return 1;
				}
				if (func_48(func_30()))
				{
					if (unk_0x9F4FE516EAACCFC5(Local_117.f_61))
					{
						vVar0 = { unk_0xD06724447386BC29(Local_117.f_61) };
						if (unk_0xE82754C349C7B581(vVar0, &fVar3, 0, 0))
						{
							if (vdist(vVar0, vVar0.x, vVar0.y, fVar3) < 2f)
							{
								return 1;
							}
						}
					}
					if (unk_0x70EED0761B82965E(func_30()))
					{
						return 1;
					}
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_117.f_107, 0))
					{
						unk_0x8A11CFBA6F8D36BF(Local_117.f_107, 1f);
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_124())
			{
				return 1;
			}
		}
	}
	if (func_122(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_48(func_114()))
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 30) == 0)
			{
				if (unk_0x3D1053F9EB43B7AD(func_114(), -136,1614f, 4617,176f, 124,5134f, -490,3058f, 4924,749f, 159,0677f, 19,5f, 0, true, 0))
				{
					return 1;
				}
			}
			if (unk_0x377BE9A1BF38C7CE(func_114()))
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

int func_114()
{
	if (Global_1590382 != func_29())
	{
		if (!func_115(Global_1590382))
		{
			if (unk_0xC844350D5D58C99A(Global_1370256))
			{
				return Global_1370256;
			}
			if (unk_0xC844350D5D58C99A(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_116()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (Global_1590382 != func_29())
		{
			if (func_115(Global_1590382) || func_121(Global_1590382))
			{
				return 1;
			}
			if (func_120(Global_1590382))
			{
				if (func_27(func_119(Global_1590382)) == 11)
				{
					if (func_27(func_118(Global_1590382)) == 11)
					{
						if (func_117(Global_1590382) == 5)
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

int func_117(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_15;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 14);
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_123(iParam0) && !func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_124()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xC844350D5D58C99A(func_30()))
		{
			iVar0 = unk_0xA30B8362589C124A(func_30(), -1, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					iVar1 = unk_0x83FACCC48B68F9D1(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_125(iVar1))
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

int func_125(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_126()
{
	return Global_22211.f_135;
}

int func_127(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_128(unk_0x16F2683693E537C9()))
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

int func_128(int iParam0)
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

bool func_129()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687686, 1);
}

void func_130()
{
	if (func_137())
	{
		if (!unk_0x9F4FE516EAACCFC5(Local_117.f_61))
		{
			Local_117.f_61 = unk_0x92B061D59B9B540A(26379945, 1);
			unk_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
			vVar0 = { unk_0x835730A2D89F6093(func_30(), 2) };
			unk_0x5F3CBA6EB9341C90(Local_117.f_61, 0f, 0f, vVar0.z, 2);
			unk_0xC5940439E4EB9A33(Local_117.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			unk_0x225CFE81EA219E44();
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
		{
			func_103();
			func_3();
			unk_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
			unk_0x63D6BFA449464BBF("eyeinthesky");
			if (Local_117.f_49 == -1)
			{
				Local_117.f_49 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				Local_117.f_107 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				vVar3 = { unk_0x68F4C0EC296D3901(Local_117.f_107, true) };
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x9AFA0796FDCABCD5(unk_0x16F2683693E537C9(), Local_117.f_107, 0, 0, vVar3, 4, 0f, -1f, -1f, -1, -1, -1082130432, 0);
				unk_0x8A11CFBA6F8D36BF(Local_117.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_334, 25))
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_334), 25);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_334, 25))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_334), 25);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_129())
		{
			unk_0x5D96D8530B3D0904(&Global_1687686, 1);
		}
	}
	else
	{
		if (func_129())
		{
			unk_0x0674E58A79778E99(&Global_1687686, 1);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135())
		{
			unk_0x5D96D8530B3D0904(&Global_1687686, 2);
		}
	}
	else if (func_135())
	{
		unk_0x0674E58A79778E99(&Global_1687686, 2);
	}
}

bool func_135()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687686, 2);
}

Vector3 func_136()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		return 0f, 0f, 3,3f;
	}
	if (unk_0xC844350D5D58C99A(func_30()))
	{
		switch (unk_0x134B62B726CEC8E6(func_30()))
		{
			case -1660661558:
				return 0f, 2,75f, -1,25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_137()
{
	if (!unk_0xC844350D5D58C99A(func_30()))
	{
		return 0;
	}
	if (unk_0xC844350D5D58C99A(func_30()) && unk_0x437347B10A200C4B(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	if (func_137())
	{
		if (func_150())
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_139(unk_0xD803B885F5E47A62(), 0, 32768, 0);
			}
			if (!func_58(&(Local_117.f_113)))
			{
				if (func_48(func_30()))
				{
					if (unk_0x9E632F16E887F781(unk_0x68F4C0EC296D3901(func_30(), true), 100f, 1))
					{
						func_57(&(Local_117.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_117.f_113), 2000, 0))
			{
				unk_0x75AFFFF37CDAEC84(func_30());
			}
		}
		if (func_58(&(Local_117.f_113)))
		{
			if (func_56(&(Local_117.f_113), 5000, 0))
			{
				if (unk_0x68367101660E33F0())
				{
					if (!unk_0x9F4FE516EAACCFC5(Local_117.f_61))
					{
						Local_117.f_61 = unk_0x92B061D59B9B540A(26379945, 1);
						unk_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
						vVar0 = { unk_0x835730A2D89F6093(func_30(), 2) };
						unk_0x5F3CBA6EB9341C90(Local_117.f_61, 0f, 0f, vVar0.z, 2);
						unk_0xC5940439E4EB9A33(Local_117.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						unk_0x225CFE81EA219E44();
						unk_0x8BC9595FD2792B5D("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
					{
						func_103();
						func_3();
						unk_0x486B4ADE317F0689();
						unk_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
						if (Local_117.f_49 == -1)
						{
							Local_117.f_49 = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_149())
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
		if (!func_147())
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
				else if (bVar14 || (!func_10(unk_0xD803B885F5E47A62(), 0) && !func_101()))
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
					func_144(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_143(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_142();
					func_141();
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
				if (!func_143(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_140(Global_4456448.f_232883))
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

bool func_140(int iParam0)
{
	return iParam0 == 17;
}

void func_141()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_142()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_143(int iParam0)
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

void func_144(int iParam0, int iParam1, int iParam2)
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
				func_146();
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
		if (func_10(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_145(-2008016205, iParam0);
	}
}

void func_145(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_146()
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

int func_147()
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	return Global_1312467.f_18;
}

int func_149()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 0;
}

int func_151()
{
	if (func_163(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_162(unk_0xD803B885F5E47A62());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 4) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && func_161(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)))
			{
				return 1;
			}
			if (!func_160(Global_4456448.f_194990))
			{
				if (func_163(iVar0))
				{
					if (func_159(iVar0))
					{
						return 1;
					}
					else if (func_123(unk_0xD803B885F5E47A62()) || func_158())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return 1;
	}
	if (func_157(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_156(unk_0xD803B885F5E47A62());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 9) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_155(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0xD803B885F5E47A62()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_154(unk_0xD803B885F5E47A62());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_29() && func_123(Global_1590382)) && func_27(func_119(Global_1590382)) == 11) && func_67(Global_1590382, -1)) && unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(Global_1590382), 0), -1988428699))
			{
				return 1;
			}
			else if (func_115(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0xD803B885F5E47A62()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_157(unk_0xD803B885F5E47A62()) || func_153(unk_0xD803B885F5E47A62()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22585)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22586)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319114 == 1)
	{
		return 1;
	}
	if (func_152(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_155(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_157(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_158()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377, 6);
}

int func_159(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

bool func_160(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_161(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == 387748548 || unk_0x134B62B726CEC8E6(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_163(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_164()
{
	return unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 7);
}

void func_165()
{
	if (!func_99())
	{
		if (func_28(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!func_171())
			{
				if (func_164())
				{
					if ((func_167() && !func_150()) && func_166("MP_HTRUCK_T_2"))
					{
						if (unk_0xB9132A06AE472728(2, 176) || unk_0x9A01369A10646AFE(2, 176))
						{
							func_134(1);
							func_112(1);
							unk_0xA37A90C62806D848(1);
						}
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F()) && !func_166("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_166("HUNTGUN_1b"))
					{
						unk_0xA37A90C62806D848(1);
					}
					else if (unk_0xBFC0798A6E3417F9(0, 51) || unk_0xD245978525608929(0, 51))
					{
						func_134(1);
						func_112(1);
						unk_0xA37A90C62806D848(1);
					}
				}
				else if (func_166("HUNTGUN_1b"))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			else if (func_166("HUNTGUN_1b"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
	}
}

bool func_166(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_167()
{
	if ((func_26(unk_0xD803B885F5E47A62(), 0) && Global_1319110 == 2) && func_168())
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_169(unk_0x16F2683693E537C9(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0, int iParam1)
{
	if (func_170(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_48(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (Global_262145.f_24157)
		{
			return 1;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_115(Global_1590382))
		{
			return 1;
		}
	}
	if (func_125(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_44(0))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!func_137())
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (Global_1319114)
	{
		return 1;
	}
	if (func_26(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_48(func_114()))
		{
			if (unk_0x3D1053F9EB43B7AD(func_114(), -136,1614f, 4617,176f, 124,5134f, -490,3058f, 4924,749f, 159,0677f, 19,5f, 0, true, 0))
			{
				return 1;
			}
			if (unk_0x377BE9A1BF38C7CE(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (!func_164())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (func_48(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if (unk_0xE82754C349C7B581(vVar1, &fVar4, 0, 0))
				{
					if (vdist(vVar1, vVar1.x, vVar1.y, fVar4) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_172()
{
	return Global_96053;
}

int func_173()
{
	if (unk_0x8A22C4C08282BF26(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return Global_1676377.f_474;
}

int func_175()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_176()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_177(int iParam0)
{
	return Local_117.f_110 == iParam0;
}

void func_178()
{
	if (func_177(1) || func_177(2))
	{
		if (func_48(func_30()))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(func_30(), true) };
			unk_0xA4A0E041958E996F(vVar0, 100f, 200f);
			unk_0x71AEB1E48B81572C();
			if ((unk_0xF4CCC8CB6DE7F1AE() % 120) == 0)
			{
				unk_0x9303BDE130B7DFE2(vVar0, 300f, 30);
			}
		}
	}
	if (func_177(2))
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			func_139(unk_0xD803B885F5E47A62(), 1, 0, 0);
		}
		func_179();
		unk_0xEAB026E686C0D991(0, 19, 1);
		unk_0xEAB026E686C0D991(0, 166, 1);
		unk_0xEAB026E686C0D991(0, 167, 1);
		unk_0xEAB026E686C0D991(0, 168, 1);
		unk_0xEAB026E686C0D991(0, 169, 1);
		unk_0xEAB026E686C0D991(2, 218, 1);
		unk_0xEAB026E686C0D991(2, 219, 1);
		unk_0xEAB026E686C0D991(2, 220, 1);
		unk_0xEAB026E686C0D991(2, 221, 1);
		unk_0xEAB026E686C0D991(2, 205, 1);
		unk_0xEAB026E686C0D991(2, 206, 1);
		unk_0xEAB026E686C0D991(2, 207, 1);
		unk_0xEAB026E686C0D991(2, 208, 1);
		unk_0xEAB026E686C0D991(2, 209, 1);
		unk_0xEAB026E686C0D991(2, 210, 1);
		unk_0xEAB026E686C0D991(2, 202, 1);
		unk_0xEAB026E686C0D991(2, 80, 1);
		unk_0xEAB026E686C0D991(2, 51, 1);
		unk_0xEAB026E686C0D991(2, 190, 1);
		unk_0xEAB026E686C0D991(2, 199, 1);
		unk_0xEAB026E686C0D991(2, 200, 1);
		if (unk_0x91E3F625EF57450D(0))
		{
			unk_0xEAB026E686C0D991(0, 238, 1);
			unk_0xEAB026E686C0D991(0, 237, 1);
		}
		if (unk_0x798A3F1296751F46())
		{
			unk_0xEAB026E686C0D991(0, 201, 1);
			unk_0xEAB026E686C0D991(0, 202, 1);
			unk_0xEAB026E686C0D991(0, 188, 1);
			unk_0xEAB026E686C0D991(0, 187, 1);
			unk_0xEAB026E686C0D991(0, 189, 1);
			unk_0xEAB026E686C0D991(2, 195, 1);
			unk_0xEAB026E686C0D991(2, 196, 1);
			unk_0xEAB026E686C0D991(2, 198, 1);
			unk_0xEAB026E686C0D991(2, 197, 1);
		}
	}
}

void func_179()
{
	func_180();
}

void func_180()
{
	iVar0 = 0;
	while (iVar0 < 361)
	{
		unk_0x38C3A68D7861DCFD(0, iVar0, 1);
		iVar0++;
	}
}

int func_181()
{
	if (!func_147())
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!func_164())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!func_182(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
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

int func_182(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xA30B8362589C124A(iParam0, -1, 0) == unk_0x16F2683693E537C9() && unk_0xBBA8A868118C90ED(iParam0, 0, 1))
		{
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case -1660661558:
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_183()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687686, 0);
}

int func_184()
{
	func_192(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_191())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (func_189(159))
	{
		if (!func_188())
		{
			return 1;
		}
	}
	if (func_189(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_185() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_185()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_185()
{
	switch (func_187())
	{
		case 0:
			return func_186();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_186()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_187()
{
	return Global_30768;
}

bool func_188()
{
	return Global_2450632.f_598;
}

int func_189(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_190()
{
	return Global_2460680;
}

bool func_191()
{
	return Global_2450632.f_593;
}

void func_192(var uParam0)
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
					func_193(iVar0);
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

void func_193(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_194(iVar4, &bVar5))
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

int func_194(int iParam0, var uParam1)
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

void func_195()
{
	wait(0);
}

void func_196(bool bParam0)
{
	if (!func_164())
	{
		if (func_166("HUNTGUN_1b"))
		{
			unk_0xA37A90C62806D848(1);
		}
		unk_0x225CFE81EA219E44();
	}
	if (func_48(func_30()))
	{
		unk_0x066C43E677C08D5C();
	}
	unk_0xF5A41F3D3B38EFE3("helicopterhud");
	unk_0xF5A41F3D3B38EFE3("droneHUD");
	unk_0xE17FDF9E3068281B(&(Local_117.f_62));
	func_204();
	func_203();
	if (func_111())
	{
		func_110(0);
	}
	unk_0xF737A3AD8873CE16();
	unk_0xFB452C6B9BE826C7();
	if (func_147() && !func_123(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x0C2635BB5127C8FB())
		{
			func_139(unk_0xD803B885F5E47A62(), 1, 0, 0);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
		}
	}
	func_51(&(Local_117.f_113));
	func_51(&(Local_117.f_115));
	func_51(&(Local_117.f_117));
	func_51(&(Local_117.f_119));
	func_133(0);
	func_132(0);
	Local_117.f_32 = -1;
	Local_117.f_31 = 0;
	Local_117.f_5 = 0;
	Local_117.f_24 = 0;
	Local_117.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_17[iVar0] = 0;
		func_51(&(Local_117.f_121[iVar0]));
		iVar0++;
	}
	func_88();
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_382, 0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_382), 0);
	}
	Local_117.f_48 = 0;
	func_202();
	func_200(1, -1);
	if (unk_0xE4EDC4B0E92C078B(Local_117.f_108))
	{
		unk_0x142CC44DB769B57E(&(Local_117.f_108));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_117.f_109))
	{
		unk_0x142CC44DB769B57E(&(Local_117.f_109));
	}
	if (!bParam0)
	{
		func_199(0);
		func_198();
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)
{
	Local_117.f_33 = 100;
	Local_117.f_59 = 50f;
	Local_117.f_62 = unk_0xB01F55A0FD1CFD49(func_38());
	unk_0x64F604CF561734A9("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	unk_0x0D3BE1DE0262A012("helicopterhud", false);
	unk_0x0D3BE1DE0262A012("droneHUD", false);
	Local_117.f_29 = unk_0xD68EA767274B7444();
	Local_117.f_30 = unk_0xD68EA767274B7444();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_34[iVar0] = -1;
		Local_117.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_198()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		if (!func_183())
		{
			unk_0x5D96D8530B3D0904(&Global_1687686, 0);
		}
	}
	else if (func_183())
	{
		unk_0x0674E58A79778E99(&Global_1687686, 0);
	}
}

void func_200(bool bParam0, int iParam1)
{
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_201(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_201(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_202()
{
	if (Local_117.f_30 != -1)
	{
		unk_0x55D0A2DB35045A35(Local_117.f_30);
		unk_0x43A06902454A1172(Local_117.f_30);
		Local_117.f_30 = -1;
	}
	if (Local_117.f_29 != -1)
	{
		unk_0x55D0A2DB35045A35(Local_117.f_29);
		unk_0x43A06902454A1172(Local_117.f_29);
		Local_117.f_29 = -1;
	}
	if (Local_117.f_49 != -1)
	{
		unk_0x55D0A2DB35045A35(Local_117.f_49);
		unk_0x43A06902454A1172(Local_117.f_49);
		Local_117.f_49 = -1;
	}
	unk_0x8910D3D58E0132B8("DLC_GR_MOC_Turret_View_Scene");
	unk_0xBFBFE6D9F51994DB();
}

void func_203()
{
	if (Local_117.f_6 == -1)
	{
		unk_0x55D0A2DB35045A35(Local_117.f_6);
		unk_0x43A06902454A1172(Local_117.f_6);
		Local_117.f_6 = -1;
	}
}

void func_204()
{
	if (unk_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		unk_0x9A8DDC7C522F5BF5(Local_117.f_61, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0x225CFE81EA219E44();
	}
}

void func_205(struct<19> Param0, var uParam19, var uParam20)
{
	unk_0x37AD2AB54480FA6A(32, 0, Param0.f_16);
	func_208(0, -1, 0);
	unk_0x9752E7BAEABA939E(&uLocal_116, 1);
	unk_0x35B62793EAE9ADDF(&uLocal_83, 33);
	if (!func_207())
	{
		func_196(0);
	}
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		func_196(0);
	}
	if (Param0.f_18 == 1)
	{
		func_206(1);
	}
	else
	{
		func_206(0);
	}
	func_197(1);
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 7))
		{
			unk_0x5D96D8530B3D0904(&(Local_117.f_5), 7);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_117.f_5, 7))
	{
		unk_0x0674E58A79778E99(&(Local_117.f_5), 7);
	}
}

int func_207()
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
		if (func_191())
		{
			return 0;
		}
		if (func_189(157))
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

int func_208(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_198();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_191())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_189(157))
				{
					if (!bParam2)
					{
						func_198();
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
					func_198();
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
				func_198();
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
			func_198();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()
{
	return Global_1312854;
}

