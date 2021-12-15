void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0,001f;
	iLocal_18 = -1;
	sLocal_19 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	vLocal_60 = { -1124,392f, -514,7001f, 33,21493f };
	fLocal_63 = 200f;
	vLocal_64 = { 2490f, 3777f, 2402,879f };
	vLocal_67 = { -2052f, 3237f, 1450,078f };
	iLocal_159 = 1;
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_62(1);
	}
	iLocal_155 = 2;
	if (func_61(unk_0x16F2683693E537C9()))
	{
		if (vdist2(func_60(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) < 40000f)
		{
			if (unk_0x0F1CCD77290EE12F())
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					Global_111638.f_25068.f_8 = 1;
				}
			}
		}
	}
	unk_0xDF8BDD00CF1D4043(1);
	while (true)
	{
		if (!func_61(unk_0x16F2683693E537C9()))
		{
			return;
		}
		func_56();
		switch (iLocal_154)
		{
			case 0:
				func_23();
				break;
			
			case 1:
				func_13();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	if (func_10())
	{
		func_8();
		func_6(Global_111638.f_25068);
	}
	Global_111638.f_25068.f_8 = 1;
	func_5(65, 0, 0);
	func_4();
	func_2();
	iLocal_154 = 0;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_4()
{
	Global_111635 = 0;
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 0);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 15);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 0);
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 15);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19))
		{
			unk_0xCD816869CA451988(1);
			unk_0x142CC44DB769B57E(&(Global_31146[iVar0].f_19));
			unk_0xCD816869CA451988(0);
		}
	}
}

void func_6(int iParam0)
{
	func_7(iParam0);
	switch (iParam0)
	{
		case 0:
			Global_111638.f_25068 = 1;
			Global_111638.f_25068.f_3 = 1;
			break;
		
		case 1:
			Global_111638.f_25068 = 2;
			Global_111638.f_25068.f_4 = 1;
			break;
		
		case 2:
			Global_111638.f_25068 = 3;
			Global_111638.f_25068.f_5 = 1;
			break;
		
		case 3:
			Global_111638.f_25068 = 4;
			Global_111638.f_25068.f_6 = 1;
			break;
		
		case 4:
			Global_111638.f_25068 = 0;
			Global_111638.f_25068.f_7 = 1;
			break;
	}
}

void func_7(int iParam0)
{
	iVar0 = 0;
	unk_0x6FB46C25CCB7E6D5(442880504, &iVar0, -1);
	if (iVar0 < iParam0 + 1)
	{
		unk_0xCDC520E5E48E63D9(442880504, iParam0 + 1, 1);
	}
}

void func_8()
{
	unk_0xA37A90C62806D848(1);
	StringCopy(&Var0, "CRACEWIN", 16);
	StringIntConCat(&Var0, Global_111638.f_25068 + 1, 16);
	func_9(&Var0, -1);
}

void func_9(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_10()
{
	return Global_111635;
}

void func_11()
{
	if (unk_0x8A22C4C08282BF26(2037466602) == 0)
	{
		func_12(&Global_111636);
		Global_111636 = -1;
		iLocal_155 = 2;
		iLocal_154 = 3;
	}
}

void func_12(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_13()
{
	unk_0xE19C2AAC820D8ED5();
	func_22();
	unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
	unk_0x92DCE5C81176D2B4("Country_Race");
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x679C321F8CAA2CFA(func_60(), 20f, 0);
	if (unk_0x8A22C4C08282BF26(2037466602) == 0)
	{
		if (unk_0x1FBF08B001C4788A("Country_Race"))
		{
			if (iLocal_155 == 2)
			{
				iLocal_155 = func_17(&Global_111636, 2, 9, 0, 0);
			}
			else if (iLocal_155 == 1)
			{
				func_15(&iLocal_157, 0);
				func_14(&iLocal_156, 0);
				start_new_script("Country_Race", 4500);
				unk_0x5E8C29AE121DF1C7("Country_Race");
				iLocal_154 = 2;
			}
			else if (iLocal_155 == 0)
			{
				func_62(0);
			}
		}
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xC55F2A0377488064(*iParam0);
			}
			unk_0x1BF8B16C32704027(*iParam0, -8f, 1);
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			unk_0xA954465BA6FDEFE2(iParam0);
		}
		else
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_15(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			if (!unk_0x405E212DDE472467(*iParam0, 0) && !unk_0x81A5359F25512A04(*iParam0))
			{
				if ((unk_0x3A0342D9BFBD378D(*iParam0) || unk_0xBDEB2DEEF1D23A18(*iParam0)) || unk_0x20906E1D6BDC7044(*iParam0))
				{
					unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
				}
				unk_0x1E9649458B15960F(*iParam0, false);
			}
			if (!unk_0x405E212DDE472467(*iParam0, 0))
			{
				unk_0x20641932E5104B25(*iParam0, true, 0);
			}
			if (unk_0xBFDE4EE64C4BF2D6(*iParam0, func_16()))
			{
				unk_0x0A94A109271BE75A(*iParam0);
			}
			if (!bParam1)
			{
				unk_0xFADC0A217229F6B5(*iParam0, 1);
			}
		}
		if (bParam1)
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam0);
		}
	}
}

