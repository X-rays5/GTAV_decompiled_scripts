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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_70 = 318;
	iLocal_71 = 1;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_50();
	}
	wait(0);
	func_23();
	func_22();
	func_18();
	while (iLocal_71 && func_8(2, 0))
	{
		wait(0);
		switch (iLocal_69)
		{
			case 0:
				if (func_6())
				{
					iLocal_69 = 1;
				}
				break;
			
			case 1:
				if (func_4())
				{
					iLocal_69 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_69 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_50();
}

void func_1()
{
	iLocal_71 = 0;
}

int func_2()
{
	if (!func_3(&uVar0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_72, false) };
		fVar4 = vdist2(vLocal_176 + vLocal_181, vVar1);
		if (fVar4 < (4,5f * 4,5f))
		{
			unk_0xE072601B4380E9DF(iLocal_72, iLocal_74, fLocal_179, 786599);
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(Global_98465))
	{
	}
	else
	{
		iLocal_69 = 3;
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
	}
	else
	{
		iLocal_69 = 3;
		return 1;
	}
	if (unk_0xDF1306B443CD3D15(iLocal_74, 0))
	{
	}
	else
	{
		iLocal_69 = 3;
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!func_3(&uVar0))
	{
		if (unk_0x69DF961355195C3C(Global_96073))
		{
		}
		else if (unk_0x69DF961355195C3C(Global_96074))
		{
			unk_0x11BEEB2AE29A6102(Global_96074);
			fVar1 = unk_0xA45992A6CE82FB43(Global_96074);
			if (!func_5(Global_98465, iLocal_74, 2))
			{
				if (fVar1 >= 0,9f)
				{
					unk_0xF821F915BC24D246(Global_98465, iLocal_74, 2);
				}
			}
			if (!iLocal_180)
			{
				unk_0x1E9649458B15960F(iLocal_72, false);
				iLocal_180 = 1;
			}
			unk_0xD1F0F33C375B8446(iLocal_72, iLocal_74, 6, 50);
		}
		else
		{
			if (!func_5(Global_98465, iLocal_74, 2))
			{
				unk_0xF821F915BC24D246(Global_98465, iLocal_74, 2);
			}
			unk_0x1BF8B16C32704027(iLocal_74, -8f, 1);
			wait(100);
			if (!func_3(&uVar0))
			{
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0xD1F0F33C375B8446(0, iLocal_74, 24, 50);
				unk_0x78A77CDD64392938(0, 2000);
				unk_0xE9362E4D600DD12A(0, iLocal_74, vLocal_176 + vLocal_181, fLocal_179, 0, iLocal_75, 786599, ((4,5f / 2f) - 1f), 10f);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iLocal_72, iVar2);
				unk_0xF82EA857DA10E0CD(&iVar2);
				return 1;
			}
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6()
{
	if (!func_7())
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	if (!unk_0x991B1F0980C62628() || unk_0x19EC8D83154D7CC1() == 3)
	{
		return 0;
	}
	if (unk_0x00A15D69BCAA5267() > 8)
	{
		if (unk_0x00A15D69BCAA5267() != 11)
		{
			return 0;
		}
		if (unk_0x00A15D69BCAA5267() == 11)
		{
			if (unk_0x94EFC97F8A693855() > 0)
			{
				if (unk_0x192DE42720995A6E() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_8(int iParam0, int iParam1)
{
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() <= 2 && unk_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (func_17(14))
		{
			return 0;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_10(iParam0, func_11()))
		{
			return 0;
		}
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, false) };
			fVar3 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0))
				{
					if (!unk_0x0A059E0DB9253280(iParam1))
					{
						return 0;
					}
				}
				else if (!unk_0x8E28E832BEAC3DCE(vVar0, 1,5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_9(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_9(var uParam0)
{
	return uParam0;
}

bool func_10(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_11()
{
	func_12();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_12()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_15(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_14(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_17(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111638.f_2358.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_17(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_18()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_21();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 3)
	{
		func_21();
		return;
	}
	func_19();
	if (Global_98467 > 0)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_19()
{
	func_20((Global_98467 - 1));
}

void func_20(int iParam0)
{
	Global_98467 = iParam0;
}

void func_21()
{
	func_20(0);
}

void func_22()
{
	unk_0x523BCC9DC80CD82F(iLocal_73);
	unk_0xAB8E2DDC7AF955E0(iLocal_73, true);
	iLocal_74 = unk_0x6E7D01E16ABEFABB(vLocal_181 + vLocal_173, 15f, iLocal_75, 2);
	iVar0 = 0;
	while ((!unk_0xC844350D5D58C99A(Global_98465) || !unk_0xC844350D5D58C99A(iLocal_74)) || (!unk_0xB87F6CF6E5628C67(iLocal_73) && iVar0 < 400))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_74))
		{
			iLocal_74 = unk_0x6E7D01E16ABEFABB(vLocal_181 + vLocal_173, 15f, iLocal_75, 2);
		}
		iVar0++;
		wait(0);
	}
	unk_0x73270B3C9CC833FD(Global_98465, true, 1);
	if (unk_0xC844350D5D58C99A(Global_98465))
	{
		unk_0x6DF7BF67E86AAE86(Global_98465, Global_93748);
		unk_0x4F39CC3882DD074E(Global_98465, "A_F_Y_BevHills_01_White_FULL_01");
	}
	if (!unk_0x437347B10A200C4B(iLocal_74, 0))
	{
		unk_0x56FDC9ADE35F7DB0(iLocal_74, true, true, 0);
		unk_0x71EDC33E5A423750(iLocal_74, 2);
		unk_0xB9FD7450C0DAB575(iLocal_74, 1084227584);
		iLocal_72 = unk_0x852A19533F896693(iLocal_74, 4, iLocal_73, -1, 1, true);
		unk_0xC743BD39A24D0583(iLocal_72, 0);
		unk_0x71199B01895C6202(iLocal_73);
	}
}

void func_23()
{
	iLocal_70 = Global_98147;
	func_42(iLocal_70, &vLocal_181, &uLocal_184, &cVar0);
	iLocal_73 = 131961260;
	func_29(1, iLocal_70, &iLocal_75, &vLocal_173, &uVar8, &vLocal_176, &fLocal_179);
	Var9.f_1 = -1;
	Var9.f_17 = 4;
	Var9.f_17.f_8 = 4;
	Var9.f_17.f_13 = 4;
	Var9.f_17.f_18 = 4;
	Var9.f_17.f_24 = 4;
	Var9.f_17.f_29 = 4;
	Var9.f_17.f_34 = 4;
	Var9.f_62 = 8;
	Var9.f_96.f_7 = 21;
	Var9.f_96.f_8 = 6;
	Var118.f_1 = -1;
	Var118.f_17 = 4;
	Var118.f_17.f_8 = 4;
	Var118.f_17.f_13 = 4;
	Var118.f_17.f_18 = 4;
	Var118.f_17.f_24 = 4;
	Var118.f_17.f_29 = 4;
	Var118.f_17.f_34 = 4;
	Var118.f_62 = 8;
	Var118.f_96.f_7 = 21;
	Var118.f_96.f_8 = 6;
	Var9 = 0;
	Var9.f_2 = iLocal_70;
	Var9.f_3 = Global_96222.f_45;
	func_26(Var9, &Var118);
	func_24(iLocal_70, &sLocal_185, &cLocal_201, &cLocal_201, &uVar238, &uVar239);
}

int func_24(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 8;
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return 1;
			break;
		
		case 79:
			func_25(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			if (func_24(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 204:
			if (func_24(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return 1;
			break;
		
		case 289:
			func_25(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_25(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_26(struct<109> Param0, var uParam109)
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1435919172;
			uParam109->f_110 = 1435919172;
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 0;
			break;
		
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 2:
			*uParam109 = { Global_96855[0] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[0];
			return 1;
			break;
		
		case 3:
			*uParam109 = { Global_96855[1] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[1];
			return 1;
			break;
		
		case 4:
			*uParam109 = { Global_96855[2] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[2];
			return 1;
			break;
		
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
			break;
		
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
			break;
		
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 451360105;
			func_27(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1959848946;
			uParam109->f_110 = -1959848946;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1794415470;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_27(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, -0,7035f, -0,0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, -3,03f, -0,72f, 0,08f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, -2017877118, -2017877118, Vector(2,6407f, 8,164f, -14,1564f) + Vector(-1f, 0,03f, -2,16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_28(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_28(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_27(uParam109, 17, 1785177548, 1785177548, -1,71f, 1,05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 20, 1785177548, 1785177548, 0,98f, 0,8017f, -0,42f, -180f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_27(uParam109, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_27(uParam109, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_27(uParam109, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_27(uParam109, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, -2,04f, -0,15f, 0f, 14,4f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, -1,71f, 1,05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, 1,1779f, 2,4276f, 0f, 162,1022f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 14, 1785177548, 1785177548, 0,3427f, 1,1592f, 1,0351f, 139,912f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, -3,03f, -0,72f, 0,08f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 14, -982327190, 1785177548, -0,8472f, 0,155f, 0f, 152,556f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 14, 1785177548, 1785177548, -0,3577f, -0,8968f, -0,0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, -982327190, 1785177548, 4,2943f, -6,7858f, 0f, -133,5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 43, 1785177548, 1785177548, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 3,4381f, -0,8269f, 0f, -87,6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3,4381f, -0,8269f, 0f };
				uParam109->f_115 = -87,6612f;
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
			break;
		
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 3,4381f, -0,8269f, 0f, -87,6612f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, -0,7949f, -0,508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 19, 1785177548, 1785177548, 1,29f, 1,41f, 0f, 57,52f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 19, 1785177548, 1785177548, 1,29f, 1,41f, 0f, 57,52f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 19, 1785177548, 1785177548, 0,5504f, -0,2322f, 0f, -9,9741f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 19, 1785177548, 1785177548, 1,23f, 0,6f, -1f, 34,56f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 1,5033f, 1,2118f, 0f, -78,0449f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 1,5033f, 1,2118f, 0f, -78,0449f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			uParam109->f_118 = 1;
			func_28(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_27(uParam109, 144, -982327190, 2106541073, -2,4166f, -0,15f, 0f, -148,7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_27(uParam109, 144, 2106541073, 2106541073, -5,7915f, -11,0439f, 0,67f, -72,589f);
			}
			return 1;
			break;
		
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 144, -2017877118, -2017877118, -3,264f, -14,7895f, 14,1815f, -0,6311f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 0,24f, 0,33f, -0,5f, -11,88f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 0,24f, 0,33f, -0,5f, -11,88f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 1,41f, 1,35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 1,7491f, 0,6423f, 0f, 166,479f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_27(uParam109, 32, 1785177548, 1785177548, 0,72f, -0,69f, 0f, 172,44f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1630799643;
			uParam109->f_110 = 1630799643;
			func_27(uParam109, 144, 474215631, -1519143300, -9,5443f, -3,191f, -0,3f, 180f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = -982327190;
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = 1435919172;
	uParam109->f_110 = 1435919172;
	func_28(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam7;
}

void func_28(var uParam0)
{
	func_27(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_29(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				if (unk_0x0399732A9EBC368E(Global_98451[iParam0], -829,7478f, 192,117f, 76,73248f, -827,1384f, 153,8595f, 59,96172f, 33,25f, 0, true))
				{
					if (Global_98443[iParam0] == 1)
					{
						*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
						*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
						if (vmag2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 37,43f, -23,81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(28,826f, -1277,56f, -90,961f) - Vector(28,3203f, -1324,195f, -90,0089f) };
			*uParam4 = (1,27f - 194,1887f);
			return 1;
			break;
		
		case 9:
			return func_29(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_29(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_31(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = 744705981;
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = -377465520;
			*uParam3 = { Vector(28,764f, -1431,464f, 66,028f) - Vector(28,2954f, -1351,52f, 37,5988f) };
			*uParam4 = (141,28f - 90,0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_31(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21,6401f, 38,5601f, 1,9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = -2137348917;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_31(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_31(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -2,72f, 0,45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = -344943009;
			*uParam3 = { Vector(29,17f, -1417,047f, 54,081f) - Vector(28,2915f, -1464,68f, 72,2278f) };
			*uParam4 = (0,72f - 156,8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = 1221512915;
			*uParam3 = { Vector(24,9f, -938,8f, 792,3f) - Vector(24,2312f, -906f, 763f) };
			*uParam4 = (2,23f - 7,2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = 1830407356;
			*uParam3 = { Vector(28,701f, -1090,07f, 306,036f) - Vector(28,3684f, -1120,786f, 257,9167f) };
			*uParam4 = (-1f - 97,2736f);
			return 1;
			break;
		
		case 40:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = 353883353;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 75:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(5,4446f, -2912,043f, 659,5297f) - Vector(5,0589f, -2916,479f, 709,0244f) };
			*uParam4 = (247,4806f - 355,326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = -599568815;
			*uParam3 = { Vector(5,1176f, -2936,843f, 656,9753f) - Vector(5,1337f, -2917,325f, 643,5248f) };
			*uParam4 = (253,776f - 334,1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = -784816453;
			*uParam3 = { Vector(5,681f, -2769,795f, 593,033f) - Vector(5,0558f, -2819,085f, 594,4415f) };
			*uParam4 = (2,62f - 299,0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = 2006918058;
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { -1,5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3,8721f, -5,9568f, 0f };
			*uParam4 = (164,2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = -1961627517;
			*uParam3 = { Vector(28,1755f, -550,2679f, -1170,72f) - Vector(30,2361f, -526,9999f, -1257,5f) };
			*uParam4 = (310,4708f - 220,9554f);
			return 1;
			break;
		
		case 52:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 66:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 61:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -2,9117f, -15,0499f, -0,3468f };
			*uParam4 = -139,9751f;
			return 1;
			break;
		
		case 64:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = -1450650718;
			*uParam3 = { Vector(36,5734f, -85,1799f, -737,1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64,1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = 1949211328;
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5,5414f, -6,6035f, 1,0473f };
				*uParam4 = -83,2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5,7209f, -12,3958f, 1,0746f };
				*uParam4 = -152,2593f;
			}
			return 1;
			break;
		
		case 112:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_29(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = -186537451;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12,5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_29(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_29(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = 448402357;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 114:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,9002f, 1,205f, -0,3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_31(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 106:
			return func_29(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_29(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 99:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 3,2267f, 1,0966f, -0,354f };
			*uParam4 = -31,73f;
			return 1;
			break;
		
		case 125:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -13,7322f, 1,8783f, 1,0593f };
			*uParam4 = 55,3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = 290013743;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 91:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 15,4538f, -8,711f, 5,79f };
			*uParam4 = 2,4942f;
			return 1;
			break;
		
		case 93:
			if (func_29(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8,1f, -9,01f, 0,4439f };
				*uParam4 = 94,03f;
				return 1;
			}
			break;
		
		case 121:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 18,8468f, 40,7721f, 0f };
			*uParam4 = -116,3936f;
			return 1;
			break;
		
		case 115:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,517f, -33,7052f, -531,6035f) - Vector(45,6141f, -21,87f, -511,73f) };
			*uParam4 = ((177,259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 1,7826f, 12,2098f, -0,6964f };
			*uParam4 = -96,0001f;
			return 1;
			break;
		
		case 117:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 11,8705f, -1,4684f, -1,6487f };
			*uParam4 = -125,8331f;
			return 1;
			break;
		
		case 94:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -13,1578f, 16,3962f, 0,6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -21,0518f, 0,5037f, 0,4091f };
			*uParam4 = -83,1262f;
			return 1;
			break;
		
		case 108:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 10,8971f, 2,0809f, -0,7983f };
			*uParam4 = -150,9417f;
			return 1;
			break;
		
		case 109:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 79,9901f, -52,83f, -0,3533f };
			*uParam4 = 44,7231f;
			return 1;
			break;
		
		case 135:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2,4845f, 2,3286f, -0,383f };
				*uParam4 = -31,4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12,5f;
				return 1;
			}
			break;
		
		case 142:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7,5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_29(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13,2213f, 16,331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_29(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10,3876f, -10,3585f, -1,2183f };
				*uParam4 = 8,6726f;
				return 1;
			}
			break;
		
		case 158:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 1,0793f, 15,631f, 1,1744f };
			*uParam4 = 2,52f;
			return 1;
			break;
		
		case 166:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 171:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_31(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 209:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_30(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2,19f, -1,23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1,3547f, 2,1615f, -0,3723f };
			*uParam4 = 177,8041f;
			return 1;
			break;
		
		case 213:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,2075f, 1,0943f, 0f };
				*uParam4 = 15,82f;
				return 1;
			}
			break;
		
		case 214:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2,291f, 1,0879f, 0,0635f };
			*uParam4 = 177,798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0,9714f, 1,6112f, -0,2773f };
			*uParam4 = -7,0583f;
			*uParam5 = { Vector(183,8081f, 578,5989f, 174,7651f) - Vector(176,086f, 551,7596f, 10,9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29,4846f, -1457,915f, -17,4132f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam4 = (89,0026f - -1,5f);
			*uParam5 = { Vector(33,6125f, -1563,461f, -147,0307f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,5168f, -33,5909f, -531,4f) - Vector(45,2617f, -28,54f, -521,13f) };
			*uParam4 = (357,1407f - 84,96f);
			return 1;
			break;
		
		case 216:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2,1752f, -2,3781f, 0f };
				*uParam4 = -68,4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3,9761f, 0,2542f, 0f };
				*uParam4 = -70,5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28,225f, -1015,11f, -70,4456f) - Vector(27,5447f, -1019,235f, -78,4023f) };
			*uParam4 = (162,098f - 109,0206f);
			return 1;
			break;
		
		case 192:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,7514f, -1573,632f, -1174,458f) };
			*uParam4 = (302,182f - 105,981f);
			return 1;
			break;
		
		case 193:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,3599f, -1573,692f, -1175,298f) };
			*uParam4 = (302,182f - 172,9187f);
			return 1;
			break;
		
		case 194:
			if (func_29(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12,74f, 3,26f, 0f };
				*uParam4 = 95,217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_29(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1,34f, 7,684f, 0f };
				*uParam4 = 173,52f;
				return 1;
			}
			break;
		
		case 200:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,4055f, -1607,568f, 44,4802f) - Vector(((28,2858f - 0,5f) + 1,5f), -1607,286f, 2,8895f) };
			*uParam4 = (318,2674f - (310,879f - 180f));
			return 1;
			break;
		
		case 201:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,1773f, -1592,787f, 3,6009f) - Vector(29,2903f, -1607,286f, 2,8895f) };
			*uParam4 = (322,6286f - 130,879f);
			return 1;
			break;
		
		case 202:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 91,3579f, 18,1788f, -0,1911f };
			*uParam4 = -90,3475f;
			return 1;
			break;
		
		case 222:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 12,5073f, -3,4625f, -0,3702f };
			*uParam4 = 14,3405f;
			return 1;
			break;
		
		case 223:
			if (func_29(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21,87f, -10,5f, 0f };
				*uParam4 = -104,76f;
				return 1;
			}
			break;
		
		case 224:
			return func_29(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7f, -1356,9f, 24,6f) - Vector(29,3437f, -1351,412f, 28,986f) };
			*uParam4 = ((270,1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -19,8544f, -10,4863f, -0,0334f };
			*uParam4 = -120,12f;
			return 1;
			break;
		
		case 228:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 21,5897f, -6,8544f, 0,6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -7,6041f, 0,1369f, 0,5812f };
			*uParam4 = -145,769f;
			return 1;
			break;
		
		case 230:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -1,6f, 7,6802f, 0,6947f };
			*uParam4 = -50,99f;
			return 1;
			break;
		
		case 238:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22,322f, -6,2034f, 0f };
			*uParam4 = 73,071f;
			return 1;
			break;
		
		case 250:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,2901f, -5,5798f, -0,0357f };
			*uParam4 = 160,56f;
			return 1;
			break;
		
		case 251:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,0739f, 7,7692f, -0,2984f };
				*uParam4 = -48,9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5,778f, -4,2397f, 0,9091f };
				*uParam4 = -12,9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0,6968f, 1,1033f, 0,912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = 55628203;
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_29(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_29(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = 290013743;
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = 1033245328;
			}
			*uParam3 = { Vector(-0,6187f, -1440,421f, 2779,759f) - Vector(0,3109f, -1453,731f, 2789,845f) };
			uParam3->f_2 = (uParam3->f_2 + 0,5f);
			*uParam4 = (340,0835f - 4,44f);
			*uParam3 = { Vector(-0,7f, 16,55f, -3,3962f) + Vector(0,5f, 0,5f, -0,5f) };
			*uParam4 = (23,6441f + 90f);
			*uParam3 = { -4,0164f, 19,9594f, 0f };
			*uParam4 = 113,6465f;
			*uParam3 = { *uParam3 * Vector(1,1f, 1,1f, 1,1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = 788045382;
			*uParam3 = { 9,8707f, 13,0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = -810318068;
			*uParam3 = { -7,7078f, 23,9099f, 1,7307f };
			*uParam4 = 24,3187f;
			return 1;
			break;
		
		case 309:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -4,5662f, -3,2485f, (0,9455f - 1,7f) };
			*uParam4 = -138,6056f;
			return 1;
			break;
		
		case 305:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,8797f, 3597,047f, 1399,662f) - Vector(37,9419f, 3602,284f, 1394,208f) };
			*uParam4 = (315,9865f - 122,5269f);
			return 1;
			break;
		
		case 310:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 10,5999f, 3,3997f, 1,0212f };
			*uParam4 = -50,3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = 627094268;
			*uParam3 = { -13,2279f, -7,5348f, 0f };
			*uParam4 = 4,32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = 1131912276;
			*uParam3 = { 11,9596f, 0,345f, -1,0016f };
			*uParam4 = -42,4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = -1745203402;
			*uParam3 = { 3,424f, 7,6462f, 0,8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(7,1164f, -1094,205f, -1243,65f) - Vector(7,1f, -1105,15f, -1242,68f) };
			*uParam4 = (14,0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,8143f, -930,5448f, -1672,535f) - Vector(6,479f, -974,7168f, -1667,148f) };
			*uParam4 = (144,9416f - 171,253f);
			return 1;
			break;
		
		case 258:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,3025f, 6276,12f, -267,5488f) - Vector(30,5054f, 6250,9f, -301,4778f) };
			*uParam4 = (130,9896f - 10,247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = -644710429;
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,5629f, -387,5143f, -147,166f) - Global_97183[iParam1] };
			*uParam4 = (341,4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(24,4283f, -689,1462f, -1306,782f) - Global_97183[iParam1] };
			*uParam4 = (214,6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -176,25f);
			return 1;
			break;
		
		case 154:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -147,192f);
			return 1;
			break;
		
		case 165:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,0054f, -441,1681f, -1100,878f) - Global_97183[iParam1] };
			*uParam4 = (297,5568f - -144,622f);
			return 1;
			break;
		
		case 159:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,3852f, -199,5354f, -825,3141f) - Global_97183[iParam1] };
			*uParam4 = (29,4869f - -62,5f);
			return 1;
			break;
		
		case 160:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,2086f, -144,1027f, -730,8218f) - Global_97183[iParam1] };
			*uParam4 = (28,532f - 119f);
			return 1;
			break;
		
		case 167:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(31,7307f, -523,2257f, -1144,174f) - Global_97183[iParam1] };
			*uParam4 = (299,2956f - -22,32f);
			return 1;
			break;
		
		case 152:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9436f, 314,6989f, -1421,8f) - Global_97183[iParam1] };
			*uParam4 = (335,4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,469f, 255,3143f, -706,187f) - Global_97183[iParam1] };
			*uParam4 = (117,3069f - 37,27f);
			return 1;
			break;
		
		case 225:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7165f, -1677,734f, 185,4888f) - Global_97183[iParam1] };
			*uParam4 = (54,2538f - -83,8f);
			return 1;
			break;
		
		case 218:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,3218f, -1405,159f, -17,556f) - Global_97183[iParam1] };
			*uParam4 = (91,3098f - -70,4124f);
			return 1;
			break;
		
		case 219:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,2611f, -1492,151f, -219,3172f) - Global_97183[iParam1] };
			*uParam4 = (139,2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(25,3018f, -1811,693f, -22,6138f) - Global_97183[iParam1] };
			*uParam4 = (141,0423f - -117,356f);
			return 1;
			break;
		
		case 206:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(208,5337f, 773,6719f, 164,1308f) - Global_97183[iParam1] };
			*uParam4 = (136,3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(108,9995f, 396,924f, -263,3745f) - Global_97183[iParam1] };
			*uParam4 = (284,4611f - -95,588f);
			return 1;
			break;
		
		case 274:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(139,5782f, 2030,446f, -1883,836f) - Global_97183[iParam1] };
			*uParam4 = (340,5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,0296f, 6560,557f, -200,684f) - Global_97183[iParam1] };
			*uParam4 = (134,5505f - 110,5931f);
			return 1;
			break;
		
		case 271:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,4647f, -1083,751f, -1278,023f) - Global_97183[iParam1] };
			*uParam4 = (115,8919f - 26,3597f);
			return 1;
			break;
		
		case 248:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(102,4417f, 164,5124f, 325,8113f) - Global_97183[iParam1] };
			*uParam4 = (68,4108f - 10,77f);
			return 1;
			break;
		
		case 242:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(56,616f, -122,9896f, -1622,22f) - Global_97183[iParam1] };
			*uParam4 = (210,8653f - 13,7207f);
			return 1;
			break;
		
		case 254:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,0019f, -213,7796f, 172,442f) - Global_97183[iParam1] };
			*uParam4 = (250,3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(17,3426f, -836,0328f, -887,9977f) - Global_97183[iParam1] };
			*uParam4 = (270,8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,8359f, -1182,704f, -1264,218f) - Global_97183[iParam1] };
			*uParam4 = (298,4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(104,8218f, 289,0073f, -80,4564f) - Global_97183[iParam1] };
			*uParam4 = (247,6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(103,1881f, 177,7729f, 288,977f) - Global_97183[iParam1] };
			*uParam4 = (68,9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,7794f, -432,4635f, -161,4589f) - Global_97183[iParam1] };
			*uParam4 = (340,0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(202,1143f, 828,3607f, -806,8813f) - Global_97183[iParam1] };
			*uParam4 = (101,1612f - -54,347f);
			return 1;
			break;
		
		case 103:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,0174f, -1108,081f, -1724,72f) - Global_97183[iParam1] };
			*uParam4 = (319,8931f - 143,4931f);
			return 1;
			break;
		
		case 109:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,2248f, -628,4899f, -1859,505f) - Global_97183[iParam1] };
			*uParam4 = (229,0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,1469f, 90,4242f, -1393,442f) - Global_97183[iParam1] };
			*uParam4 = (123,1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(101,921f, 186,1865f, 370,5876f) - Global_97183[iParam1] };
			*uParam4 = (159,7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(45,9871f, -188,5636f, -1391,156f) - Global_97183[iParam1] };
			*uParam4 = (36,5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(46,0567f, 3076,742f, 2001,918f) - Global_97183[iParam1] };
			*uParam4 = (328,101f - -33,128f);
			return 1;
			break;
		
		case 88:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9442f, 314,7191f, -1421,821f) - Global_97183[iParam1] };
			*uParam4 = (336,5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(37,4888f, 5643,726f, -569,3535f) - Global_97183[iParam1] };
			*uParam4 = (296,1685f - unk_0xE7D606C557C86100(7,4998f, -7,4995f));
			return 1;
			break;
		
		case 307:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(47,4526f, 4717,728f, -1555,593f) - Global_97183[iParam1] };
			*uParam4 = (236,223f - unk_0xE7D606C557C86100(-10,6345f, -0,7246f));
			return 1;
			break;
		
		case 308:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(22,7549f, 4629,148f, -1553,861f) - Global_97183[iParam1] };
			*uParam4 = (332,7842f - unk_0xE7D606C557C86100(3,4271f, 13,6787f));
			return 1;
			break;
		
		case 278:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,9161f, -1009,745f, 631,8275f) - Global_97183[iParam1] };
			*uParam4 = (98,8128f - -33,77f);
			return 1;
			break;
		
		case 279:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(234,6825f, 900,8749f, -111,9033f) - Global_97183[iParam1] };
			*uParam4 = (6,1087f - 155,68f);
			return 1;
			break;
		
		case 240:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,5351f, 3636,151f, 1546,323f) - Global_97183[iParam1] };
			*uParam4 = (298,4009f - -4,124f);
			return 1;
			break;
		
		case 241:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,512f, 6439,667f, -179,4242f) - Global_97183[iParam1] };
			*uParam4 = (225,5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2977f, -1390,545f, 486,7419f) - Global_97183[iParam1] };
			*uParam4 = (178,298f - -90f);
			return 1;
			break;
		
		case 266:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,5662f, 143,2342f, -3052,895f) - Global_97183[iParam1] };
			*uParam4 = (85,3429f - 68,8227f);
			return 1;
			break;
		
		case 267:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(39,9155f, 4934,08f, 2202,375f) - Global_97183[iParam1] };
			*uParam4 = (314,2654f - 56,2037f);
			return 1;
			break;
		
		case 269:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,149f, -782,0952f, 401,2502f) - Global_97183[iParam1] };
			*uParam4 = (179,9905f - -106,6605f);
			return 1;
			break;
		
		case 246:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,3919f, -1534,507f, -1195,256f) - Global_97183[iParam1] };
			*uParam4 = (305,8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,8792f, -1241,213f, -573,3765f) - Global_97183[iParam1] };
			*uParam4 = (316,9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,0002f, -1298,539f, -724,429f) - Global_97183[iParam1] };
			*uParam4 = (230,5715f - -32,488f);
			return 1;
			break;
		
		case 260:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(61,203f, 250,8387f, -1309,114f) - Global_97183[iParam1] };
			*uParam4 = (10,7756f - -29,093f);
			return 1;
			break;
		
		case 261:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,764f, 60,3233f, 917,6678f) - Global_97183[iParam1] };
			*uParam4 = (148,021f - 229,6085f);
			return 1;
			break;
		
		case 270:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_97183[iParam1] };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -48,5171f, 28,4211f, 3,0057f };
			*uParam4 = -1,3831f;
			return 1;
			break;
	}
	return 0;
}

