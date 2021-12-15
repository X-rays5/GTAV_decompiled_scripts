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
	iLocal_37 = 1;
	vLocal_286 = { 0f, 0f, 0f };
	vLocal_289 = { 0f, 0f, 0f };
	fLocal_294 = 80f;
	fLocal_295 = 140f;
	fLocal_296 = 180f;
	iLocal_300 = 3;
	iLocal_304 = 1;
	iLocal_305 = 65;
	iLocal_306 = 49;
	iLocal_307 = 64;
	fLocal_311 = ((0,05f + 0,275f) - 0,01f);
	iLocal_332 = -1;
	sLocal_333 = "mp_bedmid";
	sLocal_334 = "f_getin_l_bighouse";
	sLocal_335 = "f_sleep_l_loop_bighouse";
	sLocal_336 = "f_getout_l_bighouse";
	vLocal_337 = { 262,9207f, -1002,98f, -100,0086f };
	vLocal_340 = { 261,0173f, -1002,98f, -98,0086f };
	fLocal_346 = 230,5943f;
	vLocal_347 = { 262,74f, -1004,344f, -99,575f };
	vLocal_350 = { 0f, 0f, -162,36f };
	if ((unk_0x2EBF608FFE6CA406(16) || func_82()) || Global_2537071.f_1852)
	{
		func_81();
	}
	if (func_78(9) || (func_77() && !func_76()))
	{
		func_81();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x37AD2AB54480FA6A(32, 0, -1);
		func_73(0, -1, 0);
		unk_0x256D93AFAE851A7A(0);
	}
	vLocal_343 = { ScriptParam_0.f_1[0] };
	vLocal_343 = { 261,8297f, -1002,928f, -99,0062f };
	while (true)
	{
		wait(0);
		if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (!unk_0x991B1F0980C62628() || func_72() == 5)) && !func_60())
		{
			if (unk_0x0EB28750412C3A5A(vLocal_343, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 3f)
			{
				switch (iLocal_325)
				{
					case 0:
						if (func_59())
						{
							iLocal_325 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							func_1();
						}
						break;
					
					case 2:
						break;
				}
			}
			else if (unk_0x0EB28750412C3A5A(vLocal_343, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) > (3f + 2f))
			{
				func_81();
			}
		}
		else
		{
			func_81();
		}
	}
}

