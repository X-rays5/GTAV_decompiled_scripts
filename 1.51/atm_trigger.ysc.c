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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	fLocal_210 = ((0,05f + 0,275f) - 0,01f);
	iLocal_243 = 1;
	vLocal_501 = { 0f, -0,7f, 1f };
	vLocal_504 = { 0f, -0,8f, 1f };
	fLocal_519 = -1f;
	fLocal_520 = -1f;
	iLocal_592 = 3000;
	iLocal_593 = -1;
	iLocal_599 = -1;
	iLocal_600 = -1;
	func_109();
	if (Global_37197)
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	if (Global_30770)
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	iVar0 = 0;
	if (!unk_0xC844350D5D58C99A(iScriptParam_0))
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	if (!unk_0x6BC06B42AD71CD8B(iScriptParam_0))
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	iVar1 = unk_0x4D570FEF9D230CE7(iScriptParam_0);
	if (func_102(unk_0x68F4C0EC296D3901(iScriptParam_0, true)))
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_101(13) || func_101(14))
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
	bVar2 = true;
	vLocal_496 = { unk_0x68F4C0EC296D3901(iScriptParam_0, true) };
	vLocal_496.z = (vLocal_496.z + 1f);
	if (unk_0x6C3F127AAF415E69() != 4)
	{
		vLocal_507 = { unk_0x68E4ADDDDCD7BDDE(iScriptParam_0, vLocal_501) };
	}
	else
	{
		vLocal_507 = { unk_0x68E4ADDDDCD7BDDE(iScriptParam_0, vLocal_504) };
	}
	if (unk_0xE82754C349C7B581(vLocal_507, &fVar3, 0, 0))
	{
		vLocal_507.z = (fVar3 + 1f);
	}
	settimera(0);
	unk_0x44924889EF9C2BBD("ATM", 0, -1);
	while (bVar2)
	{
		iLocal_592 = (iLocal_592 + round((0f + (1000f * timestep()))));
		bVar4 = false;
		settimera(0);
		if (unk_0xC844350D5D58C99A(iScriptParam_0))
		{
			if (unk_0x713261485D0F1B6C(iScriptParam_0, 0))
			{
				func_103();
				unk_0x10FAF14A60A0DBE1();
			}
		}
		if (Global_76622 && unk_0x8CD06866876216F2())
		{
			iLocal_517 = 1;
			if (func_89())
			{
				func_103();
				unk_0x10FAF14A60A0DBE1();
			}
		}
		else if (iLocal_517)
		{
			if (func_89())
			{
				func_103();
				unk_0x10FAF14A60A0DBE1();
				iLocal_517 = 0;
			}
		}
		bVar5 = true;
		if (((unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && !unk_0x22A8E52414415B76()) && unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
		{
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1 && !unk_0x9832A1748E6D3DBF(unk_0x16F2683693E537C9()))
			{
				if (!func_101(15))
				{
					if (!Global_111638.f_20559.f_100)
					{
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (Global_76622)
							{
								func_88("ATM_1TM_TUT", -1);
							}
							else if (!func_87("ATM_1TM_TUT"))
							{
								func_84("ATM_1TM_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
							}
						}
					}
					if (func_83("ATM_1TM_TUT"))
					{
						Global_111638.f_20559.f_100 = 1;
					}
				}
				if ((((((((((((((!unk_0xACCBB8E1BDF4D6BE(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_82(0)) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_496, 1f, 1f, 1f, false, true, 1)) && !unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0)) && !func_81()) && !func_80(iScriptParam_0, 0)) && !func_79()) && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 4f) && func_77(unk_0xD803B885F5E47A62()) != 171) && !func_76(Global_4456448.f_232883)) && !func_75(Global_4456448.f_232883)) && !func_74(Global_4456448.f_232883)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_28, 1)) && !func_73(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x4742C50E93110B10(vLocal_496, 2f, 0))
					{
						bVar5 = false;
					}
					bVar6 = false;
					if (func_71(unk_0xD803B885F5E47A62()))
					{
						bVar5 = true;
						bVar6 = true;
						if (!bLocal_516)
						{
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								unk_0xB6A2CAEFEE28197D("SHOP_JUGG_NONE");
								unk_0x6B012227B3921E18("GB_COUT_ATM");
								unk_0xBAB71DDCAEBC7FDD(0, 0, false, -1);
							}
						}
					}
					if (unk_0x26AFD4C55F0EAAC1(vLocal_496, 2f, 1))
					{
						bVar6 = true;
					}
					if (Global_76622)
					{
						if (!unk_0x8CD06866876216F2())
						{
							bVar6 = true;
						}
					}
					if (unk_0x798A3F1296751F46())
					{
						bVar6 = true;
					}
					if (!bVar6)
					{
						if (iLocal_593 == -1)
						{
							func_70(&iLocal_593, 4, "FINH_ATMNEAR", 0, 0, 0, 0);
						}
						bVar4 = true;
						if (func_69(iLocal_593, 1))
						{
							Global_42344 = 1;
							while (!unk_0xAE317D00A5A55DF6("ATM", false, -1) && !func_64(iScriptParam_0, 1))
							{
								wait(0);
							}
							wait(100);
							StringCopy(&Var7, "", 64);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
								if (func_63(0, &Var7))
								{
									unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vLocal_507, 1f, 5000, unk_0xD9522BA9E27E1349(iScriptParam_0), 0,25f);
									iLocal_499 = 0;
								}
							}
							wait(100);
							wait(100);
							if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									iLocal_515 = func_62(1, 1, 1, 1);
									iLocal_598 = 1;
									if (Global_76622)
									{
										iLocal_556[unk_0x57270EE11514DC67()] = 1;
										unk_0xDD80CDEA259C4484();
										unk_0x1ED65C6AD8472EFB();
										Global_2547056 = 1;
									}
									iVar0 = 0;
									unk_0x8BC9595FD2792B5D("ATM_PLAYER_SCENE");
									func_6(0, &iVar0, iScriptParam_0, bVar5);
									unk_0x8910D3D58E0132B8("ATM_PLAYER_SCENE");
									if (Global_76622)
									{
										Global_2547056 = 0;
										unk_0x87EDBDC202526E71();
										unk_0xA26E01EF6A507193();
									}
									if (!bVar5 || Global_76622)
									{
										if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
										{
											if (!bVar5)
											{
												unk_0x2ECF845953E95D1B(unk_0x16F2683693E537C9());
												unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
											}
											if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
											{
												if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
												{
													if (unk_0xACCBB8E1BDF4D6BE(unk_0x16F2683693E537C9()))
													{
														unk_0x2ECF845953E95D1B(unk_0x16F2683693E537C9());
														if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
														{
															unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
														}
													}
													if (func_63(1, &Var7))
													{
														unk_0x8D17794CE3273D70(&Var7);
													}
													if (func_63(2, &Var7))
													{
														unk_0x8D17794CE3273D70(&Var7);
													}
													if (func_63(3, &Var7))
													{
														if (unk_0x69DF961355195C3C(iLocal_500))
														{
															unk_0xB46854F2D1C7DFA9(iLocal_500);
															iLocal_500 = -1;
														}
														iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iScriptParam_0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
														unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &Var7, "exit", 8f, -4f, 5, 0, 1148846080, 0);
														unk_0x914E6894744915F8(iLocal_500);
														unk_0x8D17794CE3273D70(&Var7);
													}
												}
											}
										}
									}
									iVar23 = 0;
									while (iVar23 < 1000 && !func_64(iScriptParam_0, 1))
									{
										iVar23 = (iVar23 + round((0f + (1000f * timestep()))));
										unk_0x38C3A68D7861DCFD(2, 200, 1);
										unk_0x38C3A68D7861DCFD(2, 202, 1);
										unk_0x38C3A68D7861DCFD(0, 24, 1);
										unk_0x38C3A68D7861DCFD(0, 24, 1);
										unk_0x38C3A68D7861DCFD(0, 140, 1);
										unk_0x38C3A68D7861DCFD(0, 141, 1);
										wait(0);
									}
									if (Global_76622)
									{
										iLocal_556[unk_0x57270EE11514DC67()] = 0;
									}
									iLocal_598 = 0;
								}
							}
							func_4(&iLocal_593);
						}
					}
					else
					{
						func_4(&iLocal_593);
						wait(250);
					}
				}
				else
				{
					func_4(&iLocal_593);
					bVar24 = false;
					if (unk_0xC844350D5D58C99A(iScriptParam_0))
					{
						if (!unk_0x63D2C15453688621(iScriptParam_0))
						{
							bVar24 = true;
						}
					}
					else
					{
						bVar24 = true;
					}
					if (bVar24)
					{
						bVar2 = false;
					}
				}
			}
		}
		else
		{
			bVar2 = false;
		}
		if (!bVar4)
		{
			if (iLocal_593 != -1)
			{
				func_4(&iLocal_593);
			}
		}
		wait(0);
	}
	if (bLocal_514)
	{
		func_1(-706733491, 13, 0);
	}
	func_103();
}

