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
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	func_234();
	while (true)
	{
		wait(0);
		func_51(&Local_116);
		if (((func_50() || func_49()) || func_48()) || func_47())
		{
			if (Local_116.f_19 == 3)
			{
				func_5(&Local_116, 0);
			}
		}
		else
		{
			func_51(&Local_116);
		}
		if (func_3())
		{
			func_5(&Local_116, 1);
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if ((!Global_2513560 || (!unk_0x8CD06866876216F2() && !func_4())) || (!unk_0x3BE9D9F3DC14F695() && !func_4()))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return Global_1312854;
}

void func_5(var uParam0, bool bParam1)
{
	func_12(uParam0, bParam1);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 0))
	{
		func_11();
		unk_0x0674E58A79778E99(&(uParam0->f_5), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 1))
	{
		func_10();
		unk_0x0674E58A79778E99(&(uParam0->f_5), 1);
	}
	if (uParam0->f_18 != -1)
	{
		func_8(&(uParam0->f_18));
	}
	func_7(uParam0, 10);
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_6(uParam0, 0);
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_8(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*uParam0);
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

int func_9(int iParam0)
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

void func_10()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_11()
{
	Global_2439138.f_1156.f_9 = 0;
}

void func_12(var uParam0, bool bParam1)
{
	unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_404), 0);
	unk_0xF5A41F3D3B38EFE3("helicopterhud");
	func_46(uParam0);
	func_45(uParam0);
	func_44(uParam0);
	func_43(uParam0);
	func_42(uParam0);
	func_41(uParam0);
	unk_0x42740B44BA8D7B43("DLC_CHRISTMAS2017/XM_ION_CANNON");
	unk_0x8910D3D58E0132B8("dlc_xm_orbital_cannon_camera_active_scene");
	func_40(&(uParam0->f_731));
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	if (unk_0xED4934AFB6EC6451("MP_OrbitalCannon"))
	{
		unk_0x9A1335ECD7BD117F("MP_OrbitalCannon");
	}
	uParam0->f_9 = 0;
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 3))
	{
		unk_0x066C43E677C08D5C();
		unk_0x448D99BAB1554268(0);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 3);
	}
	unk_0x0674E58A79778E99(&(uParam0->f_5), 15);
	unk_0x0674E58A79778E99(&(uParam0->f_5), 16);
	unk_0x0674E58A79778E99(&(uParam0->f_5), 17);
	func_40(&(uParam0->f_725));
	func_38();
	func_29();
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 1))
	{
		unk_0x7B0C620E7A619AA1(0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 0))
	{
		unk_0x3F8ED0E306F22B54();
	}
	unk_0x749C03C3BED0C76B(1);
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
	{
		unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
	}
	unk_0xE17FDF9E3068281B(&(uParam0->f_22));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, false);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
	}
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		unk_0x82E51BCA72537B6C(1000);
	}
	unk_0x066C43E677C08D5C();
	Global_2513561 = -1;
	if (bParam1)
	{
		if (func_28(unk_0xD803B885F5E47A62(), 1, 1) && unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 3))
		{
			func_13(unk_0xD803B885F5E47A62(), 1, 524288, 0);
		}
	}
	uParam0->f_8 = 0;
}

void func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_27())
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
		if (!func_25())
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
				else if (bVar14 || (!func_22(unk_0xD803B885F5E47A62(), 0) && !func_21()))
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
					func_18(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_17(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					unk_0x120A395B0ECB8EA5(iVar27, 1);
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
					func_16();
					func_15();
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
				if (!func_17(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
							unk_0x120A395B0ECB8EA5(iVar27, 1);
						}
					}
					if (func_14(Global_4456448.f_232883))
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

bool func_14(int iParam0)
{
	return iParam0 == 17;
}

void func_15()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_16()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_17(int iParam0)
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

void func_18(int iParam0, int iParam1, int iParam2)
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
				func_20();
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
		if (func_22(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_19(-2008016205, iParam0);
	}
}

void func_19(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_20()
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

bool func_21()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
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

int func_25()
{
	if (func_26() == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	return Global_1312467.f_18;
}

int func_27()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
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

void func_29()
{
	func_30(0);
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_37();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_36(0))
		{
			func_31(0);
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

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_34())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_32())
	{
		Global_19486.f_1 = 3;
	}
}

int func_32()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_36(0))
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

bool func_34()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_35()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_36(int iParam0)
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

void func_37()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_38()
{
	func_39(unk_0xD803B885F5E47A62(), 0);
}

void func_39(int iParam0, int iParam1)
{
	Global_2425662[iParam0].f_63.f_3 = iParam1;
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_41(var uParam0)
{
	if (uParam0->f_16 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_16);
		unk_0x43A06902454A1172(uParam0->f_16);
		uParam0->f_16 = -1;
	}
}

void func_42(var uParam0)
{
	if (uParam0->f_15 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_15);
		unk_0x43A06902454A1172(uParam0->f_15);
		uParam0->f_15 = -1;
	}
}

void func_43(var uParam0)
{
	if (uParam0->f_12 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_12);
		unk_0x43A06902454A1172(uParam0->f_12);
		uParam0->f_12 = -1;
	}
}

void func_44(var uParam0)
{
	if (uParam0->f_13 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_13);
		unk_0x43A06902454A1172(uParam0->f_13);
		uParam0->f_13 = -1;
	}
}

void func_45(var uParam0)
{
	if (uParam0->f_14 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_14);
		unk_0x43A06902454A1172(uParam0->f_14);
		uParam0->f_14 = -1;
	}
}

void func_46(var uParam0)
{
	if (uParam0->f_6 != -1)
	{
		unk_0x55D0A2DB35045A35(uParam0->f_6);
		unk_0x43A06902454A1172(uParam0->f_6);
		uParam0->f_6 = -1;
	}
}

int func_47()
{
	if (unk_0x8A22C4C08282BF26(1609729055) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_1312877;
}

int func_49()
{
	if (func_26() == 3 || func_26() == 2)
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (func_26() == 1 || func_26() == 4)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	switch (uParam0->f_19)
	{
		case 0:
			func_6(uParam0, 1);
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 0))
			{
				func_11();
				unk_0x0674E58A79778E99(&(uParam0->f_5), 0);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 1))
			{
				func_10();
				unk_0x0674E58A79778E99(&(uParam0->f_5), 1);
			}
			if (func_215(uParam0))
			{
				unk_0x749C03C3BED0C76B(0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 2);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 3);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
				unk_0x5D96D8530B3D0904(&(uParam0->f_10), 2);
				unk_0x0D3BE1DE0262A012("helicopterhud", 0);
				func_6(uParam0, 3);
				unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_404), 0);
			}
			break;
		
		case 3:
			func_214();
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_13(unk_0xD803B885F5E47A62(), 0, 524288, 0);
				unk_0x5D96D8530B3D0904(&(uParam0->f_8), 3);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
				}
			}
			if (!func_213())
			{
				func_212();
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 0);
			}
			if (!func_211())
			{
				func_210();
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 1);
			}
			unk_0x6B08108A769C302D();
			unk_0xE4EBD4F12E3C46F1(1f);
			unk_0xDBB16844D912BC1B(1, 1);
			unk_0x3E61BEF445C3B3F9(unk_0xF1EE614CA05DDE75());
			if (func_155(0, 1, 0))
			{
				if (func_58(uParam0))
				{
					func_12(uParam0, 1);
					func_6(uParam0, 1);
				}
			}
			func_56(1);
			break;
	}
	if (uParam0->f_19 == 3)
	{
		unk_0x6B08108A769C302D();
		unk_0xE4EBD4F12E3C46F1(1f);
		unk_0xDBB16844D912BC1B(1, 1);
		unk_0x3E61BEF445C3B3F9(unk_0xF1EE614CA05DDE75());
		if (!uParam0->f_3)
		{
			if (!func_55(&(uParam0->f_731), 5000, 0))
			{
				if (unk_0xAE317D00A5A55DF6("DLC_CHRISTMAS2017/XM_ION_CANNON", 0, -1))
				{
					uParam0->f_3 = 1;
				}
				else if (!func_54(&(uParam0->f_731)))
				{
					func_53(&(uParam0->f_731), 0, 0);
				}
			}
		}
		func_52();
		func_56(1);
	}
}

