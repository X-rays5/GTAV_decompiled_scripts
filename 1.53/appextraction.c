#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19681.f_1 != 9)
		{
			switch (Global_19681.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_19649, 0))
					{
						func_4();
						Global_19659 = 1;
						if (Global_19681.f_1 > 3)
						{
							Global_19681.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19683 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xD39E529EBE5DB04F();
}

int func_3()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x1BD7199394D7F19A(iParam0, uParam1) || (iParam2 == 1 && unk_0x79800E51B3B6D197(iParam0, uParam1)))
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0x913D69ADE739309E() == 0 || (unk_0xDFAB5E5CBE16E8B1() && unk_0xC1F43F8D0D5EB664(2)))
			{
				return 0;
			}
		}
		if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
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

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_19662, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(24);
	unk_0xAD291B8F75D737AD(0);
	if (unk_0xCE990E643CD9D0E5(Global_4271024, 23))
	{
		unk_0xF1B28F753235CE2A(0);
		func_8("CELL_EXTBYOU");
		unk_0xAD291B8F75D737AD(Global_4271025);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305));
		unk_0xAD291B8F75D737AD(Global_4271026);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305.f_1));
		unk_0xAD291B8F75D737AD(Global_4271027);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305.f_2));
		func_8("CELL_BODYG");
		unk_0xAD291B8F75D737AD(Global_4271028);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308));
		unk_0xAD291B8F75D737AD(Global_4271029);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308.f_1));
		unk_0xAD291B8F75D737AD(Global_4271030);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308.f_2));
	}
	else
	{
		unk_0xF1B28F753235CE2A(0);
		func_8("CELL_EXTBYOU");
		unk_0xAD291B8F75D737AD(Global_4271028);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308));
		unk_0xAD291B8F75D737AD(Global_4271029);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308.f_1));
		unk_0xAD291B8F75D737AD(Global_4271030);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271308.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xAD291B8F75D737AD(Global_4271025);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305));
		unk_0xAD291B8F75D737AD(Global_4271026);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305.f_1));
		unk_0xAD291B8F75D737AD(Global_4271027);
		unk_0xAD291B8F75D737AD(SYSTEM::FLOOR(Global_4271305.f_2));
	}
	unk_0xE1FDD153F5858534();
	func_9(Global_19662, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_19669)
	{
		func_12(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD2459066EA58CE43(&Global_7551, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xE1FDD153F5858534();
}

