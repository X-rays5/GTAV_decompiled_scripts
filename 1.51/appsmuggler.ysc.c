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
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	iLocal_118 = -1;
	sLocal_144 = "";
	iLocal_148 = 8;
	if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("appSmuggler")) > 1)
	{
		func_389(0, 1);
	}
	func_379();
	while (func_378())
	{
		func_377();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 5) && func_376())
		{
			func_374();
			func_351();
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 8) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 5))
		{
			func_345();
		}
		func_338();
		func_321();
		func_316();
		func_308();
		func_306();
		func_267();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 2))
		{
			func_6();
		}
		else if (!func_5(&uLocal_149))
		{
			func_4(&uLocal_149, 0, 0);
		}
		else if (func_3(&uLocal_149, 200, 0))
		{
			if (!Global_1676377.f_3098 && unk_0x757EF87A33649210())
			{
				func_1();
				Global_1676237 = 1;
				func_389(0, 1);
			}
		}
		wait(0);
	}
}

void func_1()
{
	if (!func_2())
	{
		Global_1676377.f_3098 = 1;
	}
}

bool func_2()
{
	return Global_1676377.f_474;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	func_265();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 0))
	{
		if (unk_0xC95D7AEEDEF4946B(uLocal_864))
		{
			iVar0 = unk_0xA52833FE33F41C53(uLocal_864);
			switch (iVar0)
			{
				case 0:
					func_264();
					func_263();
					break;
				
				case 1:
					func_215();
					break;
				
				case 35:
					if (iLocal_146 != 0)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_146 = 0;
					break;
				
				case 36:
					if (iLocal_146 != 1)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_146 = 1;
					break;
				
				case 37:
					if (iLocal_146 != 2)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_146 = 2;
					break;
				
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					func_200(func_214(iVar0), 0);
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (func_197(15964, -1, -1))
					{
						func_200(func_214(iVar0), 0);
					}
					else
					{
						iLocal_146 = 2;
						unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SHOW_SCREEN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
					break;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					func_7(func_214(iVar0));
					break;
			}
			unk_0x0674E58A79778E99(&iLocal_116, 0);
		}
	}
}

