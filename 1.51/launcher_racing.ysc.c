void __EntryFunction__()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0,001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_93 = 1;
	bLocal_102 = true;
	iLocal_183 = -1995326987;
	iLocal_193 = 1;
	vLocal_201 = { 0f, 0f, 0f };
	vLocal_204 = { 1f, 1f, 1f };
	vLocal_207 = { 0f, 0f, 0f };
	vLocal_210 = { 0f, 0f, 0f };
	fLocal_213 = 0f;
	unk_0xDF8BDD00CF1D4043(1);
	vLocal_89 = { ScriptParam_0.f_1[0] };
	if (unk_0x2EBF608FFE6CA406(83))
	{
		func_216(0);
	}
	func_213();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_212(0, 8))
			{
				func_216(0);
			}
			if (!func_211(Local_83))
			{
				func_216(0);
			}
			break;
		
		case 3:
			if (!func_212(0, 7))
			{
				func_216(0);
			}
			break;
		
		case 0:
			func_216(0);
			break;
	}
	func_205();
	if (!func_181())
	{
		func_216(0);
	}
	func_175();
	while (true)
	{
		func_172(&uLocal_216);
		if (func_181())
		{
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_163();
						func_132();
						break;
					
					case 2:
						func_66();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_216(0);
			}
		}
		else
		{
			func_216(0);
		}
		wait(0);
	}
}

void func_1()
{
	if (!bLocal_100)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(vLocal_89);
	func_5();
	Global_1312348 = 1;
	Global_1312348.f_1 = Local_83;
	StringCopy(&(Global_1312348.f_2), func_4(), 24);
	StringCopy(&(Global_1312348.f_8), func_3(Local_83), 32);
	Global_1312348.f_16 = { vLocal_89 };
	Global_1312880 = 1;
	func_216(1);
}

char* func_3(int iParam0)
{
	if (unk_0xBA301E03A078FA59())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xA3F916BCE430ED26())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x33A494591F2C1975())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xDC30EF462887322E())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x0EFF6B4415DAF4A1())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	if (unk_0xBA301E03A078FA59())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xA3F916BCE430ED26())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x33A494591F2C1975())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xDC30EF462887322E())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x0EFF6B4415DAF4A1())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0x5D96D8530B3D0904(&Global_1312425, 0);
}

void func_6(vector3 vParam0)
{
	Global_1312425.f_6 = { vParam0 };
}

void func_7(int iParam0)
{
	Global_1312425.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312425.f_1 = iParam0;
}

