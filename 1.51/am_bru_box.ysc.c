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
	sLocal_18 = "NULL";
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
	if (unk_0x8CD06866876216F2())
	{
		if (!func_232(ScriptParam_0))
		{
			func_226();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_225(unk_0xD803B885F5E47A62()) != 1 && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_859.f_7, 0))
			{
				func_226();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_224();
		if (func_214())
		{
			func_226();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_225(unk_0xD803B885F5E47A62()) != 1 && Global_1626726 == 0)
			{
				func_226();
			}
		}
		if (unk_0x09BE1E6DF7B80B43() != bLocal_173)
		{
			func_226();
		}
		unk_0x0F6D9B8ED0147392();
		switch (func_213(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_212())
				{
					if (func_211() == 1)
					{
						vLocal_71[unk_0x57270EE11514DC67()] = 1;
					}
					else if (func_211() == 4)
					{
						vLocal_71[unk_0x57270EE11514DC67()] = 3;
					}
				}
				break;
			
			case 1:
				if (func_211() == 1)
				{
					func_185();
				}
				else if (func_211() == 4)
				{
					vLocal_71[unk_0x57270EE11514DC67()] = 3;
				}
				if (vLocal_71[unk_0x57270EE11514DC67()].f_2 == 0)
				{
					if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_60.f_3, 500f, 500f, 500f, 0, true, 0) && func_225(unk_0xD803B885F5E47A62()) != 1) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_859.f_7, 0))
					{
						vLocal_71[unk_0x57270EE11514DC67()] = 4;
					}
				}
				break;
			
			case 3:
				func_183(&(Local_60.f_9));
				if (func_182(&(Local_60.f_9)))
				{
					vLocal_71[unk_0x57270EE11514DC67()] = 4;
				}
				break;
			
			case 2:
				vLocal_71[unk_0x57270EE11514DC67()] = 4;
			
			case 4:
				func_226();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_211())
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
	if (Local_60.f_7 >= 32 && func_225(unk_0xD803B885F5E47A62()) == 1)
	{
		if (func_4(Global_2537071.f_859.f_1))
		{
			return 1;
		}
	}
	if (func_3(unk_0xD803B885F5E47A62()))
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

