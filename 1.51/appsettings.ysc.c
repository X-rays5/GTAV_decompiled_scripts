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
	fLocal_58 = 0,82f;
	fLocal_59 = 0,42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	unk_0xB57F88F0123F4C38();
	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_45();
	if (Global_19431 == 0)
	{
		fLocal_63 = 0,75f;
		fLocal_64 = 0,8f;
	}
	else
	{
		fLocal_63 = 0,65f;
		fLocal_64 = 0,77f;
	}
	Global_8161[Global_19486][2].f_259 = Global_111638.f_14046[Global_19486].f_6;
	Global_8161[Global_19486][4].f_259 = Global_111638.f_14046[Global_19486].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_76622)
		{
			Global_8161[Global_19486][1].f_259 = func_44(1198, -1, 0);
			Global_8161[Global_19486][2].f_259 = func_44(2028, -1, 0);
			Global_8161[Global_19486][4].f_259 = func_44(2027, -1, 0);
		}
		else if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14046[Global_19486].f_11), &(Global_8161[Global_19486][1].f_144[iVar0])))
		{
			Global_8161[Global_19486][1].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_76622)
	{
		Global_111638.f_14046[3].f_10 = func_44(1197, -1, 0);
	}
	Global_8161[Global_19486][3].f_259 = Global_111638.f_14046[Global_19486].f_10;
	func_43();
	if (Global_76622)
	{
		Global_8161[3][0] = 190;
		Global_8161[3][0].f_1 = 190;
		StringCopy(&(Global_8161[3][0].f_2), "CELL_701", 16);
		Global_8161[3][0].f_6 = 19;
		Global_8161[3][0].f_280 = 1;
		StringCopy(&(Global_8161[3][0].f_7[0]), "CELL_704", 16);
		Global_8161[3][0].f_124[0] = 1;
		Global_8161[3][0].f_84[0] = 170;
		Global_8161[3][0].f_104[0] = 19;
		StringCopy(&(Global_8161[3][0].f_7[1]), "CELL_703", 16);
		Global_8161[3][0].f_124[1] = 1;
		Global_8161[3][0].f_84[1] = 175;
		Global_8161[3][0].f_104[1] = 19;
		StringCopy(&(Global_8161[3][0].f_7[2]), "CELL_801", 16);
		Global_8161[3][0].f_124[2] = 0;
		Global_8161[3][0].f_84[2] = 190;
		Global_8161[3][0].f_104[2] = 26;
		if (func_44(2090, -1, 0) == 0)
		{
			Global_8161[3][0].f_259 = 0;
		}
		else
		{
			Global_8161[3][0].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		wait(0);
		if (iLocal_50)
		{
			if (timerb() > 3500)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_56 || iLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							settimerb(0);
							Global_111638.f_14046.f_82 = 1;
							iLocal_57 = 1;
						}
						else if (timerb() > 7500)
						{
							iLocal_57 = 0;
							unk_0xA37A90C62806D848(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_19454, 0))
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
							}
							iLocal_53 = 0;
							func_9();
							Global_19464 = 1;
							func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_19486.f_1 > 3)
							{
								Global_19486.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
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
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
	}
	if (bLocal_56)
	{
		unk_0xA37A90C62806D848(1);
	}
	if (Global_111638.f_14046.f_83 == 0 || Global_111638.f_14046.f_82 == 0)
	{
		func_3();
	}
	unk_0x21387C9EECC2B220(0);
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	if (Global_8161[0][0].f_259 == 2)
	{
		Global_8161[0][0].f_259 = 0;
	}
	if (Global_8161[1][0].f_259 == 2)
	{
		Global_8161[1][0].f_259 = 0;
	}
	if (Global_8161[2][0].f_259 == 2)
	{
		Global_8161[2][0].f_259 = 0;
	}
	unk_0x0674E58A79778E99(&Global_7356, 25);
	unk_0x5D96D8530B3D0904(&Global_7357, 11);
}

int func_4(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_41431);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_45();
	Global_8161[Global_19486][0].f_124[2] = 1;
}

int func_8()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
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

void func_11()
{
	iLocal_54 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iLocal_54 - iLocal_55);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x5E858A00EAFA5B24(0, 100, 100);
	}
}

