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
	if (unk_0x8A22C4C08282BF26(-754107665) == 0)
	{
		func_53();
	}
	func_46();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486].f_18 = 0;
	Global_19663 = 0;
	func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_42();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_65 = unk_0x1C0640BA9A7327B3();
	Global_19490 = 1;
	while (true)
	{
		wait(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_37();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					func_53();
				}
			}
			else if (func_3(2, Global_19454, 0) || unk_0xEAE0D21A50E6C7F4(Global_7357, 12))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					unk_0x0674E58A79778E99(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (unk_0x8A22C4C08282BF26(-754107665) == 0)
					{
						func_53();
					}
					func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_42();
					if (Global_111638.f_14136[iLocal_58].f_29 > 0)
					{
						if (Global_111638.f_14136[iLocal_58].f_31 == 1)
						{
							Global_111638.f_14136[iLocal_58].f_29 = 4;
							Global_111638.f_14136[iLocal_58].f_24 = 1;
						}
						else
						{
							Global_111638.f_14136[iLocal_58].f_29 = 4;
							Global_111638.f_14136[iLocal_58].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x8A22C4C08282BF26(-754107665) == 0)
		{
			func_53();
		}
		if (func_1())
		{
			func_53();
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
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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

int func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_111638.f_14136[iLocal_58].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (unk_0xBFC0798A6E3417F9(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_26();
				if (Global_111638.f_14136[iLocal_58].f_27 == 1)
				{
					Global_111638.f_14136[iLocal_58].f_99[0] = 0;
					Global_111638.f_14136[iLocal_58].f_99[1] = 0;
					Global_111638.f_14136[iLocal_58].f_99[2] = 0;
				}
				else
				{
					Global_111638.f_14136[iLocal_58].f_99[Global_19486] = 0;
				}
				if (func_25(iLocal_58))
				{
				}
				else
				{
					Global_111638.f_14136[iLocal_58].f_24 = 0;
					Global_111638.f_14136[iLocal_58].f_28 = 0;
				}
				unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iLocal_58].f_16);
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_42();
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
					Global_21871 = 0;
				}
			}
		}
	}
	else if (Global_19464 == 0)
	{
		if (unk_0x06F8112AA79C53D9(2, Global_19458))
		{
			if (iLocal_60 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, unk_0x19C9F30A7697B43C(&Global_21846), 64);
					Global_73938 = 7;
					unk_0x5D96D8530B3D0904(&Global_7357, 10);
					Global_19486.f_1 = 6;
				}
				func_53();
			}
		}
	}
	if (Global_111638.f_14136[iLocal_58].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_22();
				Global_19464 = 1;
				Global_111638.f_14136[iLocal_58].f_29 = 2;
				Global_111638.f_14136[iLocal_58].f_24 = 1;
				Global_111638.f_14136[iLocal_58].f_31 = 0;
				unk_0x0674E58A79778E99(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_111638.f_14136[iLocal_58].f_29 > 0)
			{
				func_22();
				Global_111638.f_14136[iLocal_58].f_29 = 3;
				Global_111638.f_14136[iLocal_58].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
			else if (Global_111638.f_14136[iLocal_58].f_30 == 1)
			{
				func_22();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_19484 = start_new_script("appContacts", 4000);
				unk_0x5E8C29AE121DF1C7("appContacts");
				Global_6671 = Global_111638.f_14136[iLocal_58].f_17;
				if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_211", &(Global_1798[Global_6671].f_3), 0);
				}
				func_7();
				func_53();
			}
		}
	}
}

void func_7()
{
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!unk_0x83D8570832F172A7(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_7961);
			if (Global_7961 == 1)
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_12();
				unk_0x0674E58A79778E99(&Global_7358, 9);
				func_45(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_11();
				func_45(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_45(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_17(Global_6671, Global_19486) == 0)
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &cVar0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x83D8570832F172A7(Global_19467))
	{
		func_9();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_76622)
	{
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_7356, 17);
	}
}

