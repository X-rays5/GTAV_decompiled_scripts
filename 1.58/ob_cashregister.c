#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
#endregion

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1656872, 1))
		{
			func_29();
		}
		else
		{
			unk_0xD9B114A8D3A8319F(32, 0, -1);
			func_26(0, -1, 0);
			unk_0x2C07CBAFAC54A645(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x4B34601C5C56F3EE(2))
	{
		func_29();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_22 == 1)
		{
			if (func_14())
			{
				func_29();
			}
		}
		if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
		{
			if (unk_0xA7FB445015A2AF1C(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x8DEF8D80C66C34D4(uScriptParam_0))
						{
							Local_19 = { unk_0x6B62510F212526DC(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xADEBC1D44FE55F78(uScriptParam_0, 0) && unk_0x2B5F4FBAF644BEC8(uScriptParam_0)) && !unk_0xA6A089369417736E(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_29();
			}
		}
		else
		{
			func_29();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x5853B15F78E1A265(70, 121);
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x5853B15F78E1A265(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	unk_0xCED9E32812D6C7C7(&uVar2, 3);
	unk_0xCED9E32812D6C7C7(&uVar2, 4);
	unk_0xD69A0C3662175E68(iVar0);
	while (!unk_0x0152AA00FA3130F1(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		func_2(iVar1, unk_0x7F65C587E17DEF5D(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0x1CD347D2BD906560(iVar1, unk_0x7F65C587E17DEF5D(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	struct<5> Var0;
	
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, uParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = unk_0xB765858A7A410073(iParam0, Param1, uParam4, iParam5, iParam6, bParam7, iParam8);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar5 = func_9(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_4(&Var6) != -1)
	{
		return Var0;
	}
	unk_0xCED9E32812D6C7C7(&uParam4, 5);
	Var6.f_4 = unk_0xC9B8424FE1C703CF(iParam0, Param1, uParam4, uParam5, uParam6, bParam7, 0);
	iVar11 = unk_0xA52C4F51ECAB7E02();
	if (bParam7)
	{
		Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_12 = unk_0x1307D54181723A6E();
		Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_13 = unk_0x64E70C7C5D6DE65C();
		if (Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_13 = unk_0x5C5CE5291FB79534();
			Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/] = { Var6 };
	Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_8 = uParam4;
	Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_9 = uParam5;
	Global_1912810[iVar11 /*257*/].f_94.f_21[iVar5 /*14*/].f_10 = uParam6;
	return Var6;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2683848.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = unk_0xA52C4F51ECAB7E02();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1912810[iParam0 /*257*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2683848.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30571;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	var uVar0;
	
	func_22(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_31505;
}

bool func_18()
{
	return Global_2714627.f_698;
}

int func_19(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2725224;
}

bool func_21()
{
	return Global_2714627.f_693;
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_23(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_25(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar3))
			{
				if (unk_0xD5C6B5E3B93A5EDC(uVar3, 0))
				{
					uVar4 = unk_0xB3FF0049C1FD38EC(uVar3, 0);
					if (unk_0x49E701A18D345B0E(uVar4, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_24(uVar4, &bVar5))
						{
							unk_0xF6FBA55B09506B23(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3D81769BEC61BFF8(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_24(var uParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(uParam0))
		{
			if (unk_0x58FDF0B505AA2260(uParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(uParam0)))
				{
					unk_0x2D58A6131679D82C(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(uParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
		if (!func_27())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_28();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_28();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_27()
{
	return Global_1575022;
}

void func_28()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_29()
{
	unk_0xAFBDF6A5E54114C1();
}