void func_52()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_53(var uParam0, bool bParam1, bool bParam2)
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

bool func_54(var uParam0)
{
	return uParam0->f_1;
}

int func_55(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
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

void func_56(bool bParam0)
{
	if (bParam0)
	{
		if (func_57())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_57()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_58(var uParam0)
{
	func_154();
	unk_0x69FCF499804D6AE7(0);
	unk_0x770C703CAD045196(0);
	unk_0x3584F71E5CA29322(19);
	unk_0x3584F71E5CA29322(2);
	func_56(1);
	unk_0x3FC8DBCC154CA56B();
	func_153();
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(3);
	unk_0x3584F71E5CA29322(4);
	func_152(0);
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 2))
	{
		if (func_120(uParam0))
		{
			if (func_60(uParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 0))
				{
					unk_0x3F8ED0E306F22B54();
					unk_0x0674E58A79778E99(&(uParam0->f_8), 0);
				}
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 2);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 3);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
				unk_0x5D96D8530B3D0904(&(uParam0->f_10), 3);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 2);
			}
		}
	}
	else if (func_120(uParam0))
	{
		func_59(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 2);
		return 1;
	}
	return 0;
}

int func_59(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 3))
	{
		unk_0x066C43E677C08D5C();
		unk_0x448D99BAB1554268(0);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 3);
	}
	unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
	unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
	return 1;
}

int func_60(var uParam0)
{
	if (func_54(&(uParam0->f_729)) && func_55(&(uParam0->f_729), 5000, 0))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_5), 8);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 10);
		unk_0x0674E58A79778E99(&(uParam0->f_5), 9);
		func_40(&(uParam0->f_723));
		func_40(&(uParam0->f_729));
	}
	if (func_54(&(uParam0->f_727)))
	{
		if (func_55(&(uParam0->f_727), 3000, 0))
		{
			func_44(uParam0);
			unk_0x4D7F4CC43D4D0DE3(-1, "cannon_active", "dlc_xm_orbital_cannon_sounds", 1);
			func_40(&(uParam0->f_727));
			unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
		}
	}
	if ((((!unk_0x798A3F1296751F46() && !func_36(0)) && !func_119()) && !func_48()) && func_118(uParam0) == 10)
	{
		unk_0xA2E3EDD0E119882F(2);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 257, 1);
		unk_0x38C3A68D7861DCFD(0, 142, 1);
		unk_0x38C3A68D7861DCFD(0, 141, 1);
		unk_0x38C3A68D7861DCFD(0, 140, 1);
		unk_0x38C3A68D7861DCFD(0, 263, 1);
		unk_0x38C3A68D7861DCFD(0, 264, 1);
		unk_0x38C3A68D7861DCFD(0, 143, 1);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		if (((((unk_0x7FEE810EE9E768EB(2, 24) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 8)) && !func_54(&(uParam0->f_727))) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 15)) && !unk_0xE57E602827E07C9D()) && unk_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			uParam0->f_1 = 1;
			if (!func_54(&(uParam0->f_723)))
			{
				func_53(&(uParam0->f_723), 0, 0);
				func_117(uParam0);
				unk_0x5E858A00EAFA5B24(0, 1000, 50);
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 19))
				{
					unk_0x6F6BA3FE885E6C91(uParam0->f_6, "Firing", 0f);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 19);
				}
			}
			else if (func_55(&(uParam0->f_723), 3000, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 8))
				{
					vVar0 = { unk_0xD06724447386BC29(uParam0->f_4) };
					unk_0x6F6BA3FE885E6C91(uParam0->f_6, "Firing", 1f);
					func_70(vVar0);
					unk_0x5E858A00EAFA5B24(0, 500, 256);
					unk_0x91F5B0244AAE6222(uParam0->f_4, "GAMEPLAY_EXPLOSION_SHAKE", 1,5f);
					func_53(&(uParam0->f_729), 0, 0);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 8);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
					*uParam0 = 1;
				}
			}
			else if (func_55(&(uParam0->f_723), 2000, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 10))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 10);
					unk_0x5E858A00EAFA5B24(0, 1000, 50);
				}
			}
			else if (func_55(&(uParam0->f_723), 1000, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 9))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 9);
					unk_0x5E858A00EAFA5B24(0, 1000, 50);
				}
			}
		}
		else
		{
			bVar3 = false;
			if ((unk_0xD245978525608929(2, 24) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 15)) && !unk_0xE57E602827E07C9D())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "inactive_fire_fail", "dlc_xm_orbital_cannon_sounds", 1);
			}
			uParam0->f_1 = 0;
			func_46(uParam0);
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 19))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_5), 19);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 8))
			{
				func_69(uParam0);
			}
			if ((unk_0xD245978525608929(2, 202) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 15)) && !bVar3)
			{
				func_43(uParam0);
				func_42(uParam0);
				func_41(uParam0);
				func_69(uParam0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
				unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_413), 1);
				return 1;
			}
			if (unk_0x9A01369A10646AFE(2, 203))
			{
				func_69(uParam0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 2);
				unk_0x0674E58A79778E99(&(uParam0->f_10), 3);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
				unk_0x5D96D8530B3D0904(&(uParam0->f_10), 2);
				func_6(uParam0, 3);
			}
		}
		if (!unk_0xB3FFA20AEA3A2D9C(uParam0->f_4))
		{
			func_61(uParam0);
		}
	}
	return 0;
}

