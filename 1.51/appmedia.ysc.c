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
	unk_0xB57F88F0123F4C38();
	func_27();
	func_26();
	while (true)
	{
		wait(0);
		if (iLocal_24 == 0)
		{
			if (Global_19486.f_1 != 9)
			{
				switch (Global_19486.f_1)
				{
					case 7:
						if ((iLocal_210 == 0 && iLocal_211 == 0) && Global_21840 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_19454, 0) && iLocal_210 == 0) && iLocal_211 == 0)
						{
							func_14();
							Global_19464 = 1;
							if (Global_19486.f_1 > 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_210)
				{
					func_9();
				}
				if (iLocal_211)
				{
					func_8();
				}
			}
			else
			{
				Global_19488 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_25 = unk_0x57AA1C471AF0568D(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_19486.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0xFD843F9CCC74B536();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0x41CBD5EC291293E0(iLocal_22))
		{
			func_6(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(0), -1f, -1f, &(Local_52[iLocal_22]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_19467, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_5(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_5(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_5(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_210 == 0 && iLocal_211 == 1)
	{
		if (iLocal_215)
		{
			vLocal_207.x = (vLocal_207.x + 1f);
		}
		if (vLocal_207.x > vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			vLocal_207.y = (vLocal_207.y - 2f);
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.y = vLocal_204.y;
			iLocal_216 = 0;
		}
		if (iLocal_217)
		{
			vLocal_207.z = (vLocal_207.z - 7f);
		}
		if (vLocal_207.z < vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.z = vLocal_204.z;
			iLocal_217 = 0;
		}
		if ((iLocal_215 == 0 && iLocal_216 == 0) && iLocal_217 == 0)
		{
			iLocal_211 = 0;
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 7;
				unk_0xA37A90C62806D848(1);
				Global_21842 = 1;
				func_26();
			}
		}
		unk_0x44FE29702110D5C6(vLocal_207, 0);
	}
}

void func_9()
{
	if ((iLocal_210 == 1 && iLocal_211 == 0) && Global_21840 == 6)
	{
		if (iLocal_212)
		{
			vLocal_207.x = (vLocal_207.x - 1f);
		}
		if (vLocal_207.x < vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			vLocal_207.y = (vLocal_207.y - 0,5f);
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.y = vLocal_204.y;
			iLocal_213 = 0;
		}
		if (iLocal_214)
		{
			vLocal_207.z = (vLocal_207.z + 7f);
		}
		if (vLocal_207.z > vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.z = vLocal_204.z;
			iLocal_214 = 0;
		}
		if ((iLocal_212 == 0 && iLocal_213 == 0) && iLocal_214 == 0)
		{
			iLocal_210 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0x44FE29702110D5C6(vLocal_207, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_7357, 15))
	{
		iLocal_210 = 0;
		iLocal_211 = 0;
		func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_19474)
		{
			func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_7356, 17);
		func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_19467, "SET_HEADER", &(Local_52[iLocal_23]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_11()
{
	Global_21842 = 1;
	unk_0xA37A90C62806D848(1);
	unk_0x10FAF14A60A0DBE1();
}

int func_12()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_210 == 0)
	{
		unk_0xED76A908847D23B4(&vLocal_207, 0);
		vLocal_204 = { Global_19446 };
		iLocal_211 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
		iLocal_217 = 1;
	}
}

void func_14()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(2)))
			{
				return 0;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_203)
	{
		if (timera() > 50)
		{
			iLocal_203 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_203 == 0)
	{
		if (func_15(2, Global_19462, 0))
		{
			func_20();
			iLocal_203 = 1;
			settimera(0);
		}
		if (func_15(2, Global_19463, 0))
		{
			func_17();
			iLocal_203 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_7(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_19669 == 0)
		{
			unk_0x5A963FB0365294C8(2);
		}
		else
		{
			unk_0x5A963FB0365294C8(1);
		}
	}
}

int func_19()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_19669 == 0)
		{
			unk_0x5A963FB0365294C8(1);
		}
		else
		{
			unk_0x5A963FB0365294C8(2);
		}
	}
}

void func_22()
{
	if (Global_19464 == 0)
	{
		if (func_15(2, Global_19455, 0))
		{
			unk_0x0674E58A79778E99(&Global_7357, 15);
			func_24();
			Global_19464 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_20 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(iLocal_20))
			{
				wait(0);
			}
			iVar0 = unk_0xA52833FE33F41C53(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_19486.f_1 > 3)
				{
					if (Global_21840 == 0)
					{
						func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_19467, "SET_HEADER", &(Local_52[iLocal_23]), 0, 0, 0, 0);
						if (Global_19474)
						{
							func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0674E58A79778E99(&Global_7356, 17);
						Global_21844 = iLocal_23;
						Global_21840 = 12;
						Global_19486.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_211 == 0)
	{
		unk_0xED76A908847D23B4(&vLocal_207, 0);
		vLocal_204 = { -90,3f, -0,8f, 90f };
		iLocal_210 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
		iLocal_214 = 1;
	}
}

void func_24()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

void func_26()
{
	if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x9F830D3499A5773E();
		if (unk_0x1ED2F074FDAB6B19(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_52[0]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_52[1]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_52[2]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_52[3]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_52[4]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_52[5]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_52[6]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_52[7]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_52[8]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_52[9]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_52[10]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_52[11]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_52[12]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_52[13]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_52[14]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_52[15]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_52[16]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_52[17]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_52[18]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_52[19]), "CELL_MSSLOT_20", 24);
}

