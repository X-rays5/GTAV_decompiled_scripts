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
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	vLocal_119 = { 1140,746f, 258,6841f, -52,4408f };
	iLocal_126 = -1;
	iLocal_212 = -1;
	iLocal_1649 = -1;
	iLocal_1650 = -1;
	iLocal_1696 = -1;
	iLocal_2124 = -1;
	iLocal_2125 = -1;
	iLocal_2126 = -1;
	iLocal_2127 = -1;
	iLocal_2128 = 1;
	iLocal_2130 = -1;
	func_366();
	if (unk_0x8CD06866876216F2())
	{
		func_362();
	}
	else
	{
		func_360();
	}
	func_359(&Local_1348, &Local_213);
	while (true)
	{
		func_358();
		func_343();
		func_15();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_2741.f_659, 0))
	{
		func_13();
		unk_0x5D96D8530B3D0904(&(Local_2741.f_659), 0);
	}
	func_2();
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4 = unk_0x117658E336116132(iVar0);
		if (unk_0xFB75B0F82CA525F6(iVar4))
		{
			if (func_12(iVar4, 0, 1))
			{
				if (Local_3401[iVar0] >= 0)
				{
					unk_0x5D96D8530B3D0904(&(uVar1[func_11(Local_3401[iVar0])]), func_10(Local_3401[iVar0]));
					func_4(iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uVar1[func_11(iVar0)], func_10(iVar0)))
		{
			if (Local_2741.f_598[iVar0] >= 0)
			{
				Local_2741.f_598[iVar0] = -1;
			}
		}
		else if (Local_2741.f_598[iVar0] >= 0)
		{
			iVar4 = unk_0x117658E336116132(Local_2741.f_598[iVar0]);
			if (!func_12(iVar4, 0, 1) && unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iVar0)], func_10(iVar0)))
			{
				unk_0x0674E58A79778E99(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				unk_0x0674E58A79778E99(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
				func_3(&(Local_2741.f_489[iVar0]));
				Local_2741.f_598[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0)
{
	iVar0 = Local_3401[iParam0];
	if (Local_2741.f_598[iVar0] == -1)
	{
		Local_2741.f_598[iVar0] = iParam0;
	}
	else if (Local_2741.f_598[iVar0] == iParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iVar0)], func_10(iVar0)))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 0) && !unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 2))
			{
				unk_0x5D96D8530B3D0904(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				func_9(&(Local_2741.f_489[iVar0]), 0, 0);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 1) || !func_12(unk_0x117658E336116132(iParam0), 0, 1))
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					Local_2741.f_217[iVar0][iVar1] = Local_3401[iParam0].f_5[iVar1];
					Local_2741[iVar0][iVar1] = Local_3401[iParam0].f_1[iVar1];
					Local_2741.f_434[iVar0] = Local_3401[iParam0].f_9;
					unk_0x5D96D8530B3D0904(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
					iVar1++;
				}
			}
			if (((unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 1) || !func_12(unk_0x117658E336116132(iParam0), 0, 1)) || unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 3)) && ((unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 2) || unk_0xEAE0D21A50E6C7F4(Local_3401[iParam0].f_10, 3)) || func_5(&(Local_2741.f_489[iVar0]), func_7(iVar0) + 10000, 0)))
			{
				unk_0x0674E58A79778E99(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				unk_0x0674E58A79778E99(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
				func_3(&(Local_2741.f_489[iVar0]));
			}
		}
	}
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
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

void func_6(var uParam0, bool bParam1, bool bParam2)
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

int func_7(int iParam0)
{
	if (func_8(iParam0, &Local_213))
	{
		if ((Local_1348.f_1[0][Local_2741[iParam0][0]] == 7 && Local_1348.f_1[1][Local_2741[iParam0][1]] == 7) && Local_1348.f_1[2][Local_2741[iParam0][2]] == 7)
		{
			return 11000;
		}
	}
	return 5500;
}

int func_8(int iParam0, var uParam1)
{
	switch (uParam1[iParam0]->f_17)
	{
		case 4:
			if (Global_262145.f_26246)
			{
				return 0;
			}
			return 1;
			break;
		
		case 8:
			if (Global_262145.f_26247)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0)
{
	return (iParam0 - func_11(iParam0) * 32);
}

int func_11(int iParam0)
{
	return floor((to_float(iParam0) / 32f));
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	Var2 = 3;
	Var2.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_14(iVar0, &Var2, &Local_1348, &Local_213);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Local_2741.f_217[iVar0][iVar1] = Var2.f_4[iVar1];
			Local_2741[iVar0][iVar1] = Var2[iVar1];
			Local_2741.f_434[iVar0] = Var2.f_8;
			iVar1++;
		}
		iVar0++;
	}
}

void func_14(int iParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = unk_0xA0A5F9CC633A6814(0, *uParam2);
		(*uParam1)[iVar0] = iVar2;
		if (uParam2->f_1[iVar0][iVar2] == 0)
		{
			iVar3 = unk_0x09AC81E49EA267F7(0, uParam2->f_225);
			uParam1->f_4[iVar0] = (IntToFloat(iVar3) + 0,5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0][iVar1] == uParam2->f_1[iVar0][iVar2])
				{
					iVar4++;
				}
				iVar1++;
			}
			iVar3 = unk_0x09AC81E49EA267F7(0, iVar4);
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0][iVar1] == uParam2->f_1[iVar0][iVar2])
				{
					if (iVar4 == iVar3)
					{
						uParam1->f_4[iVar0] = to_float(iVar1);
						iVar1 = uParam2->f_225;
					}
					iVar4++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (func_8(iParam0, uParam3))
	{
		if ((uParam2->f_1[0][(*uParam1)[0]] == 7 && uParam2->f_1[1][(*uParam1)[1]] == 7) && uParam2->f_1[2][(*uParam1)[2]] == 7)
		{
			iVar2 = unk_0xA0A5F9CC633A6814(0, 12);
			uParam1->f_8 = iVar2;
		}
	}
}

void func_15()
{
	func_330();
	if (iLocal_1637 > 0)
	{
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		unk_0x38C3A68D7861DCFD(2, 199, 1);
		unk_0x558EC149EB2BC0A2(0, 200);
		unk_0x558EC149EB2BC0A2(2, 200);
		unk_0x558EC149EB2BC0A2(0, 199);
		unk_0x558EC149EB2BC0A2(2, 199);
		unk_0x38C3A68D7861DCFD(2, 210, 1);
		unk_0x558EC149EB2BC0A2(0, 210);
		unk_0x558EC149EB2BC0A2(2, 210);
	}
	if (func_329(&uLocal_1700))
	{
		if (!func_5(&uLocal_1700, 5000, 1))
		{
			unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), 0,2f);
		}
	}
	switch (iLocal_1637)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 18))
			{
				unk_0x8D17794CE3273D70(func_328());
				unk_0x0674E58A79778E99(&iLocal_1638, 18);
			}
			if (func_311())
			{
				iLocal_1640 = 0;
				unk_0x0674E58A79778E99(&iLocal_1638, 21);
				unk_0x0674E58A79778E99(&iLocal_1638, 22);
				unk_0x0674E58A79778E99(&iLocal_1638, 30);
				unk_0x0674E58A79778E99(&iLocal_1638, 31);
				unk_0x0674E58A79778E99(&iLocal_1638, 21);
				unk_0x0674E58A79778E99(&iLocal_1638, 22);
				func_310(1);
			}
			break;
		
		case 1:
			func_309(iLocal_2127);
			Local_2104 = unk_0xB01F55A0FD1CFD49("SLOT_MACHINE");
			break;
		
		case 3:
			func_307();
			break;
		
		case 2:
			if (!func_306())
			{
				func_310(0);
			}
			break;
		
		case 4:
			func_3(&Local_2085);
			iLocal_2100 = 0;
			iLocal_2101 = 0;
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_299(0);
			unk_0x5024DE80A08E9E70(19);
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4), 7);
			if (func_281())
			{
				func_274(0);
				func_310(5);
			}
			break;
		
		case 5:
			if (!unk_0x562F77A7F33D2E46("dlc_vw_casino_slot_machines_playing"))
			{
				unk_0x8BC9595FD2792B5D("dlc_vw_casino_slot_machines_playing");
			}
			unk_0xA78CDFD1AE3130A9(518572876);
			func_229();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_299(0);
			unk_0x5024DE80A08E9E70(19);
			func_45();
			break;
		
		case 6:
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_299(0);
			unk_0x5024DE80A08E9E70(19);
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4, 7))
			{
				unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4), 7);
				func_34();
			}
			if (unk_0x562F77A7F33D2E46("dlc_vw_casino_slot_machines_playing"))
			{
				unk_0x8910D3D58E0132B8("dlc_vw_casino_slot_machines_playing");
			}
			if (unk_0xA4FD7964FEE91ED8(0) == 4)
			{
				if (func_33() < 0,6f)
				{
					unk_0xA78CDFD1AE3130A9(518572876);
				}
			}
			vVar0 = { unk_0x4F3973434662D795(2, 218), unk_0x4F3973434662D795(2, 219), 0f };
			vVar3 = { unk_0x4F3973434662D795(2, 220), unk_0x4F3973434662D795(2, 221), 0f };
			if ((func_33() > 0,99f || func_33() < 0f) || ((vmag(vVar0) >= 0,24f || vmag(vVar3) >= 0,24f) && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2115798116)))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_32();
				func_310(0);
				if (func_12(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x991B1F0980C62628())
				{
					func_17(unk_0xD803B885F5E47A62(), 1, 0, 0);
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 18))
				{
					unk_0x8D17794CE3273D70(func_328());
					unk_0x0674E58A79778E99(&iLocal_1638, 18);
				}
				if (unk_0x0178C60FEA5C5A75())
				{
					unk_0xBFE31971E49FA500(true);
				}
				func_9(&uLocal_1700, 1, 0);
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 2))
				{
					func_16(0);
					unk_0x0674E58A79778E99(&iLocal_1638, 2);
				}
			}
			break;
	}
}

void func_16(int iParam0)
{
	Global_968398 = iParam0;
}

void func_17(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_31())
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
		if (!func_29())
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
				else if (bVar14 || (!func_26(unk_0xD803B885F5E47A62(), 0) && !func_25()))
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
					func_22(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_21(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_20();
					func_19();
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
				if (!func_21(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_18(Global_4456448.f_232883))
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

bool func_18(int iParam0)
{
	return iParam0 == 17;
}

void func_19()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_20()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_21(int iParam0)
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

void func_22(int iParam0, int iParam1, int iParam2)
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
				func_24();
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
		if (func_26(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_23(-2008016205, iParam0);
	}
}

void func_23(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_24()
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

bool func_25()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_26(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()
{
	return Global_1312745;
}

int func_29()
{
	if (func_30() == 0)
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	return Global_1312467.f_18;
}

int func_31()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (unk_0x83D8570832F172A7(Local_2104))
	{
		unk_0xE17FDF9E3068281B(&Local_2104);
	}
	Local_2104.f_1 = -1;
	if (iLocal_2126 >= 0)
	{
		StringCopy(&cVar0, "machine_0", 24);
		StringIntConCat(&cVar0, Local_213[iLocal_2126].f_17, 24);
		StringConCat(&cVar0, "a", 24);
		if (unk_0xE6CD5C6925050049(&cVar0))
		{
			unk_0x683413D9B7010687(&cVar0);
		}
	}
	iLocal_2126 = -1;
}

float func_33()
{
	iVar0 = unk_0xF958843510932FF6(iLocal_1641);
	if (unk_0x69DF961355195C3C(iVar0))
	{
		return unk_0xA45992A6CE82FB43(iVar0);
	}
	return -1f;
}

void func_34()
{
	if (Global_1696071 != -1)
	{
		iVar0 = (unk_0xDD0E7998AE8AD485() - Global_1696054);
		iVar1 = (unk_0xDD0E7998AE8AD485() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_38(iVar0);
		}
		else
		{
			func_38(iVar1);
		}
		func_37();
		func_35();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_35()
{
	func_36(1599929969, unk_0xDD0E7998AE8AD485());
}

void func_36(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

void func_37()
{
	func_36(575353331, unk_0xDD0E7998AE8AD485());
}

void func_38(int iParam0)
{
	iVar0 = func_44();
	Global_1696063 = (Global_1696063 + iParam0);
	func_39(iVar0, iParam0);
	func_35();
}

void func_39(int iParam0, int iParam1)
{
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = floor((to_float(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_43((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_42(iVar14);
		iVar0++;
	}
	iVar15 = func_41(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_40(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_43((iVar13 + iVar0));
		func_36(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = floor((to_float(iVar3) / 32f));
	iVar5 = ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam3, iVar6))
			{
				unk_0x5D96D8530B3D0904(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x0674E58A79778E99(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_41(var uParam0, int iParam1, int iParam2)
{
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = floor((to_float(iVar4) / 32f));
	iVar6 = ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0x5D96D8530B3D0904(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_42(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_43(int iParam0)
{
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_44()
{
	return func_42(92143537);
}

void func_45()
{
	bVar0 = true;
	func_228();
	func_227();
	if ((((((func_226() || func_225()) || unk_0x590766B2AF637235()) || unk_0x68E4C123717127AB()) || unk_0x991B1F0980C62628()) || func_224(1)) || unk_0xE57E602827E07C9D())
	{
		bVar0 = false;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) && !unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2))
	{
		if (!func_223())
		{
			func_222(1);
			unk_0x5D96D8530B3D0904(&iLocal_1638, 13);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 13))
	{
		if (func_223())
		{
			func_222(0);
		}
		unk_0x0674E58A79778E99(&iLocal_1638, 13);
	}
	if (bVar0)
	{
		if (unk_0xB9132A06AE472728(0, 0) || unk_0x9A01369A10646AFE(0, 0))
		{
			iLocal_1696++;
			if (iLocal_1696 > 1)
			{
				iLocal_1696 = 0;
			}
			func_220(iLocal_1696);
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21) || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22))
		{
			if (((unk_0xB9132A06AE472728(0, 189) || unk_0x9A01369A10646AFE(0, 189)) || unk_0xB9132A06AE472728(0, 190)) || unk_0x9A01369A10646AFE(0, 190))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21))
				{
					unk_0x5D96D8530B3D0904(&iLocal_1638, 22);
					unk_0x0674E58A79778E99(&iLocal_1638, 21);
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22))
				{
					unk_0x5D96D8530B3D0904(&iLocal_1638, 21);
					unk_0x0674E58A79778E99(&iLocal_1638, 22);
				}
				unk_0x0674E58A79778E99(&iLocal_1638, 0);
			}
			if (unk_0xB9132A06AE472728(2, 202) || unk_0x9A01369A10646AFE(2, 202))
			{
				unk_0x0674E58A79778E99(&iLocal_1638, 21);
				unk_0x0674E58A79778E99(&iLocal_1638, 22);
				unk_0x0674E58A79778E99(&iLocal_1638, 0);
			}
		}
		else if (unk_0xB9132A06AE472728(0, 210) || unk_0x9A01369A10646AFE(0, 210))
		{
			unk_0x5D96D8530B3D0904(&iLocal_1638, 21);
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
			return;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_1639, 2))
	{
		if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
			unk_0x0674E58A79778E99(&iLocal_1639, 2);
		}
	}
	if (Global_262145.f_26043)
	{
		if (!func_329(&Local_2085))
		{
			func_6(&Local_2085, 1, 0);
		}
		else if (func_5(&Local_2085, 120000, 1))
		{
			func_219(1);
		}
	}
	if (!iLocal_2101)
	{
		iLocal_2103 = unk_0x2B6E0A53779D29EA();
		iLocal_2101 = 1;
	}
	if (!iLocal_2100)
	{
		iLocal_2102 = unk_0x2B6E0A53779D29EA();
		iLocal_2100 = 1;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 3))
	{
		if (iLocal_1642 == 4 || iLocal_1642 == 10)
		{
			if (!func_199(iLocal_2125))
			{
				func_196(27);
				return;
			}
		}
		if ((((bVar0 && (!unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) || unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2))) && !unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 0)) && unk_0xEAE0D21A50E6C7F4(iLocal_1638, 0)) && !(unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21) || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22)))
		{
			if (unk_0xBFC0798A6E3417F9(2, 201) || unk_0xBFC0798A6E3417F9(2, 208))
			{
				if (func_195())
				{
					if (iLocal_1642 == 4 || iLocal_1642 == 10)
					{
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (func_191() == 2)
							{
								func_190("CAS_MG_CTIME", -1);
							}
							else
							{
								func_190("CAS_MG_CBAN", -1);
							}
							unk_0x5D96D8530B3D0904(&iLocal_1638, 6);
						}
						func_196(27);
					}
				}
				else if (func_189() >= (Local_213[iLocal_2125].f_16 * iLocal_2128))
				{
					if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
					{
						unk_0x5D96D8530B3D0904(&iLocal_1638, 30);
						unk_0x0674E58A79778E99(&iLocal_1638, 5);
						if (unk_0xBFC0798A6E3417F9(2, 208))
						{
							func_188();
						}
						else
						{
							func_187();
						}
						func_186();
						unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
						unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
						unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
						unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 3);
						unk_0x0674E58A79778E99(&iLocal_1638, 24);
						unk_0x5D96D8530B3D0904(&iLocal_1638, 3);
						unk_0x0674E58A79778E99(&iLocal_1638, 0);
					}
				}
				else if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_190("SLOTS_NOMON", -1);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 3))
			{
				if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
				{
					if (unk_0xBFC0798A6E3417F9(2, 203) && !unk_0xEAE0D21A50E6C7F4(iLocal_1638, 27))
					{
						unk_0x5D96D8530B3D0904(&iLocal_1638, 30);
						func_178(1, -1, -1, -1);
						iLocal_2128++;
						if (iLocal_2128 > 5)
						{
							iLocal_2128 = 1;
						}
						func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
						if ((iLocal_1642 == 4 || iLocal_1642 == 10) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
						{
							func_176(0);
						}
						func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 5);
						func_178(1, -1, -1, -1);
						unk_0x0674E58A79778E99(&iLocal_1638, 0);
					}
					else if (!unk_0xBFC0798A6E3417F9(2, 203))
					{
						unk_0x0674E58A79778E99(&iLocal_1638, 27);
					}
					if (unk_0xB9132A06AE472728(2, 204) && !unk_0xEAE0D21A50E6C7F4(iLocal_1638, 28))
					{
						unk_0x5D96D8530B3D0904(&iLocal_1638, 30);
						func_178(1, -1, -1, -1);
						iLocal_2128 = 5;
						iVar8 = func_189();
						if (iVar8 < (Local_213[iLocal_2125].f_16 * iLocal_2128))
						{
							iLocal_2128 = floor(to_float((iVar8 / Local_213[iLocal_2125].f_16)));
						}
						if ((iLocal_1642 == 4 || iLocal_1642 == 10) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
						{
							func_176(1);
						}
						func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 6);
						func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
						unk_0x0674E58A79778E99(&iLocal_1638, 0);
					}
					else if (!unk_0xBFC0798A6E3417F9(2, 204))
					{
						unk_0x0674E58A79778E99(&iLocal_1638, 28);
					}
				}
				if (iLocal_1642 == 4 || iLocal_1642 == 10)
				{
					if (unk_0xB9132A06AE472728(2, 202) || unk_0x9A01369A10646AFE(2, 202))
					{
						func_196(27);
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 4))
		{
			if (func_171((Local_213[iLocal_2125].f_16 * iLocal_2128), &iLocal_2740, 0, 0))
			{
				if (iLocal_2740 == 2)
				{
					unk_0x5D96D8530B3D0904(&iLocal_1638, 4);
					Local_2085.f_5 = (Local_2085.f_5 + (Local_213[iLocal_2125].f_16 * iLocal_2128));
				}
				else
				{
					unk_0x0674E58A79778E99(&iLocal_1638, 3);
					unk_0x0674E58A79778E99(&iLocal_1638, 24);
					unk_0x0674E58A79778E99(&iLocal_1638, 4);
					unk_0x0674E58A79778E99(&iLocal_1638, 5);
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
					unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 3);
					unk_0x0674E58A79778E99(&iLocal_1638, 0);
					unk_0x5D96D8530B3D0904(&iLocal_1639, 2);
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						func_190("SLOTS_FAILTR", -1);
					}
					func_168(10);
				}
				iLocal_2740 = 0;
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 5))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 3))
			{
				if (((iLocal_1642 == 8 || iLocal_1642 == 14) || iLocal_1642 == 9) || iLocal_1642 == 15)
				{
					if (func_33() > 0,99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2044168827))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 0))
						{
							unk_0x0674E58A79778E99(&iLocal_1638, 0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_1638, 5);
						unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 0))
					{
						func_167(0, 0);
						func_164(1, -1);
						unk_0x0674E58A79778E99(&iLocal_1638, 0);
					}
					unk_0x5D96D8530B3D0904(&iLocal_1638, 5);
					unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 24))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)))
			{
				func_14(iLocal_2125, &uLocal_2091, &Local_1348, &Local_213);
				unk_0x5D96D8530B3D0904(&iLocal_1638, 24);
			}
			else if (Local_2741.f_598[iLocal_2125] != unk_0xD803B885F5E47A62())
			{
				unk_0x0674E58A79778E99(&iLocal_1638, 3);
				unk_0x0674E58A79778E99(&iLocal_1638, 24);
				unk_0x0674E58A79778E99(&iLocal_1638, 4);
				unk_0x0674E58A79778E99(&iLocal_1638, 5);
				unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
				unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
				unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
				unk_0x0674E58A79778E99(&iLocal_1638, 0);
				unk_0x5D96D8530B3D0904(&iLocal_1639, 2);
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_190("SLOTS_FAILTR", -1);
				}
				func_168(10);
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 1))
			{
				Local_213[iLocal_2125] = func_162(iLocal_2125, Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]], 0);
				Local_213[iLocal_2125].f_1 = func_160(iLocal_2125, Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]], uLocal_2091.f_8);
				if (Local_213[iLocal_2125] > 0)
				{
					if (func_122(Local_213[iLocal_2125], &iLocal_2740, 0))
					{
						if (Local_213[iLocal_2125].f_1 > 0)
						{
							func_68(Local_213[iLocal_2125].f_1);
						}
						iVar7 = 0;
						while (iVar7 < 3)
						{
							Local_3401[unk_0xD803B885F5E47A62()].f_5[iVar7] = uLocal_2091.f_4[iVar7];
							Local_3401[unk_0xD803B885F5E47A62()].f_1[iVar7] = uLocal_2091[iVar7];
							iVar7++;
						}
						Local_3401[unk_0xD803B885F5E47A62()].f_9 = uLocal_2091.f_8;
						func_58();
						unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
						iLocal_2740 = 0;
					}
				}
				else
				{
					iVar7 = 0;
					while (iVar7 < 3)
					{
						Local_3401[unk_0xD803B885F5E47A62()].f_5[iVar7] = uLocal_2091.f_4[iVar7];
						Local_3401[unk_0xD803B885F5E47A62()].f_1[iVar7] = uLocal_2091[iVar7];
						iVar7++;
					}
					Local_3401[unk_0xD803B885F5E47A62()].f_9 = uLocal_2091.f_8;
					unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
					func_58();
					func_53((Local_213[iLocal_2125].f_16 * iLocal_2128));
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) || unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2))
			{
				if (Local_213[iLocal_2125] > 0)
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 16))
					{
						func_168(22);
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 14))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 29))
						{
							func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 4);
						}
						else
						{
							func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 3);
						}
						func_168(19);
					}
					else
					{
						func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 2);
						func_168(18);
					}
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 1) };
					func_50(&Var1);
					iVar9 = func_48(Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]]);
					if (iVar9 == 6)
					{
						func_47(Local_213[iLocal_2125].f_17, Local_213[iLocal_2125]);
					}
					func_178(2, iVar9, Local_213[iLocal_2125], Local_213[iLocal_2125].f_1);
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 15))
					{
						func_168(24);
					}
					else
					{
						func_168(23);
					}
					func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 1);
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 0) };
					func_50(&Var1);
				}
				func_46(Local_213[iLocal_2125]);
				unk_0x0674E58A79778E99(&iLocal_1638, 3);
				unk_0x0674E58A79778E99(&iLocal_1638, 4);
				unk_0x0674E58A79778E99(&iLocal_1638, 5);
				unk_0x0674E58A79778E99(&iLocal_1638, 24);
			}
		}
	}
}