var func_16()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_17(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_21(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_19(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_18(uParam0, iParam4);
		}
	}
	return 2;
}

void func_18(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, Global_41431);
}

int func_20(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_19(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	Global_22211.f_6 = 1;
}

void func_23()
{
	if (func_43())
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_60(), 5f, 5f, 5f, 1, true, 0))
		{
			unk_0x38C3A68D7861DCFD(0, 74, 1);
			unk_0x50155CDC2C5335FC(iLocal_157, 1, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 0, 150, 400);
			if (func_41())
			{
				if (func_38())
				{
					func_35();
					func_33();
					func_32();
					if (((!unk_0x991B1F0980C62628() && !func_31(1)) && !func_30(0)) && unk_0x8A22C4C08282BF26(1779901043) == 0)
					{
						if (unk_0xBFC0798A6E3417F9(2, 51))
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							unk_0xA37A90C62806D848(1);
							unk_0x679C321F8CAA2CFA(func_60(), 20f, 0);
							unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
							unk_0xE121AE1BBF90E186(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), true);
							unk_0xE19C2AAC820D8ED5();
							iLocal_154 = 1;
						}
					}
				}
				else
				{
					func_28();
					func_27();
				}
			}
			else
			{
				func_24();
				func_27();
			}
		}
		else
		{
			func_24();
			func_27();
		}
	}
	else
	{
		func_24();
		func_27();
	}
}

void func_24()
{
	Var0 = { func_26() };
	if (unk_0x01C309A4BDFCAD82("C_RACE", 3) && (func_25(&Var0) || func_25("CRACECAR")))
	{
		unk_0xA37A90C62806D848(1);
	}
}

int func_25(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

struct<4> func_26()
{
	StringCopy(&Var0, "CRACEHELP", 16);
	StringIntConCat(&Var0, Global_111638.f_25068 + 1, 16);
	return Var0;
}

void func_27()
{
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0);
	}
	iLocal_159 = 1;
}

void func_28()
{
	if (unk_0x01C309A4BDFCAD82("C_RACE", 3))
	{
		if (!func_25("CRACECAR") && unk_0x8A22C4C08282BF26(1779901043) == 0)
		{
			unk_0xA37A90C62806D848(1);
			func_29("CRACECAR", 1, 1, -1);
		}
	}
}

void func_29(char* sParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, iParam1, bParam2, iParam3);
}

int func_30(int iParam0)
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

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_32()
{
	if (unk_0x01C309A4BDFCAD82("C_RACE", 3))
	{
		Var0 = { func_26() };
		if (!func_25(&Var0) && unk_0x8A22C4C08282BF26(1779901043) == 0)
		{
			unk_0xA37A90C62806D848(1);
			func_29(&Var0, 1, 1, -1);
		}
	}
}