void func_61(var uParam0)
{
	fVar0 = unk_0x4F3973434662D795(2, 221);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 5))
	{
		if (!unk_0x91E3F625EF57450D(2))
		{
			if (fVar0 == 0f)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_5), 5);
			}
		}
		else if (!unk_0x06F8112AA79C53D9(2, 242) && !unk_0x06F8112AA79C53D9(2, 241))
		{
			unk_0x0674E58A79778E99(&(uParam0->f_5), 5);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
	{
		bVar1 = false;
		bVar2 = false;
		fVar3 = unk_0x86CC98177DFF41EC(uParam0->f_4);
		fVar4 = (35f + func_68(uParam0->f_7));
		fVar5 = unk_0x4F3973434662D795(2, 218);
		fVar6 = unk_0x4F3973434662D795(2, 219);
		vVar7 = { unk_0xD06724447386BC29(uParam0->f_4) };
		if (uParam0->f_1)
		{
			fVar4 = 50f;
		}
		if (fVar5 > 0,1f)
		{
			if ((vVar7.x + (unk_0x755FF954DAE327E1((fVar4 * fVar5)) * timestep())) <= 4000f)
			{
				bVar1 = true;
				vVar7.x = (vVar7.x + (unk_0x755FF954DAE327E1((fVar4 * fVar5)) * timestep()));
			}
		}
		else if (fVar5 < -0,1f)
		{
			if ((vVar7.x - (unk_0x755FF954DAE327E1((fVar4 * fVar5)) * timestep())) >= -4000f)
			{
				bVar1 = true;
				vVar7.x = (vVar7.x - (unk_0x755FF954DAE327E1((fVar4 * fVar5)) * timestep()));
			}
		}
		if (fVar6 > 0,1f)
		{
			if ((vVar7.y - (unk_0x755FF954DAE327E1((fVar4 * fVar6)) * timestep())) >= -4000f)
			{
				bVar1 = true;
				vVar7.y = (vVar7.y - (unk_0x755FF954DAE327E1((fVar4 * fVar6)) * timestep()));
			}
		}
		else if (fVar6 < -0,1f)
		{
			if ((vVar7.y + (unk_0x755FF954DAE327E1((fVar4 * fVar6)) * timestep())) <= 8000f)
			{
				bVar1 = true;
				vVar7.y = (vVar7.y + (unk_0x755FF954DAE327E1((fVar4 * fVar6)) * timestep()));
			}
		}
		fVar10 = func_67(vVar7);
		if (vVar7.z != fVar10)
		{
			if (vVar7.z < fVar10)
			{
				vVar7.z = (vVar7.z + (unk_0x755FF954DAE327E1(fVar4) * timestep()));
				if (vVar7.z > fVar10)
				{
					vVar7.z = fVar10;
				}
			}
			else if (vVar7.z > fVar10)
			{
				vVar7.z = (vVar7.z - (unk_0x755FF954DAE327E1(fVar4) * timestep()));
				if (vVar7.z < fVar10)
				{
					vVar7.z = fVar10;
				}
			}
			bVar1 = true;
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 5))
		{
			if (!unk_0x91E3F625EF57450D(2))
			{
				if (fVar0 > 0,3f)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6)) && uParam0->f_7 > 0)
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_ZOOM_LEVEL");
						unk_0x7C19E5E4784BD7CF(func_66(uParam0, 1));
						unk_0x7E60D21B163E9D56();
						unk_0x5D96D8530B3D0904(&(uParam0->f_5), 7);
						unk_0x5D96D8530B3D0904(&(uParam0->f_5), 5);
					}
				}
				else if (fVar0 < -0,3f)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7)) && uParam0->f_7 < 4)
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_ZOOM_LEVEL");
						unk_0x7C19E5E4784BD7CF(func_66(uParam0, 0));
						unk_0x7E60D21B163E9D56();
						unk_0x5D96D8530B3D0904(&(uParam0->f_5), 6);
						unk_0x5D96D8530B3D0904(&(uParam0->f_5), 5);
					}
				}
			}
			else if (unk_0xBFC0798A6E3417F9(2, 242))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6)) && uParam0->f_7 > 0)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0x7C19E5E4784BD7CF(func_66(uParam0, 1));
					unk_0x7E60D21B163E9D56();
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 7);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 5);
				}
			}
			else if (unk_0xBFC0798A6E3417F9(2, 241))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7)) && uParam0->f_7 < 4)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0x7C19E5E4784BD7CF(func_66(uParam0, 0));
					unk_0x7E60D21B163E9D56();
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 6);
					unk_0x5D96D8530B3D0904(&(uParam0->f_5), 5);
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6) || unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7))
		{
			bVar2 = true;
		}
		fVar11 = 0f;
		fVar12 = 0f;
		vVar13 = { unk_0xD06724447386BC29(uParam0->f_4) };
		if (vVar13.x < vVar7.x)
		{
			fVar11 = 50f;
		}
		else if (vVar13.x > vVar7.x)
		{
			fVar11 = -50f;
		}
		if (vVar13.y < vVar7.y)
		{
			fVar12 = 50f;
		}
		else if (vVar13.y > vVar7.y)
		{
			fVar12 = -50f;
		}
		if (bVar1 || bVar2)
		{
			if (func_118(uParam0) == 10)
			{
				if (bVar1)
				{
					func_65(uParam0);
				}
				else
				{
					func_43(uParam0);
					func_42(uParam0);
					func_41(uParam0);
				}
				if (bVar2)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6))
					{
						func_64(uParam0);
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7))
					{
						func_63(uParam0);
					}
				}
				else
				{
					func_42(uParam0);
					func_41(uParam0);
				}
			}
			func_62(uParam0, &fVar3);
			unk_0x5818C8D5303DCCF8(uParam0->f_4, fVar3);
			unk_0x608A456FDD8A83D8(uParam0->f_4, vVar7);
		}
		else
		{
			func_43(uParam0);
			func_42(uParam0);
			func_41(uParam0);
		}
		unk_0x719DD92C1BF81C49(vVar7, &fVar16, 1, 0);
		unk_0xF49D1BC9EF1C3EF4((vVar7.x + fVar11), (vVar7.y + fVar12), (fVar16 + 50f), -90f, 0f, 0f);
	}
}

void func_62(var uParam0, float fParam1)
{
	fVar0 = 125f;
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 7))
	{
		*fParam1 = (*fParam1 + (fVar0 * timestep()));
		switch (uParam0->f_7)
		{
			case 1:
				if (*fParam1 > 100f)
				{
					*fParam1 = 100f;
					uParam0->f_7 = 0;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 7);
				}
				break;
			
			case 2:
				if (*fParam1 > 80f)
				{
					*fParam1 = 80f;
					uParam0->f_7 = 1;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 7);
				}
				break;
			
			case 3:
				if (*fParam1 > 60f)
				{
					*fParam1 = 60f;
					uParam0->f_7 = 2;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 7);
				}
				break;
			
			case 4:
				if (*fParam1 > 40f)
				{
					*fParam1 = 40f;
					uParam0->f_7 = 3;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 7);
				}
				break;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 6))
	{
		*fParam1 = (*fParam1 - (fVar0 * timestep()));
		switch (uParam0->f_7)
		{
			case 0:
				if (*fParam1 < 80f)
				{
					*fParam1 = 80f;
					uParam0->f_7 = 1;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 6);
				}
				break;
			
			case 1:
				if (*fParam1 < 60f)
				{
					*fParam1 = 60f;
					uParam0->f_7 = 2;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 6);
				}
				break;
			
			case 2:
				if (*fParam1 < 40f)
				{
					*fParam1 = 40f;
					uParam0->f_7 = 3;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 6);
				}
				break;
			
			case 3:
				if (*fParam1 < 20f)
				{
					*fParam1 = 20f;
					uParam0->f_7 = 4;
					unk_0x0674E58A79778E99(&(uParam0->f_5), 6);
				}
				break;
			}
	}
}