void func_46(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_2104, "SET_LAST_WIN");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 4);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 5);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 6);
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 7);
			break;
		
		case 5:
			if (iParam1 >= 1000000)
			{
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 3);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 10);
			}
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 8);
			break;
		
		case 7:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 2);
			break;
		
		case 8:
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 9);
			break;
	}
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == iParam1 && iParam1 == iParam2)
	{
		return func_49(iParam0, 3);
	}
	else
	{
		if (iParam0 == 7)
		{
			iVar0++;
		}
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			return func_49(7, iVar0);
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			if (iParam1 == 3)
			{
				return 7;
			}
			else if (iParam1 == 2)
			{
				return 8;
			}
			else if (iParam1 == 1)
			{
				return 9;
			}
			break;
	}
	return 0;
}

void func_50(char* sParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_2104, "SET_MESSAGE");
	func_51(sParam0);
	unk_0x7E60D21B163E9D56();
}

void func_51(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

struct<6> func_52(int iParam0, bool bParam1)
{
	StringCopy(&Var0, "SLOTS_MES", 24);
	iVar6 = unk_0x09AC81E49EA267F7(1, 17);
	if (bParam1)
	{
		StringConCat(&Var0, "P", 24);
	}
	else
	{
		StringConCat(&Var0, "N", 24);
	}
	StringIntConCat(&Var0, iParam0, 24);
	if (iVar6 < 10)
	{
		StringConCat(&Var0, "0", 24);
		StringIntConCat(&Var0, iVar6, 24);
	}
	else
	{
		StringIntConCat(&Var0, iVar6, 24);
	}
	return Var0;
}

void func_53(int iParam0)
{
	iVar0 = func_57();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_56();
	if (iVar0 == 0)
	{
		func_55();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_54();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_36(-1274895349, Global_262145.f_26398);
		func_54();
		Global_2460613 = 1;
	}
	else
	{
		func_36(-1274895349, (iVar2 - iParam0));
	}
}

void func_54()
{
	func_55();
}

void func_55()
{
	func_36(2026157635, unk_0xDD0E7998AE8AD485());
}

int func_56()
{
	return func_42(-1274895349);
}

int func_57()
{
	return func_42(2026157635);
}

void func_58()
{
	if (Global_262145.f_26043)
	{
		if (Local_213[iLocal_2125] > 0)
		{
			Local_2085.f_3++;
		}
		else
		{
			Local_2085.f_4++;
		}
		Local_2085.f_2 = (Local_2085.f_2 + (Local_213[iLocal_2125] - (iLocal_2128 * Local_213[iLocal_2125].f_16)));
	}
	if (Global_262145.f_26037)
	{
		Var0 = -1867894674;
		Var0.f_1 = -1125105727;
		Var0.f_2 = iLocal_2125;
		if (func_195())
		{
			switch (func_191())
			{
				case 0:
					Var0.f_4 = unk_0x12AB0310C2281427("win cutoff");
					break;
				
				case 1:
					Var0.f_4 = unk_0x12AB0310C2281427("loss cutoff");
					break;
				
				case 2:
					Var0.f_4 = unk_0x12AB0310C2281427("time cutoff");
					break;
			}
		}
		else if (Local_213[iLocal_2125] > 0)
		{
			Var0.f_4 = -562306862;
		}
		else
		{
			Var0.f_4 = -1851302466;
		}
		Var0.f_6 = (Local_213[iLocal_2125] - (iLocal_2128 * Local_213[iLocal_2125].f_16));
		Var0.f_7 = func_189();
		Var0.f_10 = (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 20) || unk_0xEAE0D21A50E6C7F4(iLocal_1639, 1));
		Var0.f_11 = func_67(unk_0xD803B885F5E47A62());
		Var0.f_12 = (iLocal_2128 * Local_213[iLocal_2125].f_16);
		Var0.f_14 = Local_213[iLocal_2125];
		if (iLocal_2128 == 5)
		{
			Var0.f_5 = 1;
		}
		else
		{
			Var0.f_5 = 0;
		}
		Var0.f_15 = Local_213[iLocal_2125] > 0;
		Var0.f_17 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iLocal_2102, unk_0x2B6E0A53779D29EA()));
		Var0.f_18 = unk_0xBFF81ED3B99522C7();
		if (unk_0x0D03A641486A2001() != func_66())
		{
			Var0.f_19 = unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
		}
		Var0.f_21 = Local_213[iLocal_2125].f_17;
		if (func_67(unk_0xD803B885F5E47A62()))
		{
			Var0.f_20 = 1983458449;
		}
		else if (func_65())
		{
			Var0.f_20 = 1334658487;
		}
		else if (func_59())
		{
			Var0.f_20 = 980726932;
		}
		else
		{
			Var0.f_20 = 939907746;
		}
		iLocal_2100 = 0;
		unk_0x10A475FC1BD6FBDD(&Var0);
	}
}

int func_59()
{
	if (func_63(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_62();
		if (iVar0 == func_61())
		{
			return 0;
		}
		else
		{
			return func_60(iVar0);
		}
	}
	return 0;
}

bool func_60(int iParam0)
{
	if (iParam0 == func_61())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_1, 18);
}

int func_61()
{
	return -1;
}

int func_62()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

bool func_63(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_64(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_61();
}

int func_64(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (Global_1628237[iParam0].f_11 != func_61())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_65()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_369.f_1, 18);
}

int func_66()
{
	return -1;
}

int func_67(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (Local_213[iLocal_2125].f_17 == 8)
	{
		if (iParam0 == 12)
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -1813897027, 25, false, false);
		}
		else
		{
			func_121(iParam0, &iVar0, &iVar1);
			unk_0x1968E14BDA1A158D(unk_0x16F2683693E537C9(), iVar0, iVar1);
		}
	}
	else if (Local_213[iLocal_2125].f_17 == 4)
	{
		iLocal_212 = -1;
		iVar184 = 0;
		while (iVar184 < 36)
		{
			func_118(iVar184, &(Var2[iVar183]));
			if (Var2[iVar183].f_7 == iParam0)
			{
				if (!func_115(Var2[iVar183], -1, -1))
				{
					iVar183++;
				}
			}
			iVar184++;
		}
		if (iVar183 > 0)
		{
			iVar185 = unk_0x09AC81E49EA267F7(0, iVar183);
			func_114(Var2[iVar185], 1, -1, 1);
			iLocal_212 = Var2[iVar185].f_8;
		}
		else
		{
			func_69(0, "SLOT MACHINE RP", -1827353931, 1223799452, Global_262145.f_27109, 1, -1, 0);
		}
	}
	unk_0x5D96D8530B3D0904(&iLocal_1638, 16);
	return 1;
}

