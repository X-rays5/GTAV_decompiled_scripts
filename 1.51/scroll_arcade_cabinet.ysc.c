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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0,5f;
	ScriptParam_0 = 165;
	if (unk_0x8CD06866876216F2())
	{
		func_389(ScriptParam_0);
	}
	while (true)
	{
		func_388();
		if (unk_0x8CD06866876216F2())
		{
			func_42();
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_3();
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 7))
	{
		Local_139.f_16 = 1;
		Local_139.f_17 = Local_160.f_2712.f_2;
		Local_139.f_18 = Local_160.f_2712.f_6;
		Local_139.f_20 = func_41();
		func_40();
	}
	func_18();
	unk_0xF5A41F3D3B38EFE3(func_16());
	unk_0xF5A41F3D3B38EFE3("MPInvPersHud");
	unk_0xF5A41F3D3B38EFE3("MPInvPersMessages");
	unk_0xF5A41F3D3B38EFE3("MPInvPersMessages2");
	unk_0xF5A41F3D3B38EFE3("MpInvPersCommon");
	if (!unk_0xEA6BC48857E0AC4C(Local_160.f_2895))
	{
		unk_0xF5A41F3D3B38EFE3(Local_160.f_2895);
	}
	unk_0x11CCD0ACA866C6C5(3, false);
	func_15();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_160.f_1801[iVar0].f_12 > -1)
		{
			unk_0x55D0A2DB35045A35(Local_160.f_1801[iVar0].f_12);
			unk_0x43A06902454A1172(Local_160.f_1801[iVar0].f_12);
			Local_160.f_1801[iVar0].f_12 = -1;
		}
		if (Local_160.f_1801[iVar0].f_13 > -1)
		{
			unk_0x55D0A2DB35045A35(Local_160.f_1801[iVar0].f_13);
			unk_0x43A06902454A1172(Local_160.f_1801[iVar0].f_13);
			Local_160.f_1801[iVar0].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_160.f_2729));
	func_12(func_13(6));
	unk_0x42740B44BA8D7B43("DLC_VINEWOOD/DLC_VW_AM_IP");
	if (unk_0x562F77A7F33D2E46("dlc_vw_am_ip_in_gameplay_scene"))
	{
		unk_0x8910D3D58E0132B8("dlc_vw_am_ip_in_gameplay_scene");
	}
	if (unk_0x562F77A7F33D2E46("dlc_vw_am_ip_in_menus_scene"))
	{
		unk_0x8910D3D58E0132B8("dlc_vw_am_ip_in_menus_scene");
	}
	func_11();
	func_9();
	func_8(12);
	func_7(0);
	func_4();
	func_2();
}

void func_4()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 7))
	{
		func_5(12, "CLO_VWM_U_23_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 8))
	{
		func_5(12, "CLO_VWM_U_23_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 9))
	{
		func_5(12, "CLO_VWM_D_1_10", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 10))
	{
		func_5(12, "CLO_VWM_U_23_6", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 11))
	{
		func_5(12, "CLO_VWM_D_1_9", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	iVar0 = func_6(&Global_1385029);
	Global_1385029[iVar0] = iParam0;
	StringCopy(&(Global_1385029[iVar0].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0].f_49), sParam2, 64);
	Global_1385029[iVar0].f_97 = iParam5;
	Global_1385029[iVar0].f_104 = iParam9;
	Global_1385029[iVar0].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0].f_98), sParam8, 24);
	}
}

int func_6(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_7(int iParam0)
{
	Global_1661994 = iParam0;
}

void func_8(int iParam0)
{
	Local_160.f_2870 = iParam0;
}

void func_9()
{
	Local_160.f_2947 = -1;
	if (Local_160.f_2901 != -2147483647)
	{
		Local_160.f_2901 = -2147483647;
	}
	if (!unk_0xEA6BC48857E0AC4C(Local_160.f_2903))
	{
		Local_160.f_2903 = func_10();
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
	}
}

var func_10()
{
	return uVar0;
}

void func_11()
{
	if (Local_160.f_2879 != 0)
	{
		unk_0xE7C86324C5DD2404(Local_160.f_2879);
		unk_0x9A0FD048B9D19293(Local_160.f_2879);
	}
	if (Local_160.f_2880 != 0)
	{
		unk_0xE7C86324C5DD2404(Local_160.f_2880);
		unk_0x9A0FD048B9D19293(Local_160.f_2880);
	}
	if (Local_160.f_2881 != 0)
	{
		unk_0xE7C86324C5DD2404(Local_160.f_2881);
		unk_0x9A0FD048B9D19293(Local_160.f_2881);
	}
}

void func_12(char* sParam0)
{
	unk_0xC92DB9682A650680(sParam0);
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_IAP_THEME_START";
		
		case 1:
			switch (Local_160.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_BRIEF";
				
				case 1:
					return "CASINO_IAP_LEVEL2_BRIEF";
				
				case 2:
					return "CASINO_IAP_LEVEL3_BRIEF";
				
				case 3:
					return "CASINO_IAP_LEVEL4_BRIEF";
				
				case 4:
					return "CASINO_IAP_LEVEL5_BRIEF";
				
				default:
			}
			break;
		
		case 2:
			switch (Local_160.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_PLAY";
				
				case 1:
					return "CASINO_IAP_LEVEL2_PLAY";
				
				case 2:
					return "CASINO_IAP_LEVEL3_PLAY";
				
				case 3:
					return "CASINO_IAP_LEVEL4_PLAY";
				
				case 4:
					return "CASINO_IAP_LEVEL5_PLAY";
				
				default:
			}
			break;
		
		case 3:
			return "CASINO_LEVEL_END";
		
		case 4:
			return "CASINO_IAP_LEADERBOARD_START";
		
		case 5:
			return "CASINO_IAP_STAGE_CLEAR";
		
		case 6:
			return "CASINO_STOP_MUSIC";
		
		case 7:
			return "CASINO_STOP_NO_FADE";
	}
	return "INVALID MUSIC EVENT";
}

void func_14(var uParam0)
{
	if (!unk_0x8AA6DC470ABA63A2(*uParam0))
	{
		unk_0x55D0A2DB35045A35(*uParam0);
	}
	unk_0x43A06902454A1172(*uParam0);
	*uParam0 = -1;
}

void func_15()
{
	if (Local_160.f_2368.f_338 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_338);
		unk_0x43A06902454A1172(Local_160.f_2368.f_338);
		Local_160.f_2368.f_338 = -1;
	}
	if (Local_160.f_2368.f_339 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_339);
		unk_0x43A06902454A1172(Local_160.f_2368.f_339);
		Local_160.f_2368.f_339 = -1;
	}
	if (Local_160.f_2368.f_340 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_340);
		unk_0x43A06902454A1172(Local_160.f_2368.f_340);
		Local_160.f_2368.f_340 = -1;
	}
	if (Local_160.f_2368.f_341 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_341);
		unk_0x43A06902454A1172(Local_160.f_2368.f_341);
		Local_160.f_2368.f_341 = -1;
	}
	if (Local_160.f_2368.f_342 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_342);
		unk_0x43A06902454A1172(Local_160.f_2368.f_342);
		Local_160.f_2368.f_342 = -1;
	}
	if (Local_160.f_2368.f_343 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_343);
		unk_0x43A06902454A1172(Local_160.f_2368.f_343);
		Local_160.f_2368.f_343 = -1;
	}
}

char* func_16()
{
	if (func_17())
	{
		return "MPInvPersPlayerGold";
	}
	return "MPInvPersPlayer";
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 0);
}

void func_18()
{
	Global_1370267 = 0;
	func_38();
	Global_4456448.f_227352 = 0;
	func_37();
	Global_1590535[unk_0xD803B885F5E47A62()].f_750 = 0;
	func_36(0, 1, 1, 0);
	func_35();
	if (func_33() && !unk_0xEB880D98B5988D0C())
	{
		if (unk_0x8CD06866876216F2())
		{
			func_20(unk_0xD803B885F5E47A62(), 1, 0, 0);
		}
		else
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
	func_19(0, 0, -1);
	func_19(1, 0, -1);
	func_19(2, 0, -1);
	func_19(3, 0, -1);
	func_19(4, 0, -1);
	func_19(6, 0, -1);
	func_19(7, 0, -1);
	func_19(8, 0, -1);
	func_19(9, 0, -1);
	func_19(10, 0, -1);
	func_19(11, 0, -1);
	func_19(12, 0, -1);
	func_19(13, 0, -1);
	func_19(14, 0, -1);
	func_19(15, 0, -1);
	func_19(16, 0, -1);
}

void func_19(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_20(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_32())
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
		if (!func_33())
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
				else if (bVar14 || (!func_29(unk_0xD803B885F5E47A62(), 0) && !func_28()))
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
					func_25(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_24(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_23();
					func_22();
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
				if (!func_24(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_21(Global_4456448.f_232883))
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

bool func_21(int iParam0)
{
	return iParam0 == 17;
}

void func_22()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_23()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_24(int iParam0)
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

void func_25(bool bParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (bParam0 == 1)
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
			if (bParam0 == 1)
			{
				func_27();
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
		if (func_29(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_26(-2008016205, bParam0);
	}
}

void func_26(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_27()
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

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_29(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312745;
}

int func_32()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (func_34() == 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	return Global_1312467.f_18;
}

void func_35()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_37()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

void func_38()
{
	if (!Global_1312575)
	{
		return;
	}
	func_39();
}

void func_39()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_40()
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (unk_0xEA6BC48857E0AC4C(&Local_139))
	{
		return;
	}
	if (Local_139.f_19 == 0)
	{
		return;
	}
	Local_139.f_19 = (unk_0x6794171A1021C2D8() - Local_139.f_19);
	unk_0x9AD51814EBA319CB(unk_0x12AB0310C2281427(&Local_139), Local_139.f_16, Local_139.f_17, Local_139.f_18, Local_139.f_19, Local_139.f_20);
}

int func_41()
{
	iVar0 = 0;
	iVar0 = (iVar0 + Local_160.f_2712);
	iVar0 = (iVar0 + Local_160.f_2712.f_3);
	iVar0 = (iVar0 + Local_160.f_2712.f_7);
	iVar0 = (iVar0 + Local_160.f_2712.f_10);
	iVar0 = (iVar0 + Local_160.f_2712.f_12);
	iVar0 = (iVar0 + Local_160.f_2712.f_11);
	return iVar0;
}

void func_42()
{
	func_353();
	func_45();
	func_43();
}

void func_43()
{
	if (!func_44())
	{
		unk_0xE19C2AAC820D8ED5();
	}
	Local_160.f_2368.f_324 = Local_160.f_2368.f_325;
}

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 2);
}

void func_45()
{
	switch (Local_160.f_2870)
	{
		case 0:
			func_334();
			break;
		
		case 1:
			func_329();
			break;
		
		case 2:
			func_327();
			break;
		
		case 3:
			func_325();
			break;
		
		case 4:
			func_317();
			break;
		
		case 5:
			func_310();
			break;
		
		case 6:
			func_307();
			break;
		
		case 7:
			func_268();
			break;
		
		case 8:
			func_266();
			break;
		
		case 9:
			func_97();
			break;
		
		case 10:
			func_46();
			break;
		
		case 11:
			func_3();
			break;
		
		case 12:
			break;
	}
}

void func_46()
{
	func_79();
	func_62();
	func_58();
	if (!func_57())
	{
		return;
	}
	if (func_56() < 10)
	{
		Local_160.f_2912[func_56()].f_2 = 0;
		Local_160.f_2912[func_56()] = Local_160.f_2944;
	}
	func_9();
	func_55();
	func_54();
	func_48();
	func_47("Frontend_Retry");
	func_8(4);
}

void func_47(char* sParam0)
{
	unk_0x4D7F4CC43D4D0DE3(-1, sParam0, "dlc_vw_am_ip_frontend_sounds", false);
}

void func_48()
{
	Local_160.f_2871 = 0;
	func_53();
	Local_160.f_2943 = 0;
	Local_160.f_2944 = 0;
	Local_160.f_2945 = -1;
	if (func_52(&(Local_160.f_2898), 33))
	{
		func_49(&(Local_160.f_2898), 33);
	}
}

void func_49(var uParam0, int iParam1)
{
	unk_0x0674E58A79778E99(uParam0[func_51(iParam1)], func_50(iParam1));
}

int func_50(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_51(iParam0) * 31);
}

int func_51(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

bool func_52(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[func_51(iParam1)], func_50(iParam1));
}

void func_53()
{
	Local_160.f_2712 = 0;
	Local_160.f_2712.f_1 = 0;
	Local_160.f_2712.f_2 = 0;
	Local_160.f_2712.f_3 = 0;
	Local_160.f_2712.f_4 = 0;
	Local_160.f_2712.f_6 = 0;
	Local_160.f_2712.f_5 = 0;
	Local_160.f_2712.f_7 = 0;
	Local_160.f_2712.f_8 = 0;
	Local_160.f_2712.f_9 = 0;
	Local_160.f_2712.f_10 = 0;
	Local_160.f_2712.f_11 = 0;
	Local_160.f_2712.f_12 = 0;
}

void func_54()
{
	Local_160.f_2880 = unk_0xA3888F288861A701("I&P_intro_16x9");
	unk_0x6A42C4E2AEFD4206(Local_160.f_2880);
	unk_0xE120EFE18EF0CF4D(Local_160.f_2880, 1);
}

void func_55()
{
	unk_0xE7C86324C5DD2404(Local_160.f_2881);
	unk_0x9A0FD048B9D19293(Local_160.f_2881);
}

int func_56()
{
	if (Local_160.f_2945 != -1)
	{
		return Local_160.f_2945;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_160.f_2912[iVar0].f_2)
		{
			Local_160.f_2945 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

int func_57()
{
	iVar0 = 199;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 201;
	}
	if (unk_0xD245978525608929(2, iVar0))
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 2);
	if (func_56() == 99 || Local_160.f_2943 > 2)
	{
		StringCopy(&Var0, "IAP_H_LBD0", 16);
		if (unk_0x33A494591F2C1975())
		{
			StringConCat(&Var0, "_PS4", 16);
		}
	}
	else if (Local_160.f_2943 == 2)
	{
		StringCopy(&Var0, "IAP_H_LBD1", 16);
	}
	else
	{
		StringCopy(&Var0, "IAP_H_LBD2", 16);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		StringConCat(&Var0, "_PC", 16);
	}
	if (func_61(&Var0))
	{
		return;
	}
	func_9();
	func_59(&Var0);
}

void func_59(char* sParam0)
{
	Local_160.f_2947 = unk_0x12AB0310C2281427(sParam0);
	func_60(sParam0);
}

void func_60(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_61(char* sParam0)
{
	if (Local_160.f_2947 == unk_0x12AB0310C2281427(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_62()
{
	if (func_56() >= 10)
	{
		return;
	}
	if (unk_0x9F618E6F8EA8EFDE(Local_160.f_2946))
	{
		if (unk_0x3E3CF43636981693(Local_160.f_2946))
		{
			return;
		}
		if (unk_0x80A5E3A24A5F654D(Local_160.f_2946))
		{
			Local_160.f_2912[func_56()] = Local_160.f_2944;
			func_69(func_71(unk_0xD803B885F5E47A62()), 1, func_56(), Local_160.f_2912[func_56()], Local_160.f_2912[func_56()].f_1, 0);
			Local_160.f_2946 = 0;
		}
		else
		{
			func_47("Frontend_Change_Letter");
			Local_160.f_2943 = 0;
			Local_160.f_2944 = 0;
			Local_160.f_2946 = 0;
		}
		return;
	}
	if (Local_160.f_2943 >= 3)
	{
		return;
	}
	iVar5 = 227;
	iVar6 = 226;
	iVar7 = 191;
	iVar8 = 194;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar7 = 237;
		iVar8 = 238;
		iVar5 = 188;
		iVar6 = 187;
	}
	if (unk_0xD245978525608929(2, iVar7))
	{
		Local_160.f_2943++;
		if (Local_160.f_2943 >= 3)
		{
			Local_160.f_2943 = 3;
			func_67(Local_160.f_2944, &iVar0);
			StringCopy(&cVar9, func_66(iVar0[0]), 4);
			StringConCat(&cVar9, func_66(iVar0[1]), 4);
			StringConCat(&cVar9, func_66(iVar0[2]), 4);
			if (unk_0xDE39D2F0ED5FFA62(&cVar9, &(Local_160.f_2946)))
			{
				func_47("Frontend_Entered_Score");
			}
		}
		return;
	}
	if (unk_0xD245978525608929(2, iVar8))
	{
		if (Local_160.f_2943 > 0)
		{
			Local_160.f_2943 = (Local_160.f_2943 - 1);
		}
		return;
	}
	iVar10 = 0;
	if (unk_0xD245978525608929(2, iVar5))
	{
		iVar10 = 1;
	}
	else if (unk_0xD245978525608929(2, iVar6))
	{
		iVar10 = -1;
	}
	if (iVar10 == 0)
	{
		return;
	}
	func_47("Frontend_Change_Letter");
	func_67(Local_160.f_2944, &iVar0);
	iVar0[Local_160.f_2943] = (iVar0[Local_160.f_2943] + iVar10);
	if (iVar0[Local_160.f_2943] >= 36)
	{
		iVar0[Local_160.f_2943] = 0;
	}
	else if (iVar0[Local_160.f_2943] < 0)
	{
		iVar0[Local_160.f_2943] = 35;
	}
	Local_160.f_2944 = func_63(&iVar0);
}

var func_63(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_64(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_64(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uVar0 = func_65(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || shift_left(iParam3, (iParam1 * iParam2)));
}

var func_65(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		unk_0x5D96D8530B3D0904(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

void func_67(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_68(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_65(iParam2, 0);
	return (shift_right(iParam0, (iParam1 * iParam2)) && uVar0);
}

void func_69(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	Var0 = -824668791;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar7 = func_70(iParam0);
	if (!iVar7 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iVar7);
	}
}

var func_70(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_71(int iParam0)
{
	if (iParam0 == func_78())
	{
		return iParam0;
	}
	if (func_76(iParam0) != -1)
	{
		iVar0 = func_75(func_76(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_73(iParam0, 0))
			{
				return func_72(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_78();
		}
		return Global_2425662[iParam0].f_310.f_8;
	}
	return func_78();
}

int func_72(int iParam0)
{
	if (iParam0 != func_78())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_78();
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_78();
}

int func_74(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (Global_1628237[iParam0].f_11 != func_78())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_75(int iParam0)
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

int func_76(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_77(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == unk_0xD803B885F5E47A62()) && func_77(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
	}
	return -1;
}

int func_77(int iParam0, bool bParam1, bool bParam2)
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

int func_78()
{
	return -1;
}

void func_79()
{
	unk_0xA99E375332B0EFB1(Local_160.f_2881, 0,5f, 0,5f, (1f * fLocal_136), 1f, 0f, 255, 255, 255, 255);
	fVar5 = 0,22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		if (Local_160.f_2912[iVar6].f_2 && (Local_160.f_2943 < 3 || unk_0x9F618E6F8EA8EFDE(Local_160.f_2946)))
		{
			func_67(Local_160.f_2944, &uVar0);
		}
		else
		{
			func_67(Local_160.f_2912[iVar6], &uVar0);
		}
		iVar7 = 255;
		if (Local_160.f_2912[iVar6].f_2)
		{
			iVar7 = round(unk_0x755FF954DAE327E1((sin((to_float(unk_0x2B6E0A53779D29EA()) * 0,5f)) * 80f))) + 175;
		}
		unk_0xD3539A877EC25E86(1f, 1f);
		unk_0x7178F32F6742C936(0, 0, 0, iVar7);
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96((0,37f + 0,001041667f)));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9(func_95(iVar6));
		unk_0xE0026608C37C7C41(func_96(0,5f), (fVar5 + 0,003703704f), 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		unk_0x7178F32F6742C936(255, 255, 255, iVar7);
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96(0,37f));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9(func_95(iVar6));
		unk_0xE0026608C37C7C41(func_96(0,5f), fVar5, 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 0)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_24, Local_160.f_1765.f_24.f_1, Local_160.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(0, 0, 0, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96((0,4135417f + 0,001041667f)));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[0]));
		unk_0xE0026608C37C7C41(func_96(0,5f), (fVar5 + 0,003703704f), 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 0)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_28, Local_160.f_1765.f_28.f_1, Local_160.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(255, 255, 255, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96(0,4135417f));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[0]));
		unk_0xE0026608C37C7C41(func_96(0,5f), fVar5, 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 1)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_24, Local_160.f_1765.f_24.f_1, Local_160.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(0, 0, 0, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96((0,4411458f + 0,001041667f)));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[1]));
		unk_0xE0026608C37C7C41(func_96(0,5f), (fVar5 + 0,003703704f), 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 1)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_28, Local_160.f_1765.f_28.f_1, Local_160.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(255, 255, 255, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96(0,4411458f));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[1]));
		unk_0xE0026608C37C7C41(func_96(0,5f), fVar5, 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 2)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_24, Local_160.f_1765.f_24.f_1, Local_160.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(0, 0, 0, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96((0,46875f + 0,001041667f)));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[2]));
		unk_0xE0026608C37C7C41(func_96(0,5f), (fVar5 + 0,003703704f), 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		if (Local_160.f_2912[iVar6].f_2 && Local_160.f_2943 == 2)
		{
			unk_0x7178F32F6742C936(Local_160.f_1765.f_28, Local_160.f_1765.f_28.f_1, Local_160.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(255, 255, 255, iVar7);
		}
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96(0,46875f));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(func_66(uVar0[2]));
		unk_0xE0026608C37C7C41(func_96(0,5f), fVar5, 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		unk_0x7178F32F6742C936(0, 0, 0, iVar7);
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96((0,695f + 0,001041667f)));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("IAP_SCR");
		unk_0x6D99DF8263D35CE5(Local_160.f_2912[iVar6].f_1);
		unk_0xE0026608C37C7C41(func_96(0,5f), (fVar5 + 0,003703704f), 0);
		unk_0xD3539A877EC25E86(1f, 1f);
		unk_0x7178F32F6742C936(255, 255, 255, iVar7);
		unk_0xFF72A133B792782E(1);
		unk_0xF1F881BAAAFB43B1(func_96(0f), func_96(0,695f));
		unk_0x7BBAC160090910C3(7);
		unk_0x070005E852D4C0E9("IAP_SCR");
		unk_0x6D99DF8263D35CE5(Local_160.f_2912[iVar6].f_1);
		unk_0xE0026608C37C7C41(func_96(0,5f), fVar5, 0);
		fVar5 = (fVar5 + 0,06f);
		iVar6++;
	}
	func_82();
	func_80();
}

void func_80()
{
	func_81("MPInvPersMessages", "facade", 0,5f, 0,5f, 1f, 1f, 0f, Local_160.f_1765);
}

void func_81(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	iVar0 = round((fParam3 * IntToFloat(iLocal_138)));
	fParam3 = (to_float(iVar0) * (1f / IntToFloat(iLocal_138)));
	iVar0 = round(((fParam5 * IntToFloat(iLocal_138)) / 4f)) * 4;
	fParam5 = (to_float(iVar0) * (1f / IntToFloat(iLocal_138)));
	unk_0xC5491665BE0F7169(sParam0, sParam1, func_96(fParam2), fParam3, (fParam4 * fLocal_136), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

void func_82()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_83(iVar0);
		iVar0++;
	}
}

void func_83(int iParam0)
{
	if (!Local_3117[iParam0])
	{
		return;
	}
	Var0 = { func_94() };
	Var6.f_3 = 255;
	if (Local_3117[iParam0].f_3)
	{
		Var0 = -Var0;
	}
	Var2 = { func_93() };
	if (!Local_3117[iParam0].f_2)
	{
		if (Local_3117[iParam0].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_3117[iParam0].f_4) % (IntToFloat(Local_3117[iParam0].f_6) * 1f))) / (IntToFloat(Local_3117[iParam0].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_3117[iParam0].f_7 > 0)
		{
			Local_3117[iParam0].f_4 = unk_0x09AC81E49EA267F7(0, Local_3117[iParam0].f_7);
			Local_3117[iParam0].f_2 = 1;
		}
	}
	else if (Local_3117[iParam0].f_4 > 0)
	{
	}
	else
	{
		Local_3117[iParam0].f_4 = Local_3117[iParam0].f_6;
		Local_3117[iParam0].f_2 = 0;
	}
	if (Local_3117[iParam0].f_1)
	{
		fVar10 = (to_float(Local_3117[iParam0].f_5) / to_float(Local_3117[iParam0].f_8));
		Var6 = func_92(Local_3117[iParam0].f_9, Local_3117[iParam0].f_13, fVar10);
		Var6.f_1 = func_92(Local_3117[iParam0].f_9.f_1, Local_3117[iParam0].f_13.f_1, fVar10);
		Var6.f_2 = func_92(Local_3117[iParam0].f_9.f_2, Local_3117[iParam0].f_13.f_2, fVar10);
		Var6.f_3 = func_92(Local_3117[iParam0].f_9.f_3, Local_3117[iParam0].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_3117[iParam0].f_9 };
	}
	if (unk_0xEA6BC48857E0AC4C(func_91(iParam0)))
	{
		func_88(Var2, Var0, Var6);
	}
	else
	{
		func_84(func_87(iParam0), func_91(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_3117[iParam0].f_2 && Local_3117[iParam0].f_4 > 0)
	{
		if (unk_0xEA6BC48857E0AC4C(func_91(0)))
		{
			func_88(Var4, Var0, Var6);
		}
		else
		{
			func_84(func_87(iParam0), func_91(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_3117[iParam0].f_5 = (Local_3117[iParam0].f_5 - round((unk_0x6117725E0134737F() * 1000f)));
	if (Local_3117[iParam0].f_5 < 0)
	{
		Local_3117[iParam0].f_5 = (Local_3117[iParam0].f_5 + Local_3117[iParam0].f_8);
	}
	Local_3117[iParam0].f_4 = (Local_3117[iParam0].f_4 - round((unk_0x6117725E0134737F() * 1000f)));
	if (Local_3117[iParam0].f_4 < 0)
	{
		Local_3117[iParam0].f_4 = 0;
	}
}

void func_84(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)
{
	Param2 = { func_85(Param2) };
	Param4 = { func_85(Param4) };
	func_81(sParam0, sParam1, Param2, Param2.f_1, Param4, Param4.f_1, fParam6, Param7);
}

struct<2> func_85(struct<2> Param0)
{
	return func_86((Param0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_86(float fParam0, float fParam1)
{
	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_88(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_85(Param0) };
	Param2 = { func_85(Param2) };
	func_89(Param0, Param2, Param4);
}

void func_89(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_90(Param0) };
	Param2 = (Param2 * fLocal_136);
	unk_0xC1032CAC14DE468A(Param0, Param0.f_1, Param2, Param2.f_1, Param4, Param4.f_1, Param4.f_2, Param4.f_3, 0);
}

struct<2> func_90(struct<2> Param0)
{
	Param0 = func_96(Param0);
	return Param0;
}

char* func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_92(int iParam0, int iParam1, float fParam2)
{
	return round((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_93()
{
	return func_86((1920f / 2f), (1080f / 2f));
}

struct<2> func_94()
{
	return func_86(1920f, 1080f);
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IAP_1ST";
		
		case 1:
			return "IAP_2ND";
		
		case 2:
			return "IAP_3RD";
		
		case 3:
			return "IAP_4TH";
		
		case 4:
			return "IAP_5TH";
		
		case 5:
			return "IAP_6TH";
		
		case 6:
			return "IAP_7TH";
		
		case 7:
			return "IAP_8TH";
		
		case 8:
			return "IAP_9TH";
		
		case 9:
			return "IAP_10TH";
		
		default:
	}
	return "";
}

float func_96(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0,5f - ((0,5f - fParam0) / fLocal_135));
	return fParam0;
}

void func_97()
{
	func_230();
	func_229();
	func_225();
	func_212();
	func_211();
	func_210();
	func_209();
	func_206();
	func_203();
	func_133();
	if (func_131())
	{
		if (!func_118())
		{
			return;
		}
		if (!func_117(&(Local_160.f_2886)))
		{
			func_116(&(Local_160.f_2886), 0, 0);
		}
		else if (func_114(&(Local_160.f_2886), 7500, 0))
		{
			Local_160.f_2871++;
			if (Local_160.f_2871 == 5)
			{
				func_109();
			}
			else
			{
				func_99();
				func_7(2);
				func_12(func_13(1));
				if (unk_0x562F77A7F33D2E46("dlc_vw_am_ip_in_gameplay_scene"))
				{
					unk_0x8910D3D58E0132B8("dlc_vw_am_ip_in_gameplay_scene");
				}
				unk_0x8BC9595FD2792B5D("dlc_vw_am_ip_in_menus_scene");
				func_8(5);
			}
			func_98(&(Local_160.f_2886));
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 8) && func_114(&(Local_160.f_2886), 5500, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 8);
			func_12(func_13(3));
		}
	}
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_99()
{
	Global_1661994.f_1 = Local_160.f_2871;
	func_105(Local_160.f_2871);
	if (!unk_0xEA6BC48857E0AC4C(Local_160.f_2895))
	{
		unk_0xF5A41F3D3B38EFE3(Local_160.f_2895);
	}
	Local_160.f_2895 = Local_160.f_723;
	Local_160.f_2712.f_1 = 0;
	Local_160.f_2712.f_8 = 0;
	Local_160.f_2712.f_4 = 0;
	Local_160.f_2214.f_124 = -1f;
	Local_160.f_2214.f_125 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Local_160.f_2214.f_113[iVar0] = 0f;
		iVar0++;
	}
	Local_160.f_2211 = 0;
	Local_160.f_2210 = 0;
	Local_160.f_2213 = 0;
	Local_160.f_2212 = 0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		Local_160.f_1801[iVar0] = -1;
		Local_160.f_1801[iVar0].f_10 = 0;
		if (Local_160.f_1801[iVar0].f_12 > -1)
		{
			unk_0x55D0A2DB35045A35(Local_160.f_1801[iVar0].f_12);
			unk_0x43A06902454A1172(Local_160.f_1801[iVar0].f_12);
			Local_160.f_1801[iVar0].f_12 = -1;
		}
		if (Local_160.f_1801[iVar0].f_13 > -1)
		{
			unk_0x55D0A2DB35045A35(Local_160.f_1801[iVar0].f_13);
			unk_0x43A06902454A1172(Local_160.f_1801[iVar0].f_13);
			Local_160.f_1801[iVar0].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_160.f_2729));
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_160.f_2730[iVar0].f_1 = -1;
		iVar0++;
	}
	Local_160.f_2811 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Local_160.f_1998[iVar0].f_11 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_160.f_2368.f_3[iVar0].f_11 = -2147483647;
		iVar0++;
	}
	Local_160.f_2872 = 0f;
	Local_160.f_2873 = Local_160.f_2;
	func_103();
	Local_160.f_2368.f_325 = 0;
	Local_160.f_2368.f_324 = 0;
	Local_160.f_2368.f_321.f_1 = (-0,061111f + Local_160.f_3);
	Local_160.f_2368.f_321 = 0f;
	if (Local_160.f_2907)
	{
		Local_160.f_2368.f_330 = 99;
	}
	else
	{
		Local_160.f_2368.f_330 = 3;
	}
	Local_160.f_2368.f_331 = 20;
	Local_160.f_2368.f_332 = 0;
	Local_160.f_2368.f_334 = -2147483647;
	Local_160.f_2368.f_335 = -2147483647;
	Local_160.f_2368.f_333 = 0;
	StringCopy(&(Local_160.f_2368.f_303), "tank_drive", 64);
	func_102(0);
	Local_160.f_2368.f_286 = -2147483647;
	Local_160.f_2368.f_320 = 0;
	func_101(0);
	func_100(0);
	func_15();
	Local_160.f_2878 = 0;
	if (func_117(&(Local_160.f_2884)))
	{
		func_98(&(Local_160.f_2884));
	}
	if (func_117(&(Local_160.f_2886)))
	{
		func_98(&(Local_160.f_2886));
	}
	if (func_117(&(Local_160.f_2888)))
	{
		func_98(&(Local_160.f_2888));
	}
}

void func_100(int iParam0)
{
	Local_160.f_2368.f_1 = iParam0;
}

void func_101(int iParam0)
{
	Local_160.f_2368 = iParam0;
}

void func_102(int iParam0)
{
	Local_160.f_2368.f_2 = iParam0;
	if (iParam0 != 0 && unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 1);
	}
}

void func_103()
{
	Local_160.f_2340 = (0,15625f + (Local_160.f_726 / 2f));
	Local_160.f_2340.f_3 = (0,15625f + (Local_160.f_741 / 2f));
	Local_160.f_2340.f_2 = (0,15625f + (Local_160.f_736 / 2f));
	Local_160.f_2340.f_1 = (0,15625f + (Local_160.f_731 / 2f));
	fVar1 = Local_160.f_746;
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_745 - 1))
	{
		Local_160.f_2340.f_4[iVar0] = ((0,15625f + (fVar1 * IntToFloat(iVar0))) + (fVar1 / 2f));
		Local_160.f_2340.f_12[iVar0] = 0;
		iVar0++;
	}
	if (func_104())
	{
		Local_160.f_2896 = { func_86((0,15625f - (0,25f / 2f)), (1f + (0,325926f / 2f))) };
	}
}

int func_104()
{
	if (Local_160.f_2871 == 3)
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_160 = 100f;
			Local_160.f_1 = 600247221;
			Local_160.f_2 = (1f + 0f);
			Local_160.f_3 = ((0,798148f - 0,06944444f) + 0,02314815f);
			Local_160.f_723 = "MPInvPersStage0";
			Local_160.f_724 = "background";
			Local_160.f_725 = 3;
			Local_160.f_726 = { func_86(0,658333f, 1f) };
			Local_160.f_728 = (0,5f - 0,06944444f);
			Local_160.f_729 = "midground_3";
			Local_160.f_730 = 3;
			Local_160.f_731 = { func_86(0,658333f, 0,214815f) };
			Local_160.f_733 = (0,470378f - 0,06944444f);
			Local_160.f_734 = "midground_2";
			Local_160.f_735 = 3;
			Local_160.f_736 = { func_86(0,658333f, 0,4f) };
			Local_160.f_738 = (0,483333f - 0,06944444f);
			Local_160.f_739 = "midground_1";
			Local_160.f_740 = 3;
			Local_160.f_741 = { func_86(0,658333f, 0,296296f) };
			Local_160.f_743 = (0,785183f - 0,06944444f);
			Local_160.f_744 = "foreground";
			Local_160.f_745 = 6;
			Local_160.f_746 = { func_86(0,191667f, 0,211111f) };
			Local_160.f_748 = ((0,89444f - 0,06944444f) + 0,02314815f);
			func_108(&(Local_160.f_749), 220, 169, 80, 255);
			break;
		
		case 1:
			Local_160 = 150f;
			Local_160.f_1 = 1179731900;
			Local_160.f_2 = (1f + 0,08f);
			Local_160.f_3 = ((0,794444f - 0,06944444f) + 0,02314815f);
			Local_160.f_723 = "MPInvPersStage2";
			Local_160.f_724 = "background";
			Local_160.f_725 = 3;
			Local_160.f_726 = { func_86(0,658333f, 0,5f) };
			Local_160.f_728 = (0,25f - 0,06944444f);
			Local_160.f_729 = "midground_3";
			Local_160.f_730 = 3;
			Local_160.f_731 = { func_86(0,658333f, 0,437037f) };
			Local_160.f_733 = 0,2185185f;
			Local_160.f_734 = "midground_2";
			Local_160.f_735 = 3;
			Local_160.f_736 = { func_86(0,604167f, 0,466667f) };
			Local_160.f_738 = 0,290741f;
			Local_160.f_739 = "midground_1";
			Local_160.f_740 = 4;
			Local_160.f_741 = { func_86(0,333333f, 0,52963f) };
			Local_160.f_743 = ((0,735185f - 0,06944444f) + 0,02314815f);
			Local_160.f_744 = "foreground";
			Local_160.f_745 = 6;
			Local_160.f_746 = { func_86(0,216667f, 0,214815f) };
			Local_160.f_748 = ((0,892593f - 0,06944444f) + 0,02314815f);
			func_108(&(Local_160.f_749), 192, 135, 135, 255);
			break;
		
		case 2:
			Local_160 = 250f;
			Local_160.f_1 = -42177296;
			Local_160.f_2 = (1f + 0,2f);
			Local_160.f_3 = ((0,798148f - 0,06944444f) + 0,02314815f);
			Local_160.f_723 = "MPInvPersStage1";
			Local_160.f_724 = "background";
			Local_160.f_725 = 3;
			Local_160.f_726 = { func_86(0,658333f, 1f) };
			Local_160.f_728 = (0,5f - 0,06944444f);
			Local_160.f_729 = "midground_3";
			Local_160.f_730 = 3;
			Local_160.f_731 = { func_86(0,658333f, 0,396296f) };
			Local_160.f_733 = (0,471296f - 0,06944444f);
			Local_160.f_734 = "midground_2";
			Local_160.f_735 = 3;
			Local_160.f_736 = { func_86(0,658333f, 0,518519f) };
			Local_160.f_738 = (0,4101845f - 0,06944444f);
			Local_160.f_739 = "midground_1";
			Local_160.f_740 = 4;
			Local_160.f_741 = { func_86(0,229167f, 0,396296f) };
			Local_160.f_743 = ((0,801852f - 0,06944444f) + 0,02314815f);
			Local_160.f_744 = "foreground";
			Local_160.f_745 = 5;
			Local_160.f_746 = { func_86(0,3104167f, 0,2111111f) };
			Local_160.f_748 = ((0,8944445f - 0,06944444f) + 0,02314815f);
			func_108(&(Local_160.f_749), 207, 160, 154, 255);
			break;
		
		case 3:
			Local_160 = 350f;
			Local_160.f_1 = 714966858;
			Local_160.f_2 = (1f + 0,4f);
			Local_160.f_3 = ((0,794444f - 0,06944444f) + 0,02314815f);
			Local_160.f_723 = "MPInvPersStage3";
			Local_160.f_724 = "background";
			Local_160.f_725 = 3;
			Local_160.f_726 = { func_86(0,547917f, 0,444444f) };
			Local_160.f_728 = ((0,222222f - 0,06944444f) + 0,018f);
			Local_160.f_729 = "midground_3";
			Local_160.f_730 = 3;
			Local_160.f_731 = { func_86(0,533333f, 0,251852f) };
			Local_160.f_733 = ((0,515741f - 0,06944444f) + 0,018f);
			Local_160.f_734 = "midground_2";
			Local_160.f_735 = 3;
			Local_160.f_736 = { func_86(0,658333f, 0,52963f) };
			Local_160.f_738 = ((0,415741f - 0,06944444f) + 0,052f);
			Local_160.f_739 = "midground_1";
			Local_160.f_740 = 3;
			Local_160.f_741 = { func_86(0,658333f, 0,888889f) };
			Local_160.f_743 = ((0,555556f - 0,06944444f) + 0,043f);
			Local_160.f_744 = "foreground";
			Local_160.f_745 = 6;
			Local_160.f_746 = { func_86(0,172917f, 0,214815f) };
			Local_160.f_748 = ((0,89444f - 0,06944444f) + 0,02314815f);
			func_108(&(Local_160.f_749), 96, 122, 142, 255);
			break;
		
		case 4:
			Local_160 = -1f;
			Local_160.f_1 = -678704902;
			Local_160.f_2 = (1f + 0,6f);
			Local_160.f_3 = ((0,807037f - 0,06944444f) + 0,02314815f);
			Local_160.f_723 = "MPInvPersStage4";
			Local_160.f_724 = "background";
			Local_160.f_725 = 3;
			Local_160.f_726 = { func_86(0,6583334f, 0,4740741f) };
			Local_160.f_728 = 0,25f;
			Local_160.f_729 = "midground_3";
			Local_160.f_730 = 3;
			Local_160.f_731 = { func_86(0,6583334f, 0,237037f) };
			Local_160.f_733 = ((0,4712963f - 0,075f) + 0,018f);
			Local_160.f_734 = "midground_2";
			Local_160.f_735 = 3;
			Local_160.f_736 = { func_86(0,6583334f, 0,4740741f) };
			Local_160.f_738 = (0,3898148f + 0,036f);
			Local_160.f_739 = "midground_1";
			Local_160.f_740 = 3;
			Local_160.f_741 = { func_86(0,6583334f, 0,4481482f) };
			Local_160.f_743 = (0,7092593f + 0,052f);
			Local_160.f_744 = "foreground";
			Local_160.f_745 = 7;
			Local_160.f_746 = { func_86(0,16875f, (0,2222222f - 0,01111111f)) };
			Local_160.f_748 = ((0,8333324f - (0,01111111f / 2f)) + 0,02314815f);
			func_108(&(Local_160.f_749), 0, 0, 0, 255);
			break;
	}
	func_107(iParam0);
	func_106(iParam0);
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_160.f_680[0] = 31;
			Local_160.f_680[0].f_1 = 2,15f;
			Local_160.f_680[0].f_2 = 2;
			Local_160.f_680[1] = 31;
			Local_160.f_680[1].f_1 = 2,9f;
			Local_160.f_680[1].f_2 = 2;
			Local_160.f_680[2] = 31;
			Local_160.f_680[2].f_1 = 3,75f;
			Local_160.f_680[2].f_2 = 2;
			Local_160.f_680[3] = 30;
			Local_160.f_680[3].f_1 = 1,75f;
			Local_160.f_680[3].f_2 = 2;
			Local_160.f_680[4] = 30;
			Local_160.f_680[4].f_1 = 2,5f;
			Local_160.f_680[4].f_2 = 2;
			Local_160.f_680[5] = 32;
			Local_160.f_680[5].f_1 = 1,75f;
			Local_160.f_680[5].f_2 = 0;
			Local_160.f_680[6] = 32;
			Local_160.f_680[6].f_1 = 2,5f;
			Local_160.f_680[6].f_2 = 0;
			Local_160.f_680[7] = 32;
			Local_160.f_680[7].f_1 = 3f;
			Local_160.f_680[7].f_2 = 0;
			Local_160.f_680[8] = 32;
			Local_160.f_680[8].f_1 = 3,75f;
			Local_160.f_680[8].f_2 = 0;
			Local_160.f_680[9] = 30;
			Local_160.f_680[9].f_1 = 1,75f;
			Local_160.f_680[9].f_2 = 0;
			Local_160.f_680[10] = 30;
			Local_160.f_680[10].f_1 = 3,5f;
			Local_160.f_680[10].f_2 = 0;
			Local_160.f_680[11] = 29;
			Local_160.f_680[11].f_1 = 2f;
			Local_160.f_680[11].f_2 = 0;
			Local_160.f_680[12] = 29;
			Local_160.f_680[12].f_1 = 3,25f;
			Local_160.f_680[12].f_2 = 0;
			Local_160.f_680[13] = 29;
			Local_160.f_680[13].f_1 = 4,25f;
			Local_160.f_680[13].f_2 = 0;
			break;
	}
}

void func_107(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 224)
	{
		Local_160.f_4[iVar0] = -1;
		Local_160.f_4[iVar0].f_1 = 0f;
		Local_160.f_4[iVar0].f_2 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			Local_160.f_4[0] = 0;
			Local_160.f_4[0].f_1 = 3f;
			Local_160.f_4[1] = 5;
			Local_160.f_4[1].f_1 = 7f;
			Local_160.f_4[2] = 6;
			Local_160.f_4[2].f_1 = 12f;
			Local_160.f_4[3] = 0;
			Local_160.f_4[3].f_1 = 15f;
			Local_160.f_4[4] = 7;
			Local_160.f_4[4].f_1 = 18f;
			Local_160.f_4[5] = 5;
			Local_160.f_4[5].f_1 = 23f;
			Local_160.f_4[6] = 0;
			Local_160.f_4[6].f_1 = 25f;
			Local_160.f_4[7] = 22;
			Local_160.f_4[7].f_1 = 28f;
			Local_160.f_4[8] = 0;
			Local_160.f_4[8].f_1 = 30f;
			Local_160.f_4[9] = 5;
			Local_160.f_4[9].f_1 = 32f;
			Local_160.f_4[10] = 29;
			Local_160.f_4[10].f_1 = 35f;
			Local_160.f_4[11] = 4;
			Local_160.f_4[11].f_1 = 40f;
			Local_160.f_4[12] = 5;
			Local_160.f_4[12].f_1 = 42f;
			Local_160.f_4[13] = 5;
			Local_160.f_4[13].f_1 = 44f;
			Local_160.f_4[14] = 13;
			Local_160.f_4[14].f_1 = 46f;
			Local_160.f_4[15] = 4;
			Local_160.f_4[15].f_1 = 48f;
			Local_160.f_4[16] = 29;
			Local_160.f_4[16].f_1 = 50f;
			Local_160.f_4[17] = 0;
			Local_160.f_4[17].f_1 = 51,9f;
			Local_160.f_4[18] = 8;
			Local_160.f_4[18].f_1 = 52f;
			Local_160.f_4[19] = 4;
			Local_160.f_4[19].f_1 = 54f;
			Local_160.f_4[20] = 4;
			Local_160.f_4[20].f_1 = 56f;
			Local_160.f_4[21] = 20;
			Local_160.f_4[21].f_1 = 57f;
			Local_160.f_4[22] = 0;
			Local_160.f_4[22].f_1 = 58f;
			Local_160.f_4[23] = 0;
			Local_160.f_4[23].f_1 = 60f;
			Local_160.f_4[24] = 6;
			Local_160.f_4[24].f_1 = 62f;
			Local_160.f_4[25] = 5;
			Local_160.f_4[25].f_1 = 64f;
			Local_160.f_4[26] = 23;
			Local_160.f_4[26].f_1 = 65f;
			Local_160.f_4[27] = 0;
			Local_160.f_4[27].f_1 = 65,5f;
			Local_160.f_4[28] = 0;
			Local_160.f_4[28].f_1 = 67f;
			Local_160.f_4[29] = 13;
			Local_160.f_4[29].f_1 = 69f;
			Local_160.f_4[30] = 29;
			Local_160.f_4[30].f_1 = 70,5f;
			Local_160.f_4[31] = 4;
			Local_160.f_4[31].f_1 = 71f;
			Local_160.f_4[32] = 26;
			Local_160.f_4[32].f_1 = 72,2f;
			Local_160.f_4[33] = 5;
			Local_160.f_4[33].f_1 = 73f;
			Local_160.f_4[34] = 5;
			Local_160.f_4[34].f_1 = 74f;
			Local_160.f_4[35] = 29;
			Local_160.f_4[35].f_1 = 75f;
			Local_160.f_4[36] = 0;
			Local_160.f_4[36].f_1 = 76f;
			Local_160.f_4[37] = 22;
			Local_160.f_4[37].f_1 = 77f;
			Local_160.f_4[38] = 5;
			Local_160.f_4[38].f_1 = 77,5f;
			Local_160.f_4[39] = 5;
			Local_160.f_4[39].f_1 = 78f;
			Local_160.f_4[40] = 0;
			Local_160.f_4[40].f_1 = 79f;
			Local_160.f_4[41] = 8;
			Local_160.f_4[41].f_1 = 80f;
			Local_160.f_4[42] = 5;
			Local_160.f_4[42].f_1 = 83f;
			Local_160.f_4[43] = 0;
			Local_160.f_4[43].f_1 = 84,2f;
			Local_160.f_4[44] = 8;
			Local_160.f_4[44].f_1 = 84,3f;
			Local_160.f_4[45] = 5;
			Local_160.f_4[45].f_1 = 84,5f;
			Local_160.f_4[46] = 5;
			Local_160.f_4[46].f_1 = 85f;
			Local_160.f_4[47] = 5;
			Local_160.f_4[47].f_1 = 85,5f;
			break;
		
		case 1:
			Local_160.f_4[0] = 5;
			Local_160.f_4[0].f_1 = 3f;
			Local_160.f_4[1] = 5;
			Local_160.f_4[1].f_1 = 5f;
			Local_160.f_4[2] = 2;
			Local_160.f_4[2].f_1 = 7f;
			Local_160.f_4[3] = 9;
			Local_160.f_4[3].f_1 = 9f;
			Local_160.f_4[4] = 9;
			Local_160.f_4[4].f_1 = 12f;
			Local_160.f_4[5] = 5;
			Local_160.f_4[5].f_1 = 13f;
			Local_160.f_4[6] = 5;
			Local_160.f_4[6].f_1 = 18f;
			Local_160.f_4[7] = 9;
			Local_160.f_4[7].f_1 = 17f;
			Local_160.f_4[8] = 5;
			Local_160.f_4[8].f_1 = 22f;
			Local_160.f_4[9] = 29;
			Local_160.f_4[9].f_1 = 22,5f;
			Local_160.f_4[10] = 2;
			Local_160.f_4[10].f_1 = 24f;
			Local_160.f_4[11] = 4;
			Local_160.f_4[11].f_1 = 25,5f;
			Local_160.f_4[12] = 14;
			Local_160.f_4[12].f_1 = 26f;
			Local_160.f_4[13] = 5;
			Local_160.f_4[13].f_1 = 27f;
			Local_160.f_4[14] = 5;
			Local_160.f_4[14].f_1 = 29f;
			Local_160.f_4[15] = 7;
			Local_160.f_4[15].f_1 = 31f;
			Local_160.f_4[16] = 4;
			Local_160.f_4[16].f_1 = 32f;
			Local_160.f_4[17] = 14;
			Local_160.f_4[17].f_1 = 35f;
			Local_160.f_4[18] = 19;
			Local_160.f_4[18].f_1 = 37,5f;
			Local_160.f_4[19] = 9;
			Local_160.f_4[19].f_1 = 40f;
			Local_160.f_4[20] = 4;
			Local_160.f_4[20].f_1 = 43f;
			Local_160.f_4[21] = 24;
			Local_160.f_4[21].f_1 = 44f;
			Local_160.f_4[22] = 9;
			Local_160.f_4[22].f_1 = 46f;
			Local_160.f_4[23] = 31;
			Local_160.f_4[23].f_1 = 50f;
			Local_160.f_4[24] = 4;
			Local_160.f_4[24].f_1 = 50,5f;
			Local_160.f_4[25] = 4;
			Local_160.f_4[25].f_1 = 52f;
			Local_160.f_4[26] = 2;
			Local_160.f_4[26].f_1 = 55f;
			Local_160.f_4[27] = 5;
			Local_160.f_4[27].f_1 = 57f;
			Local_160.f_4[28] = 20;
			Local_160.f_4[28].f_1 = 58f;
			Local_160.f_4[29] = 5;
			Local_160.f_4[29].f_1 = 60f;
			Local_160.f_4[30] = 9;
			Local_160.f_4[30].f_1 = 62f;
			Local_160.f_4[31] = 5;
			Local_160.f_4[31].f_1 = 63f;
			Local_160.f_4[32] = 5;
			Local_160.f_4[32].f_1 = 64f;
			Local_160.f_4[33] = 23;
			Local_160.f_4[33].f_1 = 65,5f;
			Local_160.f_4[34] = 4;
			Local_160.f_4[34].f_1 = 66f;
			Local_160.f_4[35] = 2;
			Local_160.f_4[35].f_1 = 67f;
			Local_160.f_4[36] = 9;
			Local_160.f_4[36].f_1 = 70f;
			Local_160.f_4[37] = 5;
			Local_160.f_4[37].f_1 = 72f;
			Local_160.f_4[38] = 24;
			Local_160.f_4[38].f_1 = 73f;
			Local_160.f_4[39] = 5;
			Local_160.f_4[39].f_1 = 73,5f;
			Local_160.f_4[40] = 31;
			Local_160.f_4[40].f_1 = 75f;
			Local_160.f_4[41] = 20;
			Local_160.f_4[41].f_1 = 76,5f;
			Local_160.f_4[42] = 5;
			Local_160.f_4[42].f_1 = 78f;
			Local_160.f_4[43] = 7;
			Local_160.f_4[43].f_1 = 80f;
			Local_160.f_4[44] = 4;
			Local_160.f_4[44].f_1 = 81f;
			Local_160.f_4[45] = 2;
			Local_160.f_4[45].f_1 = 83f;
			Local_160.f_4[46] = 7;
			Local_160.f_4[46].f_1 = 85f;
			Local_160.f_4[47] = 5;
			Local_160.f_4[47].f_1 = 86f;
			Local_160.f_4[48] = 9;
			Local_160.f_4[48].f_1 = 88f;
			Local_160.f_4[49] = 2;
			Local_160.f_4[49].f_1 = 92f;
			Local_160.f_4[50] = 28;
			Local_160.f_4[50].f_2 = 705;
			Local_160.f_4[50].f_1 = 94f;
			Local_160.f_4[51] = 4;
			Local_160.f_4[51].f_1 = 96f;
			Local_160.f_4[52] = 4;
			Local_160.f_4[52].f_1 = 98f;
			Local_160.f_4[53] = 9;
			Local_160.f_4[53].f_1 = 100f;
			Local_160.f_4[54] = 5;
			Local_160.f_4[54].f_1 = 101f;
			Local_160.f_4[55] = 5;
			Local_160.f_4[55].f_1 = 102f;
			Local_160.f_4[56] = 2;
			Local_160.f_4[56].f_1 = 104f;
			Local_160.f_4[57] = 2;
			Local_160.f_4[57].f_1 = 106f;
			Local_160.f_4[58] = 21;
			Local_160.f_4[58].f_1 = 107f;
			Local_160.f_4[59] = 5;
			Local_160.f_4[59].f_1 = 108f;
			Local_160.f_4[60] = 5;
			Local_160.f_4[60].f_1 = 109f;
			Local_160.f_4[61] = 31;
			Local_160.f_4[61].f_1 = 110f;
			Local_160.f_4[62] = 14;
			Local_160.f_4[62].f_1 = 112f;
			Local_160.f_4[63] = 22;
			Local_160.f_4[63].f_1 = 114,5f;
			Local_160.f_4[64] = 9;
			Local_160.f_4[64].f_1 = 117f;
			Local_160.f_4[65] = 5;
			Local_160.f_4[65].f_1 = 118f;
			Local_160.f_4[66] = 5;
			Local_160.f_4[66].f_1 = 119f;
			Local_160.f_4[67] = 5;
			Local_160.f_4[67].f_1 = 120f;
			Local_160.f_4[68] = 19;
			Local_160.f_4[68].f_1 = 123f;
			Local_160.f_4[69] = 9;
			Local_160.f_4[69].f_1 = 125f;
			Local_160.f_4[70] = 5;
			Local_160.f_4[70].f_1 = 126f;
			Local_160.f_4[71] = 9;
			Local_160.f_4[71].f_1 = 127f;
			Local_160.f_4[72] = 4;
			Local_160.f_4[72].f_1 = 129,5f;
			Local_160.f_4[73] = 2;
			Local_160.f_4[73].f_1 = 131,9f;
			Local_160.f_4[74] = 9;
			Local_160.f_4[74].f_1 = 132f;
			Local_160.f_4[75] = 14;
			Local_160.f_4[75].f_1 = 135,4f;
			Local_160.f_4[76] = 7;
			Local_160.f_4[76].f_1 = 135,5f;
			Local_160.f_4[77] = 4;
			Local_160.f_4[77].f_1 = 136f;
			Local_160.f_4[80] = 22;
			Local_160.f_4[80].f_1 = 137,3f;
			Local_160.f_4[81] = 9;
			Local_160.f_4[81].f_1 = 137,5f;
			break;
		
		case 2:
			Local_160.f_4[0] = 5;
			Local_160.f_4[0].f_1 = 1f;
			Local_160.f_4[1] = 5;
			Local_160.f_4[1].f_1 = 3f;
			Local_160.f_4[2] = 10;
			Local_160.f_4[2].f_1 = 4f;
			Local_160.f_4[3] = 4;
			Local_160.f_4[3].f_1 = 6,5f;
			Local_160.f_4[4] = 18;
			Local_160.f_4[4].f_1 = 8,2f;
			Local_160.f_4[5] = 1;
			Local_160.f_4[5].f_1 = 10f;
			Local_160.f_4[6] = 5;
			Local_160.f_4[6].f_1 = 13f;
			Local_160.f_4[7] = 4;
			Local_160.f_4[7].f_1 = 13f;
			Local_160.f_4[8] = 15;
			Local_160.f_4[8].f_1 = 13,5f;
			Local_160.f_4[9] = 1;
			Local_160.f_4[9].f_1 = 21f;
			Local_160.f_4[10] = 4;
			Local_160.f_4[10].f_1 = 22f;
			Local_160.f_4[11] = 15;
			Local_160.f_4[11].f_1 = 23f;
			Local_160.f_4[12] = 30;
			Local_160.f_4[12].f_1 = 23,5f;
			Local_160.f_4[13] = 4;
			Local_160.f_4[13].f_1 = 27f;
			Local_160.f_4[14] = 1;
			Local_160.f_4[14].f_1 = 30f;
			Local_160.f_4[15] = 23;
			Local_160.f_4[15].f_1 = 31f;
			Local_160.f_4[16] = 10;
			Local_160.f_4[16].f_2 = 1;
			Local_160.f_4[17].f_1 = 35f;
			Local_160.f_4[17] = 5;
			Local_160.f_4[18].f_1 = 35,1f;
			Local_160.f_4[18] = 5;
			Local_160.f_4[18].f_1 = 35,6f;
			Local_160.f_4[19] = 24;
			Local_160.f_4[19].f_1 = 35,7f;
			Local_160.f_4[20] = 5;
			Local_160.f_4[20].f_1 = 37f;
			Local_160.f_4[21] = 7;
			Local_160.f_4[21].f_1 = 39f;
			Local_160.f_4[22] = 15;
			Local_160.f_4[22].f_1 = 40f;
			Local_160.f_4[23] = 5;
			Local_160.f_4[23].f_1 = 40,5f;
			Local_160.f_4[24] = 5;
			Local_160.f_4[24].f_1 = 41f;
			Local_160.f_4[25] = 22;
			Local_160.f_4[25].f_1 = 42,3f;
			Local_160.f_4[26] = 7;
			Local_160.f_4[26].f_1 = 43,5f;
			Local_160.f_4[27] = 6;
			Local_160.f_4[27].f_1 = 46,3f;
			Local_160.f_4[28] = 10;
			Local_160.f_4[28].f_2 = 1;
			Local_160.f_4[28].f_1 = 46,5f;
			Local_160.f_4[29] = 4;
			Local_160.f_4[29].f_1 = 47f;
			Local_160.f_4[30] = 20;
			Local_160.f_4[30].f_1 = 47,5f;
			Local_160.f_4[31] = 4;
			Local_160.f_4[31].f_1 = 49f;
			Local_160.f_4[32] = 10;
			Local_160.f_4[32].f_2 = 1;
			Local_160.f_4[32].f_1 = 50f;
			Local_160.f_4[33] = 5;
			Local_160.f_4[33].f_1 = 53f;
			Local_160.f_4[34] = 1;
			Local_160.f_4[34].f_1 = 54,5f;
			Local_160.f_4[35] = 29;
			Local_160.f_4[35].f_1 = 55,2f;
			Local_160.f_4[36] = 1;
			Local_160.f_4[36].f_1 = 55,9f;
			Local_160.f_4[37] = 10;
			Local_160.f_4[37].f_2 = 1;
			Local_160.f_4[37].f_1 = 56f;
			Local_160.f_4[38] = 7;
			Local_160.f_4[38].f_1 = 56,5f;
			Local_160.f_4[39] = 5;
			Local_160.f_4[39].f_1 = 57,5f;
			Local_160.f_4[40] = 15;
			Local_160.f_4[40].f_1 = 60f;
			Local_160.f_4[41] = 4;
			Local_160.f_4[41].f_1 = 63f;
			Local_160.f_4[42] = 5;
			Local_160.f_4[42].f_1 = 64f;
			Local_160.f_4[43] = 10;
			Local_160.f_4[43].f_2 = 1;
			Local_160.f_4[43].f_1 = 65f;
			Local_160.f_4[44] = 10;
			Local_160.f_4[44].f_2 = 1;
			Local_160.f_4[44].f_1 = 66f;
			Local_160.f_4[45] = 1;
			Local_160.f_4[45].f_1 = 71,5f;
			Local_160.f_4[46] = 23;
			Local_160.f_4[46].f_1 = 72f;
			Local_160.f_4[47] = 10;
			Local_160.f_4[47].f_2 = 1;
			Local_160.f_4[47].f_1 = 72f;
			Local_160.f_4[48] = 5;
			Local_160.f_4[48].f_1 = 74f;
			Local_160.f_4[49] = 32;
			Local_160.f_4[49].f_1 = 76f;
			Local_160.f_4[50] = 10;
			Local_160.f_4[50].f_2 = 1;
			Local_160.f_4[50].f_1 = 77f;
			Local_160.f_4[51] = 4;
			Local_160.f_4[51].f_1 = 78f;
			Local_160.f_4[52] = 10;
			Local_160.f_4[52].f_2 = 1;
			Local_160.f_4[52].f_1 = 79f;
			Local_160.f_4[53] = 4;
			Local_160.f_4[53].f_1 = 79f;
			Local_160.f_4[54] = 5;
			Local_160.f_4[54].f_1 = 80f;
			Local_160.f_4[55] = 10;
			Local_160.f_4[55].f_2 = 1;
			Local_160.f_4[55].f_1 = 81f;
			Local_160.f_4[56] = 5;
			Local_160.f_4[56].f_1 = 82f;
			Local_160.f_4[57] = 6;
			Local_160.f_4[57].f_1 = 83f;
			Local_160.f_4[58] = 15;
			Local_160.f_4[58].f_1 = 83,5f;
			Local_160.f_4[59] = 5;
			Local_160.f_4[59].f_1 = 84f;
			Local_160.f_4[60] = 10;
			Local_160.f_4[60].f_2 = 1;
			Local_160.f_4[60].f_1 = 85f;
			Local_160.f_4[61] = 5;
			Local_160.f_4[61].f_1 = 85,1f;
			Local_160.f_4[62] = 5;
			Local_160.f_4[62].f_1 = 85,8f;
			Local_160.f_4[63] = 10;
			Local_160.f_4[63].f_2 = 1;
			Local_160.f_4[63].f_1 = 90f;
			Local_160.f_4[64] = 20;
			Local_160.f_4[64].f_1 = 94f;
			Local_160.f_4[65] = 15;
			Local_160.f_4[65].f_1 = 95f;
			Local_160.f_4[66] = 4;
			Local_160.f_4[66].f_1 = 96f;
			Local_160.f_4[67] = 4;
			Local_160.f_4[67].f_1 = 98f;
			Local_160.f_4[68] = 15;
			Local_160.f_4[68].f_1 = 99f;
			Local_160.f_4[69] = 31;
			Local_160.f_4[69].f_1 = 99,5f;
			Local_160.f_4[70] = 15;
			Local_160.f_4[70].f_1 = 104f;
			Local_160.f_4[71] = 4;
			Local_160.f_4[71].f_1 = 106f;
			Local_160.f_4[72] = 22;
			Local_160.f_4[72].f_1 = 110f;
			Local_160.f_4[73] = 31;
			Local_160.f_4[73].f_1 = 112,5f;
			Local_160.f_4[74] = 5;
			Local_160.f_4[74].f_2 = 1;
			Local_160.f_4[74].f_1 = 115f;
			Local_160.f_4[75] = 5;
			Local_160.f_4[75].f_2 = 1;
			Local_160.f_4[75].f_1 = 117f;
			Local_160.f_4[76] = 7;
			Local_160.f_4[76].f_1 = 120f;
			Local_160.f_4[77] = 5;
			Local_160.f_4[77].f_1 = 125f;
			Local_160.f_4[78] = 7;
			Local_160.f_4[78].f_1 = 126f;
			Local_160.f_4[79] = 27;
			Local_160.f_4[79].f_1 = 126,5f;
			Local_160.f_4[80] = 5;
			Local_160.f_4[80].f_1 = 126,6f;
			Local_160.f_4[81] = 1;
			Local_160.f_4[81].f_1 = 127,5f;
			Local_160.f_4[82] = 1;
			Local_160.f_4[82].f_1 = 128,5f;
			Local_160.f_4[83] = 15;
			Local_160.f_4[83].f_1 = 129f;
			Local_160.f_4[84] = 4;
			Local_160.f_4[84].f_1 = 129,5f;
			Local_160.f_4[85] = 6;
			Local_160.f_4[85].f_1 = 130f;
			Local_160.f_4[86] = 4;
			Local_160.f_4[86].f_1 = 132f;
			Local_160.f_4[87] = 10;
			Local_160.f_4[87].f_2 = 1;
			Local_160.f_4[87].f_1 = 135f;
			Local_160.f_4[88] = 5;
			Local_160.f_4[88].f_2 = 1;
			Local_160.f_4[88].f_1 = 135,5f;
			Local_160.f_4[89] = 4;
			Local_160.f_4[89].f_1 = 136f;
			Local_160.f_4[90] = 5;
			Local_160.f_4[90].f_2 = 1;
			Local_160.f_4[90].f_1 = 136,5f;
			Local_160.f_4[91] = 5;
			Local_160.f_4[91].f_2 = 1;
			Local_160.f_4[91].f_1 = 137f;
			Local_160.f_4[92] = 5;
			Local_160.f_4[92].f_2 = 1;
			Local_160.f_4[92].f_1 = 137,7f;
			Local_160.f_4[93] = 18;
			Local_160.f_4[93].f_1 = 141f;
			Local_160.f_4[94] = 15;
			Local_160.f_4[94].f_1 = 142f;
			Local_160.f_4[95] = 1;
			Local_160.f_4[95].f_1 = 143f;
			Local_160.f_4[96] = 22;
			Local_160.f_4[96].f_1 = 144f;
			Local_160.f_4[97] = 6;
			Local_160.f_4[97].f_1 = 145f;
			Local_160.f_4[98] = 10;
			Local_160.f_4[98].f_2 = 1;
			Local_160.f_4[98].f_1 = 147f;
			Local_160.f_4[99] = 5;
			Local_160.f_4[99].f_2 = 1;
			Local_160.f_4[99].f_1 = 150f;
			Local_160.f_4[100] = 1;
			Local_160.f_4[100].f_1 = 143f;
			Local_160.f_4[101] = 15;
			Local_160.f_4[101].f_1 = 150f;
			Local_160.f_4[102] = 10;
			Local_160.f_4[102].f_2 = 1;
			Local_160.f_4[102].f_1 = 151f;
			Local_160.f_4[103] = 4;
			Local_160.f_4[103].f_1 = 153f;
			Local_160.f_4[104] = 21;
			Local_160.f_4[104].f_1 = 156f;
			Local_160.f_4[105] = 1;
			Local_160.f_4[105].f_1 = 157f;
			Local_160.f_4[106] = 6;
			Local_160.f_4[106].f_1 = 160f;
			Local_160.f_4[107] = 10;
			Local_160.f_4[107].f_2 = 1;
			Local_160.f_4[107].f_1 = 161f;
			Local_160.f_4[108] = 5;
			Local_160.f_4[108].f_2 = 1;
			Local_160.f_4[108].f_1 = 162f;
			Local_160.f_4[109] = 10;
			Local_160.f_4[109].f_2 = 1;
			Local_160.f_4[109].f_1 = 165f;
			Local_160.f_4[110] = 5;
			Local_160.f_4[110].f_2 = 1;
			Local_160.f_4[110].f_1 = 167f;
			Local_160.f_4[111] = 1;
			Local_160.f_4[111].f_1 = 170f;
			Local_160.f_4[112] = 15;
			Local_160.f_4[112].f_1 = 172f;
			Local_160.f_4[113] = 10;
			Local_160.f_4[113].f_2 = 1;
			Local_160.f_4[113].f_1 = 175f;
			Local_160.f_4[114] = 5;
			Local_160.f_4[114].f_2 = 1;
			Local_160.f_4[114].f_1 = 175,5f;
			Local_160.f_4[115] = 5;
			Local_160.f_4[115].f_2 = 1;
			Local_160.f_4[115].f_1 = 176f;
			Local_160.f_4[116] = 28;
			Local_160.f_4[116].f_2 = 192;
			Local_160.f_4[116].f_1 = 180f;
			Local_160.f_4[117] = 1;
			Local_160.f_4[117].f_1 = 183f;
			Local_160.f_4[118] = 10;
			Local_160.f_4[118].f_2 = 1;
			Local_160.f_4[118].f_1 = 185f;
			Local_160.f_4[119] = 4;
			Local_160.f_4[119].f_1 = 185,5f;
			Local_160.f_4[120] = 5;
			Local_160.f_4[120].f_2 = 1;
			Local_160.f_4[120].f_1 = 186f;
			Local_160.f_4[121] = 5;
			Local_160.f_4[121].f_2 = 1;
			Local_160.f_4[121].f_1 = 186,5f;
			Local_160.f_4[122] = 5;
			Local_160.f_4[122].f_2 = 1;
			Local_160.f_4[122].f_1 = 187f;
			Local_160.f_4[123] = 15;
			Local_160.f_4[123].f_1 = 187,2f;
			Local_160.f_4[124] = 19;
			Local_160.f_4[124].f_1 = 190f;
			Local_160.f_4[125] = 15;
			Local_160.f_4[125].f_1 = 192f;
			Local_160.f_4[126] = 4;
			Local_160.f_4[126].f_1 = 193f;
			Local_160.f_4[127] = 5;
			Local_160.f_4[127].f_2 = 1;
			Local_160.f_4[127].f_1 = 194f;
			Local_160.f_4[128] = 4;
			Local_160.f_4[128].f_1 = 195f;
			Local_160.f_4[129] = 5;
			Local_160.f_4[129].f_2 = 1;
			Local_160.f_4[129].f_1 = 196f;
			Local_160.f_4[130] = 5;
			Local_160.f_4[130].f_2 = 1;
			Local_160.f_4[130].f_1 = 197f;
			Local_160.f_4[131] = 10;
			Local_160.f_4[131].f_2 = 1;
			Local_160.f_4[131].f_1 = 197,2f;
			Local_160.f_4[132] = 20;
			Local_160.f_4[132].f_1 = 200f;
			Local_160.f_4[133] = 4;
			Local_160.f_4[133].f_1 = 202f;
			Local_160.f_4[134] = 31;
			Local_160.f_4[134].f_1 = 204f;
			Local_160.f_4[135] = 15;
			Local_160.f_4[135].f_1 = 206,5f;
			Local_160.f_4[136] = 5;
			Local_160.f_4[136].f_1 = 207f;
			Local_160.f_4[137] = 4;
			Local_160.f_4[137].f_1 = 208f;
			Local_160.f_4[138] = 28;
			Local_160.f_4[138].f_2 = 192;
			Local_160.f_4[138].f_1 = 208,1f;
			Local_160.f_4[139] = 4;
			Local_160.f_4[139].f_1 = 209f;
			Local_160.f_4[140] = 10;
			Local_160.f_4[140].f_2 = 1;
			Local_160.f_4[140].f_1 = 210f;
			Local_160.f_4[141] = 5;
			Local_160.f_4[141].f_1 = 211f;
			Local_160.f_4[142] = 5;
			Local_160.f_4[142].f_1 = 211,5f;
			Local_160.f_4[143] = 5;
			Local_160.f_4[143].f_1 = 212f;
			Local_160.f_4[144] = 5;
			Local_160.f_4[144].f_2 = 1;
			Local_160.f_4[144].f_1 = 213f;
			Local_160.f_4[145] = 22;
			Local_160.f_4[145].f_1 = 213,5f;
			Local_160.f_4[146] = 5;
			Local_160.f_4[146].f_1 = 214f;
			Local_160.f_4[147] = 10;
			Local_160.f_4[147].f_2 = 1;
			Local_160.f_4[147].f_1 = 215f;
			Local_160.f_4[148] = 4;
			Local_160.f_4[148].f_1 = 217f;
			Local_160.f_4[149] = 4;
			Local_160.f_4[149].f_1 = 218f;
			Local_160.f_4[150] = 1;
			Local_160.f_4[150].f_1 = 220f;
			Local_160.f_4[151] = 15;
			Local_160.f_4[151].f_1 = 222f;
			Local_160.f_4[152] = 5;
			Local_160.f_4[152].f_2 = 1;
			Local_160.f_4[152].f_1 = 223f;
			Local_160.f_4[153] = 10;
			Local_160.f_4[153].f_2 = 1;
			Local_160.f_4[153].f_1 = 224f;
			Local_160.f_4[154] = 5;
			Local_160.f_4[154].f_2 = 1;
			Local_160.f_4[154].f_1 = 225f;
			Local_160.f_4[155] = 5;
			Local_160.f_4[155].f_2 = 1;
			Local_160.f_4[155].f_1 = 226f;
			Local_160.f_4[156] = 5;
			Local_160.f_4[156].f_2 = 1;
			Local_160.f_4[156].f_1 = 227f;
			Local_160.f_4[157] = 15;
			Local_160.f_4[157].f_1 = 228f;
			Local_160.f_4[158] = 28;
			Local_160.f_4[158].f_2 = 192;
			Local_160.f_4[158].f_1 = 229f;
			Local_160.f_4[159] = 15;
			Local_160.f_4[159].f_1 = 232f;
			Local_160.f_4[160] = 5;
			Local_160.f_4[160].f_2 = 1;
			Local_160.f_4[160].f_1 = 233f;
			Local_160.f_4[161] = 4;
			Local_160.f_4[161].f_1 = 234f;
			Local_160.f_4[162] = 4;
			Local_160.f_4[162].f_1 = 235f;
			Local_160.f_4[163] = 1;
			Local_160.f_4[163].f_1 = 235,1f;
			Local_160.f_4[164] = 10;
			Local_160.f_4[164].f_2 = 1;
			Local_160.f_4[164].f_1 = 235,2f;
			Local_160.f_4[165] = 4;
			Local_160.f_4[165].f_1 = 236,1f;
			Local_160.f_4[166] = 22;
			Local_160.f_4[166].f_1 = 237,8f;
			Local_160.f_4[167] = 7;
			Local_160.f_4[167].f_1 = 239,3f;
			break;
		
		case 3:
			Local_160.f_4[0] = 5;
			Local_160.f_4[0].f_1 = 1f;
			Local_160.f_4[1] = 11;
			Local_160.f_4[1].f_1 = 6f;
			Local_160.f_4[2] = 4;
			Local_160.f_4[2].f_1 = 7f;
			Local_160.f_4[3] = 7;
			Local_160.f_4[3].f_1 = 9f;
			Local_160.f_4[4] = 5;
			Local_160.f_4[4].f_1 = 10f;
			Local_160.f_4[5] = 11;
			Local_160.f_4[5].f_1 = 12f;
			Local_160.f_4[6] = 5;
			Local_160.f_4[6].f_1 = 13f;
			Local_160.f_4[7] = 7;
			Local_160.f_4[7].f_1 = 14,5f;
			Local_160.f_4[8] = 11;
			Local_160.f_4[8].f_1 = 15f;
			Local_160.f_4[9] = 5;
			Local_160.f_4[9].f_1 = 16f;
			Local_160.f_4[10] = 3;
			Local_160.f_4[10].f_1 = 19f;
			Local_160.f_4[11] = 7;
			Local_160.f_4[11].f_1 = 21f;
			Local_160.f_4[12] = 6;
			Local_160.f_4[12].f_1 = 22f;
			Local_160.f_4[13] = 11;
			Local_160.f_4[13].f_1 = 23f;
			Local_160.f_4[14] = 5;
			Local_160.f_4[14].f_1 = 24f;
			Local_160.f_4[15] = 11;
			Local_160.f_4[15].f_1 = 25f;
			Local_160.f_4[16] = 5;
			Local_160.f_4[16].f_1 = 26f;
			Local_160.f_4[17] = 11;
			Local_160.f_4[17].f_1 = 27f;
			Local_160.f_4[18] = 5;
			Local_160.f_4[18].f_1 = 28f;
			Local_160.f_4[19] = 29;
			Local_160.f_4[19].f_1 = 31f;
			Local_160.f_4[20] = 4;
			Local_160.f_4[20].f_1 = 32f;
			Local_160.f_4[21] = 3;
			Local_160.f_4[21].f_1 = 33f;
			Local_160.f_4[22] = 7;
			Local_160.f_4[22].f_1 = 35f;
			Local_160.f_4[23] = 5;
			Local_160.f_4[23].f_1 = 36f;
			Local_160.f_4[24] = 5;
			Local_160.f_4[24].f_1 = 37f;
			Local_160.f_4[25] = 23;
			Local_160.f_4[25].f_1 = 37,5f;
			Local_160.f_4[26] = 7;
			Local_160.f_4[26].f_1 = 38f;
			Local_160.f_4[27] = 16;
			Local_160.f_4[27].f_1 = 40f;
			Local_160.f_4[28] = 5;
			Local_160.f_4[28].f_1 = 41f;
			Local_160.f_4[29] = 5;
			Local_160.f_4[29].f_1 = 42f;
			Local_160.f_4[30] = 11;
			Local_160.f_4[30].f_1 = 45f;
			Local_160.f_4[31] = 3;
			Local_160.f_4[31].f_1 = 46,5f;
			Local_160.f_4[32] = 7;
			Local_160.f_4[32].f_1 = 47,2f;
			Local_160.f_4[33] = 7;
			Local_160.f_4[33].f_1 = 48,5f;
			Local_160.f_4[34] = 22;
			Local_160.f_4[34].f_1 = 49,5f;
			Local_160.f_4[35] = 11;
			Local_160.f_4[35].f_1 = 50f;
			Local_160.f_4[36] = 5;
			Local_160.f_4[36].f_1 = 51f;
			Local_160.f_4[37] = 7;
			Local_160.f_4[37].f_1 = 52,2f;
			Local_160.f_4[38] = 4;
			Local_160.f_4[38].f_1 = 53f;
			Local_160.f_4[39] = 6;
			Local_160.f_4[39].f_1 = 54f;
			Local_160.f_4[40] = 5;
			Local_160.f_4[40].f_1 = 55f;
			Local_160.f_4[41] = 4;
			Local_160.f_4[41].f_1 = 56f;
			Local_160.f_4[42] = 11;
			Local_160.f_4[42].f_1 = 57f;
			Local_160.f_4[43] = 16;
			Local_160.f_4[43].f_1 = 58f;
			Local_160.f_4[44] = 5;
			Local_160.f_4[44].f_1 = 60f;
			Local_160.f_4[45] = 5;
			Local_160.f_4[45].f_1 = 61f;
			Local_160.f_4[46] = 5;
			Local_160.f_4[46].f_1 = 63f;
			Local_160.f_4[47] = 25;
			Local_160.f_4[47].f_1 = 63,7f;
			Local_160.f_4[48] = 11;
			Local_160.f_4[48].f_1 = 64f;
			Local_160.f_4[49] = 5;
			Local_160.f_4[49].f_1 = 65f;
			Local_160.f_4[50] = 11;
			Local_160.f_4[50].f_1 = 66f;
			Local_160.f_4[51] = 5;
			Local_160.f_4[51].f_1 = 67f;
			Local_160.f_4[52] = 5;
			Local_160.f_4[52].f_1 = 69f;
			Local_160.f_4[53] = 7;
			Local_160.f_4[53].f_1 = 70f;
			Local_160.f_4[54] = 11;
			Local_160.f_4[54].f_1 = 70,1f;
			Local_160.f_4[55] = 4;
			Local_160.f_4[55].f_1 = 72f;
			Local_160.f_4[56] = 29;
			Local_160.f_4[56].f_1 = 74,5f;
			Local_160.f_4[57] = 23;
			Local_160.f_4[57].f_1 = 75f;
			Local_160.f_4[58] = 5;
			Local_160.f_4[58].f_1 = 75,5f;
			Local_160.f_4[59] = 7;
			Local_160.f_4[59].f_1 = 76f;
			Local_160.f_4[60] = 5;
			Local_160.f_4[60].f_1 = 76,5f;
			Local_160.f_4[61] = 4;
			Local_160.f_4[61].f_1 = 78,5f;
			Local_160.f_4[62] = 28;
			Local_160.f_4[62].f_2 = 451;
			Local_160.f_4[62].f_1 = 79f;
			Local_160.f_4[63] = 16;
			Local_160.f_4[63].f_1 = 80f;
			Local_160.f_4[64] = 4;
			Local_160.f_4[64].f_1 = 80,5f;
			Local_160.f_4[65] = 11;
			Local_160.f_4[65].f_1 = 81f;
			Local_160.f_4[66] = 6;
			Local_160.f_4[66].f_1 = 82f;
			Local_160.f_4[67] = 5;
			Local_160.f_4[67].f_1 = 83f;
			Local_160.f_4[68] = 11;
			Local_160.f_4[68].f_1 = 83,5f;
			Local_160.f_4[69] = 11;
			Local_160.f_4[69].f_1 = 85f;
			Local_160.f_4[70] = 5;
			Local_160.f_4[70].f_1 = 86f;
			Local_160.f_4[71] = 29;
			Local_160.f_4[71].f_1 = 89,3f;
			Local_160.f_4[72] = 20;
			Local_160.f_4[72].f_1 = 89,8f;
			Local_160.f_4[73] = 3;
			Local_160.f_4[73].f_1 = 90,5f;
			Local_160.f_4[74] = 3;
			Local_160.f_4[74].f_1 = 92f;
			Local_160.f_4[75] = 16;
			Local_160.f_4[75].f_1 = 92,1f;
			Local_160.f_4[76] = 5;
			Local_160.f_4[76].f_1 = 93f;
			Local_160.f_4[77] = 5;
			Local_160.f_4[77].f_1 = 93,6f;
			Local_160.f_4[78] = 11;
			Local_160.f_4[78].f_1 = 93,7f;
			Local_160.f_4[79] = 5;
			Local_160.f_4[79].f_1 = 94,5f;
			Local_160.f_4[80] = 7;
			Local_160.f_4[80].f_1 = 95f;
			Local_160.f_4[81] = 5;
			Local_160.f_4[81].f_1 = 96f;
			Local_160.f_4[82] = 11;
			Local_160.f_4[82].f_1 = 98f;
			Local_160.f_4[83] = 4;
			Local_160.f_4[83].f_1 = 99f;
			Local_160.f_4[84] = 4;
			Local_160.f_4[84].f_1 = 100f;
			Local_160.f_4[85] = 22;
			Local_160.f_4[85].f_1 = 102f;
			Local_160.f_4[86] = 7;
			Local_160.f_4[86].f_1 = 104f;
			Local_160.f_4[87] = 11;
			Local_160.f_4[87].f_1 = 106f;
			Local_160.f_4[88] = 3;
			Local_160.f_4[88].f_1 = 110f;
			Local_160.f_4[89] = 3;
			Local_160.f_4[89].f_1 = 112f;
			Local_160.f_4[90] = 24;
			Local_160.f_4[90].f_1 = 114f;
			Local_160.f_4[91] = 16;
			Local_160.f_4[91].f_1 = 115f;
			Local_160.f_4[92] = 4;
			Local_160.f_4[92].f_1 = 116f;
			Local_160.f_4[93] = 6;
			Local_160.f_4[93].f_1 = 119f;
			Local_160.f_4[94] = 4;
			Local_160.f_4[94].f_1 = 122f;
			Local_160.f_4[95] = 7;
			Local_160.f_4[95].f_1 = 124f;
			Local_160.f_4[96] = 6;
			Local_160.f_4[96].f_1 = 126f;
			Local_160.f_4[97] = 5;
			Local_160.f_4[97].f_1 = 129f;
			Local_160.f_4[98] = 5;
			Local_160.f_4[98].f_1 = 130f;
			Local_160.f_4[99] = 11;
			Local_160.f_4[99].f_1 = 132f;
			Local_160.f_4[100] = 4;
			Local_160.f_4[100].f_1 = 133f;
			Local_160.f_4[101] = 4;
			Local_160.f_4[101].f_1 = 134f;
			Local_160.f_4[102] = 21;
			Local_160.f_4[102].f_1 = 136f;
			Local_160.f_4[103] = 29;
			Local_160.f_4[103].f_1 = 138f;
			Local_160.f_4[104] = 11;
			Local_160.f_4[104].f_1 = 140f;
			Local_160.f_4[105] = 5;
			Local_160.f_4[105].f_1 = 141f;
			Local_160.f_4[106] = 5;
			Local_160.f_4[106].f_1 = 142f;
			Local_160.f_4[107] = 5;
			Local_160.f_4[107].f_1 = 143f;
			Local_160.f_4[108] = 16;
			Local_160.f_4[108].f_1 = 147f;
			Local_160.f_4[109] = 4;
			Local_160.f_4[109].f_1 = 148f;
			Local_160.f_4[110] = 3;
			Local_160.f_4[110].f_1 = 150f;
			Local_160.f_4[111] = 4;
			Local_160.f_4[111].f_1 = 152f;
			Local_160.f_4[112] = 24;
			Local_160.f_4[112].f_1 = 154f;
			Local_160.f_4[113] = 6;
			Local_160.f_4[113].f_1 = 155f;
			Local_160.f_4[114] = 11;
			Local_160.f_4[114].f_1 = 156f;
			Local_160.f_4[115] = 5;
			Local_160.f_4[115].f_1 = 157f;
			Local_160.f_4[116] = 4;
			Local_160.f_4[116].f_1 = 160f;
			Local_160.f_4[117] = 6;
			Local_160.f_4[117].f_1 = 163f;
			Local_160.f_4[118] = 5;
			Local_160.f_4[118].f_1 = 165f;
			Local_160.f_4[119] = 11;
			Local_160.f_4[119].f_1 = 167f;
			Local_160.f_4[120] = 5;
			Local_160.f_4[120].f_1 = 170f;
			Local_160.f_4[121] = 5;
			Local_160.f_4[121].f_1 = 171f;
			Local_160.f_4[122] = 16;
			Local_160.f_4[122].f_1 = 172f;
			Local_160.f_4[123] = 4;
			Local_160.f_4[123].f_1 = 173f;
			Local_160.f_4[124] = 7;
			Local_160.f_4[124].f_1 = 176f;
			Local_160.f_4[125] = 29;
			Local_160.f_4[125].f_1 = 182f;
			Local_160.f_4[126] = 5;
			Local_160.f_4[126].f_1 = 184f;
			Local_160.f_4[127] = 5;
			Local_160.f_4[127].f_1 = 185f;
			Local_160.f_4[128] = 11;
			Local_160.f_4[128].f_1 = 186f;
			Local_160.f_4[129] = 4;
			Local_160.f_4[129].f_1 = 187f;
			Local_160.f_4[130] = 4;
			Local_160.f_4[130].f_1 = 188f;
			Local_160.f_4[131] = 20;
			Local_160.f_4[131].f_1 = 190f;
			Local_160.f_4[132] = 5;
			Local_160.f_4[132].f_1 = 192f;
			Local_160.f_4[133] = 11;
			Local_160.f_4[133].f_1 = 193f;
			Local_160.f_4[134] = 30;
			Local_160.f_4[134].f_1 = 196f;
			Local_160.f_4[135] = 11;
			Local_160.f_4[135].f_1 = 198f;
			Local_160.f_4[136] = 3;
			Local_160.f_4[136].f_1 = 201f;
			Local_160.f_4[137] = 5;
			Local_160.f_4[137].f_1 = 202f;
			Local_160.f_4[138] = 3;
			Local_160.f_4[138].f_1 = 203f;
			Local_160.f_4[139] = 3;
			Local_160.f_4[139].f_1 = 205f;
			Local_160.f_4[140] = 6;
			Local_160.f_4[140].f_1 = 207f;
			Local_160.f_4[141] = 22;
			Local_160.f_4[141].f_1 = 209f;
			Local_160.f_4[142] = 7;
			Local_160.f_4[142].f_1 = 210f;
			Local_160.f_4[143] = 4;
			Local_160.f_4[143].f_1 = 211f;
			Local_160.f_4[144] = 4;
			Local_160.f_4[144].f_1 = 212f;
			Local_160.f_4[145] = 7;
			Local_160.f_4[145].f_1 = 213f;
			Local_160.f_4[146] = 16;
			Local_160.f_4[146].f_1 = 214f;
			Local_160.f_4[147] = 3;
			Local_160.f_4[147].f_1 = 215f;
			Local_160.f_4[148] = 5;
			Local_160.f_4[148].f_1 = 216f;
			Local_160.f_4[149] = 5;
			Local_160.f_4[149].f_1 = 217f;
			Local_160.f_4[150] = 5;
			Local_160.f_4[150].f_1 = 218f;
			Local_160.f_4[151] = 3;
			Local_160.f_4[151].f_1 = 219,5f;
			Local_160.f_4[152] = 11;
			Local_160.f_4[152].f_1 = 220f;
			Local_160.f_4[153] = 11;
			Local_160.f_4[153].f_1 = 223f;
			Local_160.f_4[154] = 5;
			Local_160.f_4[154].f_1 = 224f;
			Local_160.f_4[155] = 29;
			Local_160.f_4[155].f_1 = 226f;
			Local_160.f_4[156] = 4;
			Local_160.f_4[156].f_1 = 228f;
			Local_160.f_4[157] = 3;
			Local_160.f_4[157].f_1 = 230f;
			Local_160.f_4[158] = 7;
			Local_160.f_4[158].f_1 = 230,5f;
			Local_160.f_4[159] = 16;
			Local_160.f_4[159].f_1 = 233f;
			Local_160.f_4[160] = 5;
			Local_160.f_4[160].f_1 = 234f;
			Local_160.f_4[161] = 5;
			Local_160.f_4[161].f_1 = 235f;
			Local_160.f_4[162] = 7;
			Local_160.f_4[162].f_1 = 236f;
			Local_160.f_4[163] = 24;
			Local_160.f_4[163].f_1 = 238f;
			Local_160.f_4[164] = 3;
			Local_160.f_4[164].f_1 = 242f;
			Local_160.f_4[165] = 5;
			Local_160.f_4[165].f_1 = 243f;
			Local_160.f_4[166] = 5;
			Local_160.f_4[166].f_1 = 244f;
			Local_160.f_4[167] = 11;
			Local_160.f_4[167].f_1 = 248f;
			Local_160.f_4[168] = 3;
			Local_160.f_4[168].f_1 = 251f;
			Local_160.f_4[169] = 5;
			Local_160.f_4[169].f_1 = 252f;
			Local_160.f_4[170] = 3;
			Local_160.f_4[170].f_1 = 253f;
			Local_160.f_4[171] = 7;
			Local_160.f_4[171].f_1 = 254f;
			Local_160.f_4[172] = 16;
			Local_160.f_4[172].f_1 = 255f;
			Local_160.f_4[173] = 29;
			Local_160.f_4[173].f_1 = 256f;
			Local_160.f_4[174] = 20;
			Local_160.f_4[174].f_1 = 259f;
			Local_160.f_4[175] = 11;
			Local_160.f_4[175].f_1 = 261f;
			Local_160.f_4[176] = 5;
			Local_160.f_4[176].f_1 = 263f;
			Local_160.f_4[177] = 7;
			Local_160.f_4[177].f_1 = 264f;
			Local_160.f_4[178] = 4;
			Local_160.f_4[178].f_1 = 265f;
			Local_160.f_4[179] = 6;
			Local_160.f_4[179].f_1 = 267f;
			Local_160.f_4[180] = 7;
			Local_160.f_4[180].f_1 = 269f;
			Local_160.f_4[181] = 5;
			Local_160.f_4[181].f_1 = 270f;
			Local_160.f_4[182] = 23;
			Local_160.f_4[182].f_1 = 272f;
			Local_160.f_4[183] = 11;
			Local_160.f_4[183].f_1 = 274f;
			Local_160.f_4[184] = 5;
			Local_160.f_4[184].f_1 = 275f;
			Local_160.f_4[185] = 7;
			Local_160.f_4[185].f_1 = 277f;
			Local_160.f_4[186] = 5;
			Local_160.f_4[186].f_1 = 280f;
			Local_160.f_4[187] = 4;
			Local_160.f_4[187].f_1 = 283f;
			Local_160.f_4[188] = 5;
			Local_160.f_4[188].f_1 = 286f;
			Local_160.f_4[189] = 29;
			Local_160.f_4[189].f_1 = 288f;
			Local_160.f_4[190] = 5;
			Local_160.f_4[190].f_1 = 289f;
			Local_160.f_4[191] = 16;
			Local_160.f_4[191].f_1 = 292f;
			Local_160.f_4[192] = 5;
			Local_160.f_4[192].f_1 = 294f;
			Local_160.f_4[193] = 7;
			Local_160.f_4[193].f_1 = 296f;
			Local_160.f_4[194] = 5;
			Local_160.f_4[194].f_1 = 299f;
			Local_160.f_4[195] = 18;
			Local_160.f_4[195].f_1 = 302f;
			Local_160.f_4[196] = 6;
			Local_160.f_4[196].f_1 = 303f;
			Local_160.f_4[197] = 5;
			Local_160.f_4[197].f_1 = 305f;
			Local_160.f_4[198] = 16;
			Local_160.f_4[198].f_1 = 306f;
			Local_160.f_4[199] = 24;
			Local_160.f_4[199].f_1 = 307f;
			Local_160.f_4[200] = 5;
			Local_160.f_4[200].f_2 = 1;
			Local_160.f_4[200].f_1 = 308f;
			Local_160.f_4[201] = 11;
			Local_160.f_4[201].f_1 = 309f;
			Local_160.f_4[202] = 4;
			Local_160.f_4[202].f_1 = 310f;
			Local_160.f_4[203] = 6;
			Local_160.f_4[203].f_1 = 314f;
			Local_160.f_4[204] = 7;
			Local_160.f_4[204].f_1 = 314,7f;
			Local_160.f_4[205] = 4;
			Local_160.f_4[205].f_1 = 315,5f;
			Local_160.f_4[206] = 16;
			Local_160.f_4[206].f_1 = 316f;
			Local_160.f_4[207] = 4;
			Local_160.f_4[207].f_1 = 317f;
			Local_160.f_4[208] = 3;
			Local_160.f_4[208].f_1 = 320f;
			Local_160.f_4[209] = 4;
			Local_160.f_4[209].f_1 = 321f;
			Local_160.f_4[210] = 11;
			Local_160.f_4[210].f_1 = 322f;
			Local_160.f_4[211] = 5;
			Local_160.f_4[211].f_2 = 1;
			Local_160.f_4[211].f_1 = 322,5f;
			Local_160.f_4[212] = 11;
			Local_160.f_4[212].f_1 = 324f;
			Local_160.f_4[213] = 11;
			Local_160.f_4[213].f_1 = 325f;
			Local_160.f_4[214] = 27;
			Local_160.f_4[214].f_1 = 328,5f;
			Local_160.f_4[215] = 3;
			Local_160.f_4[215].f_1 = 329,5f;
			Local_160.f_4[216] = 4;
			Local_160.f_4[216].f_1 = 330f;
			Local_160.f_4[217] = 4;
			Local_160.f_4[217].f_1 = 331f;
			Local_160.f_4[218] = 4;
			Local_160.f_4[218].f_1 = 332f;
			Local_160.f_4[219] = 6;
			Local_160.f_4[219].f_1 = 333f;
			Local_160.f_4[220] = 16;
			Local_160.f_4[220].f_1 = 334f;
			Local_160.f_4[221] = 4;
			Local_160.f_4[221].f_1 = 335f;
			Local_160.f_4[222] = 3;
			Local_160.f_4[222].f_1 = 336f;
			Local_160.f_4[223] = 11;
			Local_160.f_4[223].f_1 = 337f;
			Local_160.f_4[224] = 4;
			Local_160.f_4[224].f_1 = 338f;
			break;
		
		case 4:
			Local_160.f_4[0] = 34;
			Local_160.f_4[0].f_1 = 0f;
			break;
	}
}

void func_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_109()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 7))
	{
		Local_139.f_16 = 1;
		Local_139.f_17 = Local_160.f_2712.f_2;
		Local_139.f_18 = Local_160.f_2712.f_6;
		Local_139.f_20 = func_41();
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 7);
		func_40();
	}
	unk_0x8910D3D58E0132B8("dlc_vw_am_ip_in_gameplay_scene");
	unk_0x8BC9595FD2792B5D("dlc_vw_am_ip_in_menus_scene");
	if (func_113())
	{
		func_112();
		func_12(func_13(4));
		func_110();
		func_8(10);
	}
	else
	{
		func_9();
		func_54();
		func_48();
		func_47("Frontend_Retry");
		func_8(4);
	}
}

void func_110()
{
	vVar0 = 11;
	vVar0.f_1.f_1 = -1;
	vVar0.f_1.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	iVar34 = 0;
	while (iVar34 <= 9)
	{
		vVar0[iVar34] = Local_160.f_2912[iVar34];
		vVar0[iVar34].f_2 = 0;
		vVar0[iVar34].f_1 = Local_160.f_2912[iVar34].f_1;
		iVar34++;
	}
	if (!Local_160.f_2907)
	{
		vVar0[10].f_2 = 1;
		vVar0[10].f_1 = func_41();
		vVar0[10] = 0;
	}
	func_111(&vVar0, 0, 10);
	iVar34 = 0;
	while (iVar34 <= 9)
	{
		Local_160.f_2912[iVar34] = vVar0[iVar34];
		Local_160.f_2912[iVar34].f_2 = vVar0[iVar34].f_2;
		Local_160.f_2912[iVar34].f_1 = vVar0[iVar34].f_1;
		func_69(func_71(unk_0xD803B885F5E47A62()), 1, iVar34, Local_160.f_2912[iVar34], Local_160.f_2912[iVar34].f_1, 0);
		iVar34++;
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	iVar2 = (iParam0[((iParam1 + iParam2) / 2)])->f_1;
	vVar3.f_1 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while (iParam0[iVar0]->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > iParam0[iVar1]->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			vVar3.x = (*iParam0)[iVar0];
			vVar3.z = iParam0[iVar0]->f_2;
			vVar3.y = iParam0[iVar0]->f_1;
			(*iParam0)[iVar0] = (*iParam0)[iVar1];
			iParam0[iVar0]->f_2 = iParam0[iVar1]->f_2;
			iParam0[iVar0]->f_1 = iParam0[iVar1]->f_1;
			(*iParam0)[iVar1] = vVar3.x;
			iParam0[iVar1]->f_2 = vVar3.z;
			iParam0[iVar1]->f_1 = vVar3.y;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_111(iParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_111(iParam0, iParam1, iVar1);
	}
}

void func_112()
{
	Local_160.f_2881 = unk_0xA3888F288861A701("I&P_Leaderboard_loop_16x9");
	unk_0x6A42C4E2AEFD4206(Local_160.f_2881);
}

int func_113()
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	if (unk_0xBA301E03A078FA59())
	{
		if (unk_0xB5E18209CA3E7DE6(1, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x4DEB7B48DD0AABA4(1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (unk_0x05449BDA851F5199(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_115(uParam0, bParam2, 0);
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

void func_115(var uParam0, bool bParam1, bool bParam2)
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

void func_116(var uParam0, bool bParam1, bool bParam2)
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

bool func_117(var uParam0)
{
	return uParam0->f_1;
}

int func_118()
{
	if (Local_160.f_2878 < func_130(3) + 60 + 10)
	{
		return 0;
	}
	iVar0 = 223;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 237;
	}
	bVar1 = unk_0xD245978525608929(2, iVar0);
	if (bVar1)
	{
		Local_160.f_2725 = func_41();
	}
	if (func_41() > Local_160.f_2725)
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 6))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 6);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 4))
	{
		if (Local_160.f_2727 == 0)
		{
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 4);
			func_47("Frontend_Score_Tick_Total");
			func_14(&(Local_160.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_120((500 * Local_160.f_2727), 4, func_86(-1f, -1f));
				func_47("Frontend_Score_Tick_Large");
				Local_160.f_2727 = 0;
				Local_160.f_2725 = func_41();
				return 0;
			}
			Local_160.f_2727 = (Local_160.f_2727 - 1);
			func_119("Frontend_Score_Tick_Loop_Small", &(Local_160.f_2729));
			func_120(500, 5, func_86(-1f, -1f));
		}
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 5))
	{
		if (Local_160.f_2726 <= 0)
		{
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 5);
			func_47("Frontend_Score_Tick_Total");
			return 0;
		}
		else
		{
			if (bVar1)
			{
				func_120((10000 * Local_160.f_2726), 4, func_86(-1f, -1f));
				func_47("Frontend_Score_Tick_Large");
				Local_160.f_2726 = 0;
				Local_160.f_2725 = func_41();
				return 0;
			}
			Local_160.f_2726 = (Local_160.f_2726 - 1);
			func_47("Frontend_Score_Tick_Large");
			func_120(10000, 4, func_86(-1f, -1f));
		}
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 3))
	{
		if (Local_160.f_2728 == 0)
		{
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 3);
			func_47("Frontend_Score_Tick_Total");
			func_14(&(Local_160.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_120((round((0,164583f * 151,899f)) * Local_160.f_2728), 4, func_86(-1f, -1f));
				func_47("Frontend_Score_Tick_Large");
				Local_160.f_2728 = 0;
				Local_160.f_2725 = func_41();
				return 0;
			}
			Local_160.f_2728 = (Local_160.f_2728 - 1);
			func_119("Frontend_Score_Tick_Loop_Small", &(Local_160.f_2729));
			func_120(round((0,164583f * 151,899f)), 3, func_86(-1f, -1f));
		}
		return 0;
	}
	return 1;
}

void func_119(char* sParam0, var uParam1)
{
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xD68EA767274B7444();
	}
	if (unk_0x8AA6DC470ABA63A2(*uParam1))
	{
		unk_0x4D7F4CC43D4D0DE3(*uParam1, sParam0, "dlc_vw_am_ip_frontend_sounds", false);
	}
}

void func_120(int iParam0, int iParam1, struct<2> Param2)
{
	switch (iParam1)
	{
		case 0:
			Local_160.f_2712.f_3 = (Local_160.f_2712.f_3 + iParam0);
			Local_160.f_2712.f_4++;
			Local_160.f_2712.f_6++;
			func_129(iParam0, Param2);
			func_128();
			break;
		
		case 1:
			Local_160.f_2712 = (Local_160.f_2712 + iParam0);
			break;
		
		case 2:
			Local_160.f_2712.f_7 = (Local_160.f_2712.f_7 + iParam0);
			Local_160.f_2712.f_8++;
			Local_160.f_2712.f_9++;
			func_129(iParam0, Param2);
			func_121();
			break;
		
		case 3:
			Local_160.f_2712.f_10 = (Local_160.f_2712.f_10 + iParam0);
			break;
		
		case 5:
			Local_160.f_2712.f_12 = (Local_160.f_2712.f_12 + iParam0);
			break;
		
		case 4:
			Local_160.f_2712.f_11 = (Local_160.f_2712.f_11 + iParam0);
			break;
	}
}

void func_121()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 2))
	{
		return;
	}
	if (Local_160.f_2712.f_9 < Global_262145.f_26469)
	{
		return;
	}
	func_125(249, 1, -1, 1);
	func_124(27185, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 2);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 8);
	func_123();
	func_122("IAP_CH_1", Global_262145.f_26469, 7500);
}

void func_122(char* sParam0, var uParam1, int iParam2)
{
	func_9();
	Local_160.f_2901 = (unk_0x2B6E0A53779D29EA() + iParam2);
	Local_160.f_2903 = sParam0;
	Local_160.f_2902 = uParam1;
}

void func_123()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 0))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 6))
	{
		return;
	}
	if (Global_262145.f_26473 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 1))
	{
		return;
	}
	if (Global_262145.f_26474 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 2))
	{
		return;
	}
	if (Global_262145.f_26475 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 3))
	{
		return;
	}
	if (Global_262145.f_26476 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 4))
	{
		return;
	}
	if (Global_262145.f_26477 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 5))
	{
		return;
	}
	func_125(253, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 6);
}

int func_124(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_31();
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

void func_125(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_127())
	{
		iVar0 = Global_2583656[iParam0][func_126(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_126(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_127()
{
	return 1;
	return 0;
}

void func_128()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 1))
	{
		return;
	}
	if (Local_160.f_2712.f_5 < Global_262145.f_26468)
	{
		return;
	}
	func_125(248, 1, -1, 1);
	func_124(27184, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 7);
	func_123();
	func_122("IAP_CH_0", Global_262145.f_26468, 7500);
}

void func_129(int iParam0, struct<2> Param1)
{
	Local_160.f_2812[Local_160.f_2869] = unk_0x2B6E0A53779D29EA();
	Local_160.f_2812[Local_160.f_2869].f_1 = iParam0;
	Local_160.f_2812[Local_160.f_2869].f_2 = { Param1 };
	Local_160.f_2869++;
	if (Local_160.f_2869 >= 14)
	{
		Local_160.f_2869 = 0;
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 21;
		
		case 1:
			return 11;
		
		case 2:
			return 21;
		
		case 3:
			return 25;
		
		default:
	}
	return -1;
}

int func_131()
{
	Local_160.f_2368.f_321 = func_132(Local_160.f_2368.f_321, 0,15f);
	if (Local_160.f_2368.f_321 < 1f)
	{
		return 0;
	}
	Local_160.f_2368.f_321 = 1f;
	return 1;
}

float func_132(float fParam0, float fParam1)
{
	return (fParam0 + ((fParam1 * Local_160.f_2873) * timestep()));
}

void func_133()
{
	func_201();
	func_188();
	func_182();
	func_170();
	func_169();
	func_168();
	func_156();
	func_151();
	func_144();
	func_139();
	func_134(3);
	func_82();
	func_80();
}

void func_134(int iParam0)
{
	iVar0 = func_130(iParam0);
	if (Local_160.f_2878 > -1 && Local_160.f_2878 < func_130(iParam0))
	{
		iVar0 = Local_160.f_2878 + 1;
	}
	Var1 = { func_138(iParam0) };
	StringCopy(&Var3, func_137(iParam0), 64);
	StringIntConCat(&Var3, iVar0, 64);
	fVar19 = 0f;
	if ((iParam0 == 3 || iParam0 == 2) && Local_160.f_2878 >= func_130(iParam0) + 60 + 10)
	{
		fVar19 = -0,118519f;
	}
	func_81(func_136(iParam0), &Var3, 0,5f, (0,5f + fVar19), Var1, Var1.f_1, 0f, Local_160.f_1765);
	func_135();
}

void func_135()
{
	Local_160.f_2878 = (Local_160.f_2878 + Local_160.f_2877);
}

char* func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "MPInvPersMessages";
		
		case 2:
		case 3:
			return "MPInvPersMessages2";
		
		default:
	}
	return "INVALID SEQUENCE";
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "get ready_";
		
		case 1:
			return "go_";
		
		case 2:
			return "gameover_";
		
		case 3:
			return "stageclear_";
		
		default:
	}
	return "INVALID SEQUENCE";
}

struct<2> func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_86(0,266667f, 0,118519f);
		
		case 1:
			return func_86(0,104167f, 0,118519f);
		
		case 2:
			return func_86(0,266667f, 0,118519f);
		
		case 3:
			return func_86(0,3125f, 0,118519f);
		
		default:
	}
	return func_86(-1f, -1f);
}

void func_139()
{
	Var0 = { func_86(1f, 0,01851852f) };
	iVar2 = func_130(3);
	bVar3 = false;
	if (Local_160.f_2878 < iVar2)
	{
		Var0.f_1 = (Var0.f_1 + (((0,1157407f - 0,01851852f) / IntToFloat(iVar2)) * IntToFloat(Local_160.f_2878)));
	}
	else if (Local_160.f_2878 < iVar2 + 60)
	{
		Var0.f_1 = 0,1157407f;
	}
	else if (Local_160.f_2878 < iVar2 + 60 + 10)
	{
		Var0.f_1 = (0,1157407f + (((0,3472222f - 0,1157407f) / 10f) * IntToFloat(((Local_160.f_2878 - iVar2) - 60))));
	}
	else
	{
		Var0.f_1 = 0,3472222f;
		bVar3 = true;
	}
	func_89(func_86(0,5f, 0,5f), func_143(Var0, func_86(0f, 0,003703704f)), Local_160.f_1765.f_24);
	func_89(func_86(0,5f, 0,5f), Var0, Local_160.f_1765.f_20);
	if (!bVar3)
	{
		return;
	}
	fVar4 = 0,4675926f;
	func_81("MpInvPersHud", "title_armour", (0,4947917f - (0,09583333f / 2f)), fVar4, 0,09583333f, 0,02962963f, 0f, Local_160.f_1765.f_28);
	func_140(Local_160.f_2727, fVar4, 0, 99);
	fVar4 = (fVar4 + 0,03703704f);
	func_81("MpInvPersHud", "title_lives", (0,4947917f - (0,09583333f / 2f)), fVar4, 0,09583333f, 0,02962963f, 0f, Local_160.f_1765.f_28);
	func_140(Local_160.f_2726, fVar4, 0, 99);
	fVar4 = (fVar4 + 0,03703704f);
	func_81("MpInvPersHud", "title_distance", (0,4947917f - (0,09583333f / 2f)), fVar4, 0,09583333f, 0,02962963f, 0f, Local_160.f_1765.f_28);
	func_140(Local_160.f_2728 * 1000, fVar4, 0, 99);
	fVar4 = (fVar4 + (0,03703704f / 2f));
	func_89(func_86((0,5f + 0,022f), (fVar4 + 0,0095f)), func_86(0,175f, 0,005555556f), Local_160.f_1765.f_28);
	fVar4 = (fVar4 + 0,03703704f);
	func_81("MpInvPersHud", "title_total", (0,4947917f - (0,09583333f / 2f)), fVar4, 0,09583333f, 0,02962963f, 0f, Local_160.f_1765.f_28);
	func_140(Local_160.f_2725, fVar4, 1, 99);
}

void func_140(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	func_141(iParam0, func_86(0,503f, fParam1), Local_160.f_1765, 0, bParam2, 0, iParam3);
}

void func_141(int iParam0, struct<2> Param1, struct<4> Param3, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	iVar42 = iParam0;
	Var44 = { func_86(func_142(bParam9, 0,005208333f, 0,01041667f), func_142(bParam9, 0,01481481f, 0,02962963f)) };
	Var46 = { func_86(func_142(bParam9, 0,004166667f, 0,008333333f), func_142(bParam9, 0,01481481f, 0,02962963f)) };
	bVar48 = iParam10 == 99;
	if (bVar48)
	{
		iParam10 = 10;
	}
	iVar41 = 0;
	while (iVar41 <= 9)
	{
		StringCopy(&(Var0[iVar41]), "number_", 16);
		StringIntConCat(&(Var0[iVar41]), (iVar42 % 10), 16);
		iVar42 = (iVar42 / 10);
		if (iVar42 > 0 && (iVar41 + 1 % 3) == 0)
		{
			unk_0x5D96D8530B3D0904(&iVar43, iVar41);
		}
		if (bVar48 && iVar42 == 0)
		{
			iParam10 = iVar41 + 1;
		}
		else
		{
			iVar41++;
		}
	}
	fVar49 = Param1;
	if (bParam7)
	{
		fVar49 = (fVar49 - (Var44 / 2f));
		iVar41 = 0;
		while (iVar41 <= (iParam10 - 1))
		{
			func_81("MPInvPersHud", &(Var0[iVar41]), fVar49, Param1.f_1, Var44, Var44.f_1, 0f, Param3);
			if (unk_0xEAE0D21A50E6C7F4(iVar43, iVar41))
			{
				fVar49 = (fVar49 - Var46);
				func_81("MPInvPersHud", "comma", fVar49, Param1.f_1, Var46, Var46.f_1, 0f, Param3);
			}
			fVar49 = (fVar49 - Var44);
			iVar41++;
		}
		if (bParam8)
		{
			func_81("MPInvPersHud", "dollar", fVar49, Param1.f_1, Var44, Var44.f_1, 0f, Param3);
		}
	}
	else
	{
		fVar49 = (fVar49 + (Var44 / 2f));
		if (bParam8)
		{
			func_81("MPInvPersHud", "dollar", fVar49, Param1.f_1, Var44, Var44.f_1, 0f, Param3);
			fVar49 = (fVar49 + Var44);
		}
		iVar41 = (iParam10 - 1);
		while (iVar41 >= 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar43, iVar41))
			{
				func_81("MPInvPersHud", "comma", fVar49, Param1.f_1, Var46, Var46.f_1, 0f, Param3);
				fVar49 = (fVar49 + Var46);
			}
			func_81("MPInvPersHud", &(Var0[iVar41]), fVar49, Param1.f_1, Var44, Var44.f_1, 0f, Param3);
			fVar49 = (fVar49 + Var44);
			iVar41 = (iVar41 + -1);
		}
	}
}

float func_142(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

struct<2> func_143(struct<2> Param0, struct<2> Param2)
{
	Var0 = (Param0 + Param2);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

void func_144()
{
	func_150();
	func_148();
	func_147();
	func_145();
}

void func_145()
{
	Var0 = { func_86(0,228125f, 0,059259f) };
	Var2 = { func_86(0,7026035f, 0,139444f) };
	StringCopy(&Var4, "distance", 64);
	if (Local_160 == -1f)
	{
		StringConCat(&Var4, "_inf", 64);
	}
	func_81("MPInvPersHud", &Var4, Var2, Var2.f_1, Var0, Var0.f_1, 0f, Local_160.f_1765);
	iVar20 = floor((Local_160.f_2872 / 0,164583f));
	if (Local_160.f_2871 == 4)
	{
		func_141(iVar20 * 1000, func_86((Var2 + 0,026f), (Var2.f_1 + 0,0085f)), Local_160.f_1765.f_32, 1, 0, 1, 99);
		func_141(Local_160.f_2905 * 1000, func_86((Var2 + 0,098f), (Var2.f_1 + 0,0085f)), Local_160.f_1765.f_32, 1, 0, 1, 99);
	}
	else
	{
		func_141(iVar20 * 1000, func_86((Var2 + 0,098f), (Var2.f_1 + 0,0085f)), Local_160.f_1765.f_32, 1, 0, 1, 99);
	}
	if (Local_160 != -1f)
	{
		fVar21 = ((Local_160.f_2872 / 0,164583f) / Local_160);
		if (fVar21 > 1f)
		{
			fVar21 = 1f;
		}
		fVar22 = func_146(((Var2 + -0,01945f) - (0,117708f / 2f)), (Var2 + -0,01945f), fVar21);
		fVar23 = func_146(0f, 0,117708f, fVar21);
		func_81("MPInvPersHud", "distancearrow", (fVar22 + (fVar23 / 2f)), Var2.f_1, 0,00625f, 0,007407f, 0f, Local_160.f_1765);
		Var24.f_3 = 255;
		func_108(&Var24, 154, 255, 0, 125);
		func_89(func_86(fVar22, (Var2.f_1 + 0,0095f)), func_86(fVar23, 0,011111f), Var24);
	}
}

float func_146(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_147()
{
	Var0 = { func_86(0,161458f, 0,059259f) };
	Var2 = { func_86(0,498437f, 0,139444f) };
	func_81("MPInvPersHud", "score", Var2, Var2.f_1, Var0, Var0.f_1, 0f, Local_160.f_1765);
	func_141(Local_160.f_2725, func_86(0,571f, (Var2.f_1 + 0f)), Local_160.f_1765.f_32, 1, 0, 0, 99);
}

void func_148()
{
	Var0 = { func_86(0,15f, 0,059259f) };
	Var2 = { func_86(0,333854f, 0,139444f) };
	func_81("MPInvPersHud", "health", Var2, Var2.f_1, Var0, Var0.f_1, 0f, Local_160.f_1765);
	if (Local_160.f_2368.f_332 < Local_160.f_2368.f_331)
	{
		Local_160.f_2368.f_332 = func_149((Local_160.f_2368.f_332 + Local_160.f_2877), 0, Local_160.f_2368.f_331);
	}
	else if (Local_160.f_2368.f_332 > Local_160.f_2368.f_331)
	{
		Local_160.f_2368.f_332 = func_149((Local_160.f_2368.f_332 - Local_160.f_2877), Local_160.f_2368.f_331, 20);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 0))
	{
		Var5.f_3 = 255;
		if (Local_160.f_2368.f_332 > 1)
		{
			func_108(&Var5, 154, 255, 0, 255);
		}
		else
		{
			func_108(&Var5, 246, 8, 21, 255);
		}
		Var2 = 0,295312f;
		Var0 = { func_86(0,00625f, 0,02963f) };
		iVar4 = 0;
		while (iVar4 <= (Local_160.f_2368.f_332 - 1))
		{
			fVar9 = ((Var2 + (IntToFloat(iVar4) * 0,005208f)) + (Var0 / 2f));
			func_81("MPInvPersHud", "healthsegment", fVar9, Var2.f_1, Var0, Var0.f_1, 0f, Var5);
			iVar4++;
		}
	}
	else
	{
		func_81("MPInvPersHud", "shield_ui", 0,346875f, Var2.f_1, 0,1125f, 0,044444f, 0f, Local_160.f_1765);
	}
}

int func_149(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_150()
{
	Var0 = { func_86(0,066667f, 0,059259f) };
	Var2 = { func_86(0,2166665f, 0,139444f) };
	func_81("MPInvPersHud", "lives", Var2, Var2.f_1, Var0, Var0.f_1, 0f, Local_160.f_1765);
	iVar4 = Local_160.f_2368.f_330;
	if (Local_160.f_2368.f_330 < 0)
	{
		iVar4 = 0;
	}
	func_141(iVar4, func_86((Var2 + 0,003f), (Var2.f_1 + 0f)), Local_160.f_1765.f_32, 0, 0, 0, 2);
}

void func_151()
{
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (unk_0x2B6E0A53779D29EA() > Local_160.f_2812[iVar0] + 1000)
		{
		}
		else
		{
			fVar1 = (to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_2812[iVar0])) / 1000f);
			fVar2 = Local_160.f_2812[iVar0].f_2;
			if (fVar2 < (0,15625f * 1,1f))
			{
			}
			else
			{
				func_152("IAP_SCORE", fVar2, func_154((Local_160.f_2812[iVar0].f_2.f_1 + 0f), (Local_160.f_2812[iVar0].f_2.f_1 + -0,05f), fVar1, 4), Local_160.f_2812[iVar0].f_1);
			}
		}
		iVar0++;
	}
}

void func_152(char* sParam0, float fParam1, float fParam2, int iParam3)
{
	iVar0 = func_153();
	unk_0xD3539A877EC25E86(0,5f, 0,5f);
	unk_0x7178F32F6742C936(255, 255, 255, iVar0);
	unk_0xAAE406A7DA443B93(1);
	unk_0x7BBAC160090910C3(7);
	if (iVar0 > 200)
	{
		unk_0xC8CFC125861F0537();
	}
	unk_0x070005E852D4C0E9(sParam0);
	if (iParam3 != 2147483647)
	{
		unk_0x6D99DF8263D35CE5(iParam3);
	}
	unk_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

int func_153()
{
	return round((unk_0x755FF954DAE327E1(unk_0x76F7F8AA07822C28(to_float(unk_0x1C0640BA9A7327B3()))) * 255f));
}

float func_154(float fParam0, float fParam1, float fParam2, int iParam3)
{
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_155((3,141593f * fParam2))) / 2f) + 0,5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_154(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_154(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_155(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_156()
{
	if (!func_167())
	{
		return;
	}
	Var1.f_3 = 255;
	if (!func_114(&(Local_160.f_2892), 650, 0))
	{
		fVar0 = (to_float(func_166(&(Local_160.f_2892), 0, 0)) / 650f);
		Var1 = { func_165(Local_160.f_1765.f_12, Local_160.f_1765, fVar0) };
		Var1.f_3 = round(func_154(0f, 255f, fVar0, 1));
		func_164(&Var1);
		func_157(fVar0);
	}
	else
	{
		fVar0 = (to_float((func_166(&(Local_160.f_2892), 0, 0) - 650)) / 4000f);
		Var1 = { func_165(Local_160.f_1765, Local_160.f_1765.f_12, fVar0) };
		Var1.f_3 = round(func_154(255f, 0f, fVar0, 2));
		func_164(&Var1);
		func_157(1f);
	}
}

void func_157(float fParam0)
{
	if (fParam0 < 0,8f)
	{
		Local_160.f_2894 = 0;
	}
	else if (Local_160.f_2894 >= func_163(0))
	{
		return;
	}
	Var0 = { func_161(func_162(0), 2f) };
	Var0 = func_154(0f, Var0, fParam0, 1);
	Var0.f_1 = func_154(0f, Var0.f_1, fParam0, 1);
	StringCopy(&Var2, func_160(0), 64);
	StringIntConCat(&Var2, Local_160.f_2894 + 1, 64);
	Var18[0] = { func_86((0,5f + (0f * (1f / 1920f))), (0,5f + (-460f * (1f / 1080f)))) };
	Var18[1] = { func_86((0,5f + (120f * (1f / 1920f))), (0,5f + (-120f * (1f / 1080f)))) };
	Var18[2] = { func_86((0,5f + (480f * (1f / 1920f))), (0,5f + (-110f * (1f / 1080f)))) };
	Var18[3] = { func_86((0,5f + (195f * (1f / 1920f))), (0,5f + (90f * (1f / 1080f)))) };
	Var18[4] = { func_86((0,5f + (300f * (1f / 1920f))), (0,5f + (460f * (1f / 1080f)))) };
	Var18[5] = { func_86((0,5f + (0f * (1f / 1920f))), (0,5f + (255f * (1f / 1080f)))) };
	Var18[6] = { func_86((0,5f + (-300f * (1f / 1920f))), (0,5f + (460f * (1f / 1080f)))) };
	Var18[7] = { func_86((0,5f + (-195f * (1f / 1920f))), (0,5f + (90f * (1f / 1080f)))) };
	Var18[8] = { func_86((0,5f + (-480f * (1f / 1920f))), (0,5f + (-110f * (1f / 1080f)))) };
	Var18[9] = { func_86((0,5f + (-120f * (1f / 1920f))), (0,5f + (-120f * (1f / 1080f)))) };
	Var39 = { func_86(0,5f, 0,5f) };
	iVar41 = 0;
	while (iVar41 <= (Var18 - 1))
	{
		Var42 = { func_159(Var39, Var18[iVar41], fParam0) };
		Var42 = func_154(Var39, Var18[iVar41], func_158(fParam0, 0f, 0,75f), 2);
		Var42.f_1 = func_154(Var39.f_1, Var18[iVar41].f_1, func_158(fParam0, 0f, 0,75f), 2);
		func_81("MPInvPersCommon", &Var2, Var42, Var42.f_1, Var0, Var0.f_1, 0f, Local_160.f_1765);
		iVar41++;
	}
	if (fParam0 >= 0,8f)
	{
		Local_160.f_2894 = (Local_160.f_2894 + Local_160.f_2875);
	}
}

float func_158(float fParam0, float fParam1, float fParam2)
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

struct<2> func_159(struct<2> Param0, struct<2> Param2, float fParam4)
{
	return func_143(func_161(Param0, (1f - fParam4)), func_161(Param2, fParam4));
}

char* func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "explosion_med";
		
		case 1:
			return "tank_smoke";
		
		default:
	}
	return "INVALID EXPLOSION";
}

struct<2> func_161(struct<2> Param0, float fParam2)
{
	Var0 = (Param0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

struct<2> func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_86((0,066667f / 2f), (0,118519f / 2f));
		
		case 1:
			return func_86(0,020833f, 0,037037f);
		
		default:
	}
	return func_86(-1f, -1f);
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 7;
		
		default:
	}
	return 0;
}

void func_164(var uParam0)
{
	unk_0xC1032CAC14DE468A(0,5f, 0,5f, 1f, 1f, *uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, 0);
}

struct<4> func_165(struct<4> Param0, struct<4> Param4, float fParam8)
{
	Param0 = round(((to_float((Param4 - Param0)) * fParam8) + IntToFloat(Param0)));
	Param0.f_1 = round(((to_float((Param4.f_1 - Param0.f_1)) * fParam8) + IntToFloat(Param0.f_1)));
	Param0.f_2 = round(((to_float((Param4.f_2 - Param0.f_2)) * fParam8) + IntToFloat(Param0.f_2)));
	Param0.f_3 = round(((to_float((Param4.f_3 - Param0.f_3)) * fParam8) + IntToFloat(Param0.f_3)));
	return Param0;
}

int func_166(var uParam0, bool bParam1, bool bParam2)
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

int func_167()
{
	if (func_117(&(Local_160.f_2892)))
	{
		if (!func_114(&(Local_160.f_2892), 4000, 0))
		{
			return 1;
		}
		func_98(&(Local_160.f_2892));
	}
	return 0;
}

void func_168()
{
	if (!func_104())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_81(Local_160.f_2895, "blizzard", ((Local_160.f_2896 + (IntToFloat(iVar0) * 0,25f)) + (0,25f / 2f)), ((Local_160.f_2896.f_1 - (IntToFloat(iVar1) * 0,325926f)) - (0,325926f / 2f)), 0,25f, 0,325926f, 0f, Local_160.f_1765);
			iVar1++;
		}
		iVar0++;
	}
}

void func_169()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_160.f_2730[iVar0].f_1 <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, func_160(Local_160.f_2730[iVar0]), 64);
			Var17 = { func_162(Local_160.f_2730[iVar0]) };
			iVar19 = func_163(Local_160.f_2730[iVar0]);
			StringIntConCat(&Var1, Local_160.f_2730[iVar0].f_1 + 1, 64);
			func_81("MPInvPersCommon", &Var1, Local_160.f_2730[iVar0].f_2, Local_160.f_2730[iVar0].f_2.f_1, Var17, Var17.f_1, 0f, Local_160.f_1765);
			Local_160.f_2730[iVar0].f_1 = (Local_160.f_2730[iVar0].f_1 + Local_160.f_2875);
			if (Local_160.f_2730[iVar0].f_1 >= iVar19)
			{
				Local_160.f_2730[iVar0].f_1 = -1;
			}
		}
		iVar0++;
	}
}

void func_170()
{
	if (Local_160.f_2368 == 3)
	{
		func_181();
		return;
	}
	Var0 = { Local_160.f_1765 };
	if (Local_160.f_2368.f_334 + 750 > unk_0x2B6E0A53779D29EA())
	{
		func_180(Local_160.f_1765.f_12);
		Var0 = { Local_160.f_1765.f_12 };
	}
	else if (Local_160.f_2368.f_335 + 500 > unk_0x2B6E0A53779D29EA())
	{
		func_180(Local_160.f_1765.f_8);
		Var0 = { Local_160.f_1765.f_8 };
	}
	if (func_179())
	{
		Var0.f_3 = func_153();
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 0))
	{
		func_178(Var0);
	}
	func_173(Var0);
	Var4 = { func_171() };
	Var6 = { Local_160.f_2368.f_303 };
	StringIntConCat(&Var6, Local_160.f_2368.f_319 + 1, 64);
	func_81(func_16(), &Var6, Local_160.f_2368.f_321, Local_160.f_2368.f_321.f_1, Var4, Var4.f_1, 0f, Var0);
}

struct<2> func_171()
{
	if (func_172())
	{
		return func_86(0,104167f, 0,144444f);
	}
	return func_86(0,104167f, 0,12963f);
}

bool func_172()
{
	return ((Local_160.f_2368 == 1 || Local_160.f_2368 == 2) || Local_160.f_2368 == 4);
}

void func_173(struct<4> Param0)
{
	fVar0 = func_142(func_172(), -0,007407f, 0f);
	Var1 = { func_86((Local_160.f_2368.f_321 + 0,0075f), ((Local_160.f_2368.f_321.f_1 + -0,055f) + fVar0)) };
	Var1 = (((Var1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var3 = { func_177(Var1, func_143(Var1, func_86(0,061f, 0f)), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
	Var5 = { func_176() };
	func_174(func_16(), &Var5, Var3, Var3.f_1, 0,104167f, 0,059259f, (IntToFloat(Local_160.f_2368.f_325) * -15f), Param0);
}

void func_174(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	unk_0xC5491665BE0F7169(sParam0, sParam1, func_175(fParam2), fParam3, (fParam4 * fLocal_136), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

float func_175(float fParam0)
{
	fParam0 = (0,5f - ((0,5f - fParam0) / fLocal_135));
	return fParam0;
}

struct<16> func_176()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			StringCopy(&Var0, "turret_fire", 64);
			StringIntConCat(&Var0, Local_160.f_2368.f_320 + 1, 64);
			break;
		
		case 1:
			StringCopy(&Var0, "turret_flame", 64);
			if (Local_160.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "2", 64);
			}
			else
			{
				StringConCat(&Var0, "1", 64);
			}
			break;
		
		case 2:
			StringCopy(&Var0, "turret_rocket", 64);
			StringIntConCat(&Var0, Local_160.f_2368.f_320 + 1, 64);
			break;
		
		case 3:
			StringConCat(&Var0, "turret_beam", 64);
			if (Local_160.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "_fire", 64);
				StringIntConCat(&Var0, Local_160.f_2368.f_320 + 1, 64);
			}
			break;
	}
	return Var0;
}

struct<2> func_177(struct<2> Param0, struct<2> Param2, float fParam4)
{
	fVar2 = sin(fParam4);
	fVar3 = cos(fParam4);
	Var0 = (Param2 - Param0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar4 = ((Var0 * fVar3) - (Var0.f_1 * fVar2));
	fVar5 = ((Var0 * fVar2) + (Var0.f_1 * fVar3));
	Var0 = (fVar4 + Param0);
	Var0.f_1 = (fVar5 + Param0.f_1);
	return Var0;
}

void func_178(struct<4> Param0)
{
	StringCopy(&Var0, "tank_shield", 64);
	StringIntConCat(&Var0, Local_160.f_2368.f_319 + 1, 64);
	fVar16 = func_142(func_172(), -0,03575f, -0,025222f);
	func_81("MPInvPersCommon", &Var0, (Local_160.f_2368.f_321 + 0f), (Local_160.f_2368.f_321.f_1 + fVar16), 0,110417f, 0,125926f, 0f, Param0);
}

bool func_179()
{
	return ((Local_160.f_2368.f_334 + 750 > unk_0x2B6E0A53779D29EA() || Local_160.f_2368.f_335 + 500 > unk_0x2B6E0A53779D29EA()) || Local_160.f_2368.f_337 + 2000 > unk_0x2B6E0A53779D29EA());
}

void func_180(struct<4> Param0)
{
	Param0.f_3 = round((unk_0x755FF954DAE327E1(unk_0x76F7F8AA07822C28(to_float(unk_0x1C0640BA9A7327B3()))) * 50f)) + 150;
	func_81("MpInvPersHud", "border", (0,5f + 0,002604167f), 0,5f, 1f, 1f, 0f, Param0);
}

void func_181()
{
	if (Local_160.f_2368.f_319 >= 16)
	{
		return;
	}
	func_180(Local_160.f_1765.f_12);
	StringCopy(&Var0, "tank_death", 64);
	StringIntConCat(&Var0, Local_160.f_2368.f_319 + 1, 64);
	func_81(func_16(), &Var0, Local_160.f_2368.f_321, (Local_160.f_2368.f_321.f_1 + -0,035185f), 0,166667f, 0,2f, 0f, Local_160.f_1765);
}

void func_182()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_160.f_2368.f_3[iVar0].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_2368.f_3[iVar0].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_2))
		{
		}
		else if (Local_160.f_2368.f_3[iVar0] == 5)
		{
			func_183(iVar0);
		}
		else
		{
			StringCopy(&Var1, Local_160.f_1734[Local_160.f_2368.f_3[iVar0]], 64);
			if (Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_160.f_2368.f_3[iVar0].f_12 + 1, 64);
			}
			Var17 = { Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_3 };
			fVar19 = Local_160.f_2368.f_3[iVar0].f_9;
			if (Local_160.f_2368.f_3[iVar0] == 3)
			{
				fVar20 = (to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_2368.f_3[iVar0].f_11)) / (IntToFloat(Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_2) * 0,75f));
				if (fVar20 > 1f)
				{
					fVar20 = 1f;
				}
				Var17 = func_154((Var17 / 2f), Var17, fVar20, 1);
				Var17.f_1 = func_154((Var17.f_1 / 2f), Var17.f_1, fVar20, 1);
			}
			func_81("MPInvPersCommon", &Var1, Local_160.f_2368.f_3[iVar0].f_5, Local_160.f_2368.f_3[iVar0].f_5.f_1, Var17, Var17.f_1, fVar19, Local_160.f_1765);
		}
		iVar0++;
	}
}

void func_183(int iParam0)
{
	Var0 = { Local_160.f_1734[Local_160.f_2368.f_3[iParam0]].f_3 };
	Var2 = { func_187(Local_160.f_2368.f_3[iParam0].f_1) };
	Var4 = { func_187(Local_160.f_2368.f_3[iParam0].f_3) };
	Var6 = { func_85(func_186(func_143(Var2, Var4), 2f)) };
	if (!func_185(Local_160.f_2368.f_3[iParam0].f_9, -0,0001f, 0,0001f))
	{
		fVar8 = sin(Local_160.f_2368.f_3[iParam0].f_9);
		fVar9 = cos(Local_160.f_2368.f_3[iParam0].f_9);
		Var10 = { func_184(Var2, Var4, -fVar8, fVar9) };
	}
	else
	{
		Var10 = { Var4 };
	}
	Var10 = { func_85(Var10) };
	Var6 = (((Var6 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var10 = (((Var10 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar12 = (((Local_160.f_2368.f_3[iParam0].f_1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar13 = unk_0x755FF954DAE327E1((Var10 - fVar12));
	Var14 = { Local_160.f_1765.f_16 };
	Var14.f_3 = round((unk_0x755FF954DAE327E1(((to_float(unk_0x1C0640BA9A7327B3()) * 0,1f) % 1f)) * 100f)) + 155;
	func_174("MPInvPersCommon", "Beam_Glow_Tapered", Var6, Var6.f_1, (Var0.f_1 / 2f), fVar13, (Local_160.f_2368.f_3[iParam0].f_9 + 90f), Var14);
	Var14.f_3 = round((unk_0x755FF954DAE327E1(unk_0x76F7F8AA07822C28((to_float((unk_0x2B6E0A53779D29EA() + Local_160.f_2368.f_3[iParam0].f_11)) * 0,5f))) * 180f)) + 75;
	func_174("MPInvPersCommon", "beam_middle", Var6, Var6.f_1, Var0.f_1, fVar13, (Local_160.f_2368.f_3[iParam0].f_9 + 90f), Var14);
	Var14 = { Local_160.f_1765 };
	func_108(&Var14, 255, 255, 255, 255);
	Var14.f_3 = round((unk_0x755FF954DAE327E1(sin(to_float((unk_0x2B6E0A53779D29EA() + Local_160.f_2368.f_3[iParam0].f_11)))) * 155f)) + 100;
	func_174("MPInvPersCommon", "beam_top", Var6, Var6.f_1, Var0.f_1, fVar13, (Local_160.f_2368.f_3[iParam0].f_9 + 90f), Var14);
	Var14 = { Local_160.f_1765 };
	if ((Local_160.f_2368.f_3[iParam0].f_3 > 0,15625f && Local_160.f_2368.f_3[iParam0].f_3 < (1f - 0,15625f)) && Local_160.f_2368.f_3[iParam0].f_3.f_1 > 0f)
	{
		StringCopy(&Var18, Local_160.f_1734[Local_160.f_2368.f_3[iParam0]], 64);
		if (Local_160.f_1734[Local_160.f_2368.f_3[iParam0]].f_1 > 0)
		{
			StringIntConCat(&Var18, Local_160.f_2368.f_3[iParam0].f_12 + 1, 64);
		}
		func_81("MPInvPersCommon", &Var18, Local_160.f_2368.f_3[iParam0].f_3, Local_160.f_2368.f_3[iParam0].f_3.f_1, Var0, Var0.f_1, 0f, Var14);
	}
}

struct<2> func_184(struct<2> Param0, struct<2> Param2, float fParam4, float fParam5)
{
	Var0 = (Param2 - Param0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar2 = ((Var0 * fParam5) - (Var0.f_1 * fParam4));
	fVar3 = ((Var0 * fParam4) + (Var0.f_1 * fParam5));
	Var0 = (fVar2 + Param0);
	Var0.f_1 = (fVar3 + Param0.f_1);
	return Var0;
}

bool func_185(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

struct<2> func_186(struct<2> Param0, float fParam2)
{
	Var0 = (Param0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_187(struct<2> Param0)
{
	return func_86((Param0 * 1920f), (Param0.f_1 * 1080f));
}

void func_188()
{
	fVar0 = sin((to_float(unk_0x1C0640BA9A7327B3()) * 0,5f));
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (Local_160.f_1801[iVar1] == -1)
		{
		}
		else if (Local_160.f_753[Local_160.f_1801[iVar1]] == 4)
		{
		}
		else if (Local_160.f_753[Local_160.f_1801[iVar1]] == 3)
		{
			if (Local_160.f_1801[iVar1].f_11 & 1 == 0)
			{
			}
			else if (Local_160.f_1801[iVar1].f_1 >= func_200(iVar1))
			{
			}
			else if (!func_198(iVar1))
			{
			}
			else
			{
				sVar2 = func_197(iVar1);
				Var3 = { func_195(iVar1) };
				Var5 = { func_193(iVar1) };
				StringCopy(&Var9, func_192(iVar1), 64);
				if (Local_160.f_753[Local_160.f_1801[iVar1]] == 6)
				{
					func_191(iVar1);
				}
				else if (func_200(iVar1) > 0)
				{
					StringIntConCat(&Var9, Local_160.f_1801[iVar1].f_1 + 1, 64);
				}
				fVar25 = 0f;
				Var26 = { Local_160.f_1801[iVar1].f_3 };
				if (Local_160.f_753[Local_160.f_1801[iVar1]] == 5 && Local_160.f_1801[iVar1].f_10 == 2)
				{
					fVar25 = (fVar0 * 20f);
					Var28 = { Var26 };
					Var28.f_1 = (Var28.f_1 - ((Var3.f_1 / 2f) + (0,037037f / 2f)));
					Var28 = { func_187(Var28) };
					Var28 = { func_177(func_187(Var26), Var28, fVar25) };
					Var28 = { func_85(Var28) };
					func_81(sVar2, "parachute", Var28, Var28.f_1, 0,020833f, 0,037037f, fVar25, Var5);
				}
				if (Local_160.f_753[Local_160.f_1801[iVar1]] == 3 && Local_160.f_1801[iVar1].f_11 & 1 != 0)
				{
					Var26 = { func_143(Var26, func_189()) };
				}
				func_81(sVar2, &Var9, Var26, Var26.f_1, Var3, Var3.f_1, fVar25, Var5);
			}
			iVar1++;
		}

struct<2> func_189()
{
	switch (func_190())
	{
		case 8:
			return func_86(0f, 0f);
		
		case 9:
			return func_86(0f, 0f);
		
		case 10:
			return func_86(-0,011979f, 0f);
		
		case 11:
			return func_86(0f, 0f);
		
		case 12:
			return func_86(0f, 0f);
		
		default:
	}
	return func_86(0f, 0f);
}

int func_190()
{
	return (8 + Local_160.f_2871);
}

void func_191(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_8 == -2147483647)
	{
		return;
	}
	StringCopy(&Var0, "capture_flag", 64);
	if (func_200(iParam0) > 0)
	{
		StringIntConCat(&Var0, Local_160.f_1801[iParam0].f_1 + 1, 64);
	}
	Var16 = { func_195(iParam0) };
	func_81("MpInvPersCommon", &Var0, (Local_160.f_1801[iParam0].f_3 + (0,045833f / 2f)), ((Local_160.f_1801[iParam0].f_3.f_1 - (Var16.f_1 / 2f)) - Local_160.f_1801[iParam0].f_5.f_1), 0,045833f, 0,088889f, 0f, Local_160.f_1765);
}

char* func_192(int iParam0)
{
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 3 && Local_160.f_1801[iParam0].f_11 & 1 != 0)
	{
		return "pit_collapse";
	}
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
		{
			return "crate_open";
		}
		return "explosion_med";
	}
	switch (Local_160.f_1801[iParam0].f_10)
	{
		case 1:
			return Local_160.f_753[Local_160.f_1801[iParam0]].f_26;
		
		case 0:
		case 2:
			return Local_160.f_753[Local_160.f_1801[iParam0]].f_24;
		
		default:
	}
	return "INVALID STATE";
}

struct<4> func_193(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
		{
			return func_194(Local_160.f_1801[iParam0]);
		}
		return Local_160.f_1765;
	}
	if (Local_160.f_1801[iParam0].f_8 + 500 > unk_0x2B6E0A53779D29EA())
	{
		Var0.f_3 = 255;
		if (Local_160.f_753[Local_160.f_1801[iParam0]] == 6)
		{
			func_108(&Var0, 0, func_153(), 0, 255);
		}
		else
		{
			func_108(&Var0, 255, 0, 0, func_153());
		}
		return Var0;
	}
	return Local_160.f_1765;
}

struct<4> func_194(int iParam0)
{
	Var0.f_3 = 255;
	switch (iParam0)
	{
		case 18:
			func_108(&Var0, 255, 139, 63, 255);
			break;
		
		case 19:
			func_108(&Var0, 139, 0, 255, 255);
			break;
		
		case 20:
		case 21:
		case 22:
			func_108(&Var0, 154, 255, 0, 255);
			break;
		
		case 25:
			func_108(&Var0, 24, 203, 247, 255);
			break;
		
		case 24:
			func_108(&Var0, 205, 0, 0, 255);
			break;
		
		case 28:
			func_108(&Var0, 244, 11, 225, 255);
			break;
		
		case 23:
			func_108(&Var0, 94, 250, 255, 255);
			break;
		
		case 26:
			func_108(&Var0, 205, 0, 0, 255);
			break;
		
		case 27:
			func_108(&Var0, 107, 150, 255, 255);
			break;
	}
	return Var0;
}

struct<2> func_195(int iParam0)
{
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 3 && Local_160.f_1801[iParam0].f_11 & 1 != 0)
	{
		return func_196();
	}
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
		{
			return func_86(0,085417f, 0,092593f);
		}
		return func_86(0,066667f, 0,118519f);
	}
	return func_86(Local_160.f_753[Local_160.f_1801[iParam0]].f_22, Local_160.f_753[Local_160.f_1801[iParam0]].f_22.f_1);
}

struct<2> func_196()
{
	switch (func_190())
	{
		case 8:
			return func_86(0f, 0f);
		
		case 9:
			return func_86(0f, 0f);
		
		case 10:
			return func_86(0,177083f, 0,211111f);
		
		case 11:
			return func_86(0f, 0f);
		
		case 12:
			return func_86(0f, 0f);
		
		default:
	}
	return func_86(0f, 0f);
}

var func_197(int iParam0)
{
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 3 && Local_160.f_1801[iParam0].f_11 & 1 != 0)
	{
		return Local_160.f_2895;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5 || Local_160.f_753[Local_160.f_1801[iParam0]] == 6)
	{
		return "MpInvPersCommon";
	}
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		return "MPInvPersCommon";
	}
	return Local_160.f_2895;
}

int func_198(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_7 == 0 && Local_160.f_1801[iParam0].f_1 > func_200(iParam0))
	{
		return 0;
	}
	if (func_199(Local_160.f_1801[iParam0].f_3, func_195(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_199(struct<2> Param0, struct<2> Param2)
{
	fVar0 = (Param0 - (Param2 / 2f));
	if (fVar0 > (1f - 0,15625f))
	{
		return 1;
	}
	fVar1 = (Param0 + (Param2 / 2f));
	if (fVar1 < 0,15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param2.f_1 / 2f));
	if (fVar2 > (1f - 0,06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param2.f_1 / 2f));
	if (fVar3 < (0f + 0,06944444f))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
		{
			return 3;
		}
		return 6;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 3 && Local_160.f_1801[iParam0].f_11 & 1 != 0)
	{
		return 4;
	}
	switch (Local_160.f_1801[iParam0].f_10)
	{
		case 1:
			return Local_160.f_753[Local_160.f_1801[iParam0]].f_27;
		
		case 0:
		case 2:
			return Local_160.f_753[Local_160.f_1801[iParam0]].f_25;
		
		default:
	}
	return 0;
}

void func_201()
{
	func_164(&(Local_160.f_749));
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_725 - 1))
	{
		fVar1 = (Local_160.f_726 * IntToFloat(iVar0));
		func_81(Local_160.f_2895, Local_160.f_724, (Local_160.f_2340 + fVar1), (Local_160.f_728 + 0f), Local_160.f_726, Local_160.f_726.f_1, 0f, Local_160.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_730 - 1))
	{
		fVar1 = (Local_160.f_731 * IntToFloat(iVar0));
		func_81(Local_160.f_2895, Local_160.f_729, (Local_160.f_2340.f_1 + fVar1), (Local_160.f_733 + 0f), Local_160.f_731, Local_160.f_731.f_1, 0f, Local_160.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_735 - 1))
	{
		fVar1 = (Local_160.f_736 * IntToFloat(iVar0));
		func_81(Local_160.f_2895, Local_160.f_734, (Local_160.f_2340.f_2 + fVar1), (Local_160.f_738 + 0f), Local_160.f_736, Local_160.f_736.f_1, 0f, Local_160.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_740 - 1))
	{
		fVar1 = (Local_160.f_741 * IntToFloat(iVar0));
		func_81(Local_160.f_2895, Local_160.f_739, (Local_160.f_2340.f_3 + fVar1), (Local_160.f_743 + 0f), Local_160.f_741, Local_160.f_741.f_1, 0f, Local_160.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_160.f_745 - 1))
	{
		if (Local_160.f_2340.f_12[iVar0] == 1)
		{
			Var2 = { Local_160.f_753[func_190()].f_22 };
			if (func_199(func_86(Local_160.f_2340.f_4[iVar0], Local_160.f_748), Var2))
			{
			}
			else
			{
				func_81(Local_160.f_2895, Local_160.f_753[func_190()].f_24, Local_160.f_2340.f_4[iVar0], Local_160.f_753[func_190()].f_2, Var2, Var2.f_1, 0f, Local_160.f_1765);
				Jump @720; //curOff = 499
				if (Local_160.f_2340.f_12[iVar0] == 2)
				{
					Var4 = { Local_160.f_753[func_202()].f_22 };
					if (func_199(func_86(Local_160.f_2340.f_4[iVar0], Local_160.f_748), Var4))
					{
					}
					else
					{
						func_81(Local_160.f_2895, Local_160.f_753[func_202()].f_24, Local_160.f_2340.f_4[iVar0], Local_160.f_753[func_202()].f_2, Var4, Var4.f_1, 0f, Local_160.f_1765);
						Jump @720; //curOff = 630
						if (func_199(func_86(Local_160.f_2340.f_4[iVar0], Local_160.f_748), Local_160.f_746))
						{
						}
						else
						{
							func_81(Local_160.f_2895, Local_160.f_744, Local_160.f_2340.f_4[iVar0], Local_160.f_748, Local_160.f_746, Local_160.f_746.f_1, 0f, Local_160.f_1765);
						}
					}
					iVar0++;
				}

int func_202()
{
	return (13 + Local_160.f_2871);
}

void func_203()
{
	if (Local_160.f_2901 == -2147483647)
	{
		return;
	}
	if (unk_0xEA6BC48857E0AC4C(Local_160.f_2903))
	{
		return;
	}
	if (unk_0x2B6E0A53779D29EA() > Local_160.f_2901)
	{
		func_9();
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 2);
	StringCopy(&Var0, Local_160.f_2903, 16);
	if (Local_160.f_2902 == -1)
	{
		if (unk_0x91E3F625EF57450D(2))
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_61(&Var0))
		{
			return;
		}
		func_204(&Var0, Local_160.f_2902);
		return;
	}
	if (func_61(&Var0))
	{
		return;
	}
	func_59(&Var0);
}

void func_204(char* sParam0, int iParam1)
{
	Local_160.f_2947 = unk_0x12AB0310C2281427(sParam0);
	func_205(sParam0, iParam1, -1);
}

void func_205(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

void func_206()
{
	iVar0 = func_41();
	iVar1 = (iVar0 - Local_160.f_2725);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = round((unk_0x6117725E0134737F() * 1000f));
	iVar3 = (iVar2 * func_208(Local_160.f_2870 == 9, 12, 4));
	if (Local_160.f_2870 == 9 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 6))
	{
		iVar3 *= 5;
	}
	if (iVar3 > iVar1)
	{
		iVar3 = iVar1;
	}
	Local_160.f_2725 = (Local_160.f_2725 + iVar3);
	func_207();
}

void func_207()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 5))
	{
		return;
	}
	if (Local_160.f_2725 < Global_262145.f_26472)
	{
		return;
	}
	func_125(252, 1, -1, 1);
	func_124(27188, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 5);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 11);
	func_123();
	func_122("IAP_CH_4", Global_262145.f_26472, 7500);
}

int func_208(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_209()
{
	if (!func_104())
	{
		return;
	}
	Local_160.f_2896 = (Local_160.f_2896 + ((-0,25f / 4f) * timestep()));
	Local_160.f_2896.f_1 = (Local_160.f_2896.f_1 + ((0,325926f / 4f) * timestep()));
	if (Local_160.f_2896 < (0,15625f - 0,25f) || Local_160.f_2896.f_1 > (1f + 0,325926f))
	{
		Local_160.f_2896 = (Local_160.f_2896 + 0,25f);
		Local_160.f_2896.f_1 = (Local_160.f_2896.f_1 - 0,325926f);
	}
}

void func_210()
{
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (unk_0x2B6E0A53779D29EA() > Local_160.f_2812[iVar0] + 1000)
		{
		}
		else if (Local_160.f_2870 == 7)
		{
			Local_160.f_2812[iVar0].f_2 = func_132(Local_160.f_2812[iVar0].f_2, -0,15f);
		}
		iVar0++;
	}
}

void func_211()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_160.f_2730[iVar0].f_1 <= -1)
		{
		}
		else
		{
			Local_160.f_2730[iVar0].f_2 = func_132(Local_160.f_2730[iVar0].f_2, -0,15f);
		}
		iVar0++;
	}
}

void func_212()
{
	Var6.f_3 = 255;
	func_108(&Var6, 255, 255, 255, 255);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_160.f_2368.f_3[iVar0] == 5)
		{
			if (Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_1 > 0)
			{
				Local_160.f_2368.f_3[iVar0].f_12 = (Local_160.f_2368.f_3[iVar0].f_12 + Local_160.f_2875);
				if (Local_160.f_2368.f_3[iVar0].f_12 >= Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_1)
				{
					Local_160.f_2368.f_3[iVar0].f_12 = 0;
				}
			}
		}
		else if (Local_160.f_2368.f_3[iVar0].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_2368.f_3[iVar0].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_2))
		{
			if (Local_160.f_2368.f_3[iVar0] == 4)
			{
				Local_160.f_2368.f_3[iVar0].f_11 = -2147483647;
				if (!func_199(Local_160.f_2368.f_3[iVar0].f_5, func_86(0,0001f, 0,0001f)))
				{
					func_222(func_224(Local_160.f_2368.f_3[iVar0]), "dlc_vw_am_ip_tank_sounds", Local_160.f_2368.f_3[iVar0].f_5);
					func_221(Local_160.f_2368.f_3[iVar0].f_5, 0);
				}
			}
		}
		else
		{
			fVar10 = (to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_2368.f_3[iVar0].f_11)) / IntToFloat(Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_2));
			Local_160.f_2368.f_3[iVar0].f_7 = { Local_160.f_2368.f_3[iVar0].f_5 };
			if (Local_160.f_2368.f_3[iVar0] == 4)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Local_160.f_1801[iVar1] == -1)
					{
					}
					else if ((((Local_160.f_753[Local_160.f_1801[iVar1]] == 5 || Local_160.f_753[Local_160.f_1801[iVar1]] == 3) || Local_160.f_753[Local_160.f_1801[iVar1]] == 4) || Local_160.f_753[Local_160.f_1801[iVar1]] == 6) || Local_160.f_753[Local_160.f_1801[iVar1]] == 8)
					{
					}
					else if (Local_160.f_1801[iVar1].f_7 == 0)
					{
					}
					else if (func_199(Local_160.f_1801[iVar1].f_3, Local_160.f_753[Local_160.f_1801[iVar1]].f_22))
					{
					}
					else
					{
						Var11 = { Local_160.f_1801[iVar1].f_3 };
						if (func_220(Var11, Local_160.f_2368.f_3[iVar0].f_5) < pow(0,35f, 2f))
						{
							Local_160.f_2368.f_3[iVar0].f_3 = { Var11 };
						}
						else
						{
							iVar1++;
						}
						Var4 = { func_187(Local_160.f_2368.f_3[iVar0].f_3) };
						Var2 = { func_187(Local_160.f_2368.f_3[iVar0].f_5) };
						Local_160.f_2368.f_3[iVar0].f_10 = unk_0x5D8ABF6396A76564((Var4.f_1 - Var2.f_1), (Var4 - Var2));
						Local_160.f_2368.f_3[iVar0].f_10 = (Local_160.f_2368.f_3[iVar0].f_10 + (sin(to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_2368.f_3[iVar0].f_11))) * 30f));
						if (Local_160.f_2368.f_3[iVar0].f_9 > Local_160.f_2368.f_3[iVar0].f_10)
						{
							Local_160.f_2368.f_3[iVar0].f_9 = func_158((Local_160.f_2368.f_3[iVar0].f_9 - (180f * timestep())), Local_160.f_2368.f_3[iVar0].f_10, Local_160.f_2368.f_3[iVar0].f_9);
						}
						else if (Local_160.f_2368.f_3[iVar0].f_10 > Local_160.f_2368.f_3[iVar0].f_9)
						{
							Local_160.f_2368.f_3[iVar0].f_9 = func_158((Local_160.f_2368.f_3[iVar0].f_9 + (180f * timestep())), Local_160.f_2368.f_3[iVar0].f_9, Local_160.f_2368.f_3[iVar0].f_10);
						}
						Var2 = { func_85(func_177(Var2, func_143(Var2, func_86(1920f, 0f)), Local_160.f_2368.f_3[iVar0].f_9)) };
						Local_160.f_2368.f_3[iVar0].f_5 = { func_219(Local_160.f_2368.f_3[iVar0].f_5, Var2, 0,375f) };
						Jump @1218; //curOff = 1164
						Local_160.f_2368.f_3[iVar0].f_5 = { func_159(Local_160.f_2368.f_3[iVar0].f_1, Local_160.f_2368.f_3[iVar0].f_3, fVar10) };
						if (Local_160.f_2368.f_3[iVar0].f_3.f_1 >= Local_160.f_2368.f_3[iVar0].f_1.f_1)
						{
							fVar13 = func_213(Local_160.f_2368.f_3[iVar0].f_5, 0);
							if (Local_160.f_2368.f_3[iVar0].f_5.f_1 > fVar13)
							{
								Local_160.f_2368.f_3[iVar0].f_11 = -2147483647;
								if (!func_199(Local_160.f_2368.f_3[iVar0].f_5, func_86(0,0001f, 0,0001f)))
								{
									func_222(func_224(Local_160.f_2368.f_3[iVar0]), "dlc_vw_am_ip_tank_sounds", Local_160.f_2368.f_3[iVar0].f_5);
									func_221(Local_160.f_2368.f_3[iVar0].f_5, 0);
								}
							}
						}
						if (Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_1 > 0)
						{
							Local_160.f_2368.f_3[iVar0].f_12 = (Local_160.f_2368.f_3[iVar0].f_12 + Local_160.f_2875);
							if (Local_160.f_2368.f_3[iVar0].f_12 >= Local_160.f_1734[Local_160.f_2368.f_3[iVar0]].f_1)
							{
								Local_160.f_2368.f_3[iVar0].f_12 = 0;
							}
						}
						iVar0++;
					}

float func_213(float fParam0, int iParam1)
{
	fVar0 = (Local_160.f_2340.f_4[0] - (func_217(0) / 2f));
	iVar1 = 0;
	while (iVar1 <= (Local_160.f_745 - 1))
	{
		fVar0 = (fVar0 + func_217(iVar1));
		if (fParam0 < fVar0)
		{
			if (Local_160.f_2340.f_12[iVar1] == 1 && (iParam1 || Local_160.f_1801[Local_160.f_2340.f_20[iVar1]].f_11 & 1 == 0))
			{
				if (fParam0 > ((fVar0 - func_216()) + func_215()) && fParam0 < (fVar0 - func_214()))
				{
					return 1,2f;
				}
			}
			if (Local_160.f_2340.f_12[iVar1] == 2)
			{
				return (((1f - 0,06944444f) - Local_160.f_753[func_202()].f_22.f_1) + 0,03240715f);
			}
			return Local_160.f_3;
		}
		iVar1++;
	}
	return Local_160.f_3;
}

float func_214()
{
	switch (func_190())
	{
		case 8:
			return 0,09635416f;
		
		case 9:
			return 0,0390625f;
		
		case 10:
			return 0,0765625f;
		
		case 11:
			return 0,05833333f;
		
		case 12:
			return 0,053125f;
		
		default:
	}
	return 0f;
}

float func_215()
{
	switch (func_190())
	{
		case 8:
			return 0,109375f;
		
		case 9:
			return 0,03645833f;
		
		case 10:
			return 0,06822917f;
		
		case 11:
			return 0,03072917f;
		
		case 12:
			return 0,04322917f;
		
		default:
	}
	return 0f;
}

float func_216()
{
	return Local_160.f_753[func_190()].f_22;
}

float func_217(int iParam0)
{
	if (Local_160.f_2340.f_12[iParam0] == 1)
	{
		return func_216();
	}
	if (Local_160.f_2340.f_12[iParam0] == 2)
	{
		return func_218();
	}
	return Local_160.f_746;
}

var func_218()
{
	return Local_160.f_753[func_202()].f_22;
}

struct<2> func_219(struct<2> Param0, struct<2> Param2, float fParam4)
{
	fVar2 = (fParam4 * 1920f);
	fVar2 = (0f + (fVar2 * timestep()));
	fVar3 = (fParam4 * 1080f);
	fVar3 = (0f + (fVar3 * timestep()));
	Param0 = { func_187(Param0) };
	Param2 = { func_187(Param2) };
	fVar4 = sqrt((pow((Param2 - Param0), 2f) + pow((Param2.f_1 - Param0.f_1), 2f)));
	fVar5 = (Param2 - Param0);
	fVar6 = (Param2.f_1 - Param0.f_1);
	if (fVar4 != 0f)
	{
		fVar5 = (fVar5 / fVar4);
		fVar6 = (fVar6 / fVar4);
	}
	Var0 = (Param0 + (fVar2 * fVar5));
	Var0.f_1 = (Param0.f_1 + (fVar3 * fVar6));
	return func_85(Var0);
}

float func_220(struct<2> Param0, struct<2> Param2)
{
	return (pow((Param2 - Param0), 2f) + pow((Param2.f_1 - Param0.f_1), 2f));
}

void func_221(struct<2> Param0, int iParam2)
{
	Local_160.f_2730[Local_160.f_2811].f_1 = 0;
	Local_160.f_2730[Local_160.f_2811].f_2 = { Param0 };
	Local_160.f_2730[Local_160.f_2811] = iParam2;
	Local_160.f_2811++;
	if (Local_160.f_2811 >= 20)
	{
		Local_160.f_2811 = 0;
	}
}

void func_222(char* sParam0, char* sParam1, struct<2> Param2)
{
	fVar0 = func_223(Param2);
	if (fVar0 > 1f || fVar0 < 0f)
	{
	}
	iVar1 = unk_0xD68EA767274B7444();
	unk_0x4D7F4CC43D4D0DE3(iVar1, sParam0, sParam1, false);
	unk_0x6F6BA3FE885E6C91(iVar1, "Screen_Position", fVar0);
	unk_0x43A06902454A1172(iVar1);
}

float func_223(float fParam0, var uParam1)
{
	return func_158(((fParam0 - 0,15625f) / 0,658333f), 0f, 1f);
}

char* func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Hit";
		
		case 3:
			return "Tank_Weapon_Flamethrower_Fire_Hit";
		
		case 4:
			return "Tank_Weapon_Rocket_Hit";
		
		default:
	}
	return "";
}

void func_225()
{
	iVar0 = unk_0x2B6E0A53779D29EA();
	Var4 = { Local_160.f_2368.f_321 };
	fVar6 = func_213((Local_160.f_2368.f_321 + 0,011458f), 0);
	func_228();
	switch (Local_160.f_2368)
	{
		case 0:
			StringCopy(&(Local_160.f_2368.f_303), "tank_drive", 64);
			Local_160.f_2368.f_319 = (Local_160.f_2368.f_319 + Local_160.f_2875);
			if (Local_160.f_2368.f_319 >= 4)
			{
				Local_160.f_2368.f_319 = 0;
			}
			if (Local_160.f_2368.f_321.f_1 < (-0,061111f + fVar6) && (Local_160.f_2368.f_337 == -2147483647 || (iVar0 - Local_160.f_2368.f_337) > round((500f * 1,5f))))
			{
				func_101(2);
				Local_160.f_2368.f_327 = iVar0;
			}
			else if ((Local_160.f_2368.f_321.f_1 - (-0,061111f / 2f)) > fVar6)
			{
				func_227("Tank_Collision", &(Local_160.f_2368.f_343));
				Local_160.f_2368.f_330 = (Local_160.f_2368.f_330 - 1);
				Local_160.f_2368.f_331 = 0;
				if (Local_160.f_2368.f_2 != 0)
				{
					func_102(0);
				}
				Local_160.f_2368.f_319 = 0;
				func_101(3);
				func_227("Tank_Destroyed", &(Local_160.f_2368.f_343));
				if (Local_160.f_2368.f_330 >= 0)
				{
					func_47("Frontend_Player_Death");
				}
				Local_160.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 1:
			StringCopy(&(Local_160.f_2368.f_303), "tank_jump", 64);
			Local_160.f_2368.f_319 = (Local_160.f_2368.f_319 + Local_160.f_2875);
			if (Local_160.f_2368.f_319 >= 4)
			{
				Local_160.f_2368.f_319 = 0;
			}
			fVar1 = (to_float((iVar0 - Local_160.f_2368.f_327)) / 600f);
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				func_101(2);
				Local_160.f_2368.f_327 = iVar0;
			}
			Local_160.f_2368.f_321.f_1 = func_154(Local_160.f_2368.f_328, Local_160.f_2368.f_329, fVar1, 2);
			if ((Local_160.f_2368.f_321.f_1 - (-0,061111f / 2f)) > fVar6)
			{
				func_227("Tank_Collision", &(Local_160.f_2368.f_343));
				Local_160.f_2368.f_330 = (Local_160.f_2368.f_330 - 1);
				Local_160.f_2368.f_331 = 0;
				if (Local_160.f_2368.f_2 != 0)
				{
					func_102(0);
				}
				Local_160.f_2368.f_319 = 0;
				func_101(3);
				func_227("Tank_Destroyed", &(Local_160.f_2368.f_343));
				if (Local_160.f_2368.f_330 >= 0)
				{
					func_47("Frontend_Player_Death");
				}
				Local_160.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 2:
			StringCopy(&(Local_160.f_2368.f_303), "tank_jump", 64);
			Local_160.f_2368.f_319 = (Local_160.f_2368.f_319 + Local_160.f_2875);
			if (Local_160.f_2368.f_319 >= 4)
			{
				Local_160.f_2368.f_319 = 0;
			}
			if ((Local_160.f_2368.f_321.f_1 - (-0,061111f / 2f)) > fVar6)
			{
				func_227("Tank_Collision", &(Local_160.f_2368.f_343));
				Local_160.f_2368.f_330 = (Local_160.f_2368.f_330 - 1);
				Local_160.f_2368.f_331 = 0;
				if (Local_160.f_2368.f_2 != 0)
				{
					func_102(0);
				}
				Local_160.f_2368.f_319 = 0;
				func_101(3);
				func_227("Tank_Destroyed", &(Local_160.f_2368.f_343));
				if (Local_160.f_2368.f_330 >= 0)
				{
					func_47("Frontend_Player_Death");
				}
				Local_160.f_2368.f_327 = iVar0;
				return;
			}
			if (Local_160.f_2368.f_321.f_1 > Local_160.f_3)
			{
				Local_160.f_2368.f_321 = func_132(Local_160.f_2368.f_321, -0,15f);
			}
			Local_160.f_2368.f_321.f_1 = (Local_160.f_2368.f_321.f_1 + (func_154(0f, 0,5f, (to_float((iVar0 - Local_160.f_2368.f_327)) / 500f), 1) * timestep()));
			if (Local_160.f_2368.f_321.f_1 > (-0,061111f + fVar6))
			{
				Local_160.f_2368.f_321.f_1 = (-0,061111f + fVar6);
				if (Local_160.f_2368.f_321.f_1 > Local_160.f_3)
				{
					func_227("Tank_Collision", &(Local_160.f_2368.f_343));
					Local_160.f_2368.f_330 = (Local_160.f_2368.f_330 - 1);
					Local_160.f_2368.f_331 = 0;
					if (Local_160.f_2368.f_2 != 0)
					{
						func_102(0);
					}
					Local_160.f_2368.f_319 = 0;
					func_101(3);
					func_227("Tank_Destroyed", &(Local_160.f_2368.f_343));
					if (Local_160.f_2368.f_330 >= 0)
					{
						func_47("Frontend_Player_Death");
					}
					Local_160.f_2368.f_327 = iVar0;
					return;
				}
				else
				{
					func_101(0);
					func_227("Tank_Jump_Land", &(Local_160.f_2368.f_343));
					Local_160.f_2368.f_327 = iVar0;
				}
			}
			break;
		
		case 3:
			Local_160.f_2368.f_319 = (Local_160.f_2368.f_319 + Local_160.f_2875);
			if (Local_160.f_2870 == 7)
			{
				Local_160.f_2368.f_321 = func_132(Local_160.f_2368.f_321, -0,15f);
			}
			if (Local_160.f_2368.f_321.f_1 < (-0,061111f + fVar6))
			{
				Local_160.f_2368.f_321.f_1 = (Local_160.f_2368.f_321.f_1 + (func_154(0f, 0,5f, (to_float((iVar0 - Local_160.f_2368.f_327)) / 500f), 1) * timestep()));
				if (Local_160.f_2368.f_321.f_1 >= (-0,061111f + fVar6))
				{
					Local_160.f_2368.f_321.f_1 = (-0,061111f + fVar6);
				}
			}
			if (Local_160.f_2368.f_319 > 16 && Local_160.f_2870 == 7)
			{
				func_226();
			}
			break;
		
		case 4:
			fVar1 = (to_float((iVar0 - Local_160.f_2368.f_337)) / 500f);
			fVar2 = func_213(((Local_160.f_2368.f_321 + 0,011458f) + (((0,15f * Local_160.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
			if (Local_160.f_2368.f_321.f_1 < 0f)
			{
				if (fVar2 > Local_160.f_3)
				{
					Local_160.f_2368.f_337 = iVar0;
					Local_160.f_2368.f_321.f_1 = -0,2f;
					return;
				}
				else
				{
					fVar3 = func_213(((Local_160.f_2368.f_321 + 0,104167f) + (((0,15f * Local_160.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
					if (!func_185((fVar3 - fVar2), -0,0001f, 0,0001f))
					{
						Local_160.f_2368.f_337 = iVar0;
						Local_160.f_2368.f_321.f_1 = -0,2f;
						return;
					}
				}
			}
			StringCopy(&(Local_160.f_2368.f_303), "tank_jump", 64);
			Local_160.f_2368.f_319 = (Local_160.f_2368.f_319 + Local_160.f_2875);
			if (Local_160.f_2368.f_319 >= 4)
			{
				Local_160.f_2368.f_319 = 0;
			}
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				Local_160.f_2368.f_319 = 0;
				func_227("Tank_Jump_Land", &(Local_160.f_2368.f_343));
				func_101(0);
				Local_160.f_2368.f_321.f_1 = (-0,061111f + fVar6);
			}
			else
			{
				Local_160.f_2368.f_321.f_1 = func_154(-0,2f, (-0,061111f + fVar2), fVar1, 1);
			}
			break;
	}
	if (Local_160.f_2368.f_331 == 1)
	{
		if (iVar0 > Local_160.f_2368.f_336 + 150)
		{
			Var4 = (Var4 + unk_0x79833B02DBD2A244((-0,104167f / 2f), (0,104167f / 2f)));
			Var4.f_1 = (Var4.f_1 + unk_0x79833B02DBD2A244((-0,12963f / 2f), (0,12963f / 2f)));
			func_221(Var4, 1);
			Local_160.f_2368.f_336 = iVar0;
		}
	}
}

void func_226()
{
	if (Local_160.f_2368.f_330 < 0)
	{
		return;
	}
	Local_160.f_2368.f_321 = 0,3f;
	Local_160.f_2368.f_321.f_1 = -0,2f;
	Local_160.f_2368.f_337 = unk_0x2B6E0A53779D29EA();
	Local_160.f_2368.f_331 = 20;
	Local_160.f_2368.f_332 = 0;
	Local_160.f_2368.f_333 = 0;
	Local_160.f_2368.f_325 = 0;
	Local_160.f_2368.f_319 = 0;
	func_101(4);
}

void func_227(char* sParam0, var uParam1)
{
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xD68EA767274B7444();
	}
	fVar0 = func_223(Local_160.f_2368.f_321);
	unk_0x4D7F4CC43D4D0DE3(*uParam1, sParam0, "dlc_vw_am_ip_tank_sounds", false);
	unk_0x6F6BA3FE885E6C91(*uParam1, "Screen_Position", fVar0);
}

void func_228()
{
	if (Local_160.f_2368.f_339 == -1)
	{
		Local_160.f_2368.f_339 = unk_0xD68EA767274B7444();
	}
	uVar0 = func_199(Local_160.f_2368.f_321, func_86(0,166667f, 0,2f));
	bVar1 = Local_160.f_2368 == 3;
	if (!unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_339) && (uVar0 || bVar1))
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_339);
		if (Local_160.f_2368.f_340 > -1 && !unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_340))
		{
			unk_0x55D0A2DB35045A35(Local_160.f_2368.f_340);
		}
		return;
	}
	if (uVar0 || bVar1)
	{
		return;
	}
	if (unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_339))
	{
		unk_0x4D7F4CC43D4D0DE3(Local_160.f_2368.f_339, "Tank_Engine_Loop", "dlc_vw_am_ip_tank_sounds", false);
	}
	fVar2 = func_223(Local_160.f_2368.f_321);
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_339, "Screen_Position", fVar2);
	fVar3 = func_142(func_172(), 1f, 0f);
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_339, "IsJumping", fVar3);
	fVar4 = (to_float(Local_160.f_2368.f_331) / to_float(20));
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_339, "DamageLevel", fVar4);
	if (Local_160.f_2368.f_331 == 1)
	{
		if (Local_160.f_2368.f_340 == -1)
		{
			Local_160.f_2368.f_340 = unk_0xD68EA767274B7444();
		}
		if (unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_340))
		{
			unk_0x4D7F4CC43D4D0DE3(Local_160.f_2368.f_340, "Tank_Critical_Damage_Loop", "dlc_vw_am_ip_tank_sounds", false);
		}
		unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_340, "Screen_Position", fVar2);
	}
	else if (Local_160.f_2368.f_340 > -1 && !unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_340))
	{
		unk_0x55D0A2DB35045A35(Local_160.f_2368.f_340);
	}
}

void func_229()
{
	switch (Local_160.f_2368.f_1)
	{
		case 0:
			if (Local_160.f_2368.f_320 != 0)
			{
				Local_160.f_2368.f_320 = 0;
			}
			break;
		
		case 1:
			Local_160.f_2368.f_320 = (Local_160.f_2368.f_320 + Local_160.f_2875);
			if (Local_160.f_2368.f_320 >= 4)
			{
				Local_160.f_2368.f_320 = 0;
				func_100(0);
			}
			break;
	}
}

void func_230()
{
	func_257();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_160.f_1801[iVar0] == -1)
		{
		}
		else
		{
			func_248(iVar0);
			if (Local_160.f_1801[iVar0] == -1)
			{
			}
			else if (func_167())
			{
				func_242(iVar0);
			}
			else
			{
				func_231(iVar0);
			}
		}
		iVar0++;
	}
}

void func_231(int iParam0)
{
	if (Local_160.f_2870 != 7)
	{
		return;
	}
	if (Local_160.f_1801[iParam0].f_7 <= 0)
	{
		return;
	}
	if (func_199(Local_160.f_1801[iParam0].f_3, Local_160.f_753[Local_160.f_1801[iParam0]].f_22))
	{
		return;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]].f_14 == 0)
	{
		return;
	}
	if (unk_0x2B6E0A53779D29EA() < (Local_160.f_1801[iParam0].f_9 + func_241(iParam0)))
	{
		return;
	}
	func_240(iParam0, &Var0, &Var2);
	if (func_199(Var0, func_86(0,0001f, 0,0001f)))
	{
		Local_160.f_1801[iParam0].f_9 = unk_0x2B6E0A53779D29EA();
		return;
	}
	Local_160.f_1998[Local_160.f_2209] = func_239(iParam0);
	Local_160.f_1998[Local_160.f_2209].f_1 = { Var0 };
	Local_160.f_1998[Local_160.f_2209].f_3 = { Var2 };
	Local_160.f_1998[Local_160.f_2209].f_5 = { Var0 };
	Local_160.f_1998[Local_160.f_2209].f_7 = { Var0 };
	Local_160.f_1998[Local_160.f_2209].f_9 = func_238(iParam0);
	Local_160.f_1998[Local_160.f_2209].f_11 = unk_0x2B6E0A53779D29EA();
	Local_160.f_1998[Local_160.f_2209].f_13 = func_237(iParam0);
	Local_160.f_1998[Local_160.f_2209].f_12 = func_236(iParam0);
	Local_160.f_2209++;
	if (Local_160.f_2209 >= 15)
	{
		Local_160.f_2209 = 0;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]].f_27 > 0 && Local_160.f_2870 == 7)
	{
		Local_160.f_1801[iParam0].f_10 = 1;
		Local_160.f_1801[iParam0].f_1 = 0;
	}
	Local_160.f_1801[iParam0].f_9 = unk_0x2B6E0A53779D29EA();
	if (func_235(iParam0) && Local_160.f_1801[iParam0].f_12 > -1)
	{
		func_232(func_234(iParam0), func_233(iParam0), iParam0);
	}
}

void func_232(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = Local_160.f_1801[iParam2].f_12;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_223(Local_160.f_1801[iParam2].f_3);
	unk_0x4D7F4CC43D4D0DE3(iVar0, sParam0, sParam1, false);
	unk_0x6F6BA3FE885E6C91(iVar0, "Screen_Position", fVar1);
}

char* func_233(int iParam0)
{
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
		case 1:
		case 2:
		case 7:
			return "dlc_vw_am_ip_enemy_sounds";
		
		case 5:
			return "dlc_vw_am_ip_powerup_sounds";
		
		default:
	}
	return "";
}

char* func_234(int iParam0)
{
	switch (Local_160.f_1801[iParam0])
	{
		case 2:
			return "Enemy_Bear_Fire";
		
		case 0:
			return "Enemy_Camel_Fire";
		
		case 3:
			return "Enemy_Moose_Fire";
		
		case 1:
			return "Enemy_Panda_Fire";
		
		case 5:
			return "Enemy_Drone_Fire";
		
		case 4:
			return "Enemy_Jet_Bomb_Barrel_Drop";
		
		default:
	}
	return "";
}

int func_235(int iParam0)
{
	if (((((Local_160.f_1801[iParam0] == 2 || Local_160.f_1801[iParam0] == 0) || Local_160.f_1801[iParam0] == 3) || Local_160.f_1801[iParam0] == 1) || Local_160.f_1801[iParam0] == 5) || Local_160.f_1801[iParam0] == 4)
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
		case 2:
			return -1;
		
		case 1:
			return 0;
		
		default:
	}
	return 2147483647;
}

var func_237(int iParam0)
{
	return Local_160.f_753[Local_160.f_1801[iParam0]].f_15;
}

float func_238(int iParam0)
{
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
		case 1:
			return 0f;
		
		case 2:
			return -45f;
		
		default:
	}
	return 0f;
}

int func_239(int iParam0)
{
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
		case 2:
			return 2;
		
		case 1:
			return 1;
		
		default:
	}
	return -1;
}

void func_240(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { func_187(func_86((Local_160.f_1801[iParam0].f_3 + Local_160.f_753[Local_160.f_1801[iParam0]].f_3), (Local_160.f_1801[iParam0].f_3.f_1 + Local_160.f_753[Local_160.f_1801[iParam0]].f_3.f_1))) };
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
			*uParam2 = { func_177(*uParam1, func_143(*uParam1, func_187(func_86(1f, 0f))), -180f) };
			break;
		
		case 2:
			*uParam2 = { func_177(*uParam1, func_143(*uParam1, func_187(func_86(1f, 0f))), 135f) };
			break;
		
		case 1:
			*uParam2 = { func_177(*uParam1, func_143(*uParam1, func_187(func_86(1f, 0f))), 85f) };
			break;
	}
	*uParam1 = { func_85(*uParam1) };
	*uParam2 = { func_85(*uParam2) };
}

int func_241(int iParam0)
{
	iVar0 = Local_160.f_753[Local_160.f_1801[iParam0]].f_14;
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 1)
	{
		iVar0 = round((IntToFloat(iVar0) / Local_160.f_2873));
	}
	return iVar0;
}

void func_242(int iParam0)
{
	if (func_247(Local_160.f_753[Local_160.f_1801[iParam0]]))
	{
		return;
	}
	if (Local_160.f_1801[iParam0].f_7 <= 0)
	{
		return;
	}
	if (!func_114(&(Local_160.f_2892), 650, 0))
	{
		Local_160.f_1801[iParam0].f_8 = unk_0x2B6E0A53779D29EA();
	}
	else
	{
		func_243(iParam0, -Local_160.f_753[Local_160.f_1801[iParam0]].f_17);
	}
}

void func_243(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (Local_160.f_1801[iParam0].f_7 <= 0)
	{
		return;
	}
	Local_160.f_1801[iParam0].f_7 = func_149((Local_160.f_1801[iParam0].f_7 + iParam1), 0, Local_160.f_753[Local_160.f_1801[iParam0]].f_17);
	Local_160.f_1801[iParam0].f_8 = unk_0x2B6E0A53779D29EA();
	if (Local_160.f_1801[iParam0].f_7 > 0)
	{
		return;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]].f_16 > 0)
	{
		func_120(Local_160.f_753[Local_160.f_1801[iParam0]].f_16, 0, Local_160.f_1801[iParam0].f_3);
		if (func_246(iParam0))
		{
			Local_160.f_2712.f_5++;
		}
	}
	if (func_245(iParam0) && Local_160.f_1801[iParam0].f_12 != -1)
	{
		func_232(func_244(iParam0), func_233(iParam0), iParam0);
	}
}

char* func_244(int iParam0)
{
	switch (Local_160.f_1801[iParam0])
	{
		case 2:
			return "Enemy_Bear_Die";
		
		case 0:
			return "Enemy_Camel_Die";
		
		case 3:
			return "Enemy_Moose_Die";
		
		case 1:
			return "Enemy_Panda_Die";
		
		case 5:
			return "Enemy_Drone_Destroyed";
		
		case 4:
			return "Enemy_Jet_Explode";
		
		default:
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 7)
	{
		return "Enemy_Drone_Destroyed";
	}
	return "";
}

int func_245(int iParam0)
{
	if (((((Local_160.f_1801[iParam0] == 2 || Local_160.f_1801[iParam0] == 0) || Local_160.f_1801[iParam0] == 3) || Local_160.f_1801[iParam0] == 1) || Local_160.f_1801[iParam0] == 5) || Local_160.f_1801[iParam0] == 4)
	{
		return 1;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 7)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (((Local_160.f_1801[iParam0] == 0 || Local_160.f_1801[iParam0] == 2) || Local_160.f_1801[iParam0] == 1) || Local_160.f_1801[iParam0] == 3)
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)
{
	if ((((iParam0 == 8 || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_3 < (0,15625f - (Local_160.f_753[Local_160.f_1801[iParam0]].f_22 / 2f)))
	{
		func_256(iParam0);
		return;
	}
	if (Local_160.f_1801[iParam0].f_12 == -1 || Local_160.f_1801[iParam0].f_13 == -1)
	{
		if (!func_199(Local_160.f_1801[iParam0].f_3, Local_160.f_753[Local_160.f_1801[iParam0]].f_22))
		{
			Local_160.f_1801[iParam0].f_12 = unk_0xD68EA767274B7444();
			Local_160.f_1801[iParam0].f_13 = unk_0xD68EA767274B7444();
			if (func_255(iParam0))
			{
				func_232(func_254(iParam0), func_233(iParam0), iParam0);
			}
		}
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 3 && Local_160.f_1801[iParam0].f_11 & 1 != 0)
	{
		func_253(iParam0);
	}
	else
	{
		Local_160.f_1801[iParam0].f_1 = (Local_160.f_1801[iParam0].f_1 + Local_160.f_2875);
		if (Local_160.f_1801[iParam0].f_7 > 0)
		{
			switch (Local_160.f_1801[iParam0].f_10)
			{
				case 0:
				case 2:
					if (Local_160.f_1801[iParam0].f_1 >= Local_160.f_753[Local_160.f_1801[iParam0]].f_25)
					{
						Local_160.f_1801[iParam0].f_1 = 0;
					}
					break;
				
				case 1:
					if (Local_160.f_1801[iParam0].f_1 >= Local_160.f_753[Local_160.f_1801[iParam0]].f_27)
					{
						Local_160.f_1801[iParam0].f_1 = 0;
						Local_160.f_1801[iParam0].f_10 = 0;
					}
					break;
			}
		}
		else if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
		{
			if (Local_160.f_1801[iParam0].f_1 > 3)
			{
				func_256(iParam0);
				return;
			}
		}
		else if (Local_160.f_1801[iParam0].f_1 > 6)
		{
			func_256(iParam0);
			return;
		}
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 6)
	{
		func_250(iParam0);
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 2)
	{
		fVar3 = Local_160.f_753[Local_160.f_1801[iParam0]].f_1;
		if ((unk_0x2B6E0A53779D29EA() - Local_160.f_1801[iParam0].f_2) > 6500 || Local_160.f_2870 > 7)
		{
			if (Local_160.f_1801[iParam0].f_11 & 1 != 0 && Local_160.f_2870 == 7)
			{
				Var1 = { Local_160.f_2368.f_321 };
			}
			else
			{
				Var1 = -1f;
				Var1.f_1 = 0f;
			}
			fVar3 = (fVar3 * 1,25f);
		}
		else
		{
			Var1 = { func_86((Local_160.f_2368.f_321 + 0,125f), (Local_160.f_2368.f_321.f_1 + -0,225f)) };
			if (Var1.f_1 > (Local_160.f_3 + -0,225f))
			{
				Var1.f_1 = (Local_160.f_3 + -0,225f);
			}
		}
		Var4 = { func_187(func_143(Var1, func_86(0,15f, 0f))) };
		Var1 = { func_187(Var1) };
		fVar6 = sin(((Local_160.f_2872 * 2000f) + IntToFloat(iParam0 * 100)));
		fVar7 = (30f + (fVar6 * 15f));
		Var8 = { func_85(func_177(Var1, Var4, (180f + fVar7))) };
		Local_160.f_1801[iParam0].f_5 = { func_159(func_85(Var1), Var8, sin(((Local_160.f_2872 * 650f) + IntToFloat(iParam0 * 100)))) };
		Local_160.f_1801[iParam0].f_3 = { func_219(Local_160.f_1801[iParam0].f_3, Local_160.f_1801[iParam0].f_5, fVar3) };
		if (Local_160.f_1801[iParam0].f_13 > -1)
		{
			if (Local_160.f_1801[iParam0].f_7 > 0)
			{
				func_249("Enemy_Drone_Loop", iParam0);
			}
		}
		return;
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5 && Local_160.f_1801[iParam0].f_10 == 2)
	{
		fVar0 = func_213(Local_160.f_1801[iParam0].f_3, 0);
		if (Local_160.f_1801[iParam0].f_3.f_1 < (Local_160.f_753[Local_160.f_1801[iParam0]].f_2 + fVar0))
		{
			Local_160.f_1801[iParam0].f_3.f_1 = (Local_160.f_1801[iParam0].f_3.f_1 + (0,45f * timestep()));
			if (Local_160.f_1801[iParam0].f_3.f_1 >= (Local_160.f_753[Local_160.f_1801[iParam0]].f_2 + fVar0))
			{
				Local_160.f_1801[iParam0].f_3.f_1 = (Local_160.f_753[Local_160.f_1801[iParam0]].f_2 + fVar0);
				Local_160.f_1801[iParam0].f_10 = 0;
				if (Local_160.f_1801[iParam0].f_12 != -1)
				{
					func_232("Powerup_Crate_Land", func_233(iParam0), iParam0);
				}
			}
		}
	}
	if (Local_160.f_2870 != 7 && Local_160.f_753[Local_160.f_1801[iParam0]] != 1)
	{
		return;
	}
	if (Local_160.f_1801[iParam0] == 33)
	{
		fVar0 = func_213((Local_160.f_1801[iParam0].f_3 - (Local_160.f_753[33].f_22 / 2f)), 0);
		fVar10 = func_213((Local_160.f_1801[iParam0].f_3 + (Local_160.f_753[33].f_22 / 2f)), 0);
		if ((fVar0 > Local_160.f_3 || !func_185(fVar0, (fVar10 - 0,0001f), (fVar10 + 0,0001f))) || !func_185((fVar0 + Local_160.f_753[33].f_2), (Local_160.f_1801[iParam0].f_3.f_1 - 0,0001f), (Local_160.f_1801[iParam0].f_3.f_1 + 0,0001f)))
		{
			Local_160.f_1801[iParam0].f_3 = func_132(Local_160.f_1801[iParam0].f_3, Local_160.f_753[Local_160.f_1801[iParam0]].f_1);
			return;
		}
	}
	Local_160.f_1801[iParam0].f_3 = func_132(Local_160.f_1801[iParam0].f_3, -Local_160.f_753[Local_160.f_1801[iParam0]].f_1);
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 1)
	{
		if (Local_160.f_1801[iParam0].f_7 > 0)
		{
			if (Local_160.f_1801[iParam0].f_13 > -1)
			{
				func_249("Enemy_Jet_Flyover", iParam0);
			}
		}
	}
}

void func_249(char* sParam0, int iParam1)
{
	iVar0 = Local_160.f_1801[iParam1].f_13;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_223(Local_160.f_1801[iParam1].f_3);
	if (unk_0x8AA6DC470ABA63A2(iVar0))
	{
		unk_0x4D7F4CC43D4D0DE3(iVar0, sParam0, "dlc_vw_am_ip_enemy_sounds", false);
	}
	unk_0x6F6BA3FE885E6C91(iVar0, "Screen_Position", fVar1);
}

void func_250(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_8 != -2147483647)
	{
		Local_160.f_1801[iParam0].f_5.f_1 = (Local_160.f_1801[iParam0].f_5.f_1 + (0,177778f * timestep()));
		if (Local_160.f_1801[iParam0].f_5.f_1 > 0,040404f)
		{
			Local_160.f_1801[iParam0].f_5.f_1 = 0,040404f;
		}
		return;
	}
	if (Local_160.f_1801[iParam0].f_3 < Local_160.f_2368.f_321)
	{
		Local_160.f_1801[iParam0].f_8 = unk_0x2B6E0A53779D29EA();
		Local_160.f_1801[iParam0].f_5.f_1 = 0f;
		func_120(Local_160.f_753[Local_160.f_1801[iParam0]].f_16, 2, Local_160.f_1801[iParam0].f_3);
		if (Local_160.f_1801[iParam0].f_11 & 1 == 0)
		{
			func_232("Tank_Raise_Flag", "dlc_vw_am_ip_tank_sounds", iParam0);
		}
		if (Local_160.f_2870 == 7 && Local_160.f_2212 < 1)
		{
			if (Local_160.f_2873 < 2f)
			{
				func_252("IAP_SPD_UP");
			}
			func_47("Frontend_Player_Oil_Collect");
			Local_160.f_2873 = (Local_160.f_2873 + func_251(Local_160.f_1801[iParam0]));
			if (Local_160.f_2873 > 2f)
			{
				Local_160.f_2873 = 2f;
			}
		}
	}
}

float func_251(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 0,02f;
		
		case 31:
		case 30:
			return 0,04f;
		
		case 32:
			return 0,06f;
		
		default:
	}
	return 0f;
}

void func_252(char* sParam0)
{
	Local_160.f_2368.f_286 = unk_0x2B6E0A53779D29EA();
	StringCopy(&(Local_160.f_2368.f_286.f_1), sParam0, 64);
}

void func_253(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_7 == 0)
	{
		Local_160.f_1801[iParam0].f_1 = (Local_160.f_1801[iParam0].f_1 + round((IntToFloat(Local_160.f_2875) / 1,25f)));
		if (Local_160.f_1801[iParam0].f_1 >= 4)
		{
			Local_160.f_1801[iParam0].f_11 &= -2;
			Local_160.f_1801[iParam0].f_7 = 1;
		}
	}
	else if (Local_160.f_1801[iParam0].f_3 < (Local_160.f_2368.f_321 + func_216()))
	{
		Local_160.f_1801[iParam0].f_7 = 0;
		Local_160.f_1801[iParam0].f_1 = 0;
		if (Local_160.f_1801[iParam0].f_12 != -1)
		{
			func_232("Enemy_Hazard_Wall_Collapse", "dlc_vw_am_ip_enemy_sounds", iParam0);
		}
	}
}

char* func_254(int iParam0)
{
	switch (Local_160.f_1801[iParam0])
	{
		case 2:
			return "Enemy_Bear_Spawn";
		
		case 0:
			return "Enemy_Camel_Spawn";
		
		case 3:
			return "Enemy_Moose_Spawn";
		
		case 1:
			return "Enemy_Panda_Spawn";
		
		default:
	}
	if (Local_160.f_753[Local_160.f_1801[iParam0]] == 5)
	{
		return "Powerup_Crate_Parachute_Open";
	}
	return "";
}

int func_255(int iParam0)
{
	switch (Local_160.f_753[Local_160.f_1801[iParam0]])
	{
		case 0:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_256(int iParam0)
{
	if (Local_160.f_1801[iParam0].f_12 > -1)
	{
		unk_0x43A06902454A1172(Local_160.f_1801[iParam0].f_12);
		Local_160.f_1801[iParam0].f_12 = -1;
	}
	if (Local_160.f_1801[iParam0].f_13 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_1801[iParam0].f_13);
		unk_0x43A06902454A1172(Local_160.f_1801[iParam0].f_13);
		Local_160.f_1801[iParam0].f_13 = -1;
	}
	Local_160.f_1801[iParam0] = -1;
}

void func_257()
{
	if (Local_160.f_2870 != 7)
	{
		return;
	}
	if (Local_160.f_2871 == 4 && !func_52(&(Local_160.f_2898), 33))
	{
		if (Local_160.f_2905 < 1)
		{
			func_265(&(Local_160.f_2898), 33);
		}
		else if (Local_160.f_2872 / 0,164583f) >= IntToFloat((Local_160.f_2905 - 1))
		{
			func_262(33, to_float(Local_160.f_2905));
		}
	}
	if (Local_160.f_2210 >= 225 || Local_160.f_4[Local_160.f_2210] == -1)
	{
		if (Local_160 == -1f)
		{
			return;
		}
		if (Local_160.f_2212 >= 14)
		{
			return;
		}
		iVar1 = Local_160.f_680[Local_160.f_2212];
		fVar0 = (Local_160 - Local_160.f_680[Local_160.f_2212].f_1);
		if (Local_160.f_2872 / 0,164583f) >= (Local_160 - 5f)
		{
			func_261(Local_160.f_2213, iVar1, Local_160.f_680[Local_160.f_2212].f_2, fVar0);
			Local_160.f_2212++;
			Local_160.f_2213++;
			if (Local_160.f_2213 >= 14)
			{
				Local_160.f_2213 = 0;
			}
		}
		return;
	}
	if (Local_160.f_2870 != 7)
	{
		return;
	}
	if (Local_160.f_4[Local_160.f_2210] == 34)
	{
		func_258();
		return;
	}
	iVar1 = Local_160.f_4[Local_160.f_2210];
	fVar0 = Local_160.f_4[Local_160.f_2210].f_1;
	if ((Local_160.f_2872 / 0,164583f) >= fVar0)
	{
		if (func_262(iVar1, fVar0))
		{
			Local_160.f_2210++;
		}
	}
}

void func_258()
{
	if (Local_160 != -1f && (Local_160.f_2872 / 0,164583f) >= (Local_160 - 12,5f))
	{
		Local_160.f_2210++;
		return;
	}
	fVar0 = ((Local_160.f_2872 / 0,164583f) / 1250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	Local_160.f_2214 = func_154(0,25f, 0f, fVar0, 2);
	Local_160.f_2214.f_1 = func_154(3f, 1,75f, fVar0, 2);
	if ((Local_160.f_2872 / 0,164583f) > Local_160.f_2214.f_124)
	{
		iVar1 = Local_160.f_2214.f_125;
		if (iVar1 == -1)
		{
			if (Local_160.f_2214.f_124 < 0f)
			{
				unk_0xA2A47104FF02486E(Local_160.f_1);
			}
			else
			{
				unk_0xA2A47104FF02486E(floor((sin(Local_160.f_2214.f_124) * Local_160.f_2214.f_124)));
			}
			Local_160.f_2214.f_124 = (Local_160.f_2214.f_124 + func_260());
			Local_160.f_2214.f_125 = func_259();
			return;
		}
		if ((Local_160.f_2872 / 0,164583f) >= Local_160.f_2214.f_124)
		{
			if (func_262(Local_160.f_2214.f_125, Local_160.f_2214.f_124))
			{
				Local_160.f_2214.f_125 = -1;
			}
		}
	}
}

int func_259()
{
	iVar36 = 0;
	while (iVar36 <= 9)
	{
		iVar37 = 0;
		while (iVar37 <= 9)
		{
			if ((Local_160.f_2214.f_124 - Local_160.f_2214.f_113[iVar36]) < Local_160.f_2214.f_2[iVar36][iVar37])
			{
				unk_0x5D96D8530B3D0904(&iVar39, iVar37);
			}
			iVar37++;
		}
		iVar36++;
	}
	iVar36 = 0;
	while (iVar36 <= 34)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_753[iVar36].f_19, Local_160.f_2871))
		{
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar39, Local_160.f_753[iVar36].f_18))
		{
			iVar0[iVar38] = iVar36;
			iVar38++;
		}
		iVar36++;
	}
	if (iVar38 == 0)
	{
		Local_160.f_2214.f_124 = (Local_160.f_2214.f_124 + func_260());
		return -1;
	}
	iVar40 = iVar0[unk_0x09AC81E49EA267F7(0, iVar38)];
	Local_160.f_2214.f_113[Local_160.f_753[iVar40].f_18] = Local_160.f_2214.f_124;
	return iVar40;
}

float func_260()
{
	return unk_0x79833B02DBD2A244(Local_160.f_2214, Local_160.f_2214.f_1);
}

void func_261(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_160.f_1801[iParam0] = iParam1;
	Local_160.f_1801[iParam0].f_11 = iParam2;
	Local_160.f_1801[iParam0].f_1 = 0;
	if (Local_160.f_1801[iParam0].f_12 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_1801[iParam0].f_12);
		unk_0x43A06902454A1172(Local_160.f_1801[iParam0].f_12);
		Local_160.f_1801[iParam0].f_12 = -1;
	}
	if (Local_160.f_1801[iParam0].f_13 > -1)
	{
		unk_0x55D0A2DB35045A35(Local_160.f_1801[iParam0].f_13);
		unk_0x43A06902454A1172(Local_160.f_1801[iParam0].f_13);
		Local_160.f_1801[iParam0].f_13 = -1;
	}
	Local_160.f_1801[iParam0].f_8 = -2147483647;
	Local_160.f_1801[iParam0].f_7 = Local_160.f_753[iParam1].f_17;
	fVar0 = ((fParam3 * 0,164583f) - Local_160.f_2872);
	fVar1 = (fVar0 * ((-0,15f * Local_160.f_2873) / (Local_160.f_753[iParam1].f_1 * Local_160.f_2873)));
	Local_160.f_1801[iParam0].f_3 = { func_86((1f - fVar1), Local_160.f_753[iParam1].f_2) };
	if (((Local_160.f_753[iParam1] != 3 && Local_160.f_753[iParam1] != 4) && Local_160.f_753[iParam1] != 1) && Local_160.f_753[iParam1] != 2)
	{
		Local_160.f_1801[iParam0].f_3.f_1 = (Local_160.f_1801[iParam0].f_3.f_1 + func_213(Local_160.f_1801[iParam0].f_3, 0));
	}
	if (Local_160.f_753[iParam1] == 5)
	{
		fVar2 = (fVar0 * 0,45f);
		Local_160.f_1801[iParam0].f_3.f_1 = (Local_160.f_1801[iParam0].f_3.f_1 - (0,9f - fVar2));
		Local_160.f_1801[iParam0].f_10 = 2;
	}
	if (Local_160.f_753[iParam1] == 3)
	{
		Local_160.f_2340.f_12[(Local_160.f_745 - 1)] = 1;
		Local_160.f_2340.f_20[(Local_160.f_745 - 1)] = iParam0;
		Local_160.f_1801[iParam0].f_3 = func_132((Local_160.f_2340.f_4[(Local_160.f_745 - 1)] + ((func_216() - Local_160.f_746) / 2f)), 0,15f);
	}
	else if (Local_160.f_753[iParam1] == 4)
	{
		Local_160.f_2340.f_12[(Local_160.f_745 - 1)] = 2;
		Local_160.f_2340.f_20[(Local_160.f_745 - 1)] = iParam0;
		Local_160.f_1801[iParam0].f_3 = func_132((Local_160.f_2340.f_4[(Local_160.f_745 - 1)] + ((func_216() - Local_160.f_746) / 2f)), 0,15f);
	}
	if (Local_160.f_753[iParam1] == 6)
	{
		if (iParam2 & 2 != 0)
		{
			Local_160.f_1801[iParam0].f_3.f_1 = (Local_160.f_1801[iParam0].f_3.f_1 - (Local_160.f_753[iParam1].f_22.f_1 / 2f));
		}
	}
	Local_160.f_1801[iParam0].f_2 = unk_0x6794171A1021C2D8();
}

int func_262(int iParam0, float fParam1)
{
	if (Local_160.f_753[iParam0] == 3 || Local_160.f_753[iParam0] == 4)
	{
		if ((Local_160.f_2340.f_12[(Local_160.f_745 - 1)] == 1 || Local_160.f_2340.f_12[(Local_160.f_745 - 1)] == 2) || !func_199(func_86((Local_160.f_2340.f_4[(Local_160.f_745 - 1)] + ((func_216() - Local_160.f_746) / 2f)), Local_160.f_753[iParam0].f_2), Local_160.f_753[iParam0].f_22))
		{
			return 0;
		}
		else if (Local_160.f_2214.f_124 > -1f && iParam0 != 33)
		{
			Local_160.f_2214.f_124 = (Local_160.f_2214.f_124 + ((((Local_160.f_2872 / 0,164583f) - Local_160.f_2214.f_124) + ((Local_160.f_753[iParam0].f_22 / 2f) / 0,164583f)) + (((1f - Local_160.f_2340.f_4[(Local_160.f_745 - 1)]) + ((func_216() - Local_160.f_746) / 2f)) / -0,164583f)));
			Local_160.f_2214.f_113[Local_160.f_753[iParam0].f_18] = Local_160.f_2214.f_124;
		}
	}
	if (!func_167() || func_247(Local_160.f_753[iParam0]))
	{
		func_264(&iParam0);
		iVar0 = 0;
		if (Local_160.f_4[Local_160.f_2210] != 34)
		{
			iVar0 = Local_160.f_4[Local_160.f_2210].f_2;
		}
		func_261(Local_160.f_2211, iParam0, iVar0, fParam1);
		Local_160.f_2211++;
		if (Local_160.f_2211 >= 14)
		{
			Local_160.f_2211 = 0;
		}
	}
	if (!func_52(&(Local_160.f_2898), iParam0))
	{
		func_265(&(Local_160.f_2898), iParam0);
		if (!unk_0xEA6BC48857E0AC4C(Local_160.f_753[iParam0].f_20))
		{
			func_263(Local_160.f_753[iParam0].f_20, Local_160.f_753[iParam0].f_21);
		}
	}
	return 1;
}

void func_263(var uParam0, int iParam1)
{
	func_9();
	Local_160.f_2901 = (unk_0x2B6E0A53779D29EA() + iParam1);
	Local_160.f_2903 = uParam0;
	Local_160.f_2902 = -1;
}

void func_264(int iParam0)
{
	if (*iParam0 == 26 && Local_160.f_2368.f_2 != 0)
	{
		*iParam0 = 22;
	}
}

void func_265(var uParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(uParam0[func_51(iParam1)], func_50(iParam1));
}

void func_266()
{
	if (!func_117(&(Local_160.f_2888)))
	{
		func_116(&(Local_160.f_2888), 0, 0);
	}
	func_230();
	func_229();
	func_225();
	func_209();
	func_211();
	func_210();
	func_206();
	func_203();
	func_267();
	if (!func_118())
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 8) && func_114(&(Local_160.f_2888), 5500, 0))
	{
		func_12(func_13(3));
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 8);
	}
	if (!func_114(&(Local_160.f_2888), 7500, 0))
	{
		return;
	}
	func_7(5);
	func_109();
}

void func_267()
{
	func_201();
	func_188();
	func_170();
	func_151();
	func_168();
	func_156();
	func_151();
	func_144();
	func_139();
	func_134(2);
	func_82();
	func_80();
}

void func_268()
{
	if (!func_117(&(Local_160.f_2884)))
	{
		func_116(&(Local_160.f_2884), 0, 0);
		Local_160.f_2878 = 0;
	}
	func_305();
	func_301();
	func_230();
	func_225();
	func_229();
	func_290();
	func_212();
	func_289();
	func_211();
	func_210();
	func_209();
	func_275();
	func_206();
	func_203();
	func_272();
	if (Local_160.f_2368.f_331 == 0 && Local_160.f_2368.f_330 < 0)
	{
		func_271();
		Local_160.f_2878 = 0;
		func_270(8356, Local_160.f_2905, -1, 1, 0);
		func_8(8);
		Local_160.f_2368.f_319 = 0;
		func_98(&(Local_160.f_2884));
		Local_160.f_2726 = 0;
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 5);
		Local_160.f_2727 = 0;
		unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 4);
		Local_160.f_2728 = floor((Local_160.f_2872 / 0,164583f));
		func_7(4);
		func_47("Frontend_Game_Over");
		func_12(func_13(5));
		return;
	}
	if (Local_160 != -1f && (Local_160.f_2872 / 0,164583f) >= Local_160)
	{
		func_271();
		func_7(6);
		Local_160.f_2878 = 0;
		func_100(0);
		func_270(8356, Local_160.f_2905, -1, 1, 0);
		func_269();
		Local_160.f_2726 = Local_160.f_2368.f_330;
		Local_160.f_2727 = Local_160.f_2368.f_331;
		Local_160.f_2728 = floor((Local_160.f_2872 / 0,164583f));
		func_8(9);
		func_47("Frontend_Stage_Clear");
		func_12(func_13(5));
		func_98(&(Local_160.f_2884));
	}
}

void func_269()
{
	if (Local_160.f_2907)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 4))
	{
		return;
	}
	if (Local_160.f_2368.f_330 < Global_262145.f_26471)
	{
		return;
	}
	func_125(251, 1, -1, 1);
	func_124(27187, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 4);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 10);
	func_123();
	func_122("IAP_CH_3", Global_262145.f_26471, 7500);
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_126(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_271()
{
	if (Local_160.f_2368.f_338 > -1)
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_338))
		{
			unk_0x55D0A2DB35045A35(Local_160.f_2368.f_338);
			unk_0x43A06902454A1172(Local_160.f_2368.f_338);
			Local_160.f_2368.f_338 = -1;
		}
	}
}

void func_272()
{
	func_201();
	func_188();
	func_274();
	func_182();
	func_170();
	func_169();
	func_168();
	func_156();
	func_273();
	func_151();
	func_144();
	if (func_117(&(Local_160.f_2884)) && !func_114(&(Local_160.f_2884), 1750, 0))
	{
		func_134(1);
	}
	func_82();
	func_80();
}

void func_273()
{
	if (unk_0x2B6E0A53779D29EA() > Local_160.f_2368.f_286 + 1000)
	{
		return;
	}
	fVar0 = (to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_2368.f_286)) / 1000f);
	func_152(&(Local_160.f_2368.f_286.f_1), (Local_160.f_2368.f_321 + 0,0075f), func_154((Local_160.f_2368.f_321.f_1 + -0,125f), (Local_160.f_2368.f_321.f_1 + -0,2f), fVar0, 4), 2147483647);
}

void func_274()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_160.f_1998[iVar0].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_1998[iVar0].f_11 + Local_160.f_1734[Local_160.f_1998[iVar0]].f_2))
		{
		}
		else
		{
			StringCopy(&Var1, Local_160.f_1734[Local_160.f_1998[iVar0]], 64);
			if (Local_160.f_2871 == 4 && Local_160.f_1998[iVar0] == 1)
			{
				StringConCat(&Var1, "_moon", 64);
			}
			if (Local_160.f_1734[Local_160.f_1998[iVar0]].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_160.f_1998[iVar0].f_12 + 1, 64);
			}
			func_81("MPInvPersCommon", &Var1, Local_160.f_1998[iVar0].f_5, Local_160.f_1998[iVar0].f_5.f_1, Local_160.f_1734[Local_160.f_1998[iVar0]].f_3, Local_160.f_1734[Local_160.f_1998[iVar0]].f_3.f_1, Local_160.f_1998[iVar0].f_9, Local_160.f_1765);
		}
		iVar0++;
	}
}

void func_275()
{
	Var2[0] = { func_86((Local_160.f_2368.f_321 + -0,056f), (Local_160.f_2368.f_321.f_1 + 0,047f)) };
	Var2[1] = { func_86((Local_160.f_2368.f_321 + -0,034f), (Local_160.f_2368.f_321.f_1 + -0,036f)) };
	Var2[2] = { func_86((Local_160.f_2368.f_321 + 0,046f), (Local_160.f_2368.f_321.f_1 + -0,026f)) };
	Var2[3] = { func_86((Local_160.f_2368.f_321 + 0,039f), (Local_160.f_2368.f_321.f_1 + 0,047f)) };
	fVar11 = 0f;
	if ((Local_160.f_2368 == 1 || Local_160.f_2368 == 2) || Local_160.f_2368 == 4)
	{
		fVar11 = -((0,144444f - 0,12963f) / 2f);
	}
	Var19 = { func_187(func_86((Local_160.f_2368.f_321 + 0,0075f), ((Local_160.f_2368.f_321.f_1 + -0,055f) + fVar11))) };
	Var12[0] = { func_143(Var19, func_187(func_86(-0,01f, 0,032f))) };
	Var12[1] = { func_143(Var19, func_187(func_86(-0,01f, -0,032f))) };
	Var12[2] = { func_143(Var19, func_187(func_86(0,059f, 0f))) };
	if (Local_160.f_2368.f_325 != 0)
	{
		fVar1 = sin((IntToFloat(Local_160.f_2368.f_325) * -15f));
		fVar0 = cos((IntToFloat(Local_160.f_2368.f_325) * -15f));
		Var12[0] = { func_184(Var19, Var12[0], fVar1, fVar0) };
		Var12[1] = { func_184(Var19, Var12[1], fVar1, fVar0) };
		Var12[2] = { func_184(Var19, Var12[2], fVar1, fVar0) };
	}
	Var12[0] = { func_85(Var12[0]) };
	Var12[1] = { func_85(Var12[1]) };
	Var12[2] = { func_85(Var12[2]) };
	Var21 = 20;
	Var21.f_1 = 4;
	Var21.f_1.f_9 = 4;
	Var21.f_1.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar206 = 0;
	iVar206 = 0;
	while (iVar206 <= 19)
	{
		if (Local_160.f_2368.f_3[iVar206].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_2368.f_3[iVar206].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[iVar206]].f_2))
		{
		}
		else if (func_199(Local_160.f_2368.f_3[iVar206].f_5, func_86(0,0001f, 0,0001f)))
		{
		}
		else if (Local_160.f_2368.f_3[iVar206] == 5)
		{
		}
		else
		{
			Var207 = { func_187(Local_160.f_2368.f_3[iVar206].f_5) };
			Var209 = { func_187(Local_160.f_2368.f_3[iVar206].f_7) };
			Var211 = { func_186(func_143(Var207, Var209), 2f) };
			if (!func_185(Local_160.f_2368.f_3[iVar206].f_9, -0,0001f, 0,0001f))
			{
				fVar1 = sin(Local_160.f_2368.f_3[iVar206].f_9);
				fVar0 = cos(Local_160.f_2368.f_3[iVar206].f_9);
				Var202 = { func_184(Var211, Var207, -fVar1, fVar0) };
				Var204 = { func_184(Var211, Var209, -fVar1, fVar0) };
			}
			else
			{
				Var202 = { Var207 };
				Var204 = { Var209 };
			}
			Var213 = { func_187(func_186(Local_160.f_1734[Local_160.f_2368.f_3[iVar206]].f_3, 2f)) };
			Var21[iVar206][0] = (Var204 - Var213);
			Var21[iVar206][1] = Var21[iVar206][0];
			Var21[iVar206][2] = (Var202 + Var213);
			Var21[iVar206][3] = Var21[iVar206][2];
			Var21[iVar206][0].f_1 = (Var204.f_1 + Var213.f_1);
			Var21[iVar206][1].f_1 = (Var202.f_1 - Var213.f_1);
			Var21[iVar206][2].f_1 = Var21[iVar206][1].f_1;
			Var21[iVar206][3].f_1 = Var21[iVar206][0].f_1;
			if (!func_185(Local_160.f_2368.f_3[iVar206].f_9, -0,0001f, 0,0001f))
			{
				Var21[iVar206][0] = { func_184(Var211, Var21[iVar206][0], fVar1, fVar0) };
				Var21[iVar206][1] = { func_184(Var211, Var21[iVar206][1], fVar1, fVar0) };
				Var21[iVar206][2] = { func_184(Var211, Var21[iVar206][2], fVar1, fVar0) };
				Var21[iVar206][3] = { func_184(Var211, Var21[iVar206][3], fVar1, fVar0) };
			}
			Var21[iVar206][0] = { func_85(Var21[iVar206][0]) };
			Var21[iVar206][1] = { func_85(Var21[iVar206][1]) };
			Var21[iVar206][2] = { func_85(Var21[iVar206][2]) };
			Var21[iVar206][3] = { func_85(Var21[iVar206][3]) };
		}
		iVar206++;
	}
	Var215 = 15;
	Var215.f_1 = 4;
	Var215.f_1.f_9 = 4;
	Var215.f_1.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar206 = 0;
	while (iVar206 <= 14)
	{
		if (Local_160.f_1998[iVar206].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_1998[iVar206].f_11 + Local_160.f_1734[Local_160.f_1998[iVar206]].f_2))
		{
		}
		else if (func_199(Local_160.f_1998[iVar206].f_5, func_86(0,0001f, 0,0001f)))
		{
		}
		else
		{
			Var351 = { func_187(Local_160.f_1998[iVar206].f_5) };
			Var353 = { func_187(Local_160.f_1998[iVar206].f_7) };
			Var355 = { func_186(func_143(Var351, Var353), 2f) };
			if (!func_185(Local_160.f_1998[iVar206].f_9, -0,0001f, 0,0001f))
			{
				fVar1 = sin(Local_160.f_1998[iVar206].f_9);
				fVar0 = cos(Local_160.f_1998[iVar206].f_9);
				Var202 = { func_184(Var355, Var351, -fVar1, fVar0) };
				Var204 = { func_184(Var355, Var353, -fVar1, fVar0) };
			}
			else
			{
				Var202 = { Var351 };
				Var204 = { Var353 };
			}
			Var357 = { func_187(func_186(Local_160.f_1734[Local_160.f_1998[iVar206]].f_3, 2f)) };
			Var215[iVar206][0] = (Var202 - Var357);
			Var215[iVar206][1] = Var215[iVar206][0];
			Var215[iVar206][2] = (Var204 + Var357);
			Var215[iVar206][3] = Var215[iVar206][2];
			Var215[iVar206][0].f_1 = (Var204.f_1 + Var357.f_1);
			Var215[iVar206][1].f_1 = (Var202.f_1 - Var357.f_1);
			Var215[iVar206][2].f_1 = Var215[iVar206][1].f_1;
			Var215[iVar206][3].f_1 = Var215[iVar206][0].f_1;
			if (!func_185(Local_160.f_1998[iVar206].f_9, -0,0001f, 0,0001f))
			{
				Var215[iVar206][0] = { func_184(Var355, Var215[iVar206][0], fVar1, fVar0) };
				Var215[iVar206][1] = { func_184(Var355, Var215[iVar206][1], fVar1, fVar0) };
				Var215[iVar206][2] = { func_184(Var355, Var215[iVar206][2], fVar1, fVar0) };
				Var215[iVar206][3] = { func_184(Var355, Var215[iVar206][3], fVar1, fVar0) };
			}
			Var215[iVar206][0] = { func_85(Var215[iVar206][0]) };
			Var215[iVar206][1] = { func_85(Var215[iVar206][1]) };
			Var215[iVar206][2] = { func_85(Var215[iVar206][2]) };
			Var215[iVar206][3] = { func_85(Var215[iVar206][3]) };
		}
		iVar206++;
	}
	Var368 = { func_86(-1f, -1f) };
	iVar370 = 0;
	while (iVar370 <= 13)
	{
		if (Local_160.f_1801[iVar370] == -1)
		{
		}
		else if (Local_160.f_753[Local_160.f_1801[iVar370]] == 6)
		{
		}
		else if (Local_160.f_753[Local_160.f_1801[iVar370]] == 3)
		{
		}
		else if (Local_160.f_753[Local_160.f_1801[iVar370]] == 4)
		{
		}
		else if (Local_160.f_1801[iVar370].f_7 == 0)
		{
		}
		else if (Local_160.f_1801[iVar370].f_3 - (Local_160.f_753[Local_160.f_1801[iVar370]].f_22 / 2f)) > (1f - 0,15625f)
		{
		}
		else if (func_199(Local_160.f_1801[iVar370].f_3, Local_160.f_753[Local_160.f_1801[iVar370]].f_22))
		{
		}
		else
		{
			Var375 = { Local_160.f_1801[iVar370].f_3 };
			iVar371 = 0;
			while (iVar371 <= 3)
			{
				Var359[iVar371] = { func_143(Var375, Local_160.f_753[Local_160.f_1801[iVar370]].f_5[iVar371]) };
				iVar371++;
			}
			if (Local_160.f_2368.f_331 > 0 && Local_160.f_2368 != 3)
			{
				fVar373 = unk_0x755FF954DAE327E1((Var375 - Local_160.f_2368.f_321));
				fVar374 = unk_0x755FF954DAE327E1((Var375.f_1 - Local_160.f_2368.f_321.f_1));
				if (fVar373 <= func_288(Local_160.f_753[Local_160.f_1801[iVar370]].f_22, 0,104167f) && fVar374 <= func_288(Local_160.f_753[Local_160.f_1801[iVar370]].f_22.f_1, 0,12963f))
				{
					bVar377 = false;
					iVar371 = 0;
					while (iVar371 <= 3)
					{
						iVar378 = iVar371 + 1;
						if (iVar378 >= 4)
						{
							iVar378 = 0;
						}
						iVar372 = 0;
						while (iVar372 <= 3)
						{
							iVar379 = iVar372 + 1;
							if (iVar379 >= 4)
							{
								iVar379 = 0;
							}
							if (func_286(Var2[iVar371], Var2[iVar378], Var359[iVar372], Var359[iVar379], &Var368))
							{
								if (Local_160.f_753[Local_160.f_1801[iVar370]] == 5)
								{
									func_281(iVar370, 0);
									Local_160.f_1801[iVar370].f_7 = 0;
								}
								else
								{
									if (Local_160.f_753[Local_160.f_1801[iVar370]] != 8)
									{
										func_243(iVar370, -Local_160.f_753[Local_160.f_1801[iVar370]].f_17);
									}
									if (Local_160.f_2368.f_334 + 750 < unk_0x2B6E0A53779D29EA() && Local_160.f_2368.f_337 + 2000 < unk_0x2B6E0A53779D29EA())
									{
										func_227("Tank_Collision", &(Local_160.f_2368.f_343));
									}
									func_280(-4);
								}
								bVar377 = true;
							}
							else
							{
								iVar372++;
							}
						}
						if (bVar377)
						{
						}
						else
						{
							iVar371++;
						}
					}
					if (bVar377)
					{
					}
					else if ((Local_160.f_753[Local_160.f_1801[iVar370]] == 5 || Local_160.f_753[Local_160.f_1801[iVar370]] == 3) || Local_160.f_753[Local_160.f_1801[iVar370]] == 4)
					{
					}
					else
					{
						iVar206 = 0;
						while (iVar206 <= 19)
						{
							if (Local_160.f_2368.f_3[iVar206].f_11 == -2147483647)
							{
							}
							else if (Local_160.f_2368.f_3[iVar206] == 5)
							{
							}
							else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_2368.f_3[iVar206].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[iVar206]].f_2))
							{
							}
							else if (func_199(Local_160.f_2368.f_3[iVar206].f_5, func_86(0,0001f, 0,0001f)))
							{
							}
							else
							{
								fVar373 = unk_0x755FF954DAE327E1((Var375 - Local_160.f_2368.f_3[iVar206].f_5));
								fVar374 = unk_0x755FF954DAE327E1((Var375.f_1 - Local_160.f_2368.f_3[iVar206].f_5.f_1));
								if (fVar373 <= (Local_160.f_753[Local_160.f_1801[iVar370]].f_22 + Local_160.f_1734[Local_160.f_2368.f_3[iVar206]].f_3) && fVar374 <= (Local_160.f_753[Local_160.f_1801[iVar370]].f_22.f_1 + Local_160.f_1734[Local_160.f_2368.f_3[iVar206]].f_3.f_1))
								{
									bVar380 = false;
									iVar371 = 0;
									while (iVar371 <= 3)
									{
										iVar381 = iVar371 + 1;
										if (iVar381 >= 4)
										{
											iVar381 = 0;
										}
										if (func_286(Var21[iVar206][0], Var21[iVar206][2], Var359[iVar371], Var359[iVar381], &Var368) || func_286(Var21[iVar206][1], Var21[iVar206][3], Var359[iVar371], Var359[iVar381], &Var368))
										{
											if (Local_160.f_753[Local_160.f_1801[iVar370]] != 8)
											{
												func_243(iVar370, -Local_160.f_2368.f_3[iVar206].f_13);
											}
											func_222(func_224(Local_160.f_2368.f_3[iVar206]), "dlc_vw_am_ip_tank_sounds", Local_160.f_2368.f_3[iVar371].f_5);
											func_221(Var368, 0);
											Local_160.f_2368.f_3[iVar206].f_11 = -2147483647;
											bVar380 = true;
										}
										else
										{
											iVar371++;
										}
									}
									if (bVar380)
									{
									}
								}
							}
							iVar206++;
						}
					}
					iVar370++;
					if (((Local_160.f_2368.f_2 == 3 && Local_160.f_2368.f_3[0].f_11 != -2147483647) && Local_160.f_2368.f_3[0] == 5) && unk_0x2B6E0A53779D29EA() <= (Local_160.f_2368.f_3[0].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[0]].f_2))
					{
						iVar382 = 0;
						iVar383 = -1;
						iVar384 = 0;
						fVar385 = 3,402823E+38f;
						Var386 = { func_86(-1f, -1f) };
						iVar370 = 0;
						while (iVar370 <= 13)
						{
							if (Local_160.f_1801[iVar370] == -1)
							{
							}
							else if (((Local_160.f_753[Local_160.f_1801[iVar370]] == 5 || Local_160.f_753[Local_160.f_1801[iVar370]] == 3) || Local_160.f_753[Local_160.f_1801[iVar370]] == 4) || Local_160.f_753[Local_160.f_1801[iVar370]] == 6)
							{
							}
							else if (Local_160.f_1801[iVar370].f_7 == 0)
							{
							}
							else if (func_199(Local_160.f_1801[iVar370].f_3, Local_160.f_753[Local_160.f_1801[iVar370]].f_22))
							{
							}
							else
							{
								Var388 = { Local_160.f_1801[iVar370].f_3 };
								iVar371 = 0;
								while (iVar371 <= 3)
								{
									Var359[iVar371] = { func_143(Var388, Local_160.f_753[Local_160.f_1801[iVar370]].f_5[iVar371]) };
									iVar371++;
								}
								iVar371 = 0;
								while (iVar371 <= 3)
								{
									iVar390 = iVar371 + 1;
									if (iVar390 >= 4)
									{
										iVar390 = 0;
									}
									if (func_286(Local_160.f_2368.f_3[0].f_1, Local_160.f_2368.f_3[0].f_3, Var359[iVar371], Var359[iVar390], &Var368))
									{
										fVar391 = func_220(Local_160.f_2368.f_3[0].f_1, Var368);
										if (fVar391 < fVar385)
										{
											fVar385 = fVar391;
											iVar383 = iVar370;
											Var386 = { Var368 };
										}
									}
									iVar371++;
								}
							}
							iVar370++;
						}
						if (iVar383 != -1)
						{
							iVar384++;
							unk_0x5D96D8530B3D0904(&iVar382, iVar383);
							Local_160.f_2368.f_3[0].f_3 = { Var386 };
							if (Local_160.f_753[Local_160.f_1801[iVar383]] != 8)
							{
								if (IntToFloat(unk_0x2B6E0A53779D29EA()) > (IntToFloat(Local_160.f_1801[iVar383].f_8) + (62f * func_279())))
								{
									func_243(iVar383, -Local_160.f_2368.f_3[0].f_13);
								}
								iVar371 = 0;
								while (iVar371 <= 2)
								{
									bVar396 = false;
									iVar370 = 0;
									while (iVar370 <= 13)
									{
										if (unk_0xEAE0D21A50E6C7F4(iVar382, iVar370))
										{
										}
										else if (Local_160.f_1801[iVar370] == -1)
										{
										}
										else if ((((Local_160.f_753[Local_160.f_1801[iVar370]] == 5 || Local_160.f_753[Local_160.f_1801[iVar370]] == 3) || Local_160.f_753[Local_160.f_1801[iVar370]] == 4) || Local_160.f_753[Local_160.f_1801[iVar370]] == 6) || Local_160.f_753[Local_160.f_1801[iVar370]] == 8)
										{
										}
										else if (Local_160.f_1801[iVar370].f_7 == 0)
										{
										}
										else if (func_199(Local_160.f_1801[iVar370].f_3, Local_160.f_753[Local_160.f_1801[iVar370]].f_22))
										{
										}
										else
										{
											Var397 = { Local_160.f_1801[iVar370].f_3 };
											if (func_220(Local_160.f_2368.f_3[iVar371].f_3, Var397) < pow(0,35f, 2f))
											{
												unk_0x5D96D8530B3D0904(&iVar382, iVar370);
												bVar396 = true;
												iVar384++;
												Var392 = { func_187(Local_160.f_2368.f_3[iVar371].f_3) };
												Var394 = { func_187(Var397) };
												Local_160.f_2368.f_3[iVar371 + 1] = 5;
												Local_160.f_2368.f_3[iVar371 + 1].f_1 = { Local_160.f_2368.f_3[iVar371].f_3 };
												Local_160.f_2368.f_3[iVar371 + 1].f_3 = { Var397 };
												Local_160.f_2368.f_3[iVar371 + 1].f_5 = { Local_160.f_2368.f_3[iVar371 + 1].f_1 };
												Local_160.f_2368.f_3[iVar371 + 1].f_9 = unk_0x5D8ABF6396A76564((Var394.f_1 - Var392.f_1), (Var394 - Var392));
												Local_160.f_2368.f_3[iVar371 + 1].f_11 = unk_0x2B6E0A53779D29EA();
												Local_160.f_2368.f_3[iVar371 + 1].f_13 = 2;
												Local_160.f_2368.f_3[iVar371 + 1].f_12 = func_278();
												if (IntToFloat(unk_0x2B6E0A53779D29EA()) > (IntToFloat(Local_160.f_1801[iVar370].f_8) + (62f * func_279())))
												{
													func_243(iVar370, -Local_160.f_2368.f_3[0].f_13);
												}
											}
											else
											{
												iVar370++;
											}
											if (!bVar396)
											{
											}
											else
											{
												iVar371++;
											}
											func_277(Local_160.f_2368.f_3[0].f_3, iVar384);
											if (Local_160.f_2368.f_324 != Local_160.f_2368.f_325)
											{
												fVar399 = 0f;
												if (Local_160.f_2368.f_324 > Local_160.f_2368.f_325)
												{
													fVar399 = (-15f / 2f);
												}
												else
												{
													fVar399 = (15f / 2f);
												}
												Var400 = { func_85(func_177(func_187(Local_160.f_2368.f_3[0].f_1), func_187(Local_160.f_2368.f_3[0].f_3), fVar399)) };
												iVar383 = -1;
												fVar385 = 3,402823E+38f;
												iVar370 = 0;
												while (iVar370 <= 13)
												{
													if (unk_0xEAE0D21A50E6C7F4(iVar382, iVar370))
													{
													}
													else if (Local_160.f_1801[iVar370] == -1)
													{
													}
													else if (((Local_160.f_753[Local_160.f_1801[iVar370]] == 5 || Local_160.f_753[Local_160.f_1801[iVar370]] == 3) || Local_160.f_753[Local_160.f_1801[iVar370]] == 4) || Local_160.f_753[Local_160.f_1801[iVar370]] == 6)
													{
													}
													else if (Local_160.f_1801[iVar370].f_7 == 0)
													{
													}
													else if (func_199(Local_160.f_1801[iVar370].f_3, Local_160.f_753[Local_160.f_1801[iVar370]].f_22))
													{
													}
													else
													{
														Var402 = { Local_160.f_1801[iVar370].f_3 };
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															Var359[iVar371] = { func_143(Var402, Local_160.f_753[Local_160.f_1801[iVar370]].f_5[iVar371]) };
															iVar371++;
														}
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															iVar404 = iVar371 + 1;
															if (iVar404 >= 4)
															{
																iVar404 = 0;
															}
															if (func_286(Local_160.f_2368.f_3[0].f_1, Var400, Var359[iVar371], Var359[iVar404], &Var368))
															{
																fVar405 = func_220(Local_160.f_2368.f_3[0].f_1, Var368);
																if (fVar405 < fVar385)
																{
																	fVar385 = fVar405;
																	iVar383 = iVar370;
																	Var386 = { Var368 };
																}
															}
															iVar371++;
														}
													}
													iVar370++;
												}
												if (iVar383 != -1)
												{
													Var400 = { Var386 };
													if (Local_160.f_753[Local_160.f_1801[iVar383]] != 8)
													{
														if (IntToFloat(unk_0x2B6E0A53779D29EA()) > (IntToFloat(Local_160.f_1801[iVar383].f_8) + (62f * func_279())))
														{
															func_243(iVar383, -Local_160.f_2368.f_3[0].f_13);
														}
													}
												}
											}
											iVar206 = 0;
											while (iVar206 <= 14)
											{
												if (Local_160.f_1998[iVar206].f_11 == -2147483647)
												{
												}
												else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_1998[iVar206].f_11 + Local_160.f_1734[Local_160.f_1998[iVar206]].f_2))
												{
												}
												else if (func_199(Local_160.f_1998[iVar206].f_5, func_86(0,0001f, 0,0001f)))
												{
												}
												else
												{
													fVar373 = unk_0x755FF954DAE327E1((Local_160.f_2368.f_321 - Local_160.f_1998[iVar206].f_5));
													fVar374 = unk_0x755FF954DAE327E1((Local_160.f_2368.f_321.f_1 - Local_160.f_1998[iVar206].f_5.f_1));
													if (fVar373 <= (0,104167f + Local_160.f_1734[Local_160.f_1998[iVar206]].f_3) && fVar374 <= (0,12963f + Local_160.f_1734[Local_160.f_1998[iVar206]].f_3.f_1))
													{
														bVar406 = false;
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															iVar407 = iVar371 + 1;
															if (iVar407 >= 4)
															{
																iVar407 = 0;
															}
															if (func_286(Var215[iVar206][0], Var215[iVar206][2], Var2[iVar371], Var2[iVar407], &Var368) || func_286(Var215[iVar206][1], Var215[iVar206][3], Var2[iVar371], Var2[iVar407], &Var368))
															{
																func_280(-Local_160.f_1998[iVar206].f_13);
																func_221(Var368, 0);
																Local_160.f_1998[iVar206].f_11 = -2147483647;
																if (Local_160.f_1998[iVar206] == 1)
																{
																	func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																}
																else
																{
																	func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																}
																bVar406 = true;
															}
															else
															{
																iVar371++;
															}
														}
														if (bVar406)
														{
														}
														else
														{
															fVar373 = unk_0x755FF954DAE327E1(((Local_160.f_2368.f_321 + 0,0075f) - Local_160.f_1998[iVar206].f_5));
															fVar374 = unk_0x755FF954DAE327E1(((Local_160.f_2368.f_321.f_1 + -0,055f) - Local_160.f_1998[iVar206].f_5.f_1));
															if (fVar373 <= (0,104167f + Local_160.f_1734[Local_160.f_1998[iVar206]].f_3) && fVar374 <= (0,059259f + Local_160.f_1734[Local_160.f_1998[iVar206]].f_3.f_1))
															{
																bVar408 = false;
																iVar371 = 0;
																while (iVar371 <= 2)
																{
																	iVar409 = iVar371 + 1;
																	if (iVar409 > 2)
																	{
																		iVar409 = 0;
																	}
																	if (func_286(Var215[iVar206][0], Var215[iVar206][2], Var12[iVar371], Var12[iVar409], &Var368) || func_286(Var215[iVar206][1], Var215[iVar206][3], Var12[iVar371], Var12[iVar409], &Var368))
																	{
																		func_280(-Local_160.f_1998[iVar206].f_13);
																		func_221(Var368, 0);
																		Local_160.f_1998[iVar206].f_11 = -2147483647;
																		if (Local_160.f_1998[iVar206] == 1)
																		{
																			func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																		}
																		else
																		{
																			func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																		}
																		bVar408 = true;
																	}
																	else
																	{
																		iVar371++;
																	}
																}
																if (bVar408)
																{
																}
																else
																{
																	iVar410 = 0;
																	iVar410 = 0;
																	while (iVar410 <= 19)
																	{
																		if (Local_160.f_2368.f_3[iVar410].f_11 == -2147483647)
																		{
																		}
																		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_2368.f_3[iVar410].f_11 + Local_160.f_1734[Local_160.f_2368.f_3[iVar410]].f_2))
																		{
																		}
																		else if (Local_160.f_2368.f_3[iVar410] == 5)
																		{
																			if (func_286(Local_160.f_2368.f_3[iVar410].f_1, Local_160.f_2368.f_3[iVar410].f_3, Var215[iVar206][0], Var215[iVar206][2], &Var368) || func_286(Local_160.f_2368.f_3[iVar410].f_1, Local_160.f_2368.f_3[iVar410].f_3, Var215[iVar206][1], Var215[iVar206][3], &Var368))
																			{
																				Local_160.f_1998[iVar206].f_11 = -2147483647;
																				func_221(Var368, 0);
																				if (Local_160.f_1998[iVar206] == 1)
																				{
																					func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																				}
																				else
																				{
																					func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																				}
																			}
																			else
																			{
																				Jump @7686; //curOff = 7015
																				if (func_199(Local_160.f_2368.f_3[iVar410].f_5, func_86(0,0001f, 0,0001f)))
																				{
																				}
																				else
																				{
																					fVar373 = unk_0x755FF954DAE327E1((Local_160.f_1998[iVar206].f_5 - Local_160.f_2368.f_3[iVar410].f_5));
																					fVar374 = unk_0x755FF954DAE327E1((Local_160.f_1998[iVar206].f_5.f_1 - Local_160.f_2368.f_3[iVar410].f_5.f_1));
																					Var411 = { func_276(Local_160.f_2368.f_3[iVar410].f_5, Local_160.f_2368.f_3[iVar410].f_7, Local_160.f_1734[Local_160.f_2368.f_3[iVar410]].f_3) };
																					Var413 = { func_276(Local_160.f_1998[iVar206].f_5, Local_160.f_1998[iVar206].f_7, Local_160.f_1734[Local_160.f_1998[iVar206]].f_3) };
																					if (((fVar373 <= Var411 && fVar374 <= Var411.f_1) && fVar373 <= Var413) && fVar374 <= Var413.f_1)
																					{
																						if (((func_286(Var21[iVar410][0], Var21[iVar410][2], Var215[iVar206][0], Var215[iVar206][2], &Var368) || func_286(Var21[iVar410][1], Var21[iVar410][3], Var215[iVar206][1], Var215[iVar206][3], &Var368)) || func_286(Var21[iVar410][0], Var21[iVar410][2], Var215[iVar206][1], Var215[iVar206][3], &Var368)) || func_286(Var21[iVar410][1], Var21[iVar410][3], Var215[iVar206][0], Var215[iVar206][2], &Var368))
																						{
																							Local_160.f_2368.f_3[iVar410].f_11 = -2147483647;
																							Local_160.f_1998[iVar206].f_11 = -2147483647;
																							func_221(Var368, 0);
																							if (Local_160.f_1998[iVar206] == 1)
																							{
																								func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																							}
																							else
																							{
																								func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar206].f_5);
																							}
																							func_222(func_224(Local_160.f_2368.f_3[iVar410]), "dlc_vw_am_ip_tank_sounds", Local_160.f_2368.f_3[iVar410].f_5);
																						}
																						else
																						{
																							iVar410++;
																						}
																						iVar206++;
																					}

struct<2> func_276(struct<2> Param0, struct<2> Param2, struct<2> Param4)
{
	fVar2 = unk_0x755FF954DAE327E1((Param0 - Param2));
	fVar3 = unk_0x755FF954DAE327E1((Param0.f_1 - Param2.f_1));
	Var0 = { func_86((fVar2 + Param4), (fVar3 + Param4.f_1)) };
	return Var0;
}

void func_277(struct<2> Param0, int iParam2)
{
	fVar0 = func_223(Param0);
	if (unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_341))
	{
		unk_0x4D7F4CC43D4D0DE3(Local_160.f_2368.f_341, "Tank_Weapon_Lightning_Gun_Fire_Hit", "dlc_vw_am_ip_tank_sounds", false);
	}
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_341, "Screen_Position", fVar0);
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_341, "TargetsHit", to_float(iParam2));
}

int func_278()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			return -1;
		
		case 1:
			return unk_0x09AC81E49EA267F7(0, 2);
		
		case 2:
			return 0;
		
		case 3:
			if (Local_160.f_2368.f_3[0].f_12 >= Local_160.f_1734[Local_160.f_2368.f_3[0]].f_1 || Local_160.f_2368.f_3[0].f_12 < 0)
			{
				Local_160.f_2368.f_3[0].f_12 = 0;
			}
			return Local_160.f_2368.f_3[0].f_12;
		
		default:
	}
	return 2147483647;
}

float func_279()
{
	if (Local_160.f_2871 == 4)
	{
		return 0,75f;
	}
	return 1f;
}

void func_280(int iParam0)
{
	if (Local_160.f_2368 == 3 || Local_160.f_2368 == 4)
	{
		return;
	}
	if (iParam0 < 0)
	{
		if (Local_160.f_2368.f_334 + 750 > unk_0x2B6E0A53779D29EA() || Local_160.f_2368.f_337 + 2000 > unk_0x2B6E0A53779D29EA())
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 0))
		{
			unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 0);
			return;
		}
	}
	iVar0 = func_208(Local_160.f_2368.f_331 > 1, 1, 0);
	iVar1 = func_149((Local_160.f_2368.f_331 + iParam0), iVar0, 20);
	Local_160.f_2368.f_332 = Local_160.f_2368.f_331;
	Local_160.f_2368.f_331 = iVar1;
	if (iParam0 < 0)
	{
		Local_160.f_2368.f_321 = (Local_160.f_2368.f_321 - 0,004166667f);
		if (Local_160.f_2368.f_321 < 0,225f)
		{
			Local_160.f_2368.f_321 = 0,225f;
		}
		Local_160.f_2368.f_334 = unk_0x2B6E0A53779D29EA();
	}
	else if (iParam0 > 0)
	{
		Local_160.f_2368.f_335 = unk_0x2B6E0A53779D29EA();
	}
	if (iVar1 == 0)
	{
		Local_160.f_2368.f_330 = (Local_160.f_2368.f_330 - 1);
		Local_160.f_2368.f_319 = 0;
		func_101(3);
		func_227("Tank_Destroyed", &(Local_160.f_2368.f_343));
		if (Local_160.f_2368.f_330 >= 0)
		{
			func_47("Frontend_Player_Death");
		}
		Local_160.f_2368.f_327 = unk_0x2B6E0A53779D29EA();
		func_102(0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	switch (Local_160.f_1801[iParam0])
	{
		case 18:
			if (Local_160.f_2368.f_2 != 1)
			{
				func_252("IAP_PU_FLAME");
				func_102(1);
				func_227("Tank_Weapon_Change", &(Local_160.f_2368.f_343));
			}
			else
			{
				func_252("IAP_PU_WAO");
				func_120(1000, 1, func_86(-1f, -1f));
			}
			break;
		
		case 19:
			if (Local_160.f_2368.f_2 != 2)
			{
				func_252("IAP_PU_ROCKETS");
				func_102(2);
				func_227("Tank_Weapon_Change", &(Local_160.f_2368.f_343));
			}
			else
			{
				func_252("IAP_PU_WAO");
				func_120(1000, 1, func_86(-1f, -1f));
			}
			break;
		
		case 25:
			if (Local_160.f_2368.f_2 != 3)
			{
				func_252("IAP_PU_PLASMA");
				func_102(3);
				func_227("Tank_Weapon_Change", &(Local_160.f_2368.f_343));
			}
			else
			{
				func_252("IAP_PU_WAO");
				func_120(1000, 1, func_86(-1f, -1f));
			}
			break;
		
		case 20:
			if (Local_160.f_2368.f_331 == 20)
			{
				func_252("IAP_PU_HPO");
				Local_160.f_2368.f_330++;
			}
			else
			{
				func_252("IAP_PU_HP");
				func_280(4);
			}
			break;
		
		case 21:
			func_252("IAP_PU_1UP");
			Local_160.f_2368.f_330++;
			break;
		
		case 24:
			func_252("IAP_PU_ARMOR");
			func_280(-4);
			break;
		
		case 22:
			func_252("IAP_PU_SCORE");
			func_120(10000, 1, func_86(-1f, -1f));
			break;
		
		case 28:
			func_222(func_285(Local_160.f_1801[iParam0]), "dlc_vw_am_ip_powerup_sounds", Local_160.f_1801[iParam0].f_3);
			Local_160.f_1801[iParam0] = func_284(iParam0);
			func_281(iParam0, 1);
			return;
		
		case 23:
			func_252("IAP_PU_SHIELD");
			if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 0);
			}
			else
			{
				func_252("IAP_PU_SAO");
				func_120(1000, 1, func_86(-1f, -1f));
			}
			break;
		
		case 26:
			if (Local_160.f_2368.f_2 == 0 && !func_283())
			{
				func_252("IAP_PU_TRIPLE");
				unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 1);
				func_227("Tank_Weapon_Change", &(Local_160.f_2368.f_343));
			}
			else
			{
				func_252("IAP_PU_WAO");
				func_120(1000, 1, func_86(-1f, -1f));
			}
			break;
		
		case 27:
			func_252("IAP_PU_NUKE");
			func_282();
			break;
	}
	Local_160.f_2712.f_1++;
	Local_160.f_2712.f_2++;
	if (Local_160.f_2368.f_330 > 99)
	{
		Local_160.f_2368.f_330 = 99;
	}
	if (!bParam1)
	{
		func_222(func_285(Local_160.f_1801[iParam0]), "dlc_vw_am_ip_powerup_sounds", Local_160.f_1801[iParam0].f_3);
	}
}

void func_282()
{
	func_222("Tank_Weapon_Nuke_Blast", "dlc_vw_am_ip_tank_sounds", func_86(0,5f, 0,5f));
	func_116(&(Local_160.f_2892), 0, 0);
}

bool func_283()
{
	if (func_17())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 1);
}

var func_284(int iParam0)
{
	iVar12 = 0;
	if (Local_160.f_1801[iParam0].f_11 & 1 == 0 && Local_160.f_2368.f_2 != 1)
	{
		iVar0[iVar12] = 18;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 2 == 0 && Local_160.f_2368.f_2 != 2)
	{
		iVar0[iVar12] = 19;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 4 == 0 && Local_160.f_2368.f_331 < 20)
	{
		iVar0[iVar12] = 20;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 8 == 0)
	{
		iVar0[iVar12] = 21;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 16 == 0)
	{
		iVar0[iVar12] = 22;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 32 == 0 && !unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 0))
	{
		iVar0[iVar12] = 23;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 64 == 0)
	{
		iVar0[iVar12] = 24;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 128 == 0 && Local_160.f_2368.f_2 != 3)
	{
		iVar0[iVar12] = 25;
		iVar12++;
	}
	if ((Local_160.f_1801[iParam0].f_11 & 256 == 0 && Local_160.f_2368.f_2 == 0) && !func_283())
	{
		iVar0[iVar12] = 26;
		iVar12++;
	}
	if (Local_160.f_1801[iParam0].f_11 & 512 == 0 && !func_167())
	{
		iVar0[iVar12] = 27;
		iVar12++;
	}
	uVar13 = iVar0[unk_0x09AC81E49EA267F7(0, iVar12)];
	return uVar13;
}

char* func_285(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return "Powerup_Crate_Collect_Flamethrower";
		
		case 19:
			return "Powerup_Crate_Collect_Rockets";
		
		case 25:
			return "Powerup_Crate_Collect_Beam";
		
		case 26:
			return "Powerup_Crate_Collect_Triple_Shot";
		
		case 20:
		case 21:
			return "Powerup_Crate_Collect_Armour";
		
		case 24:
			return "Powerup_Crate_Collect_Negative";
		
		case 27:
			return "Powerup_Crate_Collect_Nuke";
		
		case 23:
			return "Powerup_Crate_Collect_Shield";
		
		case 22:
		case 28:
			return "Powerup_Crate_Collect_Other";
		
		default:
	}
	return "";
}

int func_286(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)
{
	fVar0 = (Param2.f_1 - Param0.f_1);
	fVar1 = (Param0 - Param2);
	fVar2 = ((fVar0 * Param0) + (fVar1 * Param0.f_1));
	fVar3 = (Param6.f_1 - Param4.f_1);
	fVar4 = (Param4 - Param6);
	fVar5 = ((fVar3 * Param4) + (fVar4 * Param4.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_185(fVar6, (0f - 0,0001f), (0f + 0,0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_86(fVar7, fVar8) };
		if (((((((func_287((Param0 - 0,001f), (Param2 - 0,001f)) <= Var9 && Var9 <= func_288((Param0 + 0,001f), (Param2 + 0,001f))) && func_287((Param0.f_1 - 0,001f), (Param2.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_288((Param0.f_1 + 0,001f), (Param2.f_1 + 0,001f))) && func_287((Param4 - 0,001f), (Param6 - 0,001f)) <= Var9) && Var9 <= func_288((Param4 + 0,001f), (Param6 + 0,001f))) && func_287((Param4.f_1 - 0,001f), (Param6.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_288((Param4.f_1 + 0,001f), (Param6.f_1 + 0,001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_86(3,402823E+38f, 3,402823E+38f) };
	return 0;
}

float func_287(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_288(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_289()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_160.f_1998[iVar0].f_11 == -2147483647)
		{
		}
		else if (unk_0x2B6E0A53779D29EA() > (Local_160.f_1998[iVar0].f_11 + Local_160.f_1734[Local_160.f_1998[iVar0]].f_2))
		{
		}
		else
		{
			if (func_167())
			{
				func_221(Local_160.f_1998[iVar0].f_5, 0);
				if (Local_160.f_1998[iVar0] == 1)
				{
					func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar0].f_5);
				}
				else
				{
					func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar0].f_5);
				}
				Local_160.f_1998[iVar0].f_11 = -2147483647;
			}
			if (Local_160.f_1734[Local_160.f_1998[iVar0]].f_1 > 0)
			{
				Local_160.f_1998[iVar0].f_12 = (Local_160.f_1998[iVar0].f_12 + Local_160.f_2875);
				if (Local_160.f_1998[iVar0].f_12 >= Local_160.f_1734[Local_160.f_1998[iVar0]].f_1)
				{
					Local_160.f_1998[iVar0].f_12 = 0;
				}
			}
			fVar1 = (to_float((unk_0x2B6E0A53779D29EA() - Local_160.f_1998[iVar0].f_11)) / IntToFloat(Local_160.f_1734[Local_160.f_1998[iVar0]].f_2));
			Local_160.f_1998[iVar0].f_7 = { Local_160.f_1998[iVar0].f_5 };
			Local_160.f_1998[iVar0].f_5 = { func_159(Local_160.f_1998[iVar0].f_1, Local_160.f_1998[iVar0].f_3, fVar1) };
			if (Local_160.f_1998[iVar0].f_3.f_1 >= Local_160.f_1998[iVar0].f_1.f_1)
			{
				fVar2 = func_213(Local_160.f_1998[iVar0].f_5, 0);
				if (Local_160.f_1998[iVar0].f_5.f_1 > fVar2)
				{
					func_221(Local_160.f_1998[iVar0].f_5, 0);
					if (Local_160.f_1998[iVar0] == 1)
					{
						func_222("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar0].f_5);
					}
					else
					{
						func_222("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_160.f_1998[iVar0].f_5);
					}
					Local_160.f_1998[iVar0].f_11 = -2147483647;
				}
			}
		}
		iVar0++;
	}
}

void func_290()
{
	if (func_300())
	{
		func_271();
		return;
	}
	iVar0 = 223;
	iVar1 = 229;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 237;
		iVar1 = 70;
	}
	if (unk_0xD245978525608929(2, iVar0) || (iVar1 != 361 && unk_0xD245978525608929(2, iVar1)))
	{
		func_291(Local_160.f_2368.f_2 == 0);
	}
	else if (unk_0x7FEE810EE9E768EB(2, iVar0) || (iVar1 != 361 && unk_0x7FEE810EE9E768EB(2, iVar1)))
	{
		func_291(0);
	}
	else if (Local_160.f_2368.f_338 > -1)
	{
		func_271();
	}
}

void func_291(bool bParam0)
{
	if (func_299())
	{
		func_298();
	}
	if (!bParam0 && unk_0x2B6E0A53779D29EA() < (Local_160.f_2368.f_285 + func_297()))
	{
		return;
	}
	if (Local_160.f_2368.f_2 == 3)
	{
		Local_160.f_2368.f_284 = 0;
	}
	func_295(&Var0, &Var2);
	Local_160.f_2368.f_3[Local_160.f_2368.f_284] = func_294();
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_1 = { Var0 };
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_3 = { Var2 };
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_5 = { Var0 };
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_9 = (IntToFloat(Local_160.f_2368.f_325) * -15f);
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_13 = func_293();
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_12 = func_278();
	Local_160.f_2368.f_3[Local_160.f_2368.f_284].f_11 = unk_0x2B6E0A53779D29EA();
	Local_160.f_2368.f_285 = unk_0x2B6E0A53779D29EA();
	if (Local_160.f_2368.f_2 == 1)
	{
		Local_160.f_2368.f_285 = (Local_160.f_2368.f_285 + unk_0x09AC81E49EA267F7(-10, 10));
	}
	func_100(1);
	if (!func_299())
	{
		func_227(func_292(), &(Local_160.f_2368.f_341));
	}
	Local_160.f_2368.f_284++;
	if (Local_160.f_2368.f_284 >= 20)
	{
		Local_160.f_2368.f_284 = 0;
	}
}

char* func_292()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Fire";
		
		case 1:
			return "Tank_Weapon_Flamethrower_Fire_Loop";
		
		case 2:
			return "Tank_Weapon_Rocket_Fire";
		
		case 3:
			return "Tank_Weapon_Lightning_Gun_Fire_Loop";
		
		default:
	}
	return "";
}

int func_293()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			return 4;
		
		case 1:
			return 1;
		
		case 2:
			return 8;
		
		case 3:
			return 2;
		
		default:
	}
	return 0;
}

int func_294()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_295(var uParam0, var uParam1)
{
	fVar0 = func_142(func_172(), -0,007407f, 0f);
	switch (Local_160.f_2368.f_2)
	{
		case 0:
		case 2:
			*uParam0 = { func_187(func_86((Local_160.f_2368.f_321 + 0,0075f), ((Local_160.f_2368.f_321.f_1 + -0,055f) + fVar0))) };
			*uParam0 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86(0,061f, 0f))), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
			*uParam1 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86(1f, 0f))), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
			break;
		
		case 1:
			*uParam0 = { func_187(func_86(((Local_160.f_2368.f_321 + 0,0075f) + unk_0x79833B02DBD2A244(-0,0005f, 0,0005f)), (((Local_160.f_2368.f_321.f_1 + -0,055f) + fVar0) + unk_0x79833B02DBD2A244(-0,0005f, 0,0005f)))) };
			*uParam0 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86(0,061f, 0f))), ((IntToFloat(Local_160.f_2368.f_325) * -15f) + IntToFloat(unk_0x09AC81E49EA267F7(-5, 5)))) };
			*uParam1 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86((0,15f + unk_0x79833B02DBD2A244(0f, 0,1f)), 0f))), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
			break;
		
		case 3:
			*uParam0 = { func_187(func_86((Local_160.f_2368.f_321 + 0,0075f), ((Local_160.f_2368.f_321.f_1 + -0,055f) + fVar0))) };
			*uParam0 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86((0,061f / 1,5f), 0f))), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
			*uParam1 = { func_177(*uParam0, func_143(*uParam0, func_187(func_86(1f, 0f))), (IntToFloat(Local_160.f_2368.f_325) * -15f)) };
			break;
	}
	*uParam0 = { func_85(*uParam0) };
	*uParam1 = { func_85(*uParam1) };
	if (Local_160.f_2368.f_2 == 3)
	{
		func_296(*uParam0, uParam1);
	}
}

void func_296(struct<2> Param0, var uParam2)
{
	if (Local_160.f_2368.f_325 > 0)
	{
		return;
	}
	if (Param0.f_1 > func_213(Param0, 0))
	{
		*uParam2 = { Param0 };
		func_277(*uParam2, 1);
		return;
	}
	Var0 = (Local_160.f_2340.f_4[0] - (func_217(0) / 2f));
	Var0.f_1 = Local_160.f_3;
	Var2 = { Var0 };
	iVar6 = 0;
	while (iVar6 <= (Local_160.f_745 - 1))
	{
		if (Local_160.f_2340.f_12[iVar6] == 1 && Local_160.f_1801[Local_160.f_2340.f_20[iVar6]].f_11 & 1 == 0)
		{
			fVar7 = Var2;
			Var2 = (Var2 + func_215());
			if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_277(*uParam2, 1);
				return;
			}
			Var0.f_1 = 1f;
			Var2 = (Var2 + ((func_216() - func_215()) - func_214()));
			Var0 = Var2;
			Var2.f_1 = Local_160.f_3;
			if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_277(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2 = (fVar7 + func_216());
			Var0 = (Var2 - func_214());
		}
		else if (Local_160.f_2340.f_12[iVar6] == 2)
		{
			if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_277(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2.f_1 = (((1f - 0,06944444f) - Local_160.f_753[func_202()].f_22.f_1) + 0,03240715f);
			if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_277(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2 = (Var2 + func_217(iVar6));
			if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_277(*uParam2, 1);
				return;
			}
			Var2.f_1 = Local_160.f_3;
			Var0 = { Var2 };
		}
		else
		{
			Var2 = (Var2 + func_217(iVar6));
		}
		iVar6++;
	}
	if (func_286(Param0, *uParam2, Var0, Var2, &Var4))
	{
		*uParam2 = { Var4 };
		func_277(*uParam2, 1);
	}
}

int func_297()
{
	switch (Local_160.f_2368.f_2)
	{
		case 0:
			if (func_283())
			{
				return 83;
			}
			return round((250f * func_279()));
		
		case 1:
			return round((50f * func_279()));
		
		case 2:
			return round((500f * func_279()));
		
		case 3:
			return 0;
		
		default:
	}
	return 2147483647;
}

void func_298()
{
	if (!func_299())
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_338))
		{
			unk_0x55D0A2DB35045A35(Local_160.f_2368.f_338);
			unk_0x43A06902454A1172(Local_160.f_2368.f_338);
			Local_160.f_2368.f_338 = -1;
		}
		return;
	}
	if (Local_160.f_2368.f_338 == -1)
	{
		Local_160.f_2368.f_338 = unk_0xD68EA767274B7444();
	}
	if (unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_338))
	{
		unk_0x4D7F4CC43D4D0DE3(Local_160.f_2368.f_338, func_292(), "dlc_vw_am_ip_tank_sounds", false);
	}
	fVar0 = func_223(Local_160.f_2368.f_321);
	unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_338, "Screen_Position", fVar0);
}

int func_299()
{
	switch (Local_160.f_2368.f_2)
	{
		case 1:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_300()
{
	if (Local_160 != -1f && (Local_160.f_2872 / 0,164583f) >= Local_160)
	{
		return 1;
	}
	if (Local_160.f_2368.f_331 <= 0)
	{
		return 1;
	}
	if (Local_160.f_2368 == 3)
	{
		return 1;
	}
	if (Local_160.f_2368 == 4)
	{
		return 1;
	}
	return 0;
}

void func_301()
{
	if (func_300())
	{
		return;
	}
	iVar0 = 234;
	iVar1 = 235;
	iVar2 = 224;
	iVar3 = 226;
	iVar4 = 227;
	iVar5 = 228;
	iVar6 = 361;
	fVar7 = 1f;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 234;
		iVar1 = 235;
		iVar5 = 238;
		iVar6 = 187;
		iVar3 = 189;
		iVar4 = 190;
		iVar2 = 203;
		fVar7 = 0,3f;
	}
	fVar8 = unk_0x4B7163B4D6E4A3C2(2, 218);
	if (fVar8 < (-0,65f * fVar7) || (iVar0 != 361 && unk_0x7FEE810EE9E768EB(2, iVar0)))
	{
		func_304(0);
	}
	else if (fVar8 > (0,65f * fVar7) || (iVar1 != 361 && unk_0x7FEE810EE9E768EB(2, iVar1)))
	{
		func_304(1);
	}
	else if (Local_160.f_2368.f_323 > 0)
	{
		Local_160.f_2368.f_323 = 0;
		fVar9 = (Local_160.f_2873 / 10f);
		if (Local_160.f_2368.f_339 > -1 && !unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_339))
		{
			unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_339, "TankSpeed", fVar9);
		}
	}
	if (unk_0x7FEE810EE9E768EB(2, iVar2))
	{
		func_303();
	}
	fVar10 = unk_0x4B7163B4D6E4A3C2(2, 220);
	if (iVar3 != 361 && unk_0xD245978525608929(2, iVar3))
	{
		func_302(1, 1, 0);
	}
	else if (iVar4 != 361 && unk_0xD245978525608929(2, iVar4))
	{
		func_302(-1, 1, 0);
	}
	else if ((iVar3 != 361 && unk_0x7FEE810EE9E768EB(2, iVar3)) || fVar10 < (-0,65f * fVar7))
	{
		func_302(1, 0, fVar10);
	}
	else if ((iVar4 != 361 && unk_0x7FEE810EE9E768EB(2, iVar4)) || fVar10 > (0,65f * fVar7))
	{
		func_302(-1, 0, fVar10);
	}
	if (unk_0xD245978525608929(2, iVar5) || (iVar6 != 361 && unk_0xD245978525608929(2, iVar6)))
	{
		if (Local_160.f_2368.f_325 != 0)
		{
			func_227("Tank_Turret_Move", &(Local_160.f_2368.f_342));
		}
		Local_160.f_2368.f_325 = 0;
		Local_160.f_2368.f_324 = 0;
	}
}

void func_302(int iParam0, bool bParam1, float fParam2)
{
	iVar0 = 100;
	if (unk_0x91E3F625EF57450D(2) && (fParam2 > (0,65f * 0,3f) || fParam2 < (-0,65f * 0,3f)))
	{
		iVar0 = 50;
	}
	if (!bParam1)
	{
		if (unk_0x2B6E0A53779D29EA() < (Local_160.f_2368.f_326 + iVar0))
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	Local_160.f_2368.f_324 = Local_160.f_2368.f_325;
	Local_160.f_2368.f_325 = (Local_160.f_2368.f_325 + iParam0);
	if (Local_160.f_2368.f_325 > 9)
	{
		Local_160.f_2368.f_325 = 9;
	}
	else if (Local_160.f_2368.f_325 < -1)
	{
		Local_160.f_2368.f_325 = -1;
	}
	else
	{
		func_227("Tank_Turret_Move", &(Local_160.f_2368.f_342));
	}
	Local_160.f_2368.f_326 = unk_0x2B6E0A53779D29EA();
}

void func_303()
{
	if (Local_160.f_2368 != 0)
	{
		return;
	}
	if (unk_0x2B6E0A53779D29EA() < Local_160.f_2368.f_327 + 100)
	{
		return;
	}
	func_101(1);
	func_227("Tank_Jump", &(Local_160.f_2368.f_343));
	Local_160.f_2368.f_327 = unk_0x2B6E0A53779D29EA();
	Local_160.f_2368.f_328 = Local_160.f_2368.f_321.f_1;
	Local_160.f_2368.f_329 = (Local_160.f_2368.f_321.f_1 + -0,25f);
}

void func_304(bool bParam0)
{
	if (Local_160.f_2368 == 2 && Local_160.f_2368.f_321.f_1 > Local_160.f_3)
	{
		return;
	}
	Local_160.f_2368.f_323 = (Local_160.f_2368.f_323 + round((unk_0x6117725E0134737F() * 1000f)));
	fVar0 = (to_float(Local_160.f_2368.f_323) / 250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	if (func_172())
	{
		fVar0 = 1f;
	}
	fVar1 = (0,15f * func_154(0f, 1f, fVar0, 1));
	if (!bParam0)
	{
		fVar1 = (fVar1 * -1f);
	}
	Local_160.f_2368.f_321 = func_132(Local_160.f_2368.f_321, fVar1);
	if (Local_160.f_2368.f_321 > 0,775f)
	{
		Local_160.f_2368.f_321 = 0,775f;
	}
	else if (Local_160.f_2368.f_321 < 0,225f)
	{
		Local_160.f_2368.f_321 = 0,225f;
	}
	fVar2 = (Local_160.f_2873 / 10f);
	if (bParam0)
	{
		fVar2 = (fVar2 + func_158(fVar0, fVar2, 0,9f));
	}
	else
	{
		fVar2 = (fVar2 - func_158(fVar0, fVar2, 0,9f));
	}
	if (Local_160.f_2368.f_339 > -1 && !unk_0x8AA6DC470ABA63A2(Local_160.f_2368.f_339))
	{
		unk_0x6F6BA3FE885E6C91(Local_160.f_2368.f_339, "TankSpeed", fVar2);
	}
}

void func_305()
{
	if (Local_160.f_2871 != 4)
	{
		Local_160.f_2340 = func_132(Local_160.f_2340, -0,005f);
		if (Local_160.f_2340 < (0,15625f - (Local_160.f_726 / 2f)))
		{
			Local_160.f_2340 = (Local_160.f_2340 + Local_160.f_726);
		}
	}
	Local_160.f_2340.f_1 = func_132(Local_160.f_2340.f_1, -0,01f);
	if (Local_160.f_2340.f_1 < (0,15625f - (Local_160.f_731 / 2f)))
	{
		Local_160.f_2340.f_1 = (Local_160.f_2340.f_1 + Local_160.f_731);
	}
	Local_160.f_2340.f_2 = func_132(Local_160.f_2340.f_2, -0,02f);
	if (Local_160.f_2340.f_2 < (0,15625f - (Local_160.f_736 / 2f)))
	{
		Local_160.f_2340.f_2 = (Local_160.f_2340.f_2 + Local_160.f_736);
	}
	Local_160.f_2340.f_3 = func_132(Local_160.f_2340.f_3, -0,04f);
	if (Local_160.f_2340.f_3 < (0,15625f - (Local_160.f_741 / 2f)))
	{
		Local_160.f_2340.f_3 = (Local_160.f_2340.f_3 + Local_160.f_741);
	}
	Local_160.f_2340.f_4[0] = func_132(Local_160.f_2340.f_4[0], -0,15f);
	fVar1 = func_217(0);
	if (Local_160.f_2340.f_4[0] < (0,15625f - (fVar1 / 2f)))
	{
		Local_160.f_2340.f_4[0] = (Local_160.f_2340.f_4[0] + fVar1);
		iVar0 = 0;
		while (iVar0 <= (Local_160.f_745 - 1))
		{
			if (iVar0 < (Local_160.f_745 - 1))
			{
				if (Local_160.f_2340.f_12[iVar0] != 0 && Local_160.f_2340.f_12[iVar0 + 1] == 0)
				{
					Local_160.f_2340.f_4[iVar0] = (Local_160.f_2340.f_4[iVar0] - ((func_216() - Local_160.f_746) / 2f));
				}
				else if (Local_160.f_2340.f_12[iVar0] == 0 && Local_160.f_2340.f_12[iVar0 + 1] != 0)
				{
					Local_160.f_2340.f_4[iVar0] = (Local_160.f_2340.f_4[iVar0] + ((func_216() - Local_160.f_746) / 2f));
				}
				Local_160.f_2340.f_12[iVar0] = Local_160.f_2340.f_12[iVar0 + 1];
				Local_160.f_2340.f_20[iVar0] = Local_160.f_2340.f_20[iVar0 + 1];
			}
			else
			{
				if (Local_160.f_2340.f_12[iVar0] != 0)
				{
					Local_160.f_2340.f_4[iVar0] = (Local_160.f_2340.f_4[iVar0] - ((func_216() - Local_160.f_746) / 2f));
				}
				Local_160.f_2340.f_12[iVar0] = 0;
				Local_160.f_2340.f_20[iVar0] = -1;
			}
			iVar0++;
		}
	}
	iVar0 = 1;
	while (iVar0 <= (Local_160.f_745 - 1))
	{
		fVar2 = func_217(iVar0);
		fVar3 = func_217((iVar0 - 1));
		Local_160.f_2340.f_4[iVar0] = ((Local_160.f_2340.f_4[(iVar0 - 1)] + (fVar3 / 2f)) + (fVar2 / 2f));
		iVar0++;
	}
	if (Local_160.f_2870 != 7)
	{
		return;
	}
	Local_160.f_2872 = func_132(Local_160.f_2872, 0,15f);
	func_306();
}

void func_306()
{
	if (Local_160.f_2871 != 4)
	{
		return;
	}
	iVar0 = floor((Local_160.f_2872 / 0,164583f));
	if (iVar0 > Local_160.f_2905)
	{
		Local_160.f_2905 = iVar0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2904, 3))
	{
		return;
	}
	if (iVar0 < Global_262145.f_26470)
	{
		return;
	}
	func_124(27186, 1, -1, 1);
	func_125(250, 1, -1, 1);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 3);
	unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 9);
	func_123();
	func_122("IAP_CH_2", Global_262145.f_26470, 7500);
}

void func_307()
{
	func_225();
	func_209();
	func_203();
	func_309();
	if (!func_308())
	{
		return;
	}
	func_7(3);
	func_8(7);
	func_47("Frontend_Go");
}

int func_308()
{
	Local_160.f_2368.f_321 = func_132(Local_160.f_2368.f_321, 0,15f);
	if (Local_160.f_2368.f_321 < 0,3f)
	{
		return 0;
	}
	Local_160.f_2368.f_321 = 0,3f;
	return 1;
}

void func_309()
{
	func_201();
	func_170();
	func_168();
	func_134(0);
	func_82();
	func_80();
}

void func_310()
{
	if (!func_117(&(Local_160.f_2882)))
	{
		func_116(&(Local_160.f_2882), 0, 0);
	}
	func_203();
	func_312();
	if (!func_311())
	{
		return;
	}
	if (!func_114(&(Local_160.f_2882), 10000, 0))
	{
		return;
	}
	func_98(&(Local_160.f_2882));
	func_12(func_13(2));
	func_8(6);
	unk_0x8910D3D58E0132B8("dlc_vw_am_ip_in_menus_scene");
	unk_0x8BC9595FD2792B5D("dlc_vw_am_ip_in_gameplay_scene");
	func_47("Frontend_Get_Ready");
}

int func_311()
{
	unk_0x0D3BE1DE0262A012(Local_160.f_2895, false);
	if (!unk_0x27117E2CDD4D67C3(Local_160.f_2895))
	{
		return 0;
	}
	return 1;
}

void func_312()
{
	func_164(&(Local_160.f_1765.f_4));
	func_81(func_316(), func_315(), 0,5f, 0,5f, 0,6875f, 0,9481481f, 0f, Local_160.f_1765);
	func_313();
	func_82();
	func_80();
}

void func_313()
{
	switch (Local_160.f_2871)
	{
		case 0:
			Var0 = { func_86(0,016667f, 0,02963f) };
			Var2 = { func_86(0,542708f, 0,32963f) };
			break;
		
		case 1:
			Var0 = { func_86(0,158333f, 0,088889f) };
			Var2 = { func_86(0,602083f, 0,266667f) };
			break;
		
		case 2:
			Var0 = { func_86(0,075f, 0,088889f) };
			Var2 = { func_86(0,617708f, 0,322222f) };
			break;
		
		case 3:
			Var0 = { func_86(0,1f, 0,096296f) };
			Var2 = { func_86(0,384375f, 0,257407f) };
			break;
		
		case 4:
			Var0 = { func_86(0,208333f, 0,37037f) };
			Var2 = { func_86((0,504167f + (0,000520833f * 2f)), 0,416667f) };
			break;
	}
	Var2 = { func_143(Var2, func_86(-0,004166667f, 0,005555556f)) };
	Var4 = { Local_160.f_1765 };
	Var4.f_3 = round(func_154(25f, 255f, unk_0x755FF954DAE327E1(sin((to_float(unk_0x1C0640BA9A7327B3()) * 0,4f))), 4));
	func_81(func_316(), func_314(), Var2, Var2.f_1, Var0, Var0.f_1, 0f, Var4);
	if (unk_0xB3260A60545D3F11() != 0)
	{
		StringCopy(&cVar8, "IAP_STAGE_D_", 16);
		StringIntConCat(&cVar8, Local_160.f_2871, 16);
		unk_0xB05D06A3759A10CE(&cVar8);
		unk_0x12F275EDEEF63A2B(1, 1);
	}
}

char* func_314()
{
	switch (Local_160.f_2871)
	{
		case 0:
			return "country_1";
		
		case 1:
			return "country_2";
		
		case 2:
			return "country_3";
		
		case 3:
			return "country_4";
		
		case 4:
			return "country_5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_315()
{
	switch (Local_160.f_2871)
	{
		case 0:
			return "mission_select_screen1";
		
		case 1:
			return "mission_select_screen2";
		
		case 2:
			return "mission_select_screen3";
		
		case 3:
			return "mission_select_screen4";
		
		case 4:
			return "mission_select_screen5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_316()
{
	switch (Local_160.f_2871)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "MpInvPersHud";
		
		case 4:
			return "MPInvPersCommon";
		
		default:
	}
	return "INVALID STAGE";
}

void func_317()
{
	func_324();
	func_323();
	func_322();
	func_320();
	if (!func_57())
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 9);
	unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 10);
	func_99();
	func_12(func_13(6));
	func_47("Frontend_Start");
	func_7(2);
	func_12(func_13(1));
	func_319();
	func_318(0);
	func_8(5);
}

void func_318(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_139, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_139, "Invade and Persuade II.", 64);
	}
	Local_139.f_16 = 0;
	Local_139.f_17 = 0;
	Local_139.f_18 = 0;
	Local_139.f_19 = unk_0x6794171A1021C2D8();
	Local_139.f_20 = 0;
}

void func_319()
{
	unk_0xE7C86324C5DD2404(Local_160.f_2880);
	unk_0x9A0FD048B9D19293(Local_160.f_2880);
}

void func_320()
{
	if (Local_160.f_2908 != -2147483647 && unk_0x2B6E0A53779D29EA() > Local_160.f_2908)
	{
		Local_160.f_2908 = -2147483647;
		Local_160.f_2909 = 0;
	}
	iVar0 = func_321();
	if (iVar0 == 361)
	{
		return;
	}
	if (unk_0xD245978525608929(2, iVar0))
	{
		Local_160.f_2908 = unk_0x2B6E0A53779D29EA() + 600;
		Local_160.f_2909++;
	}
	if (Local_160.f_2909 >= 10)
	{
		Local_160.f_2907 = 1;
		Local_160.f_2368.f_330 = 99;
		func_47("Frontend_Retry");
		Local_160.f_2908 = -2147483647;
		Local_160.f_2909 = 0;
	}
}

int func_321()
{
	switch (Local_160.f_2909)
	{
		case 0:
		case 1:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 188;
			}
			else
			{
				return 232;
			}
			break;
		
		case 2:
		case 3:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 187;
			}
			else
			{
				return 233;
			}
			break;
		
		case 4:
		case 6:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 189;
			}
			else
			{
				return 234;
			}
			break;
		
		case 5:
		case 7:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 190;
			}
			else
			{
				return 235;
			}
			break;
		
		case 8:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 238;
			}
			else
			{
				return 225;
			}
			break;
		
		case 9:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 237;
			}
			else
			{
				return 223;
			}
			break;
	}
	return 361;
}

void func_322()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 9))
	{
		if (unk_0xC6C219ABECFE3466(Local_160.f_2880) >= 95f)
		{
			func_12(func_13(6));
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 10);
			unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 9);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 10);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 9) && unk_0xEAE0D21A50E6C7F4(Local_160.f_2368.f_333, 10))
	{
		if (unk_0xC6C219ABECFE3466(Local_160.f_2880) >= 99f || unk_0xC6C219ABECFE3466(Local_160.f_2880) <= 1f)
		{
			func_12(func_13(0));
			unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 9);
		}
	}
}

void func_323()
{
	unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 2);
	StringCopy(&Var0, "IAP_H_TITLE", 16);
	if (unk_0x33A494591F2C1975())
	{
		StringConCat(&Var0, "_PS4", 16);
	}
	else if (unk_0x91E3F625EF57450D(2))
	{
		StringConCat(&Var0, "_PC", 16);
	}
	if (func_61(&Var0))
	{
		return;
	}
	func_9();
	func_59(&Var0);
}

void func_324()
{
	unk_0xA99E375332B0EFB1(Local_160.f_2880, 0,5f, 0,5f, (1f * fLocal_136), 1f, 0f, 255, 255, 255, 255);
	if (unk_0xB3260A60545D3F11() != 0)
	{
		if (unk_0xC6C219ABECFE3466(Local_160.f_2880) < 30f)
		{
			unk_0xB05D06A3759A10CE("IAP_INTRO");
			unk_0x12F275EDEEF63A2B(1, 1);
		}
	}
	func_82();
	func_80();
}

void func_325()
{
	if (!func_117(&(Local_160.f_2890)))
	{
		func_116(&(Local_160.f_2890), 0, 0);
	}
	if (!func_114(&(Local_160.f_2890), 3000, 0))
	{
		fVar0 = (to_float(func_166(&(Local_160.f_2890), 0, 0)) / 3000f);
		iVar1 = round(func_154(0f, 255f, fVar0, 4));
		func_326(iVar1);
	}
	else
	{
		func_326(255);
	}
	if (!func_114(&(Local_160.f_2890), 4000, 0))
	{
		return;
	}
	func_12(func_13(0));
	unk_0x5D96D8530B3D0904(&(Local_160.f_2368.f_333), 9);
	func_54();
	func_8(4);
}

void func_326(int iParam0)
{
	Var0.f_3 = 255;
	func_164(&(Local_160.f_1765.f_4));
	func_108(&Var0, 236, 109, 0, iParam0);
	func_164(&Var0);
	func_89(func_86(0,5f, 0,5f), func_86(0,658333f, 1f), Local_160.f_1765.f_4);
	Var0 = { Local_160.f_1765 };
	Var0.f_3 = iParam0;
	func_81("MpInvPersCommon", "ron_splash", 0,5f, 0,5f, 0,658333f, 1f, 0f, Var0);
	func_82();
	func_80();
}

void func_327()
{
	if (!func_328())
	{
		return;
	}
	func_8(3);
}

int func_328()
{
	unk_0xA99E375332B0EFB1(Local_160.f_2879, 0,5f, 0,5f, (1f * fLocal_136), 1f, 0f, 255, 255, 255, 255);
	func_82();
	func_80();
	if (unk_0xC6C219ABECFE3466(Local_160.f_2879) >= 99f)
	{
		unk_0xE7C86324C5DD2404(Local_160.f_2879);
		unk_0x9A0FD048B9D19293(Local_160.f_2879);
		return 1;
	}
	return 0;
}

void func_329()
{
	if (!func_331())
	{
		return;
	}
	func_330();
	unk_0x8BC9595FD2792B5D("dlc_vw_am_ip_in_menus_scene");
	func_8(2);
}

void func_330()
{
	Local_160.f_2879 = unk_0xA3888F288861A701("_1992_DegenatronLogo_720_auto");
	unk_0x6A42C4E2AEFD4206(Local_160.f_2879);
	unk_0xE120EFE18EF0CF4D(Local_160.f_2879, 1);
	func_47("Frontend_Degenatron_Screen");
}

int func_331()
{
	if (!func_332())
	{
		return 0;
	}
	unk_0x0D3BE1DE0262A012(func_16(), false);
	if (!unk_0x27117E2CDD4D67C3(func_16()))
	{
		return 0;
	}
	unk_0x0D3BE1DE0262A012("MPInvPersHud", false);
	if (!unk_0x27117E2CDD4D67C3("MPInvPersHud"))
	{
		return 0;
	}
	unk_0x0D3BE1DE0262A012("MPInvPersMessages", false);
	if (!unk_0x27117E2CDD4D67C3("MPInvPersMessages"))
	{
		return 0;
	}
	unk_0x0D3BE1DE0262A012("MPInvPersMessages2", false);
	if (!unk_0x27117E2CDD4D67C3("MPInvPersMessages2"))
	{
		return 0;
	}
	unk_0x0D3BE1DE0262A012("MpInvPersCommon", false);
	if (!unk_0x27117E2CDD4D67C3("MpInvPersCommon"))
	{
		return 0;
	}
	unk_0xD7992BEF7A9D109E("IAP", 3);
	if (!unk_0x01C309A4BDFCAD82("IAP", 3))
	{
		return 0;
	}
	if (!unk_0xAE317D00A5A55DF6("DLC_VINEWOOD/DLC_VW_AM_IP", false, -1))
	{
		return 0;
	}
	return 1;
}

bool func_332()
{
	return ((((((func_333(0) && func_333(6)) && func_333(1)) && func_333(3)) && func_333(4)) && func_333(5)) && func_333(7));
}

int func_333(int iParam0)
{
	unk_0x0D3BE1DE0262A012(func_87(iParam0), false);
	if (!unk_0x27117E2CDD4D67C3(func_87(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_334()
{
	func_344();
	func_343(1);
	func_341();
	func_340();
	func_339();
	func_338();
	func_335();
	func_7(1);
	func_8(1);
}

void func_335()
{
	if (func_337(253, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 0);
	}
	if (func_337(248, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 1);
	}
	if (func_337(249, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 2);
	}
	if (func_337(250, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 3);
	}
	if (func_337(251, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 4);
	}
	if (func_337(252, -1))
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_2904), 5);
	}
	Local_160.f_2905 = func_336(8356, -1, 0);
}

int func_336(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_126(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_337(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_126(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_338()
{
	func_108(&(Local_160.f_1765), 255, 255, 255, 255);
	func_108(&(Local_160.f_1765.f_4), 0, 0, 0, 255);
	func_108(&(Local_160.f_1765.f_8), 0, 255, 0, 255);
	func_108(&(Local_160.f_1765.f_12), 255, 0, 0, 255);
	func_108(&(Local_160.f_1765.f_16), 24, 203, 247, 255);
	func_108(&(Local_160.f_1765.f_20), 27, 37, 27, 255);
	func_108(&(Local_160.f_1765.f_24), 255, 240, 127, 255);
	func_108(&(Local_160.f_1765.f_28), 103, 115, 87, 255);
	func_108(&(Local_160.f_1765.f_32), 154, 255, 0, 255);
}

void func_339()
{
	Local_160.f_2214.f_2[0][0] = 1,5f;
	Local_160.f_2214.f_2[0][1] = 1f;
	Local_160.f_2214.f_2[0][2] = 0f;
	Local_160.f_2214.f_2[0][3] = 0f;
	Local_160.f_2214.f_2[0][4] = 1f;
	Local_160.f_2214.f_2[0][5] = 1f;
	Local_160.f_2214.f_2[0][6] = 1,5f;
	Local_160.f_2214.f_2[0][7] = 2f;
	Local_160.f_2214.f_2[0][8] = 2,5f;
	Local_160.f_2214.f_2[0][9] = 0,5f;
	Local_160.f_2214.f_2[1][0] = 1f;
	Local_160.f_2214.f_2[1][1] = 1,5f;
	Local_160.f_2214.f_2[1][2] = 0f;
	Local_160.f_2214.f_2[1][3] = 0f;
	Local_160.f_2214.f_2[1][4] = 0f;
	Local_160.f_2214.f_2[1][5] = 0f;
	Local_160.f_2214.f_2[1][6] = 0,75f;
	Local_160.f_2214.f_2[1][7] = 1,5f;
	Local_160.f_2214.f_2[1][8] = 2f;
	Local_160.f_2214.f_2[1][9] = 1f;
	Local_160.f_2214.f_2[2][0] = 0f;
	Local_160.f_2214.f_2[2][1] = 0,25f;
	Local_160.f_2214.f_2[2][2] = 0,75f;
	Local_160.f_2214.f_2[2][3] = 0f;
	Local_160.f_2214.f_2[2][4] = 0f;
	Local_160.f_2214.f_2[2][5] = 0f;
	Local_160.f_2214.f_2[2][6] = 0f;
	Local_160.f_2214.f_2[2][7] = 0f;
	Local_160.f_2214.f_2[2][8] = 0f;
	Local_160.f_2214.f_2[2][9] = 0f;
	Local_160.f_2214.f_2[3][0] = 0f;
	Local_160.f_2214.f_2[3][1] = 0,75f;
	Local_160.f_2214.f_2[3][2] = 0f;
	Local_160.f_2214.f_2[3][3] = 0,6f;
	Local_160.f_2214.f_2[3][4] = 0f;
	Local_160.f_2214.f_2[3][5] = 0f;
	Local_160.f_2214.f_2[3][6] = 0f;
	Local_160.f_2214.f_2[3][7] = 0f;
	Local_160.f_2214.f_2[3][8] = 0f;
	Local_160.f_2214.f_2[3][9] = 0f;
	Local_160.f_2214.f_2[4][0] = 0f;
	Local_160.f_2214.f_2[4][1] = 1f;
	Local_160.f_2214.f_2[4][2] = 0f;
	Local_160.f_2214.f_2[4][3] = 0f;
	Local_160.f_2214.f_2[4][4] = 40f;
	Local_160.f_2214.f_2[4][5] = 20f;
	Local_160.f_2214.f_2[4][6] = 1f;
	Local_160.f_2214.f_2[4][7] = 1,5f;
	Local_160.f_2214.f_2[4][8] = 2f;
	Local_160.f_2214.f_2[4][9] = 0f;
	Local_160.f_2214.f_2[5][0] = 0f;
	Local_160.f_2214.f_2[5][1] = 1f;
	Local_160.f_2214.f_2[5][2] = 0f;
	Local_160.f_2214.f_2[5][3] = 0f;
	Local_160.f_2214.f_2[5][4] = 20f;
	Local_160.f_2214.f_2[5][5] = 20f;
	Local_160.f_2214.f_2[5][6] = 1f;
	Local_160.f_2214.f_2[5][7] = 1,5f;
	Local_160.f_2214.f_2[5][8] = 2f;
	Local_160.f_2214.f_2[5][9] = 0f;
	Local_160.f_2214.f_2[6][0] = 1f;
	Local_160.f_2214.f_2[6][1] = 1f;
	Local_160.f_2214.f_2[6][2] = 0f;
	Local_160.f_2214.f_2[6][3] = 0f;
	Local_160.f_2214.f_2[6][4] = 2,5f;
	Local_160.f_2214.f_2[6][5] = 2,5f;
	Local_160.f_2214.f_2[6][6] = 50f;
	Local_160.f_2214.f_2[6][7] = 50f;
	Local_160.f_2214.f_2[6][8] = 50f;
	Local_160.f_2214.f_2[6][9] = 0,5f;
	Local_160.f_2214.f_2[7][0] = 1f;
	Local_160.f_2214.f_2[7][1] = 2f;
	Local_160.f_2214.f_2[7][2] = 0f;
	Local_160.f_2214.f_2[7][3] = 0f;
	Local_160.f_2214.f_2[7][4] = 2,5f;
	Local_160.f_2214.f_2[7][5] = 2,5f;
	Local_160.f_2214.f_2[7][6] = 50f;
	Local_160.f_2214.f_2[7][7] = 50f;
	Local_160.f_2214.f_2[7][8] = 50f;
	Local_160.f_2214.f_2[7][9] = 1f;
	Local_160.f_2214.f_2[8][0] = 1,5f;
	Local_160.f_2214.f_2[8][1] = 2f;
	Local_160.f_2214.f_2[8][2] = 0f;
	Local_160.f_2214.f_2[8][3] = 0f;
	Local_160.f_2214.f_2[8][4] = 2,5f;
	Local_160.f_2214.f_2[8][5] = 2,5f;
	Local_160.f_2214.f_2[8][6] = 40f;
	Local_160.f_2214.f_2[8][7] = 50f;
	Local_160.f_2214.f_2[8][8] = 60f;
	Local_160.f_2214.f_2[8][9] = 1,5f;
	Local_160.f_2214.f_2[9][0] = 0,5f;
	Local_160.f_2214.f_2[9][1] = 1,5f;
	Local_160.f_2214.f_2[9][2] = 0f;
	Local_160.f_2214.f_2[9][3] = 0f;
	Local_160.f_2214.f_2[9][4] = 0f;
	Local_160.f_2214.f_2[9][5] = 0f;
	Local_160.f_2214.f_2[9][6] = 1f;
	Local_160.f_2214.f_2[9][7] = 1,5f;
	Local_160.f_2214.f_2[9][8] = 2f;
	Local_160.f_2214.f_2[9][9] = 1,5f;
}

void func_340()
{
	Local_160.f_1734[0].f_1 = 0;
	Local_160.f_1734[0].f_2 = 2000;
	Local_160.f_1734[0] = "tank_fire_blast";
	Local_160.f_1734[0].f_3 = { func_86(0,020833f, 0,011111f) };
	Local_160.f_1734[1].f_1 = 8;
	Local_160.f_1734[1].f_2 = 5000;
	Local_160.f_1734[1] = "oil_drum";
	Local_160.f_1734[1].f_3 = { func_86(0,054167f, 0,092593f) };
	Local_160.f_1734[2].f_1 = 0;
	Local_160.f_1734[2].f_2 = 2000;
	Local_160.f_1734[2] = "enemy_blast";
	Local_160.f_1734[2].f_3 = { func_86(0,027083f, 0,022222f) };
	Local_160.f_1734[3].f_1 = 9;
	Local_160.f_1734[3].f_2 = 800;
	Local_160.f_1734[3] = "fire_ball";
	Local_160.f_1734[3].f_3 = { func_86(0,035417f, 0,062963f) };
	Local_160.f_1734[4].f_1 = 2;
	Local_160.f_1734[4].f_2 = 6000;
	Local_160.f_1734[4] = "homing_rocket";
	Local_160.f_1734[4].f_3 = { func_86(0,0375f, 0,018519f) };
	Local_160.f_1734[5].f_1 = 4;
	Local_160.f_1734[5].f_2 = 0;
	Local_160.f_1734[5] = "plasma";
	Local_160.f_1734[5].f_3 = { func_86(0,025f, 0,044444f) };
}

void func_341()
{
	Local_160.f_753[0] = 0;
	Local_160.f_753[0].f_24 = "camel_idle";
	Local_160.f_753[0].f_25 = 4;
	Local_160.f_753[0].f_1 = 0,15f;
	Local_160.f_753[0].f_2 = -0,075926f;
	Local_160.f_753[0].f_22 = { func_86(0,108333f, 0,151852f) };
	Local_160.f_753[0].f_3 = { func_86(-0,017708f, -0,043f) };
	Local_160.f_753[0].f_14 = 950;
	Local_160.f_753[0].f_15 = 4;
	Local_160.f_753[0].f_17 = 16;
	Local_160.f_753[0].f_16 = 2000;
	Local_160.f_753[0].f_5[0] = { func_86(-0,003f, 0,069f) };
	Local_160.f_753[0].f_5[1] = { func_86(-0,054f, -0,019f) };
	Local_160.f_753[0].f_5[2] = { func_86(0,027f, -0,074f) };
	Local_160.f_753[0].f_5[3] = { func_86(0,051f, 0,047f) };
	Local_160.f_753[0].f_27 = 2;
	Local_160.f_753[0].f_26 = "camel_fire";
	Local_160.f_753[0].f_18 = 1;
	func_342(0, 1, 0, 0, 0, 1);
	Local_160.f_753[0].f_20 = "IAP_H_SHOOT";
	Local_160.f_753[0].f_21 = 7500;
	Local_160.f_753[1] = 0;
	Local_160.f_753[1].f_24 = "panda_idle";
	Local_160.f_753[1].f_25 = 4;
	Local_160.f_753[1].f_1 = 0,15f;
	Local_160.f_753[1].f_2 = -0,094444f;
	Local_160.f_753[1].f_22 = { func_86(0,089583f, 0,185185f) };
	Local_160.f_753[1].f_3 = { func_86(-0,026042f, -0,02037f) };
	Local_160.f_753[1].f_14 = 950;
	Local_160.f_753[1].f_15 = 4;
	Local_160.f_753[1].f_17 = 16;
	Local_160.f_753[1].f_16 = 2000;
	Local_160.f_753[1].f_5[0] = { func_86(-0,03125f, 0,080556f) };
	Local_160.f_753[1].f_5[1] = { func_86(0f, -0,08f) };
	Local_160.f_753[1].f_5[2] = { func_86(0,035938f, -0,08f) };
	Local_160.f_753[1].f_5[3] = { func_86(0,035938f, 0,080556f) };
	Local_160.f_753[1].f_27 = 2;
	Local_160.f_753[1].f_26 = "panda_fire";
	Local_160.f_753[1].f_18 = 1;
	func_342(1, 0, 0, 1, 0, 1);
	Local_160.f_753[1].f_20 = func_10();
	Local_160.f_753[1].f_21 = 7500;
	Local_160.f_753[2] = 0;
	Local_160.f_753[2].f_24 = "bear_idle";
	Local_160.f_753[2].f_25 = 4;
	Local_160.f_753[2].f_1 = 0,15f;
	Local_160.f_753[2].f_2 = -0,07037f;
	Local_160.f_753[2].f_22 = { func_86(0,104167f, 0,144444f) };
	Local_160.f_753[2].f_3 = { func_86(-0,032813f, -0,050926f) };
	Local_160.f_753[2].f_14 = 950;
	Local_160.f_753[2].f_15 = 4;
	Local_160.f_753[2].f_17 = 16;
	Local_160.f_753[2].f_16 = 2000;
	Local_160.f_753[2].f_5[0] = { func_86(-0,046875f, 0,003704f) };
	Local_160.f_753[2].f_5[1] = { func_86(0,005208f, -0,072222f) };
	Local_160.f_753[2].f_5[2] = { func_86(0,05625f, 0,02037f) };
	Local_160.f_753[2].f_5[3] = { func_86(-0,029167f, 0,07037f) };
	Local_160.f_753[2].f_27 = 2;
	Local_160.f_753[2].f_26 = "bear_fire";
	Local_160.f_753[2].f_18 = 1;
	func_342(2, 0, 1, 0, 0, 1);
	Local_160.f_753[2].f_20 = func_10();
	Local_160.f_753[2].f_21 = 7500;
	Local_160.f_753[3] = 0;
	Local_160.f_753[3].f_24 = "moose_idle";
	Local_160.f_753[3].f_25 = 3;
	Local_160.f_753[3].f_1 = 0,15f;
	Local_160.f_753[3].f_2 = -0,092593f;
	Local_160.f_753[3].f_22 = { func_86(0,108333f, 0,185185f) };
	Local_160.f_753[3].f_3 = { func_86(-0,025521f, -0,02037f) };
	Local_160.f_753[3].f_14 = 950;
	Local_160.f_753[3].f_15 = 4;
	Local_160.f_753[3].f_17 = 16;
	Local_160.f_753[3].f_16 = 2000;
	Local_160.f_753[3].f_5[0] = { func_86(-0,053646f, -0,017593f) };
	Local_160.f_753[3].f_5[1] = { func_86(-0,020313f, -0,092593f) };
	Local_160.f_753[3].f_5[2] = { func_86(0,053646f, 0,013889f) };
	Local_160.f_753[3].f_5[3] = { func_86(-0,020313f, 0,092593f) };
	Local_160.f_753[3].f_27 = 2;
	Local_160.f_753[3].f_26 = "moose_fire";
	Local_160.f_753[3].f_18 = 1;
	func_342(3, 0, 0, 0, 1, 1);
	Local_160.f_753[3].f_20 = func_10();
	Local_160.f_753[3].f_21 = 7500;
	Local_160.f_753[4] = 1;
	Local_160.f_753[4].f_24 = "jet_idle";
	Local_160.f_753[4].f_25 = 4;
	Local_160.f_753[4].f_1 = 0,25f;
	Local_160.f_753[4].f_2 = (0,15f + 0,06944444f);
	Local_160.f_753[4].f_22 = { func_86(0,16875f, 0,111111f) };
	Local_160.f_753[4].f_3 = { func_86(0,05f, 0,05f) };
	Local_160.f_753[4].f_14 = 350;
	Local_160.f_753[4].f_15 = 4;
	Local_160.f_753[4].f_17 = 8;
	Local_160.f_753[4].f_16 = 2500;
	Local_160.f_753[4].f_5[0] = { func_86(-0,082f, 0,021f) };
	Local_160.f_753[4].f_5[1] = { func_86(-0,04f, -0,022f) };
	Local_160.f_753[4].f_5[2] = { func_86(0,089f, 0,003f) };
	Local_160.f_753[4].f_5[3] = { func_86(0,038f, 0,049f) };
	Local_160.f_753[4].f_18 = 2;
	func_342(4, 1, 1, 1, 1, 1);
	Local_160.f_753[4].f_20 = func_10();
	Local_160.f_753[4].f_21 = 7500;
	Local_160.f_753[5] = 2;
	Local_160.f_753[5].f_24 = "pod_idle";
	Local_160.f_753[5].f_25 = 4;
	Local_160.f_753[5].f_1 = 0,175f;
	Local_160.f_753[5].f_2 = (0f + 0,06944444f);
	Local_160.f_753[5].f_22 = { func_86(0,089583f, 0,1f) };
	Local_160.f_753[5].f_3 = { func_86(-0,025f, 0,035185f) };
	Local_160.f_753[5].f_14 = 700;
	Local_160.f_753[5].f_15 = 4;
	Local_160.f_753[5].f_17 = 4;
	Local_160.f_753[5].f_16 = 1250;
	Local_160.f_753[5].f_5[0] = { func_86((-0,16875f / 5f), (0,111111f / 4f)) };
	Local_160.f_753[5].f_5[1] = { func_86((-0,16875f / 5f), (-0,111111f / 3f)) };
	Local_160.f_753[5].f_5[2] = { func_86((0,16875f / 6f), (-0,111111f / 3f)) };
	Local_160.f_753[5].f_5[3] = { func_86((0,16875f / 6f), (0,111111f / 4f)) };
	Local_160.f_753[5].f_27 = 4;
	Local_160.f_753[5].f_26 = "pod_fire";
	Local_160.f_753[5].f_18 = 3;
	func_342(5, 1, 1, 1, 1, 1);
	Local_160.f_753[5].f_20 = "IAP_H_ROT";
	Local_160.f_753[5].f_21 = 7500;
	Local_160.f_753[18] = 5;
	Local_160.f_753[18].f_24 = "pickup_flame";
	Local_160.f_753[18].f_25 = 0;
	Local_160.f_753[18].f_1 = 0,15f;
	Local_160.f_753[18].f_2 = -0,031f;
	Local_160.f_753[18].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[18].f_17 = 1;
	Local_160.f_753[18].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[18].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[18].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[18].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[18].f_18 = 4;
	func_342(18, 1, 1, 1, 1, 1);
	Local_160.f_753[18].f_20 = func_10();
	Local_160.f_753[18].f_21 = 7500;
	Local_160.f_753[19] = 5;
	Local_160.f_753[19].f_24 = "pickup_rocket";
	Local_160.f_753[19].f_25 = 0;
	Local_160.f_753[19].f_1 = 0,15f;
	Local_160.f_753[19].f_2 = -0,031f;
	Local_160.f_753[19].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[19].f_17 = 1;
	Local_160.f_753[19].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[19].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[19].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[19].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[19].f_18 = 4;
	func_342(19, 1, 1, 1, 1, 1);
	Local_160.f_753[19].f_20 = func_10();
	Local_160.f_753[19].f_21 = 7500;
	Local_160.f_753[20] = 5;
	Local_160.f_753[20].f_24 = "pickup_health";
	Local_160.f_753[20].f_25 = 0;
	Local_160.f_753[20].f_1 = 0,15f;
	Local_160.f_753[20].f_2 = -0,031f;
	Local_160.f_753[20].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[20].f_17 = 1;
	Local_160.f_753[20].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[20].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[20].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[20].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[20].f_18 = 5;
	func_342(20, 1, 1, 1, 1, 1);
	Local_160.f_753[20].f_20 = func_10();
	Local_160.f_753[20].f_21 = 7500;
	Local_160.f_753[21] = 5;
	Local_160.f_753[21].f_24 = "pickup_life";
	Local_160.f_753[21].f_25 = 0;
	Local_160.f_753[21].f_1 = 0,15f;
	Local_160.f_753[21].f_2 = -0,031f;
	Local_160.f_753[21].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[21].f_17 = 1;
	Local_160.f_753[21].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[21].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[21].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[21].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[21].f_18 = 4;
	func_342(21, 1, 1, 1, 1, 1);
	Local_160.f_753[21].f_20 = func_10();
	Local_160.f_753[21].f_21 = 7500;
	Local_160.f_753[22] = 5;
	Local_160.f_753[22].f_24 = "pickup_score";
	Local_160.f_753[22].f_25 = 0;
	Local_160.f_753[22].f_1 = 0,15f;
	Local_160.f_753[22].f_2 = -0,031f;
	Local_160.f_753[22].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[22].f_17 = 1;
	Local_160.f_753[22].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[22].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[22].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[22].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[22].f_18 = 5;
	func_342(22, 1, 1, 1, 1, 1);
	Local_160.f_753[22].f_20 = "IAP_H_PICKUP";
	Local_160.f_753[22].f_21 = 7500;
	Local_160.f_753[23] = 5;
	Local_160.f_753[23].f_24 = "pickup_shield";
	Local_160.f_753[23].f_25 = 0;
	Local_160.f_753[23].f_1 = 0,15f;
	Local_160.f_753[23].f_2 = -0,031f;
	Local_160.f_753[23].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[23].f_17 = 1;
	Local_160.f_753[23].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[23].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[23].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[23].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[23].f_18 = 5;
	func_342(23, 1, 1, 1, 1, 1);
	Local_160.f_753[23].f_20 = func_10();
	Local_160.f_753[23].f_21 = 7500;
	Local_160.f_753[24] = 5;
	Local_160.f_753[24].f_24 = "pickup_enemy";
	Local_160.f_753[24].f_25 = 0;
	Local_160.f_753[24].f_1 = 0,15f;
	Local_160.f_753[24].f_2 = -0,031f;
	Local_160.f_753[24].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[24].f_17 = 1;
	Local_160.f_753[24].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[24].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[24].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[24].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[24].f_18 = 5;
	func_342(24, 1, 1, 1, 1, 1);
	Local_160.f_753[24].f_20 = func_10();
	Local_160.f_753[24].f_21 = 7500;
	Local_160.f_753[25] = 5;
	Local_160.f_753[25].f_24 = "pickup_plasma";
	Local_160.f_753[25].f_25 = 0;
	Local_160.f_753[25].f_1 = 0,15f;
	Local_160.f_753[25].f_2 = -0,031f;
	Local_160.f_753[25].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[25].f_17 = 1;
	Local_160.f_753[25].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[25].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[25].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[25].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[25].f_18 = 4;
	func_342(25, 1, 1, 1, 1, 1);
	Local_160.f_753[25].f_20 = func_10();
	Local_160.f_753[25].f_21 = 7500;
	Local_160.f_753[26] = 5;
	Local_160.f_753[26].f_24 = "pickup_triple";
	Local_160.f_753[26].f_25 = 0;
	Local_160.f_753[26].f_1 = 0,15f;
	Local_160.f_753[26].f_2 = -0,031f;
	Local_160.f_753[26].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[26].f_17 = 1;
	Local_160.f_753[26].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[26].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[26].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[26].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[26].f_18 = 4;
	func_342(26, 1, 1, 1, 1, 1);
	Local_160.f_753[26].f_20 = func_10();
	Local_160.f_753[26].f_21 = 7500;
	Local_160.f_753[27] = 5;
	Local_160.f_753[27].f_24 = "pickup_nuke";
	Local_160.f_753[27].f_25 = 0;
	Local_160.f_753[27].f_1 = 0,15f;
	Local_160.f_753[27].f_2 = -0,031f;
	Local_160.f_753[27].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[27].f_17 = 1;
	Local_160.f_753[27].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[27].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[27].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[27].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[27].f_18 = 4;
	func_342(27, 1, 1, 1, 1, 1);
	Local_160.f_753[27].f_20 = func_10();
	Local_160.f_753[27].f_21 = 7500;
	Local_160.f_753[28] = 5;
	Local_160.f_753[28].f_24 = "pickup_random";
	Local_160.f_753[28].f_25 = 0;
	Local_160.f_753[28].f_1 = 0,15f;
	Local_160.f_753[28].f_2 = -0,031f;
	Local_160.f_753[28].f_22 = { func_86(0,04375f, 0,066667f) };
	Local_160.f_753[28].f_17 = 1;
	Local_160.f_753[28].f_5[0] = { func_86(-0,0238f, 0,035f) };
	Local_160.f_753[28].f_5[1] = { func_86(-0,0238f, -0,035f) };
	Local_160.f_753[28].f_5[2] = { func_86(0,0238f, -0,035f) };
	Local_160.f_753[28].f_5[3] = { func_86(0,0238f, 0,035f) };
	Local_160.f_753[28].f_18 = 4;
	func_342(28, 1, 1, 1, 1, 1);
	Local_160.f_753[28].f_20 = func_10();
	Local_160.f_753[28].f_21 = 7500;
	Local_160.f_753[6] = 7;
	Local_160.f_753[6].f_24 = "jet_crash";
	Local_160.f_753[6].f_25 = 0;
	Local_160.f_753[6].f_1 = 0,15f;
	Local_160.f_753[6].f_2 = -0,1f;
	Local_160.f_753[6].f_22 = { func_86(0,13125f, 0,207407f) };
	Local_160.f_753[6].f_17 = 12;
	Local_160.f_753[6].f_16 = 1000;
	Local_160.f_753[6].f_5[0] = { func_86(-0,0625f, 0,097222f) };
	Local_160.f_753[6].f_5[1] = { func_86(-0,005208f, -0,014815f) };
	Local_160.f_753[6].f_5[2] = { func_86(0,028646f, -0,101852f) };
	Local_160.f_753[6].f_5[3] = { func_86(0,056771f, 0,037037f) };
	Local_160.f_753[6].f_18 = 1;
	func_342(6, 1, 1, 1, 1, 1);
	Local_160.f_753[6].f_20 = func_10();
	Local_160.f_753[6].f_21 = 7500;
	Local_160.f_753[33] = 7;
	Local_160.f_753[33].f_24 = "crashed_tank";
	Local_160.f_753[33].f_25 = 0;
	Local_160.f_753[33].f_1 = 0,15f;
	Local_160.f_753[33].f_2 = -0,07f;
	Local_160.f_753[33].f_22 = { func_86(0,10625f, 0,1444445f) };
	Local_160.f_753[33].f_17 = 12;
	Local_160.f_753[33].f_16 = 1000;
	Local_160.f_753[33].f_5[0] = { func_86(-0,053125f, 0,07222223f) };
	Local_160.f_753[33].f_5[1] = { func_86(0f, -0,07222223f) };
	Local_160.f_753[33].f_5[2] = { func_86(0,03802083f, -0,07222223f) };
	Local_160.f_753[33].f_5[3] = { func_86(0,053125f, 0,07222223f) };
	Local_160.f_753[33].f_18 = 1;
	func_342(33, 0, 0, 0, 0, 0);
	Local_160.f_753[33].f_20 = func_10();
	Local_160.f_753[33].f_21 = 7500;
	Local_160.f_753[7] = 8;
	Local_160.f_753[7].f_24 = "anti_tank_barrier";
	Local_160.f_753[7].f_25 = 0;
	Local_160.f_753[7].f_1 = 0,15f;
	Local_160.f_753[7].f_2 = -0,055556f;
	Local_160.f_753[7].f_22 = { func_86(0,066667f, 0,122222f) };
	Local_160.f_753[7].f_17 = 1;
	Local_160.f_753[7].f_5[0] = { func_86(-0,03f, 0,055f) };
	Local_160.f_753[7].f_5[1] = { func_86(-0,03f, -0,05f) };
	Local_160.f_753[7].f_5[2] = { func_86(0,03f, -0,05f) };
	Local_160.f_753[7].f_5[3] = { func_86(0,03f, 0,055f) };
	Local_160.f_753[7].f_18 = 1;
	func_342(7, 1, 1, 1, 1, 1);
	Local_160.f_753[7].f_20 = "IAP_H_JUMP";
	Local_160.f_753[7].f_21 = 7500;
	Local_160.f_753[8] = 3;
	Local_160.f_753[8].f_24 = "pitfall";
	Local_160.f_753[8].f_25 = 0;
	Local_160.f_753[8].f_1 = 0,15f;
	Local_160.f_753[8].f_2 = ((0,89444f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[8].f_22 = { func_86(0,422917f, 0,211111f) };
	Local_160.f_753[8].f_17 = 1;
	Local_160.f_753[8].f_5[0] = { func_86(-0,015f, -0,075f) };
	Local_160.f_753[8].f_5[1] = { func_86(-0,015f, -0,14f) };
	Local_160.f_753[8].f_5[2] = { func_86(0,015f, -0,14f) };
	Local_160.f_753[8].f_5[3] = { func_86(0,015f, -0,075f) };
	Local_160.f_753[8].f_18 = 0;
	func_342(8, 1, 0, 0, 0, 0);
	Local_160.f_753[8].f_20 = func_10();
	Local_160.f_753[8].f_21 = 7500;
	Local_160.f_753[9] = 3;
	Local_160.f_753[9].f_24 = "pitfall";
	Local_160.f_753[9].f_25 = 0;
	Local_160.f_753[9].f_1 = 0,15f;
	Local_160.f_753[9].f_2 = ((0,892592f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[9].f_22 = { func_86(0,308333f, 0,214815f) };
	Local_160.f_753[9].f_17 = 1;
	Local_160.f_753[9].f_5[0] = { func_86(-0,015f, -0,075f) };
	Local_160.f_753[9].f_5[1] = { func_86(-0,015f, -0,14f) };
	Local_160.f_753[9].f_5[2] = { func_86(0,015f, -0,14f) };
	Local_160.f_753[9].f_5[3] = { func_86(0,015f, -0,075f) };
	Local_160.f_753[9].f_18 = 0;
	func_342(9, 0, 1, 0, 0, 0);
	Local_160.f_753[9].f_20 = func_10();
	Local_160.f_753[9].f_21 = 7500;
	Local_160.f_753[10] = 3;
	Local_160.f_753[10].f_24 = "pitfall";
	Local_160.f_753[10].f_25 = 0;
	Local_160.f_753[10].f_1 = 0,15f;
	Local_160.f_753[10].f_2 = ((0,89444f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[10].f_22 = { func_86(0,308333f, 0,211111f) };
	Local_160.f_753[10].f_17 = 1;
	Local_160.f_753[10].f_5[0] = { func_86(-0,015f, -0,075f) };
	Local_160.f_753[10].f_5[1] = { func_86(-0,015f, -0,14f) };
	Local_160.f_753[10].f_5[2] = { func_86(0,015f, -0,14f) };
	Local_160.f_753[10].f_5[3] = { func_86(0,015f, -0,075f) };
	Local_160.f_753[10].f_18 = 0;
	func_342(10, 0, 0, 1, 0, 0);
	Local_160.f_753[10].f_20 = func_10();
	Local_160.f_753[10].f_21 = 7500;
	Local_160.f_753[11] = 3;
	Local_160.f_753[11].f_24 = "pitfall";
	Local_160.f_753[11].f_25 = 0;
	Local_160.f_753[11].f_1 = 0,15f;
	Local_160.f_753[11].f_2 = ((0,892592f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[11].f_22 = { func_86(0,30625f, 0,214815f) };
	Local_160.f_753[11].f_17 = 1;
	Local_160.f_753[11].f_5[0] = { func_86(-0,015f, -0,075f) };
	Local_160.f_753[11].f_5[1] = { func_86(-0,015f, -0,14f) };
	Local_160.f_753[11].f_5[2] = { func_86(0,015f, -0,14f) };
	Local_160.f_753[11].f_5[3] = { func_86(0,015f, -0,075f) };
	Local_160.f_753[11].f_18 = 0;
	func_342(11, 0, 0, 0, 1, 0);
	Local_160.f_753[11].f_20 = func_10();
	Local_160.f_753[11].f_21 = 7500;
	Local_160.f_753[12] = 3;
	Local_160.f_753[12].f_24 = "pitfall";
	Local_160.f_753[12].f_25 = 0;
	Local_160.f_753[12].f_1 = 0,15f;
	Local_160.f_753[12].f_2 = ((0,8333324f - (0,01111111f / 2f)) + 0,02314815f);
	Local_160.f_753[12].f_22 = { func_86(0,30625f, (0,2222222f - 0,01111111f)) };
	Local_160.f_753[12].f_17 = 1;
	Local_160.f_753[12].f_5[0] = { func_86(-0,015f, -0,075f) };
	Local_160.f_753[12].f_5[1] = { func_86(-0,015f, -0,14f) };
	Local_160.f_753[12].f_5[2] = { func_86(0,015f, -0,14f) };
	Local_160.f_753[12].f_5[3] = { func_86(0,015f, -0,075f) };
	Local_160.f_753[12].f_18 = 0;
	func_342(12, 0, 0, 0, 0, 1);
	Local_160.f_753[12].f_20 = func_10();
	Local_160.f_753[12].f_21 = 7500;
	Local_160.f_753[13] = 4;
	Local_160.f_753[13].f_24 = "ledge";
	Local_160.f_753[13].f_25 = 0;
	Local_160.f_753[13].f_1 = 0,15f;
	Local_160.f_753[13].f_2 = ((0,8129629f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[13].f_22 = { func_86(0,422917f, 0,374074f) };
	Local_160.f_753[13].f_17 = 1;
	Local_160.f_753[13].f_18 = 9;
	func_342(13, 1, 0, 0, 0, 0);
	Local_160.f_753[13].f_20 = func_10();
	Local_160.f_753[13].f_21 = 7500;
	Local_160.f_753[14] = 4;
	Local_160.f_753[14].f_24 = "ledge";
	Local_160.f_753[14].f_25 = 0;
	Local_160.f_753[14].f_1 = 0,15f;
	Local_160.f_753[14].f_2 = ((0,8129629f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[14].f_22 = { func_86(0,308333f, 0,374074f) };
	Local_160.f_753[14].f_17 = 1;
	Local_160.f_753[14].f_18 = 9;
	func_342(14, 0, 1, 0, 0, 0);
	Local_160.f_753[14].f_20 = func_10();
	Local_160.f_753[14].f_21 = 7500;
	Local_160.f_753[15] = 4;
	Local_160.f_753[15].f_24 = "ledge";
	Local_160.f_753[15].f_25 = 0;
	Local_160.f_753[15].f_1 = 0,15f;
	Local_160.f_753[15].f_2 = ((0,8129629f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[15].f_22 = { func_86(0,308333f, 0,374074f) };
	Local_160.f_753[15].f_17 = 1;
	Local_160.f_753[15].f_18 = 9;
	func_342(15, 0, 0, 1, 0, 0);
	Local_160.f_753[15].f_20 = func_10();
	Local_160.f_753[15].f_21 = 7500;
	Local_160.f_753[16] = 4;
	Local_160.f_753[16].f_24 = "ledge";
	Local_160.f_753[16].f_25 = 0;
	Local_160.f_753[16].f_1 = 0,15f;
	Local_160.f_753[16].f_2 = ((0,8129629f - 0,06944444f) + 0,02314815f);
	Local_160.f_753[16].f_22 = { func_86(0,30625f, 0,374074f) };
	Local_160.f_753[16].f_17 = 1;
	Local_160.f_753[16].f_18 = 9;
	func_342(16, 0, 0, 0, 1, 0);
	Local_160.f_753[16].f_20 = func_10();
	Local_160.f_753[16].f_21 = 7500;
	Local_160.f_753[17] = 4;
	Local_160.f_753[17].f_24 = "ledge";
	Local_160.f_753[17].f_25 = 0;
	Local_160.f_753[17].f_1 = 0,15f;
	Local_160.f_753[17].f_2 = ((0,7574074f - (0,01111111f / 2f)) + 0,02314815f);
	Local_160.f_753[17].f_22 = { func_86(0,30625f, (0,3740741f - 0,01111111f)) };
	Local_160.f_753[17].f_17 = 1;
	Local_160.f_753[17].f_18 = 9;
	func_342(17, 0, 0, 0, 0, 1);
	Local_160.f_753[17].f_20 = func_10();
	Local_160.f_753[17].f_21 = 7500;
	Local_160.f_753[29] = 6;
	Local_160.f_753[29].f_24 = "oil_drum_1";
	Local_160.f_753[29].f_25 = 4;
	Local_160.f_753[29].f_1 = 0,15f;
	Local_160.f_753[29].f_2 = -0,075926f;
	Local_160.f_753[29].f_22 = { func_86(0,054167f, 0,151852f) };
	Local_160.f_753[29].f_17 = 1;
	Local_160.f_753[29].f_16 = 5000;
	Local_160.f_753[29].f_5[0] = { func_86((-0,054167f / 2f), (0,151852f / 2f)) };
	Local_160.f_753[29].f_5[1] = { func_86((-0,054167f / 2f), (-0,151852f / 2f)) };
	Local_160.f_753[29].f_5[2] = { func_86((0,054167f / 2f), (-0,151852f / 2f)) };
	Local_160.f_753[29].f_5[3] = { func_86((0,054167f / 2f), (0,151852f / 2f)) };
	Local_160.f_753[29].f_18 = 6;
	func_342(29, 1, 1, 1, 1, 1);
	Local_160.f_753[29].f_20 = "IAP_H_OIL";
	Local_160.f_753[29].f_21 = 7500;
	Local_160.f_753[30] = 6;
	Local_160.f_753[30].f_24 = "stock_pile1";
	Local_160.f_753[30].f_25 = 4;
	Local_160.f_753[30].f_1 = 0,15f;
	Local_160.f_753[30].f_2 = -0,122222f;
	Local_160.f_753[30].f_22 = { func_86(0,116667f, 0,244444f) };
	Local_160.f_753[30].f_17 = 1;
	Local_160.f_753[30].f_16 = 12500;
	Local_160.f_753[30].f_5[0] = { func_86((-0,116667f / 2f), (0,244444f / 2f)) };
	Local_160.f_753[30].f_5[1] = { func_86((-0,116667f / 2f), (-0,244444f / 2f)) };
	Local_160.f_753[30].f_5[2] = { func_86((0,116667f / 2f), (-0,244444f / 2f)) };
	Local_160.f_753[30].f_5[3] = { func_86((0,116667f / 2f), (0,244444f / 2f)) };
	Local_160.f_753[30].f_18 = 7;
	func_342(30, 1, 1, 1, 1, 1);
	Local_160.f_753[30].f_20 = func_10();
	Local_160.f_753[30].f_21 = 7500;
	Local_160.f_753[31] = 6;
	Local_160.f_753[31].f_24 = "stock_pile2";
	Local_160.f_753[31].f_25 = 4;
	Local_160.f_753[31].f_1 = 0,15f;
	Local_160.f_753[31].f_2 = -0,122222f;
	Local_160.f_753[31].f_22 = { func_86(0,116667f, 0,244444f) };
	Local_160.f_753[31].f_17 = 1;
	Local_160.f_753[31].f_16 = 12500;
	Local_160.f_753[31].f_5[0] = { func_86((-0,116667f / 2f), (0,244444f / 2f)) };
	Local_160.f_753[31].f_5[1] = { func_86((-0,116667f / 2f), (-0,244444f / 2f)) };
	Local_160.f_753[31].f_5[2] = { func_86((0,116667f / 2f), (-0,244444f / 2f)) };
	Local_160.f_753[31].f_5[3] = { func_86((0,116667f / 2f), (0,244444f / 2f)) };
	Local_160.f_753[31].f_18 = 7;
	func_342(31, 0, 0, 0, 0, 0);
	Local_160.f_753[31].f_20 = func_10();
	Local_160.f_753[31].f_21 = 7500;
	Local_160.f_753[32] = 6;
	Local_160.f_753[32].f_24 = "stock_pile3";
	Local_160.f_753[32].f_25 = 4;
	Local_160.f_753[32].f_1 = 0,15f;
	Local_160.f_753[32].f_2 = -0,087037f;
	Local_160.f_753[32].f_22 = { func_86(0,160417f, 0,174074f) };
	Local_160.f_753[32].f_17 = 1;
	Local_160.f_753[32].f_16 = 25000;
	Local_160.f_753[32].f_5[0] = { func_86((-0,160417f / 2f), (0,174074f / 2f)) };
	Local_160.f_753[32].f_5[1] = { func_86((-0,160417f / 2f), (-0,174074f / 2f)) };
	Local_160.f_753[32].f_5[2] = { func_86((0,160417f / 2f), (-0,174074f / 2f)) };
	Local_160.f_753[32].f_5[3] = { func_86((0,160417f / 2f), (0,174074f / 2f)) };
	Local_160.f_753[32].f_18 = 8;
	func_342(32, 1, 1, 1, 1, 1);
	Local_160.f_753[32].f_20 = func_10();
	Local_160.f_753[32].f_21 = 7500;
}

void func_342(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_753[iParam0].f_19), 0);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_753[iParam0].f_19), 1);
	}
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_753[iParam0].f_19), 2);
	}
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_753[iParam0].f_19), 3);
	}
	if (bParam5)
	{
		unk_0x5D96D8530B3D0904(&(Local_160.f_753[iParam0].f_19), 4);
	}
}

void func_343(int iParam0)
{
	Local_3117.f_137 = iParam0;
	func_108(&(Local_3117[0].f_9), 255, 255, 255, 255);
	Local_3117[1].f_6 = 1000;
	Local_3117[1].f_7 = 10000;
	Local_3117[2].f_1 = 1;
	Local_3117[2].f_8 = 40;
	func_108(&(Local_3117[2].f_9), 0, 0, 0, 0);
	func_108(&(Local_3117[3].f_9), 255, 255, 255, 127);
	func_108(&(Local_3117[4].f_9), 255, 255, 255, 127);
	func_108(&(Local_3117[5].f_9), 255, 255, 255, 127);
	func_108(&(Local_3117[7].f_9), 255, 255, 255, 255);
	switch (Local_3117.f_137)
	{
		case 2:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 30);
			func_108(&(Local_3117[4].f_9), 255, 255, 255, 127);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[3] = 1;
			break;
		
		case 3:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 30);
			func_108(&(Local_3117[4].f_9), 255, 255, 255, 255);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[4] = 1;
			break;
		
		case 4:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 30);
			func_108(&(Local_3117[5].f_9), 255, 255, 255, 184);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[5] = 1;
			break;
		
		case 1:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 10);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[3] = 1;
			break;
		
		case 0:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 10);
			func_108(&(Local_3117[5].f_9), 255, 255, 255, 255);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[5] = 1;
			break;
		
		case 6:
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 10);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 8);
			func_108(&(Local_3117[7].f_9), 255, 255, 255, 100);
			Local_3117[0] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[7] = 1;
			break;
		
		case 7:
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 8);
			Local_3117[2] = 1;
			Local_3117[0] = 1;
			func_108(&(Local_3117[3].f_9), 255, 255, 255, 180);
			Local_3117[3] = 1;
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			Local_3117[6] = 1;
			break;
		
		case 5:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 30);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 20);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 10);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[2] = 1;
			Local_3117[3] = 1;
			break;
		
		case 8:
			Local_3117[1] = 0;
			Local_3117[2] = 0;
			Local_3117[0] = 1;
			func_108(&(Local_3117[0].f_9), 0, 0, 255, 90);
			Local_3117[6] = 1;
			func_108(&(Local_3117[6].f_9), 255, 0, 0, 15);
			Local_3117[7] = 1;
			func_108(&(Local_3117[7].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_3117[1] = 0;
			Local_3117[2] = 0;
			Local_3117[0] = 1;
			func_108(&(Local_3117[0].f_9), 0, 0, 255, 90);
			Local_3117[6] = 1;
			func_108(&(Local_3117[6].f_9), 255, 0, 0, 15);
			Local_3117[7] = 1;
			func_108(&(Local_3117[7].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_3117[1] = 0;
			Local_3117[2] = 0;
			Local_3117[0] = 1;
			func_108(&(Local_3117[0].f_9), 0, 0, 255, 90);
			Local_3117[6] = 1;
			func_108(&(Local_3117[6].f_9), 255, 0, 0, 15);
			Local_3117[7] = 1;
			func_108(&(Local_3117[7].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_108(&(Local_3117[6].f_9), 255, 255, 255, 15);
			func_108(&(Local_3117[1].f_9), 255, 255, 255, 10);
			func_108(&(Local_3117[2].f_13), 0, 0, 0, 5);
			Local_3117[0] = 1;
			Local_3117[6] = 1;
			Local_3117[1] = 1;
			Local_3117[3] = 1;
			break;
	}
}

void func_344()
{
	Global_1590535[unk_0xD803B885F5E47A62()].f_750 = 1;
	Global_4456448.f_227352 = 1;
	Global_1370267 = 1;
	func_346();
	if (unk_0x8CD06866876216F2())
	{
		func_20(unk_0xD803B885F5E47A62(), 0, 0, 0);
		func_345();
	}
	else
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
	}
	func_36(1, 0, 1, 0);
	func_19(0, 1, -1);
	func_19(1, 1, -1);
	func_19(2, 1, -1);
	func_19(3, 1, -1);
	func_19(4, 1, -1);
	func_19(6, 1, -1);
	func_19(7, 1, -1);
	func_19(8, 1, -1);
	func_19(9, 1, -1);
	func_19(10, 1, -1);
	func_19(11, 1, -1);
	func_19(12, 1, -1);
	func_19(13, 1, -1);
	func_19(14, 1, -1);
	func_19(15, 1, -1);
	func_19(16, 1, -1);
}

void func_345()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_346()
{
	if (func_352() || func_351())
	{
		func_350();
		func_347();
	}
}

void func_347()
{
	if ((!func_349() && !func_348()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_348()
{
	return Global_2450632.f_591;
}

bool func_349()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

void func_350()
{
	Global_2450632.f_656 = 1;
}

var func_351()
{
	return Global_2450632.f_635;
}

bool func_352()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_353()
{
	if (Local_160.f_2870 >= 11)
	{
		return;
	}
	if (!func_33())
	{
		func_8(11);
		return;
	}
	if (func_378())
	{
		if (func_377(unk_0xD803B885F5E47A62()))
		{
			Local_160.f_2948.f_4 = 0;
			Local_160.f_2948.f_3 = 0;
			func_376(&(Local_160.f_2948), 11);
		}
		func_8(11);
		return;
	}
	func_372();
	if (!Local_160.f_2910 && (Local_160.f_2911 == -2147483647 || (unk_0x2B6E0A53779D29EA() - Local_160.f_2911) > 5000))
	{
		func_371(func_71(unk_0xD803B885F5E47A62()), 1);
		Local_160.f_2911 = unk_0x2B6E0A53779D29EA();
	}
	func_370();
	unk_0x0674E58A79778E99(&(Local_160.f_2368.f_333), 2);
	bVar0 = Local_160.f_2870 >= 2;
	func_354(bVar0);
}

void func_354(bool bParam0)
{
	func_367();
	unk_0xA2E3EDD0E119882F(0);
	unk_0xA2E3EDD0E119882F(2);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x38C3A68D7861DCFD(2, 200, 1);
	}
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0x5DD950F92F816F03(0);
	func_366(1);
	func_365(4, -1);
	unk_0x5024DE80A08E9E70(19);
	func_364();
	func_363();
	unk_0xB8E3919889462ACD();
	if (bParam0)
	{
		func_356(0);
		if (!unk_0x798A3F1296751F46())
		{
			unk_0x3FC8DBCC154CA56B();
			unk_0xD9ACBBA59FD5A09E(1);
		}
	}
	func_355();
	unk_0xC2127C0F64D6A3B9();
}

void func_355()
{
	Global_22211.f_134 = 1;
}

void func_356(int iParam0)
{
	if (func_362())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_361(0))
		{
			func_357(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_357(int iParam0)
{
	if (func_362())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_360())
		{
			func_359(1, 1);
		}
		else
		{
			func_359(0, 0);
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
	if (!func_358())
	{
		Global_19486.f_1 = 3;
	}
}

int func_358()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_359(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_361(0))
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

bool func_360()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_361(int iParam0)
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

bool func_362()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_363()
{
	Global_22211.f_6 = 1;
}

void func_364()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_365(int iParam0, int iParam1)
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

void func_366(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_367()
{
	fLocal_135 = func_369();
	fLocal_136 = func_368();
}

float func_368()
{
	return (1,778f / fLocal_135);
}

float func_369()
{
	unk_0xE5AC5CA7914F5BAE(&uLocal_137, &iLocal_138);
	fLocal_135 = unk_0x33D480CCE15C991A(0);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (fLocal_135 >= 4f)
		{
			fLocal_135 = (fLocal_135 / 3f);
		}
	}
	return fLocal_135;
}

void func_370()
{
	Local_160.f_2874 = (Local_160.f_2874 + round((unk_0x6117725E0134737F() * 1000f)));
	Local_160.f_2875 = floor((IntToFloat(Local_160.f_2874) / 66f));
	Local_160.f_2874 = (Local_160.f_2874 - round((66f * IntToFloat(Local_160.f_2875))));
	Local_160.f_2876 = (Local_160.f_2876 + round((unk_0x6117725E0134737F() * 1000f)));
	Local_160.f_2877 = floor((IntToFloat(Local_160.f_2876) / 33f));
	Local_160.f_2876 = (Local_160.f_2876 - round((33f * IntToFloat(Local_160.f_2877))));
}

void func_371(int iParam0, int iParam1)
{
	vVar0.x = -2012069109;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	iVar3 = func_70(iParam0);
	if (!iVar3 == 0 && func_77(iParam0, 0, 1))
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iVar3);
	}
}

void func_372()
{
	if (Local_160.f_2910)
	{
		return;
	}
	Var1.f_3 = 10;
	Var1.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		if (unk_0xB98DB26FBF676FA1(1, iVar0) != 174)
		{
		}
		else if (unk_0x218F818E64020C17(1, iVar0, &Var1, 25))
		{
			if (Var1 == 1452778049)
			{
				if (Var1.f_2 != 1)
				{
				}
				else
				{
					func_373(&(Var1.f_3), &(Var1.f_14));
				}
			}
		}
		iVar0++;
	}
}

void func_373(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_160.f_2912[iVar0].f_1 = func_375(iVar0);
			Local_160.f_2912[iVar0] = func_374(iVar0);
			func_69(func_71(unk_0xD803B885F5E47A62()), 1, iVar0, Local_160.f_2912[iVar0], Local_160.f_2912[iVar0].f_1, 0);
		}
		else
		{
			Local_160.f_2912[iVar0].f_1 = (*uParam1)[iVar0];
			Local_160.f_2912[iVar0] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_160.f_2910 = 1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 54161;
		
		case 1:
			return 1172;
		
		case 2:
			return 45582;
		
		case 3:
			return 70801;
		
		case 4:
			return 5199;
		
		case 5:
			return 12994;
		
		case 6:
			return 4613;
		
		case 7:
			return 73734;
		
		case 8:
			return 8256;
		
		case 9:
			return 13078;
		
		default:
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2273775;
		
		case 1:
			return 2000000;
		
		case 2:
			return 1900000;
		
		case 3:
			return 1800000;
		
		case 4:
			return 1700000;
		
		case 5:
			return 1600000;
		
		case 6:
			return 1500000;
		
		case 7:
			return 1400000;
		
		case 8:
			return 1200000;
		
		case 9:
			return 1000000;
		
		default:
	}
	return 0;
}

void func_376(var uParam0, int iParam1)
{
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -734905987;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_416, 1))
		{
			unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_117(&(uParam0->f_1)))
	{
		func_115(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_117(&(uParam0->f_1)) && !func_114(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_98(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_98(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_70(unk_0xD803B885F5E47A62());
		if (iVar10 != -1)
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

int func_377(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_77(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_75(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_378()
{
	if (Global_1661998)
	{
		return 1;
	}
	if (func_387())
	{
		return 1;
	}
	if (func_386(unk_0xA30EC016B12C03E4()))
	{
		return 1;
	}
	if (!func_384())
	{
		return 1;
	}
	if (func_379())
	{
		return 1;
	}
	if (Local_160.f_2870 < 2)
	{
		return 0;
	}
	iVar0 = 225;
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 214;
	}
	if (unk_0x7FEE810EE9E768EB(2, iVar0))
	{
		if (Local_160.f_2906 == -2147483647)
		{
			Local_160.f_2906 = unk_0x2B6E0A53779D29EA() + 1000;
		}
		if (unk_0x2B6E0A53779D29EA() > Local_160.f_2906)
		{
			return 1;
		}
	}
	else if (Local_160.f_2906 != -2147483647)
	{
		Local_160.f_2906 = -2147483647;
	}
	if (func_377(unk_0xD803B885F5E47A62()))
	{
		if (func_379())
		{
			return 1;
		}
	}
	return 0;
}

int func_379()
{
	if (func_377(unk_0xD803B885F5E47A62()))
	{
		if (func_383(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_382(unk_0xD803B885F5E47A62(), 0) && func_380(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_380(int iParam0)
{
	return func_381(iParam0, 20);
}

bool func_381(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_382(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0)
{
	if (func_29(iParam0, 0))
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

int func_384()
{
	if (func_385(unk_0xA30EC016B12C03E4()))
	{
		return 1;
	}
	if (func_377(unk_0xA30EC016B12C03E4()))
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_77(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_75(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_78())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_536, 3);
	}
	return 0;
}

bool func_387()
{
	return Global_1676377.f_4418.f_1 != -1;
}

void func_388()
{
	wait(0);
}

void func_389(struct<21> Param0)
{
	Param0 = { Param0 };
	unk_0xB57F88F0123F4C38();
}

