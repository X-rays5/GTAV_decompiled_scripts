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
	fLocal_250 = 40000f;
	vLocal_264 = { ScriptParam_0.f_1[0] };
	if (unk_0x2EBF608FFE6CA406(34))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if ((func_53(13) || func_53(14)) || func_52(0))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_30();
	func_29();
	func_26();
	func_25();
	while (true)
	{
		wait(0);
		func_24();
		func_17();
		if (unk_0x338D6FF72D84D90F())
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				func_16();
				switch (iLocal_27)
				{
					case 0:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_39[iLocal_31]) < fLocal_250)
							{
								if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
								{
									if ((((((((((((((iLocal_31 == 33 || iLocal_31 == 34) || iLocal_31 == 35) || iLocal_31 == 36) || iLocal_31 == 50) || iLocal_31 == 51) || iLocal_31 == 52) || iLocal_31 == 53) || iLocal_31 == 54) || iLocal_31 == 55) || iLocal_31 == 56) || iLocal_31 == 57) || iLocal_31 == 58) || iLocal_31 == 59) || iLocal_31 == 60)
									{
										bLocal_38 = true;
									}
									else
									{
										bLocal_38 = false;
									}
									if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
									{
										if (func_15())
										{
											if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0))
											{
												bLocal_33 = true;
												iLocal_27 = 1;
											}
											if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
											{
												bLocal_34 = true;
												iLocal_27 = 1;
											}
										}
									}
								}
							}
						}
						settimera(0);
						break;
					
					case 1:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
							{
								func_14();
							}
							else if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
							{
								func_14();
							}
							else if (!unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
							{
								func_14();
							}
							if (bLocal_33)
							{
								if (iLocal_37)
								{
									if (iLocal_36)
									{
										if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
										{
											func_14();
											func_1();
											unk_0x8B4C4CA774181102(3f, 2f, 3);
										}
									}
									else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										iLocal_36 = 1;
									}
									else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										func_14();
									}
								}
								else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									func_14();
								}
							}
							else if (bLocal_34)
							{
								if (iLocal_37)
								{
									if (iLocal_35)
									{
										if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
										{
											func_14();
											func_1();
											unk_0x8B4C4CA774181102(3f, 2f, 3);
										}
									}
									else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										iLocal_35 = 1;
									}
									else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
									{
										func_14();
									}
								}
								else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_251, vLocal_254, fLocal_263, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_257, vLocal_260, fLocal_263, 0, true, 0))
								{
									func_14();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_28 == 0)
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1()
{
	if (iLocal_31 < 32)
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_96, iLocal_31);
	}
	else if (iLocal_31 < 64)
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_97, (iLocal_31 - 32));
	}
	else
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_98, (iLocal_31 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_267)
		{
			if (bLocal_38)
			{
				unk_0x9505C13496579D28(-792173684, 1f);
			}
			else
			{
				unk_0x9505C13496579D28(-134936553, 1f);
			}
			func_3(func_8(), 5, 3);
			func_2();
		}
		if (iLocal_31 < 32)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_96), iLocal_31);
		}
		else if (iLocal_31 < 64)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_97), (iLocal_31 - 32));
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_98), (iLocal_31 - 64));
		}
		Global_95189 = 1;
		func_30();
		iLocal_29 = 1;
	}
}