void func_63(var uParam0)
{
	if (uParam0->f_16 == -1)
	{
		uParam0->f_16 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_16, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_64(var uParam0)
{
	if (uParam0->f_15 == -1)
	{
		uParam0->f_15 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_15, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_65(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_12, "pan_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

float func_66(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (uParam0->f_7)
		{
			case 0:
				return 0,25f;
				break;
			
			case 1:
				return 0,5f;
				break;
			
			case 2:
				return 0,75f;
				break;
			
			case 3:
				return 1f;
				break;
		}
	}
	else
	{
		switch (uParam0->f_7)
		{
			case 1:
				return 0f;
				break;
			
			case 2:
				return 0,25f;
				break;
			
			case 3:
				return 0,5f;
				break;
			
			case 4:
				return 0,75f;
				break;
			}
	}
	return 0f;
}

float func_67(struct<2> Param0, var uParam2)
{
	if (((Param0.f_1 >= 1000f && Param0.f_1 <= 1700f) && Param0 >= -700f) && Param0 <= 1100f)
	{
		return 500f;
	}
	if (((Param0.f_1 >= 3600f && Param0.f_1 <= 4100f) && Param0 >= -1700f) && Param0 <= -700f)
	{
		return 550f;
	}
	if (((Param0.f_1 >= 4880f && Param0.f_1 <= 6150f) && Param0 >= -500f) && Param0 <= 1900f)
	{
		return 850f;
	}
	return 400f;
}

float func_68(int iParam0)
{
	fVar0 = 100f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 90f;
			break;
		
		case 1:
			fVar0 = 60f;
			break;
		
		case 2:
			fVar0 = 50f;
			break;
		
		case 3:
			fVar0 = 25f;
			break;
		
		case 4:
			fVar0 = 10f;
			break;
	}
	return fVar0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
	if (unk_0xB3FFA20AEA3A2D9C(uParam0->f_4))
	{
		unk_0x10486C0590CF176C(uParam0->f_4, 0);
	}
	unk_0x0FB033EB6C6ED01F(0);
	unk_0x0674E58A79778E99(&(uParam0->f_5), 8);
	unk_0x0674E58A79778E99(&(uParam0->f_5), 10);
	unk_0x0674E58A79778E99(&(uParam0->f_5), 9);
	func_40(&(uParam0->f_723));
}

void func_70(vector3 vParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xE82754C349C7B581(vParam0, &(vParam0.f_2), 0, 0);
		unk_0x4E75239F2767B832(vParam0, &uVar0, &vVar1);
		iVar12 = 0;
		while (iVar12 < 32)
		{
			iVar11 = unk_0x117658E336116132(iVar12);
			if (func_75(iVar11, 0, 0))
			{
				iVar10 = unk_0x9539D44F3E4492F6(iVar11);
				if (unk_0xC844350D5D58C99A(iVar10))
				{
					vVar4 = { unk_0x68F4C0EC296D3901(iVar10, 0) };
					if (unk_0x0EB28750412C3A5A(vParam0, vVar4, 0) < 15f && vVar4.z >= (vParam0.z - 15f))
					{
						unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), vVar4, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar12++;
		}
		iVar13 = unk_0x9ED5EF2B539772F7(&Global_1315847);
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			if (unk_0xC844350D5D58C99A(Global_1315847[iVar14]))
			{
				if (((func_74(Global_1315847[iVar14], 0) || func_73(Global_1315847[iVar14], 0)) || func_72(Global_1315847[iVar14], 0)) || func_71(Global_1315847[iVar14], 0))
				{
					vVar7 = { unk_0x68F4C0EC296D3901(Global_1315847[iVar14], 0) };
					if (unk_0x0EB28750412C3A5A(vParam0, vVar7, 0) < 15f && vVar7.z >= (vParam0.z - 15f))
					{
						unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), vVar7, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar14++;
		}
		unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), vParam0, 59, 1f, 1, 0, 1065353216);
		unk_0x8F8ADC4754FE74DA("scr_xm_orbital");
		unk_0x696927C70516062A("scr_xm_orbital_blast", vParam0, vVar1, 1065353216, 0, 0, 0, 1);
		if (!Global_1694119)
		{
			unk_0xEB819BD1E585E9CB(-1, "DLC_XM_Explosions_Orbital_Cannon", vParam0, 0, 1, 0, 0);
		}
	}
}

int func_71(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		if ((func_115(iParam0) && ((func_114(iParam0) == 88 || func_114(iParam0) == 81) || func_114(iParam0) == 117)) || (((((func_110(iParam0) || func_107(iParam0)) || func_103(iParam0)) && !func_102(iParam0)) && !func_101(iParam0)) && !func_99(iParam0)))
		{
			if (((!func_98(iParam0) && !func_97(iParam0)) && !func_94(iParam0, func_96(), 1)) && !func_93(iParam0))
			{
				if (iParam1 && func_92(iParam0))
				{
					return 0;
				}
				if (iParam2 && (((Global_2425662[iVar0].f_200 || Global_2425662[iVar0].f_201) || Global_2425662[iVar0].f_202) || unk_0xA0CCD09012AED177(unk_0x9539D44F3E4492F6(iParam0))))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	if (((((((((((((((((((((((((iParam0 != func_116() && func_28(iParam0, 1, 1)) && !func_91(iParam0, 1, 1)) && !func_115(iParam0)) && !func_90(iParam0)) && !func_98(iParam0)) && !func_97(iParam0)) && !unk_0x9AAA35F427859078(iParam0)) && !unk_0x433E615D274A2FC6(iParam0)) && !func_89(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_404, 2)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_404, 3)) && !func_94(iParam0, func_96(), 1)) && !func_93(iParam0)) && !func_22(iParam0, 0)) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 14)) && !func_88(iParam0)) && !func_87(iParam0)) && !func_83(iParam0)) && unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0].f_142, 22)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_404, 1)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_310.f_1, 31)) && func_82(iParam0) != 136) && !(func_78(iParam0) && func_76(iParam0) == 164)) && !Global_1590535[iVar0].f_749) && !Global_1590535[iVar0].f_748)
	{
		if (iParam1 && func_92(iParam0))
		{
			return 0;
		}
		if (iParam2 && (((Global_2425662[iVar0].f_200 || Global_2425662[iVar0].f_201) || Global_2425662[iVar0].f_202) || unk_0xA0CCD09012AED177(unk_0x9539D44F3E4492F6(iParam0))))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (func_77(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_77(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_81(iParam0))
	{
		if (func_79(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_80(iParam0, 9);
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_81(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (Global_1628237[iParam0].f_11 != func_116())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_83(int iParam0)
{
	return func_84(func_86(iParam0), 10);
}

bool func_84(int iParam0, int iParam1)
{
	return func_85(iParam0) == iParam1;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
			return 7;
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 161:
			return 6;
		
		case 164:
			return 6;
		
		case 165:
			return 6;
		
		case 166:
			return 6;
		
		case 172:
			return 6;
		
		case 168:
			return 6;
		
		case 173:
			return 6;
		
		case 169:
			return 6;
		
		case 167:
			return 6;
		
		case 170:
			return 6;
		
		case 171:
			return 6;
		
		case 174:
			return 6;
		
		case 73:
		case 74:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case 79:
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 84:
			return 6;
		
		case 83:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 91:
			return 6;
		
		case 92:
			return 6;
		
		case 93:
			return 6;
		
		case 94:
			return 6;
		
		case 102:
			return 6;
		
		case 95:
			return 6;
		
		case 96:
			return 6;
		
		case 97:
			return 6;
		
		case 98:
			return 6;
		
		case 99:
			return 6;
		
		case 100:
			return 6;
		
		case 101:
			return 6;
		
		case 103:
			return 6;
		
		case 104:
			return 6;
		
		case 105:
			return 6;
		
		case 106:
			return 6;
		
		case 107:
			return 6;
		
		case 108:
			return 6;
		
		case 109:
			return 6;
		
		case 110:
			return 6;
		
		case 111:
			return 6;
		
		case 112:
			return 6;
		
		case 113:
			return 6;
		
		case 114:
			return 7;
		
		case 115:
			return 6;
		
		case 116:
			return 6;
		
		case 117:
			return 6;
		
		case 118:
			return 6;
		
		case 119:
			return 6;
		
		case 120:
			return 6;
		
		case 121:
			return 6;
		
		case 122:
			return 6;
		
		case 123:
			return 6;
		
		case 124:
			return 6;
		
		case 125:
			return 6;
		
		case 126:
			return 6;
		
		case 127:
			return 7;
		
		case 128:
			return 6;
		
		case 129:
			return 6;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 130:
			return 6;
		
		case 131:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 134:
			return 6;
		
		case 144:
			return 6;
		
		case 145:
			return 6;
		
		case 146:
			return 6;
		
		case 147:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 142:
			return 6;
		
		case 143:
			return 6;
		
		case 132:
			return 6;
		
		case 135:
			return 6;
		
		case 136:
			return 6;
		
		case 133:
			return 6;
		
		case 137:
			return 6;
		
		case 140:
			return 6;
		
		case 141:
			return 6;
		
		case 148:
			return 6;
		
		case 155:
			return 0;
		
		case 149:
			return 6;
		
		case 156:
			return 0;
		
		case 154:
			return 0;
		
		case 157:
			return 0;
		
		case 150:
			return 6;
		
		case 158:
			return 0;
		
		case 153:
			return 6;
		
		case 159:
			return 0;
		
		case 151:
			return 6;
		
		case 160:
			return 0;
		
		case 152:
			return 6;
		
		case 138:
			return 6;
		
		case 139:
			return 6;
		
		case 176:
			return 6;
		
		case 162:
			return 6;
		
		case 163:
			return 6;
		
		default:
	}
	return 11;
}

int func_86(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

bool func_87(int iParam0)
{
	return func_80(iParam0, 24);
}

bool func_88(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_39.f_18, 6);
}

bool func_89(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1627020[iParam0].f_29, 0);
}

int func_90(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (func_82(iParam0) == 146)
	{
		if (iParam0 == Global_2537071.f_5049)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

int func_94(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_116())
	{
		if (!bParam2)
		{
			if (func_95(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_116())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_95(int iParam0, int iParam1)
{
	if (iParam1 != func_116())
	{
		if (iParam0 != func_116())
		{
			if (Global_1628237[iParam0].f_11 != func_116())
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

int func_96()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

bool func_97(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_98(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_100(int iParam0)
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

int func_101(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_105(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_104(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 != func_116())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_106(int iParam0, bool bParam1)
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
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_109(iParam0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_108(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_104(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_116())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_109(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if (func_113(iParam0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_112(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (iParam0 != func_116())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_116()
{
	return -1;
}

void func_117(var uParam0)
{
	if (uParam0->f_6 == -1)
	{
		uParam0->f_6 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_6, "cannon_charge_fire_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

int func_118(var uParam0)
{
	return uParam0->f_20;
}

bool func_119()
{
	return Global_73825;
}

int func_120(var uParam0)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 221;
	iVar3 = 221;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar2 = 241;
		iVar3 = 242;
	}
	switch (func_118(uParam0))
	{
		case 0:
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 2))
					{
						unk_0x53491B90E4FD0E56(500);
					}
					else
					{
						unk_0x53491B90E4FD0E56(0);
					}
				}
			}
			else
			{
				uParam0->f_11 = unk_0x1C0640BA9A7327B3();
				unk_0x53491B90E4FD0E56(250);
				func_7(uParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x757EF87A33649210())
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 3))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_5), 4);
				}
				func_45(uParam0);
				unk_0x5D96D8530B3D0904(&(uParam0->f_5), 14);
				func_147(1, 2);
				func_7(uParam0, 2);
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 3))
			{
				unk_0x82A772610883F395("MP_OrbitalCannon", 0, 1);
				uParam0->f_7 = 0;
				unk_0x0674E58A79778E99(&(uParam0->f_5), 6);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 7);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 5);
				unk_0xA37A90C62806D848(1);
				unk_0xCFC975972CBB2320("Clear");
				unk_0x225CFE81EA219E44();
				unk_0x7B0C620E7A619AA1(1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_8), 0);
				unk_0x5D96D8530B3D0904(&(uParam0->f_8), 1);
				func_146(uParam0);
				func_53(&(uParam0->f_727), 0, 0);
			}
			else
			{
				unk_0x9A1335ECD7BD117F("MP_OrbitalCannon");
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 1))
				{
					unk_0x7B0C620E7A619AA1(0);
					unk_0x0674E58A79778E99(&(uParam0->f_8), 1);
				}
				unk_0xA37A90C62806D848(1);
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_8, 0))
				{
					unk_0x3F8ED0E306F22B54();
					unk_0x0674E58A79778E99(&(uParam0->f_8), 0);
				}
			}
			unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
			{
				unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 3))
			{
				unk_0x448D99BAB1554268(0);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 3);
			}
			func_7(uParam0, 3);
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 3))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_10), 0);
				unk_0x0674E58A79778E99(&(uParam0->f_5), 4);
				unk_0xE17FDF9E3068281B(&(uParam0->f_22));
				uParam0->f_736 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
				uParam0->f_733 = { unk_0x3B276DB863622D2E(2) };
				bVar0 = true;
			}
			else
			{
				if (!uParam0->f_2)
				{
					unk_0x8BC9595FD2792B5D("dlc_xm_orbital_cannon_camera_active_scene");
				}
				uParam0->f_2 = 1;
				uParam0->f_22 = unk_0xB01F55A0FD1CFD49("ORBITAL_CANNON_CAM");
				if (unk_0x83D8570832F172A7(uParam0->f_22))
				{
					Var4 = { func_145() };
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0x7C19E5E4784BD7CF(0f);
					unk_0x7E60D21B163E9D56();
					if (((Var4.f_1 != 0f && Var4.f_1.f_1 != 0f) && Var4.f_1.f_2 != 0f) && Var4 != 0f)
					{
						if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
						{
							unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
						}
						unk_0x5D96D8530B3D0904(&(uParam0->f_10), 0);
						unk_0x5D96D8530B3D0904(&(uParam0->f_5), 4);
						uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0);
						uParam0->f_736 = { Var4.f_1 };
						unk_0x608A456FDD8A83D8(uParam0->f_4, Var4.f_1);
						unk_0x5F3CBA6EB9341C90(uParam0->f_4, Var4.f_4, 2);
						unk_0x5818C8D5303DCCF8(uParam0->f_4, Var4);
						unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
						unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
						bVar0 = true;
					}
				}
			}
			if (bVar0)
			{
				func_7(uParam0, 7);
			}
			break;
		
		case 7:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_11) > 200)
			{
				func_7(uParam0, 4);
			}
			break;
		
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 1))
			{
				unk_0x486B4ADE317F0689();
			}
			if ((uParam0->f_733 == 0f && uParam0->f_733.f_1 == 0f) && uParam0->f_733.f_2 == 0f)
			{
				unk_0x9E632F16E887F781(uParam0->f_736, 300f, 0);
			}
			else
			{
				unk_0xD67D6A3F0D653D93(uParam0->f_736, uParam0->f_733, 300f, 0);
			}
			unk_0x5D96D8530B3D0904(&(uParam0->f_10), 1);
			unk_0xF49D1BC9EF1C3EF4(uParam0->f_736, -90f, 0f, 0f);
			unk_0x448D99BAB1554268(1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_5), 3);
			uParam0->f_11 = unk_0x1C0640BA9A7327B3();
			func_7(uParam0, 5);
			break;
		
		case 5:
			if (!func_54(&(uParam0->f_725)))
			{
				if (unk_0x68367101660E33F0() || (unk_0x1C0640BA9A7327B3() - uParam0->f_11) > 10000)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 1))
					{
						unk_0x486B4ADE317F0689();
						unk_0x0674E58A79778E99(&(uParam0->f_10), 1);
					}
					func_53(&(uParam0->f_725), 0, 0);
				}
			}
			else if (func_55(&(uParam0->f_725), 2000, 0))
			{
				func_40(&(uParam0->f_725));
				func_7(uParam0, 6);
			}
			break;
		
		case 6:
			unk_0x0674E58A79778E99(&(uParam0->f_10), 0);
			unk_0x0674E58A79778E99(&(uParam0->f_5), 14);
			uParam0->f_736 = { 0f, 0f, 0f };
			uParam0->f_733 = { 0f, 0f, 0f };
			unk_0xF99F2927BEBB5EE7(6);
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 3))
			{
				func_144(uParam0);
			}
			func_7(uParam0, 8);
			break;
		
		case 8:
			if (Global_1676371 == 7 || Global_2513560)
			{
				if (!unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						func_136(1, 0);
						unk_0x82E51BCA72537B6C(500);
					}
				}
				else
				{
					func_7(uParam0, 9);
				}
			}
			break;
		
		case 9:
			unk_0x0674E58A79778E99(&(uParam0->f_10), 0);
			uParam0->f_736 = { 0f, 0f, 0f };
			uParam0->f_733 = { 0f, 0f, 0f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_5), 13);
			func_7(uParam0, 10);
			break;
		
		case 10:
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_10, 3))
			{
				unk_0x13A6351D6FB7E387();
			}
			iVar1 = 1;
			break;
	}
	if (!unk_0x798A3F1296751F46())
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 4) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 15))
		{
			if (unk_0x83D8570832F172A7(uParam0->f_22))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 6))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_STATE");
					unk_0x3CAEA85DA607305E(3);
					unk_0x7E60D21B163E9D56();
					unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
				}
				if (func_54(&(uParam0->f_723)))
				{
					if (!func_55(&(uParam0->f_723), 1000, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 5))
						{
							unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x3CAEA85DA607305E(3);
							unk_0x7E60D21B163E9D56();
							unk_0x0674E58A79778E99(&(uParam0->f_9), 2);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 3);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 4);
							unk_0x5D96D8530B3D0904(&(uParam0->f_9), 5);
						}
					}
					else if (!func_55(&(uParam0->f_723), 2000, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 4))
						{
							unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x3CAEA85DA607305E(2);
							unk_0x7E60D21B163E9D56();
							unk_0x0674E58A79778E99(&(uParam0->f_9), 2);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 3);
							unk_0x5D96D8530B3D0904(&(uParam0->f_9), 4);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 5);
						}
					}
					else if (!func_55(&(uParam0->f_723), 3000, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 3))
						{
							unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x3CAEA85DA607305E(1);
							unk_0x7E60D21B163E9D56();
							unk_0x0674E58A79778E99(&(uParam0->f_9), 2);
							unk_0x5D96D8530B3D0904(&(uParam0->f_9), 3);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 4);
							unk_0x0674E58A79778E99(&(uParam0->f_9), 5);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 2))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_COUNTDOWN");
						unk_0x3CAEA85DA607305E(0);
						unk_0x7E60D21B163E9D56();
						unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
						unk_0x0674E58A79778E99(&(uParam0->f_9), 3);
						unk_0x0674E58A79778E99(&(uParam0->f_9), 4);
						unk_0x0674E58A79778E99(&(uParam0->f_9), 5);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 2))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_COUNTDOWN");
					unk_0x3CAEA85DA607305E(0);
					unk_0x7E60D21B163E9D56();
					unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
					unk_0x0674E58A79778E99(&(uParam0->f_9), 3);
					unk_0x0674E58A79778E99(&(uParam0->f_9), 4);
					unk_0x0674E58A79778E99(&(uParam0->f_9), 5);
				}
				if (func_54(&(uParam0->f_727)))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_CHARGING_LEVEL");
					unk_0x7C19E5E4784BD7CF((IntToFloat(func_135(&(uParam0->f_727), 0, 0)) / 3000f));
					unk_0x7E60D21B163E9D56();
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0))
					{
						unk_0x0674E58A79778E99(&(uParam0->f_9), 0);
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 1))
					{
						unk_0x0674E58A79778E99(&(uParam0->f_9), 1);
					}
				}
				else if (func_118(uParam0) == 10)
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_22, "SET_CHARGING_LEVEL");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7E60D21B163E9D56();
						unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 1))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_9), 1);
						}
					}
				}
				unk_0xD9ACBBA59FD5A09E(0);
				unk_0x6567AE843FADBA94(uParam0->f_22, 255, 255, 255, 0, 1);
				unk_0xD59EF13BB60323B9();
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_5, 13) || unk_0xB8E3620B82AD47D7(0))
				{
					func_133(&(uParam0->f_23));
					func_132(unk_0xF59058FCB716F903(0, 202, true), "HUD_INPUT3", &(uParam0->f_23), 0);
					func_132(unk_0xF59058FCB716F903(0, 203, true), "ORB_CAN_RE", &(uParam0->f_23), 0);
					if (unk_0x91E3F625EF57450D(2))
					{
						func_132(unk_0xF59058FCB716F903(2, iVar3, true), "ORB_CAN_ZOOMO", &(uParam0->f_23), 0);
						func_132(unk_0xF59058FCB716F903(2, iVar2, true), "ORB_CAN_ZOOMI", &(uParam0->f_23), 0);
					}
					else
					{
						func_132(unk_0xF59058FCB716F903(2, iVar2, true), "ORB_CAN_ZOOM", &(uParam0->f_23), 0);
					}
					func_132(unk_0xF59058FCB716F903(2, 24, true), "ORB_CAN_FIRE", &(uParam0->f_23), 0);
					unk_0x0674E58A79778E99(&(uParam0->f_5), 13);
				}
				Var11 = { func_131() };
				func_130(&(uParam0->f_23), 1f);
				func_122(&(uParam0->f_21), &Var11, &(uParam0->f_23), func_129(&(uParam0->f_23)));
				func_121(1);
			}
		}
	}
	return iVar1;
}