void func_1(int iParam0, int iParam1, int iParam2)
{
	if (func_3(iParam1, iParam2))
	{
		iVar0 = func_2();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_2()
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

int func_3(int iParam0, var uParam1)
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

void func_4(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_5(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_5(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_58693 = 1;
	bVar0 = false;
	iLocal_594 = unk_0xB01F55A0FD1CFD49("ATM");
	iLocal_595 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (func_61(iParam2))
	{
		if (func_60(4))
		{
			func_59(4, 0);
			iLocal_597 = 1;
		}
	}
	iVar1 = unk_0x1C0640BA9A7327B3();
	unk_0x2103752056F874E1();
	while (!unk_0x83D8570832F172A7(iLocal_594) && !func_64(iParam2, 1))
	{
		wait(0);
		func_56();
		func_55(iParam2);
	}
	while (!unk_0x83D8570832F172A7(iLocal_595) && !func_64(iParam2, 1))
	{
		wait(0);
		func_56();
		func_55(iParam2);
	}
	func_53(0, 0);
	while ((unk_0x1C0640BA9A7327B3() - iVar1) < iParam0)
	{
		wait(0);
		func_56();
		func_55(iParam2);
		if (func_52())
		{
			return;
		}
	}
	iVar2 = unk_0x1C0640BA9A7327B3() + 3500;
	bVar3 = false;
	bVar4 = true;
	bVar5 = false;
	iLocal_601 = 1;
	iLocal_591 = 0;
	while (bVar4)
	{
		iLocal_591 = (iLocal_591 + round((0f + (1000f * timestep()))));
		func_40();
		if (unk_0x91E3F625EF57450D(2))
		{
			unk_0x5D80F91A16C40CDE();
			unk_0x38C3A68D7861DCFD(2, 200, 1);
		}
		if (!Global_76622)
		{
			if (unk_0x1C0640BA9A7327B3() > iVar2)
			{
				bVar3 = true;
			}
		}
		else if (iVar2 > 0)
		{
			if (unk_0x1C0640BA9A7327B3() > iVar2)
			{
				bVar3 = true;
				iVar2 = -1;
			}
		}
		else if (iVar2 == -1)
		{
			bVar3 = true;
		}
		if (unk_0x1A72D8C9F025E5E3() || unk_0x798A3F1296751F46())
		{
			bVar3 = false;
		}
		iVar6 = 0;
		if (func_80(iParam2, 1))
		{
			iVar6 = 1;
		}
		if (bVar3)
		{
			unk_0xEAB026E686C0D991(2, 202, 1);
			unk_0xEAB026E686C0D991(2, 238, 1);
		}
		if (unk_0x1C0640BA9A7327B3() > iVar2)
		{
			unk_0x6567AE843FADBA94(iLocal_595, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		switch (*iParam1)
		{
			case 4:
			case 8:
				bVar3 = false;
				break;
			
			case 11:
			case 10:
				bVar3 = true;
				break;
		}
		if (bVar3)
		{
			if (((unk_0xBFC0798A6E3417F9(2, 202) || unk_0xBFC0798A6E3417F9(2, 238)) || iVar6) && bVar5)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "PIN_BUTTON", "ATM_SOUNDS", 1);
				if (Global_76622)
				{
					switch (*iParam1)
					{
						case 0:
							bVar4 = false;
							iLocal_515 = func_62(0, 1, iLocal_515, 1);
							break;
						
						case 1:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 2:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 3:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 5:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 6:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 7:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 9:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 10:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 11:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
					}
				}
				else
				{
					iLocal_515 = func_62(0, 1, iLocal_515, 0);
					bVar4 = false;
				}
			}
		}
		if (!bVar5)
		{
			if (!Global_76622)
			{
				unk_0x7E60C62A7CE58FC8(iLocal_594, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				func_32(iLocal_594);
				unk_0x7E60C62A7CE58FC8(iLocal_594, "UPDATE_TEXT");
				unk_0x7E60D21B163E9D56();
			}
			bVar5 = true;
		}
		if (Global_76622)
		{
			if (iLocal_601)
			{
				while (iLocal_601)
				{
					iLocal_601 = 0;
					func_26(iParam2, iLocal_594, iParam1);
				}
			}
		}
		if (Global_76622)
		{
			func_25(iLocal_594);
		}
		if (bVar3)
		{
			unk_0xEAB026E686C0D991(2, 201, 1);
			unk_0xEAB026E686C0D991(2, 237, 1);
			if (Global_76622)
			{
				if (unk_0xBFC0798A6E3417F9(2, 201) || (unk_0xBFC0798A6E3417F9(2, 237) && !unk_0xFA0AEC0FCBF8703B()))
				{
					func_9(iParam2, iParam1);
				}
			}
			func_8(iLocal_594);
		}
		if ((!bVar0 && !Global_76622) && !bParam3)
		{
			if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			unk_0x4A35AD9FC803369E(unk_0x16F2683693E537C9(), vLocal_496, 2f, -1);
			bVar0 = true;
		}
		func_55(iParam2);
	}
	if (Global_76622)
	{
		func_7(iLocal_594);
	}
	unk_0xE17FDF9E3068281B(&iLocal_594);
	unk_0xE17FDF9E3068281B(&iLocal_595);
	iLocal_594 = 0;
	iLocal_595 = 0;
	Global_58693 = 0;
}

void func_7(int iParam0)
{
	if (iLocal_518)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SHOW_CURSOR");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		iLocal_518 = 0;
		fLocal_519 = -1f;
	}
}

void func_8(int iParam0)
{
	if (unk_0x1A72D8C9F025E5E3() || unk_0x798A3F1296751F46())
	{
		return;
	}
	unk_0xEAB026E686C0D991(2, 199, 1);
	unk_0xEAB026E686C0D991(2, 188, 1);
	unk_0xEAB026E686C0D991(2, 187, 1);
	unk_0xEAB026E686C0D991(2, 189, 1);
	unk_0xEAB026E686C0D991(2, 190, 1);
	if (unk_0xBFC0798A6E3417F9(2, 188))
	{
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
		unk_0x3CAEA85DA607305E(8);
		unk_0x7E60D21B163E9D56();
	}
	if (unk_0xBFC0798A6E3417F9(2, 187))
	{
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
		unk_0x3CAEA85DA607305E(9);
		unk_0x7E60D21B163E9D56();
	}
	if (unk_0xBFC0798A6E3417F9(2, 189))
	{
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
		unk_0x3CAEA85DA607305E(10);
		unk_0x7E60D21B163E9D56();
	}
	if (unk_0xBFC0798A6E3417F9(2, 190))
	{
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
		unk_0x3CAEA85DA607305E(11);
		unk_0x7E60D21B163E9D56();
	}
	if (!Global_76622)
	{
		return;
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0xEAB026E686C0D991(2, 241, 1);
		unk_0xEAB026E686C0D991(2, 242, 1);
		fVar2 = (1f + (Global_73961 * timestep()));
		if (unk_0x06F8112AA79C53D9(2, 242) || unk_0x06F8112AA79C53D9(2, 187))
		{
			iVar1 = -200;
		}
		if (unk_0x06F8112AA79C53D9(2, 241) || unk_0x06F8112AA79C53D9(2, 188))
		{
			iVar1 = 200;
		}
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_ANALOG_STICK_INPUT");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF((to_float(iVar1) * fVar2));
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0xEAB026E686C0D991(2, 197, 1);
		unk_0xEAB026E686C0D991(2, 198, 1);
		iVar0 = (unk_0x0DED1C1B8250FA57(2, 197) - 128);
		iVar1 = (unk_0x0DED1C1B8250FA57(2, 198) - 128);
		if (iVar0 < 10 && iVar0 > -10)
		{
			iVar0 = 0;
		}
		if (iVar1 < 10 && iVar1 > -10)
		{
			iVar1 = 0;
		}
		fVar2 = (1f + (Global_73961 * timestep()));
		if (!iLocal_602 == iVar0 || !iLocal_603 == iVar1)
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_ANALOG_STICK_INPUT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF((-to_float(iVar0) * fVar2));
			unk_0x7C19E5E4784BD7CF((-to_float(iVar1) * fVar2));
			unk_0x7E60D21B163E9D56();
			iLocal_602 = iVar0;
			iLocal_603 = iVar1;
		}
	}
}

void func_9(int iParam0, var uParam1)
{
	unk_0x7E60C62A7CE58FC8(iLocal_594, "SET_INPUT_SELECT");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iLocal_594, "GET_CURRENT_SELECTION");
	uVar0 = unk_0x7A8BB56B212464AC();
	while (!unk_0xC95D7AEEDEF4946B(uVar0) && !func_64(iParam0, 1))
	{
		func_40();
	}
	iLocal_600 = unk_0xA52833FE33F41C53(uVar0);
	switch (*uParam1)
	{
		case 0:
			switch (iLocal_600)
			{
				case 2:
					func_24(uParam1, 3);
					break;
				
				case 1:
					func_24(uParam1, 7);
					break;
				
				case 3:
					func_24(uParam1, 1);
					break;
			}
			return;
		
		case 1:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
				
				case 2:
					func_24(uParam1, 6);
					break;
			}
			return;
		
		case 2:
			if (func_23())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 3);
						break;
					
					case 2:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
					}
			}
			return;
		
		case 6:
			if (func_22())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 7);
						break;
					
					case 2:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
					}
			}
			return;
		
		case 3:
			if (!func_23())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 4:
						func_24(uParam1, 0);
						iLocal_596 = 0;
						break;
					
					case 8:
						iLocal_596 = 0;
						func_24(uParam1, 1);
						break;
					
					case 1:
						func_24(uParam1, 5);
						iLocal_596 = func_21(0, 1);
						break;
					
					case 2:
						func_24(uParam1, 5);
						iLocal_596 = func_21(1, 1);
						break;
					
					case 3:
						func_24(uParam1, 5);
						iLocal_596 = func_21(2, 1);
						break;
					
					case 5:
						func_24(uParam1, 5);
						iLocal_596 = func_21(3, 1);
						break;
					
					case 6:
						func_24(uParam1, 5);
						iLocal_596 = func_21(4, 1);
						break;
					
					case 7:
						func_24(uParam1, 5);
						iLocal_596 = func_21(5, 1);
						break;
					}
			}
			return;
		
		case 7:
			if (!func_22())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 4:
						func_24(uParam1, 0);
						iLocal_596 = 0;
						break;
					
					case 8:
						iLocal_596 = 0;
						func_24(uParam1, 1);
						break;
					
					case 1:
						func_24(uParam1, 9);
						iLocal_596 = func_21(0, 0);
						break;
					
					case 2:
						func_24(uParam1, 9);
						iLocal_596 = func_21(1, 0);
						break;
					
					case 3:
						func_24(uParam1, 9);
						iLocal_596 = func_21(2, 0);
						break;
					
					case 5:
						func_24(uParam1, 9);
						iLocal_596 = func_21(3, 0);
						break;
					
					case 6:
						func_24(uParam1, 9);
						iLocal_596 = func_21(4, 0);
						break;
					
					case 7:
						func_24(uParam1, 9);
						iLocal_596 = func_21(5, 0);
						break;
					}
			}
			return;
		
		case 5:
			switch (iLocal_600)
			{
				case 1:
					if (func_20(iParam0, iLocal_596))
					{
						func_24(uParam1, 4);
					}
					else
					{
						func_24(uParam1, 10);
					}
					iLocal_596 = 0;
					break;
				
				case 2:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 9:
			switch (iLocal_600)
			{
				case 1:
					if (func_10(iParam0, iLocal_596))
					{
						func_24(uParam1, 8);
					}
					else
					{
						func_24(uParam1, 10);
					}
					iLocal_596 = 0;
					break;
				
				case 2:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 10:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 11:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		default:
	}
}