void func_1()
{
	vVar0 = { 1,5f, 1,5f, 1,5f };
	switch (iLocal_326)
	{
		case 0:
			if (Global_1573337 == 8)
			{
				Global_1573337 = -1;
			}
			if (func_72() == 5)
			{
				iLocal_330 = unk_0xF66E5A439A080021(vLocal_347, vLocal_350, 2, false, true, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_330, sLocal_333, sLocal_335, 8f, -2f, 261, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_330);
				iLocal_326 = 7;
			}
			else if (func_53(8))
			{
				if ((((func_49(vLocal_343, vVar0) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(vLocal_343)) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_337, vLocal_340, 2f, 0, true, 0)) && func_48()) && !func_45(unk_0xD803B885F5E47A62()))
				{
					if (iLocal_332 == -1)
					{
						func_44(&iLocal_332, 3, "SA_BED_IN", 0, 0, 0, 0);
					}
					iLocal_326 = 1;
				}
			}
			break;
		
		case 1:
			if (func_43(1, 0, 1))
			{
				if (((((func_49(vLocal_343, vVar0) && func_53(8)) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(vLocal_343)) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_337, vLocal_340, 2f, 0, true, 0)) && func_48()) && !func_45(unk_0xD803B885F5E47A62()))
				{
					if (func_41(iLocal_332, 1))
					{
						func_39(&iLocal_332);
						func_38();
						Global_1573337 = 8;
						if (func_37("SA_BED_IN"))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x679C321F8CAA2CFA(vLocal_343, 3f, 0);
						func_27(unk_0xD803B885F5E47A62(), 0, 256, 0);
						iLocal_36 = 1;
						func_26();
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
						func_16(1, 1, 1, 0, 0, 0);
						vLocal_343 = { unk_0x1BB04F10296A1C5E(sLocal_333, sLocal_334, vLocal_347, vLocal_350, 0, 2) };
						vVar3 = { unk_0xEEB20D14BD38615E(sLocal_333, sLocal_334, vLocal_347, vLocal_350, 0, 2) };
						fLocal_346 = vVar3.z;
						unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vLocal_343, 1f, 5000, fLocal_346, 0,05f);
						if (unk_0x6C3F127AAF415E69() == 4 && unk_0xC844350D5D58C99A(iLocal_41))
						{
							unk_0x7F95823861548A93(unk_0x16F2683693E537C9(), func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_41, true)));
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 1063765679, false, 0, 0);
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 69, true);
						}
						iLocal_326 = 2;
					}
				}
				else
				{
					func_39(&iLocal_332);
					if (func_37("SA_BED_IN"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_326 = 0;
				}
			}
			break;
		
		case 2:
			func_14();
			func_11(1);
			unk_0x3FC8DBCC154CA56B();
			if (unk_0x6C3F127AAF415E69() == 4 && unk_0xC844350D5D58C99A(iLocal_41))
			{
				unk_0x7F95823861548A93(unk_0x16F2683693E537C9(), func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_41, true)));
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 69, true);
			}
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1)
			{
				iLocal_330 = unk_0xF66E5A439A080021(vLocal_347, vLocal_350, 2, false, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_330, sLocal_333, sLocal_334, 4f, -2f, 261, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_330);
				iLocal_326 = 3;
			}
			break;
		
		case 3:
			func_14();
			func_11(1);
			unk_0x3FC8DBCC154CA56B();
			iLocal_331 = unk_0xF958843510932FF6(iLocal_330);
			if (unk_0x69DF961355195C3C(iLocal_331))
			{
				iLocal_326 = 4;
			}
			break;
		
		case 4:
			func_14();
			func_11(1);
			unk_0x3FC8DBCC154CA56B();
			if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,9f)
			{
				iLocal_330 = unk_0xF66E5A439A080021(vLocal_347, vLocal_350, 2, false, true, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_330, sLocal_333, sLocal_335, 8f, -2f, 261, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_330);
				iLocal_326 = 5;
			}
			break;
		
		case 5:
			func_14();
			func_11(1);
			unk_0x3FC8DBCC154CA56B();
			iLocal_331 = unk_0xF958843510932FF6(iLocal_330);
			if (unk_0x69DF961355195C3C(iLocal_331))
			{
				unk_0xC90224D9E95E5E3A(iLocal_331, true);
				if (!func_37("SA_BED_OUT"))
				{
					func_10("SA_BED_OUT");
				}
				iLocal_326 = 6;
			}
			break;
		
		case 6:
			func_14();
			func_11(1);
			unk_0x3FC8DBCC154CA56B();
			if (!func_9(1))
			{
				if (!func_37("SA_BED_OUT"))
				{
					func_10("SA_BED_OUT");
				}
			}
			else if (func_37("SA_BED_OUT"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (!func_45(unk_0xD803B885F5E47A62()) && unk_0xBFC0798A6E3417F9(2, 222))
			{
				if (func_37("SA_BED_OUT"))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_8();
				iLocal_330 = unk_0xF66E5A439A080021(vLocal_347, vLocal_350, 2, false, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_330, sLocal_333, sLocal_336, 2f, -2f, 261, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_330);
				iLocal_326 = 8;
			}
			break;
		
		case 7:
			if (((unk_0xBD307E66C0669BFC(unk_0xFBD08BECC9B87937(vLocal_343)) && !func_7()) && !func_5()) && Global_1312467.f_8 == 0)
			{
				bLocal_328 = true;
				iLocal_330 = unk_0xF66E5A439A080021(vLocal_347, vLocal_350, 2, false, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iLocal_330, sLocal_333, sLocal_336, 1000f, -2f, 261, 0, 1148846080, 0);
				unk_0x914E6894744915F8(iLocal_330);
				iLocal_326 = 8;
			}
			break;
		
		case 8:
			if (!bLocal_328)
			{
				func_14();
				func_11(1);
				unk_0x3FC8DBCC154CA56B();
			}
			iLocal_331 = unk_0xF958843510932FF6(iLocal_330);
			if (unk_0x69DF961355195C3C(iLocal_331))
			{
				func_4(5);
				iLocal_326 = 9;
			}
			break;
		
		case 9:
			func_14();
			unk_0x3FC8DBCC154CA56B();
			func_3(0);
			if (!unk_0x69DF961355195C3C(iLocal_331))
			{
				func_2();
				if (iLocal_36)
				{
					func_27(unk_0xD803B885F5E47A62(), 1, 0, 0);
					iLocal_36 = 0;
				}
				func_16(0, 1, 1, 0, 0, 0);
				iLocal_326 = 0;
				Global_1573337 = -1;
			}
			break;
	}
}

void func_2()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_3(int iParam0)
{
	if (!Global_2409287 == iParam0)
	{
		Global_2409287.f_1 = 0;
	}
	Global_2409287 = iParam0;
	if (unk_0x8CD06866876216F2())
	{
		Global_2409287.f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_4(int iParam0)
{
	if (iParam0 == func_72())
	{
		Global_2409287.f_19 = 1;
	}
}

int func_5()
{
	if (func_6() == 1 || func_6() == 4)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	return Global_1312467.f_18;
}

int func_7()
{
	if (func_6() == 3 || func_6() == 2)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_353 == 1)
		{
			unk_0xA68C4874B560B1C0();
			iLocal_353 = 0;
		}
	}
}

bool func_9(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_10(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		func_13();
	}
	func_12(4, -1);
	func_12(6, -1);
	func_12(7, -1);
	func_12(3, -1);
	func_12(1, -1);
	func_12(2, -1);
	func_12(11, -1);
	func_12(13, -1);
	func_12(14, -1);
	func_12(16, -1);
}

void func_12(int iParam0, int iParam1)
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

void func_13()
{
	Global_2537071.f_4532 = 0;
}

void func_14()
{
	Global_22211.f_6 = 1;
}

