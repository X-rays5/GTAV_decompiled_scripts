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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_64 = ((0,05f + 0,275f) - 0,01f);
	iLocal_1078 = unk_0x09AC81E49EA267F7(8000, 16000);
	fLocal_1162 = 0,001f;
	fLocal_1289 = 4f;
	fLocal_1290 = -98f;
	vLocal_1291 = { 0f, 0f, 0f };
	iLocal_103 = uScriptParam_0;
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 1))
	{
		if (iLocal_103 == 28)
		{
			unk_0x5D96D8530B3D0904(&Global_1389296, 1);
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iLocal_103]), 16);
	func_1201();
	func_1200(iLocal_103);
	while (!func_1199())
	{
		wait(0);
	}
	func_1198();
	func_1193(&Global_4268016);
	if (func_1192(1))
	{
		iLocal_109 = 1;
	}
	while (true)
	{
		wait(0);
		unk_0xA2E3EDD0E119882F(2);
		unk_0xA2E3EDD0E119882F(0);
		if (iLocal_1335)
		{
			func_1190(1, 0);
			iLocal_1335 = 0;
		}
		if (func_1189(iLocal_103))
		{
			if (!iLocal_1161)
			{
				if (unk_0xC844350D5D58C99A(Local_154.f_12) && !unk_0xEB6A8945D1AC98A1(Local_154.f_12))
				{
					if (func_1188(0))
					{
						unk_0x98868AF51859FC75(Local_154.f_12, 0);
					}
					iLocal_1161 = 1;
				}
			}
		}
		else if (iLocal_1161)
		{
			if (unk_0xC844350D5D58C99A(Local_154.f_12) && !unk_0xEB6A8945D1AC98A1(Local_154.f_12))
			{
				if (func_1188(0))
				{
					unk_0x98868AF51859FC75(Local_154.f_12, 1);
				}
				iLocal_1161 = 0;
			}
		}
		func_1187(&(Local_154.f_12));
		if (func_1184(iLocal_103) && !func_1173(&Local_154, iLocal_103))
		{
			if (func_1172(&Local_154))
			{
				func_1171(iLocal_103);
				func_1163(&Local_154, &(Local_66.f_3), 0, 0);
				func_1156(&Local_154, &(Local_154.f_118));
				if (Local_154.f_9)
				{
					if (!func_1155(Local_154))
					{
						func_1144(&Local_154, &(Local_154.f_118), 0);
					}
					else
					{
						func_1143();
					}
				}
				func_1117();
				func_1111();
				func_1101();
				if (Local_154 == 46)
				{
					if (Global_1590374 != func_1100())
					{
						if (unk_0xD803B885F5E47A62() == Global_1590374)
						{
							func_1098();
						}
					}
				}
				else if (Local_154 == 47)
				{
					if (Global_1590379 != func_1100())
					{
						if (unk_0xD803B885F5E47A62() == Global_1590379)
						{
							func_1098();
						}
					}
				}
				else if ((Local_154 == 48 || Local_154 == 49) || Local_154 == 52)
				{
					if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8 != func_1100())
					{
						if (unk_0xD803B885F5E47A62() == Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8)
						{
							func_1098();
						}
					}
				}
				else
				{
					func_1098();
				}
				func_1097();
				func_1095();
				if (Local_154.f_7 && unk_0x8CD06866876216F2())
				{
					unk_0x38C3A68D7861DCFD(0, 44, 1);
				}
				if (Local_154.f_11 == 4)
				{
					Global_2462113 = 1;
				}
				else
				{
					Global_2462113 = 0;
				}
				switch (Local_154.f_11)
				{
					case 0:
						func_1085();
						break;
					
					case 1:
						func_1081(0);
						if (func_1080(Local_154))
						{
							func_1068(Local_154, 0, 0);
							func_1068(Local_154, 0, 1);
						}
						func_1067();
						if (Local_154.f_11 == 2)
						{
							if (unk_0x8CD06866876216F2())
							{
								iLocal_1097[0] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), unk_0x09AC81E49EA267F7(4000, 5000));
								iLocal_1097[1] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0);
							}
							else
							{
								iLocal_1100[0] = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 5000));
								iLocal_1100[1] = unk_0x1C0640BA9A7327B3();
							}
							vLocal_1105 = { 0f, 0f, 0f };
							func_1058();
						}
						break;
					
					case 2:
						func_1058();
						func_1054(&Local_154, &(Local_154.f_118));
						break;
					
					case 3:
						if (func_1080(Local_154))
						{
							func_1068(Local_154, 0, 0);
							func_1068(Local_154, 0, 1);
						}
						func_1052();
						if (Local_154 == 46)
						{
							if (Global_1590374 != func_1100())
							{
								if (unk_0xD803B885F5E47A62() == Global_1590374)
								{
									func_1030();
								}
							}
						}
						else if (Local_154 == 47)
						{
							if (Global_1590379 != func_1100())
							{
								if (unk_0xD803B885F5E47A62() == Global_1590379)
								{
									func_1030();
								}
							}
						}
						else if ((Local_154 == 48 || Local_154 == 49) || Local_154 == 52)
						{
							if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8 != func_1100())
							{
								if (unk_0xD803B885F5E47A62() == Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8)
								{
									func_1030();
								}
							}
						}
						else
						{
							func_1030();
						}
						func_1027();
						if ((((Local_154 != 46 && Local_154 != 47) && Local_154 != 48) && Local_154 != 49) && Local_154 != 52)
						{
							func_1026();
						}
						break;
					
					case 4:
						func_366();
						func_1054(&Local_154, &(Local_154.f_118));
						break;
					
					case 5:
						Local_154.f_11 = 1;
						break;
					}
			}
		}
		else
		{
			func_237(0);
		}
		if (Local_154 == 46)
		{
			if (Global_2513487)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 14))
				{
					iLocal_1335 = 1;
					unk_0x5D96D8530B3D0904(&(Local_154.f_721), 14);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 14))
			{
				func_36(0, 0);
				unk_0x0674E58A79778E99(&(Local_154.f_721), 14);
			}
		}
		else if (((Local_154 == 47 || Local_154 == 48) || Local_154 == 49) || Local_154 == 52)
		{
			if (Global_2513487)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 14))
				{
					iLocal_1335 = 1;
					unk_0x5D96D8530B3D0904(&(Local_154.f_721), 14);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 14))
			{
				func_36(0, 1);
				unk_0x0674E58A79778E99(&(Local_154.f_721), 14);
			}
			if (Local_154.f_11 >= 4)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 16))
				{
					if (func_36(0, 0))
					{
						unk_0x5D96D8530B3D0904(&(Local_154.f_721), 16);
					}
				}
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 16))
				{
					func_1190(1, 1);
					unk_0x0674E58A79778E99(&(Local_154.f_721), 16);
				}
				Global_2462114 = 0;
			}
		}
		if (func_29(&Local_154))
		{
			func_23();
		}
		func_1();
	}
}

void func_1()
{
	if (Local_154.f_9 && unk_0x8CD06866876216F2())
	{
		uLocal_70[unk_0xD803B885F5E47A62()] = Global_98796.f_1357[Local_154];
		if (Local_154.f_892)
		{
			if (unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), Local_154.f_893))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 26))
				{
					unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 26);
				}
				if ((!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[Local_154], 0) && !unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[Local_154], 5)) && (!unk_0xC844350D5D58C99A(Local_154.f_12) || unk_0xEB6A8945D1AC98A1(Local_154.f_12)))
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (func_22(unk_0x117658E336116132(iVar0), 1, 1))
						{
							if (unk_0xEAE0D21A50E6C7F4(uLocal_70[iVar0], 5))
							{
								unk_0x0674E58A79778E99(&(Global_98796.f_1424), 26);
								unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 28);
								iVar0 = 33;
							}
						}
						iVar0++;
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_98796.f_1424), 26);
					unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 28);
				}
				if (Global_1573928)
				{
					vVar1 = { func_11(Local_154, 0) };
					iVar4 = unk_0x4B72871A3BE7B474(vVar1, 25f, 1138881502, 0, 0, 1);
					if (unk_0xC844350D5D58C99A(iVar4))
					{
						iVar5 = unk_0x0D1736C2E221BCEA(vVar1, func_7(Local_154));
						iVar6 = unk_0x4D570FEF9D230CE7(iVar4);
						if (iVar5 != 0 && iVar5 == iVar6)
						{
							unk_0x0674E58A79778E99(&(Global_98796.f_1424), 26);
							unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 28);
						}
					}
				}
				if (Global_2537071.f_5046)
				{
					unk_0x0674E58A79778E99(&(Global_98796.f_1424), 26);
					unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 28);
				}
				Local_154.f_892 = 0;
			}
		}
		else
		{
			Local_154.f_893 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 2000);
			Local_154.f_892 = 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 26))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 27))
			{
				if (func_5(Local_154))
				{
					func_2(Local_154, 1, 0, 1);
					unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 27);
					if (unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 28))
					{
						unk_0x0674E58A79778E99(&(Global_98796.f_1424), 28);
					}
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 28))
		{
			if (func_5(Local_154))
			{
				func_2(Local_154, 0, 0, 1);
				unk_0x5D96D8530B3D0904(&(Global_98796.f_1424), 28);
				if (unk_0xEAE0D21A50E6C7F4(Global_98796.f_1424, 27))
				{
					unk_0x0674E58A79778E99(&(Global_98796.f_1424), 27);
				}
			}
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
			iVar1 = 3;
		}
		else
		{
			iVar0 = 3;
			iVar1 = 4;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = func_4(iParam0, iVar2);
		if (iVar3 != 226)
		{
			Var4 = { func_3(iVar3) };
			if (!unk_0x76395FF5E8D5E643(Var4.f_5))
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					unk_0x8010B3127F058F0F(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
				}
			}
			if (unk_0x76395FF5E8D5E643(Var4.f_5))
			{
				if (unk_0xDDA8D358FC60CD9D(Var4.f_5))
				{
					if (unk_0x51D3DB30DC0C68AD(Var4.f_5) == iVar1)
					{
						unk_0x1BA7FCEAFCE8D46E(Var4.f_5, iVar0, iParam3, 1);
					}
				}
				else
				{
					unk_0x7377E323720794CA(Var4.f_5);
				}
			}
		}
		iVar2++;
	}
}

struct<7> func_3(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = -1844444717;
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = -1844444717;
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = -1844444717;
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = -1844444717;
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = -1844444717;
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = -1844444717;
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = -1663512092;
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = 145369505;
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = 868499217;
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = -1148826190;
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = 868499217;
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = -1148826190;
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = 868499217;
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = -1148826190;
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = 868499217;
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = -1148826190;
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = 868499217;
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = -1148826190;
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = 868499217;
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = -1148826190;
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = 868499217;
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = -1148826190;
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = 1780022985;
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = 1780022985;
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = 1780022985;
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = 1780022985;
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = -1922281023;
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = -1922281023;
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = -1922281023;
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = -1922281023;
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = -1922281023;
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = -1922281023;
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = 543652229;
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = 543652229;
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = 543652229;
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = 543652229;
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = 159994461;
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = -1686014385;
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = 30769481;
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = -1454760130;
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = 1245831483;
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = -1454760130;
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = 1245831483;
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = -1568354151;
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = 1019527301;
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = 520341586;
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = 1413743677;
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = 703855057;
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = 308207762;
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = 132154435;
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = 67910261;
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = -607040053;
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = -550347177;
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = 270330101;
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = -550347177;
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = -822900180;
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = -822900180;
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = -822900180;
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = -822900180;
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = 486670049;
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = 245182344;
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = -681066206;
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = 551491569;
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = 933053701;
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = 426403179;
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = 1173348778;
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = -1428622127;
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = -1428622127;
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = -1428622127;
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = -353187150;
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = -1666470363;
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = 1145337974;
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = -1647153464;
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = -1647153464;
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = -2069558801;
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = -190780785;
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = -664582244;
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = -1116041313;
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = 668467214;
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = -1306074314;
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = -1375589668;
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = -1375589668;
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = -1032171637;
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = -52575179;
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = 338220432;
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = 1075555701;
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = -1032171637;
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = -52575179;
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = -1032171637;
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = -52575179;
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = -1652821467;
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = 1013329911;
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = -502195954;
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = -2051651622;
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = 464151082;
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = -1081024910;
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = -1081024910;
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = 1099436502;
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = -1627599682;
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = 1099436502;
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = -1627599682;
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = 1173348778;
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = -2045308299;
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = -42303174;
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = 913904359;
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = -495720969;
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = 668467214;
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = 1342464176;
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = 1436076651;
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = 1413743677;
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = -815851463;
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = -684382235;
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = 1378348636;
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = -2076287065;
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = -374527357;
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = -1517873911;
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = -90456267;
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = -1207991715;
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = -1207991715;
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = -566611162;
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = -551602996;
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = 1104171198;
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = -1425071302;
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = -1679881977;
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = -1045015371;
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = -1033001619;
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = -1023447729;
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = 73386408;
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = -1152174184;
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = 993120320;
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = 993120320;
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = 1425919976;
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = 9467943;
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = 1956494919;
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = -1501157055;
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = -1501157055;
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = -1765048490;
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = -403433025;
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = 1308911070;
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = -403433025;
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = 1308911070;
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = -403433025;
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = 1308911070;
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = -582278602;
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = 1343686600;
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = -26664553;
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = 914592203;
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = 97297972;
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = -8873588;
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = 97297972;
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = -8873588;
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = 97297972;
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = -8873588;
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = 97297972;
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = -8873588;
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = 97297972;
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = -8873588;
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = 97297972;
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = -8873588;
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = 97297972;
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = -8873588;
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = 97297972;
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = -8873588;
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = 97297972;
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = -8873588;
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = 97297972;
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = -8873588;
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = 97297972;
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = -8873588;
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = 452874391;
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = 452874391;
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = 546378757;
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = -1249591818;
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = 546378757;
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = -1249591818;
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = 1878909644;
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = 1709395619;
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = -1184592117;
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = -1156020871;
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = 2059227086;
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = 1417577297;
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = 2059227086;
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = 1417577297;
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = -1428622127;
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = 73386408;
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = -1152174184;
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = 73386408;
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = -1152174184;
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = 1755793225;
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = 239858268;
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = 1742849246;
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = -44475594;
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = 1183182250;
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = -44475594;
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = 1183182250;
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = -44475594;
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = 1183182250;
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = -44475594;
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = 1183182250;
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = -982531572;
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = -1049302886;
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = 1653418708;
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = 650392296;
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = -267139712;
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = 650392296;
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = -267139712;
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = 1127922797;
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = 73386408;
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = -1152174184;
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = -1468417022;
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_4(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

int func_5(int iParam0)
{
	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = func_6(iParam0, iVar2);
		if (iVar1 != 0)
		{
			if (unk_0x76395FF5E8D5E643(iVar1))
			{
				if (!unk_0xDDA8D358FC60CD9D(iVar1))
				{
					unk_0x7377E323720794CA(iVar1);
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 183249434;
				}
				else if (iParam1 == 1)
				{
					return 758345384;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1804701345;
				}
			}
			break;
		
		case 2:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1403601067;
				}
			}
			break;
		
		case 3:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -2031139496;
				}
			}
			break;
		
		case 4:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1796834809;
				}
			}
			break;
		
		case 5:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 96153298;
				}
			}
			break;
		
		case 6:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -281080954;
				}
			}
			break;
		
		case 7:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1069262641;
				}
				else if (iParam1 == 1)
				{
					return 1968521986;
				}
			}
			break;
		
		case 8:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -2143706301;
				}
				else if (iParam1 == 1)
				{
					return -1403421822;
				}
			}
			break;
		
		case 9:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1950137670;
				}
				else if (iParam1 == 1)
				{
					return 1226259807;
				}
			}
			break;
		
		case 10:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1090833557;
				}
				else if (iParam1 == 1)
				{
					return 897332612;
				}
			}
			break;
		
		case 11:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1095946640;
				}
				else if (iParam1 == 1)
				{
					return 801975945;
				}
			}
			break;
		
		case 12:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -167996547;
				}
				else if (iParam1 == 1)
				{
					return -1935818563;
				}
			}
			break;
		
		case 13:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1891185217;
				}
				else if (iParam1 == 1)
				{
					return 1236591681;
				}
			}
			break;
		
		case 14:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1980808685;
				}
			}
			break;
		
		case 15:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1352749757;
				}
			}
			break;
		
		case 16:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -566554453;
				}
			}
			break;
		
		case 17:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1284749450;
				}
			}
			break;
		
		case 18:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 261851994;
				}
				else if (iParam1 == 1)
				{
					return 217646625;
				}
			}
			break;
		
		case 19:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1801139578;
				}
				else if (iParam1 == 1)
				{
					return -2123275866;
				}
			}
			break;
		
		case 20:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1312689981;
				}
				else if (iParam1 == 1)
				{
					return -595055661;
				}
			}
			break;
		
		case 22:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -265260897;
				}
			}
			break;
		
		case 23:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1284867488;
				}
			}
			break;
		
		case 24:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 302307081;
				}
			}
			break;
		
		case 25:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -681886015;
				}
			}
			break;
		
		case 26:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -2086556500;
				}
			}
			break;
		
		case 27:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1496386696;
				}
			}
			break;
		
		case 39:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1871080926;
				}
			}
			else if (iParam1 == 0)
			{
				return -1871080926;
			}
			break;
		
		case 40:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1168079979;
				}
			}
			else if (iParam1 == 0)
			{
				return 1168079979;
			}
			break;
		
		case 41:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1206354175;
				}
			}
			else if (iParam1 == 0)
			{
				return 1206354175;
			}
			break;
		
		case 42:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1200466273;
				}
				else if (iParam1 == 1)
				{
					return -1038180727;
				}
			}
			else if (iParam1 == 0)
			{
				return 1200466273;
			}
			else if (iParam1 == 1)
			{
				return -1038180727;
			}
			break;
		
		case 43:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -459199009;
				}
				else if (iParam1 == 1)
				{
					return 1391004277;
				}
			}
			else if (iParam1 == 0)
			{
				return -459199009;
			}
			else if (iParam1 == 1)
			{
				return 1391004277;
			}
			break;
		
		case 44:
			if (unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -288764223;
				}
			}
			else if (iParam1 == 0)
			{
				return -288764223;
			}
			break;
		
		case 28:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1071759151;
				}
				else if (iParam1 == 1)
				{
					return -2119023917;
				}
			}
			break;
		
		case 29:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1488490473;
				}
				else if (iParam1 == 1)
				{
					return -511187813;
				}
			}
			break;
		
		case 30:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -248569395;
				}
				else if (iParam1 == 1)
				{
					return 989443413;
				}
			}
			break;
		
		case 31:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 2022251829;
				}
				else if (iParam1 == 1)
				{
					return 649820567;
				}
			}
			break;
		
		case 32:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 537455378;
				}
				else if (iParam1 == 1)
				{
					return 1121431731;
				}
			}
			break;
		
		case 33:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1437380438;
				}
				else if (iParam1 == 1)
				{
					return -946336965;
				}
			}
			break;
		
		case 34:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 1893144650;
				}
				else if (iParam1 == 1)
				{
					return 435841678;
				}
			}
			break;
		
		case 35:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return 948508314;
				}
				else if (iParam1 == 1)
				{
					return -1796714665;
				}
			}
			break;
		
		case 36:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1155247245;
				}
				else if (iParam1 == 1)
				{
					return 782482084;
				}
			}
			break;
		
		case 37:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -1194470801;
				}
				else if (iParam1 == 1)
				{
					return -2129698061;
				}
			}
			break;
		
		case 38:
			if (!unk_0x8CD06866876216F2())
			{
				if (iParam1 == 0)
				{
					return -675817295;
				}
				else if (iParam1 == 1)
				{
					return 2121442868;
				}
			}
			break;
	}
	return 0;
}

char* func_7(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_8(Global_100839);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
	}
	return "";
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_9() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_9()
{
	return func_10(unk_0xD803B885F5E47A62());
}

int func_10(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

Vector3 func_11(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_21(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_1100())
			{
				if (func_20(Global_1590374))
				{
					return func_13(2, 2);
				}
				else if (func_12(Global_1590374))
				{
					return func_13(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_12(int iParam0)
{
	if (iParam0 != func_1100())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_13(int iParam0, int iParam1)
{
	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_1100())
	{
		if (iParam1 == 3)
		{
			if (func_14(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_14(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_14(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

int func_14(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_19(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_19(iParam1, &vVar6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_17(iParam0) };
	}
	else
	{
		Var12 = { func_16(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_15(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_15(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_15(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_17(int iParam0)
{
	return func_18(iParam0);
}

struct<6> func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_19(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 != func_1100())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_21(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_9() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	func_237(1);
	func_24(&Local_154);
}

void func_24(var uParam0)
{
	func_28(&(uParam0->f_118));
	func_27(uParam0);
	func_26(&(uParam0->f_722));
	func_25(&(uParam0->f_186));
	uParam0->f_721 = 0;
	iVar0 = 0;
	while (iVar0 < 110)
	{
		uParam0->f_238.f_116[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_238.f_111)
	{
		uParam0->f_238.f_111[iVar0] = 0;
		iVar0++;
	}
}

void func_25(var uParam0)
{
	uParam0->f_1 = { 0f, 0f, 0f };
	StringCopy(&(uParam0->f_7), "", 16);
	uParam0->f_31 = { 0f, 0f, 0f };
	uParam0->f_34 = 0f;
	uParam0->f_35 = { 0f, 0f, 0f };
	uParam0->f_38 = 0f;
	uParam0->f_39 = { 0f, 0f, 0f };
	uParam0->f_42 = { 0f, 0f, 0f };
	uParam0->f_45 = { 0f, 0f, 0f };
}

void func_26(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_27(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_110 = 0;
	uParam0->f_9 = 0;
	uParam0->f_11 = 0;
	uParam0->f_99 = 0;
	uParam0->f_12.f_3 = 0;
	uParam0->f_12.f_6 = { 0f, 0f, 0f };
	uParam0->f_12.f_15 = 0f;
	uParam0->f_12.f_18 = { 0f, 0f, 0f };
	uParam0->f_12.f_21 = 0f;
	uParam0->f_12.f_22 = { 0f, 0f, 0f };
	uParam0->f_12.f_25 = 0f;
	uParam0->f_12.f_29 = 0;
	uParam0->f_12.f_26 = 0;
	uParam0->f_42.f_2 = { 0f, 0f, 0f };
	uParam0->f_42.f_5 = 0f;
	uParam0->f_42.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_50[iVar0].f_11 = 0;
		uParam0->f_50[iVar0] = 0;
		iVar0++;
	}
}

void func_28(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	StringCopy(&(uParam0->f_11), "", 16);
	uParam0->f_30 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_31 = 0;
}

int func_29(var uParam0)
{
	if (uParam0->f_9)
	{
		if (func_30(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (func_30(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_98796.f_16)
		{
			return 1;
		}
		if (Global_76622)
		{
			if (Global_1312489.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 82,34222f, -1310,278f, 25,77012f, 142,8917f, -1274,154f, 46,51249f, 62f, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)
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
		if (func_35() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_31(func_34(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_32(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_33();
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

int func_33()
{
	return Global_1312745;
}

int func_34(int iParam0)
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

int func_35()
{
	return Global_30768;
}

int func_36(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 & 1 != 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (iParam0 & 1 != 0)
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (iParam0 & 8 != 0)
	{
		bVar2 = true;
	}
	bVar9 = true;
	bVar10 = true;
	bVar11 = false;
	iVar44 = 1;
	iVar45 = 1;
	bVar46 = true;
	if (iParam0 & 2 != 0 || iParam0 & 4 != 0)
	{
		bVar46 = false;
	}
	if (!bVar46)
	{
		iVar44 = 22;
		iVar45 = 5;
	}
	if (func_236(Local_154))
	{
		iVar44 = 8;
	}
	iVar6 = 0;
	while (iVar6 <= iVar44)
	{
		iVar7 = 0;
		while (iVar7 <= iVar45)
		{
			if (!bVar46)
			{
				iVar3 = iVar6;
				iVar4 = iVar7;
			}
			else
			{
				iVar3 = iLocal_1109;
				iVar4 = iLocal_1110;
			}
			iVar40 = (iVar3 * 5 + iVar4);
			bVar10 = true;
			bVar11 = false;
			if ((iParam0 & 4 != 0 && !bLocal_1111) && !func_236(Local_154))
			{
				if ((((((iVar3 == 0 || iVar3 == 1) || iVar3 == 2) || iVar3 == 10) || iVar3 == 14) || iVar3 == 15) || (iVar3 == 17 && iVar4 > 0))
				{
					bVar11 = true;
				}
			}
			if (func_201(Local_154, &Global_4268016, &Var14, iVar3, iVar4, 0, 0))
			{
				if (func_185(Var14, Var14.f_24, bVar1, Local_154) && !bVar11)
				{
					bVar8 = false;
					if (Var14.f_24 == 3)
					{
						if (iVar4 == 0)
						{
							iVar12 = 701173564;
						}
						else if (iVar4 == 1)
						{
							iVar12 = 1111175276;
						}
						else if (iVar4 == 2)
						{
							iVar12 = -1779214373;
						}
						else if (iVar4 == 3)
						{
							iVar12 = -1497794201;
						}
						else if (iVar4 == 4)
						{
							iVar12 = 2022153476;
						}
					}
					else if (Var14.f_24 == 4)
					{
						iVar12 = 1746997299;
					}
					else if (Var14.f_24 == 7)
					{
						iVar12 = func_184(&Global_4268016, Var14.f_23);
					}
					else if (Var14.f_24 == 6)
					{
						iVar12 = -1502580877;
					}
					else if (Var14 == -1716189206)
					{
						iVar12 = -518344816;
					}
					else if (Var14 == -102323637)
					{
						iVar12 = -789123952;
					}
					else if (Var14 == -1834847097)
					{
						iVar12 = 1725061196;
					}
					else if (Var14 == -102973651)
					{
						iVar12 = 173095431;
					}
					else
					{
						iVar12 = unk_0x6B7EC7B5B6B57364(Var14);
						bVar8 = true;
					}
					if (unk_0xC844350D5D58C99A(Local_154.f_238[iVar40]) && unk_0x134B62B726CEC8E6(Local_154.f_238[iVar40]) != iVar12)
					{
						iVar12 = unk_0x134B62B726CEC8E6(Local_154.f_238[iVar40]);
					}
					if (iVar12 != 0)
					{
						if (bVar8)
						{
							unk_0x6D0C93EE4FBA9307(Var14, 0, 0);
							if (!unk_0x1787731C4D1D6B19(Var14))
							{
								bVar9 = false;
								bVar10 = false;
								iLocal_1117 = iVar40;
							}
						}
						else
						{
							unk_0x523BCC9DC80CD82F(iVar12);
							if (!unk_0xB87F6CF6E5628C67(iVar12))
							{
								bVar9 = false;
								bVar10 = false;
								iLocal_1117 = iVar40;
							}
						}
						if (!bParam1)
						{
							if (bVar8)
							{
								iVar5 = 0;
								while (func_178(&Local_1299, Var14, iVar5, 0))
								{
									if ((Local_1299 != 0 && func_176(Local_1299)) && ((Local_1299.f_1 || (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), Var14, 0) && unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), Var14, Local_1299))) || Local_1299.f_4 == -571619404))
									{
										iVar13 = unk_0xE8213142E3A84F79(Local_1299);
										if (iVar13 != 0)
										{
											unk_0x523BCC9DC80CD82F(iVar13);
											func_175(Local_1299);
											if (!unk_0xB87F6CF6E5628C67(iVar13) || !func_174(Local_1299))
											{
												bVar9 = false;
												bVar10 = false;
												iLocal_1117 = iVar40;
											}
										}
									}
									iVar5++;
								}
								iVar5 = 0;
								while (func_178(&Local_1299, Var14, iVar5, 0))
								{
									if ((Local_1299 != 0 && func_176(Local_1299)) && ((Local_1299.f_1 || (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), Var14, 0) && unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), Var14, Local_1299))) || Local_1299.f_4 == -571619404))
									{
										if (Local_1299.f_4 == 962500902 && !func_173(Var14))
										{
											iVar41 = unk_0xA5DCE37B21DF5B03(Local_1299);
											iVar42 = 0;
											while (iVar42 <= (iVar41 - 1))
											{
												iVar43 = unk_0x22977A7BB2F7810C(Local_1299, iVar42);
												if (iVar43 != 0)
												{
													unk_0x523BCC9DC80CD82F(iVar43);
													if (!unk_0xB87F6CF6E5628C67(iVar43))
													{
														bVar9 = false;
														bVar10 = false;
														iLocal_1117 = iVar40;
													}
												}
												iVar42++;
											}
										}
									}
									iVar5++;
								}
							}
						}
						if (bVar0)
						{
							if (bVar10)
							{
								if (unk_0xC844350D5D58C99A(Local_154.f_238[iVar40]) && (unk_0x134B62B726CEC8E6(Local_154.f_238[iVar40]) != iVar12 || iLocal_1279))
								{
									Var14.f_13 = { unk_0x68F4C0EC296D3901(Local_154.f_238[iVar40], true) };
									Var14.f_16 = { unk_0x835730A2D89F6093(Local_154.f_238[iVar40], 2) };
									unk_0xF690C84DADBB3551(&(Local_154.f_238[iVar40]));
								}
								if (!unk_0xC844350D5D58C99A(Local_154.f_238[iVar40]))
								{
									if (func_185(Var14, Var14.f_24, bVar1, Local_154) && !bVar11)
									{
										if (((((((Var14.f_24 == 3 || Var14.f_24 == 4) || Var14.f_24 == 7) || Var14.f_24 == 6) || Var14 == -1716189206) || Var14 == -102323637) || Var14 == -1834847097) || Var14 == -102973651)
										{
											Local_154.f_238[iVar40] = func_172(iVar12, Var14.f_1);
										}
										else
										{
											Local_154.f_238[iVar40] = unk_0x5ACD4E66C7BF0F49(Var14, 1, Var14.f_1, 1, 1065353216, 0, 0, 1);
											unk_0x8E9786E049F1EAD7(Local_154.f_238[iVar40], 0);
										}
										if (unk_0xC844350D5D58C99A(Local_154.f_238[iVar40]))
										{
											if (bVar2)
											{
												unk_0x4A4806F9D471E491(Local_154.f_238[iVar40], true, 0);
												unk_0x08841CDB215AE18F(Local_154.f_238[iVar40], Var14.f_1, 0, 0, 1);
												unk_0xC023D1C4BF532815(Local_154.f_238[iVar40], Var14.f_4, 2, 1);
											}
											else
											{
												unk_0x4A4806F9D471E491(Local_154.f_238[iVar40], false, 0);
												unk_0x08841CDB215AE18F(Local_154.f_238[iVar40], Var14.f_1 + Vector(-100f, 0f, 0f), 0, 0, 1);
												unk_0xC023D1C4BF532815(Local_154.f_238[iVar40], Var14.f_4, 2, 1);
											}
											if (iVar12 == 186956100)
											{
												unk_0x4A4806F9D471E491(Local_154.f_238[iVar40], false, 0);
											}
											unk_0x98868AF51859FC75(Local_154.f_238[iVar40], 0);
											Local_154.f_238.f_116[iVar40] = { Var14.f_4 };
											func_91(&(Local_154.f_238[iVar40]), &Var14);
											if (func_90(&Local_1299, Var14, 962500902))
											{
												func_84(&(Local_154.f_238[iVar40]), &Var14);
											}
											if (!func_55(Var14, Var14.f_24, iVar4) || func_37(Local_154, Var14))
											{
												unk_0x4FB9A846E72E2F23(Local_154.f_238[iVar40], floor((255f * 0,5f)), 1);
												if (Var14 == 584646201 || Var14 == 1593441988)
												{
													unk_0x668BA1A34BE26F6B(Local_154.f_238[iVar40], 0,05f);
												}
											}
											unk_0x0674E58A79778E99(&(Local_154.f_238.f_111[(iVar40 / 32)]), (iVar40 % 32));
											iLocal_1114 = 0;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar6++;
	}
	if (((!bVar2 && bVar46) && bVar10) && !bVar11)
	{
		iLocal_1110++;
		if (iLocal_1110 >= 5)
		{
			iLocal_1110 = 0;
			iLocal_1109++;
			if (iLocal_1109 >= 22)
			{
				iLocal_1109 = 0;
				if (iLocal_1117 >= 110)
				{
					iLocal_1117 = -1;
					bLocal_1111 = true;
				}
				else
				{
					iLocal_1117 = 110;
				}
			}
		}
	}
	if (bVar9)
	{
		if (!bVar0)
		{
			return 1;
		}
		if (!bVar46)
		{
			return 1;
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_236(iParam0))
		{
			if (func_54(iParam1))
			{
				if (func_45(1623028892, iParam1, -1))
				{
					iVar0 = func_44(iParam1);
					if (iVar0 != 0)
					{
						if ((func_43(unk_0x16F2683693E537C9(), iParam1) || func_39(func_42(iVar0), -1, -1)) || func_38(unk_0x654E7ACE881E41FE(iVar0), iVar0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 == -656458692)
	{
		if (func_39(7450, -1, -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == -1466123874)
	{
		if (func_39(7454, -1, -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case -728555052:
			if (func_39(7450, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 416676503:
			if (func_39(7451, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1569042529:
			if (func_39(7456, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1212426201:
			if (func_39(7455, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 860033945:
			if (func_39(7454, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1548507267:
			if (func_39(7457, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1159398588:
		case -957766203:
			if (func_39(7452, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 970310034:
			if (func_39(7453, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 883325847 && func_39(7457, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar1 = func_41(iParam0, iParam1);
	uVar2 = func_40(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_40(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_41(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 7387;
			break;
		
		case 1593441988:
			return 7388;
			break;
		
		case 584646201:
			return 7389;
			break;
		
		case 736523883:
			return 7390;
			break;
		
		case -1074790547:
			return 7391;
			break;
		
		case -2084633992:
			return 7392;
			break;
		
		case -1357824103:
			return 7393;
			break;
		
		case -1660422300:
			return 7394;
			break;
		
		case 2144741730:
			return 7395;
			break;
		
		case 487013001:
			return 7396;
			break;
		
		case 2017895192:
			return 7397;
			break;
		
		case -494615257:
			return 7398;
			break;
		
		case 100416529:
			return 7399;
			break;
		
		case -1568386805:
			return 7400;
			break;
		
		case -1312131151:
			return 7401;
			break;
		
		case 1119849093:
			return 7402;
			break;
		
		case -1813897027:
			return 7403;
			break;
		
		case -37975472:
			return 7404;
			break;
		
		case 741814745:
			return 7405;
			break;
		
		case 615608432:
			return 7406;
			break;
		
		case 1233104067:
			return 7407;
			break;
		
		case -1716189206:
			return 7408;
			break;
		
		case 1737195953:
			return 7409;
			break;
		
		case 1317494643:
			return 7410;
			break;
		
		case -1716589765:
			return 7411;
			break;
		
		case -270015777:
			return 7412;
			break;
		
		case -947031628:
			return 7413;
			break;
		
		case -1654528753:
			return 7414;
			break;
		
		case -572349828:
			return 7415;
			break;
		
		case 392730790:
			return 7416;
			break;
		
		case -1063057011:
			return 7417;
			break;
		
		case -102323637:
			return 7418;
			break;
		
		case 2132975508:
			return 7419;
			break;
		
		case -771403250:
			return 7420;
			break;
		
		case -1076751822:
			return 7421;
			break;
		
		case -1834847097:
			return 7422;
			break;
		
		case 137902532:
			return 7423;
			break;
		
		case 1627465347:
			return 7424;
			break;
		
		case 1198879012:
			return 7425;
			break;
		
		case 2138347493:
			return 7426;
			break;
		
		case -1466123874:
			return 7427;
			break;
		
		case -1523701417:
			return 7428;
			break;
		
		case 984333226:
			return 7429;
			break;
		
		case -952879014:
			return 7430;
			break;
		
		case 1672152130:
			return 7431;
			break;
		
		case -1420407917:
			return 7432;
			break;
		
		case 126349499:
			return 7433;
			break;
		
		case 171789620:
			return 7434;
			break;
		
		case -656458692:
			return 7435;
			break;
		
		case -598887786:
			return 7436;
			break;
		
		case -102973651:
			return 7437;
			break;
		
		case 1649403952:
			return 7438;
			break;
		
		case -275439685:
			return 7439;
			break;
		
		case -581044007:
			return 7440;
			break;
		
		case -619010992:
			return 7441;
			break;
		
		case -1951375401:
			return 7442;
			break;
		
		case -1045183535:
			return 7443;
			break;
		
		case -538741184:
			return 7444;
			break;
		
		case 324215364:
			return 7445;
			break;
		
		case 205991906:
			return 7446;
			break;
		
		case 883325847:
			return 7447;
			break;
		
		case 1141786504:
			return 7448;
			break;
		
		case -1786099057:
			return 7449;
			break;
		
		case -2067956739:
			return 7466;
			break;
		
		case 317205821:
			return 7621;
			break;
		
		case -853065399:
			return 7622;
			break;
		
		case 125959754:
			return 7623;
			break;
		
		case -1121678507:
			return 7624;
			break;
		
		case -1169823560:
			return 7625;
			break;
		
		case -1810795771:
			return 7626;
			break;
		
		case 419712736:
			return 7627;
			break;
		
		case -1075685676:
			return 15441;
			break;
		
		case 2024373456:
			return 15442;
			break;
		
		case 177293209:
			return 15443;
			break;
		
		case -608341376:
			return 15444;
			break;
		
		case 961495388:
			return 15445;
			break;
		
		case -86904375:
			return 15446;
			break;
		
		case -2066285827:
			return 18100;
			break;
		
		case 1785463520:
			return 18101;
			break;
		
		case 1432025498:
			return 18102;
			break;
		
		case -879347409:
			return 18103;
			break;
		
		case -2009644972:
			return 18104;
			break;
		
		case -1768145561:
			return 18105;
			break;
		
		case -1746263880:
			return 15995;
			break;
		
		case 940833800:
			return 15548;
			break;
		
		case -1355376991:
			return 25241;
			break;
		
		case 1198256469:
			return 25242;
			break;
		
		case -1238556825:
			return 25243;
			break;
		
		case 727643628:
			return 25518;
			break;
		
		case -1853920116:
			return 25519;
			break;
	}
	return 7386;
}

int func_43(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 453432689:
			return unk_0x440C646F2F11A2A1(iParam0, -1075685676, 0);
		
		case 736523883:
			return unk_0x440C646F2F11A2A1(iParam0, 2024373456, 0);
		
		case 205991906:
			return unk_0x440C646F2F11A2A1(iParam0, 177293209, 0);
		
		case 2144741730:
			return unk_0x440C646F2F11A2A1(iParam0, -608341376, 0);
		
		case -1074790547:
			return unk_0x440C646F2F11A2A1(iParam0, 961495388, 0);
		
		case -2084633992:
			return unk_0x440C646F2F11A2A1(iParam0, -86904375, 0);
		
		case 487013001:
			return unk_0x440C646F2F11A2A1(iParam0, 1432025498, 0);
		
		case -1063057011:
			return unk_0x440C646F2F11A2A1(iParam0, -1768145561, 0);
		
		case -1076751822:
			return unk_0x440C646F2F11A2A1(iParam0, -2009644972, 0);
		
		case -952879014:
			return unk_0x440C646F2F11A2A1(iParam0, 1785463520, 0);
		
		case -1045183535:
			return unk_0x440C646F2F11A2A1(iParam0, -879347409, 0);
		
		case 2132975508:
			return unk_0x440C646F2F11A2A1(iParam0, -2066285827, 0);
		
		default:
	}
	return 0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return -1075685676;
		
		case 736523883:
			return 2024373456;
		
		case -1074790547:
			return 961495388;
		
		case -2084633992:
			return -86904375;
		
		case 2144741730:
			return -608341376;
		
		case 205991906:
			return 177293209;
		
		case 2132975508:
			return -2066285827;
			break;
		
		case -952879014:
			return 1785463520;
			break;
		
		case 487013001:
			return 1432025498;
			break;
		
		case -1045183535:
			return -879347409;
			break;
		
		case -1076751822:
			return -2009644972;
			break;
		
		case -1063057011:
			return -1768145561;
			break;
	}
	return 0;
}

bool func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_53())
	{
		return 0;
	}
	iVar0 = func_49(iParam0, iParam1, iParam2);
	iVar1 = func_47(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_46(int iParam0)
{
	return (iParam0 % 32);
}

int func_47(int iParam0, int iParam1)
{
	return func_48(iParam0, iParam1);
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
					break;
				
				case -316253668:
					return 2;
					break;
				
				case 899381934:
					return 3;
					break;
				
				case 1709866683:
					return 4;
					break;
				
				case -684126074:
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
					break;
				
				case -696561875:
					return 6;
					break;
				
				case 899381934:
					return 7;
					break;
				
				case -1023114086:
					return 8;
					break;
				
				case -966439566:
					return 186;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
					break;
				
				case 614078421:
					return 12;
					break;
				
				case 899381934:
					return 13;
					break;
				
				case -1023114086:
					return 14;
					break;
				
				case -1686714580:
					return 164;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
					break;
				
				case 283556395:
					return 16;
					break;
				
				case 899381934:
					return 17;
					break;
				
				case -1657815255:
					return 18;
					break;
				
				case -1489156508:
					return 19;
					break;
				
				case 1215999497:
					return 174;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
					break;
				
				case 889808635:
					return 23;
					break;
				
				case 2043113590:
					return 207;
					break;
				
				case 2076495324:
					return 24;
					break;
				
				case 1019656791:
					return 25;
					break;
				
				case -1023114086:
					return 26;
					break;
				
				case 663170192:
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
					break;
				
				case -1323216997:
					return 28;
					break;
				
				case -604986051:
					return 201;
					break;
				
				case 202788691:
					return 29;
					break;
				
				case 2076495324:
					return 30;
					break;
				
				case -1657815255:
					return 31;
					break;
				
				case -1489156508:
					return 32;
					break;
				
				case 1319990579:
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
					break;
				
				case -1861183855:
					return 34;
					break;
				
				case -1167922891:
					return 202;
					break;
				
				case 1967214384:
					return 35;
					break;
				
				case 202788691:
					return 36;
					break;
				
				case 2076495324:
					return 37;
					break;
				
				case -1596416958:
					return 38;
					break;
				
				case -2089531990:
					return 39;
					break;
				
				case -660892072:
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
					break;
				
				case -1899902599:
					return 45;
					break;
				
				case 2076495324:
					return 47;
					break;
				
				case -1439939148:
					return 48;
					break;
				
				case -2089531990:
					return 49;
					break;
				
				case 930927479:
					return 163;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
					break;
				
				case -2112517305:
					return 51;
					break;
				
				case 1006677997:
					return 52;
					break;
				
				case -690308418:
					return 187;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
					break;
				
				case -691692330:
					return 54;
					break;
				
				case 202788691:
					return 55;
					break;
				
				case -1596416958:
					return 56;
					break;
				
				case -1828795171:
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
					break;
				
				case 2076495324:
					return 60;
					break;
				
				case -1562927653:
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
					break;
				
				case -2034401422:
					return 65;
					break;
				
				case 202788691:
					return 66;
					break;
				
				case 2076495324:
					return 67;
					break;
				
				case -2089531990:
					return 68;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
					break;
				
				case -767279652:
					return 70;
					break;
				
				case -1135289737:
					return 71;
					break;
				
				case -1489156508:
					return 72;
					break;
				
				case 1077065191:
					return 180;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
					break;
				
				case -1135289737:
					return 77;
					break;
				
				case -767279652:
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
					break;
				
				case 2076495324:
					return 79;
					break;
				
				case -1439939148:
					return 80;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
					break;
				
				case -1152981993:
					return 84;
					break;
				
				case 2076495324:
					return 85;
					break;
				
				case -1657815255:
					return 86;
					break;
				
				case -1489156508:
					return 87;
					break;
				
				case 663517359:
					return 189;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
					break;
				
				case 2076495324:
					return 89;
					break;
				
				case -1489156508:
					return 90;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
					break;
				
				case -640439150:
					return 92;
					break;
				
				case 899381934:
					return 93;
					break;
				
				case -1489156508:
					return 94;
					break;
				
				case 2008591151:
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case -767279652:
					return 96;
					break;
				
				case -1135289737:
					return 97;
					break;
				
				case -2089531990:
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case 202788691:
					return 101;
					break;
				
				case 2076495324:
					return 102;
					break;
				
				case -1596416958:
					return 103;
					break;
				
				case -2089531990:
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case 202788691:
					return 107;
					break;
				
				case -1596416958:
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
					break;
				
				case 2089537806:
					return 112;
					break;
				
				case 1801039530:
					return 208;
					break;
				
				case 202788691:
					return 113;
					break;
				
				case 2076495324:
					return 114;
					break;
				
				case -1596416958:
					return 115;
					break;
				
				case -1489156508:
					return 116;
					break;
				
				case 1929467122:
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
					break;
				
				case 2063610803:
					return 118;
					break;
				
				case 899381934:
					return 119;
					break;
				
				case -1023114086:
					return 120;
					break;
				
				case -2144080721:
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
					break;
				
				case 1694090795:
					return 122;
					break;
				
				case 899381934:
					return 123;
					break;
				
				case -1023114086:
					return 124;
					break;
				
				case 2053798779:
					return 171;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
					break;
				
				case -1284994289:
					return 132;
					break;
				
				case 2076495324:
					return 127;
					break;
				
				case -2089531990:
					return 128;
					break;
				
				case -1439939148:
					return 129;
					break;
				
				case 202788691:
					return 130;
					break;
				
				case -1470645128:
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
					break;
				
				case -355941776:
					return 126;
					break;
			}
			break;
		
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
					break;
				
				case 867832552:
					return 134;
					break;
				
				case -1023114086:
					return 136;
					break;
			}
			break;
		
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
					break;
				
				case -1759709443:
					return 140;
					break;
				
				case -2000168365:
					return 205;
					break;
				
				case 2076495324:
					return 145;
					break;
				
				case -1489156508:
					return 146;
					break;
				
				case 202788691:
					return 147;
					break;
			}
			break;
		
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
					break;
				
				case -855823675:
					return 139;
					break;
				
				case 471997210:
					return 141;
					break;
				
				case 2076495324:
					return 142;
					break;
				
				case -2089531990:
					return 143;
					break;
				
				case 202788691:
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
					break;
				
				case 860508675:
					return 150;
					break;
				
				case 1857603803:
					return 203;
					break;
				
				case 2076495324:
					return 151;
					break;
				
				case -1439939148:
					return 152;
					break;
				
				case 202788691:
					return 153;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
					break;
			}
			break;
		
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
					break;
				
				case -287703709:
					return 155;
					break;
				
				case 1351683121:
					return 156;
					break;
				
				case -1755194916:
					return 157;
					break;
				
				case 2112683568:
					return 158;
					break;
				
				case 1062111910:
					return 159;
					break;
				
				case 146278587:
					return 160;
					break;
				
				case -494162961:
					return 161;
					break;
				
				case 2062808965:
					return 162;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
					break;
				
				case -1188271751:
					return 185;
					break;
				
				case -1444295948:
					return 206;
					break;
				
				case -1023114086:
					return 183;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
					break;
				
				case -409758110:
					return 195;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
					break;
				
				case 384708672:
					return 197;
					break;
				
				case -1802258419:
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
					break;
				
				case 1509923832:
					return 200;
					break;
				
				case -972590066:
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case 1709866683:
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case 2076495324:
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case -1023114086:
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case -1135289737:
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case 2076495324:
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case -1489156508:
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case 2076495324:
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case -2089531990:
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case 2076495324:
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case 2076495324:
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case -1489156508:
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case 1709866683:
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case 2076495324:
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case -2089531990:
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case 899381934:
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case 2076495324:
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case -2089531990:
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
					break;
			}
			break;
		
		case 727643628:
			switch (iParam0)
			{
				case 1423184737:
					return 555;
					break;
				
				case -2122814295:
					return 556;
					break;
				
				case -1828202758:
					return 557;
					break;
			}
			break;
	}
	return 0;
}

var func_49(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_31(func_50(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_50(int iParam0, int iParam1)
{
	iVar0 = func_47(iParam0, iParam1);
	iVar1 = func_52(iVar0);
	if ((func_35() == 0 || func_51() == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
		}
	}
	return 1753;
}

int func_51()
{
	return Global_30769;
}

int func_52(int iParam0)
{
	return (iParam0 / 32);
}

bool func_53()
{
	return Global_1312856;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
		case 736523883:
		case -1074790547:
		case -2084633992:
		case 2144741730:
		case 205991906:
		case 487013001:
		case -1063057011:
		case -1076751822:
		case -952879014:
		case -1045183535:
		case 2132975508:
			return 1;
			break;
	}
	return 0;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_82(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 == 1)
	{
		return 1;
	}
	iVar40 = func_81(iParam0, &uVar1);
	if (unk_0x8CD06866876216F2())
	{
		if (func_35() == 0)
		{
			if (iParam0 == 727643628)
			{
				if (func_80(unk_0xD803B885F5E47A62(), 2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (iVar40 != -1)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_35() == 0)
		{
			if (func_79(iParam0))
			{
				if ((((Local_154 == 46 || Local_154 == 47) || Local_154 == 48) || Local_154 == 49) || Local_154 == 52)
				{
					return 1;
				}
			}
			if (func_75(iParam0))
			{
				return 1;
			}
			if (iParam0 == 911657153)
			{
				return 0;
			}
			if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return func_72(156);
				}
				else if (iParam2 == 1)
				{
					return func_72(157);
				}
				else if (iParam2 == 2)
				{
					return func_72(158);
				}
				else if (iParam2 == 3)
				{
					return func_72(159);
				}
				else if (iParam2 == 4)
				{
					return func_72(160);
				}
				else
				{
					return 1;
				}
			}
			if (iParam1 == 4)
			{
				return func_72(1);
			}
			return func_69(iParam0, -1, 0);
		}
	}
	else
	{
		if (iParam0 == -1569615261)
		{
			if (iParam1 == 3)
			{
				return 1;
			}
		}
		if (func_59(func_63(), iParam0) && !func_56(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	iVar0 = func_52(func_57(iParam0));
	iVar1 = func_46(func_57(iParam0));
	if (iVar0 > -1 && iVar1 > -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_98796.f_2[iVar0], iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	return func_58(iParam0);
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	if (func_62(iParam0))
	{
		if (func_61(iParam1))
		{
			return 1;
		}
		iVar0 = func_60(iParam0, iParam1);
		iVar1 = func_57(iParam1);
		iVar2 = func_46(iVar1);
		return unk_0xEAE0D21A50E6C7F4(iVar0, iVar2);
	}
	return 0;
}

var func_60(int iParam0, int iParam1)
{
	iVar1 = func_57(iParam1);
	iVar2 = func_52(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(576985480, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-829737731, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(2063253241, &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(877772131, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-1131638528, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(2114897185, &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(2115260647, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-1732884144, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-413657166, &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 1317494643:
		case -1716589765:
		case -1654528753:
		case -270015777:
			return 1;
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x037F36BEA9A47381())
	{
		if (unk_0x6532540B34EE6273(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (!unk_0x232048AB4B0E0259(Var1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63()
{
	func_64();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_64()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_67(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_66(unk_0x16F2683693E537C9());
			if (func_62(iVar0) && (!func_65(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_62(Global_111638.f_2358.f_539.f_4321))
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

bool func_65(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_66(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_67(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_67(int iParam0)
{
	if (func_62(iParam0))
	{
		return func_68(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_68(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_53())
	{
		return 0;
	}
	iVar0 = func_70(iParam0, iParam1);
	iVar1 = func_57(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

var func_70(int iParam0, int iParam1)
{
	uVar0 = func_31(func_71(iParam0), iParam1, 0);
	return uVar0;
}

int func_71(int iParam0)
{
	iVar0 = func_57(iParam0);
	iVar1 = func_52(iVar0);
	if ((func_35() == 0 || func_51() == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2427;
				break;
		}
	}
	return 11511;
}

bool func_72(int iParam0)
{
	if (func_53())
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

var func_73(var uParam0)
{
	uVar0 = func_31(func_74(uParam0, 999), -1, 0);
	return uVar0;
}

int func_74(var uParam0, int iParam1)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	if (((func_35() == 0 || func_51() == 0) || iParam1 == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 696;
				break;
			
			case 1:
				return 697;
				break;
			
			case 2:
				return 698;
				break;
			
			case 3:
				return 699;
				break;
			
			case 4:
				return 700;
				break;
			
			case 5:
				return 701;
				break;
			
			case 6:
				return 702;
				break;
			
			case 7:
				return 703;
				break;
			
			case 8:
				return 704;
				break;
			
			case 9:
				return 2053;
				break;
			
			case 10:
				return 2065;
				break;
			
			case 11:
				return 2092;
				break;
			
			case 12:
				return 2428;
				break;
			
			case 13:
				return 2947;
				break;
			
			case 14:
				return 5510;
				break;
			
			case 15:
				return 5514;
				break;
			
			case 16:
				return 5518;
				break;
			
			case 17:
				return 5522;
				break;
			
			case 18:
				return 5526;
				break;
			
			case 19:
				return 5530;
				break;
			
			case 20:
				return 5590;
				break;
			
			case 21:
				return 5594;
				break;
			
			case 22:
				return 5598;
				break;
			
			case 23:
				return 5602;
				break;
			
			case 24:
				return 5606;
				break;
			
			case 25:
				return 5610;
				break;
			
			case 26:
				return 5614;
				break;
			
			case 27:
				return 5635;
				break;
			
			case 28:
				return 5639;
				break;
			
			case 29:
				return 5643;
				break;
			
			case 30:
				return 5647;
				break;
			
			case 31:
				return 5651;
				break;
			
			case 32:
				return 5655;
				break;
			
			case 33:
				return 6465;
				break;
			
			case 34:
				return 6469;
				break;
			
			case 35:
				return 6473;
				break;
			
			case 36:
				return 6477;
				break;
			
			case 37:
				return 6481;
				break;
			
			case 38:
				return 6485;
				break;
			
			case 39:
				return 6489;
				break;
		}
	}
	return 11511;
}

int func_75(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_76())
		{
			if ((iParam0 == -952879014 || iParam0 == 1649403952) || iParam0 == 125959754)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_76()
{
	return (func_78() || func_77());
}

int func_77()
{
	switch (unk_0x38658A8D6418AB75())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_78()
{
	switch (unk_0x5C2586DA37052EF7())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
		case 736523883:
		case -1074790547:
		case -2084633992:
		case 2144741730:
		case 205991906:
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 487013001:
		case -1063057011:
		case -1076751822:
		case -952879014:
		case -1045183535:
		case 2132975508:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 1;
			break;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 10);
			
			case 1:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 11);
			
			case 2:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 12);
			
			case 3:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 13);
			}
		
		default:
	}
	return 0;
}

int func_81(int iParam0, var uParam1)
{
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_82(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == 966099553)
	{
		return 1;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2())
	{
		if ((((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == -1654528753) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == -1716589765) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == 1317494643)
		{
			return 1;
		}
		if (iParam0 == -102973651)
		{
			if (func_83() || Global_262145.f_19752)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case -102973651:
				if (func_83())
				{
					if (Global_111638.f_9080.f_330[62])
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
				break;
			
			case 1834241177:
				if (func_83())
				{
					if (Global_111638.f_9080.f_330[14])
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
				break;
			
			case -102323637:
			case 1317494643:
				if (Global_111638.f_9080.f_330[1])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1076751822:
				if ((Global_111638.f_9080.f_330[1] || Global_111638.f_9080.f_330[43]) || Global_111638.f_9080.f_330[19])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1063057011:
				if (Global_111638.f_9080.f_330[90])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1834847097:
			case 137902532:
				if (Global_111638.f_9080.f_330[62])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -771403250:
				if (Global_111638.f_9080.f_330[29])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1654528753:
				if (Global_111638.f_9080.f_330[74] || Global_111638.f_9080.f_330[38])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1466123874:
			case -598887786:
				if (Global_111638.f_9080.f_330[59])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 1627465347:
				if (Global_111638.f_9080.f_330[28])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1716589765:
				if (Global_111638.f_9080.f_330[39])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 2132975508:
				if (Global_111638.f_9080.f_330[84] || Global_111638.f_9080.f_330[85])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -952879014:
				if (Global_111638.f_9080.f_330[93])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 984333226:
				if (Global_111638.f_9080.f_330[39])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 2138347493:
				if (Global_111638.f_9080.f_330[28])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -1420407917:
				if (Global_111638.f_9080.f_330[64])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 1672152130:
				if (Global_111638.f_9080.f_330[14])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -656458692:
				if (Global_111638.f_9080.f_330[2])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 171789620:
				if (Global_111638.f_9080.f_330[92])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -581044007:
				if (Global_111638.f_9080.f_330[63])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -619010992:
				if (Global_111638.f_9080.f_330[41])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
		}
		if (((((((((iParam0 == -572349828 || iParam0 == -270015777) || iParam0 == 392730790) || iParam0 == -1654528753) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == -1716589765) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == 1317494643)
		{
			return 1;
		}
	}
	return -1;
}

int func_83()
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

void func_84(var uParam0, int iParam1)
{
	if (!func_173(*iParam1))
	{
		if ((func_88(&Local_1299, *iParam1, 962500902, 0) != 0 && unk_0x134B62B726CEC8E6(*uParam0) == unk_0xE8213142E3A84F79(func_88(&Local_1299, *iParam1, 962500902, 0))) || (func_88(&Local_1299, *iParam1, 962500902, 1) != 0 && unk_0x134B62B726CEC8E6(*uParam0) == unk_0xE8213142E3A84F79(func_88(&Local_1299, *iParam1, 962500902, 1))))
		{
			while (func_178(&Local_1299, *iParam1, iVar0, 0))
			{
				if (Local_1299.f_4 != 962500902)
				{
					if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), *iParam1, 0))
					{
						if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), *iParam1, Local_1299))
						{
							if (unk_0xD59C425D3CEABECE(*uParam0, Local_1299))
							{
								unk_0x78FB27E299143AC1(*uParam0, Local_1299);
								func_87(*uParam0, Local_1299);
							}
							unk_0x3599C729CF725E87(*uParam0, Local_1299);
							func_85(*uParam0, Local_1299);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_85(int iParam0, int iParam1)
{
	iVar0 = func_86(iParam1);
	if (iVar0 != 0)
	{
		unk_0x3599C729CF725E87(iParam0, iVar0);
	}
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

void func_87(var uParam0, int iParam1)
{
	iVar0 = func_86(iParam1);
	if (iVar0 != 0)
	{
		if (unk_0xD59C425D3CEABECE(uParam0, iVar0))
		{
			unk_0x78FB27E299143AC1(uParam0, iVar0);
		}
	}
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_89(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	iVar8 = 0;
	while (func_178(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar8)
			{
				return Var0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

void func_89(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	func_89(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	while (func_178(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar7++;
	}
	return 0;
}

void func_91(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		func_178(&Var15, *iParam1, (Local_154.f_118.f_2 - 2), 0);
		if (iParam1->f_24 == 0 || (func_90(&Var8, *iParam1, 962500902) && func_171(iParam1)))
		{
			iVar22 = func_88(&Var8, *iParam1, 962500902, 0);
			iVar23 = func_88(&Var8, *iParam1, 962500902, 1);
			if (((unk_0x134B62B726CEC8E6(*iParam0) == unk_0x6B7EC7B5B6B57364(*iParam1) || ((iVar22 != 0 && !func_173(*iParam1)) && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(iVar22))) || ((iVar23 != 0 && !func_173(*iParam1)) && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(iVar23))) || (func_90(&Var8, *iParam1, 962500902) && func_171(iParam1)))
			{
				if (func_168(*iParam1, 0) != 0)
				{
					bVar25 = true;
					if (func_54(*iParam1) || !func_79(*iParam1))
					{
						if (Local_154.f_118.f_2 >= func_167() && Local_154.f_118.f_2 < (func_167() + func_168(*iParam1, 1)))
						{
							bVar25 = false;
						}
					}
					else if (func_173(*iParam1))
					{
						if (func_236(iLocal_103) && Local_154.f_118.f_5 == 5)
						{
							bVar25 = false;
						}
					}
					if (bVar25)
					{
						if (unk_0x721BB740C7E054B7(*iParam0) != 0)
						{
							unk_0x8E9786E049F1EAD7(*iParam0, 0);
						}
						if (func_236(iLocal_103) && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), *iParam1, 0))
						{
							unk_0x8E9786E049F1EAD7(*iParam0, unk_0x7DD9FDEA5DFB355E(unk_0x16F2683693E537C9(), *iParam1));
						}
					}
					else if (unk_0x134B62B726CEC8E6(*iParam0) == unk_0x6B7EC7B5B6B57364(*iParam1))
					{
						iVar1 = 0;
						while (iVar1 < unk_0xFF4F1F8A37B1B330(*iParam1))
						{
							if (func_127(&Local_1306, *iParam1, iVar1, 0))
							{
								if (Local_1306.f_10 == 0)
								{
									if (func_124(*iParam1, (Local_154.f_118.f_2 - func_167())) == iVar1 && unk_0x721BB740C7E054B7(*iParam0) != Local_1306.f_9)
									{
										if (Local_1306.f_9 < 32)
										{
											unk_0x8E9786E049F1EAD7(*iParam0, Local_1306.f_9);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				if (Local_154.f_118.f_5 == 6)
				{
					if (func_122(&Var8, &iVar24, *iParam1))
					{
						iVar1 = 0;
						while (iVar1 < func_121(*iParam1))
						{
							if (func_115(&Local_1317, *iParam1, iVar1, 0))
							{
								if (Local_1317.f_10 == 6)
								{
									if (iVar1 == (Local_154.f_118.f_2 - 40) && unk_0xB15ECFF83D73145E(*iParam0, iVar24) != Local_1317.f_9)
									{
										unk_0x5CF4867E995DC6C6(*iParam0, iVar24, Local_1317.f_9);
										func_114(iParam0, iVar24, Local_1317.f_9);
									}
								}
							}
							iVar1++;
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 15))
				{
					if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), *iParam1, 0) && func_122(&Var8, &iVar24, *iParam1))
					{
						func_109(&Local_1317, &iVar26, *iParam1);
						if (func_115(&Local_1317, *iParam1, iVar26, 0))
						{
							unk_0x5CF4867E995DC6C6(*iParam0, iVar24, Local_1317.f_9);
							func_114(iParam0, iVar24, Local_1317.f_9);
							unk_0x0E8D2351A8BAC879(unk_0x16F2683693E537C9(), *iParam1, iVar24, Local_1317.f_9);
							func_108(unk_0x16F2683693E537C9(), *iParam1, iVar24, Local_1317.f_9);
							iLocal_1093 = Local_1317.f_9;
							unk_0x0674E58A79778E99(&(Local_154.f_721), 15);
						}
					}
					else
					{
						iLocal_1093 = 0;
						unk_0x0674E58A79778E99(&(Local_154.f_721), 15);
					}
				}
				while (func_178(&Var8, *iParam1, iVar0, 0))
				{
					if (Var8 != 0)
					{
						bVar2 = false;
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), *iParam1, 0))
						{
							if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), *iParam1, Var8))
							{
								if (Var8 == func_107(*iParam1))
								{
									bVar2 = false;
								}
								if (Var8.f_4 == 962500902)
								{
									if (Local_154.f_118.f_2 < func_167())
									{
										bVar2 = true;
									}
									else
									{
										bVar2 = false;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						else if (Var8.f_1)
						{
							bVar2 = true;
						}
						if (Local_154.f_118.f_5 == 1)
						{
							if (func_236(Local_154))
							{
								if (!func_106(*iParam1))
								{
									if ((Local_154.f_118.f_2 - 2) == iVar0)
									{
										bVar2 = true;
									}
									if ((Local_154.f_118.f_2 - 2) != iVar0)
									{
										if (Var8.f_4 == Var15.f_4 && Var8.f_6 != Var15.f_6)
										{
											bVar2 = false;
										}
									}
								}
								else if (iVar0 == 0)
								{
									bVar2 = true;
								}
							}
							else
							{
								if ((Local_154.f_118.f_2 - 2) == iVar0)
								{
									bVar2 = true;
								}
								if ((Local_154.f_118.f_2 - 2) != iVar0)
								{
									if (Var8.f_4 == Var15.f_4 && Var8.f_6 != Var15.f_6)
									{
										bVar2 = false;
									}
								}
							}
						}
						if (Local_154.f_118.f_5 == 4)
						{
							if (Var15.f_4 == -571619404)
							{
								bLocal_1298 = true;
							}
							else
							{
								bLocal_1298 = false;
							}
							if ((Local_154.f_118.f_2 - 2) == iVar0 && !func_100(Var8, *iParam1))
							{
								bVar2 = true;
							}
							else if ((func_100(Var15, *iParam1) && func_45(Var8, *iParam1, -1)) && Var8.f_4 == Var15.f_4)
							{
								bVar2 = true;
							}
							if ((Local_154.f_118.f_2 - 2) != iVar0 && !func_100(Var15, *iParam1))
							{
								if (Var8.f_4 == Var15.f_4 && Var8.f_6 != Var15.f_6)
								{
									bVar2 = false;
								}
							}
						}
						else
						{
							bLocal_1298 = false;
						}
						if (Local_154.f_118.f_5 == 2 || Local_154.f_118.f_5 == 3)
						{
							if (iVar0 == 0)
							{
								bVar2 = true;
							}
						}
						if (bVar2)
						{
							iVar4 = 1;
							iVar3 = unk_0xE8213142E3A84F79(Var8);
							if (iVar3 != 0)
							{
								unk_0x523BCC9DC80CD82F(iVar3);
								func_175(Var8);
								if (!unk_0xB87F6CF6E5628C67(iVar3) || !func_174(Var8))
								{
									iVar4 = 0;
								}
							}
							if (Var8.f_4 == 962500902 && !func_173(*iParam1))
							{
								iVar5 = unk_0xA5DCE37B21DF5B03(Var8);
								iVar6 = 0;
								while (iVar6 <= (iVar5 - 1))
								{
									iVar7 = unk_0x22977A7BB2F7810C(Var8, iVar6);
									if (iVar7 != 0)
									{
										unk_0x523BCC9DC80CD82F(iVar7);
										if (!unk_0xB87F6CF6E5628C67(iVar7))
										{
											iVar4 = 0;
										}
									}
									iVar6++;
								}
							}
							if (!unk_0xD59C425D3CEABECE(*iParam0, Var8) && iVar4)
							{
								if ((Var8.f_4 == 962500902 && unk_0x134B62B726CEC8E6(*iParam0) == unk_0x6B7EC7B5B6B57364(*iParam1)) || (func_90(&Var8, *iParam1, 962500902) && func_171(iParam1)))
								{
									if (Var8.f_4 == 962500902 && !func_173(*iParam1))
									{
										if (func_90(&Var8, *iParam1, -571619404))
										{
											if (unk_0xD59C425D3CEABECE(*iParam0, func_88(&Var8, *iParam1, -571619404, 0)))
											{
												unk_0x78FB27E299143AC1(*iParam0, func_88(&Var8, *iParam1, -571619404, 0));
											}
										}
										if (*iParam1 == -952879014)
										{
											unk_0x78FB27E299143AC1(*iParam0, 471997210);
										}
										if (*iParam1 == 100416529)
										{
											if (unk_0xD59C425D3CEABECE(*iParam0, -767279652))
											{
												unk_0x78FB27E299143AC1(*iParam0, -767279652);
											}
										}
									}
									if (!func_173(*iParam1))
									{
										func_93(iParam0, iParam1, unk_0x68F4C0EC296D3901(*iParam0, false), unk_0x835730A2D89F6093(*iParam0, 2), iVar3);
									}
								}
								if (!unk_0xD59C425D3CEABECE(*iParam0, Var8))
								{
									if ((Var8 == func_88(&Var8, *iParam1, 962500902, 0) && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(func_88(&Var8, *iParam1, 962500902, 0))) && !func_171(iParam1))
									{
										unk_0x3599C729CF725E87(*iParam0, Var8);
										func_85(*iParam0, Var8);
									}
									if ((Var8 == func_88(&Var8, *iParam1, 962500902, 1) && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(func_88(&Var8, *iParam1, 962500902, 1))) && !func_171(iParam1))
									{
										unk_0x3599C729CF725E87(*iParam0, Var8);
										func_85(*iParam0, Var8);
									}
									if (func_173(*iParam1))
									{
										unk_0x3599C729CF725E87(*iParam0, Var8);
										func_85(*iParam0, Var8);
										if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), *iParam1, 0) && func_173(*iParam1))
										{
											if (func_92(Var8))
											{
												iVar27 = 0;
												func_109(&Local_1317, &iVar27, *iParam1);
												if (func_115(&Local_1317, *iParam1, iVar27, 0))
												{
													unk_0x5CF4867E995DC6C6(*iParam0, Var8, iVar27);
													func_114(iParam0, Var8, iVar27);
													unk_0x0E8D2351A8BAC879(unk_0x16F2683693E537C9(), *iParam1, Var8, iVar27);
													func_108(unk_0x16F2683693E537C9(), *iParam1, Var8, iVar27);
												}
											}
										}
									}
									else if (Var8 != func_88(&Var8, *iParam1, 962500902, 0) && Var8 != func_88(&Var8, *iParam1, 962500902, 1))
									{
										if (!(func_90(&Var8, *iParam1, 962500902) && func_171(iParam1)))
										{
											unk_0x3599C729CF725E87(*iParam0, Var8);
											func_85(*iParam0, Var8);
										}
									}
								}
								if (Var8.f_4 == 962500902 && !func_173(*iParam1))
								{
									if (func_90(&Var8, *iParam1, -571619404))
									{
										if (!unk_0xD59C425D3CEABECE(*iParam0, func_88(&Var8, *iParam1, -571619404, 1)) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Var8, *iParam1, -571619404, 2)))
										{
											unk_0x3599C729CF725E87(*iParam0, func_88(&Var8, *iParam1, -571619404, 0));
										}
									}
									if (*iParam1 == -952879014)
									{
										unk_0x3599C729CF725E87(*iParam0, 471997210);
									}
									if (*iParam1 == 100416529)
									{
										unk_0x3599C729CF725E87(*iParam0, -767279652);
									}
								}
							}
						}
						else if (unk_0xD59C425D3CEABECE(*iParam0, Var8))
						{
							if (Var8 == func_88(&Var8, *iParam1, -571619404, 0))
							{
								if (!unk_0xD59C425D3CEABECE(*iParam0, func_88(&Var8, *iParam1, -571619404, 1)) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Var8, *iParam1, -571619404, 2)))
								{
									unk_0x78FB27E299143AC1(*iParam0, Var8);
								}
							}
							else if (Var8.f_4 == 962500902)
							{
								if (!func_173(*iParam1))
								{
									unk_0x78FB27E299143AC1(*iParam0, Var8);
									func_87(*iParam0, Var8);
								}
								else
								{
									iVar28 = 0;
									if (func_122(&Var8, &iVar28, *iParam1))
									{
										if (iVar28 != Var8)
										{
											unk_0x78FB27E299143AC1(*iParam0, Var8);
											func_87(*iParam0, Var8);
										}
									}
									else
									{
										unk_0x78FB27E299143AC1(*iParam0, Var8);
										func_87(*iParam0, Var8);
									}
								}
							}
							else
							{
								unk_0x78FB27E299143AC1(*iParam0, Var8);
								func_87(*iParam0, Var8);
							}
							if (((Var8.f_4 == 962500902 && (iVar22 != 0 && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(iVar22))) || (iVar23 != 0 && unk_0x134B62B726CEC8E6(*iParam0) == unk_0xE8213142E3A84F79(iVar23))) || (func_90(&Var8, *iParam1, 962500902) && func_171(iParam1)))
							{
								if (!func_173(*iParam1))
								{
									func_93(iParam0, iParam1, unk_0x68F4C0EC296D3901(*iParam0, false), unk_0x835730A2D89F6093(*iParam0, 2), 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case -1860492113:
		case 937772107:
		case 1401650071:
		case 628662130:
		case -985047251:
		case -812944463:
		case -1447352303:
		case -60338860:
		case 2088750491:
		case -1513913454:
		case -1179558480:
		case 1272803094:
		case 1080719624:
		case 792221348:
		case -452181427:
		case -746774737:
		case -2044296061:
		case -199171978:
		case -1428075016:
		case -1735153315:
		case 1796459838:
		case -631911105:
		case 1249283253:
		case -857707587:
		case -1097543898:
		case 1980349969:
		case 1219453777:
		case -1853459190:
		case -2074781016:
		case 457967755:
		case 235171324:
		case 42685294:
		case -687617715:
		case -130843390:
		case -977347227:
		case -378461067:
		case 329939175:
		case 643374672:
		case 807875052:
		case -1401804168:
		case -1096495395:
		case -847811454:
		case -1413108537:
		case 1815270123:
		case 1550611612:
		case 368550800:
		case -1769069349:
		case 24902297:
		case -228041614:
		case -584961562:
		case -1153175946:
		case 1301287696:
		case 1597093459:
		case 1769871776:
		case -1827882671:
		case -996700057:
		case 940943685:
		case 1263226800:
		case -328035840:
		case 1224100642:
		case 899228776:
		case 616006309:
		case -1561952511:
		case 572063080:
		case 1170588613:
		case 966612367:
		case -474112444:
		case 387223451:
		case 617753366:
		case -222378256:
		case 8741501:
		case -601286203:
		case -511433605:
		case -655387818:
		case -282476598:
		case 1739501925:
		case 1178671645:
		case -1069552225:
		case 11918884:
		case 176157112:
		case -220052855:
		case 288456487:
		case 398658626:
		case 628697006:
		case 925911836:
		case 1222307441:
		case 552442715:
		case -648943513:
		case 259780317:
		case -1973342474:
		case 1996130345:
		case -1455657812:
		case -1668263084:
		case 1308243489:
		case 1122574335:
		case 1420313469:
		case 109848390:
		case 593945703:
		case 1142457062:
		case -1869284448:
		case 1931539634:
		case 1624199183:
		case -26834113:
		case -210406055:
		case 423313640:
		case 276639596:
		case -991356863:
		case -1682848301:
		case 996213771:
		case -1214048550:
		case -737430213:
		case 1125852043:
		case 886015732:
		case -1262287139:
		case -295208411:
		case -544154504:
		case 172765678:
		case -1982877449:
		case 2072122460:
		case -1986220171:
		case 1377355801:
		case -1371515465:
		case -1190793877:
		case -1497085720:
		case -1803148180:
		case -1975971886:
		case 36929477:
		case -268444834:
		case -574769446:
		case -882699739:
		case -1468181474:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

void func_93(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8)
{
	vVar0 = { vParam2 };
	vVar3 = { vParam5 };
	func_99(iParam0);
	if ((func_88(&Local_1299, *uParam1, 962500902, 0) != 0 && iParam8 == unk_0xE8213142E3A84F79(func_88(&Local_1299, *uParam1, 962500902, 0))) || (func_88(&Local_1299, *uParam1, 962500902, 1) != 0 && iParam8 == unk_0xE8213142E3A84F79(func_88(&Local_1299, *uParam1, 962500902, 1))))
	{
		if (!func_98(uParam1->f_13) && !func_98(uParam1->f_16))
		{
			vVar0 = { uParam1->f_13 };
			vVar3 = { uParam1->f_16 };
		}
	}
	*iParam0 = unk_0x5ACD4E66C7BF0F49(*uParam1, func_94(*uParam1, 4), vVar0, 1, 1f, iParam8, 0, 1);
	unk_0x08841CDB215AE18F(*iParam0, vVar0, 0, 0, 1);
	unk_0xC023D1C4BF532815(*iParam0, vVar3, 2, 0);
	if ((func_88(&Local_1299, *uParam1, 962500902, 1) != 0 && iParam8 == unk_0xE8213142E3A84F79(func_88(&Local_1299, *uParam1, 962500902, 1))) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 1)))
	{
		unk_0x3599C729CF725E87(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 1));
		func_85(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 1));
	}
	else if ((func_88(&Local_1299, *uParam1, 962500902, 0) != 0 && iParam8 == unk_0xE8213142E3A84F79(func_88(&Local_1299, *uParam1, 962500902, 0))) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 0)))
	{
		unk_0x3599C729CF725E87(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 0));
		func_85(*iParam0, func_88(&Local_1299, *uParam1, 962500902, 0));
	}
	if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), *uParam1, func_88(&Local_1299, *uParam1, -571619404, 2)) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 2)))
	{
		unk_0x3599C729CF725E87(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 2));
	}
	else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), *uParam1, func_88(&Local_1299, *uParam1, -571619404, 1)) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 1)))
	{
		unk_0x3599C729CF725E87(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 1));
	}
	else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), *uParam1, func_88(&Local_1299, *uParam1, -571619404, 0)) && !unk_0xD59C425D3CEABECE(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 0)))
	{
		unk_0x3599C729CF725E87(*iParam0, func_88(&Local_1299, *uParam1, -571619404, 0));
	}
}

int func_94(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0x43B59FAC2AA8CE4D(iParam0))
	{
		iVar0 = (unk_0x282232D7B7DE504A(unk_0x16F2683693E537C9(), iParam0, 1) * iParam1);
		if (func_97(iParam0))
		{
			iVar0 = func_95(iParam0);
		}
	}
	return iVar0;
}

int func_95(int iParam0)
{
	iVar0 = func_96(iParam0, 2);
	switch (iParam0)
	{
		case 1119849093:
			iVar0 = 200;
			break;
		
		case -1568386805:
			iVar0 = 10;
			break;
		
		case -1312131151:
		case 2138347493:
			iVar0 = 5;
			break;
		
		case -1466123874:
		case -1813897027:
		case 741814745:
			iVar0 = 8;
			break;
		
		case -1355376991:
			return 1;
			break;
		
		case -1238556825:
			return Global_262145.f_25983;
			break;
		
		case 1198256469:
			return Global_262145.f_25982;
			break;
	}
	return iVar0;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return (unk_0x6DCAF294E20A0072(iParam0) * iParam1);
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1119849093:
			return 1;
			break;
		
		case -1568386805:
			return 1;
			break;
		
		case -1312131151:
			return 1;
			break;
		
		case -1466123874:
			return 1;
			break;
		
		case 2138347493:
			return 1;
			break;
		
		case -1813897027:
			return 1;
			break;
		
		case 741814745:
			return 1;
			break;
		
		case 1198256469:
			return 1;
			break;
		
		case -1355376991:
			return 1;
			break;
		
		case -1238556825:
			return 1;
			break;
	}
	return 0;
}

int func_98(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

int func_100(int iParam0, int iParam1)
{
	if (func_105(iParam0, iParam1) != -1 && !func_101(func_105(iParam0, iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (func_104(iParam0))
	{
		return 1;
	}
	return func_102(iParam0);
}

bool func_102(int iParam0)
{
	return func_39(func_103(iParam0), -1, -1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15381;
		
		case 1:
			return 15382;
		
		case 2:
			return 15428;
		
		case 3:
			return 15429;
		
		case 4:
			return 15430;
		
		case 5:
			return 15431;
		
		case 6:
			return 15491;
		
		case 7:
			return 15432;
		
		case 8:
			return 15433;
		
		case 9:
			return 15434;
		
		case 10:
			return 15435;
		
		case 11:
			return 15436;
		
		case 12:
			return 15437;
		
		case 13:
			return 15438;
		
		case 14:
			return 15439;
		
		case 15:
			return 15447;
		
		case 16:
			return 15448;
		
		case 17:
			return 15449;
		
		case 18:
			return 15450;
		
		case 19:
			return 15451;
		
		case 20:
			return 15452;
		
		case 21:
			return 15453;
		
		case 22:
			return 15454;
		
		case 23:
			return 15455;
		
		case 24:
			return 15456;
		
		case 25:
			return 15457;
		
		case 26:
			return 15458;
		
		case 27:
			return 15459;
		
		case 28:
			return 15460;
		
		case 29:
			return 15461;
		
		case 30:
			return 15462;
		
		case 31:
			return 15463;
		
		case 32:
			return 15464;
		
		case 33:
			return 15465;
		
		case 34:
			return 15466;
		
		case 35:
			return 15467;
		
		case 36:
			return 15468;
		
		case 37:
			return 15469;
		
		case 38:
			return 15470;
		
		case 39:
			return 15471;
		
		case 40:
			return 15472;
		
		case 41:
			return 15473;
		
		case 42:
			return 15474;
		
		case 43:
			return 15492;
		
		case 44:
			return 15493;
		
		case 45:
			return 15494;
		
		case 46:
			return 15495;
		
		case 47:
			return 15496;
		
		case 48:
			return 15497;
		
		case 49:
			return 15498;
		
		case 50:
			return 15499;
		
		default:
	}
	return 15381;
}

int func_104(int iParam0)
{
	if (Global_262145.f_21378)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_21327;
		
		case 1:
			return Global_262145.f_21328;
		
		case 2:
			return Global_262145.f_21329;
		
		case 3:
			return Global_262145.f_21330;
		
		case 4:
			return Global_262145.f_21331;
		
		case 5:
			return Global_262145.f_21332;
		
		case 6:
			return Global_262145.f_21333;
		
		case 7:
			return Global_262145.f_21334;
		
		case 8:
			return Global_262145.f_21335;
		
		case 9:
			return Global_262145.f_21336;
		
		case 10:
			return Global_262145.f_21337;
		
		case 11:
			return Global_262145.f_21338;
		
		case 12:
			return Global_262145.f_21339;
		
		case 13:
			return Global_262145.f_21340;
		
		case 14:
			return Global_262145.f_21341;
		
		case 15:
			return Global_262145.f_21342;
		
		case 16:
			return Global_262145.f_21343;
		
		case 17:
			return Global_262145.f_21344;
		
		case 18:
			return Global_262145.f_21345;
		
		case 19:
			return Global_262145.f_21346;
		
		case 20:
			return Global_262145.f_21347;
		
		case 21:
			return Global_262145.f_21348;
		
		case 22:
			return Global_262145.f_21349;
		
		case 23:
			return Global_262145.f_21350;
		
		case 24:
			return Global_262145.f_21351;
		
		case 25:
			return Global_262145.f_21352;
		
		case 26:
			return Global_262145.f_21353;
		
		case 27:
			return Global_262145.f_21354;
		
		case 28:
			return Global_262145.f_21355;
		
		case 29:
			return Global_262145.f_21356;
		
		case 30:
			return Global_262145.f_21357;
		
		case 31:
			return Global_262145.f_21358;
		
		case 32:
			return Global_262145.f_21359;
		
		case 33:
			return Global_262145.f_21360;
		
		case 34:
			return Global_262145.f_21361;
		
		case 35:
			return Global_262145.f_21362;
		
		case 36:
			return Global_262145.f_21363;
		
		case 37:
			return Global_262145.f_21364;
		
		case 38:
			return Global_262145.f_21365;
		
		case 39:
			return Global_262145.f_21366;
		
		case 40:
			return Global_262145.f_21367;
		
		case 41:
			return Global_262145.f_21368;
		
		case 42:
			return Global_262145.f_21369;
		
		case 43:
			return Global_262145.f_21370;
		
		case 44:
			return Global_262145.f_21371;
		
		case 45:
			return Global_262145.f_21372;
		
		case 46:
			return Global_262145.f_21373;
		
		case 47:
			return Global_262145.f_21374;
		
		case 48:
			return Global_262145.f_21375;
		
		case 49:
			return Global_262145.f_21376;
		
		case 50:
			return Global_262145.f_21377;
		
		default:
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 961495388:
			switch (iParam0)
			{
				case 1108334355:
					return 38;
					break;
				
				case 1447477866:
					return 39;
					break;
				
				case -1478681000:
					return 26;
					break;
				
				case 1675665560:
					return 27;
					break;
				
				case -76490669:
					return 24;
					break;
				
				case 937772107:
					return 43;
					break;
				
				case 628662130:
					return 44;
					break;
				
				case -985047251:
					return 45;
					break;
				
				case -812944463:
					return 46;
					break;
				
				case -1447352303:
					return 47;
					break;
				
				case -60338860:
					return 48;
					break;
				
				case 2088750491:
					return 49;
					break;
				
				case -1513913454:
					return 50;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1108334355:
					return 40;
					break;
				
				case -1958983669:
					return 41;
					break;
				
				case 626875735:
					return 26;
					break;
				
				case 1141059345:
					return 27;
					break;
				
				case 1025884839:
					return 24;
					break;
				
				case 1080719624:
					return 43;
					break;
				
				case -452181427:
					return 44;
					break;
				
				case -746774737:
					return 45;
					break;
				
				case -2044296061:
					return 46;
					break;
				
				case -199171978:
					return 47;
					break;
				
				case -1428075016:
					return 48;
					break;
				
				case -1735153315:
					return 49;
					break;
				
				case 1796459838:
					return 50;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1108334355:
					return 36;
					break;
				
				case -1243457701:
					return 37;
					break;
				
				case 696788003:
					return 26;
					break;
				
				case 1475288264:
					return 27;
					break;
				
				case -1020871238:
					return 24;
					break;
				
				case -857707587:
					return 43;
					break;
				
				case 1980349969:
					return 44;
					break;
				
				case 1219453777:
					return 45;
					break;
				
				case -1853459190:
					return 46;
					break;
				
				case -2074781016:
					return 47;
					break;
				
				case 457967755:
					return 48;
					break;
				
				case 235171324:
					return 49;
					break;
				
				case 42685294:
					return 50;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -1233121104:
					return 33;
					break;
				
				case 776198721:
					return 34;
					break;
				
				case 277524638:
					return 35;
					break;
				
				case -130689324:
					return 26;
					break;
				
				case 1005144310:
					return 27;
					break;
				
				case 247526935:
					return 24;
					break;
				
				case -1981031769:
					return 28;
					break;
				
				case -977347227:
					return 43;
					break;
				
				case 329939175:
					return 44;
					break;
				
				case 643374672:
					return 45;
					break;
				
				case 807875052:
					return 46;
					break;
				
				case -1401804168:
					return 47;
					break;
				
				case -1096495395:
					return 48;
					break;
				
				case -847811454:
					return 49;
					break;
				
				case -1413108537:
					return 50;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case 568543123:
					return 30;
					break;
				
				case -1898661008:
					return 29;
					break;
				
				case -2046910199:
					return 25;
					break;
				
				case 1329061674:
					return 27;
					break;
				
				case 733837882:
					return 24;
					break;
				
				case 368550800:
					return 43;
					break;
				
				case 24902297:
					return 44;
					break;
				
				case -228041614:
					return 45;
					break;
				
				case -584961562:
					return 46;
					break;
				
				case -1153175946:
					return 47;
					break;
				
				case 1301287696:
					return 48;
					break;
				
				case 1597093459:
					return 49;
					break;
				
				case 1769871776:
					return 50;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case -1613015470:
					return 31;
					break;
				
				case -1520117877:
					return 32;
					break;
				
				case 974903034:
					return 25;
					break;
				
				case 190476639:
					return 27;
					break;
				
				case -644734235:
					return 24;
					break;
				
				case 940943685:
					return 43;
					break;
				
				case -328035840:
					return 44;
					break;
				
				case 1224100642:
					return 45;
					break;
				
				case 899228776:
					return 46;
					break;
				
				case 616006309:
					return 47;
					break;
				
				case -1561952511:
					return 48;
					break;
				
				case 572063080:
					return 49;
					break;
				
				case 1170588613:
					return 50;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case 1315288101:
					return 26;
					break;
				
				case 1004815965:
					return 28;
					break;
				
				case -380098265:
					return 25;
					break;
				
				case -1618338827:
					return 24;
					break;
				
				case 387223451:
					return 43;
					break;
				
				case -222378256:
					return 44;
					break;
				
				case 8741501:
					return 45;
					break;
				
				case -601286203:
					return 46;
					break;
				
				case -511433605:
					return 47;
					break;
				
				case -655387818:
					return 48;
					break;
				
				case -282476598:
					return 49;
					break;
				
				case 1739501925:
					return 50;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 1362433589:
					return 26;
					break;
				
				case 1346235024:
					return 27;
					break;
				
				case -570355066:
					return 24;
					break;
				
				case 1125852043:
					return 43;
					break;
				
				case -1262287139:
					return 44;
					break;
				
				case -295208411:
					return 45;
					break;
				
				case -544154504:
					return 46;
					break;
				
				case 172765678:
					return 47;
					break;
				
				case -1982877449:
					return 48;
					break;
				
				case 2072122460:
					return 49;
					break;
				
				case -1986220171:
					return 50;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case -1055790298:
					return 27;
					break;
				
				case -1928301566:
					return 25;
					break;
				
				case -424845447:
					return 24;
					break;
				
				case -1973342474:
					return 43;
					break;
				
				case -1455657812:
					return 44;
					break;
				
				case -1668263084:
					return 45;
					break;
				
				case 1308243489:
					return 46;
					break;
				
				case 1122574335:
					return 47;
					break;
				
				case 1420313469:
					return 48;
					break;
				
				case 109848390:
					return 49;
					break;
				
				case 593945703:
					return 50;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -193998727:
					return 26;
					break;
				
				case -515203373:
					return 27;
					break;
				
				case 1842849902:
					return 24;
					break;
				
				case 1931539634:
					return 43;
					break;
				
				case -26834113:
					return 44;
					break;
				
				case -210406055:
					return 45;
					break;
				
				case 423313640:
					return 46;
					break;
				
				case 276639596:
					return 47;
					break;
				
				case -991356863:
					return 48;
					break;
				
				case -1682848301:
					return 49;
					break;
				
				case 996213771:
					return 50;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case 231258687:
					return 27;
					break;
				
				case 284438159:
					return 25;
					break;
				
				case 15712037:
					return 24;
					break;
				
				case 11918884:
					return 43;
					break;
				
				case -220052855:
					return 44;
					break;
				
				case 288456487:
					return 45;
					break;
				
				case 398658626:
					return 46;
					break;
				
				case 628697006:
					return 47;
					break;
				
				case 925911836:
					return 48;
					break;
				
				case 1222307441:
					return 49;
					break;
				
				case 552442715:
					return 50;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case -89655827:
					return 26;
					break;
				
				case 1130501904:
					return 27;
					break;
				
				case -1449330342:
					return 24;
					break;
				
				case -1190793877:
					return 43;
					break;
				
				case -1803148180:
					return 44;
					break;
				
				case -1975971886:
					return 45;
					break;
				
				case 36929477:
					return 46;
					break;
				
				case -268444834:
					return 47;
					break;
				
				case -574769446:
					return 48;
					break;
				
				case -882699739:
					return 49;
					break;
				
				case -1468181474:
					return 50;
					break;
			}
			break;
	}
	return -1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return func_45(1623028892, 453432689, -1);
		
		case 736523883:
			return func_45(1623028892, 736523883, -1);
		
		case -1074790547:
			return func_45(1623028892, -1074790547, -1);
		
		case -2084633992:
			return func_45(1623028892, -2084633992, -1);
		
		case 2144741730:
			return func_45(1623028892, 2144741730, -1);
		
		case 205991906:
			return func_45(1623028892, 205991906, -1);
		
		case -1075685676:
			return func_45(1623028892, 453432689, -1);
		
		case 2024373456:
			return func_45(1623028892, 736523883, -1);
		
		case 961495388:
			return func_45(1623028892, -1074790547, -1);
		
		case -86904375:
			return func_45(1623028892, -2084633992, -1);
		
		case -608341376:
			return func_45(1623028892, 2144741730, -1);
		
		case 177293209:
			return func_45(1623028892, 205991906, -1);
		
		case 487013001:
			return func_45(1623028892, 487013001, -1);
		
		case -1063057011:
			return func_45(1623028892, -1063057011, -1);
		
		case -1076751822:
			return func_45(1623028892, -1076751822, -1);
		
		case -952879014:
			return func_45(1623028892, -952879014, -1);
		
		case -1045183535:
			return func_45(1623028892, -1045183535, -1);
		
		case 2132975508:
			return func_45(1623028892, 2132975508, -1);
		
		case 1432025498:
			return func_45(1623028892, 487013001, -1);
		
		case -1768145561:
			return func_45(1623028892, -1063057011, -1);
		
		case -2009644972:
			return func_45(1623028892, -1076751822, -1);
		
		case 1785463520:
			return func_45(1623028892, -952879014, -1);
		
		case -879347409:
			return func_45(1623028892, -1045183535, -1);
		
		case -2066285827:
			return func_45(1623028892, 2132975508, -1);
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
		case 736523883:
		case -1074790547:
		case -2084633992:
		case 2144741730:
		case 205991906:
		case 487013001:
		case -1063057011:
		case -1076751822:
		case -952879014:
		case -1045183535:
		case 2132975508:
			return 1623028892;
		
		default:
	}
	return 0;
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_86(iParam2);
	if (iVar0 != 0)
	{
		unk_0x0E8D2351A8BAC879(iParam0, iParam1, iVar0, iParam3);
	}
}

void func_109(char* sParam0, int iParam1, int iParam2)
{
	*iParam1 = 0;
	while (func_115(sParam0, iParam2, iVar0, 0))
	{
		uVar1 = func_113(iParam2, iVar0);
		if (func_110(uVar1, -1))
		{
			*iParam1 = iVar0;
		}
		iVar0++;
	}
}

bool func_110(int iParam0, int iParam1)
{
	if (func_53())
	{
		return 0;
	}
	iVar0 = func_111(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

var func_111(var uParam0, int iParam1)
{
	uVar0 = func_31(func_112(uParam0), iParam1, 0);
	return uVar0;
}

int func_112(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	if ((func_35() == 0 || func_51() == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 705;
				break;
			
			case 1:
				return 706;
				break;
			
			case 2:
				return 707;
				break;
			
			case 3:
				return 708;
				break;
			
			case 4:
				return 709;
				break;
			
			case 5:
				return 710;
				break;
			
			case 6:
				return 711;
				break;
			
			case 7:
				return 712;
				break;
			
			case 8:
				return 713;
				break;
			
			case 9:
				return 2054;
				break;
			
			case 10:
				return 2066;
				break;
			
			case 11:
				return 2093;
				break;
			
			case 12:
				return 2429;
				break;
			
			case 13:
				return 2948;
				break;
			
			case 14:
				return 5511;
				break;
			
			case 15:
				return 5515;
				break;
			
			case 16:
				return 5519;
				break;
			
			case 17:
				return 5523;
				break;
			
			case 18:
				return 5527;
				break;
			
			case 19:
				return 5531;
			
			case 20:
				return 5591;
			
			case 21:
				return 5595;
			
			case 22:
				return 5599;
			
			case 23:
				return 5603;
			
			case 24:
				return 5607;
			
			case 25:
				return 5611;
				break;
			
			case 26:
				return 5615;
				break;
			
			case 27:
				return 5636;
				break;
			
			case 28:
				return 5640;
				break;
			
			case 29:
				return 5644;
				break;
			
			case 30:
				return 5648;
				break;
			
			case 31:
				return 5652;
				break;
			
			case 32:
				return 5656;
				break;
			
			case 33:
				return 6466;
				break;
			
			case 34:
				return 6470;
				break;
			
			case 35:
				return 6474;
				break;
			
			case 36:
				return 6478;
				break;
			
			case 37:
				return 6482;
				break;
			
			case 38:
				return 6486;
				break;
			
			case 39:
				return 6490;
				break;
			}
	}
	return 11511;
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1075685676:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 626;
					break;
				
				case 2:
					return 627;
					break;
				
				case 3:
					return 628;
					break;
				
				case 4:
					return 629;
					break;
				
				case 5:
					return 630;
					break;
				
				case 6:
					return 631;
					break;
				
				case 7:
					return 632;
					break;
				
				case 8:
					return 633;
					break;
				
				case 9:
					return 634;
					break;
				
				case 10:
					return 635;
					break;
				
				case 11:
					return 636;
					break;
				
				case 12:
					return 637;
					break;
				
				case 13:
					return 638;
					break;
				
				case 14:
					return 639;
					break;
				
				case 15:
					return 640;
					break;
				
				case 16:
					return 641;
					break;
				
				case 17:
					return 642;
					break;
				
				case 18:
					return 643;
					break;
				
				case 19:
					return 644;
					break;
				
				case 20:
					return 645;
					break;
				
				case 21:
					return 646;
					break;
				
				case 22:
					return 647;
					break;
				
				case 23:
					return 648;
					break;
				
				case 24:
					return 649;
					break;
				
				case 25:
					return 650;
					break;
				
				case 26:
					return 651;
					break;
				
				case 27:
					return 652;
					break;
				
				case 28:
					return 653;
					break;
				
				case 29:
					return 654;
					break;
				
				case 30:
					return 655;
					break;
				
				case 31:
					return 656;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 657;
					break;
				
				case 2:
					return 658;
					break;
				
				case 3:
					return 659;
					break;
				
				case 4:
					return 660;
					break;
				
				case 5:
					return 661;
					break;
				
				case 6:
					return 662;
					break;
				
				case 7:
					return 663;
					break;
				
				case 8:
					return 664;
					break;
				
				case 9:
					return 665;
					break;
				
				case 10:
					return 666;
					break;
				
				case 11:
					return 667;
					break;
				
				case 12:
					return 668;
					break;
				
				case 13:
					return 669;
					break;
				
				case 14:
					return 670;
					break;
				
				case 15:
					return 671;
					break;
				
				case 16:
					return 672;
					break;
				
				case 17:
					return 673;
					break;
				
				case 18:
					return 674;
					break;
				
				case 19:
					return 675;
					break;
				
				case 20:
					return 676;
					break;
				
				case 21:
					return 677;
					break;
				
				case 22:
					return 678;
					break;
				
				case 23:
					return 679;
					break;
				
				case 24:
					return 680;
					break;
				
				case 25:
					return 681;
					break;
				
				case 26:
					return 682;
					break;
				
				case 27:
					return 683;
					break;
				
				case 28:
					return 684;
					break;
				
				case 29:
					return 685;
					break;
				
				case 30:
					return 686;
					break;
				
				case 31:
					return 687;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 688;
					break;
				
				case 2:
					return 689;
					break;
				
				case 3:
					return 690;
					break;
				
				case 4:
					return 691;
					break;
				
				case 5:
					return 692;
					break;
				
				case 6:
					return 693;
					break;
				
				case 7:
					return 694;
					break;
				
				case 8:
					return 695;
					break;
				
				case 9:
					return 696;
					break;
				
				case 10:
					return 697;
					break;
				
				case 11:
					return 698;
					break;
				
				case 12:
					return 699;
					break;
				
				case 13:
					return 700;
					break;
				
				case 14:
					return 701;
					break;
				
				case 15:
					return 702;
					break;
				
				case 16:
					return 703;
					break;
				
				case 17:
					return 704;
					break;
				
				case 18:
					return 705;
					break;
				
				case 19:
					return 706;
					break;
				
				case 20:
					return 707;
					break;
				
				case 21:
					return 708;
					break;
				
				case 22:
					return 709;
					break;
				
				case 23:
					return 710;
					break;
				
				case 24:
					return 711;
					break;
				
				case 25:
					return 712;
					break;
				
				case 26:
					return 713;
					break;
				
				case 27:
					return 714;
					break;
				
				case 28:
					return 715;
					break;
				
				case 29:
					return 716;
					break;
				
				case 30:
					return 717;
					break;
				
				case 31:
					return 718;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 719;
					break;
				
				case 2:
					return 720;
					break;
				
				case 3:
					return 721;
					break;
				
				case 4:
					return 722;
					break;
				
				case 5:
					return 723;
					break;
				
				case 6:
					return 724;
					break;
				
				case 7:
					return 725;
					break;
				
				case 8:
					return 726;
					break;
				
				case 9:
					return 727;
					break;
				
				case 10:
					return 728;
					break;
				
				case 11:
					return 729;
					break;
				
				case 12:
					return 730;
					break;
				
				case 13:
					return 731;
					break;
				
				case 14:
					return 732;
					break;
				
				case 15:
					return 733;
					break;
				
				case 16:
					return 734;
					break;
				
				case 17:
					return 735;
					break;
				
				case 18:
					return 736;
					break;
				
				case 19:
					return 737;
					break;
				
				case 20:
					return 738;
					break;
				
				case 21:
					return 739;
					break;
				
				case 22:
					return 740;
					break;
				
				case 23:
					return 741;
					break;
				
				case 24:
					return 742;
					break;
				
				case 25:
					return 743;
					break;
				
				case 26:
					return 744;
					break;
				
				case 27:
					return 745;
					break;
				
				case 28:
					return 746;
					break;
				
				case 29:
					return 747;
					break;
				
				case 30:
					return 748;
					break;
				
				case 31:
					return 749;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 750;
					break;
				
				case 2:
					return 751;
					break;
				
				case 3:
					return 752;
					break;
				
				case 4:
					return 753;
					break;
				
				case 5:
					return 754;
					break;
				
				case 6:
					return 755;
					break;
				
				case 7:
					return 756;
					break;
				
				case 8:
					return 757;
					break;
				
				case 9:
					return 758;
					break;
				
				case 10:
					return 759;
					break;
				
				case 11:
					return 760;
					break;
				
				case 12:
					return 761;
					break;
				
				case 13:
					return 762;
					break;
				
				case 14:
					return 763;
					break;
				
				case 15:
					return 764;
					break;
				
				case 16:
					return 765;
					break;
				
				case 17:
					return 766;
					break;
				
				case 18:
					return 767;
					break;
				
				case 19:
					return 768;
					break;
				
				case 20:
					return 769;
					break;
				
				case 21:
					return 770;
					break;
				
				case 22:
					return 771;
					break;
				
				case 23:
					return 772;
					break;
				
				case 24:
					return 773;
					break;
				
				case 25:
					return 774;
					break;
				
				case 26:
					return 775;
					break;
				
				case 27:
					return 776;
					break;
				
				case 28:
					return 777;
					break;
				
				case 29:
					return 778;
					break;
				
				case 30:
					return 779;
					break;
				
				case 31:
					return 780;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 781;
					break;
				
				case 2:
					return 782;
					break;
				
				case 3:
					return 783;
					break;
				
				case 4:
					return 784;
					break;
				
				case 5:
					return 785;
					break;
				
				case 6:
					return 786;
					break;
				
				case 7:
					return 787;
					break;
				
				case 8:
					return 788;
					break;
				
				case 9:
					return 789;
					break;
				
				case 10:
					return 790;
					break;
				
				case 11:
					return 791;
					break;
				
				case 12:
					return 792;
					break;
				
				case 13:
					return 793;
					break;
				
				case 14:
					return 794;
					break;
				
				case 15:
					return 795;
					break;
				
				case 16:
					return 796;
					break;
				
				case 17:
					return 797;
					break;
				
				case 18:
					return 798;
					break;
				
				case 19:
					return 799;
					break;
				
				case 20:
					return 800;
					break;
				
				case 21:
					return 801;
					break;
				
				case 22:
					return 802;
					break;
				
				case 23:
					return 803;
					break;
				
				case 24:
					return 804;
					break;
				
				case 25:
					return 805;
					break;
				
				case 26:
					return 806;
					break;
				
				case 27:
					return 807;
					break;
				
				case 28:
					return 808;
					break;
				
				case 29:
					return 809;
					break;
				
				case 30:
					return 810;
					break;
				
				case 31:
					return 811;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 998;
					break;
				
				case 2:
					return 999;
					break;
				
				case 3:
					return 1000;
					break;
				
				case 4:
					return 1001;
					break;
				
				case 5:
					return 1002;
					break;
				
				case 6:
					return 1003;
					break;
				
				case 7:
					return 1004;
					break;
				
				case 8:
					return 1005;
					break;
				
				case 9:
					return 1006;
					break;
				
				case 10:
					return 1007;
					break;
				
				case 11:
					return 1008;
					break;
				
				case 12:
					return 1009;
					break;
				
				case 13:
					return 1010;
					break;
				
				case 14:
					return 1011;
					break;
				
				case 15:
					return 1012;
					break;
				
				case 16:
					return 1013;
					break;
				
				case 17:
					return 1014;
					break;
				
				case 18:
					return 1015;
					break;
				
				case 19:
					return 1016;
					break;
				
				case 20:
					return 1017;
					break;
				
				case 21:
					return 1018;
					break;
				
				case 22:
					return 1019;
					break;
				
				case 23:
					return 1020;
					break;
				
				case 24:
					return 1021;
					break;
				
				case 25:
					return 1022;
					break;
				
				case 26:
					return 1023;
					break;
				
				case 27:
					return 1024;
					break;
				
				case 28:
					return 1025;
					break;
				
				case 29:
					return 1026;
					break;
				
				case 30:
					return 1027;
					break;
				
				case 31:
					return 1028;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1029;
					break;
				
				case 2:
					return 1030;
					break;
				
				case 3:
					return 1031;
					break;
				
				case 4:
					return 1032;
					break;
				
				case 5:
					return 1033;
					break;
				
				case 6:
					return 1034;
					break;
				
				case 7:
					return 1035;
					break;
				
				case 8:
					return 1036;
					break;
				
				case 9:
					return 1037;
					break;
				
				case 10:
					return 1038;
					break;
				
				case 11:
					return 1039;
					break;
				
				case 12:
					return 1040;
					break;
				
				case 13:
					return 1041;
					break;
				
				case 14:
					return 1042;
					break;
				
				case 15:
					return 1043;
					break;
				
				case 16:
					return 1044;
					break;
				
				case 17:
					return 1045;
					break;
				
				case 18:
					return 1046;
					break;
				
				case 19:
					return 1047;
					break;
				
				case 20:
					return 1048;
					break;
				
				case 21:
					return 1049;
					break;
				
				case 22:
					return 1050;
					break;
				
				case 23:
					return 1051;
					break;
				
				case 24:
					return 1052;
					break;
				
				case 25:
					return 1053;
					break;
				
				case 26:
					return 1054;
					break;
				
				case 27:
					return 1055;
					break;
				
				case 28:
					return 1056;
					break;
				
				case 29:
					return 1057;
					break;
				
				case 30:
					return 1058;
					break;
				
				case 31:
					return 1059;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1060;
					break;
				
				case 2:
					return 1061;
					break;
				
				case 3:
					return 1062;
					break;
				
				case 4:
					return 1063;
					break;
				
				case 5:
					return 1064;
					break;
				
				case 6:
					return 1065;
					break;
				
				case 7:
					return 1066;
					break;
				
				case 8:
					return 1067;
					break;
				
				case 9:
					return 1068;
					break;
				
				case 10:
					return 1069;
					break;
				
				case 11:
					return 1070;
					break;
				
				case 12:
					return 1071;
					break;
				
				case 13:
					return 1072;
					break;
				
				case 14:
					return 1073;
					break;
				
				case 15:
					return 1074;
					break;
				
				case 16:
					return 1075;
					break;
				
				case 17:
					return 1076;
					break;
				
				case 18:
					return 1077;
					break;
				
				case 19:
					return 1078;
					break;
				
				case 20:
					return 1079;
					break;
				
				case 21:
					return 1080;
					break;
				
				case 22:
					return 1081;
					break;
				
				case 23:
					return 1082;
					break;
				
				case 24:
					return 1083;
					break;
				
				case 25:
					return 1084;
					break;
				
				case 26:
					return 1085;
					break;
				
				case 27:
					return 1086;
					break;
				
				case 28:
					return 1087;
					break;
				
				case 29:
					return 1088;
					break;
				
				case 30:
					return 1089;
					break;
				
				case 31:
					return 1090;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1153;
					break;
				
				case 2:
					return 1154;
					break;
				
				case 3:
					return 1155;
					break;
				
				case 4:
					return 1156;
					break;
				
				case 5:
					return 1157;
					break;
				
				case 6:
					return 1158;
					break;
				
				case 7:
					return 1159;
					break;
				
				case 8:
					return 1160;
					break;
				
				case 9:
					return 1161;
					break;
				
				case 10:
					return 1162;
					break;
				
				case 11:
					return 1163;
					break;
				
				case 12:
					return 1164;
					break;
				
				case 13:
					return 1165;
					break;
				
				case 14:
					return 1166;
					break;
				
				case 15:
					return 1167;
					break;
				
				case 16:
					return 1168;
					break;
				
				case 17:
					return 1169;
					break;
				
				case 18:
					return 1170;
					break;
				
				case 19:
					return 1171;
					break;
				
				case 20:
					return 1172;
					break;
				
				case 21:
					return 1173;
					break;
				
				case 22:
					return 1174;
					break;
				
				case 23:
					return 1175;
					break;
				
				case 24:
					return 1176;
					break;
				
				case 25:
					return 1177;
					break;
				
				case 26:
					return 1178;
					break;
				
				case 27:
					return 1179;
					break;
				
				case 28:
					return 1180;
					break;
				
				case 29:
					return 1181;
					break;
				
				case 30:
					return 1182;
					break;
				
				case 31:
					return 1183;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1122;
					break;
				
				case 2:
					return 1123;
					break;
				
				case 3:
					return 1124;
					break;
				
				case 4:
					return 1125;
					break;
				
				case 5:
					return 1126;
					break;
				
				case 6:
					return 1127;
					break;
				
				case 7:
					return 1128;
					break;
				
				case 8:
					return 1129;
					break;
				
				case 9:
					return 1130;
					break;
				
				case 10:
					return 1131;
					break;
				
				case 11:
					return 1132;
					break;
				
				case 12:
					return 1133;
					break;
				
				case 13:
					return 1134;
					break;
				
				case 14:
					return 1135;
					break;
				
				case 15:
					return 1136;
					break;
				
				case 16:
					return 1137;
					break;
				
				case 17:
					return 1138;
					break;
				
				case 18:
					return 1139;
					break;
				
				case 19:
					return 1140;
					break;
				
				case 20:
					return 1141;
					break;
				
				case 21:
					return 1142;
					break;
				
				case 22:
					return 1143;
					break;
				
				case 23:
					return 1144;
					break;
				
				case 24:
					return 1145;
					break;
				
				case 25:
					return 1146;
					break;
				
				case 26:
					return 1147;
					break;
				
				case 27:
					return 1148;
					break;
				
				case 28:
					return 1149;
					break;
				
				case 29:
					return 1150;
					break;
				
				case 30:
					return 1151;
					break;
				
				case 31:
					return 1152;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1091;
					break;
				
				case 2:
					return 1092;
					break;
				
				case 3:
					return 1093;
					break;
				
				case 4:
					return 1094;
					break;
				
				case 5:
					return 1095;
					break;
				
				case 6:
					return 1096;
					break;
				
				case 7:
					return 1097;
					break;
				
				case 8:
					return 1098;
					break;
				
				case 9:
					return 1099;
					break;
				
				case 10:
					return 1100;
					break;
				
				case 11:
					return 1101;
					break;
				
				case 12:
					return 1102;
					break;
				
				case 13:
					return 1103;
					break;
				
				case 14:
					return 1104;
					break;
				
				case 15:
					return 1105;
					break;
				
				case 16:
					return 1106;
					break;
				
				case 17:
					return 1107;
					break;
				
				case 18:
					return 1108;
					break;
				
				case 19:
					return 1109;
					break;
				
				case 20:
					return 1110;
					break;
				
				case 21:
					return 1111;
					break;
				
				case 22:
					return 1112;
					break;
				
				case 23:
					return 1113;
					break;
				
				case 24:
					return 1114;
					break;
				
				case 25:
					return 1115;
					break;
				
				case 26:
					return 1116;
					break;
				
				case 27:
					return 1117;
					break;
				
				case 28:
					return 1118;
					break;
				
				case 29:
					return 1119;
					break;
				
				case 30:
					return 1120;
					break;
				
				case 31:
					return 1121;
					break;
			}
			break;
	}
	return 0;
}

void func_114(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_86(iParam1);
	if (iVar0 != 0)
	{
		unk_0x5CF4867E995DC6C6(*iParam0, iVar0, iParam2);
	}
}

bool func_115(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	func_120(sParam0, "", "", -1, -1, 6);
	if (func_173(iParam1))
	{
		switch (iParam2)
		{
			case 0:
				func_120(sParam0, "WCT_C_TINT_0", "", 5000, 0, 6);
				break;
			
			case 1:
				func_120(sParam0, "WCT_C_TINT_1", "", 5000, 1, 6);
				break;
			
			case 2:
				func_120(sParam0, "WCT_C_TINT_2", "", 5000, 2, 6);
				break;
			
			case 3:
				func_120(sParam0, "WCT_C_TINT_3", "", 5000, 3, 6);
				break;
			
			case 4:
				func_120(sParam0, "WCT_C_TINT_4", "", 5000, 4, 6);
				break;
			
			case 5:
				func_120(sParam0, "WCT_C_TINT_5", "", 5000, 5, 6);
				break;
			
			case 6:
				func_120(sParam0, "WCT_C_TINT_6", "", 5000, 6, 6);
				break;
			
			case 7:
				func_120(sParam0, "WCT_C_TINT_7", "", 5000, 7, 6);
				break;
			
			case 8:
				func_120(sParam0, "WCT_C_TINT_8", "", 5000, 8, 6);
				break;
			
			case 9:
				func_120(sParam0, "WCT_C_TINT_9", "", 5000, 9, 6);
				break;
			
			case 10:
				func_120(sParam0, "WCT_C_TINT_10", "", 5000, 10, 6);
				break;
			
			case 11:
				func_120(sParam0, "WCT_C_TINT_11", "", 5000, 11, 6);
				break;
			
			case 12:
				func_120(sParam0, "WCT_C_TINT_12", "", 5000, 12, 6);
				break;
			
			case 13:
				func_120(sParam0, "WCT_C_TINT_13", "", 5000, 13, 6);
				break;
			
			case 14:
				func_120(sParam0, "WCT_C_TINT_14", "", 5000, 14, 6);
				break;
			
			case 15:
				func_120(sParam0, "WCT_C_TINT_15", "", 5000, 15, 6);
				break;
			
			case 16:
				func_120(sParam0, "WCT_C_TINT_16", "", 5000, 16, 6);
				break;
			
			case 17:
				func_120(sParam0, "WCT_C_TINT_17", "", 5000, 17, 6);
				break;
			
			case 18:
				func_120(sParam0, "WCT_C_TINT_18", "", 5000, 18, 6);
				break;
			
			case 19:
				func_120(sParam0, "WCT_C_TINT_19", "", 5000, 19, 6);
				break;
			
			case 20:
				func_120(sParam0, "WCT_C_TINT_20", "", 5000, 20, 6);
				break;
			
			case 21:
				func_120(sParam0, "WCT_C_TINT_21", "", 5000, 21, 6);
				break;
			
			case 22:
				func_120(sParam0, "WCT_C_TINT_22", "", 5000, 22, 6);
				break;
			
			case 23:
				func_120(sParam0, "WCT_C_TINT_23", "", 5000, 23, 6);
				break;
			
			case 24:
				func_120(sParam0, "WCT_C_TINT_24", "", 5000, 24, 6);
				break;
			
			case 25:
				func_120(sParam0, "WCT_C_TINT_25", "", 5000, 25, 6);
				break;
			
			case 26:
				func_120(sParam0, "WCT_C_TINT_26", "", 5000, 26, 6);
				break;
			
			case 27:
				func_120(sParam0, "WCT_C_TINT_27", "", 5000, 27, 6);
				break;
			
			case 28:
				func_120(sParam0, "WCT_C_TINT_28", "", 5000, 28, 6);
				break;
			
			case 29:
				func_120(sParam0, "WCT_C_TINT_29", "", 5000, 29, 6);
				break;
			
			case 30:
				func_120(sParam0, "WCT_C_TINT_30", "", 5000, 30, 6);
				break;
			
			case 31:
				func_120(sParam0, "WCT_C_TINT_31", "", 5000, 31, 6);
				break;
		}
		if (iParam3 && sParam0->f_8 != -1)
		{
			switch (iParam2)
			{
				case 0:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 1:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 2:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 3:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 4:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 5:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 6:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 7:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 8:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 9:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 10:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 11:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 12:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 13:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 14:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 15:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 16:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 17:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 18:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 19:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 20:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 21:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 22:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 23:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 24:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 25:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 26:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 27:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 28:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 29:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 30:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				
				case 31:
					sParam0->f_8 = Global_262145.f_20863;
					break;
				}
			}
	}
	if (unk_0x8CD06866876216F2() && func_118())
	{
		iVar16 = 2;
		func_116(&sVar0, *sParam0, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, iVar16, func_57(iParam1), func_117(iParam1), -1, 0, 0);
		if (unk_0x437ABF4F514F6471(&sVar0))
		{
			sParam0->f_8 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar0), 1671640801, 1);
		}
	}
	return sParam0->f_8 != -1;
}

void func_116(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (unk_0x12AB0310C2281427(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam5), 16);
				if (unk_0xEA6BC48857E0AC4C(&cParam1) || unk_0x12AB0310C2281427(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case -757735410:
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case 1790834270:
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case -2022483795:
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam5), 16);
						if (unk_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 2;
			break;
	}
	return -1;
}

int func_118()
{
	if (unk_0x8CD06866876216F2() && func_119())
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_120(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_121(int iParam0)
{
	if (func_173(iParam0))
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	if (func_173(iParam2) && func_123(iParam0, iParam1, iParam2, 962500902))
	{
		return 1;
	}
	return 0;
}

int func_123(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_89(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_178(&Var0, iParam2, iVar7, 0))
	{
		if (Var0.f_4 == iParam3)
		{
			if (!Var0.f_1)
			{
				if (func_45(Var0, iParam2, -1))
				{
					*uParam1 = Var0;
					return 1;
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	if (iParam0 == -72657034)
	{
		return iParam1;
	}
	if (iParam0 == -61829581)
	{
		return iParam1;
	}
	if (unk_0x8CD06866876216F2())
	{
		return iParam1;
	}
	else if (func_126() || func_125())
	{
		return iParam1;
	}
	else if (iParam1 == 0)
	{
		return 0;
	}
	else if (iParam1 == 1)
	{
		return 1;
	}
	else if (iParam1 == 2)
	{
		return 4;
	}
	return -1;
}

int func_125()
{
	return 1;
}

int func_126()
{
	return 1;
}

bool func_127(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	func_166(sParam0, "", "", -1, -1, 0);
	switch (iParam1)
	{
		case -72657034:
			if (unk_0x8CD06866876216F2())
			{
				switch (iParam2)
				{
					case 0:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_166(sParam0, "PS_BAG_47", "PD_CONTENT_11", 9000, 47, 1);
						break;
					
					case 2:
						func_166(sParam0, "PS_BAG_49", "PD_CONTENT_11", 9000, 49, 1);
						break;
					
					case 3:
						func_166(sParam0, "PS_BAG_51", "PD_CONTENT_11", 9000, 51, 1);
						break;
					
					case 4:
						func_166(sParam0, "PS_BAG_48", "PD_CONTENT_11", 9000, 48, 1);
						break;
					
					case 5:
						func_166(sParam0, "PS_BAG_50", "PD_CONTENT_11", 9000, 50, 1);
						break;
					
					case 6:
						func_166(sParam0, "PS_BAG_13", "PD_CONTENT_9", 0, 13, 1);
						break;
					
					case 7:
						func_166(sParam0, "PS_BAG_22", "PD_CONTENT_9", 15000, 22, 1);
						break;
					
					case 8:
						func_166(sParam0, "PS_BAG_2", "PD_CONTENT_9", 15000, 2, 1);
						break;
					
					case 9:
						func_166(sParam0, "PS_BAG_20", "PD_CONTENT_9", 15000, 20, 1);
						break;
					
					case 10:
						func_166(sParam0, "PS_BAG_18", "PD_CONTENT_9", 15000, 18, 1);
						break;
					
					case 11:
						func_166(sParam0, "PS_BAG_3", "PD_CONTENT_9", 15000, 3, 1);
						break;
					
					case 12:
						func_166(sParam0, "PS_BAG_5", "PD_CONTENT_9", 15000, 5, 1);
						break;
					
					case 13:
						func_166(sParam0, "PS_BAG_31", "PD_CONTENT_10", 15000, 31, 1);
						break;
					
					case 14:
						func_166(sParam0, "PS_BAG_15", "PD_CONTENT_9", 15000, 15, 1);
						break;
					
					case 15:
						func_166(sParam0, "PS_BAG_32", "PD_CONTENT_10", 15000, 32, 1);
						break;
					
					case 16:
						func_166(sParam0, "PS_BAG_33", "PD_CONTENT_10", 15000, 33, 1);
						break;
					
					case 17:
						func_166(sParam0, "PS_BAG_28", "PD_CONTENT_10", 15000, 28, 1);
						break;
					
					case 18:
						func_166(sParam0, "PS_BAG_26", "PD_CONTENT_9", 15000, 26, 1);
						break;
					
					case 19:
						func_166(sParam0, "PS_BAG_27", "PD_CONTENT_10", 15000, 27, 1);
						break;
					
					case 20:
						func_166(sParam0, "PS_BAG_6", "PD_CONTENT_9", 15000, 6, 1);
						break;
					
					case 21:
						func_166(sParam0, "PS_BAG_7", "PD_CONTENT_9", 15000, 7, 1);
						break;
					
					case 22:
						func_166(sParam0, "PS_BAG_34", "PD_CONTENT_10", 15000, 34, 1);
						break;
					
					case 23:
						func_166(sParam0, "PS_BAG_62", "PD_CONTENT_34", 15000, 62, 1);
						break;
					
					case 24:
						func_166(sParam0, "PS_BAG_24", "PD_CONTENT_9", 15000, 24, 1);
						break;
					
					case 25:
						func_166(sParam0, "PS_BAG_46", "PD_CONTENT_10", 15000, 46, 1);
						break;
					
					case 26:
						func_166(sParam0, "PS_BAG_11", "PD_CONTENT_9", 15000, 11, 1);
						break;
					
					case 27:
						func_166(sParam0, "PS_BAG_14", "PD_CONTENT_9", 15000, 14, 1);
						break;
					
					case 28:
						func_166(sParam0, "PS_BAG_8", "PD_CONTENT_9", 15000, 8, 1);
						break;
					
					case 29:
						func_166(sParam0, "PS_BAG_35", "PD_CONTENT_10", 15000, 35, 1);
						break;
					
					case 30:
						func_166(sParam0, "PS_BAG_36", "PD_CONTENT_10", 15000, 36, 1);
						break;
					
					case 31:
						func_166(sParam0, "PS_BAG_19", "PD_CONTENT_9", 15000, 19, 1);
						break;
					
					case 32:
						func_166(sParam0, "PS_BAG_29", "PD_CONTENT_10", 15000, 29, 1);
						break;
					
					case 33:
						func_166(sParam0, "PS_BAG_37", "PD_CONTENT_10", 15000, 37, 1);
						break;
					
					case 34:
						func_166(sParam0, "PS_BAG_38", "PD_CONTENT_10", 15000, 38, 1);
						break;
					
					case 35:
						func_166(sParam0, "PS_BAG_16", "PD_CONTENT_9", 15000, 16, 1);
						break;
					
					case 36:
						func_166(sParam0, "PS_BAG_63", "PD_CONTENT_34", 15000, 63, 1);
						break;
					
					case 37:
						func_166(sParam0, "PS_BAG_45", "PD_CONTENT_10", 15000, 45, 1);
						break;
					
					case 38:
						func_166(sParam0, "PS_BAG_39", "PD_CONTENT_10", 15000, 39, 1);
						break;
					
					case 39:
						func_166(sParam0, "PS_BAG_30", "PD_CONTENT_10", 15000, 30, 1);
						break;
					
					case 40:
						func_166(sParam0, "PS_BAG_40", "PD_CONTENT_10", 15000, 40, 1);
						break;
					
					case 41:
						func_166(sParam0, "PS_BAG_21", "PD_CONTENT_9", 15000, 21, 1);
						break;
					
					case 42:
						func_166(sParam0, "PS_BAG_9", "PD_CONTENT_9", 15000, 9, 1);
						break;
					
					case 43:
						func_166(sParam0, "PS_BAG_41", "PD_CONTENT_10", 15000, 41, 1);
						break;
					
					case 44:
						func_166(sParam0, "PS_BAG_42", "PD_CONTENT_10", 15000, 42, 1);
						break;
					
					case 45:
						func_166(sParam0, "PS_BAG_43", "PD_CONTENT_10", 15000, 43, 1);
						break;
					
					case 46:
						func_166(sParam0, "PS_BAG_44", "PD_CONTENT_10", 15000, 44, 1);
						break;
					
					case 47:
						func_166(sParam0, "PS_BAG_4", "PD_CONTENT_9", 15000, 4, 1);
						break;
					
					case 48:
						func_166(sParam0, "PS_BAG_17", "PD_CONTENT_9", 15000, 17, 1);
						break;
					
					case 49:
						func_166(sParam0, "PS_BAG_12", "PD_CONTENT_9", 15000, 12, 1);
						break;
					
					case 50:
						func_166(sParam0, "PS_BAG_23", "PD_CONTENT_9", 15000, 23, 1);
						break;
					
					case 51:
						func_166(sParam0, "PS_BAG_10", "PD_CONTENT_9", 15000, 10, 1);
						break;
					
					case 52:
						func_166(sParam0, "PS_BAG_1", "PD_CONTENT_9", 15000, 1, 1);
						break;
					
					case 53:
						func_166(sParam0, "PS_BAG_25", "PD_CONTENT_9", 15000, 25, 1);
						break;
					
					case 54:
						func_166(sParam0, "", "", 0, 52, 1);
						break;
					
					case 55:
						func_166(sParam0, "", "", 0, 53, 1);
						break;
					
					case 56:
						func_166(sParam0, "", "", 0, 54, 1);
						break;
					
					case 57:
						func_166(sParam0, "", "", 0, 55, 1);
						break;
					
					case 58:
						func_166(sParam0, "", "", 0, 56, 1);
						break;
					
					case 59:
						func_166(sParam0, "", "", 0, 57, 1);
						break;
					
					case 60:
						func_166(sParam0, "", "", 0, 58, 1);
						break;
					
					case 61:
						func_166(sParam0, "", "", 0, 59, 1);
						break;
					
					case 62:
						func_166(sParam0, "", "", 0, 60, 1);
						break;
					
					case 63:
						func_166(sParam0, "", "", 0, 61, 1);
						break;
					
					case 64:
						func_166(sParam0, "PS_CAN_0", "PSD_CAN_0", 21500, 8, 2);
						break;
					
					case 65:
						func_166(sParam0, "PS_CAN_1", "PSD_CAN_1", 22100, 9, 2);
						break;
					
					case 66:
						func_166(sParam0, "PS_CAN_2", "PSD_CAN_2", 23900, 10, 2);
						break;
					
					case 67:
						func_166(sParam0, "PS_CAN_3", "PSD_CAN_3", 24800, 11, 2);
						break;
					
					case 68:
						func_166(sParam0, "PS_CAN_4", "PSD_CAN_4", 21000, 12, 2);
						break;
					
					case 69:
						func_166(sParam0, "PS_CAN_5", "PSD_CAN_5", 25000, 13, 2);
						break;
					
					case 70:
						func_166(sParam0, "PM_TINT5", "PD_TINT5", 18500, 5, 2);
						break;
					
					case 71:
						func_166(sParam0, "PM_TINT1", "PD_TINT1", 19250, 1, 2);
						break;
					
					case 72:
						func_166(sParam0, "PM_TINT2", "PD_TINT2", 18750, 2, 2);
						break;
					
					case 73:
						func_166(sParam0, "PM_TINT7", "PD_TINT7", 19000, 7, 2);
						break;
					
					case 74:
						func_166(sParam0, "PM_TINT4", "PD_TINT4", 12500, 4, 2);
						break;
					
					case 75:
						func_166(sParam0, "PM_TINT3", "PD_TINT3", 19500, 3, 2);
						break;
					
					case 76:
						func_166(sParam0, "PM_TINT0", "PD_TINT0", 19750, 0, 2);
						break;
					
					case 77:
						func_166(sParam0, "PM_TINT6", "PD_TINT6", 20000, 6, 2);
						break;
					
					case 78:
						func_166(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 10750, 8, 3);
						break;
					
					case 79:
						func_166(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 11050, 9, 3);
						break;
					
					case 80:
						func_166(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 11950, 10, 3);
						break;
					
					case 81:
						func_166(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 12400, 11, 3);
						break;
					
					case 82:
						func_166(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 10500, 12, 3);
						break;
					
					case 83:
						func_166(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 12500, 13, 3);
						break;
					
					case 84:
						func_166(sParam0, "PM_TINT5", "PD_TINT5_R", 9250, 5, 3);
						break;
					
					case 85:
						func_166(sParam0, "PM_TINT1", "PD_TINT1_R", 9625, 1, 3);
						break;
					
					case 86:
						func_166(sParam0, "PM_TINT2", "PD_TINT2_R", 9375, 2, 3);
						break;
					
					case 87:
						func_166(sParam0, "PM_TINT7", "PD_TINT7_R", 9500, 7, 3);
						break;
					
					case 88:
						func_166(sParam0, "PM_TINT4", "PD_TINT4_R", 6250, 4, 3);
						break;
					
					case 89:
						func_166(sParam0, "PM_TINT3", "PD_TINT3_R", 9750, 3, 3);
						break;
					
					case 90:
						func_166(sParam0, "PM_TINT0", "PD_TINT0_R", 9875, 0, 3);
						break;
					
					case 91:
						func_166(sParam0, "PM_TINT6", "PD_TINT6_R", 10000, 6, 3);
						break;
					
					case 92:
						func_166(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 93:
						func_166(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 94:
						func_166(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 95:
						func_166(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 96:
						func_166(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 97:
						func_166(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					
					case 98:
						func_166(sParam0, "PM_TINT14", "PD_TINT14", 25000, 6, 4);
						break;
					
					case 99:
						func_166(sParam0, "PM_TINT15", "PD_TINT15", 30000, 7, 4);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 2:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 3:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 4:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 5:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 6:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 7:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 8:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 9:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 10:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 11:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 12:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 13:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 14:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 15:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 16:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 17:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 18:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 19:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 20:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 21:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 22:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 23:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 24:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 25:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 26:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 27:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 28:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 29:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 30:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 31:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 32:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 33:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 34:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 35:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 36:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 37:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 38:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 39:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 40:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 41:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 42:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 43:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 44:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 45:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 46:
						func_166(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 47:
						func_166(sParam0, "PS_CAN_0", "PSD_CAN_0", 2750, 8, 2);
						break;
					
					case 48:
						func_166(sParam0, "PS_CAN_1", "PSD_CAN_1", 2750, 9, 2);
						break;
					
					case 49:
						func_166(sParam0, "PS_CAN_2", "PSD_CAN_2", 2750, 10, 2);
						break;
					
					case 50:
						func_166(sParam0, "PS_CAN_3", "PSD_CAN_3", 2750, 11, 2);
						break;
					
					case 51:
						func_166(sParam0, "PS_CAN_4", "PSD_CAN_4", 2750, 12, 2);
						break;
					
					case 52:
						func_166(sParam0, "PS_CAN_5", "PSD_CAN_5", 2750, 13, 2);
						break;
					
					case 53:
						func_166(sParam0, "PM_TINT5", "PD_TINT5", 250, 5, 2);
						break;
					
					case 54:
						func_166(sParam0, "PM_TINT1", "PD_TINT1", 500, 1, 2);
						break;
					
					case 55:
						func_166(sParam0, "PM_TINT2", "PD_TINT2", 1000, 2, 2);
						break;
					
					case 56:
						func_166(sParam0, "PM_TINT7", "PD_TINT7", 1250, 7, 2);
						break;
					
					case 57:
						func_166(sParam0, "PM_TINT4", "PD_TINT4", 1500, 4, 2);
						break;
					
					case 58:
						func_166(sParam0, "PM_TINT3", "PD_TINT3", 1750, 3, 2);
						break;
					
					case 59:
						func_166(sParam0, "PM_TINT0", "PD_TINT0", 2000, 0, 2);
						break;
					
					case 60:
						func_166(sParam0, "PM_TINT6", "PD_TINT6", 2500, 6, 2);
						break;
					
					case 61:
						func_166(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 1375, 8, 3);
						break;
					
					case 62:
						func_166(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 1375, 9, 3);
						break;
					
					case 63:
						func_166(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 1375, 10, 3);
						break;
					
					case 64:
						func_166(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 1375, 11, 3);
						break;
					
					case 65:
						func_166(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 1375, 12, 3);
						break;
					
					case 66:
						func_166(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 1375, 13, 3);
						break;
					
					case 67:
						func_166(sParam0, "PM_TINT5", "PD_TINT5_R", 125, 5, 3);
						break;
					
					case 68:
						func_166(sParam0, "PM_TINT1", "PD_TINT1_R", 250, 1, 3);
						break;
					
					case 69:
						func_166(sParam0, "PM_TINT2", "PD_TINT2_R", 500, 2, 3);
						break;
					
					case 70:
						func_166(sParam0, "PM_TINT7", "PD_TINT7_R", 625, 7, 3);
						break;
					
					case 71:
						func_166(sParam0, "PM_TINT4", "PD_TINT4_R", 750, 4, 3);
						break;
					
					case 72:
						func_166(sParam0, "PM_TINT3", "PD_TINT3_R", 875, 3, 3);
						break;
					
					case 73:
						func_166(sParam0, "PM_TINT0", "PD_TINT0_R", 1000, 0, 3);
						break;
					
					case 74:
						func_166(sParam0, "PM_TINT6", "PD_TINT6_R", 1250, 6, 3);
						break;
					
					case 75:
						func_166(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 76:
						func_166(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 77:
						func_166(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 78:
						func_166(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 79:
						func_166(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 80:
						func_166(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					}
			}
			break;
		
		case -656458692:
			break;
		
		case -1746263880:
			break;
		
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_166(sParam0, "RWT_TINT0", "", 0, 0, 0);
					break;
				
				case 1:
					func_166(sParam0, "RWT_TINT1", "", Global_262145.f_25726, 1, 0);
					break;
				
				case 2:
					func_166(sParam0, "RWT_TINT2", "", Global_262145.f_25727, 2, 0);
					break;
				
				case 3:
					func_166(sParam0, "RWT_TINT3", "", Global_262145.f_25728, 3, 0);
					break;
				
				case 4:
					func_166(sParam0, "RWT_TINT4", "", Global_262145.f_25729, 4, 0);
					break;
				
				case 5:
					func_166(sParam0, "RWT_TINT5", "", Global_262145.f_25730, 5, 0);
					break;
				
				case 6:
					func_166(sParam0, "RWT_TINT6", "", Global_262145.f_25731, 6, 0);
					break;
			}
			break;
		
		case 1198256469:
			switch (iParam2)
			{
				case 0:
					func_166(sParam0, "RWT_TINT7", "", 0, 0, 0);
					break;
				
				case 1:
					func_166(sParam0, "RWT_TINT1", "", Global_262145.f_25732, 1, 0);
					break;
				
				case 2:
					func_166(sParam0, "RWT_TINT2", "", Global_262145.f_25733, 2, 0);
					break;
				
				case 3:
					func_166(sParam0, "RWT_TINT3", "", Global_262145.f_25734, 3, 0);
					break;
				
				case 4:
					func_166(sParam0, "RWT_TINT4", "", Global_262145.f_25735, 4, 0);
					break;
				
				case 5:
					func_166(sParam0, "RWT_TINT5", "", Global_262145.f_25736, 5, 0);
					break;
				
				case 6:
					func_166(sParam0, "RWT_TINT6", "", Global_262145.f_25737, 6, 0);
					break;
			}
			break;
		
		case -1238556825:
			switch (iParam2)
			{
				case 0:
					func_166(sParam0, "RWT_TINT7", "", 0, 0, 0);
					break;
				
				case 1:
					func_166(sParam0, "RWT_TINT1", "", Global_262145.f_25738, 1, 0);
					break;
				
				case 2:
					func_166(sParam0, "RWT_TINT2", "", Global_262145.f_25739, 2, 0);
					break;
				
				case 3:
					func_166(sParam0, "RWT_TINT3", "", Global_262145.f_25740, 3, 0);
					break;
				
				case 4:
					func_166(sParam0, "RWT_TINT4", "", Global_262145.f_25741, 4, 0);
					break;
				
				case 5:
					func_166(sParam0, "RWT_TINT5", "", Global_262145.f_25742, 5, 0);
					break;
				
				case 6:
					func_166(sParam0, "RWT_TINT6", "", Global_262145.f_25743, 6, 0);
					break;
			}
			break;
		
		default:
			if (iParam1 == -61829581)
			{
				switch (iParam2)
				{
					case 0:
						func_166(sParam0, "FW_TINT0", "FWD_TYPE1", Global_262145.f_7799, 0, 5);
						break;
					
					case 1:
						func_166(sParam0, "FW_TINT1", "FWD_TYPE1", Global_262145.f_7799, 1, 5);
						break;
					
					case 2:
						func_166(sParam0, "FW_TINT2", "FWD_TYPE1", Global_262145.f_7799, 2, 5);
						break;
					
					case 3:
						func_166(sParam0, "FW_TINT3", "FWD_TYPE2", Global_262145.f_7800, 3, 5);
						break;
					
					case 4:
						func_166(sParam0, "FW_TINT4", "FWD_TYPE2", Global_262145.f_7800, 4, 5);
						break;
					
					case 5:
						func_166(sParam0, "FW_TINT5", "FWD_TYPE2", Global_262145.f_7800, 5, 5);
						break;
					
					case 6:
						func_166(sParam0, "FW_TINT6", "FWD_TYPE3", Global_262145.f_7801, 6, 5);
						break;
					
					case 7:
						func_166(sParam0, "FW_TINT7", "FWD_TYPE3", Global_262145.f_7801, 7, 5);
						break;
					
					case 8:
						func_166(sParam0, "FW_TINT8", "FWD_TYPE3", Global_262145.f_7801, 8, 5);
						break;
					
					case 9:
						func_166(sParam0, "FW_TINT9", "FWD_TYPE4", Global_262145.f_7802, 9, 5);
						break;
					
					case 10:
						func_166(sParam0, "FW_TINT10", "FWD_TYPE4", Global_262145.f_7802, 10, 5);
						break;
					
					case 11:
						func_166(sParam0, "FW_TINT11", "FWD_TYPE4", Global_262145.f_7802, 11, 5);
						break;
				}
			}
			else if (unk_0x8CD06866876216F2() || func_81(iParam1, &uVar0) != -1)
			{
				if (func_173(iParam1))
				{
					switch (iParam2)
					{
						case 0:
							func_166(sParam0, "WCT_TINT_0", "", 5000, 0, 0);
							break;
						
						case 1:
							func_166(sParam0, "WCT_TINT_1", "", 5000, 1, 0);
							break;
						
						case 2:
							func_166(sParam0, "WCT_TINT_2", "", 5000, 2, 0);
							break;
						
						case 3:
							func_166(sParam0, "WCT_TINT_3", "", 5000, 3, 0);
							break;
						
						case 4:
							func_166(sParam0, "WCT_TINT_4", "", 5000, 4, 0);
							break;
						
						case 5:
							func_166(sParam0, "WCT_TINT_5", "", 5000, 5, 0);
							break;
						
						case 6:
							func_166(sParam0, "WCT_TINT_6", "", 5000, 6, 0);
							break;
						
						case 7:
							func_166(sParam0, "WCT_TINT_7", "", 5000, 7, 0);
							break;
						
						case 8:
							func_166(sParam0, "WCT_TINT_8", "", 5000, 8, 0);
							break;
						
						case 9:
							func_166(sParam0, "WCT_TINT_9", "", 5000, 9, 0);
							break;
						
						case 10:
							func_166(sParam0, "WCT_TINT_10", "", 5000, 10, 0);
							break;
						
						case 11:
							func_166(sParam0, "WCT_TINT_11", "", 5000, 11, 0);
							break;
						
						case 12:
							func_166(sParam0, "WCT_TINT_12", "", 5000, 12, 0);
							break;
						
						case 13:
							func_166(sParam0, "WCT_TINT_13", "", 5000, 13, 0);
							break;
						
						case 14:
							func_166(sParam0, "WCT_TINT_14", "", 5000, 14, 0);
							break;
						
						case 15:
							func_166(sParam0, "WCT_TINT_15", "", 5000, 15, 0);
							break;
						
						case 16:
							func_166(sParam0, "WCT_TINT_16", "", 5000, 16, 0);
							break;
						
						case 17:
							func_166(sParam0, "WCT_TINT_17", "", 5000, 17, 0);
							break;
						
						case 18:
							func_166(sParam0, "WCT_TINT_18", "", 5000, 18, 0);
							break;
						
						case 19:
							func_166(sParam0, "WCT_TINT_19", "", 5000, 19, 0);
							break;
						
						case 20:
							func_166(sParam0, "WCT_TINT_20", "", 5000, 20, 0);
							break;
						
						case 21:
							func_166(sParam0, "WCT_TINT_21", "", 5000, 21, 0);
							break;
						
						case 22:
							func_166(sParam0, "WCT_TINT_22", "", 5000, 22, 0);
							break;
						
						case 23:
							func_166(sParam0, "WCT_TINT_23", "", 5000, 23, 0);
							break;
						
						case 24:
							func_166(sParam0, "WCT_TINT_24", "", 5000, 24, 0);
							break;
						
						case 25:
							func_166(sParam0, "WCT_TINT_25", "", 5000, 25, 0);
							break;
						
						case 26:
							func_166(sParam0, "WCT_TINT_26", "", 5000, 26, 0);
							break;
						
						case 27:
							func_166(sParam0, "WCT_TINT_27", "", 5000, 27, 0);
							break;
						
						case 28:
							func_166(sParam0, "WCT_TINT_28", "", 5000, 28, 0);
							break;
						
						case 29:
							func_166(sParam0, "WCT_TINT_29", "", 5000, 29, 0);
							break;
						
						case 30:
							func_166(sParam0, "WCT_TINT_30", "", 5000, 30, 0);
							break;
						
						case 31:
							func_166(sParam0, "WCT_TINT_31", "", 5000, 31, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							if ((((iParam1 == -1466123874 || iParam1 == 1198879012) || iParam1 == 2138347493) || iParam1 == -598887786) || iParam1 == -275439685)
							{
								func_166(sParam0, "WM_TINTDF", "", 500, 0, 0);
							}
							else
							{
								func_166(sParam0, "WM_TINT0", "", 500, 0, 0);
							}
							break;
						
						case 1:
							func_166(sParam0, "WM_TINT4", "", 5000, 4, 0);
							break;
						
						case 2:
							func_166(sParam0, "WM_TINT1", "", 5250, 1, 0);
							break;
						
						case 3:
							func_166(sParam0, "WM_TINT6", "", 5500, 6, 0);
							break;
						
						case 4:
							func_166(sParam0, "WM_TINT5", "", 5750, 5, 0);
							break;
						
						case 5:
							func_166(sParam0, "WM_TINT3", "", 7500, 3, 0);
							break;
						
						case 6:
							func_166(sParam0, "WM_TINT2", "", 10000, 2, 0);
							break;
						
						case 7:
							func_166(sParam0, "WM_TINT7", "", 12500, 7, 0);
							break;
						
						case 8:
							func_166(sParam0, "WM_TINT8", "", 15000, 8, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_166(sParam0, "WM_TINT0", "", 500, 0, 0);
						break;
					
					case 1:
						func_166(sParam0, "WM_TINT4", "", 100, 4, 0);
						break;
					
					case 2:
						func_166(sParam0, "WM_TINT1", "", 200, 1, 0);
						break;
					
					case 3:
						func_166(sParam0, "WM_TINT6", "", 400, 6, 0);
						break;
					
					case 4:
						func_166(sParam0, "WM_TINT5", "", 600, 5, 0);
						break;
					
					case 5:
						func_166(sParam0, "WM_TINT3", "", 800, 3, 0);
						break;
					
					case 6:
						func_166(sParam0, "WM_TINT2", "", 1000, 2, 0);
						break;
					
					case 7:
						func_166(sParam0, "WM_TINT7", "", 1500, 7, 0);
						break;
					
					case 8:
						func_166(sParam0, "WM_TINT8", "", 2000, 8, 0);
						break;
					}
			}
			break;
	}
	if (iParam3 && sParam0->f_8 != -1)
	{
		if (unk_0x8CD06866876216F2())
		{
			switch (iParam1)
			{
				case -72657034:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_8947;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_8949;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_8951;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_8948;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_8950;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_8093;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_8235;
							break;
						
						case 8:
							sParam0->f_8 = Global_262145.f_8088;
							break;
						
						case 9:
							sParam0->f_8 = Global_262145.f_8233;
							break;
						
						case 10:
							sParam0->f_8 = Global_262145.f_8231;
							break;
						
						case 11:
							sParam0->f_8 = Global_262145.f_8090;
							break;
						
						case 12:
							sParam0->f_8 = Global_262145.f_8084;
							break;
						
						case 13:
							sParam0->f_8 = Global_262145.f_8409;
							break;
						
						case 14:
							sParam0->f_8 = Global_262145.f_8228;
							break;
						
						case 15:
							sParam0->f_8 = Global_262145.f_8410;
							break;
						
						case 16:
							sParam0->f_8 = Global_262145.f_8411;
							break;
						
						case 17:
							sParam0->f_8 = Global_262145.f_8406;
							break;
						
						case 18:
							sParam0->f_8 = Global_262145.f_8239;
							break;
						
						case 19:
							sParam0->f_8 = Global_262145.f_8405;
							break;
						
						case 20:
							sParam0->f_8 = Global_262145.f_8085;
							break;
						
						case 21:
							sParam0->f_8 = Global_262145.f_8086;
							break;
						
						case 22:
							sParam0->f_8 = Global_262145.f_8412;
							break;
						
						case 23:
							sParam0->f_8 = Global_262145.f_25719;
							break;
						
						case 24:
							sParam0->f_8 = Global_262145.f_8237;
							break;
						
						case 25:
							sParam0->f_8 = Global_262145.f_8424;
							break;
						
						case 26:
							sParam0->f_8 = Global_262145.f_8225;
							break;
						
						case 27:
							sParam0->f_8 = Global_262145.f_8227;
							break;
						
						case 28:
							sParam0->f_8 = Global_262145.f_8089;
							break;
						
						case 29:
							sParam0->f_8 = Global_262145.f_8413;
							break;
						
						case 30:
							sParam0->f_8 = Global_262145.f_8414;
							break;
						
						case 31:
							sParam0->f_8 = Global_262145.f_8232;
							break;
						
						case 32:
							sParam0->f_8 = Global_262145.f_8407;
							break;
						
						case 33:
							sParam0->f_8 = Global_262145.f_8415;
							break;
						
						case 34:
							sParam0->f_8 = Global_262145.f_8416;
							break;
						
						case 35:
							sParam0->f_8 = Global_262145.f_8229;
							break;
						
						case 36:
							sParam0->f_8 = Global_262145.f_25720;
							break;
						
						case 37:
							sParam0->f_8 = Global_262145.f_8423;
							break;
						
						case 38:
							sParam0->f_8 = Global_262145.f_8417;
							break;
						
						case 39:
							sParam0->f_8 = Global_262145.f_8408;
							break;
						
						case 40:
							sParam0->f_8 = Global_262145.f_8418;
							break;
						
						case 41:
							sParam0->f_8 = Global_262145.f_8234;
							break;
						
						case 42:
							sParam0->f_8 = Global_262145.f_8083;
							break;
						
						case 43:
							sParam0->f_8 = Global_262145.f_8419;
							break;
						
						case 44:
							sParam0->f_8 = Global_262145.f_8420;
							break;
						
						case 45:
							sParam0->f_8 = Global_262145.f_8421;
							break;
						
						case 46:
							sParam0->f_8 = Global_262145.f_8422;
							break;
						
						case 47:
							sParam0->f_8 = Global_262145.f_8087;
							break;
						
						case 48:
							sParam0->f_8 = Global_262145.f_8230;
							break;
						
						case 49:
							sParam0->f_8 = Global_262145.f_8226;
							break;
						
						case 50:
							sParam0->f_8 = Global_262145.f_8236;
							break;
						
						case 51:
							sParam0->f_8 = Global_262145.f_8082;
							break;
						
						case 52:
							sParam0->f_8 = Global_262145.f_8081;
							break;
						
						case 53:
							sParam0->f_8 = Global_262145.f_8238;
							break;
						
						case 54:
							break;
						
						case 55:
							break;
						
						case 56:
							break;
						
						case 57:
							break;
						
						case 58:
							break;
						
						case 59:
							break;
						
						case 60:
							break;
						
						case 61:
							break;
						
						case 62:
							break;
						
						case 63:
							break;
						
						case 64:
							sParam0->f_8 = Global_262145.f_8075;
							break;
						
						case 65:
							sParam0->f_8 = Global_262145.f_8076;
							break;
						
						case 66:
							sParam0->f_8 = Global_262145.f_8077;
							break;
						
						case 67:
							sParam0->f_8 = Global_262145.f_8078;
							break;
						
						case 68:
							sParam0->f_8 = Global_262145.f_8079;
							break;
						
						case 69:
							sParam0->f_8 = Global_262145.f_8080;
							break;
						
						case 70:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2676));
							break;
						
						case 71:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2672));
							break;
						
						case 72:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2673));
							break;
						
						case 73:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2678));
							break;
						
						case 74:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2675));
							break;
						
						case 75:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2674));
							break;
						
						case 76:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2671));
							break;
						
						case 77:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2677));
							break;
						
						case 78:
							sParam0->f_8 = (Global_262145.f_8075 / 2);
							break;
						
						case 79:
							sParam0->f_8 = (Global_262145.f_8076 / 2);
							break;
						
						case 80:
							sParam0->f_8 = (Global_262145.f_8077 / 2);
							break;
						
						case 81:
							sParam0->f_8 = (Global_262145.f_8078 / 2);
							break;
						
						case 82:
							sParam0->f_8 = (Global_262145.f_8079 / 2);
							break;
						
						case 83:
							sParam0->f_8 = (Global_262145.f_8080 / 2);
							break;
						
						case 84:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2676));
							break;
						
						case 85:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2672));
							break;
						
						case 86:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2673));
							break;
						
						case 87:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2678));
							break;
						
						case 88:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2675));
							break;
						
						case 89:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2674));
							break;
						
						case 90:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2671));
							break;
						
						case 91:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2677));
							break;
						
						case 92:
							break;
						
						case 93:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2665));
							break;
						
						case 94:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2666));
							break;
						
						case 95:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2667));
							break;
						
						case 96:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2670));
							break;
						
						case 97:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2669));
							break;
						
						case 98:
							sParam0->f_8 = Global_262145.f_13170;
							break;
						
						case 99:
							sParam0->f_8 = Global_262145.f_7824;
							break;
					}
					break;
				
				case -270015777:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7211;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7212;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7213;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7214;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7215;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7216;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7217;
							break;
					}
					break;
				
				case -1076751822:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7065;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7066;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7067;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7068;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7069;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7063;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7064;
							break;
					}
					break;
				
				case -1063057011:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7072;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7073;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7074;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7075;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7076;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7070;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7071;
							break;
					}
					break;
				
				case -771403250:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7079;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7080;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7081;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7082;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7083;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7077;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7078;
							break;
					}
					break;
				
				case 2132975508:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7086;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7087;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7088;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7089;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7090;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7084;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7085;
							break;
					}
					break;
				
				case 137902532:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_8428;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_8429;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_8430;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_8431;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_8432;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_8426;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_8427;
							break;
					}
					break;
				
				case 984333226:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_8442;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_8443;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_8444;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_8445;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_8446;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_8440;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_8441;
							break;
					}
					break;
				
				case -952879014:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_8435;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_8436;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_8437;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_8438;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_8439;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_8433;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_8434;
							break;
					}
					break;
				
				case 1198879012:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14625;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14626;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14627;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14628;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14629;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14623;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14624;
							break;
					}
					break;
				
				case -1654528753:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14632;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14633;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14634;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14635;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14636;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14630;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14631;
							break;
					}
					break;
				
				case 1627465347:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14639;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14640;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14641;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14642;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14643;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14637;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14638;
							break;
					}
					break;
				
				case 1672152130:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14646;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14647;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14648;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14649;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14650;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14644;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14645;
							break;
					}
					break;
				
				case 171789620:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14653;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14654;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14655;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14656;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14657;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14651;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14652;
							break;
					}
					break;
				
				case -598887786:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14660;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14661;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14662;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14663;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14664;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14658;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14659;
							break;
					}
					break;
				
				case -619010992:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14667;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14668;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14669;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14670;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14671;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14665;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14666;
							break;
					}
					break;
				
				case -1045183535:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14674;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14675;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14676;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14677;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14678;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14672;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14673;
							break;
					}
					break;
				
				case -275439685:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14681;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14682;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14683;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14684;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14685;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14679;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14680;
							break;
					}
					break;
				
				case 1649403952:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14688;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14689;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14690;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14691;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14692;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14686;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14687;
							break;
					}
					break;
				
				case -1466123874:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14702;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14703;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14704;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14705;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14706;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14700;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14701;
							break;
					}
					break;
				
				case 2138347493:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14695;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14696;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14697;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14698;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14699;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14693;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14694;
							break;
					}
					break;
				
				case 317205821:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_18551;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_18552;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_18553;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_18554;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_18555;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_18549;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_18550;
							break;
					}
					break;
				
				case -1121678507:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_18558;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_18559;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_18560;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_18561;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_18562;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_18556;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_18557;
							break;
					}
					break;
				
				case 125959754:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_18565;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_18566;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_18567;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_18568;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_18569;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_18563;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_18564;
							break;
					}
					break;
				
				case 453432689:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2719));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2739));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2759));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2779));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2799));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2679));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2699));
							break;
					}
					break;
				
				case 1593441988:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2720));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2740));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2760));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2780));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2800));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2680));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2700));
							break;
					}
					break;
				
				case 584646201:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2721));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2741));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2761));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2781));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2801));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2681));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2701));
							break;
					}
					break;
				
				case 324215364:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2722));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2742));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2762));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2782));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2802));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2682));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2702));
							break;
					}
					break;
				
				case 736523883:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2723));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2743));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2763));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2783));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2803));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2683));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2703));
							break;
					}
					break;
				
				case -1074790547:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2724));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2744));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2764));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2784));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2804));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2684));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2704));
							break;
					}
					break;
				
				case -2084633992:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2725));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2745));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2765));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2785));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2805));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2685));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2705));
							break;
					}
					break;
				
				case -1357824103:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2726));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2746));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2766));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2786));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2806));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2686));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2706));
							break;
					}
					break;
				
				case -1660422300:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2727));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2747));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2767));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2787));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2807));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2687));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2707));
							break;
					}
					break;
				
				case 2144741730:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2728));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2748));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2768));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2788));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2808));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2688));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2708));
							break;
					}
					break;
				
				case 487013001:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2729));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2749));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2769));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2789));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2809));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2689));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2709));
							break;
					}
					break;
				
				case 2017895192:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2730));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2750));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2770));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2790));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2810));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2690));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2710));
							break;
					}
					break;
				
				case -494615257:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2731));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2751));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2771));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2791));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2811));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2691));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2711));
							break;
					}
					break;
				
				case 911657153:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2733));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2753));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2773));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2793));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2813));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2693));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2713));
							break;
					}
					break;
				
				case 100416529:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2734));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2754));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2774));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2794));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2814));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2694));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2714));
							break;
					}
					break;
				
				case 205991906:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2735));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2755));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2775));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2795));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2815));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2695));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2715));
							break;
					}
					break;
				
				case -1568386805:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2736));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2756));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2776));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2796));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2816));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2696));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2716));
							break;
					}
					break;
				
				case -1312131151:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2737));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2757));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2777));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2797));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2817));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2697));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2717));
							break;
					}
					break;
				
				case 1119849093:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2738));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2758));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2778));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2798));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2818));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2698));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2718));
							break;
					}
					break;
				
				case -1716589765:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2838));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2857));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2840));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2839));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2837));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2836));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_2841));
							break;
					}
					break;
				
				case -1075685676:
				case 2024373456:
				case 961495388:
				case -86904375:
				case -608341376:
				case 177293209:
				case 1432025498:
				case -1768145561:
				case -2009644972:
				case 1785463520:
				case -879347409:
				case -2066285827:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_20821;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_20822;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_20823;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_20824;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_20825;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_20826;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_20827;
							break;
						
						case 8:
							sParam0->f_8 = Global_262145.f_20828;
							break;
						
						case 9:
							sParam0->f_8 = Global_262145.f_20829;
							break;
						
						case 10:
							sParam0->f_8 = Global_262145.f_20830;
							break;
						
						case 11:
							sParam0->f_8 = Global_262145.f_20831;
							break;
						
						case 12:
							sParam0->f_8 = Global_262145.f_20832;
							break;
						
						case 13:
							sParam0->f_8 = Global_262145.f_20833;
							break;
						
						case 14:
							sParam0->f_8 = Global_262145.f_20834;
							break;
						
						case 15:
							sParam0->f_8 = Global_262145.f_20835;
							break;
						
						case 16:
							sParam0->f_8 = Global_262145.f_20836;
							break;
						
						case 17:
							sParam0->f_8 = Global_262145.f_20837;
							break;
						
						case 18:
							sParam0->f_8 = Global_262145.f_20838;
							break;
						
						case 19:
							sParam0->f_8 = Global_262145.f_20839;
							break;
						
						case 20:
							sParam0->f_8 = Global_262145.f_20840;
							break;
						
						case 21:
							sParam0->f_8 = Global_262145.f_20841;
							break;
						
						case 22:
							sParam0->f_8 = Global_262145.f_20842;
							break;
						
						case 23:
							sParam0->f_8 = Global_262145.f_20843;
							break;
						
						case 24:
							sParam0->f_8 = Global_262145.f_20844;
							break;
						
						case 25:
							sParam0->f_8 = Global_262145.f_20845;
							break;
						
						case 26:
							sParam0->f_8 = Global_262145.f_20846;
							break;
						
						case 27:
							sParam0->f_8 = Global_262145.f_20847;
							break;
						
						case 28:
							sParam0->f_8 = Global_262145.f_20848;
							break;
						
						case 29:
							sParam0->f_8 = Global_262145.f_20849;
							break;
						
						case 30:
							sParam0->f_8 = Global_262145.f_20850;
							break;
						
						case 31:
							sParam0->f_8 = Global_262145.f_20851;
							break;
					}
					break;
				
				case -1355376991:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_25726;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_25727;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_25728;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_25729;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_25730;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_25731;
							break;
					}
					break;
				
				case 1198256469:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_25732;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_25733;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_25734;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_25735;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_25736;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_25737;
							break;
					}
					break;
				
				case -1238556825:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_25738;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_25739;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_25740;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_25741;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_25742;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_25743;
							break;
					}
					break;
				
				case 727643628:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_27907;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_27908;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_27909;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_27910;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_27911;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_27912;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_27913;
							break;
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4397));
							break;
						
						case 2:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4400));
							break;
						
						case 3:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4396));
							break;
						
						case 4:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4398));
							break;
						
						case 5:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4401));
							break;
						
						case 6:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4402));
							break;
						
						case 7:
							sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_262145.f_4399));
							break;
					}
					break;
			}
			sParam0->f_8 = floor((to_float(sParam0->f_8) * Global_291063.f_8));
		}
		if (unk_0x8CD06866876216F2() && func_118())
		{
			iVar55 = 2;
			if (iParam1 == -72657034)
			{
				iVar55 = sParam0->f_10;
			}
			if (iParam1 == -61829581)
			{
				func_116(&sVar39, *sParam0, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, 6, 1, func_117(iParam1), -1, 0, 0);
				if (unk_0x437ABF4F514F6471(&sVar39))
				{
					sParam0->f_8 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar39), 1067618600, 1);
				}
			}
			else
			{
				func_116(&sVar39, *sParam0, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, iVar55, func_57(iParam1), func_117(iParam1), -1, 0, 0);
				if (unk_0x437ABF4F514F6471(&sVar39))
				{
					sParam0->f_8 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar39), 1671640801, 1);
				}
			}
		}
		if (func_83() && (func_165() || func_164()))
		{
			if (iParam1 == -1716589765 || iParam1 == -1654528753)
			{
				if (!unk_0x0EFF6B4415DAF4A1())
				{
					sParam0->f_8 = 0;
				}
				else
				{
					func_116(&sVar56, *sParam0, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, 3, func_57(iParam1), func_117(iParam1), -1, 0, 0);
					if (unk_0x437ABF4F514F6471(&sVar56))
					{
						sParam0->f_8 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar56), 1671640801, 1);
					}
				}
			}
		}
		fVar72 = func_128(iParam1, &(sParam0->f_8));
		if (fVar72 != 1f)
		{
		}
	}
	return sParam0->f_8 != -1;
}

float func_128(int iParam0, var uParam1)
{
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x8CD06866876216F2() && func_118())
	{
		return 1f;
	}
	if (func_126() || func_125())
	{
		if ((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == -947031628) || iParam0 == -572349828) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == -344484024)
		{
			*uParam1 = 0;
		}
	}
	if (!Global_76622)
	{
		iVar2 = func_161(iParam0);
		if (iVar2 == 3)
		{
			fVar1 = (fVar1 + 0,1f);
		}
		else if (iVar2 == 2)
		{
			fVar1 = (fVar1 + 0,15f);
		}
		else if (iVar2 == 1)
		{
			fVar1 = (fVar1 + 0,25f);
		}
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x8CD06866876216F2())
		{
			fVar1 = (fVar1 + (to_float(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (unk_0x8CD06866876216F2())
		{
			if (func_129())
			{
				fVar1 = (fVar1 + (to_float(Global_262145.f_122) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*uParam1 = floor((to_float(*uParam1) * fVar0));
	return fVar0;
}

int func_129()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0;
	}
	if (func_158())
	{
		if (func_133())
		{
			iVar0 = func_131();
			iVar1 = func_130();
			fVar2 = ((to_float(iVar1) / to_float(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_130()
{
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_131()
{
	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_132(-1619412469));
	iVar0 = (iVar0 + func_132(1659604058));
	iVar0 = (iVar0 + func_132(242250445));
	iVar0 = (iVar0 + func_132(-1440509968));
	iVar0 = (iVar0 + func_132(55646841));
	iVar0 = (iVar0 + func_132(995519836));
	iVar0 = (iVar0 + func_132(915369945));
	iVar0 = (iVar0 + func_132(-1029657896));
	iVar0 = (iVar0 + func_132(1938637151));
	return iVar0;
}

int func_132(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_133()
{
	unk_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_157(-77337635) };
	if (func_134(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_134(struct<7> Param0, struct<7> Param7, int iParam14)
{
	iVar0 = func_155(Param7);
	iVar1 = func_145(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_135(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (!func_143(iParam1) || !func_143(iParam0))
	{
		return 1;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_137(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_140(int iParam0)
{
	return iParam0 & 15;
}

var func_141(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_142(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_137(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_138(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_140(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_139(iParam0);
	if (iVar5 < 1 || iVar5 > func_144(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_145(struct<7> Param0, int iParam7)
{
	if (func_154(Param0) == 0)
	{
		uVar0 = func_155(Param0);
		uVar1 = uVar0;
		func_146(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_146(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_141(*uParam0);
	iVar1 = func_140(*uParam0);
	iVar2 = func_139(*uParam0);
	iVar3 = func_138(*uParam0);
	iVar4 = func_137(*uParam0);
	iVar5 = func_136(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_144(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_144(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_147(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(uParam0, iParam1);
	func_152(uParam0, iParam2);
	func_151(uParam0, iParam3);
	func_150(uParam0, iParam5);
	func_149(uParam0, iParam4);
	func_148(uParam0, iParam6);
}

void func_148(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_149(var uParam0, int iParam1)
{
	iVar0 = func_140(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_144(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_154(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_155(struct<6> Param0, var uParam6)
{
	if (Param0 > 0)
	{
		func_148(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_150(&uVar0, func_156(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_149(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_151(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_152(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_153(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_156(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_157(int iParam0)
{
	uVar0 = iParam0;
	if (unk_0x52555DE2F29B7339(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_158()
{
	if (func_160() && func_159(0))
	{
		return 1;
	}
	return 0;
}

var func_159(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_160()
{
	return func_159(func_33() + 1);
}

int func_161(int iParam0)
{
	iVar0 = func_63();
	if (iParam0 == 0 || !func_62(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case -1569615261:
			break;
		
		case -72657034:
			break;
		
		case 324215364:
			iVar1 = 1;
			break;
		
		case 736523883:
			iVar1 = 1;
			break;
		
		case 2017895192:
			iVar1 = 3;
			break;
		
		case 487013001:
			iVar1 = 3;
			break;
		
		case -494615257:
			iVar1 = 3;
			break;
		
		case -1074790547:
			iVar1 = 2;
			break;
		
		case -2084633992:
			iVar1 = 2;
			break;
		
		case -1357824103:
			iVar1 = 2;
			break;
		
		case 100416529:
			break;
		
		case 205991906:
			break;
		
		case -1660422300:
			iVar1 = 4;
			break;
		
		case 2144741730:
			iVar1 = 4;
			break;
		
		case -1312131151:
			break;
		
		case -1568386805:
			break;
		
		case 1119849093:
			iVar1 = 5;
			break;
		
		case -1716189206:
			break;
		
		case 1737195953:
			break;
		
		case 883325847:
			break;
		
		case 911657153:
			break;
		
		case 584646201:
			iVar1 = 0;
			break;
		
		case 1593441988:
			iVar1 = 0;
			break;
		
		case 453432689:
			iVar1 = 0;
			break;
		
		case -37975472:
			break;
		
		case -1813897027:
			break;
		
		case 741814745:
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_162(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_162(1, iVar0);
		iVar3[1] = func_162(3, iVar0);
		iVar3[2] = func_162(2, iVar0);
		iVar3[3] = func_162(4, iVar0);
		iVar3[4] = func_162(5, iVar0);
		iVar3[5] = func_162(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_163(iVar0, iParam1);
	if (func_163(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_163(iVar1, iParam1);
	}
	if (func_163(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_163(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_163(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_163(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_163(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1].f_3[iParam0].f_3;
}

int func_164()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25, 6))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25, 2) || unk_0xEAE0D21A50E6C7F4(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 6))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 2) || unk_0xEAE0D21A50E6C7F4(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, -1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(866);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 2) || unk_0xEAE0D21A50E6C7F4(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25, 1) || unk_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) || unk_0xEAE0D21A50E6C7F4(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, -1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(866);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 1) || unk_0xEAE0D21A50E6C7F4(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar4, -1);
				unk_0x5D96D8530B3D0904(&iVar4, 1);
				unk_0x5D96D8530B3D0904(&iVar4, 3);
				unk_0x5D96D8530B3D0904(&iVar4, 5);
				unk_0x5D96D8530B3D0904(&Global_25, 1);
				unk_0x5D96D8530B3D0904(&Global_25, 3);
				unk_0x5D96D8530B3D0904(&Global_25, 5);
				unk_0xCDC520E5E48E63D9(1571103992, iVar4, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar4, 1);
					unk_0x5D96D8530B3D0904(&iVar4, 3);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_166(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_167()
{
	if (Global_98796.f_1 == -72657034)
	{
		return 0;
	}
	return 41;
}

int func_168(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == -72657034)
	{
		iVar0 += 62;
		iVar0 += 14;
		iVar0 += 14;
	}
	else if (iParam0 == -61829581)
	{
		iVar0 = 12;
	}
	else if (iParam0 == -656458692)
	{
		iVar0 = 0;
	}
	else if (iParam0 == -1746263880)
	{
		iVar0 = 0;
	}
	else if (iParam0 == -538741184)
	{
		iVar0 = 0;
	}
	else if (iParam0 == -1853920116)
	{
		iVar0 = 0;
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (unk_0xFF4F1F8A37B1B330(iParam0) > 0)
		{
			if (unk_0x8CD06866876216F2())
			{
				iVar0 = unk_0xFF4F1F8A37B1B330(iParam0);
			}
			else if (func_126() || func_125())
			{
				iVar0 = unk_0xFF4F1F8A37B1B330(iParam0);
			}
			else
			{
				iVar0 = 3;
			}
		}
		bVar2 = false;
	}
	if (bParam1)
	{
		if (iParam0 == -72657034)
		{
			iVar1 = func_169();
		}
	}
	return (iVar0 + iVar1);
}

int func_169()
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_170() && (Global_262145.f_7794 || func_39(3602, -1, -1)))
		{
			return 10;
		}
		return 9;
	}
	return 8;
}

bool func_170()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_171(int iParam0)
{
	switch (*iParam0)
	{
		case -1569615261:
		case -1716189206:
		case -1786099057:
		case 1737195953:
		case 1317494643:
		case 1141786504:
		case -2067956739:
		case -102323637:
		case -1834847097:
		case -656458692:
		case -1951375401:
		case -581044007:
		case -538741184:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
			break;
	}
	return 0;
}

int func_172(int iParam0, vector3 vParam1)
{
	return unk_0xB0BE3DFBBB59A620(iParam0, vParam1, 0, false, false);
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 1;
			break;
	}
	return 0;
}

int func_174(int iParam0)
{
	iVar0 = func_86(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = unk_0xE8213142E3A84F79(iVar0);
		if (iVar1 != 0)
		{
			return unk_0xB87F6CF6E5628C67(iVar1);
		}
	}
	return 1;
}

void func_175(int iParam0)
{
	iVar0 = func_86(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = unk_0xE8213142E3A84F79(iVar0);
		if (iVar1 != 0)
		{
			unk_0x523BCC9DC80CD82F(iVar1);
		}
	}
}

int func_176(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case -604986051:
			case -1167922891:
			case 1857603803:
			case -972590066:
			case -2000168365:
			case -1444295948:
			case 2043113590:
			case 1801039530:
				return 0;
			
			default:
		}
	}
	else if (func_177(iParam0))
	{
		return Global_262145.f_20713;
	}
	return 1;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

bool func_178(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_89(iParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case 453432689:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 453432689, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 1709866683, 1863181664, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -684126074, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, 1709866683, 1863181664, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -19858063, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -316253668, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 899381934, 679107254, 1, 0);
						break;
					
					case 3:
						func_89(iParam0, 1709866683, 1863181664, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, -684126074, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1593441988:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 119648377, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -696561875, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -966439566, 962500902, 1, 0);
					break;
			}
			break;
		
		case 584646201:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 834974250, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 614078421, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -1686714580, 962500902, 1, 0);
					break;
			}
			break;
		
		case 324215364:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -884429072, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 283556395, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_89(iParam0, 1215999497, 962500902, 1, 0);
					break;
			}
			break;
		
		case 736523883:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 736523883, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 4:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1023114086, 1863181664, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 663170192, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 3:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1023114086, 1863181664, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, 643254679, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, 889808635, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 2043113590, -571619404, 3, 0);
						break;
					
					case 3:
						func_89(iParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, 1019656791, 196630833, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, -1023114086, 1863181664, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, 663170192, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1074790547:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -1074790547, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 4:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 8:
							func_89(iParam0, 1319990579, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 3:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -1101075946, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -1323216997, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, -604986051, -571619404, 3, 0);
						break;
					
					case 3:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, -1657815255, 196630833, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 7:
						func_89(iParam0, 1319990579, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -2084633992:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -2084633992, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 4:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 8:
							func_89(iParam0, -660892072, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 3:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -1614924820, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -1861183855, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, -1167922891, -571619404, 3, 0);
						break;
					
					case 3:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 7:
						func_89(iParam0, -660892072, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1357824103:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -91250417, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -1899902599, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1439939148, 196630833, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -2089531990, 1863181664, 1, 0);
					break;
				
				case 5:
					func_89(iParam0, 930927479, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -197857404, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -2112517305, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 1006677997, 196630833, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -690308418, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2144741730:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 2144741730, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1828795171, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -503336118, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -691692330, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 3:
						func_89(iParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, -1828795171, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -494615257:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1796727865, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -2034401422, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -2089531990, 1863181664, 1, 0);
					break;
			}
			break;
		
		case 100416529:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1681506167, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 2:
					func_89(iParam0, -767279652, 196630833, 1, 1);
					break;
				
				case 3:
					func_89(iParam0, -1135289737, 196630833, 2, 0);
					break;
				
				case 4:
					func_89(iParam0, 1077065191, 962500902, 1, 0);
					break;
			}
			break;
		
		case 205991906:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 205991906, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 3:
							func_89(iParam0, -1135289737, 196630833, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -1135289737, 196630833, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, 1198478068, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -767279652, 196630833, 1, 1);
						break;
					
					case 2:
						func_89(iParam0, -1135289737, 196630833, 2, 0);
						break;
					}
			}
			break;
		
		case -1568386805:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_89(iParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_89(iParam0, -1439939148, 196630833, 1, 0);
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -924946682, -571619404, 1, 1);
					break;
			}
			break;
		
		case -270015777:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1928132688, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -1152981993, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_89(iParam0, 663517359, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_89(iParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_89(iParam0, -1489156508, 1863181664, 1, 0);
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 580369945, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -640439150, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_89(iParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 4:
					func_89(iParam0, 2008591151, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -2052698631, 962500902, 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -2045758401, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -785724817, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -282298175, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -76490669, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, -1478681000, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1675665560, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, -1322016827, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, -1572840598, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 1684637069, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 13:
					func_89(iParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 14:
					func_89(iParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_89(iParam0, -1489156508, 945598191, 2, 0);
					break;
				
				case 16:
					func_89(iParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_89(iParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_89(iParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_89(iParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_89(iParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_89(iParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_89(iParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_89(iParam0, 1134861606, -1312077031, 1, 1);
					break;
				
				case 24:
					func_89(iParam0, 1447477866, -1312077031, 2, 0);
					break;
				
				case 25:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_89(iParam0, -1860492113, 962500902, 2, 0);
					break;
				
				case 27:
					func_89(iParam0, 937772107, 962500902, 3, 0);
					break;
				
				case 28:
					func_89(iParam0, 1401650071, 962500902, 4, 0);
					break;
				
				case 29:
					func_89(iParam0, 628662130, 962500902, 5, 0);
					break;
				
				case 30:
					func_89(iParam0, -985047251, 962500902, 6, 0);
					break;
				
				case 31:
					func_89(iParam0, -812944463, 962500902, 7, 0);
					break;
				
				case 32:
					func_89(iParam0, -1447352303, 962500902, 8, 0);
					break;
				
				case 33:
					func_89(iParam0, -60338860, 962500902, 9, 0);
					break;
				
				case 34:
					func_89(iParam0, 2088750491, 962500902, 10, 0);
					break;
				
				case 35:
					func_89(iParam0, -1513913454, 962500902, 11, 0);
					break;
				
				case 36:
					func_89(iParam0, -1179558480, 962500902, 12, 0);
					break;
			}
			break;
		
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 1283078430, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 1574296533, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 391640422, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, 1025884839, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 626875735, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1141059345, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 13:
					func_89(iParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 14:
					func_89(iParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_89(iParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 16:
					func_89(iParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_89(iParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_89(iParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_89(iParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_89(iParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_89(iParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_89(iParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_89(iParam0, -2093598721, -1312077031, 1, 1);
					break;
				
				case 24:
					func_89(iParam0, -1958983669, -1312077031, 2, 0);
					break;
				
				case 25:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_89(iParam0, 1272803094, 962500902, 2, 0);
					break;
				
				case 27:
					func_89(iParam0, 1080719624, 962500902, 3, 0);
					break;
				
				case 28:
					func_89(iParam0, 792221348, 962500902, 4, 0);
					break;
				
				case 29:
					func_89(iParam0, -452181427, 962500902, 5, 0);
					break;
				
				case 30:
					func_89(iParam0, -746774737, 962500902, 6, 0);
					break;
				
				case 31:
					func_89(iParam0, -2044296061, 962500902, 7, 0);
					break;
				
				case 32:
					func_89(iParam0, -199171978, 962500902, 8, 0);
					break;
				
				case 33:
					func_89(iParam0, -1428075016, 962500902, 9, 0);
					break;
				
				case 34:
					func_89(iParam0, -1735153315, 962500902, 10, 0);
					break;
				
				case 35:
					func_89(iParam0, 1796459838, 962500902, 11, 0);
					break;
				
				case 36:
					func_89(iParam0, -631911105, 962500902, 12, 0);
					break;
			}
			break;
		
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 1227564412, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 400507625, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -161179835, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -1020871238, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 696788003, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1475288264, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 1060929921, 196630833, 3, 0);
					break;
				
				case 11:
					func_89(iParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 12:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_89(iParam0, -1181482284, 1863181664, 2, 0);
					break;
				
				case 14:
					func_89(iParam0, -932732805, 1863181664, 3, 0);
					break;
				
				case 15:
					func_89(iParam0, -569259057, 1863181664, 4, 0);
					break;
				
				case 16:
					func_89(iParam0, -326080308, 1863181664, 5, 0);
					break;
				
				case 17:
					func_89(iParam0, 48731514, 1863181664, 6, 0);
					break;
				
				case 18:
					func_89(iParam0, 880736428, 1863181664, 7, 0);
					break;
				
				case 19:
					func_89(iParam0, 1303784126, 1863181664, 8, 0);
					break;
				
				case 20:
					func_89(iParam0, -1018236364, -1312077031, 1, 1);
					break;
				
				case 21:
					func_89(iParam0, -1243457701, -1312077031, 2, 0);
					break;
				
				case 22:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 23:
					func_89(iParam0, 1249283253, 962500902, 2, 0);
					break;
				
				case 24:
					func_89(iParam0, -857707587, 962500902, 3, 0);
					break;
				
				case 25:
					func_89(iParam0, -1097543898, 962500902, 4, 0);
					break;
				
				case 26:
					func_89(iParam0, 1980349969, 962500902, 5, 0);
					break;
				
				case 27:
					func_89(iParam0, 1219453777, 962500902, 6, 0);
					break;
				
				case 28:
					func_89(iParam0, -1853459190, 962500902, 7, 0);
					break;
				
				case 29:
					func_89(iParam0, -2074781016, 962500902, 8, 0);
					break;
				
				case 30:
					func_89(iParam0, 457967755, 962500902, 9, 0);
					break;
				
				case 31:
					func_89(iParam0, 235171324, 962500902, 10, 0);
					break;
				
				case 32:
					func_89(iParam0, 42685294, 962500902, 11, 0);
					break;
				
				case 33:
					func_89(iParam0, -687617715, 962500902, 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -98690520, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 752418717, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 247526935, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -130689324, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 1005144310, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, -1981031769, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, -2101279869, 196630833, 1, 0);
					break;
				
				case 7:
					func_89(iParam0, -1135289737, 196630833, 2, 1);
					break;
				
				case 8:
					func_89(iParam0, -1233121104, 196630833, 3, 0);
					break;
				
				case 9:
					func_89(iParam0, 776198721, 196630833, 4, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 13:
					func_89(iParam0, 1764221345, 1863181664, 4, 0);
					break;
				
				case 14:
					func_89(iParam0, -1869205321, -1312077031, 1, 1);
					break;
				
				case 15:
					func_89(iParam0, 277524638, -1312077031, 2, 0);
					break;
				
				case 16:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 17:
					func_89(iParam0, -130843390, 962500902, 2, 0);
					break;
				
				case 18:
					func_89(iParam0, -977347227, 962500902, 3, 0);
					break;
				
				case 19:
					func_89(iParam0, -378461067, 962500902, 4, 0);
					break;
				
				case 20:
					func_89(iParam0, 329939175, 962500902, 5, 0);
					break;
				
				case 21:
					func_89(iParam0, 643374672, 962500902, 6, 0);
					break;
				
				case 22:
					func_89(iParam0, 807875052, 962500902, 7, 0);
					break;
				
				case 23:
					func_89(iParam0, -1401804168, 962500902, 8, 0);
					break;
				
				case 24:
					func_89(iParam0, -1096495395, 962500902, 9, 0);
					break;
				
				case 25:
					func_89(iParam0, -847811454, 962500902, 10, 0);
					break;
				
				case 26:
					func_89(iParam0, -1413108537, 962500902, 11, 0);
					break;
				
				case 27:
					func_89(iParam0, 1815270123, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1795936926, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, 1591132456, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 634039983, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, 733837882, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, -2046910199, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1329061674, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, -1898661008, 196630833, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 1140676955, 679107254, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, 1709866683, 1863181664, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, 568543123, 1863181664, 3, 0);
					break;
				
				case 13:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_89(iParam0, 1550611612, 962500902, 2, 0);
					break;
				
				case 15:
					func_89(iParam0, 368550800, 962500902, 3, 0);
					break;
				
				case 16:
					func_89(iParam0, -1769069349, 962500902, 4, 0);
					break;
				
				case 17:
					func_89(iParam0, 24902297, 962500902, 5, 0);
					break;
				
				case 18:
					func_89(iParam0, -228041614, 962500902, 6, 0);
					break;
				
				case 19:
					func_89(iParam0, -584961562, 962500902, 7, 0);
					break;
				
				case 20:
					func_89(iParam0, -1153175946, 962500902, 8, 0);
					break;
				
				case 21:
					func_89(iParam0, 1301287696, 962500902, 9, 0);
					break;
				
				case 22:
					func_89(iParam0, 1597093459, 962500902, 10, 0);
					break;
				
				case 23:
					func_89(iParam0, 1769871776, 962500902, 11, 0);
					break;
				
				case 24:
					func_89(iParam0, -1827882671, 962500902, 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 1277460590, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -1182573778, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 2146055916, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -644734235, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 974903034, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 190476639, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, -1613015470, 196630833, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, -452809877, 196630833, 3, 0);
					break;
				
				case 11:
					func_89(iParam0, 1038927834, 196630833, 4, 0);
					break;
				
				case 12:
					func_89(iParam0, 0, 945598191, 1, 1);
					break;
				
				case 13:
					func_89(iParam0, -1023114086, 945598191, 1, 0);
					break;
				
				case 14:
					func_89(iParam0, -1181482284, 945598191, 2, 0);
					break;
				
				case 15:
					func_89(iParam0, -932732805, 945598191, 3, 0);
					break;
				
				case 16:
					func_89(iParam0, -569259057, 945598191, 4, 0);
					break;
				
				case 17:
					func_89(iParam0, -326080308, 945598191, 5, 0);
					break;
				
				case 18:
					func_89(iParam0, 48731514, 945598191, 6, 0);
					break;
				
				case 19:
					func_89(iParam0, 880736428, 945598191, 7, 0);
					break;
				
				case 20:
					func_89(iParam0, 1303784126, 945598191, 8, 0);
					break;
				
				case 21:
					func_89(iParam0, -653246751, -1312077031, 1, 1);
					break;
				
				case 22:
					func_89(iParam0, -1520117877, -1312077031, 2, 0);
					break;
				
				case 23:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 24:
					func_89(iParam0, -996700057, 962500902, 2, 0);
					break;
				
				case 25:
					func_89(iParam0, 940943685, 962500902, 3, 0);
					break;
				
				case 26:
					func_89(iParam0, 1263226800, 962500902, 4, 0);
					break;
				
				case 27:
					func_89(iParam0, -328035840, 962500902, 5, 0);
					break;
				
				case 28:
					func_89(iParam0, 1224100642, 962500902, 6, 0);
					break;
				
				case 29:
					func_89(iParam0, 899228776, 962500902, 7, 0);
					break;
				
				case 30:
					func_89(iParam0, 616006309, 962500902, 8, 0);
					break;
				
				case 31:
					func_89(iParam0, -1561952511, 962500902, 9, 0);
					break;
				
				case 32:
					func_89(iParam0, 572063080, 962500902, 10, 0);
					break;
				
				case 33:
					func_89(iParam0, 1170588613, 962500902, 11, 0);
					break;
				
				case 34:
					func_89(iParam0, 966612367, 962500902, 12, 0);
					break;
			}
			break;
		
		case 487013001:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 487013001, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 2:
							func_89(iParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, -1562927653, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 2:
							func_89(iParam0, -1562927653, 962500902, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 1:
						func_89(iParam0, -435637410, 1863181664, 1, 0);
						break;
					
					case 2:
						func_89(iParam0, -1562927653, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1063057011:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -1063057011, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 4:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 8:
							func_89(iParam0, 1929467122, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 3:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 1929467122, 962500902, 1, 0);
							break;
						
						case 8:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -959978111, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, 2089537806, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 1801039530, -571619404, 3, 0);
						break;
					
					case 3:
						func_89(iParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 7:
						func_89(iParam0, 1929467122, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1076751822:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -1076751822, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, -2144080721, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, -2144080721, 962500902, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -125817127, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, 2063610803, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, -2144080721, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -952879014:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -952879014, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 4:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 371102273, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 3:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, 371102273, 962500902, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -667205311, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -855823675, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 471997210, 196630833, 1, 1);
						break;
					
					case 3:
						func_89(iParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, 371102273, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1045183535:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, -1045183535, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, -1802258419, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 2:
							func_89(iParam0, -1802258419, 962500902, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -377062173, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, 384708672, 962500902, 1, 0);
						break;
					
					case 2:
						func_89(iParam0, -1802258419, 962500902, 2, 0);
						break;
					}
			}
			break;
		
		case 2132975508:
			if (func_236(iLocal_54))
			{
				if (!func_45(1623028892, 2132975508, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_89(iParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 2:
							func_89(iParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 3:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, -1470645128, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_89(iParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 1:
							func_89(iParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 2:
							func_89(iParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 3:
							func_89(iParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 4:
							func_89(iParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_89(iParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_89(iParam0, -1470645128, 962500902, 1, 0);
							break;
						
						case 7:
							func_89(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_89(iParam0, -979292288, -571619404, 1, 1);
						break;
					
					case 1:
						func_89(iParam0, -1284994289, -571619404, 2, 0);
						break;
					
					case 2:
						func_89(iParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 3:
						func_89(iParam0, -1439939148, 196630833, 1, 0);
						break;
					
					case 4:
						func_89(iParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_89(iParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_89(iParam0, -1470645128, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -845938367, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -1618338827, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -380098265, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, 1315288101, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 1004815965, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 0, -1572840598, 1, 1);
					break;
				
				case 6:
					func_89(iParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 7:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 8:
					func_89(iParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 9:
					func_89(iParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 10:
					func_89(iParam0, 1060929921, 196630833, 4, 0);
					break;
				
				case 11:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 12:
					func_89(iParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 13:
					func_89(iParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 14:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 15:
					func_89(iParam0, -474112444, 962500902, 2, 0);
					break;
				
				case 16:
					func_89(iParam0, 387223451, 962500902, 3, 0);
					break;
				
				case 17:
					func_89(iParam0, 617753366, 962500902, 4, 0);
					break;
				
				case 18:
					func_89(iParam0, -222378256, 962500902, 5, 0);
					break;
				
				case 19:
					func_89(iParam0, 8741501, 962500902, 6, 0);
					break;
				
				case 20:
					func_89(iParam0, -601286203, 962500902, 7, 0);
					break;
				
				case 21:
					func_89(iParam0, -511433605, 962500902, 8, 0);
					break;
				
				case 22:
					func_89(iParam0, -655387818, 962500902, 9, 0);
					break;
				
				case 23:
					func_89(iParam0, -282476598, 962500902, 10, 0);
					break;
				
				case 24:
					func_89(iParam0, 1739501925, 962500902, 11, 0);
					break;
				
				case 25:
					func_89(iParam0, 1178671645, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 382112385, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -568352468, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -2023373174, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -570355066, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 1362433589, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1346235024, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 11:
					func_89(iParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 12:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_89(iParam0, -1489156508, 1863181664, 2, 0);
					break;
				
				case 14:
					func_89(iParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 15:
					func_89(iParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 16:
					func_89(iParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 17:
					func_89(iParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 18:
					func_89(iParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 19:
					func_89(iParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 20:
					func_89(iParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 21:
					func_89(iParam0, 0, -1322016827, 1, 1);
					break;
				
				case 22:
					func_89(iParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 23:
					func_89(iParam0, -415870039, -1312077031, 1, 1);
					break;
				
				case 24:
					func_89(iParam0, -109086661, -1312077031, 2, 0);
					break;
				
				case 25:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_89(iParam0, -737430213, 962500902, 2, 0);
					break;
				
				case 27:
					func_89(iParam0, 1125852043, 962500902, 3, 0);
					break;
				
				case 28:
					func_89(iParam0, 886015732, 962500902, 4, 0);
					break;
				
				case 29:
					func_89(iParam0, -1262287139, 962500902, 5, 0);
					break;
				
				case 30:
					func_89(iParam0, -295208411, 962500902, 6, 0);
					break;
				
				case 31:
					func_89(iParam0, -544154504, 962500902, 7, 0);
					break;
				
				case 32:
					func_89(iParam0, 172765678, 962500902, 8, 0);
					break;
				
				case 33:
					func_89(iParam0, -1982877449, 962500902, 9, 0);
					break;
				
				case 34:
					func_89(iParam0, 2072122460, 962500902, 10, 0);
					break;
				
				case 35:
					func_89(iParam0, -1986220171, 962500902, 11, 0);
					break;
				
				case 36:
					func_89(iParam0, 1377355801, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 21392614, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -829683854, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -1876057490, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -424845447, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, -1928301566, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, -1055790298, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, 1246324211, -1572840598, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 1205768792, 196630833, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 945598191, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, 1709866683, 945598191, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, -1434287169, 945598191, 3, 0);
					break;
				
				case 13:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_89(iParam0, 259780317, 962500902, 2, 0);
					break;
				
				case 15:
					func_89(iParam0, -1973342474, 962500902, 3, 0);
					break;
				
				case 16:
					func_89(iParam0, 1996130345, 962500902, 4, 0);
					break;
				
				case 17:
					func_89(iParam0, -1455657812, 962500902, 5, 0);
					break;
				
				case 18:
					func_89(iParam0, -1668263084, 962500902, 6, 0);
					break;
				
				case 19:
					func_89(iParam0, 1308243489, 962500902, 7, 0);
					break;
				
				case 20:
					func_89(iParam0, 1122574335, 962500902, 8, 0);
					break;
				
				case 21:
					func_89(iParam0, 1420313469, 962500902, 9, 0);
					break;
				
				case 22:
					func_89(iParam0, 109848390, 962500902, 10, 0);
					break;
				
				case 23:
					func_89(iParam0, 593945703, 962500902, 11, 0);
					break;
				
				case 24:
					func_89(iParam0, 1142457062, 962500902, 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1797182002, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -422587990, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -679861550, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, 1842849902, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, -193998727, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, -515203373, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 9:
					func_89(iParam0, -966040254, 1684637069, 3, 0);
					break;
				
				case 10:
					func_89(iParam0, 1528590652, 1684637069, 4, 1);
					break;
				
				case 11:
					func_89(iParam0, 0, 945598191, 1, 1);
					break;
				
				case 12:
					func_89(iParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 13:
					func_89(iParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 14:
					func_89(iParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 15:
					func_89(iParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 16:
					func_89(iParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 17:
					func_89(iParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 18:
					func_89(iParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 19:
					func_89(iParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 20:
					func_89(iParam0, 0, -546751811, 1, 1);
					break;
				
				case 21:
					func_89(iParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 22:
					func_89(iParam0, 941317513, -1312077031, 1, 1);
					break;
				
				case 23:
					func_89(iParam0, 1748450780, -1312077031, 2, 0);
					break;
				
				case 24:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 25:
					func_89(iParam0, -1869284448, 962500902, 2, 0);
					break;
				
				case 26:
					func_89(iParam0, 1931539634, 962500902, 3, 0);
					break;
				
				case 27:
					func_89(iParam0, 1624199183, 962500902, 4, 0);
					break;
				
				case 28:
					func_89(iParam0, -26834113, 962500902, 5, 0);
					break;
				
				case 29:
					func_89(iParam0, -210406055, 962500902, 6, 0);
					break;
				
				case 30:
					func_89(iParam0, 423313640, 962500902, 7, 0);
					break;
				
				case 31:
					func_89(iParam0, 276639596, 962500902, 8, 0);
					break;
				
				case 32:
					func_89(iParam0, -991356863, 962500902, 9, 0);
					break;
				
				case 33:
					func_89(iParam0, -1682848301, 962500902, 10, 0);
					break;
				
				case 34:
					func_89(iParam0, 996213771, 962500902, 11, 0);
					break;
				
				case 35:
					func_89(iParam0, -1214048550, 962500902, 12, 0);
					break;
			}
			break;
		
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -1172055874, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -958864266, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, 15712037, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, 284438159, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, 231258687, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 0, 196630833, 1, 1);
					break;
				
				case 6:
					func_89(iParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 7:
					func_89(iParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 899381934, 679107254, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_89(iParam0, 654802123, 1863181664, 2, 0);
					break;
				
				case 12:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 13:
					func_89(iParam0, -1069552225, 962500902, 2, 0);
					break;
				
				case 14:
					func_89(iParam0, 11918884, 962500902, 3, 0);
					break;
				
				case 15:
					func_89(iParam0, 176157112, 962500902, 4, 0);
					break;
				
				case 16:
					func_89(iParam0, -220052855, 962500902, 5, 0);
					break;
				
				case 17:
					func_89(iParam0, 288456487, 962500902, 6, 0);
					break;
				
				case 18:
					func_89(iParam0, 398658626, 962500902, 7, 0);
					break;
				
				case 19:
					func_89(iParam0, 628697006, 962500902, 8, 0);
					break;
				
				case 20:
					func_89(iParam0, 925911836, 962500902, 9, 0);
					break;
				
				case 21:
					func_89(iParam0, 1222307441, 962500902, 10, 0);
					break;
				
				case 22:
					func_89(iParam0, 552442715, 962500902, 11, 0);
					break;
				
				case 23:
					func_89(iParam0, -648943513, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 25766362, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -273676760, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -2111807319, -571619404, 3, 0);
					break;
				
				case 3:
					func_89(iParam0, -1449330342, -571619404, 4, 0);
					break;
				
				case 4:
					func_89(iParam0, -89655827, -571619404, 5, 0);
					break;
				
				case 5:
					func_89(iParam0, 1130501904, -571619404, 6, 0);
					break;
				
				case 6:
					func_89(iParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_89(iParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_89(iParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_89(iParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_89(iParam0, -944910075, 1684637069, 3, 0);
					break;
				
				case 11:
					func_89(iParam0, 1060929921, 1684637069, 4, 0);
					break;
				
				case 12:
					func_89(iParam0, 1704640795, -1312077031, 1, 1);
					break;
				
				case 13:
					func_89(iParam0, 1005743559, -1312077031, 2, 0);
					break;
				
				case 14:
					func_89(iParam0, 0, 1863181664, 1, 1);
					break;
				
				case 15:
					func_89(iParam0, -2089531990, 1863181664, 2, 0);
					break;
				
				case 16:
					func_89(iParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 17:
					func_89(iParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 18:
					func_89(iParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 19:
					func_89(iParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 20:
					func_89(iParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 21:
					func_89(iParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 22:
					func_89(iParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 23:
					func_89(iParam0, 0, -1322016827, 1, 1);
					break;
				
				case 24:
					func_89(iParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 25:
					func_89(iParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_89(iParam0, -1371515465, 962500902, 2, 0);
					break;
				
				case 27:
					func_89(iParam0, -1190793877, 962500902, 3, 0);
					break;
				
				case 28:
					func_89(iParam0, -1497085720, 962500902, 4, 0);
					break;
				
				case 29:
					func_89(iParam0, -1803148180, 962500902, 5, 0);
					break;
				
				case 30:
					func_89(iParam0, -1975971886, 962500902, 6, 0);
					break;
				
				case 31:
					func_89(iParam0, 36929477, 962500902, 7, 0);
					break;
				
				case 32:
					func_89(iParam0, -268444834, 962500902, 8, 0);
					break;
				
				case 33:
					func_89(iParam0, -574769446, 962500902, 9, 0);
					break;
				
				case 34:
					func_89(iParam0, -882699739, 962500902, 10, 0);
					break;
				
				case 35:
					func_89(iParam0, -1468181474, 962500902, 11, 0);
					break;
				
				case 36:
					func_89(iParam0, -974541230, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, -673450233, 962500902, 1, 0);
					break;
			}
			break;
		
		case 727643628:
			switch (iParam2)
			{
				case 0:
					func_89(iParam0, 1423184737, -571619404, 1, 1);
					break;
				
				case 1:
					func_89(iParam0, -2122814295, -571619404, 2, 0);
					break;
				
				case 2:
					func_89(iParam0, -1828202758, 1863181664, 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_81(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < unk_0xA942498EEAA3EEAD(iVar12))
				{
					if (unk_0x8B27EE8DAA2A39B3(iVar12, iVar13, &Var54))
					{
						if (!func_183(Var54.f_3))
						{
							if (Var54 == -571619404 || Var54 == 291640902)
							{
								iVar1++;
							}
							else if (Var54 == 679107254 || Var54 == -1572840598)
							{
								iVar2++;
							}
							else if (Var54 == 196630833 || Var54 == 1684637069)
							{
								iVar3++;
							}
							else if (Var54 == -1843287667 || Var54 == 497110245)
							{
								iVar4++;
							}
							else if (Var54 == -1322016827 || Var54 == -546751811)
							{
								iVar5++;
							}
							else if (Var54 == 1863181664 || Var54 == 945598191)
							{
								iVar6++;
							}
							else if (Var54 == 1731751835)
							{
								iVar7++;
							}
							else if (Var54 == 962500902)
							{
								iVar8++;
							}
							else if (Var54 == -31573710)
							{
								iVar9++;
							}
							else if (Var54 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var54 == -571619404 || Var54 == 291640902)
								{
									iVar0 = iVar1;
								}
								else if (Var54 == 679107254 || Var54 == -1572840598)
								{
									iVar0 = iVar2;
								}
								else if (Var54 == 196630833 || Var54 == 1684637069)
								{
									iVar0 = iVar3;
								}
								else if (Var54 == -1843287667 || Var54 == 497110245)
								{
									iVar0 = iVar4;
								}
								else if (Var54 == -1322016827 || Var54 == -546751811)
								{
									iVar0 = iVar5;
								}
								else if (Var54 == 1863181664 || Var54 == 945598191)
								{
									iVar0 = iVar6;
								}
								else if (Var54 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var54 == 962500902)
								{
									iVar0 = iVar8;
								}
								else if (Var54 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var54 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_89(iParam0, Var54.f_3, Var54, iVar0, Var54.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		iParam0->f_2 = func_179(iParam1, *iParam0);
	}
	return iParam0->f_4 != 989182658;
}

int func_179(int iParam0, int iParam1)
{
	iVar0 = 0;
	fVar1 = 2,5f;
	if (!unk_0x8CD06866876216F2())
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 155;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case 1709866683:
						iVar0 = 729;
						break;
					
					case -684126074:
						iVar0 = 18600;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = 159;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case -1023114086:
						iVar0 = 735;
						break;
					
					case -966439566:
						iVar0 = 14500;
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 165;
						break;
					
					case 899381934:
						iVar0 = 185;
						break;
					
					case -1023114086:
						iVar0 = 730;
						break;
					
					case -1686714580:
						iVar0 = 15800;
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 137;
						break;
					
					case 899381934:
						iVar0 = 190;
						break;
					
					case -1657815255:
						iVar0 = 549;
						break;
					
					case -1489156508:
						iVar0 = 775;
						break;
					
					case 1215999497:
						iVar0 = 15100;
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 134;
						break;
					
					case 2043113590:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 210;
						break;
					
					case 1019656791:
						iVar0 = 549;
						break;
					
					case -1023114086:
						iVar0 = 815;
						break;
					
					case 663170192:
						iVar0 = 19300;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 129;
						break;
					
					case -604986051:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 159;
						break;
					
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -1657815255:
						iVar0 = 565;
						break;
					
					case -1489156508:
						iVar0 = 810;
						break;
					
					case 1319990579:
						iVar0 = 14400;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 105;
						break;
					
					case -1167922891:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 132;
						break;
					
					case 2076495324:
						iVar0 = 150;
						break;
					
					case -1596416958:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 815;
						break;
					
					case -660892072:
						iVar0 = 17900;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 124;
						break;
					
					case 2076495324:
						iVar0 = 159;
						break;
					
					case -1439939148:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 812;
						break;
					
					case 930927479:
						iVar0 = 16500;
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 145;
						break;
					
					case 1006677997:
						iVar0 = 450;
						break;
					
					case -690308418:
						iVar0 = 15600;
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 126;
						break;
					
					case 202788691:
						iVar0 = 129;
						break;
					
					case -1596416958:
						iVar0 = 559;
						break;
					
					case -1828795171:
						iVar0 = 14000;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -435637410:
						iVar0 = 975;
						break;
					
					case -1562927653:
						iVar0 = 16900;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 139;
						break;
					
					case 202788691:
						iVar0 = 150;
						break;
					
					case 2076495324:
						iVar0 = 225;
						break;
					
					case -2089531990:
						iVar0 = 899;
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 559;
						break;
					
					case -1135289737:
						iVar0 = 975;
						break;
					
					case -1489156508:
						iVar0 = 920;
						break;
					
					case 1077065191:
						iVar0 = 13000;
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 575;
						break;
					
					case -1135289737:
						iVar0 = 999;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 128;
						break;
					
					case 2076495324:
						iVar0 = 185;
						break;
					
					case -1439939148:
						iVar0 = 525;
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						break;
					
					case 2076495324:
						iVar0 = 2275;
						break;
					
					case -1657815255:
						iVar0 = 10875;
						break;
					
					case -1489156508:
						iVar0 = 12400;
						break;
					
					case 663517359:
						iVar0 = 17600;
						break;
				}
				if (func_83() && (func_165() || func_164()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						break;
					
					case 2076495324:
						iVar0 = 2300;
						break;
					
					case -1489156508:
						iVar0 = 12450;
						break;
				}
				if (func_83() && (func_165() || func_164()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						break;
					
					case 899381934:
						iVar0 = 2000;
						break;
					
					case -1489156508:
						iVar0 = 12250;
						break;
					
					case 2008591151:
						iVar0 = 20000;
						break;
				}
				if (func_83() && (func_165() || func_164()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = 13700;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = 3612;
						break;
					
					case 471997210:
						iVar0 = 0;
						break;
					
					case 2076495324:
						iVar0 = 1020;
						break;
					
					case -2089531990:
						iVar0 = 5000;
						break;
					
					case 202788691:
						iVar0 = 1760;
						break;
					
					case 371102273:
						iVar0 = 17200;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = 3680;
						break;
					
					case 899381934:
						iVar0 = 710;
						break;
					
					case -1023114086:
						iVar0 = 4800;
						break;
					
					case 2053798779:
						iVar0 = 12000;
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = 4900;
						break;
					
					case -287703709:
						iVar0 = 5600;
						break;
					
					case 1351683121:
						iVar0 = 5500;
						break;
					
					case -1755194916:
						iVar0 = 5200;
						break;
					
					case 2112683568:
						iVar0 = 4600;
						break;
					
					case 1062111910:
						iVar0 = 4700;
						break;
					
					case 146278587:
						iVar0 = 4800;
						break;
					
					case -494162961:
						iVar0 = 4300;
						break;
					
					case 2062808965:
						iVar0 = 4000;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 108;
						break;
					
					case -1284994289:
						iVar0 = 9950;
						break;
					
					case 2076495324:
						iVar0 = 2575;
						break;
					
					case -1657815255:
						iVar0 = 11350;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 202788691:
						iVar0 = 4275;
						break;
					
					case -1470645128:
						iVar0 = 16600;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 29;
						break;
					
					case 2063610803:
						iVar0 = 9150;
						break;
					
					case -2144080721:
						iVar0 = 13900;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 108;
						break;
					
					case 2089537806:
						iVar0 = 9975;
						break;
					
					case 1801039530:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 2525;
						break;
					
					case -1596416958:
						iVar0 = 11550;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 1929467122:
						iVar0 = 18000;
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = 3680;
						break;
					
					case -1444295948:
						iVar0 = -1;
						break;
					
					case -1023114086:
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_81(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0xA942498EEAA3EEAD(iVar2))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar2, iVar3, &Var43))
						{
							if (!func_183(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_176(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (iParam0 == 1317494643)
									{
										if (func_83() && (func_165() || func_164()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 9175;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2885));
						break;
					
					case 899381934:
						iVar0 = 1675;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4337));
						break;
					
					case 1709866683:
						iVar0 = 12050;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4338));
						break;
					
					case -684126074:
						iVar0 = Global_262145.f_10572;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4415));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = Global_262145.f_20607;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2886));
						break;
					
					case 899381934:
						iVar0 = 1825;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4339));
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20608;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4340));
						break;
					
					case -966439566:
						iVar0 = Global_262145.f_11956;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 9400;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2888));
						break;
					
					case 899381934:
						iVar0 = 1975;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4341));
						break;
					
					case -1023114086:
						iVar0 = 12200;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4342));
						break;
					
					case -1686714580:
						iVar0 = Global_262145.f_10571;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 9325;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2889));
						break;
					
					case 899381934:
						iVar0 = 1900;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4345));
						break;
					
					case -1657815255:
						iVar0 = 10800;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4347));
						break;
					
					case -1489156508:
						iVar0 = 12150;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4346));
						break;
					
					case 1215999497:
						iVar0 = Global_262145.f_10575;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 9475;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2890));
						break;
					
					case 2043113590:
						iVar0 = Global_262145.f_16127;
						break;
					
					case 2076495324:
						iVar0 = 2050;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4348));
						break;
					
					case 1019656791:
						iVar0 = 10825;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4350));
						break;
					
					case -1023114086:
						iVar0 = 12250;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4349));
						break;
					
					case 663170192:
						iVar0 = Global_262145.f_10574;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4419));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 9550;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2892));
						break;
					
					case -604986051:
						iVar0 = Global_262145.f_16122;
						break;
					
					case 202788691:
						iVar0 = 4200;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4358));
						break;
					
					case 2076495324:
						iVar0 = 2125;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4355));
						break;
					
					case -1657815255:
						iVar0 = 10850;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4357));
						break;
					
					case -1489156508:
						iVar0 = 12300;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4356));
						break;
					
					case 1319990579:
						iVar0 = Global_262145.f_10568;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4405));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 9775;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2893));
						break;
					
					case -1167922891:
						iVar0 = Global_262145.f_16121;
						break;
					
					case 202788691:
						iVar0 = 4350;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4366));
						break;
					
					case 2076495324:
						iVar0 = 2350;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4363));
						break;
					
					case -1596416958:
						iVar0 = 10900;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4365));
						break;
					
					case -2089531990:
						iVar0 = 12450;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4364));
						break;
					
					case -660892072:
						iVar0 = Global_262145.f_10570;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4408));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 9925;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2895));
						break;
					
					case 2076495324:
						iVar0 = 2425;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4368));
						break;
					
					case -1439939148:
						iVar0 = 10950;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4370));
						break;
					
					case -2089531990:
						iVar0 = 12500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4369));
						break;
					
					case 930927479:
						iVar0 = Global_262145.f_10569;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 9850;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2896));
						break;
					
					case 1006677997:
						iVar0 = 10925;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4371));
						break;
					
					case -690308418:
						iVar0 = Global_262145.f_11957;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 10000;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2897));
						break;
					
					case 202788691:
						iVar0 = 4425;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4393));
						break;
					
					case -1596416958:
						iVar0 = 10975;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4394));
						break;
					
					case -1828795171:
						iVar0 = Global_262145.f_11958;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4409));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 1750;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4375));
						break;
					
					case -435637410:
						iVar0 = 12350;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4376));
						break;
					
					case -1562927653:
						iVar0 = Global_262145.f_11953;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4417));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 9625;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2899));
						break;
					
					case 202788691:
						iVar0 = 4275;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4379));
						break;
					
					case 2076495324:
						iVar0 = 2200;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4380));
						break;
					
					case -2089531990:
						iVar0 = 12350;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 12400;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4382));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4383));
						break;
					
					case -1489156508:
						iVar0 = 12050;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4384));
						break;
					
					case 1077065191:
						iVar0 = Global_262145.f_10577;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 99;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4385));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4386));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4395));
						break;
					
					case 2076495324:
						iVar0 = 2500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4391));
						break;
					
					case -1439939148:
						iVar0 = 11000;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2891));
						break;
					
					case 2076495324:
						iVar0 = 2275;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4351));
						break;
					
					case -1657815255:
						iVar0 = 10875;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4354));
						break;
					
					case -1489156508:
						iVar0 = 12400;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4352));
						break;
					
					case 663517359:
						iVar0 = Global_262145.f_11954;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			
			case 1627465347:
				switch (iParam1)
				{
					case 484812453:
						iVar0 = 0;
						break;
					
					case -355941776:
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 0;
						break;
					
					case 2063610803:
						iVar0 = Global_262145.f_7180;
						break;
					
					case -2144080721:
						iVar0 = Global_262145.f_11955;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 0;
						break;
					
					case 2089537806:
						iVar0 = Global_262145.f_7185;
						break;
					
					case 1801039530:
						iVar0 = Global_262145.f_16124;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7188;
						break;
					
					case -1596416958:
						iVar0 = Global_262145.f_7184;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_7182;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7187;
						break;
					
					case 1929467122:
						iVar0 = Global_262145.f_11959;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = Global_262145.f_7186;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_7190;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7183;
						break;
					
					case 2053798779:
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 0;
						break;
					
					case -1284994289:
						iVar0 = Global_262145.f_7193;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7196;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_7191;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_7192;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7194;
						break;
					
					case -1470645128:
						iVar0 = Global_262145.f_11960;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			
			case 137902532:
				switch (iParam1)
				{
					case 1168357051:
						iVar0 = 0;
						break;
					
					case 867832552:
						iVar0 = Global_262145.f_7668;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case 984333226:
				switch (iParam1)
				{
					case 844049759:
						iVar0 = 0;
						break;
					
					case -1759709443:
						iVar0 = Global_262145.f_8392;
						break;
					
					case -2000168365:
						iVar0 = Global_262145.f_16128;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8393;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_8394;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = Global_262145.f_8398;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8399;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_8401;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8402;
						break;
					
					case 371102273:
						iVar0 = Global_262145.f_8403;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_14622));
						break;
					
					case 2076495324:
						iVar0 = 2300;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4377));
						break;
					
					case -1489156508:
						iVar0 = 12450;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_83() && (func_165() || func_164()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_2887));
						break;
					
					case 899381934:
						iVar0 = 2000;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4343));
						break;
					
					case -1489156508:
						iVar0 = 12250;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4344));
						break;
					
					case 2008591151:
						iVar0 = Global_262145.f_10573;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_83() && (func_165() || func_164()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = Global_262145.f_10576;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = Global_262145.f_10893;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4423));
						break;
					
					case -287703709:
						iVar0 = Global_262145.f_10894;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4424));
						break;
					
					case 1351683121:
						iVar0 = Global_262145.f_10895;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4425));
						break;
					
					case -1755194916:
						iVar0 = Global_262145.f_10896;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4426));
						break;
					
					case 2112683568:
						iVar0 = Global_262145.f_10897;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4427));
						break;
					
					case 1062111910:
						iVar0 = Global_262145.f_10898;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4428));
						break;
					
					case 146278587:
						iVar0 = Global_262145.f_10899;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4429));
						break;
					
					case -494162961:
						iVar0 = Global_262145.f_10900;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4430));
						break;
					
					case 2062808965:
						iVar0 = Global_262145.f_10901;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = Global_262145.f_10918;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4433));
						break;
					
					case -1444295948:
						iVar0 = Global_262145.f_16126;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_10919;
						iVar0 = floor((to_float(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			
			case -538741184:
				switch (iParam1)
				{
					case -1858624256:
						iVar0 = 0;
						break;
					
					case 1530822070:
						iVar0 = Global_262145.f_12801;
						break;
					
					case -409758110:
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			
			case -1045183535:
				switch (iParam1)
				{
					case -377062173:
						iVar0 = 0;
						break;
					
					case 384708672:
						iVar0 = Global_262145.f_12859;
						break;
					
					case -1802258419:
						iVar0 = Global_262145.f_12800;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			
			case 1649403952:
				switch (iParam1)
				{
					case 1363085923:
						iVar0 = 0;
						break;
					
					case 1509923832:
						iVar0 = Global_262145.f_14552;
						break;
					
					case -972590066:
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			
			case -275439685:
				switch (iParam1)
				{
					case 703231006:
						iVar0 = 0;
						break;
				}
				break;
			
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						iVar0 = 0;
						break;
					
					case -1820405577:
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			
			case 171789620:
				switch (iParam1)
				{
					case 1125642654:
						iVar0 = 0;
						break;
					
					case 860508675:
						iVar0 = Global_262145.f_20603;
						break;
					
					case 1857603803:
						iVar0 = Global_262145.f_16125;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20604;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_20606;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						iVar0 = 0;
						break;
					
					case -785724817:
						iVar0 = Global_262145.f_20724;
						break;
					
					case -1478681000:
						iVar0 = Global_262145.f_20725;
						break;
					
					case 1675665560:
						iVar0 = Global_262145.f_20726;
						break;
					
					case -76490669:
						iVar0 = Global_262145.f_20727;
						break;
					
					case -282298175:
						iVar0 = Global_262145.f_20728;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20729;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20730;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20731;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20732;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20733;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_20734;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20735;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20736;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20737;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20738;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20739;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20740;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20741;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20742;
						break;
					
					case 1134861606:
						iVar0 = 0;
						break;
					
					case 1447477866:
						iVar0 = Global_262145.f_20743;
						break;
					
					case -1860492113:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 937772107:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1401650071:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 628662130:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -985047251:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -812944463:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1447352303:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -60338860:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2088750491:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1513913454:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1179558480:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						iVar0 = 0;
						break;
					
					case 1574296533:
						iVar0 = Global_262145.f_20744;
						break;
					
					case 626875735:
						iVar0 = Global_262145.f_20745;
						break;
					
					case 1141059345:
						iVar0 = Global_262145.f_20746;
						break;
					
					case 1025884839:
						iVar0 = Global_262145.f_20747;
						break;
					
					case 391640422:
						iVar0 = Global_262145.f_20748;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20749;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20750;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20751;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20752;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20753;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_20754;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20755;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20756;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20757;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20758;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20759;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20760;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20761;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20762;
						break;
					
					case -2093598721:
						iVar0 = 0;
						break;
					
					case -1958983669:
						iVar0 = Global_262145.f_20763;
						break;
					
					case 1272803094:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1080719624:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 792221348:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -452181427:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -746774737:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -2044296061:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -199171978:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1428075016:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1735153315:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1796459838:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -631911105:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						iVar0 = 0;
						break;
					
					case 400507625:
						iVar0 = Global_262145.f_20764;
						break;
					
					case 696788003:
						iVar0 = Global_262145.f_20765;
						break;
					
					case 1475288264:
						iVar0 = Global_262145.f_20766;
						break;
					
					case -1020871238:
						iVar0 = Global_262145.f_20767;
						break;
					
					case -161179835:
						iVar0 = Global_262145.f_20768;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20769;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20770;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20771;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20772;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20773;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20774;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20775;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20776;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20777;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20778;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20779;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20780;
						break;
					
					case -1018236364:
						iVar0 = 0;
						break;
					
					case -1243457701:
						iVar0 = Global_262145.f_20781;
						break;
					
					case 1249283253:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -857707587:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1097543898:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 1980349969:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1219453777:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -1853459190:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -2074781016:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 457967755:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 235171324:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 42685294:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -687617715:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						iVar0 = 0;
						break;
					
					case 752418717:
						iVar0 = Global_262145.f_20782;
						break;
					
					case -130689324:
						iVar0 = Global_262145.f_20783;
						break;
					
					case 1005144310:
						iVar0 = Global_262145.f_20785;
						break;
					
					case 247526935:
						iVar0 = Global_262145.f_20786;
						break;
					
					case -1981031769:
						iVar0 = Global_262145.f_20784;
						break;
					
					case -2101279869:
						iVar0 = Global_262145.f_20787;
						break;
					
					case -1135289737:
						iVar0 = 0;
						break;
					
					case -1233121104:
						iVar0 = Global_262145.f_20788;
						break;
					
					case 776198721:
						iVar0 = Global_262145.f_20789;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_20790;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_20791;
						break;
					
					case 1764221345:
						iVar0 = Global_262145.f_20792;
						break;
					
					case -1869205321:
						iVar0 = 0;
						break;
					
					case 277524638:
						iVar0 = Global_262145.f_20793;
						break;
					
					case -130843390:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -977347227:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -378461067:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 329939175:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 643374672:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 807875052:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1401804168:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1096495395:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -847811454:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1413108537:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1815270123:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						iVar0 = 0;
						break;
					
					case 1591132456:
						iVar0 = Global_262145.f_20794;
						break;
					
					case -2046910199:
						iVar0 = Global_262145.f_20796;
						break;
					
					case 1329061674:
						iVar0 = Global_262145.f_20795;
						break;
					
					case 733837882:
						iVar0 = Global_262145.f_20797;
						break;
					
					case 634039983:
						iVar0 = Global_262145.f_20798;
						break;
					
					case 1140676955:
						iVar0 = Global_262145.f_20799;
						break;
					
					case -1898661008:
						iVar0 = Global_262145.f_20800;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_20801;
						break;
					
					case 568543123:
						iVar0 = Global_262145.f_20802;
						break;
					
					case 1550611612:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 368550800:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1769069349:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 24902297:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -228041614:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -584961562:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1153175946:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1301287696:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1597093459:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1769871776:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1827882671:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						iVar0 = 0;
						break;
					
					case -1182573778:
						iVar0 = Global_262145.f_20803;
						break;
					
					case 974903034:
						iVar0 = Global_262145.f_20805;
						break;
					
					case 190476639:
						iVar0 = Global_262145.f_20804;
						break;
					
					case -644734235:
						iVar0 = Global_262145.f_20806;
						break;
					
					case 2146055916:
						iVar0 = Global_262145.f_20807;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20808;
						break;
					
					case -1613015470:
						iVar0 = Global_262145.f_20809;
						break;
					
					case -452809877:
						iVar0 = Global_262145.f_20810;
						break;
					
					case 1038927834:
						iVar0 = Global_262145.f_20811;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20812;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20813;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20814;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20815;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20816;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20817;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20818;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20819;
						break;
					
					case -653246751:
						iVar0 = 0;
						break;
					
					case -1520117877:
						iVar0 = Global_262145.f_20820;
						break;
					
					case -996700057:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 940943685:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1263226800:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -328035840:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1224100642:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 899228776:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 616006309:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1561952511:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 572063080:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1170588613:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 966612367:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						iVar0 = 0;
						break;
					
					case 1315288101:
						iVar0 = Global_262145.f_22461;
						break;
					
					case 1004815965:
						iVar0 = Global_262145.f_22462;
						break;
					
					case -380098265:
						iVar0 = Global_262145.f_22460;
						break;
					
					case -1618338827:
						iVar0 = Global_262145.f_22459;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22488;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22489;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22490;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22491;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_22492;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_22493;
						break;
					
					case -474112444:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 387223451:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 617753366:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -222378256:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 8741501:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -601286203:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -511433605:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -655387818:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -282476598:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1739501925:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1178671645:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						iVar0 = 0;
						break;
					
					case -568352468:
						iVar0 = Global_262145.f_22463;
						break;
					
					case 1362433589:
						iVar0 = Global_262145.f_22467;
						break;
					
					case 1346235024:
						iVar0 = Global_262145.f_22465;
						break;
					
					case -570355066:
						iVar0 = Global_262145.f_22466;
						break;
					
					case -2023373174:
						iVar0 = Global_262145.f_22464;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22494;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22495;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22496;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22497;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_22498;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22499;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22500;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22501;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22502;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22503;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22504;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22505;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22506;
						break;
					
					case -415870039:
						iVar0 = 0;
						break;
					
					case -109086661:
						iVar0 = Global_262145.f_22507;
						break;
					
					case -737430213:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1125852043:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 886015732:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1262287139:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -295208411:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -544154504:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 172765678:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1982877449:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2072122460:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1986220171:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1377355801:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						iVar0 = 0;
						break;
					
					case -829683854:
						iVar0 = Global_262145.f_23374;
						break;
					
					case -1055790298:
						iVar0 = Global_262145.f_22483;
						break;
					
					case -1928301566:
						iVar0 = Global_262145.f_22485;
						break;
					
					case -424845447:
						iVar0 = Global_262145.f_22484;
						break;
					
					case -1876057490:
						iVar0 = Global_262145.f_22482;
						break;
					
					case 1246324211:
						iVar0 = Global_262145.f_22539;
						break;
					
					case 1205768792:
						iVar0 = Global_262145.f_22540;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_22541;
						break;
					
					case -1434287169:
						iVar0 = Global_262145.f_22542;
						break;
					
					case 259780317:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1973342474:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1996130345:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1455657812:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1668263084:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 1308243489:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 1122574335:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1420313469:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 109848390:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 593945703:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1142457062:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						iVar0 = 0;
						break;
					
					case -422587990:
						iVar0 = Global_262145.f_22468;
						break;
					
					case -193998727:
						iVar0 = Global_262145.f_22472;
						break;
					
					case -515203373:
						iVar0 = Global_262145.f_22470;
						break;
					
					case 1842849902:
						iVar0 = Global_262145.f_22471;
						break;
					
					case -679861550:
						iVar0 = Global_262145.f_22469;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22508;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22509;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22510;
						break;
					
					case 1528590652:
						iVar0 = 0;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22511;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22512;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22513;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22514;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22515;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22516;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22517;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22518;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22519;
						break;
					
					case 941317513:
						iVar0 = 0;
						break;
					
					case 1748450780:
						iVar0 = Global_262145.f_22520;
						break;
					
					case -1869284448:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1931539634:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1624199183:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -26834113:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -210406055:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 423313640:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 276639596:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -991356863:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1682848301:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 996213771:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1214048550:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						iVar0 = 0;
						break;
					
					case -958864266:
						iVar0 = Global_262145.f_22473;
						break;
					
					case 231258687:
						iVar0 = Global_262145.f_22474;
						break;
					
					case 284438159:
						iVar0 = Global_262145.f_22476;
						break;
					
					case 15712037:
						iVar0 = Global_262145.f_22475;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22521;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22522;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_22523;
						break;
					
					case 654802123:
						iVar0 = Global_262145.f_22524;
						break;
					
					case -1069552225:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 11918884:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 176157112:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -220052855:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 288456487:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 398658626:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 628697006:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 925911836:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1222307441:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 552442715:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -648943513:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						iVar0 = 0;
						break;
					
					case -273676760:
						iVar0 = Global_262145.f_22477;
						break;
					
					case -89655827:
						iVar0 = Global_262145.f_22481;
						break;
					
					case 1130501904:
						iVar0 = Global_262145.f_22479;
						break;
					
					case -1449330342:
						iVar0 = Global_262145.f_22480;
						break;
					
					case -2111807319:
						iVar0 = Global_262145.f_22478;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22525;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22526;
						break;
					
					case -944910075:
						iVar0 = Global_262145.f_22527;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22528;
						break;
					
					case 1704640795:
						iVar0 = 0;
						break;
					
					case 1005743559:
						iVar0 = Global_262145.f_22538;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22529;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22530;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22531;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22532;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22533;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22534;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22535;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22536;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22537;
						break;
					
					case -1371515465:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1190793877:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1497085720:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1803148180:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1975971886:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 36929477:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -268444834:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -574769446:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -882699739:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1468181474:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -974541230:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1355376991:
				switch (iParam1)
				{
					case -673450233:
						iVar0 = 0;
						break;
				}
				break;
			
			case 727643628:
				switch (iParam1)
				{
					case 1423184737:
						iVar0 = 0;
						break;
					
					case -2122814295:
						iVar0 = Global_262145.f_27905;
						break;
					
					case -1828202758:
						iVar0 = Global_262145.f_27906;
						break;
				}
				break;
			
			default:
				iVar65 = func_81(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < unk_0xA942498EEAA3EEAD(iVar65))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar65, iVar66, &Var106))
						{
							if (!func_183(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (unk_0x8CD06866876216F2() && func_118())
	{
		StringCopy(&Var144, func_181(iParam1, iParam0), 16);
		func_116(&sVar128, Var144, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, 1, func_57(iParam0), func_117(iParam0), -1, 0, 0);
		if (unk_0x437ABF4F514F6471(&sVar128))
		{
			iVar0 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_180(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_180(int iParam0, int iParam1, float fParam2)
{
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x8CD06866876216F2() && func_118())
	{
		return 1f;
	}
	if (!unk_0x8CD06866876216F2())
	{
		*iParam1 = floor((to_float(*iParam1) * fParam2));
	}
	if (!Global_76622)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_161(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0,1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0,15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0,25f;
			}
		}
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = floor((to_float(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (to_float(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = floor((to_float(*iParam1) * Global_262145.f_77));
			if (func_129())
			{
				fVar1 = (fVar1 + (to_float(Global_262145.f_122) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = floor((to_float(*iParam1) * fVar0));
	return fVar0;
}

char* func_181(int iParam0, int iParam1)
{
	if (iParam1 == -656458692)
	{
		switch (iParam0)
		{
			case -213504205:
				return "WT_KNUCKLE";
				break;
			
			case -971770235:
				return "WCT_KNUCK_02";
				break;
			
			case -287703709:
				return "WCT_KNUCK_BG";
				break;
			
			case 1351683121:
				return "WCT_KNUCK_DLR";
				break;
			
			case -1755194916:
				return "WCT_KNUCK_DMD";
				break;
			
			case 2112683568:
				return "WCT_KNUCK_HT";
				break;
			
			case 1062111910:
				return "WCT_KNUCK_LV";
				break;
			
			case 146278587:
				return "WCT_KNUCK_PC";
				break;
			
			case -494162961:
				return "WCT_KNUCK_SLG";
				break;
			
			case 2062808965:
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case 1967214384:
			return "WCT_RAIL";
			break;
		
		case 202788691:
			return "WCT_GRIP";
			break;
		
		case 899381934:
			return "WCT_FLASH";
			break;
		
		case 2076495324:
			return "WCT_FLASH";
			break;
		
		case -1657815255:
			return "WCT_SCOPE_MAC";
			break;
		
		case 1019656791:
			return "WCT_SCOPE_MAC";
			break;
		
		case -1439939148:
			return "WCT_SCOPE_SML";
			break;
		
		case 1006677997:
			return "WCT_SCOPE_SML";
			break;
		
		case -1596416958:
			return "WCT_SCOPE_MED";
			break;
		
		case -767279652:
			return "WCT_SCOPE_LRG";
			break;
		
		case -1135289737:
			return "WCT_SCOPE_MAX";
			break;
		
		case -1023114086:
			return "WCT_SUPP";
			break;
		
		case -2089531990:
			return "WCT_SUPP";
			break;
		
		case -1489156508:
			return "WCT_SUPP";
			break;
		
		case -435637410:
			return "WCT_SUPP";
			break;
		
		case -19858063:
			return "WCT_CLIP1";
			break;
		
		case -316253668:
			return "WCT_CLIP2";
			break;
		
		case 119648377:
			return "WCT_CLIP1";
			break;
		
		case -696561875:
			return "WCT_CLIP2";
			break;
		
		case 834974250:
			return "WCT_CLIP1";
			break;
		
		case 614078421:
			return "WCT_CLIP2";
			break;
		
		case -884429072:
			return "WCT_CLIP1";
			break;
		
		case 283556395:
			return "WCT_CLIP2";
			break;
		
		case 643254679:
			return "WCT_CLIP1";
			break;
		
		case 889808635:
			return "WCT_CLIP2";
			break;
		
		case -1101075946:
			return "WCT_CLIP1";
			break;
		
		case -1323216997:
			return "WCT_CLIP2";
			break;
		
		case -1614924820:
			return "WCT_CLIP1";
			break;
		
		case -1861183855:
			return "WCT_CLIP2";
			break;
		
		case -91250417:
			return "WCT_CLIP1";
			break;
		
		case -1899902599:
			return "WCT_CLIP2";
			break;
		
		case -197857404:
			return "WCT_CLIP1";
			break;
		
		case -2112517305:
			return "WCT_CLIP2";
			break;
		
		case -503336118:
			return "WCT_CLIP1";
			break;
		
		case -691692330:
			return "WCT_CLIP2";
			break;
		
		case -1796727865:
			return "WCT_CLIP1";
			break;
		
		case -2034401422:
			return "WCT_CLIP2";
			break;
		
		case -1681506167:
			return "WCT_CLIP1";
			break;
		
		case 1198478068:
			return "WCT_CLIP1";
			break;
		
		case -924946682:
			return "WCT_CLIP2";
			break;
		
		case -1928132688:
			return "WCT_CLIP1";
			break;
		
		case -1152981993:
			return "WCT_CLIP2";
			break;
		
		case 580369945:
			return "WCT_CLIP1";
			break;
		
		case -640439150:
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case -125817127:
			return "WCT_CLIP1";
			break;
		
		case 2063610803:
			return "WCT_CLIP2";
			break;
		
		case 1168357051:
			return "WCT_CLIP1";
			break;
		
		case 867832552:
			return "WCT_CLIP2";
			break;
		
		case 844049759:
			return "WCT_CLIP1";
			break;
		
		case -667205311:
			return "WCT_CLIP1";
			break;
		
		case -1759709443:
			return "WCT_CLIP2";
			break;
		
		case -855823675:
			return "WCT_CLIP2";
			break;
		
		case 471997210:
			return "WCT_SCOPE_LRG";
			break;
		
		case 1709866683:
			return "WCT_SUPP";
			break;
		
		case 1125642654:
			return "WCT_CLIP1";
			break;
		
		case 860508675:
			return "WCT_CLIP2";
			break;
		
		case -878820883:
			return "WCT_CLIP1";
			break;
		
		case 1198425599:
			return "WCT_CLIP1";
			break;
		
		case -1188271751:
			return "WCT_CLIP2";
			break;
		
		case 1319990579:
			return "WCT_VAR_GOLD";
			break;
		
		case 930927479:
			return "WCT_VAR_METAL";
			break;
		
		case -660892072:
			return "WCT_VAR_GOLD";
			break;
		
		case -1686714580:
			return "WCT_VAR_METAL";
			break;
		
		case -684126074:
			return "WCT_VAR_GOLD";
			break;
		
		case 2008591151:
			return "WCT_VAR_SIL";
			break;
		
		case 2053798779:
			return "WCT_VAR_WOOD";
			break;
		
		case 663170192:
			return "WCT_VAR_GOLD";
			break;
		
		case 1215999497:
			return "WCT_VAR_GOLD";
			break;
		
		case -2052698631:
			return "WCT_VAR_METAL";
			break;
		
		case 1077065191:
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case 663517359:
			return "WCT_VAR_GOLD";
			break;
		
		case -1470645128:
			return "WCT_VAR_METAL";
			break;
		
		case -1828795171:
			return "WCT_VAR_ETCHM";
			break;
		
		case -966439566:
			return "WCT_VAR_GOLD";
			break;
		
		case -690308418:
			return "WCT_VAR_GOLD";
			break;
		
		case -1562927653:
			return "WCT_VAR_GOLD";
			break;
		
		case -2144080721:
			return "WCT_VAR_WOOD";
			break;
		
		case 1929467122:
			return "WCT_VAR_ETCHM";
			break;
		
		case -1858624256:
			return "WCT_SB_BASE";
			break;
		
		case 1530822070:
			return "WCT_SB_VAR1";
			break;
		
		case -409758110:
			return "WCT_SB_VAR2";
			break;
		
		case -377062173:
			return "WCT_CLIP1";
			break;
		
		case 384708672:
			return "WCT_REV_VARB";
			break;
		
		case -1802258419:
			return "WCT_REV_VARG";
			break;
		
		case 2043113590:
			return "WCT_CLIP_DRM";
			break;
		
		case -1167922891:
			return "WCT_CLIP_BOX";
			break;
		
		case -604986051:
			return "WCT_CLIP_DRM";
			break;
		
		case -2000168365:
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case -1214048550:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case -829683854:
			return "WCT_CLIP2";
			break;
		
		case -944910075:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		case -673450233:
			return "WCT_VAR_RAY18";
			break;
		
		case 1423184737:
			return "WCT_CLIP1";
			break;
		
		case -2122814295:
			return "WCT_CLIP2";
			break;
		
		case -1828202758:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_81(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0xA942498EEAA3EEAD(iVar0))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_182(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_182(var uParam0)
{
	return uParam0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_184(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 186956100;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0x26D671D457F484A6(uParam0->f_27[iParam1]));
	if (iVar0 == -1716589765)
	{
		return -1891639499;
	}
	else if (!unk_0x8CD06866876216F2() && iVar0 == -270015777)
	{
		return -612732598;
	}
	else if (iVar0 == -947031628)
	{
		return 72096805;
	}
	else if (iVar0 == -572349828)
	{
		return -1422136292;
	}
	else if (iVar0 == -1654528753)
	{
		return -75356570;
	}
	else if (iVar0 == 392730790)
	{
		return -1806594651;
	}
	else if (iVar0 == -1887867191)
	{
		return 1783415536;
	}
	return 186956100;
}

int func_185(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (unk_0x8CD06866876216F2())
	{
		if ((((iParam3 == 46 || iParam3 == 47) || iParam3 == 48) || iParam3 == 49) || iParam3 == 52)
		{
			return func_79(iParam0);
		}
	}
	if (bParam2)
	{
		if (iParam1 == 3)
		{
			if (Local_154.f_186 != 12)
			{
				return 0;
			}
		}
		else if (Local_154.f_186 == 12)
		{
			return 0;
		}
	}
	if (iParam0 == 966099553)
	{
		return 1;
	}
	if (!func_198(iParam0))
	{
		return 0;
	}
	if (func_186(iParam0, Local_154, iParam1))
	{
		return 0;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_35() == 0)
		{
			if (iParam0 == 911657153)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1834241177:
			if (!func_83() || unk_0x8CD06866876216F2())
			{
				return 1;
			}
			break;
		
		case -102973651:
			if (unk_0x8CD06866876216F2())
			{
				if (!func_83())
				{
					return !Global_262145.f_19752;
				}
			}
			else if (!func_83())
			{
				return 1;
			}
			break;
		
		case 1627465347:
			if (unk_0x8CD06866876216F2())
			{
				if ((!Global_262145.f_6599 && !func_193(iParam0, -1, 0)) && !Global_262145.f_11555)
				{
					return 1;
				}
			}
			break;
		
		case -1466123874:
			if (unk_0x8CD06866876216F2())
			{
				if (!Global_262145.f_7794 && !func_193(iParam0, -1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2138347493:
			if (!unk_0x8CD06866876216F2())
			{
				return 1;
			}
			else if (Global_262145.f_7803)
			{
				return 1;
			}
			break;
		
		case -1951375401:
			if (unk_0x8CD06866876216F2())
			{
				if (!Global_262145.f_11577 && !func_193(iParam0, -1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 317205821:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17058 && Global_262145.f_17051)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1121678507:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17059 && Global_262145.f_17052)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 125959754:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17060 && Global_262145.f_17053)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1169823560:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17061 && Global_262145.f_17054)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1810795771:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17062 && Global_262145.f_17055)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -853065399:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17063 && Global_262145.f_17056)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 419712736:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xDD0E7998AE8AD485() > Global_262145.f_17064 && Global_262145.f_17057)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case -1075685676:
		case 2024373456:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			if (iParam1 != -1)
			{
				if (iParam1 == 46)
				{
					return 0;
				}
			}
			if (unk_0x7F8A39872A07D2CE("AM_PI_MENU", unk_0xBB0808A181D4745C()))
			{
				return 0;
			}
			if (iParam1 != -1)
			{
				if (((iParam1 == 47 || iParam1 == 48) || iParam1 == 49) || iParam1 == 52)
				{
					return 0;
				}
			}
			return 1;
			break;
		
		case -1746263880:
			if (unk_0x8CD06866876216F2())
			{
				if (func_189() && Global_262145.f_22487)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 940833800:
			return 1;
			break;
		
		case -1355376991:
			if (unk_0x8CD06866876216F2())
			{
				if (Global_262145.f_24978)
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
				return 1;
			}
			break;
		
		case 1198256469:
			if (unk_0x8CD06866876216F2())
			{
				if (Global_262145.f_25970)
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
				return 1;
			}
			break;
		
		case -1238556825:
			if (unk_0x8CD06866876216F2())
			{
				if (Global_262145.f_25969)
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
				return 1;
			}
			break;
		
		case -1168940174:
			return 1;
			break;
		
		case -1853920116:
			if (unk_0x8CD06866876216F2())
			{
				if (func_188())
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
				return 1;
			}
			break;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (!func_187(iParam0, iParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -72657034:
		case 324215364:
		case 736523883:
		case 2017895192:
		case -270015777:
		case 487013001:
		case -494615257:
		case -1074790547:
		case -2084633992:
		case -1357824103:
		case 100416529:
		case 205991906:
		case -1660422300:
		case 2144741730:
		case -1312131151:
		case -1568386805:
		case 1119849093:
		case -1654528753:
		case 1627465347:
		case -1063057011:
		case 2132975508:
		case -1466123874:
		case -952879014:
		case 984333226:
		case 171789620:
		case -598887786:
		case 1834241177:
		case 1672152130:
		case 883325847:
		case 741814745:
		case -1420407917:
		case -1169823560:
		case -1813897027:
		case -37975472:
		case 137902532:
		case -1716589765:
		case -1076751822:
		case 453432689:
		case 1593441988:
		case 584646201:
		case 911657153:
		case -771403250:
		case -619010992:
		case -102323637:
		case -581044007:
		case 1317494643:
		case -102973651:
		case 1737195953:
		case -656458692:
		case -1834847097:
		case -1716189206:
			iVar0 = 1;
			break;
	}
	if (iParam1 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_188()
{
	if (func_39(28158, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_189()
{
	if (func_190(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar0 = 0;
	iVar1 = func_192(iParam0, iParam1);
	uVar2 = func_191(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_191(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_192(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

bool func_193(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_53())
	{
		return 0;
	}
	if (func_158() == 0)
	{
		return 0;
	}
	if (iParam0 != -72657034 && iParam0 != 1834241177)
	{
		if (func_196(func_197(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_194(iParam0, iParam1);
	iVar1 = func_57(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

var func_194(int iParam0, int iParam1)
{
	uVar0 = func_31(func_195(iParam0), iParam1, 0);
	return uVar0;
}

int func_195(int iParam0)
{
	iVar0 = func_57(iParam0);
	iVar1 = func_52(iVar0);
	if ((func_35() == 0 || func_51() == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2418;
				break;
			}
	}
	return 11511;
}

int func_196(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_32(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 18;
			break;
		
		case -1813897027:
			return 66;
			break;
		
		case -37975472:
			return 68;
			break;
		
		case 741814745:
			return 70;
			break;
		
		case 615608432:
			return 72;
			break;
		
		case 453432689:
			return 18;
			break;
		
		case 1593441988:
			return 40;
			break;
		
		case -1716589765:
			return 22;
			break;
		
		case 584646201:
			return 24;
			break;
		
		case 324215364:
			return 26;
			break;
		
		case 736523883:
			return 28;
			break;
		
		case -270015777:
			return 30;
			break;
		
		case -1074790547:
			return 32;
			break;
		
		case -2084633992:
			return 34;
			break;
		
		case -1357824103:
			return 36;
			break;
		
		case -1660422300:
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case 487013001:
			return 44;
			break;
		
		case 2017895192:
			return 46;
			break;
		
		case -1654528753:
			return 48;
			break;
		
		case -494615257:
			return 50;
			break;
		
		case 100416529:
			return 54;
			break;
		
		case 205991906:
			return 56;
			break;
		
		case -1568386805:
			return 60;
			break;
		
		case -1312131151:
			return 62;
			break;
		
		case 1119849093:
			return 64;
			break;
		
		case 911657153:
			return 52;
			break;
		
		case 883325847:
			return 75;
			break;
		
		case -1716189206:
			return 2;
			break;
		
		case 1737195953:
			return 4;
			break;
		
		case 1317494643:
			return 12;
			break;
		
		case -1786099057:
			return 14;
			break;
		
		case -2067956739:
			return 6;
			break;
		
		case 1141786504:
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case 2144741730:
			return 40;
			break;
		
		case -102323637:
			return 143;
			break;
		
		case -1063057011:
			return 283;
			break;
		
		case -1076751822:
			return 145;
			break;
		
		case -771403250:
			return 281;
			break;
		
		case 2132975508:
			return 285;
			break;
		
		case 1627465347:
			return 287;
			break;
		
		case -1834847097:
			return 308;
			break;
		
		case 137902532:
			return 310;
			break;
		
		case 2138347493:
			return 312;
			break;
		
		case -1466123874:
			return 314;
			break;
		
		case 984333226:
			return 326;
			break;
		
		case -952879014:
			return 328;
			break;
		
		case -1420407917:
			return 332;
			break;
		
		case 1672152130:
			return 334;
			break;
		
		case 171789620:
			return 336;
			break;
		
		case -656458692:
			return 338;
			break;
		
		case -598887786:
			return 340;
			break;
		
		case -102973651:
			return 330;
			break;
		
		case -581044007:
			return 342;
			break;
		
		case -619010992:
			return 344;
			break;
		
		case 1649403952:
			return 347;
			break;
		
		case -275439685:
			return 349;
			break;
		
		case -1951375401:
			return 351;
			break;
		
		case -1045183535:
			return 354;
			break;
		
		case -538741184:
			return 356;
			break;
		
		case 317205821:
			return 361;
			break;
		
		case -1121678507:
			return 367;
			break;
		
		case 125959754:
			return 365;
			break;
		
		case -853065399:
			return 363;
			break;
		
		case -1169823560:
			return 369;
			break;
		
		case -1810795771:
			return 371;
			break;
		
		case 419712736:
			return 10;
			break;
		
		case 961495388:
			return 32;
			break;
		
		case -86904375:
			return 34;
			break;
		
		case -608341376:
			return 40;
			break;
		
		case 177293209:
			return 56;
			break;
		
		case -1075685676:
			return 18;
			break;
		
		case 2024373456:
			return 28;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case 1785463520:
			return 328;
			break;
		
		case 1432025498:
			return 44;
			break;
		
		case -879347409:
			return 354;
			break;
		
		case -2009644972:
			return 145;
			break;
		
		case -1768145561:
			return 283;
			break;
		
		case -1746263880:
			return 395;
			break;
		
		case 940833800:
			return 401;
			break;
		
		case -1355376991:
			return 403;
			break;
		
		case 1198256469:
			return 403;
			break;
		
		case -1238556825:
			return 403;
			break;
		
		case -1853920116:
			return 411;
			break;
		
		case 727643628:
			return 409;
			break;
		
		case -1168940174:
			return 413;
			break;
	}
	return 2;
}

bool func_198(int iParam0)
{
	if (iParam0 == -61829581)
	{
		if (unk_0x8CD06866876216F2() && func_170())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 2138347493 && !unk_0x8CD06866876216F2())
	{
		return 0;
	}
	switch (iParam0)
	{
		case -270015777:
			if (!unk_0x8CD06866876216F2())
			{
				if (!func_200(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case 2017895192:
			if (unk_0x8CD06866876216F2())
			{
				if (!func_200(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case 1834241177:
			if (!func_83() || unk_0x8CD06866876216F2())
			{
				return 0;
			}
			break;
		
		case -102973651:
			if (!unk_0x8CD06866876216F2())
			{
				if (!func_83() && !Global_262145.f_19752)
				{
					return 0;
				}
			}
			break;
		
		case -656458692:
		case -598887786:
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x037F36BEA9A47381())
	{
		if (unk_0x6532540B34EE6273(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (unk_0x232048AB4B0E0259(Var1) || func_199(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return unk_0x43B59FAC2AA8CE4D(iParam0);
}

int func_199(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_200(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_668.f_1312, 2))
		{
			return 1;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		if (!bParam1 || unk_0x58424C49F8924842())
		{
			if (!unk_0xBA301E03A078FA59() && !unk_0x33A494591F2C1975())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x9AE561F9BC3F06D8())
		{
			return 0;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_235(iParam2, 8, 0, 0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar0 = unk_0x12AB0310C2281427("v_gun");
	iVar1 = unk_0x12AB0310C2281427("v_gun2");
	iVar2 = unk_0x12AB0310C2281427("gr_grdlc_int_01");
	iVar3 = unk_0x12AB0310C2281427("xm_x17dlc_int_01");
	iVar4 = unk_0x12AB0310C2281427("ba_dlc_int_03_ba");
	iVar5 = unk_0x12AB0310C2281427("xs_x18_int_mod");
	iVar6 = unk_0x12AB0310C2281427("ch_dlc_plan");
	iVar7 = unk_0x12AB0310C2281427(func_7(iParam0));
	fVar8 = -0,05f;
	fVar9 = 0,92f;
	fVar10 = 1,94f;
	fVar11 = 2,99f;
	fVar12 = 3,7f;
	bVar13 = false;
	if (unk_0x8CD06866876216F2())
	{
		if (func_83() || Global_262145.f_19752)
		{
			bVar13 = true;
		}
	}
	else if (func_83())
	{
		bVar13 = true;
	}
	if ((unk_0xDD0E7998AE8AD485() > Global_262145.f_17061 && Global_262145.f_17054) && unk_0x8CD06866876216F2())
	{
		if (iVar7 == iVar0)
		{
			vVar14 = { 23f, -1108,65f, 29,55f };
			vVar17 = { 23,07f, -1108,5f, 29,55f };
		}
		else
		{
			vVar14 = { 1695,31f, 3760,17f, 34,46f };
			vVar17 = { 1695,22f, 3760,29f, 34,457f };
		}
	}
	else if (iVar7 == iVar0)
	{
		vVar14 = { 22,79f, -1108,442f, 29,5878f };
		vVar17 = { 22,93f, -1108,282f, 29,557f };
	}
	else
	{
		vVar14 = { 1695,068f, 3760,049f, 34,4655f };
		vVar17 = { 1694,928f, 3760,189f, 34,4655f };
	}
	if (((((iVar7 != iVar2 && iVar7 != iVar3) && iVar7 != iVar4) && iVar7 != iVar5) && iVar7 != iVar6) && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 4, 0, -72657034, 1, 19,7012f, -1103,268f, 31,3153f, -10,75f, 0f, -200f, 0f, 0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1820140472, 324215364, 16, 19,6809f, -1103,098f, 30,753f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1820140472, 324215364, 16, 19,52f, -1103,05f, 30,8f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1820140472, 736523883, 30, 19,5978f, -1103,076f, 30,361f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1820140472, 736523883, 30, 19,54f, -1103,05f, 30,36f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1820140472, -270015777, 30, 20,7097f, -1103,477f, 31,489f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, -1878508229, 2017895192, 8, 20,53f, -1103,41f, 31,4f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1878508229, 487013001, 8, 20,5371f, -1103,415f, 31,131f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, -1878508229, 487013001, 8, 20,48f, -1103,4f, 30,9f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1878508229, -494615257, 8, 20,5226f, -1103,468f, 30,781f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, -1878508229, -494615257, 8, 20,62f, -1103,44f, 30,43f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 218444191, -1074790547, 30, 21,62219f, -1103,803f, 31,471f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 218444191, -1074790547, 30, 21,65f, -1103,79f, 31,37f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 218444191, -2084633992, 30, 21,6639f, -1103,817f, 31,156f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 218444191, -2084633992, 30, 21,7f, -1103,81f, 30,89f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 218444191, -1357824103, 30, 21,6752f, -1103,849f, 30,745f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 218444191, -1357824103, 30, 21,7f, -1103,81f, 30,41f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1285032059, 100416529, 10, 22,61f, -1104,16f, 30,78f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1285032059, 100416529, 10, 22,61f, -1104,16f, 30,9f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1285032059, 205991906, 6, 22,56f, -1104,14f, 30,35f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1285032059, 205991906, 6, 22,56f, -1104,14f, 30,42f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1788949567, -1660422300, 54, 20,4875f, -1103,447f, 30,36f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1788949567, -1660422300, 54, 23,99f, -1104,71f, 31,17f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1788949567, 2144741730, 100, 21,5992f, -1103,867f, 30,36f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1788949567, 2144741730, 100, 24,08f, -1104,77f, 30,58f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1742569970, -1312131151, 1, 24,37f, -1104,84f, 31,44f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1742569970, -1312131151, 1, 25,6f, -1105,35f, 31,35f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1003267566, -1568386805, 10, 24,0825f, -1104,755f, 31,1125f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1003267566, -1568386805, 10, 25,38f, -1105,22f, 30,96f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1614428030, 1119849093, 50, 23,9675f, -1104,77f, 30,757f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, -1614428030, 1119849093, 50, 25,28f, -1105,25f, 30,47f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1788949567, 1198256469, Global_262145.f_25982, 25,2725f, -1105,213f, 31,427f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1614428030, -1238556825, Global_262145.f_25983, 25,22f, -1105,228f, 31,057f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 1, 0, -1716189206, 1, 19,647f, -1105,051f, 29,54f, -89,9802f, 65f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 1:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_235(iParam2, 1, 0, 1737195953, 1, 19,881f, -1105,446f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_235(iParam2, 1, 0, 1737195953, 1, 19,961f, -1105,476f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 1, 0, 1737195953, 1, 19,861f, -1105,446f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						else
						{
							func_235(iParam2, 1, 0, 1737195953, 1, 20,081f, -1105,516f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 2:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_235(iParam2, 1, 0, 1317494643, 1, 20,411f, -1105,616f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_235(iParam2, 1, 0, 1317494643, 1, 20,651f, -1105,676f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 1, 0, 1317494643, 1, 20,361f, -1105,566f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						else
						{
							func_235(iParam2, 1, 0, 1317494643, 1, 20,491f, -1105,626f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 1, 0, -102323637, 1, 19,597f, -1105,301f, 29,56f, -89,966f, 110f, 0f, 0f, 0f, 0,475f, 75f, -60f, 0f);
						}
						else
						{
							func_235(iParam2, 1, 0, -102323637, 1, 19,597f, -1105,301f, 29,56f, -89,966f, 110f, 0f, 0f, 0f, 0,475f, 75f, -60f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 1, 0, -656458692, 1, 20,147f, -1105,131f, 29,56f, -2,5f, 95f, 168f, 0f, 0f, 0,475f, 265f, 210f, 30f);
						}
						else
						{
							func_235(iParam2, 1, 0, -656458692, 1, 20,147f, -1105,131f, 29,56f, -2,5f, 95f, 168f, 0f, 0f, 0,475f, 265f, 210f, 30f);
						}
						break;
				}
				break;
			
			case 8:
				if (unk_0x8CD06866876216F2())
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, 0, 911657153, 1, 21,925f, -1105,835f, 29,5454f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 1:
							func_235(iParam2, 0, 1950175060, 584646201, 18, 22,1775f, -1106,162f, 29,5387f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 2:
							func_235(iParam2, 0, 1950175060, 1593441988, 12, 22,284f, -1105,931f, 29,5407f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 3:
							func_235(iParam2, 0, 1950175060, 453432689, 12, 22,5315f, -1106,292f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 4:
							func_235(iParam2, 0, 1950175060, -1716589765, 24, 22,914f, -1106,419f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, 0, 911657153, 1, 21,9484f, -1105,858f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, 1950175060, 584646201, 18, 22,2075f, -1106,177f, 29,5387f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, 1950175060, 1593441988, 12, 22,319f, -1105,969f, 29,5407f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, 1950175060, 453432689, 12, 22,454f, -1106,262f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, 1950175060, -1716589765, 24, 22,814f, -1106,382f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 2, -435287898, -37975472, 1, 23,2676f, -1107,351f, 29,6454f, 0f, 0f, 245f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 2, 214501711, -1813897027, 1, 23,0382f, -1108,005f, 29,5878f, 0f, 0f, 245f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 2, 1411692055, 741814745, 1, vVar14, 0f, 0f, 25f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 3:
						func_235(iParam2, 2, -1356724057, -1420407917, 1, vVar17, 0f, 0f, 25f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 4:
						func_235(iParam2, 2, 357983224, -1169823560, 1, 23,15f, -1108,4f, 29,546f, 90f, -154f, 0f, 0f, 0f, 0,475f, 90f, -26f, -60f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 5, 0, 883325847, 5000, 22,9739f, -1109,181f, 29,6053f, 90f, 0f, 115f, -0,278f, -0,073f, 0,693f, -90f, 0f, 0f);
						break;
					
					case 1:
						if ((unk_0x8CD06866876216F2() && func_189()) && Global_262145.f_22487)
						{
							func_235(iParam2, 0, 1950175060, -1746263880, 3, 22,8f, -1108,48f, 29,545f, -90f, 0f, -110f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[0], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[1], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[2], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[3], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[4], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[5], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[7], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[6], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[8], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[9], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[10], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[11], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[12], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[13], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[14], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[15], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[16], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[17], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[18], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[19], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 16:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 3, 0, -1569615261, 20, 16,2547f, -1110,088f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 3, 0, -1569615261, 40, 16,4693f, -1109,498f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 3, 0, -1569615261, 60, 16,6786f, -1108,923f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 3, 0, -1569615261, 80, 16,3512f, -1109,822f, 29,9462f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 3, 0, -1569615261, 100, 16,5802f, -1109,193f, 29,9462f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 17:
				switch (iParam4)
				{
					case 0:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_235(iParam2, 1, 0, -581044007, 1, 20,767f, -1105,751f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_235(iParam2, 1, 0, -581044007, 1, 20,907f, -1105,781f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 1, 0, -581044007, 1, 20,767f, -1105,751f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						else
						{
							func_235(iParam2, 1, 0, -581044007, 1, 20,827f, -1105,771f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 1:
						func_235(iParam2, 1, 0, -1834847097, 1, 19,687f, -1105,151f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 1, 0, -538741184, 1, 19,762f, -1105,274f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 1, 0, -1951375401, 1, 20,141f, -1105,416f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 4:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_235(iParam2, 1, 0, -102973651, 1, 20,201f, -1105,496f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_235(iParam2, 1, 0, -102973651, 1, 20,341f, -1105,526f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						break;
				}
				break;
			
			case 18:
				if (unk_0x8CD06866876216F2())
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, 1950175060, -1076751822, 12, 21,6115f, -1105,967f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 1:
							func_235(iParam2, 0, 1950175060, -771403250, 36, 21,859f, -1106,075f, 29,562f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 2:
							func_235(iParam2, 0, 1950175060, 137902532, 14, 22,959f, -1106,185f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
							break;
						
						case 3:
							func_235(iParam2, 0, 1173416293, 1198879012, 2, 23,15f, -1107,6f, 29,545f, -90f, -0,5f, -110f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, 1950175060, -1076751822, 12, 22,674f, -1106,102f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, 1950175060, -771403250, 36, 21,714f, -1105,992f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, 1950175060, 137902532, 14, 22,994f, -1106,222f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, 1173416293, 1198879012, 2, 21,885f, -1105,835f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 19:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[20], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[21], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[22], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[23], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 20:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1950175060, -1045183535, 12, 21,6059f, -1105,711f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
						}
						else
						{
							func_235(iParam2, 0, 1950175060, -1045183535, 12, 21,6059f, -1105,711f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1950175060, -619010992, 24, 21,9285f, -1105,841f, 29,562f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
						}
						else
						{
							func_235(iParam2, 0, 1950175060, -619010992, 24, 21,6161f, -1105,727f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
					
					case 2:
						if ((unk_0x8CD06866876216F2() && func_189()) && Global_262145.f_22487)
						{
							func_235(iParam2, 0, 1003267566, 125959754, 1, 22,92f, -1108,18f, 29,545f, -90f, 0f, -110f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						else
						{
							func_235(iParam2, 0, 1003267566, 125959754, 1, 22,86f, -1108,33f, 29,545f, -90f, 0f, -110f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1726673363, 1672152130, 1, 24,4025f, -1104,853f, 30,3595f, 0f, 0f, -20f, 0,35f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1950175060, 727643628, 24, 22,654f, -1106,072f, 29,5416f, -90f, 0f, 6f, 0f, 0f, 0,475f, 90f, 0f, -26f);
						}
						break;
				}
				break;
			
			case 21:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 1, 0, -1810795771, 1, 20,434f, -1105,161f, 29,54f, 0f, 90f, -19,5f, 0f, 0f, 0,43f, 0f, -45f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 1, 0, -853065399, 1, 20,994f, -1105,771f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,43f, 45f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 1, 0, 419712736, 1, 20,634f, -1105,671f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, 1285032059, -952879014, 8, 25,3925f, -1105,182f, 30,732f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_235(iParam2, 0, -1878508229, 984333226, 6, 25,4075f, -1105,167f, 30,367f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
		}
		if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
		{
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = 31,365f;
					break;
				
				case 1:
					iParam2->f_1.f_2 = 31,017f;
					break;
				
				case 2:
					iParam2->f_1.f_2 = 30,681f;
					break;
				
				case 3:
					iParam2->f_1.f_2 = 30,265f;
					break;
				}
		}
		if (*iParam2 == -1466123874)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == 2138347493)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,245f, 0f, 0f) };
		}
		if (*iParam2 == -1063057011)
		{
			if (unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0,03f) };
			}
			else
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
			}
		}
		if (*iParam2 == -1654528753)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == 171789620)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,05f, 0f, 0f) };
		}
		if (*iParam2 == -1853920116)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == 1672152130)
		{
			if (!unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,4f, 0f, 0f) };
			}
		}
		if (*iParam2 == 984333226)
		{
			if (!unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,01f, 0f, 0f) };
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			fVar8 = -0,05f;
			fVar9 = 0,92f;
			fVar10 = 1,94f;
			fVar11 = 2,99f;
			fVar12 = 3,7f;
		}
		else
		{
			fVar8 = -0,05f;
			fVar9 = 0,99f;
			fVar10 = 2,18f;
			fVar11 = 3,34f;
			fVar12 = 3,7f;
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar8)) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar9)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar10)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar11)) };
		}
		else if (iParam3 == 15)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar12)) };
		}
	}
	if (iVar7 == iVar1 && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -72657034, 1689,082f, 3759,161f, 36,2236f, 0f, 0f, -132f, 0f, 0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 324215364, 1688,883f, 3759,17f, 35,67f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 324215364, 1688,8f, 3759,09f, 35,7f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						func_234(iParam2, 736523883, 1688,82f, 3759,1f, 35,27f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -270015777, 1689,693f, 3760,031f, 36,398f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 2017895192, 1689,51f, 3759,85f, 36,3f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 487013001, 1689,51f, 3759,83f, 36,04f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 487013001, 1689,51f, 3759,83f, 35,8f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -494615257, 1689,612f, 3759,863f, 35,69f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -494615257, 1689,56f, 3759,91f, 35,34f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1074790547, 1690,327f, 3760,753f, 36,38f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -1074790547, 1690,32f, 3760,76f, 36,27f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -2084633992, 1690,367f, 3760,793f, 36,03f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -2084633992, 1690,36f, 3760,8f, 35,79f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1357824103, 1690,379f, 3760,773f, 35,65f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -1357824103, 1690,35f, 3760,8f, 35,32f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 100416529, 1691,02f, 3761,51f, 35,685f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 100416529, 1691,02f, 3761,51f, 35,81f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 205991906, 1690,99f, 3761,47f, 35,28f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 205991906, 1690,99f, 3761,47f, 35,32f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1660422300, 1689,604f, 3759,869f, 35,27f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -1660422300, 1692,06f, 3762,57f, 36,08f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 2144741730, 1690,387f, 3760,716f, 35,28f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 2144741730, 1692,15f, 3762,63f, 35,49f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1312131151, 1692,32f, 3762,84f, 36,38f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -1312131151, 1693,26f, 3763,82f, 36,26f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1568386805, 1692,104f, 3762,608f, 36,03f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -1568386805, 1693,12f, 3763,72f, 35,88f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 1119849093, 1692,062f, 3762,524f, 35,675f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 1119849093, 1693,06f, 3763,56f, 35,39f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 1198256469, 1692,995f, 3763,491f, 36,35f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -1238556825, 1692,971f, 3763,463f, 35,99f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -1716189206, 1690,703f, 3758,437f, 34,449f, -90f, 0f, 0f, 0f, 0f, 0,475f, 35f, 0f, 0f);
						break;
					
					case 1:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_234(iParam2, 1737195953, 1691,133f, 3758,507f, 34,4425f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_234(iParam2, 1737195953, 1691,183f, 3758,547f, 34,443f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 1737195953, 1691,133f, 3758,517f, 34,443f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 1737195953, 1691,233f, 3758,647f, 34,443f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 2:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_234(iParam2, 1317494643, 1691,5f, 3758,95f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_234(iParam2, 1317494643, 1691,653f, 3759,13f, 34,449f, -89,98f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 1317494643, 1691,423f, 3758,88f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, 1317494643, 1691,493f, 3758,97f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -102323637, 1690,903f, 3758,287f, 34,466f, -89,9657f, 42,9f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -102323637, 1690,903f, 3758,287f, 34,466f, -89,9657f, 42,9f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -656458692, 1690,943f, 3758,847f, 34,415f, -182f, 96,0003f, 41f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -656458692, 1690,943f, 3758,847f, 34,415f, -182f, 96,0003f, 41f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 8:
				if (unk_0x8CD06866876216F2())
				{
					switch (iParam4)
					{
						case 0:
							func_234(iParam2, 911657153, 1692,277f, 3760,185f, 34,4537f, -90f, -73f, 0f, 0f, 0f, 0,475f, 90f, 73f, 45f);
							break;
						
						case 1:
							func_234(iParam2, 584646201, 1692,722f, 3760,345f, 34,447f, -90f, -73f, 0f, 0f, 0f, 0,475f, 90f, 73f, 45f);
							break;
						
						case 2:
							func_234(iParam2, 1593441988, 1692,542f, 3760,539f, 34,449f, -90f, -73f, 0f, 0f, 0f, 0,475f, 90f, 73f, 45f);
							break;
						
						case 3:
							func_234(iParam2, 453432689, 1692,989f, 3760,618f, 34,4499f, -90f, -72,5f, 0f, 0f, 0f, 0,475f, 90f, 72,5f, 45f);
							break;
						
						case 4:
							func_234(iParam2, -1716589765, (1693,159f + 0,07f), (3760,838f + 0,09f), 34,4499f, -90f, -72,5f, 0f, 0f, 0f, 0,475f, 90f, 72,5f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_234(iParam2, 911657153, 1692,352f, 3760,272f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 1:
							func_234(iParam2, 584646201, 1692,622f, 3760,245f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_234(iParam2, 1593441988, 1692,592f, 3760,559f, 34,449f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 3:
							func_234(iParam2, 453432689, 1692,889f, 3760,528f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 4:
							func_234(iParam2, -1716589765, 1693,139f, 3760,818f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						}
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -37975472, 1694,224f, 3760,886f, 34,5537f, 0f, 0f, 310f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_234(iParam2, -1813897027, 1694,739f, 3760,423f, 34,4961f, 0f, 0f, 310f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_234(iParam2, 741814745, vVar14, 0f, 0f, 90f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 3:
						func_234(iParam2, -1420407917, vVar17, 0f, 0f, 90f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 4:
						func_234(iParam2, -1169823560, 1695,15f, 3760,39f, 34,455f, 90f, -90f, 0f, 0f, 0f, 0,475f, 90f, -90f, 0f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 5, 0, 883325847, 5000, 1695,804f, 3759,918f, 34,5136f, -90f, 0f, 2,5f, -0,278f, -0,073f, 0,693f, 90f, 0f, -2,5f);
						break;
					
					case 1:
						if ((unk_0x8CD06866876216F2() && func_189()) && Global_262145.f_22487)
						{
							func_234(iParam2, -1746263880, 1695,07f, 3760,02f, 34,454f, -90f, -47f, -88f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[0], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[1], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[2], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[3], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0,3f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[4], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[5], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[7], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[6], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[8], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[9], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[10], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[11], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[12], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[13], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[14], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[15], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[16], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[17], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[18], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[19], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 16:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -1569615261, 1694,045f, 3753,344f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_234(iParam2, -1569615261, 1693,583f, 3753,768f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_234(iParam2, -1569615261, 1693,133f, 3754,183f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_234(iParam2, -1569615261, 1693,838f, 3753,535f, 34,8608f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_234(iParam2, -1569615261, 1693,345f, 3753,988f, 34,8608f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 17:
				switch (iParam4)
				{
					case 0:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_234(iParam2, -581044007, 1691,765f, 3759,2f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_234(iParam2, -581044007, 1691,885f, 3759,36f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -581044007, 1691,765f, 3759,2f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						else
						{
							func_234(iParam2, -581044007, 1691,765f, 3759,22f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 1:
						func_234(iParam2, -1834847097, 1690,813f, 3758,442f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 2:
						func_234(iParam2, -538741184, 1690,95f, 3758,485f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 3:
						func_234(iParam2, -1951375401, 1691,223f, 3758,727f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 4:
						if (bVar13)
						{
							if (unk_0x8CD06866876216F2())
							{
								func_234(iParam2, -102973651, 1691,323f, 3758,79f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_234(iParam2, -102973651, 1691,403f, 3758,9f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						break;
				}
				break;
			
			case 18:
				if (unk_0x8CD06866876216F2())
				{
					switch (iParam4)
					{
						case 0:
							func_234(iParam2, -1076751822, 1692,289f, 3759,878f, 34,4499f, -90f, -72f, 0f, 0f, 0f, 0,475f, 90f, 72f, 45f);
							break;
						
						case 1:
							func_234(iParam2, -771403250, 1692,489f, 3760,065f, 34,447f, -90f, -73f, 0f, 0f, 0f, 0,475f, 90f, 73f, 45f);
							break;
						
						case 2:
							func_234(iParam2, 137902532, 1693,049f, 3761,088f, 34,4537f, -90f, -72,5f, 0f, 0f, 0f, 0,475f, 90f, 72,5f, 45f);
							break;
						
						case 3:
							func_234(iParam2, 1198879012, 1694,41f, 3760,68f, 34,4537f, -90f, -47f, -88f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_234(iParam2, -1076751822, 1692,859f, 3760,838f, 34,4499f, -90f, -46f, 0f, 0f, 0f, 0,475f, 90f, 46f, 45f);
							break;
						
						case 1:
							func_234(iParam2, -771403250, 1692,337f, 3759,945f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_234(iParam2, 137902532, 1693,109f, 3761,108f, 34,4537f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 3:
							func_234(iParam2, 1198879012, 1692,277f, 3760,185f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						}
				}
				break;
			
			case 19:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 7, 0, (*uParam1)[20], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 7, 0, (*uParam1)[21], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 7, 0, (*uParam1)[22], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 7, 0, (*uParam1)[23], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 20:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -1045183535, 1692,054f, 3759,98f, 34,4499f, -90f, -72f, 0f, 0f, 0f, 0,475f, 90f, 72f, 45f);
						break;
					
					case 1:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -619010992, 1692,312f, 3760,233f, 34,447f, -90f, -73f, 0f, 0f, 0f, 0,475f, 90f, 73f, 45f);
						}
						else
						{
							func_234(iParam2, -619010992, 1692,102f, 3759,973f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						break;
					
					case 2:
						if ((unk_0x8CD06866876216F2() && func_189()) && Global_262145.f_22487)
						{
							func_234(iParam2, 125959754, 1694,83f, 3760,25f, 34,454f, -90f, -47f, -88f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						else
						{
							func_234(iParam2, 125959754, 1694,95f, 3760,15f, 34,454f, -90f, -47f, -88f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 1672152130, 1692,281f, 3762,843f, 35,28f, 0f, 0f, 47,3919f, 0,35f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 727643628, 1692,794f, 3760,81f, 34,4499f, -90f, -72f, 0f, 0f, 0f, 0,475f, 90f, 72f, 45f);
						}
						break;
				}
				break;
			
			case 21:
				switch (iParam4)
				{
					case 0:
						func_234(iParam2, -1810795771, 1691,15f, 3759,175f, 34,449f, -89,9657f, 42,9f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 1:
						func_234(iParam2, -853065399, 1691,895f, 3759,38f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 2:
						func_234(iParam2, 419712736, 1691,645f, 3759,11f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 3:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, -952879014, 1693,021f, 3763,663f, 35,65f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (unk_0x8CD06866876216F2())
						{
							func_234(iParam2, 984333226, 1693,031f, 3763,693f, 35,29f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
		}
		if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
		{
			iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0,15f);
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = 36,275f;
					break;
				
				case 1:
					iParam2->f_1.f_2 = 35,929f;
					break;
				
				case 2:
					iParam2->f_1.f_2 = 35,593f;
					break;
				
				case 3:
					iParam2->f_1.f_2 = 35,177f;
					break;
				}
		}
		if (*iParam2 == -1466123874)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == 2138347493)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,245f, 0f, 0f) };
		}
		if (*iParam2 == -1063057011)
		{
			if (unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0,03f) };
			}
			else
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
			}
		}
		if (*iParam2 == -1654528753)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == 171789620)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,05f, 0f, 0f) };
		}
		if (*iParam2 == -1853920116)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == 1672152130)
		{
			if (!unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, 0,4f, 0f, 0f) };
			}
		}
		if (*iParam2 == 984333226)
		{
			if (!unk_0x8CD06866876216F2())
			{
				iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, -0,01f, 0f, 0f) };
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			fVar8 = -0,05f;
			fVar9 = 0,92f;
			fVar10 = 1,94f;
			fVar11 = 2,99f;
			fVar12 = 3,7f;
		}
		else
		{
			fVar8 = -0,05f;
			fVar9 = 0,99f;
			fVar10 = 2,18f;
			fVar11 = 3,34f;
			fVar12 = 3,7f;
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar8)) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar9)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar10)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar11)) };
		}
		else if (iParam3 == 15)
		{
			iParam2->f_1 = { unk_0x8A5E176FF719A014(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar12)) };
		}
	}
	if (iVar7 == iVar2 && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), func_13(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), func_13(2, 2) + Vector(0,85f, 1,15f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), func_13(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), func_13(45, 3) + Vector(0,85f, 1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), func_13(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), func_13(45, 3) + Vector(0,85f, 1,13f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), func_13(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), func_13(45, 3) + Vector(0,85f, 1,11f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 1:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), func_13(45, 3) + Vector(0,85f, 1,08f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 2:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), func_13(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), func_13(2, 2) + Vector(0,85f, 1,15f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), func_13(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), func_13(45, 3) + Vector(0,85f, 1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), func_13(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), func_13(45, 3) + Vector(0,85f, 1,13f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), func_13(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), func_13(45, 3) + Vector(0,85f, 1,11f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 3:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), func_13(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), func_13(45, 3) + Vector(0,85f, 1,08f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 4:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 5:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 6:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 7:
				if (func_232(2, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), func_13(2, 2) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_232(3, &uVar20))
				{
					switch (iParam4)
					{
						case 0:
							func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), func_13(45, 3) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			}
	}
	if (iVar7 == iVar3 || iParam6 == 1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,16f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,13f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,16f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), 517,605f, 4751,7f, -69,1f, 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,18f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,14f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,11f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,18f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			}
	}
	if (iVar7 == iVar4 || iParam6 == 1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0,03f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,13f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,14f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,03f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,21f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, 0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), Vector(-79,51f, -3015,85f, -1422,9f) + Vector(0f, -0,11f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			}
	}
	if (iVar7 == iVar5 || iParam6 == 1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0,03f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,13f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,14f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,03f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,21f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, 0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), Vector(-89,06f, 5200,17f, 203,065f) + Vector(0f, -0,11f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			}
	}
	if (iVar7 == iVar6 || iParam6 == 1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1076751822), -1076751822, func_230(-1076751822), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,02f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-1045183535), -1045183535, func_230(-1045183535), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,1f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1063057011), -1063057011, func_230(-1063057011), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,07f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(2132975508), 2132975508, func_230(2132975508), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,02f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(487013001), 487013001, func_230(487013001), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,12f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-952879014), -952879014, func_230(-952879014), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,08f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-2009644972), -2009644972, func_230(-2009644972), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,02f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(-879347409), -879347409, func_230(-879347409), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,1f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1768145561), -1768145561, func_230(-1768145561), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,07f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2066285827), -2066285827, func_230(-2066285827), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,02f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(1432025498), 1432025498, func_230(1432025498), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,12f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(1785463520), 1785463520, func_230(1785463520), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,08f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(453432689), 453432689, func_230(453432689), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,03f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(736523883), 736523883, func_230(736523883), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,04f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(-1074790547), -1074790547, func_230(-1074790547), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,07f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-2084633992), -2084633992, func_230(-2084633992), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,03f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(2144741730), 2144741730, func_230(2144741730), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,09f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(205991906), 205991906, func_230(205991906), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,16f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(-1075685676), -1075685676, func_230(-1075685676), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,03f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_235(iParam2, 0, func_231(2024373456), 2024373456, func_230(2024373456), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,08f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_235(iParam2, 0, func_231(961495388), 961495388, func_230(961495388), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,07f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_235(iParam2, 0, func_231(-86904375), -86904375, func_230(-86904375), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,03f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_235(iParam2, 0, func_231(-608341376), -608341376, func_230(-608341376), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,09f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_235(iParam2, 0, func_231(177293209), 177293209, func_230(177293209), Vector(-55,62f, -354,37f, 2715,03f) + Vector(0f, 0,16f, 0f), 0f, 0f, -90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			}
	}
	if (bParam5)
	{
		if (*iParam2 == -1569615261)
		{
			func_209(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), iParam4);
		}
		else
		{
			func_209(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), 0);
		}
	}
	if (iVar7 == iVar0)
	{
		iVar21 = 28;
	}
	else if (iVar7 == iVar1)
	{
		iVar21 = 29;
	}
	else if (iVar7 == iVar2)
	{
		iVar21 = 46;
	}
	else if (iVar7 == iVar3)
	{
		iVar21 = 47;
	}
	else if (iVar7 == iVar4)
	{
		iVar21 = 48;
	}
	else if (iVar7 == iVar5)
	{
		iVar21 = 49;
	}
	else if (iVar7 == iVar6)
	{
		iVar21 = 52;
	}
	func_208(iVar21, iParam0, &(iParam2->f_1));
	func_204(iVar21, iParam0, &(iParam2->f_4));
	if (iParam2->f_24 == 7)
	{
		if (*iParam2 == 966099553)
		{
			iVar22 = 0;
			while (iVar22 < 25)
			{
				if (uParam1->f_80[iVar22] == iParam3 && uParam1->f_54[iVar22] == iParam4)
				{
					iParam2->f_23 = iVar22;
				}
				iVar22++;
			}
		}
		else if (*iParam2 != 0)
		{
			if (*iParam2 == -61829581)
			{
				iParam2->f_24 = 6;
			}
			else if (*iParam2 == -656458692)
			{
				iParam2->f_24 = 1;
			}
			else
			{
				func_202(iParam2, *iParam2);
				switch (unk_0x654E7ACE881E41FE(*iParam2))
				{
					case 416676503:
					case -957766203:
					case 970310034:
					case 1159398588:
					case 860033945:
					case -1212426201:
					case -1569042529:
					case 88899580:
					case 690389602:
						iParam2->f_24 = 0;
						break;
					
					case -728555052:
					case -37788308:
					case 1595662460:
					case 507375312:
					case -755518101:
					case -801780072:
					case 431593103:
						iParam2->f_24 = 1;
						break;
					
					case 1548507267:
						iParam2->f_24 = 2;
						break;
					}
				}
			}
	}
	return *iParam2 != 0;
}

void func_202(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -270015777:
			func_203(uParam0, 1820140472, 30);
			break;
		
		case -1654528753:
			func_203(uParam0, -1878508229, 8);
			break;
		
		case -1716589765:
			func_203(uParam0, 1950175060, 12);
			break;
		
		case 2017895192:
			func_203(uParam0, -1878508229, 8);
			break;
		
		case -619010992:
			func_203(uParam0, 1820140472, 18);
			break;
		
		case 1198256469:
			func_203(uParam0, 1788949567, Global_262145.f_25982);
			break;
		
		case -1238556825:
			func_203(uParam0, -1614428030, Global_262145.f_25983);
			break;
		
		default:
			if (func_81(iParam1, &Var0) != -1)
			{
				func_203(uParam0, Var0.f_5, Var0.f_6);
			}
			break;
	}
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_25 = iParam1;
	uParam0->f_22 = iParam2;
}

void func_204(int iParam0, int iParam1, var uParam2)
{
	func_205(iParam0, &uVar0, &vVar3);
	func_205(iParam1, &uVar6, &vVar9);
	while (vVar9.z > 180f)
	{
		vVar9.z = (vVar9.z - 360f);
	}
	while (vVar9.z < -180f)
	{
		vVar9.z = (vVar9.z + 360f);
	}
	while (vVar3.z > 180f)
	{
		vVar3.z = (vVar3.z - 360f);
	}
	while (vVar3.z < -180f)
	{
		vVar3.z = (vVar3.z + 360f);
	}
	uParam2->f_2 = (uParam2->f_2 + (vVar9.z - vVar3.z));
	while (uParam2->f_2 > 180f)
	{
		uParam2->f_2 = (uParam2->f_2 - 360f);
	}
	while (uParam2->f_2 < -180f)
	{
		uParam2->f_2 = (uParam2->f_2 + 360f);
	}
}

int func_205(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -1:
			break;
		
		case 0:
			*uParam1 = { -821,61f, -183,79f, 37,43f };
			*uParam2 = { 0f, 0f, func_207(-2,6f) };
			break;
		
		case 1:
			*uParam1 = { 133,97f, -1708,3f, 29,48f };
			*uParam2 = { 0f, 0f, func_207(-3,84f) };
			break;
		
		case 2:
			*uParam1 = { -1284,88f, -1115,09f, 7,18f };
			*uParam2 = { 0f, 0f, func_207(-4,71f) };
			break;
		
		case 3:
			*uParam1 = { 1930,9f, 3727,41f, 33,03f };
			*uParam2 = { 0f, 0f, func_207(-2,62f) };
			break;
		
		case 4:
			*uParam1 = { 1210,92f, -470,18f, 66,39f };
			*uParam2 = { 0f, 0f, func_207(-4,97f) };
			break;
		
		case 5:
			*uParam1 = { -30,28f, -151,18f, 57,26f };
			*uParam2 = { 0f, 0f, func_207(-0,35f) };
			break;
		
		case 6:
			*uParam1 = { -278,21f, 6231,15f, 31,88f };
			*uParam2 = { 0f, 0f, func_207(-5,49f) };
			break;
		
		case 7:
			*uParam1 = { 74,6f, -1392,09f, 29,53f };
			*uParam2 = { 0f, 0f, func_207(-1,57f) };
			break;
		
		case 8:
			*uParam1 = { 1694,87f, 4822,11f, 42,22f };
			*uParam2 = { 0f, 0f, func_207(-4,58f) };
			break;
		
		case 9:
			*uParam1 = { 426,35f, -807,12f, 29,65f };
			*uParam2 = { 0f, 0f, func_207(-4,71f) };
			break;
		
		case 10:
			*uParam1 = { -1101,41f, 2711,75f, 19,26f };
			*uParam2 = { 0f, 0f, func_207(-2,41f) };
			break;
		
		case 11:
			*uParam1 = { 1197,49f, 2711f, 38,38f };
			*uParam2 = { 0f, 0f, func_207(-3,14f) };
			break;
		
		case 12:
			*uParam1 = { -822,1f, -1072,44f, 11,48f };
			*uParam2 = { 0f, 0f, func_207(-2,62f) };
			break;
		
		case 13:
			*uParam1 = { 4,75f, 6511,3f, 32,03f };
			*uParam2 = { 0f, 0f, func_207(-5,54f) };
			break;
		
		case 14:
			*uParam1 = { -1193,51f, -767,47f, 17,33f };
			*uParam2 = { 0f, 0f, func_207(-2,5f) };
			break;
		
		case 15:
			*uParam1 = { 613,6f, 2762,76f, 42,1f };
			*uParam2 = { 0f, 0f, func_207(-1,5f) };
			break;
		
		case 16:
			*uParam1 = { 126,36f, -224,03f, 54,57f };
			*uParam2 = { 0f, 0f, func_207(1,22f) };
			break;
		
		case 17:
			*uParam1 = { -3170f, 1043,45f, 20,87f };
			*uParam2 = { 0f, 0f, func_207(1,16f) };
			break;
		
		case 18:
			*uParam1 = { -708,59f, -152,21f, 37,09f };
			*uParam2 = { 0f, 0f, func_207(-1,05f) };
			break;
		
		case 19:
			*uParam1 = { -164,82f, -302,45f, 39,41f };
			*uParam2 = { 0f, 0f, func_207(1,24f) };
			break;
		
		case 20:
			*uParam1 = { -1449,23f, -238,49f, 49,49f };
			*uParam2 = { 0f, 0f, func_207(-2,3f) };
			break;
		
		case 21:
			break;
		
		case 22:
			*uParam1 = { 320,59f, 181,43f, 103,79f };
			*uParam2 = { 0f, 0f, func_207(-1,92f) };
			break;
		
		case 23:
			*uParam1 = { 1861,29f, 3748,57f, 33,24f };
			*uParam2 = { 0f, 0f, func_207(-5,67f) };
			break;
		
		case 24:
			*uParam1 = { -290,83f, 6199,93f, 31,69f };
			*uParam2 = { 0f, 0f, func_207(-2,27f) };
			break;
		
		case 25:
			*uParam1 = { -1152,24f, -1424,77f, 5,16f };
			*uParam2 = { 0f, 0f, func_207(-4,1f) };
			break;
		
		case 26:
			*uParam1 = { 1324,44f, -1650,99f, 52,47f };
			*uParam2 = { 0f, 0f, func_207(-4,03f) };
			break;
		
		case 27:
			*uParam1 = { -3170,92f, 1073,84f, 21,04f };
			*uParam2 = { 0f, 0f, func_207(-0,41f) };
			break;
		
		case 28:
			*uParam1 = { 23,6862f, -1106,461f, 29,9159f };
			*uParam2 = { 0f, 0f, 160f };
			break;
		
		case 29:
			*uParam1 = { 1693,572f, 3761,601f, 34,8242f };
			*uParam2 = { 0f, 0f, -132,6081f };
			break;
		
		case 30:
			*uParam1 = { 252,8583f, -51,6284f, 70,06f };
			*uParam2 = { 0f, 0f, 69,9999f };
			break;
		
		case 31:
			*uParam1 = { 841,0564f, -1034,762f, 28,3137f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 32:
			*uParam1 = { -330,2908f, 6085,548f, 31,5737f };
			*uParam2 = { 0f, 0f, -135,0001f };
			break;
		
		case 33:
			*uParam1 = { -660,9294f, -934,1031f, 21,9481f };
			*uParam2 = { 0f, 0f, 180f };
			break;
		
		case 34:
			*uParam1 = { -1304,976f, -395,8181f, 36,8147f };
			*uParam2 = { 0f, 0f, 75,7783f };
			break;
		
		case 35:
			*uParam1 = { -1117,612f, 2700,264f, 18,673f };
			*uParam2 = { 0f, 0f, -138,1729f };
			break;
		
		case 36:
			*uParam1 = { -3172,511f, 1089,412f, 20,9576f };
			*uParam2 = { 0f, 0f, -113,4187f };
			break;
		
		case 37:
			*uParam1 = { 2566,592f, 293,1332f, 108,8538f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 38:
			*uParam1 = { 808,8609f, -2158,508f, 29,7379f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 39:
			*uParam1 = { -1148,15f, -2003,86f, 13,89f };
			*uParam2 = { 0f, 0f, func_207(2,36f) };
			break;
		
		case 40:
			*uParam1 = { 730,73f, -1073,13f, 23,02f };
			*uParam2 = { 0f, 0f, func_207(1,57f) };
			break;
		
		case 41:
			*uParam1 = { -343,62f, -131,44f, 39,71f };
			*uParam2 = { 0f, 0f, func_207(-1,92f) };
			break;
		
		case 42:
			*uParam1 = { 106,42f, 6623,02f, 33,52f };
			*uParam2 = { 0f, 0f, func_207(0,78f) };
			break;
		
		case 43:
			*uParam1 = { 1180,45f, 2639,85f, 39,48f };
			*uParam2 = { 0f, 0f, func_207(-3,14f) };
			break;
		
		case 44:
			*uParam1 = { -202,98f, -1312,58f, 29,89f };
			*uParam2 = { 0f, 0f, func_207(-1,57f) };
			break;
		
		case 45:
			*uParam1 = { func_21(Global_100839) };
			*uParam2 = { 0f, 0f, func_207(-1f) };
			break;
		
		case 46:
			if (Global_1590374 != func_1100())
			{
				if (func_20(Global_1590374))
				{
					*uParam1 = { func_13(2, 2) };
				}
				else if (func_12(Global_1590374))
				{
					*uParam1 = { func_13(45, 3) };
				}
			}
			break;
		
		case 47:
			*uParam1 = { 518,675f, 4752,354f, -68,073f };
			*uParam2 = { -6,512f, 0f, 119,031f };
			break;
		
		case 48:
			*uParam1 = { -1422,197f, -3015,803f, -79,1603f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 49:
			*uParam1 = { 203,0799f, 5200,189f, -89,6f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 52:
			*uParam1 = { 2714,547f, -354,2701f, -55,1867f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 50:
			*uParam1 = { Global_1696048 };
			*uParam2 = { Global_1696051 };
			break;
		
		case 51:
			*uParam1 = { 1100f, 220f, -50f };
			*uParam2 = { 0f, 0f, 0f };
			break;
	}
	if (func_206(*uParam1, 0f, 0f, 0f, 0) && func_206(*uParam2, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_206(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_207(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_208(int iParam0, int iParam1, var uParam2)
{
	if (func_206(*uParam2, 0f, 0f, 0f, 0))
	{
		return;
	}
	func_205(iParam0, &vVar0, &vVar3);
	func_205(iParam1, &vVar6, &vVar9);
	vVar12 = { *uParam2 - vVar0 };
	vVar12 = { func_15(vVar12, -vVar3.z) };
	vVar12 = { func_15(vVar12, vVar9.z) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar6, 0f, vVar12) };
}

bool func_209(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!unk_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case -1569615261:
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			
			case -72657034:
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case 324215364:
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			
			case 736523883:
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			
			case 2017895192:
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			
			case 487013001:
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			
			case -494615257:
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			
			case -1074790547:
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			
			case -2084633992:
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			
			case -1357824103:
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			
			case 100416529:
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			
			case 205991906:
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			
			case -1660422300:
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			
			case 2144741730:
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			
			case -1312131151:
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			
			case -1568386805:
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			
			case 1119849093:
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			
			case -1716189206:
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case 1737195953:
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case 911657153:
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case 584646201:
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			
			case 1593441988:
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			
			case 453432689:
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			
			case -37975472:
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case -1813897027:
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case 741814745:
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			
			case 883325847:
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			
			case -270015777:
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			
			case -1654528753:
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			
			case -1716589765:
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			
			case 1317494643:
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			
			case -1063057011:
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			
			case 2132975508:
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			
			case 1834241177:
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			
			case -102973651:
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			
			case 1672152130:
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			
			case -1420407917:
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			
			case -656458692:
				*uParam1 = 7500;
				*uParam2 = 0;
				break;
			
			case -598887786:
				*uParam1 = 4350;
				*uParam2 = 5;
				break;
			
			case 171789620:
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			
			case -581044007:
				*uParam1 = 8900;
				*uParam2 = 0;
				break;
			
			case -619010992:
				*uParam1 = 6250;
				*uParam2 = 85;
				break;
			
			case -1045183535:
				*uParam1 = Global_262145.f_8655;
				*uParam2 = Global_262145.f_8656;
				break;
			
			case -538741184:
				*uParam1 = Global_262145.f_8657;
				*uParam2 = 0;
				break;
			
			default:
				if (func_81(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == -1654528753 || iParam0 == -1716589765) || iParam0 == 1317494643)
		{
			if (func_83() && (func_164() || func_165()))
			{
				*uParam1 = 0;
			}
		}
		iVar39 = *uParam2;
		switch (iParam0)
		{
			case 584646201:
				iVar39 = 25;
				break;
			
			case -1076751822:
				iVar39 = 10;
				break;
			
			case -771403250:
				iVar39 = 100;
				break;
			
			case 137902532:
				iVar39 = 10;
				break;
			
			case 324215364:
				iVar39 = 20;
				break;
			
			case -1063057011:
				iVar39 = 108;
				break;
			
			case 2132975508:
				iVar39 = 108;
				break;
			
			case -1660422300:
				iVar39 = 50;
				break;
			
			case 1627465347:
				iVar39 = 108;
				break;
			
			case 984333226:
				iVar39 = 18;
				break;
			
			case -1466123874:
				iVar39 = 15;
				break;
			
			case 205991906:
				iVar39 = 29;
				break;
			
			case -952879014:
				iVar39 = 87;
				break;
		}
		if (*uParam2 != iVar39)
		{
			*uParam2 = iVar39;
		}
	}
	else
	{
		iVar40 = -1;
		switch (iParam0)
		{
			case -1569615261:
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2819));
					*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2819));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2820));
					*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2820));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2821));
					*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2821));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2822));
					*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2822));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2823));
					*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2823));
				}
				iVar40 = 16;
				break;
			
			case -72657034:
				*uParam1 = 500;
				*uParam1 = floor((to_float(*uParam1) * Global_262145.f_2664));
				*uParam2 = 500;
				*uParam2 = floor((to_float(*uParam2) * Global_262145.f_2664));
				iVar40 = 99;
				break;
			
			case 324215364:
				if (Global_262145.f_2348 == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_262145.f_2348;
				}
				if (Global_262145.f_2377 == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_262145.f_2377;
				}
				iVar40 = 1;
				break;
			
			case 736523883:
				if (Global_262145.f_2349 == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_262145.f_2349;
				}
				if (Global_262145.f_2378 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2378;
				}
				iVar40 = 1;
				break;
			
			case 2017895192:
				if (Global_262145.f_2359 == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_2359;
				}
				if (Global_262145.f_2388 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2388;
				}
				iVar40 = 2;
				break;
			
			case 487013001:
				if (Global_262145.f_2358 == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_262145.f_2358;
				}
				if (Global_262145.f_2387 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2387;
				}
				iVar40 = 2;
				break;
			
			case -494615257:
				if (Global_262145.f_2361 == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_262145.f_2361;
				}
				if (Global_262145.f_2390 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2390;
				}
				iVar40 = 2;
				break;
			
			case -1074790547:
				if (Global_262145.f_2351 == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_262145.f_2351;
				}
				if (Global_262145.f_2380 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				iVar40 = 3;
				break;
			
			case -2084633992:
				if (Global_262145.f_2352 == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_262145.f_2352;
				}
				if (Global_262145.f_2381 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2381;
				}
				iVar40 = 3;
				break;
			
			case -1357824103:
				if (Global_262145.f_2354 == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_262145.f_2354;
				}
				if (Global_262145.f_2383 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2383;
				}
				iVar40 = 3;
				break;
			
			case 100416529:
				if (Global_262145.f_2364 == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_262145.f_2364;
				}
				if (Global_262145.f_2393 == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_262145.f_2393;
				}
				iVar40 = 4;
				break;
			
			case 205991906:
				if (Global_262145.f_2362 == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_262145.f_2362;
				}
				if (Global_262145.f_2391 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2391;
				}
				iVar40 = 4;
				break;
			
			case -1660422300:
				if (Global_262145.f_2355 == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_262145.f_2355;
				}
				if (Global_262145.f_2384 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2384;
				}
				iVar40 = 5;
				break;
			
			case 2144741730:
				if (Global_262145.f_2356 == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_262145.f_2356;
				}
				if (Global_262145.f_2385 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2385;
				}
				iVar40 = 5;
				break;
			
			case -1312131151:
				if (Global_262145.f_2367 == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_262145.f_2367;
				}
				if (Global_262145.f_2396 == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_262145.f_2396;
				}
				iVar40 = 6;
				break;
			
			case -1568386805:
				if (Global_262145.f_2366 == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_262145.f_2366;
				}
				if (Global_262145.f_2395 == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_262145.f_2395;
				}
				iVar40 = 6;
				break;
			
			case 1119849093:
				if (Global_262145.f_2368 == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_262145.f_2368;
				}
				if (Global_262145.f_2397 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2397;
				}
				iVar40 = 6;
				break;
			
			case -1716189206:
				if (Global_262145.f_2401 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2401;
				}
				if (Global_262145.f_2407 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2407;
				}
				iVar40 = 7;
				break;
			
			case 1737195953:
				if (Global_262145.f_2402 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2402;
				}
				if (Global_262145.f_2408 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2408;
				}
				iVar40 = 7;
				break;
			
			case -1834847097:
				if (Global_262145.f_7207 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_7207;
				}
				if (Global_262145.f_7209 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_7209;
				}
				iVar40 = 7;
				break;
			
			case 911657153:
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case 584646201:
				if (Global_262145.f_2347 == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_262145.f_2347;
				}
				if (Global_262145.f_2376 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_2376;
				}
				iVar40 = 8;
				break;
			
			case 1593441988:
				if (Global_262145.f_2345 == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_262145.f_2345;
				}
				if (Global_262145.f_2374 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2374;
				}
				iVar40 = 8;
				break;
			
			case 453432689:
				if (Global_262145.f_2344 == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_262145.f_2344;
				}
				if (Global_262145.f_2373 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2373;
				}
				iVar40 = 8;
				break;
			
			case -37975472:
				if (Global_262145.f_2369 == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_262145.f_2369;
				}
				if (Global_262145.f_2406 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2406;
				}
				iVar40 = 9;
				break;
			
			case -1813897027:
				if (Global_262145.f_2399 == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_262145.f_2399;
				}
				if (Global_262145.f_2405 == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_262145.f_2405;
				}
				iVar40 = 9;
				break;
			
			case 741814745:
				if (Global_262145.f_2398 == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_262145.f_2398;
				}
				if (Global_262145.f_2404 == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_262145.f_2404;
				}
				iVar40 = 9;
				break;
			
			case 883325847:
				if (Global_262145.f_2370 == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_262145.f_2370;
				}
				*uParam2 = Global_262145.f_11531;
				iVar40 = 10;
				break;
			
			case -270015777:
				if (Global_262145.f_2350 == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_262145.f_2350;
				}
				if (Global_262145.f_2379 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				iVar40 = 1;
				break;
			
			case -1654528753:
				if (Global_262145.f_2360 == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_262145.f_2360;
				}
				if (Global_262145.f_2389 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2389;
				}
				if (func_83() && (func_165() || func_164()))
				{
					*uParam1 = 0;
				}
				iVar40 = 2;
				break;
			
			case -1716589765:
				if (Global_262145.f_2346 == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_262145.f_2346;
				}
				if (Global_262145.f_2375 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2375;
				}
				if (func_83() && (func_165() || func_164()))
				{
					*uParam1 = 0;
				}
				iVar40 = 8;
				break;
			
			case 1317494643:
				if (Global_262145.f_2372 == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_262145.f_2372;
				}
				*uParam2 = 0;
				if (func_83() && (func_165() || func_164()))
				{
					*uParam1 = 0;
				}
				iVar40 = 7;
				break;
			
			case -1076751822:
				*uParam1 = Global_262145.f_7202;
				*uParam2 = Global_262145.f_7197;
				iVar40 = 8;
				break;
			
			case -102323637:
				*uParam1 = Global_262145.f_7201;
				*uParam2 = 0;
				iVar40 = 7;
				break;
			
			case 1627465347:
				*uParam1 = Global_262145.f_6596;
				*uParam2 = Global_262145.f_6602;
				iVar40 = 3;
				break;
			
			case -771403250:
				*uParam1 = Global_262145.f_7203;
				*uParam2 = Global_262145.f_7199;
				iVar40 = 8;
				break;
			
			case -1063057011:
				*uParam1 = Global_262145.f_7204;
				*uParam2 = Global_262145.f_7198;
				iVar40 = 3;
				break;
			
			case 2132975508:
				*uParam1 = Global_262145.f_7205;
				*uParam2 = Global_262145.f_7200;
				iVar40 = 3;
				break;
			
			case 137902532:
				*uParam1 = Global_262145.f_7206;
				*uParam2 = Global_262145.f_7208;
				iVar40 = 8;
				break;
			
			case -1466123874:
				*uParam1 = Global_262145.f_7820;
				*uParam2 = Global_262145.f_7821;
				iVar40 = 4;
				break;
			
			case 2138347493:
				*uParam1 = Global_262145.f_7822;
				*uParam2 = Global_262145.f_7823;
				iVar40 = 6;
				break;
			
			case 984333226:
				*uParam1 = Global_262145.f_8391;
				*uParam2 = Global_262145.f_8396;
				iVar40 = 2;
				break;
			
			case -952879014:
				if (func_76())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_8397;
				}
				*uParam2 = Global_262145.f_8404;
				iVar40 = 4;
				break;
			
			case -102973651:
				*uParam1 = Global_262145.f_8729;
				*uParam2 = 0;
				if (func_83())
				{
					*uParam1 = Global_262145.f_19735;
				}
				else if (Global_262145.f_19752)
				{
					*uParam1 = Global_262145.f_8729;
				}
				iVar40 = 7;
				break;
			
			case 1198879012:
				*uParam1 = Global_262145.f_8643;
				*uParam2 = Global_262145.f_8644;
				iVar40 = 6;
				break;
			
			case -1420407917:
				*uParam1 = Global_262145.f_8946;
				*uParam2 = Global_262145.f_8946;
				iVar40 = 9;
				break;
			
			case -656458692:
				*uParam1 = Global_262145.f_8645;
				*uParam2 = Global_262145.f_8646;
				iVar40 = 7;
				break;
			
			case -598887786:
				*uParam1 = Global_262145.f_8647;
				*uParam2 = Global_262145.f_8648;
				iVar40 = 8;
				break;
			
			case 171789620:
				*uParam1 = Global_262145.f_10607;
				*uParam2 = Global_262145.f_10608;
				iVar40 = 1;
				break;
			
			case 1672152130:
				*uParam1 = Global_262145.f_8944;
				*uParam2 = Global_262145.f_8945;
				iVar40 = 6;
				break;
			
			case -581044007:
				*uParam1 = Global_262145.f_11951;
				iVar40 = 7;
				break;
			
			case -619010992:
				*uParam1 = Global_262145.f_11950;
				*uParam2 = Global_262145.f_11952;
				iVar40 = 8;
				break;
			
			case -1951375401:
				*uParam1 = Global_262145.f_12112;
				iVar40 = 7;
				break;
			
			case -1045183535:
				*uParam1 = Global_262145.f_8655;
				*uParam2 = Global_262145.f_8656;
				iVar40 = 8;
				break;
			
			case -538741184:
				*uParam1 = Global_262145.f_8657;
				iVar40 = 7;
				break;
			
			case -275439685:
				*uParam1 = Global_262145.f_14553;
				*uParam2 = Global_262145.f_14554;
				iVar40 = 2;
				break;
			
			case 1649403952:
				if (func_76())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_14550;
				}
				*uParam2 = Global_262145.f_14551;
				iVar40 = 3;
				break;
			
			case 317205821:
				*uParam1 = Global_262145.f_17440;
				*uParam2 = Global_262145.f_17441;
				iVar40 = 2;
				break;
			
			case -853065399:
				*uParam1 = Global_262145.f_17437;
				iVar40 = 7;
				break;
			
			case 125959754:
				if (func_76())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_17438;
				}
				*uParam2 = Global_262145.f_17439;
				iVar40 = 6;
				break;
			
			case -1121678507:
				*uParam1 = Global_262145.f_17442;
				*uParam2 = Global_262145.f_17443;
				iVar40 = 1;
				break;
			
			case -1169823560:
				*uParam1 = Global_262145.f_17444;
				*uParam2 = Global_262145.f_17444;
				iVar40 = 9;
				break;
			
			case -1810795771:
				*uParam1 = Global_262145.f_17435;
				iVar40 = 7;
				break;
			
			case 419712736:
				*uParam1 = Global_262145.f_17436;
				iVar40 = 7;
				break;
			
			case -1075685676:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 634039983))
				{
					*uParam2 = Global_262145.f_20864;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1329061674))
				{
					*uParam2 = Global_262145.f_20869;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2046910199))
				{
					*uParam2 = Global_262145.f_20881;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 733837882))
				{
					*uParam2 = Global_262145.f_20875;
				}
				else if (Global_262145.f_2373 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2373;
				}
				break;
			
			case 2024373456:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 2146055916))
				{
					*uParam2 = Global_262145.f_20865;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 190476639))
				{
					*uParam2 = Global_262145.f_20870;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 974903034))
				{
					*uParam2 = Global_262145.f_20882;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -644734235))
				{
					*uParam2 = Global_262145.f_20876;
				}
				else if (Global_262145.f_2378 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2378;
				}
				break;
			
			case -608341376:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -161179835))
				{
					*uParam2 = Global_262145.f_20866;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1475288264))
				{
					*uParam2 = Global_262145.f_20871;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 696788003))
				{
					*uParam2 = Global_262145.f_20883;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1020871238))
				{
					*uParam2 = Global_262145.f_20877;
				}
				else if (Global_262145.f_2385 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2385;
				}
				break;
			
			case 961495388:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -282298175))
				{
					*uParam2 = Global_262145.f_20867;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1675665560))
				{
					*uParam2 = Global_262145.f_20872;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1478681000))
				{
					*uParam2 = Global_262145.f_20884;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -76490669))
				{
					*uParam2 = Global_262145.f_20878;
				}
				else if (Global_262145.f_2380 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				break;
			
			case -86904375:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 391640422))
				{
					*uParam2 = Global_262145.f_20868;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1141059345))
				{
					*uParam2 = Global_262145.f_20873;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 626875735))
				{
					*uParam2 = Global_262145.f_20885;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1025884839))
				{
					*uParam2 = Global_262145.f_20879;
				}
				else if (Global_262145.f_2381 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2381;
				}
				break;
			
			case 177293209:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1981031769))
				{
					*uParam2 = Global_262145.f_20887;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1005144310))
				{
					*uParam2 = Global_262145.f_20874;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -130689324))
				{
					*uParam2 = Global_262145.f_20886;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 247526935))
				{
					*uParam2 = Global_262145.f_20880;
				}
				else if (Global_262145.f_2391 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2391;
				}
				break;
			
			case 1432025498:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1618338827))
				{
					*uParam2 = Global_262145.f_22445;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -380098265))
				{
					*uParam2 = Global_262145.f_22451;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1315288101))
				{
					*uParam2 = Global_262145.f_22454;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1004815965))
				{
					*uParam2 = Global_262145.f_22458;
				}
				else if (Global_262145.f_2387 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2387;
				}
				break;
			
			case -1768145561:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2023373174))
				{
					*uParam2 = Global_262145.f_22435;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1346235024))
				{
					*uParam2 = Global_262145.f_22440;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -570355066))
				{
					*uParam2 = Global_262145.f_22446;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1362433589))
				{
					*uParam2 = Global_262145.f_22455;
				}
				else if (Global_262145.f_2381 == -1)
				{
					*uParam2 = Global_262145.f_7198;
				}
				else
				{
					*uParam2 = Global_262145.f_2381;
				}
				break;
			
			case -2009644972:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1876057490))
				{
					*uParam2 = Global_262145.f_22439;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1055790298))
				{
					*uParam2 = Global_262145.f_22444;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -424845447))
				{
					*uParam2 = Global_262145.f_22450;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1928301566))
				{
					*uParam2 = Global_262145.f_22453;
				}
				else if (Global_262145.f_2373 == -1)
				{
					*uParam2 = Global_262145.f_7197;
				}
				else
				{
					*uParam2 = Global_262145.f_2373;
				}
				break;
			
			case 1785463520:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -679861550))
				{
					*uParam2 = Global_262145.f_22436;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -515203373))
				{
					*uParam2 = Global_262145.f_22441;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1842849902))
				{
					*uParam2 = Global_262145.f_22447;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -193998727))
				{
					*uParam2 = Global_262145.f_22456;
				}
				else if (Global_262145.f_2393 == -1)
				{
					*uParam2 = Global_262145.f_8404;
				}
				else
				{
					*uParam2 = Global_262145.f_2393;
				}
				break;
			
			case -879347409:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -958864266))
				{
					*uParam2 = Global_262145.f_22437;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 231258687))
				{
					*uParam2 = Global_262145.f_22442;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 15712037))
				{
					*uParam2 = Global_262145.f_22448;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 284438159))
				{
					*uParam2 = Global_262145.f_22452;
				}
				else if (Global_262145.f_2373 == -1)
				{
					*uParam2 = Global_262145.f_8656;
				}
				else
				{
					*uParam2 = Global_262145.f_2373;
				}
				break;
			
			case -2066285827:
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2111807319))
				{
					*uParam2 = Global_262145.f_22438;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1130501904))
				{
					*uParam2 = Global_262145.f_22443;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1449330342))
				{
					*uParam2 = Global_262145.f_22449;
				}
				else if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -89655827))
				{
					*uParam2 = Global_262145.f_22457;
				}
				else if (Global_262145.f_2380 == -1)
				{
					*uParam2 = Global_262145.f_7200;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				break;
			
			case -1746263880:
				*uParam1 = 1000;
				*uParam2 = Global_262145.f_22427;
				iVar40 = 8;
				break;
			
			case -1355376991:
				*uParam1 = Global_262145.f_25721;
				iVar40 = 8;
				break;
			
			case 1198256469:
				*uParam1 = Global_262145.f_25722;
				*uParam2 = Global_262145.f_25724;
				iVar40 = 3;
				break;
			
			case -1238556825:
				*uParam1 = Global_262145.f_25723;
				*uParam2 = Global_262145.f_25725;
				iVar40 = 6;
				break;
			
			case -1853920116:
				*uParam1 = 0;
				*uParam2 = Global_262145.f_27902;
				iVar40 = 8;
				break;
			
			case 727643628:
				*uParam1 = Global_262145.f_27903;
				*uParam2 = Global_262145.f_27904;
				iVar40 = 8;
				break;
			
			default:
				if (func_81(iParam0, &Var41) != -1)
				{
					*uParam1 = Var41.f_3;
					*uParam2 = Var41.f_4;
				}
				break;
		}
		switch (iVar40)
		{
			case 0:
				break;
			
			case 1:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 2:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 3:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 4:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 5:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 6:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 7:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_6));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_6));
				break;
			
			case 8:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_4));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_4));
				break;
			
			case 9:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 10:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_2));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				*uParam1 = floor((to_float(*uParam1) * Global_291063));
				*uParam2 = floor((to_float(*uParam2) * Global_291063));
				break;
			
			case 17:
			case 21:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_6));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_6));
				break;
			
			case 18:
			case 20:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_4));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_4));
				break;
			
			case 99:
				*uParam1 = floor((to_float(*uParam1) * Global_291063.f_7));
				*uParam2 = floor((to_float(*uParam2) * Global_291063.f_7));
				break;
			}
	}
	if (unk_0x8CD06866876216F2() && func_118())
	{
		StringCopy(&Var96, func_229(iParam0, 0), 16);
		iVar101 = 0;
		func_228(iParam0, &iVar100, &iVar101);
		if (func_83() && (func_165() || func_164()))
		{
			if ((iParam0 == 1317494643 || iParam0 == -1716589765) || iParam0 == -1654528753)
			{
				iVar101 = 1;
			}
		}
		if (func_83())
		{
			if (iParam0 == -102973651)
			{
				iVar101 = 1;
			}
		}
		bVar102 = false;
		if (func_75(iParam0))
		{
			bVar102 = true;
			iVar101 = 2;
		}
		func_116(&cVar80, Var96, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, iVar100, iVar101, func_117(iParam0), -1, 0, bVar102);
		if (unk_0x437ABF4F514F6471(&cVar80))
		{
			*uParam1 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&cVar80), -1829708865, 1);
		}
		if (func_227(iParam0, &iVar103))
		{
			func_226(iVar103, 2, &Var96, 0);
			func_116(&cVar80, Var96, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3, 0, func_57(iParam0), func_117(iParam0), -1, 0, 0);
			if (unk_0x437ABF4F514F6471(&cVar80))
			{
				*uParam2 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&cVar80), 1067618600, 1);
				switch (iParam0)
				{
					case -1312131151:
					case -1568386805:
					case 1672152130:
					case 2138347493:
						*uParam3 = 1;
						break;
					}
			}
		}
		else if ((((iParam0 == -1813897027 || iParam0 == -37975472) || iParam0 == 741814745) || iParam0 == -1420407917) || iParam0 == -1169823560)
		{
			switch (iParam0)
			{
				case -1813897027:
					StringCopy(&cVar80, "WP_WT_GNADE_t2_v1", 64);
					break;
				
				case -37975472:
					StringCopy(&cVar80, "WP_WT_GNADE_SMK_t2_v1", 64);
					break;
				
				case 741814745:
					StringCopy(&cVar80, "WP_WT_GNADE_STK_t2_v1", 64);
					break;
				
				case -1420407917:
					StringCopy(&cVar80, "WP_WT_PRXMINE_t2_v1", 64);
					break;
				
				case -1169823560:
					StringCopy(&cVar80, "WP_WT_PIPEBOMB_t2_v1", 64);
					break;
			}
			if (unk_0x437ABF4F514F6471(&cVar80))
			{
				*uParam2 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&cVar80), 1067618600, 1);
			}
		}
	}
	fVar104 = func_210(iParam0, uParam1, uParam2);
	if (fVar104 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_210(int iParam0, int iParam1, int iParam2)
{
	fVar1 = 0f;
	fVar2 = 0f;
	if (unk_0x8CD06866876216F2() && func_118())
	{
		return 1f;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_161(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0,05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0,1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0,15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0,1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0,08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0,06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0,04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0,02f);
		}
		fVar2 = (fVar2 + func_225(iParam0));
		fVar2 = (fVar2 + func_224());
		fVar2 = (fVar2 + func_211());
		if (iLocal_53 == 1)
		{
			fVar2 = (fVar2 + (to_float(Global_262145.f_122) / 100f));
		}
		if (iLocal_53 == 0)
		{
			if (func_129())
			{
				fVar2 = (fVar2 + (to_float(Global_262145.f_122) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*iParam1 = floor((to_float(*iParam1) * fVar1));
		*iParam1 = floor((to_float(*iParam1) * Global_262145.f_77));
		*iParam2 = floor((to_float(*iParam2) * Global_262145.f_77));
		return fVar1;
	}
	iVar0 = func_161(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0,1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0,15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0,25f);
	}
	fVar1 = (1f - fVar2);
	*iParam1 = floor((to_float(*iParam1) * fVar1));
	*iParam2 = floor((to_float(*iParam2) * fVar1));
	return fVar1;
}

float func_211()
{
	if (func_221(12))
	{
		return 0,04f;
	}
	else if (func_218(12))
	{
		return 0,03f;
	}
	else if (func_215(12))
	{
		return 0,02f;
	}
	else if (func_212(12))
	{
		return 0,01f;
	}
	return 0f;
}

bool func_212(int iParam0)
{
	iVar0 = func_213(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_213(var uParam0)
{
	switch (func_214(uParam0))
	{
		case 787:
			return Global_1387988[func_32(-1)];
		
		case 788:
			return Global_1387994[func_32(-1)];
		
		case 789:
			return Global_1388000[func_32(-1)];
		
		case 790:
			return Global_1388006[func_32(-1)];
		
		case 8726:
			return Global_1388012[func_32(-1)];
		
		default:
	}
	return 0;
}

int func_214(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	switch (iVar1)
	{
		case 0:
			return 787;
			break;
		
		case 1:
			return 788;
			break;
		
		case 2:
			return 789;
			break;
		
		case 3:
			return 790;
			break;
		
		case 4:
			return 8726;
			break;
	}
	return 11511;
}

bool func_215(int iParam0)
{
	iVar0 = func_216(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_216(var uParam0)
{
	switch (func_217(uParam0))
	{
		case 777:
			return Global_1387958[func_32(-1)];
		
		case 778:
			return Global_1387964[func_32(-1)];
		
		case 779:
			return Global_1387970[func_32(-1)];
		
		case 780:
			return Global_1387976[func_32(-1)];
		
		case 8728:
			return Global_1387982[func_32(-1)];
		
		default:
	}
	return 0;
}

int func_217(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	switch (iVar1)
	{
		case 0:
			return 777;
			break;
		
		case 1:
			return 778;
			break;
		
		case 2:
			return 779;
			break;
		
		case 3:
			return 780;
			break;
		
		case 4:
			return 8728;
			break;
	}
	return 11511;
}

bool func_218(int iParam0)
{
	iVar0 = func_219(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_219(var uParam0)
{
	switch (func_220(uParam0))
	{
		case 767:
			return Global_1387928[func_32(-1)];
		
		case 768:
			return Global_1387934[func_32(-1)];
		
		case 769:
			return Global_1387940[func_32(-1)];
		
		case 770:
			return Global_1387946[func_32(-1)];
		
		case 8730:
			return Global_1387952[func_32(-1)];
		
		default:
	}
	return 0;
}

int func_220(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	switch (iVar1)
	{
		case 0:
			return 767;
			break;
		
		case 1:
			return 768;
			break;
		
		case 2:
			return 769;
			break;
		
		case 3:
			return 770;
			break;
		
		case 4:
			return 8730;
			break;
	}
	return 11511;
}

bool func_221(int iParam0)
{
	iVar0 = func_222(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_222(var uParam0)
{
	switch (func_223(uParam0))
	{
		case 757:
			return Global_1388018[func_32(-1)];
		
		case 758:
			return Global_1388024[func_32(-1)];
		
		case 759:
			return Global_1388030[func_32(-1)];
		
		case 760:
			return Global_1388036[func_32(-1)];
		
		case 8732:
			return Global_1388042[func_32(-1)];
		
		default:
	}
	return 0;
}

int func_223(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	switch (iVar1)
	{
		case 0:
			return 757;
			break;
		
		case 1:
			return 758;
			break;
		
		case 2:
			return 759;
			break;
		
		case 3:
			return 760;
			break;
		
		case 4:
			return 8732;
			break;
	}
	return 11511;
}

float func_224()
{
	if (func_221(9))
	{
		return 0,04f;
	}
	else if (func_218(9))
	{
		return 0,03f;
	}
	else if (func_215(9))
	{
		return 0,02f;
	}
	else if (func_212(9))
	{
		return 0,01f;
	}
	return 0f;
}

float func_225(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0f;
	}
	iVar0 = 12;
	switch (iParam0)
	{
		case 324215364:
			iVar0 = 5;
			break;
		
		case 736523883:
			iVar0 = 5;
			break;
		
		case 2017895192:
			iVar0 = 4;
			break;
		
		case 487013001:
			iVar0 = 4;
			break;
		
		case -494615257:
			iVar0 = 4;
			break;
		
		case -1074790547:
			iVar0 = 25;
			break;
		
		case -2084633992:
			iVar0 = 25;
			break;
		
		case -1357824103:
			iVar0 = 25;
			break;
		
		case 100416529:
			iVar0 = 2;
			break;
		
		case 205991906:
			iVar0 = 2;
			break;
		
		case -1660422300:
			iVar0 = 26;
			break;
		
		case 2144741730:
			iVar0 = 26;
			break;
		
		case -1312131151:
			iVar0 = 6;
			break;
		
		case -1568386805:
			iVar0 = 3;
			break;
		
		case -1716189206:
			iVar0 = 8;
			break;
		
		case 584646201:
			iVar0 = 1;
			break;
		
		case 1593441988:
			iVar0 = 1;
			break;
		
		case 453432689:
			iVar0 = 1;
			break;
		
		case -37975472:
			iVar0 = 3;
			break;
		
		case -1813897027:
			iVar0 = 3;
			break;
		
		case 741814745:
			iVar0 = 7;
			break;
	}
	if (iVar0 != 12)
	{
		if (func_221(iVar0))
		{
			return 0,08f;
		}
		else if (func_218(iVar0))
		{
			return 0,06f;
		}
		else if (func_215(iVar0))
		{
			return 0,04f;
		}
		else if (func_212(iVar0))
		{
			return 0,02f;
		}
	}
	return 0f;
}

bool func_226(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		StringCopy(sParam2, sParam3, 16);
	}
	else
	{
		StringCopy(sParam2, "GSA", 16);
	}
	if (iParam0 == 1950175060)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1820140472)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 218444191)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1788949567)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1866678455)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1285032059)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -19235536)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1614428030)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -873900901)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1878508229)
	{
		StringConCat(sParam2, "_TYPE_C", 16);
	}
	else if (iParam0 == -1339118112)
	{
		StringConCat(sParam2, "_TYPE_CH", 16);
	}
	else if (iParam0 == 1003267566)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 826266432)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == -435287898)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 214501711)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 1411692055)
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == 1742569970)
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == 1173416293)
	{
		StringConCat(sParam2, "_TYPE_F", 16);
	}
	else if (iParam0 == -1356599793)
	{
		StringConCat(sParam2, "_TYPE_FW", 16);
	}
	else if (iParam0 == -1726673363)
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == -1356724057)
	{
		StringConCat(sParam2, "_TYPE_M", 16);
	}
	else if (iParam0 == 2034517757)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 357983224)
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == 784861712)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == 234717365)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 1461941360)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1226421483)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == -1132792829)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == -836519658)
	{
		StringCopy(sParam2, "WCT_CLIP_HP", 16);
	}
	else if (iParam0 == -1416716039)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == -1193480661)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 423744068)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == 1586900444)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == -1829688883)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == -1340502689)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 758230489)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 670318226)
	{
		StringCopy(sParam2, "WCT_CLIP_HP", 16);
	}
	else if (iParam0 == -332892697)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1569785553)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == -1497580119)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == -1378784071)
	{
		StringCopy(sParam2, "WCT_CLIP_EX", 16);
	}
	else if (iParam0 == -168704490)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 796697766)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1184011213)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 1923327840)
	{
		StringCopy(sParam2, "WCT_SHELL_AP", 16);
	}
	else if (iParam0 == -309302955)
	{
		StringCopy(sParam2, "WCT_SHELL_EX", 16);
	}
	else if (iParam0 == 2089185906)
	{
		StringCopy(sParam2, "WCT_SHELL_HP", 16);
	}
	else if (iParam0 == -609429612)
	{
		StringCopy(sParam2, "WCT_SHELL_INC", 16);
	}
	else
	{
		return 0;
	}
	if (iParam1 == 1 && iParam0 != -1356599793)
	{
		StringConCat(sParam2, "1", 16);
	}
	return unk_0x12AB0310C2281427(sParam2) != 0;
}

bool func_227(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 453432689:
			*uParam1 = 1950175060;
			break;
		
		case 1593441988:
			*uParam1 = 1950175060;
			break;
		
		case 584646201:
			*uParam1 = 1950175060;
			break;
		
		case -1716589765:
			*uParam1 = 1950175060;
			break;
		
		case -1076751822:
			*uParam1 = 1950175060;
			break;
		
		case -771403250:
			*uParam1 = 1950175060;
			break;
		
		case 137902532:
			*uParam1 = 1950175060;
			break;
		
		case 324215364:
			*uParam1 = 1820140472;
			break;
		
		case 736523883:
			*uParam1 = 1820140472;
			break;
		
		case -270015777:
			*uParam1 = 1820140472;
			break;
		
		case 171789620:
			*uParam1 = 1820140472;
			break;
		
		case -1074790547:
			*uParam1 = 218444191;
			break;
		
		case -2084633992:
			*uParam1 = 218444191;
			break;
		
		case -1357824103:
			*uParam1 = 218444191;
			break;
		
		case -1063057011:
			*uParam1 = 218444191;
			break;
		
		case -947031628:
			*uParam1 = 218444191;
			break;
		
		case 2132975508:
			*uParam1 = 218444191;
			break;
		
		case -1660422300:
			*uParam1 = 1788949567;
			break;
		
		case 2144741730:
			*uParam1 = 1788949567;
			break;
		
		case -572349828:
			*uParam1 = 1788949567;
			break;
		
		case 1627465347:
			*uParam1 = 1788949567;
			break;
		
		case 487013001:
			*uParam1 = -1878508229;
			break;
		
		case 2017895192:
			*uParam1 = -1878508229;
			break;
		
		case -494615257:
			*uParam1 = -1878508229;
			break;
		
		case -1654528753:
			*uParam1 = -1878508229;
			break;
		
		case 984333226:
			*uParam1 = -1878508229;
			break;
		
		case 100416529:
			*uParam1 = 1285032059;
			break;
		
		case 205991906:
			*uParam1 = 1285032059;
			break;
		
		case -1466123874:
			*uParam1 = -1878508229;
			break;
		
		case -952879014:
			*uParam1 = 1285032059;
			break;
		
		case -1568386805:
			*uParam1 = 1003267566;
			break;
		
		case -1312131151:
			*uParam1 = 1742569970;
			break;
		
		case 1119849093:
			*uParam1 = -1614428030;
			break;
		
		case 2138347493:
			*uParam1 = -1356599793;
			break;
		
		case 1198879012:
			*uParam1 = 1173416293;
			break;
		
		case 1672152130:
			*uParam1 = -1726673363;
			break;
		
		case -1420407917:
			*uParam1 = -1356724057;
			break;
		
		case 1834241177:
			*uParam1 = 2034517757;
			break;
		
		case -598887786:
			*uParam1 = 1950175060;
			break;
		
		case -619010992:
			*uParam1 = 1820140472;
			break;
		
		case -1045183535:
			*uParam1 = 1950175060;
			break;
		
		case -275439685:
			*uParam1 = -1878508229;
			break;
		
		case 1649403952:
			*uParam1 = 218444191;
			break;
		
		case 317205821:
			*uParam1 = -1878508229;
			break;
		
		case 125959754:
			*uParam1 = 1003267566;
			break;
		
		case -1121678507:
			*uParam1 = 1820140472;
			break;
		
		case -1169823560:
			*uParam1 = 357983224;
			break;
		
		case -1746263880:
			*uParam1 = 1950175060;
			break;
		
		case -1075685676:
			*uParam1 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1329061674))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2046910199))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 733837882))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 634039983))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case 2024373456:
			*uParam1 = 1820140472;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 190476639))
				{
					*uParam1 = 758230489;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 974903034))
				{
					*uParam1 = 670318226;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -644734235))
				{
					*uParam1 = -332892697;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 2146055916))
				{
					*uParam1 = 1569785553;
				}
			}
			break;
		
		case 177293209:
			*uParam1 = 1285032059;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -130689324))
				{
					*uParam1 = -1497580119;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1981031769))
				{
					*uParam1 = -1378784071;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1005144310))
				{
					*uParam1 = -168704490;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 247526935))
				{
					*uParam1 = 796697766;
				}
			}
			break;
		
		case -608341376:
			*uParam1 = 1788949567;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 696788003))
				{
					*uParam1 = 784861712;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1475288264))
				{
					*uParam1 = 234717365;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1020871238))
				{
					*uParam1 = 1461941360;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -161179835))
				{
					*uParam1 = 1226421483;
				}
			}
			break;
		
		case 961495388:
			*uParam1 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1478681000))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1675665560))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -76490669))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -282298175))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case -86904375:
			*uParam1 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 626875735))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1141059345))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1025884839))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 391640422))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case 1432025498:
			*uParam1 = -1878508229;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1315288101))
				{
					*uParam1 = 1923327840;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1004815965))
				{
					*uParam1 = -309302955;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -380098265))
				{
					*uParam1 = 2089185906;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1618338827))
				{
					*uParam1 = -609429612;
				}
			}
			break;
		
		case -1768145561:
			*uParam1 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1362433589))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1346235024))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -570355066))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2023373174))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case -2009644972:
			*uParam1 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1055790298))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1928301566))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -424845447))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1876057490))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case 1785463520:
			*uParam1 = 1285032059;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -193998727))
				{
					*uParam1 = -1497580119;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -515203373))
				{
					*uParam1 = -168704490;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1842849902))
				{
					*uParam1 = 796697766;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -679861550))
				{
					*uParam1 = 1184011213;
				}
			}
			break;
		
		case -879347409:
			*uParam1 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 231258687))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 284438159))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 15712037))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -958864266))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case -2066285827:
			*uParam1 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -89655827))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1130501904))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1449330342))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2111807319))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case -1355376991:
			*uParam1 = -1526023308;
			break;
		
		case 1198256469:
			*uParam1 = 1788949567;
			break;
		
		case -1238556825:
			*uParam1 = -1614428030;
			break;
		
		case 727643628:
			*uParam1 = 1950175060;
			break;
		
		case -1853920116:
			*uParam1 = 1950175060;
			break;
	}
	return *uParam1 != -1;
}

void func_228(int iParam0, var uParam1, int iParam2)
{
	*iParam2 = 0;
	if (iParam0 == 883325847)
	{
		*uParam1 = 5;
	}
	else if (iParam0 == -72657034)
	{
		*uParam1 = 4;
	}
	else if (iParam0 == -1569615261)
	{
		*uParam1 = 3;
	}
	else if ((((iParam0 == -1716589765 || iParam0 == -1076751822) || iParam0 == -771403250) || iParam0 == 137902532) || iParam0 == 1198879012)
	{
		*uParam1 = 0;
	}
	else if (((((((((iParam0 == -102323637 || iParam0 == -1834847097) || iParam0 == 1317494643) || iParam0 == -102973651) || iParam0 == -1716189206) || iParam0 == 1737195953) || iParam0 == -1951375401) || iParam0 == -538741184) || iParam0 == -656458692) || iParam0 == -581044007)
	{
		*uParam1 = 1;
	}
	else if ((((iParam0 == -1813897027 || iParam0 == -37975472) || iParam0 == 741814745) || iParam0 == -1420407917) || iParam0 == -1169823560)
	{
		*uParam1 = 2;
		*iParam2 = 1;
	}
	else
	{
		*uParam1 = 0;
	}
}

char* func_229(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case -1569615261:
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case 453432689:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case 1593441988:
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case 584646201:
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case 736523883:
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case 324215364:
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case -1074790547:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case -2084633992:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case -1357824103:
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case -1660422300:
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case 2144741730:
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case 487013001:
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case 2017895192:
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case -494615257:
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case 205991906:
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case 856002082:
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case 100416529:
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case -1568386805:
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case -1312131151:
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case 1119849093:
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case -1813897027:
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case -37975472:
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case 741814745:
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case 615608432:
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case 911657153:
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case 883325847:
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case -1833087301:
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case 1945616459:
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case -123497569:
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case -268631733:
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case 966099553:
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case -72657034:
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case -1716189206:
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case 1737195953:
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case 1317494643:
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case -1786099057:
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case -2067956739:
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case 1141786504:
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case 133987706:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -1553120962:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -270015777:
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case -1654528753:
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case -1716589765:
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case -102323637:
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case 1627465347:
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case -1076751822:
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case 137902532:
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case -1834847097:
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case 1198879012:
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case -771403250:
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case -1063057011:
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case -1466123874:
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case 2138347493:
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case -952879014:
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case 984333226:
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case -1420407917:
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case 1672152130:
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case -102973651:
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case 1834241177:
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case 171789620:
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case -656458692:
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case -598887786:
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case 2132975508:
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case -581044007:
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case -619010992:
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case -1951375401:
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case -275439685:
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case 1649403952:
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case -538741184:
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case -1045183535:
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case 148160082:
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case -1853920116:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 727643628:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_81(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_182(&(Var0.f_31));
				}
				else
				{
					return func_182(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			iVar0 = 12;
			break;
		
		case -1075685676:
			iVar0 = 12;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1329061674))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2046910199))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 733837882))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 634039983))
				{
					iVar0 = 12;
				}
			}
			break;
		
		case 736523883:
			iVar0 = 30;
			break;
		
		case 2024373456:
			iVar0 = 30;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 190476639))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 974903034))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -644734235))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 2146055916))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case 205991906:
			iVar0 = 6;
			break;
		
		case 177293209:
			iVar0 = 6;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -130689324))
				{
					iVar0 = 4;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1981031769))
				{
					iVar0 = 4;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1005144310))
				{
					iVar0 = 4;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 247526935))
				{
					iVar0 = 4;
				}
			}
			break;
		
		case 2144741730:
			iVar0 = 100;
			break;
		
		case -608341376:
			iVar0 = 100;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 696788003))
				{
					iVar0 = 80;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1475288264))
				{
					iVar0 = 80;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1020871238))
				{
					iVar0 = 80;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -161179835))
				{
					iVar0 = 100;
				}
			}
			break;
		
		case -1074790547:
			iVar0 = 30;
			break;
		
		case 961495388:
			iVar0 = 30;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1478681000))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1675665560))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -76490669))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -282298175))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case -2084633992:
			iVar0 = 30;
			break;
		
		case -86904375:
			iVar0 = 30;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 626875735))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1141059345))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1025884839))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 391640422))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case 487013001:
			iVar0 = 8;
			break;
		
		case 1432025498:
			iVar0 = 8;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1315288101))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1004815965))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -380098265))
				{
					iVar0 = 8;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1618338827))
				{
					iVar0 = 8;
				}
			}
			break;
		
		case -1063057011:
			iVar0 = 30;
			break;
		
		case -1768145561:
			iVar0 = 30;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1362433589))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1346235024))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -570355066))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2023373174))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case -1076751822:
			iVar0 = 12;
			break;
		
		case -2009644972:
			iVar0 = 12;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1055790298))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1928301566))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -424845447))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1876057490))
				{
					iVar0 = 6;
				}
			}
			break;
		
		case -952879014:
			iVar0 = 16;
			break;
		
		case 1785463520:
			iVar0 = 16;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -193998727))
				{
					iVar0 = 5;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -515203373))
				{
					iVar0 = 5;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1842849902))
				{
					iVar0 = 5;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -679861550))
				{
					iVar0 = 8;
				}
			}
			break;
		
		case -1045183535:
			iVar0 = 12;
			break;
		
		case -879347409:
			iVar0 = 12;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 231258687))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 284438159))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 15712037))
				{
					iVar0 = 6;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -958864266))
				{
					iVar0 = 6;
				}
			}
			break;
		
		case 2132975508:
			iVar0 = 30;
			break;
		
		case -2066285827:
			iVar0 = 30;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -89655827))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1130501904))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1449330342))
				{
					iVar0 = 20;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2111807319))
				{
					iVar0 = 30;
				}
			}
			break;
	}
	return iVar0;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			iVar0 = 1950175060;
			break;
		
		case -1075685676:
			iVar0 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1329061674))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2046910199))
				{
					iVar0 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 733837882))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 634039983))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case 736523883:
			iVar0 = 1820140472;
			break;
		
		case 2024373456:
			iVar0 = 1820140472;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 190476639))
				{
					iVar0 = 758230489;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 974903034))
				{
					iVar0 = 670318226;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -644734235))
				{
					iVar0 = -332892697;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 2146055916))
				{
					iVar0 = 1569785553;
				}
			}
			break;
		
		case 205991906:
			iVar0 = 1285032059;
			break;
		
		case 177293209:
			iVar0 = 1285032059;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -130689324))
				{
					iVar0 = -1497580119;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1981031769))
				{
					iVar0 = -1378784071;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1005144310))
				{
					iVar0 = -168704490;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 247526935))
				{
					iVar0 = 796697766;
				}
			}
			break;
		
		case 2144741730:
			iVar0 = 1788949567;
			break;
		
		case -608341376:
			iVar0 = 1788949567;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 696788003))
				{
					iVar0 = 784861712;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1475288264))
				{
					iVar0 = 234717365;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1020871238))
				{
					iVar0 = 1461941360;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -161179835))
				{
					iVar0 = 1226421483;
				}
			}
			break;
		
		case -1074790547:
			iVar0 = 218444191;
			break;
		
		case 961495388:
			iVar0 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1478681000))
				{
					iVar0 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1675665560))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -76490669))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -282298175))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case -2084633992:
			iVar0 = 218444191;
			break;
		
		case -86904375:
			iVar0 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 626875735))
				{
					iVar0 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1141059345))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1025884839))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 391640422))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case 487013001:
			iVar0 = -1878508229;
			break;
		
		case 1432025498:
			iVar0 = -1878508229;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1315288101))
				{
					iVar0 = 1923327840;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1004815965))
				{
					iVar0 = -309302955;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -380098265))
				{
					iVar0 = 2089185906;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1618338827))
				{
					iVar0 = -609429612;
				}
			}
			break;
		
		case -1063057011:
			iVar0 = 218444191;
			break;
		
		case -1768145561:
			iVar0 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1362433589))
				{
					iVar0 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1346235024))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -570355066))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2023373174))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case -1076751822:
			iVar0 = 1950175060;
			break;
		
		case -2009644972:
			iVar0 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1055790298))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1928301566))
				{
					iVar0 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -424845447))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1876057490))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case -952879014:
			iVar0 = 1285032059;
			break;
		
		case 1785463520:
			iVar0 = 1285032059;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -193998727))
				{
					iVar0 = -1497580119;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -515203373))
				{
					iVar0 = -168704490;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1842849902))
				{
					iVar0 = 796697766;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -679861550))
				{
					iVar0 = 1184011213;
				}
			}
			break;
		
		case -1045183535:
			iVar0 = 1950175060;
			break;
		
		case -879347409:
			iVar0 = 1950175060;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 231258687))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 284438159))
				{
					iVar0 = -836519658;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 15712037))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -958864266))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case 2132975508:
			iVar0 = 218444191;
			break;
		
		case -2066285827:
			iVar0 = 218444191;
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -89655827))
				{
					iVar0 = 423744068;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, 1130501904))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -1449330342))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam0, -2111807319))
				{
					iVar0 = -1340502689;
				}
			}
			break;
	}
	return iVar0;
}

int func_232(int iParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (func_233(iVar1, 0, &iVar0))
		{
			if (func_190(iVar0, -1, -1) == iParam0)
			{
				*uParam1 = iVar1;
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_233(int iParam0, int iParam1, var uParam2)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15268;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15269;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15270;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_234(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, vector3 vParam11)
{
	*uParam0 = iParam1;
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { vParam5 };
	uParam0->f_7 = { vParam8 };
	uParam0->f_10 = { vParam11 };
	uParam0->f_23 = -1;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, vector3 vParam8, vector3 vParam11, vector3 vParam14)
{
	*uParam0 = iParam3;
	uParam0->f_24 = iParam1;
	uParam0->f_25 = iParam2;
	uParam0->f_22 = iParam4;
	uParam0->f_1 = { vParam5 };
	uParam0->f_4 = { vParam8 };
	uParam0->f_7 = { vParam11 };
	uParam0->f_10 = { vParam14 };
	uParam0->f_23 = -1;
}

int func_236(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
		{
			return 1;
		}
	}
	return 0;
}

void func_237(bool bParam0)
{
	func_1081(1);
	if (Local_154.f_118.f_19)
	{
		if (func_365())
		{
			Global_2450632.f_684.f_40 = 0;
			func_364();
			Global_2450632.f_684.f_33[0] = Local_154.f_118.f_1;
			Global_2450632.f_684.f_33[1] = Local_154.f_118.f_3;
			Global_2450632.f_684.f_39 = Local_154.f_118;
			if (Local_154.f_118.f_5 == 1)
			{
				Global_2450632.f_684.f_33[2] = Local_154.f_118.f_2;
				Global_2450632.f_684.f_40 = 1;
			}
		}
	}
	if (Local_154.f_3 != -1)
	{
		func_362(&(Local_154.f_3));
	}
	func_354(&Local_154, iLocal_103);
	func_353(&(Local_154.f_50));
	if (!bParam0 && !iLocal_1114)
	{
		func_1190(1, 0);
	}
	func_352(0, 1);
	unk_0x24D1A8A556F3252A(0);
	func_349(1, Local_154);
	Global_4264544 = 0;
	Global_2462114 = 0;
	func_344(Local_154, 0);
	if (!unk_0xEA6BC48857E0AC4C(sLocal_146) && !bParam0)
	{
		unk_0x8D17794CE3273D70(sLocal_146);
	}
	unk_0x42740B44BA8D7B43("HUD_AMMO_SHOP");
	func_343();
	func_342();
	Global_98796.f_1 = 0;
	func_291();
	if (Local_154.f_11 == 2)
	{
		if (unk_0x9F4FE516EAACCFC5(Local_154.f_157.f_10))
		{
			if (unk_0xFBB4F23D534EB790(Local_154.f_157.f_10))
			{
				unk_0xE3BB8E05FCEB3FBE(Local_154.f_157.f_10, false);
			}
			unk_0x9A8DDC7C522F5BF5(Local_154.f_157.f_10, 0);
		}
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		func_284();
	}
	if (Local_154.f_118.f_19)
	{
		iVar0 = unk_0x16F2683693E537C9();
		func_277(iVar0, 1, 0);
		if (func_275())
		{
			func_243(&(Local_154.f_118), 0, 1, 0, 1);
		}
		else
		{
			func_243(&(Local_154.f_118), 0, 1, 1, 1);
		}
		if (Global_76622)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, false);
		}
		unk_0x5413873D3F67BF93(false, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 1065353216);
		func_242(1);
		func_284();
		func_241();
		Local_1141.f_19 = 0;
		func_240(&Local_1141, 1);
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_154.f_12))
	{
		if (Local_154.f_10)
		{
			if (func_239(iLocal_103) || unk_0x8CD06866876216F2())
			{
				if (func_236(iLocal_103))
				{
					if (unk_0xC844350D5D58C99A(Local_154.f_12))
					{
						if (func_1188(0))
						{
							unk_0xEBA53F35D0085654(&(Local_154.f_12));
						}
					}
				}
			}
			else
			{
				unk_0xEBA53F35D0085654(&(Local_154.f_12));
			}
		}
		else if (bParam0)
		{
			if (func_239(iLocal_103) || unk_0x8CD06866876216F2())
			{
				if (func_236(iLocal_103))
				{
					if (unk_0xC844350D5D58C99A(Local_154.f_12))
					{
						if (func_1188(0))
						{
							unk_0xEBA53F35D0085654(&(Local_154.f_12));
						}
					}
				}
			}
			else
			{
				unk_0xEBA53F35D0085654(&(Local_154.f_12));
			}
		}
		else if (func_239(iLocal_103) || unk_0x8CD06866876216F2())
		{
			if (func_236(iLocal_103))
			{
				if (unk_0xC844350D5D58C99A(Local_154.f_12))
				{
					if (func_1188(0))
					{
						unk_0xEBA53F35D0085654(&(Local_154.f_12));
					}
				}
			}
		}
		else
		{
			unk_0xF4CB0B98F8F79D8D(Local_154.f_12, 1);
			unk_0xFADC0A217229F6B5(Local_154.f_12, 1);
			unk_0x6DAD7906B73F064D(&(Local_154.f_12));
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(Local_154.f_12))
		{
			if (unk_0x437347B10A200C4B(Local_154.f_12, 0))
			{
				if (!unk_0x0A059E0DB9253280(Local_154.f_12))
				{
					if (func_239(iLocal_103) || unk_0x8CD06866876216F2())
					{
						if (func_236(iLocal_103))
						{
							if (unk_0xC844350D5D58C99A(Local_154.f_12))
							{
								if (func_1188(0))
								{
									unk_0xEBA53F35D0085654(&(Local_154.f_12));
								}
							}
						}
					}
					else
					{
						unk_0xEBA53F35D0085654(&(Local_154.f_12));
					}
				}
				else if (func_239(iLocal_103) || unk_0x8CD06866876216F2())
				{
				}
				else
				{
					unk_0x6DAD7906B73F064D(&(Local_154.f_12));
				}
			}
		}
		Local_154.f_12 = 0;
	}
	if (iLocal_137)
	{
		unk_0x51732B934211201A(iLocal_138);
		iLocal_137 = 0;
	}
	if (iLocal_103 == 46)
	{
		Global_1676073 = -1;
	}
	if (iLocal_103 == 47)
	{
		Global_1676074 = -1;
	}
	if (iLocal_103 == 48)
	{
		Global_1676075 = -1;
	}
	if (iLocal_103 == 49)
	{
		Global_1676076 = -1;
	}
	if (iLocal_103 == 52)
	{
		Global_1676079 = -1;
	}
	if (bParam0)
	{
		func_238("Resetting script", -1);
		unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iLocal_103]), 11);
	}
	else
	{
		func_238("Terminating script", -1);
		unk_0x0674E58A79778E99(&(Global_98796.f_1357[iLocal_103]), 16);
		if (unk_0xEAE0D21A50E6C7F4(Global_1389296, 1))
		{
			unk_0x0674E58A79778E99(&Global_1389296, 1);
		}
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_238(char* sParam0, int iParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (iParam1 == -1)
	{
	}
}

int func_239(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_98796.f_72[iParam0];
}

void func_240(var uParam0, bool bParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!uParam0->f_18)
		{
			iVar12 = 0;
			iVar13 = 0;
			iVar12 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				(*uParam0)[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar13 = 0;
			while (iVar13 < iVar12)
			{
				if (iVar0 < *uParam0)
				{
					if ((unk_0xC844350D5D58C99A(uVar1[iVar13]) && !unk_0xEB6A8945D1AC98A1(uVar1[iVar13])) && !unk_0x405E212DDE472467(uVar1[iVar13], 0))
					{
						if (unk_0xBFDE4EE64C4BF2D6(uVar1[iVar13], unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
						{
							(*uParam0)[iVar0] = uVar1[iVar13];
							uParam0->f_5[iVar0] = { unk_0x68F4C0EC296D3901(uVar1[iVar13], true) };
							iVar0++;
						}
					}
				}
				iVar13++;
			}
			uParam0->f_18 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if ((unk_0xC844350D5D58C99A((*uParam0)[iVar0]) && !unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0])) && !unk_0x405E212DDE472467((*uParam0)[iVar0], 0))
			{
				if (uParam0->f_19)
				{
					unk_0x4A4806F9D471E491((*uParam0)[iVar0], false, 0);
					if (bParam1)
					{
						unk_0x20641932E5104B25((*uParam0)[iVar0], false, 0);
						unk_0x1E9649458B15960F((*uParam0)[iVar0], true);
						unk_0x08841CDB215AE18F((*uParam0)[iVar0], uParam0->f_5[iVar0], 1, 1, 1);
					}
				}
				else if (!unk_0x4FC40AB0ECCE6E18((*uParam0)[iVar0]))
				{
					unk_0x4A4806F9D471E491((*uParam0)[iVar0], true, 0);
					if (bParam1)
					{
						unk_0x20641932E5104B25((*uParam0)[iVar0], true, 0);
						unk_0x1E9649458B15960F((*uParam0)[iVar0], false);
						unk_0x08841CDB215AE18F((*uParam0)[iVar0], uParam0->f_5[iVar0], 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_241()
{
	if (Global_98796.f_5 && Global_98796.f_6 == unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()))
	{
		unk_0xA37A90C62806D848(1);
		Global_98796.f_5 = 0;
	}
}

void func_242(bool bParam0)
{
	if (!Global_2513556)
	{
		if (bParam0)
		{
			if (Global_76622)
			{
				if (unk_0xF929B1A0A409FF93())
				{
					unk_0xF601BB024C8F11A7(0, 0);
				}
			}
		}
	}
}

void func_243(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_76622)
	{
		func_265();
	}
	if (func_264(1))
	{
		if (uParam0->f_19)
		{
		}
		if (Global_76622)
		{
			if (bParam3)
			{
				if (!func_262())
				{
				}
				else if ((!func_261() && !func_365()) && !unk_0xEB880D98B5988D0C())
				{
					if (!bParam4)
					{
						func_249(unk_0xD803B885F5E47A62(), 1, 8388608, 0);
					}
					else
					{
						func_249(unk_0xD803B885F5E47A62(), 1, 0, 0);
					}
				}
				else if (!bParam4)
				{
					func_249(unk_0xD803B885F5E47A62(), 0, 8454656, 0);
				}
				else
				{
					func_249(unk_0xD803B885F5E47A62(), 0, 66048, 0);
				}
			}
		}
		else
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
	}
	if (bParam2)
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 1065353216);
	}
	uParam0->f_30 = 1;
	uParam0->f_28 = unk_0x1C0640BA9A7327B3();
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_29 = unk_0x2B6E0A53779D29EA();
	}
	if (Global_76622)
	{
		func_246();
		func_244();
	}
	if (uParam0->f_33 != 0 || !unk_0xEA6BC48857E0AC4C(&(uParam0->f_34)))
	{
		StringCopy(&(uParam0->f_34), "", 16);
		uParam0->f_33 = 0;
	}
	if ((unk_0x8CD06866876216F2() && unk_0x09BE1E6DF7B80B43()) && uParam0->f_32 != 0)
	{
		if (!unk_0xF35E2CBC969C0B53())
		{
			unk_0xB24A64FA3FB418D8();
			uParam0->f_32 = 0;
		}
	}
}

void func_244()
{
	if (!Global_1312575)
	{
		return;
	}
	func_245();
}

void func_245()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_246()
{
	func_248(1);
	func_247(4, 0, -1);
	func_247(6, 0, -1);
	func_247(7, 0, -1);
	func_247(3, 0, -1);
	func_247(1, 0, -1);
	func_247(2, 0, -1);
	func_247(11, 0, -1);
	func_247(13, 0, -1);
	func_247(14, 0, -1);
	func_247(16, 0, -1);
}

void func_247(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_248(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_249(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_260())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_262())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_258(unk_0xD803B885F5E47A62(), 0) && !func_257()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_254(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_253(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_252();
					func_251();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_253(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_250(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_250(int iParam0)
{
	return iParam0 == 17;
}

void func_251()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_252()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_253(int iParam0)
{
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_254(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_256();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_258(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_255(-2008016205, iParam0);
	}
}

void func_255(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_256()
{
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_257()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_259(-1, 0) == 8;
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

int func_259(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_33();
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

int func_260()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

int func_262()
{
	if (func_263() == 0)
	{
		return 1;
	}
	return 0;
}

int func_263()
{
	return Global_1312467.f_18;
}

bool func_264(bool bParam0)
{
	if (Global_76622)
	{
		return func_22(unk_0xD803B885F5E47A62(), bParam0, !func_1192(1));
	}
	return !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
}

void func_265()
{
	if (Global_1312418.f_1 == 1)
	{
		func_266(7, 0, 1);
		Global_1312418.f_1 = 0;
		Global_1628237[unk_0xD803B885F5E47A62()].f_9 = 0;
	}
}

void func_266(int iParam0, int iParam1, bool bParam2)
{
	if (func_274())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_273(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_273(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[unk_0xD803B885F5E47A62()].f_8 = 0;
				func_272(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[unk_0xD803B885F5E47A62()].f_8 = 0;
			func_272(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_271()) && !func_267(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

int func_267(int iParam0)
{
	if (func_268(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_269(iParam0))
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

bool func_269(int iParam0)
{
	return func_270(iParam0);
}

bool func_270(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_271()
{
	return Global_2450632.f_740;
}

void func_272(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_274())
		{
			if (func_22(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, false);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, false);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_22(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, true);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0,5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(0);
		}
	}
}

void func_273(var uParam0, bool bParam1, bool bParam2)
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

bool func_274()
{
	return Global_1312418;
}

int func_275()
{
	if (func_276())
	{
		return Global_1676377.f_475 == 0;
	}
	return 0;
}

bool func_276()
{
	return Global_1676377.f_474;
}

void func_277(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_66(iParam0);
	if (func_62(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		func_278(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			unk_0xB875234DD8BEBA66(Global_111638.f_2358.f_539.f_1730[iVar1][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_111638.f_2358.f_539.f_1763 || (Global_111638.f_2358.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_111638.f_2358.f_539.f_1730[iVar1][iVar0] != 0 && Global_111638.f_2358.f_539.f_1730[iVar1][iVar0] != 615608432)
					{
						if (unk_0x440C646F2F11A2A1(iParam0, Global_111638.f_2358.f_539.f_1730[iVar1][iVar0], 0))
						{
							unk_0x5745EA6329A91E29(iParam0, Global_111638.f_2358.f_539.f_1730[iVar1][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			unk_0x6FB46C25CCB7E6D5(-922941372, &iVar2, -1);
		}
		else if (iVar0 == 1)
		{
			unk_0x6FB46C25CCB7E6D5(-753526687, &iVar2, -1);
		}
		else if (iVar0 == 2)
		{
			unk_0x6FB46C25CCB7E6D5(-502936933, &iVar2, -1);
		}
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), iVar2);
	}
}

void func_278(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar72 = unk_0x4160B65AE085B5A9();
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_283(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = unk_0x3F0B5EEC37A0EDD3(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != -1569615261)
					{
						if (func_198(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar73[iVar5] = unk_0xD2AEDBB0268DF71A(iParam0, iVar2);
							}
							else
							{
								unk_0x155F8B27DA5061F5(iParam0, iVar2, 0, 0);
								unk_0x4602DF28F05262E2(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar73[iVar5] = 0;
							unk_0x155F8B27DA5061F5(iParam0, iVar2, 0, 0);
							unk_0x4602DF28F05262E2(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar8 = 0;
			while (iVar8 < iVar72)
			{
				if (iVar8 < 51)
				{
					if (unk_0x310836EE7129BA33(iVar8, &Var9))
					{
						if (!unk_0x232048AB4B0E0259(Var9) && !func_199(Var9.f_1))
						{
							if (iVar7 == 0)
							{
								iVar118[iVar8] = unk_0xD2AEDBB0268DF71A(iParam0, Var9.f_1);
							}
							else
							{
								unk_0x155F8B27DA5061F5(iParam0, Var9.f_1, 0, 0);
								unk_0x4602DF28F05262E2(iParam0, Var9.f_1, 0);
							}
						}
						else
						{
							iVar118[iVar8] = 0;
							unk_0x155F8B27DA5061F5(iParam0, Var9.f_1, 0, 0);
							unk_0x4602DF28F05262E2(iParam0, Var9.f_1, 0);
						}
					}
				}
			else
			{
				}
				else
				{
					iVar8++;
				}
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_283(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = unk_0x3F0B5EEC37A0EDD3(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5];
				iVar0 = uParam1[iVar5]->f_1;
				if (!func_198(iVar3))
				{
					(*uParam1)[iVar5] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != -1569615261)
					{
						if (!unk_0x440C646F2F11A2A1(iParam0, iVar3, 0))
						{
							unk_0x262EF6C6306BEA6C(iParam0, iVar3, 0, false, false);
						}
						if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) < iVar0)
						{
							unk_0x155F8B27DA5061F5(iParam0, iVar3, iVar0, 0);
						}
						if (iVar3 != 883325847 && unk_0x440C646F2F11A2A1(iParam0, iVar3, 0))
						{
							unk_0x85B7F19165B3206C(iParam0, iVar3, uParam1[iVar5]->f_3);
						}
						iVar6 = 0;
						iVar4 = func_282(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0xEAE0D21A50E6C7F4(uParam1[iVar5]->f_2, iVar6))
							{
								if (!unk_0xAFB8387ED2D7213E(iParam0, iVar3, iVar4))
								{
									unk_0x1F6FCCC72D02C71A(iParam0, iVar3, iVar4);
									func_281(iParam0, iVar3, iVar4);
									if (func_92(iVar4))
									{
										unk_0x0E8D2351A8BAC879(iParam0, iVar3, iVar4, uParam1[iVar5]->f_4);
										func_108(iParam0, iVar3, iVar4, uParam1[iVar5]->f_4);
									}
								}
							}
							else if (unk_0xAFB8387ED2D7213E(iParam0, iVar3, iVar4))
							{
								unk_0xD0250CD824F31C16(iParam0, iVar3, iVar4);
								func_280(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_282(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != -1569615261) && iVar2 != 966099553)
					{
						unk_0x650567883F5E3136(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_282(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, iVar4))
							{
								unk_0xD0250CD824F31C16(iParam0, iVar2, iVar4);
								func_280(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_282(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != -1569615261)
					{
						if (unk_0xD2AEDBB0268DF71A(iParam0, iVar2) < iVar73[iVar5])
						{
							unk_0x155F8B27DA5061F5(iParam0, iVar2, iVar73[iVar5], 0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar70 = 0;
		while (iVar70 < uParam1->f_221)
		{
			iVar3 = uParam1->f_221[iVar70];
			iVar0 = uParam1->f_221[iVar70].f_1;
			iVar8 = func_279(iVar3, &Var9);
			if ((iVar8 != -1 && iVar8 < 51) && !func_199(Var9.f_1))
			{
				if (unk_0x232048AB4B0E0259(Var9) || func_199(Var9.f_1))
				{
					uParam1->f_221[iVar70] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != -1569615261)
					{
						if (!unk_0x440C646F2F11A2A1(iParam0, iVar3, 0))
						{
							unk_0x262EF6C6306BEA6C(iParam0, iVar3, 0, false, false);
						}
						if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) < iVar0)
						{
							unk_0x155F8B27DA5061F5(iParam0, iVar3, iVar0, 0);
						}
						if (unk_0x440C646F2F11A2A1(iParam0, iVar3, 0))
						{
							unk_0x85B7F19165B3206C(iParam0, iVar3, uParam1->f_221[iVar70].f_3);
						}
						iVar71 = 0;
						iVar6 = 0;
						while (iVar6 < unk_0xAD2A7A6DFF55841B(iVar8))
						{
							if (unk_0x31D5E073B6F93CDC(iVar8, iVar6, &Var48))
							{
								if (!func_183(Var48.f_3))
								{
									if (unk_0xEAE0D21A50E6C7F4(uParam1->f_221[iVar70].f_2, iVar71))
									{
										if (!unk_0xAFB8387ED2D7213E(iParam0, iVar3, Var48.f_3))
										{
											unk_0x1F6FCCC72D02C71A(iParam0, iVar3, Var48.f_3);
											func_281(iParam0, iVar3, Var48.f_3);
											if (func_92(Var48.f_3))
											{
												unk_0x0E8D2351A8BAC879(iParam0, iVar3, Var48.f_3, uParam1->f_221[iVar70].f_4);
												func_108(iParam0, iVar3, Var48.f_3, uParam1->f_221[iVar70].f_4);
											}
										}
									}
									else if (unk_0xAFB8387ED2D7213E(iParam0, iVar3, Var48.f_3))
									{
										unk_0xD0250CD824F31C16(iParam0, iVar3, Var48.f_3);
										func_280(iParam0, iVar3, Var48.f_3);
									}
									iVar71++;
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != -1569615261) && iVar2 != 966099553)
					{
						unk_0x650567883F5E3136(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < unk_0xAD2A7A6DFF55841B(iVar8))
						{
							if (unk_0x31D5E073B6F93CDC(iVar8, iVar6, &Var48))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, Var48.f_3))
								{
									unk_0xD0250CD824F31C16(iParam0, iVar2, Var48.f_3);
									func_280(iParam0, iVar2, Var48.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != -1569615261)
					{
						if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) < iVar118[iVar8])
						{
							unk_0x155F8B27DA5061F5(iParam0, iVar3, iVar118[iVar8], 0);
						}
					}
				}
			}
			iVar70++;
		}
		if (((unk_0xCAE036C45E7FC720(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != -1569615261) && iVar2 != 966099553)
		{
			iVar0 = unk_0xD2AEDBB0268DF71A(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > unk_0x282232D7B7DE504A(iParam0, iVar2, 1))
			{
				unk_0x155F8B27DA5061F5(iParam0, iVar2, (iVar0 - unk_0x282232D7B7DE504A(iParam0, iVar2, 1)), 0);
				unk_0x4602DF28F05262E2(iParam0, iVar2, unk_0x282232D7B7DE504A(iParam0, iVar2, 1));
			}
		}
	}
}

int func_279(int iParam0, var uParam1)
{
	iVar1 = unk_0x4160B65AE085B5A9();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x310836EE7129BA33(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_86(iParam2);
	if (iVar0 != 0)
	{
		if (unk_0xAFB8387ED2D7213E(iParam0, iParam1, iVar0))
		{
			unk_0xD0250CD824F31C16(iParam0, iParam1, iVar0);
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_86(iParam2);
	if (iVar0 != 0)
	{
		unk_0x1F6FCCC72D02C71A(iParam0, iParam1, iVar0);
	}
}

int func_282(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_81(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_183(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_283(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_284()
{
	unk_0x5413873D3F67BF93(false, -1);
	func_241();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), false);
		if (!Global_76622)
		{
			unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 0);
			unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
		}
	}
	Global_100832 = 0;
	func_285(0, 1, 1, 0, 0, 0);
}

void func_285(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_290(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_289())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_288(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_290(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_288(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_287(unk_0xD803B885F5E47A62())) && !func_258(unk_0xD803B885F5E47A62(), 0)) && !func_286()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_287(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_286()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_287(int iParam0)
{
	if (func_258(iParam0, 0))
	{
		return 1;
	}
	if (func_257())
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

int func_288(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_289()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0)
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

void func_291()
{
	if (iLocal_1331 > 0 || Local_154.f_118.f_25)
	{
		Local_154.f_118.f_26 = 90;
		Local_154.f_118.f_25 = 1;
		func_292();
	}
}

int func_292()
{
	if (Local_154.f_118.f_25)
	{
		switch (Local_154.f_118.f_26)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < iLocal_1331)
				{
					if (Global_4268307[iVar0] == -1)
					{
						if (!func_338(78225582, 1067618600, Global_4268296[iVar0], 537254313, Global_4268318[iVar0], Global_4268329[iVar0], 1, 4, 0, 3))
						{
							Local_154.f_118.f_26 = 90;
							return 1;
						}
					}
					else if (!func_338(78225582, -1829708865, Global_4268307[iVar0], 537254313, 1, 0, 1, 4, 0, 3) || !func_338(78225582, 1067618600, Global_4268296[iVar0], 537254313, Global_4268318[iVar0], Global_4268329[iVar0], 1, 4, 0, 3))
					{
						Local_154.f_118.f_26 = 90;
						return 1;
					}
					iVar0++;
				}
				if (func_333())
				{
					Local_154.f_118.f_26 = 70;
				}
				else
				{
					Local_154.f_118.f_26 = 90;
				}
				break;
			
			case 70:
				if (func_331(func_332()))
				{
					if (func_330(func_332()) == 2)
					{
						Local_154.f_118.f_26 = 80;
					}
					else
					{
						Local_154.f_118.f_26 = 90;
					}
					func_329(&uLocal_1284);
				}
				else if (func_327(&uLocal_1284, 25000, 0))
				{
					func_329(&uLocal_1284);
					Local_154.f_118.f_26 = 90;
				}
				break;
			
			case 80:
				Local_154.f_118.f_25 = 0;
				Local_154.f_118.f_26 = 0;
				unk_0x26D598B045655D3C(0);
				unk_0x897805B8E15447A7(0, 0);
				iVar0 = 0;
				while (iVar0 < iLocal_1331)
				{
					if (Global_4268307[iVar0] == -1)
					{
						func_306(iLocal_103, 1, 2, 0);
						func_302(-1980650810, (Global_4268329[iVar0] * Global_4268318[iVar0]));
					}
					else
					{
						func_302(-1980650810, (Global_4268329[iVar0] * Global_4268318[iVar0]));
						func_306(iLocal_103, 1, 0, 0);
						func_299(Global_4268285[iVar0]);
						func_297();
					}
					iVar0++;
				}
				if (iLocal_1331 != 0)
				{
					if (func_119())
					{
						func_293(func_332());
					}
				}
				iLocal_1331 = 0;
				iLocal_1334 = 0;
				iLocal_1333 = 0;
				break;
			
			case 90:
				func_293(func_332());
				unk_0x26D598B045655D3C(0);
				unk_0x897805B8E15447A7(0, 0);
				iVar0 = 0;
				while (iVar0 < iLocal_1331)
				{
					if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), Global_4268285[iVar0], 0))
					{
						iVar1 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), Global_4268285[iVar0]);
						if (iVar1 >= Global_4268318[iVar0])
						{
							iVar1 = (iVar1 - Global_4268318[iVar0]);
						}
						else
						{
							iVar1 = 0;
						}
						unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), Global_4268285[iVar0], iVar1, 0);
					}
					iVar0++;
				}
				iLocal_1331 = 0;
				iLocal_1334 = 0;
				iLocal_1333 = 0;
				Local_154.f_118.f_25 = 0;
				Local_154.f_118.f_26 = 0;
				Local_154.f_118.f_21 = 0;
				return 0;
				break;
			}
	}
	return 1;
}

void func_293(int iParam0)
{
	bVar0 = false;
	if (!func_119())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_296(iParam0))
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
		func_294(&(Global_4263954[iParam0]));
	}
}

void func_294(var uParam0)
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
	func_295(&(uParam0->f_14));
	func_295(&(uParam0->f_14.f_13));
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

void func_295(var uParam0)
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

int func_296(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_297()
{
	iVar0 = func_298(19);
	Global_2414418[iVar0] = 19;
	StringCopy(&(Global_2414418[iVar0].f_18[0]), "-StraightIntoFreemode", 64);
}

int func_298(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_299(int iParam0)
{
	switch (func_301(iParam0))
	{
		case 1:
			func_300(49, 1);
			break;
		
		case 2:
			func_300(50, 1);
			break;
	}
}

void func_300(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		unk_0x6FB46C25CCB7E6D5(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 741814745:
		case 911657153:
		case -1568386805:
		case 205991906:
		case -2084633992:
		case -1063057011:
		case 736523883:
		case -494615257:
		case 584646201:
			return 0;
			break;
		
		case -37975472:
		case 856002082:
		case -1312131151:
		case -1660422300:
		case -1357824103:
		case 324215364:
		case 2017895192:
		case 453432689:
			return 1;
			break;
		
		case -1813897027:
		case 1119849093:
		case 100416529:
		case 2144741730:
		case -1074790547:
		case 487013001:
		case 1593441988:
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_302(int iParam0, int iParam1)
{
	iVar0 = func_132(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_305(iParam0))
	{
		func_304(iParam0, iVar0);
	}
	else
	{
		func_303(iParam0, iVar0);
	}
}

void func_303(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_304(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_305(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 406381289:
			case 1669900865:
			case 54164875:
			case -842450336:
			case -1576871964:
			case -1446982891:
			case -1676857426:
			case 1280806976:
			case -1096682281:
			case 1894078811:
			case -1566025259:
			case -621080327:
			case 1021002722:
			case -1670771646:
			case -1992420464:
			case -386175531:
			case -203536263:
				return 1;
				break;
			}
	}
	return 0;
}

void func_306(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (!func_30(iParam0, 3, 0))
		{
			func_326(iParam0, 3, 0);
		}
		if (!unk_0x8CD06866876216F2())
		{
			switch (func_325(iParam0))
			{
				case 4:
					func_320(305, 0, 0);
					break;
				
				case 1:
					func_320(304, 0, 0);
					break;
				
				case 3:
					func_320(308, 0, 0);
					break;
				
				case 0:
					func_320(306, 0, 0);
					break;
				
				case 2:
					func_320(307, 0, 0);
					break;
				}
		}
		if (Global_98796.f_1353 >= 0)
		{
			if (unk_0x8CD06866876216F2())
			{
				bVar0 = true;
				if (iParam2 == 4)
				{
					if (func_319(0))
					{
						func_315(0);
						bVar0 = false;
					}
				}
				if (iParam2 == 6)
				{
					if (func_319(1))
					{
						func_315(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = unk_0x3A6D64D2A1228113() > 0;
					bVar2 = unk_0x3A6D64D2A1228113() < Global_98796.f_1353;
					if ((unk_0xA14BB9332558B949() && Global_4456448 == 0) || func_311(unk_0xD803B885F5E47A62()) == 11)
					{
						if (iParam2 == 11)
						{
							unk_0x5D96D8530B3D0904(&Global_1312810, 0);
						}
					}
					if (func_119())
					{
						if (func_310(func_332()) > 0)
						{
							unk_0x7A87D9FAFCB10ADC(func_310(func_332()));
						}
					}
					if (iParam2 == 1 && Global_98796.f_1354 == -61829581)
					{
						unk_0xA4F4B39459FDE0FD(Global_98796.f_1353, unk_0x12AB0310C2281427(&(Global_98796.f_1349)), 17, Global_98796.f_1355, bVar1, &(Global_98796.f_1349), unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356, bVar2);
					}
					else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
					{
						unk_0xA4F4B39459FDE0FD(Global_98796.f_1353, Global_98796.f_1354, iParam2, Global_98796.f_1355, bVar1, &(Global_98796.f_1349), unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356, bVar2);
					}
					else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
					{
						unk_0xA4F4B39459FDE0FD(Global_98796.f_1353, Global_98796.f_1354, iParam2, Global_98796.f_1355, bVar1, &(Global_98796.f_1349), unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356, bVar2);
					}
					else
					{
						unk_0xA4F4B39459FDE0FD(Global_98796.f_1353, unk_0x12AB0310C2281427(&(Global_98796.f_1349)), iParam2, Global_98796.f_1355, bVar1, &(Global_98796.f_1349), unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356, bVar2);
					}
				}
			}
			else if (unk_0xEF07223F00EBE9C9(&(Global_98796.f_1349)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_98796.f_1353 >= 0)
					{
						unk_0xBE99206234ECC2E7(unk_0x12AB0310C2281427(&(Global_98796.f_1349)), Global_98796.f_1353, unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_98796.f_1353 >= 0)
					{
						unk_0xBE99206234ECC2E7(unk_0x12AB0310C2281427(&(Global_98796.f_1349)), Global_98796.f_1353, unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), Global_98796.f_1354, Global_98796.f_1356);
					}
				}
				else if (Global_98796.f_1353 >= 0)
				{
					unk_0xBE99206234ECC2E7(unk_0x12AB0310C2281427(&(Global_98796.f_1349)), Global_98796.f_1353, unk_0x12AB0310C2281427(func_309(iParam0, iParam3)), 0, Global_98796.f_1356);
				}
			}
		}
	}
	else if (func_30(iParam0, 3, 0))
	{
		func_307(iParam0, 3, 0);
	}
}

void func_307(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_35() == 0)
		{
			iVar0 = func_31(func_34(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_308(func_34(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_32(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

char* func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_310(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_311(int iParam0)
{
	if (func_314(iParam0) == 243)
	{
		return func_312(iParam0);
	}
	return -1;
}

int func_312(int iParam0)
{
	if (func_313(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_313(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (func_313(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

void func_315(int iParam0)
{
	if (iParam0 == 8)
	{
		func_318(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_318(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_318(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_318(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_308(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_308(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_308(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_308(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_308(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_308(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_317()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_317()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_316(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_317()
{
	iVar0 = 0;
	return iVar0;
}

int func_318(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

bool func_319(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_39(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_39(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_39(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_39(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_31(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_31(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_31(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_31(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_31(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_31(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_317()].f_6174.f_10, iParam0);
}

void func_320(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_318((891 + iParam0), 1, -1, 1);
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
		func_321();
	}
}

void func_321()
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
		func_324(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_35() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_322();
				}
			}
		}
	}
}

int func_322()
{
	if (func_323(0))
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

bool func_323(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_324(int iParam0, int iParam1)
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

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

void func_326(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_35() == 0)
		{
			iVar0 = func_31(func_34(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_308(func_34(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_327(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_328(uParam0, bParam2, 0);
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

void func_328(var uParam0, bool bParam1, bool bParam2)
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

void func_329(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_330(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_331(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_332()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_310(iVar0) != 2147483647)
		{
			if (func_296(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_333()
{
	bVar0 = false;
	if (!func_119())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_332();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_33()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_337(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_310(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_334(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_334(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_336(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_335();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_335()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_336(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_119())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_33()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_332();
	if (iVar1 == -1)
	{
		if (!func_340(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_339(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_119())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_33()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_341(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_119())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = uParam0;
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_334(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_342()
{
	if (vLocal_1328.x)
	{
		unk_0x71199B01895C6202(vLocal_1328.y);
		vLocal_1328.x = 0;
	}
	if (unk_0xC844350D5D58C99A(vLocal_1328.z))
	{
		unk_0xEBA53F35D0085654(&(vLocal_1328.f_2));
	}
	if (unk_0xC844350D5D58C99A(Global_4267405))
	{
		unk_0xEBA53F35D0085654(&Global_4267405);
	}
}

void func_343()
{
	if (iLocal_105)
	{
		unk_0xAC52E52CF59704DE();
		iLocal_105 = 0;
		bLocal_106 = false;
	}
}

void func_344(int iParam0, int iParam1)
{
	StringCopy(&cVar0, func_348(iParam0, iParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar0) == -1487683087)
	{
		if (((unk_0x8CD06866876216F2() && func_22(unk_0xD803B885F5E47A62(), 0, 1)) && func_346()) && unk_0x080E9D045AEE5605())
		{
			Var16 = { func_345(unk_0xD803B885F5E47A62()) };
			if (unk_0xF2EC2A39FF9E838D(&Var16) && unk_0xD9DA83C40D038174(&uVar29, 35, &Var16))
			{
				unk_0x1CF04DA337BD60FA(uVar29);
			}
		}
	}
	else if (unk_0x12AB0310C2281427(&cVar0) != 0)
	{
		unk_0xF5A41F3D3B38EFE3(&cVar0);
	}
}

struct<13> func_345(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_346()
{
	if (unk_0x1963B11DE70153E0())
	{
		if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xC2F420D189FDB329())
		{
			Var0 = { func_347() };
			if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_347()
{
	unk_0xB6D2E6F743DD2459(&Var0, 13);
	return Var0;
}

char* func_348(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
			return "ShopUI_Title_GR_GunMod";
			break;
		
		case 47:
			return "ShopUI_Title_GR_GunMod";
		
		case 48:
			return "ShopUI_Title_GR_GunMod";
		
		case 49:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
			return "ShopUI_Title_Casino";
		
		case 51:
			return "ShopUI_Title_Casino";
		
		case 52:
			return "ShopUI_Title_GR_GunMod";
	}
	return "";
}

void func_349(bool bParam0, int iParam1)
{
	if (!func_351(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_350(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_350(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_351(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_352(bool bParam0, bool bParam1)
{
	iVar3 = 22;
	if (func_236(Local_154))
	{
		iVar3 = 8;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_201(Local_154, &Global_4268016, &Var5, iVar0, iVar1, 0, 0))
			{
				if (Var5.f_24 == 3)
				{
					if (iVar1 == 0)
					{
						iVar4 = 701173564;
					}
					else if (iVar1 == 1)
					{
						iVar4 = 1111175276;
					}
					else if (iVar1 == 2)
					{
						iVar4 = -1779214373;
					}
					else if (iVar1 == 3)
					{
						iVar4 = -1497794201;
					}
					else if (iVar1 == 4)
					{
						iVar4 = 2022153476;
					}
				}
				else if (Var5.f_24 == 4)
				{
					iVar4 = 1746997299;
				}
				else if (Var5.f_24 == 7)
				{
					iVar4 = func_184(&Global_4268016, Var5.f_23);
				}
				else if (Var5.f_24 == 6)
				{
					iVar4 = -1502580877;
				}
				else if (Var5 == -1716189206)
				{
					iVar4 = -518344816;
				}
				else if (Var5 == -102323637)
				{
					iVar4 = -789123952;
				}
				else if (Var5 == -1834847097)
				{
					iVar4 = 1725061196;
				}
				else if (Var5 == -102973651)
				{
					iVar4 = 173095431;
				}
				else
				{
					iVar4 = unk_0x6B7EC7B5B6B57364(Var5);
				}
				if (iVar4 != 0 && !func_236(Local_154))
				{
					if (bParam1)
					{
						if (bLocal_108)
						{
							unk_0x77ADAEFF81EAE1E4(Var5.f_1, fLocal_1162, iVar4, false);
						}
					}
					else if (!bLocal_108)
					{
						unk_0x3124890FDA752DE4(Var5.f_1, fLocal_1162, iVar4, 1);
					}
				}
				if (unk_0xC844350D5D58C99A(Local_154.f_238[iVar2]))
				{
					if (bParam0)
					{
						unk_0x4A4806F9D471E491(Local_154.f_238[iVar2], true, 0);
						unk_0x08841CDB215AE18F(Local_154.f_238[iVar2], Var5.f_1, 0, 0, 1);
						unk_0xC023D1C4BF532815(Local_154.f_238[iVar2], Var5.f_4, 2, 1);
					}
					else
					{
						unk_0x4A4806F9D471E491(Local_154.f_238[iVar2], true, 0);
						unk_0x08841CDB215AE18F(Local_154.f_238[iVar2], Var5.f_1 + Vector(-100f, 0f, 0f), 0, 0, 1);
						unk_0xC023D1C4BF532815(Local_154.f_238[iVar2], Var5.f_4, 2, 1);
					}
					if (iVar4 == 186956100)
					{
						unk_0x4A4806F9D471E491(Local_154.f_238[iVar2], false, 0);
					}
				}
			}
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	if ((((Local_154 != 46 && Local_154 != 47) && Local_154 != 48) && Local_154 != 49) && Local_154 != 52)
	{
		if (bParam1)
		{
			if (bLocal_108)
			{
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 424713737, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 448769273, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 1269906701, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 662464486, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 1105658306, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 2043652349, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 2f, 1093460780, false);
				unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 2f, 1948561556, false);
				if (unk_0x8CD06866876216F2())
				{
					unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 2f, 1165564444, false);
					unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, 1031636239, false);
					unk_0x77ADAEFF81EAE1E4(Local_154.f_12.f_6, 20f, -203737641, false);
				}
				func_99(&iLocal_133);
				func_99(&iLocal_134);
			}
		}
		else if (!bLocal_108)
		{
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 424713737, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 448769273, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 1269906701, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 662464486, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 1105658306, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 2043652349, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 2f, 1093460780, 1);
			unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 2f, 1948561556, 1);
			if (unk_0x8CD06866876216F2())
			{
				unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 2f, 1165564444, 1);
				unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, 1031636239, 1);
				unk_0x3124890FDA752DE4(Local_154.f_12.f_6, 20f, -203737641, 1);
			}
			if (unk_0xB87F6CF6E5628C67(iLocal_1295))
			{
				if (unk_0x12AB0310C2281427(func_7(Local_154)) == unk_0x12AB0310C2281427("v_gun2"))
				{
					vVar31 = { -1305,318f, -394,031f, 36,51f };
					vVar34 = { 0f, 0f, -105f };
					func_208(34, Local_154, &vVar31);
					func_204(34, Local_154, &vVar34);
					iLocal_133 = unk_0xB0BE3DFBBB59A620(iLocal_1295, vVar31, 0, true, false);
					unk_0xC023D1C4BF532815(iLocal_133, vVar34, 2, 1);
				}
				else
				{
					vVar31 = { 21,852f, -1106,65f, 29,61f };
					vVar34 = { 0f, 0f, -20f };
					func_208(28, Local_154, &vVar31);
					func_204(28, Local_154, &vVar34);
					iLocal_133 = unk_0xB0BE3DFBBB59A620(iLocal_1295, vVar31, 0, true, false);
					unk_0xC023D1C4BF532815(iLocal_133, vVar34, 2, 1);
				}
			}
			if (unk_0x8CD06866876216F2() && unk_0xB87F6CF6E5628C67(iLocal_1296))
			{
				if (unk_0x12AB0310C2281427(func_7(Local_154)) == unk_0x12AB0310C2281427("v_gun2"))
				{
					vVar37 = { -1305,308f, -394,3083f, 37,1373f };
					vVar40 = { 0f, 0f, -104,22f };
					func_208(34, Local_154, &vVar37);
					func_204(34, Local_154, &vVar40);
					iLocal_134 = unk_0xB0BE3DFBBB59A620(iLocal_1296, vVar37, 0, true, false);
					unk_0xC023D1C4BF532815(iLocal_134, vVar40, 2, 1);
				}
				else
				{
					vVar37 = { 22,2036f, -1106,676f, 30,2385f };
					vVar40 = { 0f, 0f, -20f };
					func_208(28, Local_154, &vVar37);
					func_204(28, Local_154, &vVar40);
					iLocal_134 = unk_0xB0BE3DFBBB59A620(iLocal_1296, vVar37, 0, true, false);
					unk_0xC023D1C4BF532815(iLocal_134, vVar40, 2, 1);
				}
			}
		}
	}
	bLocal_108 = !bParam1;
}

void func_353(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x9F4FE516EAACCFC5((*uParam0)[iVar0]))
		{
			unk_0x9A8DDC7C522F5BF5((*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

void func_354(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1 && uParam0->f_7)
	{
		func_238("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else
	{
		func_1068(iParam1, 1, 0);
	}
	func_361(iParam1, 0);
	func_360(iParam1, 0);
	func_307(iParam1, 1, 1);
	func_307(iParam1, 10, 1);
	func_307(iParam1, 11, 1);
	func_307(iParam1, 12, 1);
	func_307(iParam1, 13, 1);
	func_307(iParam1, 22, 1);
	func_307(iParam1, 25, 1);
	if (uParam0->f_1 == 1)
	{
		func_307(iParam1, 19, 1);
	}
	if (!func_1184(iParam1))
	{
		func_238("Letting shop controller know to relaunch when in range.", -1);
		func_326(iParam1, 17, 1);
	}
	func_359(iParam1);
	func_356(iParam1);
	func_355(unk_0xD803B885F5E47A62(), iParam1);
	func_241();
	if (func_239(iParam1))
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_12) && !unk_0xEB6A8945D1AC98A1(uParam0->f_12))
		{
			if (!unk_0x8CD06866876216F2() || unk_0xAFE0D3608EDA7039(uParam0->f_12))
			{
				unk_0xFADC0A217229F6B5(uParam0->f_12, 1);
			}
		}
	}
	else
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
		}
		if (func_1173(uParam0, iParam1))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_12))
			{
				unk_0xEBA53F35D0085654(&(uParam0->f_12));
			}
		}
		else if (unk_0xC844350D5D58C99A(uParam0->f_12))
		{
			unk_0x6DAD7906B73F064D(&(uParam0->f_12));
		}
	}
}

void func_355(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
	}
	if (unk_0x8CD06866876216F2())
	{
		if (Global_1590535[iParam0].f_207)
		{
			Global_1590535[iParam0].f_207 = 0;
			Global_1590535[iParam0].f_208 = 0;
		}
	}
}

void func_356(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_357(iParam0, iVar0);
		iVar0++;
	}
}

void func_357(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		if (Global_98796.f_347[func_358(iParam0)][iParam1] == 2)
		{
			Global_98796.f_347[func_358(iParam0)][iParam1] = 4;
		}
		else
		{
			Global_98796.f_347[func_358(iParam0)][iParam1] = 0;
		}
		if (Global_98796.f_383[func_358(iParam0)] == iParam1)
		{
			Global_98796.f_383[func_358(iParam0)] = 0;
		}
	}
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 1;
			break;
		
		case 40:
			return 2;
			break;
		
		case 41:
			return 3;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 5;
			break;
		
		case 44:
			return 6;
			break;
	}
	return 0;
}

void func_359(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_360(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		if (!func_30(iParam0, 6, 1))
		{
			func_326(iParam0, 6, 1);
			Global_98796.f_346++;
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x4C7B0415764B64BA(8);
			}
		}
	}
	else if (func_30(iParam0, 6, 1))
	{
		func_307(iParam0, 6, 1);
		if (Global_98796.f_346 > 0)
		{
			Global_98796.f_346 = (Global_98796.f_346 - 1);
		}
		unk_0xB38702A5025BB490("act_cinema");
	}
}

void func_361(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98796.f_437 = iParam0;
		if (!func_30(iParam0, 5, 1))
		{
			func_326(iParam0, 5, 1);
			func_359(iParam0);
			Global_98796.f_345++;
		}
	}
	else if (func_30(iParam0, 5, 1))
	{
		func_307(iParam0, 5, 1);
		func_359(iParam0);
		if (Global_98796.f_345 > 0)
		{
			Global_98796.f_345 = (Global_98796.f_345 - 1);
		}
	}
}

void func_362(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_363(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_363(int iParam0)
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

void func_364()
{
	Global_2450632.f_684.f_28 = 1;
	Global_2450632.f_684.f_32 = 0;
	Global_2450632.f_684.f_31 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	func_329(&(Global_2450632.f_684.f_29));
}

bool func_365()
{
	return Global_2450632.f_684.f_5;
}

void func_366()
{
	if (func_1192(1))
	{
		if (func_22(unk_0xD803B885F5E47A62(), 0, 1))
		{
			func_1025();
			func_1024();
		}
		else if (!func_1023())
		{
			func_1024();
		}
		return;
	}
	bLocal_1095 = (((((!unk_0x798A3F1296751F46() && !unk_0x1A72D8C9F025E5E3()) && !unk_0xE57E602827E07C9D()) && !iLocal_1120) && !Global_98796.f_1417) && !unk_0x4FD68D5821EE3E19());
	bLocal_1096 = true;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
		if ((unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), Global_98796.f_1, 0) && Local_154.f_118.f_31 == 2) && Global_98796.f_1 != -72657034)
		{
			iVar1 = Global_98796.f_1;
		}
		else
		{
			iVar1 = -1569615261;
		}
		if (iVar0 != iVar1)
		{
			if (iVar1 == -72657034)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar1, false);
			}
			else if (func_236(Local_154) && Local_154.f_118.f_5 != 5)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar1, true);
				unk_0x85B7F19165B3206C(unk_0x16F2683693E537C9(), iVar1, iLocal_1088);
			}
			else
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar1, true);
			}
			unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), true);
			unk_0x76B892E21D01B885(unk_0x16F2683693E537C9(), 0, 0, 1, 0);
		}
		if ((iVar1 != 0 && iVar1 != -1569615261) && iVar1 != -72657034)
		{
			bLocal_1096 = false;
		}
	}
	if ((unk_0x8CD06866876216F2() && unk_0xC844350D5D58C99A(Local_154.f_12)) && !unk_0xEB6A8945D1AC98A1(Local_154.f_12))
	{
		unk_0xF775F83FA6194F2C(Local_154.f_12);
	}
	func_1017(&Local_154);
	func_972(&Local_154, &(Local_154.f_118), -1);
	if (Local_154.f_118.f_31 > 1)
	{
		func_967(0, bLocal_1096, 1);
	}
	func_961(0);
	switch (Local_154.f_118.f_31)
	{
		case 0:
			func_936(1);
			func_929(&(Local_154.f_118), 0);
			if (unk_0x558ADED8B93EA0F6(Local_154.f_186.f_31, 7f) && !Global_76622)
			{
				func_927(&Local_154);
			}
			Local_1141.f_19 = 0;
			Local_1141.f_18 = 0;
			unk_0x24D1A8A556F3252A(1);
			func_925("GUN_MNU", Local_154, 1);
			Global_4264544 = 1;
			func_924(Local_154, 0);
			func_923();
			unk_0xAE317D00A5A55DF6("HUD_AMMO_SHOP", 0, -1);
			func_922();
			bVar2 = true;
			if (!func_36(5, 0))
			{
				func_238("Waiting for weapons to load", -1);
				bVar2 = false;
			}
			if (!func_925("GUN_MNU", Local_154, 1))
			{
				func_238("Waiting for menu assets to load", -1);
				bVar2 = false;
			}
			if (!func_924(Local_154, 0))
			{
				func_238("Waiting for intro assets to load", -1);
				bVar2 = false;
			}
			if (!func_923())
			{
			}
			if (bVar2)
			{
				Local_154.f_118.f_31 = 1;
				Local_154.f_118.f_5 = 0;
			}
			else if (timera() > 25000)
			{
				Local_154.f_118.f_31 = 8;
			}
			else if (!Local_154.f_7 || !Local_154.f_8)
			{
				Local_154.f_118.f_31 = 8;
			}
			break;
		
		case 1:
			switch (Local_154.f_118.f_5)
			{
				case 0:
					Local_154.f_118.f_19 = 1;
					func_921(0, 1, Local_154.f_12, 0, 0, 0, 1, 0, 0, 0);
					func_929(&(Local_154.f_118), 0);
					func_920(&Local_154, 1077936128);
					iLocal_1081 = 0;
					bLocal_1083 = true;
					iLocal_1082 = 1;
					iLocal_1084 = 1;
					bLocal_1116 = false;
					iLocal_1086 = 0;
					bLocal_1163 = false;
					iLocal_1085 = unk_0x1C0640BA9A7327B3();
					Local_154.f_118.f_1 = 0;
					Local_154.f_118.f_2 = -1;
					Local_154.f_118.f_3 = 0;
					Local_154.f_118.f_4 = 0;
					Local_154.f_118.f_9 = 0;
					Local_154.f_118.f_10 = 1;
					Local_154.f_118.f_5 = 0;
					Local_154.f_118.f_16 = 0;
					Local_154.f_118.f_17 = 0;
					Local_154.f_118.f_23 = 0;
					StringCopy(&(Local_154.f_118.f_11), "", 16);
					bLocal_1282 = false;
					if ((((Local_154 == 46 || Local_154 == 47) || Local_154 == 48) || Local_154 == 49) || Local_154 == 52)
					{
						Local_154.f_118.f_2 = 0;
						Local_154.f_118.f_38 = 0;
						Local_154.f_118.f_3 = 0;
						if (func_45(1623028892, -1076751822, -1))
						{
							Local_154.f_118.f_3 = 2;
						}
					}
					if (unk_0x8CD06866876216F2())
					{
						unk_0xDD80CDEA259C4484();
						unk_0x1ED65C6AD8472EFB();
					}
					if (!Global_76622)
					{
						Local_1141.f_19 = 1;
					}
					func_352(1, 0);
					func_918(Local_154, Local_154.f_118, &(Local_154.f_118.f_1), &(Local_154.f_118.f_3), &Var3);
					if (!func_185(Var3, Var3.f_24, 0, Local_154))
					{
						func_917(Local_154, &(Local_154.f_118.f_1), Local_154.f_118.f_3, &Var3);
					}
					func_916(Var3);
					func_913(&Var3);
					func_863();
					if (func_201(Local_154, &Global_4268016, &Var3, Local_154.f_118.f_3, Local_154.f_118.f_1, 0, 0))
					{
						func_860(&Local_154, &(Local_154.f_118), &Var3, 0);
					}
					else
					{
						func_858(&Local_154, Local_154.f_118.f_4, Local_154.f_118.f_3, Local_154.f_118.f_1);
					}
					if (Local_154 == 47)
					{
						Local_154.f_50[Local_154.f_118.f_4].f_4 = { -6,721f, 0f, 117,859f };
					}
					if (Local_154 == 48)
					{
						Local_154.f_50[Local_154.f_118.f_4].f_4 = { -6,9039f, 0f, 114,7558f };
					}
					if (Local_154 == 49)
					{
						Local_154.f_50[Local_154.f_118.f_4].f_4 = { -5f, 0f, 114f };
					}
					if (Local_154 == 52)
					{
						Local_154.f_50[Local_154.f_118.f_4].f_4 = { -7,0095f, 0f, -73,6007f };
					}
					func_855(&(Local_154.f_50[Local_154.f_118.f_4]));
					if (!Global_76622)
					{
						if (func_264(1))
						{
							unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
					}
					iLocal_109 = 0;
					iLocal_1286 = 0;
					iLocal_1288 = 0;
					iLocal_1287 = 0;
					Local_154.f_118.f_31 = 2;
					break;
			}
			break;
		
		case 2:
			if (!bLocal_1111)
			{
				func_36(11, 0);
			}
			if (unk_0xB8E3620B82AD47D7(2))
			{
				func_863();
			}
			func_923();
			func_515();
			func_508();
			func_506();
			func_503();
			func_373();
			break;
		
		case 6:
			func_936(0);
			func_241();
			Local_154.f_118.f_31 = 7;
			break;
		
		case 7:
			if (unk_0x8CD06866876216F2())
			{
				unk_0x87EDBDC202526E71();
				unk_0xA26E01EF6A507193();
			}
			func_242(1);
			Local_1141.f_19 = 0;
			if (unk_0xC844350D5D58C99A(Local_154.f_12))
			{
				unk_0x0C8C0C840C2D1AD2(Local_154.f_12, unk_0x16F2683693E537C9(), -1, 0, 2);
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				if (Global_76622)
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, false);
				}
			}
			func_372(&(Local_154.f_50));
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			func_352(0, 1);
			unk_0x24D1A8A556F3252A(0);
			func_342();
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0x76B892E21D01B885(unk_0x16F2683693E537C9(), 1, 1, 1, 0);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), false);
			}
			if (!unk_0x8CD06866876216F2())
			{
				func_370(unk_0x16F2683693E537C9(), 0);
			}
			if (!unk_0x8CD06866876216F2())
			{
				if (iLocal_1086)
				{
					if (!Global_111638.f_668.f_1314)
					{
						func_367("AM_H_ARMR", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_111638.f_668.f_1314 = 0;
					}
					iLocal_1086 = 0;
				}
			}
			func_284();
			Global_98796.f_1 = 0;
			func_243(&(Local_154.f_118), 0, 1, 1, 1);
			func_349(1, Local_154);
			Global_4264544 = 0;
			Local_154.f_118.f_19 = 0;
			Local_154.f_11 = 3;
			break;
		
		case 8:
			if (unk_0x8CD06866876216F2())
			{
				unk_0x87EDBDC202526E71();
				unk_0xA26E01EF6A507193();
			}
			func_372(&(Local_154.f_50));
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0x76B892E21D01B885(unk_0x16F2683693E537C9(), 1, 1, 1, 0);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), false);
			}
			func_352(0, 1);
			unk_0x24D1A8A556F3252A(0);
			func_349(1, Local_154);
			Global_4264544 = 0;
			func_344(Local_154, 0);
			unk_0x42740B44BA8D7B43("HUD_AMMO_SHOP");
			func_343();
			func_342();
			func_243(&(Local_154.f_118), 0, 1, 1, 1);
			func_242(1);
			func_284();
			Local_1141.f_19 = 0;
			Global_98796.f_1 = 0;
			func_291();
			Local_154.f_118.f_19 = 0;
			Local_154.f_11 = 3;
			break;
	}
	func_240(&Local_1141, 0);
}

void func_367(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_368(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_368(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_369();
	}
}

void func_369()
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

void func_370(int iParam0, bool bParam1)
{
	iVar0 = func_66(iParam0);
	if (func_62(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_371(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xCDC520E5E48E63D9(-922941372, iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xCDC520E5E48E63D9(-753526687, iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xCDC520E5E48E63D9(-502936933, iVar3, 1);
			}
		}
	}
}

void func_371(int iParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_283(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_283(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_282(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_282(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_199(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar9))
					{
						if (unk_0x31D5E073B6F93CDC(iVar9, iVar1, &Var50))
						{
							if (!func_183(Var50.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var50.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

void func_372(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x9F4FE516EAACCFC5((*uParam0)[iVar0]))
		{
			unk_0xE3BB8E05FCEB3FBE((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

void func_373()
{
	if (iLocal_1094 && !Local_154.f_118.f_25)
	{
		if ((((Local_154.f_118.f_5 == 1 && Local_154.f_118.f_2 == -1) || (Local_154.f_118.f_5 == 4 && Local_154.f_118.f_2 == -1)) || (Local_154.f_118.f_5 == 5 && Local_154.f_118.f_2 == -1)) || (Local_154.f_118.f_5 == 6 && Local_154.f_118.f_2 == -1))
		{
			if (func_201(Local_154, &Global_4268016, &Var0, Local_154.f_118.f_3, Local_154.f_118.f_1, 0, 0))
			{
				if (Var0.f_24 == 0)
				{
					if (func_236(Local_154) && func_79(Var0))
					{
						if (!func_106(Var0))
						{
							Local_154.f_118.f_2 = 0;
						}
						else if (Var0.f_25 != 0)
						{
							Local_154.f_118.f_2 = 1;
						}
						else if (func_502(Var0, &(Local_154.f_118.f_2)))
						{
							Local_154.f_118.f_2 += 2;
						}
						else if (func_498(Var0, &(Local_154.f_118.f_2)))
						{
							Local_154.f_118.f_2 = (Local_154.f_118.f_2 + func_167());
						}
						else
						{
							Local_154.f_118.f_2 = -1;
						}
					}
					else if (Var0.f_25 != 0)
					{
						Local_154.f_118.f_2 = 1;
					}
					else if (func_502(Var0, &(Local_154.f_118.f_2)))
					{
						Local_154.f_118.f_2 += 2;
					}
					else if (func_498(Var0, &(Local_154.f_118.f_2)))
					{
						Local_154.f_118.f_2 = (Local_154.f_118.f_2 + func_167());
					}
					else
					{
						Local_154.f_118.f_2 = -1;
					}
				}
				else if (func_502(Var0, &(Local_154.f_118.f_2)))
				{
					Local_154.f_118.f_2 += 2;
				}
				else if (func_498(Var0, &(Local_154.f_118.f_2)))
				{
					Local_154.f_118.f_2 = (Local_154.f_118.f_2 + func_167());
				}
				else
				{
					Local_154.f_118.f_2 = -1;
				}
			}
			if (Var0 == -1355376991)
			{
				if (func_497())
				{
					Local_154.f_118.f_2 = 2;
				}
				else
				{
					Local_154.f_118.f_2 = 41;
				}
			}
			if (Var0 == -72657034)
			{
				unk_0xBDCADF8E5030FC79(unk_0xD803B885F5E47A62(), &iLocal_1088);
				if (unk_0x8CD06866876216F2())
				{
					iLocal_1091 = func_31(2040, -1, 0);
				}
				iLocal_1090 = func_496();
				if (unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62()))
				{
					unk_0x1E9DAC645AEE64F0(unk_0xD803B885F5E47A62(), &iLocal_1089);
				}
				else
				{
					iLocal_1089 = -1;
				}
			}
			else if (Var0 == -61829581)
			{
			}
			else
			{
				iLocal_1088 = unk_0x7DD9FDEA5DFB355E(unk_0x16F2683693E537C9(), Var0);
				if (func_90(&Local_1299, Var0, 962500902))
				{
					if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), Var0, func_88(&Local_1299, Var0, 962500902, 0)) || unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), Var0, func_88(&Local_1299, Var0, 962500902, 1)))
					{
						if (unk_0xC844350D5D58C99A(Local_154.f_238[(Local_154.f_118.f_3 * 5 + Local_154.f_118.f_1)]))
						{
							if (unk_0xD59C425D3CEABECE(Local_154.f_238[(Local_154.f_118.f_3 * 5 + Local_154.f_118.f_1)], func_88(&Local_1299, Var0, 962500902, 0)) || unk_0xD59C425D3CEABECE(Local_154.f_238[(Local_154.f_118.f_3 * 5 + Local_154.f_118.f_1)], func_88(&Local_1299, Var0, 962500902, 1)))
							{
								if ((func_236(Local_154) && func_79(Var0)) && func_106(Var0))
								{
								}
								else
								{
									iLocal_1088 = 31;
								}
							}
						}
					}
				}
			}
			iLocal_1092 = Local_154.f_118.f_2;
		}
		func_913(&Var0);
		func_863();
		iLocal_1094 = 0;
	}
	unk_0x73591FF5CCBBB2EA(3);
	unk_0x73591FF5CCBBB2EA(4);
	unk_0x73591FF5CCBBB2EA(5);
	unk_0x73591FF5CCBBB2EA(13);
	if (!bLocal_1096)
	{
		if (func_236(Local_154))
		{
			if (Var0 != 0)
			{
				if (func_193(Var0, -1, 0))
				{
					func_488(Var0, 1, -1);
				}
			}
		}
		unk_0x73591FF5CCBBB2EA(2);
	}
	if (Local_154.f_118.f_16)
	{
		if (unk_0x12AB0310C2281427(&(Local_154.f_118.f_11)) == 1053587609)
		{
			if (!unk_0x8CD06866876216F2())
			{
				func_487(&(Local_154.f_118.f_11), 0, 0);
			}
			else if (Global_98796.f_1 == -102323637)
			{
				func_487("SHOP_UNLOCKDLC", 0, 0);
				func_486("SHOP_CONTENT_1");
			}
			else if (Global_98796.f_1 == -1076751822)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, 962500902) + 1)
				{
					func_487("SHOP_UNLOCKDLC6", 0, 0);
					func_486("SHOP_CONTENT_15");
				}
				else
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_1");
				}
			}
			else if (Global_98796.f_1 == 1627465347)
			{
				func_487("SHOP_UNLOCKDLC", 0, 0);
				func_486("SHOP_CONTENT_4");
			}
			else if (Global_98796.f_1 == -771403250)
			{
				func_487("SHOP_UNLOCKDLC2", 0, 0);
				func_486("SHOP_CONTENT_2");
			}
			else if (Global_98796.f_1 == -1063057011)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, -571619404) + 3)
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
				else if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, 962500902) + 1)
				{
					func_487("SHOP_UNLOCKDLC6", 0, 0);
					func_486("SHOP_CONTENT_15");
				}
				else
				{
					func_487("SHOP_UNLOCKDLC2", 0, 0);
					func_486("SHOP_CONTENT_2");
				}
			}
			else if (Global_98796.f_1 == 2132975508)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, 962500902) + 1)
				{
					func_487("SHOP_UNLOCKDLC6", 0, 0);
					func_486("SHOP_CONTENT_15");
				}
				else
				{
					func_487("SHOP_UNLOCKDLC2", 0, 0);
					func_486("SHOP_CONTENT_5");
				}
			}
			else if (Global_98796.f_1 == -1834847097 || Global_98796.f_1 == 137902532)
			{
				func_487("SHOP_UNLOCKDLC2", 0, 0);
				func_486("SHOP_CONTENT_6b");
			}
			else if (Global_98796.f_1 == 171789620)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, -571619404) + 4)
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
				else
				{
					func_487("SHOP_UNLOCKDLC2", 0, 0);
					func_486("SHOP_CONTENT_12");
				}
			}
			else if (Global_98796.f_1 == -656458692 || Global_98796.f_1 == -598887786)
			{
				func_487("SHOP_UNLOCKDLC2", 0, 0);
				func_486("SHOP_CONTENT_14");
			}
			else if (Global_98796.f_1 == -1466123874)
			{
				func_487("SHOP_UNLOCKDLC3", 0, 0);
				func_486("SHOP_CONTENT_8");
			}
			else if (Global_98796.f_1 == 1672152130 || Global_98796.f_1 == -1420407917)
			{
				func_487("SHOP_UNLOCKDLC4", 0, 0);
				func_486("SHOP_CONTENT_3");
			}
			else if (Global_98796.f_1 == -1951375401)
			{
				func_487("SHOP_UNLOCKDLC4", 0, 0);
				func_486("SHOP_CONTENT_16");
			}
			else if (Global_98796.f_1 == -619010992)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, 1863181664))
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
				else
				{
					func_487("SHOP_UNLOCKDLC6", 0, 0);
					func_486("SHOP_CONTENT_15");
				}
			}
			else if (Global_98796.f_1 == -581044007)
			{
				func_487("SHOP_UNLOCKDLC6", 0, 0);
				func_486("SHOP_CONTENT_15");
			}
			else if (Global_98796.f_1 == -1074790547)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, -1322016827))
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
			}
			else if (Global_98796.f_1 == -2084633992)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, -571619404) + 4)
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
			}
			else if (Global_98796.f_1 == 1649403952)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, -571619404) + 3)
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
			}
			else if (Global_98796.f_1 == 736523883)
			{
				if (Local_154.f_118.f_2 == func_485(&Local_1299, Global_98796.f_1, 196630833))
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
			}
			else if (Global_98796.f_1 == 984333226)
			{
				if (Local_154.f_118.f_2 == (func_485(&Local_1299, Global_98796.f_1, 945598191) - 1))
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_22");
				}
			}
			else if ((((((Global_98796.f_1 == 317205821 || Global_98796.f_1 == -853065399) || Global_98796.f_1 == 125959754) || Global_98796.f_1 == -1121678507) || Global_98796.f_1 == -1169823560) || Global_98796.f_1 == -1810795771) || Global_98796.f_1 == 419712736)
			{
				if (Local_154.f_118.f_5 == 0)
				{
					func_487("SHOP_UNLOCKDLC", 0, 0);
					func_486("SHOP_CONTENT_24");
				}
			}
			else if (Global_98796.f_1 == -72657034)
			{
				if (func_201(Local_154, &Global_4268016, &Var0, Local_154.f_118.f_3, Local_154.f_118.f_1, 0, 0))
				{
					if (func_127(&Local_1306, Var0, func_124(Var0, (Local_154.f_118.f_2 - func_167())), 0))
					{
						if (Local_1306.f_10 == 1 && Local_1306.f_9 > 46)
						{
							func_487("SHOP_UNLOCKDLC4", 0, 0);
							func_486("SHOP_CONTENT_3");
						}
						else if (Local_1306.f_10 == 1 && Local_1306.f_9 > 26)
						{
							func_487("SHOP_UNLOCKDLC2", 0, 0);
							func_486("SHOP_CONTENT_10b");
						}
						else if (((Local_1306.f_10 == 1 && Local_1306.f_9 > 0) || (Local_1306.f_10 == 2 && Local_1306.f_9 >= 8)) || (Local_1306.f_10 == 3 && Local_1306.f_9 >= 8))
						{
							func_487("SHOP_UNLOCKDLC2", 0, 0);
							func_486("SHOP_CONTENT_9b");
						}
						else
						{
							func_487(&(Local_154.f_118.f_11), 0, 0);
						}
					}
				}
			}
			else
			{
				func_487(&(Local_154.f_118.f_11), 0, 0);
			}
		}
		else
		{
			func_487(&(Local_154.f_118.f_11), 0, 0);
			if (unk_0x12AB0310C2281427(&(Local_154.f_118.f_11)) == 819148274)
			{
				if (!func_72(238))
				{
					func_483(func_484(238));
				}
				else if (!func_72(239))
				{
					func_483(func_484(239));
				}
				else if (!func_72(240))
				{
					func_483(func_484(240));
				}
				else if (!func_72(241))
				{
					func_483(func_484(241));
				}
				else if (!func_72(242))
				{
					func_483(func_484(242));
				}
				else if (!func_72(243))
				{
					func_483(func_484(243));
				}
				else if (!func_72(244))
				{
					func_483(func_484(244));
				}
				else if (!func_72(245))
				{
					func_483(func_484(245));
				}
				else if (!func_72(246))
				{
					func_483(func_484(246));
				}
				else if (!func_72(247))
				{
					func_483(func_484(247));
				}
			}
		}
		if (bLocal_118)
		{
			func_481(func_482(), 0, 0);
		}
		else
		{
			iVar26 = 0;
			iVar27 = 0;
			fVar28 = (1f - func_210(Var0, &iVar26, &iVar27));
			if (fVar28 != 0f)
			{
				func_481("GSHOP_DISC", 0, 0);
				func_480(round((fVar28 * 100f)));
			}
		}
		if ((unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), Local_154.f_118.f_7)) || (!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - Local_154.f_118.f_6) > 0))
		{
			Local_154.f_118.f_16 = 0;
		}
	}
	if (!Local_154.f_118.f_16)
	{
		bVar29 = false;
		if (func_201(Local_154, &Global_4268016, &Var0, Local_154.f_118.f_3, Local_154.f_118.f_1, 0, 0))
		{
			if (Local_154.f_118.f_5 == 0)
			{
				if (Var0.f_24 == 7)
				{
					if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
					{
						func_487("GSM_DLC1", 0, 0);
						bVar29 = true;
					}
					else if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						func_487("GSM_DLC2", 0, 0);
						bVar29 = true;
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 7))
				{
					if (Global_76622)
					{
						if (Var0.f_24 == 4)
						{
							func_487("GS_STOCK2", 0, 0);
							func_483(func_484(1));
						}
						else if (Var0.f_24 == 3)
						{
							if (Local_154.f_118.f_1 == 0)
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_484(156));
							}
							else if (Local_154.f_118.f_1 == 1)
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_484(157));
							}
							else if (Local_154.f_118.f_1 == 2)
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_484(158));
							}
							else if (Local_154.f_118.f_1 == 3)
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_484(159));
							}
							else if (Local_154.f_118.f_1 == 4)
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_484(160));
							}
							else
							{
								func_487("GS_STOCK", 0, 0);
							}
						}
						else if (((Var0.f_24 == 0 || Var0.f_24 == 1) || Var0.f_24 == 2) || Var0.f_24 == 5)
						{
							if ((unk_0x8CD06866876216F2() && !func_200(1, 1)) && Var0 == 2017895192)
							{
								func_487("GSM_LOCK_SCLUB", 0, 0);
							}
							else if (Var0 == 727643628)
							{
								func_487("UNLOCK_CRMCPSTL", 0, 0);
							}
							else
							{
								func_487("GS_STOCK2", 0, 0);
								func_483(func_479(Var0));
							}
						}
						else
						{
							func_487("GS_STOCK", 0, 0);
						}
						bVar29 = true;
					}
					else
					{
						func_487("GS_STOCK", 0, 0);
						bVar29 = true;
					}
				}
				else if (Var0.f_24 == 3 && Global_76622)
				{
					if (Local_154.f_118.f_1 == 0)
					{
						iVar38 = 156;
					}
					else if (Local_154.f_118.f_1 == 1)
					{
						iVar38 = 157;
					}
					else if (Local_154.f_118.f_1 == 2)
					{
						iVar38 = 158;
					}
					else if (Local_154.f_118.f_1 == 3)
					{
						iVar38 = 159;
					}
					else if (Local_154.f_118.f_1 == 4)
					{
						iVar38 = 160;
					}
					if (func_477(func_63(), iVar38))
					{
						func_468(func_63(), iVar38);
						func_466(&(Local_154.f_118), "GSM_UNLOCK_N", 3000);
					}
					else
					{
						func_465(&Global_4268016, Local_154.f_118.f_3, Local_154.f_118.f_1, &sVar30, &Var34, Local_154);
						if (!unk_0xEA6BC48857E0AC4C(&Var34) && unk_0xEF07223F00EBE9C9(&Var34))
						{
							func_487(&Var34, 0, 0);
							bVar29 = true;
						}
					}
				}
				else
				{
					bVar39 = false;
					if (!unk_0x8CD06866876216F2())
					{
						switch (Var0)
						{
							case -102323637:
								StringCopy(&Var34, "WTD2_Bottle", 16);
								bVar39 = true;
								break;
							
							case -1076751822:
								StringCopy(&Var34, "WTD2_SNSPistol", 16);
								bVar39 = true;
								break;
							
							case 1627465347:
								StringCopy(&Var34, "WTD2_GUSNBRG", 16);
								bVar39 = true;
								break;
							
							case -771403250:
								StringCopy(&Var34, "WTD2_HvyPistol", 16);
								bVar39 = true;
								break;
							
							case -1063057011:
								StringCopy(&Var34, "WTD2_SpCarbine", 16);
								bVar39 = true;
								break;
							
							case 2132975508:
								StringCopy(&Var34, "WTD2_BullRifle", 16);
								bVar39 = true;
								break;
							
							case -1834847097:
								StringCopy(&Var34, "WTD2_DAGGER", 16);
								bVar39 = true;
								break;
							
							case 137902532:
								StringCopy(&Var34, "WTD2_VPISTOL", 16);
								bVar39 = true;
								break;
							
							case 2138347493:
								StringCopy(&Var34, "WTD2_FIREWRK", 16);
								bVar39 = true;
								break;
							
							case -1466123874:
								StringCopy(&Var34, "WTD2_MUSKET", 16);
								bVar39 = true;
								break;
							
							case -952879014:
								StringCopy(&Var34, "WTD2_MKRIFLE", 16);
								bVar39 = true;
								break;
							
							case 984333226:
								StringCopy(&Var34, "WTD2_HVYSHGN", 16);
								bVar39 = true;
								break;
							
							case 1672152130:
								StringCopy(&Var34, "WTD2_HOMLNCH", 16);
								bVar39 = true;
								break;
							
							case -1420407917:
								StringCopy(&Var34, "WTD2_PRXMINE", 16);
								bVar39 = true;
								break;
							
							case 171789620:
								StringCopy(&Var34, "WTD2_COMBATPDW", 16);
								bVar39 = true;
								break;
							
							case -656458692:
								StringCopy(&Var34, "WTD2_KNUCKLE", 16);
								bVar39 = true;
								break;
							
							case -598887786:
								StringCopy(&Var34, "WTD2_MKPISTOL", 16);
								bVar39 = true;
								break;
							}
					}
					if (bVar39)
					{
						func_487(&Var34, 0, 0);
						bVar29 = true;
					}
					else
					{
						func_465(&Global_4268016, Local_154.f_118.f_3, Local_154.f_118.f_1, &sVar30, &Var34, Local_154);
						if (!unk_0xEA6BC48857E0AC4C(&Var34) && unk_0xEF07223F00EBE9C9(&Var34))
						{
							func_487(&Var34, 0, 0);
							bVar29 = true;
						}
					}
				}
			}
			else if ((Local_154.f_118.f_5 == 1 || Local_154.f_118.f_5 == 5) || Local_154.f_118.f_5 == 6)
			{
				if (((func_236(Local_154) && func_79(Var0)) && !Local_154.f_118.f_5 == 5) && !Local_154.f_118.f_5 == 6)
				{
					if (!func_106(Var0))
					{
						if (Local_154.f_118.f_2 == 0)
						{
							func_487("WCT_UPGRADE_AV", 0, 0);
							bVar29 = true;
						}
					}
					else if (Local_154.f_118.f_2 == 42)
					{
						func_487("WCT_DOWNGRADE", 0, 0);
						func_486(func_229(func_464(Var0), 0));
						bVar29 = true;
					}
					else if (Local_154.f_118.f_2 == 40)
					{
						if (bLocal_153)
						{
							sVar40 = "WCD_SUB_LCOL";
						}
						else
						{
							sVar40 = "WCD_SUB_LLCK";
							iVar41 = 0;
							if (!func_463(Var0, &iVar41))
							{
								sVar40 = "WCD_SUB_LTNT";
							}
						}
						func_487(sVar40, 0, 0);
						bVar29 = true;
					}
				}
				if (bLocal_1280)
				{
					if (iLocal_1281 == 0)
					{
						func_487("GS_PARA_M0", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1281 == 1)
					{
						func_487("GS_PARA_M1", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1281 == 2)
					{
						func_487("GS_PARA_M2", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1281 == 3)
					{
						func_487("GS_PARA_M3", 0, 0);
						bVar29 = true;
					}
				}
				else if ((unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 10) && !Local_154.f_118.f_5 == 5) && !Local_154.f_118.f_5 == 6)
				{
					if (func_178(&Local_1299, Var0, (Local_154.f_118.f_2 - 2), 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 8))
						{
							if (Global_76622)
							{
								if (func_462(Local_1299, Var0))
								{
								}
								else
								{
									func_487("GS_STOCK2", 0, 0);
								}
								func_483(func_461(Local_1299.f_4, Var0));
								bVar29 = true;
							}
							else
							{
								func_487("GS_STOCK", 0, 0);
								bVar29 = true;
							}
						}
						else if (func_460(Var0, Local_154))
						{
							if (Local_154.f_118.f_2 - 2) == func_485(&Local_1299, Var0, Local_1299.f_4)
							{
								func_487(func_459(Local_1299.f_4, Var0), 0, 0);
								bVar29 = true;
							}
						}
						else
						{
							func_456(Var0, (Local_154.f_118.f_2 - 2), &sVar30, &Var34);
							if (!unk_0xEA6BC48857E0AC4C(&Var34) && unk_0xEF07223F00EBE9C9(&Var34))
							{
								func_487(&Var34, 0, 0);
								bVar29 = true;
							}
							bVar42 = false;
							if (func_448(Local_1299, Var0, &bVar42) || Local_1299.f_1)
							{
								if (bVar42)
								{
									func_487("GSM_OWN_EQUIP", 0, 0);
									bVar29 = true;
								}
								else
								{
									func_487("GSM_TICK", 0, 0);
									bVar29 = true;
								}
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 11))
				{
					if (func_127(&Local_1306, Var0, func_124(Var0, (Local_154.f_118.f_2 - func_167())), 0))
					{
						if (unk_0x8CD06866876216F2())
						{
							if (!func_445(Var0, Local_1306.f_9, Local_1306.f_10))
							{
								if (func_444(Var0, Local_1306.f_9, &Var34, &iVar43, &bVar44))
								{
									if (unk_0x12AB0310C2281427(&Var34) == unk_0x12AB0310C2281427("GSM_TINT_CASH"))
									{
										if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
										{
											StringConCat(&Var34, "1", 16);
										}
										else if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x0EFF6B4415DAF4A1())
										{
											StringConCat(&Var34, "2", 16);
										}
									}
									else if (unk_0x12AB0310C2281427(&Var34) == unk_0x12AB0310C2281427("GSM_TINT_KILL"))
									{
										iVar43 = (iVar43 - func_443(Var0));
									}
									func_487(&Var34, 0, 0);
									if (iVar43 != -1)
									{
										func_483(iVar43);
									}
									if (bVar44)
									{
										func_465(&Global_4268016, Local_154.f_118.f_3, Local_154.f_118.f_1, &sVar30, &Var34, Local_154);
										func_486(func_442(Var0));
									}
									bVar29 = true;
									if (Var0 == -72657034)
									{
										iVar45 = func_441(Var0, Local_1306.f_9, Local_1306.f_10);
										if (iVar45 != 0)
										{
											func_487("GS_STOCK2", 0, 0);
											func_483(func_484(iVar45));
											bVar29 = true;
										}
									}
								}
								if (unk_0x8CD06866876216F2())
								{
									if ((Var0 == -72657034 && Local_1306.f_10 == 4) && Local_1306.f_9 == 6)
									{
										if (!func_346())
										{
											func_487("GSM_LOCK_CREW", 0, 0);
											bVar29 = true;
										}
										else if (!func_438(6, 0))
										{
											if (func_437(unk_0xD803B885F5E47A62()))
											{
												func_487("GSM_LOCK_RNK", 0, 0);
											}
											else
											{
												func_487("GSM_LOCK_RNKT", 0, 0);
											}
											bVar29 = true;
										}
									}
								}
							}
							else if ((func_436(Var0, Local_154) && !Local_154.f_118.f_5 == 5) && !Local_154.f_118.f_5 == 6)
							{
								if ((Local_154.f_118.f_2 - func_167()) == 0)
								{
									func_487("WCD_SUB_TINT", 0, 0);
									bVar29 = true;
								}
							}
							else
							{
								bVar46 = false;
								if (!unk_0xEA6BC48857E0AC4C(&(Local_1306.f_4)) && unk_0xEF07223F00EBE9C9(&(Local_1306.f_4)))
								{
									func_487(&(Local_1306.f_4), 0, 0);
									bVar29 = true;
									bVar46 = true;
								}
								bVar47 = false;
								if (Local_1306.f_10 != 5)
								{
									iVar48 = iLocal_1088;
									if (Local_1306.f_10 == 1)
									{
										iVar48 = iLocal_1091;
									}
									else if (Local_1306.f_10 == 4)
									{
										iVar48 = iLocal_1090;
									}
									else if (Local_1306.f_10 == 2)
									{
										iVar48 = iLocal_1088;
									}
									else if (Local_1306.f_10 == 3)
									{
										iVar48 = iLocal_1089;
									}
									if (Local_154.f_118.f_5 == 6)
									{
										if (func_115(&Local_1317, Var0, (Local_154.f_118.f_2 - 40), 0))
										{
											if (func_435(&Local_1299, &bVar47, Var0, Local_1317.f_9, iLocal_1093))
											{
												if (bVar47)
												{
													func_487("GSM_OWN_EQUIP", 0, 0);
													bVar29 = true;
													bVar46 = false;
												}
												else
												{
													func_487("GSM_TICK", 0, 0);
													bVar29 = true;
													bVar46 = false;
												}
											}
										}
									}
									else if (func_425(Var0, Local_1306.f_9, Local_1306.f_10, iVar48, &bVar47))
									{
										if (bVar47)
										{
											func_487("GSM_OWN_EQUIP", 0, 0);
											bVar29 = true;
											bVar46 = false;
										}
										else
										{
											func_487("GSM_TICK", 0, 0);
											bVar29 = true;
											bVar46 = false;
										}
									}
								}
								if (bVar46)
								{
									uVar49 = Local_1306.f_8;
									fVar50 = (1f - func_128(Var0, &uVar49));
									if (fVar50 != 0f)
									{
										func_481("GSHOP_DISC", 0, 0);
										func_480(round((fVar50 * 100f)));
									}
								}
							}
						}
						else
						{
							bVar51 = false;
							if (!unk_0xEA6BC48857E0AC4C(&(Local_1306.f_4)) && unk_0xEF07223F00EBE9C9(&(Local_1306.f_4)))
							{
								func_487(&(Local_1306.f_4), 0, 0);
								bVar29 = true;
								bVar51 = true;
							}
							bVar52 = false;
							if (Local_1306.f_10 != 5)
							{
								iVar53 = iLocal_1088;
								if (Local_1306.f_10 == 1)
								{
									iVar53 = iLocal_1091;
								}
								else if (Local_1306.f_10 == 4)
								{
									iVar53 = iLocal_1090;
								}
								else if (Local_1306.f_10 == 2)
								{
									iVar53 = iLocal_1088;
								}
								else if (Local_1306.f_10 == 3)
								{
									iVar53 = iLocal_1089;
								}
								if (func_425(Var0, Local_1306.f_9, Local_1306.f_10, iVar53, &bVar52))
								{
									if (bVar52)
									{
										func_487("GSM_OWN_EQUIP", 0, 0);
										bVar29 = true;
										bVar51 = false;
									}
									else
									{
										func_487("GSM_TICK", 0, 0);
										bVar29 = true;
										bVar51 = false;
									}
								}
							}
							if (bVar51)
							{
								uVar54 = Local_1306.f_8;
								fVar55 = (1f - func_128(Var0, &uVar54));
								if (fVar55 != 0f)
								{
									func_481("GSHOP_DISC", 0, 0);
									func_480(round((fVar55 * 100f)));
								}
							}
						}
					}
				}
			}
			else if (Local_154.f_118.f_5 == 2)
			{
				if (func_236(Local_154) && (func_79(Var0) || func_173(Var0)))
				{
					if (bLocal_1297)
					{
						func_487(func_424(Var0, 0), 0, 0);
						func_486(func_229(Var0, 0));
						bVar29 = true;
					}
					else
					{
						func_487(func_422(func_44(Var0), 0), 0, 0);
						bVar29 = true;
					}
				}
			}
			else if (Local_154.f_118.f_5 == 3)
			{
				if (func_236(Local_154) && (func_79(Var0) || func_173(Var0)))
				{
					if (bLocal_1297)
					{
						func_487(func_424(Var0, 1), 0, 0);
						func_486(func_229(Var0, 0));
						bVar29 = true;
					}
					else
					{
						func_487(func_422(func_464(Var0), 0), 0, 0);
						bVar29 = true;
					}
				}
			}
			else if (Local_154.f_118.f_5 == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 10))
				{
					if (func_178(&Local_1299, Var0, (Local_154.f_118.f_2 - 2), 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 8))
						{
							if (Global_76622)
							{
								if (func_462(Local_1299, Var0))
								{
								}
								else
								{
									func_487("GS_STOCK2", 0, 0);
								}
								func_483(func_461(Local_1299.f_4, Var0));
								bVar29 = true;
							}
							else
							{
								func_487("GS_STOCK", 0, 0);
								bVar29 = true;
							}
						}
						else
						{
							func_456(Var0, (Local_154.f_118.f_2 - 2), &sVar30, &Var34);
							if (!unk_0xEA6BC48857E0AC4C(&Var34) && unk_0xEF07223F00EBE9C9(&Var34))
							{
								func_487(&Var34, 0, 0);
								bVar29 = true;
							}
							bVar56 = false;
							if (func_236(Local_154))
							{
								if (Local_1299.f_4 != -571619404 && Local_1299.f_4 != 291640902)
								{
									if (func_448(Local_1299, Var0, &bVar56) || Local_1299.f_1)
									{
										if (bVar56)
										{
											if (func_177(Local_1299))
											{
												func_487("GSM_OWN_EQUIP_D", 0, 0);
												func_486("SHOP_CONTENT_8b");
											}
											else
											{
												func_487("GSM_OWN_EQUIP", 0, 0);
											}
											bVar29 = true;
										}
										else
										{
											if (func_177(Local_1299))
											{
												func_487("GSM_TICK_D", 0, 0);
												func_486("SHOP_CONTENT_8b");
											}
											else
											{
												func_487("GSM_TICK", 0, 0);
											}
											bVar29 = true;
										}
									}
									else if (func_177(Local_1299))
									{
										func_487("SHOP_DLC_PACK3", 0, 0);
										func_486("SHOP_CONTENT_8");
										bVar29 = true;
									}
								}
							}
							else if (func_448(Local_1299, Var0, &bVar56) || Local_1299.f_1)
							{
								if (bVar56)
								{
									func_487("GSM_OWN_EQUIP", 0, 0);
									bVar29 = true;
								}
								else
								{
									func_487("GSM_TICK", 0, 0);
									bVar29 = true;
								}
							}
						}
					}
				}
			}
		}
		if (bLocal_118)
		{
			func_481(func_482(), 0, 0);
		}
		else
		{
			fVar59 = (1f - func_210(Var0, &iVar57, &iVar58));
			if (fVar59 != 0f)
			{
				func_481("GSHOP_DISC", 0, 0);
				func_480(round((fVar59 * 100f)));
			}
		}
		if (!bVar29)
		{
			func_487("", 0, 0);
		}
	}
	if (iLocal_1120)
	{
		if (iLocal_1119 == 0)
		{
			iLocal_1119++;
		}
		else if (iLocal_1119 == 1)
		{
			bVar60 = false;
			bVar61 = false;
			bVar62 = false;
			bVar63 = false;
			if (func_421())
			{
				if (unk_0x58424C49F8924842())
				{
					if (unk_0xA14BB9332558B949())
					{
						iVar64 = 2;
						_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar64, 0, 0, -1, 0, 0, 1, 0);
						if (unk_0xBFC0798A6E3417F9(2, 201))
						{
							bVar61 = true;
						}
					}
					else if (!unk_0x061ABE091F1F764E())
					{
						iVar65 = 2;
						if (unk_0xDC30EF462887322E())
						{
							unk_0x9873B37F2B92F8FD();
							unk_0xF49A692C0AC38F73(0, 16384, 1);
							bVar61 = true;
						}
						else
						{
							_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar65, 0, 0, -1, 0, 0, 1, 0);
						}
						if (unk_0xBFC0798A6E3417F9(2, 201))
						{
							bVar61 = true;
						}
					}
					else if (!unk_0x4C2428CBA698034D())
					{
						iVar66 = 2;
						_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar66, 0, 0, -1, 0, 0, 1, 0);
						if (unk_0xBFC0798A6E3417F9(2, 201))
						{
							bVar61 = true;
						}
					}
					else
					{
						bVar60 = true;
					}
				}
				else
				{
					bVar62 = true;
				}
			}
			else
			{
				bVar63 = true;
			}
			if (bVar63)
			{
				iLocal_1119 = 0;
				iLocal_1120 = 0;
				iLocal_1140 = 1;
			}
			else if (bVar62)
			{
				iLocal_1119 = 3;
			}
			else if (bVar60)
			{
				if (unk_0x8CD06866876216F2())
				{
					Global_2462094 = 1;
					Global_2462095 = 1;
				}
				unk_0x4D7F4CC43D4D0DE3(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				unk_0xC8351583ACE3F14B(unk_0x12AB0310C2281427(&(Global_98796.f_1349)), Global_98796.f_1353, unk_0x12AB0310C2281427(func_309(Local_154, 0)));
				unk_0x549B12C98569CFFF(&cLocal_1121, "", func_420(Local_154));
				iLocal_107 = 1;
				iLocal_1119++;
			}
			else if (bVar61)
			{
				iLocal_1119++;
			}
		}
		else if (iLocal_1119 == 2)
		{
			if (!unk_0x590766B2AF637235())
			{
				iLocal_1119 = 0;
				iLocal_1120 = 0;
			}
		}
		else if (iLocal_1119 == 3)
		{
			if (func_410(&iLocal_1118, 1))
			{
				if (unk_0x58424C49F8924842())
				{
					iLocal_1119 = 4;
				}
				else
				{
					iLocal_1119 = 2;
				}
			}
		}
		else if (iLocal_1119 == 4)
		{
			if (unk_0x58424C49F8924842())
			{
				if (!unk_0xEA08AA022C698245())
				{
					if (unk_0x8CD06866876216F2())
					{
						Global_2462094 = 1;
						Global_2462095 = 1;
					}
					if (unk_0x4C2428CBA698034D())
					{
						unk_0xC8351583ACE3F14B(unk_0x12AB0310C2281427(&(Global_98796.f_1349)), Global_98796.f_1353, unk_0x12AB0310C2281427(func_309(Local_154, 0)));
						unk_0x549B12C98569CFFF(&cLocal_1121, "", func_420(Local_154));
						iLocal_107 = 1;
					}
					iLocal_1119 = 2;
				}
			}
			else
			{
				iLocal_1119 = 2;
			}
		}
	}
	else if (bLocal_1116)
	{
	}
	else if (((bLocal_1139 && !func_421()) && !unk_0x8CD06866876216F2()) || iLocal_1140)
	{
		iLocal_1140 = 1;
		iVar67 = 2;
		_set_warning_message_2("PM_INF_QMFT", "STORE_CON_ONL", iVar67, 0, 0, -1, 0, 0, 1, 0);
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			bLocal_1139 = func_421();
			iLocal_1140 = 0;
		}
	}
	else if (((bLocal_1137 && !unk_0x58424C49F8924842()) && !unk_0x8CD06866876216F2()) || iLocal_1138)
	{
		iLocal_1138 = 1;
		iVar68 = 2;
		_set_warning_message_2("PM_INF_QMFT", "STORE_SGN_ONL2", iVar68, 0, 0, -1, 0, 0, 1, 0);
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			bLocal_1137 = unk_0x58424C49F8924842();
			iLocal_1138 = 0;
		}
	}
	else
	{
		func_383(1, Local_154, unk_0x8A22C4C08282BF26(1675520185) == 0, 0, 1, -1082130432, 0, 0, -1);
		if (func_380(0, 0))
		{
			if ((func_201(Local_154, &Global_4268016, &Var0, Local_154.f_118.f_3, Local_154.f_118.f_1, 0, 0) && Local_154.f_118.f_5 != 2) && Local_154.f_118.f_5 != 3)
			{
				if ((Var0.f_24 == 0 || Var0.f_24 == 2) || Var0.f_24 == 5)
				{
					if (func_236(Local_154))
					{
						if (func_173(Var0))
						{
							if (Local_154.f_118.f_5 == 4)
							{
								bVar102 = true;
							}
						}
						else if (Local_154.f_118.f_5 == 1)
						{
							bVar102 = true;
						}
					}
					else if (Local_154.f_118.f_5 == 1)
					{
						bVar102 = true;
					}
					if (bVar102)
					{
						while (func_178(&Local_1299, Var0, iVar103, 0))
						{
							if (Local_1299 != 0 && unk_0xD59C425D3CEABECE(Local_154.f_238[(Local_154.f_118.f_3 * 5 + Local_154.f_118.f_1)], Local_1299))
							{
								if (unk_0xE536D06B1DC8F0F5(Local_1299, &Var74))
								{
									if (iVar103 != (Local_154.f_118.f_2 - 2) || unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 6))
									{
										iVar98 = (iVar98 + Var74);
										iVar99 = (iVar99 + Var74.f_1);
										iVar100 = (iVar100 + Var74.f_3);
										iVar101 = (iVar101 + Var74.f_4);
									}
								}
							}
							iVar103++;
						}
					}
					if (unk_0xA9CD770F36C59E60(Var0, &Var69))
					{
						Var74 = 0;
						Var74.f_1 = 0;
						Var74.f_3 = 0;
						Var74.f_4 = 0;
						if (func_236(Local_154))
						{
							if (func_173(Var0))
							{
								if ((Local_154.f_118.f_5 == 4 || Local_154.f_118.f_5 == 2) || Local_154.f_118.f_5 == 3)
								{
									bVar104 = true;
								}
							}
							else if (Local_154.f_118.f_5 == 1)
							{
								bVar104 = true;
							}
						}
						else if (Local_154.f_118.f_5 == 1)
						{
							bVar104 = true;
						}
						if (bVar104)
						{
							if (func_178(&Local_1299, Var0, (Local_154.f_118.f_2 - 2), 0))
							{
								if (Local_1299 != 0 && !unk_0xEAE0D21A50E6C7F4(Local_154.f_721, 6))
								{
									unk_0xE536D06B1DC8F0F5(Local_1299, &Var74);
									iVar105 = func_379(&Local_1299, Var0, -1312077031);
									if (iVar105 != 0)
									{
										unk_0xE536D06B1DC8F0F5(iVar105, &Var79);
										Var74 = (Var74 - Var79);
										Var74.f_1 = (Var74.f_1 - Var79.f_1);
										Var74.f_3 = (Var74.f_3 - Var79.f_3);
										Var74.f_4 = (Var74.f_4 - Var79.f_4);
									}
								}
							}
						}
						fVar106 = ((func_378() - unk_0x57C534E6A9384F53()) + (0,00138888f * 76f));
						fVar107 = (125f - 8f);
						unk_0xD02CE72B4B66DC29(76, 66);
						unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
						unk_0xA402F6C87C08815C(140, &iVar84, &iVar85, &iVar86, &iVar87);
						func_377(0f, fVar106, Global_22349, (0,00138888f * 108f), iVar84, iVar85, iVar86, iVar87);
						fVar88 = 0,0046875f;
						fVar89 = ((0,00138888f * 108f) + (0,00138888f * 42f));
						fVar90 = fVar106;
						func_375(0, 1, 0, 0, 0, 0, 0);
						unk_0x070005E852D4C0E9("PM_DAMAGE");
						unk_0xE0026608C37C7C41(fVar88, (fVar89 + fVar90), 0);
						fVar90 = (fVar90 + 0,034722f);
						func_375(0, 1, 0, 0, 0, 0, 0);
						unk_0x070005E852D4C0E9("PM_FIRERATE");
						unk_0xE0026608C37C7C41(fVar88, (fVar89 + fVar90), 0);
						fVar90 = (fVar90 + 0,034722f);
						func_375(0, 1, 0, 0, 0, 0, 0);
						unk_0x070005E852D4C0E9("PM_ACCURACY");
						unk_0xE0026608C37C7C41(fVar88, (fVar89 + fVar90), 0);
						fVar90 = (fVar90 + 0,034722f);
						func_375(0, 1, 0, 0, 0, 0, 0);
						unk_0x070005E852D4C0E9("PM_RANGE");
						unk_0xE0026608C37C7C41(fVar88, (fVar89 + fVar90), 0);
						fVar90 = (fVar90 + 0,034722f);
						unk_0xA402F6C87C08815C(1, &iVar84, &iVar85, &iVar86, &iVar87);
						iVar87 = 76;
						fVar91 = (0,00138888f * -89f);
						fVar92 = fVar106;
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (0,00078125f * fVar107), (0,00138888f * 6f), iVar84, iVar85, iVar86, iVar87);
						fVar92 = (fVar92 + 0,034722f);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (0,00078125f * fVar107), (0,00138888f * 6f), iVar84, iVar85, iVar86, iVar87);
						fVar92 = (fVar92 + 0,034722f);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (0,00078125f * fVar107), (0,00138888f * 6f), iVar84, iVar85, iVar86, iVar87);
						fVar92 = (fVar92 + 0,034722f);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (0,00078125f * fVar107), (0,00138888f * 6f), iVar84, iVar85, iVar86, iVar87);
						fVar92 = (fVar92 + 0,034722f);
						fVar91 = (0,00138888f * -89f);
						fVar92 = fVar106;
						fVar93[0] = (0,00078125f * ((fVar107 / 100f) * to_float(Var69)));
						fVar93[0] = (fVar93[0] + (fVar93[0] * (to_float(iVar98) / 100f)));
						if (bVar104)
						{
							if (Var74 >= 0)
							{
								unk_0xA402F6C87C08815C(9, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (fVar93[0] + (fVar93[0] * (to_float(Var74) / 100f))), (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
							}
							else
							{
								unk_0xA402F6C87C08815C(6, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[0], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
								fVar93[0] = (fVar93[0] + (fVar93[0] * (to_float(Var74) / 100f)));
							}
						}
						unk_0xA402F6C87C08815C(1, &iVar84, &iVar85, &iVar86, &iVar87);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[0], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
						fVar92 = (fVar92 + 0,034722f);
						fVar93[1] = (0,00078125f * ((fVar107 / 100f) * to_float(Var69.f_1)));
						fVar93[1] = (fVar93[1] + (fVar93[1] * (to_float(iVar99) / 100f)));
						if (bVar104)
						{
							if (Var74.f_1 >= 0)
							{
								unk_0xA402F6C87C08815C(9, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (fVar93[1] + (fVar93[1] * (to_float(Var74.f_1) / 100f))), (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
							}
							else
							{
								unk_0xA402F6C87C08815C(6, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[1], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
								fVar93[1] = (fVar93[1] + (fVar93[1] * (to_float(Var74.f_1) / 100f)));
							}
						}
						unk_0xA402F6C87C08815C(1, &iVar84, &iVar85, &iVar86, &iVar87);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[1], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
						fVar92 = (fVar92 + 0,034722f);
						fVar93[2] = (0,00078125f * ((fVar107 / 100f) * to_float(Var69.f_3)));
						fVar93[2] = (fVar93[2] + (fVar93[2] * (to_float(iVar100) / 100f)));
						if (bVar104)
						{
							if (Var74.f_3 >= 0)
							{
								unk_0xA402F6C87C08815C(9, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (fVar93[2] + (fVar93[2] * (to_float(Var74.f_3) / 100f))), (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
							}
							else
							{
								unk_0xA402F6C87C08815C(6, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[2], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
								fVar93[2] = (fVar93[2] + (fVar93[2] * (to_float(Var74.f_3) / 100f)));
							}
						}
						unk_0xA402F6C87C08815C(1, &iVar84, &iVar85, &iVar86, &iVar87);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[2], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
						fVar92 = (fVar92 + 0,034722f);
						fVar93[3] = (0,00078125f * ((fVar107 / 100f) * to_float(Var69.f_4)));
						fVar93[3] = (fVar93[3] + (fVar93[3] * (to_float(iVar101) / 100f)));
						if (bVar104)
						{
							if (Var74.f_4 >= 0)
							{
								unk_0xA402F6C87C08815C(9, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), (fVar93[3] + (fVar93[3] * (to_float(Var74.f_4) / 100f))), (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
							}
							else
							{
								unk_0xA402F6C87C08815C(6, &iVar84, &iVar85, &iVar86, &iVar87);
								func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[3], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
								fVar93[3] = (fVar93[3] + (fVar93[3] * (to_float(Var74.f_4) / 100f)));
							}
						}
						unk_0xA402F6C87C08815C(1, &iVar84, &iVar85, &iVar86, &iVar87);
						func_374((Global_22349 - (0,00078125f * 150f)), (fVar91 + fVar92), fVar93[3], (0,00138888f * 6f), iVar84, iVar85, iVar86, 255);
						fVar92 = (fVar92 + 0,034722f);
						unk_0xD59EF13BB60323B9();
					}
				}
			}
		}
	}
	if (((Local_154 == 47 || Local_154 == 48) || Local_154 == 49) || Local_154 == 52)
	{
		if (!Global_2462114)
		{
			Global_2462114 = 1;
		}
	}
}

void func_374(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	fVar0 = ((125f - 8f) * 0,00078125f);
	fVar1 = (125f * 0,00078125f);
	fVar2 = fParam0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (fParam2 > ((fVar0 / 100f) * 20f))
		{
			func_377(fVar2, fParam1, ((fVar0 / 100f) * 20f), fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else if (fParam2 > 0f)
		{
			func_377(fVar2, fParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		fParam2 = (fParam2 - ((fVar0 / 100f) * 20f));
		fVar2 = (fVar2 + ((fVar1 / 100f) * 20f));
		iVar3++;
	}
}

void func_375(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_376(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0, 0, 0, floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(6);
	}
	else
	{
		unk_0x7BBAC160090910C3(0);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_376(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_377(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

float func_378()
{
	return Global_22350.f_5876;
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	func_89(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	while (func_178(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (unk_0xAFB8387ED2D7213E(unk_0x16F2683693E537C9(), iParam1, Var0))
			{
				return Var0;
			}
		}
		iVar7++;
	}
	return 0;
}

int func_380(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_382(8, -1) && func_381() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_381()
{
	return Global_1312812;
}

bool func_382(int iParam0, int iParam1)
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

void func_383(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_351(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_380(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_408(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = unk_0x33D480CCE15C991A(0);
		if (func_407())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_407())
		{
			fVar62 = 1f;
		}
		iVar60 = round((to_float(iVar60) / fVar62));
		iVar61 = round((to_float(iVar61) / fVar62));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_403(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_402(29), 64);
					StringCopy(&cVar81, func_400(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_377(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_377(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_399();
					unk_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							unk_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							unk_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_22347 + 0,00390625f), ((Global_22348 + fVar57) + 0,00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_399();
					func_397((((Global_22347 + fParam5) - 0,00390625f) - func_398("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_399();
						func_397((((Global_22347 + fParam5) - 0,00390625f) - func_398("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0,00277776f);
						}
						fVar56 = 0,034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar97 + ((fVar51 - fVar97) * 0,5f)) - 0,00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_377(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar62));
				vVar38.y = (vVar38.y * (0,5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA402F6C87C08815C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0,034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_408(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_396(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_377(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_396(fVar42);
				unk_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_408(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_395(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_402(Global_22350.f_4768), func_400(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_408(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_396(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_377(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_396(fVar42);
				unk_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_408(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_395(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_402(Global_4268421.f_67), func_400(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_390(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0,034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0,0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						unk_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xA402F6C87C08815C(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0,5f)), (((fVar59 + fVar100) + (0,00277776f * IntToFloat(iVar12))) + (fVar56 * 0,5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0,0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0,0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = unk_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0,00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - ((fVar43 + fVar44) * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_389(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_408(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_395(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar28)]), func_400(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar28)]), func_400(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar42) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_388() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_375(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0,0185f;
													fVar114 = 0,004f;
													fVar115 = 0,02f;
													unk_0xD3539A877EC25E86(0f, (0,35f * 0,7f));
													unk_0x7178F32F6742C936(255, 255, 255, 150);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0,6f)), (fVar35 + (fVar113 * 0,75f)), 0,0175f, 0,035f, floor(fVar111), floor(fVar111), floor(fVar111), floor(fVar112), 0);
													unk_0x070005E852D4C0E9(&cVar107);
													unk_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_408(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_395(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[(iVar22 + iVar14)]), func_400(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_389(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_387((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_389(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_408(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_375(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_386((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_408(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0,00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar44 * 0,5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_408(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_395(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_402(26), func_400(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_408(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_408(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_395(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_402(27), func_400(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_408(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_395(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_402(Global_22350.f_4433[iVar22]), func_400(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_385(Global_22350.f_4433[iVar22])), (fVar37 * func_385(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_408(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0,034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_961(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(10);
	}
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_384(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_384(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_385(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_386(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_387(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_388()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_351(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_380(bParam4, bParam8))
	{
		return;
	}
	if (func_393())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_258(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xF59058FCB716F903(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar1])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_392(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_392(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_391(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_22350.f_5052, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_16)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_392(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_391(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0,0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_391(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_392(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_393()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_394())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_394()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_395(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xA402F6C87C08815C(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_396(float fParam0)
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x4B9228CE1CF0DACA(2);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_397(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_398(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_399();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_399()
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_22347 + 0,0046875f), ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

var func_400(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_345(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_401(&uVar3);
			}
		}
		else
		{
			return func_401(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_401(var uParam0)
{
	return uParam0;
}

char* func_402(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_345(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_401(&uVar0);
		}
		else
		{
			return func_401(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_403(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_406(Global_22350.f_5218, 1);
	}
	else
	{
		func_406(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_405(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_408(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_404(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_404(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_405(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_375(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_406(int iParam0, bool bParam1)
{
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_407()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_402(iParam0), 64);
	StringCopy(&cVar16, func_400(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_407())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_407())
			{
				fVar34 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(-892862129) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = round((to_float(iVar32) / fVar34));
			iVar33 = round((to_float(iVar33) / fVar34));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_409(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_409(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_409(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0,5f;
			break;
		
		case 61:
			return 0,8f;
			break;
	}
	return 1f;
}

int func_410(int iParam0, bool bParam1)
{
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_329(&Global_1840924);
		func_329(&(Global_1840924.f_49));
		*iParam0 = 0;
		Global_1840924.f_2 = 0;
		func_419(0);
	}
	Global_1840924.f_2 = unk_0xF4CCC8CB6DE7F1AE();
	iVar1 = -1;
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = unk_0xFBB4B649DD3EA6F0();
		}
	}
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_417() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_414(&(Global_1840924.f_3), func_416(&(Global_1840924.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
			{
				unk_0x5D96D8530B3D0904(iParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_412(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_417())
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
			{
				if (!unk_0x06F8112AA79C53D9(2, 201))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0);
				}
			}
			else if (unk_0xB9132A06AE472728(2, 201))
			{
				func_329(&(Global_1840924.f_49));
				func_329(&Global_1840924);
				*iParam0 = 0;
				Global_1840924.f_2 = 0;
				func_419(0);
				return 1;
			}
		}
	}
	else
	{
		func_414(&(Global_1840924.f_3), func_416(&(Global_1840924.f_3)));
		if ((func_411(&(Global_1840924.f_49)) && !func_327(&(Global_1840924.f_49), 2000, 1)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_412(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 1))
			{
				unk_0xB0A3CB46BE5B746A(0);
				unk_0x5D96D8530B3D0904(iParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_412(&(Global_1840924.f_3), 0);
			}
		}
		if (func_411(&Global_1840924))
		{
			if (!func_327(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x58424C49F8924842())
				{
					if (unk_0x1E517F9E1F09160C())
					{
						_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x1A72D8C9F025E5E3())
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
						{
							if (!unk_0x06F8112AA79C53D9(2, 201))
							{
								unk_0x5D96D8530B3D0904(iParam0, 0);
							}
						}
						else if (unk_0xB9132A06AE472728(2, 201))
						{
							func_329(&Global_1840924);
							*iParam0 = 0;
							Global_1840924.f_2 = 0;
							func_419(0);
							return 1;
						}
					}
				}
				else
				{
					func_329(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_419(0);
					return 1;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
			{
				if (unk_0x1E517F9E1F09160C())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
				{
					if (!unk_0x06F8112AA79C53D9(2, 201))
					{
						unk_0x5D96D8530B3D0904(iParam0, 0);
					}
				}
				else if (unk_0xB9132A06AE472728(2, 201))
				{
					func_329(&(Global_1840924.f_49));
					func_329(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_419(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1E517F9E1F09160C())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x1A72D8C9F025E5E3())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
					{
						if (!unk_0x06F8112AA79C53D9(2, 201))
						{
							unk_0x5D96D8530B3D0904(iParam0, 0);
						}
					}
					else if (unk_0xB9132A06AE472728(2, 201))
					{
						func_329(&(Global_1840924.f_49));
						func_329(&Global_1840924);
						*iParam0 = 0;
						Global_1840924.f_2 = 0;
						func_419(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_411(var uParam0)
{
	return uParam0->f_1;
}

void func_412(var uParam0, bool bParam1)
{
	func_413(uParam0);
	if (bParam1)
	{
		func_419(0);
	}
	uParam0->f_35 = 1;
}

void func_413(var uParam0)
{
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_414(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_415(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x6D99DF8263D35CE5(uParam0->f_34);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x6D99DF8263D35CE5(uParam0->f_34);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_33, 70);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_415(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_416(var uParam0)
{
	return uParam0->f_35;
}

int func_417()
{
	if (func_418())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_418()
{
	return Global_2461181;
}

void func_419(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

int func_420(int iParam0)
{
	switch (func_325(iParam0))
	{
		case 4:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 3:
			return 7;
			break;
		
		case 0:
			return 9;
			break;
		
		case 2:
			return 11;
			break;
		
		case 5:
			return 12;
			break;
	}
	return 0;
}

bool func_421()
{
	return unk_0x1E517F9E1F09160C();
}

char* func_422(int iParam0, bool bParam1)
{
	if (func_75(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case -952879014:
				if (unk_0x8CD06866876216F2())
				{
					if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 1785463520, 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case 1649403952:
				return "WTDE2_CMPRIFLE";
				break;
			
			case 125959754:
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case -1569615261:
			return "";
			break;
		
		case 453432689:
			return "WT_PIST_DESC";
			break;
		
		case 1593441988:
			return "WTD_PIST_CBT";
			break;
		
		case 584646201:
			return "WTD_PIST_AP";
			break;
		
		case 736523883:
			return "WTD_SMG";
			break;
		
		case 324215364:
			return "WTD_SMG_MCR";
			break;
		
		case -1074790547:
			return "WTD_RIFLE_ASL";
			break;
		
		case -2084633992:
			return "WTD_RIFLE_CBN";
			break;
		
		case -1357824103:
			return "WTD_RIFLE_ADV";
			break;
		
		case -1660422300:
			return "WTD_MG";
			break;
		
		case 2144741730:
			return "WTD_MG_CBT";
			break;
		
		case 487013001:
			return "WTD_SG_PMP";
			break;
		
		case 2017895192:
			return "WTD_SG_SOF";
			break;
		
		case -494615257:
			return "WTD_SG_ASL";
			break;
		
		case 205991906:
			return "WTD_SNIP_HVY";
			break;
		
		case 856002082:
			return "WTD_SNIP_RMT";
			break;
		
		case 100416529:
			return "WTD_SNIP_RIF";
			break;
		
		case -1568386805:
			return "WTD_GL";
			break;
		
		case -1312131151:
			return "WTD_RPG";
			break;
		
		case 1119849093:
			return "WTD_MINIGUN";
			break;
		
		case -1813897027:
			return "WTD_GNADE";
			break;
		
		case -37975472:
			return "WTD_GNADE_SMK";
			break;
		
		case 741814745:
			return "WTD_GNADE_STK";
			break;
		
		case 615608432:
			return "WTD_MOLOTOV";
			break;
		
		case 911657153:
			return "WTD_STUN";
			break;
		
		case 883325847:
			return "WTD_PETROL";
			break;
		
		case -38085395:
			return "WTD_DIGI";
			break;
		
		case -1833087301:
			return "WTD_ELCFEN";
			break;
		
		case 1945616459:
			return "";
			break;
		
		case -123497569:
			return "";
			break;
		
		case -268631733:
			return "";
			break;
		
		case 966099553:
			return "";
			break;
		
		case -72657034:
			return "WTD_PARA";
			break;
		
		case 1742569970:
			return "";
			break;
		
		case -1474608608:
			return "";
			break;
		
		case 527765612:
			return "";
			break;
		
		case -165357558:
			return "";
			break;
		
		case -1372674932:
			return "";
			break;
		
		case -1716189206:
			return "WTD_KNIFE";
			break;
		
		case 1737195953:
			return "WTD_NGTSTK";
			break;
		
		case 1317494643:
			return "WTD_HAMMER";
			break;
		
		case -1786099057:
			return "WTD_BAT";
			break;
		
		case -2067956739:
			return "WTD_CROWBAR";
			break;
		
		case 1141786504:
			return "WTD_GOLFCLUB";
			break;
		
		case -102973651:
			return "WTD_DLC_HATCHET";
			break;
		
		case 133987706:
			return "";
			break;
		
		case -1553120962:
			return "";
			break;
		
		case -270015777:
			return "WTD_SMG_ASL";
			break;
		
		case -1654528753:
			return "WTD_SG_BLP";
			break;
		
		case -1716589765:
			return "WTD_PIST_50";
			break;
		
		case 137902532:
			return "WTD_VPISTOL";
			break;
		
		case -1834847097:
			return "WTD_DAGGER";
			break;
		
		case -1420407917:
			return "WTD_PRXMINE";
			break;
		
		case 1672152130:
			return "WTD_HOMLNCH";
			break;
		
		case -581044007:
			return "WTD_MACHETE";
			break;
		
		case -619010992:
			return "WTD_MCHPIST";
			break;
		
		case -1951375401:
			return "WTD_FLASHLIGHT";
			break;
		
		case -275439685:
			return "WTD_DBSHGN";
			break;
		
		case 1649403952:
			return "WTD_CMPRIFLE";
			break;
		
		case -538741184:
			return "WTD_SWBLADE";
			break;
		
		case -1045183535:
			return "WTD_REVOLVER";
			break;
		
		case -1746263880:
			if (func_423(2052114177) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (unk_0xC2F420D189FDB329())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case -1063057011:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), -1768145561, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_81(iParam0, &Var0) != -1)
			{
				return func_182(&(Var0.f_15));
			}
			break;
		
		case -952879014:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 1785463520, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_81(iParam0, &Var39) != -1)
			{
				return func_182(&(Var39.f_15));
			}
			break;
		
		case 2132975508:
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), -2066285827, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_81(iParam0, &Var78) != -1)
			{
				return func_182(&(Var78.f_15));
			}
			break;
		
		case -1355376991:
			return "WTD_RAYPISTOL";
			break;
		
		case 1198256469:
			return "WTD_RAYCARBINE";
			break;
		
		case -1238556825:
			return "WTD_RAYMINIGUN";
			break;
		
		case -1853920116:
			return "WTD_REV_NV";
			break;
		
		case 727643628:
			return "WTD_CERPST";
			break;
		
		default:
			if (func_81(iParam0, &Var117) != -1)
			{
				return func_182(&(Var117.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_423(int iParam0)
{
	uVar0 = iParam0;
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

char* func_424(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 453432689:
		case -1075685676:
			sVar0 = "WCD_CONF_PIST";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_PIST";
			}
			break;
		
		case 736523883:
		case 2024373456:
			sVar0 = "WCD_CONF_SMG";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SMG";
			}
			break;
		
		case 205991906:
		case 177293209:
			sVar0 = "WCD_CONF_HS";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_HS";
			}
			break;
		
		case 2144741730:
		case -608341376:
			sVar0 = "WCD_CONF_CMG";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_CMG";
			}
			break;
		
		case -1074790547:
		case 961495388:
			sVar0 = "WCD_CONF_ASSR";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_ASSR";
			}
			break;
		
		case -2084633992:
		case -86904375:
			sVar0 = "WCD_CONF_CARB";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_CARB";
			}
			break;
		
		case 487013001:
		case 1432025498:
			sVar0 = "WCD_CONF_PSGN";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_PSGN";
			}
			break;
		
		case -1063057011:
		case -1768145561:
			sVar0 = "WCD_CONF_SCRB";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SCRB";
			}
			break;
		
		case -1076751822:
		case -2009644972:
			sVar0 = "WCD_CONF_SNSP";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SNSP";
			}
			break;
		
		case -952879014:
		case 1785463520:
			sVar0 = "WCD_CONF_MKRF";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_MKRF";
			}
			break;
		
		case -1045183535:
		case -879347409:
			sVar0 = "WCD_CONF_HREV";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_HREV";
			}
			break;
		
		case 2132975508:
		case -2066285827:
			sVar0 = "WCD_CONF_BRFL";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_BRFL";
			}
			break;
	}
	return sVar0;
}

int func_425(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	if (Global_76622)
	{
		iVar1 = func_441(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_432(iVar1, -1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar1 = func_441(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_426(func_63(), iVar1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	*bParam4 = iParam1 == iParam3;
	return iVar0;
}

int func_426(int iParam0, int iParam1)
{
	if (func_62(iParam0))
	{
		iVar0 = func_430(iParam0, iParam1);
		iVar1 = func_428(iParam1);
		iVar2 = func_427(iVar1);
		return unk_0xEAE0D21A50E6C7F4(iVar0, iVar2);
	}
	return 0;
}

int func_427(int iParam0)
{
	return (iParam0 % 32);
}

int func_428(int iParam0)
{
	return func_429(iParam0);
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 16:
			return 7;
			break;
		
		case 17:
			return 8;
			break;
		
		case 18:
			return 9;
			break;
		
		case 19:
			return 10;
			break;
		
		case 20:
			return 11;
			break;
		
		case 21:
			return 12;
			break;
		
		case 22:
			return 13;
			break;
		
		case 23:
			return 14;
			break;
		
		case 24:
			return 15;
			break;
		
		case 25:
			return 16;
			break;
		
		case 26:
			return 17;
			break;
		
		case 27:
			return 18;
			break;
		
		case 28:
			return 19;
			break;
		
		case 29:
			return 20;
			break;
		
		case 30:
			return 21;
			break;
		
		case 31:
			return 22;
			break;
		
		case 32:
			return 23;
			break;
		
		case 33:
			return 24;
			break;
		
		case 34:
			return 25;
			break;
		
		case 35:
			return 26;
			break;
		
		case 36:
			return 27;
			break;
		
		case 37:
			return 28;
			break;
		
		case 38:
			return 29;
			break;
		
		case 39:
			return 30;
			break;
		
		case 40:
			return 31;
			break;
		
		case 41:
			return 32;
			break;
		
		case 42:
			return 33;
			break;
		
		case 43:
			return 34;
			break;
		
		case 44:
			return 35;
			break;
		
		case 45:
			return 36;
			break;
		
		case 46:
			return 37;
			break;
		
		case 47:
			return 38;
			break;
		
		case 48:
			return 39;
			break;
		
		case 49:
			return 40;
			break;
		
		case 50:
			return 41;
			break;
		
		case 51:
			return 42;
			break;
		
		case 52:
			return 43;
			break;
		
		case 53:
			return 44;
			break;
		
		case 54:
			return 45;
			break;
		
		case 55:
			return 46;
			break;
		
		case 56:
			return 47;
			break;
		
		case 57:
			return 48;
			break;
		
		case 58:
			return 49;
			break;
		
		case 59:
			return 50;
			break;
		
		case 60:
			return 51;
			break;
		
		case 61:
			return 52;
			break;
		
		case 62:
			return 53;
			break;
		
		case 63:
			return 54;
			break;
		
		case 64:
			return 55;
			break;
		
		case 65:
			return 56;
			break;
		
		case 66:
			return 57;
			break;
		
		case 67:
			return 58;
			break;
		
		case 68:
			return 59;
			break;
		
		case 69:
			return 60;
			break;
		
		case 70:
			return 61;
			break;
		
		case 71:
			return 62;
			break;
		
		case 72:
			return 63;
			break;
		
		case 73:
			return 64;
			break;
		
		case 74:
			return 65;
			break;
		
		case 75:
			return 66;
			break;
		
		case 76:
			return 67;
			break;
		
		case 77:
			return 68;
			break;
		
		case 78:
			return 69;
			break;
		
		case 79:
			return 70;
			break;
		
		case 80:
			return 71;
			break;
		
		case 81:
			return 72;
			break;
		
		case 82:
			return 73;
			break;
		
		case 83:
			return 74;
			break;
		
		case 84:
			return 75;
			break;
		
		case 85:
			return 76;
			break;
		
		case 86:
			return 77;
			break;
		
		case 87:
			return 78;
			break;
		
		case 88:
			return 79;
			break;
		
		case 89:
			return 80;
			break;
		
		case 90:
			return 81;
			break;
		
		case 91:
			return 82;
			break;
		
		case 92:
			return 83;
			break;
		
		case 93:
			return 84;
			break;
		
		case 94:
			return 85;
			break;
		
		case 95:
			return 86;
			break;
		
		case 96:
			return 87;
			break;
		
		case 97:
			return 88;
			break;
		
		case 98:
			return 89;
			break;
		
		case 99:
			return 90;
			break;
		
		case 100:
			return 91;
			break;
		
		case 101:
			return 92;
			break;
		
		case 102:
			return 93;
			break;
		
		case 103:
			return 94;
			break;
		
		case 104:
			return 95;
			break;
		
		case 105:
			return 96;
			break;
		
		case 106:
			return 97;
			break;
		
		case 107:
			return 98;
			break;
		
		case 108:
			return 99;
			break;
		
		case 109:
			return 100;
			break;
		
		case 110:
			return 101;
			break;
		
		case 111:
			return 102;
			break;
		
		case 112:
			return 103;
			break;
		
		case 113:
			return 104;
			break;
		
		case 114:
			return 105;
			break;
		
		case 115:
			return 106;
			break;
		
		case 116:
			return 107;
			break;
		
		case 117:
			return 108;
			break;
		
		case 118:
			return 109;
			break;
		
		case 119:
			return 110;
			break;
		
		case 120:
			return 111;
			break;
		
		case 121:
			return 112;
			break;
		
		case 122:
			return 113;
			break;
		
		case 123:
			return 114;
			break;
		
		case 124:
			return 115;
			break;
		
		case 125:
			return 116;
			break;
		
		case 126:
			return 117;
			break;
		
		case 127:
			return 118;
			break;
		
		case 128:
			return 119;
			break;
		
		case 129:
			return 120;
			break;
		
		case 130:
			return 121;
			break;
		
		case 131:
			return 122;
			break;
		
		case 132:
			return 123;
			break;
		
		case 133:
			return 124;
			break;
		
		case 134:
			return 125;
			break;
		
		case 135:
			return 126;
			break;
		
		case 136:
			return 127;
			break;
		
		case 137:
			return 128;
			break;
		
		case 138:
			return 129;
			break;
		
		case 139:
			return 130;
			break;
		
		case 140:
			return 131;
			break;
		
		case 141:
			return 132;
			break;
		
		case 142:
			return 133;
			break;
		
		case 143:
			return 134;
			break;
		
		case 144:
			return 135;
			break;
		
		case 145:
			return 136;
			break;
		
		case 146:
			return 137;
			break;
		
		case 147:
			return 138;
			break;
		
		case 148:
			return 139;
			break;
		
		case 149:
			return 140;
			break;
		
		case 150:
			return 141;
			break;
		
		case 151:
			return 142;
			break;
		
		case 152:
			return 143;
			break;
		
		case 153:
			return 144;
			break;
		
		case 154:
			return 145;
			break;
		
		case 155:
			return 146;
			break;
		
		case 156:
			return 147;
			break;
		
		case 157:
			return 148;
			break;
		
		case 158:
			return 149;
			break;
		
		case 159:
			return 150;
			break;
		
		case 160:
			return 151;
			break;
		
		case 8:
			return 152;
			break;
		
		case 9:
			return 153;
			break;
		
		case 10:
			return 154;
			break;
		
		case 11:
			return 155;
			break;
		
		case 12:
			return 156;
			break;
		
		case 13:
			return 157;
			break;
		
		case 14:
			return 158;
			break;
		
		case 15:
			return 159;
			break;
		
		case 185:
			return 178;
			break;
		
		case 186:
			return 179;
			break;
		
		case 187:
			return 180;
			break;
		
		case 188:
			return 181;
			break;
		
		case 189:
			return 182;
			break;
		
		case 190:
			return 183;
			break;
		
		case 161:
			return 172;
			break;
		
		case 162:
			return 173;
			break;
		
		case 163:
			return 174;
			break;
		
		case 164:
			return 175;
			break;
		
		case 165:
			return 176;
			break;
		
		case 166:
			return 177;
			break;
		
		case 179:
			return 166;
			break;
		
		case 180:
			return 167;
			break;
		
		case 181:
			return 168;
			break;
		
		case 182:
			return 169;
			break;
		
		case 183:
			return 170;
			break;
		
		case 184:
			return 171;
			break;
		
		case 173:
			return 160;
			break;
		
		case 174:
			return 161;
			break;
		
		case 175:
			return 162;
			break;
		
		case 176:
			return 163;
			break;
		
		case 177:
			return 164;
			break;
		
		case 178:
			return 165;
			break;
		
		case 191:
			return 184;
			break;
		
		case 192:
			return 185;
			break;
		
		case 193:
			return 186;
			break;
		
		case 194:
			return 187;
			break;
		
		case 216:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 195:
			return 196;
			break;
		
		case 196:
			return 197;
			break;
		
		case 197:
			return 198;
			break;
		
		case 198:
			return 199;
			break;
		
		case 199:
			return 200;
			break;
		
		case 200:
			return 201;
			break;
		
		case 201:
			return 202;
			break;
		
		case 202:
			return 189;
			break;
		
		case 203:
			return 190;
			break;
		
		case 204:
			return 191;
			break;
		
		case 205:
			return 192;
			break;
		
		case 206:
			return 193;
			break;
		
		case 207:
			return 194;
			break;
		
		case 208:
			return 195;
			break;
		
		case 209:
			return 217;
			break;
		
		case 210:
			return 218;
			break;
		
		case 211:
			return 219;
			break;
		
		case 212:
			return 220;
			break;
		
		case 213:
			return 221;
			break;
		
		case 214:
			return 222;
			break;
		
		case 215:
			return 223;
			break;
		
		case 224:
			return 210;
			break;
		
		case 225:
			return 211;
			break;
		
		case 226:
			return 212;
			break;
		
		case 227:
			return 213;
			break;
		
		case 228:
			return 214;
			break;
		
		case 229:
			return 215;
			break;
		
		case 230:
			return 216;
			break;
		
		case 217:
			return 203;
			break;
		
		case 218:
			return 204;
			break;
		
		case 219:
			return 205;
			break;
		
		case 220:
			return 206;
			break;
		
		case 221:
			return 207;
			break;
		
		case 222:
			return 208;
			break;
		
		case 223:
			return 209;
			break;
		
		case 232:
			return 231;
			break;
		
		case 233:
			return 232;
			break;
		
		case 234:
			return 233;
			break;
		
		case 235:
			return 234;
			break;
		
		case 236:
			return 235;
			break;
		
		case 237:
			return 236;
			break;
		
		case 231:
			return 237;
			break;
		
		case 238:
			return 245;
			break;
		
		case 239:
			return 246;
			break;
		
		case 240:
			return 247;
			break;
		
		case 241:
			return 248;
			break;
		
		case 242:
			return 249;
			break;
		
		case 243:
			return 250;
			break;
		
		case 244:
			return 251;
			break;
		
		case 245:
			return 252;
			break;
		
		case 246:
			return 253;
			break;
		
		case 247:
			return 254;
			break;
		
		case 248:
			return 224;
			break;
		
		case 249:
			return 225;
			break;
		
		case 250:
			return 226;
			break;
		
		case 251:
			return 227;
			break;
		
		case 252:
			return 228;
			break;
		
		case 253:
			return 229;
			break;
		
		case 254:
			return 230;
			break;
		
		case 255:
			return 255;
			break;
		
		case 256:
			return 256;
			break;
		
		case 257:
			return 257;
			break;
		
		case 258:
			return 258;
			break;
		
		case 259:
			return 259;
			break;
		
		case 260:
			return 260;
			break;
		
		case 261:
			return 261;
			break;
		
		case 262:
			return 262;
			break;
		
		case 263:
			return 263;
			break;
		
		case 264:
			return 264;
			break;
		
		case 265:
			return 265;
			break;
	}
	switch (iParam0)
	{
		case 267:
			return 238;
			break;
		
		case 268:
			return 239;
			break;
		
		case 269:
			return 240;
			break;
		
		case 270:
			return 241;
			break;
		
		case 271:
			return 242;
			break;
		
		case 272:
			return 243;
			break;
		
		case 266:
			return 244;
			break;
		
		case 274:
			return 266;
			break;
		
		case 275:
			return 267;
			break;
		
		case 276:
			return 268;
			break;
		
		case 277:
			return 269;
			break;
		
		case 278:
			return 270;
			break;
		
		case 279:
			return 271;
			break;
		
		case 273:
			return 272;
			break;
		
		case 281:
			return 273;
			break;
		
		case 282:
			return 274;
			break;
		
		case 283:
			return 275;
			break;
		
		case 284:
			return 276;
			break;
		
		case 285:
			return 277;
			break;
		
		case 286:
			return 278;
			break;
		
		case 280:
			return 279;
			break;
		
		case 287:
			return 280;
			break;
		
		case 288:
			return 281;
			break;
		
		case 289:
			return 282;
			break;
		
		case 290:
			return 283;
			break;
		
		case 291:
			return 284;
			break;
		
		case 292:
			return 285;
			break;
		
		case 293:
			return 286;
			break;
		
		case 294:
			return 287;
			break;
		
		case 295:
			return 288;
			break;
		
		case 296:
			return 289;
			break;
		
		case 297:
			return 290;
			break;
		
		case 298:
			return 291;
			break;
		
		case 299:
			return 292;
			break;
		
		case 300:
			return 293;
			break;
		
		case 301:
			return 294;
			break;
		
		case 302:
			return 295;
			break;
		
		case 303:
			return 296;
			break;
		
		case 304:
			return 297;
			break;
		
		case 305:
			return 298;
			break;
		
		case 306:
			return 299;
			break;
		
		case 307:
			return 300;
			break;
		
		case 308:
			return 301;
			break;
		
		case 309:
			return 302;
			break;
		
		case 310:
			return 303;
			break;
		
		case 311:
			return 304;
			break;
		
		case 312:
			return 305;
			break;
		
		case 313:
			return 306;
			break;
		
		case 314:
			return 307;
			break;
		
		case 315:
			return 308;
			break;
		
		case 316:
			return 309;
			break;
		
		case 317:
			return 310;
			break;
		
		case 318:
			return 311;
			break;
		
		case 319:
			return 312;
			break;
		
		case 320:
			return 313;
			break;
		
		case 321:
			return 314;
			break;
		
		case 322:
			return 315;
			break;
		
		case 323:
			return 316;
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 338;
			break;
		
		case 346:
			return 339;
			break;
		
		case 347:
			return 340;
			break;
		
		case 348:
			return 341;
			break;
		
		case 349:
			return 342;
			break;
		
		case 350:
			return 343;
			break;
		
		case 351:
			return 344;
			break;
		
		case 352:
			return 345;
			break;
		
		case 353:
			return 346;
			break;
		
		case 354:
			return 347;
			break;
		
		case 355:
			return 348;
			break;
		
		case 356:
			return 349;
			break;
		
		case 357:
			return 350;
			break;
		
		case 358:
			return 351;
			break;
		
		case 359:
			return 352;
			break;
		
		case 360:
			return 353;
			break;
		
		case 361:
			return 354;
			break;
		
		case 362:
			return 355;
			break;
		
		case 363:
			return 356;
			break;
		
		case 364:
			return 357;
			break;
	}
	switch (iParam0)
	{
		case 325:
			return 317;
			break;
		
		case 326:
			return 318;
			break;
		
		case 327:
			return 319;
			break;
		
		case 328:
			return 320;
			break;
		
		case 329:
			return 321;
			break;
		
		case 330:
			return 322;
			break;
		
		case 324:
			return 323;
			break;
		
		case 332:
			return 324;
			break;
		
		case 333:
			return 325;
			break;
		
		case 334:
			return 326;
			break;
		
		case 335:
			return 327;
			break;
		
		case 336:
			return 328;
			break;
		
		case 337:
			return 329;
			break;
		
		case 331:
			return 330;
			break;
		
		case 366:
			return 370;
			break;
		
		case 367:
			return 371;
			break;
		
		case 368:
			return 372;
			break;
		
		case 369:
			return 373;
			break;
		
		case 370:
			return 374;
			break;
		
		case 371:
			return 375;
			break;
		
		case 365:
			return 376;
			break;
		
		case 338:
			return 358;
			break;
		
		case 339:
			return 359;
			break;
		
		case 340:
			return 360;
			break;
		
		case 341:
			return 361;
			break;
		
		case 342:
			return 362;
			break;
		
		case 343:
			return 363;
			break;
		
		case 344:
			return 364;
			break;
		
		case 372:
			return 365;
			break;
		
		case 373:
			return 366;
			break;
		
		case 374:
			return 367;
			break;
		
		case 375:
			return 368;
			break;
		
		case 376:
			return 369;
			break;
		
		case 1184:
			return 1184;
			break;
		
		case 1185:
			return 1185;
			break;
		
		case 377:
			return 383;
			break;
		
		case 378:
			return 377;
			break;
		
		case 379:
			return 378;
			break;
		
		case 380:
			return 379;
			break;
		
		case 381:
			return 380;
			break;
		
		case 382:
			return 381;
			break;
		
		case 383:
			return 382;
			break;
		
		case 384:
			return 384;
			break;
		
		case 385:
			return 385;
			break;
		
		case 386:
			return 386;
			break;
		
		case 387:
			return 387;
			break;
		
		case 388:
			return 388;
			break;
		
		case 389:
			return 389;
			break;
		
		case 390:
			return 390;
			break;
		
		case 391:
			return 405;
			break;
		
		case 392:
			return 406;
			break;
		
		case 393:
			return 407;
			break;
		
		case 394:
			return 408;
			break;
		
		case 395:
			return 409;
			break;
		
		case 396:
			return 410;
			break;
		
		case 397:
			return 397;
			break;
		
		case 405:
			return 391;
			break;
		
		case 406:
			return 392;
			break;
		
		case 407:
			return 393;
			break;
		
		case 408:
			return 394;
			break;
		
		case 409:
			return 395;
			break;
		
		case 410:
			return 396;
			break;
		
		case 411:
			return 397;
			break;
		
		case 398:
			return 398;
			break;
		
		case 399:
			return 399;
			break;
		
		case 400:
			return 400;
			break;
		
		case 401:
			return 401;
			break;
		
		case 402:
			return 402;
			break;
		
		case 403:
			return 403;
			break;
		
		case 404:
			return 404;
			break;
		
		case 412:
			return 412;
			break;
		
		case 413:
			return 413;
			break;
		
		case 414:
			return 414;
			break;
		
		case 415:
			return 415;
			break;
		
		case 416:
			return 416;
			break;
		
		case 417:
			return 417;
			break;
		
		case 418:
			return 418;
			break;
		
		case 419:
			return 419;
			break;
		
		case 420:
			return 420;
			break;
		
		case 421:
			return 421;
			break;
		
		case 422:
			return 422;
			break;
		
		case 423:
			return 423;
			break;
		
		case 424:
			return 424;
			break;
		
		case 425:
			return 425;
			break;
		
		case 426:
			return 433;
			break;
		
		case 427:
			return 434;
			break;
		
		case 428:
			return 435;
			break;
		
		case 429:
			return 436;
			break;
		
		case 430:
			return 437;
			break;
		
		case 431:
			return 438;
			break;
		
		case 432:
			return 439;
			break;
		
		case 433:
			return 426;
			break;
		
		case 434:
			return 427;
			break;
		
		case 435:
			return 428;
			break;
		
		case 436:
			return 429;
			break;
		
		case 437:
			return 430;
			break;
		
		case 438:
			return 431;
			break;
		
		case 439:
			return 432;
			break;
	}
	switch (iParam0)
	{
		case 440:
			return 440;
			break;
		
		case 441:
			return 441;
			break;
		
		case 442:
			return 442;
			break;
		
		case 443:
			return 443;
			break;
		
		case 444:
			return 444;
			break;
		
		case 445:
			return 445;
			break;
		
		case 446:
			return 446;
			break;
		
		case 447:
			return 447;
			break;
		
		case 448:
			return 448;
			break;
		
		case 449:
			return 449;
			break;
		
		case 450:
			return 450;
			break;
		
		case 451:
			return 451;
			break;
		
		case 452:
			return 452;
			break;
		
		case 453:
			return 453;
			break;
		
		case 454:
			return 454;
			break;
		
		case 455:
			return 455;
			break;
		
		case 456:
			return 456;
			break;
		
		case 457:
			return 457;
			break;
		
		case 458:
			return 458;
			break;
		
		case 459:
			return 459;
			break;
		
		case 460:
			return 460;
			break;
		
		case 461:
			return 461;
			break;
		
		case 462:
			return 462;
			break;
		
		case 463:
			return 463;
			break;
		
		case 464:
			return 464;
			break;
		
		case 465:
			return 465;
			break;
		
		case 466:
			return 466;
			break;
		
		case 467:
			return 467;
			break;
		
		case 468:
			return 468;
			break;
		
		case 469:
			return 469;
			break;
		
		case 470:
			return 470;
			break;
	}
	switch (iParam0)
	{
		case 471:
			return 471;
			break;
		
		case 472:
			return 472;
			break;
		
		case 473:
			return 473;
			break;
		
		case 474:
			return 474;
			break;
		
		case 475:
			return 475;
			break;
		
		case 476:
			return 476;
			break;
		
		case 477:
			return 477;
			break;
		
		case 478:
			return 478;
			break;
		
		case 479:
			return 479;
			break;
		
		case 480:
			return 480;
			break;
		
		case 481:
			return 481;
			break;
		
		case 482:
			return 482;
			break;
		
		case 483:
			return 483;
			break;
		
		case 484:
			return 484;
			break;
		
		case 485:
			return 485;
			break;
		
		case 486:
			return 486;
			break;
		
		case 487:
			return 487;
			break;
		
		case 488:
			return 488;
			break;
		
		case 489:
			return 489;
			break;
		
		case 490:
			return 490;
			break;
		
		case 491:
			return 491;
			break;
		
		case 492:
			return 492;
			break;
		
		case 493:
			return 493;
			break;
		
		case 494:
			return 494;
			break;
		
		case 495:
			return 495;
			break;
		
		case 496:
			return 496;
			break;
		
		case 497:
			return 497;
			break;
		
		case 498:
			return 498;
			break;
		
		case 499:
			return 499;
			break;
		
		case 500:
			return 500;
			break;
		
		case 501:
			return 501;
			break;
	}
	switch (iParam0)
	{
		case 502:
			return 502;
			break;
		
		case 503:
			return 503;
			break;
		
		case 504:
			return 504;
			break;
		
		case 505:
			return 505;
			break;
		
		case 506:
			return 506;
			break;
		
		case 507:
			return 507;
			break;
		
		case 508:
			return 508;
			break;
		
		case 509:
			return 509;
			break;
		
		case 510:
			return 510;
			break;
		
		case 511:
			return 511;
			break;
		
		case 512:
			return 512;
			break;
		
		case 513:
			return 513;
			break;
		
		case 514:
			return 514;
			break;
		
		case 515:
			return 515;
			break;
		
		case 516:
			return 516;
			break;
		
		case 517:
			return 517;
			break;
		
		case 518:
			return 518;
			break;
		
		case 519:
			return 519;
			break;
		
		case 520:
			return 520;
			break;
		
		case 521:
			return 521;
			break;
		
		case 522:
			return 522;
			break;
		
		case 523:
			return 523;
			break;
		
		case 524:
			return 524;
			break;
		
		case 525:
			return 525;
			break;
		
		case 526:
			return 526;
			break;
		
		case 527:
			return 527;
			break;
		
		case 528:
			return 528;
			break;
		
		case 529:
			return 529;
			break;
		
		case 530:
			return 530;
			break;
		
		case 531:
			return 531;
			break;
		
		case 532:
			return 532;
			break;
	}
	switch (iParam0)
	{
		case 533:
			return 533;
			break;
		
		case 534:
			return 534;
			break;
		
		case 535:
			return 535;
			break;
		
		case 536:
			return 536;
			break;
		
		case 537:
			return 537;
			break;
		
		case 538:
			return 538;
			break;
		
		case 539:
			return 539;
			break;
		
		case 540:
			return 540;
			break;
		
		case 541:
			return 541;
			break;
		
		case 542:
			return 542;
			break;
		
		case 543:
			return 543;
			break;
		
		case 544:
			return 544;
			break;
		
		case 545:
			return 545;
			break;
		
		case 546:
			return 546;
			break;
		
		case 547:
			return 547;
			break;
		
		case 548:
			return 548;
			break;
		
		case 549:
			return 549;
			break;
		
		case 550:
			return 550;
			break;
		
		case 551:
			return 551;
			break;
		
		case 552:
			return 552;
			break;
		
		case 553:
			return 553;
			break;
		
		case 554:
			return 554;
			break;
		
		case 555:
			return 555;
			break;
		
		case 556:
			return 556;
			break;
		
		case 557:
			return 557;
			break;
		
		case 558:
			return 558;
			break;
		
		case 559:
			return 559;
			break;
		
		case 560:
			return 560;
			break;
		
		case 561:
			return 561;
			break;
		
		case 562:
			return 562;
			break;
		
		case 563:
			return 563;
			break;
	}
	switch (iParam0)
	{
		case 564:
			return 564;
			break;
		
		case 565:
			return 565;
			break;
		
		case 566:
			return 566;
			break;
		
		case 567:
			return 567;
			break;
		
		case 568:
			return 568;
			break;
		
		case 569:
			return 569;
			break;
		
		case 570:
			return 570;
			break;
		
		case 571:
			return 571;
			break;
		
		case 572:
			return 572;
			break;
		
		case 573:
			return 573;
			break;
		
		case 574:
			return 574;
			break;
		
		case 575:
			return 575;
			break;
		
		case 576:
			return 576;
			break;
		
		case 577:
			return 577;
			break;
		
		case 578:
			return 578;
			break;
		
		case 579:
			return 579;
			break;
		
		case 580:
			return 580;
			break;
		
		case 581:
			return 581;
			break;
		
		case 582:
			return 582;
			break;
		
		case 583:
			return 583;
			break;
		
		case 584:
			return 584;
			break;
		
		case 585:
			return 585;
			break;
		
		case 586:
			return 586;
			break;
		
		case 587:
			return 587;
			break;
		
		case 588:
			return 588;
			break;
		
		case 589:
			return 589;
			break;
		
		case 590:
			return 590;
			break;
		
		case 591:
			return 591;
			break;
		
		case 592:
			return 592;
			break;
		
		case 593:
			return 593;
			break;
		
		case 594:
			return 594;
			break;
		
		case 595:
			return 595;
			break;
		
		case 596:
			return 596;
			break;
		
		case 597:
			return 597;
			break;
		
		case 598:
			return 598;
			break;
		
		case 599:
			return 599;
			break;
		
		case 600:
			return 600;
			break;
		
		case 601:
			return 601;
			break;
		
		case 602:
			return 602;
			break;
		
		case 603:
			return 603;
			break;
		
		case 604:
			return 604;
			break;
		
		case 605:
			return 605;
			break;
		
		case 606:
			return 606;
			break;
		
		case 607:
			return 607;
			break;
		
		case 608:
			return 608;
			break;
		
		case 609:
			return 609;
			break;
		
		case 610:
			return 610;
			break;
		
		case 611:
			return 611;
			break;
		
		case 612:
			return 612;
			break;
		
		case 613:
			return 613;
			break;
		
		case 614:
			return 614;
			break;
		
		case 615:
			return 615;
			break;
		
		case 616:
			return 616;
			break;
		
		case 617:
			return 617;
			break;
		
		case 618:
			return 618;
			break;
		
		case 619:
			return 619;
			break;
		
		case 620:
			return 620;
			break;
		
		case 621:
			return 621;
			break;
		
		case 622:
			return 622;
			break;
		
		case 623:
			return 623;
			break;
		
		case 624:
			return 624;
			break;
		
		case 625:
			return 625;
			break;
	}
	switch (iParam0)
	{
		case 626:
			return 626;
			break;
		
		case 627:
			return 627;
			break;
		
		case 628:
			return 628;
			break;
		
		case 629:
			return 629;
			break;
		
		case 630:
			return 630;
			break;
		
		case 631:
			return 631;
			break;
		
		case 632:
			return 632;
			break;
		
		case 633:
			return 633;
			break;
		
		case 634:
			return 634;
			break;
		
		case 635:
			return 635;
			break;
		
		case 636:
			return 636;
			break;
		
		case 637:
			return 637;
			break;
		
		case 638:
			return 638;
			break;
		
		case 639:
			return 639;
			break;
		
		case 640:
			return 640;
			break;
		
		case 641:
			return 641;
			break;
		
		case 642:
			return 642;
			break;
		
		case 643:
			return 643;
			break;
		
		case 644:
			return 644;
			break;
		
		case 645:
			return 645;
			break;
		
		case 646:
			return 646;
			break;
		
		case 647:
			return 647;
			break;
		
		case 648:
			return 648;
			break;
		
		case 649:
			return 649;
			break;
		
		case 650:
			return 650;
			break;
		
		case 651:
			return 651;
			break;
		
		case 652:
			return 652;
			break;
		
		case 653:
			return 653;
			break;
		
		case 654:
			return 654;
			break;
		
		case 655:
			return 655;
			break;
		
		case 656:
			return 656;
			break;
	}
	switch (iParam0)
	{
		case 657:
			return 657;
			break;
		
		case 658:
			return 658;
			break;
		
		case 659:
			return 659;
			break;
		
		case 660:
			return 660;
			break;
		
		case 661:
			return 661;
			break;
		
		case 662:
			return 662;
			break;
		
		case 663:
			return 663;
			break;
		
		case 664:
			return 664;
			break;
		
		case 665:
			return 665;
			break;
		
		case 666:
			return 666;
			break;
		
		case 667:
			return 667;
			break;
		
		case 668:
			return 668;
			break;
		
		case 669:
			return 669;
			break;
		
		case 670:
			return 670;
			break;
		
		case 671:
			return 671;
			break;
		
		case 672:
			return 672;
			break;
		
		case 673:
			return 673;
			break;
		
		case 674:
			return 674;
			break;
		
		case 675:
			return 675;
			break;
		
		case 676:
			return 676;
			break;
		
		case 677:
			return 677;
			break;
		
		case 678:
			return 678;
			break;
		
		case 679:
			return 679;
			break;
		
		case 680:
			return 680;
			break;
		
		case 681:
			return 681;
			break;
		
		case 682:
			return 682;
			break;
		
		case 683:
			return 683;
			break;
		
		case 684:
			return 684;
			break;
		
		case 685:
			return 685;
			break;
		
		case 686:
			return 686;
			break;
		
		case 687:
			return 687;
			break;
	}
	switch (iParam0)
	{
		case 688:
			return 688;
			break;
		
		case 689:
			return 689;
			break;
		
		case 690:
			return 690;
			break;
		
		case 691:
			return 691;
			break;
		
		case 692:
			return 692;
			break;
		
		case 693:
			return 693;
			break;
		
		case 694:
			return 694;
			break;
		
		case 695:
			return 695;
			break;
		
		case 696:
			return 696;
			break;
		
		case 697:
			return 697;
			break;
		
		case 698:
			return 698;
			break;
		
		case 699:
			return 699;
			break;
		
		case 700:
			return 700;
			break;
		
		case 701:
			return 701;
			break;
		
		case 702:
			return 702;
			break;
		
		case 703:
			return 703;
			break;
		
		case 704:
			return 704;
			break;
		
		case 705:
			return 705;
			break;
		
		case 706:
			return 706;
			break;
		
		case 707:
			return 707;
			break;
		
		case 708:
			return 708;
			break;
		
		case 709:
			return 709;
			break;
		
		case 710:
			return 710;
			break;
		
		case 711:
			return 711;
			break;
		
		case 712:
			return 712;
			break;
		
		case 713:
			return 713;
			break;
		
		case 714:
			return 714;
			break;
		
		case 715:
			return 715;
			break;
		
		case 716:
			return 716;
			break;
		
		case 717:
			return 717;
			break;
		
		case 718:
			return 718;
			break;
	}
	switch (iParam0)
	{
		case 719:
			return 719;
			break;
		
		case 720:
			return 720;
			break;
		
		case 721:
			return 721;
			break;
		
		case 722:
			return 722;
			break;
		
		case 723:
			return 723;
			break;
		
		case 724:
			return 724;
			break;
		
		case 725:
			return 725;
			break;
		
		case 726:
			return 726;
			break;
		
		case 727:
			return 727;
			break;
		
		case 728:
			return 728;
			break;
		
		case 729:
			return 729;
			break;
		
		case 730:
			return 730;
			break;
		
		case 731:
			return 731;
			break;
		
		case 732:
			return 732;
			break;
		
		case 733:
			return 733;
			break;
		
		case 734:
			return 734;
			break;
		
		case 735:
			return 735;
			break;
		
		case 736:
			return 736;
			break;
		
		case 737:
			return 737;
			break;
		
		case 738:
			return 738;
			break;
		
		case 739:
			return 739;
			break;
		
		case 740:
			return 740;
			break;
		
		case 741:
			return 741;
			break;
		
		case 742:
			return 742;
			break;
		
		case 743:
			return 743;
			break;
		
		case 744:
			return 744;
			break;
		
		case 745:
			return 745;
			break;
		
		case 746:
			return 746;
			break;
		
		case 747:
			return 747;
			break;
		
		case 748:
			return 748;
			break;
		
		case 749:
			return 749;
			break;
	}
	switch (iParam0)
	{
		case 750:
			return 750;
			break;
		
		case 751:
			return 751;
			break;
		
		case 752:
			return 752;
			break;
		
		case 753:
			return 753;
			break;
		
		case 754:
			return 754;
			break;
		
		case 755:
			return 755;
			break;
		
		case 756:
			return 756;
			break;
		
		case 757:
			return 757;
			break;
		
		case 758:
			return 758;
			break;
		
		case 759:
			return 759;
			break;
		
		case 760:
			return 760;
			break;
		
		case 761:
			return 761;
			break;
		
		case 762:
			return 762;
			break;
		
		case 763:
			return 763;
			break;
		
		case 764:
			return 764;
			break;
		
		case 765:
			return 765;
			break;
		
		case 766:
			return 766;
			break;
		
		case 767:
			return 767;
			break;
		
		case 768:
			return 768;
			break;
		
		case 769:
			return 769;
			break;
		
		case 770:
			return 770;
			break;
		
		case 771:
			return 771;
			break;
		
		case 772:
			return 772;
			break;
		
		case 773:
			return 773;
			break;
		
		case 774:
			return 774;
			break;
		
		case 775:
			return 775;
			break;
		
		case 776:
			return 776;
			break;
		
		case 777:
			return 777;
			break;
		
		case 778:
			return 778;
			break;
		
		case 779:
			return 779;
			break;
		
		case 780:
			return 780;
			break;
	}
	switch (iParam0)
	{
		case 781:
			return 781;
			break;
		
		case 782:
			return 782;
			break;
		
		case 783:
			return 783;
			break;
		
		case 784:
			return 784;
			break;
		
		case 785:
			return 785;
			break;
		
		case 786:
			return 786;
			break;
		
		case 787:
			return 787;
			break;
		
		case 788:
			return 788;
			break;
		
		case 789:
			return 789;
			break;
		
		case 790:
			return 790;
			break;
		
		case 791:
			return 791;
			break;
		
		case 792:
			return 792;
			break;
		
		case 793:
			return 793;
			break;
		
		case 794:
			return 794;
			break;
		
		case 795:
			return 795;
			break;
		
		case 796:
			return 796;
			break;
		
		case 797:
			return 797;
			break;
		
		case 798:
			return 798;
			break;
		
		case 799:
			return 799;
			break;
		
		case 800:
			return 800;
			break;
		
		case 801:
			return 801;
			break;
		
		case 802:
			return 802;
			break;
		
		case 803:
			return 803;
			break;
		
		case 804:
			return 804;
			break;
		
		case 805:
			return 805;
			break;
		
		case 806:
			return 806;
			break;
		
		case 807:
			return 807;
			break;
		
		case 808:
			return 808;
			break;
		
		case 809:
			return 809;
			break;
		
		case 810:
			return 810;
			break;
		
		case 811:
			return 811;
			break;
	}
	switch (iParam0)
	{
		case 812:
			return 874;
			break;
		
		case 813:
			return 875;
			break;
		
		case 814:
			return 876;
			break;
		
		case 815:
			return 877;
			break;
		
		case 816:
			return 878;
			break;
		
		case 817:
			return 879;
			break;
		
		case 818:
			return 880;
			break;
		
		case 819:
			return 881;
			break;
		
		case 820:
			return 882;
			break;
		
		case 821:
			return 883;
			break;
		
		case 822:
			return 884;
			break;
		
		case 823:
			return 885;
			break;
		
		case 824:
			return 886;
			break;
		
		case 825:
			return 887;
			break;
		
		case 826:
			return 888;
			break;
		
		case 827:
			return 889;
			break;
		
		case 828:
			return 890;
			break;
		
		case 829:
			return 891;
			break;
		
		case 830:
			return 892;
			break;
		
		case 831:
			return 893;
			break;
		
		case 832:
			return 894;
			break;
		
		case 833:
			return 895;
			break;
		
		case 834:
			return 896;
			break;
		
		case 835:
			return 897;
			break;
		
		case 836:
			return 898;
			break;
		
		case 837:
			return 899;
			break;
		
		case 838:
			return 900;
			break;
		
		case 839:
			return 901;
			break;
		
		case 840:
			return 902;
			break;
		
		case 841:
			return 903;
			break;
		
		case 842:
			return 904;
			break;
	}
	switch (iParam0)
	{
		case 843:
			return 967;
			break;
		
		case 844:
			return 968;
			break;
		
		case 845:
			return 969;
			break;
		
		case 846:
			return 970;
			break;
		
		case 847:
			return 971;
			break;
		
		case 848:
			return 972;
			break;
		
		case 849:
			return 973;
			break;
		
		case 850:
			return 974;
			break;
		
		case 851:
			return 975;
			break;
		
		case 852:
			return 976;
			break;
		
		case 853:
			return 977;
			break;
		
		case 854:
			return 978;
			break;
		
		case 855:
			return 979;
			break;
		
		case 856:
			return 980;
			break;
		
		case 857:
			return 981;
			break;
		
		case 858:
			return 982;
			break;
		
		case 859:
			return 983;
			break;
		
		case 860:
			return 984;
			break;
		
		case 861:
			return 985;
			break;
		
		case 862:
			return 986;
			break;
		
		case 863:
			return 987;
			break;
		
		case 864:
			return 988;
			break;
		
		case 865:
			return 989;
			break;
		
		case 866:
			return 990;
			break;
		
		case 867:
			return 991;
			break;
		
		case 868:
			return 992;
			break;
		
		case 869:
			return 993;
			break;
		
		case 870:
			return 994;
			break;
		
		case 871:
			return 995;
			break;
		
		case 872:
			return 996;
			break;
		
		case 873:
			return 997;
			break;
	}
	switch (iParam0)
	{
		case 874:
			return 936;
			break;
		
		case 875:
			return 937;
			break;
		
		case 876:
			return 938;
			break;
		
		case 877:
			return 939;
			break;
		
		case 878:
			return 940;
			break;
		
		case 879:
			return 941;
			break;
		
		case 880:
			return 942;
			break;
		
		case 881:
			return 943;
			break;
		
		case 882:
			return 944;
			break;
		
		case 883:
			return 945;
			break;
		
		case 884:
			return 946;
			break;
		
		case 885:
			return 947;
			break;
		
		case 886:
			return 948;
			break;
		
		case 887:
			return 949;
			break;
		
		case 888:
			return 950;
			break;
		
		case 889:
			return 951;
			break;
		
		case 890:
			return 952;
			break;
		
		case 891:
			return 953;
			break;
		
		case 892:
			return 954;
			break;
		
		case 893:
			return 955;
			break;
		
		case 894:
			return 956;
			break;
		
		case 895:
			return 957;
			break;
		
		case 896:
			return 958;
			break;
		
		case 897:
			return 959;
			break;
		
		case 898:
			return 960;
			break;
		
		case 899:
			return 961;
			break;
		
		case 900:
			return 962;
			break;
		
		case 901:
			return 963;
			break;
		
		case 902:
			return 964;
			break;
		
		case 903:
			return 965;
			break;
		
		case 904:
			return 966;
			break;
	}
	switch (iParam0)
	{
		case 905:
			return 843;
			break;
		
		case 906:
			return 844;
			break;
		
		case 907:
			return 845;
			break;
		
		case 908:
			return 846;
			break;
		
		case 909:
			return 847;
			break;
		
		case 910:
			return 848;
			break;
		
		case 911:
			return 849;
			break;
		
		case 912:
			return 850;
			break;
		
		case 913:
			return 851;
			break;
		
		case 914:
			return 852;
			break;
		
		case 915:
			return 853;
			break;
		
		case 916:
			return 854;
			break;
		
		case 917:
			return 855;
			break;
		
		case 918:
			return 856;
			break;
		
		case 919:
			return 857;
			break;
		
		case 920:
			return 858;
			break;
		
		case 921:
			return 859;
			break;
		
		case 922:
			return 860;
			break;
		
		case 923:
			return 861;
			break;
		
		case 924:
			return 862;
			break;
		
		case 925:
			return 863;
			break;
		
		case 926:
			return 864;
			break;
		
		case 927:
			return 865;
			break;
		
		case 928:
			return 866;
			break;
		
		case 929:
			return 867;
			break;
		
		case 930:
			return 868;
			break;
		
		case 931:
			return 869;
			break;
		
		case 932:
			return 870;
			break;
		
		case 933:
			return 871;
			break;
		
		case 934:
			return 872;
			break;
		
		case 935:
			return 873;
			break;
	}
	switch (iParam0)
	{
		case 936:
			return 905;
			break;
		
		case 937:
			return 906;
			break;
		
		case 938:
			return 907;
			break;
		
		case 939:
			return 908;
			break;
		
		case 940:
			return 909;
			break;
		
		case 941:
			return 910;
			break;
		
		case 942:
			return 911;
			break;
		
		case 943:
			return 912;
			break;
		
		case 944:
			return 913;
			break;
		
		case 945:
			return 914;
			break;
		
		case 946:
			return 915;
			break;
		
		case 947:
			return 916;
			break;
		
		case 948:
			return 917;
			break;
		
		case 949:
			return 918;
			break;
		
		case 950:
			return 919;
			break;
		
		case 951:
			return 920;
			break;
		
		case 952:
			return 921;
			break;
		
		case 953:
			return 922;
			break;
		
		case 954:
			return 923;
			break;
		
		case 955:
			return 924;
			break;
		
		case 956:
			return 925;
			break;
		
		case 957:
			return 926;
			break;
		
		case 958:
			return 927;
			break;
		
		case 959:
			return 928;
			break;
		
		case 960:
			return 929;
			break;
		
		case 961:
			return 930;
			break;
		
		case 962:
			return 931;
			break;
		
		case 963:
			return 932;
			break;
		
		case 964:
			return 933;
			break;
		
		case 965:
			return 934;
			break;
		
		case 966:
			return 935;
			break;
	}
	switch (iParam0)
	{
		case 967:
			return 812;
			break;
		
		case 968:
			return 813;
			break;
		
		case 969:
			return 814;
			break;
		
		case 970:
			return 815;
			break;
		
		case 971:
			return 816;
			break;
		
		case 972:
			return 817;
			break;
		
		case 973:
			return 818;
			break;
		
		case 974:
			return 819;
			break;
		
		case 975:
			return 820;
			break;
		
		case 976:
			return 821;
			break;
		
		case 977:
			return 822;
			break;
		
		case 978:
			return 823;
			break;
		
		case 979:
			return 824;
			break;
		
		case 980:
			return 825;
			break;
		
		case 981:
			return 826;
			break;
		
		case 982:
			return 827;
			break;
		
		case 983:
			return 828;
			break;
		
		case 984:
			return 829;
			break;
		
		case 985:
			return 830;
			break;
		
		case 986:
			return 831;
			break;
		
		case 987:
			return 832;
			break;
		
		case 988:
			return 833;
			break;
		
		case 989:
			return 834;
			break;
		
		case 990:
			return 835;
			break;
		
		case 991:
			return 836;
			break;
		
		case 992:
			return 837;
			break;
		
		case 993:
			return 838;
			break;
		
		case 994:
			return 839;
			break;
		
		case 995:
			return 840;
			break;
		
		case 996:
			return 841;
			break;
		
		case 997:
			return 842;
			break;
	}
	switch (iParam0)
	{
		case 998:
			return 1060;
			break;
		
		case 999:
			return 1061;
			break;
		
		case 1000:
			return 1062;
			break;
		
		case 1001:
			return 1063;
			break;
		
		case 1002:
			return 1064;
			break;
		
		case 1003:
			return 1065;
			break;
		
		case 1004:
			return 1066;
			break;
		
		case 1005:
			return 1067;
			break;
		
		case 1006:
			return 1068;
			break;
		
		case 1007:
			return 1069;
			break;
		
		case 1008:
			return 1070;
			break;
		
		case 1009:
			return 1071;
			break;
		
		case 1010:
			return 1072;
			break;
		
		case 1011:
			return 1073;
			break;
		
		case 1012:
			return 1074;
			break;
		
		case 1013:
			return 1075;
			break;
		
		case 1014:
			return 1076;
			break;
		
		case 1015:
			return 1077;
			break;
		
		case 1016:
			return 1078;
			break;
		
		case 1017:
			return 1079;
			break;
		
		case 1018:
			return 1080;
			break;
		
		case 1019:
			return 1081;
			break;
		
		case 1020:
			return 1082;
			break;
		
		case 1021:
			return 1083;
			break;
		
		case 1022:
			return 1084;
			break;
		
		case 1023:
			return 1085;
			break;
		
		case 1024:
			return 1086;
			break;
		
		case 1025:
			return 1087;
			break;
		
		case 1026:
			return 1088;
			break;
		
		case 1027:
			return 1089;
			break;
		
		case 1028:
			return 1090;
			break;
	}
	switch (iParam0)
	{
		case 1029:
			return 1153;
			break;
		
		case 1030:
			return 1154;
			break;
		
		case 1031:
			return 1155;
			break;
		
		case 1032:
			return 1156;
			break;
		
		case 1033:
			return 1157;
			break;
		
		case 1034:
			return 1158;
			break;
		
		case 1035:
			return 1159;
			break;
		
		case 1036:
			return 1160;
			break;
		
		case 1037:
			return 1161;
			break;
		
		case 1038:
			return 1162;
			break;
		
		case 1039:
			return 1163;
			break;
		
		case 1040:
			return 1164;
			break;
		
		case 1041:
			return 1165;
			break;
		
		case 1042:
			return 1166;
			break;
		
		case 1043:
			return 1167;
			break;
		
		case 1044:
			return 1168;
			break;
		
		case 1045:
			return 1169;
			break;
		
		case 1046:
			return 1170;
			break;
		
		case 1047:
			return 1171;
			break;
		
		case 1048:
			return 1172;
			break;
		
		case 1049:
			return 1173;
			break;
		
		case 1050:
			return 1174;
			break;
		
		case 1051:
			return 1175;
			break;
		
		case 1052:
			return 1176;
			break;
		
		case 1053:
			return 1177;
			break;
		
		case 1054:
			return 1178;
			break;
		
		case 1055:
			return 1179;
			break;
		
		case 1056:
			return 1180;
			break;
		
		case 1057:
			return 1181;
			break;
		
		case 1058:
			return 1182;
			break;
		
		case 1059:
			return 1183;
			break;
	}
	switch (iParam0)
	{
		case 1060:
			return 1122;
			break;
		
		case 1061:
			return 1123;
			break;
		
		case 1062:
			return 1124;
			break;
		
		case 1063:
			return 1125;
			break;
		
		case 1064:
			return 1126;
			break;
		
		case 1065:
			return 1127;
			break;
		
		case 1066:
			return 1128;
			break;
		
		case 1067:
			return 1129;
			break;
		
		case 1068:
			return 1130;
			break;
		
		case 1069:
			return 1131;
			break;
		
		case 1070:
			return 1132;
			break;
		
		case 1071:
			return 1133;
			break;
		
		case 1072:
			return 1134;
			break;
		
		case 1073:
			return 1135;
			break;
		
		case 1074:
			return 1136;
			break;
		
		case 1075:
			return 1137;
			break;
		
		case 1076:
			return 1138;
			break;
		
		case 1077:
			return 1139;
			break;
		
		case 1078:
			return 1140;
			break;
		
		case 1079:
			return 1141;
			break;
		
		case 1080:
			return 1142;
			break;
		
		case 1081:
			return 1143;
			break;
		
		case 1082:
			return 1144;
			break;
		
		case 1083:
			return 1145;
			break;
		
		case 1084:
			return 1146;
			break;
		
		case 1085:
			return 1147;
			break;
		
		case 1086:
			return 1148;
			break;
		
		case 1087:
			return 1149;
			break;
		
		case 1088:
			return 1150;
			break;
		
		case 1089:
			return 1151;
			break;
		
		case 1090:
			return 1152;
			break;
	}
	switch (iParam0)
	{
		case 1153:
			return 1029;
			break;
		
		case 1154:
			return 1030;
			break;
		
		case 1155:
			return 1031;
			break;
		
		case 1156:
			return 1032;
			break;
		
		case 1157:
			return 1033;
			break;
		
		case 1158:
			return 1034;
			break;
		
		case 1159:
			return 1035;
			break;
		
		case 1160:
			return 1036;
			break;
		
		case 1161:
			return 1037;
			break;
		
		case 1162:
			return 1038;
			break;
		
		case 1163:
			return 1039;
			break;
		
		case 1164:
			return 1040;
			break;
		
		case 1165:
			return 1041;
			break;
		
		case 1166:
			return 1042;
			break;
		
		case 1167:
			return 1043;
			break;
		
		case 1168:
			return 1044;
			break;
		
		case 1169:
			return 1045;
			break;
		
		case 1170:
			return 1046;
			break;
		
		case 1171:
			return 1047;
			break;
		
		case 1172:
			return 1048;
			break;
		
		case 1173:
			return 1049;
			break;
		
		case 1174:
			return 1050;
			break;
		
		case 1175:
			return 1051;
			break;
		
		case 1176:
			return 1052;
			break;
		
		case 1177:
			return 1053;
			break;
		
		case 1178:
			return 1054;
			break;
		
		case 1179:
			return 1055;
			break;
		
		case 1180:
			return 1056;
			break;
		
		case 1181:
			return 1057;
			break;
		
		case 1182:
			return 1058;
			break;
		
		case 1183:
			return 1059;
			break;
	}
	switch (iParam0)
	{
		case 1122:
			return 1091;
			break;
		
		case 1123:
			return 1092;
			break;
		
		case 1124:
			return 1093;
			break;
		
		case 1125:
			return 1094;
			break;
		
		case 1126:
			return 1095;
			break;
		
		case 1127:
			return 1096;
			break;
		
		case 1128:
			return 1097;
			break;
		
		case 1129:
			return 1098;
			break;
		
		case 1130:
			return 1099;
			break;
		
		case 1131:
			return 1100;
			break;
		
		case 1132:
			return 1101;
			break;
		
		case 1133:
			return 1102;
			break;
		
		case 1134:
			return 1103;
			break;
		
		case 1135:
			return 1104;
			break;
		
		case 1136:
			return 1105;
			break;
		
		case 1137:
			return 1106;
			break;
		
		case 1138:
			return 1107;
			break;
		
		case 1139:
			return 1108;
			break;
		
		case 1140:
			return 1109;
			break;
		
		case 1141:
			return 1110;
			break;
		
		case 1142:
			return 1111;
			break;
		
		case 1143:
			return 1112;
			break;
		
		case 1144:
			return 1113;
			break;
		
		case 1145:
			return 1114;
			break;
		
		case 1146:
			return 1115;
			break;
		
		case 1147:
			return 1116;
			break;
		
		case 1148:
			return 1117;
			break;
		
		case 1149:
			return 1118;
			break;
		
		case 1150:
			return 1119;
			break;
		
		case 1151:
			return 1120;
			break;
		
		case 1152:
			return 1121;
			break;
	}
	switch (iParam0)
	{
		case 1091:
			return 998;
			break;
		
		case 1092:
			return 999;
			break;
		
		case 1093:
			return 1000;
			break;
		
		case 1094:
			return 1001;
			break;
		
		case 1095:
			return 1002;
			break;
		
		case 1096:
			return 1003;
			break;
		
		case 1097:
			return 1004;
			break;
		
		case 1098:
			return 1005;
			break;
		
		case 1099:
			return 1006;
			break;
		
		case 1100:
			return 1007;
			break;
		
		case 1101:
			return 1008;
			break;
		
		case 1102:
			return 1009;
			break;
		
		case 1103:
			return 1010;
			break;
		
		case 1104:
			return 1011;
			break;
		
		case 1105:
			return 1012;
			break;
		
		case 1106:
			return 1013;
			break;
		
		case 1107:
			return 1014;
			break;
		
		case 1108:
			return 1015;
			break;
		
		case 1109:
			return 1016;
			break;
		
		case 1110:
			return 1017;
			break;
		
		case 1111:
			return 1018;
			break;
		
		case 1112:
			return 1019;
			break;
		
		case 1113:
			return 1020;
			break;
		
		case 1114:
			return 1021;
			break;
		
		case 1115:
			return 1022;
			break;
		
		case 1116:
			return 1023;
			break;
		
		case 1117:
			return 1024;
			break;
		
		case 1118:
			return 1025;
			break;
		
		case 1119:
			return 1026;
			break;
		
		case 1120:
			return 1027;
			break;
		
		case 1121:
			return 1028;
			break;
	}
	switch (iParam0)
	{
		case 1186:
			return 1186;
			break;
		
		case 1187:
			return 1187;
			break;
		
		case 1188:
			return 1188;
			break;
		
		case 1189:
			return 1189;
			break;
		
		case 1190:
			return 1190;
			break;
		
		case 1191:
			return 1191;
			break;
		
		case 1192:
			return 1192;
			break;
	}
	switch (iParam0)
	{
		case 1193:
			return 1193;
			break;
		
		case 1194:
			return 1194;
			break;
		
		case 1195:
			return 1195;
			break;
		
		case 1196:
			return 1196;
			break;
		
		case 1197:
			return 1197;
			break;
		
		case 1198:
			return 1198;
			break;
		
		case 1199:
			return 1199;
			break;
	}
	switch (iParam0)
	{
		case 1200:
			return 1200;
			break;
		
		case 1201:
			return 1201;
			break;
		
		case 1202:
			return 1202;
			break;
		
		case 1203:
			return 1203;
			break;
		
		case 1204:
			return 1204;
			break;
		
		case 1205:
			return 1205;
			break;
		
		case 1206:
			return 1206;
			break;
	}
	switch (iParam0)
	{
		case 1207:
			return 1207;
			break;
		
		case 1208:
			return 1208;
			break;
		
		case 1209:
			return 1209;
			break;
		
		case 1210:
			return 1210;
			break;
		
		case 1211:
			return 1211;
			break;
		
		case 1212:
			return 1212;
			break;
		
		case 1213:
			return 1213;
			break;
	}
	return 146;
}

var func_430(int iParam0, int iParam1)
{
	iVar1 = func_428(iParam1);
	iVar2 = func_431(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-2018548694, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-1315299114, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(226994293, &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(1323790999, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-2073999771, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-1921832882, &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(760098661, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(1865030647, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(1934357500, &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-260459075, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-419525730, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(1106022718, &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(1085789752, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-121557213, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(1478409634, &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(334003354, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-1021590567, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-863918486, &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-500524769, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-732338604, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-1699495217, &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-1456330957, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(758650912, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-1327567067, &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-142720058, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(1090437037, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(2133068720, &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-855707956, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(164057391, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-7828357, &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(-1539506602, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(1607797744, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-4568869, &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(1915755069, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(-1852248201, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-225202546, &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					unk_0x6FB46C25CCB7E6D5(1861227445, &uVar0, -1);
					break;
				
				case 1:
					unk_0x6FB46C25CCB7E6D5(1528857219, &uVar0, -1);
					break;
				
				case 2:
					unk_0x6FB46C25CCB7E6D5(-595426708, &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_431(int iParam0)
{
	return (iParam0 / 32);
}

bool func_432(int iParam0, int iParam1)
{
	if (func_53())
	{
		return 0;
	}
	iVar0 = func_433(iParam0, iParam1);
	iVar1 = func_428(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_427(iVar1));
}

int func_433(int iParam0, int iParam1)
{
	iVar0 = func_31(func_434(iParam0), iParam1, 0);
	return iVar0;
}

int func_434(int iParam0)
{
	iVar0 = func_428(iParam0);
	iVar1 = func_52(iVar0);
	if ((func_35() == 0 || func_51() == 0) || (func_35() == 999 && func_51() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 801;
				break;
			
			case 1:
				return 802;
				break;
			
			case 2:
				return 803;
				break;
			
			case 3:
				return 804;
				break;
			
			case 4:
				return 805;
				break;
			
			case 5:
				return 806;
				break;
			
			case 6:
				return 807;
				break;
			
			case 7:
				return 808;
				break;
			
			case 8:
				return 809;
				break;
			
			case 9:
				return 2052;
				break;
			
			case 10:
				return 2064;
				break;
			
			case 11:
				return 2091;
				break;
			
			case 12:
				return 2431;
				break;
			
			case 13:
				return 2950;
				break;
			
			case 14:
				return 5513;
				break;
			
			case 15:
				return 5517;
				break;
			
			case 16:
				return 5521;
				break;
			
			case 17:
				return 5525;
				break;
			
			case 18:
				return 5529;
				break;
			
			case 19:
				return 5533;
				break;
			
			case 20:
				return 5593;
				break;
			
			case 21:
				return 5597;
				break;
			
			case 22:
				return 5601;
				break;
			
			case 23:
				return 5605;
				break;
			
			case 24:
				return 5609;
				break;
			
			case 25:
				return 5613;
				break;
			
			case 26:
				return 5617;
				break;
			
			case 27:
				return 5638;
				break;
			
			case 28:
				return 5642;
				break;
			
			case 29:
				return 5646;
				break;
			
			case 30:
				return 5650;
				break;
			
			case 31:
				return 5654;
				break;
			
			case 32:
				return 5658;
				break;
			
			case 33:
				return 6468;
				break;
			
			case 34:
				return 6472;
				break;
			
			case 35:
				return 6476;
				break;
			
			case 36:
				return 6480;
				break;
			
			case 37:
				return 6484;
				break;
			
			case 38:
				return 6488;
				break;
			
			case 39:
				return 6492;
				break;
			}
	}
	return 11511;
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_122(iParam0, &iVar2, iParam2))
	{
		if (Global_76622)
		{
			iVar1 = func_113(iParam2, iParam3);
			if (iVar1 != 0)
			{
				if (func_432(iVar1, -1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		*iParam1 = iParam3 == iParam4;
	}
	return iVar0;
}

int func_436(int iParam0, int iParam1)
{
	if (func_236(iParam1) && (func_106(iParam0) || func_173(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_437(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_142, 22);
}

bool func_438(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_439(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_46(iVar1));
}

int func_439(int iParam0)
{
	iVar0 = func_31(func_440(iParam0), -1, 0);
	return iVar0;
}

int func_440(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_52(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_441(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 453432689:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 440;
							break;
						
						case 2:
							return 441;
							break;
						
						case 3:
							return 442;
							break;
						
						case 4:
							return 443;
							break;
						
						case 5:
							return 444;
							break;
						
						case 6:
							return 445;
							break;
						
						case 7:
							return 446;
							break;
						
						case 8:
							return 447;
							break;
						
						case 9:
							return 448;
							break;
						
						case 10:
							return 449;
							break;
						
						case 11:
							return 450;
							break;
						
						case 12:
							return 451;
							break;
						
						case 13:
							return 452;
							break;
						
						case 14:
							return 453;
							break;
						
						case 15:
							return 454;
							break;
						
						case 16:
							return 455;
							break;
						
						case 17:
							return 456;
							break;
						
						case 18:
							return 457;
							break;
						
						case 19:
							return 458;
							break;
						
						case 20:
							return 459;
							break;
						
						case 21:
							return 460;
							break;
						
						case 22:
							return 461;
							break;
						
						case 23:
							return 462;
							break;
						
						case 24:
							return 463;
							break;
						
						case 25:
							return 464;
							break;
						
						case 26:
							return 465;
							break;
						
						case 27:
							return 466;
							break;
						
						case 28:
							return 467;
							break;
						
						case 29:
							return 468;
							break;
						
						case 30:
							return 469;
							break;
						
						case 31:
							return 470;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 76;
							break;
						
						case 2:
							return 16;
							break;
						
						case 3:
							return 136;
							break;
						
						case 4:
							return 56;
							break;
						
						case 5:
							return 116;
							break;
						
						case 6:
							return 96;
							break;
						
						case 7:
							return 36;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 76;
						break;
					
					case 2:
						return 16;
						break;
					
					case 3:
						return 136;
						break;
					
					case 4:
						return 56;
						break;
					
					case 5:
						return 116;
						break;
					
					case 6:
						return 96;
						break;
					
					case 7:
						return 36;
						break;
					}
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 77;
					break;
				
				case 2:
					return 17;
					break;
				
				case 3:
					return 137;
					break;
				
				case 4:
					return 57;
					break;
				
				case 5:
					return 117;
					break;
				
				case 6:
					return 97;
					break;
				
				case 7:
					return 37;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 78;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 58;
					break;
				
				case 5:
					return 118;
					break;
				
				case 6:
					return 98;
					break;
				
				case 7:
					return 38;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 79;
					break;
				
				case 2:
					return 19;
					break;
				
				case 3:
					return 139;
					break;
				
				case 4:
					return 59;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 39;
					break;
			}
			break;
		
		case 736523883:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 471;
							break;
						
						case 2:
							return 472;
							break;
						
						case 3:
							return 473;
							break;
						
						case 4:
							return 474;
							break;
						
						case 5:
							return 475;
							break;
						
						case 6:
							return 476;
							break;
						
						case 7:
							return 477;
							break;
						
						case 8:
							return 478;
							break;
						
						case 9:
							return 479;
							break;
						
						case 10:
							return 480;
							break;
						
						case 11:
							return 481;
							break;
						
						case 12:
							return 482;
							break;
						
						case 13:
							return 483;
							break;
						
						case 14:
							return 484;
							break;
						
						case 15:
							return 485;
							break;
						
						case 16:
							return 486;
							break;
						
						case 17:
							return 487;
							break;
						
						case 18:
							return 488;
							break;
						
						case 19:
							return 489;
							break;
						
						case 20:
							return 490;
							break;
						
						case 21:
							return 491;
							break;
						
						case 22:
							return 492;
							break;
						
						case 23:
							return 493;
							break;
						
						case 24:
							return 494;
							break;
						
						case 25:
							return 495;
							break;
						
						case 26:
							return 496;
							break;
						
						case 27:
							return 497;
							break;
						
						case 28:
							return 498;
							break;
						
						case 29:
							return 499;
							break;
						
						case 30:
							return 500;
							break;
						
						case 31:
							return 501;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 80;
							break;
						
						case 2:
							return 20;
							break;
						
						case 3:
							return 140;
							break;
						
						case 4:
							return 60;
							break;
						
						case 5:
							return 120;
							break;
						
						case 6:
							return 100;
							break;
						
						case 7:
							return 40;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 80;
						break;
					
					case 2:
						return 20;
						break;
					
					case 3:
						return 140;
						break;
					
					case 4:
						return 60;
						break;
					
					case 5:
						return 120;
						break;
					
					case 6:
						return 100;
						break;
					
					case 7:
						return 40;
						break;
					}
			}
			break;
		
		case -1074790547:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 564;
							break;
						
						case 2:
							return 565;
							break;
						
						case 3:
							return 566;
							break;
						
						case 4:
							return 567;
							break;
						
						case 5:
							return 568;
							break;
						
						case 6:
							return 569;
							break;
						
						case 7:
							return 570;
							break;
						
						case 8:
							return 571;
							break;
						
						case 9:
							return 572;
							break;
						
						case 10:
							return 573;
							break;
						
						case 11:
							return 574;
							break;
						
						case 12:
							return 575;
							break;
						
						case 13:
							return 576;
							break;
						
						case 14:
							return 577;
							break;
						
						case 15:
							return 578;
							break;
						
						case 16:
							return 579;
							break;
						
						case 17:
							return 580;
							break;
						
						case 18:
							return 581;
							break;
						
						case 19:
							return 582;
							break;
						
						case 20:
							return 583;
							break;
						
						case 21:
							return 584;
							break;
						
						case 22:
							return 585;
							break;
						
						case 23:
							return 586;
							break;
						
						case 24:
							return 587;
							break;
						
						case 25:
							return 588;
							break;
						
						case 26:
							return 589;
							break;
						
						case 27:
							return 590;
							break;
						
						case 28:
							return 591;
							break;
						
						case 29:
							return 592;
							break;
						
						case 30:
							return 593;
							break;
						
						case 31:
							return 594;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 81;
							break;
						
						case 2:
							return 21;
							break;
						
						case 3:
							return 141;
							break;
						
						case 4:
							return 61;
							break;
						
						case 5:
							return 121;
							break;
						
						case 6:
							return 101;
							break;
						
						case 7:
							return 41;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 81;
						break;
					
					case 2:
						return 21;
						break;
					
					case 3:
						return 141;
						break;
					
					case 4:
						return 61;
						break;
					
					case 5:
						return 121;
						break;
					
					case 6:
						return 101;
						break;
					
					case 7:
						return 41;
						break;
					}
			}
			break;
		
		case -2084633992:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 595;
							break;
						
						case 2:
							return 596;
							break;
						
						case 3:
							return 597;
							break;
						
						case 4:
							return 598;
							break;
						
						case 5:
							return 599;
							break;
						
						case 6:
							return 600;
							break;
						
						case 7:
							return 601;
							break;
						
						case 8:
							return 602;
							break;
						
						case 9:
							return 603;
							break;
						
						case 10:
							return 604;
							break;
						
						case 11:
							return 605;
							break;
						
						case 12:
							return 606;
							break;
						
						case 13:
							return 607;
							break;
						
						case 14:
							return 608;
							break;
						
						case 15:
							return 609;
							break;
						
						case 16:
							return 610;
							break;
						
						case 17:
							return 611;
							break;
						
						case 18:
							return 612;
							break;
						
						case 19:
							return 613;
							break;
						
						case 20:
							return 614;
							break;
						
						case 21:
							return 615;
							break;
						
						case 22:
							return 616;
							break;
						
						case 23:
							return 617;
							break;
						
						case 24:
							return 618;
							break;
						
						case 25:
							return 619;
							break;
						
						case 26:
							return 620;
							break;
						
						case 27:
							return 621;
							break;
						
						case 28:
							return 622;
							break;
						
						case 29:
							return 623;
							break;
						
						case 30:
							return 624;
							break;
						
						case 31:
							return 625;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 82;
							break;
						
						case 2:
							return 22;
							break;
						
						case 3:
							return 142;
							break;
						
						case 4:
							return 62;
							break;
						
						case 5:
							return 122;
							break;
						
						case 6:
							return 102;
							break;
						
						case 7:
							return 42;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 82;
						break;
					
					case 2:
						return 22;
						break;
					
					case 3:
						return 142;
						break;
					
					case 4:
						return 62;
						break;
					
					case 5:
						return 122;
						break;
					
					case 6:
						return 102;
						break;
					
					case 7:
						return 42;
						break;
					}
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 208;
					break;
				
				case 2:
					return 202;
					break;
				
				case 3:
					return 203;
					break;
				
				case 4:
					return 204;
					break;
				
				case 5:
					return 205;
					break;
				
				case 6:
					return 206;
					break;
				
				case 7:
					return 207;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 215;
					break;
				
				case 2:
					return 209;
					break;
				
				case 3:
					return 210;
					break;
				
				case 4:
					return 211;
					break;
				
				case 5:
					return 212;
					break;
				
				case 6:
					return 213;
					break;
				
				case 7:
					return 214;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 83;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 143;
					break;
				
				case 4:
					return 63;
					break;
				
				case 5:
					return 123;
					break;
				
				case 6:
					return 103;
					break;
				
				case 7:
					return 43;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 84;
					break;
				
				case 2:
					return 24;
					break;
				
				case 3:
					return 144;
					break;
				
				case 4:
					return 64;
					break;
				
				case 5:
					return 124;
					break;
				
				case 6:
					return 104;
					break;
				
				case 7:
					return 44;
					break;
			}
			break;
		
		case 2144741730:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 533;
							break;
						
						case 2:
							return 534;
							break;
						
						case 3:
							return 535;
							break;
						
						case 4:
							return 536;
							break;
						
						case 5:
							return 537;
							break;
						
						case 6:
							return 538;
							break;
						
						case 7:
							return 539;
							break;
						
						case 8:
							return 540;
							break;
						
						case 9:
							return 541;
							break;
						
						case 10:
							return 542;
							break;
						
						case 11:
							return 543;
							break;
						
						case 12:
							return 544;
							break;
						
						case 13:
							return 545;
							break;
						
						case 14:
							return 546;
							break;
						
						case 15:
							return 547;
							break;
						
						case 16:
							return 548;
							break;
						
						case 17:
							return 549;
							break;
						
						case 18:
							return 550;
							break;
						
						case 19:
							return 551;
							break;
						
						case 20:
							return 552;
							break;
						
						case 21:
							return 553;
							break;
						
						case 22:
							return 554;
							break;
						
						case 23:
							return 555;
							break;
						
						case 24:
							return 556;
							break;
						
						case 25:
							return 557;
							break;
						
						case 26:
							return 558;
							break;
						
						case 27:
							return 559;
							break;
						
						case 28:
							return 560;
							break;
						
						case 29:
							return 561;
							break;
						
						case 30:
							return 562;
							break;
						
						case 31:
							return 563;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 85;
							break;
						
						case 2:
							return 25;
							break;
						
						case 3:
							return 145;
							break;
						
						case 4:
							return 65;
							break;
						
						case 5:
							return 125;
							break;
						
						case 6:
							return 105;
							break;
						
						case 7:
							return 45;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 85;
						break;
					
					case 2:
						return 25;
						break;
					
					case 3:
						return 145;
						break;
					
					case 4:
						return 65;
						break;
					
					case 5:
						return 125;
						break;
					
					case 6:
						return 105;
						break;
					
					case 7:
						return 45;
						break;
					}
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 87;
					break;
				
				case 2:
					return 27;
					break;
				
				case 3:
					return 147;
					break;
				
				case 4:
					return 67;
					break;
				
				case 5:
					return 127;
					break;
				
				case 6:
					return 107;
					break;
				
				case 7:
					return 47;
					break;
			}
			break;
		
		case 487013001:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 812;
							break;
						
						case 2:
							return 813;
							break;
						
						case 3:
							return 814;
							break;
						
						case 4:
							return 815;
							break;
						
						case 5:
							return 816;
							break;
						
						case 6:
							return 817;
							break;
						
						case 7:
							return 818;
							break;
						
						case 8:
							return 819;
							break;
						
						case 9:
							return 820;
							break;
						
						case 10:
							return 821;
							break;
						
						case 11:
							return 822;
							break;
						
						case 12:
							return 823;
							break;
						
						case 13:
							return 824;
							break;
						
						case 14:
							return 825;
							break;
						
						case 15:
							return 826;
							break;
						
						case 16:
							return 827;
							break;
						
						case 17:
							return 828;
							break;
						
						case 18:
							return 829;
							break;
						
						case 19:
							return 830;
							break;
						
						case 20:
							return 831;
							break;
						
						case 21:
							return 832;
							break;
						
						case 22:
							return 833;
							break;
						
						case 23:
							return 834;
							break;
						
						case 24:
							return 835;
							break;
						
						case 25:
							return 836;
							break;
						
						case 26:
							return 837;
							break;
						
						case 27:
							return 838;
							break;
						
						case 28:
							return 839;
							break;
						
						case 29:
							return 840;
							break;
						
						case 30:
							return 841;
							break;
						
						case 31:
							return 842;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 86;
							break;
						
						case 2:
							return 26;
							break;
						
						case 3:
							return 146;
							break;
						
						case 4:
							return 66;
							break;
						
						case 5:
							return 126;
							break;
						
						case 6:
							return 106;
							break;
						
						case 7:
							return 46;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 86;
						break;
					
					case 2:
						return 26;
						break;
					
					case 3:
						return 146;
						break;
					
					case 4:
						return 66;
						break;
					
					case 5:
						return 126;
						break;
					
					case 6:
						return 106;
						break;
					
					case 7:
						return 46;
						break;
					}
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 28;
					break;
				
				case 3:
					return 148;
					break;
				
				case 4:
					return 68;
					break;
				
				case 5:
					return 128;
					break;
				
				case 6:
					return 108;
					break;
				
				case 7:
					return 48;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 91;
					break;
				
				case 2:
					return 31;
					break;
				
				case 3:
					return 151;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 131;
					break;
				
				case 6:
					return 111;
					break;
				
				case 7:
					return 51;
					break;
			}
			break;
		
		case 205991906:
			if (func_236(Local_154))
			{
				if (func_79(iParam0) && func_45(func_107(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 502;
							break;
						
						case 2:
							return 503;
							break;
						
						case 3:
							return 504;
							break;
						
						case 4:
							return 505;
							break;
						
						case 5:
							return 506;
							break;
						
						case 6:
							return 507;
							break;
						
						case 7:
							return 508;
							break;
						
						case 8:
							return 509;
							break;
						
						case 9:
							return 510;
							break;
						
						case 10:
							return 511;
							break;
						
						case 11:
							return 512;
							break;
						
						case 12:
							return 513;
							break;
						
						case 13:
							return 514;
							break;
						
						case 14:
							return 515;
							break;
						
						case 15:
							return 516;
							break;
						
						case 16:
							return 517;
							break;
						
						case 17:
							return 518;
							break;
						
						case 18:
							return 519;
							break;
						
						case 19:
							return 520;
							break;
						
						case 20:
							return 521;
							break;
						
						case 21:
							return 522;
							break;
						
						case 22:
							return 523;
							break;
						
						case 23:
							return 524;
							break;
						
						case 24:
							return 525;
							break;
						
						case 25:
							return 526;
							break;
						
						case 26:
							return 527;
							break;
						
						case 27:
							return 528;
							break;
						
						case 28:
							return 529;
							break;
						
						case 29:
							return 530;
							break;
						
						case 30:
							return 531;
							break;
						
						case 31:
							return 532;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 92;
							break;
						
						case 2:
							return 32;
							break;
						
						case 3:
							return 152;
							break;
						
						case 4:
							return 72;
							break;
						
						case 5:
							return 132;
							break;
						
						case 6:
							return 112;
							break;
						
						case 7:
							return 52;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 92;
						break;
					
					case 2:
						return 32;
						break;
					
					case 3:
						return 152;
						break;
					
					case 4:
						return 72;
						break;
					
					case 5:
						return 132;
						break;
					
					case 6:
						return 112;
						break;
					
					case 7:
						return 52;
						break;
					}
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 93;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 153;
					break;
				
				case 4:
					return 73;
					break;
				
				case 5:
					return 133;
					break;
				
				case 6:
					return 113;
					break;
				
				case 7:
					return 53;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 95;
					break;
				
				case 2:
					return 35;
					break;
				
				case 3:
					return 155;
					break;
				
				case 4:
					return 75;
					break;
				
				case 5:
					return 135;
					break;
				
				case 6:
					return 115;
					break;
				
				case 7:
					return 55;
					break;
			}
			break;
		
		case -1312131151:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 94;
					break;
				
				case 2:
					return 34;
					break;
				
				case 3:
					return 154;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 134;
					break;
				
				case 6:
					return 114;
					break;
				
				case 7:
					return 54;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 194;
					break;
				
				case 2:
					return 173;
					break;
				
				case 3:
					return 174;
					break;
				
				case 4:
					return 175;
					break;
				
				case 5:
					return 176;
					break;
				
				case 6:
					return 177;
					break;
				
				case 7:
					return 178;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 193;
					break;
				
				case 2:
					return 179;
					break;
				
				case 3:
					return 180;
					break;
				
				case 4:
					return 181;
					break;
				
				case 5:
					return 182;
					break;
				
				case 6:
					return 183;
					break;
				
				case 7:
					return 184;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 192;
					break;
				
				case 2:
					return 161;
					break;
				
				case 3:
					return 162;
					break;
				
				case 4:
					return 163;
					break;
				
				case 5:
					return 164;
					break;
				
				case 6:
					return 165;
					break;
				
				case 7:
					return 166;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 191;
					break;
				
				case 2:
					return 185;
					break;
				
				case 3:
					return 186;
					break;
				
				case 4:
					return 187;
					break;
				
				case 5:
					return 188;
					break;
				
				case 6:
					return 189;
					break;
				
				case 7:
					return 190;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 201;
					break;
				
				case 2:
					return 195;
					break;
				
				case 3:
					return 196;
					break;
				
				case 4:
					return 197;
					break;
				
				case 5:
					return 198;
					break;
				
				case 6:
					return 199;
					break;
				
				case 7:
					return 200;
					break;
			}
			break;
		
		case -771403250:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 230;
					break;
				
				case 2:
					return 224;
					break;
				
				case 3:
					return 225;
					break;
				
				case 4:
					return 226;
					break;
				
				case 5:
					return 227;
					break;
				
				case 6:
					return 228;
					break;
				
				case 7:
					return 229;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 223;
					break;
				
				case 2:
					return 217;
					break;
				
				case 3:
					return 218;
					break;
				
				case 4:
					return 219;
					break;
				
				case 5:
					return 220;
					break;
				
				case 6:
					return 221;
					break;
				
				case 7:
					return 222;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 231;
					break;
				
				case 2:
					return 232;
					break;
				
				case 3:
					return 233;
					break;
				
				case 4:
					return 234;
					break;
				
				case 5:
					return 235;
					break;
				
				case 6:
					return 236;
					break;
				
				case 7:
					return 237;
					break;
			}
			break;
		
		case -72657034:
			if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 255;
						break;
					
					case 1:
						return 256;
						break;
					
					case 2:
						return 257;
						break;
					
					case 3:
						return 258;
						break;
					
					case 4:
						return 259;
						break;
					
					case 5:
						return 260;
						break;
					
					case 6:
						return 261;
						break;
					
					case 7:
						return 262;
						break;
					
					case 8:
						return 305;
						break;
					
					case 9:
						return 306;
						break;
					
					case 10:
						return 307;
						break;
					
					case 11:
						return 308;
						break;
					
					case 12:
						return 309;
						break;
					
					case 13:
						return 310;
						break;
					
					case 14:
						return 311;
						break;
					
					case 15:
						return 312;
						break;
					
					case 16:
						return 313;
						break;
					
					case 17:
						return 314;
						break;
					
					case 18:
						return 315;
						break;
					
					case 19:
						return 316;
						break;
					
					case 20:
						return 317;
						break;
					
					case 21:
						return 318;
						break;
					
					case 22:
						return 319;
						break;
					
					case 23:
						return 320;
						break;
					
					case 24:
						return 321;
						break;
					
					case 25:
						return 322;
						break;
					
					case 26:
						return 323;
						break;
					
					case 27:
						return 345;
						break;
					
					case 28:
						return 346;
						break;
					
					case 29:
						return 347;
						break;
					
					case 30:
						return 348;
						break;
					
					case 31:
						return 349;
						break;
					
					case 32:
						return 350;
						break;
					
					case 33:
						return 351;
						break;
					
					case 34:
						return 352;
						break;
					
					case 35:
						return 353;
						break;
					
					case 36:
						return 354;
						break;
					
					case 37:
						return 355;
						break;
					
					case 38:
						return 356;
						break;
					
					case 39:
						return 357;
						break;
					
					case 40:
						return 358;
						break;
					
					case 41:
						return 359;
						break;
					
					case 42:
						return 360;
						break;
					
					case 43:
						return 361;
						break;
					
					case 44:
						return 362;
						break;
					
					case 45:
						return 363;
						break;
					
					case 46:
						return 364;
						break;
					
					case 47:
						return 372;
						break;
					
					case 48:
						return 373;
						break;
					
					case 49:
						return 374;
						break;
					
					case 50:
						return 375;
						break;
					
					case 51:
						return 376;
						break;
					
					case 62:
						return 1184;
						break;
					
					case 63:
						return 1185;
						break;
				}
			}
			else if (iParam2 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 8;
						break;
					
					case 1:
						return 9;
						break;
					
					case 2:
						return 10;
						break;
					
					case 3:
						return 11;
						break;
					
					case 4:
						return 12;
						break;
					
					case 5:
						return 13;
						break;
					
					case 6:
						return 14;
						break;
					
					case 7:
						return 15;
						break;
					
					case 8:
						return 263;
						break;
					
					case 9:
						return 264;
						break;
					
					case 10:
						return 265;
						break;
					
					case 11:
						return 302;
						break;
					
					case 12:
						return 303;
						break;
					
					case 13:
						return 304;
						break;
				}
			}
			else if (iParam2 == 3)
			{
				switch (iParam1)
				{
					case 0:
						return 288;
						break;
					
					case 1:
						return 289;
						break;
					
					case 2:
		