void func_9()
{
	Local_83.f_2 = -1;
	if (func_65(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
		{
			unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0);
		}
	}
	while (!func_59())
	{
		wait(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_16(func_53(), 1, Local_83.f_3);
		iVar0 = unk_0x1C0640BA9A7327B3() + 1500;
		iVar1 = unk_0x728870EB733D12A1();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x1C0640BA9A7327B3() < iVar0)
			{
				wait(0);
			}
		}
		iVar2 = unk_0xA30EC016B12C03E4();
		if (unk_0xE1DBBD6CE209517C(iVar2))
		{
			unk_0x98E4DC66A651C9FA(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x92DCE5C81176D2B4("mission_Race");
		while (!unk_0x1FBF08B001C4788A("mission_Race"))
		{
			unk_0x92DCE5C81176D2B4("mission_Race");
			wait(0);
		}
		start_new_script_with_args("mission_Race", &Local_83, 6, 35000);
	}
	unk_0x5E8C29AE121DF1C7("mission_Race");
	func_216(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(iParam0);
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

void func_13(int iParam0)
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

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (func_52(iParam0) == 3)
	{
		return 0;
	}
	if (func_52(iParam0) == 4)
	{
		return 0;
	}
	return func_17(func_52(iParam0), 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_51();
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
					func_50(99, 1);
					func_49(-656546900, iParam3);
					break;
				
				case 1:
					func_49(-2098183071, iParam3);
					break;
				
				case 2:
					func_49(1578119842, iParam3);
					break;
			}
			func_33(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_28(5))
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
							func_49(-1190521599, iParam3);
							break;
						
						case 1:
							func_49(490143716, iParam3);
							break;
						
						case 2:
							func_49(121069433, iParam3);
							break;
					}
					if (func_28(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_49(219506691, iParam3);
							break;
						
						case 1:
							func_49(1871505786, iParam3);
							break;
						
						case 2:
							func_49(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_49(27639974, iParam3);
							break;
						
						case 1:
							func_49(422258364, iParam3);
							break;
						
						case 2:
							func_49(316202960, iParam3);
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
							func_49(1806738963, iParam3);
							break;
						
						case 1:
							func_49(1576781520, iParam3);
							break;
						
						case 2:
							func_49(671882196, iParam3);
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
									func_49(408653638, iParam3);
									break;
								
								case 1:
									func_49(-424799277, iParam3);
									break;
								
								case 2:
									func_49(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_49(2038531975, iParam3);
									break;
								
								case 1:
									func_49(-572903575, iParam3);
									break;
								
								case 2:
									func_49(-953947924, iParam3);
									break;
							}
							if (func_28(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_49(-445823242, iParam3);
									break;
								
								case 1:
									func_49(-1386757215, iParam3);
									break;
								
								case 2:
									func_49(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_49(-1744069936, iParam3);
									break;
								
								case 1:
									func_49(799609312, iParam3);
									break;
								
								case 2:
									func_49(181688102, iParam3);
									break;
							}
							func_27(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_50(95, iParam3);
					break;
				
				case 1:
					func_50(97, iParam3);
					break;
				
				case 2:
					func_50(96, iParam3);
					break;
			}
			func_50(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
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
					func_49(-330339780, iParam3);
					break;
				
				case 1:
					func_49(1697564429, iParam3);
					break;
				
				case 2:
					func_49(1674823841, iParam3);
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
	func_19(iParam0);
	if (Global_41431 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)
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

void func_19(int iParam0)
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

void func_20(int iParam0)
{
	if (iParam0 == 8)
	{
		func_26(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_26(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_26(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_26(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_23(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_23(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_23(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_23(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_23(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_23(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_22()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_22()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_21(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)
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

int func_22()
{
	iVar0 = 0;
	return iVar0;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_24(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_24(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_25();
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

void func_27(int iParam0)
{
	func_50(93, iParam0);
	func_50(29, iParam0);
	func_50(30, iParam0);
}

bool func_28(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_30(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_30(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_30(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_30(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_29(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_29(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_29(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_29(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_29(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_29(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_22()].f_6174.f_10, iParam0);
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_24(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_32(iParam0, iParam1);
	uVar2 = func_31(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_33(bool bParam0)
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
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_47(14) && !func_46(iParam0))
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
	if (func_45(&Global_4270065))
	{
		if (func_43(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4270065, iParam0))
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

int func_36(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4270064 - 0,5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
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

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
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

bool func_47(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_48(int iParam0, int iParam1)
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

void func_49(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_50(int iParam0, int iParam1)
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

void func_51()
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

int func_52(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_53()
{
	func_54();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_54()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_57(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_56(unk_0x16F2683693E537C9());
			if (func_55(iVar0) && (!func_47(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_55(Global_111638.f_2358.f_539.f_4321))
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_58(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_58(int iParam0)
{
	return Global_1798[iParam0];
}

int func_59()
{
	iVar0 = func_60(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_64(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_62(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_61(uParam0, iParam4);
		}
	}
	return 2;
}

void func_61(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_62(int iParam0)
{
	return func_63(iParam0, Global_41431);
}

int func_63(int iParam0, int iParam1)
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

int func_64(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	switch (iLocal_96)
	{
		case 0:
			if (func_130(0, -1, 0))
			{
				unk_0xA37A90C62806D848(1);
				func_122();
				unk_0xBEF52C1D400C0A44(0);
				iLocal_101 = 1;
				bLocal_99 = false;
				bLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_79())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			iVar0 = unk_0xA30EC016B12C03E4();
			unk_0xBC03DF6093E8E71F(iVar0, 0);
			unk_0x98E4DC66A651C9FA(iVar0, true, 0);
			func_70(0, 1, 1, 0, 0, 0);
			func_67(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0xBEF52C1D400C0A44(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1)
{
	if (!func_69(&iVar0, 0, iParam1))
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
		func_68(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_68(int iParam0)
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

int func_69(var uParam0, bool bParam1, int iParam2)
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

void func_70(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_78(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_77())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_76(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_78(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_76(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_74(unk_0xD803B885F5E47A62())) && !func_72(unk_0xD803B885F5E47A62(), 0)) && !func_71()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_74(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_74(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
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

bool func_75()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_76(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_77()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
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

int func_79()
{
	func_121(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x558EC149EB2BC0A2(2, 201);
	unk_0x558EC149EB2BC0A2(2, 202);
	unk_0x558EC149EB2BC0A2(2, 188);
	unk_0x558EC149EB2BC0A2(2, 187);
	if (iLocal_98 != 0)
	{
		if (timera() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_98 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0xBFC0798A6E3417F9(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xBFC0798A6E3417F9(2, 187));
	bVar6 = unk_0xBFC0798A6E3417F9(2, 201);
	bVar7 = unk_0xBFC0798A6E3417F9(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_97 == 1)
		{
			bLocal_100 = true;
		}
		else
		{
			bLocal_100 = false;
		}
		bLocal_99 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_194 = 0;
		bLocal_99 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_97 == 0)
			{
				iLocal_97 = 1;
			}
			else if (iLocal_97 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_97 == 1)
			{
				iLocal_97 = 0;
			}
			else if (iLocal_97 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				settimera(0);
				iLocal_98 = 1;
			}
			func_120(iLocal_97, 1, 1);
		}
	}
	func_80(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_80(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_117(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_115(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_114())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_114())
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
			func_110(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_109(29), 64);
					StringCopy(&cVar81, func_106(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_105(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_105(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_104();
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
					func_104();
					func_102((((Global_22347 + fParam5) - 0,00390625f) - func_103("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_104();
						func_102((((Global_22347 + fParam5) - 0,00390625f) - func_103("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_105(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_115(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_101(fVar42);
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
				func_105(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_101(fVar42);
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
					func_115(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_109(Global_22350.f_4768), func_106(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
					func_115(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_101(fVar42);
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
				func_105(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_101(fVar42);
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
					func_115(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_109(Global_4268421.f_67), func_106(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
			func_95(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_92(bVar32);
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
												if (func_115(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_115(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[(iVar22 + iVar28)]), func_106(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[(iVar22 + iVar28)]), func_106(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
											if (func_91() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_93(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_92(bVar32);
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
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_90((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_92(bVar32);
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
										if (func_115(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_89((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_115(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_115(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_109(Global_22350.f_4433[iVar22]), func_106(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_88(Global_22350.f_4433[iVar22])), (fVar37 * func_88(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
								if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_82(0);
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
		func_81(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_81(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_86(0))
		{
			func_83(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_83(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
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
	if (!func_77())
	{
		Global_19486.f_1 = 3;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0))
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

bool func_85()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_86(int iParam0)
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

bool func_87()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_88(int iParam0)
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

void func_89(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_91()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_92(bool bParam0)
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

void func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_94(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_94(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_117(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_72(unk_0xD803B885F5E47A62(), 0))
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
					func_97(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_97(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_96(&(Global_22350.f_4964[iVar1]));
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
				func_97(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_96(&(Global_4268421.f_16));
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

void func_96(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_97(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_98()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_99())
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

int func_99()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_101(float fParam0)
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

void func_102(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_103(char* sParam0, int iParam1, int iParam2)
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
	func_104();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_104()
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

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_106(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_108(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_107(&uVar3);
			}
		}
		else
		{
			return func_107(&(Global_22350.f_7029[iParam0]));
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

var func_107(var uParam0)
{
	return uParam0;
}

struct<13> func_108(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_109(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_108(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_113(Global_22350.f_5218, 1);
	}
	else
	{
		func_113(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_112(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_115(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_111(&(Global_22350.f_73[Global_22350.f_5220]));
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

float func_111(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_112(char* sParam0)
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
	func_93(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_113(int iParam0, bool bParam1)
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

int func_114()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar16, func_106(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_114())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_114())
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
		vVar37.x = (vVar37.x * (func_116(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_116(iParam0) / fVar34));
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

float func_116(int iParam0)
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

int func_117(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_119(8, -1) && func_118() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_118()
{
	return Global_1312812;
}

bool func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, bool bParam1, int iParam2)
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

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_122()
{
	func_129(0, 0);
	func_128(1, 0, 0, 0, 0);
	func_127(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_126("SEA_MENU");
	}
	else
	{
		func_126("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_125(201, "ITEM_SELECT", -1);
	func_125(202, "ITEM_EXIT", -1);
	func_124(11, "ITEM_SCROLL", -1);
	func_123(0);
	func_120(0, 1, 1);
	iLocal_97 = 0;
}

void func_123(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_124(int iParam0, char* sParam1, int iParam2)
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

void func_125(int iParam0, char* sParam1, int iParam2)
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

void func_126(char* sParam0)
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

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_129(bool bParam0, bool bParam1)
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

bool func_130(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_69(&iVar0, 1, iParam1))
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
	bVar2 = func_131(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_131(var uParam0)
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

void func_132()
{
	if (func_162())
	{
		if (func_145())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_143(iVar0);
			if (func_65(iLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0xFB131B855F2FD560(iLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -8f);
					}
					func_134(iVar0);
				}
			}
			unk_0x558EC149EB2BC0A2(0, 51);
			if (unk_0xB9132A06AE472728(0, 51))
			{
				iLocal_194 = 1;
				unk_0xA37A90C62806D848(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0x29D5132FBDCF2B1E(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_133();
		if (!iLocal_93)
		{
			unk_0x29D5132FBDCF2B1E(0);
			iLocal_93 = 1;
		}
	}
}

void func_133()
{
	if (iLocal_92 && unk_0x1C0640BA9A7327B3() > iLocal_95)
	{
		unk_0xA37A90C62806D848(1);
		iLocal_92 = 0;
	}
}

void func_134(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iLocal_103[iParam0], 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (vdist2(unk_0x68F4C0EC296D3901(iLocal_103[iParam0], true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0xDD353D0E9C789D0E(&uVar0);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x75ABDC5F81978924(uVar0);
				unk_0x78ADC381772E3D54(iLocal_103[iParam0], uVar0);
				unk_0xF82EA857DA10E0CD(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0xD1960163A3042274(iLocal_103[iParam0], 242628503) != 1 || unk_0x7069CC4DE1EA3FAA(iLocal_103[iParam0], unk_0x16F2683693E537C9(), 20f))
				{
					unk_0xF96A174EE26D7588(iLocal_103[iParam0], unk_0x16F2683693E537C9(), -1);
					if (!iLocal_197)
					{
						func_141(iLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_141(iLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x65636D4556D82155(iLocal_103[iParam0]))
				{
					func_139(&iLocal_198);
					unk_0xC6EB89C59F2AF6B8(iLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0x68F4C0EC296D3901(iLocal_103[iParam0], true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_135(&iLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_135(&iLocal_198) >= 10f && !iLocal_197)
				{
					iLocal_197 = 1;
					iLocal_195 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_135(int iParam0)
{
	if (func_138(iParam0))
	{
		if (func_137(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_136(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_136(bool bParam0)
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

bool func_137(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_138(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_139(int iParam0)
{
	func_140(iParam0, 0f);
}

void func_140(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_136(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_141(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_142(iParam3), 0);
}

int func_142(int iParam0)
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

void func_143(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !func_144())
	{
		if (func_65(iLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 20f)
			{
				unk_0xC0B0B9E466C0ED17(iLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_144()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_161())
		{
			return 0;
		}
		if (func_160(func_53()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_157("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_157("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			func_156(&iLocal_0);
			iLocal_0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (!func_151())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
				return 0;
			}
			else if ((unk_0x7F6DC62EA9922664(iLocal_0) <= 200 || unk_0x4E861BC5B1EDA7BD(iLocal_0)) || func_150())
			{
				func_149("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
				return 0;
			}
			else if (unk_0xA30B8362589C124A(iLocal_0, -1, 0) != unk_0x16F2683693E537C9())
			{
				func_146();
				return 0;
			}
			else
			{
				if (func_86(0) || unk_0x8A22C4C08282BF26(1779901043) > 0)
				{
					func_133();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_157("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_157("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_149("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		else
		{
			func_156(&iLocal_0);
			func_146();
			return 0;
		}
	}
	return 0;
}

void func_146()
{
	if (Local_83.f_1 == 3)
	{
		if (func_14(iLocal_111))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_148(sVar0))
		{
			func_147(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_148("STREET_NA_BIKE"))
		{
			func_147("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
		}
	}
	else if (!func_148("STREET_NA_CAR"))
	{
		func_147("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0x1C0640BA9A7327B3() + 1000;
	}
}

void func_147(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_148(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_149(char* sParam0)
{
	if (!func_148(sParam0))
	{
		func_147(sParam0);
	}
}

int func_150()
{
	iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
	if (unk_0x7D8B2A8F9EA82DB7(iVar0))
	{
		if (unk_0x464B3D84B739AE72(iLocal_0, 6, 0) || unk_0x464B3D84B739AE72(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x8E39AC3C76C8AA58(iVar0))
	{
		if (((unk_0x464B3D84B739AE72(iLocal_0, 0, 0) || unk_0x464B3D84B739AE72(iLocal_0, 1, 0)) || unk_0x464B3D84B739AE72(iLocal_0, 4, 0)) || unk_0x464B3D84B739AE72(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_155();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_153();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_152())
			{
				if (func_14(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_149(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_152()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (iVar0 == -1030275036 || iVar0 == -616331036)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (func_154(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == -1973172295 || iVar0 == -1536924937) || iVar0 == -1779120616) || iVar0 == 1127131465) || iVar0 == -1647941228) || iVar0 == 469291905) || iVar0 == -1683328900) || iVar0 == 1922257928) || iVar0 == 741586030) || iVar0 == 1171614426) || iVar0 == 1938952078)
			{
				return 1;
			}
			if (((unk_0x7D8B2A8F9EA82DB7(iVar0) || unk_0xA7082C42B8809BF2(iVar0)) || unk_0xAFB8495D36825275(iVar0)) || unk_0xC41A9202669A24C4(iVar0))
			{
				return 2;
			}
			iVar2[0] = 1171614426;
			iVar2[1] = 2053223216;
			iVar2[2] = 850991848;
			iVar2[3] = -713569950;
			iVar2[4] = 1938952078;
			iVar2[5] = 1491375716;
			iVar2[6] = 904750859;
			iVar2[7] = -1050465301;
			iVar2[8] = 569305213;
			iVar2[9] = -2137348917;
			iVar2[10] = 1783355638;
			iVar2[11] = 1747439474;
			iVar2[12] = 400514754;
			iVar2[13] = -1660661558;
			iVar2[14] = 353883353;
			iVar2[15] = 1560980623;
			iVar2[16] = 121658888;
			iVar2[17] = 837858166;
			iVar2[18] = 1033245328;
			iVar2[19] = 0;
			iVar2[20] = -845979911;
			iVar2[21] = 1917016601;
			iVar2[22] = -1346687836;
			iVar2[23] = -119658072;
			iVar2[24] = -810318068;
			iVar2[25] = -1043459709;
			iVar2[26] = 788045382;
			iVar2[27] = 1560980623;
			iVar2[28] = 1951180813;
			iVar2[29] = -823509173;
			iVar2[30] = 627094268;
			iVar2[31] = -2128233223;
			iVar2[32] = -48031959;
			iVar2[33] = -1435919434;
			iVar2[34] = -233098306;
			iVar2[35] = 1886712733;
			iVar2[36] = 1147287684;
			iVar2[37] = -537896628;
			iVar2[38] = 1876516712;
			iVar2[39] = 48339065;
			iVar2[40] = 1941029835;
			iVar2[41] = -1323100960;
			iVar2[42] = -442313018;
			iVar2[43] = 1641462412;
			iVar2[44] = -2076478498;
			iVar2[45] = 516990260;
			iVar2[46] = 887537515;
			iVar2[47] = 2132890591;
			iVar2[48] = -667151410;
			iVar2[49] = 1770332643;
			iVar2[50] = -884690486;
			iVar2[51] = -2130482718;
			iVar2[52] = -1745203402;
			iVar2[53] = 444583674;
			iVar2[54] = 1518533038;
			iVar2[55] = -120287622;
			iVar2[56] = -1098802077;
			iVar2[57] = -784816453;
			iVar2[58] = 782665360;
			iVar2[59] = -1006919392;
			iVar2[60] = 2112052861;
			iVar2[61] = -947761570;
			iVar2[62] = 475220373;
			iVar2[63] = -1705304628;
			iVar2[64] = -1700801569;
			iVar2[65] = -1207431159;
			iVar2[66] = 1074326203;
			iVar2[67] = 1283517198;
			iVar2[68] = -2072933068;
			iVar2[69] = -2007026063;
			iVar2[70] = -1205689942;
			iVar2[71] = 0;
			iVar2[72] = -214455498;
			iVar2[73] = 1353720154;
			iVar2[74] = -1987130134;
			iVar2[75] = -907477130;
			iVar2[76] = -1743316013;
			iVar2[77] = 893081117;
			iVar2[78] = 1162065741;
			iVar2[79] = 728614474;
			iVar2[80] = 0;
			iVar2[81] = -150975354;
			iVar2[82] = -613725916;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1779120616:
		case -1536924937:
		case -1683328900:
		case 1922257928:
			return 1;
			break;
	}
	return 0;
}

int func_155()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (iVar0 == -34623805)
			{
				return 1;
			}
			if (unk_0x7D8B2A8F9EA82DB7(iVar0) && !unk_0xAD09C9A4B56FA133(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_156(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_157(char* sParam0, int iParam1)
{
	if (!func_159(sParam0, iParam1))
	{
		func_158(sParam0, iParam1);
	}
}

void func_158(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_159(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x6FB46C25CCB7E6D5(52740893, &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6FB46C25CCB7E6D5(1153264002, &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6FB46C25CCB7E6D5(-1921710979, &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_161()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (func_15(iVar0))
			{
				if (unk_0xE934758D273C899A(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0x70EED0761B82965E(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_162()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_89, true) < IntToFloat(iVar0) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_163()
{
	if (func_168(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_111))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_182) && unk_0xB87F6CF6E5628C67(iLocal_182))
					{
						iLocal_111 = unk_0x122AAB0B1D6F55AD(iLocal_182, vLocal_113, fLocal_116, 1, 1, 0);
						if (unk_0x3FC59DD18F049D6E(1) && unk_0x5C45F6B29A99E47E())
						{
							iLocal_112 = unk_0x0268AF082D60F2AE(iLocal_111, 1);
							unk_0xD1F0F33C375B8446(iLocal_112, iLocal_111, 1, 99999999);
							unk_0x11AD11297DC58CC7(iLocal_112, true);
							unk_0xFADC0A217229F6B5(iLocal_112, true);
						}
						unk_0xB9FD7450C0DAB575(iLocal_111, 1084227584);
						unk_0x56FDC9ADE35F7DB0(iLocal_111, true, 1, 0);
						unk_0x3E5CE368CD085FFA(iLocal_111, 1);
						unk_0x0218D9089D75EFEE(iLocal_111, 1);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(10), 1);
						unk_0x3CBF2C83A68C1611(iLocal_111, unk_0xE4B65163E4129619(10));
						unk_0x316958DDB94DF3FC(iLocal_111, 0);
						unk_0x71199B01895C6202(iLocal_182);
						wait(0);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_117))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_183))
					{
						iLocal_117 = unk_0x122AAB0B1D6F55AD(iLocal_183, vLocal_118, fLocal_121, 1, 1, 0);
						unk_0x56FDC9ADE35F7DB0(iLocal_117, false, 1, 0);
						unk_0x3E5CE368CD085FFA(iLocal_117, 1);
						unk_0x0218D9089D75EFEE(iLocal_117, 1);
						unk_0xB9FD7450C0DAB575(iLocal_117, 1084227584);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(10), 1);
						unk_0x3CBF2C83A68C1611(iLocal_117, unk_0xE4B65163E4129619(10));
						unk_0x316958DDB94DF3FC(iLocal_117, 0);
						unk_0x71199B01895C6202(iLocal_183);
						wait(0);
					}
				}
				if (unk_0xB4AE0788C1587752(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0xC844350D5D58C99A(iLocal_103[iVar0]))
							{
								if (!unk_0x437347B10A200C4B(iLocal_103[iVar0], 0) && !func_164(iLocal_103[iVar0], -2017877118))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0xFADC0A217229F6B5(iLocal_103[iVar0], true);
								}
							}
							else if (unk_0xB87F6CF6E5628C67(iLocal_174[iVar0]))
							{
								iLocal_103[iVar0] = unk_0x36F2404464202779(25, iLocal_174[iVar0], vLocal_136[iVar0], fLocal_158[iVar0], 1, true);
								unk_0x08841CDB215AE18F(iLocal_103[iVar0], vLocal_136[iVar0], 0, 0, 1);
								unk_0x11AD11297DC58CC7(iLocal_103[iVar0], true);
								unk_0xC6EB89C59F2AF6B8(iLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0xFADC0A217229F6B5(iLocal_103[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_65(iLocal_103[0]) && func_65(iLocal_103[1])) && func_65(iLocal_103[2])) && func_65(iLocal_103[3])) && func_65(iLocal_103[4])) && func_65(iLocal_103[5])) && func_65(iLocal_103[6])) && func_14(iLocal_111)) && func_14(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0x71199B01895C6202(iLocal_174[iVar0]);
								iVar0++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 1)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_111))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_182))
					{
						iLocal_111 = unk_0x122AAB0B1D6F55AD(iLocal_182, vLocal_113, fLocal_116, 1, 1, 0);
						if (unk_0x3FC59DD18F049D6E(0) && unk_0x1E3C51C9DE5100B7())
						{
							iLocal_112 = unk_0x0268AF082D60F2AE(iLocal_111, 1);
							unk_0xD1F0F33C375B8446(iLocal_112, iLocal_111, 1, 99999999);
							unk_0x11AD11297DC58CC7(iLocal_112, true);
							unk_0xFADC0A217229F6B5(iLocal_112, true);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_111, true, 1, 0);
						unk_0x3E5CE368CD085FFA(iLocal_111, 1);
						unk_0x0218D9089D75EFEE(iLocal_111, 1);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(10), 1);
						unk_0x3CBF2C83A68C1611(iLocal_111, unk_0xE4B65163E4129619(10));
						unk_0x316958DDB94DF3FC(iLocal_111, 0);
						unk_0x71199B01895C6202(iLocal_182);
					}
				}
				if (unk_0xB4AE0788C1587752(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0xC844350D5D58C99A(iLocal_103[iVar1]))
							{
								if (!unk_0x437347B10A200C4B(iLocal_103[iVar1], 0) && !func_164(iLocal_103[iVar1], -2017877118))
								{
									unk_0x08841CDB215AE18F(iLocal_103[iVar1], vLocal_136[iVar1], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xC6EB89C59F2AF6B8(iLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC6EB89C59F2AF6B8(iLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0,5f, 0, 0, 0);
									}
									unk_0xFADC0A217229F6B5(iLocal_103[iVar1], true);
								}
							}
							else if (unk_0xB87F6CF6E5628C67(iLocal_174[iVar1]))
							{
								iLocal_103[iVar1] = unk_0x36F2404464202779(25, iLocal_174[iVar1], vLocal_136[iVar1], fLocal_158[iVar1], 1, true);
								unk_0x11AD11297DC58CC7(iLocal_103[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_65(iLocal_103[0]) && func_65(iLocal_103[1])) && func_65(iLocal_103[2])) && func_65(iLocal_103[3])) && func_65(iLocal_103[4]))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_103[4], unk_0x16F2683693E537C9(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0x71199B01895C6202(iLocal_174[iVar1]);
								iVar1++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 3)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_111))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_182))
					{
						iLocal_111 = unk_0x122AAB0B1D6F55AD(iLocal_182, vLocal_113, fLocal_116, 1, 1, 0);
						unk_0xB9FD7450C0DAB575(iLocal_111, 1084227584);
						unk_0x657C23FBB4F6EEA5(iLocal_111, 0f);
						unk_0x104763F18983A32D(iLocal_111, 0);
						unk_0xE52EED22AB2D2450(iLocal_111, 0);
						if (unk_0x6AC695D09170F27D(iLocal_111))
						{
							unk_0xB078AFA7242F1F7B(iLocal_111, true);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_111, false, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xC844350D5D58C99A(iLocal_166[iVar2]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_170[iVar2]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_170[iVar2]) && func_14(iLocal_166[iVar2]))
							{
								if (unk_0xBBA8A868118C90ED(iLocal_166[iVar2], -1, 0))
								{
									unk_0xF821F915BC24D246(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_166[iVar2]) && unk_0xB87F6CF6E5628C67(767028979))
						{
							iLocal_170[iVar2] = unk_0x852A19533F896693(iLocal_166[iVar2], 25, 767028979, -1, 1, true);
							unk_0xFCCF7611216AE801(iLocal_170[iVar2], 0);
							unk_0x11AD11297DC58CC7(iLocal_170[iVar2], true);
						}
					}
					else if (unk_0xB87F6CF6E5628C67(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0x122AAB0B1D6F55AD(iLocal_182, vLocal_122[iVar2], fLocal_132[iVar2], 1, 1, 0);
						unk_0xB9FD7450C0DAB575(iLocal_166[iVar2], 1084227584);
						unk_0x657C23FBB4F6EEA5(iLocal_166[iVar2], 0f);
						unk_0x104763F18983A32D(iLocal_166[iVar2], 1);
						unk_0xE52EED22AB2D2450(iLocal_166[iVar2], 1);
						if (unk_0x6AC695D09170F27D(iLocal_166[iVar2]))
						{
							unk_0xB078AFA7242F1F7B(iLocal_166[iVar2], true);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_166[iVar2], false, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0xC844350D5D58C99A(iLocal_111) && unk_0xC844350D5D58C99A(iLocal_166[0])) && unk_0xC844350D5D58C99A(iLocal_166[1])) && unk_0xC844350D5D58C99A(iLocal_166[2]))
				{
					unk_0x71199B01895C6202(iLocal_182);
				}
				if ((unk_0xC844350D5D58C99A(iLocal_170[0]) && unk_0xC844350D5D58C99A(iLocal_170[1])) && unk_0xC844350D5D58C99A(iLocal_170[2]))
				{
					unk_0x71199B01895C6202(767028979);
				}
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 170, true);
			}
		}
	}
}

int func_164(int iParam0, int iParam1)
{
	if (func_65(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	if (!func_167())
	{
		return 0;
	}
	if (func_65(unk_0x16F2683693E537C9()))
	{
		if (!func_166(unk_0x16F2683693E537C9(), vLocal_113, 100f) || unk_0x757EF87A33649210())
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, true), vParam1) <= (fParam4 * fParam4);
}

int func_167()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0xD8A54335F18763BA() >= 20 || unk_0xD8A54335F18763BA() < 5)
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

int func_168(var uParam0)
{
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_169(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_169(var uParam0)
{
	return func_170(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_170(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_171(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_172(var uParam0)
{
	if (uParam0->f_145)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_146 + uParam0->f_147) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
					{
						func_173(uParam0[iVar0]);
						uParam0->f_146 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_173(int iParam0)
{
	func_174(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_174(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_171(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

void func_175()
{
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		switch (Local_83)
		{
			case 0:
				vLocal_113 = { -158,67f, -1555,16f, 34,63f };
				fLocal_116 = 187,71f;
				vLocal_118 = { -155,15f, -1550,83f, 34,53f };
				fLocal_121 = 213,13f;
				vLocal_201 = { -68,87878f, -1818,903f, 24,55311f };
				vLocal_204 = { -56,0098f, -1807,029f, 27,85417f };
				vLocal_136[0] = { -157,19f, -1555,36f, 35,07f };
				vLocal_136[1] = { -157,04f, -1557,57f, 35,11f };
				vLocal_136[2] = { -159,83f, -1557,39f, 34,96f };
				vLocal_136[3] = { -156,64f, -1551,96f, 34,92f };
				vLocal_136[4] = { -156,25f, -1552,58f, 34,93f };
				vLocal_136[5] = { -153,23f, -1553,05f, 34,93f };
				vLocal_136[6] = { -155,3f, -1556,41f, 35,13f };
				fLocal_158[0] = 101,91f;
				fLocal_158[1] = 38,48f;
				fLocal_158[2] = -36,7f;
				fLocal_158[3] = -52,93f;
				fLocal_158[4] = -75,07f;
				fLocal_158[5] = 33,13f;
				fLocal_158[6] = -170,02f;
				break;
			
			case 1:
				vLocal_113 = { 368,72f, 294,06f, 102,96f };
				fLocal_116 = 25,17f;
				vLocal_118 = { 373,71f, 290,72f, 102,89f };
				fLocal_121 = 33,24f;
				vLocal_201 = { -523,5497f, 262,2986f, 80,01991f };
				vLocal_204 = { -509,1013f, 272,478f, 86,17713f };
				vLocal_136[0] = { 367,24f, 293,81f, 103,41f };
				vLocal_136[1] = { 368,73f, 296,89f, 103,41f };
				vLocal_136[2] = { 366,94f, 296,34f, 103,43f };
				vLocal_136[3] = { 375,21f, 291,85f, 103,25f };
				vLocal_136[4] = { 374,81f, 292,47f, 103,26f };
				vLocal_136[5] = { 371,51f, 291,85f, 103,31f };
				vLocal_136[6] = { 373,86f, 296,3f, 103,31f };
				fLocal_158[0] = -64,83f;
				fLocal_158[1] = -163,04f;
				fLocal_158[2] = -118,77f;
				fLocal_158[3] = 127,18f;
				fLocal_158[4] = 105,04f;
				fLocal_158[5] = -146,75f;
				fLocal_158[6] = 10,11f;
				break;
			
			case 2:
				vLocal_113 = { -807,98f, -2555,14f, 13,34f };
				fLocal_116 = 3,35f;
				vLocal_118 = { -810,1f, -2560,85f, 13,38f };
				fLocal_121 = 43,57f;
				vLocal_201 = { -1000,759f, -2436,092f, 17,16946f };
				vLocal_204 = { -986,7399f, -2424,87f, 22,16946f };
				vLocal_136[0] = { -809,45f, -2554,82f, 13,76f };
				vLocal_136[1] = { -808,47f, -2552,43f, 13,76f };
				vLocal_136[2] = { -806,32f, -2552,87f, 13,76f };
				vLocal_136[3] = { -808,59f, -2559,5f, 13,76f };
				vLocal_136[4] = { -809,1f, -2558,97f, 13,76f };
				vLocal_136[5] = { -812,82f, -2559,48f, 13,76f };
				vLocal_136[6] = { -810,72f, -2555,37f, 13,76f };
				fLocal_158[0] = -86,65f;
				fLocal_158[1] = -130,05f;
				fLocal_158[2] = 150,04f;
				fLocal_158[3] = 137,51f;
				fLocal_158[4] = 115,37f;
				fLocal_158[5] = -136,43f;
				fLocal_158[6] = 20,43f;
				break;
			
			case 3:
				vLocal_113 = { 778,59f, -1160,2f, 28,35f };
				fLocal_116 = 302,47f;
				vLocal_118 = { 778,47f, -1164,01f, 28,25f };
				fLocal_121 = 287,97f;
				vLocal_201 = { -1000,759f, -2436,092f, 17,16946f };
				vLocal_204 = { -986,7399f, -2424,87f, 22,16946f };
				vLocal_136[0] = { 778,16f, -1158,78f, 28,88f };
				vLocal_136[1] = { 780,82f, -1158,1f, 28,73f };
				vLocal_136[2] = { 781,52f, -1158,81f, 28,7f };
				vLocal_136[3] = { 779,16f, -1165,74f, 28,72f };
				vLocal_136[4] = { 779,86f, -1165,52f, 28,72f };
				vLocal_136[5] = { 780,75f, -1161,99f, 28,65f };
				vLocal_136[6] = { 783,8f, -1165,61f, 28,74f };
				fLocal_158[0] = -147,53f;
				fLocal_158[1] = 171,51f;
				fLocal_158[2] = 104,94f;
				fLocal_158[3] = 21,91f;
				fLocal_158[4] = -0,22f;
				fLocal_158[5] = 107,91f;
				fLocal_158[6] = -95,23f;
				break;
			
			case 4:
				vLocal_113 = { -1066,59f, -1151,04f, 1,71f };
				fLocal_116 = 258,32f;
				vLocal_136[0] = { -1065,07f, -1151,02f, 2,16f };
				vLocal_136[1] = { -1065,35f, -1149,36f, 2,16f };
				vLocal_136[2] = { -1067,13f, -1151,68f, 2,16f };
				vLocal_136[3] = { -1066,3f, -1149,38f, 2,16f };
				vLocal_136[4] = { -1066,01f, -1152,26f, 2,16f };
				fLocal_158[0] = 75,06f;
				fLocal_158[1] = 134,25f;
				fLocal_158[2] = -52,71f;
				fLocal_158[3] = -93,39f;
				fLocal_158[4] = -141,52f;
				vLocal_201 = { -1265,744f, -1057,199f, 5,410841f };
				vLocal_204 = { -1258,679f, -1049,919f, 9,443882f };
				break;
		}
		func_180(Local_83, &vLocal_207, &vLocal_210, &fLocal_213);
		iLocal_174[0] = -1745486195;
		iLocal_174[1] = 349505262;
		iLocal_174[2] = 349505262;
		iLocal_174[3] = -1745486195;
		iLocal_174[4] = 349505262;
		iLocal_174[5] = 349505262;
		iLocal_174[6] = 349505262;
		if (Local_83.f_1 == 1)
		{
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_b_chatting_female";
			sLocal_185[1] = "_car_b_chatting_male";
			sLocal_185[2] = "_car_b_chatting_male";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_a_flirt_girl";
			sLocal_185[1] = "_car_a_gawker_male_a";
			sLocal_185[2] = "_car_a_gawker_male_b";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_chatting_male";
			sLocal_185[5] = "_car_b_driver";
			sLocal_185[6] = "_car_b_lookout";
			func_179(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_178(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_179(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_179(&uLocal_216, iLocal_182);
		func_176(&uLocal_216, cLocal_184);
		unk_0x17E8C6920A1E386F(vLocal_201, vLocal_204, false, 0);
		unk_0xB5376EA942202450(vLocal_207, vLocal_210, fLocal_213, 0, false, 1);
		iLocal_94 = 1;
	}
	else if (Local_83.f_1 == 3)
	{
		switch (Local_83)
		{
			case 5:
				vLocal_113 = { 3066,63f, 650,9f, 0,17f };
				fLocal_116 = 351,81f;
				vLocal_122[0] = { 3073,57f, 648,09f, 0,01f };
				fLocal_132[0] = 5,72f;
				vLocal_122[1] = { 3071,53f, 648,79f, -0,09f };
				fLocal_132[1] = 351,33f;
				vLocal_122[2] = { 3068,73f, 645,53f, -0,07f };
				fLocal_132[2] = 348,18f;
				break;
			
			case 6:
				vLocal_113 = { 3462,11f, 5192,15f, -0,04f };
				fLocal_116 = 222,9f;
				vLocal_122[0] = { 3456,64f, 5195,91f, 0,12f };
				fLocal_132[0] = 211,54f;
				vLocal_122[1] = { 3453,19f, 5192,84f, -0,17f };
				fLocal_132[1] = 201,55f;
				vLocal_122[2] = { 3451,06f, 5189,43f, -0,3f };
				fLocal_132[2] = 221,55f;
				break;
			
			case 7:
				vLocal_113 = { 194,64f, 3621,27f, 29,91f };
				fLocal_116 = 163,95f;
				vLocal_122[0] = { 198,62f, 3620,46f, 29,91f };
				fLocal_132[0] = 175,4f;
				vLocal_122[1] = { 202,78f, 3619,69f, 29,87f };
				fLocal_132[1] = 163,69f;
				vLocal_122[2] = { 210,14f, 3618,88f, 29,87f };
				fLocal_132[2] = 175,31f;
				break;
			
			case 8:
				vLocal_113 = { 627,58f, -2138,06f, -0,07f };
				fLocal_116 = 180,09f;
				vLocal_122[0] = { 643,09f, -2146,11f, -0,09f };
				fLocal_132[0] = 143,89f;
				vLocal_122[1] = { 638,21f, -2145,3f, -0,1f };
				fLocal_132[1] = 172,41f;
				vLocal_122[2] = { 633,56f, -2143,83f, -0,04f };
				fLocal_132[2] = 191,97f;
				break;
		}
		iLocal_182 = -1030275036;
		func_179(&uLocal_216, iLocal_182);
		func_179(&uLocal_216, 767028979);
	}
}

void func_176(var uParam0, char* sParam1)
{
	func_177(uParam0, 1, -1, sParam1, 0);
}

void func_177(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&(uParam0[iVar0]->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = -114291515;
			break;
		
		case 2:
			iVar0 = 1032823388;
			break;
		
		case 3:
			iVar0 = -1030275036;
			break;
	}
	return iVar0;
}

void func_179(var uParam0, int iParam1)
{
	func_177(uParam0, 0, iParam1, "NULL", 0);
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311,1262f, -1896,261f, 20,68329f };
			*uParam2 = { -295,0653f, -1405,53f, 35,3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273,185f, 335,2969f, 105,5704f };
			*uParam2 = { 412,2877f, 299,2304f, 101,0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823,7157f, -2588f, 13,7691f };
			*uParam2 = { -801,3356f, -2464,007f, 12,42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791,8257f, -1423,863f, 24,17954f };
			*uParam2 = { 783,167f, -1015,648f, 50,24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084,03f, -1165,724f, 0,150211f };
			*uParam2 = { -1029,213f, -1134,581f, 2,174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_181()
{
	if (func_64(9))
	{
		return 0;
	}
	if (func_47(6) || func_47(7))
	{
		return 0;
	}
	if (Global_61506)
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_53() != 1)
	{
		return 0;
	}
	if (unk_0x1C53FD812DB1E31C())
	{
		return 0;
	}
	if (func_65(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (((func_14(iVar0) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0)) && !func_203(unk_0x16F2683693E537C9(), iVar0, -1)) && unk_0x134B62B726CEC8E6(iVar0) != -956048545)
		{
			return 0;
		}
	}
	switch (Local_83)
	{
		case 0:
			if (Global_111612[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_111612[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_111612[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_111612[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_111612[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_111602[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_111602[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_111602[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_111602[3])
			{
				return 0;
			}
			break;
	}
	if (!func_167())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_65(iLocal_103[iVar1]))
			{
				unk_0xDD353D0E9C789D0E(&uVar2);
				unk_0x78A77CDD64392938(0, iVar1 * 100);
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
				unk_0x75ABDC5F81978924(uVar2);
				unk_0x78ADC381772E3D54(iLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_65(iLocal_170[iVar1]))
			{
				unk_0xDD353D0E9C789D0E(&uVar2);
				unk_0x78A77CDD64392938(0, iVar1 * 110);
				if (func_14(iLocal_166[iVar1]) && unk_0xC42A92762C58E1B9(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0xE072601B4380E9DF(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x01E4BB5190DF7317(0, 1193033728, 0);
				}
				unk_0x75ABDC5F81978924(uVar2);
				unk_0x78ADC381772E3D54(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_65(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0xC42A92762C58E1B9(iLocal_112, iLocal_111, 0))
			{
				unk_0xE072601B4380E9DF(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0x01E4BB5190DF7317(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_183())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_65(iLocal_103[iVar4]))
			{
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0x78A77CDD64392938(0, iVar4 * 50);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 500f, -1, 0, 0);
				unk_0x75ABDC5F81978924(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(iLocal_103[iVar4], 1);
				}
				unk_0x78ADC381772E3D54(iLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_14(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0xB078AFA7242F1F7B(iLocal_166[iVar4], false);
			}
			if (func_65(iLocal_170[iVar4]))
			{
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0x78A77CDD64392938(0, iVar4 * 60);
				if (func_14(iLocal_166[iVar4]) && unk_0xC42A92762C58E1B9(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0xE072601B4380E9DF(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 500f, -1, 0, 0);
				}
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0xB078AFA7242F1F7B(iLocal_111, false);
		}
		if (func_65(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0xC42A92762C58E1B9(iLocal_112, iLocal_111, 0))
			{
				unk_0xE072601B4380E9DF(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(iLocal_112, unk_0x16F2683693E537C9(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83)
		{
			case 0:
				Global_111612[0] = 1;
				Global_111618[0] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 1:
				Global_111612[1] = 1;
				Global_111618[1] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 2:
				Global_111612[2] = 1;
				Global_111618[2] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 3:
				Global_111612[3] = 1;
				Global_111618[3] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 4:
				Global_111612[4] = 1;
				Global_111618[4] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 5:
				Global_111602[0] = 1;
				Global_111607[0] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 6:
				Global_111602[1] = 1;
				Global_111607[1] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 7:
				Global_111602[2] = 1;
				Global_111607[2] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 8:
				Global_111602[3] = 1;
				Global_111607[3] = unk_0x1C0640BA9A7327B3();
				break;
		}
		return 0;
	}
	return 1;
}

void func_182(int iParam0, bool bParam1)
{
	if (func_65(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x09AC81E49EA267F7(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xCED082ADD3739B9F(iParam0))
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_183()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0xC844350D5D58C99A(iLocal_170[iVar0]))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_184(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x36646919F20EAFFC(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_166[iVar0]))
			{
				if (unk_0x437347B10A200C4B(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0xB87D13D0C064E9D1(iLocal_166[iVar0], unk_0x16F2683693E537C9(), 1) && unk_0x7F6DC62EA9922664(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_111))
		{
			if (unk_0x437347B10A200C4B(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0xB87D13D0C064E9D1(iLocal_111, unk_0x16F2683693E537C9(), 1) && unk_0x7F6DC62EA9922664(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_166(unk_0x16F2683693E537C9(), vLocal_89, 50f) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (unk_0xC844350D5D58C99A(iLocal_112))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_112))
		{
			return 1;
		}
		else if (func_184(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x36646919F20EAFFC(iLocal_112))
		{
			unk_0x11AD11297DC58CC7(iLocal_112, false);
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_111))
	{
		if (unk_0x437347B10A200C4B(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_111, 1) || unk_0xB87D13D0C064E9D1(iLocal_111, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_117))
	{
		if (unk_0x437347B10A200C4B(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_117, 1) || unk_0xB87D13D0C064E9D1(iLocal_117, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0xC844350D5D58C99A(iLocal_103[iVar0]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_184(iLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
		if (func_198(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_197(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_185(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0, float fParam1)
{
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		if (func_196(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_186(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_186(int iParam0, float fParam1)
{
	return func_187(iParam0, unk_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_187(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	iVar4 = func_195(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar4 != -1)
		{
			func_194(&(Local_40[iVar4]));
		}
		return 0;
	}
	if (!func_191(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_190();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4].f_1 = iParam0;
		Local_40[iVar4].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_188(&(Local_40[iVar4]), vVar1, iParam1, &(Local_40[iVar4].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_40[iVar4].f_3) < iParam4);
}

int func_188(var uParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	iVar7 = 0;
	if (!func_15(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_189(iParam4, iParam7) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xEC560E589DF8370E(iVar7))
	{
		func_15(iVar7);
		if (unk_0x940C1429253D3B1B(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (unk_0xE2F1E99DD161A861(iVar7))
	{
		func_15(iVar7);
		if (unk_0x405E212DDE472467(iParam4, 0))
		{
			if (unk_0x96A5FE5834B81CE7(iVar7) == unk_0x6937EA2286828455(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_189(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x68F4C0EC296D3901(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x64430C979F516F7A(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x64430C979F516F7A(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x64430C979F516F7A(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x64430C979F516F7A(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x64430C979F516F7A(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, true);
}

int func_190()
{
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0] == 0 && Local_40[iVar0].f_1 == 0) && Local_40[iVar0].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vVar0 = { func_193(unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar3 = { func_193(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_192(vVar3, vVar0);
	if (fVar6 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_192(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_193(vector3 vParam0)
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

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_195(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0].f_1 == iParam0 && Local_40[iVar0].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_196(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > cos(fParam2);
}

int func_198(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == 883325847)
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_202(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_202(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar3.x = (vVar3.x + fParam1);
	vVar3.y = (vVar3.y + fParam1);
	vVar3.z = (vVar3.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), -1813897027, fParam1, 1) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), 615608432, fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), -37975472, fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), 741814745, 5f, 1))
		{
			if (bParam3)
			{
				if (func_200(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_200(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0, float fParam1)
{
	if ((((unk_0x68E45B0EC23881A7(iParam0, -1813897027, fParam1, &vVar1, &uVar0, 0) || unk_0x68E45B0EC23881A7(iParam0, -37975472, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, -1600701090, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 741814745, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 615608432, fParam1, &vVar1, &uVar0, 0))
	{
		if (func_201(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_193(vParam1 - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam4 < 0,1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar3 = { func_193(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_192(vVar3, vVar0);
	if (fVar6 <= cos((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	switch (Local_83)
	{
		case 5:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_2, 0);
			break;
		
		case 6:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_2, 1);
			break;
		
		case 7:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_2, 2);
			break;
		
		case 8:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_2, 3);
			break;
		
		case 0:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, 0);
			break;
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, 1);
			break;
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, 2);
			break;
		
		case 3:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, 3);
			break;
		
		case 4:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, 4);
			break;
	}
	return 0;
}

void func_205()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_207(1);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83 == 1)
	{
		iLocal_215 = func_206(374,0083f, 279,5919f, 102,3306f, 40f);
		unk_0x28F5E4DA506AC0CA(374,0083f, 279,5919f, 102,3306f, 25f, 0, 0, 0, 0, false, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		iLocal_214 = func_206(vLocal_89, 60f);
	}
}

int func_206(vector3 vParam0, float fParam3)
{
	vVar0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_179(&uLocal_216, -1041692462);
				func_179(&uLocal_216, -1995326987);
				func_179(&uLocal_216, 1349725314);
				break;
			
			case 4:
				func_179(&uLocal_216, -114291515);
				func_179(&uLocal_216, -893578776);
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_179(&uLocal_216, -1030275036);
				break;
		}
	}
	else
	{
		func_208(&uLocal_216);
	}
}

void func_208(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			func_209(uParam0[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_209(var uParam0)
{
	func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_210(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_171(iParam0))
		{
			case 0:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 1:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 2:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 3:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 4:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 6:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 7:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 8:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 26));
				break;
			
			case 9:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 0);
			break;
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 1);
			break;
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 2);
			break;
		
		case 3:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 3);
			break;
		
		case 4:
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 4);
			break;
	}
	return 0;
}

bool func_212(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_213()
{
	if (func_214(func_215(86, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_214(func_215(87, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_214(func_215(88, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_214(func_215(89, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_214(func_215(90, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_214(func_215(82, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_214(func_215(83, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_214(func_215(84, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_214(func_215(85, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_216(0);
	}
}

int func_214(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_215(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31146[iVar0][iParam1];
}

void func_216(bool bParam0)
{
	if (!iLocal_93)
	{
		unk_0x29D5132FBDCF2B1E(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(iLocal_103[iVar0]))
		{
			unk_0xA3BF0AA5A2608191(iLocal_103[iVar0]);
			unk_0x01E4BB5190DF7317(iLocal_103[iVar0], 1193033728, 0);
			unk_0x11AD11297DC58CC7(iLocal_103[iVar0], false);
			unk_0x6DAD7906B73F064D(&(iLocal_103[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_170[iVar0]))
		{
			if (func_15(iLocal_166[iVar0]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_170[iVar0]);
				if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_166[iVar0])))
				{
					unk_0xB078AFA7242F1F7B(iLocal_166[iVar0], false);
				}
				unk_0xE072601B4380E9DF(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0xFADC0A217229F6B5(iLocal_170[iVar0], true);
				unk_0x11AD11297DC58CC7(iLocal_170[iVar0], false);
				unk_0x6DAD7906B73F064D(&(iLocal_170[iVar0]));
				unk_0x046C362CF15F1935(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_112))
	{
		if (func_15(iLocal_111))
		{
			unk_0xA3BF0AA5A2608191(iLocal_112);
			unk_0xAFF39FB306F8E232(iLocal_112, 1, true);
			unk_0xE072601B4380E9DF(iLocal_112, iLocal_111, 15f, 786599);
			unk_0xFADC0A217229F6B5(iLocal_112, true);
			unk_0x11AD11297DC58CC7(iLocal_112, false);
			unk_0x6DAD7906B73F064D(&iLocal_112);
			unk_0x046C362CF15F1935(&iLocal_111);
		}
	}
	if (func_15(iLocal_117))
	{
		unk_0x046C362CF15F1935(&iLocal_117);
	}
	switch (Local_83)
	{
		case 5:
			func_219(82, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 0);
			break;
		
		case 6:
			func_219(83, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 1);
			break;
		
		case 7:
			func_219(84, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 2);
			break;
		
		case 8:
			func_219(85, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 3);
			break;
		
		case 0:
			func_219(86, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 0);
			break;
		
		case 1:
			func_219(87, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 1);
			break;
		
		case 2:
			func_219(88, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 2);
			break;
		
		case 3:
			func_219(89, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 3);
			break;
		
		case 4:
			func_219(90, 0, 0);
			unk_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0x27B495357E55D511(unk_0xE4B65163E4129619(10), 0);
	if (iLocal_101)
	{
		unk_0xBEF52C1D400C0A44(1);
	}
	if (iLocal_194 && !bParam0)
	{
		iVar1 = unk_0xA30EC016B12C03E4();
		if (unk_0xE1DBBD6CE209517C(iVar1))
		{
			if (!unk_0x93B62D155C014521(iVar1))
			{
				unk_0x98E4DC66A651C9FA(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_207(0);
	}
	if (iLocal_94)
	{
		unk_0x9FE27D475353EFE9(vLocal_201, vLocal_204, 1);
		unk_0x842F1AEB2FCC00B7(vLocal_207, vLocal_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83 == 1)
	{
		unk_0x2952D66A502EA873(iLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x2952D66A502EA873(iLocal_214, 0);
	}
	else
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 170, false);
	}
	func_217(&uLocal_216, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_217(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_208(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_218(uParam0[iVar0]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 0);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 15);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 0);
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 15);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19))
		{
			unk_0xCD816869CA451988(1);
			unk_0x142CC44DB769B57E(&(Global_31146[iVar0].f_19));
			unk_0xCD816869CA451988(0);
		}
	}
}

