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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	struct<3> Local_107[2];
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7B70881748D166CD(joaat("launcher_carwash")) > 1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0xDB4E5F36ED3505EE();
		unk_0x3A396632EB359434(0);
	}
	else if (unk_0xED06FD5709A59F02(99))
	{
		func_71();
	}
	if (Global_2621550)
	{
		if (unk_0x7B70881748D166CD(-949873222) == 0)
		{
			unk_0xA9CFCFCA622D2A46(-949873222);
			while (!unk_0x70D85C10C7EFA22C(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0xD39E529EBE5DB04F();
	}
	if (func_70(unk_0x9B0761B4C3EB8BC7()))
	{
	}
	func_64();
	while (true)
	{
		func_70(unk_0x9B0761B4C3EB8BC7());
		if (func_63(unk_0x9B0761B4C3EB8BC7(), Var2, 0) > (100f + 20f))
		{
			func_71();
		}
		bVar0 = false;
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			bVar0 = (func_60(uVar1) || func_59(uVar1));
			bLocal_106 = unk_0x84CA45D54D4D6BB4(uVar1);
			func_58(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40)
		{
			func_57(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_71();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x963B7BFFD2743281() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x26A60F42A1132477(2, 51);
			unk_0x779660A9E5364C4D(0, 101, 1);
			func_8();
			if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_74030)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || func_4(unk_0x9B0761B4C3EB8BC7(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x963B7BFFD2743281() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
			}
			if (unk_0xF0C12886E5C1B20E() || unk_0x689B0FFC8081E57F())
			{
				return 0;
			}
			if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
			{
				if ((unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7()) || unk_0x5F662D6A37C32195(unk_0x9B0761B4C3EB8BC7())) || unk_0x78CF477CE5326EB5(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if ((unk_0x96335C06FE469AF4(unk_0x9B0761B4C3EB8BC7()) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0x12C99794D883929B(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xDB9E558E914A4D5C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAEA644806CF6AB5C(unk_0x9B0761B4C3EB8BC7()) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x1BD7199394D7F19A(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			unk_0xD289B55B6AADBA10(1);
			unk_0x801B883D25479F23(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 20f, 0);
			if (!unk_0x7BCC91F3C1CF24E8((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xBE9B3870B1B370E3((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x8DC2EFD1CECAA468((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_70(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !Global_76833)
						{
							func_2(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0xFD13BD5261D4B71A(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0);
						}
					}
					unk_0x26A60F42A1132477(2, 51);
					unk_0xBE9B3870B1B370E3((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x779660A9E5364C4D(0, 101, 1);
					unk_0x779660A9E5364C4D(0, 75, 1);
					unk_0x779660A9E5364C4D(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					unk_0x1D40553EDD51A1B8(250);
				}
				if (unk_0x8DC2EFD1CECAA468((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x03DB5C6AABF8DA46())
						{
							if (func_70(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !Global_76833)
								{
									func_2(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0xFD13BD5261D4B71A(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0);
								}
							}
							unk_0x26A60F42A1132477(2, 51);
							unk_0x779660A9E5364C4D(0, 101, 1);
							unk_0x779660A9E5364C4D(0, 75, 1);
							unk_0x779660A9E5364C4D(0, 23, 1);
							func_8();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x5F82526B41A5EBCE((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_3(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, iParam1))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(iParam0, iParam1);
			if (unk_0xAE06B9E39EBDE049(uVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_7()
{
	if (Global_110803)
	{
		return 1;
	}
	if (!func_6(14) && unk_0x7B70881748D166CD(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_22411.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x9B0761B4C3EB8BC7();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_70(iVar3))
		{
			Var0 = { unk_0x090239DEAF625B17(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x2E6A35AC161797A7(iVar4) };
	if (func_10(uParam0->f_12, Var0) > SYSTEM::COS(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	var uVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		return unk_0x1D92A4A6F3D3A021(uVar0, 1119092736);
	}
	return unk_0x1D92A4A6F3D3A021(unk_0x9B0761B4C3EB8BC7(), 1119092736);
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x7BCC91F3C1CF24E8(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xDABD547F0DF2906C())
	{
		unk_0xD289B55B6AADBA10(1);
		func_14(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	unk_0x42710E9E08FA375A(uParam1);
	unk_0x1A169149B3D18FCB(0, 1, 1, -1);
}

int func_15(var uParam0)
{
	if (unk_0x7BCC91F3C1CF24E8(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xDABD547F0DF2906C())
	{
		return 0;
	}
	if (unk_0xF005CCA4263DF67F(*uParam0, uParam0->f_14) || unk_0xF005CCA4263DF67F(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

var func_16(var uParam0)
{
	unk_0x69476B1CA6A9FF80(uParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

var func_17(var uParam0, var uParam1)
{
	unk_0x69476B1CA6A9FF80(uParam0);
	unk_0x42710E9E08FA375A(uParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 1;
		}
		if (func_4(unk_0x9B0761B4C3EB8BC7(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0x9B0761B4C3EB8BC7(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, var uParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xDABD547F0DF2906C())
	{
		unk_0xD289B55B6AADBA10(1);
		func_23(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	unk_0x17751E107423AFE9(uParam0);
	unk_0x1A169149B3D18FCB(0, 1, 1, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (unk_0x0922C2E075A5F18C(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !unk_0x80FF6C016CDB0FAF(iVar0, 0);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (unk_0x5C87AA49B5DF6712(iParam0, 0, 0) && unk_0x5C87AA49B5DF6712(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x5C87AA49B5DF6712(iParam0, 4, 0) && unk_0x5C87AA49B5DF6712(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0x5C87AA49B5DF6712(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0x5C87AA49B5DF6712(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0x5C87AA49B5DF6712(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0x5C87AA49B5DF6712(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
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

int func_30()
{
	if (unk_0x25DDB354A40FFCDB())
	{
		return func_38(unk_0x460153A63B9477BC());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_58891[iParam0];
}

int func_32()
{
	func_33();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_36(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_35(unk_0x9B0761B4C3EB8BC7());
			if (func_34(iVar0) && (!func_6(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_34(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return unk_0x982EAC40778C4B0A(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1590682[iParam0 /*883*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_70(unk_0x9B0761B4C3EB8BC7());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
		if (func_4(unk_0x9B0761B4C3EB8BC7(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(unk_0x9B0761B4C3EB8BC7(), uParam0->f_1, uParam0->f_10);
}

bool func_43()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x689B0FFC8081E57F())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_61711)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return 1;
	}
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.x = (Var2.x + (SYSTEM::SIN((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.x = (Var5.x + (SYSTEM::SIN(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (SYSTEM::COS(fVar8) * fParam3));
		unk_0xEE4D6CCB848CB98B(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param3 - Param0) };
	Var3 = { func_56(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0xEE4D6CCB848CB98B(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0xEE4D6CCB848CB98B(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0xEE4D6CCB848CB98B(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xEE4D6CCB848CB98B(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_56(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_57(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0x578C4EF320340AF7() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0xFEFC406F4702C938(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x0F0E6A09A9C90474(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0xAE06B9E39EBDE049(uVar1))
				{
					if (unk_0x20F7576FDB52E2B0(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = unk_0x578C4EF320340AF7() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)
{
	if (!unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(uParam0)))
	{
		return 1;
	}
	if (unk_0x63D2DBD5A2F21BB5(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x63D2DBD5A2F21BB5(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x63D2DBD5A2F21BB5(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x63D2DBD5A2F21BB5(iParam0, 3))
	{
		return 1;
	}
	if (unk_0xD501F7099396F726(iParam0, 1))
	{
		if (unk_0x4B3B9AC15296615C(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (!unk_0x84CA45D54D4D6BB4(uParam0))
	{
		return 1;
	}
	if (unk_0xD3DD4CF5121550D3(uParam0))
	{
		return 1;
	}
	if (!unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(uParam0)))
	{
		return 1;
	}
	if (unk_0x0922C2E075A5F18C(iParam0))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var0, &Var3);
	if (unk_0x0D77CDCF403AEBD2((Var3.x - Var0.x)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x0D77CDCF403AEBD2((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_76833)
	{
		if (!unk_0xAA5B806352173DEA(iParam0))
		{
			return 0;
		}
	}
	if (unk_0xD501F7099396F726(iParam0, 1) && !unk_0x84CA45D54D4D6BB4(iParam0))
	{
		return 1;
	}
	if (!unk_0xD501F7099396F726(iParam0, 1) && !unk_0x84CA45D54D4D6BB4(iParam0))
	{
		return 1;
	}
	if (unk_0x36FE6D3220816ADA(iParam0) == joaat("btype") || unk_0x36FE6D3220816ADA(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0x10D3F7E169A49C44(iParam0, 3, 0)) || func_28(unk_0x10D3F7E169A49C44(iParam0, 4, 0))) || func_28(unk_0x10D3F7E169A49C44(iParam0, 5, 0))) || func_28(unk_0x10D3F7E169A49C44(iParam0, 6, 0))) || func_28(unk_0x10D3F7E169A49C44(iParam0, 7, 0))) || func_28(unk_0x10D3F7E169A49C44(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(uParam0);
	if (func_62(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xAACD889100BCBCFA(iParam0, 2))
		{
			return 1;
		}
		if (unk_0xAACD889100BCBCFA(iParam0, 3) && unk_0xAACD889100BCBCFA(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x84CA45D54D4D6BB4(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xAACD889100BCBCFA(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xAACD889100BCBCFA(iParam0, 3) && !unk_0xAACD889100BCBCFA(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (unk_0x7F8B14CBFB9813E5(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!unk_0xB86B8E85030B1552(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
			return 1;
			break;
	}
	return 0;
}

float func_63(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(uParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, iParam4);
}

void func_64()
{
	func_68(&(Local_40[0 /*24*/]), 1, "Carwash1", func_69(156), 15, "", 0, 4f);
	func_68(&(Local_40[1 /*24*/]), 1, "Carwash2", func_69(157), 15, "", 0, 4f);
	func_66(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_66(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_65(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_76833)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_66(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_67(fParam4, 0f, 360f);
}

float func_67(float fParam0, float fParam1, float fParam2)
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

void func_68(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_31346[iVar0 /*23*/][0 /*3*/];
}

bool func_70(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	return !unk_0xA59F96B50B97E63C(iParam0, 0);
}

void func_71()
{
	func_72(&Local_40);
	func_24(&uLocal_89);
	unk_0xD39E529EBE5DB04F();
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_73(var uParam0)
{
	*uParam0 = 0;
}