void func_7(int iParam0)
{
	if (func_196(unk_0xD803B885F5E47A62()))
	{
		func_193("HAPP_STEAL_T", "HAPP_STEAL_D", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (iParam0 != 8 && func_191(iParam0))
	{
		func_193("HAPP_STEAL_T", "HAPP_STEAL_D1", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(229))
	{
		func_193("HAPP_STEAL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1", 16);
		StringCopy(&Var4, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0", 16);
			Var4 = { func_9(iParam0) };
		}
		func_193("HAPP_STEAL_T", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, -1, &Var4);
	}
	func_8();
}

void func_8()
{
	sLocal_144 = "";
}

struct<4> func_9(int iParam0)
{
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED", 16);
			break;
	}
	return Var0;
}

void func_10(int iParam0)
{
	iLocal_148 = iParam0;
}

char* func_11()
{
	return sLocal_144;
}

int func_12(int iParam0)
{
	if (!func_190(unk_0xD803B885F5E47A62(), iParam0, 0))
	{
		iVar0 = func_21(unk_0xD803B885F5E47A62(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_19(unk_0xD803B885F5E47A62()))
			{
				func_18("UA_ML_F_GOON1");
			}
			else if (func_17(unk_0xD803B885F5E47A62()))
			{
				func_18("UA_ML_F_GOON2");
			}
			else
			{
				func_18("UA_ML_F_GOON3");
			}
		}
		else if (iVar0 == 15)
		{
			if (func_19(unk_0xD803B885F5E47A62()))
			{
				func_18("GENERAL_MLF_G1");
			}
			else if (func_17(unk_0xD803B885F5E47A62()))
			{
				func_18("GENERAL_MLF_G2");
			}
			else
			{
				func_18("GENERAL_MLF_G3");
			}
		}
		else if (iVar0 == 16)
		{
			if (func_19(unk_0xD803B885F5E47A62()))
			{
				func_18("GENERAL_MLF_G4");
			}
			else if (func_17(unk_0xD803B885F5E47A62()))
			{
				func_18("GENERAL_MLF_G5");
			}
			else
			{
				func_18("GENERAL_MLF_G6");
			}
		}
		else
		{
			func_18("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_15(unk_0xD803B885F5E47A62()))
	{
		func_18("DBG_BUN_NB");
		return 0;
	}
	if (func_13(unk_0xD803B885F5E47A62()))
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_13(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_14(iParam0, 9);
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_15(int iParam0)
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

int func_16()
{
	return -1;
}

bool func_17(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

void func_18(char* sParam0)
{
	sLocal_144 = sParam0;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, 1);
}

int func_20(int iParam0, int iParam1)
{
	if (iParam0 != func_16())
	{
		if (Global_1628237[iParam0].f_11 != func_16())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	if (!func_53(func_162(iParam1, -1, -1, -1), func_116(iParam1, -1, 1, -1, -1, iParam0), func_62(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_19(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_51(iParam1) >= func_50(iVar0))
	{
		return 5;
	}
	if (func_49(iParam0))
	{
		return 6;
	}
	if (func_48(iParam0))
	{
		return 14;
	}
	iVar1 = func_43(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_42(iParam1) == 1)
	{
		if ((func_41() || func_40()) || ((!bParam2 && func_39() != 0) && func_42(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_42(iParam1) == 2)
	{
		if (!func_36(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_16())
			{
				return 9;
			}
		}
		if (func_35(iParam0))
		{
			return 10;
		}
	}
	else if (func_33(iParam1))
	{
		if (func_31(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_30(iParam1))
	{
		if (func_29())
		{
			return 13;
		}
		if (func_27())
		{
			return 12;
		}
	}
	if (func_31(iParam0) + 1 < func_26(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_23(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_22(iParam0, 21) || func_22(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_23(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (!func_24(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_14(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_16())
	{
		if (!bParam2)
		{
			if (func_25(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_16())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1628237[iParam0].f_11 != func_16())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18163;
		
		case 183:
			return Global_262145.f_18171;
		
		case 185:
			return Global_262145.f_18180;
		
		case 182:
			return Global_262145.f_18191;
		
		case 186:
			return Global_262145.f_18200;
		
		case 195:
			return Global_262145.f_18218;
		
		case 198:
			return Global_262145.f_18228;
		
		case 197:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18248;
		
		case 209:
			return Global_262145.f_18261;
		
		case 208:
			return Global_262145.f_18269;
		
		case 201:
			return Global_262145.f_18302;
		
		case 211:
			return Global_262145.f_18370;
		
		case 193:
			return Global_262145.f_18393;
		
		case 205:
			return Global_262145.f_18411;
		
		case 189:
			return Global_262145.f_18376;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_27()
{
	if (func_28())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_28()
{
	return Global_1312837 == 10;
}

bool func_29()
{
	return Global_262145.f_15220;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_31(int iParam0)
{
	if (func_32(iParam0) == func_16())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_32(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_16();
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_34(iParam0, 0);
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_35(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_16() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_38() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_37()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_38()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_19(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_39()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_102;
}

bool func_40()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_41()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_43(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_45())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_16())
		{
			if (unk_0x40B8C182D63932FC(iVar1))
			{
				if (func_49(iVar1))
				{
					return 7;
				}
				if (func_48(iVar1))
				{
					return 15;
				}
				if (func_44(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (((((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 2) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 3)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 5)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	return (func_46() - 1);
}

int func_46()
{
	return func_47(unk_0xD803B885F5E47A62());
}

int func_47(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_16() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_48(int iParam0)
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

int func_49(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12566;
		
		case 155:
			return Global_262145.f_12591;
		
		case 153:
			return Global_262145.f_12555;
		
		case 163:
			return Global_262145.f_12531;
		
		case 160:
			return Global_262145.f_12544;
		
		case 154:
			return Global_262145.f_12601;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15047;
		
		case 172:
			return Global_262145.f_15066;
		
		case 148:
			return Global_262145.f_18277;
		
		case 179:
			return Global_262145.f_18285;
		
		case 201:
			return Global_262145.f_18299;
		
		case 200:
			return Global_262145.f_18339;
		
		case 211:
			return Global_262145.f_18368;
		
		case 194:
			return Global_262145.f_18380;
		
		case 193:
			return Global_262145.f_18391;
		
		case 210:
			return Global_262145.f_18403;
		
		case 205:
			return Global_262145.f_18409;
		
		case 199:
			return Global_262145.f_18422;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_51(int iParam0)
{
	return Global_1650640.f_11.f_147[func_52(iParam0)];
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 181:
			return 24;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		case 233:
			return 62;
		
		case 237:
			return 63;
		
		case 238:
			return 64;
		
		case 239:
			return 65;
		
		case 240:
			return 66;
		
		case 241:
			return 67;
		
		case 242:
			return 68;
		
		case 244:
			return 69;
		
		case 248:
			return 70;
		
		case 249:
			return 71;
		
		case 250:
			return 72;
		
		case 243:
			return 73;
		
		case 158:
			return 74;
		
		case 24:
			return 75;
		
		case 26:
			return 76;
		
		default:
	}
	return -1;
}

int func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_61(iParam0, bParam3, bParam4) || func_60(iParam1, bParam3, bParam4)) || func_54(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(2, iParam0, 0, bParam1, bParam2);
}

int func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_59(iParam0) - func_58(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_57(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_58(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62()] != 3)
		{
			iVar1 = (iVar1 - func_56(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1)
{
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(1, iParam0, 0, bParam1, bParam2);
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(0, iParam0, 0, bParam1, bParam2);
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_115(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_113(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_107(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_95(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 233:
			return func_88(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_79(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_76(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_75(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_71(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 158:
			return func_66(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 181:
			return func_63(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_65(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_64(iParam0, iParam2));
	return iVar0;
}

int func_64(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_65(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_70(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_67(iParam0, iParam2));
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_69(iParam1, 1))
			{
				vVar0 = { func_68(iParam1) };
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_68(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

bool func_69(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_16();
}

int func_70(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (!func_73(iParam0))
	{
		iVar0 = (iVar0 + func_72(iParam0, iParam2));
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_31(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_73(int iParam0)
{
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_78(iParam0, iParam1);
	if (func_77(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_77(int iParam0)
{
	return 1;
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	iVar0 = func_87(iParam0, iParam1);
	if (!func_86(iParam0))
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	if (iParam0 == 14 || ((((func_86(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_80(int iParam0, int iParam1)
{
	if (func_83(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_82(iParam0, iParam1);
			iVar2 = func_81(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_86(iParam0))
		{
			if (iVar0 > Global_262145.f_17914)
			{
				iVar0 = Global_262145.f_17914;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17913)
			{
				iVar0 = Global_262145.f_17913;
			}
			if (iVar0 > Global_262145.f_17912)
			{
				iVar0 = Global_262145.f_17912;
			}
		}
	}
	return iVar0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17951;
		
		case 10:
			return Global_262145.f_17976;
		
		default:
	}
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (func_86(iParam0))
	{
		if (iParam1 >= Global_262145.f_17915)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17952;
		
		case 10:
			return Global_262145.f_17977;
		
		default:
	}
	return 8;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_84()
{
	if (func_85() == func_16())
	{
		return 0;
	}
	return func_31(func_85());
}

int func_85()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_94(iParam0, iParam1, iParam2, iParam4);
	if (!func_93(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_90(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_89(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_93(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_92(iParam0))
	{
		iVar0 = func_92(iParam0);
	}
	else if (iVar0 < func_91(iParam0))
	{
		iVar0 = func_91(iParam0);
	}
	return iVar0;
}

int func_91(int iParam0)
{
	return 1;
}

int func_92(int iParam0)
{
	return 4;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_106(iParam0, iParam1, iParam2, iParam4);
	if (!func_105(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_97(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_96(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_104(iParam0))
	{
		iVar1 = func_103(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_102(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_101(iParam2))
		{
			iVar0 = func_101(iParam2);
		}
	}
	if (iVar0 > func_99(iParam0))
	{
		iVar0 = func_99(iParam0);
	}
	else if (iVar0 < func_98(iParam0))
	{
		iVar0 = func_98(iParam0);
	}
	return iVar0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_99(int iParam0)
{
	if (!func_104(iParam0))
	{
		if (func_105(iParam0))
		{
			if (func_100(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == func_16() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_105(int iParam0)
{
	if (func_104(iParam0) || func_102(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_112(iParam0, iParam1, iParam2, iParam3);
	if (!func_111(iParam0))
	{
		iVar0 = (iVar0 + func_109(iParam0, func_84() + 1, -1, iParam2));
	}
	if (func_108(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_110(iParam0))
	{
		if (iParam2 <= Global_262145.f_21206)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21207)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_111(iParam0))
	{
		if (iParam1 < Global_262145.f_21166)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_113(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_114(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_161(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_157(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_153(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_147(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
		
		case 233:
			return func_138(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_137(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_136(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_135(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_129(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_123(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_117(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_122(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_121(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_120(func_31(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_119(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_118(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_119(int iParam0, int iParam1)
{
	return func_118(iParam0, iParam1) > 0;
}

int func_120(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_121(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_128(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_127(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_126(func_31(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_124(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)
{
	return func_124(iParam0, iParam1) > 0;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_16())
			{
				if (func_69(iParam2, 1))
				{
					vVar0 = { func_68(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_73(iParam0))
		{
			iVar0 = (iVar0 + func_72(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_134(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_133(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_132(func_31(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_130(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	return func_130(iParam0, iParam1) > 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_77(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_137(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_86(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	return iVar0;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_93(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_90(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_143(iParam0, func_31(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_142(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_141(func_31(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_140(iParam0))
		{
			iVar0 = (iVar0 + func_139(iParam0));
		}
	}
	return iVar0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_139(iParam0) > 0;
}

int func_141(var uParam0, int iParam1)
{
	return 2;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_144(5326, -1, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_145(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_145(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_146();
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

int func_146()
{
	return Global_1312745;
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_105(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_97(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_152(iParam0, func_31(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_151(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_150(func_31(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_149(iParam0))
		{
			iVar0 = (iVar0 + func_148(iParam0));
		}
	}
	return iVar0;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_149(int iParam0)
{
	return func_148(iParam0) > 0;
}

int func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_100(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_100(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_151(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_152(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_109(iParam0, func_84() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_111(iParam0))
		{
			iVar0 = (iVar0 + func_109(iParam0, func_84() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_156(iParam0, func_84() + 1));
	}
	if (!bParam3)
	{
		if (func_155(iParam0))
		{
			iVar0 = (iVar0 + func_154(iParam0));
		}
	}
	return iVar0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_155(int iParam0)
{
	return func_154(iParam0) > 0;
}

int func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_160(iParam0, func_84() + 1, iParam2));
	iVar0 = (iVar0 + func_158(iParam0));
	return iVar0;
}

int func_158(int iParam0)
{
	if (func_159(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0, var uParam1, int iParam2)
{
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_189(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_186(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_183(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_180(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_177(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_176(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_175();
		
		case 218:
			return func_174();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_173(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_172(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_169(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_166(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_163(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_119(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_164(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_164(int iParam0, var uParam1)
{
	if (func_119(iParam0, uParam1))
	{
		return (func_118(iParam0, uParam1) + func_165(iParam0, uParam1));
	}
	return 0;
}

int func_165(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_166(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_167(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_167(int iParam0, int iParam1)
{
	if (func_125(iParam0, iParam1))
	{
		return (func_124(iParam0, iParam1) + func_168(iParam0, iParam1));
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_170(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1)
{
	if (func_131(iParam0, iParam1))
	{
		return (func_130(iParam0, iParam1) + func_171(iParam0, iParam1));
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_174()
{
	iVar0 = 32;
	return iVar0;
}

int func_175()
{
	iVar0 = 8;
	return iVar0;
}

int func_176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_140(iParam0))
		{
			iVar0 = (iVar0 + func_178(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_178(int iParam0, var uParam1)
{
	if (func_140(iParam0))
	{
		return (func_139(iParam0) + func_179(iParam0, uParam1));
	}
	return 0;
}

int func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_149(iParam0))
		{
			iVar0 = (iVar0 + func_181(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_181(int iParam0, int iParam1)
{
	if (func_149(iParam0))
	{
		return (func_148(iParam0) + func_182(iParam0, iParam1));
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_155(iParam0))
		{
			iVar0 = (iVar0 + func_184(iParam0));
		}
	}
	return iVar0;
}

int func_184(int iParam0)
{
	if (func_155(iParam0))
	{
		return (func_154(iParam0) + func_185(iParam0));
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_186(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_187(iParam0));
	return iVar0;
}

int func_187(int iParam0)
{
	if (func_159(iParam0))
	{
		if (func_188(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

bool func_190(int iParam0, int iParam1, bool bParam2)
{
	return func_21(iParam0, iParam1, bParam2) == -1;
}

int func_191(int iParam0)
{
	if (func_5(&(Global_2514754[iParam0])) && func_3(&(Global_2514754[iParam0]), Global_2514754.f_17[iParam0], 0))
	{
		func_192(&(Global_2514754[iParam0]));
		return 0;
	}
	return func_5(&(Global_2514754[iParam0]));
}

void func_192(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_193(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9)
{
	unk_0x7E60C62A7CE58FC8(iLocal_863, "SHOW_OVERLAY");
	func_195(sParam0);
	unk_0x7ACC3006A87F8B39(sParam1);
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		if (iParam6 != -1)
		{
			unk_0x6D99DF8263D35CE5(iParam6);
		}
		unk_0x6B012227B3921E18(sParam9);
		if (iParam8 != -1)
		{
			unk_0x6D99DF8263D35CE5(iParam8);
		}
	}
	else if (iParam6 != -1)
	{
		unk_0x6D99DF8263D35CE5(iParam6);
	}
	unk_0x779B34565F4D71B1();
	func_195(sParam2);
	func_195(sParam3);
	unk_0x7E60D21B163E9D56();
	if (bParam5)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	else if (bParam4)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	unk_0x5D96D8530B3D0904(&iLocal_116, 1);
	func_194(iParam7);
}

void func_194(int iParam0)
{
	if (iLocal_147 != iParam0)
	{
		iLocal_147 = iParam0;
	}
}

void func_195(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_196(int iParam0)
{
	return 0 == func_101(iParam0);
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar1 = func_199(iParam0, iParam1);
	uVar2 = func_198(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_198(int iParam0)
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

int func_199(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_146();
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

void func_200(int iParam0, bool bParam1)
{
	iVar0 = func_212(unk_0xD803B885F5E47A62());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_324[func_211(iParam0)];
	}
	if (!func_209(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1", 16);
		StringCopy(&Var5, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0", 16);
			Var5 = { func_9(iParam0) };
		}
		func_193("HAPP_SELL_T", &Var1, "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, &Var5);
	}
	else if (func_208())
	{
		func_193("HAPP_SELL_T", "HAPP_SELL_C3", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(230))
	{
		func_193("HAPP_SELL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (func_103(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_193("HAPP_SELL_T", "HAPP_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 4, -1, 0);
	}
	else
	{
		StringCopy(&Var9, "HAPP_SELL_C2", 16);
		StringCopy(&Var13, "", 16);
		iVar17 = -1;
		iVar18 = -1;
		if ((func_207() && func_205() != -1) || iParam0 != 8)
		{
			if (func_207())
			{
				iParam0 = func_205();
				iVar0 = uLocal_324[func_211(iParam0)];
			}
			iVar18 = func_203(iParam0, iVar0);
			StringCopy(&Var9, "HAPP_SELL_C0", 16);
			fVar19 = (func_202(iParam0, iVar0) * 100f);
			if (fVar19 > 0f)
			{
				iVar17 = func_201(iParam0, iVar0);
				iVar18 = (iVar18 + iVar17);
				StringCopy(&Var9, "HAPP_SELL_C1", 16);
				iVar17 = round(fVar19);
			}
			Var13 = { func_9(iParam0) };
		}
		else if (iParam0 == 8)
		{
			unk_0x5D96D8530B3D0904(&iLocal_116, 11);
		}
		func_10(iParam0);
		if (iVar17 > 0)
		{
			unk_0x5D96D8530B3D0904(&iLocal_116, 12);
			func_193("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar17, 1, iVar18, &Var13);
		}
		else
		{
			func_193("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar18, 1, iVar17, &Var13);
		}
	}
	func_8();
}

int func_201(int iParam0, int iParam1)
{
	fVar0 = func_202(iParam0, iParam1);
	fVar1 = (to_float(func_203(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

float func_202(int iParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_203(int iParam0, int iParam1)
{
	return (func_204(iParam0) * iParam1);
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		
		case 0:
			return Global_262145.f_22307;
		
		case 1:
			return Global_262145.f_22308;
		
		case 2:
			return Global_262145.f_22309;
		
		case 3:
			return Global_262145.f_22310;
		
		case 4:
			return Global_262145.f_22311;
		
		case 5:
			return Global_262145.f_22312;
		
		case 6:
			return Global_262145.f_22313;
		
		case 7:
			return Global_262145.f_22314;
		
		default:
	}
	return 0;
}

int func_205()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_324[iVar0] > 0 && iVar0 != 0)
		{
			return func_206(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 6;
		
		case 2:
			return 2;
		
		case 3:
			return 5;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 4;
		
		case 7:
			return 7;
		
		case 8:
			return 3;
		
		default:
	}
	return -1;
}

bool func_207()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_116, 10);
}

int func_208()
{
	if (func_5(&(Global_2514754.f_26)) && func_3(&(Global_2514754.f_26), Global_2514754.f_28, 0))
	{
		func_192(&(Global_2514754.f_26));
		return 0;
	}
	return func_5(&(Global_2514754.f_26));
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return !func_210(unk_0xD803B885F5E47A62());
		
		default:
	}
	return uLocal_324[func_211(iParam0)] > 0;
	return 0;
}

bool func_210(int iParam0)
{
	return func_212(iParam0) == 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 6:
			return 1;
		
		case 2:
			return 2;
		
		case 5:
			return 3;
		
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 4:
			return 6;
		
		case 7:
			return 7;
		
		case 3:
			return 8;
		
		default:
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_16() && func_213(iParam0))
	{
		return Global_1590535[iParam0].f_274.f_264.f_3;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 13:
			return 8;
			break;
		
		case 3:
		case 14:
		case 22:
			return 6;
			break;
		
		case 4:
		case 15:
		case 23:
			return 2;
			break;
		
		case 5:
		case 16:
		case 24:
			return 5;
			break;
		
		case 6:
		case 17:
		case 25:
			return 0;
			break;
		
		case 7:
		case 18:
		case 26:
			return 1;
			break;
		
		case 8:
		case 19:
		case 27:
			return 4;
			break;
		
		case 9:
		case 20:
		case 28:
			return 7;
			break;
		
		case 10:
		case 21:
		case 29:
			return 3;
			break;
	}
	return -1;
}

void func_215()
{
	switch (func_262())
	{
		case 2:
			if (func_241(0))
			{
				func_240();
				unk_0x4D7F4CC43D4D0DE3(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_220(229, 0);
			}
			else
			{
				func_193("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 1:
			if (func_241(1))
			{
				func_217();
				unk_0x4D7F4CC43D4D0DE3(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_220(230, 0);
			}
			else
			{
				func_193("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_263();
			func_200(func_216(), 1);
			return;
		
		case 5:
			if (!func_12(229))
			{
				func_193("HAPP_T1", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			else if (func_241(0))
			{
				func_240();
				unk_0x4D7F4CC43D4D0DE3(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_220(229, 1);
				return;
			}
			else
			{
				func_193("HAPP_T1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		default:
			func_264();
			break;
	}
	func_263();
}

int func_216()
{
	return iLocal_148;
}

void func_217()
{
	func_218(1, 6114);
}

void func_218(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_144(iParam1, -1, 0);
	func_219(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_220(int iParam0, bool bParam1)
{
	iVar0 = func_216();
	if (iVar0 == 8 && iParam0 == 229)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 8);
		func_239(18);
	}
	else
	{
		func_238(18);
	}
	if (bParam1)
	{
		func_237(26);
	}
	if ((iParam0 == 230 && func_207()) && iVar0 == 8)
	{
		iVar0 = func_205();
	}
	Global_1674535.f_53 = 0;
	func_221(iParam0, 0, iVar0);
	func_1();
	Global_1676237 = 1;
	unk_0x5D96D8530B3D0904(&iLocal_116, 2);
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_236(iParam1, uVar0);
	func_222(iParam0, -1);
}

void func_222(int iParam0, int iParam1)
{
	if (func_235() || !func_234(1))
	{
		if (!func_232(unk_0xD803B885F5E47A62(), 0))
		{
			func_231(iParam0);
			func_223(iParam0, func_227(1, 1), func_226(), func_225(), func_224(), iParam1);
		}
	}
}

void func_223(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	Var0 = 848786118;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iParam1);
	}
}

var func_224()
{
	return Global_2537071.f_5124.f_341;
}

var func_225()
{
	return Global_2537071.f_5124.f_340;
}

var func_226()
{
	return Global_2537071.f_5124.f_339;
}

int func_227(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_230(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_228(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_229(-1, 0) == 8;
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

int func_229(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_146();
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

int func_230(int iParam0, bool bParam1, bool bParam2)
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

void func_231(var uParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_32 = uParam0;
}

int func_232(int iParam0, int iParam1)
{
	if (func_233(iParam0, 0))
	{
		return func_42(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_234(bool bParam0)
{
	return func_69(unk_0xD803B885F5E47A62(), bParam0);
}

int func_235()
{
	return func_15(unk_0xD803B885F5E47A62());
}

void func_236(var uParam0, var uParam1)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_230 = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_230.f_22 = uParam1;
}

void func_237(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

void func_238(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_239(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_240()
{
	func_218(1, 6112);
}

bool func_241(bool bParam0)
{
	if (!func_261())
	{
		return 1;
	}
	while (!func_242(&iVar0, bParam0))
	{
		func_321();
		wait(0);
	}
	func_321();
	return iVar0 == 2;
}

bool func_242(var uParam0, bool bParam1)
{
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = 244232650;
	}
	else
	{
		iVar0 = 357925343;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_260() != -1)
			{
				return 0;
			}
			iVar1 = unk_0x12AB0310C2281427("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_256(78225582, -1799524201, iVar0, -1018905335, 1, 0, 1, 4, iVar1, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_250())
			{
			}
			else
			{
				*uParam0 = 3;
				func_246(func_260());
			}
			break;
		
		case 1:
			if (func_245(func_260()))
			{
				if (func_244(func_260()) == 2)
				{
					*uParam0 = 2;
					func_246(func_260());
					func_243(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_246(func_260());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_243(int iParam0)
{
	Global_4264526 = iParam0;
}

int func_244(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_249(iParam0))
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
		func_247(&(Global_4263954[iParam0]));
	}
}

void func_247(var uParam0)
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
	func_248(&(uParam0->f_14));
	func_248(&(uParam0->f_14.f_13));
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

void func_248(var uParam0)
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

int func_249(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_250()
{
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_260();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_146()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_255(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_254(iVar2);
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
				func_251(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_251(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_253(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_252();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_252()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_253(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_254(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_255(int iParam0, int iParam1, int iParam2)
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

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_146()) || unk_0xDD2EE1F5DA6A6AB0())
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
	iVar1 = func_260();
	if (iVar1 == -1)
	{
		if (!func_258(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_257(iParam1))
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

int func_257(int iParam0)
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

int func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_146()) || unk_0xDD2EE1F5DA6A6AB0())
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
		*iParam0 = func_259(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_261())
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
				func_251(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_260()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_254(iVar0) != 2147483647)
		{
			if (func_249(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_261()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_262()
{
	return iLocal_147;
}

void func_263()
{
	unk_0x7E60C62A7CE58FC8(iLocal_863, "HIDE_OVERLAY");
	unk_0x7E60D21B163E9D56();
	func_194(0);
	unk_0x0674E58A79778E99(&iLocal_116, 1);
}

void func_264()
{
	unk_0x4D7F4CC43D4D0DE3(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}

void func_265()
{
	if (func_266())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 0))
		{
			unk_0x7E60C62A7CE58FC8(iLocal_863, "GET_CURRENT_SELECTION");
			uLocal_864 = unk_0x7A8BB56B212464AC();
			unk_0x5D96D8530B3D0904(&iLocal_116, 0);
		}
	}
}

int func_266()
{
	if (unk_0xBFC0798A6E3417F9(2, 201) || unk_0xBFC0798A6E3417F9(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_267()
{
	if (iLocal_120 != func_305())
	{
		if (!func_5(&uLocal_157))
		{
			func_4(&uLocal_157, 0, 0);
		}
		else if (func_3(&uLocal_157, 750, 0))
		{
			func_192(&uLocal_157);
			func_268();
		}
	}
}

void func_268()
{
	func_295();
	if (func_294())
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 10);
	}
	func_274();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_273(iVar0);
		iVar0++;
	}
	func_272();
	func_269();
	func_4(&uLocal_153, 0, 0);
}

void func_269()
{
	if (func_208())
	{
		unk_0x7E60C62A7CE58FC8(iLocal_863, "UPDATE_SELL_COOLDOWN");
		unk_0x3CAEA85DA607305E(func_271(Global_2514754.f_26, Global_2514754.f_28));
		unk_0x3CAEA85DA607305E(func_270(Global_2514754.f_28));
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(iLocal_863, "UPDATE_SELL_COOLDOWN");
		unk_0x3CAEA85DA607305E(0);
		unk_0x3CAEA85DA607305E(0);
		unk_0x7E60D21B163E9D56();
	}
}

int func_270(int iParam0)
{
	return (iParam0 / 1000);
}

int func_271(int iParam0, var uParam1, int iParam2)
{
	iVar0 = (iParam2 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_272()
{
	unk_0x7E60C62A7CE58FC8(iLocal_863, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_206(iVar0);
		iVar2 = iVar1;
		if (func_191(iVar1))
		{
			unk_0x3CAEA85DA607305E(func_271(Global_2514754[iVar2], Global_2514754.f_17[iVar2]));
		}
		else
		{
			unk_0x3CAEA85DA607305E(0);
		}
		iVar0++;
	}
	unk_0x7E60D21B163E9D56();
}

void func_273(int iParam0)
{
	iVar0 = uLocal_324[iParam0];
	iVar1 = 50;
	iVar2 = func_203(func_206(iParam0), iVar0);
	iVar3 = round((func_202(func_206(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = func_201(func_206(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		unk_0x5D96D8530B3D0904(&iLocal_116, 14);
	}
	unk_0x7E60C62A7CE58FC8(iLocal_863, "ADD_CARGO");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x7C19E5E4784BD7CF(to_float(iVar3));
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x7E60D21B163E9D56();
}

void func_274()
{
	sVar0 = func_285(unk_0xD803B885F5E47A62());
	iVar1 = 0;
	iVar2 = func_284();
	iVar3 = func_283();
	iVar4 = func_282();
	iVar5 = func_281();
	iVar6 = func_280();
	iLocal_120 = func_305();
	iVar7 = 50;
	iVar8 = (iLocal_120 * func_204(8));
	fVar9 = func_278(iVar2, func_279());
	fVar10 = func_278(iVar3, func_277());
	fVar9 = func_276(fVar9, 0f, 100f);
	fVar10 = func_276(fVar10, 0f, 100f);
	if (func_275(iLocal_145))
	{
		iVar1 = 1;
	}
	if (func_207())
	{
		iVar11 = func_205();
		iVar8 = (iLocal_120 * func_204(iVar11));
		fVar12 = (func_202(iVar11, iLocal_120) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = func_201(iVar11, iLocal_120);
			iVar8 = (iVar8 + iVar13);
		}
	}
	unk_0x7E60C62A7CE58FC8(iLocal_863, "SET_STATS");
	unk_0x25D53D645C0957E2(sVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x7C19E5E4784BD7CF(fVar9);
	unk_0x3CAEA85DA607305E(iVar3);
	unk_0x7C19E5E4784BD7CF(fVar10);
	unk_0x3CAEA85DA607305E(iVar4);
	unk_0x3CAEA85DA607305E(iVar5);
	unk_0x3CAEA85DA607305E(iVar6);
	unk_0x3CAEA85DA607305E(iLocal_120);
	unk_0x3CAEA85DA607305E(iVar7);
	unk_0x3CAEA85DA607305E(iVar8);
	unk_0x7E60D21B163E9D56();
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

float func_276(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_277()
{
	return func_144(6114, -1, 0);
}

float func_278(int iParam0, int iParam1)
{
	return ((to_float(iParam0) / to_float(iParam1)) * 100f);
}

int func_279()
{
	return func_144(6112, -1, 0);
}

int func_280()
{
	return func_144(6117, -1, 0);
}

int func_281()
{
	return func_144(6116, -1, 0);
}

int func_282()
{
	return func_144(6118, -1, 0);
}

int func_283()
{
	return func_144(6115, -1, 0);
}

int func_284()
{
	return func_144(6113, -1, 0);
}

char* func_285(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_293(&(Global_1628237[iParam0].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120)
	{
		sVar0 = func_289(iParam0, 0);
		return sVar0;
	}
	if (((func_14(iParam0, 28) || func_14(unk_0xD803B885F5E47A62(), 28)) || func_288(iParam0)) && !func_286(iParam0))
	{
		return func_289(iParam0, 0);
	}
	iVar1 = func_32(iParam0);
	if (iVar1 != func_16())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_289(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_16())
	{
		sVar0 = func_293(&(Global_1628237[iVar1].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_289(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_286(int iParam0)
{
	Var0 = { func_287(iParam0) };
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

struct<13> func_287(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_288(int iParam0)
{
	if (iParam0 != func_16())
	{
		Var0 = { func_287(iParam0) };
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

char* func_289(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_291(iParam0, 1))
		{
			return func_290();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_290()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_291(int iParam0, bool bParam1)
{
	return func_292(iParam0, bParam1, 1);
}

int func_292(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_20(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_16() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_293(var uParam0)
{
	return uParam0;
}

bool func_294()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_324[iVar0] > 0)
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return iVar1 <= 2;
}

void func_295()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_206(iVar0);
		uLocal_324[iVar0] = func_296(iVar1);
		iVar0++;
	}
}

int func_296(int iParam0)
{
	if (!func_303())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_212(unk_0xD803B885F5E47A62());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_298(func_299(func_302(iVar0), -1, -1));
		if (func_297(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar0 = 0;
	iVar1 = func_301(iParam0, iParam1);
	uVar2 = func_300(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_300(int iParam0)
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

int func_301(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_146();
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

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_303()
{
	return func_304() != 0;
}

int func_304()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_264;
}

int func_305()
{
	return func_212(unk_0xD803B885F5E47A62());
}

void func_306()
{
	if (func_5(&uLocal_153))
	{
		if (func_3(&uLocal_153, 1000, 0))
		{
			func_272();
			func_269();
			func_307(&uLocal_153, 0, 0);
		}
	}
	else
	{
		func_4(&uLocal_153, 0, 0);
	}
}

void func_307(var uParam0, bool bParam1, bool bParam2)
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

void func_308()
{
	iLocal_117++;
	if (iLocal_117 == 32)
	{
		iLocal_117 = 0;
	}
	iVar0 = iLocal_117;
	if (iVar0 == unk_0xD803B885F5E47A62())
	{
		return;
	}
	if (((unk_0x40B8C182D63932FC(iVar0) && func_213(iVar0)) && !func_69(iVar0, 0)) && !func_315())
	{
		if (!func_314())
		{
			func_311(iVar0, iLocal_117);
		}
	}
	else if (func_314())
	{
		func_309();
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_121, iLocal_117))
	{
		if (!func_15(iVar0) && func_314())
		{
			func_309();
		}
	}
	else if (func_15(iVar0) && func_314())
	{
		func_309();
	}
}

void func_309()
{
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_334[iVar0] == iLocal_117)
		{
			iLocal_334[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		unk_0x7E60C62A7CE58FC8(iLocal_863, "REMOVE_ACTIVE_ORGANISATION");
		unk_0x25D53D645C0957E2(&(Local_366[iVar1]));
		unk_0x7E60D21B163E9D56();
		StringCopy(&(Local_366[iVar1]), "", 64);
		unk_0x0674E58A79778E99(&iLocal_121, iLocal_117);
		func_310(unk_0x117658E336116132(iLocal_117));
	}
}

void func_310(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_133[iVar0] == iParam0)
		{
			iLocal_122[iVar0] = 0;
			iLocal_133[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_311(int iParam0, int iParam1)
{
	iVar0 = 0;
	sVar1 = unk_0x6E524813889AECF8(iParam0);
	if (unk_0x7F8A39872A07D2CE(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 7;
	if (func_15(iParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar117 = Global_1628237[iParam1].f_11.f_11[iVar2];
			if (iVar117 != func_16())
			{
				StringCopy(&(Var4[iVar2]), unk_0x6E524813889AECF8(iVar117), 64);
			}
			else
			{
				StringCopy(&(Var4[iVar2]), "", 64);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (unk_0xEA6BC48857E0AC4C(&(Var4[iVar2])))
			{
				if (iVar2 != iVar3)
				{
					iVar118 = iVar2;
					while (iVar118 <= (iVar3 - 1))
					{
						if (!unk_0xEA6BC48857E0AC4C(&(Var4[iVar118])))
						{
							Var4[iVar2] = { Var4[iVar118] };
							StringCopy(&(Var4[iVar118]), "", 64);
							iVar118 = (iVar3 - 1);
						}
						iVar118++;
					}
				}
			}
			iVar2++;
		}
		unk_0x7E60C62A7CE58FC8(iLocal_863, "ADD_ACTIVE_ORGANISATION");
		unk_0x25D53D645C0957E2(func_313(iParam0));
		unk_0x25D53D645C0957E2(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			unk_0x25D53D645C0957E2(&(Var4[iVar2]));
			iVar2++;
		}
		unk_0x7E60D21B163E9D56();
		sVar1 = func_313(iParam0);
		func_312(iParam0, func_31(iParam0));
		unk_0x5D96D8530B3D0904(&iLocal_121, iParam1);
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(iLocal_863, "ADD_ACTIVE_ORGANISATION");
		unk_0x25D53D645C0957E2(sVar1);
		unk_0x7E60D21B163E9D56();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_334[iVar0] == -1)
		{
			iLocal_334[iVar0] = iParam1;
			StringCopy(&(Local_366[iVar0]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_312(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_133[iVar0] == -1)
		{
			iLocal_122[iVar0] = iParam1;
			iLocal_133[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

char* func_313(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		iVar0 = func_32(iParam0);
		if (iVar0 != func_16())
		{
			sVar1 = func_293(&(Global_1628237[iVar0].f_11.f_104));
			if (unk_0xEA6BC48857E0AC4C(sVar1))
			{
				return func_289(iVar0, 0);
			}
			else
			{
				return sVar1;
			}
		}
	}
	return func_285(iParam0);
}

int func_314()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_334[iVar0] == iLocal_117)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_315()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_133[iVar0] == iLocal_117)
		{
			if (!func_15(unk_0x117658E336116132(iLocal_117)))
			{
				return 1;
			}
			else
			{
				return iLocal_122[iVar0] != func_31(unk_0x117658E336116132(iLocal_117));
			}
		}
		iVar0++;
	}
	return 0;
}

void func_316()
{
	func_319(2, 205, 1);
	if (unk_0xBFC0798A6E3417F9(2, 205))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(205), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_146 == 1)
		{
			iLocal_146 = 0;
			unk_0x4D7F4CC43D4D0DE3(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
		else if (iLocal_146 == 2)
		{
			iLocal_146 = 1;
			unk_0x4D7F4CC43D4D0DE3(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
	}
	func_319(2, 206, 1);
	if (unk_0xBFC0798A6E3417F9(2, 206))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(206), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_146 == 0)
		{
			iLocal_146 = 1;
			unk_0x4D7F4CC43D4D0DE3(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
		else if (iLocal_146 == 1)
		{
			iLocal_146 = 2;
			unk_0x4D7F4CC43D4D0DE3(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		func_319(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_319(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_RELEASE_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_RELEASE_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		func_319(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_319(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	func_319(2, 189, 1);
	if (unk_0xBFC0798A6E3417F9(2, 189))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_319(2, 190, 1);
	if (unk_0xBFC0798A6E3417F9(2, 190))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_319(2, 201, 1);
	if (unk_0xBFC0798A6E3417F9(2, 201))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_319(2, 202, 1);
	if (unk_0xBFC0798A6E3417F9(2, 202))
	{
		func_317();
	}
	func_319(2, 203, 1);
	if (unk_0xBFC0798A6E3417F9(2, 203))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_319(2, 204, 1);
	if (unk_0xBFC0798A6E3417F9(2, 204))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		unk_0x7E60C62A7CE58FC8(iLocal_863, "SET_MOUSE_INPUT");
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 239));
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 240));
		unk_0x7E60D21B163E9D56();
		func_319(2, 237, 1);
		if (unk_0xBFC0798A6E3417F9(2, 237))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_319(2, 238, 1);
		if (unk_0xBFC0798A6E3417F9(2, 238))
		{
			func_317();
		}
	}
	else
	{
		func_319(2, 195, 1);
		func_319(2, 196, 1);
		iVar0 = unk_0x0DED1C1B8250FA57(2, 195);
		iVar1 = unk_0x0DED1C1B8250FA57(2, 196);
		if (((iVar0 != 127 || iLocal_865 != 127) || iVar1 != 127) || iLocal_866 != 127)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_863, "SET_ANALOG_STICK_INPUT");
			iLocal_865 = iVar0;
			iLocal_866 = iVar1;
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(iLocal_865);
			unk_0x3CAEA85DA607305E(iLocal_866);
			unk_0x7E60D21B163E9D56();
		}
	}
	func_319(2, 197, 1);
	func_319(2, 198, 1);
	iVar2 = unk_0x0DED1C1B8250FA57(2, 197);
	iVar3 = unk_0x0DED1C1B8250FA57(2, 198);
	if (((iVar2 != 127 || iLocal_867 != 127) || iVar3 != 127) || iLocal_868 != 127)
	{
		bVar4 = (unk_0x06F8112AA79C53D9(2, 242) || unk_0x7FEE810EE9E768EB(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x06F8112AA79C53D9(2, 241) || unk_0x7FEE810EE9E768EB(2, 241));
		}
		unk_0x7E60C62A7CE58FC8(iLocal_863, "SET_ANALOG_STICK_INPUT");
		iLocal_867 = iVar2;
		iLocal_868 = iVar3;
		unk_0x1200CC973A2399C8(false);
		unk_0x3CAEA85DA607305E(iLocal_867);
		unk_0x3CAEA85DA607305E(iLocal_868);
		unk_0x1200CC973A2399C8(bVar4);
		unk_0x7E60D21B163E9D56();
	}
	if ((unk_0xBFC0798A6E3417F9(2, 204) || unk_0xD245978525608929(2, 204)) && !unk_0x91E3F625EF57450D(2))
	{
		func_389(0, 1);
	}
}

void func_317()
{
	if (!func_376())
	{
		func_389(0, 1);
	}
	if (iLocal_146 == 0)
	{
		if (!func_318())
		{
			func_389(0, 1);
		}
	}
	else if (!func_318())
	{
		iLocal_146 = 0;
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SHOW_SCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x4D7F4CC43D4D0DE3(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		return;
	}
	if (func_318())
	{
		func_263();
	}
	else
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_863, "SET_INPUT_EVENT", to_float(202), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}

bool func_318()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_116, 1);
}

void func_319(int iParam0, int iParam1, int iParam2)
{
	if (!func_320())
	{
		unk_0x558EC149EB2BC0A2(iParam0, iParam1);
		unk_0xEAB026E686C0D991(iParam0, iParam1, iParam2);
	}
}

bool func_320()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

void func_321()
{
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0xEF6276132B396452(0f, 1065353216);
	unk_0x2FB9A57162E54BAB(0f);
	func_335();
	if (Global_76622)
	{
		unk_0x73591FF5CCBBB2EA(4);
		unk_0x73591FF5CCBBB2EA(5);
		unk_0x73591FF5CCBBB2EA(13);
		unk_0x73591FF5CCBBB2EA(3);
	}
	unk_0xB8E3919889462ACD();
	func_319(2, 199, 1);
	unk_0xD9ACBBA59FD5A09E(1);
	func_334(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(iLocal_863, 255, 255, 255, 255, 0);
	func_332();
	func_325(0);
	func_322(1);
	Global_1694834.f_5 = unk_0xF4CCC8CB6DE7F1AE();
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		func_324();
	}
	func_323(4, -1);
	func_323(6, -1);
	func_323(7, -1);
	func_323(3, -1);
	func_323(1, -1);
	func_323(2, -1);
	func_323(11, -1);
	func_323(13, -1);
	func_323(14, -1);
	func_323(16, -1);
}

void func_323(int iParam0, int iParam1)
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

void func_324()
{
	Global_2537071.f_4532 = 0;
}

void func_325(int iParam0)
{
	if (func_331())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_330(0))
		{
			func_326(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_326(int iParam0)
{
	if (func_331())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_329())
		{
			func_328(1, 1);
		}
		else
		{
			func_328(0, 0);
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
	if (!func_327())
	{
		Global_19486.f_1 = 3;
	}
}

int func_327()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_328(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_330(0))
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

bool func_329()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_330(int iParam0)
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

bool func_331()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_332()
{
	unk_0xC2127C0F64D6A3B9();
	func_333();
}

void func_333()
{
	Global_22211.f_134 = 1;
}

void func_334(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_335()
{
	func_336(1);
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x5EEBDFEE72949D59(0);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
	}
}

void func_336(bool bParam0)
{
	if (bParam0)
	{
		if (func_337())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_337()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_338()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 9))
	{
		if (!func_318())
		{
			if (!func_376())
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 13);
				func_193("HAPP_T1", "HAPP_D1", "HAPP_SU", "", 0, 0, -1, 5, -1, 0);
				if ((!func_343(2) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, 2)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 13))
				{
					func_342("HAPP_HELP_3", 14000);
					unk_0x5D96D8530B3D0904(&Global_1676231, 2);
					func_339(2);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 9);
			}
		}
	}
}

void func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_340(15967);
			break;
		
		case 1:
			func_340(15970);
			break;
		
		case 2:
			func_340(15973);
			break;
		
		case 3:
			func_340(15976);
			break;
		
		case 4:
			func_340(15979);
			break;
		
		case 5:
			func_340(15982);
			break;
		
		case 6:
			func_340(15985);
			break;
		
		case 7:
			func_340(15988);
			break;
		
		case 8:
			func_340(15991);
			break;
	}
}

void func_340(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_197(iVar1, -1, -1))
		{
			func_341(iVar1, 1, -1, 1);
			return;
		}
		iVar0++;
	}
}

int func_341(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_146();
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

void func_342(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_344(15967);
		
		case 1:
			return func_344(15970);
		
		case 2:
			return func_344(15973);
		
		case 3:
			return func_344(15976);
		
		case 4:
			return func_344(15979);
		
		case 5:
			return func_344(15982);
		
		case 6:
			return func_344(15985);
		
		case 7:
			return func_344(15988);
		
		case 8:
			return func_344(15991);
		
		default:
	}
	return 0;
}

int func_344(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_197(iVar1, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_345()
{
	iVar5 = 8 + 1;
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 7) && !func_350())
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar6 = iVar4;
			if (func_349(iVar6))
			{
				Var0 = { func_348(iVar6) };
				iLocal_119 = func_347(iVar6);
				unk_0x5D96D8530B3D0904(&Global_1676231, iVar4);
				func_339(iVar6);
			}
			else
			{
				iVar4++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 7) && !unk_0xEA6BC48857E0AC4C(&Var0))
	{
		func_342(&Var0, iLocal_119);
		unk_0x5D96D8530B3D0904(&iLocal_116, 7);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 7))
	{
		if (!func_5(&uLocal_155))
		{
			func_4(&uLocal_155, 0, 0);
		}
		else if (func_3(&uLocal_155, iLocal_119, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_116, 7);
			iLocal_119 = 0;
			func_192(&uLocal_155);
			if (func_346())
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 8);
			}
		}
	}
}

int func_346()
{
	if (((((((func_343(0) && func_343(1)) && func_343(2)) && func_343(3)) && func_343(4)) && func_343(6)) && func_343(7)) && func_343(8))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 14000;
		
		case 1:
			return 15000;
		
		case 2:
			return 14000;
		
		case 3:
			return 14500;
		
		case 4:
			return 14000;
		
		case 5:
			return 14000;
		
		case 6:
			return 14000;
		
		case 7:
			return 15000;
		
		case 8:
			return 14500;
		
		default:
	}
	return 0;
}

struct<4> func_348(int iParam0)
{
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9", 16);
			break;
	}
	return Var0;
}

int func_349(int iParam0)
{
	iVar0 = iParam0;
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 11))
			{
				return 1;
			}
			break;
		
		case 1:
			if ((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 12))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 13))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 9)) && iLocal_146 == 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if ((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && iLocal_146 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && iLocal_146 == 1) && (unk_0xEAE0D21A50E6C7F4(Global_1676231, 4) || func_343(4)))
			{
				return 1;
			}
			break;
		
		case 6:
			if ((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && iLocal_146 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && iLocal_146 == 2) && (unk_0xEAE0D21A50E6C7F4(Global_1676231, 6) || func_343(6)))
			{
				return 1;
			}
			break;
		
		case 8:
			if (((((!func_343(iParam0) && !unk_0xEAE0D21A50E6C7F4(Global_1676231, iVar0)) && unk_0xEAE0D21A50E6C7F4(iLocal_116, 14)) && iLocal_146 == 2) && (unk_0xEAE0D21A50E6C7F4(Global_1676231, 6) || func_343(6))) && (unk_0xEAE0D21A50E6C7F4(Global_1676231, 7) || func_343(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_350()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_351()
{
	if (iLocal_118 != -1)
	{
		func_352(iLocal_118);
	}
}

void func_352(int iParam0)
{
	if (func_353(&uLocal_159, "SMGCAUD", func_373(iParam0), 8, 0, 0, 0))
	{
		iLocal_118 = -1;
	}
}

bool func_353(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_372(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_354(sParam2, iParam3, 0);
}

int func_354(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x5CEB4DB888A62073(0);
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
					func_371();
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
		if (func_370(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_369();
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
				func_361();
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
				if (func_360())
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
			if (func_327())
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
			func_359();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_358();
		func_355();
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
		func_371();
	}
	return 0;
}

void func_355()
{
	if (!func_356())
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

int func_356()
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
	if (func_357(unk_0xD803B885F5E47A62()))
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

bool func_357(int iParam0)
{
	return func_14(iParam0, 20);
}

void func_358()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0);
	Global_20805 = 1;
}

void func_359()
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

int func_360()
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

void func_361()
{
	if (func_368(14))
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
		Global_19486 = func_362();
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

var func_362()
{
	func_363();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_363()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_366(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_365(unk_0x16F2683693E537C9());
			if (func_364(iVar0) && (!func_368(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_364(Global_111638.f_2358.f_539.f_4321))
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

bool func_364(int iParam0)
{
	return iParam0 < 3;
}

int func_365(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_366(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_366(int iParam0)
{
	if (func_364(iParam0))
	{
		return func_367(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_367(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_368(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_369()
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

bool func_370(int iParam0, int iParam1)
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

void func_371()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(1);
		Global_20805 = 6;
		return;
	}
}

void func_372(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

char* func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SMGC_LAPTUT1";
		
		case 1:
			return "SMGC_LAPTUT2";
		
		case 2:
			return "SMGC_LAPTUT3";
		
		default:
	}
	return "SMGC_LAPTUT1";
}

void func_374()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 4) && !func_350())
	{
		if (iLocal_146 == 0)
		{
			if (!func_197(15963, -1, -1))
			{
				bVar0 = true;
				iLocal_119 = 9000;
				iLocal_118 = 0;
				func_341(15963, 1, -1, 1);
			}
		}
		else if (iLocal_146 == 2)
		{
			if (!func_197(15964, -1, -1))
			{
				bVar0 = true;
				iLocal_119 = 9000;
				iLocal_118 = 2;
				func_341(15964, 1, -1, 1);
			}
		}
		else if (iLocal_146 == 1)
		{
			if (!func_197(15965, -1, -1))
			{
				bVar0 = true;
				iLocal_119 = 9000;
				iLocal_118 = 1;
				func_341(15965, 1, -1, 1);
			}
		}
	}
	if (bVar0)
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 4);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 4))
	{
		if (!func_5(&uLocal_151))
		{
			func_4(&uLocal_151, 0, 0);
		}
		else if (func_3(&uLocal_151, iLocal_119, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_116, 4);
			iLocal_119 = 0;
			func_192(&uLocal_151);
			if (func_375())
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 5);
			}
		}
	}
}

int func_375()
{
	if ((func_197(15963, -1, -1) && func_197(15964, -1, -1)) && func_197(15965, -1, -1))
	{
		return 1;
	}
	return 0;
}

bool func_376()
{
	return func_197(15966, -1, -1);
}

void func_377()
{
	if (!unk_0x8CD06866876216F2())
	{
		func_389(0, 1);
	}
	else if (func_320())
	{
		func_389(0, 1);
	}
	else if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		func_389(0, 1);
	}
}

bool func_378()
{
	return Global_73825;
}

void func_379()
{
	func_377();
	iLocal_863 = unk_0xB01F55A0FD1CFD49("HANGAR_CARGO");
	while (!unk_0x83D8570832F172A7(iLocal_863))
	{
		wait(0);
	}
	func_326(1);
	func_387(1);
	func_386();
	unk_0x56FCE5C6DA4AA600();
	func_385(1);
	if (unk_0x2EBF608FFE6CA406(3) || Global_2537071.f_1852)
	{
		if (Global_2537071.f_1852)
		{
		}
		func_389(0, 1);
	}
	func_385(1);
	iLocal_145 = func_304();
	func_268();
	func_382();
	if (func_346())
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 8);
	}
	func_381();
	if (func_376())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_380(1, 1, 1, 1);
	}
	if (!unk_0x562F77A7F33D2E46("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0x8BC9595FD2792B5D("GTAO_Computer_Screen_Active_Scene");
	}
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_381()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_334[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_133[iVar0] = -1;
		iLocal_122[iVar0] = 0;
		iVar0++;
	}
}

void func_382()
{
	if (func_375())
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 5);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 4);
		iLocal_119 = 800;
		func_384(1);
		func_383(&uLocal_159, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_383(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_384(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

void func_385(int iParam0)
{
	if (Global_73825 != iParam0)
	{
		Global_73825 = iParam0;
	}
}

void func_386()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_387(bool bParam0)
{
	if (bParam0)
	{
		func_388();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_330(0))
		{
			func_326(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_388()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_389(int iParam0, bool bParam1)
{
	unk_0xE17FDF9E3068281B(&iLocal_863);
	func_385(iParam0);
	func_387(0);
	func_390();
	unk_0x5FEA2B013EBED3F6(1000);
	if (bParam1)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_380(0, 1, 1, 1);
	}
	unk_0x17D339215F817B98();
	if (unk_0x562F77A7F33D2E46("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0x8910D3D58E0132B8("GTAO_Computer_Screen_Active_Scene");
	}
	Global_1694834.f_5 = -1;
	unk_0x10FAF14A60A0DBE1();
}

void func_390()
{
	if (!Global_1312575)
	{
		return;
	}
	func_391();
}

void func_391()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

