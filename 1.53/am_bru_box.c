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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	struct<3> Local_71[32];
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_234(ScriptParam_0))
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x460153A63B9477BC()) != 1 && !unk_0xCE990E643CD9D0E5(Global_2540384.f_897.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_226();
		if (func_216())
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x460153A63B9477BC()) != 1 && Global_1627097 == 0)
			{
				func_228();
			}
		}
		if (unk_0xD0E70037A973A810() != iLocal_173)
		{
			func_228();
		}
		unk_0x0005AFC51788D8A0();
		switch (func_215(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_214())
				{
					if (func_213() == 1)
					{
						Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 1;
					}
					else if (func_213() == 4)
					{
						Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_213() == 1)
				{
					func_187();
				}
				else if (func_213() == 4)
				{
					Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
				}
				if (Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 == 0)
				{
					if ((!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x460153A63B9477BC()) != 1) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_897.f_7, 0))
					{
						Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_185(&(Local_60.f_9));
				if (func_184(&(Local_60.f_9)))
				{
					Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_213())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_60.f_7 >= 32 && func_227(unk_0x460153A63B9477BC()) == 1)
	{
		if (func_4(Global_2540384.f_897.f_1))
		{
			return 1;
		}
	}
	if (func_3(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		uVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(uVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
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

int func_4(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0xF7DE07F319727299(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Local_60.f_1, 7))
			{
				if (unk_0xCE990E643CD9D0E5(Local_71[iVar0 /*3*/].f_1, 1))
				{
					unk_0xBE20AB8238688965(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<35> Var13;
	
	if (!unk_0xF7DE07F319727299(Local_60.f_2))
	{
		if (func_214())
		{
			if (unk_0xF8E99C596E84AFF3(1))
			{
				fVar5 = 250f;
				Var6 = { Local_60.f_3 };
				if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8))
				{
					Var0 = { Global_2540384.f_897.f_1 };
					uVar3 = Global_2540384.f_897.f_4;
				}
				if (func_227(unk_0x460153A63B9477BC()) == 7)
				{
					iVar12 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
					if (Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_23 > 0f)
					{
						Var6 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_16 };
						Var9 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_19 };
						fVar5 = Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_23;
						iVar4 = 1;
					}
					else if (Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_22 > 0f)
					{
						Var6 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_13 };
						fVar5 = Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_22;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8) || func_183(Var6, fVar5, &Var0, &uVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_227(unk_0x460153A63B9477BC()) == 1)
						{
							Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0x7CCB49ADC5A1DAB4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), uVar3);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8) || func_8(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_227(unk_0x460153A63B9477BC()) == 1)
					{
						Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0x7CCB49ADC5A1DAB4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0xF7DE07F319727299(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<29> Var34;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { Param0 };
	Var34.f_11 = { Param3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar86;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405074.f_2460 == *uParam0 || !Global_2405074.f_2460.f_1 == uParam0->f_1) || !Global_2405074.f_2460.f_2 == uParam0->f_2) || !Global_2405074.f_2463 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2) || !Global_2405074.f_2480 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1312333)
	{
		if (!Global_2405074.f_2481 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_2467) && !Global_2405074.f_2467 == unk_0x354AD085195C5FA6())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2405074.f_2458 == 1)
		{
			if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_2467))
			{
				if (Global_2405074.f_2467 == unk_0x354AD085195C5FA6())
				{
					if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) < func_182(0))
					{
						return 0;
					}
				}
				else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) < func_182(0))
				{
					return 0;
				}
			}
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_181();
		}
		Global_2405074.f_2458 = 0;
	}
	else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) > func_182(0))
	{
		Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
		func_175();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0xB65F86FFF1334E95(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405074.f_2458)
	{
		unk_0xD30526FDC02B7349();
		unk_0x4A4DC4626419A059();
		func_181();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_174(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1B1C5BD8506FCF84())
		{
			Global_2405074.f_2481 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405074.f_2460 = { *uParam0 };
					Global_2405074.f_2463 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = 0f;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = uParam0->f_14;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_173(Var8.x, Var8.f_1);
			}
			Global_2405074.f_2459 = 1;
			Global_2405074.f_2458 = 1;
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2464 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2467 = unk_0x354AD085195C5FA6();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405074.f_2458)
	{
		if (Global_2405074.f_2459 == 1)
		{
			if (unk_0x71B5E9AB554C28B8(fVar4, fVar5, fVar6, fVar7) || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 5000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_172(Global_4456448.f_129348))
					{
						Var26.f_9 = 1;
					}
					func_145(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_144(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405074.f_2459 = 9;
				}
				else
				{
					Global_2405074.f_2459 = 2;
				}
			}
		}
		if (Global_2405074.f_2459 == 2)
		{
			if ((unk_0x4A0F5B17D75129C9(Var11, Var14) || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 15000) || unk_0xA7FA5002ECC3057F(Var11, Var14) == 0)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (uParam0->f_5 && !func_141(unk_0x460153A63B9477BC(), 0))
				{
					Global_2405074.f_2459 = 3;
				}
				else
				{
					Global_2405074.f_2459 = 4;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2469) > 7000)
			{
				func_140(Var8.x, Var8.f_1);
			}
		}
		if (Global_2405074.f_2459 == 3)
		{
			if (func_139() || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 10000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 4;
			}
		}
		if (Global_2405074.f_2459 == 4)
		{
			if (unk_0x1B1C5BD8506FCF84())
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
			}
			else
			{
				iVar0 = 0;
				func_175();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x9B02A1F590CDE09E(unk_0x460153A63B9477BC(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x8A8CC6889DD09116(unk_0x460153A63B9477BC(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 2:
							if (unk_0x8A8CC6889DD09116(unk_0x460153A63B9477BC(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					Global_2405074.f_2459 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xDFBD9C6F251026AD(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405074.f_2459 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405074.f_2485.f_5)
				{
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					Global_2405074.f_2459 = 6;
				}
				else
				{
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						}
					}
					Global_2405074.f_2459 = 9;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 20000)
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 6)
		{
			iVar0 = 0;
			Global_2405074.f_2485.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2459 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_138(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xDFBD9C6F251026AD(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405074.f_2459 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405074.f_2619[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_144(Global_2405074.f_2619[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_60(Global_2405074.f_2619[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x3BC3A4E4A1827EEE(Global_2405074.f_2619[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						iVar17++;
					}
				}
				Global_2405074.f_2459 = 9;
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 20000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405074.f_486))
				{
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam2, &(Global_2405074.f_2485.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar86 = false;
				}
				else
				{
					bVar86 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam2[0 /*3*/], 0, bVar86, 0, 0, uParam0, uParam1);
			}
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2459 = 9;
		}
		if (Global_2405074.f_2459 == 9)
		{
			Global_2405074.f_2458 = 0;
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_181();
			return 1;
		}
		Global_2405074.f_2464 = unk_0x6CAAB7E78B5D978A();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar64;
	int iVar65;
	bool bVar66;
	int iVar67;
	struct<3> Var68;
	struct<3> Var71;
	struct<3> Var74;
	float fVar77;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar67 = 0;
	}
	else
	{
		iVar67 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar67 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var68 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var68)))
						{
							iVar67 += 4;
						}
						break;
					
					case 1:
						Var68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var68)))
						{
							iVar67 += 4;
						}
						break;
					
					case 2:
						Var68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var68)))
						{
							iVar67 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar67 += 4;
		}
	}
	if (func_28(*uParam0, &Var0, iVar67, iParam3, 1))
	{
	}
	else
	{
		bVar66 = true;
	}
	if (bVar66)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar65 = 0;
		while (iVar65 < 2)
		{
			Var4.f_38[iVar65 /*3*/] = { uParam6->f_13[iVar65 /*3*/] };
			Var4.f_45[iVar65] = uParam6->f_20[iVar65];
			iVar65++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(unk_0x460153A63B9477BC(), 0))
		{
			Var4.f_9 = 1;
		}
		func_145(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var71 = { *uParam5 };
				fVar77 = uParam5->f_4;
				break;
			
			case 1:
				Var71 = { uParam5->f_8 };
				Var74 = { uParam5->f_11 };
				break;
			
			case 2:
				Var71 = { uParam5->f_8 };
				Var74 = { uParam5->f_11 };
				fVar77 = uParam5->f_14;
				break;
		}
		if (!func_23(Var0, uParam5->f_7, Var71, Var74, fVar77))
		{
			if (func_28(*uParam0, &Var0, iVar67, iParam3, 0))
			{
				if (!func_23(Var0, uParam5->f_7, Var71, Var74, fVar77))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var71 + Var74 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var71 };
					}
					if (unk_0xE5CC8E2D904E42CE(Var0, &uVar64, 0, 0))
					{
						Var0.f_2 = uVar64;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var71 + Var74 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var71 };
				}
				if (unk_0xE5CC8E2D904E42CE(Var0, &uVar64, 0, 0))
				{
					Var0.f_2 = uVar64;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405074.f_662 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409990[iVar0 /*17*/].f_16))
			{
				if (func_22(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409990[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409990[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_14(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_14(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_17(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(unk_0xED4B54A984E6E361(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_16(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param4.x, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_17(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_17(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(unk_0xED4B54A984E6E361(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_16(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_16(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_17(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.x = (Param1 - fParam7);
			}
			else
			{
				Var0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.x = (Param4 + fParam7);
		}
		else
		{
			Var0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_19(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_20(&Var0, 0f, 0f, unk_0x658086F2B3C5E4E4(0f, 360f));
		}
		else
		{
			func_20(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.x;
	uParam0->f_1 = Var3.f_1;
}

void func_20(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_21(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_19(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_18(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_15(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x204D69DA02AB1105(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_144(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x3BC3A4E4A1827EEE(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_22(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_144(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405074.f_2728) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_60(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_23(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x3BC3A4E4A1827EEE(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x36FE6D3220816ADA(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_27())
			{
				return func_25(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	switch (iParam0)
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
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
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
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_27()
{
	return -1;
}

int func_28(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_59(Param0, uParam3))
	{
		if (func_29(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x6AF63A4C741270B8(Param0, 0, uParam3, iParam4))
	{
		if (func_29(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2405074.f_509, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_33(*uParam3, 1056964608))
			{
				if (!func_30(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_31(Var1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2410195[iVar4 /*141*/][iVar0 /*7*/], Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2410195[8 /*141*/][iVar0 /*7*/], Global_2410195[8 /*141*/][iVar0 /*7*/].f_3, Global_2410195[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(struct<3> Param0, var uParam3)
{
	return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411475[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411475[1])
	{
		if (Param0 < Global_2411479[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411475[2])
	{
		if (Param0 < Global_2411479[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411479[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411479[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_33(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_42(unk_0x460153A63B9477BC(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_34(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_4794 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_4794)
			{
				if (Global_4718592.f_4797[iVar0 /*280*/].f_15 != 0)
				{
					if (func_34(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_58904 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_58904)
			{
				if (Global_4718592.f_58908[iVar0 /*339*/].f_12 != 0)
				{
					if (func_34(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_268)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_233[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_233[iVar0], 0))
				{
					if (func_34(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_233[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_233[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_266)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_119[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_119[iVar0], 0))
				{
					if (func_34(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_119[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_119[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_34(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_41(iParam7, 1008981770))
	{
		func_35(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_36(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x0D77CDCF403AEBD2((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x0D77CDCF403AEBD2((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x0D77CDCF403AEBD2((Var6.x - Var3.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x003F998A2839DD5E(iParam0))
	{
		unk_0x140662B520844E45(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x003F998A2839DD5E(Global_1315831[iVar0]))
		{
			unk_0x140662B520844E45(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315835[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*uParam1 = { Global_1315860 };
	*uParam2 = { Global_1315863 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

bool func_44(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_45(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(Param0))
	{
		if (func_13(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_46(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405074.f_2730[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_14(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_48(Var2))
			{
				Var2 = { *uParam0 };
				func_14(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_48(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405074.f_591 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405074.f_588);
		if (fVar0 < Global_2405074.f_591)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1678288.f_482;
}

int func_52(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_56(unk_0x460153A63B9477BC(), 1))
			{
				return 1;
			}
			if (!func_55(Param0, 1008981770))
			{
				if (!func_13(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_53(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_13(&Var1, 0, 0, 0, 1))
					{
						if (!func_13(&Param0, 0, 0, 0, 1))
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

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_54(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_30968;
}

int func_59(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			fVar3 = SYSTEM::VDIST(Global_2405074.f_2257[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405074.f_2257[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_61(&Param3, &Param6);
	if (((!Param0.x >= Param3.x || !Param0.f_1 >= Param3.f_1) || !Param0.x <= Param6.x) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_62(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.x > Param3.x)
	{
		Var3.x = Param0.x;
		Var0.x = Param3.x;
	}
	else
	{
		Var3.x = Param3.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405074.f_2485.f_1 == 0 && Global_2405074.f_2485 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x24953052618C0177(&(Global_2405074.f_2485.f_1)))
			{
				case 0:
					func_136(uParam1, uParam2);
					if (!Global_2405074.f_2485.f_2)
					{
						if (uParam2->f_7 && Global_2405074.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
							}
							if (uParam1->f_5 && func_11(Global_2405074.f_486))
							{
								if (!Global_2405074.f_2485.f_5)
								{
									Global_2405074.f_2485.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_136(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1B1C5BD8506FCF84())
		{
			if (!unk_0x6D920201CB14E0AF())
			{
				if (unk_0xD786EA9B884E38E6())
				{
					func_136(uParam1, uParam2);
					Global_2405074.f_2485.f_1 = unk_0xEF64AA08472C4933();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4A4DC4626419A059();
				func_136(uParam1, uParam2);
				if (!Global_2405074.f_2485.f_2)
				{
					Global_2405074.f_2485.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_133(Global_2405074.f_552, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90));
	}
	if (uParam2->f_7 && !Global_2405074.f_2485.f_4)
	{
		Global_2405074.f_2485.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405074.f_2485.f_1 > 0 || Global_2405074.f_2485 > 0)
	{
		if (uParam1->f_5 || unk_0x1B1C5BD8506FCF84())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405074.f_2485.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405074.f_2485.f_3)
					{
						iVar4 = Global_2405074.f_2485.f_3 + 1;
					}
					if (iVar4 > (Global_2405074.f_2485.f_1 - 1))
					{
						iVar4 = (Global_2405074.f_2485.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x554745F3B60B5BE9(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xE83574976D653844(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x7A065FDC4204B088(iVar4);
					}
					else
					{
						unk_0xBFADC1990AB9F737(iVar4, &iVar5);
					}
					func_72(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405074.f_2485.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405074.f_2485.f_1;
		}
		if (Global_2405074.f_2485.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405074.f_2882)
			{
				func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405074.f_486))
			{
				if (Global_2405074.f_2485.f_2)
				{
					func_10(uParam0, &(Global_2405074.f_2485.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam0, &(Global_2405074.f_2485.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x344C570D6F8700DF(0, Global_2405074.f_2485.f_1);
				unk_0x554745F3B60B5BE9(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
		if (uParam1->f_5 && func_11(Global_2405074.f_486))
		{
			if (!Global_2405074.f_2485.f_5)
			{
				Global_2405074.f_2485.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405074.f_2619[(3 - iVar0) /*3*/] = { Global_2405074.f_2619[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405074.f_2619[0 /*3*/] = { Param0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405074.f_486) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param1);
			fVar3 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_1;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_2 < fVar1 && Global_2408010[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_2;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408010[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405074.f_486 == 1)
		{
			if (unk_0x0D77CDCF403AEBD2((Global_2405074.f_509.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_129(unk_0x460153A63B9477BC()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_128(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_127(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x3BC3A4E4A1827EEE(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_121(Param0, fParam3, uParam4->f_15, func_126(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405074.f_3;
		}
	}
	else if (!func_118(Param0, 25f, unk_0x460153A63B9477BC(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405074.f_695)
		{
			Var12 = { Global_2405074.f_509 };
			if (Global_2405074.f_486 == 26)
			{
				Var12 = { Global_2405074.f_552.f_18 };
			}
			if (!func_46(Param0, 0.5f))
			{
				if (func_52(Var12))
				{
					if (!func_13(&Param0, 0, 0, 0, 1) && !func_114(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_113(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_112(unk_0x460153A63B9477BC()) && func_110(unk_0x460153A63B9477BC())))
		{
			if (!func_109(&Param0, &(Global_2405074.f_2485.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_110(unk_0x460153A63B9477BC()))
		{
			if (!func_108(Param0, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_107(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_11(Global_2405074.f_486))
			{
				if (func_55(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_106(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405074.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405074.f_695)
		{
			if (!func_47(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_105(Param0, &Var17, &Var20, &fVar23);
			if (!func_100(&(Global_2405074.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x160FF3CA76647557(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_99(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405074.f_2882 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_91(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_91(Param0, Global_2405074.f_2460, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405074.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_89(Param0);
			}
			uVar7 = func_78(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_77(Var25);
			Global_2405074.f_2485.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405074.f_2485.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_91(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_91(Param0, Global_2405074.f_2460, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2405074.f_486) && iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_89(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405074.f_2485.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_76(Var25, iVar24);
							Global_2405074.f_2485.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405074.f_2485.f_6[iVar24 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/] && fVar0 > Global_2405074.f_2485.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_76(Var25, iVar24);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405074.f_2485.f_6[iVar24 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/] && fVar3 > Global_2405074.f_2485.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_76(Var25, iVar24);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_26(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				if (unk_0x9A70B1BD2A5BA09C(Param0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if (func_75(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam7 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405074.f_2485.f_6[iParam10 /*10*/] };
	Global_2405074.f_2485.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_76(Var0, iParam10 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_71();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] < iVar11)
		{
			Global_2408010[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] == 0)
		{
			Global_2408010[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408010[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408010[iVar13 /*10*/] = { Param0 };
	}
}

float func_78(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_26(iVar11, 1, 1) || (iParam7 == 1 && func_26(iVar11, 0, 0)))
		{
			if (!iVar11 == unk_0x460153A63B9477BC() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_80(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x6CC163E30ECE0790(iVar11) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
					{
						if (!unk_0x6CC163E30ECE0790(iVar11) == -1 || !func_56(unk_0x460153A63B9477BC(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar11) || !bParam6)
					{
						if (func_75(iVar11))
						{
							Var5 = { func_79(iVar11) };
							if (!iVar11 == unk_0x460153A63B9477BC())
							{
								Var8 = { unk_0x20B541C8E40D2E74(unk_0x1FA7B77001D60F9D(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x272784C60C397DB6(Param0, Var5, 1);
							fVar2 = unk_0x272784C60C397DB6(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_87(iParam0))
		{
			if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam0))
			{
				if (!unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
				{
					if (func_42(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_86(unk_0x6CC163E30ECE0790(iParam0), unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
				{
					if (!func_42(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_81(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (func_85(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_84(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_82(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_27();
}

struct<13> func_84(var uParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(uParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, var uParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_84(iParam0) };
		Global_2515186 = { func_84(uParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2)
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
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

float func_89(struct<3> Param0)
{
	var uVar0;
	
	return func_90(Param0, &(Global_2405074.f_45), &uVar0);
}

float func_90(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405074.f_2728) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_91(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_78(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(Param0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && !func_56(unk_0x460153A63B9477BC(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(Param0, unk_0x460153A63B9477BC(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_92(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(SYSTEM::VDIST(Global_2405074.f_509, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_92(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x2B952A1C251A8004(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xB4D59BAA683CC8ED(uVar3))
	{
		unk_0x1EFE169AA25C75A7(uVar3, &Var0);
		*uParam3 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam4 = unk_0x0D77CDCF403AEBD2((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_93(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar3) != unk_0x6CC163E30ECE0790(iParam3) || (unk_0x6CC163E30ECE0790(iVar3) == -1 && unk_0x6CC163E30ECE0790(iParam3) == -1))
					{
						if (Global_2417956.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417956.f_131[iVar2 /*3*/], Param0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_94(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xAE06B9E39EBDE049(uVar6[iVar2]))
		{
			if (!unk_0xA59F96B50B97E63C(uVar6[iVar2], 0))
			{
				if (func_95(uVar6[iVar2]))
				{
					Var3 = { unk_0x3E4D3CCC220BDFB1(uVar6[iVar2], 1) };
					fVar1 = unk_0x272784C60C397DB6(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405074.f_2927)
	{
		if (Global_969055.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969055.f_267)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_152[iVar2]))
				{
					if (!unk_0xA59F96B50B97E63C(Global_969055.f_152[iVar2], 0))
					{
						if (func_95(Global_969055.f_152[iVar2]))
						{
							Var3 = { unk_0x3E4D3CCC220BDFB1(Global_969055.f_152[iVar2], 1) };
							fVar1 = unk_0x272784C60C397DB6(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_95(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x86FB3A0D4870FE62(uParam0);
	switch (unk_0x991DEF33C181865B(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xD9FAB638FEAD2E31(Global_1574973[unk_0x460153A63B9477BC()]))
	{
		switch (unk_0x991DEF33C181865B(uVar0, Global_1574973[unk_0x460153A63B9477BC()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 0)
	{
		iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xD9FAB638FEAD2E31(Global_1574683[iVar1]))
			{
				switch (unk_0x991DEF33C181865B(uVar0, Global_1574683[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_96()
{
	if (func_97())
	{
		if ((unk_0xF9C3E2B9AA9E2294(Global_2405074.f_45.f_67) || unk_0x442D6659150AF4B3(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_97()
{
	if (Global_2405074.f_45.f_65 && !Global_2405074.f_45.f_301)
	{
		if (!func_87(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	return 0;
}

float func_98()
{
	if (func_97())
	{
		if ((unk_0xF9C3E2B9AA9E2294(Global_2405074.f_45.f_67) || unk_0x442D6659150AF4B3(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_99(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x160FF3CA76647557(Param0, fParam7)) || (fVar0 > 0f && unk_0x11C93463B5150761(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xF666C0F9CA439368(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xF666C0F9CA439368(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_100(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_104(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_103(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_102(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_102(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_17(Var0, Var0.x, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.x) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.x) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.x) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.x) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.x) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.x) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.x) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.x) + Var3 };
}

int func_103(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.x, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.x, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.x, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.x, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.x, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.x, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.x, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.x, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_104(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_105(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_31(Var1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410195[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410195[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410195[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410195[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_106(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405074.f_45.f_55)
	{
		if (unk_0x0B1B45E748AD48BA(Global_2405074.f_45.f_56))
		{
			if (!unk_0xECF201F09142F9D9(Param0))
			{
				uVar0 = unk_0xD5C5CDCF5230F2BA(Param0);
				if (unk_0x0B1B45E748AD48BA(uVar0))
				{
					iVar1 = unk_0x37F54B76CCB52554(uVar0);
					if (!iVar1 == Global_2405074.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_107(struct<3> Param0)
{
	switch (Global_2405074.f_2481)
	{
		case 0:
			return func_144(Param0, Global_2405074.f_2460, Global_2405074.f_2463, 0, 0);
			break;
		
		case 1:
			return func_60(Param0, Global_2405074.f_2474, Global_2405074.f_2477, 0, 0);
			break;
		
		case 2:
			return unk_0x3BC3A4E4A1827EEE(Param0, Global_2405074.f_2474, Global_2405074.f_2477, Global_2405074.f_2480, 0, 1);
			break;
	}
	return 0;
}

int func_108(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_19(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_111(iParam0))
			{
				if (Global_1590682[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_112(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405074.f_2619[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x658086F2B3C5E4E4(0.01f, 360f);
			func_19(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar4);
			if (func_49(Var1, &uVar0) || func_48(Var1))
			{
				Var1 = { *uParam0 };
				func_19(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_26(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x272784C60C397DB6(func_116(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_75(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_116(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam8 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_116(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_117() && Global_1590682[iVar0 /*883*/].f_854) && !func_4(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_79(iParam0);
}

var func_117()
{
	return Global_2451787.f_18;
}

int func_118(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_120(Param0, fParam3, iParam4, iParam5, 0) || func_119(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_119(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_79(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_79(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405074.f_3 = 0;
	if (!func_118(Param0, 0.5f, unk_0x460153A63B9477BC(), 0, 0))
	{
		Global_2405074.f_3++;
		if (bParam5)
		{
			if (func_174(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(Param0, fParam12))
				{
					Global_2405074.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_174(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(Param0, fParam12))
				{
					Global_2405074.f_3++;
					if (!func_122(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405074.f_3++;
						if (!func_33(Param0, 1056964608))
						{
							Global_2405074.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (func_174(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			if (!func_125(Param0, fParam12))
			{
				Global_2405074.f_3++;
				if (!func_122(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405074.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
		}
	}
	return 0;
}

int func_122(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x460153A63B9477BC() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (!func_124(unk_0x460153A63B9477BC(), iVar1, -2, 0))
				{
					if (func_123(func_79(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_123(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.x = SYSTEM::SIN(fParam6);
	Var0.f_1 = SYSTEM::COS(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x3BC3A4E4A1827EEE(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_125(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
		{
			if ((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && unk_0x6CC163E30ECE0790(iVar1) == -1) && !func_56(unk_0x460153A63B9477BC(), 1))
			{
				return 0;
			}
			else if ((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && !unk_0x460153A63B9477BC() == iVar1) || !func_124(unk_0x460153A63B9477BC(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_79(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0)
{
	if ((Global_2405074.f_486 == 9 || Global_2405074.f_486 == 9) || (Global_2405074.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_127(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam7 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam9) && bParam6) && func_81(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_79(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1)) && iVar1 != unk_0x460153A63B9477BC())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x6CC163E30ECE0790(iVar1) == iVar3)
					{
						if (unk_0x272784C60C397DB6(func_79(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (((func_56(iParam0, 1) || func_132(iParam0)) || func_131(iParam0, 0)) || func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_131(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_133(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6000[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6000[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_135(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var17, Param0) < SYSTEM::VDIST(Var20, Param0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_134(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412470 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412470, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_2412466 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_2412466, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			if (func_137(Global_2405074.f_2257[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405074.f_2257[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405074.f_2257[iVar0 /*4*/] };
					fVar4 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
				}
				func_72(Global_2405074.f_2257[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2405074.f_2485++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405074.f_2882)
	{
		func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
	}
}

int func_137(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_23(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_138(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_61(&Param0, &Param3);
	fVar0 = (Param3.x - Param0.x);
	*uParam6 = (Param0.x + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_139()
{
	return Global_1310987.f_4;
}

void func_140(var uParam0, var uParam1)
{
	func_181();
	func_173(uParam0, uParam1);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_142(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_143();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_143()
{
	return Global_1312763;
}

bool func_144(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_167(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_146(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_146(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412480.f_162 = 0;
	Global_2412480.f_163 = 0;
	Global_2412480.f_164 = -99;
	Global_2412480.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412480.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x2B952A1C251A8004(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB4D59BAA683CC8ED(iVar8))
		{
			unk_0x1EFE169AA25C75A7(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412480.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412480.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xEF445D270DD603D8(iVar8)) || unk_0x061CA1649D051C95(iVar8))
			{
				unk_0x4645311C71338838(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_114(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_165(Var1))
									{
										Var1 = { func_161(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_33(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_160(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_156(Var1, fVar4, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_155(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_174(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_174(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_152(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162)
																										{
																											Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412480.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412480.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412480.f_162 == 0)
																									{
																										Global_2412480[0 /*3*/] = { Var1 };
																										Global_2412480.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_151(Var1, fVar4, iVar16);
																													iVar16 = Global_2412480.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412480.f_162++;
																									if (Global_2412480.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412480[Global_2412480.f_162 /*3*/] = { Var1 };
																									Global_2412480.f_121[Global_2412480.f_162] = fVar4;
																									Global_2412480.f_162++;
																									if (func_160(Var1, uParam2))
																									{
																										Global_2412480.f_163++;
																									}
																									if (Global_2412480.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412480.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
						{
							func_149(0, uParam2);
						}
						iVar26 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412480[0 /*3*/] };
						uVar30 = Global_2412480.f_121[0];
						Global_2412480[0 /*3*/] = { Global_2412480[iVar26 /*3*/] };
						Global_2412480.f_121[0] = Global_2412480.f_121[iVar26];
						Global_2412480[iVar26 /*3*/] = { Var27 };
						Global_2412480.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_148(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_166(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_147(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412480.f_164 = iVar8;
	}
	return 0;
}

void func_147(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_118(*(uParam0[iVar2 /*4*/]), 5f, unk_0x460153A63B9477BC(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_148(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x344C570D6F8700DF((1 + iParam0), (40 + iParam0));
		unk_0x1485BFBB1EC6FE22(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_161(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_165(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_149(int iParam0, var uParam1)
{
	if (!func_160(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_150(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_149(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_149(iParam0 + 1, uParam1);
	}
}

void func_150(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412480[iParam0 /*3*/] = { Global_2412480[iParam0 + 1 /*3*/] };
			Global_2412480.f_121[iParam0] = Global_2412480.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_151(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412480[iParam4 /*3*/] };
	uVar3 = Global_2412480.f_121[iParam4];
	Global_2412480[iParam4 /*3*/] = { Param0 };
	Global_2412480.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412480.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_151(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_152(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_80(iVar5))
		{
			Var1 = { func_79(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_153(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam9 == 0)
		{
			if (func_26(iVar1, bParam5, bParam6))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam8 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam10) && bParam7) && func_81(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iVar1), 0))
								{
									uVar3 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar1), 0);
									if (unk_0xAE06B9E39EBDE049(uVar3) && !unk_0xA59F96B50B97E63C(uVar3, 0))
									{
										iVar4 = unk_0x36FE6D3220816ADA(uVar3);
										Var5 = { unk_0x3E4D3CCC220BDFB1(uVar3, 0) };
										fVar8 = unk_0xEF7858F25585F853(uVar3);
										if (func_154(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_34(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam4 == joaat("kosatka") || iParam9 == joaat("kosatka")))
	{
		func_35(Param0, fParam3, iParam4, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949);
		func_35(Param5, fParam8, iParam9, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949);
		if (unk_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_36(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
		Var20 = { 0f, Var17.f_1, 0f };
		func_20(&Var20, 0f, 0f, fParam3);
		Var23 = { 0f, Var14.f_1, 0f };
		func_20(&Var23, 0f, 0f, fParam3);
		Var26 = { (unk_0x0D77CDCF403AEBD2((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
		func_20(&Var26, 0f, 0f, fParam3);
		Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
		Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
		Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
		Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
		Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_34(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam10)
		{
			if (func_154(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	uVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(uVar1) && !unk_0xA59F96B50B97E63C(uVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(uVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(uVar1, 0) };
		fVar6 = unk_0xEF7858F25585F853(uVar1);
		if (func_154(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(uVar1) && !unk_0xA59F96B50B97E63C(uVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(uVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(uVar1, 0) };
		fVar6 = unk_0xEF7858F25585F853(uVar1);
		if (func_154(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_159(Param0, fParam3, iParam4, iParam5, iParam6) || func_157(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_158(Param0, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_154(Param0, fParam3, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam3, 1008981770);
	fVar1 = func_41(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam5, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_34(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_34(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
				{
					if (func_34(func_79(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_144(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_161(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_164(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4645311C71338838(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x7F270824E67C2031(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x442D6659150AF4B3(iParam11) && func_163(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_164(Param0, *uParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xE7E6F3B6B48E7F23(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_162(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_36(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_163(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xE5CC8E2D904E42CE(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_16(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_31(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_31(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_144(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2405074.f_1748 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412480.f_162 = 0;
		Global_2412480.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2412480.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_170(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_169();
		}
		else
		{
			func_168();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405074.f_1748)
		{
			iVar2 = Global_2405074.f_2154[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405074.f_1749[iVar2 /*4*/] };
				fVar6 = Global_2405074.f_1749[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_156(Var3, fVar6, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_155(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_174(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_174(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_152(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162)
															{
																Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2412480.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2412480.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412480.f_162 == 0)
														{
															Global_2412480[0 /*3*/] = { Var3 };
															Global_2412480.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_151(Var3, fVar6, iVar7);
																		iVar7 = Global_2412480.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
													else
													{
														Global_2412480[Global_2412480.f_162 /*3*/] = { Var3 };
														Global_2412480.f_121[Global_2412480.f_162] = fVar6;
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412480.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
				{
					func_149(0, uParam2);
				}
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
				Var15 = { Global_2412480[0 /*3*/] };
				uVar18 = Global_2412480.f_121[0];
				Global_2412480[0 /*3*/] = { Global_2412480[iVar0 /*3*/] };
				Global_2412480.f_121[0] = Global_2412480.f_121[iVar0];
				Global_2412480[iVar0 /*3*/] = { Var15 };
				Global_2412480.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405074.f_1748 > 0)
			{
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
				*uParam0 = { Global_2405074.f_1749[iVar0 /*4*/] };
				*uParam1 = Global_2405074.f_1749[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		iVar1 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		iVar2 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[iVar1];
		Global_2405074.f_2154[iVar1] = Global_2405074.f_2154[iVar2];
		Global_2405074.f_2154[iVar2] = uVar3;
		iVar0++;
	}
}

void func_170(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_171(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_171(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405074.f_1748)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405074.f_1749[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_172(int iParam0)
{
	return iParam0 == 50;
}

void func_173(var uParam0, var uParam1)
{
	unk_0x752A19C36727F403(uParam0, uParam1, 0.1f);
	Global_2405074.f_2468 = unk_0x354AD085195C5FA6();
	Global_2405074.f_2466 = 1;
	Global_2405074.f_2469 = unk_0x6CAAB7E78B5D978A();
}

int func_174(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x11C93463B5150761(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_127(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_115(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

void func_175()
{
	func_180();
	func_179();
	func_178();
	func_177();
	func_176();
}

void func_176()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408010[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_177()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405074.f_2485.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_178()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405074.f_2485.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_179()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405074.f_2485.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_180()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405074.f_2485 = { Var0 };
}

void func_181()
{
	if (Global_2405074.f_2466)
	{
		if (unk_0x354AD085195C5FA6() == Global_2405074.f_2468)
		{
			unk_0x6B83A91F1F7335F5();
		}
		else
		{
			unk_0x6B83A91F1F7335F5();
		}
		Global_2405074.f_2466 = 0;
	}
}

int func_182(bool bParam0)
{
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_183(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	struct<3> Var63;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_9(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var63 = { Param0 - Var0[0 /*3*/] };
			if (Var63.f_2 > uParam6->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_184(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_186(uParam0, 0, 0);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

void func_187()
{
	switch (Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2)
	{
		case 0:
			func_212();
			func_210();
			if (func_199())
			{
				func_191();
				func_190();
				func_188(35);
				Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_190();
				Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_188(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_189() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_189()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_190()
{
	if (unk_0x8F678487EEBD8CE4(uLocal_170))
	{
		unk_0x93370FA10F15BE44(&uLocal_170);
	}
}

void func_191()
{
	if (!unk_0xCE990E643CD9D0E5(Global_2440049.f_4006, 0))
	{
		unk_0xBE20AB8238688965(&(Global_2440049.f_4006), 0);
		func_192();
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_2440049.f_4006), 1);
	}
}

void func_192()
{
	func_193(1188, -1);
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_197(iParam0, func_198(iParam1), 0);
	iVar0++;
	if (!func_196(iParam0))
	{
		func_195(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_194(iParam0, iVar0, iParam1, 1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_198(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_198(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_198(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_198(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_198(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_198(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_198(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_198(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_198(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_198(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_198(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_198(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_198(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_198(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_198(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_198(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_198(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_198(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_198(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_198(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_198(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_198(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_198(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_198(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_198(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_198(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_198(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_198(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_198(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_198(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_198(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_198(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_198(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_198(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_198(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_198(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_198(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_198(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_198(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_198(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_198(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_198(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_198(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_198(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_198(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_198(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_198(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_198(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_198(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_198(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_198(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_198(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_196(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
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
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_199()
{
	struct<14> Var0;
	
	if (unk_0xF7DE07F319727299(Local_60.f_2))
	{
		if (unk_0x3D70CCF2C9B362CD(Local_60.f_2))
		{
			if (unk_0x0A43129B43E05B32(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), unk_0x9B0761B4C3EB8BC7()) && func_209(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
				if (unk_0x8F678487EEBD8CE4(uLocal_170))
				{
					unk_0x93370FA10F15BE44(&uLocal_170);
				}
				if (!func_207(1))
				{
					func_202("ABB_BOXCT");
				}
				Var0.f_2 = 154008137;
				Var0.f_10 = unk_0x460153A63B9477BC();
				Var0.f_3 = uLocal_169;
				func_200(Var0, func_201(1));
				unk_0xBE20AB8238688965(&(Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_200(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam14 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam14);
	}
}

int func_201(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_26(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_202(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_203(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_203(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_206() || !unk_0xFC559366953F62B3()) || !func_141(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_204(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_205(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_206()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1627097 > 0;
		
		case 2:
			return Global_1627097.f_1 > 0;
		
		case 3:
			return Global_1627097.f_2 > 0;
		
		case 4:
			return Global_1627097.f_4 > 0;
		
		case 5:
			return Global_1627097.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_208(var uParam0)
{
	var uVar0;
	
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		if (!unk_0xF05B7723022657B3(*uParam0))
		{
		}
	}
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		uVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x5896A99BC0571F36(&uVar0);
	}
}

int func_209(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		unk_0x5F00FA3094B612F5(uParam0);
		return unk_0xF05B7723022657B3(uParam0);
	}
	return 0;
}

void func_210()
{
	if (!unk_0x8F678487EEBD8CE4(uLocal_170))
	{
		if (unk_0xF7DE07F319727299(Local_60.f_2))
		{
			uLocal_170 = unk_0x2BE000892D65EA2A(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2));
			if (func_211())
			{
				unk_0xFA81E0FBD7F5ACA0(uLocal_170, 0.85f);
			}
			else
			{
				unk_0xFA81E0FBD7F5ACA0(uLocal_170, 1.2f);
			}
			unk_0xE7B8403ABCA0391D(uLocal_170, 403);
			unk_0xECC9A00CF1181EC2(uLocal_170, 2);
			unk_0xB023F5C66F5716C7(uLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_211()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

void func_212()
{
	var uVar0;
	
	if (!unk_0xDABD547F0DF2906C())
	{
		uVar0 = func_197(1190, -1, 0);
		if (!unk_0xCE990E643CD9D0E5(uVar0, 14))
		{
			unk_0xBE20AB8238688965(&uVar0, 14);
			func_195(1190, uVar0, -1, 1, 0);
		}
	}
}

int func_213()
{
	return Local_60;
}

int func_214()
{
	unk_0x78FCB2E22C41B9D5(joaat("prop_drug_package_02"));
	if (unk_0x7D167B9A0CCDA347(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	return Local_71[iParam0 /*3*/];
}

int func_216()
{
	var uVar0;
	
	func_223(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(159))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (unk_0x7B70881748D166CD(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_58())
	{
		case 0:
			return func_218();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_218()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_219()
{
	return Global_2451787.f_696;
}

int func_220(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_2462250;
}

bool func_222()
{
	return Global_2451787.f_691;
}

void func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_224(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_224(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_26(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(uVar3))
			{
				if (unk_0x47DBF174A0CB9D55(uVar3, 0))
				{
					uVar4 = unk_0xA5D5B1042E8F47BD(uVar3, 0);
					if (unk_0x292280AF1BBBD6AC(uVar4, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_225(uVar4, &bVar5))
						{
							unk_0xADCDA8AF77C0D19D(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE730EAF558C97567(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_225(var uParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (!unk_0x1758275D343D5BA3(uParam0))
		{
			if (unk_0x38CC98C4A0688263(uParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(uParam0)))
				{
					unk_0x4F3C4F457D44BB0F(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(uParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_226()
{
	SYSTEM::WAIT(0);
}

int func_227(int iParam0)
{
	return Global_1590682[iParam0 /*883*/];
}

void func_228()
{
	Global_1388305 = -1;
	if (unk_0x8F678487EEBD8CE4(uLocal_170))
	{
		unk_0x93370FA10F15BE44(&uLocal_170);
	}
	func_231();
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (unk_0xF7DE07F319727299(Local_60.f_2) && unk_0xF05B7723022657B3(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	unk_0xD39E529EBE5DB04F();
}

void func_230()
{
	Global_2540384.f_897 = 0;
	Global_2540384.f_897.f_1 = { 0f, 0f, 0f };
	Global_2540384.f_897.f_4 = 0f;
	Global_2540384.f_897.f_8 = 0;
	unk_0xD2459066EA58CE43(&(Global_2540384.f_897.f_7), 0);
}

void func_231()
{
	if (unk_0xCE990E643CD9D0E5(uLocal_168, 4))
	{
		unk_0x39B3FA55B5C6CFFE(unk_0x460153A63B9477BC(), 0.72f);
		unk_0x5D3F0C0523D3F11D(unk_0x460153A63B9477BC(), 1f, 1);
		unk_0xE7D74FCE32F704E7(unk_0x460153A63B9477BC(), 1f);
		unk_0x69CF6356D3CA1533(unk_0x460153A63B9477BC(), 1f);
		func_232(1);
		unk_0xD2459066EA58CE43(&uLocal_168, 5);
		unk_0xD2459066EA58CE43(&uLocal_168, 7);
		unk_0xD2459066EA58CE43(&uLocal_168, 4);
	}
}

void func_232(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(iParam0, 0);
	unk_0x50E637E6CAC936B2(uVar0);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(1);
	func_236(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_60, 11);
	unk_0xBB96A3ECD45D0317(&Local_71, 97);
	if (!func_235())
	{
		return 0;
	}
	unk_0x3A396632EB359434(0);
	if (unk_0xAFF96FDC3971E7EA())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1388305 = Local_60.f_7;
		Local_60.f_3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0) };
		if (!func_4(Global_2540384.f_897.f_1))
		{
			unk_0xBE20AB8238688965(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = unk_0xD0E70037A973A810();
	Local_71[unk_0x59E2AD1A8ACEDA31() /*3*/] = 0;
	return 1;
}

int func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_222())
		{
			return 0;
		}
		if (func_220(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(157))
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_229();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237()
{
	return Global_1312872;
}

void func_238(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_229();
	}
	unk_0xA88557896B79E30D(uParam0, 0, Param1.f_16);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