void func_121(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_122(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1 || unk_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_128(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_127(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_689, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0].f_54;
						iVar2 = uParam2->f_1[iVar0].f_55;
						iVar3 = uParam2->f_1[iVar0].f_56;
						func_126(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_126(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0].f_54;
						iVar5 = uParam2->f_1[iVar0].f_55;
						func_126(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_125(&(uParam2->f_1[iVar0].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_691, iVar0))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0].f_55);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_126(&(uParam2->f_1[iVar0]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0].f_16)))
					{
						func_126(&(uParam2->f_1[iVar0].f_16));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_125(&(uParam2->f_1[iVar0].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(false);
						unk_0x3CAEA85DA607305E(361);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_699);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_124(*uParam0, uParam1);
	}
	func_123();
}

void func_123()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_124(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_125(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_126(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_127(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_128(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_129(var uParam0)
{
	return uParam0->f_692;
}

void func_130(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_131()
{
	Var0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_132(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_133(var uParam0)
{
	func_134(uParam0);
	uParam0->f_692 = 1;
}

void func_134(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_32), "", 16);
		uParam0->f_1[iVar0].f_36 = 0;
		uParam0->f_1[iVar0].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0].f_38), "", 64);
		uParam0->f_1[iVar0].f_54 = 2;
		uParam0->f_1[iVar0].f_55 = 361;
		uParam0->f_1[iVar0].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

int func_135(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_136(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_141(1, 0, 1);
	}
	else
	{
		func_137(iParam1);
	}
}

void func_137(int iParam0)
{
	func_140();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_139() == 0 || unk_0x798A3F1296751F46())
	{
		func_138(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_138(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_139()
{
	return Global_1312467.f_20;
}

void func_140()
{
	Global_2462226 = 1;
}

void func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (func_142())
	{
		return;
	}
	if ((func_139() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_138(0);
		unk_0x68619D16FD876EAA(1);
		if (!bParam1)
		{
			unk_0x68619D16FD876EAA(1);
		}
		if (bParam2)
		{
			unk_0x730943CECC025C36();
		}
	}
}

int func_142()
{
	if (func_143())
	{
		return Global_2460590;
	}
	return 0;
}

int func_143()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

void func_144(var uParam0)
{
	if (uParam0->f_14 == -1)
	{
		uParam0->f_14 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_14, "background_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

struct<7> func_145()
{
	Var0.f_1 = { -8,8511f, 6835,003f, 400f };
	Var0.f_4 = { -90f, 0f, 0f };
	Var0 = 100f;
	if (Global_2513561 > -1)
	{
		Var0.f_1 = Global_4456448.f_78242[Global_2513561];
		Var0.f_1.f_1 = Global_4456448.f_78242[Global_2513561].f_1;
	}
	return Var0;
}

void func_146(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		uParam0->f_13 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(uParam0->f_13, "cannon_activating_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_147(int iParam0, int iParam1)
{
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0xE3036C83E6030758())
			{
				unk_0x72ABAF57BD8416C7(Global_1661288);
				Global_1661288 = -1f;
				unk_0x260B67E197780222(false);
				bVar2 = true;
			}
			unk_0xCD5125FFD341A313(bVar0);
			unk_0x5D96D8530B3D0904(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 0);
		}
		else
		{
			if (unk_0x6EB03BF238979740() || unk_0xB541E437375DFA3D())
			{
				unk_0xCD5125FFD341A313(false);
				bVar2 = true;
			}
			unk_0x260B67E197780222(bVar0);
			Global_1661288 = unk_0xF7D882B599631E46();
			unk_0x72ABAF57BD8416C7(0,5f);
			unk_0x5D96D8530B3D0904(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = unk_0xD68EA767274B7444();
			}
			if (!Global_1661289 == -1 && unk_0x8AA6DC470ABA63A2(Global_1661289))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x6EB03BF238979740() || unk_0xB541E437375DFA3D())
		{
			unk_0xCD5125FFD341A313(bVar0);
			unk_0x0674E58A79778E99(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 0);
		}
		if (unk_0xE3036C83E6030758())
		{
			unk_0x72ABAF57BD8416C7(Global_1661288);
			Global_1661288 = -1f;
			unk_0x260B67E197780222(bVar0);
			unk_0x0674E58A79778E99(&(Global_1654919[unk_0xD803B885F5E47A62()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = unk_0xD68EA767274B7444();
			}
			if (!Global_1661289 == -1 && unk_0x8AA6DC470ABA63A2(Global_1661289))
			{
				if (iParam1 == 1)
				{
					unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0x4D7F4CC43D4D0DE3(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_148(!bVar0);
}

void func_148(bool bParam0)
{
	func_149(304, bParam0, -1, 1);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_151())
	{
		iVar0 = Global_2583656[iParam0][func_150(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_150(var uParam0)
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

int func_151()
{
	return 1;
	return 0;
}

void func_152(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_36(0))
		{
			func_31(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_153()
{
	Global_22211.f_6 = 1;
}

void func_154()
{
	Global_2537071.f_4532 = 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (func_57() || (func_209() && iParam0))
	{
		if (func_207(unk_0xD803B885F5E47A62()))
		{
			func_206(0);
		}
		if (((!func_205() && !func_204()) && !func_203()) || func_202())
		{
			if (!func_201(bParam2))
			{
				return 0;
			}
		}
		if (!func_200())
		{
			func_199(0);
		}
		bVar0 = func_198();
		bVar1 = func_197();
		bVar2 = func_196();
		bVar3 = func_195();
		bVar4 = func_194();
		bVar5 = func_193();
		bVar6 = func_192();
		bVar7 = func_191();
		bVar8 = func_190();
		iVar9 = func_188();
		func_169(0);
		func_168();
		if (!bParam1)
		{
			if (bVar0)
			{
				func_167();
			}
			if (bVar1)
			{
				func_166();
			}
			if (bVar2)
			{
				func_165();
			}
			if (bVar3)
			{
				func_164();
			}
			if (bVar4)
			{
				func_163();
			}
			if (bVar5)
			{
				func_162();
			}
			if (bVar6)
			{
				func_161();
			}
			if (bVar7)
			{
				func_160();
			}
			if (bVar8)
			{
				func_159();
			}
			if (iVar9 != func_158())
			{
				func_157(iVar9);
			}
		}
		func_156(0);
		Global_2451426.f_1.f_2802 = 0;
	}
	return 1;
}

void func_156(int iParam0)
{
	Global_2450632.f_788 = iParam0;
}

void func_157(int iParam0)
{
	Global_2450632.f_38 = iParam0;
}

int func_158()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

void func_159()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 6);
}

void func_160()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 3);
}

void func_161()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 1);
}

void func_162()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 30);
}

void func_163()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 29);
}

void func_164()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 9);
}

void func_165()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 5);
}

void func_166()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 26);
}

void func_167()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 21);
}

void func_168()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 12);
}

void func_169(bool bParam0)
{
	if (func_186() && !func_202())
	{
		func_185();
		func_184();
	}
	else
	{
		uVar0 = func_183();
		func_182();
		func_180(1);
		func_179();
		func_178();
		func_177();
		if (uVar0 && !bParam0)
		{
			func_176();
		}
	}
	if (Global_2458936.f_8)
	{
		func_175();
	}
	func_174();
	func_173();
	func_172();
	func_171();
	if (!func_200())
	{
		func_170();
		func_199(0);
	}
	func_184();
	func_156(0);
	if (unk_0x8CD06866876216F2())
	{
		unk_0x31A90095FC1C775D(0);
	}
}

void func_170()
{
	Global_2450632.f_7 = -1;
}

void func_171()
{
	Global_2450632.f_38 = func_158();
}

void func_172()
{
	Global_2450632.f_635 = 0;
}

void func_173()
{
	Global_2450632.f_617 = 0;
}

void func_174()
{
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18), 15);
}