int func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
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
			if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2) || Local_60.f_6 != -1)
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
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_71[iVar0].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 7))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_71[iVar0].f_1, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_212())
		{
			if (unk_0x081C8BC5094A7B76(1))
			{
				fVar5 = 250f;
				vVar6 = { Local_60.f_3 };
				if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 8))
				{
					vVar0 = { Global_2537071.f_859.f_1 };
					fVar3 = Global_2537071.f_859.f_4;
				}
				if (func_225(unk_0xD803B885F5E47A62()) == 7)
				{
					iVar12 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
					if (Global_4456448.f_271[iVar12].f_2187[0].f_23 > 0f)
					{
						vVar6 = { Global_4456448.f_271[iVar12].f_2187[0].f_16 };
						vVar9 = { Global_4456448.f_271[iVar12].f_2187[0].f_19 };
						fVar5 = Global_4456448.f_271[iVar12].f_2187[0].f_23;
						iVar4 = 1;
					}
					else if (Global_4456448.f_271[iVar12].f_2187[0].f_22 > 0f)
					{
						vVar6 = { Global_4456448.f_271[iVar12].f_2187[0].f_13 };
						fVar5 = Global_4456448.f_271[iVar12].f_2187[0].f_22;
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
					if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 8) || func_181(vVar6, fVar5, &vVar0, &fVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_225(unk_0xD803B885F5E47A62()) == 1)
						{
							Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(-2136239332, vVar0, true, -1964997422));
						}
						else
						{
							Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xE2E04D27E0E84BD7(-2136239332, vVar0, 1, -1964997422));
						}
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_2), fVar3);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 8) || func_8(vVar6, vVar9, fVar5, &vVar0, &fVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_225(unk_0xD803B885F5E47A62()) == 1)
					{
						Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(-2136239332, vVar0, true, -1964997422));
					}
					else
					{
						Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xE2E04D27E0E84BD7(-2136239332, vVar0, 1, -1964997422));
					}
					unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_2), fVar3);
				}
			}
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7, float fParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
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
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { vParam0 };
	Var34.f_11 = { vParam3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0] };
		*fParam8 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (unk_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == unk_0x0D0A574C76D769AC())
				{
					if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_180(0))
					{
						return 0;
					}
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_180(0))
				{
					return 0;
				}
			}
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_179();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_180(0))
	{
		Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
		func_173();
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
				fVar4 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x10FEEAFF01E32639(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	vVar11 = { vVar8 + Vector(-0,1f, -0,1f, -0,1f) };
	vVar14 = { vVar8 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2405072.f_2456)
	{
		unk_0xDEED9606C7D093F7();
		unk_0x0FB2CEE58DA4A6EE();
		func_179();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_172(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*uParam2[0] = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_171(vVar8.x, vVar8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (unk_0xD1B4D22E0BA9B0C8(fVar4, fVar5, fVar6, fVar7) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*uParam2[0] = { uParam0->f_18 };
					}
					else
					{
						*uParam2[0] = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = -1008861746;
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
						Var26.f_38[iVar17] = { uParam1->f_13[iVar17] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_170(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_145(uParam2[0], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_144(*uParam2[0], *uParam0, uParam0->f_4, 1, 1))
						{
							*uParam2[0] = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((unk_0xF8A3B10A1B8ACCDD(vVar11, vVar14) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || unk_0x7D293360C866EB8E(vVar11, vVar14) == 0)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_141(unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_140(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_139() || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (unk_0xC79C8A78EC708587())
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_173();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
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
							if (unk_0xAFED075B5A62767B(unk_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
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
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							unk_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *uParam2[0] };
							uParam2->f_16[0] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar8)))
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
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					unk_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*uParam2[0]) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (vmag(*uParam2[0]) == 0f)
						{
							if (!vmag(Global_2405072.f_2617[iVar17]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_144(Global_2405072.f_2617[iVar17], *uParam0, uParam0->f_4, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 1:
										if (func_60(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 2:
										if (unk_0x0399732A9EBC368E(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (vmag(*uParam2[0]) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*uParam2[0] = { vVar1 };
					}
				}
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (!vmag(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *uParam2[iVar17] };
						uParam2->f_16[iVar17] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_10(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*uParam2[0] = { Global_2405072.f_2458 };
				func_12(uParam2[0], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_179();
			return 1;
		}
		Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*uParam0[iVar0] = { uParam1[iVar0]->f_4 };
		uParam0->f_16[iVar0] = uParam1[iVar0]->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0];
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
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = -1008861746;
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
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_28(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64] = { uParam6->f_13[iVar64] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(unk_0xD803B885F5E47A62(), 0))
		{
			Var4.f_9 = 1;
		}
		func_145(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_28(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (unk_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
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
					vVar0 = { vVar70 + vVar73 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (unk_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_22(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0].f_12)
						{
							*uParam0 = { Global_2409984[iVar0].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_14(&vVar1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_13(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_14(&vVar1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
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
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
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

void func_15(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_17(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
	fVar9 = (vmag(vVar3) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_16(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = vdist(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0,5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		fVar9 = (vmag(vVar29) * sin(unk_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_16(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (vdist(vVar10, *uParam0, uParam0->f_1, 0f) < vdist(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vVar0 = { *uParam0 };
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
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

void func_19(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_20(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_19(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_18(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_15(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_144(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_60(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x0399732A9EBC368E(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_22(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_144(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_60(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
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
				if (unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_23(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (vdist(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_27())
			{
				return func_25(Global_2425662[iParam0].f_310.f_5) == 12;
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
		case 79:
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
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

int func_28(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_59(vParam0, uParam3))
	{
		if (func_29(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xB885EF0389689E54(vParam0, 0, uParam3, iParam4))
	{
		if (func_29(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(vector3 vParam0, var uParam3, int iParam4, bool bParam5)
{
	fVar0 = vdist(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2405072.f_509, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	vVar1 = { *uParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_31(vVar1, &(Global_2410189[iVar4][iVar0])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410189[iVar4][iVar0], Global_2410189[iVar4][iVar0].f_3, Global_2410189[iVar4][iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_31(vVar1, &(Global_2410189[8][iVar0])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410189[8][iVar0], Global_2410189[8][iVar0].f_3, Global_2410189[8][iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(vector3 vParam0, var uParam3)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
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

int func_33(vector3 vParam0, float fParam3)
{
	if (func_42(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0].f_15 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0].f_12 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_34(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_34(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0,5f))
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

int func_34(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	if (vdist(vParam0, vParam3) < func_41(iParam7, 1008981770))
	{
		func_35(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_36(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = unk_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
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
	if (vmag(*uParam1) <= 0,01f || vmag(*uParam2) <= 0,01f)
	{
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_38(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0]), &(Global_1315823[iVar0]));
		}
		if (vmag(Global_1315816[iVar0]) <= 0,01f || vmag(Global_1315823[iVar0]) <= 0,01f)
		{
			Global_1315816[iVar0] = (0f - (fParam4 * 0,5f));
			Global_1315823[iVar0] = (0f + (fParam4 * 0,5f));
			Global_1315816[iVar0].f_1 = (0f - (fParam3 * 0,5f));
			Global_1315823[iVar0].f_1 = (0f + (fParam3 * 0,5f));
			Global_1315816[iVar0].f_2 = (0f - (fParam5 * 0,5f));
			Global_1315823[iVar0].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0] - Global_1315816[iVar0]);
		Global_1315833[iVar0] = (Global_1315823[iVar0].f_1 - Global_1315816[iVar0].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0].f_2 - Global_1315816[iVar0].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0,5f);
	Global_1315844 = (Global_1315839 * 0,5f);
	Global_1315841.f_1 = ((((0,5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0,5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0,5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0,5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_39(int iParam0)
{
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
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (sqrt(((((vVar6.x * 0,5f) * (vVar6.x * 0,5f)) + ((vVar6.y * 0,5f) * (vVar6.y * 0,5f))) + ((vVar6.z * 0,5f) * (vVar6.z * 0,5f)))) + fParam1);
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
	if (Global_1590535[iParam0] == -1)
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
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_45(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_52(vParam0))
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
		if (vdist(*uParam3, *uParam4[iVar0]) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_46(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405072.f_2728[iVar0]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_14(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_14(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_48(vector3 vParam0)
{
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(vector3 vParam0, var uParam3)
{
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_22(vParam0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
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
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1676377.f_474;
}

int func_52(vector3 vParam0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_56(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_55(vParam0, 1008981770))
			{
				if (!func_13(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_53(&(Global_2405072.f_45[iVar0])) };
					if (!func_13(&vVar1, 0, 0, 0, 1))
					{
						if (!func_13(&vParam0, 0, 0, 0, 1))
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
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_54(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_22(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_22(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
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
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_30768;
}

int func_59(vector3 vParam0, var uParam3)
{
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = vdist(Global_2405072.f_2255[iVar0], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405072.f_2255[iVar1] };
			return 1;
		}
	}
	return 0;
}

int func_60(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_61(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, var uParam1)
{
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

int func_62(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar3 - vVar0) > 100f)
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
	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_136(uParam1, uParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (uParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*uParam0[0] = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*uParam0[0] = { uParam1->f_18 };
							}
							else
							{
								*uParam0[0] = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_11(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
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
		else if (unk_0xC79C8A78EC708587())
		{
			if (!unk_0xFA2A5CC35287E5B8())
			{
				if (unk_0x4FC9A1459CD5C324())
				{
					func_136(uParam1, uParam2);
					Global_2405072.f_2483.f_1 = unk_0xEAD4FBE79458D592();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x0FB2CEE58DA4A6EE();
				func_136(uParam1, uParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
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
		func_133(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (uParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
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
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || unk_0xC79C8A78EC708587())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE0463990929F9949(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57,29578f);
					}
					else
					{
						unk_0xB2C5D6F8163D4A45(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x00C66A3E05649B75(iVar4);
					}
					else
					{
						unk_0xD38A4489EFBF773A(iVar4, &iVar5);
					}
					func_72(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
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
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_66(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
			}
			if (uParam1->f_5 && func_11(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_10(uParam0, &(Global_2405072.f_2483.f_6));
					func_65(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_12(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_65(*uParam0[0]);
					return 1;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_10(uParam0, &(Global_2405072.f_2483.f_6));
				func_65(*uParam0[0]);
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x09AC81E49EA267F7(0, Global_2405072.f_2483.f_1);
				unk_0xE0463990929F9949(iVar4, uParam0[0], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_65(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_12(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_65(*uParam0[0]);
					return 1;
				}
			}
			else
			{
				*uParam0[0] = { Global_2405072.f_2458 };
				func_12(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
				func_65(*uParam0[0]);
				return 1;
			}
		}
	}
	else
	{
		*uParam0[0] = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_11(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
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
			func_12(uParam0[0], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
		func_65(*uParam0[0]);
		return 1;
	}
	return 0;
}

void func_65(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0)] = { Global_2405072.f_2617[(3 - iVar0 + 1)] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0] = { vParam0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405072.f_486) && func_71() < 4096)
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

void func_67(var uParam0, vector3 vParam1, vector3 vParam4)
{
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0].f_4, vParam1);
			fVar3 = vdist(Global_2408006[iVar0].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, vector3 vParam1)
{
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0].f_1;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_2 < fVar1 && Global_2408006[iVar0].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0].f_2;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > iVar1)
		{
			iVar1 = Global_2408006[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (unk_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
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
		if (func_129(unk_0xD803B885F5E47A62()))
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
		if (!func_128(vParam0, 1084227584, 1123024896, 0))
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
		if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 20f))
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
		if (!func_127(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (vmag(uParam5->f_13[iVar11]) > 0f)
		{
			if (!vdist(vParam0, uParam5->f_13[iVar11]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((vmag(uParam5->f_23) > 0f && vmag(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x0399732A9EBC368E(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, true))
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
		if (func_121(vParam0, fParam3, uParam4->f_15, func_126(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_118(vParam0, 25f, unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_46(vParam0, 0,5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0, 0, 0, 1) && !func_114(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&vParam0, 0))
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
	else if (!func_113(vParam0, 2,5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_112(unk_0xD803B885F5E47A62()) && func_110(unk_0xD803B885F5E47A62())))
		{
			if (!func_109(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216))
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
		if (!func_110(unk_0xD803B885F5E47A62()))
		{
			if (!func_108(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824))
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
	if (func_107(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_11(Global_2405072.f_486))
			{
				if (func_55(vParam0, 0,01f))
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
		if (func_106(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_47(&vParam0, 0, 0))
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
	if (!func_30(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_105(vParam0, &vVar17, &vVar20, &fVar23);
			if (!func_100(&(Global_2405072.f_45[iVar16]), vVar17, vVar20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0,3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_99(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && uParam4->f_5)
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
				fVar0 = func_91(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_91(vParam0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_89(vParam0);
			}
			uVar7 = func_78(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_77(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24])
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
							fVar0 = func_91(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_91(vParam0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_89(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_76(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar0 > Global_2405072.f_2483.f_6[iVar24].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_76(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar3 > Global_2405072.f_2483.f_6[iVar24].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_76(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
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
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
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

float func_74(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_26(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
				{
					fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0));
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
			if (!func_141(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if (func_75(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
								{
									fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam7 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
							{
								fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0));
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
		return sqrt(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam10)
{
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10] };
	Global_2405072.f_2483.f_6[iParam10] = { Param0 };
	if (iParam10 < 4)
	{
		func_76(Var0, iParam10 + 1);
	}
}

void func_77(struct<10> Param0)
{
	Var1.f_2 = 1176256410;
	iVar11 = func_71();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] < iVar11)
		{
			Global_2408006[iVar0] = { Var1 };
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
		if (Global_2408006[iVar0] == 0)
		{
			Global_2408006[iVar0] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999,9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13] = { Param0 };
	}
}

float func_78(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_26(iVar11, 1, 1) || (iParam7 == 1 && func_26(iVar11, 0, 0)))
		{
			if (!iVar11 == unk_0xD803B885F5E47A62() || iParam5 == 1)
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
					if (unk_0x08067D4957B73C02(iVar11) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x08067D4957B73C02(iVar11) == -1 || !func_56(unk_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar11) || !bParam6)
					{
						if (func_75(iVar11))
						{
							vVar5 = { func_79(iVar11) };
							if (!iVar11 == unk_0xD803B885F5E47A62())
							{
								vVar8 = { unk_0x088E3BBDA11FE175(unk_0x9539D44F3E4492F6(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar5, 1);
							fVar2 = unk_0x0EB28750412C3A5A(vParam0, vVar8, 1);
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
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_87(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_42(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_86(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
				{
					if (!func_42(unk_0xD803B885F5E47A62(), 1, 0))
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
	if (func_85(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_84(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_82(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
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
		return Global_1628237[iParam0].f_11;
	}
	return func_27();
}

struct<13> func_84(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_84(iParam0) };
		Global_2513231 = { func_84(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
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

int func_87(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
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

bool func_88()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

float func_89(vector3 vParam0)
{
	return func_90(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_90(vector3 vParam0, var uParam3, var uParam4)
{
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (uParam3[iVar0]->f_9)
		{
			fVar1 = 0f;
			switch (uParam3[iVar0]->f_10)
			{
				case 0:
					fVar1 = vdist(*uParam3[iVar0], vParam0);
					fVar1 = (fVar1 - (uParam3[iVar0]->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam3[iVar0]->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0] - vParam0.x));
					}
					else if (vParam0.x > uParam3[iVar0]->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - uParam3[iVar0]->f_3));
					}
					if (vParam0.y < uParam3[iVar0]->f_1)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_1 - vParam0.y));
					}
					else if (vParam0.y > uParam3[iVar0]->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - uParam3[iVar0]->f_3.f_1));
					}
					if (vParam0.z < uParam3[iVar0]->f_2)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_2 - vParam0.z));
					}
					else if (vParam0.z > uParam3[iVar0]->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - uParam3[iVar0]->f_3.f_2));
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

float func_91(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (to_float(iParam9) / to_float(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(vdist(vParam0, vParam3), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_78(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(vParam0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !func_56(unk_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(vParam0, unk_0xD803B885F5E47A62(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_92(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(vdist(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_92(vector3 vParam0, var uParam3, var uParam4)
{
	iVar3 = unk_0x8529439EA7EEBA65(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x5DD62183BBF151CD(iVar3))
	{
		unk_0x8502D8EBA9E78216(iVar3, &vVar0);
		*uParam3 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = unk_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_93(vector3 vParam0, int iParam3, int iParam4)
{
	fVar0 = 999999,9f;
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
					if (unk_0x08067D4957B73C02(iVar3) != unk_0x08067D4957B73C02(iParam3) || (unk_0x08067D4957B73C02(iVar3) == -1 && unk_0x08067D4957B73C02(iParam3) == -1))
					{
						if (Global_2417897.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417897.f_131[iVar2], vParam0);
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

float func_94(vector3 vParam0)
{
	iVar39 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xC844350D5D58C99A(uVar6[iVar2]))
		{
			if (!unk_0x437347B10A200C4B(uVar6[iVar2], 0))
			{
				if (func_95(uVar6[iVar2]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(uVar6[iVar2], 1) };
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!unk_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_95(Global_969031.f_152[iVar2]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], 1) };
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 1);
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

int func_95(int iParam0)
{
	iVar0 = unk_0xD09DF7101876AFB8(iParam0);
	switch (unk_0x256517DE1B6755D4(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x1C43D178459D5730(Global_1574967[unk_0xD803B885F5E47A62()]))
	{
		switch (unk_0x256517DE1B6755D4(iVar0, Global_1574967[unk_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()] == 0)
	{
		iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (unk_0x256517DE1B6755D4(iVar0, Global_1574677[iVar1]))
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
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
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
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_87(unk_0xD803B885F5E47A62()))
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
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
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

int func_99(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x558ADED8B93EA0F6(vParam0, fParam7)) || (fVar0 > 0f && unk_0xEA19D5D9230DBB67(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_100(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_104(*uParam0, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_103(*uParam0, uParam0->f_3, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, float fParam13)
{
	func_102(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar25], vParam7, vParam10, fParam13, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_102(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0,01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(vmag(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0,5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*uParam7[0] = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*uParam7[1] = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*uParam7[2] = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*uParam7[3] = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*uParam7[4] = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*uParam7[5] = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*uParam7[6] = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*uParam7[7] = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_103(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)
{
	vVar0[0] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar25], vParam6, vParam9, fParam12, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_104(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	vVar0[0] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar13], vParam4, vParam7, fParam10, 0, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_105(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	vVar1 = { vParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_31(vVar1, &(Global_2410189[iVar4][iVar0])))
		{
			*uParam3 = { Global_2410189[iVar4][iVar0] };
			*uParam4 = { Global_2410189[iVar4][iVar0].f_3 };
			*uParam5 = Global_2410189[iVar4][iVar0].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_31(vVar1, &(Global_2410189[8][iVar0])))
		{
			*uParam3 = { Global_2410189[8][iVar0] };
			*uParam4 = { Global_2410189[8][iVar0].f_3 };
			*uParam5 = Global_2410189[8][iVar0].f_6;
			return;
		}
		iVar0++;
	}
}

int func_106(vector3 vParam0)
{
	if (Global_2405072.f_45.f_55)
	{
		if (unk_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!unk_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = unk_0xFBD08BECC9B87937(vParam0);
				if (unk_0x31609A585163CBAC(iVar0))
				{
					iVar1 = unk_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
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

int func_107(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_144(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
			break;
		
		case 1:
			return func_60(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, true);
			break;
	}
	return 0;
}

int func_108(vector3 vParam0, var uParam3, var uParam4, float fParam5)
{
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = (uParam3[iVar1]->f_3 + fParam5);
		if (vdist(*uParam3[iVar1], vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *uParam4[iVar1] };
		vVar5 = { uParam4[iVar1]->f_3 };
		fVar8 = uParam4[iVar1]->f_6;
		if (unk_0x0399732A9EBC368E(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist(uParam1[iVar0]->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, uParam1[iVar0]->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
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
				if (Global_1590535[iParam0] == 0)
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
	return Global_1590535[iParam0].f_196 != 0;
}

int func_112(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (vdist2(Global_2405072.f_2617[iVar0], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(var uParam0, bool bParam1)
{
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = unk_0x79833B02DBD2A244(0,01f, 360f);
			func_19(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_115(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_26(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_116(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
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
			if (!func_141(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_75(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_116(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam8 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_116(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
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
	iVar0 = iParam0;
	if ((func_117() && Global_1590535[iVar0].f_847) && !func_4(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_79(iParam0);
}

var func_117()
{
	return Global_2450632.f_17;
}

int func_118(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_120(vParam0, fParam3, iParam4, iParam5, 0) || func_119(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_119(vector3 vParam0, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0][iVar1].f_4 == 0)
				{
					if (func_34(vParam0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
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

int func_120(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
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
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (vdist(func_79(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (vdist(func_79(iVar1), vParam0) < 1f)
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

int func_121(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_118(vParam0, 0,5f, unk_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_172(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_125(vParam0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_172(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_125(vParam0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_122(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405072.f_3++;
						if (!func_33(vParam0, 1056964608))
						{
							Global_2405072.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_172(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_125(vParam0, fParam12))
			{
				Global_2405072.f_3++;
				if (!func_122(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405072.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return 0;
}

int func_122(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xD803B885F5E47A62() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (!func_124(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
				{
					if (func_123(func_79(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
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

bool func_123(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = sin(fParam6);
	vVar0.y = cos(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return unk_0x0399732A9EBC368E(vParam0, vParam3, vVar3, fParam8, 0, true);
}

bool func_124(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_125(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
		{
			if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && unk_0x08067D4957B73C02(iVar1) == -1) && !func_56(unk_0xD803B885F5E47A62(), 1))
			{
				return 0;
			}
			else if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !unk_0xD803B885F5E47A62() == iVar1) || !func_124(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_79(iVar1)) < fParam3)
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
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam9) && bParam6) && func_81(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_79(iVar1), vParam0, 1) < fParam3)
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

int func_128(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	iVar3 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_141(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1)) && iVar1 != unk_0xD803B885F5E47A62())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x08067D4957B73C02(iVar1) == iVar3)
					{
						if (unk_0x0EB28750412C3A5A(func_79(iVar1), vParam0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
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
	return Global_1590535[iParam0].f_35;
}

int func_131(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

void func_133(vector3 vParam0, var uParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*uParam3[iVar0] = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*uParam4[iVar0] = { Var7 };
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
			if (!unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar1].f_12, 11))
			{
				if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_2359721[iVar1].f_3, vParam0) < vdist(*uParam3[iVar0], vParam0))
				{
					Var3 = { Global_2359721[iVar1].f_3 };
					Var3.f_3 = Global_2359721[iVar1].f_6.f_2;
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
			if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_262145.f_5999[iVar1], vParam0) < vdist(*uParam3[iVar0], vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1] };
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
				if (vmag(*uParam3[iVar0]) == 0f || vdist(Global_262145.f_6045[iVar1][iVar2], vParam0) < vdist(*uParam3[iVar0], vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1][iVar2] };
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
			vVar17 = { Global_1311025[iVar1].f_1 + Global_1311025[iVar1].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			vVar20 = { *uParam4[iVar0] + uParam4[iVar0]->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (vmag(*uParam4[iVar0]) == 0f || vdist(vVar17, vParam0) < vdist(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1].f_1 };
				Var7.f_3 = { Global_1311025[iVar1].f_4 };
				Var7.f_6 = Global_1311025[iVar1].f_7;
				Var7.f_7 = { Global_2359397[iVar1] };
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
	Global_2412464 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, var uParam1)
{
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_137(Global_2405072.f_2255[iVar0], uParam0))
			{
				fVar4 = Global_2405072.f_2255[iVar0].f_3;
				if (vmag(*uParam1) > 0,01f)
				{
					vVar1 = { *uParam1 - Global_2405072.f_2255[iVar0] };
					fVar4 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_72(Global_2405072.f_2255[iVar0], fVar4, uParam0, uParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_66(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
	}
}

int func_137(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_23(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_138(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	func_61(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0,5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0,5f);
}

var func_139()
{
	return Global_1310987.f_4;
}

void func_140(var uParam0, var uParam1)
{
	func_179();
	func_171(uParam0, uParam1);
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_142(-1, 0) == 8;
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

int func_142(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_143();
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

int func_143()
{
	return Global_1312745;
}

bool func_144(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
	}
	return vdist(vParam0, vParam3) < (fParam6 + 0,01f);
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
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
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
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
	iVar13 = 3f;
	iVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			iVar13 = 3f;
			iVar14 = 5f;
			break;
		
		case 1:
			iVar13 = 2,75f;
			iVar14 = 7,5f;
			break;
		
		default:
			iVar13 = 2,5f;
			iVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, iVar13, iVar14);
		if (unk_0x5DD62183BBF151CD(iVar8))
		{
			unk_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x5B33870CBB8B6AC1(iVar8)) || unk_0xD9DC3EBC8290FF92(iVar8))
			{
				unk_0x968116EE0D84C042(vVar1, &uVar6, &uVar7);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_114(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_165(vVar1))
									{
										vVar1 = { func_161(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_160(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&vVar1, 0)) || uParam2->f_48 == 0)
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
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_156(vVar1, fVar4, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							fVar22 = (fVar22 * 0,375f);
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
																								fVar22 = (fVar22 * 0,375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_155(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_152(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0] = { vVar1 };
																										Global_2412474.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412474[iVar16], uParam2->f_35))
																												{
																													func_151(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar4;
																									Global_2412474.f_162++;
																									if (func_160(vVar1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
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
																					*uParam0 = { vVar1 };
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
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_149(0, uParam2);
						}
						iVar26 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0] = { Global_2412474[iVar26] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
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
						func_148(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, iVar13, iVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_166(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
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
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_147(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*uParam0[iVar2], vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_118(*uParam0[iVar2], 5f, unk_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *uParam0[iVar3] };
		*uParam2 = uParam0[iVar3]->f_3;
	}
}

void func_148(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, iParam11, iParam12);
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
	if (!func_160(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_150(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
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
			Global_2412474[iParam0] = { Global_2412474[iParam0 + 1] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_151(vector3 vParam0, float fParam3, int iParam4)
{
	vVar0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { vParam0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_151(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_152(vector3 vParam0, float fParam3, float fParam4)
{
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_80(iVar5))
		{
			vVar1 = { func_79(iVar5) };
			fVar7 = vdist(vParam0, vVar1);
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

int func_153(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam9 == 0)
		{
			if (func_26(iVar1, bParam5, bParam6))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam10) && bParam7) && func_81(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar1), 0))
								{
									iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0);
									if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0))
									{
										iVar4 = unk_0x134B62B726CEC8E6(iVar3);
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, 0) };
										fVar8 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_154(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), vParam0, fParam3, iParam4, fVar2))
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

int func_154(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	if (func_34(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_36(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_20(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_20(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (unk_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0,5f), 0f, 0f };
	func_20(&vVar26, 0f, 0f, fParam3);
	vVar1[0] = { vParam0 + vVar20 + vVar26 };
	vVar1[0].f_2 = (vVar1[0].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1] = { vParam0 + vVar20 - vVar26 };
	vVar1[1].f_2 = (vVar1[1].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2] = { vParam0 + vVar23 + vVar26 };
	vVar1[2].f_2 = (vVar1[2].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3] = { vParam0 + vVar23 - vVar26 };
	vVar1[3].f_2 = (vVar1[3].f_2 + (0,5f * unk_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(vVar1[iVar0], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_154(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_154(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_154(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_159(vParam0, fParam3, iParam4, iParam5, iParam6) || func_157(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_158(vParam0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_154(vParam0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
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

int func_158(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	fVar0 = func_41(iParam3, 1008981770);
	fVar1 = func_41(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_159(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_34(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_34(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_34(func_79(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

int func_160(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_144(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_161(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_164(vParam0, *fParam3, vParam6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x968116EE0D84C042(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
			if (unk_0xAFB8495D36825275(iParam11) && func_163(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
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
					fVar11 = (4,2f * (to_float(iVar8) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * to_float(iVar8));
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
					fVar11 = (4,2f * (to_float(iVar9) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * to_float(iVar9));
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
				fVar11 = (fVar11 + (0,95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0,5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4,2f * -0,5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1,5f);
				}
				if (fVar14 > 1,8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (vmag(vParam6) > 0f)
	{
		if (!func_164(vParam0, *fParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
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
	vVar0 = { unk_0x8A5E176FF719A014(vParam0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2E466A8362971293(vParam0, *fParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(vmag(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1,5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0,5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_162(int iParam0, float fParam1)
{
	func_36(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_163(vector3 vParam0)
{
	if (unk_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_16(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(vector3 vParam0)
{
	iVar1 = func_32(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_31(vParam0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_31(vParam0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_144(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_168(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1] };
				fVar5 = Global_2405072.f_1747[iVar1].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_156(vVar2, fVar5, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0,375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0,375f);
												}
											}
										}
										bVar11 = false;
										if (!func_155(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_152(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0] = { vVar2 };
															Global_2412474.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412474[iVar6], uParam2->f_35))
																	{
																		func_151(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
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
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_149(0, uParam2);
				}
				iVar14 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
				vVar15 = { Global_2412474[0] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0] = { Global_2412474[iVar14] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
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
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_168(vector3 vParam0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_169(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_169(vector3 vParam0, float fParam3, float fParam4)
{
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = vdist2(vParam0, Global_2405072.f_1747[iVar3]);
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

bool func_170(int iParam0)
{
	return iParam0 == 50;
}

void func_171(var uParam0, var uParam1)
{
	unk_0x8A1BBF3B7D62C45F(uParam0, uParam1, 0,1f);
	Global_2405072.f_2466 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = unk_0x2B6E0A53779D29EA();
}

int func_172(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || unk_0xEA19D5D9230DBB67(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_127(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_115(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

void func_173()
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_175()
{
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_176()
{
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4] = { Var0 };
		iVar4++;
	}
}

void func_177()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_178()
{
	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_179()
{
	if (Global_2405072.f_2464)
	{
		if (unk_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			unk_0xDA46A23FFDBCF876();
		}
		else
		{
			unk_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_180(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_181(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)
{
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
	Var34 = { vParam0 };
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
			vVar62 = { vParam0 - Var0[0] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_182(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_184(uParam0, 0, 0);
		}
	}
}

void func_184(var uParam0, bool bParam1, bool bParam2)
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

void func_185()
{
	switch (vLocal_71[unk_0x57270EE11514DC67()].f_2)
	{
		case 0:
			func_210();
			func_208();
			if (func_197())
			{
				func_189();
				func_188();
				func_186(35);
				vLocal_71[unk_0x57270EE11514DC67()].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_188();
				vLocal_71[unk_0x57270EE11514DC67()].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_71[unk_0x57270EE11514DC67()].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_186(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_187()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_187()
{
	iVar0 = 0;
	return iVar0;
}

void func_188()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_170))
	{
		unk_0x142CC44DB769B57E(&iLocal_170);
	}
}

void func_189()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_2439138.f_3895, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_3895), 0);
		func_190();
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_3895), 1);
	}
}

void func_190()
{
	func_191(1188, -1);
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = func_195(iParam0, func_196(iParam1), 0);
	iVar0++;
	if (!func_194(iParam0))
	{
		func_193(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_192(iParam0, iVar0, iParam1, 1);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_196(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_196(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_196(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_196(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_196(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_196(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_196(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_196(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_196(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_196(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_196(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_196(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_196(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_196(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_196(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_196(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_196(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_196(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_196(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_196(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_196(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_196(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_196(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_196(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_196(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_196(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_196(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_196(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_196(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_196(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_196(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_196(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_196(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_196(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_196(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_196(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_196(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_196(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_196(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_196(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_196(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_196(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_196(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_196(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_196(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_196(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_196(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_196(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_196(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_196(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_196(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_196(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_196(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_196(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_196(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_196(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_196(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_196(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_196(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_196(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_196(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_196(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_196(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_196(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_196(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_196(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_196(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_196(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_196(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_196(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_196(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_196(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_196(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_196(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_196(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_196(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_196(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_196(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_196(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_196(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_196(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_196(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_196(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_196(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_196(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_196(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_196(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_196(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_196(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_196(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_196(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_196(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_196(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_196(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_196(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_196(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_196(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_196(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_196(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_196(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_196(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_196(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_196(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_196(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_196(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_196(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_196(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_196(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_196(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

int func_197()
{
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (unk_0xE5DBF9B6126856CA(Local_60.f_2))
		{
			if (unk_0x50B5F6F3C29E9380(unk_0x09AD4CE7DA179533(Local_60.f_2), unk_0x16F2683693E537C9()) && func_207(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
				if (unk_0xE4EDC4B0E92C078B(iLocal_170))
				{
					unk_0x142CC44DB769B57E(&iLocal_170);
				}
				if (!func_205(1))
				{
					func_200("ABB_BOXCT");
				}
				Var0.f_2 = -1894913652;
				Var0.f_10 = unk_0xD803B885F5E47A62();
				Var0.f_3 = uLocal_169;
				func_198(Var0, func_199(1));
				unk_0x5D96D8530B3D0904(&(vLocal_71[unk_0x57270EE11514DC67()].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_198(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_199(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_26(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_200(char* sParam0)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_201(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_201(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_204() || !unk_0xA14BB9332558B949()) || !func_141(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_202(iParam2);
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

int func_202(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_203(iVar0);
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

void func_203(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_204()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1626726 > 0;
		
		case 2:
			return Global_1626726.f_1 > 0;
		
		case 3:
			return Global_1626726.f_2 > 0;
		
		case 4:
			return Global_1626726.f_4 > 0;
		
		case 5:
			return Global_1626726.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_206(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

int func_207(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0;
}

void func_208()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_170))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
		{
			iLocal_170 = unk_0x5C3B41825F6AC5A0(unk_0x09AD4CE7DA179533(Local_60.f_2));
			if (func_209())
			{
				unk_0x516E63E474722206(iLocal_170, 0,85f);
			}
			else
			{
				unk_0x516E63E474722206(iLocal_170, 1,2f);
			}
			unk_0xBC8E0A7390523199(iLocal_170, 403);
			unk_0x61755AC17D8F538E(iLocal_170, 2);
			unk_0xDC5B2F9D0CCE3A10(iLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_209()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

void func_210()
{
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		iVar0 = func_195(1190, -1, 0);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 14))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 14);
			func_193(1190, iVar0, -1, 1, 0);
		}
	}
}

int func_211()
{
	return Local_60;
}

int func_212()
{
	unk_0x523BCC9DC80CD82F(-1964997422);
	if (unk_0xB87F6CF6E5628C67(-1964997422))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	return vLocal_71[iParam0];
}

int func_214()
{
	func_221(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_220())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_219())
	{
		return 1;
	}
	if (func_218(159))
	{
		if (!func_217())
		{
			return 1;
		}
	}
	if (func_218(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_215() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_215()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_215()
{
	switch (func_58())
	{
		case 0:
			return func_216();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_216()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_217()
{
	return Global_2450632.f_598;
}

int func_218(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_2460680;
}

bool func_220()
{
	return Global_2450632.f_593;
}

void func_221(var uParam0)
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
					func_222(iVar0);
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

void func_222(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_26(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_223(iVar4, &bVar5))
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

int func_223(int iParam0, var uParam1)
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

void func_224()
{
	wait(0);
}

int func_225(int iParam0)
{
	return Global_1590535[iParam0];
}

void func_226()
{
	Global_1388162 = -1;
	if (unk_0xE4EDC4B0E92C078B(iLocal_170))
	{
		unk_0x142CC44DB769B57E(&iLocal_170);
	}
	func_229();
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0xE9F78D191AD5EDBA(Local_60.f_2) && unk_0x526BC32A660C89E6(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 8))
	{
		func_228();
	}
	func_227();
}

void func_227()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_228()
{
	Global_2537071.f_859 = 0;
	Global_2537071.f_859.f_1 = { 0f, 0f, 0f };
	Global_2537071.f_859.f_4 = 0f;
	Global_2537071.f_859.f_8 = 0;
	unk_0x0674E58A79778E99(&(Global_2537071.f_859.f_7), 0);
}

void func_229()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_168, 4))
	{
		unk_0x5BF70D3A674F3E1C(unk_0xD803B885F5E47A62(), 0,72f);
		unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), 1f, 1);
		unk_0x7EADCF510F11328E(unk_0xD803B885F5E47A62(), 1f);
		unk_0xD4455D6023C608A8(unk_0xD803B885F5E47A62(), 1f);
		func_230(1);
		unk_0x0674E58A79778E99(&iLocal_168, 5);
		unk_0x0674E58A79778E99(&iLocal_168, 7);
		unk_0x0674E58A79778E99(&iLocal_168, 4);
	}
}

void func_230(int iParam0)
{
	sVar0 = func_231(iParam0, 0);
	unk_0x9A1335ECD7BD117F(sVar0);
}

char* func_231(int iParam0, bool bParam1)
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

int func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	unk_0x3A4967AE7C71F999(1);
	func_234(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_60, 11);
	unk_0x35B62793EAE9ADDF(&vLocal_71, 97);
	if (!func_233())
	{
		return 0;
	}
	unk_0x256D93AFAE851A7A(0);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1388162 = Local_60.f_7;
		Local_60.f_3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		if (!func_4(Global_2537071.f_859.f_1))
		{
			unk_0x5D96D8530B3D0904(&(Local_60.f_1), 8);
		}
	}
	bLocal_173 = unk_0x09BE1E6DF7B80B43();
	vLocal_71[unk_0x57270EE11514DC67()] = 0;
	return 1;
}

int func_233()
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
		if (func_220())
		{
			return 0;
		}
		if (func_218(157))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_227();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_220())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_218(157))
				{
					if (!bParam2)
					{
						func_227();
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
					func_227();
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
				func_227();
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
			func_227();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1312854;
}

void func_236(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_227();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
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
		
		case 79:
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
		
		case 130:
			return 32;
		
		case 131:
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
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