void func_12()
{
	if (iLocal_43 == 1)
	{
		if (iLocal_52)
		{
			iLocal_54 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_54 - iLocal_55) > 1000)
			{
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (unk_0x91E3F625EF57450D(2))
		{
			if (unk_0xBFC0798A6E3417F9(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (unk_0xBFC0798A6E3417F9(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_19462, 0) || func_10(2, Global_19463, 0)) || iLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			settimerb(0);
			iLocal_50 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_41))
			{
				wait(0);
			}
			iLocal_47 = iLocal_18[unk_0xA52833FE33F41C53(uLocal_41)];
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
				wait(100);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (!unk_0xDCB451BA868A1028(unk_0x16F2683693E537C9()))
					{
						if (unk_0x7F8A39872A07D2CE(&(Global_8161[Global_19486][1].f_144[iLocal_47]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x81B32D11FDBFF60F(&(Global_8161[Global_19486][1].f_144[iLocal_47]), unk_0x16F2683693E537C9(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_41))
			{
				wait(0);
			}
			iLocal_46 = unk_0xA52833FE33F41C53(uLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			Global_8161[Global_19486][iLocal_43].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				iVar0 = Global_8161[Global_19486][iLocal_43].f_259;
				Global_111638.f_14046[Global_19486].f_6 = Global_8161[Global_19486][2].f_260[iVar0];
				func_46(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_76622)
				{
					Global_4270041 = Global_8161[3][2].f_259;
					func_20(2028, Global_8161[3][2].f_259, -1, 1, 0);
					func_46(Global_19467, "SET_THEME", to_float(Global_4270041), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(23), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_45]]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_46]]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 4)
			{
				Global_111638.f_14046[Global_19486].f_9 = Global_8161[Global_19486][iLocal_43].f_259;
				if (Global_76622)
				{
					Global_4270042 = Global_8161[3][4].f_259;
					func_20(2027, Global_8161[3][4].f_259, -1, 1, 0);
					if (Global_4270042 == 0)
					{
						Var17 = { func_17(unk_0xD803B885F5E47A62()) };
						iVar30 = 0;
						if (unk_0x4DEB7B48DD0AABA4(0) == 0)
						{
						}
						if ((unk_0xF2EC2A39FF9E838D(&Var17) && unk_0x4DEB7B48DD0AABA4(0)) && Global_4270045 == 0)
						{
							settimera(0);
							while (!unk_0x205FB5BBF81D8900(&Var17, &uVar1) && timera() < 3000)
							{
								wait(0);
								if (timera() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x7ACC3006A87F8B39("CELL_2000");
								unk_0xD06AC7C87A34A6AD(&uVar1);
								unk_0x779B34565F4D71B1();
								unk_0x7E60D21B163E9D56();
							}
						}
						else
						{
							func_46(Global_19467, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_19467, "SET_BACKGROUND_IMAGE", to_float(Global_4270042), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_19467, "SET_BACKGROUND_IMAGE", to_float(Global_111638.f_14046[Global_19486].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(23), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_45]]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_46]]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 1)
			{
				Global_111638.f_14046[Global_19486].f_11 = { Global_8161[Global_19486][1].f_144[Global_8161[Global_19486][1].f_259] };
				if (Global_76622)
				{
					func_20(1198, Global_8161[3][1].f_259, -1, 1, 0);
				}
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(18), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_45]]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_46]]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 3)
			{
				Global_111638.f_14046[Global_19486].f_10 = Global_8161[Global_19486][iLocal_43].f_259;
				if (Global_76622)
				{
					func_20(1197, Global_111638.f_14046[3].f_10, -1, 1, 0);
				}
				if (Global_111638.f_14046[Global_19486].f_10 == 1)
				{
					iLocal_53 = 1;
					iLocal_55 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_76622 == 1)
				{
					Global_8161[3][iLocal_43].f_259 = iLocal_18[iLocal_46];
					func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_45), to_float(19), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_45]]), 0, 0, 0, 0);
					func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iLocal_46), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iLocal_18[iLocal_46]]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_46(Global_19467, "DISPLAY_VIEW", 22f, to_float(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2090, Global_8161[3][iLocal_43].f_259, -1, 1, 0);
				}
				else
				{
					Global_8161[0][iLocal_43].f_259 = iLocal_18[iLocal_46];
					Global_8161[1][iLocal_43].f_259 = iLocal_18[iLocal_46];
					Global_8161[2][iLocal_43].f_259 = iLocal_18[iLocal_46];
					if (Global_8161[Global_19486][0].f_259 == 2)
					{
						if (Global_41431 == 15)
						{
							if (Global_111638.f_14046.f_82 == 0)
							{
								unk_0xA37A90C62806D848(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
							else
							{
								func_46(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x5D96D8530B3D0904(&Global_7356, 25);
								unk_0x5D96D8530B3D0904(&Global_7357, 11);
								if (Global_111638.f_14046.f_83 == 0)
								{
									unk_0xA37A90C62806D848(1);
									func_15("CELL_7051", -1);
									Global_111638.f_14046.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x0674E58A79778E99(&Global_7356, 25);
						unk_0x5D96D8530B3D0904(&Global_7357, 11);
					}
				}
			}
			func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486][iLocal_43].f_7[Global_8161[Global_19486][iLocal_43].f_259]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_14(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_14(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, 1, -1);
}

struct<13> func_17(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_14(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_19()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()
{
	return Global_1312745;
}

void func_23()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_25()
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

void func_26()
{
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_41))
			{
				wait(0);
			}
			iLocal_44 = unk_0xA52833FE33F41C53(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_76622 == 0)
					{
						if (Global_41431 == 15)
						{
							if (Global_111638.f_14046.f_82 == 0)
							{
								unk_0xA37A90C62806D848(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_27()
{
	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_76622)
	{
		StringCopy(&(Global_8161[3][4].f_7[0]), "CELL_CREWEMB", 16);
		Var21 = { func_17(unk_0xD803B885F5E47A62()) };
		if (!unk_0xF2EC2A39FF9E838D(&Var21))
		{
			StringCopy(&(Global_8161[3][4].f_7[0]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_8161[Global_19486][iLocal_43].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_8161[Global_19486][iLocal_43].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_8161[Global_19486][iLocal_43].f_84[iVar34] < Global_8161[Global_19486][iLocal_43].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(Global_8161[Global_19486][iLocal_43].f_104[iVar35]), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iVar35]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (unk_0x7F8A39872A07D2CE(&(Global_8161[Global_19486][iLocal_43].f_7[Global_8161[Global_19486][iLocal_43].f_259]), &(Global_8161[Global_19486][iLocal_43].f_7[iVar35])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iVar35]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_76622 == 1)
			{
				func_18(Global_19467, "SET_DATA_SLOT", to_float(22), to_float(iVar20), to_float(48), -1f, -1f, &(Global_8161[Global_19486][iLocal_43].f_7[iVar35]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_8161[Global_19486][iLocal_43].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486][iLocal_43].f_7[Global_8161[Global_19486][iLocal_43].f_259]), 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
}

void func_28()
{
	if (iLocal_62)
	{
		if (timera() > 50)
		{
			iLocal_62 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0)
	{
		if (func_10(2, Global_19462, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
			iLocal_62 = 1;
			settimera(0);
		}
		if (func_10(2, Global_19463, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			settimera(0);
		}
	}
}

void func_29()
{
	func_46(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_30();
}

void func_30()
{
	if (func_25())
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

void func_31()
{
	func_46(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_32();
}

void func_32()
{
	if (func_25())
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

void func_33()
{
	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_8161[Global_19486][iVar23] = 5000;
		if (unk_0x0A4C9A3D51EAE31F(2) == 0)
		{
			Global_8161[Global_19486][3].f_280 = 0;
		}
		else
		{
			Global_8161[Global_19486][3].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_8161[Global_19486][iVar22].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_8161[Global_19486][iVar22] < Global_8161[Global_19486][iVar23])
					{
						if (Global_76622)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_8161[Global_19486][iVar23].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_8161[Global_19486][iVar23].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_8161[Global_19486][iVar23].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_42(iVar22, iVar23);
							func_18(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(iVar21), to_float(iLocal_49), -1f, -1f, &(Global_8161[Global_19486][iVar23].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_8161[Global_19486][iVar21].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 13f, to_float(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
}

int func_34()
{
	if (Global_76622)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_35();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111638.f_14046[Global_19486].f_7;
}

var func_35()
{
	func_36();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_36()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_40(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_39(unk_0x16F2683693E537C9());
			if (func_38(iVar0) && (!func_37(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_38(Global_111638.f_2358.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_1798[iParam0];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_76622)
			{
				iLocal_49 = 19;
			}
			else if (Global_8161[Global_19486][0].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		
		case 3:
			if (Global_8161[Global_19486][3].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		
		default:
			iLocal_49 = Global_8161[Global_19486][iParam1].f_6;
			break;
	}
}

void func_43()
{
	if (Global_41431 != 15)
	{
		func_45();
		Global_8161[Global_19486][0].f_124[2] = 0;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_21(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_45()
{
	if (func_37(14))
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
		Global_19486 = func_35();
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