int func_10(int iParam0, int iParam1)
{
	iVar0 = unk_0x3A6D64D2A1228113();
	if (iParam1 > iVar0)
	{
		return 0;
	}
	if (func_19())
	{
		if (unk_0x9E6BFE0424BA8602())
		{
			return 0;
		}
		unk_0xC02A8E2FDF7A5FB8(&iVar1, &uVar2);
		if (iVar1 != 8)
		{
			return 0;
		}
		if (unk_0x9D2121F9BBD98DB2(func_18(791613967), iParam1))
		{
			iVar3 = unk_0xF4B63C9FEB898CAB();
			while (iVar3 == 1 && !func_64(iParam0, 1))
			{
				iVar3 = unk_0xA0B391827ABD97EC();
				func_40();
			}
			if (iVar3 == 3)
			{
				unk_0xCA9C182CB71EE8A7();
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
	iLocal_599 = unk_0x1C44BEC57CEFA8FF(iParam1);
	bLocal_514 = true;
	if (Global_76622 && unk_0x8CD06866876216F2())
	{
		func_11(1918, 1, -1);
	}
	return 1;
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_15(iParam0, func_16(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_14(iParam0))
	{
		func_13(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_12(iParam0, iVar0, iParam2, 1);
	}
}

void func_12(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_16(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_16(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_16(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_16(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_16(uParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_16(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_16(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_16(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_16(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_16(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_16(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_16(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_16(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_16(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_16(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_16(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_16(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_16(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_16(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_16(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_16(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_16(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_16(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_16(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_16(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_16(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_16(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_16(uParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_16(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_16(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_16(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_16(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_16(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_16(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_16(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_16(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_16(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_16(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_16(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_16(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_16(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_16(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_16(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_16(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_16(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_16(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_16(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_16(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_16(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_16(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_16(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_16(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_16(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_16(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_16(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_16(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_16(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_16(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_16(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_16(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_16(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_16(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_16(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_16(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_16(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_16(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_16(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_16(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_16(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_16(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_16(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_16(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_16(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_16(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_16(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_16(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_16(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_16(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_16(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_16(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_16(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_16(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_16(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_16(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_16(uParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_16(uParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_16(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_16(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_16(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_13(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_16(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_14(int iParam0)
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

int func_15(int iParam0, var uParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_16(uParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_16(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

var func_17()
{
	return Global_1312745;
}

int func_18(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_20(int iParam0, int iParam1)
{
	if (!unk_0xAC0726A85BBACC32(iParam1, 0, 0, 0, &uVar0, -1, 0))
	{
		return 0;
	}
	if (func_19())
	{
		if (unk_0x9E6BFE0424BA8602())
		{
			return 0;
		}
		unk_0xC02A8E2FDF7A5FB8(&iVar1, &uVar2);
		if (iVar1 != 8)
		{
			return 0;
		}
		if (unk_0x6E4DA3C0A238D65F(func_18(791613967), iParam1))
		{
			iVar3 = unk_0xA0B391827ABD97EC();
			while (iVar3 == 1 && !func_64(iParam0, 1))
			{
				iVar3 = unk_0xA0B391827ABD97EC();
				func_40();
			}
			if (iVar3 == 3)
			{
				unk_0xCA9C182CB71EE8A7();
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
	unk_0x89AB1B530D8AF169(iParam1);
	if (Global_76622 && unk_0x8CD06866876216F2())
	{
		func_11(1918, 1, -1);
	}
	bLocal_514 = true;
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == 1)
	{
		iVar0 = unk_0x62F8C2EDB26F57B3(-1);
	}
	else
	{
		iVar0 = unk_0x3A6D64D2A1228113();
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (50 > iVar0)
			{
				return iVar0;
			}
			return 50;
		
		case 1:
			if (500 > iVar0 && iVar0 > 50)
			{
				return iVar0;
			}
			return 500;
		
		case 2:
			if (2500 > iVar0 && iVar0 > 500)
			{
				return iVar0;
			}
			return 2500;
		
		case 3:
			if (10000 > iVar0 && iVar0 > 2500)
			{
				return iVar0;
			}
			return 10000;
		
		case 4:
			if (100000 > iVar0 && iVar0 > 10000)
			{
				return iVar0;
			}
			return 100000;
		
		case 5:
			if (10000000 > iVar0 && iVar0 > 100000)
			{
				return iVar0;
			}
			return 10000000;
		
		default:
	}
	return 0;
}

int func_22()
{
	if (unk_0x3A6D64D2A1228113() >= func_21(0, 0))
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(0, 1))
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0, int iParam1)
{
	iLocal_601 = 1;
	*uParam0 = iParam1;
}

void func_25(int iParam0)
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_518 == 0)
		{
			if (unk_0x91E3F625EF57450D(2))
			{
				if (fLocal_519 == -1f)
				{
					fLocal_519 = unk_0x4F3973434662D795(2, 239);
					fLocal_520 = unk_0x4F3973434662D795(2, 240);
				}
				else if (fLocal_519 != unk_0x4F3973434662D795(2, 239) || fLocal_520 != unk_0x4F3973434662D795(2, 240))
				{
					unk_0x7E60C62A7CE58FC8(iParam0, "SHOW_CURSOR");
					unk_0x1200CC973A2399C8(true);
					unk_0x7E60D21B163E9D56();
					iLocal_518 = 1;
				}
			}
			else
			{
				fLocal_519 = -1f;
			}
		}
		else if ((((((!unk_0x91E3F625EF57450D(2) || unk_0xBFC0798A6E3417F9(2, 188)) || unk_0xBFC0798A6E3417F9(2, 187)) || unk_0xBFC0798A6E3417F9(2, 189)) || unk_0xBFC0798A6E3417F9(2, 190)) || unk_0xBFC0798A6E3417F9(2, 201)) || unk_0xBFC0798A6E3417F9(2, 202))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SHOW_CURSOR");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
			fLocal_519 = -1f;
			iLocal_518 = 0;
		}
		if (iLocal_518)
		{
			fVar0 = unk_0x4F3973434662D795(2, 239);
			fVar1 = unk_0x4F3973434662D795(2, 240);
			if (((fVar0 >= 0f && fVar0 <= 1f) && fVar1 >= 0f) && fVar1 <= 1f)
			{
				unk_0x7E60C62A7CE58FC8(iParam0, "SET_MOUSE_INPUT");
				unk_0x7C19E5E4784BD7CF(fVar0);
				unk_0x7C19E5E4784BD7CF(fVar1);
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

void func_26(int iParam0, int iParam1, var uParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT_EMPTY");
	unk_0x7E60D21B163E9D56();
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	switch (*uParam2)
	{
		case 0:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			func_31("MPATM_SER");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(2);
			func_31("MPATM_DIDM");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MPATM_WITM");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(3);
			func_31("MPATM_LOG");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MENU");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("MPATM_LOG");
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MPATM_BACK");
			unk_0x7E60D21B163E9D56();
			if (func_29(iParam1) > 13)
			{
				bVar1 = true;
				bVar2 = true;
			}
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_TRANSACTIONS");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 4:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			func_31("MPATM_PEND");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			iVar0 = unk_0x1C0640BA9A7327B3() + 1000;
			while (iVar0 > unk_0x1C0640BA9A7327B3() && !func_64(iParam0, 1))
			{
				func_40();
			}
			func_24(uParam2, 11);
			break;
		
		case 8:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			func_31("MPATM_PEND");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			if (func_28(iParam0))
			{
				func_24(uParam2, 11);
			}
			else
			{
				func_24(uParam2, 10);
			}
			break;
		
		case 2:
			if (func_23())
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				unk_0x7ACC3006A87F8B39("MPATM_XDOL");
				unk_0xCBD015EC7E4226BC(unk_0x3A6D64D2A1228113(), 1);
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MO_YES");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(2);
				func_31("MO_NO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_NODO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 6:
			if (func_22())
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				unk_0x7ACC3006A87F8B39("MPATM_XDOL2");
				unk_0xCBD015EC7E4226BC(unk_0x3A6D64D2A1228113(), 1);
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MO_YES");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(2);
				func_31("MO_NO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_NODO2");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 3:
			if (!func_23())
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_NODO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_DITMT");
				unk_0x7E60D21B163E9D56();
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(0, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(0, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(1, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(1, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(2, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(3);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(2, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(4);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(3, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(5);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(3, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(4, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(6);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(4, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x62F8C2EDB26F57B3(-1) >= func_21(5, 1))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(7);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(5, 1), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_CASH_OPTIONS");
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 5:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("MPATM_CONF");
			unk_0xCBD015EC7E4226BC(iLocal_596, 1);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MO_YES");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(2);
			func_31("MO_NO");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 7:
			if (!func_22())
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_NODO2");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
				unk_0x7E60D21B163E9D56();
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_31("MPATM_WITMT");
				unk_0x7E60D21B163E9D56();
				if (unk_0x3A6D64D2A1228113() >= func_21(0, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(0, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x3A6D64D2A1228113() >= func_21(1, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(1, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x3A6D64D2A1228113() >= func_21(2, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(3);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(2, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(4);
				func_31("MPATM_BACK");
				unk_0x7E60D21B163E9D56();
				if (unk_0x3A6D64D2A1228113() >= func_21(3, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(5);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(3, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x3A6D64D2A1228113() >= func_21(4, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(6);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(4, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				if (unk_0x3A6D64D2A1228113() >= func_21(5, 0))
				{
					unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(7);
					unk_0x7ACC3006A87F8B39("ESDOLLA");
					unk_0xCBD015EC7E4226BC(func_21(5, 0), 1);
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_CASH_OPTIONS");
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 9:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("MPATC_CONFW");
			unk_0xCBD015EC7E4226BC(iLocal_596, 1);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MO_YES");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(2);
			func_31("MO_NO");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 10:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			func_31("MPATM_ERR");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MPATM_BACK");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 11:
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0);
			func_31("MPATM_TRANCOM");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("MPATM_BACK");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_MESSAGE");
			unk_0x7E60D21B163E9D56();
			break;
	}
	func_53(bVar1, bVar2);
	unk_0x7E60C62A7CE58FC8(iParam1, "DISPLAY_BALANCE");
	func_27(unk_0x6E524813889AECF8(unk_0xA30EC016B12C03E4()));
	unk_0x7ACC3006A87F8B39("MPATM_ACBA");
	unk_0x779B34565F4D71B1();
	func_27(unk_0x7B7759491343A409());
	unk_0x7E60D21B163E9D56();
}

void func_27(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_28(int iParam0)
{
	iVar0 = iLocal_599;
	iVar1 = unk_0x1C0640BA9A7327B3() + 1000;
	while (!unk_0xA5A0E01429E72DA7(iVar0) && !func_64(iParam0, 1))
	{
		func_40();
	}
	while (iVar1 > unk_0x1C0640BA9A7327B3() && !func_64(iParam0, 1))
	{
		func_40();
	}
	return unk_0x36E53136B4A991F3(iVar0);
}

int func_29(int iParam0)
{
	iVar0 = 2;
	if (Global_2097152[func_30()].f_10753 > 15)
	{
		Global_2097152[func_30()].f_10753 = 0;
	}
	iVar1 = (Global_2097152[func_30()].f_10753 - 1);
	if (iVar1 < 0)
	{
		iVar1 = 15;
	}
	iVar2 = 16;
	iVar3 = 0;
	while (iVar2 > 0)
	{
		if (Global_2097152[func_30()].f_10753.f_1[iVar1] > 0 && Global_2097152[func_30()].f_10753.f_132[iVar1] != 1262307134)
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(iVar0);
			iVar3++;
			switch (Global_2097152[func_30()].f_10753.f_115[iVar1])
			{
				case 4:
				case 2:
				case 1:
				case 6:
					unk_0x3CAEA85DA607305E(1);
					break;
				
				case 0:
				case 3:
				case 5:
					unk_0x3CAEA85DA607305E(0);
					break;
			}
			unk_0x3CAEA85DA607305E(Global_2097152[func_30()].f_10753.f_1[iVar1]);
			switch (Global_2097152[func_30()].f_10753.f_115[iVar1])
			{
				case 0:
					func_31("MPATM_PLCHLDR_WDR");
					break;
				
				case 1:
					func_31("MPATM_PLCHLDR_CAD");
					break;
				
				case 2:
					unk_0x7ACC3006A87F8B39("MPATM_PLCHLDR_CRF");
					unk_0xD06AC7C87A34A6AD(&(Global_2097152[func_30()].f_10753.f_18[iVar1]));
					unk_0x779B34565F4D71B1();
					break;
				
				case 3:
					unk_0x7ACC3006A87F8B39("MPATM_PLCHLDR_CST");
					unk_0xD06AC7C87A34A6AD(&(Global_2097152[func_30()].f_10753.f_18[iVar1]));
					unk_0x779B34565F4D71B1();
					break;
				
				case 4:
					func_31("MPATM_PLCHLDR_BRT");
					break;
				
				case 5:
					if (Global_2097152[func_30()].f_10753.f_132[iVar1] != 0)
					{
						iVar4 = Global_2097152[func_30()].f_10753.f_132[iVar1];
						switch (iVar4)
						{
							case 2129044656:
								func_31("MONEY_SPENT_CONTACT_SERVICE");
								break;
							
							case -2061062157:
								func_31("MONEY_SPENT_PROPERTY_UTIL");
								break;
							
							case -632380201:
								func_31("MONEY_SPENT_JOB_ACTIVITY");
								break;
							
							case 1262307134:
								func_31("MONEY_SPENT_BETTING");
								break;
							
							case 1238791730:
								func_31("MONEY_SPENT_STYLE_ENT");
								break;
							
							case 478532527:
								func_31("MONEY_SPENT_HEALTHCARE");
								break;
							
							case -152954333:
								func_31("MONEY_SPENT_FROM_DEBUG");
								break;
							
							case -1763470753:
								func_31("MONEY_SPENT_DROPPED_STOLEN");
								break;
							
							case 1013304474:
								func_31("MONEY_SPENT_VEH_MAINTENANCE");
								break;
							
							case -1995364556:
								func_31("MONEY_SPENT_HOLDUPS");
								break;
							
							case -804615011:
								func_31("MONEY_SPENT_PASSIVEMODE");
								break;
						}
					}
					else
					{
						func_31("MPATM_PLCHLDR_PRCH");
					}
					break;
				
				case 6:
					if (Global_2097152[func_30()].f_10753.f_132[iVar1] != 0)
					{
						iVar5 = Global_2097152[func_30()].f_10753.f_132[iVar1];
						switch (iVar5)
						{
							case 1639475247:
								func_31("MONEY_EARN_JOBS");
								break;
							
							case -296514299:
								func_31("MONEY_EARN_SELLING_VEH");
								break;
							
							case -1267463912:
								func_31("MONEY_EARN_BETTING");
								break;
							
							case -368618205:
								func_31("MONEY_EARN_GOOD_SPORT");
								break;
							
							case 41126866:
								func_31("MONEY_EARN_PICKED_UP");
								break;
							
							case 414439973:
								func_31("MONEY_EARN_SHARED");
								break;
							
							case 765901839:
								func_31("MONEY_EARN_JOBSHARED");
								break;
							
							case -871326891:
								func_31("MONEY_EARN_ROCKSTAR_AWARD");
								break;
							
							case 645760435:
								func_31("MONEY_EARN_REFUND");
								break;
							
							case -1392064501:
								func_31("MONEY_EARN_JOB_BONUS");
								break;
							
							case -1378221995:
								func_31("MONEY_EARN_HEIST_JOB");
								break;
						}
					}
					else
					{
						func_31("MPATM_PLCHLDR_REF");
					}
					break;
			}
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 == -1)
		{
			iVar1 = 15;
		}
		iVar2 = (iVar2 - 1);
	}
	return iVar3;
}

int func_30()
{
	iVar0 = 0;
	return iVar0;
}

void func_31(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_32(int iParam0)
{
	iVar0 = Global_111638.f_28045[func_34()].f_17;
	if (iVar0 == 4 || iVar0 == 3)
	{
		return;
	}
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_31("W_BA_LGOF");
	unk_0x7E60D21B163E9D56();
	switch (iVar0)
	{
		case 0:
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("ACCNA_MIKE");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 2:
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("ACCNA_TREVOR");
			unk_0x7E60D21B163E9D56();
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(1);
			func_31("ACCNA_FRANKLIN");
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(2);
	func_31("W_BA_ATL");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(3);
	unk_0x7C19E5E4784BD7CF(to_float(Global_58686[iVar0]));
	func_31("W_BA_BAL");
	unk_0x7E60D21B163E9D56();
	iVar1 = 4;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 11;
	iVar4 = Global_111638.f_20559.f_233[iVar0];
	if (!iVar4 < 11)
	{
		iVar4 = 11;
	}
	iVar5 = (Global_111638.f_20559.f_233[iVar0].f_1 - 1);
	if (iVar5 > -1)
	{
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (iVar5 < 0)
			{
				iVar5 = 10;
			}
			iVar3 = 0;
			if (Global_111638.f_20559.f_233[iVar0].f_2[iVar5] == 1)
			{
				iVar3 = 1;
			}
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar3);
			unk_0x3CAEA85DA607305E(Global_111638.f_20559.f_233[iVar0].f_2[iVar5].f_2);
			func_31(func_33(Global_111638.f_20559.f_233[iVar0].f_2[iVar5].f_1));
			unk_0x7E60D21B163E9D56();
			iVar5 = (iVar5 - 1);
			iVar1++;
			iVar2++;
		}
	}
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 31:
			return "ACCNA_SIM";
			break;
		
		case 32:
			return "ACCNA_LES";
			break;
		
		case 33:
			return "ACCNA_AMA";
			break;
		
		case 34:
			return "ACCNA_JIM";
			break;
		
		case 35:
			return "ACCNA_TRA";
			break;
		
		case 36:
			return "ACCNA_OSC";
			break;
		
		case 37:
			return "ACCNA_ABI";
			break;
		
		case 38:
			return "ACCNA_BUR";
			break;
		
		case 3:
			return "ACCNA_MIKE";
			break;
		
		case 24:
			return "ACCNA_DRFR";
			break;
		
		case 25:
			return "ACCNA_STRP";
			break;
		
		case 39:
			return "ACCNA_MRSPOKE";
			break;
		
		case 40:
			return "ACCNA_GOL_CLU";
			break;
		
		case 4:
			return "ACCNA_CBELL";
			break;
		
		case 5:
			return "ACCNA_WHIZZ";
			break;
		
		case 6:
			return "ACCNA_MCHON";
			break;
		
		case 7:
			return "ACCNA_DSACH";
			break;
		
		case 8:
			return "ACCNA_LSANH";
			break;
		
		case 9:
			return "ACCNA_CRAPKI";
			break;
		
		case 10:
			return "ACCNA_VCLEAN";
			break;
		
		case 11:
			return "ACCNA_CSUX";
			break;
		
		case 12:
			return "ACCNA_VBEU";
			break;
		
		case 13:
			return "ACCNA_ANAT";
			break;
		
		case 14:
			return "ACCNA_BAHAMA";
			break;
		
		case 15:
			return "ACCNA_BAR_BY";
			break;
		
		case 16:
			return "ACCNA_BAR_BI";
			break;
		
		case 17:
			return "ACCNA_BAR_HI";
			break;
		
		case 18:
			return "ACCNA_BAR_MO";
			break;
		
		case 19:
			return "ACCNA_BAR_SH";
			break;
		
		case 20:
			return "ACCNA_BAR_SI";
			break;
		
		case 21:
			return "ACCNA_TAXI";
			break;
		
		case 22:
			return "ACCNA_DTRAF";
			break;
		
		case 23:
			return "ACCNA_REPO";
			break;
		
		case 26:
			return "ACCNA_HUNT";
			break;
		
		case 27:
			return "ACCNA_RANGE";
			break;
		
		case 28:
			return "ACCNA_RACES";
			break;
		
		case 29:
			return "ACCNA_EPS_ST";
			break;
		
		case 30:
			return "ACCNA_EPS_RB";
			break;
		
		case 2:
			return "ACCNA_BROKERA";
			break;
		
		case 85:
			return "ACCNA_CARSITE";
			break;
		
		case 86:
			return "ACCNA_ARMYSITE";
			break;
		
		case 87:
			return "ACCNA_PLANESITE";
			break;
		
		case 88:
			return "ACCNA_BOATSITE";
			break;
		
		case 89:
			return "ACCNA_BIKESITE";
			break;
		
		case 90:
			return "ACCNA_AUTOSITE";
			break;
		
		case 91:
			return "ACCNA_LOSSSITE";
			break;
		
		case 92:
			return "ACCNA_ARENASITE";
			break;
		
		case 96:
			return "ACCNA_CASHDEP";
			break;
		
		case 95:
			return "ACCNA_BAILBONDS";
			break;
		
		case 97:
			return "ACCNA_HOFFSHORE";
			break;
		
		case 98:
			return "ACCNA_SNACK";
			break;
		
		case 41:
			return "S_H_01";
			break;
		
		case 42:
			return "S_H_02";
			break;
		
		case 43:
			return "S_H_03";
			break;
		
		case 44:
			return "S_H_04";
			break;
		
		case 45:
			return "S_H_05";
			break;
		
		case 46:
			return "S_H_06";
			break;
		
		case 47:
			return "S_H_07";
			break;
		
		case 48:
			return "S_CL_01";
			break;
		
		case 49:
			return "S_CL_02";
			break;
		
		case 50:
			return "S_CL_03";
			break;
		
		case 51:
			return "S_CL_04";
			break;
		
		case 52:
			return "S_CL_05";
			break;
		
		case 53:
			return "S_CL_06";
			break;
		
		case 54:
			return "S_CL_07";
			break;
		
		case 55:
			return "S_CM_01";
			break;
		
		case 56:
			return "S_CM_03";
			break;
		
		case 57:
			return "S_CM_04";
			break;
		
		case 58:
			return "S_CM_05";
			break;
		
		case 59:
			return "S_CH_01";
			break;
		
		case 60:
			return "S_CH_02";
			break;
		
		case 61:
			return "S_CH_03";
			break;
		
		case 62:
			return "S_CA_01";
			break;
		
		case 63:
			return "S_T_01";
			break;
		
		case 64:
			return "S_T_02";
			break;
		
		case 65:
			return "S_T_03";
			break;
		
		case 66:
			return "S_T_04";
			break;
		
		case 67:
			return "S_T_05";
			break;
		
		case 68:
			return "S_T_06";
			break;
		
		case 69:
			return "S_G_01";
			break;
		
		case 70:
			return "S_G_02";
			break;
		
		case 71:
			return "S_G_03";
			break;
		
		case 72:
			return "S_G_04";
			break;
		
		case 73:
			return "S_G_05";
			break;
		
		case 74:
			return "S_G_06";
			break;
		
		case 75:
			return "S_G_07";
			break;
		
		case 76:
			return "S_G_08";
			break;
		
		case 77:
			return "S_G_09";
			break;
		
		case 78:
			return "S_G_10";
			break;
		
		case 79:
			return "S_G_11";
			break;
		
		case 80:
			return "S_MO_01";
			break;
		
		case 81:
			return "S_MO_05";
			break;
		
		case 82:
			return "S_MO_06";
			break;
		
		case 83:
			return "S_MO_07";
			break;
		
		case 84:
			return "S_MO_08";
			break;
		
		case 131:
			return "S_MO_09";
			break;
		
		case 99:
			return "ACCNA_TOWING";
			break;
		
		case 100:
			return "ACCNA_TAXI_LOT";
			break;
		
		case 101:
			return "ACCNA_ARMS";
			break;
		
		case 102:
			return "ACCNA_SONAR";
			break;
		
		case 103:
			return "ACCNA_CARMOD";
			break;
		
		case 104:
			return "ACCNA_VCINEMA";
			break;
		
		case 105:
			return "ACCNA_DCINEMA";
			break;
		
		case 106:
			return "ACCNA_MCINEMA";
			break;
		
		case 107:
			return "ACCNA_GOLF";
			break;
		
		case 108:
			return "ACCNA_CSCRAP";
			break;
		
		case 109:
			return "ACCNA_SMOKE";
			break;
		
		case 110:
			return "ACCNA_TEQUILA";
			break;
		
		case 111:
			return "ACCNA_PITCHERS";
			break;
		
		case 112:
			return "ACCNA_HEN";
			break;
		
		case 113:
			return "ACCNA_HOOKIES";
			break;
		
		case 114:
			return "ACCNA_MARINA";
			break;
		
		case 115:
			return "ACCNA_HANGAR";
			break;
		
		case 116:
			return "ACCNA_HELIPAD";
			break;
		
		case 117:
			return "ACCNA_GARAGE";
			break;
		
		case 118:
			return "ACCNA_PD_VB";
			break;
		
		case 119:
			return "ACCNA_PD_SC";
			break;
		
		case 120:
			return "ACCNA_PD_DT";
			break;
		
		case 121:
			return "ACCNA_PD_RH";
			break;
		
		case 122:
			return "ACCNA_PD_SS";
			break;
		
		case 123:
			return "ACCNA_PD_PB";
			break;
		
		case 124:
			return "ACCNA_PD_HW";
			break;
		
		case 125:
			return "ACCNA_H_RH";
			break;
		
		case 126:
			return "ACCNA_H_SC";
			break;
		
		case 127:
			return "ACCNA_H_DT";
			break;
		
		case 128:
			return "ACCNA_H_SS";
			break;
		
		case 129:
			return "ACCNA_H_PB";
			break;
		
		case 93:
			return "ACCNA_CONSIT";
			break;
		
		case 94:
			return "ACCNA_TRMSITE";
			break;
		
		case 130:
			return "ACCNA_DYNPROP";
			break;
	}
	return "";
}

int func_34()
{
	func_35();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_35()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_38(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_37(unk_0x16F2683693E537C9());
			if (func_36(iVar0) && (!func_101(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_39(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_39(int iParam0)
{
	return Global_1798[iParam0];
}

void func_40()
{
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0xEF6276132B396452(0f, 1065353216);
	unk_0x2FB9A57162E54BAB(0f);
	func_56();
	if (Global_76622)
	{
		unk_0x73591FF5CCBBB2EA(4);
		unk_0x73591FF5CCBBB2EA(5);
		unk_0x73591FF5CCBBB2EA(13);
		unk_0x73591FF5CCBBB2EA(3);
	}
	Global_2462917 = 1;
	unk_0xEAB026E686C0D991(2, 199, 1);
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(iLocal_594, 255, 255, 255, 255, 0);
	func_50();
	func_44(0);
	func_41(1);
	wait(0);
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_43();
	}
	func_42(4, -1);
	func_42(6, -1);
	func_42(7, -1);
	func_42(3, -1);
	func_42(1, -1);
	func_42(2, -1);
	func_42(11, -1);
	func_42(13, -1);
	func_42(14, -1);
	func_42(16, -1);
}

void func_42(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_43()
{
	Global_2537071.f_4532 = 0;
}

void func_44(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_82(0))
		{
			func_45(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_45(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_48())
		{
			func_47(1, 1);
		}
		else
		{
			func_47(0, 0);
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
	if (!func_46())
	{
		Global_19486.f_1 = 3;
	}
}

int func_46()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_47(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
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

bool func_48()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_50()
{
	unk_0xC2127C0F64D6A3B9();
	func_51();
}

void func_51()
{
	Global_22211.f_134 = 1;
}

int func_52()
{
	iVar0 = unk_0x16F2683693E537C9();
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 1;
	}
	if (iLocal_495 == 0)
	{
		iLocal_495 = unk_0x7F6DC62EA9922664(iVar0);
		return 0;
	}
	iVar1 = unk_0x7F6DC62EA9922664(iVar0);
	if (iLocal_495 != iVar1)
	{
		iLocal_495 = iVar1;
		return 1;
	}
	return 0;
}

void func_53(bool bParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(iLocal_595, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iLocal_595, "SET_CLEAR_SPACE");
	unk_0x3CAEA85DA607305E(200);
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(iLocal_595, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	iVar0 = 0;
	if (Global_76622)
	{
		unk_0x7E60C62A7CE58FC8(iLocal_595, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(iVar0);
		func_54(unk_0xF59058FCB716F903(2, 201, true));
		func_31("MPATM_SELECT");
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(201);
		}
		unk_0x7E60D21B163E9D56();
		iVar0++;
		if (unk_0x91E3F625EF57450D(2))
		{
			bParam1 = false;
		}
		if (bParam0)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_595, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(iVar0);
			if (bParam1)
			{
				func_54(unk_0xF59058FCB716F903(2, 198, true));
			}
			else
			{
				func_54(unk_0xE32F7AC5E6DF304A(2, 7, true));
			}
			func_31("MPATM_NAV");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x1200CC973A2399C8(false);
				unk_0x3CAEA85DA607305E(361);
			}
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
	}
	unk_0x7E60C62A7CE58FC8(iLocal_595, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(iVar0);
	func_54(unk_0xF59058FCB716F903(2, 202, true));
	func_31("MPATM_EXIT");
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x1200CC973A2399C8(true);
		unk_0x3CAEA85DA607305E(202);
	}
	unk_0x7E60D21B163E9D56();
	iVar0++;
	unk_0x7E60C62A7CE58FC8(iLocal_595, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_54(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_55(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	func_63(0, &sVar0);
	func_63(1, &sVar16);
	func_63(2, &sVar32);
	func_63(3, &sVar48);
	unk_0x3F423BF5B8125A50(&sVar48);
	unk_0x3F423BF5B8125A50(&sVar0);
	iVar64 = 3;
	if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == -1667301416)
	{
		iVar64 = 3;
	}
	switch (iLocal_499)
	{
		case 0:
			unk_0x00EE06C17607E306("walk", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 64, 256, 64, 64);
			if (unk_0xB4AE0788C1587752(&sVar0))
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) == 7 && unk_0xB4AE0788C1587752(&sVar0))
				{
					if (unk_0x69DF961355195C3C(iLocal_500))
					{
						unk_0xB46854F2D1C7DFA9(iLocal_500);
						iLocal_500 = -1;
					}
					iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0x914E6894744915F8(iLocal_500);
					unk_0x8D17794CE3273D70(&sVar0);
					iLocal_499 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x00EE06C17607E306("enter", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 64, 256, 64, 64);
			unk_0x3F423BF5B8125A50(&sVar16);
			unk_0x3F423BF5B8125A50(&sVar32);
			iVar65 = unk_0xF958843510932FF6(iLocal_500);
			if (unk_0xB4AE0788C1587752(&sVar16) && (!unk_0x69DF961355195C3C(iVar65) || unk_0x69DF961355195C3C(iVar65)))
			{
				iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_500);
				iLocal_499 = 2;
			}
			break;
		
		case 2:
			unk_0x00EE06C17607E306("base", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 32, 32, 256, 128);
			iVar65 = unk_0xF958843510932FF6(iLocal_500);
			if (!unk_0x69DF961355195C3C(iLocal_500) && !unk_0x69DF961355195C3C(iVar65))
			{
				iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar65 = unk_0xF958843510932FF6(iLocal_500);
				if (unk_0x69DF961355195C3C(iVar65))
				{
					unk_0x57E0CF9BF653D99A(iVar65, 0f);
				}
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			if (unk_0xB4AE0788C1587752(&sVar32) && (!unk_0x69DF961355195C3C(iVar65) || unk_0xA45992A6CE82FB43(iVar65) >= 0,99f))
			{
				iVar66 = unk_0x09AC81E49EA267F7(0, iVar64);
				if ((((unk_0x7F8A39872A07D2CE(&cLocal_510, "idle_a") && iVar66 == 0) || (unk_0x7F8A39872A07D2CE(&cLocal_510, "idle_b") && iVar66 == 1)) || (unk_0x7F8A39872A07D2CE(&cLocal_510, "idle_c") && iVar66 == 2)) || (unk_0x7F8A39872A07D2CE(&cLocal_510, "idle_d") && iVar66 == 3))
				{
					iVar66++;
					if (iVar66 >= iVar64)
					{
						iVar66 = 0;
					}
				}
				if (unk_0x69DF961355195C3C(iLocal_500))
				{
					unk_0xB46854F2D1C7DFA9(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar66)
				{
					case 0:
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar32, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x914E6894744915F8(iLocal_500);
						StringCopy(&cLocal_510, "idle_a", 16);
						iLocal_499 = 3;
						break;
					
					case 1:
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar32, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x914E6894744915F8(iLocal_500);
						StringCopy(&cLocal_510, "idle_b", 16);
						iLocal_499 = 3;
						break;
					
					case 2:
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar32, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x914E6894744915F8(iLocal_500);
						StringCopy(&cLocal_510, "idle_c", 16);
						iLocal_499 = 3;
						break;
					
					case 3:
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar32, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x914E6894744915F8(iLocal_500);
						StringCopy(&cLocal_510, "idle_d", 16);
						iLocal_499 = 3;
						break;
					
					default:
						StringCopy(&cLocal_510, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &sVar32, "idle_a", 2))
			{
				unk_0x00EE06C17607E306("idle_a", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 256, 64, 64, 64);
			}
			else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &sVar32, "idle_b", 2))
			{
				unk_0x00EE06C17607E306("idle_b", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 256, 64, 64, 64);
			}
			else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &sVar32, "idle_c", 2))
			{
				unk_0x00EE06C17607E306("idle_c", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 256, 64, 64, 64);
			}
			else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &sVar32, "idle_d", 2))
			{
				unk_0x00EE06C17607E306("idle_d", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 256, 64, 64, 64);
			}
			else
			{
				unk_0x00EE06C17607E306("idle_XXX", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 256, 64, 64, 64);
			}
			iVar65 = unk_0xF958843510932FF6(iLocal_500);
			if (!unk_0x69DF961355195C3C(iLocal_500) && !unk_0x69DF961355195C3C(iVar65))
			{
				if (unk_0x69DF961355195C3C(iLocal_500))
				{
					unk_0xB46854F2D1C7DFA9(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar65 = unk_0xF958843510932FF6(iLocal_500);
				if (unk_0x69DF961355195C3C(iVar65))
				{
					unk_0x57E0CF9BF653D99A(iVar65, 0f);
				}
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			if (unk_0xB4AE0788C1587752(&sVar16) && (!unk_0x69DF961355195C3C(iVar65) || unk_0xA45992A6CE82FB43(iVar65) >= 0,99f))
			{
				if (unk_0x69DF961355195C3C(iLocal_500))
				{
					unk_0xB46854F2D1C7DFA9(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = unk_0xF66E5A439A080021(vLocal_507, unk_0x835730A2D89F6093(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			break;
	}
}

void func_56()
{
	func_57(1);
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x5EEBDFEE72949D59(0);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		unk_0xEAB026E686C0D991(2, 188, 1);
		unk_0xEAB026E686C0D991(2, 187, 1);
		unk_0xEAB026E686C0D991(2, 189, 1);
		unk_0xEAB026E686C0D991(2, 190, 1);
		unk_0xEAB026E686C0D991(2, 239, 1);
		unk_0xEAB026E686C0D991(2, 240, 1);
		unk_0xEAB026E686C0D991(2, 237, 1);
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_94753, iParam0))
		{
			unk_0x5D96D8530B3D0904(&Global_94753, iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_94753, iParam0))
	{
		unk_0x0674E58A79778E99(&Global_94753, iParam0);
	}
}

bool func_60(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_94754, iParam0);
}

bool func_61(int iParam0)
{
	bVar0 = unk_0x5A91F08DF773C39D(iParam0, 130,1504f, -1291,626f, 28,2714f, 0,01f, 0,01f, 0,01f, false, true, 0);
	return bVar0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_63(int iParam0, char* sParam1)
{
	if (!unk_0x8CD06866876216F2())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_89())
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
	if (iVar0 == 1885233650)
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@enter", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "mini@atmenter", 64);
				}
				return 1;
				break;
			
			case 1:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@base", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "mini@atmbase", 64);
				}
				return 1;
				break;
			
			case 2:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@idle_a", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@idle_a", 64);
				}
				return 1;
				break;
			
			case 3:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@exit", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "mini@atmexit", 64);
				}
				return 1;
				break;
		}
	}
	else if (iVar0 == -1667301416)
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@enter", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@enter", 64);
				}
				return 1;
				break;
			
			case 1:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@base", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@base", 64);
				}
				return 1;
				break;
			
			case 2:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@idle_a", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@idle_a", 64);
				}
				return 1;
				break;
			
			case 3:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@exit", 64);
				if (!unk_0x720928A330953059(sParam1))
				{
					StringCopy(sParam1, "mini@atmexit", 64);
				}
				return 1;
				break;
			}
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0x3BE9D9F3DC14F695())
	{
		if (unk_0x503BB34EF80493D4())
		{
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x713261485D0F1B6C(iParam0, 0))
		{
			return 1;
		}
	}
	if (func_68(0))
	{
		return 1;
	}
	if (iParam1 && iLocal_591 > 1000)
	{
		if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_496, 1,5f, 1,5f, 1,5f, false, true, 1))
		{
			return 1;
		}
	}
	if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	iVar0 = unk_0xA30EC016B12C03E4();
	if (!unk_0xE1DBBD6CE209517C(iVar0))
	{
		return 1;
	}
	if (!unk_0x93B62D155C014521(iVar0))
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (Global_76622 && func_66())
	{
		return 0;
	}
	if (!Global_76622 && func_65())
	{
		return 0;
	}
	if (Global_76622 && unk_0x8CD06866876216F2())
	{
		if (func_89())
		{
			return 1;
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iLocal_556[iVar1] && unk_0x57270EE11514DC67() != iVar1)
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

var func_65()
{
	return Global_73826;
}

var func_66()
{
	return Global_1662476;
}

int func_67()
{
	if (iLocal_590 == 0)
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
		iLocal_590 = unk_0x6D4C9F7CF124AE37(vVar0, vVar0 - Vector(3f, 0f, 0f), 0,33f, 2, unk_0x16F2683693E537C9(), 4);
		return iLocal_589;
	}
	else
	{
		iVar3 = 0;
		iVar11 = unk_0x1EC301670B54C6DE(iLocal_590, &iVar3, &uVar4, &uVar7, &iVar10);
		if (iVar11 == 2)
		{
			iLocal_589 = 0;
			if (iVar3 != 0)
			{
				iLocal_590 = 0;
				if (unk_0xE2F1E99DD161A861(iVar10) && !unk_0xA0CCD09012AED177(iVar10))
				{
					iLocal_589 = 1;
				}
			}
			return iLocal_589;
		}
		else
		{
			if (iVar11 == 0)
			{
				iLocal_590 = 0;
			}
			return iLocal_589;
		}
	}
	return 0;
}

bool func_68(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_69(int iParam0, bool bParam1)
{
	iVar0 = func_5(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

void func_70(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_4(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_71(int iParam0)
{
	return func_72(iParam0) == 1119849093;
}

int func_72(int iParam0)
{
	return Global_1628237[iParam0].f_595;
}

int func_73(int iParam0)
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

bool func_74(int iParam0)
{
	return iParam0 == 50;
}

bool func_75(int iParam0)
{
	return iParam0 == 58;
}

bool func_76(int iParam0)
{
	return iParam0 == 13;
}

int func_77(int iParam0)
{
	if (func_78(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), -1, 0) == unk_0x16F2683693E537C9())
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iLocal_592 < 3000)
	{
		return 1;
	}
	if (func_64(iParam0, iParam1))
	{
		iLocal_592 = 0;
		return 1;
	}
	return 0;
}

int func_81()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
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

bool func_83(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_84(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_85(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_85(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_86();
	}
}

void func_86()
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

int func_87(char* sParam0)
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

void func_88(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_89()
{
	func_97(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_96())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_95())
	{
		return 1;
	}
	if (func_94(159))
	{
		if (!func_93())
		{
			return 1;
		}
	}
	if (func_94(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_90() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_90()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	switch (func_92())
	{
		case 0:
			return func_91();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_91()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_92()
{
	return Global_30768;
}

bool func_93()
{
	return Global_2450632.f_598;
}

int func_94(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return Global_2460680;
}

bool func_96()
{
	return Global_2450632.f_593;
}

void func_97(var uParam0)
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
					func_98(iVar0);
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

void func_98(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_100(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_99(iVar4, &bVar5))
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

int func_99(int iParam0, var uParam1)
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

int func_100(int iParam0, bool bParam1, bool bParam2)
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

bool func_101(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_102(vector3 vParam0)
{
	if ((vParam0.x == 129,6975f && vParam0.y == -1290,842f) && vParam0.z == 28,27142f)
	{
		return 1;
	}
	if ((vParam0.x == 130,5791f && vParam0.y == -1292,369f) && vParam0.z == 28,27142f)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if (iLocal_598)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xACCBB8E1BDF4D6BE(unk_0x16F2683693E537C9()))
				{
					unk_0x2ECF845953E95D1B(unk_0x16F2683693E537C9());
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				}
			}
		}
	}
	func_106("ATM_1TM_TUT", 1);
	if (iLocal_593 != -1)
	{
		func_4(&iLocal_593);
	}
	if (iLocal_594 != 0)
	{
		unk_0xE17FDF9E3068281B(&iLocal_594);
	}
	func_105();
	func_104();
	Global_58693 = 0;
	func_62(0, 1, iLocal_515, 1);
	if (iLocal_597)
	{
		func_59(4, 1);
		iLocal_597 = 0;
	}
}

void func_104()
{
	if (Global_73826)
	{
	}
	Global_73826 = 0;
}

void func_105()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

void func_106(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_83(sParam0) && !unk_0x79BBCD5833294FD5())
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
				func_108(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_107((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_86();
			return;
		}
		iVar0++;
	}
}

void func_107(int iParam0)
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

void func_108(int iParam0, int iParam1)
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

void func_109()
{
	if (unk_0x8CD06866876216F2())
	{
		if (!unk_0x5F4FB6573A5696A1(32, 0, -1))
		{
			func_103();
			unk_0x10FAF14A60A0DBE1();
		}
		func_111(0, -1, 0);
		unk_0x9752E7BAEABA939E(&iLocal_521, 35);
		unk_0x35B62793EAE9ADDF(&iLocal_556, 33);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iLocal_521[iVar0] = -1;
			iVar0++;
		}
		unk_0x256D93AFAE851A7A(0);
		if (!func_110())
		{
			func_103();
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else if (unk_0x2EBF608FFE6CA406(3))
	{
		func_103();
		unk_0x10FAF14A60A0DBE1();
	}
}

int func_110()
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
		if (func_96())
		{
			return 0;
		}
		if (func_94(157))
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

int func_111(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_113();
			}
			else
			{
				return 0;
			}
		}
		if (!func_112())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_113();
					}
					else
					{
						return 0;
					}
				}
				if (func_96())
				{
					if (!bParam2)
					{
						func_113();
					}
					else
					{
						return 0;
					}
				}
				if (func_94(157))
				{
					if (!bParam2)
					{
						func_113();
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
					func_113();
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
				func_113();
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
			func_113();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_112()
{
	return Global_1312854;
}

void func_113()
{
	unk_0x10FAF14A60A0DBE1();
}