void func_175()
{
	Global_2458936.f_8 = 0;
	Global_2458936.f_7 = 0;
}

void func_176()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 2);
}

void func_177()
{
	unk_0x0674E58A79778E99(&Global_2450632, 7);
}

void func_178()
{
	unk_0x0674E58A79778E99(&Global_2450632, 6);
}

void func_179()
{
	Global_2450632 = 0;
	Global_2450632.f_2 = 0;
	Global_2450632.f_3 = 0;
}

void func_180(bool bParam0)
{
	Global_2451426.f_1.f_2798 = 0;
	Global_2451426.f_1.f_2799 = 0;
	Global_2451426.f_1.f_2824 = 0;
	Global_2451426.f_1.f_2805 = 0;
	Global_2451426.f_1.f_2806 = 0;
	Global_2451426.f_1.f_2809 = 0;
	Global_2451426.f_1.f_2810 = 0;
	Global_2451426.f_1.f_2808 = -1;
	Global_2451426.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2451426.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2451426.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2451426.f_1.f_2822 = -1;
		Global_2451426.f_1.f_2823 = -1;
	}
	Global_2451426.f_1.f_2844 = 0;
	func_181();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2451426.f_1.f_845[iVar58] = { Var1 };
		iVar58++;
	}
	Global_2447238.f_33 = -1;
	Global_2447238.f_34 = -1;
}

