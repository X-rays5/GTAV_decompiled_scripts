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
	fLocal_47 = ((0,05f + 0,275f) - 0,01f);
	StringCopy(&Local_74, "CELL_206", 16);
	StringCopy(&Local_78, "CELL_214", 16);
	StringCopy(&Local_82, "CELL_243", 16);
	StringCopy(&Local_86, "CELL_244", 16);
	StringCopy(&Local_90, "CELL_265", 16);
	StringCopy(&Local_94, "CELL_300", 16);
	unk_0xB57F88F0123F4C38();
	func_97(&uLocal_101);
	iLocal_98 = 0;
	func_95();
	func_94(Global_19467, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_84(0);
	while (true)
	{
		wait(0);
		func_83();
		func_82();
		if (!Global_19486.f_1 == 9 && Global_19486.f_1 > 3)
		{
			switch (iLocal_73)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_19486.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
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
	Global_1626881.f_6 = 0;
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	Global_1626881.f_6 = 1;
	if (iLocal_100)
	{
		if (unk_0xB9132A06AE472728(2, Global_19455))
		{
			iLocal_100 = 0;
		}
		return;
	}
	if (unk_0xB9132A06AE472728(2, 201))
	{
		iLocal_73 = 1;
		iVar0 = func_29(iLocal_98, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0xB9132A06AE472728(2, 202))
	{
		iLocal_73 = 1;
		return;
	}
	_set_warning_message_2("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)
{
	iVar0 = Global_1626881.f_7[iParam0].f_2;
	if (Global_1626881.f_7[iParam0].f_1 == 1 && iLocal_99 == iVar0)
	{
		func_26(iVar0, Global_1626881.f_7[iParam0].f_6);
		func_13(iParam0);
	}
	Global_1626881.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19486.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_12()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_13(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_1626881.f_7[iParam0].f_1 == 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1626881.f_7[iParam0].f_5, 0))
			{
				func_25();
				if (Global_1626881.f_7[iParam0].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1626881.f_4 = (Global_1626881.f_4 - 1);
					if (Global_1626881.f_4 < 0)
					{
						Global_1626881.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_22), Global_1626881.f_7[iParam0].f_2);
			unk_0xD59AE843FA2C6B40(Global_1626881.f_7[iParam0].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1626881.f_7[iVar0] = { Global_1626881.f_7[iVar0 + 1] };
			iVar0++;
		}
		Global_1626881.f_7[9].f_1 = 0;
		Global_1626881.f_7[9].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0x5D96D8530B3D0904(&(Global_1626881.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1626881.f_3, iParam0);
}

void func_17()
{
	Global_1626881 = (Global_1626881 - 1);
}

void func_18()
{
	Global_21868 = (Global_21868 - 1);
	if (Global_21868 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_94(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_94(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
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
		if (func_23(14))
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
								func_22(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_22(&(Global_7363[iVar1]));
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
								func_22(&(Global_7363[iVar1]));
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
								func_22(&(Global_7363[iVar1]));
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
								func_22(&(Global_7363[iVar1]));
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
								func_22(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
		func_22(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_22(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_22(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_21868 != 0)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam0))
		{
		}
		Global_21868 = 0;
	}
}

void func_25()
{
	Global_1626881.f_1 = (Global_1626881.f_1 - 1);
	if (Global_1626881.f_1 < 0)
	{
		Global_1626881.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_26 == func_14())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_26 = iParam0;
			Global_2537071.f_5124.f_221 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	Var0 = -1185346884;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1626881;
}

void func_31()
{
	iVar0 = func_29(iLocal_98, 0);
	if (iLocal_98 == -1)
	{
		func_84(1);
		return;
	}
	iVar1 = Global_1626881.f_7[iVar0].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_99 != iVar1)
	{
		func_84(1);
		return;
	}
	func_41(&uLocal_101);
	if (func_39(&uLocal_101))
	{
		func_84(1);
		return;
	}
	if (func_38(&uLocal_101))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&uLocal_101))
	{
		if (func_33())
		{
			iLocal_100 = 1;
			iLocal_73 = 3;
		}
		else if (Global_1626881.f_7[iVar0] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1626881.f_7[iVar0] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_1573902, 15);
	func_13(iParam0);
	Global_1626881.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1312418;
}

int func_34(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*uParam0, 0))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (!unk_0xBFC0798A6E3417F9(2, Global_19455))
	{
		return 0;
	}
	func_35();
	Global_19464 = 1;
	return 1;
}

void func_35()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_37()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(uVar0);
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

int func_38(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*uParam0, 1))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (!unk_0xBFC0798A6E3417F9(2, Global_19458))
	{
		return 0;
	}
	func_35();
	Global_19464 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*uParam0, 2))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (!unk_0xBFC0798A6E3417F9(2, Global_19456))
	{
		return 0;
	}
	func_40();
	Global_19464 = 1;
	return 1;
}

void func_40()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_41(var uParam0)
{
	if (unk_0x1C0640BA9A7327B3() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (unk_0xBFC0798A6E3417F9(2, Global_19462) || unk_0xBFC0798A6E3417F9(2, 181))
	{
		func_44();
		uParam0->f_1 = unk_0x1C0640BA9A7327B3() + 50;
	}
	if (unk_0xBFC0798A6E3417F9(2, Global_19463) || unk_0xBFC0798A6E3417F9(2, 180))
	{
		func_42();
		uParam0->f_1 = unk_0x1C0640BA9A7327B3() + 50;
	}
}

void func_42()
{
	func_94(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_43();
}

void func_43()
{
	if (func_37())
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

void func_44()
{
	func_94(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_45();
}

void func_45()
{
	if (func_37())
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

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(uParam0))
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

void func_47()
{
	if (func_30() > 1)
	{
		func_41(&uLocal_101);
	}
	if (func_34(&uLocal_101))
	{
		unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x7A8BB56B212464AC();
		while (!unk_0xC95D7AEEDEF4946B(uVar0))
		{
			wait(0);
		}
		iLocal_98 = unk_0xA52833FE33F41C53(uVar0);
		iVar1 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar1].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_19486.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_101))
	{
		unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x7A8BB56B212464AC();
		while (!unk_0xC95D7AEEDEF4946B(uVar2))
		{
			wait(0);
		}
		iLocal_98 = unk_0xA52833FE33F41C53(uVar2);
		iVar3 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar3].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_84(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_84(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_1626881.f_3), iParam0);
	}
}

void func_49()
{
	if (Global_19486.f_1 != 8)
	{
		Global_19486.f_1 = 8;
	}
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_98, 0);
	iLocal_99 = Global_1626881.f_7[iVar3].f_2;
	iVar4 = Global_1626881.f_7[iVar3].f_2;
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(26);
	unk_0x3CAEA85DA607305E(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_81(iVar4) };
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0x3A820E495A7BA3E5(func_75(iVar4));
		unk_0xD06AC7C87A34A6AD(&Var5);
		unk_0x779B34565F4D71B1();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1626881.f_7[iVar3] == 0)
	{
		if (Global_262145.f_14960)
		{
			bVar25 = func_74(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1628237[iVar4].f_11.f_11[iVar26] != func_14())
					{
						if (func_46(Global_1628237[iVar4].f_11.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1628237[iVar4].f_11.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x7ACC3006A87F8B39(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_81(uVar21[iVar26]) };
					unk_0xD06AC7C87A34A6AD(&Var32);
					iVar26++;
				}
				unk_0x779B34565F4D71B1();
			}
		}
		else
		{
			if (Global_1626881.f_88[iVar3].f_1)
			{
				if (Global_1626881.f_88[iVar3].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1626881.f_88[iVar3].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			unk_0x7ACC3006A87F8B39(&cVar48);
			unk_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3]);
			unk_0x6D99DF8263D35CE5(func_73(iVar4));
			unk_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3].f_3);
			unk_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3].f_4);
			unk_0x779B34565F4D71B1();
		}
	}
	else if (Global_1626881.f_7[iVar3] == 1)
	{
		unk_0x7ACC3006A87F8B39("BA_APP_BODY_DM2");
		unk_0x3A820E495A7BA3E5(func_75(Global_1626881.f_7[iVar3].f_2));
		unk_0xD06AC7C87A34A6AD(func_61(Global_1626881.f_7[iVar3].f_2));
		unk_0x779B34565F4D71B1();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1626881.f_7[iVar3].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x5283D58F79627134(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x024BC5F58A72410C(sVar1);
	}
	else
	{
		func_22(&Local_94);
	}
	unk_0x7E60D21B163E9D56();
	func_94(Global_19467, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_90);
	func_50(13, &Local_82, 12, &Local_86, 4, &Local_74, &uLocal_101);
	iLocal_73 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_51(2, iParam0, sParam1, 0, uParam6, -1);
	func_51(1, iParam2, sParam3, 1, uParam6, 17);
	func_51(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_19474)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x5D96D8530B3D0904(uParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, iParam0);
		return;
	}
	unk_0x0674E58A79778E99(&Global_7356, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_19467, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_22(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

int func_55(int iParam0)
{
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_60(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

char* func_61(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		uVar0 = func_72(&(Global_1628237[iParam0].f_11.f_104));
		return uVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120)
	{
		uVar0 = func_67(iParam0, 0);
		return uVar0;
	}
	if (((func_66(iParam0, 28) || func_66(unk_0xD803B885F5E47A62(), 28)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1628237[iVar1].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(uVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_62(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_14();
}

int func_63(int iParam0)
{
	Var0 = { func_64(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_64(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

char* func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_68()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_14() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1628237[iParam0].f_11 != func_14())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

int func_73(int iParam0)
{
	if (func_62(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

bool func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_75(int iParam0)
{
	iVar0 = func_78(iParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

int func_76(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
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

var func_77(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

bool func_79(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1628237[iParam0].f_11 != func_14())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_81(int iParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0x6E524813889AECF8(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1626881.f_6)
	{
		if (iLocal_73 != 3)
		{
			if (!unk_0xE57E602827E07C9D())
			{
				Global_1626881.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	unk_0x558EC149EB2BC0A2(0, 176);
	unk_0x558EC149EB2BC0A2(0, 177);
}

void func_84(bool bParam0)
{
	iLocal_99 = func_14();
	if (!Global_19486.f_1 == 7)
	{
		Global_19486.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_98;
	}
	if (iVar0 >= Global_1387710)
	{
		iVar0 = 0;
	}
	if (Global_21865)
	{
		func_49();
		Global_21865 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(unk_0xD803B885F5E47A62(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19467, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_78, 12, &Local_86, 4, &Local_74, &uLocal_101);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_74, &uLocal_101);
	}
	iLocal_73 = 0;
}

void func_85()
{
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_1 == 1 && Global_1626881.f_7[iVar0].f_7 == 0)
		{
			switch (Global_1626881.f_7[iVar0])
			{
				case 0:
					if (func_89(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_86();
}

void func_86()
{
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(25);
	unk_0x3CAEA85DA607305E(0);
	if (func_80(unk_0xD803B885F5E47A62()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x3CAEA85DA607305E(-1);
	unk_0x3CAEA85DA607305E(1);
	bVar0 = unk_0x8CD06866876216F2();
	unk_0x1200CC973A2399C8(bVar0);
	unk_0x7E60D21B163E9D56();
}

int func_87(int iParam0, int iParam1)
{
	if (Global_1626881.f_7[iParam0].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(25);
	unk_0x3CAEA85DA607305E(iParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0].f_2) };
	func_88(&Var0);
	unk_0x7ACC3006A87F8B39("BA_APP_BODY_DM1");
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(-1);
	iVar16 = 1;
	iVar17 = func_78(Global_1626881.f_7[iParam0].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_76(iVar17);
	}
	unk_0x3CAEA85DA607305E(iVar16);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	return 1;
}

void func_88(var uParam0)
{
	unk_0x045A0775396CC970(uParam0);
}

int func_89(int iParam0, int iParam1)
{
	if (Global_1626881.f_7[iParam0].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(25);
	unk_0x3CAEA85DA607305E(iParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0].f_2) };
	func_88(&Var0);
	bVar16 = func_74(Global_1626881.f_7[iParam0].f_2);
	iVar17 = func_73(Global_1626881.f_7[iParam0].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODY_T3");
		}
		unk_0x6D99DF8263D35CE5(iVar17);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		if (bVar16)
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODY_T2");
		}
		unk_0x6D99DF8263D35CE5(iVar17);
		unk_0x779B34565F4D71B1();
	}
	unk_0x3CAEA85DA607305E(-1);
	iVar18 = 1;
	iVar19 = func_78(Global_1626881.f_7[iParam0].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_76(iVar19);
	}
	unk_0x3CAEA85DA607305E(iVar18);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	return 1;
}

void func_90()
{
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(26);
	unk_0x3CAEA85DA607305E(0);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(func_75(unk_0xD803B885F5E47A62()));
	unk_0xD06AC7C87A34A6AD(func_91());
	unk_0x779B34565F4D71B1();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0x7E60D21B163E9D56();
	func_94(Global_19467, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_74, &uLocal_101);
	iLocal_73 = 2;
}

char* func_91()
{
	iVar0 = func_62(unk_0xD803B885F5E47A62());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_66(iVar0, 28) || func_66(unk_0xD803B885F5E47A62(), 28)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1628237[iVar0].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(uVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_92(bool bParam0)
{
	return func_69(unk_0xD803B885F5E47A62(), bParam0);
}

int func_93()
{
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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

void func_95()
{
	Global_1626881.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1626881.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

