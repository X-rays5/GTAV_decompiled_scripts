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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	iLocal_71 = 9999;
	iLocal_72 = 9999;
	fLocal_97 = 0,82f;
	fLocal_98 = 0,42f;
	fLocal_99 = 0f;
	fLocal_100 = 0f;
	unk_0xB57F88F0123F4C38();
	unk_0x5D96D8530B3D0904(&Global_7356, 17);
	unk_0x0674E58A79778E99(&Global_7357, 18);
	unk_0x0674E58A79778E99(&Global_7357, 20);
	iLocal_278 = func_302(12);
	iLocal_279 = func_302(2);
	iLocal_280 = func_302(0);
	iLocal_79 = unk_0xD68EA767274B7444();
	if (Global_76622)
	{
		func_299();
	}
	else
	{
		func_288();
	}
	if (!Global_19486.f_1 == 10)
	{
		if (Global_19486.f_1 > 3)
		{
			if (Global_19486.f_1 != 9)
			{
				Global_19486.f_1 = 7;
			}
		}
	}
	iLocal_106 = unk_0x1C0640BA9A7327B3();
	func_287(147, 1320);
	func_287(74, 180);
	func_287(75, 190);
	while (true)
	{
		wait(0);
		if (unk_0xEAE0D21A50E6C7F4(Global_7357, 18))
		{
			func_286();
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 8;
			}
			unk_0x0674E58A79778E99(&Global_7357, 18);
			func_285();
		}
		if ((iLocal_91 == 1 && Global_19486.f_1 == 10) && Local_306.f_2999 == 1)
		{
			func_188();
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (unk_0xEAE0D21A50E6C7F4(Global_7356, 16))
					{
						func_187();
					}
					else
					{
						func_184();
						if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
						{
							iLocal_107 = unk_0x1C0640BA9A7327B3();
							if ((iLocal_107 - iLocal_106) > 1000)
							{
								if (iLocal_108)
								{
									func_183();
								}
								else
								{
									func_165();
								}
							}
							if (iLocal_108)
							{
								func_164();
							}
						}
						else
						{
							func_165();
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
					{
						if (func_163(2, Global_19458, 0))
						{
							if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
							{
							}
							else if (Global_19429 == 0)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 19))
								{
									func_161();
									func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_81 = 0;
									StringCopy(&cLocal_84, "", 16);
									func_159();
									Global_19466 = 0;
									iLocal_91 = 0;
									func_160(Global_19467, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_158(Global_19467, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_19474)
									{
										func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0x5D96D8530B3D0904(&Global_7356, 17);
										func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x5D96D8530B3D0904(&Global_7356, 17);
										func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_19486.f_1 > 3)
									{
										Global_19486.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_91 == 1)
					{
						func_184();
						func_188();
					}
					else if (iLocal_89 == 0)
					{
						func_147();
						func_136();
					}
					else
					{
						if (timera() > 1500)
						{
							iLocal_304 = 0;
							while (iLocal_304 < 4)
							{
								if (unk_0x7F8A39872A07D2CE(&(Global_1798[Global_6671].f_3), &(Global_7194[iLocal_304])))
								{
									if (!unk_0x7F8A39872A07D2CE(&(Global_7194[iLocal_304].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_301 = true;
										iLocal_303 = iLocal_304;
									}
									else
									{
										bLocal_301 = false;
									}
								}
								iLocal_304++;
							}
							if (iLocal_90 == 0)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
								uLocal_74 = unk_0x7A8BB56B212464AC();
								while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
								{
									wait(0);
								}
								iLocal_75 = unk_0xA52833FE33F41C53(uLocal_74);
								func_134();
							}
						}
						func_184();
						if (bLocal_302 == 1)
						{
							if (!Global_111638.f_18098.f_396)
							{
								if (!func_130(Global_19486, Global_6671))
								{
									Global_111638.f_18098.f_396 = 1;
								}
							}
						}
						if (func_130(Global_19486, Global_6671))
						{
							if (!Global_111638.f_18098.f_397)
							{
								if (bLocal_301 == 1)
								{
									if (func_129(Global_94591))
									{
										switch (func_127("AM_H_BBUDDY"))
										{
											case 2:
												func_125("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_111638.f_18098.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY1") == 0)
										{
											func_120("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_127("AM_H_BBUDDY1"))
										{
											case 2:
												func_125("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_111638.f_18098.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY") == 0)
										{
											func_120("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_90)
						{
							func_119();
						}
						else
						{
							func_85();
						}
					}
					if (func_163(2, Global_19454, 0))
					{
						func_84();
						Global_19464 = 1;
						if (Global_76622)
						{
							func_299();
						}
						else
						{
							func_288();
						}
						wait(0);
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
						StringCopy(&cLocal_84, "", 16);
						if (iLocal_89 == 1)
						{
							iLocal_89 = 0;
						}
						if (iLocal_90 == 1)
						{
							iLocal_90 = 0;
						}
						iLocal_91 = 0;
					}
					break;
				
				case 10:
					if (iLocal_102 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_285();
					break;
				
				default:
					break;
			}
			if (!Global_19486.f_1 == 8)
			{
				if ((Global_7964 - Global_7963) > Global_7965)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
						{
							if (func_163(2, Global_19454, 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
								{
									func_84();
								}
								else
								{
									func_84();
									if (!Global_19486.f_1 == 10)
									{
										func_285();
									}
									else if (Global_6671 == 132)
									{
										if (Global_2543673.f_1 || unk_0xEAE0D21A50E6C7F4(Global_7357, 20))
										{
											Global_19486.f_1 = 7;
											func_160(Global_19467, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
											{
												func_158(Global_19467, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_158(Global_19467, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x55D0A2DB35045A35(iLocal_79);
											iLocal_102 = 0;
										}
									}
									else
									{
										func_286();
										Global_19486.f_1 = 7;
										func_2();
										func_160(Global_19467, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
										{
											func_158(Global_19467, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_158(Global_19467, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x55D0A2DB35045A35(iLocal_79);
										iLocal_102 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			Global_19488 = 6;
			func_285();
		}
		if (func_1())
		{
			func_285();
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
	if (!Global_19486.f_1 == 10 && !Global_19486.f_1 == 9)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
		{
			wait(750);
		}
		if (Global_19486.f_1 > 6)
		{
			func_160(Global_19467, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				func_158(Global_19467, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_19467, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_7359 = 99;
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
			{
				if (Global_19474)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				if (Global_19474)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_19429 == 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	switch (iLocal_102)
	{
		case 0:
			if (Global_6671 == 81)
			{
				if (Global_1573348 == 0)
				{
					Global_1573348 = 1;
				}
				if (unk_0x203AA5AD695C335D("LOWCAAU"))
				{
					unk_0x23249A21DED9ADF1("LOWCAAU", 15);
					while (!unk_0x67C1D9E5B91B2E37(15))
					{
						wait(0);
					}
				}
				StringCopy(&cLocal_109, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x203AA5AD695C335D(&Global_21828))
				{
					unk_0xD7992BEF7A9D109E(&Global_21828, 1);
					while (!unk_0x67C1D9E5B91B2E37(1))
					{
						wait(0);
					}
				}
				cLocal_109 = { Global_117[Global_6671] };
				StringConCat(&cLocal_109, "_1", 16);
			}
			if (unk_0xEF07223F00EBE9C9(&cLocal_109) || iLocal_281 == 1)
			{
				iLocal_103 = Global_21825;
				if (func_83(129))
				{
					iLocal_103 = Global_95172;
				}
			}
			else
			{
				iLocal_103 = Global_21824;
			}
			if ((iLocal_281 == 1 && unk_0x7F8A39872A07D2CE(&cLocal_282, "CELLPHONE_CHEAT")) && Global_76622 == 0)
			{
				if ((unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SEAPLANE") || unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DUELC")) || unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_BUBBLE"))
				{
					bLocal_95 = true;
				}
				if (bLocal_95)
				{
					if (func_82())
					{
						iLocal_96 = 0;
					}
					else
					{
						iLocal_96 = 1;
					}
				}
				if (iLocal_96 == 0)
				{
					iLocal_104 = unk_0x1C0640BA9A7327B3();
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(3);
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0xAE71997A3B36EF04(&cLocal_84, -1);
					unk_0x779B34565F4D71B1();
					func_81("CELL_300");
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_MONOC"))
					{
						func_81("CELL_MONOSIGNAL");
					}
					else if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DIRECTOR"))
					{
						func_81("CELL_DRCT");
					}
					else
					{
						func_81("CELL_CHEAT");
					}
					func_81("CELL_195");
					unk_0x7E60D21B163E9D56();
					func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_102 = 1;
				}
				else
				{
					iLocal_102 = 2;
					iLocal_104 = unk_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				iLocal_102 = 2;
				iLocal_104 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 1:
			iLocal_105 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_105 - iLocal_104) > 1500)
			{
				iLocal_102 = 3;
			}
			break;
		
		case 2:
			iLocal_105 = unk_0x1C0640BA9A7327B3();
			if (iLocal_103 != Global_21824)
			{
				if (unk_0x8AA6DC470ABA63A2(iLocal_79))
				{
					if (Global_2543673.f_37 == 0)
					{
						if (Global_19429)
						{
							unk_0x4D7F4CC43D4D0DE3(iLocal_79, "Dial_and_Remote_Ring", &Global_19475, 1);
						}
						else if ((iLocal_105 - iLocal_104) > 1700)
						{
							unk_0x4D7F4CC43D4D0DE3(iLocal_79, "Remote_Ring", &Global_19475, 1);
						}
					}
				}
			}
			else if ((func_83(130) || func_83(132)) || func_83(128))
			{
				if (unk_0x8AA6DC470ABA63A2(iLocal_79))
				{
					if (Global_2543673.f_37 == 0)
					{
						if (Global_19429)
						{
							unk_0x4D7F4CC43D4D0DE3(iLocal_79, "Dial_and_Remote_Ring", &Global_19475, 1);
						}
						else if ((iLocal_105 - iLocal_104) > 1700)
						{
							unk_0x4D7F4CC43D4D0DE3(iLocal_79, "Remote_Ring", &Global_19475, 1);
						}
					}
				}
			}
			if ((iLocal_105 - iLocal_104) > iLocal_103)
			{
				if (iLocal_103 == Global_21824)
				{
					bLocal_92 = false;
					if ((Global_6671 == 130 || Global_6671 == 132) || Global_6671 == 128)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 20))
						{
							bLocal_92 = true;
							if ((iLocal_105 - iLocal_104) > iLocal_103 + 10000)
							{
								if (Global_19486.f_1 == 10)
								{
									if (Global_6671 == 130)
									{
										Global_19486.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_92)
					{
						iLocal_102 = 4;
						unk_0x55D0A2DB35045A35(iLocal_79);
						iLocal_93 = 0;
						settimerb(0);
						if (func_80(Global_6671, Global_19486) == 0)
						{
							if (Global_6671 == 132)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(4);
								unk_0x3CAEA85DA607305E(0);
								unk_0x3CAEA85DA607305E(2);
								unk_0x7ACC3006A87F8B39("CELL_CONDFON");
								unk_0xD06AC7C87A34A6AD(&Global_20820);
								unk_0x779B34565F4D71B1();
								func_81("CELL_300");
								func_81("CELL_220");
								func_81("CELL_219");
								unk_0x7E60D21B163E9D56();
							}
							else
							{
								func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_220", &(Global_1798[Global_6671].f_3), 0);
						}
						func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_102 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_281 == 1)
			{
				if (unk_0x7F8A39872A07D2CE(&cLocal_282, "CELLPHONE_CHEAT") && Global_76622 == 0)
				{
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_MONOC"))
					{
						if (Global_8160 == 0)
						{
							Global_8160 = 1;
							Global_111638.f_14046[0].f_6 = 5;
							Global_111638.f_14046[2].f_6 = 5;
							Global_111638.f_14046[1].f_6 = 5;
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
								{
									if (!unk_0x681F21BF9F7B449B(4, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 40f))
									{
										unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) + Vector(2f, 0f, 0f), 4, 0,1f, 1, 0, 1065353216, 0);
									}
								}
							}
						}
						else
						{
							Global_8160 = 0;
						}
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SUPJUM"))
					{
						func_79(0, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_HEALA"))
					{
						func_79(6, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SLIDEYC"))
					{
						func_79(1, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_FASTR"))
					{
						func_79(2, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_WANTDN"))
					{
						func_79(9, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_WANTUP"))
					{
						func_79(8, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_WEATHER"))
					{
						func_79(5, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_FASTS"))
					{
						func_79(3, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_POWER"))
					{
						func_79(7, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_CHUTE"))
					{
						func_79(10, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_BANG"))
					{
						func_79(11, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_FLAMB"))
					{
						func_79(12, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_EXPMEL"))
					{
						func_79(13, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_ZEROG"))
					{
						func_79(14, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_INVINC"))
					{
						func_79(15, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SLOWMO"))
					{
						func_79(16, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SKYFA"))
					{
						func_79(17, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DRUNK"))
					{
						func_79(18, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DEADEYE"))
					{
						func_79(19, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_WEAPONS"))
					{
						func_79(4, 0);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_BUZZARD"))
					{
						func_79(20, 788747387);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_COMET2"))
					{
						func_79(20, -1045541610);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_BMX"))
					{
						func_79(20, 1131912276);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_CADDY"))
					{
						func_79(20, 1147287684);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DUSTER"))
					{
						func_79(20, 970356638);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_PCJ"))
					{
						func_79(20, -909201658);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_RAPIDGT"))
					{
						func_79(20, -1934452204);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_STRETCH"))
					{
						func_79(20, -1961627517);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_STUNT"))
					{
						func_79(20, -2122757008);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_TRASH"))
					{
						func_79(20, 1917016601);
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SANCHEZ"))
					{
						func_79(20, 788045382);
					}
					if (func_82())
					{
						if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_SEAPLANE"))
						{
							func_79(20, -901163259);
						}
						if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DUELC"))
						{
							func_79(20, -326143852);
						}
						if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_BUBBLE"))
						{
							func_79(20, -1066334226);
						}
					}
					if (unk_0x7F8A39872A07D2CE(&vLocal_286, "CHEAT_DIRECTOR"))
					{
						iVar0 = func_44(0, 0, 119);
						if (iVar0 != 0)
						{
							func_42(iVar0);
						}
						else
						{
							func_41();
						}
					}
					func_36(0);
				}
				else if (unk_0x7F8A39872A07D2CE(&cLocal_282, "CELLPHONE_CHEAT"))
				{
					func_36(0);
				}
				else
				{
					func_35(&uLocal_113, 1, 0, &vLocal_286, 0, 1);
					Global_21826 = 0;
					func_34(&uLocal_113, Global_6671, &Global_21828, &cLocal_282, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_6671)
				{
					case 81:
						StringCopy(&vVar1, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&vVar1, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&vVar1, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&vVar1, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&vVar1, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&vVar1, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&vVar1, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&vVar1, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&vVar1, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&vVar1, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&vVar1, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&vVar1, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&vVar1, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&vVar1, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&vVar1, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&vVar1, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&vVar1, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&vVar1, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&vVar1, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&vVar1, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&vVar1, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&vVar1, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&vVar1, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&vVar1, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&vVar1, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&vVar1, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&vVar1, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&vVar1, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&vVar1, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&vVar1, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&vVar1, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&vVar1, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&vVar1, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&vVar1, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&vVar1, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&vVar1, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&vVar1, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&vVar1, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&vVar1, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&vVar1, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&vVar1, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&vVar1, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&vVar1, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&vVar1, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&vVar1, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&vVar1, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&vVar1, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&vVar1, "GERALD", 24);
						break;
					
					default:
						StringCopy(&vVar1, "MICHAEL", 24);
						break;
				}
				func_35(&uLocal_113, 1, 0, &vVar1, 0, 1);
				Global_21826 = 0;
				switch (Global_6671)
				{
					case 81:
						func_9(&uLocal_113, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_113, 12, &Global_21828, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = unk_0xD8A54335F18763BA();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, &(Global_117[Global_6671]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_76622)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, &(Global_117[Global_6671]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, &(Global_117[Global_6671]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_305 = unk_0x09AC81E49EA267F7(0, 100);
						if (iLocal_305 <= 50)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_305 = unk_0x09AC81E49EA267F7(0, 100);
						if (iLocal_305 <= 50)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_305 = unk_0x09AC81E49EA267F7(0, 100);
						if (iLocal_305 <= 50)
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_113, Global_6671, &Global_21828, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_113, Global_6671, &Global_21828, &(Global_117[Global_6671]), 2, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_7357, 31);
			}
			break;
		
		case 4:
			if (unk_0x8AA6DC470ABA63A2(iLocal_79))
			{
				unk_0x4D7F4CC43D4D0DE3(iLocal_79, "Remote_Engaged", &Global_19475, 1);
			}
			if (timerb() > 1500)
			{
				if (iLocal_93 == 0)
				{
					if (Global_19486 == 2)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							func_4(unk_0x16F2683693E537C9(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_93 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
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

bool func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_76622 || func_33())
	{
		if (Global_6671 == 81)
		{
			if (Global_1573348 == 0)
			{
				Global_1573348 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1573348 == 1)
		{
			func_34(uParam0, iParam1, &Global_21828, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_21828, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_21828, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_21();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_20())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_19())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_18();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_17();
		func_12();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_13()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_18()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21()
{
	if (func_28(14))
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
		Global_19486 = func_22();
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

var func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_25(unk_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_28(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_28(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
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

void func_31()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_32(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = uParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

var func_33()
{
	return Global_1312854;
}

int func_34(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 1;
	return func_11(sParam3, iParam4, bParam8);
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

void func_36(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_39())
		{
			func_37(1, 1);
		}
		else
		{
			func_37(0, 0);
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
	if (!func_19())
	{
		Global_19486.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)
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

bool func_39()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_40()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_41()
{
	unk_0x21387C9EECC2B220(1);
	unk_0x558EC149EB2BC0A2(2, 201);
	unk_0x558EC149EB2BC0A2(2, 202);
	fVar0 = 0f;
	while ((!unk_0xBFC0798A6E3417F9(2, 201) && !unk_0xBFC0798A6E3417F9(2, 202)) || fVar0 < 1f)
	{
		_set_warning_message_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0x6117725E0134737F());
	}
	unk_0x21387C9EECC2B220(0);
	if (unk_0xBFC0798A6E3417F9(2, 201))
	{
		unk_0x53491B90E4FD0E56(0);
		Global_110583 = 1;
	}
}

void func_42(int iParam0)
{
	unk_0x21387C9EECC2B220(1);
	unk_0x558EC149EB2BC0A2(2, 201);
	fVar0 = 0f;
	while (!unk_0xBFC0798A6E3417F9(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_43(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0x6117725E0134737F());
	}
	unk_0x21387C9EECC2B220(0);
}

char* func_43(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_44(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1)
		{
			return 2;
		}
	}
	if (func_78() && !func_28(14))
	{
		return 3;
	}
	if (func_77())
	{
		return 3;
	}
	if (func_76())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_75())
		{
			return 8;
		}
	}
	if (Global_95664)
	{
		return 3;
	}
	if (Global_31024)
	{
		return 8;
	}
	if (Global_30916)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x8A22C4C08282BF26(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x8A22C4C08282BF26(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x8A22C4C08282BF26(-131607125) > 0)
	{
		return 3;
	}
	if (unk_0x8A22C4C08282BF26(912405861) > 0)
	{
		return 3;
	}
	if (unk_0x8A22C4C08282BF26(-47565502) > 0)
	{
		return 3;
	}
	if (unk_0x8A22C4C08282BF26(1397812868) > 0)
	{
		return 13;
	}
	if (func_74(bParam1))
	{
		return 3;
	}
	if (unk_0x92444005288A72ED(unk_0x16F2683693E537C9()) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		return 12;
	}
	if (func_73(Global_110663, 256))
	{
		return 3;
	}
	if (((func_72() || func_71()) || func_63()) || func_62())
	{
		return 5;
	}
	if (func_62())
	{
		return 5;
	}
	if (func_61())
	{
		return 5;
	}
	if (func_60())
	{
		return 5;
	}
	if (func_71())
	{
		return 5;
	}
	if (func_59() && !Global_110588)
	{
		return 8;
	}
	if (func_63())
	{
		return 5;
	}
	if (unk_0x991B1F0980C62628() || func_58())
	{
		return 4;
	}
	if (func_57())
	{
		return 4;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_48(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != -1)
			{
				return 11;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || Global_110685)
			{
				return 10;
			}
		}
	}
	if (Global_31022)
	{
		return 8;
	}
	if (Global_76620)
	{
		return 4;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
		{
			return 6;
		}
		if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		if (unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9()))
		{
			return 8;
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		return 7;
	}
	if (func_47())
	{
		return 8;
	}
	if (Global_30770)
	{
		return 3;
	}
	if (unk_0x8C74DE122769E1BF())
	{
		return 4;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439,4357f, -997,4747f, 28,9584f, 428,3288f, -997,0398f, 24,8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_45(0))
		{
			return 8;
		}
	}
	if (unk_0x7ED67A9BE53DAC95(unk_0x16F2683693E537C9()))
	{
		return 9;
	}
	return 0;
}

int func_45(bool bParam0)
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if ((((((((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9())) || unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9())) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		return 0;
	}
	if ((((((func_57() || Global_22211.f_4) || func_46()) || unk_0x78E01915ECCE9BC8()) || unk_0x5327615940E385C1()) || func_58()) || func_77())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0;
		}
	}
	return 1;
}

int func_46()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

bool func_47()
{
	return Global_58693;
}

int func_48(int iParam0)
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		return 5;
	}
	vVar0 = { func_56(unk_0xD803B885F5E47A62()) };
	if (Global_110725[10].f_1)
	{
		if (vdist2(vVar0, 241,9889f, 360,4732f, 105,6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (vdist2(vVar0, -59,96629f, -1099,005f, 25,52088f) < 8f)
		{
			if (unk_0x0399732A9EBC368E(vVar0, -61,26628f, -1096,505f, 25,52088f, -58,43333f, -1101,147f, 29,24937f, 1,25f, 0, true))
			{
				return 9;
			}
		}
	}
	if (vdist2(vVar0, -740,9346f, 5599,426f, 40,71515f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, -746,1299f, 5599,226f, 40,47561f, -737,632f, 5599,364f, 44,1693f, 3,375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, -740,9346f, 5590,426f, 40,71515f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, -746,1299f, 5590,667f, 40,4392f, -737,6585f, 5590,592f, 44,52327f, 3,375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446,3265f, 5566,35f, 780,2151f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, 451,1661f, 5566,451f, 780,1703f, 442,5211f, 5566,374f, 783,9819f, 3,375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446,3265f, 5577,35f, 780,2151f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, 451,1661f, 5577,867f, 780,1899f, 442,5765f, 5577,579f, 783,9086f, 3,375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 128,83f, -1297,98f, 29,3f) < 2f || vdist2(vVar0, 95,07f, -1284,98f, 29,3f) < 2f)
	{
		return 9;
	}
	if (vdist2(vVar0, 1081,951f, -1976,762f, 30,47218f) < 6f && func_55(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_49(iParam0);
	}
	iVar3 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_110601 || iVar3 == Global_110602) || iVar3 == Global_110603)
	{
		return 9;
	}
	else if (iVar3 == Global_110592)
	{
		return 9;
	}
	else if (iVar3 == Global_110593)
	{
		return 9;
	}
	else if (iVar3 == Global_110596)
	{
		return 9;
	}
	else if (iVar3 == Global_110595)
	{
		return 9;
	}
	else if (iVar3 == Global_110597)
	{
		return 9;
	}
	else if (iVar3 == Global_110598)
	{
		return 9;
	}
	else if (iVar3 == Global_110599)
	{
		return 9;
	}
	else if (iVar3 == Global_110600)
	{
		return 9;
	}
	else if (iVar3 == Global_110604)
	{
		return 9;
	}
	else if (iVar3 == Global_110605)
	{
		return 9;
	}
	else if (iVar3 == Global_110606)
	{
		return 9;
	}
	else if (iVar3 == Global_110607)
	{
		return 9;
	}
	else if (iVar3 == Global_110608)
	{
		return 9;
	}
	else if ((iVar3 == Global_110609 || iVar3 == Global_110610) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_110611[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_49(var uParam0)
{
	uParam0 = uParam0;
	func_52(24, &Global_110592);
	func_52(47, &Global_110593);
	func_52(10, &Global_110601);
	func_52(9, &Global_110602);
	func_52(8, &Global_110603);
	func_52(21, &Global_110604);
	func_52(11, &Global_110605);
	func_52(18, &Global_110609);
	func_52(19, &Global_110610);
	Global_110596 = unk_0x0D1736C2E221BCEA(-76,6618f, 6222,191f, 32,2412f, "V_factory1");
	Global_110595 = unk_0x0D1736C2E221BCEA(-98,2637f, 6210,022f, 31,924f, "V_factory2");
	Global_110597 = unk_0x0D1736C2E221BCEA(-115,8956f, 6179,749f, 32,4102f, "V_factory3");
	Global_110598 = unk_0x0D1736C2E221BCEA(-149,8199f, 6144,978f, 31,3353f, "V_factory4");
	Global_110599 = unk_0x0D1736C2E221BCEA(16,3605f, -1100,259f, 28,797f, "v_gun");
	Global_110600 = unk_0x0D1736C2E221BCEA(125,1948f, -1284,13f, 28,2847f, "v_strip3");
	Global_110606 = unk_0x0D1736C2E221BCEA(-545,5717f, 1987,145f, 126,0262f, "cs6_08_mine_int");
	Global_110607 = unk_0x0D1736C2E221BCEA(2330,598f, 2571,935f, 45,6802f, "ch3_01_trlr_int");
	Global_110608 = unk_0x0D1736C2E221BCEA(-54,7f, -1092,7f, 26,4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_110611[iVar0] = unk_0xFBD08BECC9B87937(func_50(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_50(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711,8212f, -915,9057f, 18,2377f;
		
		case 1:
			return -52,7185f, -1756,175f, 28,4432f;
		
		case 2:
			return 1159,441f, -325,6666f, 68,2272f;
		
		case 3:
			return 1699,429f, 4928,642f, 41,0858f;
		
		case 4:
			return -1822,926f, 788,9531f, 137,212f;
		
		case 5:
			return 1166,427f, 2703,528f, 37,1574f;
		
		case 6:
			return -2973,414f, 390,6885f, 14,0433f;
		
		case 7:
			return -1225,86f, -903,5782f, 11,3263f;
		
		case 8:
			return 1140,659f, -981,0806f, 45,4158f;
		
		case 9:
			return -1490,275f, -382,8514f, 39,1634f;
		
		case 10:
			return -3240,719f, 1004,508f, 11,8468f;
		
		case 11:
			return -3039,249f, 589,3831f, 6,9251f;
		
		case 12:
			return 544,4275f, 2672,061f, 41,1726f;
		
		case 13:
			return 2558,754f, 385,599f, 107,6391f;
		
		case 14:
			return 2681,511f, 3282,763f, 54,2573f;
		
		case 15:
			return 1731,153f, 6411,633f, 34,0373f;
		
		case 16:
			return 1964,931f, 3741,207f, 31,3599f;
		
		case 17:
			return 29,0707f, -1348,773f, 28,5101f;
		
		case 18:
			return 376,8503f, 323,9777f, 102,5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_51(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_52(int iParam0, var uParam1)
{
	Var0 = { func_53(iParam0) };
	*uParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = { func_54(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_54(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_54(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_54(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_54(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_54(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_54(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049922[34].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_54(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_54(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_54(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_54(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_54(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_54(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_54(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_54(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_54(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_54(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_54(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_54(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_54(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_54(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_54(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_54(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_54(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_54(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_54(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_54(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_54(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_54(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_54(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_54(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_54(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_54(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_54(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_54(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_54(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_54(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_54(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_54(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_55(int iParam0)
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

Vector3 func_56(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

bool func_57()
{
	return Global_1312877;
}

int func_58()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_60()
{
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 9);
}

bool func_61()
{
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 8);
}

int func_62()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (((((((((((((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_intro", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_base", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (func_72())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_64(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_64(int iParam0)
{
	return func_65(iParam0, 20, 1);
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_70() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_66(func_69(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_67(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_68();
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

int func_68()
{
	return Global_1312745;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_70()
{
	return Global_30768;
}

bool func_71()
{
	return Global_98796.f_346 > 0;
}

bool func_72()
{
	return Global_98796.f_345 > 0;
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

bool func_75()
{
	return Global_98783.f_1;
}

bool func_76()
{
	return Global_76889;
}

int func_77()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_79(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_31018, iParam0);
	Global_31019 = iParam1;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_81(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_82()
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

int func_83(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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
	return 0;
}

void func_84()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_85()
{
	if (Global_19464 == 0)
	{
		if (func_163(2, Global_19455, 0))
		{
			unk_0x0674E58A79778E99(&Global_7357, 0);
			iLocal_90 = 0;
			func_161();
			Global_19464 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_74 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
			{
				wait(0);
			}
			iLocal_78 = unk_0xA52833FE33F41C53(uLocal_74);
			if (func_114(Global_6671))
			{
				if (iLocal_78 == 0)
				{
					if (bLocal_301)
					{
						Global_21919 = 0;
						Global_21918 = 0;
						Global_21920 = 1;
						func_97();
					}
					else
					{
						Global_21919 = 0;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 1)
				{
					if (bLocal_301)
					{
						Global_21919 = 0;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
					else if (func_87(Global_6671, Global_19486))
					{
						func_86();
						iLocal_90 = 1;
					}
					else
					{
						Global_21919 = 1;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 2)
				{
					if (func_87(Global_6671, Global_19486))
					{
						func_86();
						iLocal_90 = 1;
					}
					else
					{
						Global_21919 = 1;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
				}
			}
			else
			{
				if (iLocal_78 == 0)
				{
					if (bLocal_301)
					{
						Global_21919 = 0;
						Global_21918 = 0;
						Global_21920 = 1;
						func_97();
					}
					else if (func_87(Global_6671, Global_19486))
					{
						func_86();
						iLocal_90 = 1;
					}
					else
					{
						Global_21919 = 1;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 1)
				{
					if (func_87(Global_6671, Global_19486))
					{
						func_86();
						iLocal_90 = 1;
					}
					else
					{
						Global_21919 = 1;
						Global_21918 = 0;
						Global_21920 = 0;
						func_97();
					}
				}
			}
		}
	}
}

void func_86()
{
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_19474)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
	func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_160(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_19467, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_87(int iParam0, int iParam1)
{
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_28(6) && !func_28(7))
	{
		if (func_88(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_93(6))
	{
		iVar1 = func_91(iParam0);
		iVar2 = func_91(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = func_90(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = func_89(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94600[iParam0];
	}
	return -1;
}

int func_90(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_91(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_96())
	{
		return func_92(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_96())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_92(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_93(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_94(int iParam0)
{
	return func_95(iParam0, Global_41431);
}

int func_95(int iParam0, int iParam1)
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

int func_96()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

void func_97()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 10;
		func_113();
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					if (!func_112())
					{
						func_111();
					}
				}
				else if (func_110() == 0)
				{
					func_111();
				}
			}
		}
		if (Global_8161[Global_19486][0].f_259 == 2)
		{
			func_109();
			func_160(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_80(Global_6671, Global_19486) == 0)
	{
		func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_211", &(Global_1798[Global_6671].f_3), 0);
	}
	func_102();
	if (Global_76622)
	{
		func_98(1916, 1, -1);
	}
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_66(iParam0, func_67(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_101(iParam0))
	{
		func_100(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam2, 1);
	}
}

void func_99(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_67(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_67(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_67(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_67(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_67(uParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_67(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_67(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_67(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_67(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_67(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_67(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_67(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_67(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_67(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_67(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_67(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_67(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_67(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_67(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_67(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_67(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_67(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_67(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_67(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_67(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_67(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_67(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_67(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_67(uParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_67(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_67(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_67(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_67(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_67(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_67(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_67(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_67(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_67(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_67(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_67(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_67(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_67(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_67(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_67(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_67(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_67(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_67(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_67(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_67(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_67(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_67(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_67(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_67(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_67(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_67(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_67(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_67(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_67(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_67(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_67(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_67(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_67(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_67(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_67(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_67(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_67(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_67(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_67(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_67(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_67(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_67(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_67(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_67(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_67(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_67(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_67(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_67(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_67(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_67(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_67(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_67(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_67(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_67(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_67(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_67(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_67(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_67(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_67(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_67(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_67(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_67(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_67(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_67(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_67(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_67(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_67(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_67(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_67(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_67(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_67(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_67(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_67(uParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_67(uParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_67(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_67(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_67(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_67(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_101(int iParam0)
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

void func_102()
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
			func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_7961);
			if (Global_7961 == 1)
			{
				func_160(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_160(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_106();
				unk_0x0674E58A79778E99(&Global_7358, 9);
				func_160(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_105();
				func_160(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_81("CELL_300");
					func_81("CELL_217");
					func_81("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_80(Global_6671, Global_19486) == 0)
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_160(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_81("CELL_300");
					func_81("CELL_219");
					func_81("CELL_219");
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
					if (func_80(Global_6671, Global_19486) == 0)
					{
						func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &cVar0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_103();
			break;
		
		default:
			break;
	}
}

void func_103()
{
	if (unk_0x83D8570832F172A7(Global_19467))
	{
		func_104();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_104()
{
	if (Global_76622)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_7356, 17);
	}
}

void func_105()
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

void func_106()
{
	if (Global_76622)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_107()
{
	return 0;
}

void func_108(int iParam0)
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
		if (func_28(14))
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
								func_81(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_81(&(Global_7363[iVar1]));
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
								func_81(&(Global_7363[iVar1]));
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
								func_81(&(Global_7363[iVar1]));
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
								func_81(&(Global_7363[iVar1]));
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
								func_81(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_157(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

void func_109()
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

int func_110()
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
		if (func_28(14))
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

void func_111()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_112() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
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

int func_112()
{
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	unk_0x1CFAC524932A967E(&Var0);
	if (Global_19439[Global_19431].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19426 = 1;
	}
}

int func_114(int iParam0)
{
	if (func_115(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0].f_6 == iParam0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_89496[iVar0];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_76891.f_109[Global_89496[iVar0]];
			if (iVar2 != -1)
			{
				if (func_116(Global_89532[iVar2].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_116(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_118(iParam0, 8);
			break;
		
		case 14:
			return func_118(iParam0, 16);
			break;
		
		case 17:
			return func_118(iParam0, 32);
			break;
	}
	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_119()
{
	if (Global_19464 == 0)
	{
		if (func_163(2, Global_19455, 0))
		{
			unk_0x0674E58A79778E99(&Global_7357, 0);
			func_161();
			Global_19464 = 1;
			unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_74 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
			{
				wait(0);
			}
			iLocal_78 = unk_0xA52833FE33F41C53(uLocal_74);
			if (iLocal_78 == 0)
			{
				Global_21914[Global_19486] = 1;
				iLocal_89 = 0;
				Global_21919 = 0;
				Global_21918 = 1;
				Global_21920 = 0;
				func_97();
			}
			else
			{
				iLocal_90 = 0;
				func_134();
			}
		}
	}
}

void func_120(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_124(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_123(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_122((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_121();
			return;
		}
		iVar0++;
	}
}

void func_121()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0].f_4), "", 16);
	Global_111638.f_20405[iParam0].f_8 = 0;
	Global_111638.f_20405[iParam0].f_9 = 0;
	Global_111638.f_20405[iParam0].f_11 = 0;
	Global_111638.f_20405[iParam0].f_10 = -1;
	Global_111638.f_20405[iParam0].f_12 = 0;
	Global_111638.f_20405[iParam0].f_13 = 0;
	Global_111638.f_20405[iParam0].f_14 = 0;
	Global_111638.f_20405[iParam0].f_15 = 0;
}

void func_123(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0] = { Global_111638.f_20405[iParam1] };
	Global_111638.f_20405[iParam0].f_4 = { Global_111638.f_20405[iParam1].f_4 };
	Global_111638.f_20405[iParam0].f_8 = Global_111638.f_20405[iParam1].f_8;
	Global_111638.f_20405[iParam0].f_10 = Global_111638.f_20405[iParam1].f_10;
	Global_111638.f_20405[iParam0].f_9 = Global_111638.f_20405[iParam1].f_9;
	Global_111638.f_20405[iParam0].f_11 = Global_111638.f_20405[iParam1].f_11;
	Global_111638.f_20405[iParam0].f_12 = Global_111638.f_20405[iParam1].f_12;
	Global_111638.f_20405[iParam0].f_13 = Global_111638.f_20405[iParam1].f_13;
	Global_111638.f_20405[iParam0].f_14 = Global_111638.f_20405[iParam1].f_14;
	Global_111638.f_20405[iParam0].f_15 = Global_111638.f_20405[iParam1].f_15;
}

bool func_124(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_126(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_126(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_121();
	}
}

int func_127(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_110281))
	{
		return 1;
	}
	if (func_128(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_128(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0, int iParam1)
{
	return 0;
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_94591 != -1 && unk_0xEAE0D21A50E6C7F4(Global_89532[Global_94591].f_15, 15)) && unk_0xEAE0D21A50E6C7F4(Global_94592, iParam1))
	{
		if (Global_94590 != 5 || func_133() == Global_94591)
		{
			if (!func_132(12))
			{
				if (func_131(iParam0, iParam1, &iVar1) && func_89(iVar1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_90(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_132(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_94599, iParam0);
}

int func_133()
{
	return Global_76884;
}

void func_134()
{
	settimera(0);
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (Global_19474)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
	iLocal_89 = 1;
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_114(Global_6671))
	{
		if (bLocal_301)
		{
			func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_7194[iLocal_303].f_8), 0, 0, 0, 0);
			func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_302)
			{
				if (func_135(Global_6671, Global_19486))
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_87(Global_6671, Global_19486))
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_302)
			{
				if (func_135(Global_6671, Global_19486))
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_87(Global_6671, Global_19486))
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_301)
	{
		func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_7194[iLocal_303].f_8), 0, 0, 0, 0);
		if (bLocal_302)
		{
			if (func_135(Global_6671, Global_19486))
			{
				func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_87(Global_6671, Global_19486))
			{
				func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_302)
	{
		if (func_135(Global_6671, Global_19486))
		{
			func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_87(Global_6671, Global_19486))
		{
			func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_160(Global_19467, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
	func_158(Global_19467, "SET_HEADER", &(Global_1798[Global_6671].f_3), 0, 0, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return 0;
		}
	}
	if (!func_93(6))
	{
		if (func_131(iParam0, iParam1, &iVar1) && func_89(iVar1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_136()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x38C3A68D7861DCFD(0, 22, 1);
	}
	if (func_163(2, Global_19455, 0))
	{
		func_161();
		Global_19464 = 1;
		unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
		uLocal_74 = unk_0x7A8BB56B212464AC();
		while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
		{
			wait(0);
		}
		iVar0 = unk_0xA52833FE33F41C53(uLocal_74);
		iLocal_80 = Global_8147[iVar0];
		sLocal_82[0] = unk_0x19C9F30A7697B43C(&(Global_8064[iLocal_80]));
		if (unk_0x7F8A39872A07D2CE(sLocal_82[0], "*"))
		{
			cLocal_84 = { Global_8130[Global_19486] };
			iLocal_81 = unk_0x4880526EC51D1C27(&cLocal_84);
		}
		else if (unk_0x4880526EC51D1C27(&cLocal_84) < 14)
		{
			StringConCat(&cLocal_84, sLocal_82[0], 16);
			iLocal_81++;
		}
		unk_0x7E60C62A7CE58FC8(Global_19467, "SET_HEADER");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xAE71997A3B36EF04(&cLocal_84, -1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (func_163(2, 178, 0))
	{
		func_84();
		Global_19464 = 1;
		if (unk_0x4880526EC51D1C27(&cLocal_84) > 0)
		{
			StringCopy(&cLocal_84, unk_0xA739D71DFFCCC22C(&cLocal_84, 0, (iLocal_81 - 1)), 16);
			iLocal_81 = (iLocal_81 - 1);
		}
		unk_0x7E60C62A7CE58FC8(Global_19467, "SET_HEADER");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xAE71997A3B36EF04(&cLocal_84, -1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (func_163(2, Global_19458, 0))
	{
		if (!func_146())
		{
			func_161();
			Global_8130[Global_19486] = { cLocal_84 };
			Global_6671 = 144;
			iLocal_281 = 0;
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 10;
				func_113();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					if (!unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
						{
							if (!func_112())
							{
								func_111();
							}
						}
						else if (func_110() == 0)
						{
							func_111();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_94 = 0;
			iVar3 = func_96();
			while (iVar1 < iVar3)
			{
				iVar4 = iVar1;
				if (iVar4 != 146)
				{
					sVar2 = unk_0x19C9F30A7697B43C(&(Global_117[iVar1].f_4));
					if (unk_0x7F8A39872A07D2CE(sVar2, &cLocal_84))
					{
						if ((func_145(iVar4, Global_19486) == 1 || func_145(iVar4, Global_19486) == 2) || unk_0x7F8A39872A07D2CE(sVar2, unk_0x19C9F30A7697B43C(&(Global_117[130].f_4))))
						{
							Global_6671 = iVar4;
						}
						else
						{
							iLocal_94 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_6671 == 144 && iLocal_281 == 0) && iLocal_94 == 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(4);
				unk_0x3CAEA85DA607305E(0);
				unk_0x3CAEA85DA607305E(3);
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0xAE71997A3B36EF04(&cLocal_84, -1);
				unk_0x779B34565F4D71B1();
				func_81("CELL_300");
				func_81("CELL_211");
				func_81("CELL_195");
				unk_0x7E60D21B163E9D56();
				func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_281 = 0;
				iVar5 = 0;
				while (iVar5 < 37)
				{
					sVar6 = unk_0x19C9F30A7697B43C(&(Global_6675[iVar5]));
					if (unk_0x7F8A39872A07D2CE(sVar6, &cLocal_84))
					{
						iLocal_281 = 1;
						cLocal_282 = { Global_6675[iVar5].f_4 };
						vLocal_286 = { Global_6675[iVar5].f_8 };
					}
					iVar5++;
				}
				if (iLocal_281 == 0)
				{
					iLocal_88 = unk_0x4880526EC51D1C27(&cLocal_84);
					if (iLocal_88 > 6)
					{
						StringCopy(&(uLocal_292[0]), unk_0xA739D71DFFCCC22C(&cLocal_84, 0, 1), 4);
						StringCopy(&(uLocal_292[1]), unk_0xA739D71DFFCCC22C(&cLocal_84, 1, 2), 4);
						StringCopy(&(uLocal_292[2]), unk_0xA739D71DFFCCC22C(&cLocal_84, 2, 3), 4);
						StringCopy(&(uLocal_292[3]), unk_0xA739D71DFFCCC22C(&cLocal_84, 3, 4), 4);
						StringCopy(&(uLocal_292[4]), unk_0xA739D71DFFCCC22C(&cLocal_84, 4, 5), 4);
						StringCopy(&(uLocal_292[5]), unk_0xA739D71DFFCCC22C(&cLocal_84, 5, 6), 4);
						if (((unk_0x7F8A39872A07D2CE(&(uLocal_292[0]), "1") && unk_0x7F8A39872A07D2CE(&(uLocal_292[1]), "9")) && unk_0x7F8A39872A07D2CE(&(uLocal_292[2]), "9")) && unk_0x7F8A39872A07D2CE(&(uLocal_292[3]), "9"))
						{
							iVar7 = func_144(&(uLocal_292[4]));
							iVar8 = func_144(&(uLocal_292[5]));
							func_143(iVar7, iVar8);
							iLocal_281 = 1;
						}
						if (iLocal_281 == 0)
						{
							if (iLocal_88 == 10 || iLocal_88 == 7)
							{
								if (iLocal_88 == 10)
								{
									StringCopy(&(uLocal_292[0]), unk_0xA739D71DFFCCC22C(&cLocal_84, 3, 4), 4);
									StringCopy(&(uLocal_292[1]), unk_0xA739D71DFFCCC22C(&cLocal_84, 4, 5), 4);
									StringCopy(&(uLocal_292[2]), unk_0xA739D71DFFCCC22C(&cLocal_84, 5, 6), 4);
									StringCopy(&(uLocal_292[3]), unk_0xA739D71DFFCCC22C(&cLocal_84, 6, 7), 4);
									StringCopy(&(uLocal_292[4]), unk_0xA739D71DFFCCC22C(&cLocal_84, 7, 8), 4);
									StringCopy(&(uLocal_292[5]), unk_0xA739D71DFFCCC22C(&cLocal_84, 8, 9), 4);
									StringCopy(&(uLocal_292[6]), unk_0xA739D71DFFCCC22C(&cLocal_84, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_292[0]), unk_0xA739D71DFFCCC22C(&cLocal_84, 0, 1), 4);
									StringCopy(&(uLocal_292[1]), unk_0xA739D71DFFCCC22C(&cLocal_84, 1, 2), 4);
									StringCopy(&(uLocal_292[2]), unk_0xA739D71DFFCCC22C(&cLocal_84, 2, 3), 4);
									StringCopy(&(uLocal_292[3]), unk_0xA739D71DFFCCC22C(&cLocal_84, 3, 4), 4);
									StringCopy(&(uLocal_292[4]), unk_0xA739D71DFFCCC22C(&cLocal_84, 4, 5), 4);
									StringCopy(&(uLocal_292[5]), unk_0xA739D71DFFCCC22C(&cLocal_84, 5, 6), 4);
									StringCopy(&(uLocal_292[6]), unk_0xA739D71DFFCCC22C(&cLocal_84, 6, 7), 4);
								}
								if ((((unk_0x7F8A39872A07D2CE(&(uLocal_292[0]), "5") && unk_0x7F8A39872A07D2CE(&(uLocal_292[1]), "5")) && unk_0x7F8A39872A07D2CE(&(uLocal_292[2]), "5")) && unk_0x7F8A39872A07D2CE(&(uLocal_292[3]), "0")) && unk_0x7F8A39872A07D2CE(&(uLocal_292[4]), "1"))
								{
									iVar9 = func_144(&(uLocal_292[5]));
									iVar10 = func_144(&(uLocal_292[6]));
									func_143(iVar9, iVar10);
									iLocal_281 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (func_145(Global_6671, Global_19486) == 2 || Global_6671 == 130)
				{
					func_142(Global_6671, Global_19486, 1);
					if (Global_6671 == 130)
					{
						if (!func_145(130, 0) == 1)
						{
							func_138(130, 4, 1);
							func_138(130, 3, 0);
						}
						if (Global_76622)
						{
							if (!func_137(130, 3))
							{
								func_138(130, 3, 1);
							}
						}
					}
				}
				if (func_80(Global_6671, Global_19486) == 0)
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_211", &(Global_1798[Global_6671].f_3), 0);
				}
			}
			func_102();
		}
	}
}

int func_137(int iParam0, int iParam1)
{
	if (func_145(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	Global_8042 = iParam0;
	if (Global_117[iParam0].f_8 != 150)
	{
		func_21();
		if (iParam1 == 4)
		{
			func_141(iParam0, 0, 1);
			func_141(iParam0, 1, 1);
			func_141(iParam0, 2, 1);
			func_142(iParam0, 0, 1);
			func_142(iParam0, 1, 1);
			func_142(iParam0, 2, 1);
		}
		else
		{
			if (func_145(iParam0, iParam1) == 1 && func_80(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_141(iParam0, iVar0, 1);
			func_142(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1] = { func_140(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1] = { func_140(iParam0) };
						Global_7966[1].f_5 = iParam1;
						func_139();
					}
				}
				else
				{
					Global_7966[1] = { func_140(iParam0) };
					Global_7966[1].f_5 = iParam1;
					func_139();
				}
			}
			else
			{
				Global_7966[1] = { func_140(iParam0) };
				Global_7966[1].f_5 = iParam1;
				func_139();
			}
		}
	}
}

void func_139()
{
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, unk_0x19C9F30A7697B43C(&(Global_7966[1])), 64);
		sVar32 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

struct<4> func_140(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

void func_143(int iParam0, int iParam1)
{
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_282, "ANS_RAN1", 16);
			StringCopy(&vLocal_286, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_282, "ANS_RAN2", 16);
			StringCopy(&vLocal_286, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_282, "ANS_RAN3", 16);
			StringCopy(&vLocal_286, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_282, "ANS_RAN4", 16);
			StringCopy(&vLocal_286, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_282, "ANS_RAN5", 16);
			StringCopy(&vLocal_286, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_282, "ANS_RAN6", 16);
			StringCopy(&vLocal_286, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_282, "ANS_RAN7", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_282, "ANS_RAN8", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_282, "ANS_RAN9", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_282, "ANS_RAN10", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_282, "ANS_RAN1", 16);
			StringCopy(&vLocal_286, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_282, "ANS_RAN2", 16);
			StringCopy(&vLocal_286, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_282, "ANS_RAN3", 16);
			StringCopy(&vLocal_286, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_282, "ANS_RAN4", 16);
			StringCopy(&vLocal_286, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_282, "ANS_RAN5", 16);
			StringCopy(&vLocal_286, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_282, "ANS_RAN6", 16);
			StringCopy(&vLocal_286, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_282, "ANS_RAN7", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_282, "ANS_RAN8", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_282, "ANS_RAN9", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_282, "ANS_RAN8", 16);
			StringCopy(&vLocal_286, "ANSWER_FX", 24);
			break;
	}
}

int func_144(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

int func_146()
{
	if (Global_76622)
	{
		return 0;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
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

void func_147()
{
	if (Global_19465)
	{
		if (timera() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (unk_0xBFC0798A6E3417F9(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					func_155();
					Global_19466 = 1;
					break;
				
				case 1:
					func_155();
					Global_19466 = 2;
					break;
				
				case 2:
					func_155();
					func_153();
					Global_19466 = 3;
					break;
				
				case 3:
					func_155();
					Global_19466 = 4;
					break;
				
				case 4:
					func_155();
					Global_19466 = 5;
					break;
				
				case 5:
					func_155();
					func_153();
					Global_19466 = 6;
					break;
				
				case 6:
					func_155();
					Global_19466 = 7;
					break;
				
				case 7:
					func_155();
					Global_19466 = 8;
					break;
				
				case 8:
					func_155();
					func_153();
					Global_19466 = 9;
					break;
				
				case 9:
					func_155();
					Global_19466 = 10;
					break;
				
				case 10:
					func_155();
					Global_19466 = 11;
					break;
				
				case 11:
					func_155();
					func_153();
					Global_19466 = 0;
					break;
				}
		}
		if (unk_0xBFC0798A6E3417F9(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					func_151();
					func_148();
					Global_19466 = 11;
					break;
				
				case 1:
					func_151();
					Global_19466 = 0;
					break;
				
				case 2:
					func_151();
					Global_19466 = 1;
					break;
				
				case 3:
					func_151();
					func_148();
					Global_19466 = 2;
					break;
				
				case 4:
					func_151();
					Global_19466 = 3;
					break;
				
				case 5:
					func_151();
					Global_19466 = 4;
					break;
				
				case 6:
					func_151();
					func_148();
					Global_19466 = 5;
					break;
				
				case 7:
					func_151();
					Global_19466 = 6;
					break;
				
				case 8:
					func_151();
					Global_19466 = 7;
					break;
				
				case 9:
					func_151();
					func_148();
					Global_19466 = 8;
					break;
				
				case 10:
					func_151();
					Global_19466 = 9;
					break;
				
				case 11:
					func_151();
					Global_19466 = 10;
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_163(2, Global_19461, 0))
		{
			func_155();
			Global_19465 = 1;
			settimera(0);
			switch (Global_19486.f_1)
			{
				case 6:
					if (Global_19466 < (34 - 1))
					{
						Global_19466++;
					}
					break;
				
				case 5:
					if (Global_19466 < 3)
					{
						Global_19466++;
					}
					break;
				}
		}
		if (func_163(2, Global_19460, 0))
		{
			func_151();
			Global_19465 = 1;
			settimera(0);
			if (Global_19466 > 0)
			{
				Global_19466 = (Global_19466 - 1);
			}
		}
		if (func_163(2, Global_19462, 0))
		{
			func_148();
			Global_19465 = 1;
			settimera(0);
			if (Global_19466 > 3)
			{
				Global_19466 = (Global_19466 - 4);
			}
		}
		if (func_163(2, Global_19463, 0))
		{
			func_153();
			Global_19465 = 1;
			settimera(0);
			if (Global_19466 < 8)
			{
				Global_19466 += 4;
			}
		}
	}
}

void func_148()
{
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_149();
}

void func_149()
{
	if (func_150())
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

int func_150()
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

void func_151()
{
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_152();
}

void func_152()
{
	if (func_150())
	{
		if (Global_19669 == 0)
		{
			unk_0x5A963FB0365294C8(3);
		}
		else
		{
			unk_0x5A963FB0365294C8(4);
		}
	}
}

void func_153()
{
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_154();
}

void func_154()
{
	if (func_150())
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

void func_155()
{
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_156();
}

void func_156()
{
	if (func_150())
	{
		if (Global_19669 == 0)
		{
			unk_0x5A963FB0365294C8(4);
		}
		else
		{
			unk_0x5A963FB0365294C8(3);
		}
	}
}

void func_157(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_81(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_81(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_81(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_81(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_81(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_158(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_81(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_81(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_81(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_81(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_81(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_159()
{
	StringCopy(&(Global_8064[0]), "CELL_900", 16);
	Global_8064[0].f_4 = 10;
	StringCopy(&(Global_8064[1]), "CELL_901", 16);
	Global_8064[1].f_4 = 0;
	StringCopy(&(Global_8064[2]), "CELL_902", 16);
	Global_8064[2].f_4 = 1;
	StringCopy(&(Global_8064[3]), "CELL_903", 16);
	Global_8064[3].f_4 = 2;
	StringCopy(&(Global_8064[4]), "CELL_904", 16);
	Global_8064[4].f_4 = 3;
	StringCopy(&(Global_8064[5]), "CELL_905", 16);
	Global_8064[5].f_4 = 4;
	StringCopy(&(Global_8064[6]), "CELL_906", 16);
	Global_8064[6].f_4 = 5;
	StringCopy(&(Global_8064[7]), "CELL_907", 16);
	Global_8064[7].f_4 = 6;
	StringCopy(&(Global_8064[8]), "CELL_908", 16);
	Global_8064[8].f_4 = 7;
	StringCopy(&(Global_8064[9]), "CELL_909", 16);
	Global_8064[9].f_4 = 8;
	StringCopy(&(Global_8064[10]), "CELL_910", 16);
	Global_8064[10].f_4 = 9;
	StringCopy(&(Global_8064[11]), "CELL_911", 16);
	Global_8064[11].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_8147[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_8064[iVar14].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_8147[iVar13] = iVar14;
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(11);
					unk_0x3CAEA85DA607305E(iVar13);
					func_81(&(Global_8064[iVar14]));
					unk_0x7E60D21B163E9D56();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

void func_160(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_161()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_162();
	}
}

void func_162()
{
	if (func_150())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
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

void func_164()
{
	if (func_163(2, Global_19454, 0))
	{
		iLocal_108 = 0;
		unk_0x5D96D8530B3D0904(&Global_7357, 0);
		func_84();
		Global_19464 = 1;
		if (Global_76622)
		{
			func_299();
		}
		else
		{
			func_288();
		}
		wait(0);
		if (Global_19486.f_1 > 3)
		{
			Global_19486.f_1 = 7;
		}
		StringCopy(&cLocal_84, "", 16);
	}
}

void func_165()
{
	if (Global_19464 == 0)
	{
		if (func_163(2, Global_19455, 0))
		{
			if (!func_146())
			{
				Global_21919 = 0;
				Global_21918 = 0;
				Global_21920 = 0;
				iLocal_281 = 0;
				func_161();
				Global_19464 = 1;
				if (iLocal_69 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_74 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
					{
						wait(0);
					}
					iLocal_77 = unk_0xA52833FE33F41C53(uLocal_74);
					bVar0 = false;
					if (unk_0x58424C49F8924842())
					{
						if (Global_76622)
						{
							if (iLocal_77 < iLocal_72)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_77 == iLocal_71 || iLocal_77 > iLocal_71)
						{
							bVar0 = true;
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_306.f_2936 = (iLocal_77 - iLocal_71);
						func_170();
					}
					else
					{
						if (iLocal_77 < 0)
						{
							iLocal_77 = 0;
						}
						Global_6671 = Global_19492[iLocal_77];
						if (Global_19661 != 145)
						{
							if (Global_6671 != Global_19661)
							{
								iLocal_65 = 1;
							}
							else
							{
								iLocal_65 = 0;
							}
						}
						else
						{
							iLocal_65 = 0;
						}
						if (iLocal_65 == 0)
						{
							if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_7356, 29))
								{
									func_169(Global_6671, 1);
									if (func_80(Global_6671, Global_19486) == 0)
									{
										func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_6671].f_4), "CELL_195", 0);
									}
									else
									{
										func_157(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", &(Global_1798[Global_6671].f_7), &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_3), 0);
									}
									func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_160(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x5D96D8530B3D0904(&Global_7356, 29);
								}
							}
							else
							{
								bLocal_301 = false;
								bLocal_302 = false;
								if (Global_76622)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x7F8A39872A07D2CE(&(Global_1798[Global_6671].f_3), &(Global_7259[iVar1])))
										{
											if (!unk_0x7F8A39872A07D2CE(&(Global_7259[iVar1].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_301 = true;
												iLocal_303 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (unk_0x7F8A39872A07D2CE(&(Global_1798[Global_6671].f_3), &(Global_7194[iVar2])))
										{
											if (!unk_0x7F8A39872A07D2CE(&(Global_7194[iVar2].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_301 = true;
												iLocal_303 = iVar2;
												if (iLocal_303 == iLocal_303)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_167(Global_6671) && unk_0xEAE0D21A50E6C7F4(Global_7357, 0) == 0)
								{
									if (func_135(Global_6671, Global_19486) == 0 && func_87(Global_6671, Global_19486) == 0)
									{
										bLocal_302 = false;
									}
									else
									{
										bLocal_302 = true;
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
								{
									func_166();
									iLocal_108 = 1;
								}
								else if (bLocal_302 == 0 && bLocal_301 == 0)
								{
									Global_21919 = 0;
									Global_21918 = 0;
									Global_21920 = 0;
									if (unk_0xEAE0D21A50E6C7F4(Global_7357, 19) && Global_6671 == 129)
									{
									}
									else
									{
										func_97();
									}
								}
								else
								{
									func_134();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_166()
{
	iLocal_106 = unk_0x1C0640BA9A7327B3();
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	switch (Global_6671)
	{
		case 2:
			func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7001", &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), 0, 0);
			break;
		
		case 0:
			func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7002", &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), 0, 0);
			break;
		
		case 12:
			func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7003", &(Global_1798[Global_6671].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_19474)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_19474)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_160(Global_19467, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_19467, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_167(int iParam0)
{
	switch (Global_19486)
	{
		case 0:
			if (func_168(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_91(iParam0);
	iVar2 = func_91(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_90(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_89(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_169(int iParam0, int iParam1)
{
	Global_1798[iParam0].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_18 = iParam1;
	}
}

void func_170()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (Global_19474)
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_157(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_174(&Local_306);
	if (Global_19486.f_1 > 3)
	{
		func_160(Global_19467, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
		iLocal_75 = 0;
		if (func_173(&Local_306))
		{
			sVar0 = unk_0x6E524813889AECF8(Local_306[Local_306.f_2936]);
		}
		else
		{
			sVar0 = func_171(&(Local_306.f_34[func_172(Local_306.f_2936, &Local_306)].f_13));
		}
		unk_0x7E60C62A7CE58FC8(Global_19467, "SET_HEADER");
		unk_0x7ACC3006A87F8B39("CELL_CONDFNH");
		unk_0xD06AC7C87A34A6AD(sVar0);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
		Local_306.f_2999 = 0;
		iLocal_91 = 1;
	}
}

var func_171(var uParam0)
{
	return uParam0;
}

int func_172(int iParam0, var uParam1)
{
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_173(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0)
{
	iVar0 = 0;
	if (func_182(uParam0, &uVar36))
	{
		if (func_173(uParam0))
		{
			uParam0->f_2963 = { func_181((*uParam0)[uParam0->f_2936]) };
			sVar37 = unk_0x6E524813889AECF8((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_172(uParam0->f_2936, uParam0)] };
			sVar37 = func_171(&(uParam0->f_34[func_172(uParam0->f_2936, uParam0)].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0xD1C89E02700AE9F0())
		{
			if (!Global_1574432)
			{
				if (func_180(unk_0xD803B885F5E47A62()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_173(uParam0))
		{
			if (((unk_0x9AC6AC57719E98B2((*uParam0)[uParam0->f_2936]) || unk_0x889220581260408F((*uParam0)[uParam0->f_2936])) || unk_0xC8F7BE78FDF151A8((*uParam0)[uParam0->f_2936])) || unk_0x090F53DFD7C02BB7((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x8BB6DE13A9F3105E())
		{
			bVar38 = false;
		}
		if (unk_0x8F587494C7A24CE7(0))
		{
			bVar38 = false;
		}
		if (unk_0x74684D5E87B13DBD(&(uParam0->f_2963)) || unk_0x5EB60FF82531F781(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x42912347AD653D4C(&(uParam0->f_2963)) || unk_0xD8CF175826CCB178(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x3C638171E81B9AA1())
		{
			if (unk_0xDC30EF462887322E())
			{
				if (unk_0x71467D5C7AFB49C6())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x33A494591F2C1975())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_76622)
			{
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT_EMPTY");
				unk_0x3CAEA85DA607305E(iVar0);
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(18);
				unk_0x3CAEA85DA607305E(iVar0);
				unk_0x3CAEA85DA607305E(0);
				if (!Global_2543673.f_1 || Global_2543673.f_38)
				{
					unk_0x7ACC3006A87F8B39("CELL_MP_1000");
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("CELL_MP_1000b");
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_41431 == 15)
			{
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT_EMPTY");
				unk_0x3CAEA85DA607305E(iVar0);
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(18);
				unk_0x3CAEA85DA607305E(iVar0);
				unk_0x3CAEA85DA607305E(0);
				if (!Global_2543673.f_1 || Global_2543673.f_38)
				{
					unk_0x7ACC3006A87F8B39("CELL_MP_1000");
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("CELL_MP_1000b");
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_173(uParam0))
		{
			Var39 = { func_181((*uParam0)[uParam0->f_2936]) };
			if ((func_180(unk_0xD803B885F5E47A62()) && func_180((*uParam0)[uParam0->f_2936])) && unk_0x48B6FD3E8057B556(&Var39))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT_EMPTY");
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("CELL_MP_1009");
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_173(uParam0))
		{
			if (unk_0xB552DC43762F9C85() < unk_0xA64DBBA7BDE2B926())
			{
				if (!unk_0x04A104F429E6CBB0(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("PIM_DFRQ2");
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("CELL_MP_1007");
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x080E9D045AEE5605())
		{
			if (unk_0xF2EC2A39FF9E838D(&(uParam0->f_2963)))
			{
				unk_0xD9DA83C40D038174(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0xC2F420D189FDB329() && !func_179(Var1))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("CELL_MP_1003");
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x0674E58A79778E99(&Global_7358, 6);
		bVar38 = false;
		if (func_173(uParam0))
		{
			if (func_178(unk_0xD803B885F5E47A62(), 1, 1))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_177((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[(*uParam0)[uParam0->f_2936]].f_195, 2))
						{
							bVar38 = true;
							unk_0x5D96D8530B3D0904(&Global_7358, 6);
						}
					}
				}
			}
			if ((*uParam0)[uParam0->f_2936] != func_16() && func_178((*uParam0)[uParam0->f_2936], 0, 0))
			{
				if (func_175((*uParam0)[uParam0->f_2936], 146))
				{
					bVar38 = false;
				}
			}
		}
		if (Global_1574401 || Global_1574402)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0);
			if (!unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1195, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x7ACC3006A87F8B39("CELL_MP_1008");
			}
			else
			{
				unk_0x7ACC3006A87F8B39("CELL_MP_1008b");
			}
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_LEFT_SESS");
		unk_0x47AFB2993A42BD03(1, 1);
		func_36(0);
		return;
	}
}

int func_175(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0] == iParam1)
	{
		return func_176(iParam0);
	}
	return 0;
}

int func_176(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
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

int func_179(int iParam0)
{
	if (unk_0x080E9D045AEE5605() && unk_0xC2F420D189FDB329())
	{
		iVar0 = unk_0x25904A548EB5967C();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x30BD62C32AF88880(&Global_2513148, iVar1);
				if (iParam0 == Global_2513148)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0, -3, 1) || unk_0xB5E18209CA3E7DE6(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_181(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0, -1) || (unk_0xB5E18209CA3E7DE6(1, -1) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_181(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_182(var uParam0, int iParam1)
{
	if (!unk_0x58424C49F8924842())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_178((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_172(uParam0->f_2936, uParam0);
		if (unk_0xD9AF1D6157682D28(&(uParam0->f_34[iVar0])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_183()
{
	if (func_163(2, Global_19455, 0))
	{
		unk_0x0674E58A79778E99(&Global_7357, 0);
		iLocal_108 = 0;
		func_161();
		Global_19464 = 1;
		Global_21919 = 0;
		Global_21918 = 0;
		Global_21920 = 0;
		func_97();
	}
}

void func_184()
{
	if (iLocal_101)
	{
		if (timera() > 150)
		{
			iLocal_101 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_163(2, 181, 0))
		{
			if (iLocal_73 > 0)
			{
				iLocal_73 = (iLocal_73 - 1);
			}
			else
			{
				iLocal_73 = (iLocal_69 - 1);
			}
			func_148();
			iLocal_101 = 1;
			settimera(0);
		}
		if (func_163(2, 180, 0))
		{
			iLocal_73++;
			if (iLocal_73 == iLocal_69)
			{
				iLocal_73 = 0;
			}
			func_153();
		}
	}
	if (iLocal_101 == 0)
	{
		if (func_163(2, Global_19462, 0))
		{
			if (iLocal_73 > 0)
			{
				iLocal_73 = (iLocal_73 - 1);
			}
			else
			{
				iLocal_73 = (iLocal_69 - 1);
			}
			func_148();
			iLocal_101 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19463, 0))
		{
			iLocal_73++;
			if (iLocal_73 == iLocal_69)
			{
				iLocal_73 = 0;
			}
			func_153();
			iLocal_101 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19461, 0))
		{
			func_186();
			func_186();
			func_186();
			func_186();
			func_186();
			unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			iLocal_101 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19460, 0))
		{
			func_185();
			func_185();
			func_185();
			func_185();
			func_185();
			unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			iLocal_101 = 1;
			settimera(0);
		}
	}
}

void func_185()
{
	if (iLocal_73 > 0)
	{
		iLocal_73 = (iLocal_73 - 1);
	}
	else
	{
		iLocal_73 = (iLocal_69 - 1);
	}
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_186()
{
	iLocal_73++;
	if (iLocal_73 == iLocal_69)
	{
		iLocal_73 = 0;
	}
	func_160(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_187()
{
	iLocal_73++;
	if (iLocal_73 == iLocal_69)
	{
		iLocal_73 = 0;
		unk_0x0674E58A79778E99(&Global_7356, 16);
	}
	func_153();
	unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
	uLocal_74 = unk_0x7A8BB56B212464AC();
	while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
	{
		wait(0);
	}
	iLocal_77 = unk_0xA52833FE33F41C53(uLocal_74);
	if (iLocal_77 < 0)
	{
		iLocal_77 = 0;
	}
	if (Global_76622)
	{
		if (iLocal_77 > iLocal_72 || iLocal_77 == iLocal_72)
		{
			if (Global_21836 == Global_19492[iLocal_77])
			{
				unk_0x0674E58A79778E99(&Global_7356, 16);
			}
		}
	}
	else if (Global_21836 == Global_19492[iLocal_77])
	{
		unk_0x0674E58A79778E99(&Global_7356, 16);
	}
}

void func_188()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_7358, 6))
	{
		if (!unk_0x60F025D317CE2512(&(Local_306.f_2963)))
		{
			unk_0x0674E58A79778E99(&Global_7358, 6);
			StringCopy(&cLocal_84, "", 16);
			Global_19486.f_1 = 3;
		}
	}
	switch (Local_306.f_2999)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_300, 1))
			{
				if (!Global_98796.f_1417)
				{
					unk_0x0674E58A79778E99(&iLocal_300, 0);
					unk_0x0674E58A79778E99(&iLocal_300, 1);
				}
				return;
			}
			if (Local_306.f_2976)
			{
				if (Local_306.f_2981)
				{
					iVar39 = 2;
					_set_warning_message_2("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1, 0);
					if (Local_306.f_2982)
					{
						if (func_163(2, Global_19455, 0) || unk_0x06F8112AA79C53D9(2, 201))
						{
							Global_19486.f_1 = 3;
						}
					}
					else if (func_163(2, Global_19455, 0) || unk_0x06F8112AA79C53D9(2, 201))
					{
					}
					else
					{
						Local_306.f_2982 = 1;
					}
				}
				else
				{
					iLocal_75 = Local_306.f_2946;
					switch (Local_306.f_2937[Local_306.f_2946])
					{
						case 1:
							if (!Global_2543673.f_1)
							{
								if (!unk_0x72B92E9113241B15() && !unk_0x807B1AAA48651B57())
								{
									Local_306.f_2976 = 0;
									func_284();
									Local_306.f_2977 = 0;
									if (func_173(&Local_306))
									{
										sVar53 = unk_0x6E524813889AECF8(Local_306[Local_306.f_2936]);
									}
									else
									{
										sVar53 = func_171(&(Local_306.f_34[func_172(Local_306.f_2936, &Local_306)].f_13));
									}
									func_283(sVar53);
									Local_306.f_2999 = 1;
									func_282(&(Local_306.f_2979));
									func_281(0);
									if (Global_76622)
									{
										iVar55 = Global_262145.f_162;
										if (!unk_0xAC0726A85BBACC32(iVar55, 0, 1, 0, &iVar54, -1, 0))
										{
											iVar55 = (iVar55 - iVar54);
										}
										Var40 = { func_181(unk_0xD803B885F5E47A62()) };
										if (iVar55 > 0)
										{
											if (func_280())
											{
												func_268(1654961868, iVar55, &iVar0, 0, 1, 0);
												Global_4263954[iVar0].f_14 = { Var40 };
											}
											else
											{
												unk_0x720F06601D6A3D91(iVar55, &Var40, false, true);
											}
										}
										func_98(1915, 1, -1);
									}
								}
								else if (unk_0x72B92E9113241B15())
								{
								}
								else if (unk_0x807B1AAA48651B57())
								{
									if (!Global_2543673.f_59)
									{
										Global_2543673 = 1;
										Global_2543673.f_2 = 1;
										Global_2543673.f_59 = 1;
									}
								}
							}
							else if (Global_2543673.f_38)
							{
							}
							else
							{
								func_267();
								unk_0x4D7F4CC43D4D0DE3(-1, "Hang_Up", &Global_19475, 1);
								if (Global_2543673.f_1)
								{
									func_265();
								}
								Global_19486.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_264(&(Global_2537071.f_322[Local_306[Local_306.f_2936]])))
							{
								if (!func_263(&(Global_2537071.f_322[Local_306[Local_306.f_2936]]), 30000, 0))
								{
									if (func_251(0, 0, 1, 1))
									{
										func_241("CELL_MP_1009H", unk_0x6E524813889AECF8(Local_306[Local_306.f_2936]), func_242(Local_306[Local_306.f_2936], -2, 0, 0, 0), -1);
									}
									Local_306.f_2976 = 0;
									return;
								}
							}
							Var56 = { func_181(Local_306[Local_306.f_2936]) };
							if ((!func_180(unk_0xD803B885F5E47A62()) || !func_180(Local_306[Local_306.f_2936])) || !unk_0x48B6FD3E8057B556(&Var56))
							{
								if (func_251(1, 1, 1, 1))
								{
									if (!unk_0x7F8A39872A07D2CE(unk_0x6E524813889AECF8(Local_306[Local_306.f_2936]), "**Invalid**"))
									{
										func_241("CELL_MP_1009M", unk_0x6E524813889AECF8(Local_306[Local_306.f_2936]), func_242(Local_306[Local_306.f_2936], -2, 0, 0, 0), -1);
									}
									else
									{
										func_240("CELL_MP_1009N", -1);
									}
								}
								Local_306.f_2976 = 0;
								return;
							}
							Local_306.f_2976 = 0;
							Local_306.f_2999 = 2;
							iLocal_3325 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x051069670EA2AE64())
							{
								if (unk_0xBA301E03A078FA59() && !unk_0x04A104F429E6CBB0(&(Local_306.f_2963)))
								{
									if (unk_0x3899657BAAA3298E(&(Local_306.f_2963), ""))
									{
										Local_306.f_2976 = 0;
										Global_19486.f_1 = 3;
									}
								}
								else
								{
									unk_0x7DA6B436D3570520(&(Local_306.f_2963));
									Local_306.f_2976 = 0;
									Global_19486.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x080E9D045AEE5605())
							{
								if (unk_0xF2EC2A39FF9E838D(&(Local_306.f_2963)))
								{
									unk_0xD9DA83C40D038174(&Var4, 35, &(Local_306.f_2963));
								}
							}
							if (Var4 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_179(Var4))
									{
										if (unk_0x1A2E1FAD957C71E2(Var4))
										{
											Local_306.f_2976 = 0;
											unk_0x1E64CE678ED5F61E("CREW_JOIN");
											unk_0xD06AC7C87A34A6AD(&(Var4.f_1));
											unk_0x47AFB2993A42BD03(1, 1);
											Global_19486.f_1 = 3;
										}
										else
										{
											Global_19486.f_1 = 3;
											Local_306.f_2976 = 0;
											Global_19486.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_306.f_2976 = 0;
							break;
						
						case 4:
							Local_306.f_2976 = 0;
							func_170();
							unk_0x7DA6B436D3570520(&(Local_306.f_2963));
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1195, Local_306[Local_306.f_2936]))
							{
								unk_0x0674E58A79778E99(&(Global_2439138.f_1195), Local_306[Local_306.f_2936]);
							}
							else
							{
								Global_2439138.f_1195 = 0;
								unk_0x5D96D8530B3D0904(&(Global_2439138.f_1195), Local_306[Local_306.f_2936]);
							}
							func_170();
							Local_306.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_19464 == 0)
			{
				if (func_163(2, Global_19455, 0))
				{
					Local_306.f_2982 = 0;
					Local_306.f_2981 = 0;
					unk_0x0674E58A79778E99(&Global_7357, 0);
					iLocal_90 = 0;
					func_161();
					Global_19464 = 1;
					unk_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_74 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(uLocal_74))
					{
						wait(0);
					}
					Local_306.f_2946 = unk_0xA52833FE33F41C53(uLocal_74);
					if (!func_182(&Local_306, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_239("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_239("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2543673.f_59 = 0;
								Local_306.f_2981 = 1;
								Local_306.f_2976 = 1;
								return;
								break;
						}
						Global_19486.f_1 = 3;
						return;
					}
					Global_2543673.f_59 = 0;
					Local_306.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_182(&Local_306, &iVar3))
			{
				func_281(1);
				func_267();
				Local_306.f_2978 = 1;
				Local_306.f_2977 = 1;
				return;
			}
			else if (Local_306.f_2977)
			{
				if (!Local_306.f_2978)
				{
					if (!Global_2543673.f_1 || !unk_0xC8DB5FB7097EAC7E())
					{
						func_281(1);
						func_267();
						Local_306.f_2978 = 1;
						Local_306.f_2977 = 1;
						return;
					}
					if (unk_0x58424C49F8924842())
					{
						if (func_163(2, Global_19456, 0))
						{
							func_267();
							Local_306.f_2976 = 0;
							return;
						}
						if (func_238(Global_2543673.f_20))
						{
							if (unk_0x04A104F429E6CBB0(&(Global_2543673.f_20)))
							{
								if (!unk_0xD9AF1D6157682D28(&(Global_2543673.f_20)))
								{
									func_281(1);
									func_267();
									Local_306.f_2978 = 1;
									Local_306.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_281(1);
							func_267();
							Local_306.f_2978 = 1;
							Local_306.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_267();
						Local_306.f_2976 = 0;
						func_170();
						return;
					}
					if (!Global_2543673.f_37)
					{
						if (Global_2543673.f_33 == -1)
						{
							if (func_263(&(Local_306.f_2979), 40000, 1))
							{
								func_281(1);
								func_267();
								Local_306.f_2978 = 1;
								Local_306.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2543673.f_33)
							{
								case 1:
									func_237();
									func_236();
									if (unk_0x8CD06866876216F2())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x55D0A2DB35045A35(iLocal_79);
									return;
									break;
								
								case 2:
									func_281(1);
									func_267();
									Local_306.f_2978 = 1;
									return;
									break;
								
								default:
									func_281(1);
									func_267();
									Local_306.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_264(&(Local_306.f_2979)))
			{
				func_282(&(Local_306.f_2979));
				func_235(&(Local_306.f_2979), 1, 0);
			}
			else
			{
				if (func_263(&(Local_306.f_2979), 15000, 1))
				{
					func_267();
					func_84();
					func_286();
					Global_19486.f_1 = 3;
					return;
				}
				if (Global_2543673.f_1 || unk_0xEAE0D21A50E6C7F4(Global_7357, 20))
				{
					if (func_163(2, Global_19456, 0))
					{
						func_267();
						Global_19486.f_1 = 3;
						return;
					}
				}
				if (Global_2543673.f_1)
				{
					if (func_234(&Local_306, &(Local_306.f_2983)))
					{
						func_233(&(Local_306.f_2979), 1, 0);
						Local_306.f_2978 = 0;
						Local_306.f_2977 = 1;
						if (Global_76622)
						{
							func_231(105, 1, -1, 1);
						}
					}
					else
					{
						func_281(1);
						func_267();
						Local_306.f_2978 = 1;
						Local_306.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3325 == 1)
			{
				if (func_225(&vLocal_3306, &(vLocal_3306.f_1), &(vLocal_3306.f_2), 0, 0, &cLocal_3309, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0))
				{
					StringCopy(&cLocal_3309, unk_0x839DD4A099BDBEE3(), 64);
					vLocal_3306.x = 0;
					vLocal_3306.z = 0;
					vLocal_3306.y = 0;
					iLocal_3325 = 0;
					iLocal_3326 = unk_0x4880526EC51D1C27(&cLocal_3309);
					StringCopy(&cLocal_3309, unk_0x48EB24FD5B17B101(&cLocal_3309, 0, iLocal_3326, 63), 64);
					func_233(&(Global_2537071.f_322[Local_306[Local_306.f_2936]]), 0, 0);
					if (unk_0xEA6BC48857E0AC4C(func_224(&cLocal_3309)))
					{
					}
					else
					{
						Var69 = { func_181(Local_306[Local_306.f_2936]) };
						unk_0x911F1543C2BB79B1(&cLocal_3309, &Var69);
						func_189("CP_TM_SENT", Local_306[Local_306.f_2936], 0, 0, 0, 1, 0);
						func_98(1914, 1, -1);
					}
					Local_306.f_2999 = 0;
				}
				if (vLocal_3306.x == 2)
				{
					vLocal_3306.x = 0;
					vLocal_3306.z = 0;
					vLocal_3306.y = 0;
					iLocal_3325 = 0;
					Local_306.f_2999 = 0;
				}
			}
			break;
	}
}

int func_189(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = -1;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != -1 && unk_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				unk_0x3A820E495A7BA3E5(func_199(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_242(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_242(iParam1, -2, 1, 0, 0));
		}
		unk_0xD06AC7C87A34A6AD(func_197(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_181(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_196(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_190(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_190(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_195() || !unk_0xA14BB9332558B949()) || !func_193(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_191(iParam2);
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

int func_191(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_192(iVar0);
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

void func_192(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_193(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_194(-1, 0) == 8;
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

int func_194(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_68();
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

bool func_195()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_196(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_197(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_198(&cVar0);
}

var func_198(char[4] cParam0)
{
	return cParam0;
}

int func_199(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_219())
	{
		iVar2 = func_215(iParam1);
		if (!iVar2 == -1)
		{
			return func_213(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_16())
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
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_202(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_201(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_200(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_200(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_201(int iParam0, int iParam1, int iParam2)
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

int func_202(int iParam0)
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

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_212() || (func_211() && func_209())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_208(iParam2, iVar0);
		}
		else
		{
			return func_208(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_201(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_194990, 1))
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

int func_205(int iParam0, bool bParam1)
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

int func_206(int iParam0, int iParam1, int iParam2)
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
			if (!func_201(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
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

bool func_209()
{
	if (func_210())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_210()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_211()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_212()
{
	if (func_210() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_214(iParam0);
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

var func_214(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_215(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_217(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_216(iParam0)];
		}
	}
	return -1;
}

int func_216(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_16();
}

bool func_217(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_218(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_16();
}

int func_218(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1628237[iParam0].f_11 != func_16())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_219()
{
	if (((func_223() || func_222()) || func_221()) || func_220())
	{
		return 1;
	}
	return 0;
}

var func_220()
{
	return Global_2450632.f_19;
}

var func_221()
{
	return Global_2450632.f_17;
}

var func_222()
{
	return Global_2450632.f_16;
}

var func_223()
{
	return Global_2450632.f_15;
}

var func_224(char[4] cParam0)
{
	return cParam0;
}

int func_225(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33)
{
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_230())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_230())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0x8A22C4C08282BF26(-884469787) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0x8A22C4C08282BF26(-884469787) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_230())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x0EFF6B4415DAF4A1())
				{
					iVar7 = 6;
				}
				else if (unk_0xB3260A60545D3F11() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x9D51BC08CB21B1BF(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0x9D51BC08CB21B1BF(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x0EFF6B4415DAF4A1())
				{
					iVar8 = 6;
				}
				else if (unk_0xB3260A60545D3F11() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xB3260A60545D3F11() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_195())
					{
						iVar9 = 64;
					}
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_194997)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_4456448.f_194997), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_233457)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_4456448.f_233457), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_233457)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_4456448.f_233457), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					Var10 = { Global_4456448.f_233489[iParam30] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4456448.f_233570[iParam30][iParam31] };
					}
					if (unk_0xEA6BC48857E0AC4C(&Var10))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xB3260A60545D3F11() == 0)
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar26 = 0;
					while (iVar26 <= 7)
					{
						if (unk_0x2EBF5002C6B6A06C(&(Global_4456448.f_195148[iVar26])))
						{
							StringCopy(&(Global_4456448.f_195148[iVar26]), "", 64);
						}
						iVar26++;
					}
					unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, &(Global_4456448.f_195148[0]), &(Global_4456448.f_195148[1]), &(Global_4456448.f_195148[2]), &(Global_4456448.f_195148[3]), &(Global_4456448.f_195148[4]), &(Global_4456448.f_195148[5]), &(Global_4456448.f_195148[6]), &(Global_4456448.f_195148[7]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_63966[iParam16].f_6[0])))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar27 = 0;
						while (iVar27 <= 1)
						{
							if (unk_0x2EBF5002C6B6A06C(&(Global_4456448.f_63966[iParam16].f_6[iVar27])))
							{
								StringCopy(&(Global_4456448.f_63966[iParam16].f_6[iVar27]), "", 64);
							}
							iVar27++;
						}
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_4456448.f_63966[iParam16].f_6[0]), &(Global_4456448.f_63966[iParam16].f_6[1]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_230())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_230())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0xA3F916BCE430ED26())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0xDC30EF462887322E())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					iVar9 = 15;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0xC8272323B4ECB9A3(64);
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xB3260A60545D3F11() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_230())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_230())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_230())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar28 = 0;
					while (iVar28 <= 7)
					{
						if (unk_0x2EBF5002C6B6A06C(&(Global_4456448.f_195019[iVar28])))
						{
							StringCopy(&(Global_4456448.f_195019[iVar28]), "", 64);
						}
						iVar28++;
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam33))
					{
						sVar4 = sParam33;
					}
					if (bParam11)
					{
						unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, &(Global_4456448.f_195019[0]), &(Global_4456448.f_195019[1]), &(Global_4456448.f_195019[2]), &(Global_4456448.f_195019[3]), &(Global_4456448.f_195019[4]), &(Global_4456448.f_195019[5]), &(Global_4456448.f_195019[6]), &(Global_4456448.f_195019[7]), iVar9);
					}
				}
			}
			StringCopy(&Global_1652599, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0xDAC65F45B0B2D176();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xEA6BC48857E0AC4C(&Global_1652599))
						{
							StringCopy(&Global_1652599, unk_0x839DD4A099BDBEE3(), 64);
							if (unk_0xEA6BC48857E0AC4C(&Global_1652599))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x4880526EC51D1C27(unk_0x839DD4A099BDBEE3());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xEA6BC48857E0AC4C(&Global_1652599))
									{
										if (unk_0x7F8A39872A07D2CE(" ", unk_0xA739D71DFFCCC22C(&Global_1652599, 0, 1)))
										{
											iVar2 = unk_0x4880526EC51D1C27(&Global_1652599);
											StringCopy(&Global_1652599, unk_0xA739D71DFFCCC22C(&Global_1652599, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_195())
					{
						*uParam1 = 0;
						return 1;
					}
					if (unk_0x9F618E6F8EA8EFDE(*uParam1))
					{
						if (!unk_0x3E3CF43636981693(*uParam1))
						{
							unk_0xBBCE9616B024A2BF();
							iVar0 = unk_0xC5588D399205725D(*uParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1652599, unk_0x839DD4A099BDBEE3(), 64);
										iVar1 = unk_0x4880526EC51D1C27(&Global_1652599);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xEA6BC48857E0AC4C(&Global_1652599))
												{
													if (unk_0x7F8A39872A07D2CE(" ", unk_0xA739D71DFFCCC22C(&Global_1652599, iVar3, iVar3 + 1)))
													{
														*uParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*uParam1 != -3)
									{
										*uParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*uParam1 = 0;
									func_229(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x8A22C4C08282BF26(1779901043) == 0)
							{
								unk_0xBBCE9616B024A2BF();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0xAA328C07568EE96C(&Global_1652599, uParam1);
						}
						else
						{
							unk_0xDE39D2F0ED5FFA62(&Global_1652599, uParam1);
						}
					}
					else if (unk_0xEA6BC48857E0AC4C(unk_0x839DD4A099BDBEE3()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xBBCE9616B024A2BF();
						return 0;
					}
					else if (bParam22)
					{
						unk_0xAA328C07568EE96C(unk_0x839DD4A099BDBEE3(), uParam1);
					}
					else
					{
						unk_0xDE39D2F0ED5FFA62(unk_0x839DD4A099BDBEE3(), uParam1);
					}
					if (unk_0xDC30EF462887322E())
					{
						if ((!unk_0x58424C49F8924842() || func_227() == 0) || func_226() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKYACHTNAME");
						unk_0x9A681BEC95A1B92E(1);
					}
					else if (bParam29)
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKVEHICLENAME");
						unk_0x9A681BEC95A1B92E(1);
					}
					else
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKPROFANITY");
						unk_0x9A681BEC95A1B92E(1);
					}
					if (!unk_0x9F618E6F8EA8EFDE(*uParam1))
					{
						if (!unk_0xEA6BC48857E0AC4C(&Global_1652599))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xBBCE9616B024A2BF();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_226()
{
	if (!func_227())
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	if (func_228())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_228()
{
	return Global_2461181;
}

void func_229(int iParam0)
{
	Global_2461181 = iParam0;
}

int func_230()
{
	if ((((unk_0xB3260A60545D3F11() == 7 || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_232())
	{
		iVar0 = Global_2583656[iParam0][func_67(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_232()
{
	return 1;
	return 0;
}

void func_233(var uParam0, bool bParam1, bool bParam2)
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

int func_234(var uParam0, char* sParam1)
{
	if (Global_2543673.f_1)
	{
		if (unk_0xC8DB5FB7097EAC7E())
		{
			unk_0x470D6B2C6B39316E(&(uParam0->f_2963));
			Global_2543673.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2543673.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_235(var uParam0, bool bParam1, bool bParam2)
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

void func_236()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 9;
		Global_20818 = 1;
		if (Global_76622)
		{
			if (!unk_0x0EFF6B4415DAF4A1())
			{
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_1732), 15);
			}
		}
	}
}

void func_237()
{
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(4);
	unk_0x3CAEA85DA607305E(0);
	unk_0x3CAEA85DA607305E(2);
	unk_0x7ACC3006A87F8B39("CELL_CONDFON");
	unk_0xD06AC7C87A34A6AD(&Global_20820);
	unk_0x779B34565F4D71B1();
	func_81("CELL_300");
	func_81("CELL_219");
	func_81("CELL_219");
	unk_0x7E60D21B163E9D56();
	Global_2543673.f_37 = 1;
	unk_0x0674E58A79778E99(&Global_7356, 27);
	func_102();
}

bool func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_239(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_240(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_241(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam3);
}

int func_242(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_249(iParam0) && !bParam4)
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
	if (((func_249(unk_0xD803B885F5E47A62()) || (func_248() && func_247())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_246();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_178(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_199(iParam1, iParam0, 0);
							}
							else
							{
								return func_244(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_244(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_199(iParam1, iParam0, 0);
				}
				else
				{
					return func_243(0, -1, 0);
				}
			}
			else
			{
				return func_243(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_199(iParam1, iParam0, 0);
		}
		else
		{
			return func_244(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_244(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_243(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_244(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_219())
			{
				iVar3 = func_215(iParam0);
				if (!iVar3 == -1)
				{
					return func_213(iVar3);
				}
			}
			if ((func_245(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_201(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_200(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_215(iParam0);
	if (!iVar4 == -1)
	{
		return func_213(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_245(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_246()
{
	return Global_2359302.f_2;
}

bool func_247()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_248()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_249(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return 1;
	}
	if (func_250())
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

bool func_250()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_251(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_262())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (func_261())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_258(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_257(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_256())
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_2547056)
	{
		return 0;
	}
	if (func_252(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
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

bool func_253()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

bool func_254()
{
	return Global_2450632.f_591;
}

bool func_255()
{
	return Global_2450632.f_744;
}

bool func_256()
{
	return Global_2439138.f_3047.f_578;
}

int func_257(int iParam0)
{
	if (Global_2425662[iParam0].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_259(iParam0))
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

bool func_259(int iParam0)
{
	return func_260(iParam0);
}

bool func_260(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_261()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

int func_262()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_235(uParam0, bParam2, 0);
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

bool func_264(var uParam0)
{
	return uParam0->f_1;
}

void func_265()
{
	Global_2543673.f_1 = 0;
	Global_2543673 = 0;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	StringCopy(&(Global_2543673.f_39[0]), "", 64);
	Global_2543673.f_38 = 0;
	Global_2543673.f_56 = 0;
	Global_2543673.f_57 = 0;
	Global_2543673.f_58 = -2;
	Global_2543673.f_3 = 0;
	func_266(&(Global_2543673.f_20));
}

void func_266(var uParam0)
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

void func_267()
{
	Global_2543673.f_2 = 1;
	Global_2543673.f_38 = 1;
	if (unk_0x58424C49F8924842())
	{
		if (unk_0xC8DB5FB7097EAC7E())
		{
			while (unk_0x72B92E9113241B15())
			{
				wait(0);
			}
			unk_0xBE1F51E5568A1C6A();
			Global_2543673 = 0;
			Global_2543673.f_2 = 0;
		}
		else if (func_238(Global_2543673.f_20))
		{
			if (unk_0x04A104F429E6CBB0(&(Global_2543673.f_20)))
			{
				if (!unk_0xD9AF1D6157682D28(&(Global_2543673.f_20)))
				{
					func_265();
				}
			}
		}
		else
		{
			func_265();
		}
	}
	else
	{
		func_265();
	}
	if (Global_2543673.f_37)
	{
		func_36(0);
	}
	Global_2543673.f_37 = 0;
	Global_2543673.f_3 = 0;
}

void func_268(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_280())
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
				func_269(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_269(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_269(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_269(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_269(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_280())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_68()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_276(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_275(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_270(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_271(iParam0);
	}
}

void func_271(int iParam0)
{
	bVar0 = false;
	if (!func_280())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_274(iParam0))
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
		func_272(&(Global_4263954[iParam0]));
	}
}

void func_272(var uParam0)
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
	func_273(&(uParam0->f_14));
	func_273(&(uParam0->f_14.f_13));
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

void func_273(var uParam0)
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

int func_274(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_275(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_280())
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
				func_277(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_277(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_279(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_278();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_278()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_279(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_280()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_281(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7357, 20);
	}
}

void func_282(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_283(char* sParam0)
{
	Global_6671 = 132;
	StringCopy(&Global_20820, sParam0, 64);
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 10;
		func_111();
	}
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(4);
	unk_0x3CAEA85DA607305E(0);
	unk_0x3CAEA85DA607305E(2);
	unk_0x7ACC3006A87F8B39("CELL_CONDFON");
	unk_0xD06AC7C87A34A6AD(&Global_20820);
	unk_0x779B34565F4D71B1();
	func_81("CELL_300");
	func_81("CELL_211");
	func_81("CELL_211");
	unk_0x7E60D21B163E9D56();
	unk_0x5D96D8530B3D0904(&Global_7356, 20);
	func_102();
	unk_0x0674E58A79778E99(&Global_7356, 20);
}

void func_284()
{
	unk_0xAA3B9AD9924F7DB9();
	Global_2543673 = 1;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	Global_2543673.f_38 = 0;
}

void func_285()
{
	unk_0x55D0A2DB35045A35(iLocal_79);
	unk_0x43A06902454A1172(iLocal_79);
	Local_306.f_2978 = 0;
	unk_0x0674E58A79778E99(&Global_7356, 16);
	unk_0x0674E58A79778E99(&Global_7356, 9);
	unk_0x0674E58A79778E99(&Global_7356, 29);
	unk_0x0674E58A79778E99(&Global_7357, 20);
	unk_0x0674E58A79778E99(&Global_7357, 0);
	unk_0x0674E58A79778E99(&Global_7357, 18);
	func_287(12, iLocal_278);
	func_287(2, iLocal_279);
	func_287(0, iLocal_280);
	if (Local_306.f_2999 == 1)
	{
		if (unk_0x58424C49F8924842())
		{
			if (Global_2543673.f_33 == -1)
			{
				func_267();
			}
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_286()
{
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 11))
			{
				if (!Global_19429)
				{
					unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 0, 1);
				}
				if (Global_76622)
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 244, true);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 243, true);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 242, true);
				}
				unk_0x0674E58A79778E99(&Global_7356, 11);
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	Global_1798[iParam0].f_1 = iParam1;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_1 = iParam1;
	}
}

void func_288()
{
	func_287(147, 1320);
	func_287(74, 180);
	func_287(75, 190);
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	iLocal_69 = 0;
	iLocal_108 = 0;
	iLocal_91 = 0;
	func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar169 = 0;
	while (iVar169 < 167)
	{
		iVar170 = 0;
		iVar171 = 167;
		func_287(iVar171, 5000);
		func_21();
		while (iVar170 < 167)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				if ((iVar170 == 2 || iVar170 == 0) || iVar170 == 12)
				{
					func_287(12, 3);
					func_287(2, 1);
					func_287(0, 2);
					bLocal_66 = true;
				}
				else
				{
					bLocal_66 = false;
				}
			}
			else if (func_145(iVar170, Global_19486) == 1)
			{
				bLocal_66 = true;
			}
			else
			{
				bLocal_66 = false;
			}
			if (bLocal_66)
			{
				if (iVar170 != Global_19486)
				{
					if (iVar0[iVar170] == 0)
					{
						if (func_298(iVar170, Global_19486) == 1 || func_88(iVar170, Global_19486))
						{
							fLocal_67 = (to_float(func_302(iVar170)) / 100f);
						}
						else
						{
							fLocal_67 = to_float(func_302(iVar170));
						}
						if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
						{
							fLocal_68 = (to_float(func_302(iVar171)) / 100f);
						}
						else
						{
							fLocal_68 = to_float(func_302(iVar171));
						}
						if (fLocal_67 < fLocal_68)
						{
							iVar171 = iVar170;
							if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
							{
								if (iVar171 == 2)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7001", &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
								}
								if (iVar171 == 0)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7002", &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
								}
								if (iVar171 == 12)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7003", &(Global_1798[iVar171].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar170++;
		}
		Global_19492[iVar169] = iVar171;
		iVar0[iVar171] = 1;
		if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
		{
			if (func_145(iVar171, Global_19486) == 1)
			{
				if (iVar170 != Global_19486)
				{
					if (func_80(iVar171, Global_19486) == 0)
					{
						if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
						{
							func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 1f, -1f, -1f, &(Global_117[iVar171].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, &(Global_117[iVar171].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
					{
						func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 1f, -1f, -1f, &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
					}
					else
					{
						func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar169, Global_19486) == 1)
		{
			if (iVar169 != Global_19486)
			{
				iLocal_69++;
			}
		}
		iVar169++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
	{
		if (unk_0x58424C49F8924842())
		{
			if (Global_19429 == 0)
			{
				func_290();
			}
		}
	}
	func_289();
}

void func_289()
{
	if (!Global_19486.f_1 == 10 && !Global_19486.f_1 == 9)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
		{
			wait(750);
		}
		if (Global_19486.f_1 > 6)
		{
			func_160(Global_19467, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				func_158(Global_19467, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_19467, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_7359 = 99;
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
			{
				if (Global_19474)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				if (Global_19474)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_19429 == 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
				func_157(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	func_287(12, iLocal_278);
	func_287(2, iLocal_279);
	func_287(0, iLocal_280);
}

void func_290()
{
	func_287(147, 1320);
	func_287(74, 180);
	func_287(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_70 = iLocal_69;
	iLocal_71 = iLocal_70;
	func_297(&Local_306);
	iVar16 = 0;
	if (Global_76622)
	{
		if (func_293() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x117658E336116132(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xD803B885F5E47A62())
				{
					Local_306[iVar1] = iVar0;
					func_292(unk_0x6E524813889AECF8(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_306.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_180(unk_0xD803B885F5E47A62()))
	{
		iVar17 = unk_0xB552DC43762F9C85();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x695211DCB657FE4E(unk_0xDDCD29B36AA76B5B(iVar2)))
			{
				if (unk_0xEBB05BA2C0969525(unk_0xDDCD29B36AA76B5B(iVar2)))
				{
					Var3 = { func_291(iVar2) };
					if (!unk_0x60F025D317CE2512(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_306.f_34[iVar1] = { Var3 };
								if (unk_0xDC30EF462887322E())
								{
									StringCopy(&(Local_306.f_34[iVar1].f_13), unk_0xF8D2E600D59990EB(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_306.f_34[iVar1].f_13), unk_0xDDCD29B36AA76B5B(iVar2), 64);
								}
								func_292(&(Local_306.f_34[iVar1].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_306.f_2935 = (Local_306.f_33 + iVar1);
}

struct<13> func_291(int iParam0)
{
	unk_0x7E8D504C8FFA215C(iParam0, &Var0, 13);
	return Var0;
}

void func_292(char* sParam0)
{
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x7C19E5E4784BD7CF(to_float(2));
	unk_0x7C19E5E4784BD7CF(to_float(iLocal_70));
	unk_0x7C19E5E4784BD7CF(0f);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	func_81("CELL_MP_999");
	func_81("CELL_MP_999");
	unk_0x7E60D21B163E9D56();
	iLocal_70++;
	iLocal_69++;
}

int func_293()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_296())
	{
		return 1;
	}
	if (func_295())
	{
		return 1;
	}
	return func_294(120, -1);
}

int func_294(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_67(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_295()
{
	return Global_1312865;
}

bool func_296()
{
	return Global_1312867;
}

void func_297(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_16();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	func_282(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

int func_298(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_299()
{
	func_287(147, 1320);
	func_287(74, 180);
	func_287(75, 190);
	func_160(Global_19467, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_69 = 0;
	if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
	{
		if (unk_0x58424C49F8924842())
		{
			if (Global_19429 == 0)
			{
				func_300();
			}
		}
	}
	iLocal_72 = iLocal_69;
	iLocal_108 = 0;
	iLocal_91 = 0;
	iVar169 = iLocal_69;
	while (iVar169 < 167)
	{
		iVar170 = 0;
		iVar171 = 167;
		func_287(iVar171, 5000);
		func_21();
		while (iVar170 < 167)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
			{
				if ((iVar170 == 2 || iVar170 == 0) || iVar170 == 12)
				{
					func_287(12, 3);
					func_287(2, 1);
					func_287(0, 2);
					bLocal_66 = true;
				}
				else
				{
					bLocal_66 = false;
				}
			}
			else if (func_145(iVar170, Global_19486) == 1)
			{
				bLocal_66 = true;
			}
			else
			{
				bLocal_66 = false;
			}
			if (bLocal_66)
			{
				if (iVar170 != Global_19486)
				{
					if (iVar0[iVar170] == 0)
					{
						if (func_298(iVar170, Global_19486) == 1 || func_88(iVar170, Global_19486))
						{
							fLocal_67 = (to_float(func_302(iVar170)) / 100f);
						}
						else
						{
							fLocal_67 = to_float(func_302(iVar170));
						}
						if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
						{
							fLocal_68 = (to_float(func_302(iVar171)) / 100f);
						}
						else
						{
							fLocal_68 = to_float(func_302(iVar171));
						}
						if (fLocal_67 < fLocal_68)
						{
							iVar171 = iVar170;
							if (unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
							{
								if (iVar171 == 2)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7001", &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
								}
								if (iVar171 == 0)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7002", &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
								}
								if (iVar171 == 12)
								{
									func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, "CELL_7003", &(Global_1798[iVar171].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar170++;
		}
		Global_19492[iVar169] = iVar171;
		iVar0[iVar171] = 1;
		if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 0))
		{
			if (func_145(iVar171, Global_19486) == 1)
			{
				if (iVar170 != Global_19486)
				{
					if (func_80(iVar171, Global_19486) == 0)
					{
						if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
						{
							func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 1f, -1f, -1f, &(Global_117[iVar171].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, &(Global_117[iVar171].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_298(iVar171, Global_19486) == 1 || func_88(iVar171, Global_19486))
					{
						func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 1f, -1f, -1f, &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
					}
					else
					{
						func_157(Global_19467, "SET_DATA_SLOT", to_float(2), to_float(iVar169), 0f, -1f, -1f, &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_3), &(Global_1798[iVar171].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar169, Global_19486) == 1)
		{
			if (iVar169 != Global_19486)
			{
				iLocal_69++;
			}
		}
		iVar169++;
	}
	func_289();
}

void func_300()
{
	func_287(147, 1320);
	func_287(74, 180);
	func_287(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_70 = iLocal_69;
	iLocal_71 = iLocal_70;
	func_297(&Local_306);
	iVar16 = 0;
	if (Global_76622)
	{
		if (func_293() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x117658E336116132(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xD803B885F5E47A62())
				{
					Local_306[iVar1] = iVar0;
					func_301(unk_0x6E524813889AECF8(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_306.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_180(unk_0xD803B885F5E47A62()))
	{
		iVar17 = unk_0xB552DC43762F9C85();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x695211DCB657FE4E(unk_0xDDCD29B36AA76B5B(iVar2)))
			{
				if (unk_0xEBB05BA2C0969525(unk_0xDDCD29B36AA76B5B(iVar2)))
				{
					Var3 = { func_291(iVar2) };
					if (!unk_0x60F025D317CE2512(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_306.f_34[iVar1] = { Var3 };
								if (unk_0xDC30EF462887322E())
								{
									StringCopy(&(Local_306.f_34[iVar1].f_13), unk_0xF8D2E600D59990EB(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_306.f_34[iVar1].f_13), unk_0xDDCD29B36AA76B5B(iVar2), 64);
								}
								func_301(&(Local_306.f_34[iVar1].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_306.f_2935 = (Local_306.f_33 + iVar1);
}

void func_301(char* sParam0)
{
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x7C19E5E4784BD7CF(to_float(2));
	unk_0x7C19E5E4784BD7CF(to_float(iLocal_70));
	unk_0x7C19E5E4784BD7CF(0f);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	func_81("CELL_MP_999");
	func_81("CELL_MP_999");
	unk_0x7E60D21B163E9D56();
	iLocal_70++;
	iLocal_69++;
}

var func_302(int iParam0)
{
	return Global_1798[iParam0].f_1;
}