void func_10(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_11()
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

void func_12()
{
	if (Global_76622)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
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
		if (func_15(14))
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
								func_10(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_10(&(Global_7363[iVar1]));
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
								func_10(&(Global_7363[iVar1]));
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
								func_10(&(Global_7363[iVar1]));
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
								func_10(&(Global_7363[iVar1]));
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
								func_10(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_18(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		wait(0);
	}
}

void func_19()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_20() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && iVar1 == 0)
		{
			iVar2 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0);
			if (Global_76622)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
							}
							else
							{
								if (Global_76622)
								{
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 244, false);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 243, false);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 242, false);
								}
								unk_0x5D96D8530B3D0904(&Global_7356, 11);
								unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_20()
{
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x00295B14470935CE())
			{
				if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5EB102898326C705(unk_0x16F2683693E537C9()) || unk_0xBADF5264209B7544(unk_0x16F2683693E537C9())) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x00295B14470935CE()))
	{
		iVar2 = 1;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if ((((((((unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar3)) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar3))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar3))) || unk_0x134B62B726CEC8E6(iVar3) == -1030275036) || unk_0x134B62B726CEC8E6(iVar3) == -616331036) || unk_0x134B62B726CEC8E6(iVar3) == 782665360) || unk_0x134B62B726CEC8E6(iVar3) == 771711535) || unk_0x134B62B726CEC8E6(iVar3) == -1066334226) || unk_0x134B62B726CEC8E6(iVar3) == 1070967343)
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (unk_0x8A22C4C08282BF26(361769742) > 0 || Global_111638.f_14046.f_89)
		{
			if (unk_0x8A22C4C08282BF26(-622120100) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_24()
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

int func_25(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_15(14))
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
		Global_19486 = func_27();
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

var func_27()
{
	func_28();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_28()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_31(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_30(unk_0x16F2683693E537C9());
			if (func_29(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1798[iParam0];
}

void func_33()
{
	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_111638.f_14046[Global_19486].f_17 == 1) || Global_21865 == 1)
		{
			if (Global_111638.f_14046[Global_19486].f_17 == 0 && Global_21865 == 0)
			{
				func_22();
			}
			Global_19464 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_111638.f_14136[iLocal_58].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x0674E58A79778E99(&Global_7356, 17);
					Global_19486.f_1 = 8;
				}
				if (Global_111638.f_14046[Global_19486].f_17 == 1 || Global_21865 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_111638.f_14046[Global_19486].f_17 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_62 = 0;
					unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(uLocal_67) && iLocal_62 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = unk_0xA52833FE33F41C53(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_111638.f_14136[iLocal_58].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_111638.f_14136[iLocal_58] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xEF07223F00EBE9C9(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_60 = 1;
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
					Global_111638.f_14136[iLocal_58].f_26 = 1;
					Global_111638.f_14136[iLocal_58].f_24 = 2;
				}
				if (Global_111638.f_14136[iLocal_58].f_26 == 0)
				{
					Global_111638.f_14136[iLocal_58].f_24 = 1;
				}
				func_36();
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(7);
				unk_0x3CAEA85DA607305E(0);
				if (Global_111638.f_14136[iLocal_58].f_17 == 145)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_50));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iLocal_58].f_17].f_3));
				}
				switch (Global_111638.f_14136[iLocal_58].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iLocal_58]));
						break;
					
					case 1:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58]));
						unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_33));
						if (Global_111638.f_14136[iLocal_58].f_66 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_67), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58].f_66 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_67), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_83), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58].f_67)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58].f_83)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58].f_83));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_83));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 2:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58]));
						unk_0x6D99DF8263D35CE5(Global_111638.f_14136[iLocal_58].f_49);
						unk_0x779B34565F4D71B1();
						break;
					
					case 3:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58]));
						unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_33));
						unk_0x6D99DF8263D35CE5(Global_111638.f_14136[iLocal_58].f_49);
						if (Global_111638.f_14136[iLocal_58].f_66 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_67), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58].f_66 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_67), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58].f_83), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58].f_67)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58].f_83)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58].f_83));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58].f_83));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 4:
						func_35(iLocal_58);
						break;
					
					case 5:
						func_35(iLocal_58);
						break;
					
					case 6:
						func_35(iLocal_58);
						break;
					
					case 7:
						func_35(iLocal_58);
						break;
					
					case 8:
						func_35(iLocal_58);
						break;
					
					case 9:
						func_35(iLocal_58);
						break;
					
					case 10:
						func_35(iLocal_58);
						break;
					
					case 11:
						func_35(iLocal_58);
						break;
				}
				if (Global_21874[iLocal_58] == 0)
				{
					if (Global_111638.f_14136[iLocal_58].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_1798[Global_111638.f_14136[iLocal_58].f_17].f_7));
					}
				}
				else
				{
					if (unk_0x0E66AEE1894BB411(Global_21874[iLocal_58]))
					{
						if (unk_0x0A53A8B5FA0B3F4D(Global_21874[iLocal_58]))
						{
							sVar16 = unk_0x5283D58F79627134(Global_21874[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(sVar16);
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
				Global_21871 = 1;
				func_45(Global_19467, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iLocal_58].f_16);
				if (Global_111638.f_14136[iLocal_58].f_29 > 0)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_111638.f_14136[iLocal_58].f_30 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58].f_29 > 0)
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58].f_24 == 2)
				{
					if (Global_111638.f_14136[iLocal_58].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x5D96D8530B3D0904(&Global_7356, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0674E58A79778E99(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_111638.f_14046[Global_19486].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_111638.f_14046[Global_19486].f_17 == 1 || Global_21865 == 1)
				{
					if (Global_21865)
					{
					}
					iVar17 = 1;
				}
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_111638.f_14046[Global_19486].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_19486.f_1 = 3;
				}
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
				unk_0x558EC149EB2BC0A2(0, Global_19458);
				if (func_3(2, Global_19458, 0))
				{
					Global_19464 = 1;
					Global_2547059 = 1;
				}
			}
		}
	}
}