void func_30(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_31(int iParam0, var uParam1, int iParam2)
{
	if (Global_98148[iParam0] == 0)
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_98148[iParam0] == -150975354)
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_41(iParam0))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7082C42B8809BF2(Global_98148[iParam0]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xC41A9202669A24C4(Global_98148[iParam0]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAFB8495D36825275(Global_98148[iParam0]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7D7011F9888A365(Global_98148[iParam0]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x8E39AC3C76C8AA58(Global_98148[iParam0]))
		{
			func_30(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x7D8B2A8F9EA82DB7(Global_98148[iParam0]))
		{
			func_30(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_32(Global_98148[iParam0], 0))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_98148[iParam0] != *uParam1)
		{
			*uParam1 = { Global_98148[iParam0] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_30(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_30(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_30(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_30(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_98148[iParam0] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_30(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_32(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !unk_0x8CD06866876216F2()) || (iParam0 == 237764926 && !unk_0x8CD06866876216F2())) || (iParam0 == 349315417 && !unk_0x8CD06866876216F2())) || iParam0 == -613725916) || (iParam0 == -401643538 && !unk_0x8CD06866876216F2()))
	{
		if (!func_40())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_39() && !func_38()) && !func_37()) && !func_36()) && !func_40())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_37())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_35(iParam0))
		{
			return 0;
		}
	}
	if (!func_33(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0)
{
	if (!func_34())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_34()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_35(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_36()
{
	return 0;
}

int func_37()
{
	return 1;
}

int func_38()
{
	return 1;
}

int func_39()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_40()
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

int func_41(int iParam0)
{
	if (Global_98148[iParam0] == -150975354 || Global_98148[iParam0] == -613725916)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 771711535 || Global_98148[iParam0] == -1066334226)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1030400667)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 569305213)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1807623979)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -907477130 || Global_98148[iParam0] == -1647941228)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1291952903 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1311154784 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -34623805 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 758895617 && !Global_111638.f_9080.f_330[9])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 353883353 && !Global_111638.f_9080.f_330[9])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1051415893 && !Global_111638.f_9080.f_330[10])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -433375717 && !Global_111638.f_9080.f_330[11])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1938952078)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 444583674)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -433375717)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -2137348917)
	{
		return 1;
	}
	if (((Global_98148[iParam0] == -1800170043 && !Global_111638.f_9080.f_330[80]) && !Global_111638.f_9080.f_330[81]) && !Global_111638.f_9080.f_330[82])
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (func_45(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_43(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0].f_3 };
					*uParam2 = Global_93947[iVar0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0].f_3 };
					*uParam2 = Global_93947[0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_96855[0].f_4 };
				*uParam2 = Global_96855[0].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_96855[1].f_4 };
				*uParam2 = Global_96855[1].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_96855[2].f_4 };
				*uParam2 = Global_96855[2].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_97183[iParam0] };
		return 1;
	}
	return 0;
}