void func_33()
{
	if (((((unk_0xF3545351E9CBB11F() != 3 && unk_0xF3545351E9CBB11F() != 4) && !unk_0xC4E6FF7CA2A185EA()) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && func_34(iLocal_157)) && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 20f)
	{
		if (iLocal_159)
		{
			if (!unk_0x8C74DE122769E1BF())
			{
				unk_0xC0B0B9E466C0ED17(iLocal_157, 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_159 = 0;
			}
		}
	}
	else
	{
		if (unk_0x8C74DE122769E1BF())
		{
			unk_0x29D5132FBDCF2B1E(0);
		}
		iLocal_159 = 1;
	}
}

int func_34(int iParam0)
{
	if (func_61(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	if (unk_0x1C0640BA9A7327B3() > iLocal_158 + 5000)
	{
		func_36(iLocal_157, "PRERACE_CHAT", 11);
		iLocal_158 = unk_0x1C0640BA9A7327B3();
	}
}

void func_36(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_37(iParam2), 1);
}

int func_37(int iParam0)
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

int func_38()
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (func_40(unk_0x728870EB733D12A1()))
		{
			iVar0 = unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1());
			if (func_39(iVar0))
			{
				return 0;
			}
			if (((((((iVar0 == -1973172295 || iVar0 == -1536924937) || iVar0 == -1779120616) || iVar0 == 1127131465) || iVar0 == -1647941228) || iVar0 == 469291905) || iVar0 == -1683328900) || iVar0 == 1922257928)
			{
				return 0;
			}
			if (((unk_0x7D8B2A8F9EA82DB7(iVar0) || unk_0xA7082C42B8809BF2(iVar0)) || unk_0xAFB8495D36825275(iVar0)) || unk_0xC41A9202669A24C4(iVar0))
			{
				return 0;
			}
			iVar2[0] = 1171614426;
			iVar2[1] = 2053223216;
			iVar2[2] = 850991848;
			iVar2[3] = -713569950;
			iVar2[4] = 1938952078;
			iVar2[5] = 1491375716;
			iVar2[6] = 904750859;
			iVar2[7] = -1050465301;
			iVar2[8] = 569305213;
			iVar2[9] = -2137348917;
			iVar2[10] = 1783355638;
			iVar2[11] = 1747439474;
			iVar2[12] = 400514754;
			iVar2[13] = -1660661558;
			iVar2[14] = 353883353;
			iVar2[15] = 1560980623;
			iVar2[16] = 741586030;
			iVar2[17] = 837858166;
			iVar2[18] = 1033245328;
			iVar2[19] = 2046537925;
			iVar2[20] = -845979911;
			iVar2[21] = 1917016601;
			iVar2[22] = -1346687836;
			iVar2[23] = -119658072;
			iVar2[24] = -810318068;
			iVar2[25] = -1043459709;
			iVar2[26] = 788045382;
			iVar2[27] = 1560980623;
			iVar2[28] = 1951180813;
			iVar2[29] = -823509173;
			iVar2[30] = 627094268;
			iVar2[31] = -2128233223;
			iVar2[32] = -48031959;
			iVar2[33] = -1435919434;
			iVar2[34] = -233098306;
			iVar2[35] = 1886712733;
			iVar2[36] = 1147287684;
			iVar2[37] = -537896628;
			iVar2[38] = 1876516712;
			iVar2[39] = 48339065;
			iVar2[40] = 1941029835;
			iVar2[41] = -1323100960;
			iVar2[42] = -442313018;
			iVar2[43] = 1641462412;
			iVar2[44] = -2076478498;
			iVar2[45] = 516990260;
			iVar2[46] = 887537515;
			iVar2[47] = 2132890591;
			iVar2[48] = -667151410;
			iVar2[49] = 1770332643;
			iVar2[50] = -884690486;
			iVar2[51] = -2130482718;
			iVar2[52] = -1745203402;
			iVar2[53] = 444583674;
			iVar2[54] = 1518533038;
			iVar2[55] = -120287622;
			iVar2[56] = -1098802077;
			iVar2[57] = -784816453;
			iVar2[58] = 782665360;
			iVar2[59] = -1006919392;
			iVar2[60] = 2112052861;
			iVar2[61] = -947761570;
			iVar2[62] = 475220373;
			iVar2[63] = -1705304628;
			iVar2[64] = -1700801569;
			iVar2[65] = -1207431159;
			iVar2[66] = 1074326203;
			iVar2[67] = 1283517198;
			iVar2[68] = -2072933068;
			iVar2[69] = -2007026063;
			iVar2[70] = -1205689942;
			iVar2[71] = 121658888;
			iVar2[72] = -214455498;
			iVar2[73] = 1353720154;
			iVar2[74] = -1987130134;
			iVar2[75] = -907477130;
			iVar2[76] = -1743316013;
			iVar2[77] = 893081117;
			iVar2[78] = 1162065741;
			iVar2[79] = 728614474;
			iVar2[80] = -150975354;
			iVar2[81] = -613725916;
			iVar2[82] = 771711535;
			iVar2[83] = -1066334226;
			iVar2[84] = -1269889662;
			iVar2[85] = 943752001;
			iVar2[86] = -1776615689;
			iVar2[87] = -956048545;
			iVar2[88] = unk_0x12AB0310C2281427("RATLOADER2");
			iVar2[89] = unk_0x12AB0310C2281427("SLAMVAN");
			iVar2[90] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
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

int func_40(int iParam0)
{
	if (func_61(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_41()
{
	if (func_42())
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(-95143158) != 0)
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0x2720E241B5CCF780(iVar0) == 0)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_42()
{
	if (Global_30918)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_43()
{
	if ((!Global_111638.f_25068.f_9 && !Global_111638.f_25068.f_8) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), func_60()) < 84100f)
	{
		Global_111638.f_25068.f_9 = func_54();
		func_51();
		if (!Global_111638.f_25068.f_9)
		{
			if (func_61(iLocal_157) && func_61(iLocal_156))
			{
				if (!unk_0x01C309A4BDFCAD82("C_RACE", 3) && unk_0x8A22C4C08282BF26(-131607125) <= 0)
				{
					unk_0xD7992BEF7A9D109E("C_RACE", 3);
				}
				return 1;
			}
			else
			{
				func_44(0);
			}
		}
	}
	else
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), func_60()) > 90000f)
		{
			func_15(&iLocal_157, 1);
			func_14(&iLocal_156, 1);
			if (Global_111638.f_25068.f_9)
			{
				Global_111638.f_25068.f_9 = 0;
			}
			if (Global_111638.f_25068.f_8)
			{
				Global_111638.f_25068.f_8 = 0;
			}
		}
		if (Global_111638.f_25068.f_9)
		{
			func_15(&iLocal_157, 0);
			func_14(&iLocal_156, 0);
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_60(), 5f, 5f, 5f, 1, true, 0))
			{
				if (unk_0x01C309A4BDFCAD82("C_RACE", 3))
				{
					if (!func_25("CRACEDISRUPT") && unk_0x8A22C4C08282BF26(1779901043) == 0)
					{
						unk_0xA37A90C62806D848(1);
						func_29("CRACEDISRUPT", 1, 1, -1);
					}
				}
			}
			else if (unk_0x01C309A4BDFCAD82("C_RACE", 3) && func_25("CRACEDISRUPT"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		else if (unk_0x01C309A4BDFCAD82("C_RACE", 3) && func_25("CRACEDISRUPT"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	return 0;
}

void func_44(bool bParam0)
{
	if (!unk_0xC844350D5D58C99A(iLocal_156) && !unk_0xC844350D5D58C99A(iLocal_157))
	{
		unk_0x523BCC9DC80CD82F(func_50());
		unk_0x523BCC9DC80CD82F(2007797722);
		if (bParam0)
		{
			while (!unk_0xB87F6CF6E5628C67(func_50()))
			{
				wait(0);
			}
			while (!unk_0xB87F6CF6E5628C67(2007797722))
			{
				wait(0);
			}
		}
		if (unk_0xB87F6CF6E5628C67(func_50()) && unk_0xB87F6CF6E5628C67(2007797722))
		{
			iLocal_156 = unk_0x122AAB0B1D6F55AD(func_50(), func_49(), func_48(), 1, 1, 0);
			unk_0xB9FD7450C0DAB575(iLocal_156, 1084227584);
			if (Global_111638.f_25068 == 4)
			{
				unk_0x446EA2500F021666(iLocal_156, 0);
				unk_0xC002508A277213DE(iLocal_156, 44, 83);
				unk_0x58A0C35FA7CA6162(iLocal_156, 111, 111);
			}
			unk_0x71EDC33E5A423750(iLocal_156, 3);
			unk_0x9A8BCD43DBDDCDCA(iLocal_156, 0, 0);
			unk_0xF3F7BF451A720FDF(iLocal_156, true);
			unk_0x71199B01895C6202(func_50());
			iLocal_157 = unk_0x36F2404464202779(26, 2007797722, func_47(), func_46(), 1, true);
			func_45(iLocal_157);
			unk_0x4F39CC3882DD074E(iLocal_157, "A_M_Y_RACER_01_WHITE_MINI_01");
			unk_0x509B8296EBA9B408(iLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
			unk_0x71199B01895C6202(2007797722);
		}
	}
}

void func_45(int iParam0)
{
	switch (Global_111638.f_25068)
	{
		case 0:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 6, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, 0);
			break;
		
		case 1:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 7, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 6, 0, 4, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 1, 0);
			break;
		
		case 2:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 5, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 6, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 2, 0);
			break;
		
		case 3:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 6, 0, 3, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, 0);
			break;
		
		case 4:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 6, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 6, 0, 3, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, 0);
			break;
	}
}