void func_34(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_10(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_10(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_10(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_10(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_10(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_35(int iParam0)
{
	iVar0 = 0;
	switch (Global_111638.f_14136[iParam0].f_49)
	{
		case 1:
			unk_0x7ACC3006A87F8B39("CELL_CL01");
			break;
		
		case 2:
			unk_0x7ACC3006A87F8B39("CELL_CL02");
			break;
		
		case 3:
			unk_0x7ACC3006A87F8B39("CELL_CL03");
			break;
		
		case 4:
			unk_0x7ACC3006A87F8B39("CELL_CL04");
			break;
		
		case 5:
			unk_0x7ACC3006A87F8B39("CELL_CL05");
			break;
		
		case 6:
			unk_0x7ACC3006A87F8B39("CELL_CL06");
			break;
		
		case 7:
			unk_0x7ACC3006A87F8B39("CELL_CL07");
			break;
		
		case 8:
			unk_0x7ACC3006A87F8B39("CELL_CL08");
			break;
		
		case 9:
			unk_0x7ACC3006A87F8B39("CELL_CL09");
			break;
	}
	unk_0x6B012227B3921E18(&(Global_111638.f_14136[iParam0]));
	while (iVar0 < Global_111638.f_14136[iParam0].f_49)
	{
		switch (Global_111638.f_14136[iParam0].f_32)
		{
			case 4:
				unk_0x6B012227B3921E18(&(Global_2537071.f_1662[iVar0]));
				break;
			
			case 5:
				unk_0x6B012227B3921E18(&(Global_1662018[iVar0]));
				break;
			
			case 6:
				unk_0x6B012227B3921E18(&(Global_1662059[iVar0]));
				break;
			
			case 7:
				unk_0x6B012227B3921E18(&(Global_1662080[iVar0]));
				break;
			
			case 8:
				unk_0x6B012227B3921E18(&(Global_1662097[iVar0]));
				break;
			
			case 9:
				unk_0x6B012227B3921E18(&(Global_1662110[iVar0]));
				break;
			
			case 10:
				unk_0x6B012227B3921E18(&(Global_1662123[iVar0]));
				break;
			
			case 11:
				unk_0x6B012227B3921E18(&(Global_1662136[iVar0]));
				break;
		}
		iVar0++;
	}
	unk_0x779B34565F4D71B1();
}

void func_36()
{
	if (iLocal_2219)
	{
		unk_0xF5A41F3D3B38EFE3(&uLocal_68);
	}
	iLocal_2219 = 0;
	if (Global_111638.f_14136[iLocal_58].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58]), &(Local_84[iVar0])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0]}, 16);
				}
				iLocal_2219 = 1;
				unk_0x0D3BE1DE0262A012(&uLocal_68, 0);
				while (!unk_0x27117E2CDD4D67C3(&uLocal_68))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (iLocal_61)
	{
		if (timera() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_19462, 0) || unk_0xBFC0798A6E3417F9(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_40();
			iLocal_61 = 1;
			settimera(0);
		}
		if (func_3(2, Global_19463, 0) || unk_0xBFC0798A6E3417F9(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_38();
			iLocal_61 = 1;
			settimera(0);
		}
	}
}

void func_38()
{
	func_45(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_39();
}

void func_39()
{
	if (func_24())
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

void func_40()
{
	func_45(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_41();
}

void func_41()
{
	if (func_24())
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

void func_42()
{
	if (Global_111638.f_14046[Global_19486].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_45(Global_19467, "DISPLAY_VIEW", 6f, to_float(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_19474)
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_43()
{
	iLocal_55 = 0;
	func_26();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (unk_0x8A22C4C08282BF26(-754107665) == 0)
		{
			func_53();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_111638.f_14136[iVar38].f_18 = -1;
		Global_111638.f_14136[iVar38].f_18.f_1 = 0;
		Global_111638.f_14136[iVar38].f_18.f_2 = 0;
		Global_111638.f_14136[iVar38].f_18.f_3 = 0;
		Global_111638.f_14136[iVar38].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0x8A22C4C08282BF26(-754107665) == 0)
			{
				func_53();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_111638.f_14136[iVar37].f_24 != 0)
				{
					if (Global_111638.f_14136[iVar37].f_99[Global_19486] == 1)
					{
						if (func_44(Global_111638.f_14136[iVar37].f_18, Global_111638.f_14136[iVar38].f_18))
						{
							iVar38 = iVar37;
							if (Global_111638.f_14136[iVar38].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_111638.f_14136[iVar38].f_24 != 0)
		{
			if (Global_111638.f_14136[iVar38].f_99[Global_19486] == 1)
			{
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(6);
				unk_0x3CAEA85DA607305E(iVar36);
				unk_0x3CAEA85DA607305E(Global_111638.f_14136[iVar38].f_18.f_2);
				unk_0x3CAEA85DA607305E(Global_111638.f_14136[iVar38].f_18.f_1);
				unk_0x3CAEA85DA607305E(iLocal_59);
				if (Global_111638.f_14136[iVar38].f_17 == 145)
				{
					unk_0x7ACC3006A87F8B39("CELL_CONDFNH");
					unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_50));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iVar38].f_17].f_3));
				}
				switch (Global_111638.f_14136[iVar38].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iVar38]));
						break;
					
					case 1:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38]));
						unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_33));
						if (Global_111638.f_14136[iVar38].f_66 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_67), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_67));
						}
						if ((Global_111638.f_14136[iVar38].f_66 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_67), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_83), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38].f_67)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38].f_67));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_67));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38].f_83)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38].f_83));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_83));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 2:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38]));
						unk_0x6D99DF8263D35CE5(Global_111638.f_14136[iVar38].f_49);
						unk_0x779B34565F4D71B1();
						break;
					
					case 3:
						unk_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38]));
						unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_33));
						unk_0x6D99DF8263D35CE5(Global_111638.f_14136[iVar38].f_49);
						if (Global_111638.f_14136[iVar38].f_66 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_67), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_67));
						}
						if ((Global_111638.f_14136[iVar38].f_66 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_67), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38].f_83), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38].f_67)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38].f_67));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_67));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38].f_83)))
							{
								unk_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38].f_83));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38].f_83));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 4:
						func_35(iVar38);
						break;
					
					case 5:
						func_35(iVar38);
						break;
					
					case 6:
						func_35(iVar38);
						break;
					
					case 7:
						func_35(iVar38);
						break;
					
					case 8:
						func_35(iVar38);
						break;
					
					case 9:
						func_35(iVar38);
						break;
					
					case 10:
						func_35(iVar38);
						break;
					
					case 11:
						func_35(iVar38);
						break;
				}
				unk_0x7E60D21B163E9D56();
			}
		}
		if (Global_111638.f_14136[iVar36].f_24 != 0)
		{
			if (Global_111638.f_14136[iVar36].f_99[Global_19486] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_46()
{
	StringCopy(&(Local_84[0]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18]), "executiveproducer", 32);
	StringCopy(&(Local_84[19]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159]), "BAT_carpark_3", 24);
	StringCopy(&(Local_84[160]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1075[160]), "ib_aircon", 24);
	if (func_52(unk_0xD803B885F5E47A62()) == 19)
	{
		StringCopy(&(Local_84[44]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74]), "SCLUB_3", 24);
	}
	else if (func_51(unk_0xD803B885F5E47A62()) == 14)
	{
		StringCopy(&(Local_84[44]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_47(unk_0xD803B885F5E47A62()) == 30)
	{
		StringCopy(&(Local_84[44]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1075[44]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_84[45]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1075[45]), "heist3_prep_maid02", 24);
	}
	else if (func_47(unk_0xD803B885F5E47A62()) == 32)
	{
		StringCopy(&(Local_84[44]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1075[44]), "heist3_cashier1", 24);
		StringCopy(&(Local_84[45]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1075[45]), "heist3_cashier2", 24);
		StringCopy(&(Local_84[46]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1075[46]), "heist3_cashier3", 24);
		StringCopy(&(Local_84[47]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1075[47]), "heist3_cashier4", 24);
	}
}

int func_47(int iParam0)
{
	if (func_50(iParam0) == 158)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_48(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_49(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (func_50(iParam0) == 243)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_50(iParam0) == 237 || func_50(iParam0) == 250)
	{
		return func_48(iParam0);
	}
	return -1;
}

void func_53()
{
	if (unk_0x8A22C4C08282BF26(-754107665) == 0)
	{
		func_54(0);
	}
	if (iLocal_2219)
	{
		unk_0xF5A41F3D3B38EFE3(&uLocal_68);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_55())
	{
		Global_19486.f_1 = 3;
	}
}

int func_55()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_59()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