int func_2()
{
	if (func_52(0))
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

void func_3(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				iVar0 = func_7(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_5(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_5(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8()
{
	func_9();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_9()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_12(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_11(unk_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_53(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111638.f_2358.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1798[iParam0];
}

void func_14()
{
	bLocal_33 = false;
	bLocal_34 = false;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_27 = 0;
}

int func_15()
{
	if (bLocal_38)
	{
		if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
		{
			if (unk_0x30C0A7C378403357(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > -0,6f && unk_0x30C0A7C378403357(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) < 0,6f)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_16()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_268) > 500)
	{
		if (iLocal_31 == 29)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_96, iLocal_31))
			{
				bLocal_267 = true;
			}
		}
		iLocal_268 = unk_0x1C0640BA9A7327B3();
	}
}

void func_17()
{
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_29 && !bLocal_267)
			{
				if (!func_23())
				{
					iLocal_30 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
					while (!unk_0x83D8570832F172A7(iLocal_30))
					{
						wait(0);
					}
					unk_0x7E60C62A7CE58FC8(iLocal_30, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (bLocal_38)
					{
						func_22("FU_KNIFE");
						unk_0x3CAEA85DA607305E(15);
					}
					else
					{
						func_22("FU_TITLE");
						unk_0x3CAEA85DA607305E(50);
					}
					func_22("FU_PASS");
					if (bLocal_38)
					{
						func_22("FU_CHALL_KN");
					}
					else
					{
						func_22("FU_CHALLENGE");
					}
					unk_0x3CAEA85DA607305E(func_30());
					unk_0x7E60D21B163E9D56();
					iLocal_32 = func_30();
					Global_31002 = iLocal_32;
					settimerb(0);
					unk_0x4D7F4CC43D4D0DE3(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_28 = 1;
			}
			break;
		
		case 1:
			if ((((((timerb() > 3750 || unk_0x757EF87A33649210()) || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_23()) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_21()) || func_20())
			{
				unk_0x7E60C62A7CE58FC8(iLocal_30, "SHARD_ANIM_OUT");
				unk_0x3CAEA85DA607305E(1);
				unk_0x7C19E5E4784BD7CF(0,33f);
				unk_0x7E60D21B163E9D56();
				settimerb(0);
				iLocal_28 = 2;
			}
			else
			{
				func_19();
				if (Global_31002 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((timerb() > 500 || unk_0x757EF87A33649210()) || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_23()) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_21()) || func_20())
			{
				iLocal_28 = 3;
			}
			else
			{
				func_19();
				if (Global_31002 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 3:
			func_18();
			iLocal_29 = 0;
			func_26();
			bLocal_267 = true;
			iLocal_28 = 0;
			break;
	}
}

void func_18()
{
	if (unk_0x83D8570832F172A7(iLocal_30))
	{
		unk_0xE17FDF9E3068281B(&iLocal_30);
	}
}

void func_19()
{
	if (!func_23())
	{
		if (unk_0x83D8570832F172A7(iLocal_30))
		{
			unk_0xEF45C43067063F18(iLocal_30, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_20()
{
	if (Global_41431 == 9 || Global_41431 == 10)
	{
		return Global_110288;
	}
	Global_110288 = 0;
	return 0;
}

int func_21()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_22(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_23()
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

void func_24()
{
}

void func_25()
{
}

void func_26()
{
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_28(vLocal_264, vLocal_39[iVar0], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_250 = 490000f;
				iLocal_31 = 29;
			}
			else
			{
				iLocal_31 = iVar0;
			}
		}
		iVar0++;
	}
	if (iLocal_31 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_96, iLocal_31))
		{
			bLocal_267 = true;
		}
	}
	else if (iLocal_31 < 64)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_97, (iLocal_31 - 32)))
		{
			bLocal_267 = true;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_98, (iLocal_31 - 64)))
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
	}
	else
	{
		func_27(iLocal_31);
	}
}

void func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vLocal_251 = { 1103,014f, -233,0374f, 56,13004f };
			vLocal_254 = { 1073,191f, -214,8478f, 66,0593f };
			fLocal_263 = 30f;
			vLocal_257 = { 1093,589f, -248,5926f, 56,88639f };
			vLocal_260 = { 1063,774f, -230,1425f, 66,67847f };
			break;
		
		case 1:
			vLocal_251 = { 1044,182f, -324,5904f, 49,33408f };
			vLocal_254 = { 1016,71f, -307,7383f, 64,81343f };
			fLocal_263 = 30f;
			vLocal_257 = { 1007,983f, -320,6159f, 48,4543f };
			vLocal_260 = { 1036,007f, -337,4204f, 64,4808f };
			break;
		
		case 2:
			vLocal_251 = { 916,599f, -419,8782f, 35,62748f };
			vLocal_254 = { 910,3793f, -383,8826f, 47,54339f };
			fLocal_263 = 7f;
			vLocal_257 = { 912,1362f, -420,5161f, 35,38034f };
			vLocal_260 = { 906,8952f, -384,6779f, 47,24926f };
			break;
		
		case 3:
			vLocal_251 = { 757,7189f, -472,924f, 19,2535f };
			vLocal_254 = { 696,5936f, -420,2115f, 35,46084f };
			fLocal_263 = 20,75f;
			vLocal_257 = { 744,9114f, -480,7373f, 19,06514f };
			vLocal_260 = { 682,5614f, -429,5533f, 37,0266f };
			break;
		
		case 4:
			vLocal_251 = { 680,3677f, -581,1792f, 14,2145f };
			vLocal_254 = { 599,8101f, -528,3059f, 33,40958f };
			fLocal_263 = 45f;
			vLocal_257 = { 667,3692f, -610,5356f, 13,85401f };
			vLocal_260 = { 582,8433f, -556,7818f, 33,40335f };
			break;
		
		case 5:
			vLocal_251 = { 644,2497f, -844,7504f, 12,36707f };
			vLocal_254 = { 526,8608f, -845,2521f, 35,9896f };
			fLocal_263 = 25f;
			vLocal_257 = { 644,3659f, -859,3878f, 12,59677f };
			vLocal_260 = { 526,8615f, -857,5208f, 36,32857f };
			break;
		
		case 6:
			vLocal_251 = { 634,972f, -1011,64f, 10,92594f };
			vLocal_254 = { 539,6501f, -1024,017f, 35,95852f };
			fLocal_263 = 25f;
			vLocal_257 = { 634,9612f, -1029,123f, 10,61846f };
			vLocal_260 = { 543,4893f, -1038,261f, 35,9593f };
			break;
		
		case 7:
			vLocal_251 = { 645,7223f, -1191,215f, 10,45198f };
			vLocal_254 = { 524,3018f, -1197,167f, 39,61172f };
			fLocal_263 = 50f;
			vLocal_257 = { 645,7223f, -1228,966f, 10,98015f };
			vLocal_260 = { 521,9379f, -1217,607f, 39,47172f };
			break;
		
		case 8:
			vLocal_251 = { 642,1216f, -1295,73f, 9,005976f };
			vLocal_254 = { 568,1702f, -1375,351f, 20,12989f };
			fLocal_263 = 7f;
			vLocal_257 = { 644,7772f, -1298,168f, 9,128529f };
			vLocal_260 = { 571,6342f, -1378,644f, 20,35802f };
			break;
		
		case 9:
			vLocal_251 = { 686,5675f, -1444,71f, 9,065001f };
			vLocal_254 = { 598,9328f, -1444,438f, 25,68846f };
			fLocal_263 = 25f;
			vLocal_257 = { 682,3027f, -1429,872f, 9,890836f };
			vLocal_260 = { 593,8217f, -1432,995f, 25,60072f };
			break;
		
		case 10:
			vLocal_251 = { 718,7617f, -1734,313f, 9,082874f };
			vLocal_254 = { 615,0017f, -1725,897f, 27,54585f };
			fLocal_263 = 30f;
			vLocal_257 = { 717,5355f, -1748,646f, 9,363478f };
			vLocal_260 = { 614,218f, -1734,848f, 27,35708f };
			break;
		
		case 11:
			vLocal_251 = { 694,3165f, -2049,806f, 0,009695f };
			vLocal_254 = { 618,6845f, -2040,014f, 25,83412f };
			fLocal_263 = 30f;
			vLocal_257 = { 693,1836f, -2063,225f, 0,429037f };
			vLocal_260 = { 607,5944f, -2055,326f, 26,91816f };
			break;
		
		case 12:
			vLocal_251 = { 642,6671f, -2494,551f, 0,468485f };
			vLocal_254 = { 570,1807f, -2513,959f, 11,78794f };
			fLocal_263 = 20f;
			vLocal_257 = { 647,0339f, -2506,202f, 0,583701f };
			vLocal_260 = { 571,1415f, -2522,975f, 10,45045f };
			break;
		
		case 13:
			vLocal_251 = { 691,8235f, -2558,219f, 0,363352f };
			vLocal_254 = { 645,8863f, -2600,311f, 9,898791f };
			fLocal_263 = 10,25f;
			vLocal_257 = { 695,7928f, -2561,034f, 0,346731f };
			vLocal_260 = { 656,3919f, -2601,972f, 9,643657f };
			break;
		
		case 14:
			vLocal_251 = { 723,6254f, -2562,171f, 0,255647f };
			vLocal_254 = { 720,752f, -2619,77f, 15,73211f };
			fLocal_263 = 20f;
			vLocal_257 = { 735,765f, -2561,935f, 0,311182f };
			vLocal_260 = { 736,1214f, -2618,767f, 15,79061f };
			break;
		
		case 15:
			vLocal_251 = { 891,4387f, -2603,12f, 0f };
			vLocal_254 = { 704,4932f, -2634,793f, 45f };
			fLocal_263 = 20f;
			vLocal_257 = { 893,2578f, -2616,235f, 0f };
			vLocal_260 = { 707,7261f, -2647,696f, 45f };
			break;
		
		case 16:
			vLocal_251 = { -2669,587f, 2491,96f, 2,043799f };
			vLocal_254 = { -2617,765f, 2841,595f, 14,0822f };
			fLocal_263 = 26,5f;
			vLocal_257 = { -2687,606f, 2494,868f, 2,608733f };
			vLocal_260 = { -2637,085f, 2846,875f, 14,15988f };
			break;
		
		case 17:
			vLocal_251 = { -1986,173f, 4521,799f, 0f };
			vLocal_254 = { -1809,903f, 4699,551f, 53,5088f };
			fLocal_263 = 17f;
			vLocal_257 = { -1995,668f, 4531,259f, 0f };
			vLocal_260 = { -1817,543f, 4708,395f, 53,50917f };
			break;
		
		case 18:
			vLocal_251 = { -526,0265f, 4472,442f, 0f };
			vLocal_254 = { -505,5714f, 4335,725f, 86,73311f };
			fLocal_263 = 10f;
			vLocal_257 = { -519,9281f, 4476,346f, 0f };
			vLocal_260 = { -500,7313f, 4336,389f, 86,71289f };
			break;
		
		case 19:
			vLocal_251 = { 98,1615f, 3384,489f, 45,45169f };
			vLocal_254 = { 154,974f, 3350,694f, 30,03358f };
			fLocal_263 = 8f;
			vLocal_257 = { 152,6802f, 3346,793f, 45,02156f };
			vLocal_260 = { 95,57188f, 3380,091f, 30,43284f };
			break;
		
		case 20:
			vLocal_251 = { 147,8606f, 3406,796f, 38,03672f };
			vLocal_254 = { 126,1329f, 3416,927f, 30,02987f };
			fLocal_263 = 14,5f;
			vLocal_257 = { 130,0916f, 3425,417f, 38,05672f };
			vLocal_260 = { 151,8703f, 3415,391f, 30,0578f };
			break;
		
		case 21:
			vLocal_251 = { 2830,972f, 4967,14f, 34,56013f };
			vLocal_254 = { 2818,719f, 4992,298f, 51,2909f };
			fLocal_263 = 10f;
			vLocal_257 = { 2826,767f, 4964,185f, 34,10636f };
			vLocal_260 = { 2814,216f, 4989,983f, 51,21849f };
			break;
		
		case 22:
			vLocal_251 = { -151,5764f, 4264,417f, 31,04735f };
			vLocal_254 = { -193,1962f, 4224,604f, 43,87255f };
			fLocal_263 = 10f;
			vLocal_257 = { -148,3842f, 4261,071f, 31,57409f };
			vLocal_260 = { -190,4719f, 4222,076f, 43,95443f };
			break;
		
		case 23:
			vLocal_251 = { -426,6919f, 2964,272f, 14,848f };
			vLocal_254 = { -396,2298f, 2959,278f, 23,50637f };
			fLocal_263 = 7f;
			vLocal_257 = { -425,0283f, 2967,861f, 15,22699f };
			vLocal_260 = { -395,6073f, 2962,607f, 24,38079f };
			break;
		
		case 24:
			vLocal_251 = { -192,3414f, 2864,916f, 30,72595f };
			vLocal_254 = { -170,1509f, 2857,128f, 43,94182f };
			fLocal_263 = 10f;
			vLocal_257 = { -192,0129f, 2871,603f, 29,99943f };
			vLocal_260 = { -169,5957f, 2863,838f, 44,03251f };
			break;
		
		case 25:
			vLocal_251 = { 2539,185f, 2228,772f, 18,6102f };
			vLocal_254 = { 2574,373f, 2169,401f, 27,26598f };
			fLocal_263 = 10f;
			vLocal_257 = { 2543,708f, 2231,402f, 18,331f };
			vLocal_260 = { 2578,079f, 2171,584f, 27,26057f };
			break;
		
		case 26:
			vLocal_251 = { 2954,087f, 815,7209f, 0,037901f };
			vLocal_254 = { 2933,189f, 796,4688f, 12,98392f };
			fLocal_263 = 35f;
			vLocal_257 = { 2966,123f, 806,8889f, 0,544056f };
			vLocal_260 = { 2950,801f, 786,7816f, 11,74596f };
			break;
		
		case 27:
			vLocal_251 = { 2329,673f, -459,6648f, 70,24277f };
			vLocal_254 = { 2413,384f, -361,2188f, 91,77886f };
			fLocal_263 = 12f;
			vLocal_257 = { 2324,752f, -455,5238f, 70,25145f };
			vLocal_260 = { 2407,409f, -356,2003f, 91,43083f };
			break;
		
		case 28:
			vLocal_251 = { 1943,428f, -753,251f, 80,17905f };
			vLocal_254 = { 1850,365f, -760,9587f, 93,02522f };
			fLocal_263 = 7f;
			vLocal_257 = { 1943,366f, -758,287f, 80,32291f };
			vLocal_260 = { 1851,354f, -765,1807f, 92,93546f };
			break;
		
		case 29:
			vLocal_251 = { -655,1467f, -2138,094f, -0,339008f };
			vLocal_254 = { -146,0279f, -2493,724f, 54,67567f };
			fLocal_263 = 47,75f;
			vLocal_257 = { -672,2213f, -2162,675f, -0,082912f };
			vLocal_260 = { -163,5556f, -2519,058f, 54,72249f };
			break;
		
		case 30:
			vLocal_251 = { -1483f, 2691,428f, -10f };
			vLocal_254 = { -1377,168f, 2600,769f, 15,95528f };
			fLocal_263 = 12f;
			vLocal_257 = { -1478,152f, 2696,688f, -10f };
			vLocal_260 = { -1378,503f, 2608,698f, 15,60924f };
			break;
		
		case 31:
			vLocal_251 = { 222,1519f, -2343,487f, 0,039199f };
			vLocal_254 = { 222,6849f, -2297,407f, 7,088753f };
			fLocal_263 = 12f;
			vLocal_257 = { 216,959f, -2343,487f, 0,207734f };
			vLocal_260 = { 216,602f, -2295,445f, 7,424279f };
			break;
		
		case 32:
			vLocal_251 = { 346,4622f, -2244,374f, 0,159779f };
			vLocal_254 = { 346,8347f, -2389,591f, 7,852059f };
			fLocal_263 = 20f;
			vLocal_257 = { 359,609f, -2244,468f, 0,129684f };
			vLocal_260 = { 355,4054f, -2390,258f, 7,080691f };
			break;
		
		case 33:
			vLocal_251 = { -1859,68f, -322,6357f, 56,16368f };
			vLocal_254 = { -1836,614f, -335,4141f, 96,1161f };
			fLocal_263 = 7,5f;
			vLocal_257 = { -1860,27f, -327,8634f, 57,543f };
			vLocal_260 = { -1837,271f, -339,2227f, 95,69325f };
			break;
		
		case 34:
			vLocal_251 = { -680,2632f, -600,818f, 69,11289f };
			vLocal_254 = { -706,6613f, -600,7515f, 30,47604f };
			fLocal_263 = 31,5f;
			vLocal_257 = { -680,6077f, -618,3658f, 69,27496f };
			vLocal_260 = { -706,3596f, -618,2385f, 30,31235f };
			break;
		
		case 35:
			vLocal_251 = { -1468,096f, -591,7158f, 67,05518f };
			vLocal_254 = { -1454,7f, -573,4518f, 29,56736f };
			fLocal_263 = 11,75f;
			vLocal_257 = { -1474,903f, -591,1215f, 67,08091f };
			vLocal_260 = { -1457,173f, -568,1316f, 29,44059f };
			break;
		
		case 36:
			vLocal_251 = { -1544,958f, -537,1475f, 72,44347f };
			vLocal_254 = { -1564,616f, -551,1829f, 32,86163f };
			fLocal_263 = 11,75f;
			vLocal_257 = { -1541,008f, -541,5494f, 71,61972f };
			vLocal_260 = { -1561,219f, -555,868f, 32,9279f };
			break;
		
		case 37:
			vLocal_251 = { 333,2108f, -2727,274f, 20,71663f };
			vLocal_254 = { 333,4297f, -2791,609f, 41,99023f };
			fLocal_263 = 20f;
			vLocal_257 = { 343,1127f, -2727,236f, 20,23613f };
			vLocal_260 = { 343,6678f, -2791,602f, 41,37928f };
			break;
		
		case 38:
			vLocal_251 = { 1928,071f, 6228,355f, 43,49398f };
			vLocal_254 = { 2039,882f, 6167,397f, 55,46405f };
			fLocal_263 = 13f;
			vLocal_257 = { 1931,82f, 6235,634f, 43,37382f };
			vLocal_260 = { 2039,598f, 6176,525f, 55,25597f };
			break;
		
		case 39:
			vLocal_251 = { -736,4309f, -1590,921f, 10,80892f };
			vLocal_254 = { -710,811f, -1516,349f, -0,098598f };
			fLocal_263 = 15f;
			vLocal_257 = { -727,2307f, -1585,221f, 11,78027f };
			vLocal_260 = { -700,0201f, -1511,783f, -0,341655f };
			break;
		
		case 40:
			vLocal_251 = { -686,3775f, -1548,553f, 12,33747f };
			vLocal_254 = { -669,329f, -1507,063f, -0,788618f };
			fLocal_263 = 25f;
			vLocal_257 = { -654,203f, -1536,146f, 9,191055f };
			vLocal_260 = { -645,9954f, -1500,219f, -2,406948f };
			break;
		
		case 41:
			vLocal_251 = { -624,2344f, -1537,045f, 12,60193f };
			vLocal_254 = { -622,1749f, -1472,877f, -0,292606f };
			fLocal_263 = 8f;
			vLocal_257 = { -615,4003f, -1536,65f, 12,40271f };
			vLocal_260 = { -619,7385f, -1472,937f, -0,243267f };
			break;
		
		case 42:
			vLocal_251 = { -492,5057f, -1632,457f, 24,3307f };
			vLocal_254 = { -418,2088f, -1487,452f, 0f };
			fLocal_263 = 25f;
			vLocal_257 = { -486,2016f, -1636,095f, 24,20805f };
			vLocal_260 = { -398,7648f, -1490,44f, 0f };
			break;
		
		case 43:
			vLocal_251 = { -359,3541f, -1639,693f, 13,13455f };
			vLocal_254 = { -388,4955f, -1690,945f, -0,183164f };
			fLocal_263 = 25f;
			vLocal_257 = { -378,1518f, -1705,66f, 12,47196f };
			vLocal_260 = { -348,9591f, -1654,411f, 0,193478f };
			break;
		
		case 44:
			vLocal_251 = { -243,4436f, -1814,623f, 25,69465f };
			vLocal_254 = { -183,9987f, -1780,645f, -0,085802f };
			fLocal_263 = 25f;
			vLocal_257 = { -235,1319f, -1822,094f, 25,86542f };
			vLocal_260 = { -175,5105f, -1788,275f, -0,506062f };
			break;
		
		case 45:
			vLocal_251 = { 84,55537f, -2046,159f, 13,30767f };
			vLocal_254 = { 17,93164f, -2045,152f, -0,031946f };
			fLocal_263 = 25f;
			vLocal_257 = { 17,90788f, -2035,773f, 12,62706f };
			vLocal_260 = { 84,57207f, -2034,184f, 0,048385f };
			break;
		
		case 46:
			vLocal_251 = { -3064,973f, 780,1677f, 18,70642f };
			vLocal_254 = { -3093,958f, 757,2886f, 29,19696f };
			fLocal_263 = 5f;
			vLocal_257 = { -3063,054f, 778,0165f, 18,67167f };
			vLocal_260 = { -3092,175f, 754,9156f, 29,1458f };
			break;
		
		case 47:
			vLocal_251 = { -1471,517f, 2406,815f, 2,485338f };
			vLocal_254 = { -1489,422f, 2404,39f, 21,76938f };
			fLocal_263 = 15f;
			vLocal_257 = { -1468,889f, 2400,668f, 2,60396f };
			vLocal_260 = { -1487,055f, 2398,087f, 21,83768f };
			break;
		
		case 48:
			vLocal_251 = { 2326,57f, 1096,031f, 76,31458f };
			vLocal_254 = { 2290,332f, 1136,131f, 58,85706f };
			fLocal_263 = 21f;
			vLocal_257 = { 2334,453f, 1103,067f, 76,26603f };
			vLocal_260 = { 2297,846f, 1142,897f, 58,84243f };
			break;
		
		case 49:
			vLocal_251 = { 2379,442f, 1150,776f, 58,79632f };
			vLocal_254 = { 2327,658f, 1212,366f, 72,8333f };
			fLocal_263 = 12f;
			vLocal_257 = { 2374,064f, 1146,282f, 58,83331f };
			vLocal_260 = { 2320,895f, 1209,596f, 72,79299f };
			break;
		
		case 50:
			vLocal_251 = { -1179,405f, -355,2554f, 56,53003f };
			vLocal_254 = { -1198,064f, -357,8363f, 35,35551f };
			fLocal_263 = 12,5f;
			vLocal_257 = { -1178,385f, -361,8784f, 56,15081f };
			vLocal_260 = { -1197,104f, -364,7004f, 36,49475f };
			break;
		
		case 51:
			vLocal_251 = { -921,3846f, -384,94f, 137,0181f };
			vLocal_254 = { -912,4324f, -429,229f, 36,70113f };
			fLocal_263 = 16f;
			vLocal_257 = { -914,1658f, -387,9444f, 137,0794f };
			vLocal_260 = { -906,2534f, -424,691f, 47,11882f };
			break;
		
		case 52:
			vLocal_251 = { -740,2564f, 246,4529f, 132,2922f };
			vLocal_254 = { -718,3602f, 201,0042f, 80,95571f };
			fLocal_263 = 20f;
			vLocal_257 = { -726,6429f, 253,0676f, 132,3319f };
			vLocal_260 = { -705,5858f, 210,4336f, 78,70573f };
			break;
		
		case 53:
			vLocal_251 = { -771,2068f, 268,2729f, 132,1689f };
			vLocal_254 = { -778,3417f, 313,1148f, 84,27054f };
			fLocal_263 = 16f;
			vLocal_257 = { -770,8035f, 310,8625f, 137,4161f };
			vLocal_260 = { -763,0681f, 269,044f, 83,31474f };
			break;
		
		case 54:
			vLocal_251 = { 259,2205f, 135,4146f, 136,7083f };
			vLocal_254 = { 279,2396f, 128,1379f, 100,8233f };
			fLocal_263 = 16f;
			vLocal_257 = { 261,9694f, 142,9676f, 136,6889f };
			vLocal_260 = { 281,7203f, 134,9551f, 100,7704f };
			break;
		
		case 55:
			vLocal_251 = { 393,548f, -30,87166f, 152,6635f };
			vLocal_254 = { 369,9622f, -23,88461f, 88,35776f };
			fLocal_263 = 8f;
			vLocal_257 = { 390,5358f, -36,08882f, 152,7813f };
			vLocal_260 = { 368,1275f, -28,81888f, 88,69447f };
			break;
		
		case 56:
			vLocal_251 = { 114,3139f, -648,4297f, 261,8488f };
			vLocal_254 = { 131,0782f, -733,7684f, 39,34393f };
			fLocal_263 = 20f;
			vLocal_257 = { 124,8467f, -646,6575f, 261,8488f };
			vLocal_260 = { 140,0502f, -737,427f, 39,3493f };
			break;
		
		case 57:
			vLocal_251 = { -215,919f, -823,8436f, 126,0224f };
			vLocal_254 = { -193,2237f, -761,7781f, 27,91382f };
			fLocal_263 = 20f;
			vLocal_257 = { -225,397f, -820,3937f, 126,0812f };
			vLocal_260 = { -202,9433f, -758,257f, 27,47734f };
			break;
		
		case 58:
			vLocal_251 = { -296,4725f, -802,0815f, 95,40108f };
			vLocal_254 = { -278,1352f, -747,7841f, 50,40046f };
			fLocal_263 = 20f;
			vLocal_257 = { -305,4602f, -798,8369f, 95,48194f };
			vLocal_260 = { -285,7376f, -745,0959f, 49,57651f };
			break;
		
		case 59:
			vLocal_251 = { -292,3034f, -823,3569f, 95,37621f };
			vLocal_254 = { -258,5991f, -835,5632f, 27,97946f };
			fLocal_263 = 20f;
			vLocal_257 = { -288,9206f, -814,022f, 95,37556f };
			vLocal_260 = { -255,2116f, -826,256f, 27,7375f };
			break;
		
		case 60:
			vLocal_251 = { -256,3589f, -714,7838f, 110,1617f };
			vLocal_254 = { -212,9054f, -730,532f, 32,21946f };
			fLocal_263 = 20f;
			vLocal_257 = { -253,7723f, -705,6632f, 110,1736f };
			vLocal_260 = { -210,0588f, -722,6748f, 32,46536f };
			break;
		
		case 61:
			vLocal_251 = { 1808,214f, 1949,246f, 71,73707f };
			vLocal_254 = { 1837,906f, 2127,283f, 52,80491f };
			fLocal_263 = 9,75f;
			vLocal_257 = { 1802,786f, 1950,262f, 71,74002f };
			vLocal_260 = { 1831,994f, 2127,433f, 52,83893f };
			break;
		
		case 62:
			vLocal_251 = { 2388,733f, 2931,941f, 46,62681f };
			vLocal_254 = { 2426,681f, 2883,066f, 36,21524f };
			fLocal_263 = 10f;
			vLocal_257 = { 2392,547f, 2934,867f, 46,6268f };
			vLocal_260 = { 2430,333f, 2885,908f, 36,28148f };
			break;
		
		case 63:
			vLocal_251 = { 2700,056f, 4836,381f, 42,07854f };
			vLocal_254 = { 2685,673f, 4893,38f, 30,90867f };
			fLocal_263 = 20,75f;
			vLocal_257 = { 2685,672f, 4821,653f, 42,18471f };
			vLocal_260 = { 2672,812f, 4880,356f, 31,13311f };
			break;
		
		case 64:
			vLocal_251 = { -1053,446f, 4766,245f, 234,3251f };
			vLocal_254 = { -1040,263f, 4737,157f, 204,4916f };
			fLocal_263 = 5f;
			vLocal_257 = { -1051,414f, 4767,193f, 234,4293f };
			vLocal_260 = { -1037,954f, 4738,354f, 204,5282f };
			break;
		
		case 67:
			vLocal_251 = { 1001,145f, -987,1138f, 42,62456f };
			vLocal_254 = { 1078,645f, -963,7435f, 28,93338f };
			fLocal_263 = 14f;
			vLocal_257 = { 1002,864f, -992,8986f, 42,62456f };
			vLocal_260 = { 1080,484f, -969,9034f, 28,88377f };
			break;
		
		case 68:
			vLocal_251 = { 952,5042f, -847,6615f, 43,01844f };
			vLocal_254 = { 1021,093f, -844,5063f, 29,71967f };
			fLocal_263 = 20f;
			vLocal_257 = { 945,5494f, -835,9777f, 43,15658f };
			vLocal_260 = { 1016,364f, -835,3861f, 29,7297f };
			break;
		
		case 69:
			vLocal_251 = { 1212,477f, -1183,013f, 46,4739f };
			vLocal_254 = { 1267,189f, -1161,997f, 32,48297f };
			fLocal_263 = 40f;
			vLocal_257 = { 1206,01f, -1157,063f, 47,93699f };
			vLocal_260 = { 1258,374f, -1140,68f, 32,42903f };
			break;
	}
}

int func_28(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_29()
{
	vLocal_39[0] = { 1083f, -231f, 60f };
	vLocal_39[1] = { 1024f, -325f, 60f };
	vLocal_39[2] = { 910f, -401f, 43f };
	vLocal_39[3] = { 721f, -457f, 26f };
	vLocal_39[4] = { 643f, -579f, 26f };
	vLocal_39[5] = { 590f, -851f, 26f };
	vLocal_39[6] = { 590f, -1023f, 16f };
	vLocal_39[7] = { 582f, -1205f, 24f };
	vLocal_39[8] = { 608f, -1335f, 16f };
	vLocal_39[9] = { 640f, -1434f, 16f };
	vLocal_39[10] = { 671f, -1742f, 20f };
	vLocal_39[11] = { 651f, -2046f, 16f };
	vLocal_39[12] = { 603f, -2505f, 9f };
	vLocal_39[13] = { 673f, -2582f, 4f };
	vLocal_39[14] = { 728f, -2594f, 10f };
	vLocal_39[15] = { 794f, -2624f, 27f };
	vLocal_39[16] = { -2663f, 2594f, 7,5f };
	vLocal_39[17] = { -1902f, 4617f, 30f };
	vLocal_39[18] = { -513f, 4427f, 40f };
	vLocal_39[19] = { 126f, 3366f, 40f };
	vLocal_39[20] = { 143f, 3418f, 36f };
	vLocal_39[21] = { 2822f, 4978f, 40f };
	vLocal_39[22] = { -162f, 4249f, 40f };
	vLocal_39[23] = { -408f, 2964f, 20f };
	vLocal_39[24] = { -181f, 2862f, 38f };
	vLocal_39[25] = { 2558f, 2201f, 24f };
	vLocal_39[26] = { 2950f, 803f, 8f };
	vLocal_39[27] = { 2369f, -409f, 80f };
	vLocal_39[28] = { 1906f, -755f, 84f };
	vLocal_39[29] = { -403f, -2333f, 40f };
	vLocal_39[30] = { -1429f, 2649f, 10f };
	vLocal_39[31] = { 219f, -2315f, 5f };
	vLocal_39[32] = { 350f, -2315f, 5f };
	vLocal_39[33] = { -1848f, -333f, 75f };
	vLocal_39[34] = { -693f, -608f, 69f };
	vLocal_39[35] = { -1461f, -582f, 53f };
	vLocal_39[36] = { -1553f, -546f, 59f };
	vLocal_39[37] = { 338f, -2758f, 23f };
	vLocal_39[38] = { 1985f, 6201f, 53f };
	vLocal_39[39] = { -713f, -1538f, 13f };
	vLocal_39[40] = { -659f, -1518f, 13f };
	vLocal_39[41] = { -620f, -1502f, 16f };
	vLocal_39[42] = { -445f, -1575f, 26f };
	vLocal_39[43] = { -373f, -1680f, 19f };
	vLocal_39[44] = { -212f, -1805f, 29f };
	vLocal_39[45] = { 47f, -2040f, 18f };
	vLocal_39[46] = { -3080f, 766f, 25f };
	vLocal_39[47] = { -1478f, 2400f, 20f };
	vLocal_39[48] = { 2308f, 1124f, 78f };
	vLocal_39[49] = { 2349f, 1174f, 79f };
	vLocal_39[50] = { -1186f, -365f, 46f };
	vLocal_39[51] = { -916f, -407f, 93f };
	vLocal_39[52] = { -726f, 235f, 105f };
	vLocal_39[53] = { -774f, 286f, 112f };
	vLocal_39[54] = { 271f, 134f, 125f };
	vLocal_39[55] = { 377f, -28f, 125f };
	vLocal_39[56] = { 121f, -703f, 150f };
	vLocal_39[57] = { -204f, -784f, 74f };
	vLocal_39[58] = { -287f, -774f, 72f };
	vLocal_39[59] = { -272f, -824f, 71f };
	vLocal_39[60] = { -230f, -723f, 80f };
	vLocal_39[61] = { 1822f, 2044f, 62f };
	vLocal_39[62] = { 2410f, 2907f, 44f };
	vLocal_39[63] = { 2686f, 4858f, 36f };
	vLocal_39[64] = { -1046f, 4751f, 244f };
	vLocal_39[65] = { -213f, -2463f, 38f };
	vLocal_39[66] = { -597f, -2192f, 38f };
	vLocal_39[67] = { 1036f, -980f, 41f };
	vLocal_39[68] = { 980f, -837f, 42f };
	vLocal_39[69] = { 1208f, -1173f, 38f };
}

int func_30()
{
	iVar2 = func_51();
	iVar1 = func_49();
	if ((iVar2 + iVar1) > 0)
	{
		func_48(32, (iVar2 + iVar1));
	}
	if (bLocal_38)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_44(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			unk_0xE7B2B6A56C007908(1488317176, 100, 0);
		}
		else if (iVar2 >= 38)
		{
			unk_0xE7B2B6A56C007908(1488317176, 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_44(290, 0, 0);
			unk_0xE7B2B6A56C007908(1488317176, 50, 0);
		}
		else if (iVar2 >= 13)
		{
			unk_0xE7B2B6A56C007908(1488317176, 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_31(32, 1);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)
{
	if (func_53(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_42(&Global_4270065))
	{
		if (func_40(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4270064 - 0,5f));
}

void func_37(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_39(var uParam0)
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_47((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = iParam1;
		Global_111638.f_10189[iParam0].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(-2122623864, Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(-1055525200, Global_111374, 1);
	unk_0xCDC520E5E48E63D9(-419750212, Global_111357, 1);
	unk_0xCDC520E5E48E63D9(1331385274, Global_111375, 1);
	unk_0xCDC520E5E48E63D9(542355616, Global_111358, 1);
	unk_0xCDC520E5E48E63D9(1561233577, Global_111376, 1);
	unk_0xCDC520E5E48E63D9(558499468, Global_111359, 1);
	unk_0xCDC520E5E48E63D9(-852659719, Global_111377, 1);
	unk_0xCDC520E5E48E63D9(-20401960, Global_111360, 1);
	unk_0xCDC520E5E48E63D9(-2122623864, iVar9, 1);
	unk_0xCDC520E5E48E63D9(-215705366, Global_111364, 1);
	unk_0xCDC520E5E48E63D9(-131898641, (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(1215094015, Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(1813094653, Global_111381, 1);
	unk_0xCDC520E5E48E63D9(-1205712980, Global_111382, 1);
	unk_0xCDC520E5E48E63D9(480408826, Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_48(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_46() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_2();
				}
			}
		}
	}
}

int func_46()
{
	return Global_30768;
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_49()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_96, iVar1))
		{
			if (func_50(iVar1))
			{
				iVar0++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_97, iVar1))
		{
			if (func_50(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_98, iVar1))
		{
			if (func_50(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_51()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_96, iVar1))
		{
			if (!func_50(iVar1))
			{
				iVar0++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_97, iVar1))
		{
			if (!func_50(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_98, iVar1))
		{
			if (!func_50(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

bool func_53(int iParam0)
{
	return Global_41431 == iParam0;
}