float func_46()
{
	return 294,2507f;
}

Vector3 func_47()
{
	return 1965,248f, 3114,886f, 46,1663f;
}

float func_48()
{
	return 194,8257f;
}

Vector3 func_49()
{
	return 1964,038f, 3114,635f, 46,1319f;
}

int func_50()
{
	switch (Global_111638.f_25068)
	{
		case 0:
			return -401643538;
			break;
		
		case 1:
			return 349315417;
			break;
		
		case 2:
			return -915704871;
			break;
		
		case 3:
			return 237764926;
			break;
		
		case 4:
			return 1233534620;
			break;
	}
	return 237764926;
}

void func_51()
{
	if (func_61(iLocal_157))
	{
		if ((!unk_0xE9FDA1035CFEA94F(iLocal_157) && !unk_0x4734A6196B611C3B(iLocal_157, 0)) && !unk_0x869EFD0BC0868856(iLocal_157))
		{
			if (!func_53(iLocal_157, 993674639, 1))
			{
				unk_0x509B8296EBA9B408(iLocal_157, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
			}
			if (func_52(iLocal_156) || Global_111638.f_25068.f_9)
			{
				unk_0x2ECF845953E95D1B(iLocal_157);
				unk_0x6C3AE6E278DB3D0E(iLocal_157, unk_0x16F2683693E537C9(), 0, 16);
			}
			fLocal_160 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
		}
		else if (unk_0x869EFD0BC0868856(iLocal_157))
		{
			if (!func_53(iLocal_157, 780511057, 1))
			{
				unk_0x2ECF845953E95D1B(iLocal_157);
				unk_0x6C3AE6E278DB3D0E(iLocal_157, unk_0x16F2683693E537C9(), 0, 16);
			}
		}
	}
}

int func_52(int iParam0)
{
	iVar0 = unk_0x728870EB733D12A1();
	if (func_61(iParam0))
	{
		if ((func_61(iVar0) && fLocal_160 != 0f) && fLocal_160 >= 9f)
		{
			fVar1 = unk_0x9C66D99E63E8E24C(iVar0);
			if (unk_0x1B3D109B39CC2C89(iParam0, iVar0) && fVar1 <= (fLocal_160 * 0,5f))
			{
				return 1;
			}
		}
		if (unk_0x7F6DC62EA9922664(iParam0) + 100 < unk_0xC08489BCA49ECCA8(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (unk_0xC844350D5D58C99A(iLocal_157))
	{
		if (unk_0x437347B10A200C4B(iLocal_157, 0))
		{
			return 1;
		}
		else if (unk_0xE9FDA1035CFEA94F(iLocal_157))
		{
			return 1;
		}
		else if (unk_0x4734A6196B611C3B(iLocal_157, 0))
		{
			return 1;
		}
		else if (unk_0x869EFD0BC0868856(iLocal_157))
		{
			return 1;
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_156))
	{
		if (unk_0x437347B10A200C4B(iLocal_156, 0))
		{
			return 1;
		}
		else
		{
			if (func_55(iLocal_156, func_49(), 1) > 2f)
			{
				return 1;
			}
			if (unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_156, 0, -1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_55(int iParam0, vector3 vParam1, int iParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

void func_56()
{
	if (!func_59(0, 19))
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (func_21(9) && iLocal_154 == 0)
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (func_58(13))
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (!func_57())
	{
		Global_111638.f_25068.f_8 = 1;
		func_62(0);
	}
	if (unk_0x8A22C4C08282BF26(2037466602) == 0)
	{
		if (vdist2(func_60(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > 160000f)
		{
			func_62(0);
		}
	}
}

int func_57()
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

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92729[iParam0])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0]] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

Vector3 func_60()
{
	return 1967,042f, 3116,005f, 45,8901f;
}

int func_61(int iParam0)
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

void func_62(bool bParam0)
{
	func_12(&Global_111636);
	if (func_61(iLocal_157))
	{
		if (func_53(iLocal_157, -1098463898, 1) || func_53(iLocal_157, 993674639, 1))
		{
			unk_0x01E4BB5190DF7317(iLocal_157, 1193033728, 0);
		}
	}
	func_15(&iLocal_157, bParam0);
	func_14(&iLocal_156, bParam0);
	if (bParam0)
	{
		unk_0x536F1BE96C726C4B(func_60(), 100f, 1, 0, 0, false);
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0);
	}
	iLocal_159 = 1;
	Var0 = { func_26() };
	if (unk_0x01C309A4BDFCAD82("C_RACE", 3))
	{
		if ((func_25("CRACEDISRUPT") || func_25("CRACECAR")) || func_25(&Var0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	unk_0x5E8C29AE121DF1C7("Country_Race");
	unk_0x10FAF14A60A0DBE1();
}