float func_15(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_16(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_25(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_24())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_23(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_25(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_23(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_21(unk_0xD803B885F5E47A62())) && !func_18(unk_0xD803B885F5E47A62(), 0)) && !func_17()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_21(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_18(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312745;
}

int func_21(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_23(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_24()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)
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

void func_26()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_353 == 0)
		{
			unk_0x6787351639998696("SAFEHOUSE ACTIVITY");
			iLocal_353 = 1;
		}
	}
}

void func_27(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_36())
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
		if (!func_35())
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
				else if (bVar14 || (!func_18(unk_0xD803B885F5E47A62(), 0) && !func_22()))
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
					func_32(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_31(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_30();
					func_29();
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
				if (!func_31(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_28(Global_4456448.f_232883))
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

bool func_28(int iParam0)
{
	return iParam0 == 17;
}

void func_29()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_30()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_31(int iParam0)
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

void func_32(bool bParam0, int iParam1, int iParam2)
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
				func_34();
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
		if (func_18(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_33(-2008016205, bParam0);
	}
}

void func_33(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_34()
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

int func_35()
{
	if (func_6() == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_37(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_38()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_39(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
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

int func_40(int iParam0)
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

int func_41(int iParam0, bool bParam1)
{
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_42(0))
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

int func_42(int iParam0)
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

int func_43(bool bParam0, bool bParam1, bool bParam2)
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

void func_44(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_39(iParam0);
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

bool func_45(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_47(9)][iParam0], func_46(9));
}

int func_46(int iParam0)
{
	return (iParam0 % 32);
}

int func_47(int iParam0)
{
	return (iParam0 / 32);
}

int func_48()
{
	iVar9 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, -1);
	if (iVar9 > 0)
	{
		iVar10 = 0;
		while (iVar10 <= 7)
		{
			if (!unk_0xEB6A8945D1AC98A1(uVar0[iVar10]))
			{
				if (unk_0x3D1053F9EB43B7AD(uVar0[iVar10], vLocal_337, vLocal_340, 2f, 0, true, 0))
				{
					return 0;
				}
			}
			iVar10++;
		}
	}
	return 1;
}

int func_49(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_42(0)) && !func_52())
				{
					if ((Global_95672 && Global_95673) || func_51())
					{
						return 0;
					}
					if (func_50(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_51()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_52()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0xEB6A8945D1AC98A1(uVar2[iVar1]))
		{
			if (bLocal_35)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == 225514697)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == -1692214353)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((((((unk_0xEAE0D21A50E6C7F4(Global_1573336, iParam0) || Global_1573337 != -1) || func_58()) || unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62())) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) || func_57()) || func_54(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	if (func_55())
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	if (func_56() != -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_56()
{
	return Global_2460709;
}

int func_57()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_58()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

int func_59()
{
	unk_0x3F423BF5B8125A50(sLocal_333);
	if (!unk_0xB4AE0788C1587752(sLocal_333))
	{
		return 0;
	}
	iLocal_327 = 1;
	return 1;
}

int func_60()
{
	func_68(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_67())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (func_65(159))
	{
		if (!func_64())
		{
			return 1;
		}
	}
	if (func_65(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_61() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_61()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	switch (func_63())
	{
		case 0:
			return func_62();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_62()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_63()
{
	return Global_30768;
}

bool func_64()
{
	return Global_2450632.f_598;
}

int func_65(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return Global_2460680;
}

bool func_67()
{
	return Global_2450632.f_593;
}

void func_68(var uParam0)
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
					func_69(iVar0);
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

void func_69(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_71(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_70(iVar4, &bVar5))
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

int func_70(int iParam0, var uParam1)
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

int func_71(int iParam0, bool bParam1, bool bParam2)
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

int func_72()
{
	return Global_2409287;
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_75();
			}
			else
			{
				return 0;
			}
		}
		if (!func_74())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_75();
					}
					else
					{
						return 0;
					}
				}
				if (func_67())
				{
					if (!bParam2)
					{
						func_75();
					}
					else
					{
						return 0;
					}
				}
				if (func_65(157))
				{
					if (!bParam2)
					{
						func_75();
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
					func_75();
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
				func_75();
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
			func_75();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_74()
{
	return Global_1312854;
}

void func_75()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_76()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_78(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_79(int iParam0)
{
	return func_80(iParam0, Global_41431);
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_81()
{
	if (iLocal_332 > -1)
	{
		func_39(&iLocal_332);
	}
	if (func_37("SA_BED_IN") || func_37("SA_BED_OUT"))
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0xBFBFE6D9F51994DB();
	if (unk_0x9F4FE516EAACCFC5(iLocal_329))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_329, 0);
	}
	if (iLocal_327)
	{
		unk_0x8D17794CE3273D70(sLocal_333);
	}
	if (iLocal_36 && !func_21(unk_0xD803B885F5E47A62()))
	{
		func_27(unk_0xD803B885F5E47A62(), 1, 0, 0);
	}
	func_8();
	func_75();
}

int func_82()
{
	if (func_83())
	{
		return 0;
	}
	return 1;
}

bool func_83()
{
	return Global_2391056 == 0;
}

