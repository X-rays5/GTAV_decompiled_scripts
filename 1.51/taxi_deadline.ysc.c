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
	iLocal_77 = unk_0xAD1355DD1E5D2D9B();
	iLocal_78 = unk_0x817B3657F78A517A();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_839 = -9308122;
	iLocal_844 = 1;
	vLocal_849 = { 344,7458f, 452,1832f, 145,9936f };
	iLocal_955 = 2;
	if (unk_0x2EBF608FFE6CA406(67))
	{
		func_419(2);
		func_417();
	}
	unk_0x7798376279BB5369(1);
	func_404();
	while (true)
	{
		if (unk_0xC844350D5D58C99A(Local_409.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_409);
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	iVar1 = func_3(unk_0x16F2683693E537C9());
	if (iVar1 == 0)
	{
		iVar0 = -1396655885;
	}
	else if (iVar1 == 2)
	{
		iVar0 = -2126549106;
	}
	else if (iVar1 == 1)
	{
		iVar0 = -486863503;
	}
	else
	{
		iVar0 = -1396655885;
	}
	return iVar0;
}

int func_3(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	iVar0 = func_3(unk_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	if (func_403(&Local_409))
	{
		func_402(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_401(&Local_409, 0))
			{
				func_399();
			}
		}
		else if (func_398(&Local_409, 31) > 5f)
		{
			func_419(2);
			func_417();
		}
	}
	else
	{
		func_397(&Local_409);
		func_376(&Local_409, &uLocal_936);
		func_371();
		func_370(&Local_409, &uLocal_845, 0);
		func_369(&Local_409);
		if (Local_409.f_410 == 9)
		{
			func_368(&Local_409);
			func_344(&Local_409, 0, 1);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_343(&Local_409))
			{
				func_308();
			}
			else
			{
				func_286(&Local_409, "Taxi Not Driveable", func_307(&Local_409));
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_283();
				func_282(&Local_409, 16, 4f, 0);
				func_279(&Local_409, func_281(iLocal_955), func_281(iLocal_954), "TaxiKwak", iLocal_839, 180,6f, 1114636288);
				func_277(&Local_409);
				func_276(&Local_409, 1);
				break;
			
			case 1:
				if (func_274())
				{
					func_273();
					func_272(&(vLocal_840[0]), "TAXI_SC_BN_03", 200);
					func_271(&Local_409, &vLocal_840);
					Local_409.f_14 = { func_281(iLocal_955) };
					func_251();
					func_250(&Local_409);
					func_276(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_243(&Local_409, 1))
				{
					if (!unk_0x437347B10A200C4B(Local_409.f_3, 0))
					{
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 0, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 2, 1, 0, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 3, 1, 0, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 4, 0, 1, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 8, 1, 1, 0);
					}
					func_242(&Local_409, 1, 0);
					func_276(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_214(&Local_409, 0, 1109393408))
				{
					func_276(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_213(&Local_409))
				{
					Local_409.f_17 = { vLocal_849 };
					iLocal_933 = func_199();
					Local_934 = { func_194(iLocal_933) };
					Local_409.f_136 = { Local_934 };
					fLocal_847 = 210f;
					func_193(&iLocal_852);
					func_189(&Local_409, 9, 1, 0, 0);
					func_188(&Local_409);
					func_187();
					func_276(&Local_409, 9);
				}
				if (unk_0xDF1306B443CD3D15(Local_409.f_4, 0))
				{
					if (!unk_0xC42A92762C58E1B9(Local_409.f_2, Local_409.f_4, 0))
					{
						func_185(&Local_409);
						func_276(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				func_181();
				if (func_180(&iLocal_852) > (fLocal_847 + 10f))
				{
					if (!func_179())
					{
						func_286(&Local_409, "Player did not hit the deadline", 20);
					}
					else
					{
						func_177();
					}
				}
				if (func_136(&Local_409, func_176(), 7f, 30f))
				{
					if (!func_179())
					{
						func_135(&Local_862, 15, 1);
						unk_0x142CC44DB769B57E(&(Local_409.f_9));
						if (func_398(&Local_409, 7) < fLocal_956[5] || Local_409.f_56 >= Local_409.f_59)
						{
							func_134(&Local_409, 0);
						}
						if (func_180(&iLocal_852) > 210f)
						{
							Local_409.f_56 = 0;
						}
						func_132(&Local_409);
						func_128(&Local_409);
						func_127(&Local_409);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 26, true);
						}
						func_276(&Local_409, 27);
					}
					else
					{
						func_177();
					}
				}
				break;
			
			case 27:
				if (func_116(&Local_409, 1))
				{
					func_114(0);
					if (!unk_0x437347B10A200C4B(Local_409.f_3, 0))
					{
						if (func_112(func_113(), Local_409.f_29, 0))
						{
							unk_0xD8F6A53F4799FAFE(Local_409.f_3, 84,9058f);
							unk_0xFADC0A217229F6B5(Local_409.f_3, true);
						}
						else
						{
							unk_0xF82EA857DA10E0CD(&iLocal_848);
							unk_0xDD353D0E9C789D0E(&iLocal_848);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0xBC43ED9FE28DB191(0);
							unk_0x96167B03C5A77156(0, Local_409.f_29, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x96167B03C5A77156(0, 322,1072f, 442,4288f, 140,6772f, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
							unk_0x75ABDC5F81978924(iLocal_848);
							unk_0x78ADC381772E3D54(Local_409.f_3, iLocal_848);
							unk_0xFADC0A217229F6B5(Local_409.f_3, true);
						}
					}
					func_276(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_74(&Local_409, &iLocal_943))
				{
					func_10(1, &Local_409, 1);
					func_276(&Local_409, 30);
				}
				break;
			
			case 30:
				func_417();
				break;
			}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_48(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_46(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_402(uParam0);
	if (func_179())
	{
		func_44();
	}
	func_42();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(1);
	func_37(0);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, false);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_34(uParam0->f_14, 1, 1114636288);
	func_33(&(uParam0->f_244), 3);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
	if (func_30())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_20(0, 1, 1, 0, 0, 0);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xF3039DE1FDB4F6FD(true);
	}
	if (func_19(Global_111638.f_19092, 4))
	{
		func_17(&(Global_111638.f_19092), 4);
		unk_0xAB8E2DDC7AF955E0(func_16(), false);
	}
	if (bParam1)
	{
		func_15(uParam0);
	}
	func_14(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_12(uParam0->f_411);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x11E0F00830F70E15(round((func_180(&iLocal_90) * 1000f)), 12, 0);
}

void func_12(int iParam0)
{
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_13(iParam0)}, 6);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_14(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_51[0]);
}

void func_15(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (!unk_0x405E212DDE472467(uParam0->f_3, 0))
			{
				unk_0x61F0DE0226FF7252(uParam0->f_3);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_3, false);
			unk_0x0E2400AB9174FA81(255, uParam0->f_413, 1862763509);
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x6DAD7906B73F064D(&(uParam0->f_3));
		}
	}
}

int func_16()
{
	return -956048545;
}

void func_17(var uParam0, int iParam1)
{
	func_18(uParam0, iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_29(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_28())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_29(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_25(unk_0xD803B885F5E47A62())) && !func_22(unk_0xD803B885F5E47A62(), 0)) && !func_21()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_25(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_21()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312745;
}

int func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
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

bool func_26()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_27(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
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

int func_30()
{
	if (!func_32() && !func_31())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_31()
{
	if (unk_0x8A22C4C08282BF26(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_34(vector3 vParam0, bool bParam3, float fParam4)
{
	vVar0 = { func_35(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_35(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.z = (vVar0.z - 22f);
	vVar3.z = (vVar3.z + 22f);
	if (!bParam3)
	{
		unk_0xF858EFDE1871B5F2(vVar0, vVar3, false, 1);
	}
	else
	{
		unk_0xF5894FEB702E7E76(vVar0, vVar3, true);
		unk_0xEFED0CD6E25037B9();
	}
}

Vector3 func_35(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_36(vector3 vParam0, bool bParam3)
{
	if (!func_112(vParam0, func_113(), 0))
	{
		vVar0 = { func_35(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_35(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar3, bParam3, 1);
	}
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_40())
		{
			func_38(1, 1);
		}
		else
		{
			func_38(0, 0);
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
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_39(int iParam0)
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

bool func_40()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_41()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_42()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0] && !Global_95677[iVar0].f_1)
		{
			if (Global_95677[iVar0].f_3 == 0)
			{
				if ((Global_95677[iVar0].f_5 != 88 && Global_95677[iVar0].f_5 != 89) && Global_95677[iVar0].f_5 != 92)
				{
					func_43(Global_95677[iVar0].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_44()
{
	Global_19671 = 0;
	func_45();
}

void func_45()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_47("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_47("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_47("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_47("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_47("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_47("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_47("This distance ", iParam1);
					func_47(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_47("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_47("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_47("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_47("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_47("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_47("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_47("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_47("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_47("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_47("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_47(char* sParam0, int iParam1)
{
}

void func_48(var uParam0)
{
	func_46(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_419(1);
		func_60(15, 1);
	}
	func_58(&(Global_111638.f_19092), 1024);
	if (!func_19(Global_111638.f_19092, 64))
	{
		func_49(func_56(func_57(uParam0)), 0, 0);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_55((891 + iParam0), 1, -1, 1);
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
		func_50();
	}
}

void func_50()
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
		func_54(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_53() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
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

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_53()
{
	return Global_30768;
}

int func_54(int iParam0, int iParam1)
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

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_24();
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

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_57(var uParam0)
{
	return uParam0->f_411;
}

void func_58(var uParam0, int iParam1)
{
	func_59(uParam0, iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (func_73(14) && !func_72(iParam0))
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
	if (func_71(&Global_4270065))
	{
		if (func_69(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_4270065, iParam0))
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

int func_62(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_63(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_65(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_67(uParam0, (Global_4270064 - 0,5f));
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_67(var uParam0, float fParam1)
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

float func_68(var uParam0)
{
	return uParam0->f_80;
}

bool func_69(var uParam0, int iParam1)
{
	return func_70(uParam0, iParam1) != -1;
}

int func_70(var uParam0, int iParam1)
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

bool func_71(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_72(int iParam0)
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

bool func_73(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_74(var uParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_179() && func_398(uParam0, 0) > 1f)
			{
				if (func_30())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				}
				func_111(uParam0);
				func_17(&(Global_111638.f_19092), 4096);
				func_108(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_110(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_107(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_98(iParam1, 0))
			{
				func_75(uParam0);
				func_282(uParam0, 0, 0, 0);
				func_107(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(var uParam0)
{
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_76(func_96(), 21, iVar0, 0, 0);
		func_46(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_95(iParam0) == 3)
	{
		return;
	}
	if (func_95(iParam0) == 4)
	{
		return;
	}
	func_77(func_95(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_94();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_93(99, 1);
					func_92(-656546900, iParam3);
					break;
				
				case 1:
					func_92(-2098183071, iParam3);
					break;
				
				case 2:
					func_92(1578119842, iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_86(5))
					{
						fVar0 = 0,9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_92(-1190521599, iParam3);
							break;
						
						case 1:
							func_92(490143716, iParam3);
							break;
						
						case 2:
							func_92(121069433, iParam3);
							break;
					}
					if (func_86(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(219506691, iParam3);
							break;
						
						case 1:
							func_92(1871505786, iParam3);
							break;
						
						case 2:
							func_92(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(27639974, iParam3);
							break;
						
						case 1:
							func_92(422258364, iParam3);
							break;
						
						case 2:
							func_92(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_92(1806738963, iParam3);
							break;
						
						case 1:
							func_92(1576781520, iParam3);
							break;
						
						case 2:
							func_92(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_92(408653638, iParam3);
									break;
								
								case 1:
									func_92(-424799277, iParam3);
									break;
								
								case 2:
									func_92(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_92(2038531975, iParam3);
									break;
								
								case 1:
									func_92(-572903575, iParam3);
									break;
								
								case 2:
									func_92(-953947924, iParam3);
									break;
							}
							if (func_86(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_92(-445823242, iParam3);
									break;
								
								case 1:
									func_92(-1386757215, iParam3);
									break;
								
								case 2:
									func_92(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_92(-1744069936, iParam3);
									break;
								
								case 1:
									func_92(799609312, iParam3);
									break;
								
								case 2:
									func_92(181688102, iParam3);
									break;
							}
							func_85(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				
				case 1:
					func_93(97, iParam3);
					break;
				
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_80(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_80(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_92(-330339780, iParam3);
					break;
				
				case 1:
					func_92(1697564429, iParam3);
					break;
				
				case 2:
					func_92(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_79(iParam0);
	if (Global_41431 == 15)
	{
		func_78(0);
	}
	return 1;
}

void func_78(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_79(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(52740893, iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(1153264002, iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(-1921710979, iVar0, 1);
			break;
	}
}

void func_80(int iParam0)
{
	if (iParam0 == 8)
	{
		func_55(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_55(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_55(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_55(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_83(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_83(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_83(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_83(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_83(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_83(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_82()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_82()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_81(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_81(int iParam0)
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

int func_82()
{
	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_84(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_84(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

void func_85(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_86(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_88(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_88(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_88(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_88(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_87(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_87(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_87(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_87(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_87(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_87(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_82()].f_6174.f_10, iParam0);
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_84(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_90(iParam0, iParam1);
	uVar2 = func_89(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_89(int iParam0)
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

int func_90(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_91(bool bParam0)
{
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(-422142831, iVar1, 1);
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
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

void func_94()
{
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_95(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_96()
{
	func_97();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_97()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_73(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
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

int func_98(var uParam0, int iParam1)
{
	if (!func_106(&(uParam0->f_2)))
	{
		func_104(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(2, 201) || uParam0->f_8)
		{
			if (!func_106(&(uParam0->f_5)))
			{
				func_104(&(uParam0->f_5));
				func_103(uParam0, 1051260355);
			}
		}
		if (func_106(&(uParam0->f_5)))
		{
			if (func_100(&(uParam0->f_5)) > 0,33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_100(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_106(&(uParam0->f_5)))
		{
			func_104(&(uParam0->f_5));
			func_103(uParam0, 1051260355);
		}
		else if (func_100(&(uParam0->f_5)) > 0,33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_100(int iParam0)
{
	if (func_106(iParam0))
	{
		if (func_102(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_101(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_101(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_102(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_103(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_104(int iParam0)
{
	func_105(iParam0, 0f);
}

void func_105(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_101(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_106(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

void func_107(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_108(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_109());
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(iParam9);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(sParam7);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6B012227B3921E18(sParam6);
	unk_0x6D99DF8263D35CE5(iParam5);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	func_104(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_109()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_111(var uParam0)
{
	Local_169.f_1 = to_float(uParam0->f_50);
	Local_169.f_2 = to_float(uParam0->f_56);
	func_46(11, uParam0->f_56);
	func_46(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0] = { uParam0->f_60[iVar0] };
		if (unk_0xEAE0D21A50E6C7F4(Local_169.f_4[iVar0], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0].f_1));
		}
		iVar0++;
	}
	Local_169 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_112(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_113()
{
	return vVar0;
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		func_115();
		unk_0x6DA3AC47D5DB9EED(-655196089, 929,6144f, 46,3955f, 80,0993f, bParam0, 0f, 0);
		unk_0x6DA3AC47D5DB9EED(1713150633, 928,6238f, 44,9848f, 80,0993f, bParam0, 0f, 0);
		unk_0x6DA3AC47D5DB9EED(-655196089, 928,1625f, 43,7989f, 79,8993f, bParam0, 0f, 0);
		unk_0x6DA3AC47D5DB9EED(1713150633, 927,4266f, 42,1881f, 80,0884f, bParam0, 0f, 0);
	}
	else
	{
		unk_0x23406846FAACA3CA(-655196089, 929,6144f, 46,3955f, 80,0993f, bParam0, 0f, 50f, 0f);
		unk_0x23406846FAACA3CA(1713150633, 928,6238f, 44,9848f, 80,0993f, bParam0, 0f, 50f, 0f);
		unk_0x23406846FAACA3CA(-655196089, 928,1625f, 43,7989f, 79,8993f, bParam0, 0f, 50f, 0f);
		unk_0x23406846FAACA3CA(1713150633, 927,4266f, 42,1881f, 80,0884f, bParam0, 0f, 50f, 0f);
	}
}

void func_115()
{
	unk_0x23406846FAACA3CA(-655196089, 929,6144f, 46,3955f, 80,0993f, true, 1f, 50f, 0f);
	unk_0x23406846FAACA3CA(1713150633, 928,6238f, 44,9848f, 80,0993f, true, 1f, 50f, 0f);
	unk_0x23406846FAACA3CA(-655196089, 928,1625f, 43,7989f, 79,8993f, true, 1f, 50f, 0f);
	unk_0x23406846FAACA3CA(1713150633, 927,4266f, 42,1881f, 80,0884f, true, 1f, 50f, 0f);
}

int func_116(var uParam0, bool bParam1)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_126(uParam0) && func_122(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_121(uParam0, 2097152))
				{
					func_117(uParam0);
				}
			}
			else
			{
				func_117(uParam0);
			}
		}
		else if (!func_126(uParam0))
		{
			if (bParam1)
			{
				if (func_121(uParam0, 2097152))
				{
					if (unk_0xD1960163A3042274(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_117(var uParam0)
{
	if (func_120(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_118(uParam0, vVar0);
}

void func_118(var uParam0, vector3 vParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && unk_0x82CCEAB29E9451DD(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			vVar3 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (func_119(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, false) < unk_0x0EB28750412C3A5A(vVar3, vParam1, false) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, false) >= unk_0x0EB28750412C3A5A(vVar3, vParam1, false) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_119(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA30B8362589C124A(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_120(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_121(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_19(uParam0->f_81, iParam1) && !func_179());
	}
	return func_179();
}

int func_122(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_39(1))
			{
				func_37(0);
			}
			if (func_30())
			{
				func_125();
				return 1;
			}
			else if (func_123(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 256);
				}
				else
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 0);
				}
			}
			unk_0xACCB31D58716FE8F(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_123(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_124(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_124(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

void func_125()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	}
}

int func_126(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0,4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0,15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_19(uParam0->f_55, 1))
	{
		func_58(&(uParam0->f_55), 1);
	}
}

void func_128(var uParam0)
{
	func_130();
	unk_0x790015DC92C918E2();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_189(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_189(uParam0, 103, 1, 0, 0);
		}
		func_129(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_189(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_189(uParam0, 102, 1, 0, 0);
	}
	func_282(uParam0, 16, 4f, 0);
}

void func_129(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_130()
{
	Global_19671 = 0;
	func_131();
}

void func_131()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_132(var uParam0)
{
	fVar0 = uParam0->f_41;
	fVar0 = func_133(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_46(4, ceil(fVar0));
	func_46(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_133(float fParam0)
{
	return (fParam0 * 0,0006213712f);
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_60[iParam1]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1].f_1);
	}
}

void func_135(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_136(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !uParam0->f_142)
	{
		if (func_158(uParam0))
		{
			func_157(uParam0, &(uParam0->f_43));
			func_152(uParam0);
			func_151(uParam0);
			func_148(uParam0);
			func_143(uParam0, fParam2, fParam3);
			func_140(uParam0);
			return func_137(uParam0, fParam1);
		}
	}
	return 0;
}

int func_137(var uParam0, float fParam1)
{
	if (func_57(uParam0) == 2)
	{
		if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_139(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_138(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			return func_122(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_138(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
	{
		return func_122(uParam0, 1, fParam1);
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xC8BC75555A67090D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9())
				{
					return 0;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0,95f || unk_0x30C0A7C378403357(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

float func_139(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam4);
}

void func_140(var uParam0)
{
	if ((func_126(uParam0) && func_19(uParam0->f_81, 67108864)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_97) >= 10000)
		{
			fVar0 = func_141(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_96 >= 2 && !func_179())
		{
			func_189(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x1C0640BA9A7327B3() % 4000) < 50)
		{
			if (!func_126(uParam0))
			{
			}
			if (!func_19(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_141(vector3 vParam0, bool bParam3)
{
	return func_142(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam3);
}

float func_142(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

void func_143(var uParam0, float fParam1, float fParam2)
{
	if (func_126(uParam0) && func_19(uParam0->f_44, 4))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(uParam0->f_4) || unk_0x9C66D99E63E8E24C(uParam0->f_4) < 3f) && func_147(uParam0))
		{
			if (!func_146(uParam0, 2))
			{
				func_145(uParam0, 2);
			}
			else if (func_126(uParam0))
			{
				if (func_398(uParam0, 2) > fParam1 && !func_146(uParam0, 14))
				{
					if (func_32())
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					func_282(uParam0, 2, 0, 0);
					if (func_146(uParam0, 10))
					{
						func_282(uParam0, 10, 0, 0);
					}
				}
				if (!func_146(uParam0, 3))
				{
					func_282(uParam0, 3, 0, 0);
				}
				else if (func_398(uParam0, 3) >= fParam2)
				{
					func_144(uParam0, 3, 0);
					func_286(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_146(uParam0, 2))
			{
				func_144(uParam0, 2, 0);
			}
			if (func_146(uParam0, 3))
			{
				func_144(uParam0, 3, 0);
			}
		}
	}
}

void func_144(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_146[iVar0]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1]));
	}
	if (bParam2)
	{
	}
}

void func_145(var uParam0, int iParam1)
{
	func_193(&(uParam0->f_146[iParam1]));
}

bool func_146(var uParam0, int iParam1)
{
	return func_106(&(uParam0->f_146[iParam1]));
}

int func_147(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			return 1;
		}
	}
	return 0;
}

void func_148(var uParam0)
{
	if (func_150(uParam0))
	{
		func_149(uParam0);
	}
}

void func_149(var uParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFC21F7E0F4D92523();
			func_144(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_398(uParam0, 20) > 3f)
				{
					func_189(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_19(uParam0->f_81, 262144) || !func_19(uParam0->f_81, 1048576))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_189(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_19(uParam0->f_82, 67108864))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_189(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_398(uParam0, 20) > 8f)
				{
					func_189(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_19(uParam0->f_81, 262144) || func_19(uParam0->f_82, 67108864))
			{
				if (!func_146(uParam0, 22))
				{
					func_145(uParam0, 22);
				}
			}
			if (func_146(uParam0, 22) && func_398(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_19(uParam0->f_81, 1048576))
					{
						func_189(uParam0, 84, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_19(uParam0->f_82, 134217728))
					{
						func_189(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_150(var uParam0)
{
	return uParam0->f_120;
}

void func_151(var uParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_19(uParam0->f_44, 2))
	{
		func_58(&(uParam0->f_44), 2);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_19(uParam0->f_44, 2))
	{
		func_17(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_46(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_189(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + ceil(5f));
	}
}

void func_152(var uParam0)
{
	if (!func_19(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					if (func_398(uParam0, 9) > 1f)
					{
						func_156(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (uParam0->f_410 != 22)
						{
							func_189(uParam0, 50, 1, 1, 0);
						}
						func_282(uParam0, 9, 0, 0);
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
						{
							unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
							unk_0x661342B9651D16E2(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_179() && func_398(uParam0, 9) > 4f)
				{
					func_189(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_155("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_189(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_154(uParam0)))
				{
					func_156(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_46(6, 0);
				}
				if (!func_153(uParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_398(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_189(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					if (func_155("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x790015DC92C918E2();
					}
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_179())
				{
					if (uParam0->f_410 != 22)
					{
						func_189(uParam0, 53, 1, 0, 1);
					}
					func_46(7, func_154(uParam0));
					func_156(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_179())
				{
					func_144(uParam0, 9, 0);
					func_282(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_153(var uParam0)
{
	return uParam0->f_110;
}

int func_154(var uParam0)
{
	return uParam0->f_106;
}

bool func_155(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_156(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_157(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_158(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_286(uParam0, "Passenger left car.", 9);
			}
			else if (func_172(uParam0))
			{
				if (func_155("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x2F23E8033F1ADDD9("TAXI_OBJ_PICKUP");
				}
				if (unk_0x0F1CCD77290EE12F())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				func_159(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_159(var uParam0, bool bParam1)
{
	func_171(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_146(uParam0, 14))
			{
				if (func_179())
				{
					func_170(1);
				}
				func_169(uParam0, 11, 1);
				func_162(uParam0, 1);
				func_282(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_126(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0))
					{
						if (func_398(uParam0, 15) > 5f)
						{
							func_282(uParam0, 15, 0f, 1);
						}
					}
					if (func_398(uParam0, 14) > 20f)
					{
						func_286(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_398(uParam0, 14) > 20f)
				{
					if (func_160(uParam0->f_4, 1) > 40f)
					{
						func_286(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_286(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_160(int iParam0, bool bParam1)
{
	return func_161(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_161(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, bParam2);
}

void func_162(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
				unk_0x661342B9651D16E2(uParam0->f_8, false);
				func_168(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
				unk_0x661342B9651D16E2(uParam0->f_9, false);
				unk_0x790015DC92C918E2();
				if (func_126(uParam0))
				{
					func_189(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_168(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_163(uParam0, 0, 0);
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_10));
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 255);
				unk_0x661342B9651D16E2(uParam0->f_8, true);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
					unk_0x661342B9651D16E2(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
					unk_0x661342B9651D16E2(uParam0->f_9, true);
				}
			}
			unk_0x790015DC92C918E2();
		}
	}
}

void func_163(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_402(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_10))
	{
		uParam0->f_10 = func_166(uParam0->f_4, 1, 0);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_10, true);
		func_164(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_189(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_164(var uParam0)
{
	func_282(uParam0, 14, 0, 0);
	func_165();
}

void func_165()
{
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_167(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_167(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_167(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_167(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_168(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_19(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_189(uParam0, iParam3, 1, 0, 0);
		func_58(uParam1, iParam2);
	}
}

void func_169(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_170(int iParam0)
{
	Global_21816 = iParam0;
}

void func_171(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, 911657153, 0) || unk_0x0361981EE62202D8(iParam1, 0, 2)) || unk_0x0361981EE62202D8(iParam1, 0, 1))
				{
					func_286(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

int func_172(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_146(uParam0, 14))
			{
				func_173(uParam0);
			}
			func_162(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_173(var uParam0)
{
	func_144(uParam0, 14, 0);
	func_144(uParam0, 15, 0);
	func_175();
	if (func_174())
	{
		func_170(0);
	}
}

int func_174()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_175()
{
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

float func_176()
{
	fVar0 = unk_0x9C66D99E63E8E24C(Local_409.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0,5f);
	}
	return 5f;
}

void func_177()
{
	Global_19671 = 0;
	func_178();
}

void func_178()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

int func_179()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

float func_180(int iParam0)
{
	if (func_106(iParam0))
	{
		if (func_102(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_101(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_181()
{
	iVar0 = round(((fLocal_847 - func_180(&iLocal_852)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1010 = true;
		if (!iLocal_1012)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1012 = 1;
		}
	}
	func_182(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (!bLocal_1010)
	{
		if (!iLocal_1011)
		{
			fVar1 = func_100(&iLocal_852);
			if (((((((((((((((fLocal_847 - fVar1) < 1f || (fLocal_847 - fVar1) < 1,5f) || (fLocal_847 - fVar1) < 2f) || (fLocal_847 - fVar1) < 2,5f) || (fLocal_847 - fVar1) < 3f) || (fLocal_847 - fVar1) < 3,5f) || (fLocal_847 - fVar1) < 4f) || (fLocal_847 - fVar1) < 4,5f) || (fLocal_847 - fVar1) < 5f) || (fLocal_847 - fVar1) < 6f) || (fLocal_847 - fVar1) < 7f) || (fLocal_847 - fVar1) < 8f) || (fLocal_847 - fVar1) < 9f) || (fLocal_847 - fVar1) < 10f) || (fLocal_847 - fVar1) < 11f)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_1011 = 1;
				iLocal_1013 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			fVar2 = func_100(&iLocal_852);
			if (((fLocal_847 - fVar2) < 5,5f && (unk_0x1C0640BA9A7327B3() - iLocal_1013) > 500) || ((fLocal_847 - fVar2) < 11f && (unk_0x1C0640BA9A7327B3() - iLocal_1013) > 1000))
			{
				iLocal_1011 = 0;
			}
		}
	}
}

void func_182(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_184(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_183(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_183(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_184(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_185(var uParam0)
{
	func_186(uParam0, 1000);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
	}
	func_177();
	func_173(uParam0);
}

void func_186(var uParam0, int iParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xB3A1B75CB59FEB56(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
}

void func_187()
{
	func_58(&(Local_409.f_55), 2);
	func_58(&(Local_409.f_55), 4);
	func_58(&(Local_409.f_55), 16);
	func_58(&(Local_409.f_55), 64);
	func_58(&(Local_409.f_55), 256);
	func_58(&(Local_409.f_55), 512);
	func_58(&(Local_409.f_55), 1024);
	func_58(&(Local_409.f_55), 2048);
	func_58(&(Local_409.f_55), 4096);
	func_58(&(Local_409.f_55), 1073741824);
	func_58(&(Local_409.f_100), 8);
	func_58(&(Local_409.f_100), 2048);
	func_58(&(Local_409.f_100), 256);
	func_58(&uLocal_936, 2);
	func_145(&Local_409, 7);
}

void func_188(var uParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	func_186(uParam0, 1000);
}

void func_189(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_282(uParam0, 16, 4f, 0);
		if (func_190(uParam0))
		{
			func_44();
		}
	}
	func_242(uParam0, iParam2, bParam3);
}

int func_190(var uParam0)
{
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_179())
	{
		Var6 = { func_192() };
		if (!unk_0xEA6BC48857E0AC4C(&Var6))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var6, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_191(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var6, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_192()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_193(int iParam0)
{
	if (!func_106(iParam0))
	{
		func_104(iParam0);
	}
}

struct<2> func_194(int iParam0)
{
	StringCopy(&cVar2, func_196(func_198(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_195(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_196(func_195(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_195(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

var func_196(int iParam0)
{
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_197(&cVar0);
}

var func_197(char[4] cParam0)
{
	return cParam0;
}

int func_198(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_199()
{
	iVar0 = func_204();
	func_202(&iVar0, 3);
	func_200(&iVar0, 30);
	return iVar0;
}

void func_200(int iParam0, int iParam1)
{
	if ((func_195(*iParam0) + iParam1) > 59)
	{
		func_201(iParam0, ((func_195(*iParam0) + iParam1) - 60));
		func_202(iParam0, 1);
	}
	else
	{
		func_201(iParam0, (func_195(*iParam0) + iParam1));
	}
}

void func_201(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || shift_left(iParam1, 14));
}

void func_202(int iParam0, int iParam1)
{
	if ((func_198(*iParam0) + iParam1) > 23)
	{
		func_203(iParam0, ((func_198(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_203(iParam0, (func_198(*iParam0) + iParam1));
	}
}

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

int func_204()
{
	func_212(&uVar0, unk_0x4460E481B9E33ADA());
	func_201(&uVar0, unk_0x8D199E381D262EEF());
	func_203(&uVar0, unk_0xD8A54335F18763BA());
	func_207(&uVar0, unk_0x972A296334C9D57B());
	func_206(&uVar0, unk_0x118229AD063C3C1D());
	func_205(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_205(var uParam0, int iParam1)
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

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	iVar0 = func_211(*uParam0);
	iVar1 = func_209(*uParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_208(int iParam0, int iParam1)
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

var func_209(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_210(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_211(int iParam0)
{
	return iParam0 & 15;
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_213(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if ((unk_0x81A5359F25512A04(uParam0->f_3) && (unk_0x1C0640BA9A7327B3() - iLocal_89) > 500) || unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_214(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			func_159(uParam0, 1);
			if (func_30())
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
			}
			if (unk_0xD1960163A3042274(uParam0->f_3, 2106541073) == 1 || unk_0xD1960163A3042274(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x327AAEE25F323797(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			func_240(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xF82EA857DA10E0CD(&iVar3);
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x96167B03C5A77156(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xF96A174EE26D7588(0, uParam0->f_4, 0);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_146(uParam0, 14))
			{
				func_173(uParam0);
				func_162(uParam0, 0);
			}
			if (func_146(uParam0, 9))
			{
				func_144(uParam0, 9, 0);
				unk_0x790015DC92C918E2();
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_8, 255);
					unk_0x661342B9651D16E2(uParam0->f_8, true);
				}
			}
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x9C66D99E63E8E24C(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_239(uParam0, uParam0->f_3) > 300f)
				{
					func_286(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 || ((func_161(unk_0x16F2683693E537C9(), uParam0->f_3, 1) < 20f && func_139(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_139(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_236(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_235(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_234(uParam0->f_4, uParam0->f_3);
								iVar0 = func_233(uParam0, &iVar1);
								if (!unk_0x437347B10A200C4B(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x75CDA8644CD3B5F5(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x75CDA8644CD3B5F5(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x437347B10A200C4B(iVar0, 0))
											{
												unk_0x75CDA8644CD3B5F5(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xA3BF0AA5A2608191(uParam0->f_3);
							unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_147(uParam0))
							{
								unk_0xA3BF0AA5A2608191(uParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 0) && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 7) && func_239(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
								unk_0xDD353D0E9C789D0E(&(uParam0->f_243));
								unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x75ABDC5F81978924(uParam0->f_243);
								unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x8352CA08CF578D18(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1,75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_161(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_232(uParam0, 1))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_286(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_231(uParam0->f_4))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_286(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_229(uParam0);
						if (func_239(uParam0, uParam0->f_3) < fVar4 || func_30())
						{
							if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_216(uParam0))
								{
									func_215(uParam0);
									iLocal_89 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(uParam0->f_3, 26, true);
									func_144(uParam0, 5, 0);
									unk_0x0DC19E268D45C03F();
									unk_0x893A626C476B583D(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x7D732AB707BE9152(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_215(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x661342B9651D16E2(uParam0->f_8, false);
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
}

int func_216(var uParam0)
{
	func_228("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		func_227();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_225(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_122(uParam0, 0, 1084227584) && func_138(1, 1, 1))
			{
				if (func_232(uParam0, 1))
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
					settimera(0);
					iLocal_86 = 1;
				}
				else
				{
					func_286(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (timera() > 500)
			{
				uParam0->f_7 = func_234(uParam0->f_4, uParam0->f_3);
				iVar9 = func_233(uParam0, &iVar10);
				if (!unk_0x437347B10A200C4B(iVar9, 0))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0x75CDA8644CD3B5F5(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x75CDA8644CD3B5F5(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!unk_0x437347B10A200C4B(iVar9, 0))
						{
							unk_0x75CDA8644CD3B5F5(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar6 = { 1,5f, 0f, -0,6422f };
				vVar0 = { -1,4309f, 3,958f, 3,5037f };
				vVar3 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar6 = { 1,5f, -1f, -0,6422f };
				vVar0 = { 1,4309f, 3,958f, 0,5037f };
				vVar3 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else
			{
				vVar6 = { -1,5f, -1f, -0,6422f };
				vVar0 = { -1,4823f, 4,2333f, 0,5939f };
				vVar3 = { -0,4718f, 1,4282f, 0,3619f };
			}
			iVar12 = func_224(&(uParam0->f_409), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.z = (vVar0.z + 1,5f);
				if (uParam0->f_7 == 2)
				{
					vVar3 = { 0,7632f, 1,4884f, 0,4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_223(0, 0, 1);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 3f, 0);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 25f, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_130();
				func_242(uParam0, 0, 0);
				vVar13 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar6) };
				unk_0xA47B46945FF6DE74(uParam0->f_3, vVar13, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, func_221(uParam0));
				func_220(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x608A456FDD8A83D8(*uParam0, unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0));
				unk_0x1305278186D1C53E(*uParam0, uParam0->f_4, vVar3, 1);
				unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				unk_0xF895E10BF4C72645(uParam0->f_3, 0, 0);
				unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_228("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (timera() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(uParam0->f_4, 0))
			{
				if (!unk_0x405E212DDE472467(uParam0->f_3, 0))
				{
					unk_0xF821F915BC24D246(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x152BCACCF710B36E(uParam0->f_4, func_219(uParam0->f_7), 1);
				}
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
				unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x82E51BCA72537B6C(800);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_130();
				func_242(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_217(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
			unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			func_217(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(uParam0->f_4, 0))
			{
				if (unk_0x81A5359F25512A04(uParam0->f_3) || unk_0x405E212DDE472467(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) != 0)
				{
					unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_217(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_20(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_218(23, 0);
}

void func_218(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31015, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31015, iParam0);
	}
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_220(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0xAE06CCC36C49929C(26379945, vParam1, vParam4, fParam7, 0, 2);
	}
}

float func_221(var uParam0)
{
	fVar0 = 0f;
	vVar1 = { func_113() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0,773f, -0,646f, -0,6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0,773f, -0,646f, -0,6422f) };
	}
	fVar0 = func_222(unk_0x68F4C0EC296D3901(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_222(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_37(0);
	func_20(1, 1, iParam2, 0, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_218(23, 1);
}

int func_224(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vParam4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x1EC301670B54C6DE(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_225(int iParam0)
{
	if (func_226() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(500);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		func_37(0);
		func_177();
		return 1;
	}
	return 0;
}

int func_226()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_227()
{
	if (func_32())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_31())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_39(1))
	{
		func_37(0);
	}
}

void func_228(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_229(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_160(uParam0->f_3, 1) > 30f || func_230(uParam0))
			{
				if (unk_0xD1960163A3042274(uParam0->f_3, -1794415470) == 1 || unk_0xD1960163A3042274(uParam0->f_3, 242628503) == 1)
				{
					unk_0xF82EA857DA10E0CD(&iVar0);
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0xF96A174EE26D7588(0, uParam0->f_4, 0);
					unk_0xC6EB89C59F2AF6B8(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x96167B03C5A77156(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
					func_286(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_230(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_398(uParam0, 5) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	iVar0 = 0;
	if (!unk_0x464B3D84B739AE72(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x1150BCE24B1630AC(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_232(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xA30B8362589C124A(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xA30B8362589C124A(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xA30B8362589C124A(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar4]))
			{
				if (unk_0x437347B10A200C4B(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_233(var uParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 1, 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 2, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	iVar4 = unk_0xD6DF381716822EFE(iParam0);
	vVar0 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iParam1, true)) };
	if (unk_0x134B62B726CEC8E6(iParam0) != 338562499)
	{
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == 873639469)
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 2, 0, false))
		{
			iVar3 = 2;
		}
		else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 1, 0, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 1, 0, false))
	{
		iVar3 = 1;
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 2, 0, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_235(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_160(uParam0->f_3, 1) < fParam2)
		{
			if (!func_146(uParam0, 5))
			{
				func_282(uParam0, 5, 0, 0);
			}
		}
		else if (func_146(uParam0, 5))
		{
			func_144(uParam0, 5, 0);
		}
		if (((func_398(uParam0, 5) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_160(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_236(var uParam0, float fParam1)
{
	iVar18 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		vVar6 = { unk_0xBF584557291FDD31(uParam0->f_4, iVar18) };
		vVar6 = { unk_0x5293C88BD2F4DE13(uParam0->f_4, vVar6) };
		vVar6.y = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar6) };
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_3, 0f, 0,25f, 0,9f) };
	unk_0x4ADCCF23C40DC113(vVar0, vVar3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x11AD11297DC58CC7(uParam0->f_3, true);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_161(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x755FF954DAE327E1((vVar0.z - vVar3.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xCD02F8660C47B801(vVar0, vVar3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x1EC301670B54C6DE(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 0)
			{
				unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
				unk_0xDD353D0E9C789D0E(&(uParam0->f_243));
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x25644C31B4B6E9F3(uParam0->f_243, 1);
				unk_0x75ABDC5F81978924(uParam0->f_243);
				unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x790015DC92C918E2();
			if (uParam0->f_411 != 9)
			{
				if (!func_19(uParam0->f_44, 128))
				{
					func_189(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_237(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0x0C8C0C840C2D1AD2(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1,5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
			unk_0x75ABDC5F81978924(uParam0->f_243);
			unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_243);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x8352CA08CF578D18(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0,8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_237(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_238(iParam3), 0);
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_239(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (func_147(uParam0))
		{
			return func_161(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_240(var uParam0)
{
	func_171(uParam0, uParam0->f_3);
	if (func_147(uParam0))
	{
		if (func_146(uParam0, 14))
		{
			func_173(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_10));
			}
		}
	}
	if (!func_146(uParam0, 9))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
			unk_0x661342B9651D16E2(uParam0->f_8, false);
		}
		func_282(uParam0, 9, 0, 0);
		func_241("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_241(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_242(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_44();
		func_282(uParam0, 16, 4f, 0);
		unk_0x790015DC92C918E2();
	}
}

int func_243(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		return 0;
	}
	func_249(12);
	if (func_19(uParam0->f_44, 8))
	{
		if (!func_19(uParam0->f_44, 128))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_19(uParam0->f_44, 256))
			{
				func_58(&(uParam0->f_44), 256);
			}
			if (func_19(uParam0->f_44, 256) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_189(uParam0, 135, 1, 0, 1);
				func_58(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_247(uParam0, iParam1))
	{
		if (func_160(uParam0->f_3, 1) < 35f)
		{
			if (!func_19(uParam0->f_44, 8))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
				func_189(uParam0, 133, 1, 0, 1);
				func_58(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_160(uParam0->f_3, 1) > 400f)
		{
			func_286(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, true);
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_245(uParam0);
			func_46(2, 0);
			bLocal_94 = true;
			func_193(&iLocal_90);
			return 1;
		}
		else
		{
			func_286(uParam0, "No Taxi", 21);
			func_244("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_244(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_245(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (func_246())
		{
		}
	}
}

int func_246()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				bVar2 = func_231(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == 782665360 || iVar1 == -667151410) || iVar1 == 699456151) || iVar1 == -1311240698) || iVar1 == -1207431159) || iVar1 == -823509173) || iVar1 == 1074326203) || iVar1 == 321739290) || iVar1 == 516990260) || iVar1 == 887537515) || iVar1 == 2132890591) || iVar1 == 1560980623) || iVar1 == 1147287684) || iVar1 == -537896628) || iVar1 == 1770332643) || iVar1 == -884690486) || iVar1 == 1353720154) || iVar1 == -845979911) || iVar1 == 627094268) || iVar1 == -1323100960) || iVar1 == -442313018) || iVar1 == 1283517198) || iVar1 == -713569950) || iVar1 == -2072933068) || iVar1 == -1098802077) || iVar1 == 1941029835) || iVar1 == -1205689942) || iVar1 == 1917016601) || iVar1 == 2053223216) || iVar1 == 850991848) || iVar1 == 1518533038) || iVar1 == 569305213) || iVar1 == -2137348917) || iVar1 == 2112052861) || iVar1 == 1886712733) || iVar1 == 444583674) || iVar1 == -947761570) || iVar1 == -1006919392) || iVar1 == -2130482718) || iVar1 == -784816453) || iVar1 == 475220373) || iVar1 == -1705304628) || iVar1 == -1700801569) || iVar1 == 48339065) || iVar1 == 1876516712) || iVar1 == 1951180813) || iVar1 == -1987130134) || iVar1 == -233098306) || iVar1 == 121658888) || iVar1 == -1346687836) || iVar1 == -907477130) || iVar1 == -1743316013) || iVar1 == 893081117) || iVar1 == -1745203402) || iVar1 == -120287622) || iVar1 == 904750859) || iVar1 == -1050465301) || iVar1 == -119658072) || iVar1 == 1162065741) || iVar1 == -1776615689) || iVar1 == -810318068) || iVar1 == 728614474) || iVar1 == 65402552) || iVar1 == 1783355638) || iVar1 == 1641462412) || iVar1 == -2076478498) || iVar1 == 1127131465) || iVar1 == -1647941228) || iVar1 == 741586030) || iVar1 == 1171614426) || iVar1 == 1682114128) || iVar1 == 1938952078) || iVar1 == 469291905) || iVar1 == -1661854193) || iVar1 == -2007026063) || iVar1 == 2046537925) || iVar1 == -1627000575) || iVar1 == 1912215274) || iVar1 == -1973172295) || iVar1 == -34623805) || iVar1 == 456714581) || iVar1 == -1683328900) || iVar1 == 1922257928) || iVar1 == 1747439474)
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == -1435919434)
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x8E39AC3C76C8AA58(iVar1))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xD6DF381716822EFE(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_19(uParam0->f_44, 64))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_244("TX_VIP_DMGD", -1);
							if (func_248("TX_VIP_DMGD"))
							{
								func_58(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_19(uParam0->f_44, 32))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_244("TX_VIP_CAR", -1);
							if (func_248("TX_VIP_CAR"))
							{
								func_58(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_19(uParam0->f_44, 16))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_244("TX_VIP_SMALL", -1);
							if (func_248("TX_VIP_SMALL"))
							{
								func_58(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_17(&(uParam0->f_44), 16);
			func_17(&(uParam0->f_44), 64);
			func_17(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_248(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_249(int iParam0)
{
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(8, &uVar0, 1, 1);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_250(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_18(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_251()
{
	Local_343 = 0;
	func_268(36603, 36578, 1);
	func_268(36339, 36316, 1);
	func_268(36254, 36229, 1);
	func_268(36157, 36133, 1);
	func_268(36023, 36002, 1);
	func_268(35949, 35924, 1);
	func_268(35782, 35759, 1);
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_253(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_255(uParam0->f_4))
		{
			func_254(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_254(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_255(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0, 40000) || unk_0x7B5606C651AB51B5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_257(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		if (func_258(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_254(uParam0, 11);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(uParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_146(uParam0, 25))
			{
				func_282(uParam0, 25, 0, 0);
			}
			else if (func_398(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_146(uParam0, 25))
		{
			func_144(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_261(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_262(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (unk_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (unk_0x7B5606C651AB51B5(uParam0->f_4, 0, 40000) || unk_0x7B5606C651AB51B5(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_264(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_258(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_265(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_266(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_267(uParam0->f_4))
		{
			func_254(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) == 0f)
	{
		if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0, 40000) || unk_0x7B5606C651AB51B5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_268(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343] = 0;
	func_59(&(Local_343.f_1[Local_343]), 1);
	if (bParam2)
	{
		func_59(&(Local_343.f_1[Local_343]), 2);
	}
	Local_343.f_1[Local_343].f_2 = iParam0;
	Local_343.f_1[Local_343].f_3 = iParam1;
	Local_343++;
}

int func_269(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_270(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0x437347B10A200C4B(uParam0->f_3, 0)) || unk_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, var uParam1)
{
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_60[iVar0]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0] = { *uParam1[iVar0] };
			unk_0x5D96D8530B3D0904(&(uParam0->f_60[iVar0]), 1);
			unk_0x0674E58A79778E99(&(uParam0->f_60[iVar0]), 2);
			iVar0++;
		}
	}
}

void func_272(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_273()
{
	Local_190[5] = 5;
	Local_190[5].f_1 = 0;
	Local_190[5].f_2 = "TX_SPEED_N";
	Local_190[5].f_9 = 78;
	Local_190[0] = 5;
	Local_190[0].f_1 = 0;
	Local_190[0].f_2 = "TX_AIR_N";
	Local_190[0].f_9 = 76;
	Local_190[2] = 5;
	Local_190[2].f_1 = 0;
	Local_190[2].f_2 = "TX_QSTOP_N";
	Local_190[2].f_9 = 21;
	Local_190[1] = 10;
	Local_190[1].f_1 = 0;
	Local_190[1].f_2 = "TX_DRIFT_N";
	Local_190[1].f_9 = 71;
	Local_190[4] = 10;
	Local_190[4].f_1 = 0;
	Local_190[4].f_2 = "TX_SIDEWALK_N";
	Local_190[4].f_9 = 79;
	Local_190[6] = 10;
	Local_190[6].f_1 = 0;
	Local_190[6].f_2 = "TX_ONCOMING_N";
	Local_190[6].f_9 = 80;
	Local_190[9] = 15;
	Local_190[9].f_1 = 0;
	Local_190[9].f_2 = "TX_HITRUN_N";
	Local_190[9].f_9 = 82;
	Local_190[8] = 15;
	Local_190[8].f_1 = 0;
	Local_190[8].f_2 = "TX_RECKLESS_N";
	Local_190[8].f_9 = 72;
	Local_190[7] = 15;
	Local_190[7].f_1 = 0;
	Local_190[7].f_2 = "TX_ROLL_N";
	Local_190[7].f_9 = 74;
	Local_190[11] = 5;
	Local_190[11].f_1 = 0;
	Local_190[11].f_2 = "TX_SWERVE_N";
	Local_190[11].f_9 = 70;
	Local_190[12] = 5;
	Local_190[12].f_1 = 0;
	Local_190[12].f_2 = "TX_REVERSE_N";
	Local_190[12].f_9 = 69;
	Local_190[13] = 10;
	Local_190[13].f_1 = 0;
	Local_190[13].f_2 = "TX_OFFROAD_N";
	Local_190[13].f_9 = 67;
	Local_190[14] = 10;
	Local_190[14].f_1 = 0;
	Local_190[14].f_2 = "TX_NEARMIS_N";
	Local_190[14].f_9 = 75;
}

int func_274()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_839))
	{
		func_228("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_844, 1000);
		return 0;
	}
	if (!unk_0x83D8570832F172A7(iLocal_943))
	{
		return 0;
	}
	if (!func_275(&iLocal_844, 1))
	{
		func_228("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_844, 1000);
		return 0;
	}
	return 1;
}

int func_275(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_16()))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_276(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_277(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_278(uParam0->f_3, 0, 0);
		unk_0x138116A08F9AC5F4(1, 0f);
		unk_0x661342B9651D16E2(uParam0->f_8, true);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), -1, 2048, 4);
	}
	return 1;
}

int func_278(int iParam0, bool bParam1, bool bParam2)
{
	return func_166(iParam0, !bParam1, bParam2);
}

int func_279(var uParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_280(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_36(uParam0->f_14, 0);
		unk_0x745CE398A4B0A3C6(uParam0->f_14, 2f, 0);
		func_34(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x852B8A2DB29D2288(uParam0->f_11);
		}
		else if (unk_0xC844350D5D58C99A(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			unk_0x73270B3C9CC833FD(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x36F2404464202779(26, iParam8, uParam0->f_11, fParam9, 1, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x4F39CC3882DD074E(uParam0->f_3, sParam7);
		unk_0x9DD8618CA5BF832D(uParam0->f_3, 112, true);
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			unk_0x25BD67336EA4AECE(uParam0->f_3, 250);
			unk_0x4E885A246A9D983A(uParam0->f_3, 32, false);
			unk_0x4E885A246A9D983A(uParam0->f_3, 104, true);
			unk_0x4E885A246A9D983A(uParam0->f_3, 177, true);
			unk_0x4E885A246A9D983A(uParam0->f_3, 116, false);
			unk_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_413));
			unk_0x0E2400AB9174FA81(1, uParam0->f_413, 1862763509);
			unk_0x0E2400AB9174FA81(2, uParam0->f_413, -1533126372);
			unk_0x6DF7BF67E86AAE86(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0);
}

Vector3 func_281(int iParam0)
{
	vVar0 = { func_113() };
	switch (iParam0)
	{
		case 0:
			vVar0 = { 924,2684f, 50,078f, 79,7647f };
			break;
		
		case 1:
			vVar0 = { 916,0502f, 39,3504f, 79,7647f };
			break;
		
		case 2:
			vVar0 = { 1971,246f, 3741,517f, 31,3268f };
			break;
		
		case 3:
			vVar0 = { 2004,278f, 3752,319f, 31,4156f };
			break;
		
		case 4:
			vVar0 = { 1410,891f, 3596,068f, 33,8351f };
			break;
		
		case 5:
			vVar0 = { -1383,06f, -972,8339f, 8,014f };
			break;
		
		case 6:
			vVar0 = { -1399,197f, -944,1848f, 9,4306f };
			break;
		
		case 7:
			vVar0 = { -1379,262f, -972,9459f, 7,8097f };
			break;
		
		case 8:
			vVar0 = { -1390,765f, -584,3324f, 29,2306f };
			break;
		
		case 9:
			vVar0 = { -1410,223f, -590,6025f, 29,3669f };
			break;
		
		case 10:
			vVar0 = { -1379,262f, -972,9459f, 7,8097f };
			break;
	}
	return vVar0;
}

void func_282(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_105(&(uParam0->f_146[iVar0]), fParam2);
			}
			else
			{
				func_104(&(uParam0->f_146[iVar0]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_105(&(uParam0->f_146[iParam1]), fParam2);
	}
	else
	{
		func_104(&(uParam0->f_146[iParam1]));
	}
	if (bParam3)
	{
	}
}

void func_283()
{
	unk_0x523BCC9DC80CD82F(iLocal_839);
	iLocal_943 = func_285();
	func_284(1);
}

void func_284(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_16());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 2);
	if (!func_19(Global_111638.f_19092, 128))
	{
		func_58(&(Global_111638.f_19092), 128);
	}
}

int func_285()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_286(var uParam0, char* sParam1, int iParam2)
{
	func_177();
	func_419(2);
	vVar0 = { func_306() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_179()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (!func_126(uParam0))
			{
				if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_282(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_304(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_126(uParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
				{
					func_302(uParam0, 4096, 0);
				}
				else
				{
					func_302(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_304(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_304(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_304(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_304(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_302(uParam0, 0, 0);
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_304(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_304(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_301(&vVar0);
			func_287(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_304(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_304(uParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_46(3, 0);
		}
		func_282(uParam0, 3, 0f, 1);
	}
}

int func_287(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_288(sParam2, iParam3, 0);
}

int func_288(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x5CEB4DB888A62073(false);
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
					func_178();
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
		if (func_299(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_298();
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
				func_297();
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
				if (func_296())
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
			if (func_28())
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
			func_295();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_294();
		func_289();
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
		func_178();
	}
	return 0;
}

void func_289()
{
	if (!func_290())
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

int func_290()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_293())
	{
		return 0;
	}
	if (func_291(unk_0xD803B885F5E47A62()))
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

bool func_291(int iParam0)
{
	return func_292(iParam0, 20);
}

bool func_292(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_293()
{
	return -1;
}

void func_294()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_295()
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

int func_296()
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

void func_297()
{
	if (func_73(14))
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
		Global_19486 = func_96();
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

void func_298()
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

bool func_299(int iParam0, int iParam1)
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

void func_300(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

void func_301(char* sParam0)
{
	switch (func_3(unk_0x16F2683693E537C9()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_302(var uParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, false);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 3, false);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 17, true);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_142(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_120(uParam0->f_29)) && !bParam2)
		{
			func_303(uParam0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(uParam0->f_3, 1024, true);
			unk_0xBAFED2F6486F771A(uParam0->f_3, 131072, true);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			}
			unk_0xD93EE6549113F9E1(0, 0);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, true);
	}
}

void func_303(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_112(func_113(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 84,9058f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 68,3138f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, true);
			}
			else
			{
				unk_0x01E4BB5190DF7317(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0xF82EA857DA10E0CD(&iVar0);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0, 0, 0);
			unk_0xD93EE6549113F9E1(0, 0);
			unk_0x96167B03C5A77156(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x91CF687749AD9691(0, 1);
				unk_0x96167B03C5A77156(0, 813,9421f, 1172,681f, 329,7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xE655C47E46F9A7E4(0, 151,7794f, 0);
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 20000);
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x4742C50E93110B10(uParam0->f_29, 15f, 1))
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, true);
	}
}

void func_304(var uParam0, char* sParam1)
{
	if (func_305(uParam0))
	{
		func_287(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_305(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_161(unk_0x16F2683693E537C9(), uParam0->f_3, 1) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_306()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_307(var uParam0)
{
	return uParam0->f_118;
}

void func_308()
{
	func_342(&Local_409);
	if (func_341(&Local_409, &Local_862))
	{
		switch (Local_862.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_340(&Local_409))
					{
						if (func_339("TX_OBJ_DL_DO") || unk_0xE4EDC4B0E92C078B(Local_409.f_9))
						{
							Local_862.f_27++;
						}
						else if (func_338(&Local_409) != 10)
						{
							func_189(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (func_338(&Local_409) > 10 && func_338(&Local_409) != 16)
				{
					func_58(&(Local_409.f_81), 67108864);
					func_189(&Local_409, 16, 1, 0, 0);
					if (bLocal_861)
					{
					}
				}
				break;
			
			case 2:
				if (func_398(&Local_409, 18) > unk_0x79833B02DBD2A244(8f, 14f))
				{
					if (!func_150(&Local_409))
					{
						func_337(&Local_409, 0);
						Local_862.f_27++;
						if (bLocal_861)
						{
						}
					}
				}
				break;
			}
	}
	func_309(&Local_409, &uLocal_892, &Local_862, bLocal_861);
}

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_318(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_146(uParam0, 2))
	{
		if (func_317(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_316(uParam0))
				{
					uParam2->f_7 = { func_315(uParam1) };
					func_287(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_179())
				{
					uParam2->f_13 = { func_192() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_59(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_153(uParam0))
				{
					if (func_179())
					{
						func_282(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_311() };
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_179())
				{
					uParam2->f_19 = { func_306() };
				}
				else
				{
					func_59(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_146(uParam0, 14) && !func_179()) && !func_153(uParam0)) && func_398(uParam0, 18) > 1f)
				{
					func_282(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_179())
				{
					if (func_398(uParam0, 18) > 1f)
					{
						if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_310(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_179())
				{
					func_59(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_310(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_288(sParam2, iParam4, 0);
}

struct<6> func_311()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar8])))
					{
						return Global_19673[iVar8];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_312(var uParam0)
{
	iVar0 = func_314(uParam0);
	if (iVar0 > -1)
	{
		func_17(&(uParam0[iVar0]->f_7), 2);
		func_17(&(uParam0[iVar0]->f_7), 4);
		func_58(&(uParam0[iVar0]->f_7), 8);
		StringCopy(uParam0[iVar0], func_313(), 24);
	}
}

var func_313()
{
	return uVar0;
}

int func_314(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19(uParam0[iVar0]->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_315(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19(uParam0[iVar0]->f_7, 2))
		{
			Var1 = { *uParam0[iVar0] };
			func_58(&(uParam0[iVar0]->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_316(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_155("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_155("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_155("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_155("TX_OBJ_GYB_DO", 0, 0) || func_155("TAXI_OBJ_GYB", 0, 0)) || func_155("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_155("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_155("TX_OBJ_CYI_DO", 0, 0) || func_155("TAXI_OBJ_CYI_01", 0, 0)) || func_155("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_155("TX_OBJ_GYN_DO", 0, 0) || func_155("TAXI_OBJ_GYN", 0, 0)) || func_155("TAXI_OBJ_GYN_TG", 0, 0)) || func_155("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_155("TAXI_OBJ_CC1", 0, 0) || func_155("TAXI_OBJ_CC2", 0, 0)) || func_155("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_155("TAXI_OBJ_FTC1", 0, 0) || func_155("TAXI_OBJ_FTC2", 0, 0)) || func_155("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_155("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_155("TAXI_OBJ_GETRUN", 0, 0) || func_155("TAXI_OBJ_DRIVE", 0, 0)) || func_155("TAXI_OBJ_RETURN", 0, 0)) || func_155("TAXI_OBJ_POL", 0, 0)) || func_155("TAXI_OBJ_RUNOUT", 0, 0)) || func_155("TAXI_OBJ_POL", 0, 0));
}

int func_317(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19(uParam0[iVar0]->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_318(var uParam0, var uParam1)
{
	if (func_316(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_146(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_338(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_334(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_179())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_333(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_330(uParam0, vVar0, func_332(uParam0, 2));
				}
				if (func_19(uParam0->f_98, 4))
				{
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				func_168(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_398(uParam0, 16) > 1f)
				{
					func_170(1);
					if (uParam0->f_411 == 9)
					{
						func_241("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_241("TAXI_VIP_RETURN", 7500, 1);
					}
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_398(uParam0, 16) > func_167(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_179()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_338(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_333(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_334(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_287(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_189(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_282(uParam0, 16, 0, 0);
				func_189(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar6 = { vVar0 };
				if (!func_19(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_336(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_333(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_282(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_241("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_329(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_191(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_237(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_329(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_328(uParam0, 33554432, vVar0, "", 1, 8);
				func_282(uParam0, 16, 0, 0);
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_179())
				{
					func_327(uParam0, 0);
					func_58(&(uParam0->f_44), 4);
					func_282(uParam0, 16, 0, 0);
					func_189(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_398(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_191(&vVar0);
					}
					func_325(vVar0, uParam1);
					func_58(&(uParam0->f_81), 67108864);
					func_282(uParam0, 16, 0, 0);
					func_282(uParam0, 11, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_398(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_191(&vVar0);
						}
					}
					func_325(vVar0, uParam1);
					func_282(uParam0, 11, 0, 0);
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_191(&vVar0);
				}
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				func_58(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_324(&(uParam0->f_90), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_324(&(uParam0->f_90), 3, &vVar0, &iVar15, 1, 0);
				}
				func_325(vVar0, uParam1);
				func_334(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_324(&(uParam0->f_89), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_324(&(uParam0->f_89), 3, &vVar0, &iVar15, 1, 0);
				}
				func_325(vVar0, uParam1);
				func_334(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 12:
				func_241("TAXI_OBJ_GYB", 3500, 1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_241("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_241("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_19(uParam0->f_98, 268435456))
				{
					func_241("TAXI_OBJ_CYI_01", 7500, 1);
					func_58(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 33:
				func_241("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_19(uParam0->f_82, 8192))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_191(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_325(vVar0, uParam1);
						}
						else
						{
							func_333(uParam0, &vVar0, 0, 0, 8);
						}
						func_58(&(uParam0->f_82), 8192);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_19(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_191(&vVar0);
					func_333(uParam0, &vVar0, 0, 0, 8);
					func_58(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_19(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_191(&vVar0);
					func_333(uParam0, &vVar0, 0, 0, 8);
					func_58(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_242(uParam0, 0, 0);
				break;
			
			case 139:
				func_241("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_189(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = unk_0x09AC81E49EA267F7(0, 120);
				if (!func_19(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_58(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = unk_0x09AC81E49EA267F7(0, 100);
				if (!func_19(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_58(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_241("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_242(uParam0, 0, 0);
				func_189(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_179())
				{
					func_241("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_242(uParam0, 0, 0);
					func_189(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_241("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_242(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_19(uParam0->f_81, 1))
				{
					func_323(uParam0, 1, vVar0, "_sick1", 8);
					func_17(&(uParam0->f_81), 2);
				}
				else if (!func_19(uParam0->f_81, 2))
				{
					func_323(uParam0, 2, vVar0, "_sick2", 8);
					func_17(&(uParam0->f_81), 1);
				}
				func_334(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_19(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_19(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_58(&(uParam0->f_81), 2097152);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_282(uParam0, 16, 0, 0);
				func_334(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_334(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_334(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_334(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_19(uParam0->f_81, 4))
				{
					func_323(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_19(uParam0->f_81, 8))
				{
					func_323(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_323(uParam0, 8, vVar0, "_turns3", 8);
					func_17(&(uParam0->f_81), 4);
					func_17(&(uParam0->f_81), 8);
				}
				func_334(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_322(uParam0))
				{
					func_330(uParam0, vVar0, func_332(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar6 = { vVar0 };
					func_336(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_287(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar6 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_336(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_336(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				func_334(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_19(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 128);
					func_17(&(uParam0->f_83), 256);
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 256);
					func_17(&(uParam0->f_83), 512);
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 512);
					func_17(&(uParam0->f_83), 128);
					func_282(uParam0, 16, 0, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_19(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar24)
					{
						func_191(&vVar0);
					}
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 1);
					func_17(&(uParam0->f_83), 2);
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar24)
					{
						func_191(&vVar0);
					}
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_17(&(uParam0->f_83), 4);
					}
					else
					{
						func_17(&(uParam0->f_83), 1);
					}
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar24)
					{
						func_191(&vVar0);
					}
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 4);
					func_17(&(uParam0->f_83), 1);
					func_282(uParam0, 16, 0, 0);
				}
				func_334(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_19(uParam0->f_81, 4096))
				{
					func_328(uParam0, 4096, vVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_19(uParam0->f_81, 8192))
				{
					func_328(uParam0, 8192, vVar0, "_sideW2", bVar24, 8);
				}
				func_334(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_19(uParam0->f_81, 16384))
				{
					func_328(uParam0, 16384, vVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_19(uParam0->f_81, 32768))
				{
					func_328(uParam0, 32768, vVar0, "_opLne2", bVar24, 8);
				}
				func_334(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_19(uParam0->f_82, 8))
					{
						func_321(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_19(uParam0->f_82, 16))
					{
						func_321(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_19(uParam0->f_82, 32))
					{
						func_321(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_242(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar6 = { vVar0 };
					func_336(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_334(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_19(uParam0->f_81, 65536))
				{
					func_328(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_19(uParam0->f_81, 131072))
				{
					func_328(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_322(uParam0))
				{
					func_330(uParam0, vVar0, func_332(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_19(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 8);
					func_17(&(uParam0->f_83), 16);
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 16);
					func_17(&(uParam0->f_83), 32);
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_17(&(uParam0->f_83), 64);
					}
					else
					{
						func_17(&(uParam0->f_83), 8);
					}
					func_282(uParam0, 16, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_58(&(uParam0->f_83), 64);
					func_17(&(uParam0->f_83), 8);
					func_282(uParam0, 16, 0, 0);
				}
				func_334(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_179())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_333(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_330(uParam0, vVar0, func_332(uParam0, 65));
					func_242(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_179())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_333(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_330(uParam0, vVar0, func_332(uParam0, 66));
					func_242(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_179())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								func_334(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								func_334(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar6 = { vVar0 };
								func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
								func_334(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_282(uParam0, 16, 0, 0);
								func_242(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar6 = { vVar0 };
									func_333(uParam0, &vVar0, 0, 0, 8);
									func_282(uParam0, 16, 0, 0);
									func_282(uParam0, 11, 0, 0);
									func_242(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_191(&vVar0);
									func_333(uParam0, &vVar0, 0, 0, 8);
									func_282(uParam0, 16, 0, 0);
									func_282(uParam0, 11, 0, 0);
									func_242(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_333(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_189(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_334(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_19(uParam0->f_82, 1))
				{
					func_321(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_19(uParam0->f_82, 2))
				{
					func_321(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_19(uParam0->f_82, 4))
				{
					func_321(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_282(uParam0, 16, 0, 0);
				func_334(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_322(uParam0))
				{
					func_330(uParam0, vVar0, func_332(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_320(uParam0, vVar0, 8);
				}
				func_334(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_19(uParam0->f_83, 1024))
				{
					func_58(&(uParam0->f_83), 1024);
					func_282(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 2048))
				{
					func_58(&(uParam0->f_83), 2048);
					func_282(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_19(uParam0->f_83, 4096))
				{
					func_58(&(uParam0->f_83), 4096);
					func_282(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_191(&vVar0);
					func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_19(uParam0->f_82, 1024))
				{
					func_321(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_17(&(uParam0->f_82), 2048);
				}
				else if (!func_19(uParam0->f_82, 2048))
				{
					func_321(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_334(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_322(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar6 = { vVar0 };
						cVar6 = { vVar0 };
						func_333(uParam0, &vVar0, 0, 0, 8);
						func_189(uParam0, 52, 1, 0, 0);
						func_282(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar6 = { vVar0 };
						func_333(uParam0, &vVar0, 0, 0, 8);
						func_282(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar6 = { vVar0 };
					func_336(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_334(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_282(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					func_241("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_19(uParam0->f_81, 262144))
				{
					func_328(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_19(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_328(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_328(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_334(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_19(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_319(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_19(uParam0->f_82, 134217728))
				{
					func_319(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_334(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar6 = { vVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 100:
				func_241("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_242(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_191(&vVar0);
				}
				func_58(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_191(&vVar0);
				}
				func_58(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_191(&vVar0);
				}
				func_58(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_19(uParam0->f_82, 65536))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_191(&vVar0);
						func_325(vVar0, uParam1);
						func_58(&(uParam0->f_82), 65536);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_19(uParam0->f_82, 131072))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_191(&vVar0);
						func_325(vVar0, uParam1);
						func_58(&(uParam0->f_82), 131072);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_19(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_58(&(uParam0->f_82), 8388608);
				}
				else if (!func_19(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_58(&(uParam0->f_82), 16777216);
				}
				else if (!func_19(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_58(&(uParam0->f_82), 33554432);
				}
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar6 = { vVar0 };
					func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_191(&vVar0);
					func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_333(uParam0, &vVar0, 0, 0, 8);
				}
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_325(vVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar6 = { vVar0 };
				func_336(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_189(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_58(&(uParam0->f_81), 2097152);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_191(&vVar0);
				func_325(vVar0, uParam1);
				func_58(&(uParam0->f_81), 67108864);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_19(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_328(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_189(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_19(uParam0->f_81, 268435456))
				{
					func_328(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_189(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_241("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_242(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_19(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_328(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_237(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_328(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_189(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_241("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_242(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_287(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_19(uParam0->f_81, 16777216))
				{
					func_328(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 88:
				func_241("TAXI_TIEFLEE", 7500, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_19(uParam0->f_98, 536870912))
				{
					func_241("TAXI_OBJ_CYI_1B", 7500, 1);
					func_58(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_242(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_191(&vVar0);
				func_333(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_333(uParam0, &vVar0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_333(uParam0, &vVar0, 1, 0, 8);
				func_189(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_241("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_189(uParam0, 0, 0, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			}
	}
}

void func_319(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(uParam0->f_82), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_191(&vParam2);
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

void func_320(var uParam0, struct<6> Param1, int iParam7)
{
	cVar0 = { Param1 };
	if (!func_19(uParam0->f_82, 64))
	{
		func_58(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_19(uParam0->f_82, 128))
	{
		func_58(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(1, 3), 24);
	}
	func_335(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_282(uParam0, 16, 0, 0);
}

void func_321(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_58(&(uParam0->f_82), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_191(&vParam2);
		}
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

int func_322(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_323(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_58(&(uParam0->f_81), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	func_287(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

void func_324(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_258(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_191(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_325(char[24] cParam0, var uParam6)
{
	iVar0 = func_326(uParam6);
	if (iVar0 > -1)
	{
		*uParam6[iVar0] = { cParam0 };
		func_58(&(uParam6[iVar0]->f_7), 2);
	}
}

int func_326(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xEA6BC48857E0AC4C(uParam0[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_327(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_241("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_241("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_241("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_241("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_241("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_241("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_241("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_241("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_241("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_241("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_328(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(uParam0->f_81), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_191(&vParam2);
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

int func_329(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_167(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_330(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_282(uParam0, 16, 0, 0);
	func_282(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_331(uParam0));
	}
}

char* func_331(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_332(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_333(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_282(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_282(uParam0, 17, 0f, 1);
	}
	func_242(uParam0, iParam2, 0);
	return func_287(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_334(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_19(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_19(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_19(*uParam2, 4))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_19(*uParam2, 512))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_19(*uParam2, 16))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_19(*uParam2, 64))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_19(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_19(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_19(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_19(*uParam2, 8192))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_19(*uParam2, 16384))
		{
			if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_19(*uParam2, 32768))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_19(*uParam2, 65536))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_19(*uParam2, 131072))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_19(*uParam2, 262144))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_19(*uParam2, 524288))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_19(*uParam2, 1048576))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_19(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_19(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_19(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_19(*uParam2, 67108864))
		{
			if (func_19(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_19(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_19(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_19(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_19(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_335(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_288(sParam2, iParam4, 0);
}

void func_336(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_258(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_191(sParam2);
				}
				else
				{
					func_191(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_337(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_338(var uParam0)
{
	return uParam0->f_416;
}

int func_339(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_155(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_340(var uParam0)
{
	if (func_179())
	{
		return 1;
	}
	if (func_146(uParam0, 17))
	{
		return 1;
	}
	if (func_146(uParam0, 14))
	{
		return 1;
	}
	if (func_153(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_341(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_146(uParam0, 9));
}

void func_342(var uParam0)
{
	if (func_146(uParam0, 17))
	{
		if (!func_146(uParam0, 14))
		{
			if (!func_153(uParam0))
			{
				if (!func_179())
				{
					func_144(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_343(var uParam0)
{
	return uParam0->f_117;
}

void func_344(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (bParam2)
			{
				if (func_398(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_189(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_189(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_282(uParam0, 10, 0f, 1);
				}
			}
			else if (func_398(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_282(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_398(uParam0, 10) > 30f)
		{
			if (!func_179())
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_282(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_19(uParam0->f_100, 64))
	{
		if (!func_106(&(Local_190[5].f_6)))
		{
			func_193(&(Local_190[5].f_6));
		}
		else if (func_100(&(Local_190[5].f_6)) > 6f)
		{
			if (func_367(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[5].f_9, 1, 0, 0);
				}
				func_366(uParam0, 1);
				func_364(5, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 1))
	{
		if (!func_106(&(Local_190[0].f_6)))
		{
			func_193(&(Local_190[0].f_6));
		}
		else if (func_100(&(Local_190[0].f_6)) > 5f)
		{
			if (func_362(uParam0))
			{
				func_366(uParam0, 1);
				func_364(0, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[0].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 2))
	{
		if (!func_106(&(Local_190[1].f_6)))
		{
			func_193(&(Local_190[1].f_6));
		}
		else if (func_100(&(Local_190[1].f_6)) > 5f)
		{
			if (func_361(uParam0))
			{
				func_366(uParam0, 1);
				func_364(1, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[1].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 2048))
	{
		if (!func_106(&(Local_190[8].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_193(&(Local_190[8].f_6));
			}
		}
		else if (func_100(&(Local_190[8].f_6)) > 7f || Local_190[8].f_1 == 0)
		{
			if (func_360(uParam0))
			{
				func_366(uParam0, 1);
				func_364(8, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 128))
	{
		if (!func_106(&(Local_190[6].f_6)))
		{
			func_193(&(Local_190[6].f_6));
		}
		else if (func_100(&(Local_190[6].f_6)) > 5f)
		{
			if (func_359(uParam0))
			{
				func_366(uParam0, 1);
				func_364(6, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[6].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 32))
	{
		if (!func_106(&(Local_190[4].f_6)))
		{
			func_193(&(Local_190[4].f_6));
		}
		else if (func_100(&(Local_190[4].f_6)) > 4f)
		{
			if (func_358(uParam0))
			{
				func_366(uParam0, 1);
				func_364(4, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[4].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 256))
	{
		if (!func_106(&(Local_190[7].f_6)))
		{
			func_193(&(Local_190[7].f_6));
		}
		else if (func_100(&(Local_190[7].f_6)) > 5f || Local_190[7].f_1 == 0)
		{
			if (func_357(uParam0))
			{
				func_364(7, uParam0);
				func_366(uParam0, 1);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[7].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 8))
	{
		if (!func_106(&(Local_190[9].f_6)))
		{
			func_193(&(Local_190[9].f_6));
		}
		else if (func_100(&(Local_190[9].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_100(&(Local_190[9].f_6)) > 7f || Local_190[9].f_1 == 0)
		{
			if (func_356(uParam0))
			{
				func_366(uParam0, 1);
				func_364(9, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[9].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 16384))
	{
		if (!func_106(&(Local_190[13].f_6)))
		{
			func_193(&(Local_190[13].f_6));
		}
		else if (func_100(&(Local_190[13].f_6)) > 10f)
		{
			if (func_350(uParam0))
			{
				func_366(uParam0, 1);
				func_364(13, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[13].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 32768))
	{
		if (!func_106(&(Local_190[14].f_6)))
		{
			func_193(&(Local_190[14].f_6));
		}
		else if (func_100(&(Local_190[14].f_6)) > 7f)
		{
			if (func_349(uParam0))
			{
				func_366(uParam0, 1);
				func_364(14, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[14].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 4096))
	{
		if (!func_106(&(Local_190[11].f_6)))
		{
			func_193(&(Local_190[11].f_6));
		}
		else if (func_100(&(Local_190[11].f_6)) > 8f)
		{
			if (func_348(uParam0))
			{
				func_366(uParam0, 1);
				func_364(11, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[11].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 8192))
	{
		if (!func_106(&(Local_190[12].f_6)))
		{
			func_193(&(Local_190[12].f_6));
		}
		else if (func_100(&(Local_190[12].f_6)) > 5f)
		{
			if (func_347(uParam0))
			{
				func_366(uParam0, 1);
				func_364(12, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[12].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 4))
	{
		if (!func_106(&(Local_190[2].f_6)))
		{
			func_346(&(Local_190[2].f_6), 0f);
		}
		else if (func_100(&(Local_190[2].f_6)) > 5f)
		{
			if (func_345(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[2].f_9, 1, 0, 0);
				}
				func_366(uParam0, 1);
				func_364(2, uParam0);
				func_363(uParam0);
			}
		}
	}
}

int func_345(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_106(&(Local_190[0].f_3))) && !func_106(&(Local_190[1].f_3)))
		{
			if (!func_106(&(Local_190[2].f_3)))
			{
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_193(&(Local_190[2].f_3));
				}
			}
			else if (func_100(&(Local_190[2].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_190[2].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_190[2].f_3));
		}
	}
	return 0;
}

void func_346(int iParam0, float fParam1)
{
	if (!func_106(iParam0))
	{
		func_105(iParam0, fParam1);
	}
}

int func_347(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_106(&(Local_190[0].f_3)))
		{
			if (!func_106(&(Local_190[12].f_3)))
			{
				func_193(&(Local_190[12].f_3));
			}
			else if (func_100(&(Local_190[12].f_3)) > 5f)
			{
				func_99(&(Local_190[12].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[12].f_3));
		}
	}
	return 0;
}

int func_348(var uParam0)
{
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_106(&(Local_190[0].f_3))) && !func_106(&(Local_190[1].f_3))) && !func_106(&(Local_190[5].f_3))) && !func_106(&(Local_190[9].f_3))) && !func_106(&(Local_190[7].f_3))) && !func_106(&(Local_190[8].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2,5f && !func_106(&(Local_190[0].f_3)))
		{
			if (!func_106(&(Local_190[11].f_3)))
			{
				func_193(&(Local_190[11].f_3));
				fLocal_342 = vVar0.x;
			}
			else if (func_100(&(Local_190[11].f_3)) < 1,5f && (unk_0x755FF954DAE327E1(fLocal_342) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_99(&(Local_190[11].f_3));
				return 1;
			}
			else if (func_100(&(Local_190[11].f_3)) >= 1,5f)
			{
				func_99(&(Local_190[11].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_349(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_106(&(Local_190[0].f_3))) && !func_106(&(Local_190[8].f_3))) && !func_106(&(Local_190[5].f_3))) && !func_106(&(Local_190[9].f_3))) && !func_106(&(Local_190[7].f_3)))
	{
		if (!func_106(&(Local_190[14].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_161(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0) && !unk_0xBBA8A868118C90ED(uParam0->f_5, -1, 0)))
				{
					func_193(&(Local_190[14].f_3));
				}
			}
		}
		else if ((func_100(&(Local_190[14].f_3)) < 1,5f && func_161(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_99(&(Local_190[14].f_3));
			return 1;
		}
		else if (func_100(&(Local_190[14].f_3)) >= 1,5f)
		{
			func_99(&(Local_190[14].f_3));
			return 0;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_99(&(Local_190[14].f_3));
			return 0;
		}
	}
	return 0;
}

int func_350(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_106(&(Local_190[9].f_3))) && !func_106(&(Local_190[7].f_3))) && !func_106(&(Local_190[4].f_3)))
	{
		if (!func_351(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_106(&(Local_190[13].f_3)))
			{
				func_193(&(Local_190[13].f_3));
			}
			else if (func_100(&(Local_190[13].f_3)) > 5f)
			{
				func_99(&(Local_190[13].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[13].f_3));
		}
	}
	return 0;
}

bool func_351(int iParam0)
{
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 2, &vVar3, 1, 3f, 0f);
	unk_0x48C17E97DDC41CBC(vVar0, -1, &vVar6);
	fVar27 = vmag(vVar6 - vVar0);
	vVar9 = { func_355((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_354(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_352(unk_0x68F4C0EC296D3901(iParam0, true), vVar15, vVar18, vVar21);
}

int func_352(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vParam0.z = 0f;
	vParam3.z = 0f;
	vParam6.z = 0f;
	vParam9.z = 0f;
	vVar0 = { func_355(vParam6 - vParam3) };
	vVar3 = { func_355(vParam9 - vParam3) };
	fVar6 = func_353(vParam0, vVar0);
	fVar7 = func_353(vParam3, vVar0);
	fVar8 = func_353(vParam6, vVar0);
	fVar9 = func_353(vParam0, vVar3);
	fVar10 = func_353(vParam3, vVar3);
	fVar11 = func_353(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_353(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_354(vector3 vParam0, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_355(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_356(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_357(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (unk_0x377BE9A1BF38C7CE(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xCE563465D2227DD6(uParam0->f_4) <= -145f || unk_0xCE563465D2227DD6(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xCE563465D2227DD6(uParam0->f_4) <= 35f && unk_0xCE563465D2227DD6(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_358(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_106(&(Local_190[4].f_3)))
			{
				func_193(&(Local_190[4].f_3));
			}
			else if (func_100(&(Local_190[4].f_3)) > 2f)
			{
				func_99(&(Local_190[4].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[4].f_3));
		}
	}
	return 0;
}

int func_359(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_106(&(Local_190[6].f_3)))
			{
				func_193(&(Local_190[6].f_3));
			}
			else if (func_100(&(Local_190[6].f_3)) > 3,5f)
			{
				func_99(&(Local_190[6].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[6].f_3));
		}
	}
	return 0;
}

int func_360(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xE608C809F9416F00(uParam0->f_4))
		{
			iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xE910A68AA670B4AA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_190[2].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_361(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_106(&(Local_190[0].f_3)))
		{
			if (!func_106(&(Local_190[1].f_3)))
			{
				func_193(&(Local_190[1].f_3));
			}
			else if (func_100(&(Local_190[1].f_3)) > 1,2f)
			{
				func_99(&(Local_190[1].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[1].f_3));
		}
	}
	return 0;
}

int func_362(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_106(&(Local_190[0].f_3)))
			{
				func_193(&(Local_190[0].f_3));
			}
			else if (func_100(&(Local_190[0].f_3)) > 0,7f)
			{
				func_99(&(Local_190[0].f_3));
				func_104(&(Local_190[1].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[0].f_3));
		}
	}
	return 0;
}

void func_363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_106(&(Local_190[iVar0].f_6)))
		{
			func_104(&(Local_190[iVar0].f_6));
		}
		iVar0++;
	}
	func_282(uParam0, 10, 0f, 1);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_364(int iParam0, var uParam1)
{
	Local_190[iParam0].f_1++;
	func_365(uParam1, iParam0);
	func_99(&(Local_190[iParam0].f_6));
	uParam1->f_112 = 1;
}

void func_365(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1]);
}

void func_366(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_367(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_106(&(Local_190[5].f_3)))
			{
				func_193(&(Local_190[5].f_3));
			}
			else if (func_100(&(Local_190[5].f_3)) > 3,5f)
			{
				func_99(&(Local_190[5].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[5].f_3));
		}
	}
	return 0;
}

void func_368(var uParam0)
{
	if (!func_147(uParam0))
	{
		if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
		func_159(uParam0, 1);
	}
	else if (func_146(uParam0, 14))
	{
		func_173(uParam0);
		func_162(uParam0, 0);
	}
}

void func_369(var uParam0)
{
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_343 > 0 && !func_258(Local_343.f_1[4], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_258(Local_343.f_1[iVar0], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0].f_2);
						if (StackVal)
						{
							if (!func_258(Local_343.f_1[iVar0], 4))
							{
								func_59(&(Local_343.f_1[iVar0]), 4);
								Local_343.f_1[iVar0].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_18(&(Local_343.f_1[iVar0]), 12);
						}
						if (func_258(Local_343.f_1[iVar0], 4) && !func_258(Local_343.f_1[iVar0], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0].f_1);
							Call_Loc(Local_343.f_1[iVar0].f_3);
							if (StackVal)
							{
								func_59(&(Local_343.f_1[iVar0]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_286(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_370(var uParam0, var uParam1, bool bParam2)
{
	if (!func_19(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_124)) && func_179())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_179())
				{
					StringCopy(&(uParam0->f_124), func_313(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_371()
{
	if ((round((func_398(&Local_409, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_375(&Local_409, 27, fLocal_956[0]))
	{
		switch (iLocal_846)
		{
			case 0:
				func_373();
				Local_409.f_39 = fLocal_956[1];
				Local_409.f_40 = fLocal_956[2];
				iLocal_846++;
				break;
			
			case 1:
				func_372(26, 27, Local_409.f_39);
				break;
			}
	}
}

int func_372(int iParam0, int iParam1, float fParam2)
{
	if (func_146(&Local_409, 7))
	{
		if (iLocal_1014 < 22)
		{
			if (!func_179())
			{
				if (func_398(&Local_409, 7) <= (fLocal_964[iLocal_1014] + 6f) && func_398(&Local_409, 7) >= (fLocal_964[iLocal_1014] - 6f))
				{
					if (func_141(Local_409.f_17, 0) <= fLocal_987[iLocal_1014] && iLocal_1015 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1015++;
							func_189(&Local_409, iParam0, 1, 0, 0);
							func_104(&iLocal_855);
							iLocal_1017 = 1;
						}
						if (func_106(&iLocal_855))
						{
							if (func_100(&iLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1015++;
								func_189(&Local_409, iParam0, 1, 0, 0);
								func_99(&iLocal_855);
								func_104(&iLocal_855);
							}
						}
						return 1;
					}
					else if (func_141(Local_409.f_17, 0) > fLocal_987[iLocal_1014] && iLocal_1016 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1016++;
							func_189(&Local_409, iParam1, 1, 0, 0);
							func_104(&iLocal_855);
							iLocal_1017 = 1;
						}
						if (func_106(&iLocal_855))
						{
							if (func_100(&iLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1016++;
								func_189(&Local_409, iParam1, 1, 0, 0);
								func_99(&iLocal_855);
								func_104(&iLocal_855);
							}
						}
						return 1;
					}
				}
				else if (func_398(&Local_409, 7) > (fLocal_964[iLocal_1014] + 6f))
				{
					iLocal_1014++;
					return 1;
				}
			}
		}
		else if (func_398(&Local_409, 7) >= fParam2 && func_141(Local_409.f_17, 0) > 50f)
		{
			if (!func_179())
			{
				if (!func_106(&iLocal_858))
				{
					func_104(&iLocal_858);
				}
				else if (func_100(&iLocal_858) > 4f)
				{
					func_189(&Local_409, iParam1, 1, 0, 0);
				}
			}
			else if (func_106(&iLocal_858))
			{
				func_99(&iLocal_858);
			}
			return 1;
		}
	}
	return 0;
}

void func_373()
{
	if (iLocal_955 == 2)
	{
		iLocal_953 = 3;
		iLocal_954 = 4;
		fLocal_956[0] = 210f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 3150f;
		fLocal_956[3] = 105f;
		fLocal_956[4] = 1800f;
		fLocal_956[5] = 150f;
		fLocal_956[6] = 200f;
	}
	else
	{
		iLocal_953 = 9;
		iLocal_954 = 10;
		fLocal_956[0] = 140f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 1780f;
		fLocal_956[3] = 90f;
		fLocal_956[4] = 900f;
		fLocal_956[5] = 120f;
		fLocal_956[6] = 228f;
	}
	fLocal_964[0] = 70,05005f;
	fLocal_987[0] = 3090,417f;
	fLocal_964[1] = 76,25293f;
	fLocal_987[1] = 2929,083f;
	fLocal_964[2] = 82,69312f;
	fLocal_987[2] = 2759,83f;
	fLocal_964[3] = 88,34399f;
	fLocal_987[3] = 2576,061f;
	fLocal_964[4] = 94,97803f;
	fLocal_987[4] = 2350,886f;
	fLocal_964[5] = 100,7981f;
	fLocal_987[5] = 2177,442f;
	fLocal_964[6] = 106,467f;
	fLocal_987[6] = 2016,681f;
	fLocal_964[7] = 112,929f;
	fLocal_987[7] = 1839,417f;
	fLocal_964[8] = 118,4209f;
	fLocal_987[8] = 1689,62f;
	fLocal_964[9] = 124,4241f;
	fLocal_987[9] = 1526,638f;
	fLocal_964[10] = 130,76f;
	fLocal_987[10] = 1356,039f;
	fLocal_964[11] = 136,7f;
	fLocal_987[11] = 1184,013f;
	fLocal_964[12] = 142,573f;
	fLocal_987[12] = 1034,024f;
	fLocal_964[13] = 148,2161f;
	fLocal_987[13] = 894,6225f;
	fLocal_964[14] = 154,4321f;
	fLocal_987[14] = 756,5219f;
	fLocal_964[15] = 160,2749f;
	fLocal_987[15] = 669,364f;
	fLocal_964[16] = 166,25f;
	fLocal_987[16] = 570,2953f;
	fLocal_964[17] = 172,251f;
	fLocal_987[17] = 521,977f;
	fLocal_964[18] = 178,606f;
	fLocal_987[18] = 340,7466f;
	fLocal_964[19] = 184,6809f;
	fLocal_987[19] = 224,3091f;
	fLocal_964[20] = 190,708f;
	fLocal_987[20] = 126,9535f;
	fLocal_964[21] = 193,062f;
	fLocal_987[21] = 81,80421f;
	Local_409.f_23 = { func_281(iLocal_953) };
	Local_409.f_33 = func_374(iLocal_953);
	Local_409.f_26 = { func_281(1) };
	Local_409.f_34 = func_374(1);
	Local_409.f_29 = { 328,6758f, 443,9846f, 144,2298f };
}

float func_374(int iParam0)
{
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 328,48f;
			break;
		
		case 1:
			fVar0 = 328,48f;
			break;
		
		case 2:
			fVar0 = 239,143f;
			break;
		
		case 3:
			fVar0 = 121,2021f;
			break;
		
		case 5:
			fVar0 = 268,6f;
			break;
		
		case 6:
			fVar0 = 218,5f;
			break;
		
		case 8:
			fVar0 = 268,6f;
			break;
		
		case 9:
			fVar0 = 301,6025f;
			break;
	}
	return fVar0;
}

int func_375(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_146(uParam0, 7))
		{
			func_145(uParam0, 23);
			if (func_398(uParam0, 7) > fParam2 && func_398(uParam0, 23) > 35f)
			{
				func_282(uParam0, 23, 0, 0);
				func_189(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_376(var uParam0, var uParam1)
{
	if (!func_146(uParam0, 27))
	{
		func_145(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_398(uParam0, 27) > 5f)
	{
		if (func_390(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_282(uParam0, 27, 0, 0);
			func_282(uParam0, 10, 0, 0);
			func_388(uParam0, &uVar0, uParam1);
		}
		func_385(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_377(uParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*uParam0) && !unk_0xFBB4F23D534EB790(*uParam0))) && (unk_0x9F4FE516EAACCFC5(uParam0->f_1) && !unk_0xFBB4F23D534EB790(uParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_179())
	{
		if (func_398(uParam0, 26) > 10f)
		{
			func_144(uParam0, 26, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
	else if (func_146(uParam0, 26))
	{
		func_144(uParam0, 26, 0);
	}
	return 0;
}

void func_377(var uParam0)
{
	if (!func_384(uParam0->f_429))
	{
		uParam0->f_429 = func_204();
		func_382(&(uParam0->f_429), 0, 0, unk_0x09AC81E49EA267F7(4, 7), 0, 0, 0);
	}
	else if (func_378(uParam0->f_429))
	{
		func_286(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_378(int iParam0)
{
	return func_379(func_204(), iParam0);
}

int func_379(int iParam0, int iParam1)
{
	if (!func_384(iParam1) || !func_384(iParam0))
	{
		return 1;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_381(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

void func_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_209(*uParam0);
	iVar1 = func_211(*uParam0);
	iVar2 = func_381(*uParam0);
	iVar3 = func_198(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_380(*uParam0);
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
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_383(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(uParam0, iParam1);
	func_201(uParam0, iParam2);
	func_203(uParam0, iParam3);
	func_206(uParam0, iParam5);
	func_207(uParam0, iParam4);
	func_205(uParam0, iParam6);
}

int func_384(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_198(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_209(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_381(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_385(var uParam0)
{
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_387()) && !func_147(uParam0)) || ((uParam0->f_411 != 9 && func_247(uParam0, 1)) && !func_147(uParam0)))
		{
			uVar0 = func_386(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			unk_0x73270B3C9CC833FD(uParam0->f_4, true, 0);
			func_173(uParam0);
			func_162(uParam0, 0);
		}
	}
}

var func_386(var uParam0)
{
	return uParam0;
}

int func_387()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
				{
					if (unk_0x4906F8A34E9F4814(iVar0, func_16()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_389(uParam0, 0, 1))
			{
				func_286(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_389(uParam0, 0, 4))
			{
				func_286(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_389(uParam0, 0, 8))
			{
				func_286(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_389(uParam0, 1, 1))
			{
				func_286(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_389(uParam0, 0, 1))
			{
				func_286(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_19(*uParam2, 2) && func_126(uParam0))
			{
				func_286(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_389(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_189(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_189(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_19(*uParam2, 1))
		{
			if (func_396(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_19(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_19(*uParam2, 4))
		{
			if (func_394(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_19(*uParam2, 8))
		{
			if (func_393(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_19(*uParam2, 128);
		if (bParam4)
		{
			if (func_391(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_19(*uParam2, 16))
		{
			if (func_391(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_392(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_160(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == 883325847)
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2,5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 4))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar3 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_395(iVar3))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, -1, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == 741814745)
					{
						if (func_161(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, -1, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_396(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_160(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

void func_397(var uParam0)
{
	if (!func_19(uParam0->f_98, 2))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (func_142(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_58(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_398(var uParam0, int iParam1)
{
	if (!func_106(&(uParam0->f_146[iParam1])))
	{
		func_193(&(uParam0->f_146[iParam1]));
	}
	return func_100(&(uParam0->f_146[iParam1]));
}

void func_399()
{
	func_400(&Local_409);
	func_417();
}

void func_400(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_419(2);
	}
}

int func_401(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_179() && func_398(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_57(uParam0) == 0 || func_258(uParam0->f_85, 32))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_302(uParam0, 4160, 0);
						}
						else
						{
							func_302(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_302(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_302(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_302(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
	{
	}
	return 0;
}

void func_402(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_9));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_10));
	}
}

int func_403(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_404()
{
	func_406(&Local_409, 2);
	Local_409.f_410 = 0;
	func_405(&Local_409, 3, 6);
	Local_409.f_6 = 2f;
}

void func_405(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_406(var uParam0, int iParam1)
{
	func_416(1);
	func_175();
	func_7(&(uParam0->f_244));
	func_415(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_19(Global_111638.f_19092, 4))
	{
		func_58(&(Global_111638.f_19092), 4);
	}
	func_410(uParam0);
	func_408(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	uParam0->f_102 = (func_407(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 2);
}

int func_407(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_408(var uParam0)
{
	switch (func_57(uParam0))
	{
		case 0:
			func_409(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_409(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_409(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_409(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_409(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_409(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_409(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_409(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_409(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_409(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_409(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_410(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			func_414(uParam0, 3);
			func_413(uParam0, 14);
			break;
		
		case 1:
			func_414(uParam0, 14);
			func_413(uParam0, 8);
			break;
		
		case 2:
			func_414(uParam0, 8);
			func_413(uParam0, 7);
			break;
		
		case 3:
			func_414(uParam0, 15);
			func_413(uParam0, 6);
			break;
		
		case 4:
			func_414(uParam0, 0);
			func_413(uParam0, 3);
			break;
		
		case 5:
			func_414(uParam0, 6);
			func_413(uParam0, 7);
			break;
		
		case 6:
			func_414(uParam0, 8);
			func_413(uParam0, 15);
			break;
		
		case 7:
			func_414(uParam0, 8);
			func_413(uParam0, 14);
			break;
		
		case 8:
			func_414(uParam0, 7);
			func_413(uParam0, 15);
			break;
		
		case 9:
			func_414(uParam0, unk_0x09AC81E49EA267F7(0, 17));
			iVar0 = func_412((uParam0->f_418.f_2 + unk_0x09AC81E49EA267F7(1, 17)), 0, 16);
			func_413(uParam0, iVar0);
			func_411(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_411(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_412(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_413(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_414(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_415(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_113() };
	uParam0->f_17 = { func_113() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_144(uParam0, 32, 0);
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, unk_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_417()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 26, false);
	}
	func_418();
	func_115();
	unk_0x10FAF14A60A0DBE1();
}

void func_418()
{
	unk_0x71199B01895C6202(iLocal_839);
}

void func_419(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