void func_181()
{
	Global_2447238.f_32 = 0;
}

void func_182()
{
	iVar13 = 0;
	while (iVar13 < 32)
	{
		Global_2448385[iVar13] = { Var0 };
		StringCopy(&(Global_2448385[iVar13].f_13), "", 64);
		StringCopy(&(Global_2448385[iVar13].f_29), "", 16);
		Global_2448385[iVar13].f_33 = 0;
		Global_2448385[iVar13].f_34 = 0;
		Global_2448385[iVar13].f_35 = 0;
		iVar13++;
	}
	Global_2448385.f_1185 = 0;
	Global_2448385.f_1186 = 0;
}

bool func_183()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 2);
}

void func_184()
{
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18), 5);
}

void func_185()
{
	unk_0x0674E58A79778E99(&(Global_2450632.f_2), 11);
}

int func_186()
{
	if (((func_205() || func_204()) || func_203()) || func_187())
	{
		return 1;
	}
	return 0;
}

bool func_187()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 1);
}

int func_188()
{
	if (func_189())
	{
		return 1;
	}
	return Global_2450632.f_38;
}

bool func_189()
{
	return Global_1312837 == 10;
}

bool func_190()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 6);
}

bool func_191()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 3);
}

bool func_192()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 1);
}

bool func_193()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 30);
}