bool func_43(var uParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0] };
	if (func_44(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], 0))
		{
			vVar6 = { Global_93947[iVar5].f_3 };
			fVar9 = vdist(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

bool func_44(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_45(int iParam0, var uParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_43(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_93947[iVar3].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_93947[0].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_96855[0].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_96855[1].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_96855[2].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_49(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_49(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_49(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_45(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_45(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_45(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = { -803,734f, 168,148f, 76,3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_48(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122,69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60,31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41,654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172,697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181,8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20,353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48,53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32,7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84,8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90,5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105,0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54,347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34,621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150,6148f + 0,0095f);
			*uParam1 = (*uParam1 + 0,0004f);
			*uParam1 = (*uParam1 + 0,0015f);
			*uParam1 = (*uParam1 + 0,0002f);
			*uParam1 = (*uParam1 + -0,0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84,6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249,0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143,4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63,4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82,254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152,965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10,099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158,5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99,18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218,4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125,6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142,373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34,878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172,419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107,439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68,812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4,693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78,65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74,7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48,36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144,178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99,72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76,3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80,6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9,1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161,0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226,5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33,128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147,192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59,082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26,087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37,27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13,8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86,3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144,622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61,2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_46(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222,8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112,841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103,8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28,0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0,0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30,185f;
			*uParam1 = (*uParam1 + 0,003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14,98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179,653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95,4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16,0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86,613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111,688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143,7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143,792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4,6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172,2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12,5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1,5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107,981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172,9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67,608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74,1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1,0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152,203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310,879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130,879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35,604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119,3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121,9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95,588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230,78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165,7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1,2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117,03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49,0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84,96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59,3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43,82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_45(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14,749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96,0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43,6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70,4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117,356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83,8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350,3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4,124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13,7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27,746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42,8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2,6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30,24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144,274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68,8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56,2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106,6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26,3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83,3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277,613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4,7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155,68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5,8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70,1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158,979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67,1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47,054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171,253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10,247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32,488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29,093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229,6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11,5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_45(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_45(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34,661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_45(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_45(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_45(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116,742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100,46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122,5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar8 = { -7,4998f, 7,4995f, -0,5258f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar11 = { 10,6345f, 0,7246f, 1,2508f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar14 = { -3,4271f, -13,6787f, -1,4107f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar17 = { -19,6582f, 7,896f, 0,1334f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87,7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103,2841f + 88,7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327,7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_46(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13,904f, 1,193f, 0,7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_46(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1,1731f, 0,809f) };
						*uParam3 = (*uParam3 + (456,7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71,8356f, 180,5483f, -796,9911f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((16f - 222,8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10,9793f, -5,9f, 4,6f };
					*uParam3 = 163,0716f;
					return 1;
					break;
				
				case 1:
					if (func_46(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_46(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0,5f, -1,2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71,835f, 180,548f, -796,991f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = (((16f + 90f) - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6,8878f, -5,5247f, 1,5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,1937f, -9,0309f, 4,5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,4577f, -9,6399f, 4,5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,799f, -9,41f, 4,5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_46(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12,552f, 4,373f, (4,6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0,4395f, -11,0022f, 0,0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5,5001f, -12,4406f, 4,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,5f, -9,1f, 4,6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0,849f, 1,575f, 0f };
					*uParam3 = 272,857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8,183f, -3,0467f, 5,5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9,383f, -3,3887f, 5,73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,488f, -9,098f, 5,4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9,04f, 5,71f, 1,44f };
					*uParam3 = 159,3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,25f, -9,53f, 4,588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11,0022f, -0,4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0,5f, 0,5f), unk_0x79833B02DBD2A244(-0,5f, 0,5f)) };
					*uParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60,2063f, 141,5129f, -863,5425f) - Vector(71,1531f, 179,5117f, -812,0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0,95f, 0,95f, 0,95f) };
					*uParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71,8266f, 180,4725f, -796,7593f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((26,087f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72,6876f, 173,987f, -805,173f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((13f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72,8447f, 172,4196f, -803,1823f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-28,7112f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27,9648f, 8,3766f, 0,7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0,6f, -6,5f, 10,3f) + Vector(0,1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0,3142f, -10,9926f, 0,0747f };
					*uParam3 = 304,1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,3f, -6,5f, 4,6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_46(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,505f, -10,9717f, 4,6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12,7165f, 4,7109f, (4,6f + 1f) };
					*uParam3 = 310,6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,0529f, -8,9175f, 1,6907f };
					*uParam3 = 102,156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,4799f, -7,5315f, 0,682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,352f, -3,356f, 5,7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,3003f, -10,3127f, 4,5874f };
					*uParam3 = 262,789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,76f, -5,95f, 4,59f };
					*uParam3 = 177,6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,6691f, -7,6405f, 0,6817f };
					*uParam3 = 159,156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1,228f, 4,044f, 0,7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,2365f, -7,6073f, 6,2761f };
					*uParam3 = 157,0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,161f, -7,562f, 2,17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,7668f, -7,8757f, 5,5559f };
					*uParam3 = 144,6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,6257f, -9,4927f, 5,5876f };
					*uParam3 = 257,4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_46(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8,4451f, 3,1568f, 1,47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9,0477f, -7,9397f, 0,6817f };
					*uParam3 = 88,5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21,7f, 9f, 1,7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1,3278f, 1,534f, 0f };
					*uParam3 = 159,72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3,0265f, 1,7627f, 0,1273f };
					*uParam3 = 338,5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15,2374f, 8,723f, 1,4495f };
					*uParam3 = 205,677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28,7f, 8,8241f, 0,6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1,1936f, -9,0107f, 9,0567f) + Vector((0,03f - 0,02f), 0f, 0f) };
					*uParam3 = 94,2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5,2891f, 2,0403f, -2,8213f) + Vector((0,03f - 0,05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,84f };
					*uParam3 = 311,4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,8418f };
					*uParam3 = 306,6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5,8092f, 5,7965f, 3,85f };
					*uParam3 = 337,4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13,3221f, 0,0684f, 0,6817f };
					*uParam3 = 277,317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_46(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2,235f, 1,725f, 4,5877f };
					*uParam3 = 172,714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75,7407f, 181,264f, -814,246f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-158f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76,7233f, 181,114f, -812,896f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-164f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7,394f, 5,368f, 1,451f };
					*uParam3 = 235,0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1,0704f, -1,4624f, 0,999f };
					*uParam3 = 157,44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14,8186f, 6,8253f, 0,5f };
					*uParam3 = 87,3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13,6486f, 6,2253f, 0,45f };
					*uParam3 = 262,32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_46(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16,319f, -1,375f, 0,6817f };
					*uParam3 = 334,126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0,39f, 3,27f, 0f };
					*uParam3 = 154,126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,0213f, 6,9622f, 1,39f };
					*uParam3 = 142,889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,128f, 6,842f, 0,4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9019f, -23,8349f, -2,1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9937f, -24,9005f, -2,18f };
					*uParam3 = 314,2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31,7401f, -1,0943f, 0,6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27,1728f, -3,75f, -1,626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14,7722f, -10,9336f, -0,537f };
					*uParam3 = 110,8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17,2536f, 2,451f, -0,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23,9716f, -20,3533f, -3,18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,1416f, -2,0799f, -0,0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,2746f, -4,1995f, -0,0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2,983f, -4,094f, 0,4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5,5235f, 2,9133f, 0,7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30,7131f, -1454,676f, -42,2059f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (84,7009f - 188,5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30,6803f, -1455,848f, -40,7478f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (90,6417f - 188,5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2,0126f, 0,3422f, -0,0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,2931f, 1,4476f, 1,0127f };
					*uParam3 = 61,7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0,0158f, 1,4182f, 0,9913f };
					*uParam3 = 119,008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3,467f, 0,074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,1014f, -5,4089f, -0,013f };
					*uParam3 = 123,753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,802f, -6,3295f, -0,01f };
					*uParam3 = 42,757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2,156f, -4,9564f, 1,4886f };
					*uParam3 = 136,309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7,2656f, 3,022f, -0,9061f };
					*uParam3 = 92,8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0,5066f, 1,6992f, 0,0168f };
					*uParam3 = 115,77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0,2121f, -6,2791f, -0,0089f };
					*uParam3 = 114,3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8,2458f, -0,7136f, -0,2503f };
					*uParam3 = 252,2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2,334f, 1,6889f, 0,586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0,6331f, 1,2093f, -0,0086f };
					*uParam3 = 137,1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3,887f, -0,166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3,5179f, 9,1355f, -1f };
					*uParam3 = 141,79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0,15f, -1,9326f, -6,013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121,6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,2823f, 2,2595f, -1,0742f };
					*uParam3 = (170,2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,077f, -5,1446f, 0,9904f };
					*uParam3 = 107,1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12,903f, -6,623f, -0,0406f };
					*uParam3 = 63,48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,5514f, 5,393f, -0,0998f };
					*uParam3 = 327,483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0,9794f, -0,3043f, 0f };
					*uParam3 = 179,7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11,9759f, 1f, -1,0728f };
					*uParam3 = 238,9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0,576f, 1,671f, 0,601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0,6532f, 0,9556f, -0,0087f };
					*uParam3 = 121,0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0,18f, -4,173f, 0,9981f };
					*uParam3 = 216,61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,5937f, 0,3521f, 1f };
					*uParam3 = 119,4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					if (func_47())
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10,6327f, -1519,561f, -1156,422f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = (102f - 90,6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2,8352f, 0,0552f, 0f };
					*uParam3 = 334,44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_46(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7,213f, -1,4536f, 0,9981f };
					*uParam3 = 42,6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9,6327f + 1f), -1518,736f, -1148,466f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5,24f, 6,217f, 0,998f };
					*uParam3 = 315,72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,6447f, 0,7635f, 1,0507f };
					*uParam3 = 296,683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3,968f, -1,04f, 0f };
					*uParam3 = 214,92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4,617f, -1,1314f, 0f };
					*uParam3 = 39,4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0;
}

int func_47()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*uParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_48(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_48(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*uParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*uParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*uParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*uParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*uParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*uParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*uParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*uParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*uParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*uParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*uParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*uParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*uParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*uParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*uParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*uParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*uParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*uParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*uParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*uParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*uParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*uParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*uParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*uParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*uParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*uParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*uParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*uParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*uParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*uParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*uParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*uParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*uParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*uParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_49(int iParam0)
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_50()
{
	if (!unk_0x437347B10A200C4B(iLocal_72, 0) && unk_0x9C77D2D0559097F0(iLocal_72, 1))
	{
		unk_0x6DAD7906B73F064D(&iLocal_72);
	}
	if (!unk_0x437347B10A200C4B(iLocal_74, 0) && unk_0x9C77D2D0559097F0(iLocal_74, 1))
	{
		unk_0x046C362CF15F1935(&iLocal_74);
	}
	unk_0xAB8E2DDC7AF955E0(iLocal_73, false);
	unk_0x71199B01895C6202(iLocal_73);
	unk_0x21387C9EECC2B220(false);
	unk_0x10FAF14A60A0DBE1();
}

