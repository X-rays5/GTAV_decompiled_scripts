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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_60();
	}
	unk_0xD7992BEF7A9D109E("REPORT", 0);
	while (!unk_0x67C1D9E5B91B2E37(0))
	{
		wait(0);
	}
	while (true)
	{
		switch (iLocal_52)
		{
			case 0:
				break;
			
			case 1:
				func_51(1, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				unk_0xBFE31971E49FA500(false);
				unk_0x8BCB70EB440DED83(false);
				iLocal_53 = unk_0xB01F55A0FD1CFD49("PSYCHOLOGY_REPORT");
				while (!unk_0x83D8570832F172A7(iLocal_53))
				{
					func_43();
					wait(0);
				}
				unk_0xD7992BEF7A9D109E("REPORT", 3);
				while (!unk_0x67C1D9E5B91B2E37(3))
				{
					func_43();
					wait(0);
				}
				unk_0x7E60C62A7CE58FC8(iLocal_53, "SET_PLAYER_NAME");
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0x6B012227B3921E18("PATIENT");
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("GAMERTAG");
				if (unk_0x61D9362D70D2DD56())
				{
					unk_0xD06AC7C87A34A6AD(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
				}
				else
				{
					unk_0x6B012227B3921E18("ACCNA_MIKE");
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iLocal_53, "SET_LETTER_TEXT");
				func_42("HEADER_1");
				func_42("HEADER_2");
				Var0 = { func_41(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_40(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_39(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_38(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_37(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_35(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_33(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_32(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_31(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_30(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_28(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_24(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_23(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_21(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_20(&uLocal_54) };
				func_42(&Var0);
				unk_0x7E60D21B163E9D56();
				while (!func_13(&uLocal_70, &uLocal_71, &uLocal_54))
				{
					func_43();
					wait(0);
				}
				func_12(&iLocal_72);
				func_11(&iLocal_72, 0, 0, 0, 1);
				func_10(&iLocal_72, "CONTINUE", 2, 201, 1, 1, 0);
				func_9(&iLocal_72, 1);
				func_8(&iLocal_72, 1);
				if (unk_0x757EF87A33649210())
				{
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						func_43();
						unk_0x82E51BCA72537B6C(800);
					}
					while (!unk_0x0F1CCD77290EE12F())
					{
						func_43();
						unk_0xD9ACBBA59FD5A09E(1);
						unk_0x6567AE843FADBA94(iLocal_53, 255, 255, 255, 255, 0);
						wait(0);
					}
				}
				func_43();
				unk_0xD9ACBBA59FD5A09E(1);
				unk_0x6567AE843FADBA94(iLocal_53, 255, 255, 255, 255, 0);
				iLocal_52 = 2;
				break;
			
			case 2:
				unk_0xD9ACBBA59FD5A09E(1);
				unk_0x6567AE843FADBA94(iLocal_53, 255, 255, 255, 255, 0);
				func_1(&iLocal_72, 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x06F8112AA79C53D9(2, 201))
				{
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				func_12(&iLocal_72);
				unk_0x53491B90E4FD0E56(3000);
				while (unk_0xD0BB2359EC70FC37())
				{
					unk_0x6567AE843FADBA94(iLocal_53, 255, 255, 255, 255, 0);
					func_43();
					wait(0);
				}
				unk_0xE17FDF9E3068281B(&iLocal_53);
				func_51(0, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0xBFE31971E49FA500(true);
				unk_0x8BCB70EB440DED83(true);
				func_60();
				break;
		}
		if (iLocal_52 != 0)
		{
			func_43();
		}
		wait(0);
	}
}

void func_1(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_7(iParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_6(iParam0->f_1, 256) || (func_6(iParam0->f_1, 8192) && unk_0xB8E3620B82AD47D7(2)))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*iParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_6(iParam0->f_1, 4096));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < iParam0->f_123)
		{
			switch (iParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x91E3F625EF57450D(2);
					break;
				
				case 2:
					bVar4 = !unk_0x91E3F625EF57450D(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < iParam0->f_2[iVar6].f_14)
					{
						iVar0 = iParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = iParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(iParam0->f_2[iVar6].f_13, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_5(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(iParam0->f_2[iVar6]))
					{
						func_42(iParam0->f_2[iVar6]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_6(iParam0->f_1, 4096))
						{
							if (iParam0->f_2[iVar6].f_1)
							{
								unk_0x1200CC973A2399C8(true);
								unk_0x3CAEA85DA607305E(iParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(false);
								unk_0x3CAEA85DA607305E(-1);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_4(bParam4, func_4(func_6(iParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_3(&(iParam0->f_1), 256);
		func_2(&(iParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 0, 0);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_7(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_3(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_8(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(&(iParam0->f_1), 16);
	}
	else
	{
		func_2(&(iParam0->f_1), 16);
	}
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(&(iParam0->f_1), 1024);
	}
	else
	{
		func_2(&(iParam0->f_1), 1024);
	}
}

int func_10(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = iParam0->f_123;
	if (iVar1 < 8)
	{
		iParam0->f_2[iVar1] = sParam1;
		iParam0->f_2[iVar1].f_1 = iVar0;
		iParam0->f_2[iVar1].f_2 = iParam6;
		iParam0->f_2[iVar1].f_12 = 0;
		iParam0->f_2[iVar1].f_13 = 0;
		iParam0->f_2[iVar1].f_14 = 0;
		iParam0->f_2[iVar1].f_3[0] = iParam2;
		iParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(iParam0->f_2[iVar1].f_13), 0);
		}
		iParam0->f_2[iVar1].f_14++;
		iParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*iParam0 == 0)
	{
		*iParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
	if (bParam1)
	{
		func_3(&(iParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		func_3(&(iParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*iParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_3(&(iParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_3(&(iParam0->f_1), 8192);
	}
}

void func_12(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_17())
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_16())
			{
				return 0;
			}
			func_15();
			*uParam0++;
			break;
		
		case 1:
			unk_0xC43ACE7DB937E274();
			iVar0 = unk_0xB45EDD00181AF3F2();
			unk_0x23AFD3CA3C9BE63F(iVar0, "in", *uParam2);
			unk_0xA5E4E40E663470ED(iVar0, "st", &(uParam2->f_1));
			unk_0xA5E4E40E663470ED(iVar0, "mp", &(uParam2->f_2));
			unk_0xA5E4E40E663470ED(iVar0, "ms", &(uParam2->f_3));
			unk_0xA5E4E40E663470ED(iVar0, "sc", &(uParam2->f_5));
			unk_0xA5E4E40E663470ED(iVar0, "pr", &(uParam2->f_6));
			unk_0xA5E4E40E663470ED(iVar0, "fa", &(uParam2->f_7));
			unk_0xA5E4E40E663470ED(iVar0, "sm", &(uParam2->f_8));
			unk_0xA5E4E40E663470ED(iVar0, "kp", &(uParam2->f_9));
			unk_0xA5E4E40E663470ED(iVar0, "sv", &(uParam2->f_10));
			unk_0xA5E4E40E663470ED(iVar0, "yo", &(uParam2->f_11));
			unk_0xA5E4E40E663470ED(iVar0, "fi", &(uParam2->f_12));
			unk_0xA5E4E40E663470ED(iVar0, "rc", &(uParam2->f_13));
			unk_0xA5E4E40E663470ED(iVar0, "co", &(uParam2->f_14));
			unk_0x23AFD3CA3C9BE63F(iVar0, "su", uParam2->f_15);
			unk_0xF19935DB5591EA13("gta5/psych/index.json");
			*uParam0++;
			break;
		
		case 2:
			if (func_14(uParam1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	if (!unk_0x150F98BB5AE5F9A7(uParam0))
	{
		if (*uParam0)
		{
			if (unk_0xB45EDD00181AF3F2() != 0 && iParam1)
			{
				unk_0xEADC638FF742BE01();
			}
			return 1;
		}
		else
		{
			if (unk_0xB45EDD00181AF3F2() != 0 && iParam1)
			{
				unk_0xEADC638FF742BE01();
			}
			return 1;
		}
	}
	return 0;
}

void func_15()
{
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
}

int func_16()
{
	if (unk_0xEB22E23C5DDDD376())
	{
		return 1;
	}
	else if (unk_0xAE6F4A4A47122354())
	{
		return 1;
	}
	else if (unk_0xC49C081F809590D9())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (!func_18())
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_19()
{
	return Global_2461181;
}

struct<4> func_20(var uParam0)
{
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar4 = unk_0x09AC81E49EA267F7(1, 24);
	uParam0->f_15 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_21(var uParam0)
{
	StringCopy(&Var0, "COLLECT_", 16);
	if (((func_22(110) || func_22(95)) || func_22(106)) || func_22(107))
	{
		StringCopy(&(uParam0->f_14), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 11);
	}
	else
	{
		StringCopy(&(uParam0->f_14), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 12);
	}
	StringIntConCat(&(uParam0->f_14), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_22(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

struct<4> func_23(var uParam0)
{
	StringCopy(&Var0, "RAND_", 16);
	unk_0x6FB46C25CCB7E6D5(-852659719, &iVar5, -1);
	unk_0x6FB46C25CCB7E6D5(-2122623864, &iVar6, -1);
	iVar7 = (iVar5 + iVar6);
	if (iVar7 > 10)
	{
		StringCopy(&(uParam0->f_13), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_13), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_13), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_24(var uParam0)
{
	StringCopy(&Var0, "FIT_", 16);
	if ((((((((func_25(1, 1) > 50 && func_25(1, 2) > 50) && func_25(1, 3) > 50) && func_25(0, 1) > 50) && func_25(0, 2) > 50) && func_25(0, 3) > 50) && func_25(2, 1) > 50) && func_25(2, 2) > 50) && func_25(2, 3) > 50)
	{
		StringCopy(&(uParam0->f_12), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_12), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 11);
	StringIntConCat(&(uParam0->f_12), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_25(int iParam0, int iParam1)
{
	iVar1 = func_26(iParam0, iParam1);
	unk_0x6FB46C25CCB7E6D5(iVar1, &uVar0, -1);
	return uVar0;
}

var func_26(int iParam0, int iParam1)
{
	func_27(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_27(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
				
				case 1:
					*uParam2 = 583576226;
					break;
				
				case 3:
					*uParam2 = 1939246781;
					break;
				
				case 2:
					*uParam2 = -1872025703;
					break;
				
				case 4:
					*uParam2 = 297038448;
					break;
				
				case 5:
					*uParam2 = 2024531174;
					break;
				
				case 6:
					*uParam2 = -1266079991;
					break;
				
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
				
				case 1:
					*uParam2 = 626982837;
					break;
				
				case 3:
					*uParam2 = 1815853850;
					break;
				
				case 2:
					*uParam2 = -1205308189;
					break;
				
				case 4:
					*uParam2 = 2111310536;
					break;
				
				case 5:
					*uParam2 = -376705475;
					break;
				
				case 6:
					*uParam2 = -886696809;
					break;
				
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
				
				case 1:
					*uParam2 = 2105689774;
					break;
				
				case 3:
					*uParam2 = 2123663283;
					break;
				
				case 2:
					*uParam2 = 1327096153;
					break;
				
				case 4:
					*uParam2 = 1810848047;
					break;
				
				case 5:
					*uParam2 = 2010093328;
					break;
				
				case 6:
					*uParam2 = 708474090;
					break;
				
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

struct<4> func_28(var uParam0)
{
	StringCopy(&Var0, "YOGA_", 16);
	if (func_29(300, 1))
	{
		StringCopy(&(uParam0->f_11), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_11), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_11), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_29(int iParam0, int iParam1)
{
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

struct<4> func_30(var uParam0)
{
	StringCopy(&Var0, "VEHS_", 16);
	unk_0x6FB46C25CCB7E6D5(-22726202, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1534914527, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-978604952, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1704487518, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1367630807, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1040236793, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1146577566, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1861096290, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(713055388, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1144254321, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-632940664, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-357438054, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(797423994, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(648751400, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1657674211, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(732455696, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-313904433, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1437327142, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(686746390, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-580419561, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-276525534, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_10), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_10), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_10), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_31(var uParam0)
{
	StringCopy(&Var0, "PEDS_", 16);
	unk_0x6FB46C25CCB7E6D5(1824531000, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1861069275, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1575296825, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_9), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_9), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_9), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_32(var uParam0)
{
	StringCopy(&Var0, "STOCK_", 16);
	unk_0x6FB46C25CCB7E6D5(-1657837343, &iVar5, 0);
	if (iVar5 >= 120000)
	{
		StringCopy(&(uParam0->f_8), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_8), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_8), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_33(var uParam0)
{
	StringCopy(&Var0, "FAMILY_", 16);
	if (func_34(8) && func_34(5))
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_7), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_7), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_34(int iParam0)
{
	if (iParam0 < 9)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_18098.f_175[iParam0].f_18, 0);
	}
	return 0;
}

struct<4> func_35(var uParam0)
{
	StringCopy(&Var0, "PROS_", 16);
	if ((func_36(1) > 0 || func_36(0) > 0) || func_36(2) > 0)
	{
		StringCopy(&(uParam0->f_6), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_6), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	StringIntConCat(&(uParam0->f_6), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_10044.f_90[0];
			break;
		
		case 1:
			return Global_111638.f_10044.f_90[1];
			break;
		
		case 2:
			return Global_111638.f_10044.f_90[2];
			break;
	}
	return 0;
}

struct<4> func_37(var uParam0)
{
	StringCopy(&Var0, "STRIP_", 16);
	unk_0x6FB46C25CCB7E6D5(-397746042, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-1677642203, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1610202677, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(27639974, &iVar7, 0);
	iVar8 = (iVar8 + iVar7);
	unk_0x6FB46C25CCB7E6D5(422258364, &iVar7, 1);
	iVar8 = (iVar8 + iVar7);
	unk_0x6FB46C25CCB7E6D5(316202960, &iVar7, 2);
	iVar8 = (iVar8 + iVar7);
	if (iVar6 >= 3 || iVar8 >= 100)
	{
		StringCopy(&(uParam0->f_5), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_5), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 12);
	}
	StringIntConCat(&(uParam0->f_5), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_38(var uParam0)
{
	StringCopy(&Var0, "CASH_", 16);
	unk_0x6FB46C25CCB7E6D5(-656546900, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(-2098183071, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	unk_0x6FB46C25CCB7E6D5(1578119842, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 1000000)
	{
		StringCopy(&(uParam0->f_3), "SP", 8);
		StringConCat(&Var0, "SP", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 14);
	}
	else
	{
		StringCopy(&(uParam0->f_3), "SA", 8);
		StringConCat(&Var0, "SA", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	}
	StringIntConCat(&(uParam0->f_3), iVar4, 8);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_39(var uParam0)
{
	StringCopy(&Var0, "CHAR_", 16);
	iVar5 = 0;
	iVar7 = 0;
	unk_0x6FB46C25CCB7E6D5(-1263997649, &iVar7, 0);
	unk_0x6FB46C25CCB7E6D5(1157035214, &iVar6, 1);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 1;
	}
	unk_0x6FB46C25CCB7E6D5(-1923670641, &iVar6, 2);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 2;
	}
	if (iVar5 == 0)
	{
		StringCopy(&(uParam0->f_2), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	}
	else if (iVar5 == 1)
	{
		StringCopy(&(uParam0->f_2), "F", 4);
		StringConCat(&Var0, "F", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_2), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 12);
	}
	StringIntConCat(&(uParam0->f_2), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_40(var uParam0)
{
	StringCopy(&Var0, "STORY_", 16);
	if (func_22(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 11);
	}
	else if (func_22(136))
	{
		StringCopy(&(uParam0->f_1), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 10);
	}
	else
	{
		StringCopy(&(uParam0->f_1), "B", 4);
		StringConCat(&Var0, "B", 16);
		iVar4 = unk_0x09AC81E49EA267F7(1, 11);
	}
	StringIntConCat(&(uParam0->f_1), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_41(var uParam0)
{
	StringCopy(&Var0, "INTRO_", 16);
	iVar4 = unk_0x09AC81E49EA267F7(1, 21);
	*uParam0 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

void func_42(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_43()
{
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	func_44(0);
}

void func_44(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_49(0))
		{
			func_45(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_45(int iParam0)
{
	if (func_50())
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
		if (func_49(0))
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

int func_49(int iParam0)
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

bool func_50()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_51(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_59(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_46())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_59(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !func_53(unk_0xD803B885F5E47A62(), 0)) && !func_52()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_54(-1, 0) == 8;
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

int func_54(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_55()
{
	return Global_1312745;
}

int func_56(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
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

bool func_57()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_58(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_60()
{
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(0);
	}
	unk_0x10FAF14A60A0DBE1();
}