bool func_194()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 29);
}

bool func_195()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 9);
}

bool func_196()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 5);
}

bool func_197()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 26);
}

bool func_198()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 21);
}

void func_199(int iParam0)
{
	if (iParam0 == -1)
	{
		Global_2450632.f_789++;
	}
	else
	{
		Global_2450632.f_789 = iParam0;
	}
}

bool func_200()
{
	return Global_2450632.f_637;
}

int func_201(bool bParam0)
{
	if ((((unk_0xA617BC85A2F934A7() || unk_0x2981EE0569210485()) || unk_0xA4A007D53BDFE08D()) || unk_0x9015CDDF38DFC3F5()) || unk_0x4B015EC2ADFA72E4())
	{
		if (bParam0)
		{
			unk_0x9A458E5B2D885698(43, 0, 0);
			return 1;
		}
		if (unk_0xA4A007D53BDFE08D() || unk_0x9015CDDF38DFC3F5())
		{
			return 0;
		}
		else if (unk_0x2981EE0569210485())
		{
			if (Global_2451426.f_1.f_2802 == 0)
			{
				unk_0x141F0C39D4EE80E3();
				Global_2451426.f_1.f_2802 = 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return 1;
}

bool func_202()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 27);
}

bool func_203()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_204()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_205()
{
	return Global_2450632.f_598;
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_13.f_1), 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_13.f_1), 0);
	}
}

bool func_207(int iParam0)
{
	return func_208(iParam0);
}

bool func_208(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

var func_209()
{
	return Global_2450632.f_656;
}

void func_210()
{
	Global_2439138.f_1156.f_10 = 1;
}

bool func_211()
{
	return Global_2439138.f_1156.f_10;
}

void func_212()
{
	Global_2439138.f_1156.f_9 = 1;
}

bool func_213()
{
	return Global_2439138.f_1156.f_9;
}

void func_214()
{
	Global_2548146.f_258 = 1;
}

int func_215(var uParam0)
{
	iVar0 = 0;
	if (((((func_28(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1199.f_4, 0)) && !unk_0xEAE0D21A50E6C7F4(Global_2359302, 15)) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_233()) && !func_232())
	{
		if ((func_231(uParam0) && func_225(uParam0)) && func_222(uParam0))
		{
			iVar0 = 1;
		}
	}
	if (unk_0xB8E3620B82AD47D7(2))
	{
		func_8(&(uParam0->f_18));
		uParam0->f_18 = -1;
	}
	if (iVar0 && !unk_0x06F8112AA79C53D9(0, 19))
	{
		if (uParam0->f_18 == -1)
		{
			func_221(&(uParam0->f_18), 4, "ORB_CAN_START", 0, 0, 0, 0);
		}
		else if (func_220(uParam0->f_18, 1))
		{
			func_217();
			func_216();
			func_8(&(uParam0->f_18));
			if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_413, 1))
			{
				unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_413), 1);
			}
			return 1;
		}
	}
	else
	{
		func_8(&(uParam0->f_18));
	}
	return 0;
}

void func_216()
{
	if (Global_2439138.f_2723[0].f_2 != 0)
	{
		Global_2439138.f_2723[0].f_2 = 5;
	}
}

void func_217()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_218(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

void func_218(var uParam0, int iParam1)
{
	func_219(uParam0, iParam1);
}

void func_219(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_220(int iParam0, bool bParam1)
{
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_36(0))
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

void func_221(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_8(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

int func_222(var uParam0)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, 0f };
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 1,5f;
			vVar1 = { 252,0321f, 6126,419f, -160,3706f };
			vVar4 = { 253,1175f, 6126,419f, -158,369f };
			break;
		
		case 1:
			fVar0 = 1,5f;
			vVar1 = { 254,3575f, 6126,419f, -160,3894f };
			vVar4 = { 255,5235f, 6126,419f, -158,3873f };
			break;
		
		case 2:
			fVar0 = 1,5f;
			vVar1 = { 260,6575f, 6126,419f, -160,3736f };
			vVar4 = { 262,075f, 6126,419f, -158,3827f };
			break;
		
		case 3:
			fVar0 = 1,5f;
			vVar1 = { 263,2076f, 6126,419f, -160,3984f };
			vVar4 = { 264,5398f, 6126,419f, -158,3723f };
			break;
	}
	vVar8 = { func_224(&uVar7) };
	iVar11 = 0;
	while (iVar11 < 32)
	{
		iVar12 = unk_0x117658E336116132(iVar11);
		if ((iVar12 != func_116() && iVar12 != unk_0xD803B885F5E47A62()) && func_28(iVar12, 1, 1))
		{
			if (func_223(vVar8))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x9539D44F3E4492F6(iVar12), vVar1, vVar4, fVar0, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (unk_0x5A91F08DF773C39D(unk_0x9539D44F3E4492F6(iVar12), vVar8, 1f, 1f, 1f, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar11++;
	}
	return 1;
}

int func_223(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_224(var uParam0)
{
	if (Global_2513561 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2513559, iVar0))
			{
				if (Global_4456448.f_78242[iVar0].f_177 > -1 && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Global_4456448.f_78242[iVar0], 1,5f, 1,5f, 1,5f, 0, 1, 0))
				{
					*uParam0 = Global_4456448.f_78242[iVar0].f_177;
					Global_2513561 = iVar0;
					return Global_4456448.f_78242[iVar0];
				}
			}
			iVar0++;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2513559, Global_2513561))
	{
		if (Global_4456448.f_78242[Global_2513561].f_177 > -1 && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Global_4456448.f_78242[Global_2513561], 1,5f, 1,5f, 1,5f, 0, 1, 0))
		{
			*uParam0 = Global_4456448.f_78242[Global_2513561].f_177;
			return Global_4456448.f_78242[Global_2513561];
		}
	}
	Global_2513561 = -1;
	*uParam0 = -1;
	return 0f, 0f, 0f;
}

int func_225(var uParam0)
{
	fVar0 = 0f;
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 0f;
			break;
		
		case 1:
			fVar0 = 0f;
			break;
		
		case 2:
			fVar0 = 0f;
			break;
		
		case 3:
			fVar0 = 0f;
			break;
	}
	if (!func_223(func_224(&iVar1)))
	{
		if (func_227(unk_0x16F2683693E537C9(), func_224(&iVar1), 45f))
		{
			if (iVar1 > -1)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_226(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), fVar0, 45f))
	{
		return 1;
	}
	return 0;
}

int func_226(float fParam0, float fParam1, float fParam2)
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

bool func_227(int iParam0, vector3 vParam1, float fParam4)
{
	return func_228(unk_0x68F4C0EC296D3901(iParam0, 1), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam4);
}

bool func_228(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	uVar3 = func_229(func_230(vVar0), func_230(vParam4 - vParam0));
	return unk_0x3DCA5D50DD292443(uVar3) <= fParam7;
}

float func_229(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_230(vector3 vParam0)
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

int func_231(var uParam0)
{
	if (!func_223(func_224(&iVar0)))
	{
		if (iVar0 > -1)
		{
			uParam0->f_17 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_232()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

int func_233()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	unk_0x37AD2AB54480FA6A(32, 0, -1);
	func_235(0, -1, 0);
}

int func_235(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_4())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_237())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_236(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_237()
{
	return Global_2450632.f_593;
}

