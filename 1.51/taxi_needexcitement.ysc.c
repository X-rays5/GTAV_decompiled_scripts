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
	iLocal_851 = -1342520604;
	vLocal_852 = { -496,0739f, -336,6628f, 33,5017f };
	vLocal_855 = { -484,6879f, -330,1646f, 33,3534f };
	vLocal_858 = { 725,3476f, 1204,526f, 324,9057f };
	iLocal_861 = 1;
	if (unk_0x2EBF608FFE6CA406(67))
	{
		func_428(2);
		func_427();
	}
	unk_0x7798376279BB5369(1);
	func_414(0);
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
	if (func_413(&Local_409))
	{
		func_412(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_411(&Local_409, 0))
			{
				func_409();
			}
		}
		else if (func_408(&Local_409, 31) > 5f)
		{
			func_428(2);
			func_427();
		}
	}
	else
	{
		func_407(&Local_409);
		if (Local_409.f_410 <= 9)
		{
			func_373(&Local_409, &uLocal_937);
			func_372(&Local_409);
		}
		func_371(&Local_409, &uLocal_862, 0);
		if (Local_409.f_410 > 2)
		{
			if (!func_370(&Local_409))
			{
				func_339();
			}
			else
			{
				func_333(&Local_409, "Taxi Not Driveable", func_338(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			if (Local_409.f_139)
			{
				if (!unk_0x437347B10A200C4B(Local_409.f_4, 0) && func_332(Local_409.f_4, Local_409.f_17, 1) > 450f)
				{
					func_308(&Local_409, 0, 0);
				}
				else
				{
					func_308(&Local_409, 0, 1);
				}
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_307(&(vLocal_847[0]), "TAXI_SC_BN_02", 200);
				func_306(&Local_409, &vLocal_847);
				func_303();
				func_302(&Local_409, 16, 4f, 0);
				func_300(&Local_409, vLocal_852, vLocal_855, "TaxiFelipe", iLocal_851, 256f, 30f);
				func_298(&Local_409);
				func_297(&Local_409, 1);
				break;
			
			case 1:
				if (func_295())
				{
					func_294();
					func_274();
					func_273(&Local_409);
					Local_409.f_14 = { vLocal_852 };
					func_297(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_268(&Local_409, 1))
				{
					if (!unk_0x437347B10A200C4B(Local_409.f_3, 0))
					{
						unk_0x4E885A246A9D983A(Local_409.f_3, 29, false);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 3, 1, 1, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 4, 1, 2, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 0, 0, 1, 0);
						unk_0x64F9F278AB9DCA2C(Local_409.f_3, 11, 1, 0, 0);
					}
					func_267(&Local_409, 1, 0);
					func_297(&Local_409, 5);
				}
				break;
			
			case 5:
				if (!unk_0x3D1053F9EB43B7AD(Local_409.f_4, -484,9218f, -370,1231f, 33,40805f, -517,9089f, -362,7899f, 37,31326f, 28,75f, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(Local_409.f_4, -472,0588f, -321,036f, 33,35326f, -485,479f, -285,4217f, 37,49232f, 28,75f, 0, true, 0))
				{
					if (func_239(&Local_409, 0, 30f))
					{
						func_297(&Local_409, 15);
					}
				}
				break;
			
			case 15:
				if (func_238(&Local_409))
				{
					Local_409.f_17 = { vLocal_858 };
					bLocal_863 = true;
					func_234(&Local_409, 9, 1, 0, 0);
					func_233(&Local_409);
					Local_409.f_46 = unk_0x7F6DC62EA9922664(Local_409.f_4);
					func_297(&Local_409, 7);
				}
				if (unk_0xDF1306B443CD3D15(Local_409.f_4, 0))
				{
					if (!unk_0xC42A92762C58E1B9(Local_409.f_2, Local_409.f_4, 0))
					{
						func_231(&Local_409);
						func_297(&Local_409, 5);
					}
				}
				break;
			
			case 7:
				if (bLocal_863)
				{
					func_230();
					func_297(&Local_409, 9);
				}
				break;
			
			case 9:
				if (((func_332(Local_409.f_4, Local_409.f_17, 1) < 875f && func_229(&Local_409) != 68) && !func_228()) && !iLocal_864)
				{
					func_226(&(Local_409.f_100), 16384);
					func_234(&Local_409, 68, 1, 0, 1);
					settimera(0);
					iLocal_864 = 1;
				}
				if (func_225(Local_409.f_81, 67108864))
				{
					if (!func_224(&Local_409))
					{
					}
				}
				if (func_187(&Local_409, 9f, 7,5f))
				{
					unk_0x142CC44DB769B57E(&(Local_409.f_9));
					func_186();
					func_185(&Local_866, -1, 1);
					if (Local_409.f_76 >= 95)
					{
						func_184(&Local_409, 0);
					}
					func_182(&Local_409);
					func_178(&Local_409);
					if (Local_409.f_56 < Local_409.f_58)
					{
						func_297(&Local_409, 28);
					}
					else
					{
						unk_0x0C8C0C840C2D1AD2(Local_409.f_3, unk_0x16F2683693E537C9(), -1, 2049, 3);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), Local_409.f_3, -1, 2049, 3);
						func_297(&Local_409, 27);
					}
					func_177(&Local_409);
				}
				break;
			
			case 27:
				if (func_167(&Local_409, 1))
				{
					unk_0xBC43ED9FE28DB191(Local_409.f_3);
					unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
					func_166(&Local_409);
					func_297(&Local_409, 29);
				}
				break;
			
			case 28:
				if (iLocal_839 == 2 && !func_165(Local_409.f_2, Local_409.f_3))
				{
					if (!func_164(&iLocal_944))
					{
						func_162(&iLocal_944);
					}
					else if (func_161(&iLocal_944) > 5f)
					{
						func_234(&Local_409, 106, 1, 0, 1);
						func_162(&iLocal_944);
					}
				}
				if (func_123(&iLocal_839, &Local_409, &(Local_409.f_3), &uLocal_840, 1))
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_409.f_3))
					{
						func_108(&(Local_409.f_244), Local_409.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					func_297(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_76(&Local_409, &iLocal_947))
				{
					if (!func_228())
					{
						func_10(1, &Local_409, 1);
						func_297(&Local_409, 30);
					}
				}
				break;
			
			case 30:
				func_427();
				break;
			}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_52(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_50(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_412(uParam0);
	if (func_228())
	{
		func_48();
	}
	func_46();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(1);
	func_41(0);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, false);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_38(uParam0->f_14, 1);
	func_36(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
	if (func_32())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_22(0, 1, 1, 0, 0, 0);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xF3039DE1FDB4F6FD(true);
	}
	if (func_225(Global_111638.f_19092, 4))
	{
		func_20(&(Global_111638.f_19092), 4);
		unk_0xAB8E2DDC7AF955E0(func_19(), false);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x11E0F00830F70E15(round((func_12(&iLocal_90) * 1000f)), 12, 0);
}

float func_12(var uParam0)
{
	if (func_164(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
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

bool func_14(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_15(int iParam0)
{
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_16(int iParam0)
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

void func_17(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_51[0]);
}

void func_18(var uParam0)
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

int func_19()
{
	return -956048545;
}

void func_20(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_31(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_30())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_31(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_27(unk_0xD803B885F5E47A62())) && !func_24(unk_0xD803B885F5E47A62(), 0)) && !func_23()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_27(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_23()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312745;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
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

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_30()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
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

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0x8A22C4C08282BF26(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam3, float fParam4)
{
	vVar0 = { func_37(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_37(vParam0, 1f, fParam4, fParam4, fParam4) };
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

Vector3 func_37(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_38(vector3 vParam0, bool bParam3)
{
	if (!func_39(vParam0, func_40(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar3, bParam3, 1);
	}
}

bool func_39(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_40()
{
	return vVar0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_30())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_46()
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
					func_47(Global_95677[iVar0].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
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

void func_48()
{
	Global_19671 = 0;
	func_49();
}

void func_49()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_51("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_51("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_51("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_51("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_51("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_51("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_51("This distance ", iParam1);
					func_51(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_51("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_51("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
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
			func_51("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
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
			func_51("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_51("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_51("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_51("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_51("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_51("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_51("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_51(char* sParam0, int iParam1)
{
}

void func_52(var uParam0)
{
	func_50(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_428(1);
		func_62(15, 1);
	}
	func_226(&(Global_111638.f_19092), 1024);
	if (!func_225(Global_111638.f_19092, 64))
	{
		func_53(func_60(func_61(uParam0)), 0, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_59((891 + iParam0), 1, -1, 1);
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
		func_54();
	}
}

void func_54()
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
		func_58(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_57() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_55();
				}
			}
		}
	}
}

int func_55()
{
	if (func_56(0))
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

bool func_56(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_57()
{
	return Global_30768;
}

int func_58(int iParam0, int iParam1)
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

int func_59(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_26();
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

int func_60(int iParam0)
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

int func_61(var uParam0)
{
	return uParam0->f_411;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	if (func_75(14) && !func_74(iParam0))
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
	if (func_73(&Global_4270065))
	{
		if (func_71(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_4270065, iParam0))
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

int func_64(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_67(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
	func_69(uParam0, (Global_4270064 - 0,5f));
}

void func_68(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_69(var uParam0, float fParam1)
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

float func_70(var uParam0)
{
	return uParam0->f_80;
}

bool func_71(var uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)
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

bool func_73(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_74(int iParam0)
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

bool func_75(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_76(var uParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_228() && func_408(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				}
				func_107(uParam0);
				func_20(&(Global_111638.f_19092), 4096);
				func_104(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_106(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_103(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_100(iParam1, 0))
			{
				func_77(uParam0);
				func_302(uParam0, 0, 0, 0);
				func_103(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_77(var uParam0)
{
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_78(func_98(), 21, iVar0, 0, 0);
		func_50(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_97(iParam0) == 3)
	{
		return;
	}
	if (func_97(iParam0) == 4)
	{
		return;
	}
	func_79(func_97(iParam0), 1, iParam1, iParam2, 0);
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_96();
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
					func_95(99, 1);
					func_94(-656546900, iParam3);
					break;
				
				case 1:
					func_94(-2098183071, iParam3);
					break;
				
				case 2:
					func_94(1578119842, iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
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
							func_94(-1190521599, iParam3);
							break;
						
						case 1:
							func_94(490143716, iParam3);
							break;
						
						case 2:
							func_94(121069433, iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_94(219506691, iParam3);
							break;
						
						case 1:
							func_94(1871505786, iParam3);
							break;
						
						case 2:
							func_94(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_94(27639974, iParam3);
							break;
						
						case 1:
							func_94(422258364, iParam3);
							break;
						
						case 2:
							func_94(316202960, iParam3);
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
							func_94(1806738963, iParam3);
							break;
						
						case 1:
							func_94(1576781520, iParam3);
							break;
						
						case 2:
							func_94(671882196, iParam3);
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
									func_94(408653638, iParam3);
									break;
								
								case 1:
									func_94(-424799277, iParam3);
									break;
								
								case 2:
									func_94(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_94(2038531975, iParam3);
									break;
								
								case 1:
									func_94(-572903575, iParam3);
									break;
								
								case 2:
									func_94(-953947924, iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_94(-445823242, iParam3);
									break;
								
								case 1:
									func_94(-1386757215, iParam3);
									break;
								
								case 2:
									func_94(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_94(-1744069936, iParam3);
									break;
								
								case 1:
									func_94(799609312, iParam3);
									break;
								
								case 2:
									func_94(181688102, iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
				
				case 1:
					func_95(97, iParam3);
					break;
				
				case 2:
					func_95(96, iParam3);
					break;
			}
			func_95(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(iVar1);
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
					func_94(-330339780, iParam3);
					break;
				
				case 1:
					func_94(1697564429, iParam3);
					break;
				
				case 2:
					func_94(1674823841, iParam3);
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
	func_81(iParam0);
	if (Global_41431 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)
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

void func_81(int iParam0)
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

void func_82(int iParam0)
{
	if (iParam0 == 8)
	{
		func_59(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_59(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_59(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_59(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_85(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_85(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_85(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_85(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_85(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_85(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_84()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_84()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_83(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_83(int iParam0)
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

int func_84()
{
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_86(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

void func_87(int iParam0)
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
}

bool func_88(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_90(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_90(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_90(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_90(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_89(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_89(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_89(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_89(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_89(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_89(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_84()].f_6174.f_10, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_86(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)
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

int func_92(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_26();
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

int func_93(bool bParam0)
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
		func_58(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_62(27, 1);
	return 1;
}

void func_94(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_95(int iParam0, int iParam1)
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

void func_96()
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

int func_97(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_98()
{
	func_99();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_99()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_75(14) || Global_110589))
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

int func_100(var uParam0, int iParam1)
{
	if (!func_164(&(uParam0->f_2)))
	{
		func_162(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(2, 201) || uParam0->f_8)
		{
			if (!func_164(&(uParam0->f_5)))
			{
				func_162(&(uParam0->f_5));
				func_102(uParam0, 1051260355);
			}
		}
		if (func_164(&(uParam0->f_5)))
		{
			if (func_161(&(uParam0->f_5)) > 0,33f)
			{
				func_101(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_161(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_164(&(uParam0->f_5)))
		{
			func_162(&(uParam0->f_5));
			func_102(uParam0, 1051260355);
		}
		else if (func_161(&(uParam0->f_5)) > 0,33f)
		{
			func_101(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_101(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_102(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_103(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_104(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_105());
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
	func_162(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_105()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_106(var uParam0)
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

void func_107(var uParam0)
{
	Local_169.f_1 = to_float(uParam0->f_50);
	Local_169.f_2 = to_float(uParam0->f_56);
	func_50(11, uParam0->f_56);
	func_50(12, uParam0->f_56);
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

int func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_121();
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
		if (func_120(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_119();
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
				func_118();
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
				if (func_117())
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
			if (func_30())
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
			func_116();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_115();
		func_110();
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
		func_121();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
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

int func_111()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_114())
	{
		return 0;
	}
	if (func_112(unk_0xD803B885F5E47A62()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_114()
{
	return -1;
}

void func_115()
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

void func_116()
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

int func_117()
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

void func_118()
{
	if (func_75(14))
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
		Global_19486 = func_98();
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

void func_119()
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

bool func_120(int iParam0, int iParam1)
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

void func_121()
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

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_123(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	switch (*iParam0)
	{
		case 0:
			if (!unk_0x437347B10A200C4B(*iParam2, 0))
			{
				func_159(uParam1, 320, bParam4);
				unk_0x6D80F1AEBA734886(*iParam2, unk_0x09AC81E49EA267F7(100, 300));
				func_157(uParam1, iParam2, "TAXI_BLIP_PASS", 1);
				func_50(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x437347B10A200C4B(*iParam2, 0))
			{
				if (!unk_0x405E212DDE472467(*iParam2, 0))
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(*iParam2, 0))
			{
				func_129(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!func_165(uParam1->f_2, *iParam2))
				{
					if (unk_0xDF1306B443CD3D15(uParam1->f_4, 0))
					{
						if (unk_0xB87D13D0C064E9D1(*iParam2, uParam1->f_4, 1))
						{
							*iParam0 = 3;
						}
					}
					if (unk_0xB87D13D0C064E9D1(*iParam2, uParam1->f_2, 1))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!unk_0x405E212DDE472467(uParam1->f_2, 0))
						{
							if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x168558745A6AC21E(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*iParam0 = 3;
									}
									if (unk_0x03A10A5707B2BB1F(uParam1->f_2, 6))
									{
										if (unk_0x5ED715849883FAFF())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x168558745A6AC21E(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x168558745A6AC21E(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_127(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				func_127(&uLocal_45, 0, 0);
				*iParam0 = 5;
			}
			break;
		
		case 3:
			func_127(&uLocal_45, 0, 0);
			if (!unk_0x437347B10A200C4B(*iParam2, 0))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_8));
				}
				unk_0x11AD11297DC58CC7(*iParam2, true);
				unk_0xDD353D0E9C789D0E(&iVar0);
				unk_0x8BE3D040D15AEA1D(0, 5000);
				unk_0xF3268524E9BE6D6E(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0xD93EE6549113F9E1(0, 0);
				unk_0x75ABDC5F81978924(iVar0);
				unk_0x78ADC381772E3D54(*iParam2, iVar0);
				unk_0xF82EA857DA10E0CD(&iVar0);
				unk_0xFADC0A217229F6B5(*iParam2, true);
				func_234(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				unk_0x790015DC92C918E2();
			}
			else
			{
				*iParam0 = 4;
				unk_0x790015DC92C918E2();
			}
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_8));
			}
			func_124(*iParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0xEB751B41BC4080D4(uParam3->f_6))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam3->f_5))
				{
					unk_0x142CC44DB769B57E(&(uParam3->f_5));
				}
				func_182(uParam1);
				func_50(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x437347B10A200C4B(*iParam2, 0))
			{
				unk_0x6DAD7906B73F064D(iParam2);
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xCB9603FE12CFDEF4(unk_0xA30EC016B12C03E4(), 2, 0);
				unk_0x56EA5D248F36A081(unk_0xA30EC016B12C03E4(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_124(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	uParam1->f_1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		uParam1->f_2 = { unk_0x68F4C0EC296D3901(iParam0, true) };
		unk_0x6D80F1AEBA734886(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x09AC81E49EA267F7(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0xC6151A4F2BB0AC79(iParam0, 1067030938, 1069547520) };
	}
	unk_0x5D96D8530B3D0904(&(uParam1->f_1), 3);
	unk_0x5D96D8530B3D0904(&(uParam1->f_1), 4);
	vVar0 = { unk_0x550B1459B4642A86(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0xA6FF0828D17CF374(-31919185, vVar0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam1->f_5))
		{
			uParam1->f_5 = func_125(uParam1->f_6);
			unk_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_125(int iParam0)
{
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_126(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	return iVar0;
}

float func_126(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_127(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_128(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_128(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

bool func_128(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_129(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_130(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_131(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_131(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_127(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_132(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_132(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_128(iVar0))
	{
		func_156();
	}
	if (func_155(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 1);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_150(uParam0, bParam7, bParam9, 0))
			{
				func_147(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_137(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
						{
							if (!func_128(iVar0))
							{
								func_136(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_135(1);
								}
							}
						}
					}
				}
			}
			else if (func_137(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
					{
						if (!func_128(iVar0))
						{
							func_136(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_135(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam5))
			{
				if (func_128(sParam5))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_127(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_127(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_127(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_127(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_127(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_127(uParam0, iVar0, 1);
				}
			}
			if (!func_150(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_134(uParam0))
				{
					func_133(uParam0);
				}
			}
		}
	}
	else
	{
		func_127(uParam0, iVar0, 0);
	}
}

void func_133(var uParam0)
{
	if (func_155(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(true);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_134(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	return 0;
}

int func_135(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_136(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_137(char* sParam0)
{
	if (!func_138(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_128(sParam0)) || func_128("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_135(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_135(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_135(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				return 0;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0;
			}
		}
	}
	if ((func_145() || func_144(Global_4456448.f_232883)) || func_143())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_142(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_141(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_139(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0)
{
	if (iParam0 != func_114())
	{
		if (func_140(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_140(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_140(int iParam0, bool bParam1, bool bParam2)
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

int func_141(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_142(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
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

var func_143()
{
	return Global_2450632.f_17;
}

bool func_144(int iParam0)
{
	return iParam0 == 51;
}

var func_145()
{
	return Global_2450632.f_16;
}

bool func_146()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_147(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_127(uParam0, 0, 0);
	}
	if (func_39(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_148())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, -1, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_148()
{
	return func_149(unk_0xD803B885F5E47A62());
}

int func_149(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (func_154(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_153(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_153(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_154(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_134(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (!func_154(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_153(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_153(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_154(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (!func_154(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_153(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_153(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_154(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (func_152(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_134(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_138(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_156();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_138(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_156()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_157(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_412(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		uParam0->f_8 = func_158(*uParam1, 0, 0);
	}
	if (!unk_0x2EBF5002C6B6A06C(sParam2))
	{
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, sParam2);
	}
}

int func_158(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_126(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_126(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_126(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, false);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 3, false);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 17, true);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_332(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_160(uParam0->f_29)) && !bParam2)
		{
			func_166(uParam0);
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

int func_160(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_161(int iParam0)
{
	if (func_164(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_162(int iParam0)
{
	func_163(iParam0, 0f);
}

void func_163(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_164(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_165(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (!unk_0x12DE711B1C681E9E(iParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_166(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
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

int func_167(var uParam0, bool bParam1)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_176(uParam0) && func_172(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_171(uParam0, 2097152))
				{
					func_168(uParam0);
				}
			}
			else
			{
				func_168(uParam0);
			}
		}
		else if (!func_176(uParam0))
		{
			if (bParam1)
			{
				if (func_171(uParam0, 2097152))
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

void func_168(var uParam0)
{
	if (func_160(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_169(uParam0, vVar0);
}

void func_169(var uParam0, vector3 vParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && unk_0x82CCEAB29E9451DD(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			vVar3 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (func_170(uParam0->f_3, uParam0->f_4) == 0)
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

int func_170(int iParam0, int iParam1)
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

bool func_171(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_225(uParam0->f_81, iParam1) && !func_228());
	}
	return func_228();
}

int func_172(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_32())
			{
				func_175();
				return 1;
			}
			else if (func_173(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_173(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_174(iParam0);
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

void func_174(int iParam0)
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

void func_175()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	}
}

int func_176(var uParam0)
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

void func_177(var uParam0)
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
	if (!func_225(uParam0->f_55, 1))
	{
		func_226(&(uParam0->f_55), 1);
	}
}

void func_178(var uParam0)
{
	func_180();
	unk_0x790015DC92C918E2();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_234(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_234(uParam0, 103, 1, 0, 0);
		}
		func_179(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_234(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_234(uParam0, 102, 1, 0, 0);
	}
	func_302(uParam0, 16, 4f, 0);
}

void func_179(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_180()
{
	Global_19671 = 0;
	func_181();
}

void func_181()
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

void func_182(var uParam0)
{
	fVar0 = uParam0->f_41;
	fVar0 = func_183(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_50(4, ceil(fVar0));
	func_50(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_183(float fParam0)
{
	return (fParam0 * 0,0006213712f);
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_60[iParam1]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1].f_1);
	}
}

void func_185(var uParam0, int iParam1, bool bParam2)
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

void func_186()
{
	Global_19671 = 0;
	func_121();
}

int func_187(var uParam0, float fParam1, float fParam2)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !uParam0->f_142)
	{
		if (func_208(uParam0))
		{
			func_207(uParam0, &(uParam0->f_43));
			func_205(uParam0);
			func_200(uParam0);
			func_194(uParam0, fParam2, 1117782016);
			func_193(uParam0);
			func_191(uParam0);
			if ((round(func_408(uParam0, 7)) % 5) == 0 && !iLocal_93)
			{
				iLocal_93 = 1;
			}
			if ((round(func_408(uParam0, 7)) % 5) == 2 && iLocal_93)
			{
				iLocal_93 = 0;
			}
			return func_188(uParam0, fParam1);
		}
	}
	return 0;
}

int func_188(var uParam0, float fParam1)
{
	if (func_61(uParam0) == 2)
	{
		if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_190(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_189(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			return func_172(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_189(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
	{
		return func_172(uParam0, 1, fParam1);
	}
	return 0;
}

int func_189(bool bParam0, bool bParam1, bool bParam2)
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

float func_190(int iParam0, vector3 vParam1, bool bParam4)
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

void func_191(var uParam0)
{
	if ((func_176(uParam0) && func_225(uParam0->f_81, 67108864)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_97) >= 10000)
		{
			fVar0 = func_192(uParam0->f_17, 1);
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
		if (iLocal_96 >= 2 && !func_228())
		{
			func_234(uParam0, 136, 1, 0, 1);
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
			if (!func_176(uParam0))
			{
			}
			if (!func_225(uParam0->f_81, 67108864))
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

float func_192(vector3 vParam0, bool bParam3)
{
	return func_332(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam3);
}

void func_193(var uParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_225(uParam0->f_44, 2))
	{
		func_226(&(uParam0->f_44), 2);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_225(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_50(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_234(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + ceil(5f));
	}
}

void func_194(var uParam0, float fParam1, float fParam2)
{
	if (func_176(uParam0) && func_225(uParam0->f_44, 4))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(uParam0->f_4) || unk_0x9C66D99E63E8E24C(uParam0->f_4) < 3f) && func_199(uParam0))
		{
			if (!func_198(uParam0, 2))
			{
				func_196(uParam0, 2);
			}
			else if (func_176(uParam0))
			{
				if (func_408(uParam0, 2) > fParam1 && !func_198(uParam0, 14))
				{
					if (func_34())
					{
						func_234(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_234(uParam0, 48, 1, 0, 0);
					}
					func_302(uParam0, 2, 0, 0);
					if (func_198(uParam0, 10))
					{
						func_302(uParam0, 10, 0, 0);
					}
				}
				if (!func_198(uParam0, 3))
				{
					func_302(uParam0, 3, 0, 0);
				}
				else if (func_408(uParam0, 3) >= fParam2)
				{
					func_195(uParam0, 3, 0);
					func_333(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_198(uParam0, 2))
			{
				func_195(uParam0, 2, 0);
			}
			if (func_198(uParam0, 3))
			{
				func_195(uParam0, 3, 0);
			}
		}
	}
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_101(&(uParam0->f_146[iVar0]));
			iVar0++;
		}
	}
	else
	{
		func_101(&(uParam0->f_146[iParam1]));
	}
	if (bParam2)
	{
	}
}

void func_196(var uParam0, int iParam1)
{
	func_197(&(uParam0->f_146[iParam1]));
}

void func_197(int iParam0)
{
	if (!func_164(iParam0))
	{
		func_162(iParam0);
	}
}

bool func_198(var uParam0, int iParam1)
{
	return func_164(&(uParam0->f_146[iParam1]));
}

int func_199(var uParam0)
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

void func_200(var uParam0)
{
	if (!func_225(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					if (func_408(uParam0, 9) > 1f)
					{
						func_204(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (uParam0->f_410 != 22)
						{
							func_234(uParam0, 50, 1, 1, 0);
						}
						func_302(uParam0, 9, 0, 0);
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
				if (!func_228() && func_408(uParam0, 9) > 4f)
				{
					func_234(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_203("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_234(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_202(uParam0)))
				{
					func_204(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_50(6, 0);
				}
				if (!func_201(uParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_408(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_234(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					if (func_203("TAXI_OBJ_POL", 0, 0))
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
				if (!func_228())
				{
					if (uParam0->f_410 != 22)
					{
						func_234(uParam0, 53, 1, 0, 1);
					}
					func_50(7, func_202(uParam0));
					func_204(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_228())
				{
					func_195(uParam0, 9, 0);
					func_302(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_201(var uParam0)
{
	return uParam0->f_110;
}

int func_202(var uParam0)
{
	return uParam0->f_106;
}

bool func_203(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_204(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_205(var uParam0)
{
	if (func_224(uParam0))
	{
		func_206(uParam0);
	}
}

void func_206(var uParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFC21F7E0F4D92523();
			func_195(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_408(uParam0, 20) > 3f)
				{
					func_234(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_225(uParam0->f_81, 262144) || !func_225(uParam0->f_81, 1048576))
				{
					if (func_408(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_234(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_225(uParam0->f_82, 67108864))
				{
					if (func_408(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_234(uParam0, 85, 1, 0, 0);
						func_195(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_408(uParam0, 20) > 8f)
				{
					func_234(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_225(uParam0->f_81, 262144) || func_225(uParam0->f_82, 67108864))
			{
				if (!func_198(uParam0, 22))
				{
					func_196(uParam0, 22);
				}
			}
			if (func_198(uParam0, 22) && func_408(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_225(uParam0->f_81, 1048576))
					{
						func_234(uParam0, 84, 1, 0, 0);
						func_195(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_225(uParam0->f_82, 134217728))
					{
						func_234(uParam0, 85, 1, 0, 0);
						func_195(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_207(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_208(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_333(uParam0, "Passenger left car.", 9);
			}
			else if (func_220(uParam0))
			{
				if (func_203("TAXI_OBJ_PICKUP", 0, 0))
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
				func_209(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_209(var uParam0, bool bParam1)
{
	func_219(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_198(uParam0, 14))
			{
				if (func_228())
				{
					func_218(1);
				}
				func_217(uParam0, 11, 1);
				func_212(uParam0, 1);
				func_302(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_176(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0))
					{
						if (func_408(uParam0, 15) > 5f)
						{
							func_302(uParam0, 15, 0f, 1);
						}
					}
					if (func_408(uParam0, 14) > 20f)
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_408(uParam0, 14) > 20f)
				{
					if (func_210(uParam0->f_4, 1) > 40f)
					{
						func_333(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_210(int iParam0, bool bParam1)
{
	return func_211(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_211(int iParam0, int iParam1, bool bParam2)
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

void func_212(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
				unk_0x661342B9651D16E2(uParam0->f_8, false);
				func_216(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
				unk_0x661342B9651D16E2(uParam0->f_9, false);
				unk_0x790015DC92C918E2();
				if (func_176(uParam0))
				{
					func_234(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_216(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_213(uParam0, 0, 0);
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

void func_213(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_412(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_10))
	{
		uParam0->f_10 = func_158(uParam0->f_4, 1, 0);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_10, true);
		func_214(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_234(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_214(var uParam0)
{
	func_302(uParam0, 14, 0, 0);
	func_215();
}

void func_215()
{
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_216(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_225(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_234(uParam0, iParam3, 1, 0, 0);
		func_226(uParam1, iParam2);
	}
}

void func_217(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_218(int iParam0)
{
	Global_21816 = iParam0;
}

void func_219(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, 911657153, 0) || unk_0x0361981EE62202D8(iParam1, 0, 2)) || unk_0x0361981EE62202D8(iParam1, 0, 1))
				{
					func_333(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

int func_220(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_198(uParam0, 14))
			{
				func_221(uParam0);
			}
			func_212(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_221(var uParam0)
{
	func_195(uParam0, 14, 0);
	func_195(uParam0, 15, 0);
	func_223();
	if (func_222())
	{
		func_218(0);
	}
}

int func_222()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_223()
{
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

bool func_224(var uParam0)
{
	return uParam0->f_120;
}

bool func_225(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_226(var uParam0, int iParam1)
{
	func_227(uParam0, iParam1);
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_228()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0)
{
	return uParam0->f_416;
}

void func_230()
{
	func_226(&(Local_409.f_55), 2);
	func_226(&(Local_409.f_55), 8);
	func_226(&(Local_409.f_55), 32);
	func_226(&(Local_409.f_55), 128);
	func_226(&(Local_409.f_55), 256);
	func_226(&(Local_409.f_55), 512);
	func_226(&(Local_409.f_55), 1024);
	func_226(&(Local_409.f_55), 2048);
	func_226(&(Local_409.f_55), 1073741824);
	func_226(&(Local_409.f_55), 8192);
	func_226(&(Local_409.f_55), 16384);
	func_226(&(Local_409.f_55), 32768);
	func_226(&(Local_409.f_55), 131072);
	func_226(&(Local_409.f_55), 262144);
	func_226(&(Local_409.f_55), 524288);
	func_226(&(Local_409.f_55), 1048576);
	func_226(&(Local_409.f_55), 4194304);
	func_226(&(Local_409.f_100), 64);
	func_226(&(Local_409.f_100), 2048);
	func_226(&(Local_409.f_100), 128);
	func_226(&(Local_409.f_100), 32);
	func_226(&(Local_409.f_100), 256);
	func_226(&(Local_409.f_100), 8);
	func_226(&(Local_409.f_100), 1);
	func_226(&(Local_409.f_100), 8192);
	func_226(&(Local_409.f_100), 2);
	func_226(&(Local_409.f_100), 32768);
	func_226(&uLocal_937, 2);
	func_196(&Local_409, 7);
}

void func_231(var uParam0)
{
	func_232(uParam0, 1000);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
	}
	func_186();
	func_221(uParam0);
}

void func_232(var uParam0, int iParam1)
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

void func_233(var uParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	func_232(uParam0, 1000);
}

void func_234(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_302(uParam0, 16, 4f, 0);
		if (func_235(uParam0))
		{
			func_48();
		}
	}
	func_267(uParam0, iParam2, bParam3);
}

int func_235(var uParam0)
{
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_228())
	{
		Var6 = { func_237() };
		if (!unk_0xEA6BC48857E0AC4C(&Var6))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var6, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_236(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var6, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_236(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_237()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_238(var uParam0)
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

int func_239(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			func_209(uParam0, 1);
			if (func_32())
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
			func_265(uParam0);
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
			if (func_198(uParam0, 14))
			{
				func_221(uParam0);
				func_212(uParam0, 0);
			}
			if (func_198(uParam0, 9))
			{
				func_195(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_264(uParam0, uParam0->f_3) > 300f)
				{
					func_333(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 || ((func_211(unk_0x16F2683693E537C9(), uParam0->f_3, 1) < 20f && func_190(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_190(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_261(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_260(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_259(uParam0->f_4, uParam0->f_3);
								iVar0 = func_258(uParam0, &iVar1);
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
							if (!func_199(uParam0))
							{
								unk_0xA3BF0AA5A2608191(uParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 0) && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 7) && func_264(uParam0, uParam0->f_3) > 8f)
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
							if (func_211(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_257(uParam0, 1))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_256(uParam0->f_4))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_254(uParam0);
						if (func_264(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_241(uParam0))
								{
									func_240(uParam0);
									iLocal_89 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(uParam0->f_3, 26, true);
									func_195(uParam0, 5, 0);
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

void func_240(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x661342B9651D16E2(uParam0->f_8, false);
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
}

int func_241(var uParam0)
{
	func_253("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		func_252();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_250(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_172(uParam0, 0, 1084227584) && func_189(1, 1, 1))
			{
				if (func_257(uParam0, 1))
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
					settimera(0);
					iLocal_86 = 1;
				}
				else
				{
					func_333(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (timera() > 500)
			{
				uParam0->f_7 = func_259(uParam0->f_4, uParam0->f_3);
				iVar9 = func_258(uParam0, &iVar10);
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
			iVar12 = func_249(&(uParam0->f_409), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0), 1);
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
				func_248(0, 0, 1);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 3f, 0);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 25f, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_180();
				func_267(uParam0, 0, 0);
				vVar13 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar6) };
				unk_0xA47B46945FF6DE74(uParam0->f_3, vVar13, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, func_246(uParam0));
				func_245(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_253("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0x152BCACCF710B36E(uParam0->f_4, func_244(uParam0->f_7), 1);
				}
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
				unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x82E51BCA72537B6C(800);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_180();
				func_267(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_242(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
			unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			func_242(1, 1, 1);
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

void func_242(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_22(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_243(23, 0);
}

void func_243(int iParam0, bool bParam1)
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

int func_244(int iParam0)
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

void func_245(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0xAE06CCC36C49929C(26379945, vParam1, vParam4, fParam7, 0, 2);
	}
}

float func_246(var uParam0)
{
	fVar0 = 0f;
	vVar1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0,773f, -0,646f, -0,6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0,773f, -0,646f, -0,6422f) };
	}
	fVar0 = func_247(unk_0x68F4C0EC296D3901(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_247(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_41(0);
	func_22(1, 1, iParam2, 0, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_243(23, 1);
}

int func_249(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
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

int func_250(int iParam0)
{
	if (func_251() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(500);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		func_41(0);
		func_186();
		return 1;
	}
	return 0;
}

int func_251()
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

void func_252()
{
	if (func_34())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_33())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_253(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_254(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_210(uParam0->f_3, 1) > 30f || func_255(uParam0))
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
					func_333(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_255(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_408(uParam0, 5) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
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

int func_257(var uParam0, bool bParam1)
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

int func_258(var uParam0, var uParam1)
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

int func_259(int iParam0, int iParam1)
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

int func_260(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_210(uParam0->f_3, 1) < fParam2)
		{
			if (!func_198(uParam0, 5))
			{
				func_302(uParam0, 5, 0, 0);
			}
		}
		else if (func_198(uParam0, 5))
		{
			func_195(uParam0, 5, 0);
		}
		if (((func_408(uParam0, 5) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_210(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_261(var uParam0, float fParam1)
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
			if ((func_211(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x755FF954DAE327E1((vVar0.z - vVar3.z)) < 5f)
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
				if (!func_225(uParam0->f_44, 128))
				{
					func_234(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_262(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_262(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_263(iParam3), 0);
}

int func_263(int iParam0)
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

float func_264(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (func_199(uParam0))
		{
			return func_211(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_265(var uParam0)
{
	func_219(uParam0, uParam0->f_3);
	if (func_199(uParam0))
	{
		if (func_198(uParam0, 14))
		{
			func_221(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_10));
			}
		}
	}
	if (!func_198(uParam0, 9))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
			unk_0x661342B9651D16E2(uParam0->f_8, false);
		}
		func_302(uParam0, 9, 0, 0);
		func_266("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_266(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_302(uParam0, 16, 4f, 0);
		unk_0x790015DC92C918E2();
	}
}

int func_268(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		return 0;
	}
	func_272(12);
	if (func_225(uParam0->f_44, 8))
	{
		if (!func_225(uParam0->f_44, 128))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_225(uParam0->f_44, 256))
			{
				func_226(&(uParam0->f_44), 256);
			}
			if (func_225(uParam0->f_44, 256) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_234(uParam0, 135, 1, 0, 1);
				func_226(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_271(uParam0, iParam1))
	{
		if (func_210(uParam0->f_3, 1) < 35f)
		{
			if (!func_225(uParam0->f_44, 8))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
				func_234(uParam0, 133, 1, 0, 1);
				func_226(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_210(uParam0->f_3, 1) > 400f)
		{
			func_333(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, true);
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_269(uParam0);
			func_50(2, 0);
			bLocal_94 = true;
			func_197(&iLocal_90);
			return 1;
		}
		else
		{
			func_333(uParam0, "No Taxi", 21);
			func_136("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_269(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (func_270())
		{
		}
	}
}

int func_270()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_271(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				bVar2 = func_256(iVar0);
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
					if (!func_225(uParam0->f_44, 64))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_136("TX_VIP_DMGD", -1);
							if (func_128("TX_VIP_DMGD"))
							{
								func_226(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_225(uParam0->f_44, 32))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_136("TX_VIP_CAR", -1);
							if (func_128("TX_VIP_CAR"))
							{
								func_226(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_225(uParam0->f_44, 16))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_136("TX_VIP_SMALL", -1);
							if (func_128("TX_VIP_SMALL"))
							{
								func_226(&(uParam0->f_44), 16);
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
			func_20(&(uParam0->f_44), 16);
			func_20(&(uParam0->f_44), 64);
			func_20(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_272(int iParam0)
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

void func_273(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_274()
{
	Local_343 = 0;
	func_291(42708, 42683, 1);
	func_291(42444, 42421, 1);
	func_291(42359, 42334, 1);
	func_291(42262, 42238, 1);
	func_291(42128, 42107, 1);
	func_291(42054, 42029, 1);
	func_291(41887, 41864, 1);
}

int func_275(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_276(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_278(uParam0->f_4))
		{
			func_277(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_278(int iParam0)
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

int func_279(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_280(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		if (func_281(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_281(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_282(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_277(uParam0, 11);
	return 1;
}

int func_283(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(uParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_198(uParam0, 25))
			{
				func_302(uParam0, 25, 0, 0);
			}
			else if (func_408(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_198(uParam0, 25))
		{
			func_195(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_284(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_285(var uParam0)
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

int func_286(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_287(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_281(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_288(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_289(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_290(uParam0->f_4))
		{
			func_277(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
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

void func_291(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343] = 0;
	func_227(&(Local_343.f_1[Local_343]), 1);
	if (bParam2)
	{
		func_227(&(Local_343.f_1[Local_343]), 2);
	}
	Local_343.f_1[Local_343].f_2 = iParam0;
	Local_343.f_1[Local_343].f_3 = iParam1;
	Local_343++;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_293(var uParam0)
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

void func_294()
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

int func_295()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_851))
	{
		func_253("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
	{
		func_253("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0x83D8570832F172A7(iLocal_947))
	{
		return 0;
	}
	if (!func_296(&iLocal_861, 1))
	{
		func_253("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_861, 1000);
		return 0;
	}
	return 1;
}

int func_296(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_19()))
	{
		func_253("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_253("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_253("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_253("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_253("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		func_253("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_297(var uParam0, int iParam1)
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

int func_298(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_299(uParam0->f_3, 0, 0);
		unk_0x138116A08F9AC5F4(1, 0f);
		unk_0x661342B9651D16E2(uParam0->f_8, true);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), -1, 2048, 4);
	}
	return 1;
}

int func_299(int iParam0, bool bParam1, bool bParam2)
{
	return func_158(iParam0, !bParam1, bParam2);
}

int func_300(var uParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_301(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_38(uParam0->f_14, 0);
		unk_0x745CE398A4B0A3C6(uParam0->f_14, 2f, 0);
		func_36(uParam0->f_14, 0, fParam10);
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

void func_301(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0);
}

void func_302(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_163(&(uParam0->f_146[iVar0]), fParam2);
			}
			else
			{
				func_162(&(uParam0->f_146[iVar0]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_163(&(uParam0->f_146[iParam1]), fParam2);
	}
	else
	{
		func_162(&(uParam0->f_146[iParam1]));
	}
	if (bParam3)
	{
	}
}

void func_303()
{
	unk_0x523BCC9DC80CD82F(iLocal_851);
	unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	func_305(1);
	iLocal_947 = func_304();
}

int func_304()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_305(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_19());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 2);
	if (!func_225(Global_111638.f_19092, 128))
	{
		func_226(&(Global_111638.f_19092), 128);
	}
}

void func_306(var uParam0, var uParam1)
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

void func_307(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_308(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (bParam2)
			{
				if (func_408(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_234(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_234(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_302(uParam0, 10, 0f, 1);
				}
			}
			else if (func_408(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_234(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_234(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_302(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_408(uParam0, 10) > 30f)
		{
			if (!func_228())
			{
				if (uParam0->f_112)
				{
					func_234(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_234(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_302(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_225(uParam0->f_100, 64))
	{
		if (!func_164(&(Local_190[5].f_6)))
		{
			func_197(&(Local_190[5].f_6));
		}
		else if (func_161(&(Local_190[5].f_6)) > 6f)
		{
			if (func_331(uParam0))
			{
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[5].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(5, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 1))
	{
		if (!func_164(&(Local_190[0].f_6)))
		{
			func_197(&(Local_190[0].f_6));
		}
		else if (func_161(&(Local_190[0].f_6)) > 5f)
		{
			if (func_326(uParam0))
			{
				func_330(uParam0, 1);
				func_328(0, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[0].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 2))
	{
		if (!func_164(&(Local_190[1].f_6)))
		{
			func_197(&(Local_190[1].f_6));
		}
		else if (func_161(&(Local_190[1].f_6)) > 5f)
		{
			if (func_325(uParam0))
			{
				func_330(uParam0, 1);
				func_328(1, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[1].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 2048))
	{
		if (!func_164(&(Local_190[8].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_197(&(Local_190[8].f_6));
			}
		}
		else if (func_161(&(Local_190[8].f_6)) > 7f || Local_190[8].f_1 == 0)
		{
			if (func_324(uParam0))
			{
				func_330(uParam0, 1);
				func_328(8, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 128))
	{
		if (!func_164(&(Local_190[6].f_6)))
		{
			func_197(&(Local_190[6].f_6));
		}
		else if (func_161(&(Local_190[6].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_330(uParam0, 1);
				func_328(6, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[6].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 32))
	{
		if (!func_164(&(Local_190[4].f_6)))
		{
			func_197(&(Local_190[4].f_6));
		}
		else if (func_161(&(Local_190[4].f_6)) > 4f)
		{
			if (func_322(uParam0))
			{
				func_330(uParam0, 1);
				func_328(4, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[4].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 256))
	{
		if (!func_164(&(Local_190[7].f_6)))
		{
			func_197(&(Local_190[7].f_6));
		}
		else if (func_161(&(Local_190[7].f_6)) > 5f || Local_190[7].f_1 == 0)
		{
			if (func_321(uParam0))
			{
				func_328(7, uParam0);
				func_330(uParam0, 1);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[7].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 8))
	{
		if (!func_164(&(Local_190[9].f_6)))
		{
			func_197(&(Local_190[9].f_6));
		}
		else if (func_161(&(Local_190[9].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_161(&(Local_190[9].f_6)) > 7f || Local_190[9].f_1 == 0)
		{
			if (func_320(uParam0))
			{
				func_330(uParam0, 1);
				func_328(9, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[9].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 16384))
	{
		if (!func_164(&(Local_190[13].f_6)))
		{
			func_197(&(Local_190[13].f_6));
		}
		else if (func_161(&(Local_190[13].f_6)) > 10f)
		{
			if (func_314(uParam0))
			{
				func_330(uParam0, 1);
				func_328(13, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[13].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 32768))
	{
		if (!func_164(&(Local_190[14].f_6)))
		{
			func_197(&(Local_190[14].f_6));
		}
		else if (func_161(&(Local_190[14].f_6)) > 7f)
		{
			if (func_313(uParam0))
			{
				func_330(uParam0, 1);
				func_328(14, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[14].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 4096))
	{
		if (!func_164(&(Local_190[11].f_6)))
		{
			func_197(&(Local_190[11].f_6));
		}
		else if (func_161(&(Local_190[11].f_6)) > 8f)
		{
			if (func_312(uParam0))
			{
				func_330(uParam0, 1);
				func_328(11, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[11].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 8192))
	{
		if (!func_164(&(Local_190[12].f_6)))
		{
			func_197(&(Local_190[12].f_6));
		}
		else if (func_161(&(Local_190[12].f_6)) > 5f)
		{
			if (func_311(uParam0))
			{
				func_330(uParam0, 1);
				func_328(12, uParam0);
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[12].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_225(uParam0->f_100, 4))
	{
		if (!func_164(&(Local_190[2].f_6)))
		{
			func_310(&(Local_190[2].f_6), 0f);
		}
		else if (func_161(&(Local_190[2].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				if (uParam0->f_113)
				{
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, Local_190[2].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(2, uParam0);
				func_327(uParam0);
			}
		}
	}
}

int func_309(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_164(&(Local_190[0].f_3))) && !func_164(&(Local_190[1].f_3)))
		{
			if (!func_164(&(Local_190[2].f_3)))
			{
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_197(&(Local_190[2].f_3));
				}
			}
			else if (func_161(&(Local_190[2].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_101(&(Local_190[2].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_101(&(Local_190[2].f_3));
		}
	}
	return 0;
}

void func_310(int iParam0, float fParam1)
{
	if (!func_164(iParam0))
	{
		func_163(iParam0, fParam1);
	}
}

int func_311(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_164(&(Local_190[0].f_3)))
		{
			if (!func_164(&(Local_190[12].f_3)))
			{
				func_197(&(Local_190[12].f_3));
			}
			else if (func_161(&(Local_190[12].f_3)) > 5f)
			{
				func_101(&(Local_190[12].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[12].f_3));
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_164(&(Local_190[0].f_3))) && !func_164(&(Local_190[1].f_3))) && !func_164(&(Local_190[5].f_3))) && !func_164(&(Local_190[9].f_3))) && !func_164(&(Local_190[7].f_3))) && !func_164(&(Local_190[8].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2,5f && !func_164(&(Local_190[0].f_3)))
		{
			if (!func_164(&(Local_190[11].f_3)))
			{
				func_197(&(Local_190[11].f_3));
				fLocal_342 = vVar0.x;
			}
			else if (func_161(&(Local_190[11].f_3)) < 1,5f && (unk_0x755FF954DAE327E1(fLocal_342) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_101(&(Local_190[11].f_3));
				return 1;
			}
			else if (func_161(&(Local_190[11].f_3)) >= 1,5f)
			{
				func_101(&(Local_190[11].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_164(&(Local_190[0].f_3))) && !func_164(&(Local_190[8].f_3))) && !func_164(&(Local_190[5].f_3))) && !func_164(&(Local_190[9].f_3))) && !func_164(&(Local_190[7].f_3)))
	{
		if (!func_164(&(Local_190[14].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_211(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0) && !unk_0xBBA8A868118C90ED(uParam0->f_5, -1, 0)))
				{
					func_197(&(Local_190[14].f_3));
				}
			}
		}
		else if ((func_161(&(Local_190[14].f_3)) < 1,5f && func_211(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_101(&(Local_190[14].f_3));
			return 1;
		}
		else if (func_161(&(Local_190[14].f_3)) >= 1,5f)
		{
			func_101(&(Local_190[14].f_3));
			return 0;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_101(&(Local_190[14].f_3));
			return 0;
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_164(&(Local_190[9].f_3))) && !func_164(&(Local_190[7].f_3))) && !func_164(&(Local_190[4].f_3)))
	{
		if (!func_315(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_164(&(Local_190[13].f_3)))
			{
				func_197(&(Local_190[13].f_3));
			}
			else if (func_161(&(Local_190[13].f_3)) > 5f)
			{
				func_101(&(Local_190[13].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[13].f_3));
		}
	}
	return 0;
}

bool func_315(int iParam0)
{
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 2, &vVar3, 1, 3f, 0f);
	unk_0x48C17E97DDC41CBC(vVar0, -1, &vVar6);
	fVar27 = vmag(vVar6 - vVar0);
	vVar9 = { func_319((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_318(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_316(unk_0x68F4C0EC296D3901(iParam0, true), vVar15, vVar18, vVar21);
}

int func_316(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vParam0.z = 0f;
	vParam3.z = 0f;
	vParam6.z = 0f;
	vParam9.z = 0f;
	vVar0 = { func_319(vParam6 - vParam3) };
	vVar3 = { func_319(vParam9 - vParam3) };
	fVar6 = func_317(vParam0, vVar0);
	fVar7 = func_317(vParam3, vVar0);
	fVar8 = func_317(vParam6, vVar0);
	fVar9 = func_317(vParam0, vVar3);
	fVar10 = func_317(vParam3, vVar3);
	fVar11 = func_317(vParam9, vVar3);
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

float func_317(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_318(vector3 vParam0, int iParam3)
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

Vector3 func_319(vector3 vParam0)
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

int func_320(var uParam0)
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

int func_321(var uParam0)
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

int func_322(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_164(&(Local_190[4].f_3)))
			{
				func_197(&(Local_190[4].f_3));
			}
			else if (func_161(&(Local_190[4].f_3)) > 2f)
			{
				func_101(&(Local_190[4].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[4].f_3));
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_164(&(Local_190[6].f_3)))
			{
				func_197(&(Local_190[6].f_3));
			}
			else if (func_161(&(Local_190[6].f_3)) > 3,5f)
			{
				func_101(&(Local_190[6].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[6].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)
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
					func_234(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_234(uParam0, 72, 1, 0, 1);
				}
				func_101(&(Local_190[2].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_164(&(Local_190[0].f_3)))
		{
			if (!func_164(&(Local_190[1].f_3)))
			{
				func_197(&(Local_190[1].f_3));
			}
			else if (func_161(&(Local_190[1].f_3)) > 1,2f)
			{
				func_101(&(Local_190[1].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[1].f_3));
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_164(&(Local_190[0].f_3)))
			{
				func_197(&(Local_190[0].f_3));
			}
			else if (func_161(&(Local_190[0].f_3)) > 0,7f)
			{
				func_101(&(Local_190[0].f_3));
				func_162(&(Local_190[1].f_6));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[0].f_3));
		}
	}
	return 0;
}

void func_327(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_164(&(Local_190[iVar0].f_6)))
		{
			func_162(&(Local_190[iVar0].f_6));
		}
		iVar0++;
	}
	func_302(uParam0, 10, 0f, 1);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_328(int iParam0, var uParam1)
{
	Local_190[iParam0].f_1++;
	func_329(uParam1, iParam0);
	func_101(&(Local_190[iParam0].f_6));
	uParam1->f_112 = 1;
}

void func_329(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1]);
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_331(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_164(&(Local_190[5].f_3)))
			{
				func_197(&(Local_190[5].f_3));
			}
			else if (func_161(&(Local_190[5].f_3)) > 3,5f)
			{
				func_101(&(Local_190[5].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[5].f_3));
		}
	}
	return 0;
}

float func_332(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

void func_333(var uParam0, char* sParam1, int iParam2)
{
	func_186();
	func_428(2);
	vVar0 = { func_337() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_228()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (!func_176(uParam0))
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
		func_302(uParam0, 3, 0, 0);
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
				func_335(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_176(uParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
				{
					func_159(uParam0, 4096, 0);
				}
				else
				{
					func_159(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_335(uParam0, &vVar0);
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
				func_335(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_335(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_335(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_50(8, 0);
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
				func_335(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_159(uParam0, 0, 0);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_50(8, 0);
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
				func_335(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_50(8, 0);
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
				func_335(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_334(&vVar0);
			func_108(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
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
			func_335(uParam0, &vVar0);
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
					func_335(uParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_262(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_50(3, 0);
		}
		func_302(uParam0, 3, 0f, 1);
	}
}

void func_334(char* sParam0)
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

void func_335(var uParam0, char* sParam1)
{
	if (func_336(uParam0))
	{
		func_108(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_336(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_211(unk_0x16F2683693E537C9(), uParam0->f_3, 1) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_337()
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

int func_338(var uParam0)
{
	return uParam0->f_118;
}

void func_339()
{
	if (func_369(&Local_409, &Local_866))
	{
		switch (Local_866.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (func_229(&Local_409) > 10 && func_229(&Local_409) != 15)
					{
						func_234(&Local_409, 15, 1, 0, 0);
						func_302(&Local_409, 10, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_408(&Local_409, 18) > 15f)
				{
					if (func_229(&Local_409) > 10 && func_229(&Local_409) != 17)
					{
						func_226(&(Local_409.f_81), 67108864);
						func_234(&Local_409, 17, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				break;
			
			case 2:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_229(&Local_409) > 10 && func_229(&Local_409) != 16)
					{
						func_234(&Local_409, 16, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_229(&Local_409) > 10 && func_229(&Local_409) != 18)
					{
						func_234(&Local_409, 18, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				break;
			
			case 4:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_229(&Local_409) > 10 && func_229(&Local_409) != 19)
					{
						func_234(&Local_409, 19, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_340(&Local_409, &uLocal_896, &Local_866, 1, bLocal_865);
}

int func_340(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	func_352(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_351(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_350(uParam0))
				{
					uParam2->f_7 = { func_349(uParam1) };
					func_108(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_228())
				{
					uParam2->f_13 = { func_237() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_201(uParam0))
				{
					if (func_228())
					{
						if (unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_302(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_337() };
							func_48();
						}
						else
						{
							uParam2->f_1 = { func_348() };
							func_186();
						}
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_228())
				{
					uParam2->f_19 = { func_348() };
				}
				else
				{
					func_227(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_345(uParam1);
					func_302(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_198(uParam0, 14) && !func_228()) && !func_201(uParam0)) && func_408(uParam0, 18) > 1f)
				{
					func_302(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_408(uParam0, 18) > 1,5f && !func_228()) && !func_201(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_344(uParam2, &cVar0))
					{
						func_108(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_302(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var6 = { cVar0 };
						func_343(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_342(&(uParam0->f_244), uParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_302(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_228() && func_408(uParam0, 17) > 1f)
				{
					if (func_408(uParam0, 18) > 0,5f || uParam0->f_411 == 0)
					{
						if (unk_0x7F8A39872A07D2CE(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_236(&(uParam2->f_1));
							func_108(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_195(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_228())
				{
					func_227(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_345(uParam1);
					func_302(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_109(sParam2, iParam4, 0);
}

int func_342(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_109(sParam2, iParam4, 0);
}

void func_343(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_281(*uParam0, iVar1))
		{
			func_227(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_236(sParam2);
				}
				else
				{
					func_236(sParam2);
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

int func_344(var uParam0, char* sParam1)
{
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm3_bant1") || unk_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3M") || unk_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3T")) || unk_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_226(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_345(var uParam0)
{
	iVar0 = func_347(uParam0);
	if (iVar0 > -1)
	{
		func_20(&(uParam0[iVar0]->f_7), 2);
		func_20(&(uParam0[iVar0]->f_7), 4);
		func_226(&(uParam0[iVar0]->f_7), 8);
		StringCopy(uParam0[iVar0], func_346(), 24);
	}
}

var func_346()
{
	return uVar0;
}

int func_347(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_225(uParam0[iVar0]->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_348()
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

struct<6> func_349(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_225(uParam0[iVar0]->f_7, 2))
		{
			Var1 = { *uParam0[iVar0] };
			func_226(&(uParam0[iVar0]->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_350(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_203("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_203("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_203("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_203("TX_OBJ_GYB_DO", 0, 0) || func_203("TAXI_OBJ_GYB", 0, 0)) || func_203("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_203("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_203("TX_OBJ_CYI_DO", 0, 0) || func_203("TAXI_OBJ_CYI_01", 0, 0)) || func_203("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_203("TX_OBJ_GYN_DO", 0, 0) || func_203("TAXI_OBJ_GYN", 0, 0)) || func_203("TAXI_OBJ_GYN_TG", 0, 0)) || func_203("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_203("TAXI_OBJ_CC1", 0, 0) || func_203("TAXI_OBJ_CC2", 0, 0)) || func_203("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_203("TAXI_OBJ_FTC1", 0, 0) || func_203("TAXI_OBJ_FTC2", 0, 0)) || func_203("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_203("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_203("TAXI_OBJ_GETRUN", 0, 0) || func_203("TAXI_OBJ_DRIVE", 0, 0)) || func_203("TAXI_OBJ_RETURN", 0, 0)) || func_203("TAXI_OBJ_POL", 0, 0)) || func_203("TAXI_OBJ_RUNOUT", 0, 0)) || func_203("TAXI_OBJ_POL", 0, 0));
}

int func_351(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_225(uParam0[iVar0]->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_352(var uParam0, var uParam1)
{
	if (func_350(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_198(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_229(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_228())
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
						func_367(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 2));
				}
				if (func_225(uParam0->f_98, 4))
				{
					func_302(uParam0, 16, 0, 0);
					func_267(uParam0, 0, 0);
				}
				func_216(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_408(uParam0, 16) > 1f)
				{
					func_218(1);
					if (uParam0->f_411 == 9)
					{
						func_266("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_266("TAXI_VIP_RETURN", 7500, 1);
					}
					func_302(uParam0, 16, 0, 0);
					func_267(uParam0, 0, 0);
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
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_262(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_408(uParam0, 16) > func_126(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_228()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_229(uParam0))
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
				func_367(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_108(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_234(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_302(uParam0, 16, 0, 0);
				func_234(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar6 = { vVar0 };
				if (!func_225(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_343(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_367(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_302(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_266("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_266("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_363(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_234(uParam0, 10, 1, 0, 0);
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
				func_236(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_262(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_363(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_234(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_362(uParam0, 33554432, vVar0, "", 1, 8);
				func_302(uParam0, 16, 0, 0);
				func_234(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_228())
				{
					func_361(uParam0, 0);
					func_226(&(uParam0->f_44), 4);
					func_302(uParam0, 16, 0, 0);
					func_234(uParam0, 13, 0, 0, 0);
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
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_408(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_236(&vVar0);
					}
					func_359(vVar0, uParam1);
					func_226(&(uParam0->f_81), 67108864);
					func_302(uParam0, 16, 0, 0);
					func_302(uParam0, 11, 0, 0);
					func_267(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_408(uParam0, 11) > uParam0->f_36)
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
							func_236(&vVar0);
						}
					}
					func_359(vVar0, uParam1);
					func_302(uParam0, 11, 0, 0);
					func_302(uParam0, 16, 0, 0);
					func_267(uParam0, 0, 0);
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
					func_236(&vVar0);
				}
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
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
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
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
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				func_226(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 1, 0, 8);
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
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
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
					func_358(&(uParam0->f_90), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_90), 3, &vVar0, &iVar15, 1, 0);
				}
				func_359(vVar0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 6, 0f, 1);
				func_267(uParam0, 0, 0);
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
					func_358(&(uParam0->f_89), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_89), 3, &vVar0, &iVar15, 1, 0);
				}
				func_359(vVar0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 6, 0f, 1);
				func_267(uParam0, 0, 0);
				break;
			
			case 12:
				func_266("TAXI_OBJ_GYB", 3500, 1);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_266("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_266("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_266("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
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
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_225(uParam0->f_98, 268435456))
				{
					func_266("TAXI_OBJ_CYI_01", 7500, 1);
					func_226(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 33:
				func_266("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_225(uParam0->f_82, 8192))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_236(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_359(vVar0, uParam1);
						}
						else
						{
							func_367(uParam0, &vVar0, 0, 0, 8);
						}
						func_226(&(uParam0->f_82), 8192);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_267(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_225(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_236(&vVar0);
					func_367(uParam0, &vVar0, 0, 0, 8);
					func_226(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_225(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_236(&vVar0);
					func_367(uParam0, &vVar0, 0, 0, 8);
					func_226(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 46, 1, 0, 0);
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
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_267(uParam0, 0, 0);
				break;
			
			case 139:
				func_266("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_234(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = unk_0x09AC81E49EA267F7(0, 120);
				if (!func_225(uParam0->f_82, 268435456))
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
					func_226(&(uParam0->f_82), 268435456);
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
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = unk_0x09AC81E49EA267F7(0, 100);
				if (!func_225(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_226(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_266("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_267(uParam0, 0, 0);
				func_234(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_228())
				{
					func_266("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_267(uParam0, 0, 0);
					func_234(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_266("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_267(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_225(uParam0->f_81, 1))
				{
					func_357(uParam0, 1, vVar0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_225(uParam0->f_81, 2))
				{
					func_357(uParam0, 2, vVar0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_225(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_225(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_226(&(uParam0->f_81), 2097152);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_368(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_267(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_225(uParam0->f_81, 4))
				{
					func_357(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_225(uParam0->f_81, 8))
				{
					func_357(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_357(uParam0, 8, vVar0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_368(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_356(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_262(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar6 = { vVar0 };
					func_343(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_108(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar6 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_343(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_343(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				func_368(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_225(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_302(uParam0, 16, 0, 0);
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_225(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar24)
					{
						func_236(&vVar0);
					}
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar24)
					{
						func_236(&vVar0);
					}
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar24)
					{
						func_236(&vVar0);
					}
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_302(uParam0, 16, 0, 0);
				}
				func_368(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_225(uParam0->f_81, 4096))
				{
					func_362(uParam0, 4096, vVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_225(uParam0->f_81, 8192))
				{
					func_362(uParam0, 8192, vVar0, "_sideW2", bVar24, 8);
				}
				func_368(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_225(uParam0->f_81, 16384))
				{
					func_362(uParam0, 16384, vVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_225(uParam0->f_81, 32768))
				{
					func_362(uParam0, 32768, vVar0, "_opLne2", bVar24, 8);
				}
				func_368(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_225(uParam0->f_82, 8))
					{
						func_355(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_225(uParam0->f_82, 16))
					{
						func_355(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_225(uParam0->f_82, 32))
					{
						func_355(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_267(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar6 = { vVar0 };
					func_343(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_302(uParam0, 16, 0, 0);
					func_267(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_225(uParam0->f_81, 65536))
				{
					func_362(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_225(uParam0->f_81, 131072))
				{
					func_362(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_356(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_262(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_225(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_226(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_302(uParam0, 16, 0, 0);
				}
				func_368(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_228())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 65));
					func_267(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_228())
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
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 66));
					func_267(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_228())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								func_368(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								func_368(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar6 = { vVar0 };
								func_343(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
								func_368(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_302(uParam0, 16, 0, 0);
								func_267(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar6 = { vVar0 };
									func_367(uParam0, &vVar0, 0, 0, 8);
									func_302(uParam0, 16, 0, 0);
									func_302(uParam0, 11, 0, 0);
									func_267(uParam0, 0, 0);
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
									func_236(&vVar0);
									func_367(uParam0, &vVar0, 0, 0, 8);
									func_302(uParam0, 16, 0, 0);
									func_302(uParam0, 11, 0, 0);
									func_267(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_234(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_368(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_225(uParam0->f_82, 1))
				{
					func_355(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_225(uParam0->f_82, 2))
				{
					func_355(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_225(uParam0->f_82, 4))
				{
					func_355(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_267(uParam0, 0, 0);
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
				func_343(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_262(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_302(uParam0, 16, 0, 0);
				func_368(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_356(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_262(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_354(uParam0, vVar0, 8);
				}
				func_368(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_225(uParam0->f_83, 1024))
				{
					func_226(&(uParam0->f_83), 1024);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 2048))
				{
					func_226(&(uParam0->f_83), 2048);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_225(uParam0->f_83, 4096))
				{
					func_226(&(uParam0->f_83), 4096);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_236(&vVar0);
					func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_225(uParam0->f_82, 1024))
				{
					func_355(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_225(uParam0->f_82, 2048))
				{
					func_355(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_368(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 52, 1, 0, 0);
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
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_262(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_356(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar6 = { vVar0 };
						cVar6 = { vVar0 };
						func_367(uParam0, &vVar0, 0, 0, 8);
						func_234(uParam0, 52, 1, 0, 0);
						func_302(uParam0, 16, 0, 0);
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
						func_367(uParam0, &vVar0, 0, 0, 8);
						func_302(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar6 = { vVar0 };
					func_343(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_302(uParam0, 16, 0, 0);
					func_267(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_368(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_302(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					func_266("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_225(uParam0->f_81, 262144))
				{
					func_362(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_225(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_362(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_362(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_368(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_225(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_353(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_225(uParam0->f_82, 134217728))
				{
					func_353(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_368(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar6 = { vVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 100:
				func_266("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_267(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_236(&vVar0);
				}
				func_226(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_236(&vVar0);
				}
				func_226(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
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
					func_236(&vVar0);
				}
				func_226(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_225(uParam0->f_82, 65536))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
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
						func_236(&vVar0);
						func_359(vVar0, uParam1);
						func_226(&(uParam0->f_82), 65536);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_267(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_225(uParam0->f_82, 131072))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_236(&vVar0);
						func_359(vVar0, uParam1);
						func_226(&(uParam0->f_82), 131072);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_267(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_225(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_226(&(uParam0->f_82), 8388608);
				}
				else if (!func_225(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_226(&(uParam0->f_82), 16777216);
				}
				else if (!func_225(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_226(&(uParam0->f_82), 33554432);
				}
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar6 = { vVar0 };
					func_343(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_236(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_359(vVar0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar6 = { vVar0 };
				func_343(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_234(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_226(&(uParam0->f_81), 2097152);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_236(&vVar0);
				func_359(vVar0, uParam1);
				func_226(&(uParam0->f_81), 67108864);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_225(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_362(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_262(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_234(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_225(uParam0->f_81, 268435456))
				{
					func_362(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_234(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_266("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_267(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_225(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_362(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_262(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_362(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_234(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_266("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_267(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_108(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_225(uParam0->f_81, 16777216))
				{
					func_362(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_267(uParam0, 0, 0);
				break;
			
			case 88:
				func_266("TAXI_TIEFLEE", 7500, 1);
				func_267(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_225(uParam0->f_98, 536870912))
				{
					func_266("TAXI_OBJ_CYI_1B", 7500, 1);
					func_226(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_267(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_236(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
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
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_267(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_267(uParam0, 0, 0);
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
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_267(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_367(uParam0, &vVar0, 1, 0, 8);
				func_234(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_266("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_234(uParam0, 0, 0, 0, 0);
				func_267(uParam0, 0, 0);
				break;
			}
	}
}

void func_353(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_226(&(uParam0->f_82), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_236(&vParam2);
	}
	func_108(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

void func_354(var uParam0, struct<6> Param1, int iParam7)
{
	cVar0 = { Param1 };
	if (!func_225(uParam0->f_82, 64))
	{
		func_226(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_225(uParam0->f_82, 128))
	{
		func_226(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(1, 3), 24);
	}
	func_342(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_302(uParam0, 16, 0, 0);
}

void func_355(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_226(&(uParam0->f_82), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_236(&vParam2);
		}
	}
	func_108(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

int func_356(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_226(&(uParam0->f_81), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	func_108(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

void func_358(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_281(*uParam0, iVar1))
		{
			func_227(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_236(sParam2);
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

void func_359(char[24] cParam0, var uParam6)
{
	iVar0 = func_360(uParam6);
	if (iVar0 > -1)
	{
		*uParam6[iVar0] = { cParam0 };
		func_226(&(uParam6[iVar0]->f_7), 2);
	}
}

int func_360(var uParam0)
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

void func_361(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_266("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_266("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_266("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_266("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_266("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_266("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_266("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_266("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_266("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_266("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_266("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_266("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_266("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_362(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_226(&(uParam0->f_81), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_236(&vParam2);
	}
	func_108(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

int func_363(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_126(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_364(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_302(uParam0, 16, 0, 0);
	func_302(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_365(uParam0));
	}
}

char* func_365(var uParam0)
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

char* func_366(var uParam0, int iParam1)
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

int func_367(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_302(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_302(uParam0, 17, 0f, 1);
	}
	func_267(uParam0, iParam2, 0);
	return func_108(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_368(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_225(*uParam2, 2))
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
		if (func_225(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_225(*uParam2, 4))
		{
			if (!func_225(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_225(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_225(*uParam2, 512))
		{
			if (!func_225(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_225(*uParam2, 16))
		{
			if (!func_225(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_225(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_225(*uParam2, 64))
		{
			if (!func_225(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_225(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_225(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_225(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_225(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_225(*uParam2, 8192))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_225(*uParam2, 16384))
		{
			if (func_225(*uParam2, 4194304))
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
		if (func_225(*uParam2, 32768))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_225(*uParam2, 65536))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_225(*uParam2, 131072))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_225(*uParam2, 262144))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_225(*uParam2, 524288))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_225(*uParam2, 1048576))
		{
			if (func_225(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_225(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_225(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_225(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_225(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_225(*uParam2, 67108864))
		{
			if (func_225(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_225(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_225(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_225(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_225(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

bool func_369(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_198(uParam0, 9));
}

bool func_370(var uParam0)
{
	return uParam0->f_117;
}

void func_371(var uParam0, var uParam1, bool bParam2)
{
	if (!func_225(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_124)) && func_228())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_228())
				{
					StringCopy(&(uParam0->f_124), func_346(), 24);
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

void func_372(var uParam0)
{
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_343 > 0 && !func_281(Local_343.f_1[4], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_281(Local_343.f_1[iVar0], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0].f_2);
						if (StackVal)
						{
							if (!func_281(Local_343.f_1[iVar0], 4))
							{
								func_227(&(Local_343.f_1[iVar0]), 4);
								Local_343.f_1[iVar0].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0]), 12);
						}
						if (func_281(Local_343.f_1[iVar0], 4) && !func_281(Local_343.f_1[iVar0], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0].f_1);
							Call_Loc(Local_343.f_1[iVar0].f_3);
							if (StackVal)
							{
								func_227(&(Local_343.f_1[iVar0]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_333(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_373(var uParam0, var uParam1)
{
	if (!func_198(uParam0, 27))
	{
		func_196(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_408(uParam0, 27) > 5f)
	{
		if (func_400(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_302(uParam0, 27, 0, 0);
			func_302(uParam0, 10, 0, 0);
			func_398(uParam0, &uVar0, uParam1);
		}
		func_395(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_374(uParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*uParam0) && !unk_0xFBB4F23D534EB790(*uParam0))) && (unk_0x9F4FE516EAACCFC5(uParam0->f_1) && !unk_0xFBB4F23D534EB790(uParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_228())
	{
		if (func_408(uParam0, 26) > 10f)
		{
			func_195(uParam0, 26, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
	else if (func_198(uParam0, 26))
	{
		func_195(uParam0, 26, 0);
	}
	return 0;
}

void func_374(var uParam0)
{
	if (!func_394(uParam0->f_429))
	{
		uParam0->f_429 = func_393();
		func_384(&(uParam0->f_429), 0, 0, unk_0x09AC81E49EA267F7(4, 7), 0, 0, 0);
	}
	else if (func_375(uParam0->f_429))
	{
		func_333(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_375(int iParam0)
{
	return func_376(func_393(), iParam0);
}

int func_376(int iParam0, int iParam1)
{
	if (!func_394(iParam1) || !func_394(iParam0))
	{
		return 1;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
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
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	iVar1 = func_377(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_378(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_379(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_381(int iParam0)
{
	return iParam0 & 15;
}

var func_382(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_383(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_383(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_382(*uParam0);
	iVar1 = func_381(*uParam0);
	iVar2 = func_380(*uParam0);
	iVar3 = func_379(*uParam0);
	iVar4 = func_378(*uParam0);
	iVar5 = func_377(*uParam0);
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
	iVar6 = func_392(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_392(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_385(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_391(uParam0, iParam1);
	func_390(uParam0, iParam2);
	func_389(uParam0, iParam3);
	func_388(uParam0, iParam5);
	func_387(uParam0, iParam4);
	func_386(uParam0, iParam6);
}

void func_386(var uParam0, int iParam1)
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

void func_387(var uParam0, int iParam1)
{
	iVar0 = func_381(*uParam0);
	iVar1 = func_382(*uParam0);
	if (iParam1 < 1 || iParam1 > func_392(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_389(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_392(int iParam0, int iParam1)
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

int func_393()
{
	func_391(&uVar0, unk_0x4460E481B9E33ADA());
	func_390(&uVar0, unk_0x8D199E381D262EEF());
	func_389(&uVar0, unk_0xD8A54335F18763BA());
	func_387(&uVar0, unk_0x972A296334C9D57B());
	func_388(&uVar0, unk_0x118229AD063C3C1D());
	func_386(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_394(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_378(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_379(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_382(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_381(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_380(iParam0);
	if (iVar5 < 1 || iVar5 > func_392(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_395(var uParam0)
{
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_397()) && !func_199(uParam0)) || ((uParam0->f_411 != 9 && func_271(uParam0, 1)) && !func_199(uParam0)))
		{
			uVar0 = func_396(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			unk_0x73270B3C9CC833FD(uParam0->f_4, true, 0);
			func_221(uParam0);
			func_212(uParam0, 0);
		}
	}
}

var func_396(var uParam0)
{
	return uParam0;
}

int func_397()
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
					if (unk_0x4906F8A34E9F4814(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_398(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_399(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_399(uParam0, 0, 4))
			{
				func_333(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_399(uParam0, 0, 8))
			{
				func_333(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_399(uParam0, 1, 1))
			{
				func_333(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_399(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_225(*uParam2, 2) && func_176(uParam0))
			{
				func_333(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_399(var uParam0, int iParam1, int iParam2)
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
				func_234(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_234(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_400(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_225(*uParam2, 1))
		{
			if (func_406(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_225(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_225(*uParam2, 4))
		{
			if (func_404(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_225(*uParam2, 8))
		{
			if (func_403(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_225(*uParam2, 128);
		if (bParam4)
		{
			if (func_401(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_225(*uParam2, 16))
		{
			if (func_401(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_401(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_402(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_210(iParam0, 1) < 1,5f)
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

int func_402(int iParam0, int iParam1)
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

int func_403(int iParam0, int iParam1, var uParam2)
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

int func_404(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xFB275CE013F3A38C(iParam0) || func_405(iVar3))
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

int func_405(int iParam0)
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
						if (func_211(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
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

int func_406(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_210(iParam0, 1) < uParam1->f_2)
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

void func_407(var uParam0)
{
	if (!func_225(uParam0->f_98, 2))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (func_332(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_226(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_408(var uParam0, int iParam1)
{
	if (!func_164(&(uParam0->f_146[iParam1])))
	{
		func_197(&(uParam0->f_146[iParam1]));
	}
	return func_161(&(uParam0->f_146[iParam1]));
}

void func_409()
{
	func_410(&Local_409);
	func_427();
}

void func_410(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_428(2);
	}
}

int func_411(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_228() && func_408(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_61(uParam0) == 0 || func_281(uParam0->f_85, 32))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_159(uParam0, 4160, 0);
						}
						else
						{
							func_159(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_159(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_159(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_159(uParam0, 0, 0);
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

void func_412(var uParam0)
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

int func_413(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_414(int iParam0)
{
	func_416(&Local_409, iParam0);
	Local_409.f_410 = 0;
	func_415(&Local_409, 7, 14);
	Local_409.f_23 = { -492,4436f, -290,3657f, 34,486f };
	Local_409.f_33 = 202,0759f;
	Local_409.f_26 = { 856,3766f, 1288,918f, 357,7924f };
	Local_409.f_34 = 162,3f;
	Local_409.f_6 = 1f;
	Local_409.f_29 = { 810,3334f, 1172,413f, 321,8036f };
}

void func_415(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_416(var uParam0, var uParam1)
{
	func_426(1);
	func_223();
	func_7(&(uParam0->f_244));
	func_425(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_225(Global_111638.f_19092, 4))
	{
		func_226(&(Global_111638.f_19092), 4);
	}
	func_420(uParam0);
	func_418(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	uParam0->f_102 = (func_417(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 2);
}

int func_417(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_418(var uParam0)
{
	switch (func_61(uParam0))
	{
		case 0:
			func_419(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_419(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_419(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_419(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_419(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_419(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_419(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_419(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_419(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_419(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_419(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_420(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			func_424(uParam0, 3);
			func_423(uParam0, 14);
			break;
		
		case 1:
			func_424(uParam0, 14);
			func_423(uParam0, 8);
			break;
		
		case 2:
			func_424(uParam0, 8);
			func_423(uParam0, 7);
			break;
		
		case 3:
			func_424(uParam0, 15);
			func_423(uParam0, 6);
			break;
		
		case 4:
			func_424(uParam0, 0);
			func_423(uParam0, 3);
			break;
		
		case 5:
			func_424(uParam0, 6);
			func_423(uParam0, 7);
			break;
		
		case 6:
			func_424(uParam0, 8);
			func_423(uParam0, 15);
			break;
		
		case 7:
			func_424(uParam0, 8);
			func_423(uParam0, 14);
			break;
		
		case 8:
			func_424(uParam0, 7);
			func_423(uParam0, 15);
			break;
		
		case 9:
			func_424(uParam0, unk_0x09AC81E49EA267F7(0, 17));
			iVar0 = func_422((uParam0->f_418.f_2 + unk_0x09AC81E49EA267F7(1, 17)), 0, 16);
			func_423(uParam0, iVar0);
			func_421(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_421(var uParam0)
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

int func_422(int iParam0, int iParam1, int iParam2)
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

void func_423(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_424(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_425(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_195(uParam0, 32, 0);
}

void func_426(bool bParam0)
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

void func_427()
{
	unk_0x71199B01895C6202(iLocal_851);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	func_127(&uLocal_45, 0, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_428(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