var func_69(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_70(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_113(unk_0xD803B885F5E47A62()) || func_112(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_109() || func_105(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_104(sParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_90(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_79((func_89(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_90(1165, iVar1, -1);
				}
				func_73(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_71((func_72(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_71((func_72(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_71(int iParam0)
{
	if (func_103())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_36(-1804740956, iParam0);
	}
}

int func_72(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_42(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_42(-1804740956);
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	Var0 = { func_78(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_76(func_77(&Var0));
			if (iVar13 == 0)
			{
				func_75(&Global_1387915, iParam0);
				func_74(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_75(&Global_1387916, iParam0);
				func_74(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_75(&Global_1387917, iParam0);
				func_74(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_75(&Global_1387918, iParam0);
				func_74(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_75(&Global_1387919, iParam0);
				func_74(1894078811, Global_1387919);
			}
		}
	}
}

void func_74(int iParam0, int iParam1)
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

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_76(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_77(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_78(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_88(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_88(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_87(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_85(iParam0, 1);
		}
		func_84(639, iParam0, -1, 1);
		func_83(640, func_85(iParam0, 1), -1, 1, 0);
		Global_1388060[func_88(-1)] = iParam0;
		func_80(-1109644434, 7, 0);
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	if (func_82(iParam1, iParam2))
	{
		iVar0 = func_81();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_81()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_82(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_88(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_88(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_88(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_88(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_88(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_88(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_88(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_88(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_88(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_88(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_88(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_88(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_88(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_88(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_88(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_88(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_88(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_88(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_88(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_88(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_88(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_88(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_88(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_88(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_88(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_88(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_88(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_88(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_88(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_88(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_88(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_88(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_88(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_88(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_88(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_88(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_88(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_88(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_88(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_88(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_88(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_88(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_88(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_88(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_88(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_88(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_88(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_88(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_88(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_88(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_88(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_88(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_88(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_88(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_88(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_88(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_88(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_88(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_88(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_88(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_88(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_88(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_88(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_88(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_88(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_88(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_88(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_88(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_88(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_88(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_88(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_88(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_88(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_88(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_88(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_88(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_88(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_88(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_88(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_88(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_88(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_88(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_88(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_88(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_88(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_88(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_88(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_88(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_88(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_88(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_85(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_86(iParam0, 0);
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_87(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_88(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

int func_89(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_88(-1)];
			}
			else if (func_87(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_88(-1)];
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_92(iParam0, func_88(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_91(iParam0))
	{
		func_83(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_84(iParam0, iVar0, iParam2, 1);
	}
}

int func_91(int iParam0)
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

int func_92(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_88(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_93(int iParam0)
{
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_96(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_95(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_94(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_94(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_78(iParam0) };
		Global_2513231 = { func_78(iParam1) };
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

int func_96(int iParam0, int iParam1, int iParam2)
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

void func_97(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_95(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_98(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_94(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_94(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)
{
	return vdist(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_100(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_89(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_89(unk_0xD803B885F5E47A62());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_89(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_89(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	return func_106(func_107(iParam0));
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_108(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_108(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_111();
	}
	return func_110(Global_4456448.f_194990);
}

int func_110(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_111()
{
	return Global_2450632.f_17;
}

bool func_112(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_113(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_114(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
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

int func_115(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_117(iParam0, iParam1);
	uVar2 = func_116(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_116(int iParam0)
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

int func_117(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
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

void func_118(int iParam0, var uParam1)
{
	uParam1->f_8 = iParam0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 27147;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_27", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_27", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 1:
			*uParam1 = 27148;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_28", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_28", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 2:
			*uParam1 = 27149;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_33", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_33", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 3:
			*uParam1 = 27150;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_34", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_34", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 4:
			*uParam1 = 27151;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_35", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_35", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 5:
			*uParam1 = 27152;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_36", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_36", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 6:
			*uParam1 = 27153;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_37", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_37", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 7:
			*uParam1 = 27154;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_38", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_38", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 8:
			*uParam1 = 27155;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_39", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_39", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 9:
			*uParam1 = 27156;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_40", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_40", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 10:
			*uParam1 = 27157;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_41", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_41", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 11:
			*uParam1 = 27158;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_42", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_42", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 12:
			*uParam1 = 27159;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_6", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 13:
			*uParam1 = 27160;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_7", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 14:
			*uParam1 = 27161;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_8", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 15:
			*uParam1 = 27162;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_9", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 16:
			*uParam1 = 27163;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_10", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_10", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 17:
			*uParam1 = 27164;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_116", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_116", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 18:
			*uParam1 = 27165;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_117", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_117", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 19:
			*uParam1 = 27166;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_118", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_118", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 20:
			*uParam1 = 27167;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_119", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_119", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 21:
			*uParam1 = 27168;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_0", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_0", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 22:
			*uParam1 = 27169;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_1", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_1", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 23:
			*uParam1 = 27170;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_6", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 24:
			*uParam1 = 27171;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_7", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 25:
			*uParam1 = 27172;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_8", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 26:
			*uParam1 = 27173;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_9", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 27:
			*uParam1 = 27174;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_24", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_24", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 28:
			*uParam1 = 27175;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_25", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_25", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 29:
			*uParam1 = 27176;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_26", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_26", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 30:
			*uParam1 = 27177;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_29", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_29", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 31:
			*uParam1 = 27178;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_30", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_30", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 32:
			*uParam1 = 27179;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_31", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_31", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 33:
			*uParam1 = 27180;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_32", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_32", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 34:
			*uParam1 = 27181;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_43", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_43", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 35:
			*uParam1 = 27182;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_44", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_44", 24);
			}
			uParam1->f_7 = 3;
			break;
	}
}

bool func_119()
{
	return func_120(unk_0xD803B885F5E47A62());
}

int func_120(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1950175060;
			*uParam2 = 1500;
			break;
		
		case 2:
			*uParam1 = 1950175060;
			*uParam2 = 3000;
			break;
		
		case 3:
			*uParam1 = 1820140472;
			*uParam2 = 2000;
			break;
		
		case 4:
			*uParam1 = 1820140472;
			*uParam2 = 4000;
			break;
		
		case 5:
			*uParam1 = -1878508229;
			*uParam2 = 2000;
			break;
		
		case 6:
			*uParam1 = -1878508229;
			*uParam2 = 4000;
			break;
		
		case 7:
			*uParam1 = 218444191;
			*uParam2 = 2500;
			break;
		
		case 8:
			*uParam1 = 218444191;
			*uParam2 = 5000;
			break;
		
		case 9:
			*uParam1 = 1788949567;
			*uParam2 = 5500;
			break;
		
		case 10:
			*uParam1 = 1285032059;
			*uParam2 = 1000;
			break;
		
		case 11:
			*uParam1 = -1614428030;
			*uParam2 = 7000;
			break;
	}
}

bool func_122(int iParam0, int iParam1, int iParam2)
{
	return func_123(iParam0, 3, iParam1, iParam2, -1);
}

int func_123(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
	}
	else if (!func_159(iParam1))
	{
	}
	else
	{
		iVar0 = func_189();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_157();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_138(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_189() - Global_1696044);
			func_137(iVar4, 1);
			func_135();
			func_134();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_128(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_127(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_126(iParam1);
			Var5.f_1 = func_125(iParam1, iParam3, iParam4);
			if (func_124(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x62F8C2EDB26F57B3(-1) + unk_0x3A6D64D2A1228113());
			Var5.f_6 = Global_1696044;
			unk_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_126(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_127(int iParam0)
{
	iVar0 = func_57();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_56();
	if (iVar0 == 0)
	{
		func_55();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_54();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_36(-1274895349, Global_262145.f_26399);
		func_54();
		Global_2460613 = 1;
	}
	else
	{
		func_36(-1274895349, (iVar2 + iParam0));
	}
}

void func_128(int iParam0)
{
	iVar0 = func_133();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_132();
	if (iVar0 == 0)
	{
		func_131();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_130();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_129()
	{
		func_36(-1127742296, func_129());
		func_130();
	}
	else
	{
		func_36(-1127742296, (iVar2 + iParam0));
	}
}

int func_129()
{
	if (func_67(unk_0xD803B885F5E47A62()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_130()
{
	func_131();
}

void func_131()
{
	func_36(67083818, unk_0xDD0E7998AE8AD485());
}

int func_132()
{
	return func_42(-1127742296);
}

int func_133()
{
	return func_42(67083818);
}

void func_134()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6))
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 9);
		func_9(&Global_1696082, 0, 0);
	}
}

void func_135()
{
	if (func_136())
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 1);
	}
}

bool func_136()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6) || unk_0xEAE0D21A50E6C7F4(Global_1696079, 5));
}

void func_137(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_138(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_124(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_156())
	{
		if (*uParam0 == 0)
		{
			if (func_155() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_126(iParam1);
			iVar5 = -22148635;
			if (func_159(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_151(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_151(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_146())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_145(func_155()))
			{
				if (func_144(func_155()) == 2)
				{
					unk_0x7A87D9FAFCB10ADC(func_143(func_155()));
					if (func_159(iParam1))
					{
						unk_0xBAAADC9CD356B660(iVar0, iParam2);
					}
					else
					{
						unk_0xDB46ED1F703FD834(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_139(func_155());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
	{
		if (func_159(iParam1))
		{
			unk_0xBAAADC9CD356B660(iVar0, iParam2);
		}
		else
		{
			unk_0xDB46ED1F703FD834(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_139(int iParam0)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_142(iParam0))
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
		func_140(&(Global_4263954[iParam0]));
	}
}

void func_140(var uParam0)
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
	func_141(&(uParam0->f_14));
	func_141(&(uParam0->f_14.f_13));
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

void func_141(var uParam0)
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

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_144(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_146()
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_155();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_28()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_150(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_143(iVar2);
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
				func_147(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_147(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_149(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_148();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_148()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_149(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_150(int iParam0, int iParam1, int iParam2)
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

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_28()) || unk_0xDD2EE1F5DA6A6AB0())
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
	iVar1 = func_155();
	if (iVar1 == -1)
	{
		if (!func_153(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_152(iParam1))
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

int func_152(int iParam0)
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

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_28()) || unk_0xDD2EE1F5DA6A6AB0())
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
		*iParam0 = func_154(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_154(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_156())
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
				func_147(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_155()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_143(iVar0) != 2147483647)
		{
			if (func_142(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_156()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_157()
{
	iVar0 = (func_129() - func_132());
	iVar1 = (Global_262145.f_26395 - func_189());
	iVar2 = func_158();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_158()
{
	iVar0 = func_129();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0xECB8E23DD6EEDD19())
	{
		if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x3A6D64D2A1228113() + unk_0x62F8C2EDB26F57B3(-1));
		}
	}
	else if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x98DF7171A5F240EC();
	}
	return iVar1;
}

int func_159(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 >= 0 && func_8(iParam0, &Local_213))
	{
		if ((iParam1 == 7 && iParam2 == 7) && iParam3 == 7)
		{
			return func_161(Local_213[iParam0].f_17, iParam4);
		}
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 11;
					break;
				
				case 5:
					return 1;
					break;
				
				case 6:
					return 4;
					break;
				
				case 7:
					return 6;
					break;
				
				case 8:
					return 9;
					break;
				
				case 9:
					return 7;
					break;
				
				case 10:
					return 10;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 9:
					return 1;
					break;
				
				case 1:
				case 4:
				case 7:
				case 10:
					return 2;
					break;
				
				case 2:
				case 5:
				case 8:
				case 11:
					return 3;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	unk_0x0674E58A79778E99(&iLocal_1638, 14);
	unk_0x0674E58A79778E99(&iLocal_1638, 15);
	unk_0x0674E58A79778E99(&iLocal_1638, 16);
	unk_0x0674E58A79778E99(&iLocal_1638, 29);
	unk_0x0674E58A79778E99(&iLocal_1639, 0);
	if (iParam1 == iParam2 && iParam2 == iParam3)
	{
		iVar1 = func_163(iParam1, 3);
		iVar1 = (iVar1 * (iLocal_2128 * Local_213[iParam0].f_16));
		if (iParam1 >= 5)
		{
			unk_0x5D96D8530B3D0904(&iLocal_1638, 14);
			if (iParam1 == 6)
			{
				unk_0x5D96D8530B3D0904(&iLocal_1638, 29);
			}
		}
		else if (iParam1 >= 2)
		{
			unk_0x5D96D8530B3D0904(&iLocal_1639, 0);
		}
		return iVar1;
	}
	else
	{
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iParam3 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			if (bParam4)
			{
			}
			iVar1 = func_163(7, iVar0);
			iVar1 = (iVar1 * (iLocal_2128 * Local_213[iParam0].f_16));
			return iVar1;
		}
	}
	if (iParam1 == iParam2 && iParam1 >= 5)
	{
		unk_0x5D96D8530B3D0904(&iLocal_1638, 15);
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return Local_1348.f_278[1];
		
		case 2:
			return Local_1348.f_278[2];
		
		case 3:
			return Local_1348.f_278[3];
		
		case 4:
			return Local_1348.f_278[4];
		
		case 5:
			return Local_1348.f_278[5];
		
		case 6:
			return Local_1348.f_278[6];
		
		case 7:
			if (iParam1 == 3)
			{
				return Local_1348.f_278[7];
			}
			else if (iParam1 == 2)
			{
				return Local_1348.f_278[8];
			}
			else if (iParam1 == 1)
			{
				return Local_1348.f_278[9];
			}
			break;
	}
	return 0;
}

void func_164(bool bParam0, int iParam1)
{
	if (!func_166(&iVar0, 0, iParam1))
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
		unk_0x11CCD0ACA866C6C5(9, false);
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
		func_165(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_165(int iParam0)
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

int func_166(var uParam0, bool bParam1, int iParam2)
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

void func_167(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0,05f;
	Global_22348 = 0,05f;
	Global_22349 = 0,225f;
	fVar2 = unk_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0,225f;
	}
}

void func_168(int iParam0)
{
	func_169(iParam0, &Local_2106);
	iLocal_1641 = unk_0xF66E5A439A080021(vLocal_1643, vLocal_1646, 2, Local_2106.f_17, Local_2106.f_16, 1065353216, 0, 1065353216);
	if (iParam0 == 5 || iParam0 == 6)
	{
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_1641, func_328(), &Local_2106, 4f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 11 || iParam0 == 12)
	{
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_1641, func_328(), &Local_2106, 8f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 8 || iParam0 == 14)
	{
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_1641, func_328(), &Local_2106, 8f, -4f, 13, 16, 1148846080, 0);
	}
	else if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_1641, func_328(), &Local_2106, 2f, -1,5f, 13, 16, 2f, 0);
	}
	else
	{
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_1641, func_328(), &Local_2106, 2f, -1,5f, 13, 16, 1148846080, 0);
		if (iParam0 == 15 || iParam0 == 9)
		{
			StringCopy(&cVar0, "vw_prop_casino_slot_0", 24);
			StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
			StringConCat(&cVar0, "a", 24);
			iVar6 = unk_0x12AB0310C2281427(&cVar0);
			StringConCat(&Local_2106, "_SLOTMACHINE", 64);
			unk_0x9EAB36D213097B60(iLocal_1641, iVar6, vLocal_1643, func_328(), &Local_2106, 2f, -1,5f, 13);
		}
	}
	unk_0x914E6894744915F8(iLocal_1641);
	iLocal_1642 = iParam0;
}

void func_169(int iParam0, char* sParam1)
{
	sParam1->f_17 = 1;
	sParam1->f_16 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "enter_left", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "enter_right", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "enter_left_short", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "enter_right_short", 64);
			break;
		
		case 4:
			StringCopy(sParam1, "base_idle", 64);
			if (unk_0xA4FD7964FEE91ED8(0) == 4)
			{
				func_170(4, &Var0, 1, 0);
			}
			else
			{
				func_170(4, &Var0, 5, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 5:
			StringCopy(sParam1, "press_betone_a", 64);
			break;
		
		case 6:
			StringCopy(sParam1, "press_betmax_a", 64);
			break;
		
		case 7:
			StringCopy(sParam1, "press_autospin", 64);
			break;
		
		case 8:
			StringCopy(sParam1, "press_spin", 64);
			func_170(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 9:
			StringCopy(sParam1, "pull_spin", 64);
			func_170(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 10:
			StringCopy(sParam1, "betidle_idle", 64);
			if (unk_0xA4FD7964FEE91ED8(0) == 4)
			{
				func_170(10, &Var0, 1, 0);
			}
			else
			{
				func_170(10, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 11:
			StringCopy(sParam1, "betidle_press_betone", 64);
			func_170(11, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 12:
			StringCopy(sParam1, "betidle_press_betmax", 64);
			func_170(12, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 13:
			StringCopy(sParam1, "betidle_press_autospin", 64);
			break;
		
		case 14:
			StringCopy(sParam1, "betidle_press_spin", 64);
			func_170(14, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 15:
			StringCopy(sParam1, "betidle_pull_spin", 64);
			func_170(15, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 16:
			StringCopy(sParam1, "betidle_to_base_transition", 64);
			break;
		
		case 17:
			StringCopy(sParam1, "spinning", 64);
			func_170(17, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 18:
			StringCopy(sParam1, "win", 64);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1639, 0))
			{
				func_170(18, &Var0, 4, 0);
			}
			else
			{
				func_170(18, &Var0, 7, 4);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 19:
			StringCopy(sParam1, "win_big", 64);
			func_170(19, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 20:
			StringCopy(sParam1, "win_to_spinning_wheel", 64);
			break;
		
		case 21:
			StringCopy(sParam1, "spinning_wheel", 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 22:
			StringCopy(sParam1, "win_spinning_wheel", 64);
			break;
		
		case 23:
			StringCopy(sParam1, "lose", 64);
			iVar1 = unk_0x09AC81E49EA267F7(0, 10);
			if (iVar1 >= 9)
			{
				func_170(23, &Var0, 6, 3);
			}
			else
			{
				func_170(23, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 24:
			StringCopy(sParam1, "lose_cruel", 64);
			func_170(24, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 25:
			StringCopy(sParam1, "exit_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 26:
			StringCopy(sParam1, "betidle_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 27:
			StringCopy(sParam1, "exit_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 28:
			StringCopy(sParam1, "betidle_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
	}
}

void func_170(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	iVar1 = -1;
	if (iParam2 > 1)
	{
		iVar0 = unk_0x09AC81E49EA267F7(iParam3, iParam2);
		if (iParam0 == 4)
		{
			iVar1 = iLocal_1649;
		}
		else if (iParam0 == 10)
		{
			iVar1 = iLocal_1650;
		}
		if (iVar0 == iVar1)
		{
			iVar0++;
			if (iVar0 >= iParam2)
			{
				iVar0 = 0;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			StringCopy(sParam1, "_a", 4);
			break;
		
		case 1:
			StringCopy(sParam1, "_b", 4);
			break;
		
		case 2:
			StringCopy(sParam1, "_c", 4);
			break;
		
		case 3:
			StringCopy(sParam1, "_d", 4);
			break;
		
		case 4:
			StringCopy(sParam1, "_e", 4);
			break;
		
		case 5:
			StringCopy(sParam1, "_f", 4);
			break;
		
		case 6:
			StringCopy(sParam1, "_g", 4);
			break;
	}
	if (iParam0 == 4)
	{
		iLocal_1649 = iVar0;
	}
	else if (iParam0 == 10)
	{
		iLocal_1650 = iVar0;
	}
}

int func_171(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_156() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_173(iParam0))
	{
		return func_172(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_172(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 <= 0)
	{
	}
	else if (func_159(iParam1))
	{
	}
	else
	{
		iVar0 = func_189();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_156() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_138(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696044 - func_189());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_137(iVar2, 0);
			func_135();
			func_134();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_126(iParam1);
			Var3.f_1 = func_125(iParam1, iParam3, iParam4);
			if (func_124(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x62F8C2EDB26F57B3(-1) + unk_0x3A6D64D2A1228113());
			Var3.f_6 = Global_1696044;
			Var3.f_7 = iParam5;
			unk_0xB1C8602C4408B407(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_173(int iParam0)
{
	if (func_195())
	{
		return 0;
	}
	iVar0 = func_189();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	sVar0 = func_175(iParam1);
	switch (iParam2)
	{
		case 1:
			unk_0xCEAA091B490F8407(-1, "no_win", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 2:
			unk_0xCEAA091B490F8407(-1, "small_win", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 3:
			unk_0xCEAA091B490F8407(-1, "big_win", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 4:
			unk_0xCEAA091B490F8407(-1, "jackpot", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 5:
			unk_0xCEAA091B490F8407(-1, "place_bet", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 6:
			unk_0xCEAA091B490F8407(-1, "place_max_bet", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 7:
			unk_0xCEAA091B490F8407(-1, "spinning", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 8:
			unk_0xCEAA091B490F8407(-1, "start_spin", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 9:
			unk_0xCEAA091B490F8407(-1, "wheel_stop_clunk", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 10:
			unk_0xCEAA091B490F8407(-1, "wheel_stop_on_prize", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 11:
			unk_0xCEAA091B490F8407(-1, "welcome_stinger", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 12:
			unk_0xCEAA091B490F8407(-1, "spin_wheel", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
		
		case 13:
			unk_0xCEAA091B490F8407(-1, "spin_wheel_win", unk_0x9539D44F3E4492F6(iParam0), sVar0, true, 20);
			break;
	}
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_player_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_player_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_player_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_player_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_player_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_player_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_player_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_player_sounds";
		
		default:
	}
	return "";
}

void func_176(int iParam0)
{
	if (iParam0 == 0)
	{
		if (iLocal_1642 == 4 || (iLocal_1642 == 16 && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898)))
		{
			func_168(5);
		}
		else if (iLocal_1642 == 10 || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
		{
			func_168(11);
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_1642 == 4 || (iLocal_1642 == 16 && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898)))
		{
			func_168(6);
		}
		else if (iLocal_1642 == 10 || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
		{
			func_168(12);
		}
	}
}

void func_177(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_2104, "SET_BET");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iLocal_2082 != iParam0)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xA37A90C62806D848(1);
		}
		switch (iParam0)
		{
			case 1:
				func_185("SLOTS_HELPB", Local_213[iLocal_2125].f_16, Local_213[iLocal_2125].f_16 * 5);
				break;
			
			case 2:
			case 3:
				if (iParam1 == 1 && Local_213[iLocal_2125].f_17 == 8)
				{
					StringCopy(&vVar10, "SLOTS_HELPW1b", 24);
				}
				else
				{
					StringCopy(&vVar10, "SLOTS_HELPW", 24);
					if (iParam1 >= 0)
					{
						StringIntConCat(&vVar10, iParam1, 24);
					}
					if ((iParam1 == 9 || iParam1 == 8) || iParam1 == 7)
					{
						StringIntConCat(&vVar10, Local_213[iLocal_2125].f_17, 24);
					}
				}
				if (func_8(iLocal_2125, &Local_213))
				{
					if (iParam1 == 7 && iParam3 > 0)
					{
						if (Local_213[iLocal_2125].f_17 == 8)
						{
							if (iParam3 != 12)
							{
								func_121(iParam3, &iVar16, &iVar17);
								unk_0xB3BA56F8FC254632(unk_0x16F2683693E537C9(), iVar16, &iVar18);
								if (iVar18 < iVar17)
								{
									if (iVar16 == 1950175060)
									{
										StringIntConCat(&vVar10, 1, 24);
									}
									else if (iVar16 == 1820140472)
									{
										StringIntConCat(&vVar10, 3, 24);
									}
									else if (iVar16 == -1878508229)
									{
										StringIntConCat(&vVar10, 5, 24);
									}
									else if (iVar16 == 218444191)
									{
										StringIntConCat(&vVar10, 7, 24);
									}
									else
									{
										StringIntConCat(&vVar10, iParam3, 24);
									}
									StringConCat(&vVar10, "a", 24);
								}
								else
								{
									StringIntConCat(&vVar10, iParam3, 24);
									StringConCat(&vVar10, "b", 24);
								}
							}
							else
							{
								StringIntConCat(&vVar10, iParam3, 24);
							}
						}
						else if (Local_213[iLocal_2125].f_17 == 4)
						{
							bVar0 = true;
							if (iLocal_212 == -1)
							{
								StringCopy(&vVar10, "SLOTS_HELPW74b", 24);
								func_184(&vVar10, Global_262145.f_27109);
							}
							else
							{
								func_118(iLocal_212, &Var1);
								StringCopy(&vVar10, "SLOTS_HELPW74a", 24);
								func_179(&vVar10, &(Var1.f_1), iParam2);
							}
						}
					}
				}
				if (!bVar0)
				{
					func_184(&vVar10, iParam2);
				}
				func_9(&uLocal_2083, 1, 0);
				break;
		}
		iLocal_2082 = iParam0;
	}
}

int func_179(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_180(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_180(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_183() || !unk_0xA14BB9332558B949()) || !func_26(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_181(iParam2);
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

int func_181(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_182(iVar0);
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

void func_182(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_183()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_184(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

void func_185(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

void func_186()
{
	if (iLocal_2082 != 0)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xA37A90C62806D848(1);
		}
		iLocal_2082 = 0;
	}
}

void func_187()
{
	if (iLocal_1642 == 4 || (iLocal_1642 == 16 && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898)))
	{
		func_168(8);
	}
	else if (((iLocal_1642 == 10 || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
	{
		func_168(14);
	}
}

void func_188()
{
	if (iLocal_1642 == 4 || (iLocal_1642 == 16 && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898)))
	{
		func_168(9);
	}
	else if (((iLocal_1642 == 10 || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
	{
		func_168(15);
	}
}

int func_189()
{
	return func_92(8248, -1, 0);
}

void func_190(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_191()
{
	if (func_194() <= 0)
	{
		return 0;
	}
	if (func_193() <= 0)
	{
		return 1;
	}
	if (func_192())
	{
		return 2;
	}
	return 3;
}

bool func_192()
{
	return Global_1696061 != 0;
}

int func_193()
{
	return (Global_262145.f_26398 + func_56());
}

int func_194()
{
	return (Global_262145.f_26399 - func_56());
}

bool func_195()
{
	return func_191() != 3;
}

void func_196(int iParam0)
{
	func_219(0);
	if (iLocal_2125 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 23))
		{
			Var0 = { func_198(Local_213[iLocal_2125].f_17) };
			unk_0xF5A41F3D3B38EFE3(&Var0);
			unk_0x0674E58A79778E99(&iLocal_1638, 23);
		}
	}
	func_197(-1);
	unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
	unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
	unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
	unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 3);
	unk_0x0674E58A79778E99(&iLocal_1638, 3);
	unk_0x0674E58A79778E99(&iLocal_1638, 4);
	unk_0x0674E58A79778E99(&iLocal_1638, 5);
	unk_0x0674E58A79778E99(&iLocal_1638, 24);
	unk_0x0674E58A79778E99(&iLocal_1638, 21);
	unk_0x0674E58A79778E99(&iLocal_1638, 22);
	iLocal_2128 = 1;
	func_310(6);
	func_168(iParam0);
	func_186();
}

void func_197(int iParam0)
{
	if (iParam0 >= 0)
	{
		iLocal_2126 = iParam0;
	}
	iLocal_2125 = iParam0;
	Local_3401[unk_0xD803B885F5E47A62()] = iParam0;
	iLocal_2127 = -1;
}

struct<8> func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "CasinoUI_Slots_Angel", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "CasinoUI_Slots_Impotent", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "CasinoUI_Slots_Ranger", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "CasinoUI_Slots_Fame", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "CasinoUI_Slots_Deity", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "CasinoUI_Slots_Knife", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "CasinoUI_Slots_Diamond", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "CasinoUI_Slots_Evacuator", 32);
			break;
	}
	return Var0;
}

int func_199(int iParam0)
{
	if (func_218())
	{
		return 0;
	}
	if (func_217(0, &uVar7))
	{
		StringCopy(&vVar0, "SLOTS_REGBAN", 24);
		bVar6 = true;
	}
	else if (func_195())
	{
		if (func_191() == 2)
		{
			StringCopy(&vVar0, "CAS_MG_CTIME", 24);
			bVar6 = true;
		}
		else
		{
			StringCopy(&vVar0, "CAS_MG_CBAN", 24);
			bVar6 = true;
		}
	}
	else if (!func_65() && !func_59())
	{
		StringCopy(&vVar0, "CAS_MG_MEMB2", 24);
		bVar6 = true;
	}
	else if (func_189() <= 0)
	{
		StringCopy(&vVar0, "CAS_MG_NOCHIPS1", 24);
		bVar6 = true;
	}
	else if (func_189() < Local_213[iParam0].f_16)
	{
		StringCopy(&vVar0, "CAS_MG_LOWCHIPS1", 24);
		bVar6 = true;
	}
	else if ((((((((Global_262145.f_26171 || (Global_262145.f_26178 && Local_213[iParam0].f_17 == 1)) || (Global_262145.f_26176 && Local_213[iParam0].f_17 == 2)) || (Global_262145.f_26173 && Local_213[iParam0].f_17 == 3)) || (Global_262145.f_26174 && Local_213[iParam0].f_17 == 4)) || (Global_262145.f_26177 && Local_213[iParam0].f_17 == 5)) || (Global_262145.f_26175 && Local_213[iParam0].f_17 == 6)) || (Global_262145.f_26172 && Local_213[iParam0].f_17 == 7)) || (Global_262145.f_26179 && Local_213[iParam0].f_17 == 8))
	{
		StringCopy(&vVar0, "SLOTS_ENTERB", 24);
		bVar6 = true;
	}
	else if (func_215())
	{
		StringCopy(&vVar0, "SLOTS_ENTERB", 24);
		bVar6 = true;
	}
	if ((((func_214() || func_213()) || func_212()) || unk_0x757EF87A33649210()) || unk_0xD0BB2359EC70FC37())
	{
		bVar6 = true;
		unk_0x5D96D8530B3D0904(&iLocal_1638, 6);
	}
	if (func_206())
	{
		bVar6 = true;
		unk_0x5D96D8530B3D0904(&iLocal_1638, 6);
	}
	if (bVar6)
	{
		if (unk_0x7F8A39872A07D2CE(&vVar0, "CAS_MG_MEMB2"))
		{
			if (!func_204("CAS_MG_MEMB2", func_205(1)))
			{
				func_203("CAS_MG_MEMB2", func_205(1));
			}
			unk_0x5D96D8530B3D0904(&iLocal_1638, 6);
			if (unk_0xBFC0798A6E3417F9(2, 52))
			{
				unk_0xA37A90C62806D848(1);
				func_202();
				func_310(2);
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 6))
		{
			func_186();
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_190(&vVar0, -1);
				unk_0x5D96D8530B3D0904(&iLocal_1638, 6);
			}
		}
		if (iLocal_2124 != -1)
		{
			func_200(&iLocal_2124);
		}
		return 0;
	}
	return 1;
}

void func_200(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_201(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_201(int iParam0)
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

void func_202()
{
	if (!unk_0x7A7BDE279347E517(func_205(0), false, true, 0, -1, 0))
	{
		func_190("MAITRD_M_D0E", -1);
	}
	else if (func_60(unk_0xD803B885F5E47A62()))
	{
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 31))
	{
	}
	else if (Global_4264528 != 0)
	{
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1676377.f_5), 30);
	}
}

void func_203(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_204(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_205(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_206()
{
	if (func_63(unk_0xD803B885F5E47A62(), 1))
	{
		iVar0 = func_62();
		if (func_12(iVar0, 1, 1) && unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_108(unk_0xD803B885F5E47A62(), 0) && func_210(unk_0xD803B885F5E47A62())) || func_207(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (func_209(iParam0) != func_61())
	{
		return func_209(iParam0) == func_208(iParam0);
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_61();
}

int func_209(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_210(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_211(iParam0, 9);
	}
	return 0;
}

bool func_211(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_212()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_213()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_214()
{
	return Global_2450632.f_591;
}

int func_215()
{
	if ((func_216() != -1 && func_216() != 28) && func_216() != 17)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_968397;
}

int func_217(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x829DE4CDEA2FE156(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_2537071.f_6591;
}

void func_219(bool bParam0)
{
	if (Global_262145.f_26043)
	{
		Var0 = -1125105727;
		Var0.f_1 = iLocal_2125;
		if (func_195())
		{
			switch (func_191())
			{
				case 0:
					Var0.f_2 = unk_0x12AB0310C2281427("win cutoff");
					break;
				
				case 1:
					Var0.f_2 = unk_0x12AB0310C2281427("loss cutoff");
					break;
				
				case 2:
					Var0.f_2 = unk_0x12AB0310C2281427("time cutoff");
					break;
			}
		}
		else if (bParam0)
		{
			Var0.f_2 = 1330140418;
		}
		else
		{
			Var0.f_2 = 847129329;
		}
		Var0.f_3 = Local_2085.f_2;
		Var0.f_4 = func_189();
		if (bParam0)
		{
			Var0.f_5 = 120000;
		}
		else if (iLocal_2101)
		{
			Var0.f_5 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iLocal_2103, unk_0x2B6E0A53779D29EA()));
		}
		Var0.f_6 = (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 20) || unk_0xEAE0D21A50E6C7F4(iLocal_1639, 1));
		Var0.f_7 = Local_2085.f_5;
		Var0.f_10 = unk_0xBFF81ED3B99522C7();
		if (unk_0x0D03A641486A2001() != func_66())
		{
			Var0.f_11 = unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
		}
		Var0.f_12 = (Local_2085.f_3 + Local_2085.f_4);
		Var0.f_13 = Local_2085.f_3;
		Var0.f_14 = Local_2085.f_4;
		Var0.f_16 = Local_213[iLocal_2125].f_17;
		if (func_67(unk_0xD803B885F5E47A62()))
		{
			Var0.f_15 = 1983458449;
		}
		else if (func_65())
		{
			Var0.f_15 = 1334658487;
		}
		else if (func_59())
		{
			Var0.f_15 = 980726932;
		}
		else
		{
			Var0.f_15 = 939907746;
		}
		unk_0xA336E9247142A3CA(&Var0);
		func_3(&Local_2085);
		Local_2085.f_2 = 0;
		Local_2085.f_3 = 0;
		Local_2085.f_4 = 0;
		Local_2085.f_5 = 0;
		iLocal_2101 = 0;
	}
}

void func_220(int iParam0)
{
	func_221(iLocal_2125, &uVar0, &fVar3);
	switch (iParam0)
	{
		case 0:
			if (unk_0xA4FD7964FEE91ED8(0) != 4)
			{
				unk_0x398B6B43792F03FE(0, 4);
			}
			break;
		
		case 1:
			if (unk_0xA4FD7964FEE91ED8(0) != 0)
			{
				unk_0x398B6B43792F03FE(0, 0);
			}
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			break;
	}
	iLocal_1696 = iParam0;
}

void func_221(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100,483f, 230,4082f, -50,8409f };
			*fParam2 = 45f;
			break;
		
		case 1:
			*uParam1 = { 1100,939f, 231,0017f, -50,8409f };
			*fParam2 = 60f;
			break;
		
		case 2:
			*uParam1 = { 1101,221f, 231,6943f, -50,8409f };
			*fParam2 = 75f;
			break;
		
		case 3:
			*uParam1 = { 1101,323f, 232,4321f, -50,8409f };
			*fParam2 = 90f;
			break;
		
		case 4:
			*uParam1 = { 1101,229f, 233,1719f, -50,8409f };
			*fParam2 = 105f;
			break;
		
		case 5:
			*uParam1 = { 1108,938f, 239,4797f, -50,8409f };
			*fParam2 = -45f;
			break;
		
		case 6:
			*uParam1 = { 1109,536f, 239,0278f, -50,8409f };
			*fParam2 = -30f;
			break;
		
		case 7:
			*uParam1 = { 1110,229f, 238,7428f, -50,8409f };
			*fParam2 = -15f;
			break;
		
		case 8:
			*uParam1 = { 1110,974f, 238,642f, -50,8409f };
			*fParam2 = 0f;
			break;
		
		case 9:
			*uParam1 = { 1111,716f, 238,7384f, -50,8409f };
			*fParam2 = 15f;
			break;
		
		case 10:
			*uParam1 = { 1112,407f, 239,0216f, -50,8409f };
			*fParam2 = 30f;
			break;
		
		case 11:
			*uParam1 = { 1112,999f, 239,4742f, -50,8409f };
			*fParam2 = 45f;
			break;
		
		case 12:
			*uParam1 = { 1120,853f, 233,1621f, -50,8409f };
			*fParam2 = -105f;
			break;
		
		case 13:
			*uParam1 = { 1120,753f, 232,4272f, -50,8409f };
			*fParam2 = -90f;
			break;
		
		case 14:
			*uParam1 = { 1120,853f, 231,6886f, -50,8409f };
			*fParam2 = -75f;
			break;
		
		case 15:
			*uParam1 = { 1121,135f, 230,9999f, -50,8409f };
			*fParam2 = -60f;
			break;
		
		case 16:
			*uParam1 = { 1121,592f, 230,4106f, -50,8409f };
			*fParam2 = -45f;
			break;
		
		case 17:
			*uParam1 = { 1104,572f, 229,4451f, -50,8409f };
			*fParam2 = -36f;
			break;
		
		case 18:
			*uParam1 = { 1104,302f, 230,3183f, -50,8409f };
			*fParam2 = -108f;
			break;
		
		case 19:
			*uParam1 = { 1105,049f, 230,845f, -50,8409f };
			*fParam2 = 180f;
			break;
		
		case 20:
			*uParam1 = { 1105,781f, 230,2973f, -50,8409f };
			*fParam2 = 108f;
			break;
		
		case 21:
			*uParam1 = { 1105,486f, 229,4322f, -50,8409f };
			*fParam2 = 36f;
			break;
		
		case 22:
			*uParam1 = { 1108,005f, 233,9177f, -50,8409f };
			*fParam2 = -36f;
			break;
		
		case 23:
			*uParam1 = { 1107,735f, 234,7909f, -50,8409f };
			*fParam2 = -108f;
			break;
		
		case 24:
			*uParam1 = { 1108,482f, 235,3176f, -50,8409f };
			*fParam2 = 180f;
			break;
		
		case 25:
			*uParam1 = { 1109,214f, 234,7699f, -50,8409f };
			*fParam2 = 108f;
			break;
		
		case 26:
			*uParam1 = { 1108,919f, 233,9048f, -50,8409f };
			*fParam2 = 36f;
			break;
		
		case 27:
			*uParam1 = { 1113,64f, 233,6755f, -50,8409f };
			*fParam2 = -36f;
			break;
		
		case 28:
			*uParam1 = { 1113,37f, 234,5486f, -50,8409f };
			*fParam2 = -108f;
			break;
		
		case 29:
			*uParam1 = { 1114,117f, 235,0753f, -50,8409f };
			*fParam2 = 180f;
			break;
		
		case 30:
			*uParam1 = { 1114,848f, 234,5277f, -50,8409f };
			*fParam2 = 108f;
			break;
		
		case 31:
			*uParam1 = { 1114,554f, 233,6625f, -50,8409f };
			*fParam2 = 36f;
			break;
		
		case 32:
			*uParam1 = { 1116,662f, 228,8896f, -50,8409f };
			*fParam2 = -36f;
			break;
		
		case 33:
			*uParam1 = { 1116,392f, 229,7628f, -50,8409f };
			*fParam2 = -108f;
			break;
		
		case 34:
			*uParam1 = { 1117,139f, 230,2895f, -50,8409f };
			*fParam2 = 180f;
			break;
		
		case 35:
			*uParam1 = { 1117,871f, 229,7419f, -50,8409f };
			*fParam2 = 108f;
			break;
		
		case 36:
			*uParam1 = { 1117,576f, 228,8767f, -50,8409f };
			*fParam2 = 36f;
			break;
		
		case 37:
			*uParam1 = { 1129,64f, 250,451f, -52,0409f };
			*fParam2 = 180f;
			break;
		
		case 38:
			*uParam1 = { 1130,376f, 250,3577f, -52,0409f };
			*fParam2 = 165f;
			break;
		
		case 39:
			*uParam1 = { 1131,062f, 250,0776f, -52,0409f };
			*fParam2 = 150f;
			break;
		
		case 40:
			*uParam1 = { 1131,655f, 249,6264f, -52,0409f };
			*fParam2 = 135f;
			break;
		
		case 41:
			*uParam1 = { 1132,109f, 249,0355f, -52,0409f };
			*fParam2 = 120f;
			break;
		
		case 42:
			*uParam1 = { 1132,396f, 248,3382f, -52,0409f };
			*fParam2 = 105f;
			break;
		
		case 43:
			*uParam1 = { 1132,492f, 247,5984f, -52,0409f };
			*fParam2 = 90f;
			break;
		
		case 44:
			*uParam1 = { 1133,952f, 256,1037f, -52,0409f };
			*fParam2 = -45f;
			break;
		
		case 45:
			*uParam1 = { 1133,827f, 256,9098f, -52,0409f };
			*fParam2 = -117f;
			break;
		
		case 46:
			*uParam1 = { 1134,556f, 257,2778f, -52,0409f };
			*fParam2 = 171f;
			break;
		
		case 47:
			*uParam1 = { 1135,132f, 256,699f, -52,0409f };
			*fParam2 = 99f;
			break;
		
		case 48:
			*uParam1 = { 1134,759f, 255,9734f, -52,0409f };
			*fParam2 = 27f;
			break;
		
		case 49:
			*uParam1 = { 1138,195f, 251,8611f, -52,0409f };
			*fParam2 = -45f;
			break;
		
		case 50:
			*uParam1 = { 1138,07f, 252,6677f, -52,0409f };
			*fParam2 = -117f;
			break;
		
		case 51:
			*uParam1 = { 1138,799f, 253,0363f, -52,0409f };
			*fParam2 = 171f;
			break;
		
		case 52:
			*uParam1 = { 1139,372f, 252,4563f, -52,0409f };
			*fParam2 = 99f;
			break;
		
		case 53:
			*uParam1 = { 1139f, 251,7306f, -52,0409f };
			*fParam2 = 27f;
			break;
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1696079, 2);
	}
}

bool func_223()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1696079, 2);
}

bool func_224(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_225()
{
	return Global_73825;
}

bool func_226()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

void func_227()
{
	if (iLocal_1696 == 0 && unk_0xA4FD7964FEE91ED8(0) == 4)
	{
	}
}

void func_228()
{
	if (iLocal_1642 == 10)
	{
		if (!func_329(&uLocal_1698))
		{
			func_6(&uLocal_1698, 1, 0);
		}
		else if (func_5(&uLocal_1698, 10000, 1))
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
			func_168(16);
			return;
		}
	}
	else
	{
		func_3(&uLocal_1698);
	}
	iVar0 = unk_0xF958843510932FF6(iLocal_1641);
	if (unk_0x69DF961355195C3C(iVar0))
	{
		if (unk_0xA45992A6CE82FB43(iVar0) >= 0,99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (iLocal_1642 == 4 || iLocal_1642 == 16)
		{
			func_168(4);
		}
		else if (iLocal_1642 == 10)
		{
			func_168(10);
		}
		else if (((((iLocal_1642 == 5 || iLocal_1642 == 6) || iLocal_1642 == 7) || iLocal_1642 == 11) || iLocal_1642 == 12) || iLocal_1642 == 13)
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
			func_168(10);
		}
		else if ((((iLocal_1642 == 18 || iLocal_1642 == 19) || iLocal_1642 == 23) || iLocal_1642 == 24) || iLocal_1642 == 22)
		{
			func_168(10);
		}
		else if (iLocal_1642 == 20)
		{
			func_168(21);
		}
		else if (((iLocal_1642 == 8 || iLocal_1642 == 9) || iLocal_1642 == 14) || iLocal_1642 == 15)
		{
			func_168(17);
		}
	}
}

void func_229()
{
	if (unk_0x91E3F625EF57450D(0))
	{
		if (!iLocal_1697)
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
		}
		iLocal_1697 = 1;
	}
	else
	{
		if (iLocal_1697)
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 0);
		}
		iLocal_1697 = 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 0))
	{
		if (((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 25))
			{
				unk_0x0674E58A79778E99(&iLocal_1638, 0);
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_1638, 25);
	}
	if (iLocal_2125 >= 0 && (iLocal_1637 == 5 || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 31)))
	{
		func_273();
		if ((!unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 0) && !unk_0xEAE0D21A50E6C7F4(iLocal_1638, 3)) && (((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12))
		{
			if (!func_329(&uLocal_2083) || func_5(&uLocal_2083, 5000, 1))
			{
				func_178(1, -1, -1, -1);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 0))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21) || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22))
			{
				MemCopy(&vVar0, {func_198(Local_213[iLocal_2125].f_17)}, 6);
				unk_0x0D3BE1DE0262A012(&vVar0, false);
				unk_0x5D96D8530B3D0904(&iLocal_1638, 23);
				if (func_271(0, -1, 0) && unk_0x27117E2CDD4D67C3(&vVar0))
				{
					func_167(0, 0);
					func_269(1, &vVar0, &vVar0);
					func_268(-1, 1, 1);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21))
					{
						func_267("SLOTS_RULEaT");
						StringCopy(&vVar0, "SLOTS_RULEa", 24);
						StringIntConCat(&vVar0, Local_213[iLocal_2125].f_17, 24);
						func_266(&vVar0, 0, 0);
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22))
					{
						func_267("SLOTS_RULEbT");
						func_266("SLOTS_RULEb", 0, 0);
						func_265(Local_213[iLocal_2125].f_16);
						func_265(Local_213[iLocal_2125].f_16 * 5);
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21))
					{
						func_264(1, 1, 2);
					}
					else
					{
						func_264(1, 2, 2);
					}
					func_263(202, "SLOTS_RULEBK", -1);
					func_262(8, "SLOTS_RULENEXT", -1);
					unk_0x5D96D8530B3D0904(&iLocal_1638, 0);
					func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
					func_238(1);
				}
			}
			else if (func_271(0, -1, 0))
			{
				func_167(0, 0);
				if (!unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 0) && (((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 31)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898)))
				{
					func_263(202, "SLOTS_EXIT", -1);
					func_237("SLOTS_SPIN", unk_0xF59058FCB716F903(2, 208, true), unk_0xF59058FCB716F903(2, 201, true), 0, 0);
					func_263(203, "SLOTS_BET", -1);
					if (iLocal_2128 < 5)
					{
						func_263(204, "SLOTS_BETM", -1);
					}
				}
				func_263(210, "SLOTS_RULEIN", -1);
				unk_0x5D96D8530B3D0904(&iLocal_1638, 0);
				func_230(0, -1, -1, 1, 0, 0, 1, 1, 0);
				func_238(1);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 21) || unk_0xEAE0D21A50E6C7F4(iLocal_1638, 22))
			{
				func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else
			{
				func_230(0, -1, -1, 1, 0, 0, 1, 1, 0);
			}
			func_238(1);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 0))
	{
		func_167(0, 0);
		func_164(1, -1);
		unk_0x0674E58A79778E99(&iLocal_1638, 0);
	}
}

void func_230(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_234(bParam4, bParam8))
	{
		return;
	}
	if (func_232())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_26(unk_0xD803B885F5E47A62(), 0))
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
					func_231(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_231(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_51(&(Global_22350.f_4964[iVar1]));
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
				func_231(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_51(&(Global_4268421.f_16));
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

void func_231(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_232()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_233())
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

int func_233()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

int func_234(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_236(8, -1) && func_235() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_235()
{
	return Global_1312812;
}

bool func_236(int iParam0, int iParam1)
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

void func_237(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (Global_22350.f_4769 >= 12)
	{
		return;
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam1, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam0, 16);
	Global_22350.f_4769++;
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam2, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
	Global_22350.f_4769++;
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam3, 64);
		StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
		Global_22350.f_4769++;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam4, 64);
		StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
		Global_22350.f_4769++;
	}
}

void func_238(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_239(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_234(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_260(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_259())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_259())
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
			func_255(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_254(29), 64);
					StringCopy(&cVar81, func_252(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_251(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_251(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_250();
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
					func_250();
					func_248((((Global_22347 + fParam5) - 0,00390625f) - func_249("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_250();
						func_248((((Global_22347 + fParam5) - 0,00390625f) - func_249("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_251(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_260(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_247(fVar42);
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
				func_251(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_247(fVar42);
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
					func_260(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_246(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_254(Global_22350.f_4768), func_252(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
					func_260(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_247(fVar42);
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
				func_251(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_247(fVar42);
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
					func_260(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_246(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_254(Global_4268421.f_67), func_252(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
			func_230(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
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
												if (func_260(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_260(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_246(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[(iVar22 + iVar28)]), func_252(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[(iVar22 + iVar28)]), func_252(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
											if (func_183() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_244(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_246(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
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
										if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_242((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
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
										if (func_260(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_241((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_260(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_260(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_254(Global_22350.f_4433[iVar22]), func_252(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_240(Global_22350.f_4433[iVar22])), (fVar37 * func_240(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
								if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_299(0);
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
		func_238(1);
	}
	unk_0xD59EF13BB60323B9();
}

float func_240(int iParam0)
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

void func_241(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_242(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

void func_243(bool bParam0)
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

void func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_245(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_245(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_246(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_247(float fParam0)
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

void func_248(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_249(char* sParam0, int iParam1, int iParam2)
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
	func_250();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_250()
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

void func_251(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_252(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_78(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_253(&uVar3);
			}
		}
		else
		{
			return func_253(&(Global_22350.f_7029[iParam0]));
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

var func_253(var uParam0)
{
	return uParam0;
}

char* func_254(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_78(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_253(&uVar0);
		}
		else
		{
			return func_253(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_255(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_258(Global_22350.f_5218, 1);
	}
	else
	{
		func_258(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_257(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_260(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_256(&(Global_22350.f_73[Global_22350.f_5220]));
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

float func_256(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_257(char* sParam0)
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
	func_244(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_258(int iParam0, bool bParam1)
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

int func_259()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_254(iParam0), 64);
	StringCopy(&cVar16, func_252(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_259())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_259())
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
		vVar37.x = (vVar37.x * (func_261(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_261(iParam0) / fVar34));
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

float func_261(int iParam0)
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

void func_262(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = unk_0xE32F7AC5E6DF304A(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_263(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_265(var uParam0)
{
	if (Global_22350.f_4763 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 2;
	Global_22350.f_4762++;
	Global_22350.f_4701[Global_22350.f_4763] = uParam0;
	Global_22350.f_4763++;
}

void func_266(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = unk_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_267(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_268(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_269(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_270(29, sParam1, sParam2);
}

void func_270(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

bool func_271(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_166(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_272(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_272(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_273()
{
	if (unk_0x83D8570832F172A7(Local_2104))
	{
		unk_0x89F18617A4C543B3(Local_2104, 1);
		unk_0x3039591AD3E735CE(Local_2104.f_1);
		unk_0xD9ACBBA59FD5A09E(4);
		unk_0x5DD950F92F816F03(1);
		unk_0xEF45C43067063F18(Local_2104, 0,401f, 0,09f, 0,805f, 0,195f, 255, 255, 255, 255, 0);
		unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
	}
}

void func_274(int iParam0)
{
	Global_1696054 = unk_0xDD0E7998AE8AD485();
	Global_1696071 = iParam0;
	if (!func_280())
	{
		func_278();
	}
	if (!func_277())
	{
		func_275();
	}
}

void func_275()
{
	func_36(-1040706016, unk_0xDD0E7998AE8AD485());
	func_276();
	func_35();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_276()
{
	func_36(-1959489725, 0);
	func_36(-1767815638, 0);
	func_36(-1983697810, 0);
	func_36(2071236561, 0);
	func_36(-569486077, 0);
	func_36(-806012719, 0);
	func_36(-1030054372, 0);
	func_36(611934680, 0);
	func_36(387434261, 0);
	func_36(92143537, 0);
	func_36(1599929969, 0);
}

bool func_277()
{
	return Global_1696068;
}

void func_278()
{
	func_36(937560627, unk_0xDD0E7998AE8AD485());
	func_37();
	func_279((unk_0xDD0E7998AE8AD485() + 86400));
	Global_1696067 = 1;
}

void func_279(int iParam0)
{
	Global_1696062 = iParam0;
}

bool func_280()
{
	return func_42(937560627) != 0;
}

int func_281()
{
	switch (iLocal_1640)
	{
		case 0:
			if (func_298())
			{
				if (func_297())
				{
					func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
					func_46(0);
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 1) };
					func_50(&Var1);
					func_296(Local_213[iLocal_2125].f_17);
					func_295(iLocal_2125, &vLocal_1643, &vLocal_1646);
					iLocal_1651 = func_284();
					unk_0x0674E58A79778E99(&iLocal_1638, 26);
					unk_0x5D96D8530B3D0904(&iLocal_1638, 26);
					unk_0x96167B03C5A77156(unk_0x16F2683693E537C9(), func_283(iLocal_1651), 1f, 7000, 0,05f, 0, func_282(iLocal_1651));
					unk_0x0674E58A79778E99(&iLocal_1638, 30);
					unk_0x0674E58A79778E99(&iLocal_1638, 31);
					iLocal_1640++;
				}
			}
			break;
		
		case 1:
			if (unk_0x0EB28750412C3A5A(func_99(unk_0xD803B885F5E47A62()), func_283(iLocal_1651), false) <= 0,25f)
			{
				unk_0x5D96D8530B3D0904(&iLocal_1638, 26);
			}
			if ((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 1) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 0) && !unk_0x03400AB61DCD2AD4(unk_0x16F2683693E537C9())) || (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 26) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 0))
			{
				if (unk_0xA4FD7964FEE91ED8(0) == 1 || unk_0xA4FD7964FEE91ED8(0) == 2)
				{
					unk_0x398B6B43792F03FE(0, 0);
				}
				if (unk_0xA4FD7964FEE91ED8(0) == 4)
				{
					unk_0xA78CDFD1AE3130A9(518572876);
				}
				func_168(iLocal_1651);
				iLocal_1640++;
			}
			break;
		
		case 2:
			iVar0 = unk_0xF958843510932FF6(iLocal_1641);
			unk_0xA78CDFD1AE3130A9(518572876);
			if (unk_0x69DF961355195C3C(iVar0))
			{
				if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -278874898))
				{
					unk_0x5D96D8530B3D0904(&iLocal_1638, 31);
					func_45();
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 30))
					{
						unk_0x0674E58A79778E99(&iLocal_1638, 30);
						unk_0x0674E58A79778E99(&iLocal_1638, 31);
						return 1;
					}
				}
				if (unk_0xA45992A6CE82FB43(iVar0) >= 0,99f)
				{
					iVar7 = 0;
					while (iVar7 < 4)
					{
						if (Local_1655[iVar7].f_1 != -1)
						{
							if (Local_2741.f_598[Local_1655[iVar7]] == unk_0xD803B885F5E47A62())
							{
								unk_0x55D0A2DB35045A35(Local_1655[iVar7].f_1);
								unk_0x43A06902454A1172(Local_1655[iVar7].f_1);
								Local_1655[iVar7].f_1 = -1;
							}
						}
						iVar7++;
					}
					func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 11);
					func_168(4);
					iLocal_1640++;
				}
			}
			break;
		
		case 3:
			unk_0xA78CDFD1AE3130A9(518572876);
			unk_0x0674E58A79778E99(&iLocal_1638, 30);
			unk_0x0674E58A79778E99(&iLocal_1638, 31);
			return 1;
			break;
	}
	return 0;
}

var func_282(int iParam0)
{
	func_169(iParam0, &Local_2106);
	vVar0 = { unk_0xEEB20D14BD38615E(func_328(), &Local_2106, vLocal_1643, vLocal_1646, 0,01f, 2) };
	return vVar0.z;
}

Vector3 func_283(int iParam0)
{
	func_169(iParam0, &Local_2106);
	return unk_0x1BB04F10296A1C5E(func_328(), &Local_2106, vLocal_1643, vLocal_1646, 0,01f, 2);
}

int func_284()
{
	fVar0 = 100f;
	if (2f > 0f)
	{
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x0EB28750412C3A5A(func_99(unk_0xD803B885F5E47A62()), func_283((0 + iVar2)), true) < fVar0 && unk_0x0EB28750412C3A5A(func_285(), func_283((0 + iVar2)), true) > 0,2f)
		{
			fVar0 = unk_0x0EB28750412C3A5A(func_99(unk_0xD803B885F5E47A62()), func_283((0 + iVar2)), true);
			iVar1 = (0 + iVar2);
		}
		iVar2++;
	}
	return iVar1;
}

Vector3 func_285()
{
	vVar0 = { 0f, 0f, 0f };
	iVar3 = Global_2514476;
	iVar4 = Global_2514400;
	bVar5 = func_294(iVar4);
	if (bVar5)
	{
		switch (iVar3)
		{
			case 83:
				vVar0 = { 0,3f, -0,85f, 0f };
				break;
			
			case 84:
				vVar0 = { 0,1f, -0,9f, 0f };
				break;
			
			case 85:
				vVar0 = { 0,1f, -0,9f, 0f };
				break;
			
			case 86:
				vVar0 = { 0,45f, -0,4f, 0f };
				break;
			
			case 88:
				vVar0 = { -0,55f, -0,54f, 0f };
				break;
			
			case 87:
				vVar0 = { -0,15f, -0,6f, 0f };
				break;
			
			case 181:
				vVar0 = { -0,5f, -0,65f, 0f };
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 83:
				vVar0 = { -0,3f, -0,65f, 0f };
				break;
			
			case 84:
				vVar0 = { -0,3f, -0,65f, 0f };
				break;
			
			case 85:
				vVar0 = { 0,6f, -0,6f, 0f };
				break;
			
			case 86:
				vVar0 = { 0f, -0,8f, 0f };
				break;
			
			case 88:
				vVar0 = { 0,5f, -0,45f, 0f };
				break;
			
			case 87:
				vVar0 = { -0,65f, -0,45f, 0f };
				break;
			}
	}
	return unk_0x8A5E176FF719A014(func_290(Global_2514398, 0), func_286(Global_2514398), vVar0);
}

float func_286(int iParam0)
{
	iVar0 = func_288(iParam0);
	return func_287(iVar0);
}

float func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 45f;
		
		case 1:
			return 60f;
		
		case 2:
			return 75f;
		
		case 3:
			return 90f;
		
		case 4:
			return 105f;
		
		case 5:
			return -45f;
		
		case 6:
			return -30f;
		
		case 7:
			return -15f;
		
		case 8:
			return 0f;
		
		case 9:
			return 15f;
		
		case 10:
			return 30f;
		
		case 11:
			return 45f;
		
		case 12:
			return -105f;
		
		case 13:
			return -90f;
		
		case 14:
			return -75f;
		
		case 15:
			return -60f;
		
		case 16:
			return -45f;
		
		case 17:
			return -36f;
		
		case 18:
			return -108f;
		
		case 19:
			return 180f;
		
		case 20:
			return 108f;
		
		case 21:
			return 36f;
		
		case 22:
			return -36f;
		
		case 23:
			return -108f;
		
		case 24:
			return 180f;
		
		case 25:
			return 108f;
		
		case 26:
			return 36f;
		
		case 27:
			return -36f;
		
		case 28:
			return -108f;
		
		case 29:
			return 180f;
		
		case 30:
			return 108f;
		
		case 31:
			return 36f;
		
		case 32:
			return -36f;
		
		case 33:
			return -108f;
		
		case 34:
			return 180f;
		
		case 35:
			return 108f;
		
		case 36:
			return 36f;
		
		case 37:
			return 180f;
		
		case 38:
			return 165f;
		
		case 39:
			return 150f;
		
		case 40:
			return 135f;
		
		case 41:
			return 120f;
		
		case 42:
			return 105f;
		
		case 43:
			return 90f;
		
		case 44:
			return -45f;
		
		case 45:
			return -117f;
		
		case 46:
			return 171f;
		
		case 47:
			return 99f;
		
		case 48:
			return 27f;
		
		case 49:
			return -45f;
		
		case 50:
			return -117f;
		
		case 51:
			return 171f;
		
		case 52:
			return 99f;
		
		case 53:
			return 27f;
		
		default:
	}
	return 0f;
}

int func_288(int iParam0)
{
	iVar0 = func_289(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (iVar1 < 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2514392, iVar1))
			{
				if (iVar2 == iVar0)
				{
					return iVar1;
				}
				else
				{
					iVar2++;
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_2514393, (iVar1 - 32)))
		{
			if (iVar2 == iVar0)
			{
				return iVar1;
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_289(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 79:
			iVar0 = 1;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 6:
			iVar0 = 4;
			break;
		
		case 77:
			iVar0 = 5;
			break;
		
		case 78:
			iVar0 = 6;
			break;
		
		case 80:
			iVar0 = 7;
			break;
		
		case 7:
			iVar0 = 8;
			break;
		
		case 36:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
	}
	return iVar0;
}

Vector3 func_290(int iParam0, int iParam1)
{
	iVar0 = func_288(iParam0);
	return func_291(iVar0, iParam1);
}

Vector3 func_291(int iParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			vVar0 = { 1101,01f, 229,876f, -50,8409f };
			break;
		
		case 1:
			vVar0 = { 1101,59f, 230,626f, -50,8409f };
			break;
		
		case 2:
			vVar0 = { 1101,95f, 231,501f, -50,8409f };
			break;
		
		case 3:
			vVar0 = { 1102,08f, 232,433f, -50,8409f };
			break;
		
		case 4:
			vVar0 = { 1101,96f, 233,367f, -50,8409f };
			break;
		
		case 5:
			vVar0 = { 1108,41f, 238,946f, -50,8409f };
			break;
		
		case 6:
			vVar0 = { 1109,16f, 238,376f, -50,8409f };
			break;
		
		case 7:
			vVar0 = { 1110,03f, 238,016f, -50,8409f };
			break;
		
		case 8:
			vVar0 = { 1110,97f, 237,89f, -50,8409f };
			break;
		
		case 9:
			vVar0 = { 1111,91f, 238,012f, -50,8409f };
			break;
		
		case 10:
			vVar0 = { 1112,78f, 238,371f, -50,8409f };
			break;
		
		case 11:
			vVar0 = { 1113,53f, 238,943f, -50,8409f };
			break;
		
		case 12:
			vVar0 = { 1120,13f, 233,355f, -50,8409f };
			break;
		
		case 13:
			vVar0 = { 1120f, 232,427f, -50,8409f };
			break;
		
		case 14:
			vVar0 = { 1120,13f, 231,494f, -50,8409f };
			break;
		
		case 15:
			vVar0 = { 1120,48f, 230,624f, -50,8409f };
			break;
		
		case 16:
			vVar0 = { 1121,06f, 229,878f, -50,8409f };
			break;
		
		case 17:
			vVar0 = { 1104,13f, 228,836f, -50,8409f };
			break;
		
		case 18:
			vVar0 = { 1103,59f, 230,55f, -50,8409f };
			break;
		
		case 19:
			vVar0 = { 1105,05f, 231,597f, -50,8409f };
			break;
		
		case 20:
			vVar0 = { 1106,5f, 230,53f, -50,8409f };
			break;
		
		case 21:
			vVar0 = { 1105,93f, 228,823f, -50,8409f };
			break;
		
		case 22:
			vVar0 = { 1107,56f, 233,308f, -50,8409f };
			break;
		
		case 23:
			vVar0 = { 1107,02f, 235,023f, -50,8409f };
			break;
		
		case 24:
			vVar0 = { 1108,48f, 236,07f, -50,8409f };
			break;
		
		case 25:
			vVar0 = { 1109,93f, 235,003f, -50,8409f };
			break;
		
		case 26:
			vVar0 = { 1109,36f, 233,297f, -50,8409f };
			break;
		
		case 27:
			vVar0 = { 1113,2f, 233,067f, -50,8409f };
			break;
		
		case 28:
			vVar0 = { 1112,65f, 234,78f, -50,8409f };
			break;
		
		case 29:
			vVar0 = { 1114,11f, 235,828f, -50,8409f };
			break;
		
		case 30:
			vVar0 = { 1115,56f, 234,76f, -50,8409f };
			break;
		
		case 31:
			vVar0 = { 1115f, 233,054f, -50,8409f };
			break;
		
		case 32:
			vVar0 = { 1116,22f, 228,28f, -50,8409f };
			break;
		
		case 33:
			vVar0 = { 1115,68f, 229,995f, -50,8409f };
			break;
		
		case 34:
			vVar0 = { 1117,14f, 231,042f, -50,8409f };
			break;
		
		case 35:
			vVar0 = { 1118,59f, 229,975f, -50,8409f };
			break;
		
		case 36:
			vVar0 = { 1118,02f, 228,269f, -50,8409f };
			break;
		
		case 37:
			vVar0 = { 1129,64f, 251,203f, -52,0409f };
			break;
		
		case 38:
			vVar0 = { 1130,57f, 251,085f, -52,0409f };
			break;
		
		case 39:
			vVar0 = { 1131,44f, 250,73f, -52,0409f };
			break;
		
		case 40:
			vVar0 = { 1132,19f, 250,159f, -52,0409f };
			break;
		
		case 41:
			vVar0 = { 1132,76f, 249,412f, -52,0409f };
			break;
		
		case 42:
			vVar0 = { 1133,12f, 248,533f, -52,0409f };
			break;
		
		case 43:
			vVar0 = { 1133,24f, 247,598f, -52,0409f };
			break;
		
		case 44:
			vVar0 = { 1133,42f, 255,572f, -52,0409f };
			break;
		
		case 45:
			vVar0 = { 1133,16f, 257,251f, -52,0409f };
			break;
		
		case 46:
			vVar0 = { 1134,67f, 258,021f, -52,0409f };
			break;
		
		case 47:
			vVar0 = { 1135,87f, 256,819f, -52,0409f };
			break;
		
		case 48:
			vVar0 = { 1135,1f, 255,303f, -52,0409f };
			break;
		
		case 49:
			vVar0 = { 1137,66f, 251,328f, -52,0409f };
			break;
		
		case 50:
			vVar0 = { 1137,4f, 253,008f, -52,0409f };
			break;
		
		case 51:
			vVar0 = { 1138,92f, 253,779f, -52,0409f };
			break;
		
		case 52:
			vVar0 = { 1140,12f, 252,574f, -52,0409f };
			break;
		
		case 53:
			vVar0 = { 1139,34f, 251,061f, -52,0409f };
			break;
	}
	if (!func_293(vVar0, 0f, 0f, 0f, 0))
	{
		vVar0 = { vVar0 + Vector(1f, 0f, 0f) };
		if (func_292(iParam1) && iParam1 != 38)
		{
			vVar0 = { vVar0 + Vector(0,0191f, 0f, 0f) };
		}
	}
	return vVar0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		
		default:
	}
	return 0;
}

bool func_293(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		
		default:
	}
	return 0;
}

void func_295(int iParam0, var uParam1, var uParam2)
{
	func_221(iParam0, uParam1, &fVar0);
	*uParam2 = { 0f, 0f, fVar0 };
}

void func_296(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 3:
			iVar0 = 3;
			break;
		
		case 4:
			iVar0 = 7;
			break;
		
		case 5:
			iVar0 = 4;
			break;
		
		case 6:
			iVar0 = 5;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 8;
			break;
	}
	unk_0x7E60C62A7CE58FC8(Local_2104, "SET_THEME");
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x7E60D21B163E9D56();
}

int func_297()
{
	StringCopy(&cVar0, "vw_Prop_Casino_Slot_0", 24);
	StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
	StringConCat(&cVar0, "A", 24);
	iVar6 = unk_0x12AB0310C2281427(&cVar0);
	StringCopy(&cVar0, "machine_0", 24);
	StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
	StringConCat(&cVar0, "a", 24);
	if (unk_0x83D8570832F172A7(Local_2104))
	{
		if (!unk_0xE6CD5C6925050049(&cVar0))
		{
			unk_0x268029E44B2B3E36(&cVar0, 0);
			if (!unk_0x55CB69E8157C5B54(iVar6))
			{
				unk_0x064E7408AD6E15E5(iVar6);
				if (Local_2104.f_1 == -1)
				{
					Local_2104.f_1 = unk_0x3FF702268B97B673(&cVar0);
				}
				return 1;
			}
			else
			{
				if (Local_2104.f_1 == -1)
				{
					Local_2104.f_1 = unk_0x3FF702268B97B673(&cVar0);
				}
				return 1;
			}
		}
		else if (!unk_0x55CB69E8157C5B54(iVar6))
		{
			unk_0x064E7408AD6E15E5(iVar6);
			if (Local_2104.f_1 == -1)
			{
				Local_2104.f_1 = unk_0x3FF702268B97B673(&cVar0);
			}
			return 1;
		}
		else
		{
			if (Local_2104.f_1 == -1)
			{
				Local_2104.f_1 = unk_0x3FF702268B97B673(&cVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_298()
{
	unk_0x5D96D8530B3D0904(&iLocal_1638, 18);
	unk_0x3F423BF5B8125A50(func_328());
	if (unk_0xB4AE0788C1587752(func_328()))
	{
		return 1;
	}
	return 0;
}

void func_299(int iParam0)
{
	if (func_305())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_304(0))
		{
			func_300(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_300(int iParam0)
{
	if (func_305())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_303())
		{
			func_302(1, 1);
		}
		else
		{
			func_302(0, 0);
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
	if (!func_301())
	{
		Global_19486.f_1 = 3;
	}
}

int func_301()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_302(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_304(0))
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

bool func_303()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_304(int iParam0)
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

bool func_305()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_306()
{
	return Global_4264528 == 1;
}

void func_307()
{
	MemCopy(&cVar0, {func_198(Local_213[iLocal_2125].f_17)}, 6);
	unk_0x0D3BE1DE0262A012(&cVar0, false);
	unk_0x5D96D8530B3D0904(&iLocal_1638, 23);
	if (func_271(0, -1, 0) && unk_0x27117E2CDD4D67C3(&cVar0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 19))
		{
			func_167(0, 0);
			func_269(1, &cVar0, &cVar0);
			StringCopy(&vVar6, "SLOTS_TITLE", 24);
			StringIntConCat(&vVar6, Local_213[iLocal_2125].f_17, 24);
			func_267(&vVar6);
			func_268(-1, 1, 1);
			func_266("SLOTS_DIS", 0, 0);
			StringCopy(&vVar6, "SLOTS_DIS1", 24);
			StringIntConCat(&vVar6, Local_213[iLocal_2125].f_17, 24);
			func_308(&vVar6);
			func_308("SLOTS_DIS2");
			func_308("SLOTS_DIS3");
			func_263(202, "SLOTS_EXIT", -1);
			func_263(201, "SLOTS_ACC", -1);
			unk_0x5D96D8530B3D0904(&iLocal_1638, 19);
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
		}
		func_238(1);
		func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0xB9132A06AE472728(2, 202) || unk_0x9A01369A10646AFE(2, 202))
		{
			iLocal_2127 = -1;
			func_197(-1);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 2))
			{
				if ((func_12(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x991B1F0980C62628()) && func_29())
				{
					func_17(unk_0xD803B885F5E47A62(), 1, 0, 0);
				}
				if (unk_0x0178C60FEA5C5A75())
				{
					unk_0xBFE31971E49FA500(true);
				}
				func_16(0);
				unk_0x0674E58A79778E99(&iLocal_1638, 2);
			}
			func_167(0, 0);
			func_164(1, -1);
			unk_0xF5A41F3D3B38EFE3(&cVar0);
			unk_0x0674E58A79778E99(&iLocal_1638, 23);
			unk_0x0674E58A79778E99(&iLocal_1638, 19);
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_310(0);
		}
		if (unk_0xB9132A06AE472728(2, 201) || unk_0x9A01369A10646AFE(2, 201))
		{
			func_167(0, 0);
			func_164(1, -1);
			unk_0xF5A41F3D3B38EFE3(&cVar0);
			unk_0x0674E58A79778E99(&iLocal_1638, 19);
			unk_0x0674E58A79778E99(&iLocal_1638, 23);
			if (func_8(iLocal_2125, &Local_213))
			{
				unk_0x5D96D8530B3D0904(&iLocal_1639, 1);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_1638, 20);
			}
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_310(4);
		}
	}
}

void func_308(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_309(int iParam0)
{
	Local_3401[unk_0xD803B885F5E47A62()] = iParam0;
	if (Local_2741.f_598[iParam0] != -1)
	{
		if (Local_2741.f_598[iParam0] == unk_0xD803B885F5E47A62())
		{
			func_197(iParam0);
			if (func_8(iParam0, &Local_213) && unk_0xEAE0D21A50E6C7F4(iLocal_1639, 1))
			{
				func_310(4);
			}
			else if (!func_8(iParam0, &Local_213) && unk_0xEAE0D21A50E6C7F4(iLocal_1638, 20))
			{
				func_310(4);
			}
			else
			{
				func_310(3);
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 1) && !func_218())
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_190("SLOTS_USED", -1);
					unk_0x5D96D8530B3D0904(&iLocal_1638, 1);
				}
			}
			iLocal_2127 = -1;
			func_197(-1);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 2))
			{
				if (func_12(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x991B1F0980C62628())
				{
					func_17(unk_0xD803B885F5E47A62(), 1, 0, 0);
				}
				if (unk_0x0178C60FEA5C5A75())
				{
					unk_0xBFE31971E49FA500(true);
				}
				func_16(0);
				unk_0x0674E58A79778E99(&iLocal_1638, 2);
			}
			func_310(0);
		}
	}
}

void func_310(int iParam0)
{
	iLocal_1637 = iParam0;
}

int func_311()
{
	if ((((((((((((((((func_12(unk_0xD803B885F5E47A62(), 1, 1) && func_325(unk_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2)) && !func_225()) && !unk_0x590766B2AF637235()) && !unk_0x68E4C123717127AB()) && !unk_0x991B1F0980C62628()) && !func_224(1)) && !func_226()) && !func_214()) && !func_212()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && !Global_2460715.f_12) && Global_1676371 != 31)
	{
		if (iLocal_2130 < 0)
		{
			iVar13 = 0;
			while (iVar13 < 8)
			{
				func_221(iLocal_2129, &vVar20, &fVar23);
				vVar0[0] = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0,0579063f, -0,256112f, -0,197113f) };
				vVar0[1] = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0,0289372f, -1,85613f, 2,75002f) };
				vVar7 = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0f, -0,4f, 1f) };
				vVar10 = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0f, -0,6f, 1f) };
				fVar23 = func_324(func_99(unk_0xD803B885F5E47A62()), vVar20, 1);
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar0[0], vVar0[1], 1,25f, 0, true, 0))
				{
					if ((func_323(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), fVar23, 45f) || func_319(unk_0x16F2683693E537C9(), vVar7, 45f)) || func_319(unk_0x16F2683693E537C9(), vVar10, 45f))
					{
						iLocal_2130 = iLocal_2129;
					}
				}
				iLocal_2129++;
				if (iLocal_2129 >= 54)
				{
					iLocal_2129 = 0;
				}
				iVar13++;
			}
		}
		else
		{
			func_221(iLocal_2130, &vVar20, &fVar23);
			vVar0[0] = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0,0579063f, -0,256112f, -0,197113f) };
			vVar0[1] = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0,0289372f, -1,85613f, 2,75002f) };
			vVar7 = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0f, -0,4f, 1f) };
			vVar10 = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0f, -0,6f, 1f) };
			fVar23 = func_324(func_99(unk_0xD803B885F5E47A62()), vVar20, 1);
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar0[0], vVar0[1], 1,25f, 0, true, 0) || ((!func_323(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), fVar23, 45f) && !func_319(unk_0x16F2683693E537C9(), vVar7, 45f)) && !func_319(unk_0x16F2683693E537C9(), vVar10, 45f)))
			{
				iLocal_2130 = -1;
			}
		}
		if (iLocal_2130 >= 0)
		{
			func_221(iLocal_2130, &vVar20, &fVar23);
			vVar0[0] = { unk_0x8A5E176FF719A014(vVar20, fVar23, 0f, -0,5f, 0,77f) };
			if (Local_2741.f_598[iLocal_2130] == -1 && !func_318(iLocal_2130))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 1))
				{
					unk_0x0674E58A79778E99(&iLocal_1638, 1);
				}
				if (func_199(iLocal_2130))
				{
					if (iLocal_2124 == -1)
					{
						StringCopy(&vVar14, "SLOTS_ENTER", 24);
						StringIntConCat(&vVar14, Local_213[iLocal_2130].f_17, 24);
						if (!func_65())
						{
							if (func_63(unk_0xD803B885F5E47A62(), 0))
							{
								iVar24 = func_62();
								if (func_60(iVar24))
								{
									if (func_317(iVar24) == 1)
									{
										StringConCat(&vVar14, "c", 24);
									}
									else if (func_316(iVar24))
									{
										StringConCat(&vVar14, "a", 24);
									}
									else
									{
										StringConCat(&vVar14, "b", 24);
									}
								}
							}
						}
						func_315(&iLocal_2124, 3, &vVar14, 0, 0, 0, 0);
					}
					if (func_314(iLocal_2124, 1))
					{
						if (iLocal_2124 != -1)
						{
							func_200(&iLocal_2124);
						}
						iLocal_2127 = iLocal_2130;
						func_17(unk_0xD803B885F5E47A62(), 0, 256, 0);
						unk_0xBFE31971E49FA500(false);
						func_16(1);
						unk_0x38C3A68D7861DCFD(2, 200, 1);
						unk_0x38C3A68D7861DCFD(2, 199, 1);
						unk_0x558EC149EB2BC0A2(0, 200);
						unk_0x558EC149EB2BC0A2(2, 200);
						unk_0x558EC149EB2BC0A2(0, 199);
						unk_0x558EC149EB2BC0A2(2, 199);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 2))
						{
							unk_0x5D96D8530B3D0904(&iLocal_1638, 2);
						}
						return 1;
					}
				}
			}
			else if (!unk_0xFEBC1E4EC9E001F0())
			{
				if (Local_2741.f_598[iLocal_2130] != unk_0xD803B885F5E47A62())
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 1) && !func_218())
					{
						func_190("SLOTS_USED", -1);
						unk_0x5D96D8530B3D0904(&iLocal_1638, 1);
					}
				}
			}
		}
		else
		{
			if (func_312())
			{
				unk_0xA37A90C62806D848(1);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 1))
			{
				unk_0x0674E58A79778E99(&iLocal_1638, 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 6))
			{
				unk_0x0674E58A79778E99(&iLocal_1638, 6);
			}
			if (iLocal_2124 != -1)
			{
				func_200(&iLocal_2124);
			}
		}
	}
	else
	{
		if (func_312())
		{
			unk_0xA37A90C62806D848(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 1))
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 6))
		{
			unk_0x0674E58A79778E99(&iLocal_1638, 6);
		}
		if (iLocal_2124 != -1)
		{
			func_200(&iLocal_2124);
		}
	}
	return 0;
}

int func_312()
{
	if ((func_313("SLOTS_NOMON") || func_313("SLOTS_FAILTR")) || func_313("SLOTS_USED"))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 6))
	{
		if (((((func_313("CAS_MG_CBAN") || func_313("CAS_MG_CTIME")) || func_313("CAS_MG_LOWCHIPS1")) || func_313("CAS_MG_NOCHIPS1")) || func_204("CAS_MG_MEMB2", func_205(1))) || func_313("SLOTS_REGBAN"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_313(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_314(int iParam0, bool bParam1)
{
	iVar0 = func_201(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_304(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

void func_315(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_200(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_316(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_317(int iParam0)
{
	if (func_63(iParam0, 1))
	{
		return Global_1628237[func_62()].f_11.f_450;
	}
	return -1;
}

int func_318(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2514392, iParam0);
	}
	else
	{
		iParam0 = (iParam0 - 32);
		return unk_0xEAE0D21A50E6C7F4(Global_2514393, iParam0);
	}
	return 0;
}

bool func_319(int iParam0, vector3 vParam1, float fParam4)
{
	return func_320(unk_0x68F4C0EC296D3901(iParam0, true), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam4);
}

bool func_320(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	fVar3 = func_321(func_322(vVar0), func_322(vParam4 - vParam0));
	return unk_0x3DCA5D50DD292443(fVar3) <= fParam7;
}

float func_321(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_322(vector3 vParam0)
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

int func_323(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

float func_324(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_325(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_327(iParam0);
	iVar1 = func_326(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_326(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

char* func_328()
{
	if (func_119())
	{
		return "anim_casino_a@amb@casino@games@slots@female";
	}
	return "anim_casino_a@amb@casino@games@slots@male";
}

bool func_329(var uParam0)
{
	return uParam0->f_1;
}

void func_330()
{
	func_341();
	func_229();
	func_339();
	func_337();
	func_332();
	func_331();
}

void func_331()
{
}

void func_332()
{
	Var15 = 3;
	Var15.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1696006[iVar0].f_1 >= 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_2408[func_11(Global_1696006[iVar0].f_1)], func_10(Global_1696006[iVar0].f_1)) && func_318(Global_1696006[iVar0].f_1))
			{
				unk_0x5D96D8530B3D0904(&(Local_2408[func_11(Global_1696006[iVar0].f_1)]), func_10(Global_1696006[iVar0].f_1));
			}
			if (Global_1696006[iVar0])
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_2408.f_3[func_11(Global_1696006[iVar0].f_1)], func_10(Global_1696006[iVar0].f_1)))
				{
					func_336(&Var15, Global_1696006[iVar0].f_2);
					func_9(&(Local_2408.f_6[Global_1696006[iVar0].f_1]), 0, 0);
					iVar1 = 0;
					while (iVar1 < 3)
					{
						Local_2408.f_115[Global_1696006[iVar0].f_1][iVar1] = Var15.f_4[iVar1];
						iVar1++;
					}
					unk_0x5D96D8530B3D0904(&(Local_2408.f_3[func_11(Global_1696006[iVar0].f_1)]), func_10(Global_1696006[iVar0].f_1));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_2408.f_3[func_11(iVar1)], func_10(iVar1)))
		{
			func_221(iVar1, &uVar3, &fVar6);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar7[iVar0] = 0;
				iVar11[iVar0] = 0;
				if (func_329(&(Local_2408.f_6[iVar1])))
				{
					if (func_5(&(Local_2408.f_6[iVar1]), (2000 + (750 * iVar0)), 0))
					{
						if (iVar0 > 0)
						{
							if (iVar11[(iVar0 - 1)])
							{
								if (func_329(&(Local_1702[iVar1][(iVar0 - 1)])))
								{
									if (func_5(&(Local_1702[iVar1][(iVar0 - 1)]), 150, 0))
									{
										iVar7[iVar0] = 1;
										if (Local_213[iVar1].f_10[iVar0] == -1f)
										{
											Local_213[iVar1].f_10[iVar0] = ((Local_2408.f_115[iVar1][iVar0] * 22,5f) + IntToFloat(floor((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
										}
									}
								}
								else
								{
									func_6(&(Local_1702[iVar1][(iVar0 - 1)]), 0, 0);
								}
							}
						}
						else
						{
							iVar7[iVar0] = 1;
							if (Local_213[iVar1].f_10[iVar0] == -1f)
							{
								Local_213[iVar1].f_10[iVar0] = ((Local_2408.f_115[iVar1][iVar0] * 22,5f) + IntToFloat(floor((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
				{
					if (Local_213[iVar1].f_6[iVar0] != Local_213[iVar1].f_2[iVar0])
					{
						if (!iVar7[iVar0])
						{
							func_335(iVar1, iVar0);
						}
						unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
						Local_213[iVar1].f_6[iVar0] = Local_213[iVar1].f_2[iVar0];
					}
				}
				if (iVar7[iVar0])
				{
					fVar24 = ((Local_2408.f_115[iVar1][iVar0] * 22,5f) - (Local_213[iVar1].f_2[iVar0] % 360f));
					if (unk_0x755FF954DAE327E1(fVar24) <= 20f || (Local_213[iVar1].f_10[iVar0] != -1f && Local_213[iVar1].f_2[iVar0] >= Local_213[iVar1].f_10[iVar0]))
					{
						if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22,5f))
						{
							func_333(iVar1, 9);
							if (Local_2408.f_115[iVar1][iVar0] == 6f)
							{
								func_333(iVar1, 10);
							}
						}
						Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22,5f);
						iVar11[iVar0] = 1;
						if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
						{
							unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
						}
					}
					else
					{
						Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * timestep()));
					}
				}
				else
				{
					Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * timestep()));
				}
				iVar0++;
			}
			if (!unk_0xEAE0D21A50E6C7F4(uLocal_1652[func_11(iVar1)], func_10(iVar1)))
			{
				func_333(iVar1, 7);
				func_333(iVar1, 8);
				unk_0x5D96D8530B3D0904(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
			}
			if (iVar11[2])
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Global_1696006[iVar2].f_1 == iVar1)
					{
						unk_0x0674E58A79778E99(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
						Local_213[iVar1].f_15 = -1f;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							Local_213[iVar1].f_10[iVar0] = -1f;
							if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
							{
								if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22,5f))
								{
									func_221(iVar1, &uVar3, &fVar6);
									Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22,5f);
									unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
								}
							}
							else
							{
								Local_213[iVar1].f_2[iVar0] = 0f;
							}
							iVar0++;
						}
						if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
						{
							Local_213[iVar1].f_14 = 0f;
							unk_0xC023D1C4BF532815(iLocal_2348[iVar1], 0f, 0f, fVar6, 2, 1);
						}
						func_3(&(Local_1702[iVar1][0]));
						func_3(&(Local_1702[iVar1][1]));
						func_3(&(Local_1973[iVar1]));
						Global_1696006[iVar2] = 0;
						func_3(&(Local_2408.f_6[Global_1696006[iVar2].f_1]));
						unk_0x0674E58A79778E99(&(Local_2408.f_3[func_11(Global_1696006[iVar2].f_1)]), func_10(Global_1696006[iVar2].f_1));
					}
					iVar2++;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_1696006[iVar2].f_1 == iVar1)
				{
					unk_0x0674E58A79778E99(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
					Local_213[iVar1].f_15 = -1f;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						Local_213[iVar1].f_10[iVar0] = -1f;
						if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
						{
							if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22,5f))
							{
								func_221(iVar1, &uVar3, &fVar6);
								Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22,5f);
								unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
							}
						}
						else
						{
							Local_213[iVar1].f_2[iVar0] = 0f;
						}
						iVar0++;
					}
					if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
					{
						Local_213[iVar1].f_14 = 0f;
						unk_0xC023D1C4BF532815(iLocal_2348[iVar1], 0f, 0f, fVar6, 2, 1);
					}
					func_3(&(Local_1702[iVar1][0]));
					func_3(&(Local_1702[iVar1][1]));
					func_3(&(Local_1973[iVar1]));
					func_3(&(Local_2408.f_6[Global_1696006[iVar2].f_1]));
					unk_0x0674E58A79778E99(&(Local_2408.f_3[func_11(Global_1696006[iVar2].f_1)]), func_10(Global_1696006[iVar2].f_1));
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_333(int iParam0, int iParam1)
{
	iVar0 = func_334(Local_213[iParam0].f_17);
	func_221(iParam0, &vVar1, &fVar4);
	vVar1 = { unk_0x8A5E176FF719A014(vVar1, fVar4, 0f, -0,4f, 1f) };
	switch (iParam1)
	{
		case 1:
			unk_0xEB819BD1E585E9CB(-1, "no_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 2:
			unk_0xEB819BD1E585E9CB(-1, "small_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 3:
			unk_0xEB819BD1E585E9CB(-1, "big_win", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 4:
			unk_0xEB819BD1E585E9CB(-1, "jackpot", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 5:
			unk_0xEB819BD1E585E9CB(-1, "place_bet", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 6:
			unk_0xEB819BD1E585E9CB(-1, "place_max_bet", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 7:
			unk_0xEB819BD1E585E9CB(-1, "spinning", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 8:
			unk_0xEB819BD1E585E9CB(-1, "start_spin", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 9:
			unk_0xEB819BD1E585E9CB(-1, "wheel_stop_clunk", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 10:
			unk_0xEB819BD1E585E9CB(-1, "wheel_stop_on_prize", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 11:
			unk_0xEB819BD1E585E9CB(-1, "welcome_stinger", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 12:
			unk_0xEB819BD1E585E9CB(-1, "spin_wheel", vVar1, iVar0, 0, 20, 0);
			break;
		
		case 13:
			unk_0xEB819BD1E585E9CB(-1, "spin_wheel_win", vVar1, iVar0, 0, 20, 0);
			break;
	}
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_npc_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_npc_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_npc_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_npc_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_npc_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_npc_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_npc_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_npc_sounds";
		
		default:
	}
	return "";
}

void func_335(int iParam0, int iParam1)
{
	if (Local_213[iParam0].f_6[iParam1] != 0f)
	{
		fVar0 = (Local_213[iParam0].f_2[iParam1] - Local_213[iParam0].f_6[iParam1]);
		fVar1 = (fVar0 % 22,5f);
		if (unk_0x755FF954DAE327E1(fVar1) <= 2,5f)
		{
			if (fVar1 < 0f)
			{
				Local_213[iParam0].f_2[iParam1] = (Local_213[iParam0].f_2[iParam1] - IntToFloat(unk_0x09AC81E49EA267F7(3, 8)));
			}
			else
			{
				Local_213[iParam0].f_2[iParam1] = (Local_213[iParam0].f_2[iParam1] + IntToFloat(unk_0x09AC81E49EA267F7(3, 8)));
			}
		}
	}
}

void func_336(var uParam0, int iParam1)
{
	uParam0->f_4[0] = 0f;
	uParam0->f_4[1] = 0f;
	uParam0->f_4[2] = 0f;
	switch (iParam1)
	{
		case 1:
		case 2:
			iVar2 = unk_0x09AC81E49EA267F7(1, 4);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (iVar0 != iVar14[0] && iVar0 != 7)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = unk_0x09AC81E49EA267F7(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 3:
		case 4:
		case 5:
			iVar2 = unk_0x09AC81E49EA267F7(0, 6);
			iVar14[0] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[0] || iVar14[0] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = unk_0x09AC81E49EA267F7(0, iVar13);
			iVar14[1] = iVar4[iVar2];
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[1] || iVar14[1] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = unk_0x09AC81E49EA267F7(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 6:
		case 7:
			iVar2 = unk_0x09AC81E49EA267F7(1, 3);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
		
		case 9:
			iVar2 = unk_0x09AC81E49EA267F7(5, 6);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = 0;
			break;
		
		case 8:
			iVar2 = unk_0x09AC81E49EA267F7(4, 5);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = 0;
		if (iVar14[iVar0] == 0)
		{
			iVar2 = unk_0x09AC81E49EA267F7(0, Local_1348.f_225);
			uParam0->f_4[iVar0] = (IntToFloat(iVar2) + 0,5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < Local_1348.f_225)
			{
				if (Local_1348.f_226[iVar0][iVar1] == iVar14[iVar0])
				{
					iVar3++;
				}
				iVar1++;
			}
			iVar2 = unk_0x09AC81E49EA267F7(0, iVar3);
			iVar3 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_1348.f_225)
			{
				if (Local_1348.f_226[iVar0][iVar1] == iVar14[iVar0])
				{
					if (iVar3 == iVar2)
					{
						uParam0->f_4[iVar0] = to_float(iVar1);
						iVar1 = Local_1348.f_225;
					}
					iVar3++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_337()
{
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_2408[func_11(iVar1)], func_10(iVar1)))
		{
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_2741.f_653[func_11(iVar1)], func_10(iVar1)) || ((iVar1 == iLocal_2125 && unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2)))
		{
			if (iVar1 == iLocal_2125 && unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar7[iVar0] = 0;
					iVar11[iVar0] = 0;
					if (func_329(&(Local_2741.f_489[iVar1])))
					{
						if (func_5(&(Local_2741.f_489[iVar1]), (2000 + (750 * iVar0)), 0))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_2741.f_656[func_11(iVar1)], func_10(iVar1)))
							{
								if (iVar0 > 0)
								{
									if (iVar11[(iVar0 - 1)])
									{
										if (func_329(&(Local_1702[iVar1][(iVar0 - 1)])))
										{
											if (func_5(&(Local_1702[iVar1][(iVar0 - 1)]), 150, 0))
											{
												iVar7[iVar0] = 1;
												if (Local_213[iVar1].f_10[iVar0] == -1f)
												{
													Local_213[iVar1].f_10[iVar0] = ((Local_2741.f_217[iVar1][iVar0] * 22,5f) + IntToFloat(floor((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
												}
											}
										}
										else
										{
											func_6(&(Local_1702[iVar1][(iVar0 - 1)]), 0, 0);
										}
									}
								}
								else
								{
									iVar7[iVar0] = 1;
									if (Local_213[iVar1].f_10[iVar0] == -1f)
									{
										Local_213[iVar1].f_10[iVar0] = ((Local_2741.f_217[iVar1][iVar0] * 22,5f) + IntToFloat(floor((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
					{
						if (!iVar7[iVar0])
						{
							func_335(iVar1, iVar0);
						}
						if (iLocal_2125 == iVar1)
						{
							if (!iVar7[iVar0])
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, (8 + iVar0)))
								{
									vVar3 = { unk_0x68F4C0EC296D3901(Local_2131[iVar1][iVar0], true) };
									vVar3.z = (vVar3.z - 10f);
									unk_0xA47B46945FF6DE74(Local_2131[iVar1][iVar0], vVar3, 1, false, 0, 1);
									if (unk_0xC844350D5D58C99A(iLocal_2403[iVar0]))
									{
										vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2403[iVar0], true) };
										vVar3.z = (vVar3.z + 10f);
										unk_0xA47B46945FF6DE74(iLocal_2403[iVar0], vVar3, 1, false, 0, 1);
										unk_0xF2BFB495D7D174E8(iLocal_2403[iVar0], unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
										unk_0x5D96D8530B3D0904(&iLocal_1638, (8 + iVar0));
									}
								}
							}
						}
						func_221(iVar1, &vVar3, &fVar6);
						unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
						if (iLocal_2125 == iVar1 && unk_0xC844350D5D58C99A(iLocal_2403[iVar0]))
						{
							unk_0xC023D1C4BF532815(iLocal_2403[iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
						}
						Local_213[iVar1].f_6[iVar0] = Local_213[iVar1].f_2[iVar0];
					}
					if (iVar7[iVar0])
					{
						fVar16 = ((Local_2741.f_217[iVar1][iVar0] * 22,5f) - (Local_213[iVar1].f_2[iVar0] % 360f));
						if (unk_0x755FF954DAE327E1(fVar16) <= 20f || (Local_213[iVar1].f_10[iVar0] != -1f && Local_213[iVar1].f_2[iVar0] >= Local_213[iVar1].f_10[iVar0]))
						{
							Local_213[iVar1].f_2[iVar0] = (Local_2741.f_217[iVar1][iVar0] * 22,5f);
							if (iLocal_2125 == iVar1)
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, (8 + iVar0)))
								{
									if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]) && unk_0xC844350D5D58C99A(iLocal_2403[iVar0]))
									{
										vVar3 = { unk_0x68F4C0EC296D3901(Local_2131[iVar1][iVar0], true) };
										vVar3.z = (vVar3.z + 10f);
										unk_0xA47B46945FF6DE74(Local_2131[iVar1][iVar0], vVar3, 1, false, 0, 1);
										unk_0xF2BFB495D7D174E8(Local_2131[iVar1][iVar0], unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
										vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2403[iVar0], true) };
										vVar3.z = (vVar3.z - 10f);
										unk_0xA47B46945FF6DE74(iLocal_2403[iVar0], vVar3, 1, false, 0, 1);
										unk_0x0674E58A79778E99(&iLocal_1638, (8 + iVar0));
									}
									func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 9);
									if (Local_1348.f_1[0][uLocal_2091[0]] == 6)
									{
										func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 10);
									}
								}
							}
							if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
							{
								iVar11[iVar0] = 1;
								unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
								if (iLocal_2125 == iVar1 && unk_0xC844350D5D58C99A(iLocal_2403[iVar0]))
								{
									unk_0xC023D1C4BF532815(iLocal_2403[iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
								}
							}
						}
						else
						{
							Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * timestep()));
						}
					}
					else
					{
						Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * timestep()));
					}
					iVar0++;
				}
				if (iVar1 == iLocal_2125)
				{
					if (!unk_0xEAE0D21A50E6C7F4(uLocal_1652[func_11(iVar1)], func_10(iVar1)))
					{
						func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 7);
						func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 8);
						unk_0x5D96D8530B3D0904(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
					}
				}
				if (func_338(iVar1, iVar11[2]))
				{
					if (!func_329(&(Local_1973[iVar1])))
					{
						func_6(&(Local_1973[iVar1]), 1, 0);
					}
					else if (func_5(&(Local_1973[iVar1]), 1000, 1) && !unk_0xEAE0D21A50E6C7F4(iLocal_1638, 12))
					{
						if (iLocal_2125 == iVar1)
						{
							if (iLocal_1642 == 17)
							{
								iVar2 = func_48(Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]]);
								func_178(3, iVar2, Local_213[iLocal_2125], -1);
								func_168(20);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 12))
							{
								unk_0x5D96D8530B3D0904(&iLocal_1638, 12);
							}
						}
					}
					else if (func_5(&(Local_1973[iVar1]), 1250, 1))
					{
						if (!func_5(&(Local_2741.f_489[iVar1]), func_7(iVar1), 0))
						{
							if (func_5(&(Local_2741.f_489[iVar1]), (func_7(iVar1) - 2000), 0))
							{
								bVar15 = true;
								if (Local_213[iVar1].f_15 == -1f)
								{
									Local_213[iVar1].f_15 = (to_float(Local_2741.f_434[iVar1] * 30) + IntToFloat(floor((Local_213[iVar1].f_14 / 360f)) * 360));
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
							{
								if (iLocal_2125 == iVar1)
								{
									if (!bVar15)
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1638, 11))
										{
											vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2348[iVar1], true) };
											vVar3.z = (vVar3.z - 10f);
											unk_0xA47B46945FF6DE74(iLocal_2348[iVar1], vVar3, 1, false, 0, 1);
											if (unk_0xC844350D5D58C99A(iLocal_2407))
											{
												vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2407, true) };
												vVar3.z = (vVar3.z + 10f);
												unk_0xA47B46945FF6DE74(iLocal_2407, vVar3, 1, false, 0, 1);
												unk_0xF2BFB495D7D174E8(iLocal_2407, unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
												unk_0x5D96D8530B3D0904(&iLocal_1638, 11);
											}
											func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 12);
										}
									}
								}
								func_221(iVar1, &vVar3, &fVar6);
								unk_0xC023D1C4BF532815(iLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, fVar6, 2, 1);
								if (iLocal_2125 == iVar1 && unk_0xC844350D5D58C99A(iLocal_2407))
								{
									unk_0xC023D1C4BF532815(iLocal_2407, 0f, Local_213[iVar1].f_14, fVar6, 2, 1);
								}
							}
							if (bVar15)
							{
								fVar17 = (to_float(Local_2741.f_434[iVar1] * 30) - (Local_213[iVar1].f_14 % 360f));
								if (unk_0x755FF954DAE327E1(fVar17) <= 20f || (Local_213[iVar1].f_15 != -1f && Local_213[iVar1].f_14 >= Local_213[iVar1].f_15))
								{
									Local_213[iVar1].f_14 = to_float(Local_2741.f_434[iVar1] * 30);
									if (iLocal_2125 == iVar1)
									{
										if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 11))
										{
											if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]) && unk_0xC844350D5D58C99A(iLocal_2407))
											{
												vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2348[iVar1], true) };
												vVar3.z = (vVar3.z + 10f);
												unk_0xA47B46945FF6DE74(iLocal_2348[iVar1], vVar3, 1, false, 0, 1);
												unk_0xF2BFB495D7D174E8(iLocal_2348[iVar1], unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
												vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2407, true) };
												vVar3.z = (vVar3.z - 10f);
												unk_0xA47B46945FF6DE74(iLocal_2407, vVar3, 1, false, 0, 1);
												unk_0x0674E58A79778E99(&iLocal_1638, 11);
											}
										}
										if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
										{
											unk_0xC023D1C4BF532815(iLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, fVar6, 2, 1);
										}
										if (iLocal_2125 == iVar1 && unk_0xC844350D5D58C99A(iLocal_2407))
										{
											unk_0xC023D1C4BF532815(iLocal_2407, 0f, Local_213[iVar1].f_14, fVar6, 2, 1);
										}
										func_174(unk_0xD803B885F5E47A62(), Local_213[iLocal_2125].f_17, 13);
										unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
									}
								}
								else
								{
									Local_213[iVar1].f_14 = (Local_213[iVar1].f_14 + (300f * timestep()));
								}
							}
							else
							{
								Local_213[iVar1].f_14 = (Local_213[iVar1].f_14 + (300f * timestep()));
							}
						}
					}
				}
				else if (iLocal_2125 == iVar1 && iVar11[2])
				{
					if (func_8(iVar1, &Local_213))
					{
						if ((Local_1348.f_1[0][Local_2741[iVar1][0]] == 7 && Local_1348.f_1[1][Local_2741[iVar1][1]] == 7) && Local_1348.f_1[2][Local_2741[iVar1][2]] == 7)
						{
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
					}
				}
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
			Local_213[iVar1].f_15 = -1f;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_213[iVar1].f_10[iVar0] = -1f;
				if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
				{
					if (Local_213[iVar1].f_2[iVar0] != (Local_2741.f_217[iVar1][iVar0] * 22,5f))
					{
						func_221(iVar1, &vVar3, &fVar6);
						Local_213[iVar1].f_2[iVar0] = (Local_2741.f_217[iVar1][iVar0] * 22,5f);
						unk_0xC023D1C4BF532815(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, fVar6, 2, 1);
					}
				}
				else
				{
					Local_213[iVar1].f_2[iVar0] = 0f;
				}
				iVar0++;
			}
			if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
			{
				if (Local_213[iVar1].f_14 != to_float(Local_2741.f_434[iVar1] * 30))
				{
					func_221(iVar1, &vVar3, &fVar6);
					Local_213[iVar1].f_14 = to_float(Local_2741.f_434[iVar1] * 30);
					unk_0xC023D1C4BF532815(iLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, fVar6, 2, 1);
				}
			}
			else
			{
				Local_213[iVar1].f_14 = 0f;
			}
			if (iLocal_2125 == iVar1)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 12))
				{
					unk_0x0674E58A79778E99(&iLocal_1638, 12);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_3401[unk_0xD803B885F5E47A62()].f_10, 2) && !unk_0xEAE0D21A50E6C7F4(iLocal_1638, 3))
				{
					func_3(&(Local_1702[iVar1][0]));
					func_3(&(Local_1702[iVar1][1]));
					func_3(&(Local_1973[iVar1]));
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 2);
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 0);
					unk_0x0674E58A79778E99(&(Local_3401[unk_0xD803B885F5E47A62()].f_10), 1);
					unk_0x0674E58A79778E99(&iLocal_1638, 0);
					unk_0x5D96D8530B3D0904(&iLocal_1639, 2);
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 11))
				{
					if (unk_0xC844350D5D58C99A(iLocal_2348[iVar1]))
					{
						vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2348[iVar1], true) };
						vVar3.z = (vVar3.z + 10f);
						unk_0xA47B46945FF6DE74(iLocal_2348[iVar1], vVar3, 1, false, 0, 1);
						unk_0xF2BFB495D7D174E8(iLocal_2348[iVar1], unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
						vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2407, true) };
						vVar3.z = (vVar3.z - 10f);
						unk_0xA47B46945FF6DE74(iLocal_2407, vVar3, 1, false, 0, 1);
					}
					unk_0x0674E58A79778E99(&iLocal_1638, 11);
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, (8 + iVar0)))
					{
						if (unk_0xC844350D5D58C99A(Local_2131[iVar1][iVar0]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Local_2131[iVar1][iVar0], true) };
							vVar3.z = (vVar3.z + 10f);
							unk_0xA47B46945FF6DE74(Local_2131[iVar1][iVar0], vVar3, 1, false, 0, 1);
							unk_0xF2BFB495D7D174E8(Local_2131[iVar1][iVar0], unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()), unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()));
							vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2403[iVar0], true) };
							vVar3.z = (vVar3.z - 10f);
							unk_0xA47B46945FF6DE74(iLocal_2403[iVar0], vVar3, 1, false, 0, 1);
						}
						unk_0x0674E58A79778E99(&iLocal_1638, (8 + iVar0));
					}
					iVar0++;
				}
			}
			else
			{
				func_3(&(Local_1702[iVar1][0]));
				func_3(&(Local_1702[iVar1][1]));
				func_3(&(Local_1973[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_338(int iParam0, var uParam1)
{
	if (((func_8(iParam0, &Local_213) && Local_1348.f_1[0][Local_2741[iParam0][0]] == 7) && Local_1348.f_1[1][Local_2741[iParam0][1]] == 7) && Local_1348.f_1[2][Local_2741[iParam0][2]] == 7)
	{
		if (func_329(&(Local_2741.f_489[iParam0])))
		{
			if (uParam1 || func_5(&(Local_2741.f_489[iParam0]), 6500, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339()
{
	iVar2 = 0;
	while (iVar2 < 54)
	{
		if (func_340(iVar2))
		{
			if (func_8(iVar2, &Local_213))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_2348[iVar2]))
				{
					if (unk_0x2358623ECCDB11B3(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_vw_slot_wheel_0", 64);
						StringIntConCat(&cVar7, Local_213[iVar2].f_17, 64);
						StringConCat(&cVar7, "a", 64);
						iVar0 = unk_0x12AB0310C2281427(&cVar7);
						unk_0x523BCC9DC80CD82F(iVar0);
						if (unk_0xB87F6CF6E5628C67(iVar0))
						{
							func_221(iVar2, &vVar3, &fVar6);
							vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0f, -0,12f, 1,6f) };
							iLocal_2348[iVar2] = unk_0x7707E48765093646(iVar0, vVar3, 0, false, true);
							unk_0x1E9649458B15960F(iLocal_2348[iVar2], true);
							unk_0xC023D1C4BF532815(iLocal_2348[iVar2], 0f, 0f, fVar6, 2, 1);
							unk_0x71199B01895C6202(iVar0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!unk_0xC844350D5D58C99A(Local_2131[iVar2][iVar1]))
				{
					if (unk_0x2358623ECCDB11B3(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_Casino_Slot_0", 64);
						StringIntConCat(&cVar7, Local_213[iVar2].f_17, 64);
						StringConCat(&cVar7, "a_reels", 64);
						iVar0 = unk_0x12AB0310C2281427(&cVar7);
						unk_0x523BCC9DC80CD82F(iVar0);
						if (unk_0xB87F6CF6E5628C67(iVar0))
						{
							func_221(iVar2, &vVar3, &fVar6);
							if (iVar1 == 0)
							{
								vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, -0,115f, 0,047f, 0,906f) };
							}
							else if (iVar1 == 1)
							{
								vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0,005f, 0,047f, 0,906f) };
							}
							else if (iVar1 == 2)
							{
								vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0,125f, 0,047f, 0,906f) };
							}
							Local_2131[iVar2][iVar1] = unk_0x7707E48765093646(iVar0, vVar3, 0, false, true);
							unk_0x1E9649458B15960F(Local_2131[iVar2][iVar1], true);
							unk_0x20641932E5104B25(Local_2131[iVar2][iVar1], false, 0);
							unk_0xC023D1C4BF532815(Local_2131[iVar2][iVar1], 0f, 0f, fVar6, 2, 1);
							unk_0x71199B01895C6202(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0xC844350D5D58C99A(Local_2131[iVar2][iVar1]))
				{
					unk_0xF690C84DADBB3551(&(Local_2131[iVar2][iVar1]));
				}
				iVar1++;
			}
			if (unk_0xC844350D5D58C99A(iLocal_2348[iVar2]))
			{
				unk_0xF690C84DADBB3551(&(iLocal_2348[iVar2]));
			}
		}
		iVar2++;
	}
	if (iLocal_2125 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_2403[iVar1]))
			{
				if (unk_0x2358623ECCDB11B3(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "Vw_prop_casino_slot_0", 64);
					StringIntConCat(&cVar7, Local_213[iLocal_2125].f_17, 64);
					StringConCat(&cVar7, "b_reels", 64);
					iVar0 = unk_0x12AB0310C2281427(&cVar7);
					unk_0x523BCC9DC80CD82F(iVar0);
					if (unk_0xB87F6CF6E5628C67(iVar0))
					{
						func_221(iLocal_2125, &vVar3, &fVar6);
						if (iVar1 == 0)
						{
							vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, -0,115f, 0,047f, 0,906f) };
						}
						else if (iVar1 == 1)
						{
							vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0,005f, 0,047f, 0,906f) };
						}
						else if (iVar1 == 2)
						{
							vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0,125f, 0,047f, 0,906f) };
						}
						vVar3.z = (vVar3.z - 10f);
						iLocal_2403[iVar1] = unk_0x7707E48765093646(iVar0, vVar3, 0, false, true);
						unk_0x1E9649458B15960F(iLocal_2403[iVar1], true);
						unk_0xC023D1C4BF532815(iLocal_2403[iVar1], 0f, 0f, fVar6, 2, 1);
						unk_0x71199B01895C6202(iVar0);
					}
				}
			}
			iVar1++;
		}
		if (func_8(iLocal_2125, &Local_213))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_2407))
			{
				if (unk_0x2358623ECCDB11B3(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "vw_prop_vw_slot_wheel_0", 64);
					StringIntConCat(&cVar7, Local_213[iLocal_2125].f_17, 64);
					StringConCat(&cVar7, "b", 64);
					iVar0 = unk_0x12AB0310C2281427(&cVar7);
					unk_0x523BCC9DC80CD82F(iVar0);
					if (unk_0xB87F6CF6E5628C67(iVar0))
					{
						func_221(iLocal_2125, &vVar3, &fVar6);
						vVar3 = { unk_0x8A5E176FF719A014(vVar3, fVar6, 0f, -0,12f, 1,6f) };
						vVar3.z = (vVar3.z - 10f);
						iLocal_2407 = unk_0x7707E48765093646(iVar0, vVar3, 0, false, true);
						unk_0x1E9649458B15960F(iLocal_2407, true);
						unk_0xC023D1C4BF532815(iLocal_2407, 0f, 0f, fVar6, 2, 1);
						unk_0x71199B01895C6202(iVar0);
					}
				}
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xC844350D5D58C99A(iLocal_2403[iVar1]))
			{
				unk_0xF690C84DADBB3551(&(iLocal_2403[iVar1]));
			}
			iVar1++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_2407))
		{
			unk_0xF690C84DADBB3551(&iLocal_2407);
		}
	}
}

int func_340(int iParam0)
{
	func_221(iParam0, &vVar0, &uVar3);
	if (unk_0x0EB28750412C3A5A(func_99(unk_0xD803B885F5E47A62()), vVar0, true) <= 10f)
	{
		return 1;
	}
	return 0;
}

void func_341()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1655[iVar0].f_1 == -1)
		{
			iVar1 = func_342(Local_1655[iVar0], iVar0);
			if (iVar1 != -1)
			{
				Local_1655[iVar0] = iVar1;
				Local_1655[iVar0].f_1 = unk_0xD68EA767274B7444();
				func_221(iVar1, &vVar2, &fVar5);
				vVar2 = { unk_0x8A5E176FF719A014(vVar2, fVar5, 0f, -0,2f, 1f) };
				iVar6 = func_175(Local_213[iVar1].f_17);
				unk_0xEB819BD1E585E9CB(Local_1655[iVar0].f_1, "attract_loop", vVar2, iVar6, 0, 0, 0);
			}
		}
		else if (func_318(Local_1655[iVar0]) || Local_2741.f_598[Local_1655[iVar0]] != -1)
		{
			if (Local_2741.f_598[Local_1655[iVar0]] != unk_0xD803B885F5E47A62())
			{
				unk_0x55D0A2DB35045A35(Local_1655[iVar0].f_1);
				unk_0x43A06902454A1172(Local_1655[iVar0].f_1);
				Local_1655[iVar0].f_1 = -1;
			}
		}
		else if (unk_0x8AA6DC470ABA63A2(Local_1655[iVar0].f_1))
		{
			unk_0x43A06902454A1172(Local_1655[iVar0].f_1);
			Local_1655[iVar0].f_1 = -1;
		}
		iVar0++;
	}
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 < 2)
	{
		iVar40 = 0;
		iVar41 = 35;
	}
	else
	{
		iVar40 = 36;
		iVar41 = 53;
	}
	iVar38 = iVar40;
	while (iVar38 <= iVar41)
	{
		if (Local_2741.f_598[iVar38] == -1 && !func_318(iVar38))
		{
			bVar42 = false;
			iVar39 = 0;
			while (iVar39 < 4)
			{
				if (Local_1655[iVar39] == iVar38)
				{
					bVar42 = true;
					iVar39 = 4;
				}
				iVar39++;
			}
			if (!bVar42)
			{
				iVar0[iVar37] = iVar38;
				iVar37++;
			}
		}
		iVar38++;
	}
	iVar43 = unk_0x09AC81E49EA267F7(0, iVar37);
	iVar38 = 0;
	while (iVar38 < iVar37)
	{
		if (iParam0 != -1 && (iVar0[iVar43] == iParam0 || Local_213[iVar0[iVar43]].f_17 == Local_213[iParam0].f_17))
		{
			iVar43++;
			if (iVar43 >= iVar37)
			{
				iVar43 = 0;
			}
		}
		else
		{
			return iVar0[iVar43];
		}
		iVar38++;
	}
	return -1;
}

void func_343()
{
	if (func_347())
	{
		func_360();
	}
	if (Global_1696040)
	{
		Global_1696040 = 0;
		func_360();
	}
	if (Global_2405072.f_2672 && Global_2409287 != 0)
	{
		if (Global_2409287 != 6)
		{
			func_360();
		}
	}
	if (!func_345(unk_0xD803B885F5E47A62()))
	{
		func_360();
	}
	if ((func_344() && Global_1676377.f_3326 != 123) && unk_0x757EF87A33649210())
	{
		func_360();
	}
	if (unk_0xA14BB9332558B949() && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_34, 9))
	{
		func_360();
	}
}

bool func_344()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 2);
}

int func_345(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_346(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
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

int func_347()
{
	func_355(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_354())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_353())
	{
		return 1;
	}
	if (func_352(159))
	{
		if (!func_351())
		{
			return 1;
		}
	}
	if (func_352(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_348() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_348()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_348()
{
	switch (func_350())
	{
		case 0:
			return func_349();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_349()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_350()
{
	return Global_30768;
}

bool func_351()
{
	return Global_2450632.f_598;
}

int func_352(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_353()
{
	return Global_2460680;
}

bool func_354()
{
	return Global_2450632.f_593;
}

void func_355(var uParam0)
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
					func_356(iVar0);
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

void func_356(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_357(iVar4, &bVar5))
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

int func_357(int iParam0, var uParam1)
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

void func_358()
{
	wait(0);
}

void func_359(var uParam0, var uParam1)
{
	uParam0->f_1[0][0] = 0;
	uParam0->f_1[0][1] = 6;
	uParam0->f_1[0][2] = 1;
	uParam0->f_1[0][3] = 2;
	uParam0->f_1[0][4] = 3;
	uParam0->f_1[0][5] = 4;
	uParam0->f_1[0][6] = 7;
	uParam0->f_1[0][7] = 2;
	uParam0->f_1[0][8] = 1;
	uParam0->f_1[0][9] = 3;
	uParam0->f_1[0][10] = 4;
	uParam0->f_1[0][11] = 1;
	uParam0->f_1[0][12] = 0;
	uParam0->f_1[0][13] = 5;
	uParam0->f_1[0][14] = 1;
	uParam0->f_1[0][15] = 0;
	uParam0->f_1[0][16] = 3;
	uParam0->f_1[0][17] = 0;
	uParam0->f_1[0][18] = 4;
	uParam0->f_1[0][19] = 2;
	uParam0->f_1[0][20] = 1;
	uParam0->f_1[0][21] = 2;
	uParam0->f_1[0][22] = 1;
	uParam0->f_1[0][23] = 1;
	uParam0->f_1[0][24] = 7;
	uParam0->f_1[0][25] = 3;
	uParam0->f_1[0][26] = 1;
	uParam0->f_1[0][27] = 2;
	uParam0->f_1[0][28] = 4;
	uParam0->f_1[0][29] = 5;
	uParam0->f_1[0][30] = 7;
	uParam0->f_1[0][31] = 3;
	uParam0->f_1[0][32] = 0;
	uParam0->f_1[0][33] = 4;
	uParam0->f_1[0][34] = 6;
	uParam0->f_1[0][35] = 1;
	uParam0->f_1[0][36] = 2;
	uParam0->f_1[0][37] = 0;
	uParam0->f_1[0][38] = 2;
	uParam0->f_1[0][39] = 0;
	uParam0->f_1[0][40] = 3;
	uParam0->f_1[0][41] = 5;
	uParam0->f_1[0][42] = 3;
	uParam0->f_1[0][43] = 4;
	uParam0->f_1[0][44] = 2;
	uParam0->f_1[0][45] = 1;
	uParam0->f_1[0][46] = 2;
	uParam0->f_1[0][47] = 1;
	uParam0->f_1[0][48] = 6;
	uParam0->f_1[0][49] = 1;
	uParam0->f_1[0][50] = 7;
	uParam0->f_1[0][51] = 5;
	uParam0->f_1[0][52] = 7;
	uParam0->f_1[0][53] = 1;
	uParam0->f_1[0][54] = 2;
	uParam0->f_1[0][55] = 4;
	uParam0->f_1[0][56] = 1;
	uParam0->f_1[0][57] = 2;
	uParam0->f_1[0][58] = 3;
	uParam0->f_1[0][59] = 5;
	uParam0->f_1[0][60] = 7;
	uParam0->f_1[0][61] = 4;
	uParam0->f_1[0][62] = 0;
	uParam0->f_1[0][63] = 6;
	uParam0->f_1[1][0] = 3;
	uParam0->f_1[1][1] = 0;
	uParam0->f_1[1][2] = 1;
	uParam0->f_1[1][3] = 6;
	uParam0->f_1[1][4] = 3;
	uParam0->f_1[1][5] = 1;
	uParam0->f_1[1][6] = 0;
	uParam0->f_1[1][7] = 3;
	uParam0->f_1[1][8] = 2;
	uParam0->f_1[1][9] = 7;
	uParam0->f_1[1][10] = 5;
	uParam0->f_1[1][11] = 0;
	uParam0->f_1[1][12] = 1;
	uParam0->f_1[1][13] = 7;
	uParam0->f_1[1][14] = 4;
	uParam0->f_1[1][15] = 0;
	uParam0->f_1[1][16] = 1;
	uParam0->f_1[1][17] = 1;
	uParam0->f_1[1][18] = 0;
	uParam0->f_1[1][19] = 2;
	uParam0->f_1[1][20] = 5;
	uParam0->f_1[1][21] = 1;
	uParam0->f_1[1][22] = 4;
	uParam0->f_1[1][23] = 0;
	uParam0->f_1[1][24] = 3;
	uParam0->f_1[1][25] = 0;
	uParam0->f_1[1][26] = 3;
	uParam0->f_1[1][27] = 0;
	uParam0->f_1[1][28] = 1;
	uParam0->f_1[1][29] = 0;
	uParam0->f_1[1][30] = 6;
	uParam0->f_1[1][31] = 0;
	uParam0->f_1[1][32] = 0;
	uParam0->f_1[1][33] = 1;
	uParam0->f_1[1][34] = 0;
	uParam0->f_1[1][35] = 3;
	uParam0->f_1[1][36] = 0;
	uParam0->f_1[1][37] = 1;
	uParam0->f_1[1][38] = 0;
	uParam0->f_1[1][39] = 2;
	uParam0->f_1[1][40] = 2;
	uParam0->f_1[1][41] = 4;
	uParam0->f_1[1][42] = 0;
	uParam0->f_1[1][43] = 0;
	uParam0->f_1[1][44] = 0;
	uParam0->f_1[1][45] = 7;
	uParam0->f_1[1][46] = 0;
	uParam0->f_1[1][47] = 2;
	uParam0->f_1[1][48] = 7;
	uParam0->f_1[1][49] = 5;
	uParam0->f_1[1][50] = 0;
	uParam0->f_1[1][51] = 1;
	uParam0->f_1[1][52] = 0;
	uParam0->f_1[1][53] = 0;
	uParam0->f_1[1][54] = 0;
	uParam0->f_1[1][55] = 1;
	uParam0->f_1[1][56] = 5;
	uParam0->f_1[1][57] = 5;
	uParam0->f_1[1][58] = 0;
	uParam0->f_1[1][59] = 7;
	uParam0->f_1[1][60] = 0;
	uParam0->f_1[1][61] = 0;
	uParam0->f_1[1][62] = 1;
	uParam0->f_1[1][63] = 6;
	uParam0->f_1[2][0] = 0;
	uParam0->f_1[2][1] = 1;
	uParam0->f_1[2][2] = 7;
	uParam0->f_1[2][3] = 6;
	uParam0->f_1[2][4] = 0;
	uParam0->f_1[2][5] = 2;
	uParam0->f_1[2][6] = 2;
	uParam0->f_1[2][7] = 4;
	uParam0->f_1[2][8] = 0;
	uParam0->f_1[2][9] = 1;
	uParam0->f_1[2][10] = 0;
	uParam0->f_1[2][11] = 5;
	uParam0->f_1[2][12] = 0;
	uParam0->f_1[2][13] = 2;
	uParam0->f_1[2][14] = 5;
	uParam0->f_1[2][15] = 0;
	uParam0->f_1[2][16] = 0;
	uParam0->f_1[2][17] = 3;
	uParam0->f_1[2][18] = 0;
	uParam0->f_1[2][19] = 1;
	uParam0->f_1[2][20] = 0;
	uParam0->f_1[2][21] = 0;
	uParam0->f_1[2][22] = 0;
	uParam0->f_1[2][23] = 2;
	uParam0->f_1[2][24] = 1;
	uParam0->f_1[2][25] = 0;
	uParam0->f_1[2][26] = 1;
	uParam0->f_1[2][27] = 0;
	uParam0->f_1[2][28] = 0;
	uParam0->f_1[2][29] = 2;
	uParam0->f_1[2][30] = 0;
	uParam0->f_1[2][31] = 1;
	uParam0->f_1[2][32] = 0;
	uParam0->f_1[2][33] = 4;
	uParam0->f_1[2][34] = 0;
	uParam0->f_1[2][35] = 4;
	uParam0->f_1[2][36] = 0;
	uParam0->f_1[2][37] = 0;
	uParam0->f_1[2][38] = 0;
	uParam0->f_1[2][39] = 3;
	uParam0->f_1[2][40] = 0;
	uParam0->f_1[2][41] = 4;
	uParam0->f_1[2][42] = 0;
	uParam0->f_1[2][43] = 0;
	uParam0->f_1[2][44] = 7;
	uParam0->f_1[2][45] = 0;
	uParam0->f_1[2][46] = 2;
	uParam0->f_1[2][47] = 0;
	uParam0->f_1[2][48] = 5;
	uParam0->f_1[2][49] = 4;
	uParam0->f_1[2][50] = 0;
	uParam0->f_1[2][51] = 3;
	uParam0->f_1[2][52] = 0;
	uParam0->f_1[2][53] = 0;
	uParam0->f_1[2][54] = 0;
	uParam0->f_1[2][55] = 3;
	uParam0->f_1[2][56] = 0;
	uParam0->f_1[2][57] = 3;
	uParam0->f_1[2][58] = 0;
	uParam0->f_1[2][59] = 2;
	uParam0->f_1[2][60] = 4;
	uParam0->f_1[2][61] = 0;
	uParam0->f_1[2][62] = 0;
	uParam0->f_1[2][63] = 6;
	uParam0->f_278[0] = 0;
	uParam0->f_278[1] = 25;
	uParam0->f_278[2] = 50;
	uParam0->f_278[3] = 75;
	uParam0->f_278[4] = 100;
	uParam0->f_278[5] = 250;
	uParam0->f_278[6] = 1000;
	uParam0->f_278[7] = 500;
	uParam0->f_278[8] = 5;
	uParam0->f_278[9] = 2;
	uParam0->f_226[0][0] = 5;
	uParam0->f_226[0][1] = 2;
	uParam0->f_226[0][2] = 1;
	uParam0->f_226[0][3] = 3;
	uParam0->f_226[0][4] = 7;
	uParam0->f_226[0][5] = 6;
	uParam0->f_226[0][6] = 1;
	uParam0->f_226[0][7] = 4;
	uParam0->f_226[0][8] = 5;
	uParam0->f_226[0][9] = 2;
	uParam0->f_226[0][10] = 3;
	uParam0->f_226[0][11] = 7;
	uParam0->f_226[0][12] = 2;
	uParam0->f_226[0][13] = 4;
	uParam0->f_226[0][14] = 1;
	uParam0->f_226[0][15] = 7;
	uParam0->f_226[1][0] = 5;
	uParam0->f_226[1][1] = 2;
	uParam0->f_226[1][2] = 1;
	uParam0->f_226[1][3] = 3;
	uParam0->f_226[1][4] = 7;
	uParam0->f_226[1][5] = 6;
	uParam0->f_226[1][6] = 1;
	uParam0->f_226[1][7] = 4;
	uParam0->f_226[1][8] = 5;
	uParam0->f_226[1][9] = 2;
	uParam0->f_226[1][10] = 3;
	uParam0->f_226[1][11] = 7;
	uParam0->f_226[1][12] = 2;
	uParam0->f_226[1][13] = 4;
	uParam0->f_226[1][14] = 1;
	uParam0->f_226[1][15] = 7;
	uParam0->f_226[2][0] = 5;
	uParam0->f_226[2][1] = 2;
	uParam0->f_226[2][2] = 1;
	uParam0->f_226[2][3] = 3;
	uParam0->f_226[2][4] = 7;
	uParam0->f_226[2][5] = 6;
	uParam0->f_226[2][6] = 1;
	uParam0->f_226[2][7] = 4;
	uParam0->f_226[2][8] = 5;
	uParam0->f_226[2][9] = 2;
	uParam0->f_226[2][10] = 3;
	uParam0->f_226[2][11] = 7;
	uParam0->f_226[2][12] = 2;
	uParam0->f_226[2][13] = 4;
	uParam0->f_226[2][14] = 1;
	uParam0->f_226[2][15] = 7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			uParam0->f_197[iVar0][uParam0->f_1[iVar0][iVar1]]++;
			iVar1++;
		}
		iVar0++;
	}
	uParam1[0]->f_17 = 4;
	uParam1[1]->f_17 = 5;
	uParam1[2]->f_17 = 6;
	uParam1[3]->f_17 = 7;
	uParam1[4]->f_17 = 8;
	uParam1[5]->f_17 = 1;
	uParam1[6]->f_17 = 2;
	uParam1[7]->f_17 = 3;
	uParam1[8]->f_17 = 4;
	uParam1[9]->f_17 = 5;
	uParam1[10]->f_17 = 6;
	uParam1[11]->f_17 = 7;
	uParam1[12]->f_17 = 1;
	uParam1[13]->f_17 = 2;
	uParam1[14]->f_17 = 3;
	uParam1[15]->f_17 = 4;
	uParam1[16]->f_17 = 5;
	uParam1[17]->f_17 = 4;
	uParam1[18]->f_17 = 5;
	uParam1[19]->f_17 = 1;
	uParam1[20]->f_17 = 2;
	uParam1[21]->f_17 = 3;
	uParam1[22]->f_17 = 7;
	uParam1[23]->f_17 = 8;
	uParam1[24]->f_17 = 4;
	uParam1[25]->f_17 = 5;
	uParam1[26]->f_17 = 6;
	uParam1[27]->f_17 = 4;
	uParam1[28]->f_17 = 5;
	uParam1[29]->f_17 = 1;
	uParam1[30]->f_17 = 2;
	uParam1[31]->f_17 = 3;
	uParam1[32]->f_17 = 7;
	uParam1[33]->f_17 = 8;
	uParam1[34]->f_17 = 4;
	uParam1[35]->f_17 = 5;
	uParam1[36]->f_17 = 6;
	uParam1[37]->f_17 = 8;
	uParam1[38]->f_17 = 7;
	uParam1[39]->f_17 = 6;
	uParam1[40]->f_17 = 5;
	uParam1[41]->f_17 = 4;
	uParam1[42]->f_17 = 3;
	uParam1[43]->f_17 = 2;
	uParam1[44]->f_17 = 3;
	uParam1[45]->f_17 = 4;
	uParam1[46]->f_17 = 5;
	uParam1[47]->f_17 = 1;
	uParam1[48]->f_17 = 2;
	uParam1[49]->f_17 = 6;
	uParam1[50]->f_17 = 7;
	uParam1[51]->f_17 = 8;
	uParam1[52]->f_17 = 4;
	uParam1[53]->f_17 = 5;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		switch (uParam1[iVar0]->f_17)
		{
			case 1:
			case 6:
				uParam1[iVar0]->f_16 = 100;
				break;
			
			case 2:
			case 3:
				uParam1[iVar0]->f_16 = 25;
				break;
			
			case 4:
			case 8:
				uParam1[iVar0]->f_16 = 5;
				break;
			
			case 5:
			case 7:
				uParam1[iVar0]->f_16 = 500;
				break;
		}
		iVar0++;
	}
}

void func_360()
{
	if (iLocal_2124 != -1)
	{
		func_200(&iLocal_2124);
	}
	if (unk_0x562F77A7F33D2E46("dlc_vw_casino_slot_machines_playing"))
	{
		unk_0x8910D3D58E0132B8("dlc_vw_casino_slot_machines_playing");
	}
	if (iLocal_2125 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 23))
		{
			Var0 = { func_198(Local_213[iLocal_2125].f_17) };
			unk_0xF5A41F3D3B38EFE3(&Var0);
			unk_0x0674E58A79778E99(&iLocal_1638, 23);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 19))
		{
			func_167(0, 0);
			func_164(1, -1);
			unk_0x0674E58A79778E99(&iLocal_1638, 19);
		}
		func_219(0);
	}
	func_186();
	func_32();
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4, 7))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_4), 7);
		func_34();
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 13))
	{
		if (func_223())
		{
			func_222(0);
		}
		unk_0x0674E58A79778E99(&iLocal_1638, 13);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 18))
	{
		unk_0x8D17794CE3273D70(func_328());
		unk_0x0674E58A79778E99(&iLocal_1638, 18);
	}
	iVar9 = 0;
	while (iVar9 < 54)
	{
		iVar8 = 0;
		while (iVar8 < 3)
		{
			if (unk_0xC844350D5D58C99A(Local_2131[iVar9][iVar8]))
			{
				unk_0xF690C84DADBB3551(&(Local_2131[iVar9][iVar8]));
			}
			iVar8++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_2348[iVar9]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_2348[iVar9]));
		}
		iVar9++;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2403[iVar8]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_2403[iVar8]));
		}
		iVar8++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_2407))
	{
		unk_0xF690C84DADBB3551(&iLocal_2407);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_1638, 2))
	{
		if (func_12(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x991B1F0980C62628())
		{
			func_17(unk_0xD803B885F5E47A62(), 1, 0, 0);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
		if (unk_0x0178C60FEA5C5A75())
		{
			unk_0xBFE31971E49FA500(true);
		}
		func_16(0);
		unk_0x0674E58A79778E99(&iLocal_1638, 2);
	}
	func_167(0, 0);
	func_164(1, -1);
	func_361();
}

void func_361()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_362()
{
	if (Global_1696040)
	{
		Global_1696040 = 0;
	}
	unk_0x37AD2AB54480FA6A(32, 0, -1);
	func_364(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_2741, 660);
	unk_0x35B62793EAE9ADDF(&Local_3401, 353);
	if (!func_363())
	{
		func_360();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
	}
	else
	{
		func_360();
	}
}

int func_363()
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
		if (func_354())
		{
			return 0;
		}
		if (func_352(157))
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

int func_364(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_361();
			}
			else
			{
				return 0;
			}
		}
		if (!func_365())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_361();
					}
					else
					{
						return 0;
					}
				}
				if (func_354())
				{
					if (!bParam2)
					{
						func_361();
					}
					else
					{
						return 0;
					}
				}
				if (func_352(157))
				{
					if (!bParam2)
					{
						func_361();
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
					func_361();
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
				func_361();
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
			func_361();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_365()
{
	return Global_1312854;
}

void func_366()
{
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Local_2741.f_598[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1655[iVar0].f_1 = -1;
		Local_1655[iVar0] = -1;
		iVar0++;
	}
}

