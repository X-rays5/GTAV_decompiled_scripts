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
	StringCopy(&cLocal_500, "", 16);
	if (unk_0x2EBF608FFE6CA406(66))
	{
		func_649();
	}
	wait(0);
	func_647(ScriptParam_0);
	func_646();
	while (func_643(0, vLocal_185, 1,5f) || func_643(2, vLocal_185, 1,5f))
	{
		wait(0);
		func_35();
		func_1(4, &uLocal_48, vLocal_185, 12,5f, 12,5f, 10f, &uLocal_61);
	}
	func_649();
}

int func_1(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8)
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (Global_93768 != -1)
	{
		return 0;
	}
	if (func_33(iParam0, func_34()))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_32(iVar0);
		if (!func_31(iVar1))
		{
			if (unk_0xC844350D5D58C99A(Global_96222[iVar0]))
			{
				if (func_33(iParam0, func_30(iVar1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar3 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_33(iParam0, func_30(iVar2)))
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (!func_29(iVar3))
	{
		return 0;
	}
	if (!func_28(iVar3))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			if (Global_4270062)
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_16(iVar3, func_22()))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			iVar4 = 0;
			break;
		
		case 1:
			iVar4 = 1;
			break;
		
		case 2:
			iVar4 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (func_15(iVar3, iVar4) == 1)
	{
		return 0;
	}
	if (func_14(vParam5, 0f, 0f, 0f, 0))
	{
		vParam5 = { 50f, 50f, 50f };
	}
	vVar5 = { vParam2 - vParam5 };
	vVar8 = { vParam2 + vParam5 };
	func_13(vVar5, vVar8);
	func_12(vVar5, vVar8, &(uParam1->f_1));
	func_10(iParam0, uParam8);
	func_9(vVar5, vVar8);
	func_8(vVar5, vVar8, &(uParam1->f_4));
	if (Global_93767 != 8)
	{
		if (Global_93768 == -1)
		{
			iVar11 = -1;
			if (func_33(iParam0, func_34()))
			{
			}
			iVar12 = 5000;
			if (func_7())
			{
				switch (iVar3)
				{
					case 0:
						iVar11 = -181320640;
						break;
					
					case 1:
						iVar11 = 1418815087;
						break;
					
					case 2:
						iVar11 = 2087297077;
						break;
					
					default:
						return 0;
						break;
				}
				iVar13 = -1;
				switch (Global_93767)
				{
					case 0:
						iVar14 = 11;
						iVar13 = 3;
						break;
					
					case 1:
						iVar14 = 12;
						iVar13 = 3;
						break;
					
					case 4:
						iVar14 = 13;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 6:
						iVar14 = 14;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 7:
						iVar14 = 15;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 2:
						iVar14 = 16;
						iVar13 = 3;
						break;
					
					case 3:
						iVar14 = 17;
						iVar13 = 3;
						break;
					
					case 5:
						iVar14 = 18;
						iVar13 = 3;
						break;
					
					default:
						return 0;
						break;
				}
				if ((iVar14 == 14 || iVar14 == 15) && !iVar11 == -181320640)
				{
					iVar14 = 13;
				}
				iVar16 = unk_0x09AC81E49EA267F7(0, iVar13);
				switch (iVar16)
				{
					case 0:
						iVar15 = 19;
						break;
					
					case 1:
						iVar15 = 20;
						break;
					
					case 2:
						iVar15 = 21;
						break;
					
					case 3:
						iVar15 = 22;
						break;
					
					case 4:
						iVar15 = 23;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_6(iVar11, iVar14, iVar15, 6, func_34(), iVar3, iVar12, 10000, -1, 0, -1, 0, 1))
				{
					Global_93768 = unk_0x1C0640BA9A7327B3();
					return 1;
				}
			}
			else
			{
				switch (Global_93767)
				{
					case 0:
						switch (iVar3)
						{
							case 0:
								iVar11 = 2038672434;
								break;
							
							case 1:
								iVar11 = 975196153;
								break;
							
							case 2:
								iVar11 = 1127548000;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 4:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1666308520;
								break;
							
							case 1:
								iVar11 = -710274964;
								break;
							
							case 2:
								iVar11 = -1291788156;
								break;
							
							default:
								return 0;
								break;
						}
						iVar12 = 10000;
						break;
					
					case 6:
						switch (iVar3)
						{
							case 1:
								iVar11 = 1289879258;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 3:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1894462438;
								break;
							
							case 1:
								iVar11 = 1621076324;
								break;
							
							case 2:
								iVar11 = 1993031175;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 1:
					case 2:
					case 5:
					case 7:
						return 0;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_2(iVar11, 6, func_34(), iVar3, iVar3, iVar12, 10000, -1, -1, 0, -1, 0))
				{
					Global_93768 = unk_0x1C0640BA9A7327B3();
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (func_5(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_4(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 1);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136] = { Var0 };
		Global_111638.f_7683.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam2, iVar15))
			{
				func_3(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	iVar1 = 0;
	if (!func_29(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_5(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_4(iParam3);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_3(0);
		func_3(1);
		func_3(2);
		return 1;
	}
	return 0;
}

int func_7()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_8(vector3 vParam0, vector3 vParam3, var uParam6)
{
	if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (unk_0x623CCFCBD3F24CE4(vParam0, vParam3, 1, 1))
		{
			*uParam6++;
			if (*uParam6 > 6)
			{
				Global_93767 = 3;
			}
		}
		else if ((unk_0x372F6F38C16E36DA(0, vParam0, vParam3) || unk_0x372F6F38C16E36DA(2, vParam0, vParam3)) || unk_0xBBE430A566D01EF3(vParam0, vParam3, -1568386805, 1))
		{
			Global_93767 = 5;
		}
	}
}

void func_9(vector3 vParam0, vector3 vParam3)
{
	if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
	{
		if (iVar0 == 615608432 || iVar0 == 883325847)
		{
			if (unk_0x372F6F38C16E36DA(3, vParam0, vParam3))
			{
				Global_93767 = 2;
			}
		}
	}
}

void func_10(var uParam0, var uParam1)
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		iVar1 = func_11(iVar0);
		if (iVar1 == 145)
		{
		}
		else if (iVar1 == func_22())
		{
		}
		else if (!func_33(uParam0, func_30(iVar1)))
		{
		}
		else if (unk_0x134B62B726CEC8E6(iVar0) == -2140431165)
		{
			Global_93767 = 6;
		}
		else
		{
			Global_93767 = 4;
		}
		if (Global_93767 != 4)
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (iVar0 == (*uParam1)[iVar2])
				{
					iVar3 = unk_0x134B62B726CEC8E6(iVar0);
					if (iVar3 == -1177863319)
					{
						Global_93767 = 7;
					}
					if (iVar3 == 873639469)
					{
						Global_93767 = 6;
					}
				}
				iVar2++;
			}
		}
	}
}

int func_11(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 145;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_12(vector3 vParam0, vector3 vParam3, var uParam6)
{
	if ((unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()) || unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0)) || unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
	{
		if (unk_0x62438065F1C29508(unk_0x16F2683693E537C9(), vParam0, vParam3, 0, 1, 0))
		{
			if (*uParam6 < 0)
			{
				*uParam6 = unk_0x1C0640BA9A7327B3();
			}
			else if (unk_0x1C0640BA9A7327B3() > *uParam6 + 10000)
			{
				Global_93767 = 1;
			}
		}
		else
		{
			*uParam6 = -1;
		}
	}
	else
	{
		*uParam6 = -1;
	}
}

void func_13(vector3 vParam0, vector3 vParam3)
{
	if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
	{
		if (iVar0 == -1312131151)
		{
			if (unk_0xBBE430A566D01EF3(vParam0, vParam3, iVar0, 1))
			{
				Global_93767 = 0;
			}
		}
	}
}

bool func_14(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

int func_16(int iParam0, int iParam1)
{
	iVar0 = func_21();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_19(iParam0);
	iVar2 = func_19(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_18(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_17(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94600[iParam0];
	}
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_19(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_21())
	{
		return func_20(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_21())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_21()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_25(unk_0x16F2683693E537C9());
			if (func_29(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_25(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0];
}

int func_28(int iParam0)
{
	if (func_29(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_5(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_31(int iParam0)
{
	func_23();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_34()
{
	func_23();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_35()
{
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	iLocal_504 = 0;
	bVar0 = false;
	func_641(&iLocal_504, &uLocal_505, &uLocal_508, &uLocal_509, vLocal_185, "v_trailer");
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_367(iVar1))
		{
			iVar2 = func_366(iVar1);
			iVar3 = 0;
			iVar4 = func_365(iVar2, &iVar3);
			if (iVar4 == func_22())
			{
				if (Global_93750[iVar2] != 141)
				{
					Global_93750[iVar2] = 141;
					if (unk_0xC844350D5D58C99A(uLocal_75[iVar1]))
					{
						if (unk_0x50B5F6F3C29E9380(uLocal_75[iVar1], unk_0x16F2683693E537C9()))
						{
							unk_0x15AFB6CBDE990FB6(uLocal_75[iVar1], 1, 1);
						}
						else
						{
							unk_0x1BF8B16C32704027(uLocal_75[iVar1], -8f, 1);
						}
						if (unk_0xC844350D5D58C99A(uLocal_75[iVar1]))
						{
							unk_0x1E9649458B15960F(uLocal_75[iVar1], false);
							unk_0xEF190091B5B9F5EB(uLocal_75[iVar1], 1);
							unk_0x20641932E5104B25(uLocal_75[iVar1], true, 0);
							unk_0xDFC6BA855748EB10(uLocal_75[iVar1], 1, 0f, 0f, -0,1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						}
						iLocal_81[iVar1] = 0;
					}
					if (unk_0xC844350D5D58C99A(uLocal_125[iVar1]))
					{
						if (unk_0x50B5F6F3C29E9380(uLocal_125[iVar1], unk_0x16F2683693E537C9()))
						{
							unk_0x15AFB6CBDE990FB6(uLocal_125[iVar1], 1, 1);
						}
						else
						{
							unk_0x1BF8B16C32704027(uLocal_125[iVar1], -8f, 1);
						}
						if (unk_0xC844350D5D58C99A(uLocal_125[iVar1]))
						{
							unk_0x1E9649458B15960F(uLocal_125[iVar1], false);
							unk_0xEF190091B5B9F5EB(uLocal_125[iVar1], 1);
							unk_0x20641932E5104B25(uLocal_125[iVar1], true, 0);
							unk_0xDFC6BA855748EB10(uLocal_125[iVar1], 1, 0f, 0f, -0,1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						}
						iLocal_131[iVar1] = 0;
					}
					if (iVar4 == 2)
					{
						iVar5 = unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 4);
						if (iVar5 == 25)
						{
							while (((!func_249(unk_0x16F2683693E537C9(), 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(unk_0x16F2683693E537C9(), 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(unk_0x16F2683693E537C9(), 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(unk_0x16F2683693E537C9(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								wait(0);
							}
						}
					}
				}
			}
			func_95(iVar1);
			if (!bVar0)
			{
				if (!Global_111638.f_18509.f_18)
				{
					if (func_94(14) && func_31(2))
					{
						iVar6 = 0;
						if (func_52(uLocal_55[iVar1], Global_93750[iVar2], &uLocal_528, "FMTAUD", &Local_479, &uLocal_516, &iVar6, 8f, "FMT_COUNTRY", 0))
						{
							bVar0 = true;
							Global_111638.f_18509.f_18 = 1;
						}
					}
				}
				if (iVar1 == 3)
				{
					if (!iLocal_53)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(uLocal_55[iVar1]))
						{
							bVar7 = true;
							vVar8 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
							vVar11 = { unk_0x68F4C0EC296D3901(uLocal_55[iVar1], 1) };
							if (unk_0x0EB28750412C3A5A(vVar8, vVar11, 0) > 5f)
							{
								bVar7 = false;
							}
							if (bVar7)
							{
								func_50(uLocal_55[iVar1], "GENERIC_HI", 3);
								func_48(&uLocal_516);
								iLocal_53 = 1;
							}
						}
					}
				}
				if (!func_46(uLocal_55[iVar1], Local_317[iVar1], Local_398[iVar1], iLocal_695[iVar1], &uLocal_516))
				{
					if (func_52(uLocal_55[iVar1], Global_93750[iVar2], &uLocal_528, "FMTAUD", &Local_479, &uLocal_516, &(uLocal_522[iVar1]), 3f, 0, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		else
		{
			func_641(&iLocal_504, &uLocal_505, &uLocal_508, &uLocal_509, vLocal_185, "v_trailer");
			iLocal_504 = 1;
		}
		iVar1++;
	}
	func_36(&uLocal_55, &uLocal_519);
	return 1;
}

int func_36(var uParam0, var uParam1)
{
	return 0;
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (!func_45(uParam1))
	{
		func_44(uParam1);
		return 0;
	}
	if ((func_38(uParam1, 1f) || unk_0xBFC0798A6E3417F9(0, 47)) || func_37())
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
			{
				vVar1 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0], 0) };
				fVar4 = 5f;
				unk_0x7800CEC090C01D4D(vVar1, fVar4);
				unk_0x679C321F8CAA2CFA(vVar1, fVar4, 0);
				iVar5 = 741814745;
				if (unk_0x0A4F3CD1EDAEF9D0(vVar1, iVar5, fVar4, 0))
				{
					unk_0x38C3A68D7861DCFD(0, 47, 1);
				}
			}
			iVar0++;
		}
		func_48(uParam1);
		return 1;
	}
	return 0;
}

int func_37()
{
	iVar0 = unk_0x78CE7F4A02231950(unk_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = unk_0x654E7ACE881E41FE(iVar0);
	if (iVar1 == 1548507267)
	{
		return 1;
	}
	return 0;
}

int func_38(var uParam0, float fParam1)
{
	if (func_40(uParam0, fParam1))
	{
		func_39(uParam0);
		return 1;
	}
	return 0;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_40(var uParam0, float fParam1)
{
	if (func_45(uParam0))
	{
		if (func_41(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_42(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_42(bool bParam0)
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

bool func_43(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_44(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_48(uParam0);
	}
}

bool func_45(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_46(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33, var uParam34)
{
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!unk_0xEA6BC48857E0AC4C(&uParam1) && !unk_0xEA6BC48857E0AC4C(&uParam17))
	{
		if (unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0;
		}
		if (!unk_0xB4ECF989E2C1DAC8(iParam0, &uParam1, &uParam17, 3))
		{
			return 0;
		}
		if (unk_0xDC2A248C2CB7B3DB(&uParam1, &uParam17, "drinking", &fVar0, &fVar1))
		{
			if (unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
			{
				fVar0 = 0,05f;
				fVar1 = 0,75f;
			}
		}
		else if (unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
		{
			fVar0 = 0,05f;
			fVar1 = 0,75f;
		}
		else if (unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@RON@MOONSHINE_IG_5") || ((unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_A") || unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_B")) || unk_0x7F8A39872A07D2CE(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_C")))
		{
			fVar0 = 0,25f;
			fVar1 = 0,75f;
		}
		else
		{
			fVar0 = -1f;
			fVar1 = -1f;
			return 0;
		}
		fVar2 = -1f;
		if (unk_0xB4ECF989E2C1DAC8(iParam0, &uParam1, &uParam17, 1))
		{
			fVar2 = unk_0x8CA9406E01C7EE58(iParam0, &uParam1, &uParam17);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, &uParam1, &uParam17, 2))
		{
			fVar2 = unk_0xA45992A6CE82FB43(iParam33);
		}
		if (fVar2 > fVar0 && fVar2 < fVar1)
		{
			if (func_45(uParam34))
			{
				if (!func_43(uParam34))
				{
					func_47(uParam34);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_47(var uParam0)
{
	if (func_45(uParam0))
	{
		if (!func_43(uParam0))
		{
			uParam0->f_2 = (func_42(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
			unk_0x5D96D8530B3D0904(uParam0, 2);
		}
	}
}

void func_48(var uParam0)
{
	func_49(uParam0, 0f);
}

void func_49(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_42(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(uParam0, 1);
	unk_0x0674E58A79778E99(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_50(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_51(iParam2), 1);
}

int func_51(int iParam0)
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

int func_52(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6, float fParam7, char* sParam8, char* sParam9)
{
	iVar0 = 3;
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0;
	}
	if (!unk_0x4FC40AB0ECCE6E18(iParam0))
	{
		return 0;
	}
	if (func_92(iParam0))
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	if ((func_91() || func_90(8, -1)) || Global_76882)
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	if (unk_0x991B1F0980C62628() || func_89())
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	vVar4 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	if (func_87(iParam0, iParam1, uParam2, sParam3, uParam4, uParam5, iVar0))
	{
		return 1;
	}
	func_86();
	sVar10 = func_83(iParam1, &iVar7, &uVar8, &uVar9);
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		sVar10 = sParam8;
	}
	if (unk_0xEA6BC48857E0AC4C(sVar10))
	{
		return 0;
	}
	if (func_82(uVar8, 2))
	{
		if (!func_81(iParam0, iParam1))
		{
			return 0;
		}
	}
	else
	{
		if (func_82(uVar8, 1))
		{
			if (unk_0x0EB28750412C3A5A(vVar1, vVar4, 0) > fParam7)
			{
				return 0;
			}
		}
		if (func_82(uVar8, 4))
		{
			if (unk_0x755FF954DAE327E1((vVar1.z - vVar4.z)) > 2f)
			{
				return 0;
			}
		}
		if (func_82(uVar8, 8))
		{
			if (!unk_0x0A059E0DB9253280(iParam0))
			{
				return 0;
			}
		}
	}
	if (func_82(uVar8, 16))
	{
		fVar11 = 10f;
		if (*iParam6 >= iVar7)
		{
			return 0;
		}
		fVar11 = (fVar11 + ((to_float(*iParam6) / to_float((iVar7 - 1))) * 10f));
		if (iParam1 == 29 || iParam1 == 30)
		{
			fVar11 = (fVar11 * 1,5f);
		}
		if (func_45(uParam5))
		{
			if (func_43(uParam5))
			{
				func_80(uParam5);
			}
			if (!func_40(uParam5, fVar11))
			{
				return 0;
			}
		}
	}
	if (!func_33(uVar9, func_34()))
	{
		iVar12 = func_22();
		StringCopy(&Var13, "", 16);
		switch (func_78(iParam0))
		{
			case 0:
				StringCopy(&Var13, "FMM_0", 16);
				break;
			
			case 1:
				StringCopy(&Var13, "FMM_1", 16);
				break;
			
			case 2:
				StringCopy(&Var13, "FMM_2", 16);
				break;
			
			case 3:
				StringCopy(&Var13, "FMM_3_FT", 16);
				break;
			
			case 5:
				StringCopy(&Var13, "FMF_0", 16);
				if (iVar12 == 0 || iVar12 == 2)
				{
					StringCopy(&Var13, "", 16);
				}
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(&Var13))
		{
			if (!unk_0x7F8A39872A07D2CE(&Var13, "FMM_3_FT"))
			{
				switch (iVar12)
				{
					case 0:
						StringConCat(&Var13, "_MIC", 16);
						break;
					
					case 1:
						StringConCat(&Var13, "_FRA", 16);
						if (unk_0x7F8A39872A07D2CE(&Var13, "FMM_2_FRA"))
						{
							if (!func_94(17))
							{
								StringConCat(&Var13, "1", 16);
							}
							else
							{
								StringConCat(&Var13, "2", 16);
							}
						}
						break;
					
					case 2:
						StringConCat(&Var13, "_TRV", 16);
						break;
					}
			}
			if (func_61(sParam3, &Var13, uParam2, iVar0, uParam4, sParam9))
			{
				func_48(uParam5);
				*iParam6 = 99;
				return 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	StringCopy(&Var17, "", 16);
	switch (func_22())
	{
		case 0:
			StringCopy(&Var17, "MICHAEL", 16);
			break;
		
		case 1:
			StringCopy(&Var17, "FRANKLIN", 16);
			break;
		
		case 2:
			StringCopy(&Var17, "TREVOR", 16);
			break;
	}
	iVar21 = -1;
	vVar22 = { 0f, 0f, 0f };
	if (func_82(uVar8, 128))
	{
		iVar21 = 1;
		vVar22 = { -14,3293f, -1443,635f, 29,9f };
	}
	if (unk_0x7F8A39872A07D2CE("TRA_IG_MD", sVar10))
	{
		if (func_82(uVar8, 64))
		{
		}
		else
		{
			func_59(&uVar8, 64);
		}
	}
	if (unk_0x7F8A39872A07D2CE("FMT_COUNTRY", sVar10))
	{
		if (func_82(uVar8, 64))
		{
		}
		else
		{
			func_59(&uVar8, 64);
		}
	}
	if (func_82(uVar8, 64))
	{
		if (!unk_0xEA6BC48857E0AC4C(sVar10))
		{
			if (func_82(uVar8, 32))
			{
				if (!func_58(uParam2, sParam3, sVar10))
				{
					return 0;
				}
			}
			func_57(uParam2, 0, unk_0x16F2683693E537C9(), &Var17, 0, 1);
			if (func_82(uVar8, 128))
			{
				func_57(uParam2, iVar21, 0, "DENISE", 0, 1);
				func_56(uParam2, iVar21, vVar22);
			}
			if (func_61(sParam3, sVar10, uParam2, iVar0, uParam4, sParam9))
			{
				func_48(uParam5);
				*iParam6++;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		StringCopy(&Var25, sVar10, 16);
		if (func_53(sParam3, &Var25, uParam4))
		{
			if (!unk_0xEA6BC48857E0AC4C(&Var25))
			{
				if (func_82(uVar8, 32))
				{
					if (!func_58(uParam2, sParam3, &Var25))
					{
						return 0;
					}
				}
				func_57(uParam2, 0, unk_0x16F2683693E537C9(), &Var17, 0, 1);
				if (func_82(uVar8, 128))
				{
					func_57(uParam2, iVar21, 0, "DENISE", 0, 1);
					func_56(uParam2, iVar21, vVar22);
				}
				if (func_61(sParam3, &Var25, uParam2, iVar0, uParam4, sParam9))
				{
					func_48(uParam5);
					*iParam6++;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_53(char* sParam0, char* sParam1, var uParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_54(sParam0, 7))
	{
		cVar0 = { *sParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (unk_0xEF07223F00EBE9C9(&cVar0))
		{
			StringCopy(&cVar4, "", 16);
		}
		else
		{
			StringCopy(&cVar4, "0", 16);
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar70 = true;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (unk_0xEF07223F00EBE9C9(&cVar0))
		{
			iVar8++;
			Var9[iVar8] = { *sParam1 };
			StringConCat(&(Var9[iVar8]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8] = { *sParam1 };
				StringConCat(&(Var9[iVar8]), "o", 16);
				bVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!unk_0xEA6BC48857E0AC4C(uParam2[iVar72]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!unk_0xEA6BC48857E0AC4C(&(Var9[iVar73])))
					{
						if (unk_0x7F8A39872A07D2CE(uParam2[iVar72], &(Var9[iVar73])))
						{
							iVar74 = iVar73;
							while (iVar74 <= (Var9 - 1))
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74] = { Var9[iVar74 + 1] };
								}
								else
								{
									StringCopy(&(Var9[iVar74]), "", 16);
								}
								iVar74++;
							}
							iVar71 = (iVar71 - 1);
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = unk_0x09AC81E49EA267F7(0, iVar71 + 1);
		*sParam1 = { Var9[iVar75] };
		if (unk_0xEA6BC48857E0AC4C(sParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_54(char* sParam0, int iParam1)
{
	if (unk_0x01C309A4BDFCAD82(sParam0, iParam1))
	{
		return 1;
	}
	else if (!func_55() && !unk_0x1EE04CEA36EF313B())
	{
		if (!unk_0xF20C10E87A52F9A6(iParam1))
		{
			unk_0xD7992BEF7A9D109E(sParam0, iParam1);
		}
	}
	return 0;
}

int func_55()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_56(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_58(var uParam0, char* sParam1, char* sParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam2, 16);
	StringConCat(&cVar0, "SL", 16);
	if (func_54(sParam1, 7))
	{
		if (unk_0xEF07223F00EBE9C9(&cVar0))
		{
			sVar4 = unk_0x19C9F30A7697B43C(&cVar0);
			if (unk_0x2EBF5002C6B6A06C(sVar4))
			{
				return 0;
			}
			else
			{
				iVar5 = 0;
				iVar6 = 1;
				StringCopy(&cVar7, unk_0xA739D71DFFCCC22C(sVar4, iVar5, iVar6), 16);
				iVar11 = 1;
				iVar12 = 2;
				StringCopy(&cVar13, unk_0xA739D71DFFCCC22C(sVar4, iVar11, iVar12), 16);
				if (unk_0x64CD7116CDEEDF6B(&cVar7, &iVar17))
				{
					if (unk_0xC844350D5D58C99A((*uParam0)[iVar17]))
					{
					}
					else
					{
						return 0;
					}
				}
				if (unk_0x64CD7116CDEEDF6B(&cVar13, &iVar18))
				{
					if (unk_0xC844350D5D58C99A((*uParam0)[iVar18]))
					{
					}
					else
					{
						return 0;
					}
				}
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
	return 1;
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_54(sParam0, 7))
	{
		sVar0 = "";
		switch (func_22())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (unk_0xEA6BC48857E0AC4C(sParam5))
		{
			func_57(uParam2, 0, unk_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_63(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*uParam4[iVar1] = { *(uParam4[(iVar1 - 1)]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0], sParam1, 16);
				return 1;
			}
		}
		else
		{
			func_57(uParam2, 0, unk_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_63(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				func_62(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*uParam4[iVar2] = { *(uParam4[(iVar2 - 1)]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_63(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_64(sParam2, iParam3, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x5CEB4DB888A62073(0);
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
					func_76();
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
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_75();
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
				func_74();
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
				if (func_73())
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
			if (func_72())
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
			func_71();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_70();
		func_65();
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
		func_76();
	}
	return 0;
}

void func_65()
{
	if (!func_66())
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

int func_66()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_69())
	{
		return 0;
	}
	if (func_67(unk_0xD803B885F5E47A62()))
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

bool func_67(int iParam0)
{
	return func_68(iParam0, 20);
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_69()
{
	return -1;
}

void func_70()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0);
	Global_20805 = 1;
}

void func_71()
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

int func_72()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
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

void func_74()
{
	if (func_24(14))
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
		Global_19486 = func_22();
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

void func_75()
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

void func_76()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(1);
		Global_20805 = 6;
		return;
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

int func_78(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iVar0 == func_79(14))
	{
		return 0;
	}
	if (iVar0 == func_79(15))
	{
		return 1;
	}
	if (iVar0 == func_79(17))
	{
		return 2;
	}
	if (iVar0 == -527186490)
	{
		return 3;
	}
	if (iVar0 == 1240094341)
	{
		return 4;
	}
	if (iVar0 == -2113195075)
	{
		return 5;
	}
	if (iVar0 == func_79(19))
	{
		return 6;
	}
	if (iVar0 == func_79(37))
	{
		return 7;
	}
	if (iVar0 == func_26(0))
	{
		return 8;
	}
	if (iVar0 == func_26(2))
	{
		return 9;
	}
	if (iVar0 == func_79(20))
	{
		return 10;
	}
	if (iVar0 == func_79(40))
	{
		return 11;
	}
	if (iVar0 == -527186490)
	{
		return 12;
	}
	if (iVar0 == func_79(32))
	{
		return 13;
	}
	if (iVar0 == func_79(24))
	{
		return 14;
	}
	return 16;
}

int func_79(int iParam0)
{
	if (!func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_43(uParam0))
		{
			uParam0->f_1 = (func_42(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(uParam0, 2);
		}
	}
}

int func_81(int iParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	vVar3 = { 5f, 5f, 2f };
	switch (iParam1)
	{
		case 5:
			vVar0 = { 0f, 2f, 0f };
			vVar3 = { 5f, 7f, 2f };
			break;
		
		case 17:
			vVar0 = { 0f, 0f, 0f };
			vVar3 = { 5f, 5f, 2f };
			break;
		
		case 8:
			vVar0 = { 0f, 3,9f, 0f };
			vVar3 = { 5f, 5f, 2f };
			break;
		
		case 6:
			vVar0 = { 1f, -2f, 0f };
			vVar3 = { 5f, 5f, 2f };
			break;
		
		case 12:
			vVar0 = { 0f, 5f, 0f };
			vVar3 = { 5f, 7,5f, 2f };
			break;
		
		case 13:
			vVar0 = { 0f, 5f, 0f };
			vVar3 = { 5f, 7,5f, 2f };
			break;
		
		case 14:
			vVar0 = { 0f, 5f, 0f };
			vVar3 = { 5f, 7,5f, 2f };
			break;
		
		case 15:
			vVar0 = { 0f, 5f, 0f };
			vVar3 = { 5f, 7,5f, 2f };
			break;
		
		case 26:
			vVar0 = { -1f, -0,5f, 0f };
			vVar3 = { 6,5f, 3,5f, 2f };
			break;
		
		case 46:
			func_81(iParam0, 26);
			break;
		
		case 31:
			vVar0 = { 1f, -2f, 0f };
			vVar3 = { 5f, 5f, 2f };
			break;
		
		case 32:
			vVar0 = { -1,5f, 0,5f, 0f };
			vVar3 = { 5f, 6,5f, 2f };
			break;
		
		case 29:
			vVar0 = { -2,1f, 4,1f, 0f };
			vVar3 = { 5,5f, 5,5f, 2f };
			break;
		
		case 30:
			func_81(iParam0, 29);
			break;
		
		case 38:
			vVar0 = { 0f, 5f, 0f };
			vVar3 = { 5f, 7,5f, 2f };
			break;
		
		case 93:
			vVar0 = { 0f, 0f, 0f };
			vVar3 = { 2f, 2f, 2f };
			break;
		
		case 98:
			vVar0 = { 0f, 0f, 0f };
			vVar3 = { 10f, 10f, 2f };
			break;
		
		default:
			vVar0 = { 0f, 0f, 0f };
			vVar3 = { 5f, 5f, 2f };
			break;
	}
	vVar6 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar6 + vVar0, vVar3, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_83(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_59(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 1:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		
		case 2:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		
		case 3:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		
		case 4:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		
		case 5:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		
		case 6:
			func_59(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 8:
			func_59(uParam2, 2);
			func_84(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		
		case 10:
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		
		case 11:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		
		case 12:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 13:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 14:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 15:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		
		case 17:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		
		case 25:
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		
		case 26:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		
		case 32:
			if (!Global_3)
			{
				func_59(uParam2, 2);
				func_84(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				func_59(uParam2, 2);
				func_84(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		
		case 33:
			func_84(uParam2, 16);
			func_59(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 38:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		
		case 29:
			func_84(uParam2, 64);
			func_59(uParam2, 8);
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		
		case 30:
			return func_83(29, uParam1, uParam2, uParam3);
			break;
		
		case 31:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		
		case 37:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		
		case 36:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		
		case 28:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		
		case 46:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 48:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		
		case 68:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		
		case 49:
			return func_83(140, uParam1, uParam2, uParam3);
			break;
		
		case 50:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		
		case 69:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 52:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 67:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		
		case 54:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		
		case 70:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 58:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 59:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		
		case 72:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		
		case 60:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 74:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		
		case 76:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case 77:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case 78:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		
		case 93:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		
		case 98:
			func_84(uParam2, 64);
			func_59(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		
		case 102:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		
		case 103:
			return func_83(102, uParam1, uParam2, uParam3);
			break;
		
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 111:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 116:
			func_84(uParam2, 64);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		
		case 117:
			func_84(uParam2, 64);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			func_84(uParam2, 64);
			func_84(uParam2, 16);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		
		case 124:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			func_84(uParam2, 64);
			return "";
			break;
		
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 133:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		
		case 134:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

void func_84(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

void func_85(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_86()
{
	return 0;
}

int func_87(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	iVar6 = func_22();
	iVar7 = func_78(iParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_93750[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_93750[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_93750[2] == 65 || Global_93750[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar6 == 1)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!func_88(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!func_88(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (vdist2(vVar0, vVar3) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (unk_0x755FF954DAE327E1((vVar3.z - vVar0.z)) > 2f)
		{
			return 0;
		}
	}
	else if (!unk_0x0A059E0DB9253280(iParam0) || !unk_0x4FC40AB0ECCE6E18(iParam0))
	{
		return 0;
	}
	bVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar12 = true;
			break;
	}
	if (!unk_0xBFC0798A6E3417F9(0, 46) && !unk_0xD245978525608929(0, 46))
	{
		return 0;
	}
	if (!bVar12)
	{
		iVar13 = unk_0xB0A50BC6EDB99CA9(iParam0);
		if (Global_98796.f_344 != iVar13)
		{
			return 0;
		}
	}
	cVar14 = { Var8 };
	StringConCat(&cVar14, "_01", 16);
	if (unk_0xEF07223F00EBE9C9(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_53(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				func_57(uParam2, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				func_57(uParam2, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				func_57(uParam2, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
		}
		if (func_61(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			func_48(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_89()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
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

var func_91()
{
	return Global_1312877;
}

int func_92(int iParam0)
{
	if (unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (unk_0x7DECE00E09F41C95(iParam0))
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_95(int iParam0)
{
	iVar0 = func_366(iParam0);
	func_96(iParam0, Global_93750[iVar0]);
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	iVar0 = func_366(iParam0);
	switch (iParam1)
	{
		case 100:
			if (unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
			{
				if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_MONITORING_POLICE_FREQUENCY", "AFT_RON_MONITORING_POLICE_FREQUENCY_MASTER", uLocal_125[iParam0], &(Local_236[iParam0]), 0))
				{
				}
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188))
			{
				func_242(uLocal_55[iParam0], iVar0, iParam1);
			}
			if (Global_30813 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 101:
		case 119:
			if (iParam1 == 101)
			{
				if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_LISTENS_TO_RADIO_BROADCAST", "AFT_RON_LISTENS_TO_RADIO_BROADCAST_MASTER", uLocal_125[iParam0], &(Local_236[iParam0]), 0))
				{
				}
			}
			else if (iParam1 == 119)
			{
				if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_EX_TRYING_TO_PICK_UP_SIGNALS", "AFT_RON_EX_TRYING_TO_PICK_UP_SIGNALS_MASTER", uLocal_125[iParam0], &(Local_236[iParam0]), 0))
				{
				}
			}
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0);
			if (Global_30813 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 102:
			func_232(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_63[iParam0]), &(iLocal_695[iParam0]), &(Local_317[iParam0]), &(Local_398[iParam0]), 103, "", "", "", &Local_479, &uLocal_528, &uLocal_516, 0, 4);
			break;
		
		case 103:
			func_231(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 1, &(Local_317[iParam0]), &(Local_398[iParam0]), 1000f, -1000f);
			break;
		
		case 104:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_SMOKING_CRYSTAL", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188))
			{
				func_230(uLocal_55[iParam0], iVar0, iParam1, vLocal_185 + Vector(1f, 0f, 0f), fLocal_188, 1090519040, -1056964608);
				if ((!unk_0x7DECE00E09F41C95(uLocal_55[iParam0]) && !func_55()) && !unk_0xD17F06053799A7CA())
				{
					func_83(iParam1, &iVar1, &uVar2, &uVar3);
					if (uLocal_522[iParam0] >= iVar1)
					{
						unk_0x64B1AD81046CB800(uLocal_55[iParam0], 25000, 30000, 0, 1, 1, 0);
						if (unk_0xC844350D5D58C99A(uLocal_75[iParam0]))
						{
							unk_0x15AFB6CBDE990FB6(uLocal_75[iParam0], 1, 1);
						}
						if (unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
						{
							unk_0x15AFB6CBDE990FB6(uLocal_125[iParam0], 1, 1);
						}
						func_226(uLocal_55[iParam0], 90000, 0);
						func_239(iVar0, 138);
					}
				}
			}
			func_223(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_sparks", &(uLocal_217[iParam0]), &(uLocal_211[iParam0]), Local_317[iParam0], Local_398[iParam0], &(iLocal_695[iParam0]), "spark", 4f, 0, uLocal_75[iParam0]);
			func_223(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_flame", &uLocal_223, &(uLocal_211[iParam0]), Local_317[iParam0], Local_398[iParam0], &(iLocal_695[iParam0]), "flame", 5f, 0, uLocal_75[iParam0]);
			break;
		
		case 105:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_DRINKING_MOONSHINE_FROM_A_JAR", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			break;
		
		case 106:
			if (func_220(uLocal_55[iParam0], iVar0, iParam1, vLocal_185 + Vector(1f, 0f, 0f), fLocal_188, &(Local_317[iParam0]), &(Local_398[iParam0]), &(iLocal_695[iParam0]), uLocal_75[iParam0], uLocal_125[iParam0], uLocal_693))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			}
			break;
		
		case 107:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 1);
			break;
		
		case 108:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 1);
			break;
		
		case 109:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "MICHAEL_DRINKING_BEER", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			break;
		
		case 110:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			func_219(uLocal_55[iParam0], iVar0, 111, "FMTAUD", "MIC_IG_4", &Local_479, &uLocal_528, &uLocal_516, &iParam1, 4);
			if (Global_93750[iVar0] == 111)
			{
				iParam1 = 111;
			}
			break;
		
		case 111:
			func_217(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(Local_317[iParam0]), &(Local_398[iParam0]), &(iLocal_63[iParam0]), &(uLocal_75[iParam0]), &(iLocal_81[iParam0]), 1);
			break;
		
		case 116:
			if (iParam0 == 2)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[2]), 1, 0);
			}
			else
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[2]), &(Local_398[iParam0]), Local_398[2], "_TREVOR", &(iLocal_695[2]));
				if (Global_93750[9] != iParam1)
				{
					iLocal_63[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			func_207(1);
			break;
		
		case 117:
			if (iParam0 == 2)
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[2]), 1, 0))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_69[iParam0]), &uLocal_694))
					{
					}
				}
			}
			else
			{
				if (func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[2]), &(Local_398[iParam0]), Local_398[2], "_TREVOR", &(iLocal_695[2])))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_69[iParam0]), &uLocal_694))
					{
					}
				}
				if (Global_93750[9] != iParam1)
				{
					iLocal_63[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			if (Global_30813 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 112:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "TREVOR_SMOKING_CRYSTAL", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			func_204(uLocal_55[iParam0], iVar0, iParam1);
			break;
		
		case 113:
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			}
			func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "TREVOR_POO", "TREVORS_POO_FAIL", uLocal_55[iParam0], &(Local_236[iParam0]), 0);
			func_204(uLocal_55[iParam0], iVar0, iParam1);
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(uLocal_55[iParam0], 0)) < (35f * 35f))
			{
				unk_0x9501364A300048C6();
			}
			break;
		
		case 114:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "TREVOR_BLOWING_SHIT_UP", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_231(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0, &(Local_317[iParam0]), &(Local_398[iParam0]), 1090519040, -1056964608);
			if (unk_0x69DF961355195C3C(iLocal_695[iParam0]))
			{
				fVar4 = unk_0xA45992A6CE82FB43(iLocal_695[iParam0]);
				if (!unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
				{
					if (iLocal_131[iParam0] == 0)
					{
						if (fVar4 < 0,6f)
						{
							iLocal_131[iParam0] = unk_0x6B7EC7B5B6B57364(-1813897027);
						}
					}
				}
				else
				{
					if (func_203(&(uLocal_125[iParam0]), &(Local_317[iParam0]), "", "", "GRENADE_THROWING_grenade", &(iLocal_695[iParam0]), 12))
					{
					}
					if (fVar4 > 0,6f)
					{
						unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(uLocal_125[iParam0], 1), 0, 0,5f, 1, 0, 1065353216, 0);
						unk_0xF690C84DADBB3551(&(uLocal_125[iParam0]));
						iLocal_131[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		
		case 115:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0);
			break;
		
		case 118:
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			func_207(1);
			break;
		
		case 120:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "RON_WORKING_A_MOONSHINE_SILL", "AFT_RON_EX_MOONSHINE_SILL_LOOP_MASTER", iLocal_175, &(Local_236[iParam0]), 0))
			{
			}
			func_232(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_63[iParam0]), &(iLocal_695[iParam0]), &(Local_317[iParam0]), &(Local_398[iParam0]), 138, "FMTAUD", "", "RONEX_IG_3", &Local_479, &uLocal_528, &uLocal_516, 0, 4);
			if (unk_0x69DF961355195C3C(iLocal_695[iParam0]) && unk_0xC844350D5D58C99A(uLocal_75[iParam0]))
			{
				bVar5 = true;
				if (iLocal_63[iParam0] == 3)
				{
					if (!unk_0xA9B1C27B21B1396A(iLocal_695[iParam0]) && unk_0x50B5F6F3C29E9380(uLocal_75[iParam0], uLocal_55[iParam0]))
					{
						if (unk_0xA45992A6CE82FB43(iLocal_695[iParam0]) >= 0,3f)
						{
							bVar5 = false;
						}
						if (unk_0xA45992A6CE82FB43(iLocal_695[iParam0]) >= 0,6f)
						{
							unk_0x15AFB6CBDE990FB6(uLocal_75[iParam0], 1, 1);
						}
					}
				}
				if (bVar5)
				{
					func_202(uLocal_125[iParam0], iParam1, "scr_fam_moonshine_pour", &(uLocal_217[iParam0]), 0f);
				}
				else if (unk_0x83A8177D302E1A7E(uLocal_217[iParam0]))
				{
					unk_0xF7E25143642732EA(uLocal_217[iParam0], 0);
				}
			}
			func_207(1);
			break;
		
		case 121:
			if (unk_0xC844350D5D58C99A(uLocal_75[iParam0]))
			{
				vVar9 = { unk_0x68F4C0EC296D3901(uLocal_75[iParam0], 1) };
			}
			else if (unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
			{
				vVar9 = { unk_0x68F4C0EC296D3901(uLocal_125[iParam0], 1) };
			}
			else
			{
				vVar9 = { unk_0x68F4C0EC296D3901(uLocal_55[iParam0], 1) };
			}
			vVar6 = { unk_0x68F4C0EC296D3901(uLocal_55[iParam0], 1) + vVar9 / Vector(2f, 2f, 2f) };
			fVar12 = (vdist(vVar6, unk_0x68F4C0EC296D3901(uLocal_55[iParam0], 1)) - 0,1f);
			if (!unk_0xF65264B66E133BD8(vVar6, fVar12, 0, 1, 1, 0, 0, uLocal_55[iParam0], 0))
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0))
				{
				}
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0, &(Local_317[iParam0]), &(Local_398[iParam0]), 1,5f, -1,5f);
			}
			if (!unk_0x69DF961355195C3C(iLocal_695[iParam0]))
			{
			}
			else
			{
				if (unk_0x869EFD0BC0868856(uLocal_55[iParam0]))
				{
					unk_0xA3BF0AA5A2608191(uLocal_55[iParam0]);
					iLocal_63[iParam0] = 0;
					func_239(iVar0, 137);
				}
				if (!unk_0x440C646F2F11A2A1(uLocal_55[iParam0], 453432689, 0))
				{
					unk_0x262EF6C6306BEA6C(uLocal_55[iParam0], 453432689, -1, 1, 1);
				}
				else
				{
					fVar13 = unk_0xA45992A6CE82FB43(iLocal_695[iParam0]);
					bVar14 = false;
					if (unk_0xC844350D5D58C99A(uLocal_75[iParam0]))
					{
						if (!unk_0xB87D13D0C064E9D1(uLocal_75[iParam0], unk_0x16F2683693E537C9(), 1))
						{
							bVar14 = true;
						}
						else
						{
							unk_0x1E9649458B15960F(uLocal_75[iParam0], false);
						}
					}
					else
					{
						bVar14 = true;
					}
					if (unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
					{
						if (!unk_0xB87D13D0C064E9D1(uLocal_125[iParam0], unk_0x16F2683693E537C9(), 1))
						{
							bVar14 = true;
						}
						else
						{
							unk_0x1E9649458B15960F(uLocal_125[iParam0], false);
						}
					}
					else
					{
						bVar14 = true;
					}
					if (!bVar14)
					{
						iLocal_63[iParam0] = 0;
						func_239(iVar0, 138);
					}
					fVar15 = -1f;
					fVar16 = -1f;
					if (unk_0xDC2A248C2CB7B3DB(&(Local_317[iParam0]), &(Local_398[iParam0]), "shoot", &fVar15, &fVar16))
					{
						if (fVar15 > 0f && fVar16 > 0f)
						{
							if (fVar13 >= fVar15 && fVar13 <= (fVar16 + 0,1f))
							{
								if (iLocal_63[iParam0] == 0)
								{
									vVar17 = { 0,1f, 0f, 0,043f };
									if (unk_0xC844350D5D58C99A(uLocal_75[iParam0]))
									{
										vVar20 = { unk_0x68E4ADDDDCD7BDDE(uLocal_75[iParam0], vVar17 + Vector(0f, 0f, 2f)) };
										unk_0x1E9649458B15960F(uLocal_75[iParam0], false);
									}
									else if (unk_0xC844350D5D58C99A(uLocal_125[iParam0]))
									{
										vVar20 = { unk_0x68E4ADDDDCD7BDDE(uLocal_125[iParam0], vVar17 + Vector(0f, 0f, 2f)) };
										unk_0x1E9649458B15960F(uLocal_125[iParam0], false);
									}
									else
									{
										iLocal_63[iParam0] = 0;
										func_239(iVar0, 138);
									}
									unk_0x9DD8618CA5BF832D(uLocal_55[iParam0], 62, true);
									unk_0x2D728BBC95A0267D(uLocal_55[iParam0], vVar20, 0);
									iLocal_63[iParam0]++;
								}
							}
							else
							{
								iLocal_63[iParam0] = 0;
							}
						}
						else
						{
							iLocal_63[iParam0] = 0;
						}
					}
					else
					{
						iLocal_63[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		
		case 122:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "KIDNAPPED_WIFE_CLEANING", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			break;
		
		case 123:
			if (func_246(iParam1, &(uLocal_224[iParam0]), &(iLocal_230[iParam0]), "KIDNAPPED_WIFE_DOES_GARDEN_WORK", "", 0, &(Local_236[iParam0]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185 + Vector(1f, 0f, 0f), fLocal_188);
			func_207(1);
			break;
		
		case 124:
			if (iParam0 == 3)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[iParam0]), &(Local_398[iParam0]), vLocal_185, fLocal_188, &(iLocal_695[3]), 1, 1);
				if (Global_93750[8] != iParam1)
				{
					iLocal_63[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			else if (unk_0xC844350D5D58C99A(uLocal_55[iParam0]))
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_317[3]), &(Local_398[iParam0]), Local_398[3], "_PATRICIA", &(iLocal_695[3]));
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, vLocal_185, fLocal_188, &(iLocal_695[iParam0]), 1, 0, &(Local_317[iParam0]), &(Local_398[iParam0]), 1090519040, -1056964608);
			}
			if (Global_30813 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 125:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			func_189(51, 4);
			if (unk_0xEA6BC48857E0AC4C(&cLocal_500))
			{
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_528, "FMTAUD", &Local_479, &uLocal_516, &(uLocal_522[iParam0]), 7,5f, "FMT_5_1", 0))
				{
					cLocal_500 = { Local_479[0] };
				}
			}
			else
			{
				iVar23 = (uLocal_522[iParam0] - 1);
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_528, "FMTAUD", &Local_479, &uLocal_516, &iVar23, 7,5f, &cLocal_500, 0))
				{
					StringCopy(&cLocal_500, "", 16);
				}
			}
			break;
		
		case 137:
			func_108(uLocal_55[iParam0], iVar0, vLocal_185, 1082130432, 1);
			break;
		
		case 138:
			func_105(uLocal_55[iParam0], iVar0, &(iLocal_63[iParam0]), &(uLocal_75[iParam0]), &(iLocal_81[iParam0]), &(uLocal_125[iParam0]), &(iLocal_131[iParam0]), &(uLocal_69[iParam0]), &(iLocal_695[iParam0]));
			break;
		
		case 140:
		case 141:
			break;
		
		default:
			break;
	}
	if (Global_93750[iVar0] != iParam1)
	{
		func_104(iVar0, Global_93750[iVar0], &(vLocal_189[iParam0]), &(uLocal_205[iParam0]));
		func_98(uLocal_55[iParam0], iVar0, Global_93749, 1);
		func_97(iParam0);
		iLocal_230[iParam0] = -1;
	}
}

void func_97(int iParam0)
{
	iVar0 = func_366(iParam0);
	iLocal_81[iParam0] = 0;
	iLocal_87[iParam0] = -1;
	vLocal_93[iParam0] = { 0f, 0f, 0f };
	vLocal_109[iParam0] = { 0f, 0f, 0f };
	iLocal_131[iParam0] = 0;
	iLocal_137[iParam0] = -1;
	vLocal_143[iParam0] = { 0f, 0f, 0f };
	vLocal_159[iParam0] = { 0f, 0f, 0f };
	switch (Global_93750[iVar0])
	{
		case 100:
		case 101:
		case 119:
			iLocal_131[iParam0] = -1964402432;
			iLocal_137[iParam0] = 28422;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 106:
			iLocal_81[iParam0] = 985101275;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 105:
		case 120:
			iLocal_81[iParam0] = -769322496;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			iLocal_131[iParam0] = -1414337382;
			iLocal_137[iParam0] = 28422;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			if (Global_93750[iVar0] == 120)
			{
				iLocal_176 = -274348208;
				iLocal_177 = -1;
				vLocal_178 = { -0,12f, -0,954f, -0,772f };
				vLocal_181 = { 0f, 0f, -6f };
			}
			break;
		
		case 121:
			iLocal_81[iParam0] = -1620762220;
			iLocal_87[iParam0] = -1;
			vLocal_93[iParam0] = { -6,463f, 6,136f, 0,324f };
			vLocal_109[iParam0] = { 0f, 0f, -42f };
			iLocal_131[iParam0] = -1620762220;
			iLocal_137[iParam0] = -1;
			vLocal_143[iParam0] = { -6,644f, 5,982f, 0,324f };
			vLocal_159[iParam0] = { 0f, 0f, -3f };
			break;
		
		case 114:
			iLocal_81[iParam0] = -1461673141;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			iLocal_131[iParam0] = unk_0x6B7EC7B5B6B57364(-1813897027);
			iLocal_137[iParam0] = -1;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 109:
			iLocal_81[iParam0] = -1620762220;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 110:
		case 111:
			iLocal_81[iParam0] = 413312110;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 104:
		case 112:
			iLocal_81[iParam0] = -680040094;
			iLocal_87[iParam0] = 60309;
			vLocal_93[iParam0] = { 0f, 0f, 0f };
			vLocal_109[iParam0] = { 0f, 0f, 0f };
			iLocal_131[iParam0] = -693475324;
			iLocal_137[iParam0] = 28422;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 123:
			iLocal_131[iParam0] = -1934174148;
			iLocal_137[iParam0] = 28422;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			break;
		
		case 122:
			iLocal_131[iParam0] = 1411425721;
			iLocal_137[iParam0] = 28422;
			vLocal_143[iParam0] = { 0f, 0f, 0f };
			vLocal_159[iParam0] = { 0f, 0f, 0f };
			break;
		
		default:
			break;
	}
}

int func_98(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		return 0;
	}
	if (((iParam1 != 3 && Global_93750[iParam1] != 47) && Global_93750[iParam1] != 137) && Global_93750[iParam1] != 138)
	{
		unk_0xA3BF0AA5A2608191(iParam0);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	unk_0x9DD8618CA5BF832D(iParam0, 60, true);
	unk_0x4E885A246A9D983A(iParam0, 104, 1);
	unk_0x8685456FA9090367(iParam0, 0);
	iVar0 = 1;
	unk_0x9DD8618CA5BF832D(iParam0, 62, true);
	unk_0x4E885A246A9D983A(iParam0, 294, 1);
	if (Global_93750[iParam1] == 121 || Global_93750[iParam1] == 118)
	{
	}
	else
	{
		unk_0x5E678B691C852774(iParam0, 2);
		iVar0 = 1;
	}
	if (Global_93750[iParam1] == 108)
	{
		unk_0x5E678B691C852774(iParam0, 64);
		iVar0 = 1;
	}
	if (func_103(iParam1, &fVar3))
	{
		unk_0x7EB60BF335619074(iParam0, fVar3);
		iVar1 = 1;
	}
	if (!bParam3)
	{
		if (func_101(iParam0, iParam1))
		{
			iVar2 = 1;
		}
	}
	func_100(&iParam0, iParam2);
	if (Global_93750[iParam1] == 116)
	{
		unk_0xA90E56A05B146319(iParam0, 1, 20, 0);
		iVar0 = 1;
	}
	else if (Global_93750[iParam1] == 41)
	{
	}
	else
	{
		unk_0xA90E56A05B146319(iParam0, 1, 0, 1);
		iVar0 = 1;
	}
	if (func_99(Global_93750[iParam1]))
	{
		unk_0xDCDFC17557D5706C(iParam0, "mood_sleeping_1", 0);
		iVar0 = 1;
	}
	else
	{
		unk_0x16BEAC335EC5109B(iParam0);
	}
	if ((iVar0 || iVar1) || iVar2)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 42:
		case 43:
		case 65:
		case 66:
		case 135:
			return 1;
			break;
	}
	return 0;
}

void func_100(int iParam0, int iParam1)
{
	unk_0x25C5402CC10F76CD(*iParam0, false);
	unk_0x4E885A246A9D983A(*iParam0, 20, 1);
	unk_0x5E678B691C852774(*iParam0, 16);
	if (iParam1 != -86095805)
	{
		unk_0x6DF7BF67E86AAE86(*iParam0, iParam1);
	}
}

int func_101(int iParam0, int iParam1)
{
	sVar1 = "";
	iVar2 = 0;
	switch (Global_93750[iParam1])
	{
		case 52:
		case 67:
		case 74:
			sVar1 = "V_Michael_G_Hall";
			iVar2 = unk_0x0D1736C2E221BCEA(-812,6f, 179,4f, 72,2f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x12AB0310C2281427(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 56:
		case 57:
			if (iParam1 == 0)
			{
				sVar1 = "V_Michael_1_Hall";
				iVar2 = unk_0x0D1736C2E221BCEA(-812,2079f, 181,3398f, 71,153f, "v_michael");
				if (func_102(iParam0, iVar2, unk_0x12AB0310C2281427(sVar1)))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!Global_3)
				{
					unk_0xE30A11DA03502606(iParam0);
				}
				iVar0 = 0;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			sVar1 = "V_Michael_1_Hall";
			iVar2 = unk_0x0D1736C2E221BCEA(-812,2079f, 181,3398f, 71,153f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x12AB0310C2281427(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 47:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = unk_0x0D1736C2E221BCEA(-803,4384f, 182,9567f, 73,2608f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x12AB0310C2281427(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 75:
		case 84:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = unk_0x0D1736C2E221BCEA(-803,4384f, 182,9567f, 73,2608f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x12AB0310C2281427(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		default:
			if (!Global_3)
			{
			}
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x31609A585163CBAC(iParam1))
	{
		if (unk_0xBD307E66C0669BFC(iParam1))
		{
			unk_0xF2BFB495D7D174E8(iParam0, iParam1, iParam2);
			return 1;
		}
		else
		{
			unk_0xAA738CBC845A2BD8(iParam0, iParam1);
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0, var uParam1)
{
	switch (Global_93750[iParam0])
	{
		case 11:
			*uParam1 = 0,4f;
			return 1;
			break;
		
		case 12:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 13:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 14:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 15:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 20:
			*uParam1 = 0,5f;
			return 1;
			break;
		
		case 37:
			*uParam1 = 1,25f;
			return 1;
			break;
		
		case 33:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 79:
		case 86:
		case 80:
			*uParam1 = 0,5f;
			return 1;
			break;
		
		case 81:
			*uParam1 = 0,5f;
			return 1;
			break;
		
		case 50:
		case 69:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 90:
			*uParam1 = 1f;
			return 1;
			break;
		
		case 107:
			*uParam1 = 0,5f;
			return 1;
			break;
		
		case 108:
			*uParam1 = 0,8f;
			return 1;
			break;
		
		case 121:
			*uParam1 = 0,75f;
			return 1;
			break;
		
		case 112:
			*uParam1 = 1,5f;
			return 1;
			break;
		
		case 113:
			*uParam1 = 1,25f;
			return 1;
			break;
		
		case 123:
			*uParam1 = 0,8f;
			return 1;
			break;
		
		case 126:
			*uParam1 = 0,5f;
			return 1;
			break;
		
		case 137:
		case 138:
			if (iParam0 == 13 || iParam0 == 13)
			{
				*uParam1 = 0,3f;
				return 1;
			}
			break;
	}
	*uParam1 = 0f;
	return 0;
}

int func_104(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13,904f, 1,193f, 0,7f };
					*fParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1,1731f, 0,809f) };
						*fParam3 = (*fParam3 + (456,7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71,8356f, 180,5483f, -796,9911f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((16f - 222,8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10,9793f, -5,9f, 4,6f };
					*fParam3 = 163,0716f;
					return 1;
					break;
				
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0,5f, -1,2f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71,835f, 180,548f, -796,991f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = (((16f + 90f) - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6,8878f, -5,5247f, 1,5228f };
					*fParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,1937f, -9,0309f, 4,5877f };
					*fParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,4577f, -9,6399f, 4,5876f };
					*fParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,799f, -9,41f, 4,5877f };
					*fParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_104(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12,552f, 4,373f, (4,6f + 1f) };
					*fParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0,4395f, -11,0022f, 0,0747f };
					*fParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5,5001f, -12,4406f, 4,6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,5f, -9,1f, 4,6f };
					*fParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0,849f, 1,575f, 0f };
					*fParam3 = 272,857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8,183f, -3,0467f, 5,5876f };
					*fParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9,383f, -3,3887f, 5,73f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,488f, -9,098f, 5,4864f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9,04f, 5,71f, 1,44f };
					*fParam3 = 159,3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,25f, -9,53f, 4,588f };
					*fParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11,0022f, -0,4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0,5f, 0,5f), unk_0x79833B02DBD2A244(-0,5f, 0,5f)) };
					*fParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60,2063f, 141,5129f, -863,5425f) - Vector(71,1531f, 179,5117f, -812,0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0,95f, 0,95f, 0,95f) };
					*fParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71,8266f, 180,4725f, -796,7593f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((26,087f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72,6876f, 173,987f, -805,173f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((13f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72,8447f, 172,4196f, -803,1823f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((-28,7112f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27,9648f, 8,3766f, 0,7f };
					*fParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0,6f, -6,5f, 10,3f) + Vector(0,1f, 0f, 0f) };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0,3142f, -10,9926f, 0,0747f };
					*fParam3 = 304,1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,3f, -6,5f, 4,6f };
					*fParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_104(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,505f, -10,9717f, 4,6019f };
					*fParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12,7165f, 4,7109f, (4,6f + 1f) };
					*fParam3 = 310,6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,0529f, -8,9175f, 1,6907f };
					*fParam3 = 102,156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,4799f, -7,5315f, 0,682f };
					*fParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,352f, -3,356f, 5,7338f };
					*fParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,3003f, -10,3127f, 4,5874f };
					*fParam3 = 262,789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,76f, -5,95f, 4,59f };
					*fParam3 = 177,6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,6691f, -7,6405f, 0,6817f };
					*fParam3 = 159,156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1,228f, 4,044f, 0,7665f };
					*fParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,2365f, -7,6073f, 6,2761f };
					*fParam3 = 157,0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,161f, -7,562f, 2,17f };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,7668f, -7,8757f, 5,5559f };
					*fParam3 = 144,6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,6257f, -9,4927f, 5,5876f };
					*fParam3 = 257,4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_104(iParam0, 26, uParam2, fParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8,4451f, 3,1568f, 1,47f };
					*fParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9,0477f, -7,9397f, 0,6817f };
					*fParam3 = 88,5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21,7f, 9f, 1,7029f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1,3278f, 1,534f, 0f };
					*fParam3 = 159,72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3,0265f, 1,7627f, 0,1273f };
					*fParam3 = 338,5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15,2374f, 8,723f, 1,4495f };
					*fParam3 = 205,677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28,7f, 8,8241f, 0,6f };
					*fParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1,1936f, -9,0107f, 9,0567f) + Vector((0,03f - 0,02f), 0f, 0f) };
					*fParam3 = 94,2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5,2891f, 2,0403f, -2,8213f) + Vector((0,03f - 0,05f), 0f, 0f) };
					*fParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,84f };
					*fParam3 = 311,4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,8418f };
					*fParam3 = 306,6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5,8092f, 5,7965f, 3,85f };
					*fParam3 = 337,4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13,3221f, 0,0684f, 0,6817f };
					*fParam3 = 277,317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_104(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*fParam3 = (*fParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2,235f, 1,725f, 4,5877f };
					*fParam3 = 172,714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75,7407f, 181,264f, -814,246f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((-158f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76,7233f, 181,114f, -812,896f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*fParam3 = ((-164f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7,394f, 5,368f, 1,451f };
					*fParam3 = 235,0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1,0704f, -1,4624f, 0,999f };
					*fParam3 = 157,44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14,8186f, 6,8253f, 0,5f };
					*fParam3 = 87,3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13,6486f, 6,2253f, 0,45f };
					*fParam3 = 262,32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_104(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16,319f, -1,375f, 0,6817f };
					*fParam3 = 334,126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0,39f, 3,27f, 0f };
					*fParam3 = 154,126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,0213f, 6,9622f, 1,39f };
					*fParam3 = 142,889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,128f, 6,842f, 0,4524f };
					*fParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9019f, -23,8349f, -2,1f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9937f, -24,9005f, -2,18f };
					*fParam3 = 314,2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31,7401f, -1,0943f, 0,6822f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27,1728f, -3,75f, -1,626f };
					*fParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14,7722f, -10,9336f, -0,537f };
					*fParam3 = 110,8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17,2536f, 2,451f, -0,6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23,9716f, -20,3533f, -3,18f };
					*fParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,1416f, -2,0799f, -0,0145f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,2746f, -4,1995f, -0,0144f };
					*fParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2,983f, -4,094f, 0,4629f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5,5235f, 2,9133f, 0,7288f };
					*fParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30,7131f, -1454,676f, -42,2059f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*fParam3 = (84,7009f - 188,5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30,6803f, -1455,848f, -40,7478f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*fParam3 = (90,6417f - 188,5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2,0126f, 0,3422f, -0,0086f };
					*fParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,2931f, 1,4476f, 1,0127f };
					*fParam3 = 61,7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0,0158f, 1,4182f, 0,9913f };
					*fParam3 = 119,008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3,467f, 0,074f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,1014f, -5,4089f, -0,013f };
					*fParam3 = 123,753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,802f, -6,3295f, -0,01f };
					*fParam3 = 42,757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2,156f, -4,9564f, 1,4886f };
					*fParam3 = 136,309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7,2656f, 3,022f, -0,9061f };
					*fParam3 = 92,8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0,5066f, 1,6992f, 0,0168f };
					*fParam3 = 115,77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0,2121f, -6,2791f, -0,0089f };
					*fParam3 = 114,3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8,2458f, -0,7136f, -0,2503f };
					*fParam3 = 252,2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2,334f, 1,6889f, 0,586f };
					*fParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0,6331f, 1,2093f, -0,0086f };
					*fParam3 = 137,1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3,887f, -0,166f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3,5179f, 9,1355f, -1f };
					*fParam3 = 141,79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0,15f, -1,9326f, -6,013f) + Vector(1f, 0f, 0f) };
					*fParam3 = 121,6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,2823f, 2,2595f, -1,0742f };
					*fParam3 = (170,2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,077f, -5,1446f, 0,9904f };
					*fParam3 = 107,1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12,903f, -6,623f, -0,0406f };
					*fParam3 = 63,48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,5514f, 5,393f, -0,0998f };
					*fParam3 = 327,483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0,9794f, -0,3043f, 0f };
					*fParam3 = 179,7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11,9759f, 1f, -1,0728f };
					*fParam3 = 238,9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0,576f, 1,671f, 0,601f };
					*fParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0,6532f, 0,9556f, -0,0087f };
					*fParam3 = 121,0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0,18f, -4,173f, 0,9981f };
					*fParam3 = 216,61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,5937f, 0,3521f, 1f };
					*fParam3 = 119,4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*fParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*fParam3 = (32f - 90,6729f);
						return 1;
					}
					if (func_7())
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*fParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*fParam3 = (32f - 90,6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10,6327f, -1519,561f, -1156,422f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*fParam3 = (102f - 90,6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2,8352f, 0,0552f, 0f };
					*fParam3 = 334,44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_104(iParam0, 130, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*fParam3 = (*fParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7,213f, -1,4536f, 0,9981f };
					*fParam3 = 42,6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9,6327f + 1f), -1518,736f, -1148,466f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*fParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5,24f, 6,217f, 0,998f };
					*fParam3 = 315,72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,6447f, 0,7635f, 1,0507f };
					*fParam3 = 296,683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3,968f, -1,04f, 0f };
					*fParam3 = 214,92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4,617f, -1,1314f, 0f };
					*fParam3 = 39,4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*fParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*fParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	if (unk_0x69DF961355195C3C(*uParam8))
	{
		unk_0xB46854F2D1C7DFA9(*uParam8);
	}
	if (*uParam8 != -1)
	{
		*uParam8 = -1;
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xD1960163A3042274(iParam0, 1805844857) != 1)
		{
			iVar11 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, -1);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (unk_0xC844350D5D58C99A(uVar0[iVar12]) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar12]))
				{
					if (unk_0x0A5D59F37DC7E974(uVar0[iVar12]) == 6)
					{
						unk_0xF3268524E9BE6D6E(iParam0, uVar0[iVar12], 75f, -1, 1, 0);
						*uParam2 = 0;
						return 0;
					}
				}
				iVar12++;
			}
			if (unk_0xD1960163A3042274(iParam0, -251125078) != 1)
			{
				unk_0xEEB67C3D0A71A47B(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 75f, -1, 1, 0);
				*uParam2 = 0;
				return 0;
			}
		}
		if (unk_0xC844350D5D58C99A(*uParam3))
		{
			if (unk_0x50B5F6F3C29E9380(*uParam3, iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*uParam3, 1, 1);
				if (unk_0x50B5F6F3C29E9380(*uParam3, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(iParam0, 1, 1);
				}
				*uParam4 = 0;
				*uParam3 = 0;
			}
		}
		if (unk_0xC844350D5D58C99A(*uParam5))
		{
			if (unk_0x50B5F6F3C29E9380(*uParam5, iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*uParam5, 1, 1);
				if (unk_0x50B5F6F3C29E9380(*uParam5, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(iParam0, 1, 1);
				}
				*uParam6 = 0;
				*uParam5 = 0;
			}
		}
		if (unk_0xC844350D5D58C99A(*uParam7))
		{
			if (unk_0x50B5F6F3C29E9380(*uParam7, iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*uParam7, 1, 1);
				if (unk_0x50B5F6F3C29E9380(*uParam7, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(iParam0, 1, 1);
				}
				*uParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_108(iParam0, iParam1, unk_0x68F4C0EC296D3901(iParam0, 0), 40f, 1))
			{
				unk_0x5E678B691C852774(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (unk_0xC844350D5D58C99A(*uParam3))
			{
				if (unk_0x50B5F6F3C29E9380(*uParam3, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(*uParam3, 1, 1);
					*uParam3 = 0;
				}
			}
			if (unk_0xC844350D5D58C99A(*uParam5))
			{
				if (unk_0x50B5F6F3C29E9380(*uParam5, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(*uParam5, 1, 1);
					*uParam3 = 0;
				}
			}
			if (unk_0xC844350D5D58C99A(*uParam7))
			{
				if (unk_0x50B5F6F3C29E9380(*uParam7, iParam0))
				{
					unk_0x15AFB6CBDE990FB6(*uParam7, 1, 1);
					*uParam7 = 0;
				}
			}
			if (unk_0xD1960163A3042274(iParam0, 713668775) != 1)
			{
				if (!unk_0x405E212DDE472467(iParam0, 1))
				{
					unk_0x96167B03C5A77156(iParam0, func_107(iParam0, iParam1, 1), 1f, -1, 0,25f, 0, 1193033728);
					return 0;
				}
			}
			else
			{
				wait(5);
				if (unk_0xEB6A8945D1AC98A1(iParam0))
				{
					return 0;
				}
				iVar13 = unk_0xCC2A4E7AEDA758DE(iParam0, &uVar14, &uVar15);
				if (iVar13 != 2)
				{
					*uParam2 = 1;
					return 0;
				}
				else
				{
					unk_0xA3BF0AA5A2608191(iParam0);
					unk_0x96167B03C5A77156(iParam0, func_107(iParam0, iParam1, 0), 1f, -1, 0,25f, 0, 1193033728);
					wait(0);
					if (!unk_0xEB6A8945D1AC98A1(iParam0) && unk_0xD1960163A3042274(iParam0, 713668775) == 1)
					{
						iVar13 = unk_0xCC2A4E7AEDA758DE(iParam0, &uVar14, &uVar15);
						if (iVar13 != 2)
						{
							*uParam2 = 1;
							return 0;
						}
					}
				}
			}
			sVar16 = "PROP_HUMAN_SEAT_CHAIR";
			bVar17 = true;
			if (func_106(69, &iVar18, &iVar19, &iVar20, &iVar21))
			{
				if (iParam1 == iVar18)
				{
					if (unk_0x36C584991B4C183F(iParam0, iVar19) == iVar20 && unk_0xDADA8E1DD0D0D9D9(iParam0, iVar19) == iVar21)
					{
						if (unk_0x035491B0E495A4C1(sVar16))
						{
							unk_0xCD7D80FD792F9954(sVar16, 0);
							bVar17 = false;
						}
					}
				}
			}
			if (unk_0xD1BF3090E1F8300E(unk_0x68F4C0EC296D3901(iParam0, 0)))
			{
				if (!unk_0x405E212DDE472467(iParam0, 1))
				{
					unk_0xE972B33144E77B35(iParam0, 16);
					unk_0xE972B33144E77B35(iParam0, 8192);
					unk_0x01E4BB5190DF7317(iParam0, 1193033728, 0);
					*uParam2 = 1;
					return 0;
				}
			}
			break;
		
		case 1:
			if (func_108(iParam0, iParam1, unk_0x68F4C0EC296D3901(iParam0, 0), 40f, 1))
			{
				unk_0x5E678B691C852774(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (!unk_0x4742C50E93110B10(unk_0x68F4C0EC296D3901(iParam0, 1), 5f, 1))
			{
			}
			else if (unk_0x26AFD4C55F0EAAC1(unk_0x68F4C0EC296D3901(iParam0, 1), 5f, 1))
			{
			}
			else
			{
				if (bVar17)
				{
				}
				if (Global_30813 == 3)
				{
					if (!unk_0xEA6BC48857E0AC4C(sVar16) && unk_0x035491B0E495A4C1(sVar16))
					{
						unk_0xCD7D80FD792F9954(sVar16, 0);
						return 0;
					}
				}
				if (!unk_0xD1960163A3042274(iParam0, 1647992574) != 1)
				{
					unk_0x4A35AD9FC803369E(iParam0, unk_0x68F4C0EC296D3901(iParam0, 1), 5f, 0);
				}
				else
				{
					unk_0x5E678B691C852774(iParam0, 8208);
					*uParam2 = 2;
					return 0;
				}
			}
			if (unk_0xD1960163A3042274(iParam0, 713668775) == 1)
			{
				iVar22 = unk_0xCC2A4E7AEDA758DE(iParam0, &uVar23, &uVar24);
				if (iVar22 == 2)
				{
					vVar25 = { func_107(iParam0, iParam1, 0) };
					unk_0xA3BF0AA5A2608191(iParam0);
					unk_0x96167B03C5A77156(iParam0, vVar25, 1f, -1, 0,25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
				return 0;
			}
			if (unk_0xD1960163A3042274(iParam0, 923520851) == 1 || unk_0xD1960163A3042274(iParam0, -1146898486) == 1)
			{
				iVar28 = unk_0xCC2A4E7AEDA758DE(iParam0, &uVar29, &uVar30);
				if (iVar28 == 2)
				{
					unk_0x96167B03C5A77156(iParam0, func_107(iParam0, iParam1, 1), 1f, -1, 0,25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (unk_0x869EFD0BC0868856(iParam0))
			{
				unk_0x5E678B691C852774(iParam0, 8208);
				*uParam2 = 0;
				return 0;
			}
			if (((unk_0xD1960163A3042274(iParam0, 923520851) == 1 || unk_0xD1960163A3042274(iParam0, -1146898486) == 1) || unk_0xD1960163A3042274(iParam0, 713668775) == 1) || unk_0xD1960163A3042274(iParam0, -1146898486) == 1)
			{
			}
			else
			{
				*uParam2 = 0;
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (unk_0xD1960163A3042274(iParam0, 1647992574) != 1)
			{
				if (!Global_30813 == 3)
				{
					if (unk_0x4742C50E93110B10(unk_0x68F4C0EC296D3901(iParam0, 1), 5f, 1))
					{
						unk_0x4A35AD9FC803369E(iParam0, unk_0x68F4C0EC296D3901(iParam0, 1), 5f, 0);
						iVar31 = unk_0xCC2A4E7AEDA758DE(iParam0, &uVar32, &uVar33);
						if (iVar31 == 2 || iVar31 == 0)
						{
							vVar34 = { func_107(iParam0, iParam1, 1) };
							unk_0x96167B03C5A77156(iParam0, vVar34, 1f, -1, 0,25f, 0, 1193033728);
							*uParam2 = 0;
							return 0;
						}
					}
					else
					{
						*uParam2 = 1;
						return 0;
					}
				}
				else
				{
					vVar37 = { func_107(iParam0, iParam1, 1) };
					unk_0x96167B03C5A77156(iParam0, vVar37, 1f, -1, 0,25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (!unk_0xC7441A1068F3F171(iParam0))
			{
			}
			else
			{
				iVar40 = unk_0xCC2A4E7AEDA758DE(iParam0, &fVar41, &iVar42);
				if (func_108(iParam0, iParam1, unk_0x68F4C0EC296D3901(iParam0, 0), 40f, 1))
				{
					return 1;
				}
				if (iVar42 > 0)
				{
					if (unk_0x26AFD4C55F0EAAC1(unk_0x68F4C0EC296D3901(iParam0, 1), (fVar41 + 0,5f), 1))
					{
						iVar40 = iVar40;
						unk_0xA3BF0AA5A2608191(iParam0);
						*uParam2 = 1;
						return 0;
					}
				}
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	return 0;
}

int func_106(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 1:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 3:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 4:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 5:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 6:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 7:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 8:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 9:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 10:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 11:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 12:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 13:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 14:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 15:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 16:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 17:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 18:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 19:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 20:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 21:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 22:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 23:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 25:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 26:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 27:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 28:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 24:
			*uParam1 = 1;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 29:
			*uParam1 = 1;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 31:
			*uParam1 = 1;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 30:
			*uParam1 = 1;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 32:
			*uParam1 = 1;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 33:
			*uParam1 = 1;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			*uParam1 = 1;
			*iParam2 = 12;
			return 0;
			break;
		
		case 44:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 45:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 46:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 47:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 48:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 49:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 50:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 51:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 52:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 53:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 54:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 55:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 57:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 58:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 59:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 60:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 61:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 62:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 7;
			*iParam4 = 0;
			return 1;
			break;
		
		case 63:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 64:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 65:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 66:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 67:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 68:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 69:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 70:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 71:
			*uParam1 = 2;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 72:
			*uParam1 = 2;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 74:
			*uParam1 = 2;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 75:
			*uParam1 = 2;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 76:
			*uParam1 = 2;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 77:
			*uParam1 = 2;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 78:
			*uParam1 = 2;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
			*uParam1 = 2;
			*iParam2 = 12;
			return 0;
			break;
		
		case 89:
			*uParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 90:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 91:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 92:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 93:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 94:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 2;
			return 1;
			break;
		
		case 96:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 97:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 98:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 99:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 100:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 101:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 102:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 103:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 104:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 105:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 106:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 107:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 108:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 109:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 110:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 111:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 112:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 113:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 114:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 115:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 116:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 117:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 2;
			return 1;
			break;
		
		case 118:
			*uParam1 = 0;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 119:
			*uParam1 = 0;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 120:
			*uParam1 = 0;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 121:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 122:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 123:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 124:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 125:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 126:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 127:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 128:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 129:
			*uParam1 = 0;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 130:
			*uParam1 = 0;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			*uParam1 = 0;
			*iParam2 = 12;
			return 0;
			break;
		
		case 136:
			*uParam1 = 13;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 137:
			*uParam1 = 13;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 138:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 139:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 140:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 141:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 142:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 143:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 144:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 145:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 146:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 147:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 148:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 149:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 150:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 151:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 152:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 153:
			*uParam1 = 13;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 154:
			*uParam1 = 13;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 155:
			*uParam1 = 13;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 156:
			*uParam1 = 13;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 157:
			*uParam1 = 13;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 158:
		case 159:
		case 160:
		case 161:
			*uParam1 = 13;
			*iParam2 = 12;
			return 0;
			break;
	}
	*uParam1 = 16;
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	return 0;
}

Vector3 func_107(int iParam0, int iParam1, bool bParam2)
{
	vVar31 = { unk_0x68E4ADDDDCD7BDDE(iParam0, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(10f, 50f), 0f) };
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			vVar0[0] = { -821,1343f, 155,6063f, 69,2348f };
			vVar0[1] = { -793,1925f, 165,5698f, 70,3529f };
			vVar0[2] = { -802,1196f, 191,1686f, 71,835f };
			vVar0[3] = { -779,3063f, 184,1423f, 71,8354f };
			vVar0[4] = { -781,6624f, 155,8212f, 66,4745f };
			vVar0[5] = { -815,5585f, 179,7955f, 71,1531f };
			vVar0[6] = { -806,1222f, 169,9548f, 71,8347f };
			vVar0[7] = { -794,8763f, 179,0604f, 71,8347f };
			vVar0[8] = { -798,2634f, 185,71f, 71,6055f };
			if (iParam1 == 0)
			{
				vVar0[9] = { -808,704f, 169,7271f, 75,7504f };
			}
			else if (iParam1 == 1)
			{
				vVar0[9] = { -800,1566f, 172,8743f, 75,7504f };
			}
			else if (iParam1 == 2)
			{
				vVar0[9] = { -815,927f, 179,6694f, 75,7407f };
			}
			else
			{
				vVar0[9] = { -802,9651f, 178,5574f, 75,7483f };
			}
			break;
		
		case 5:
		case 6:
		case 7:
			vVar0[0] = { -38,2037f, -1459,511f, 30,3994f };
			vVar0[1] = { -86,7261f, -1471,741f, 31,5351f };
			break;
		
		case 10:
		case 11:
		case 8:
		case 9:
			vVar0[0] = { 1980,718f, 3819,236f, 31,4324f };
			vVar0[1] = { 1974,146f, 3825,482f, 31,3671f };
			vVar0[2] = { 1989,261f, 3820,536f, 31,3665f };
			vVar0[3] = { 1971,335f, 3837,562f, 30,9977f };
			vVar0[4] = { 1975,625f, 3820,181f, 32,4501f };
			vVar0[5] = { 1969,577f, 3815,766f, 32,4287f };
			break;
		
		case 13:
			vVar0[0] = { -1148,791f, -1522,923f, 9,633f };
			vVar0[1] = { -1151,635f, -1521,531f, 3,3567f };
			vVar0[2] = { -1145,883f, -1542,178f, 3,3772f };
			vVar0[3] = { -1167,146f, -1505,143f, 3,3794f };
			vVar0[4] = { -1187,058f, -1532,172f, 3,3795f };
			vVar0[5] = { -1156,815f, -1517,506f, 9,6327f };
			vVar0[6] = { -1157,309f, -1525,37f, 9,6321f };
			vVar0[7] = { -1148,621f, -1519,622f, 9,6327f };
			vVar0[8] = { -1149,495f, -1513,108f, 9,6327f };
			if (Global_30813 == 4 || Global_30813 == 6)
			{
				vVar0[8] = { 0f, 0f, 0f };
			}
			else
			{
				vVar0[8] = { -1153,397f, -1522,325f, 9,6475f };
			}
			vVar31 = { unk_0x68E4ADDDDCD7BDDE(iParam0, unk_0x79833B02DBD2A244(-2,5f, 2,5f), unk_0x79833B02DBD2A244(5f, 10f), 0f) };
			break;
	}
	fVar35 = 1E+07f;
	iVar36 = 99;
	iVar37 = 0;
	iVar34 = 0;
	while (iVar34 < vVar0.x)
	{
		if (!func_14(vVar0[iVar34], 0f, 0f, 0f, 0))
		{
			fVar38 = unk_0x0EB28750412C3A5A(vVar31, vVar0[iVar34], 1);
			if (fVar38 < fVar35)
			{
				fVar35 = fVar38;
				iVar36 = iVar34;
			}
			iVar37++;
		}
		iVar34++;
	}
	iVar39 = iVar36;
	if (bParam2)
	{
		fVar35 = 1E+07f;
		iVar34 = 0;
		while (iVar34 < vVar0.x)
		{
			if (!func_14(vVar0[iVar34], 0f, 0f, 0f, 0))
			{
				fVar40 = unk_0x0EB28750412C3A5A(vVar31, vVar0[iVar34], 1);
				if (fVar40 < fVar35 && iVar34 != iVar36)
				{
					fVar35 = fVar40;
					iVar39 = iVar34;
				}
			}
			iVar34++;
		}
	}
	else
	{
		if (iVar37 == 0)
		{
			vVar41 = { IntToFloat(unk_0x09AC81E49EA267F7(-40, 40)), IntToFloat(unk_0x09AC81E49EA267F7(-40, 40)), 0f };
			if (unk_0xB885EF0389689E54(vVar41, 0, &vVar44, 0))
			{
				vVar41 = { vVar44 };
			}
			return vVar41;
		}
		iVar39 = unk_0x09AC81E49EA267F7(0, (iVar37 - 1));
	}
	vVar47 = { vVar0[iVar39] };
	if (unk_0xB885EF0389689E54(vVar0[iVar39], 0, &vVar50, 0))
	{
		vVar47 = { vVar50 };
	}
	if (func_14(vVar47, 0f, 0f, 0f, 0))
	{
		return vVar31;
	}
	return vVar47;
}

int func_108(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	if (vdist2(vParam2, unk_0x68F4C0EC296D3901(iParam0, 1)) > (fParam5 * fParam5))
	{
		if (unk_0xD1960163A3042274(iParam0, 713668775) != 1)
		{
			iVar0 = -1;
			fVar1 = 0,25f;
			unk_0x96167B03C5A77156(iParam0, vParam2, 1f, iVar0, fVar1, 0, 1193033728);
		}
	}
	else
	{
		if (unk_0x70EED0761B82965E(iParam0))
		{
			return 0;
		}
		if (func_110(iParam1, &iVar2, 1))
		{
			if (func_109(iParam1, iVar2))
			{
				func_239(iParam1, iVar2);
				return 1;
			}
		}
	}
	if (bParam6)
	{
		if (unk_0x70EED0761B82965E(iParam0))
		{
			return 0;
		}
		func_239(iParam1, 138);
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 20:
					if (func_22() == 0)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 29:
				case 41:
				case 44:
				case 45:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 53:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 75:
				case 84:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 92:
				case 93:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 6:
		case 7:
			switch (iParam1)
			{
				case 99:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 106:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 11:
			return 0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 126:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)
{
	if (Global_3)
	{
		switch (iParam0)
		{
			case 1:
				*uParam1 = 32;
				return 1;
				break;
			
			case 3:
				*uParam1 = 79;
				return 1;
				break;
			
			case 2:
				*uParam1 = 51;
				return 1;
				break;
		}
		*uParam1 = 141;
		return 0;
	}
	if (!bParam2)
	{
		if (func_185(iParam0, uParam1, &uVar0))
		{
			return 1;
		}
	}
	if (iParam0 == 2)
	{
		if (unk_0x991B1F0980C62628() && Global_96854 == 161)
		{
			return 0;
		}
		if (func_184() == 161)
		{
			return 0;
		}
	}
	if (*uParam1 != 141)
	{
		if (func_182(iParam0, *uParam1))
		{
			return 0;
		}
	}
	switch (unk_0xD8A54335F18763BA())
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_176(iParam0, uParam1);
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return func_170(iParam0, uParam1);
			break;
		
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return func_166(iParam0, uParam1);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return func_111(iParam0, uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_165(uParam1);
			break;
		
		case 1:
			return func_164(uParam1);
			break;
		
		case 2:
			return func_162(uParam1);
			break;
		
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_112(var uParam0)
{
	if (!func_94(64))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_94(65))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_76886 == 71)
	{
		if (!func_131(60f))
		{
			*uParam0 = 136;
			return 1;
		}
	}
	if (Global_76886 == 64)
	{
		*uParam0 = 140;
		return 0;
	}
	if ((func_130(71) || func_130(74)) || func_130(65))
	{
		*uParam0 = 140;
		return 0;
	}
	if (func_129(136) != 1)
	{
		iVar0[0] = 126;
		fVar9[0] = 20f;
	}
	else
	{
		iVar0[0] = 141;
		fVar9[0] = 0f;
	}
	if (func_94(20))
	{
		iVar0[1] = 127;
		fVar9[1] = 20f;
	}
	else
	{
		iVar0[1] = 141;
		fVar9[1] = 0f;
	}
	iVar0[2] = 130;
	fVar9[2] = 20f;
	iVar0[3] = 132;
	fVar9[3] = (20f / 3f);
	iVar0[4] = 133;
	fVar9[4] = (20f / 3f);
	iVar0[5] = 134;
	fVar9[5] = (20f / 3f);
	iVar0[6] = 135;
	fVar9[6] = 20f;
	iVar0[7] = 141;
	fVar9[7] = 20f;
	return func_113(13, &iVar0, &fVar9, uParam0);
}

int func_113(int iParam0, int iParam1, float fParam2, var uParam3)
{
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			fVar0 = (fVar0 + (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	fVar2 = unk_0x79833B02DBD2A244(0f, fVar0);
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			if (fVar2 < (*fParam2)[iVar1])
			{
				*uParam3 = (*iParam1)[iVar1];
				return 1;
			}
			fVar2 = (fVar2 - (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	*uParam3 = 141;
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (!func_94(20))
	{
		if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
		{
			if (func_31(2))
			{
				return 0;
			}
		}
	}
	if (iParam1 == Global_111638.f_18509[iParam0])
	{
		return 0;
	}
	if (func_119(iParam0, iParam1))
	{
		return 0;
	}
	if (func_118(iParam0, iParam1))
	{
		return 0;
	}
	if (func_117(iParam1))
	{
		return 0;
	}
	if (func_116(iParam0, iParam1))
	{
		return 0;
	}
	if (func_115(iParam1))
	{
		return 0;
	}
	if (func_184() == 161)
	{
		if ((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
		{
			return 0;
		}
	}
	return 1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 26:
		case 46:
		case 54:
		case 70:
		case 108:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
			iVar0 = unk_0x99910ECF8C64BEC6();
			iVar1 = unk_0x92EA5294EF5CA70E();
			iVar2 = 0;
			iVar3 = 0;
			if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar0 == -273223690)
			{
				iVar2 = 1;
			}
			if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -273223690)
			{
				iVar2 = 1;
			}
			if (iVar2 || iVar3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	if (Global_93750[iParam0] == 138)
	{
		return 0;
	}
	if (func_104(iParam0, iParam1, &vVar0, &uVar3))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				vVar0 = { vVar0 + Vector(71,1531f, 179,5117f, -812,0607f) };
				break;
			
			case 5:
			case 6:
			case 7:
				vVar0 = { vVar0 + Vector(30,116f, -1435,997f, -14,3064f) };
				break;
			
			case 10:
			case 8:
			case 9:
			case 11:
			case 12:
				vVar0 = { vVar0 + Vector(32,4374f, 3819,144f, 1974,613f) };
				break;
			
			case 13:
				vVar0 = { vVar0 + Vector(9,6346f, -1517,601f, -1152,571f) };
				break;
		}
		vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		if (vdist2(vVar0, vVar4) < (5f * 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			if (Global_93750[1] != 141 || Global_93750[2] != 141)
			{
				return 1;
			}
			break;
		
		case 19:
			if (Global_93750[1] != 141)
			{
				return 1;
			}
			break;
		
		case 56:
		case 57:
			if (Global_93750[0] != 141)
			{
				return 1;
			}
			break;
		
		case 58:
		case 74:
			if (Global_93750[1] != 141)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	switch (Global_76886)
	{
		case 19:
			if ((iParam1 == 7 || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			if (iParam0 == 4)
			{
				return 1;
			}
			break;
		
		case 49:
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case 52:
			if (((iParam1 == 7 || iParam1 == 23) || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			break;
	}
	if (iParam1 == 5)
	{
		if (func_94(18) && !func_94(20))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			return func_128(iParam0);
			break;
		
		case 31:
			return func_128(iParam0);
			break;
		
		case 7:
		case 22:
		case 23:
			return func_127(iParam0);
			break;
		
		case 27:
			return func_127(iParam0);
			break;
		
		case 51:
			return func_127(iParam0);
			break;
		
		case 36:
			return func_125(iParam0);
			break;
		
		case 55:
		case 71:
			return func_125(iParam0);
			break;
		
		case 34:
		case 35:
		case 19:
		case 25:
		case 32:
		case 33:
		case 4:
			if (func_125(iParam0) || func_124(iParam0))
			{
				return 1;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return func_123(iParam0);
			break;
		
		case 37:
			return func_123(iParam0);
			break;
		
		case 56:
			return func_123(iParam0);
			break;
		
		case 57:
			return func_123(iParam0);
			break;
		
		case 58:
			return func_123(iParam0);
			break;
		
		case 53:
			if (Global_93750[3] == 82 || Global_93750[3] == 83)
			{
				return 1;
			}
			break;
		
		case 5:
		case 21:
			return func_124(iParam0);
			break;
		
		case 26:
		case 46:
		case 54:
		case 70:
			return func_122(iParam0);
			break;
		
		case 82:
		case 83:
			return func_125(iParam0);
			break;
		
		case 124:
			if (Global_93750[8] == 140)
			{
				return 1;
			}
			break;
		
		case 119:
		case 107:
		case 110:
			return func_121(iParam0);
			break;
		
		case 118:
		case 121:
		case 108:
		case 114:
		case 116:
		case 123:
			return func_120(iParam0);
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != 10)
	{
		if (Global_93750[10] == 118 || Global_93750[10] == 121)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_93750[8] == 108)
		{
			return 1;
		}
	}
	if (iParam0 != 9)
	{
		if (Global_93750[9] == 114 || Global_93750[9] == 116)
		{
			return 1;
		}
	}
	if (iParam0 != 11)
	{
		if (Global_93750[11] == 123 || Global_93750[11] == 116)
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != 10)
	{
		if (Global_93750[10] == 119)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_93750[8] == 107 || Global_93750[8] == 110)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != 1)
	{
		if (Global_93750[1] == 26 || Global_93750[1] == 46)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_93750[2] == 54 || Global_93750[2] == 70)
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != 0)
	{
		if (((((Global_93750[0] == 12 || Global_93750[0] == 13) || Global_93750[0] == 14) || Global_93750[0] == 15) || Global_93750[0] == 56) || Global_93750[0] == 57)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (((((Global_93750[1] == 37 || Global_93750[1] == 12) || Global_93750[1] == 13) || Global_93750[1] == 14) || Global_93750[1] == 15) || Global_93750[1] == 58)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if ((Global_93750[2] == 58 || Global_93750[2] == 56) || Global_93750[2] == 57)
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != 0)
	{
		if ((((Global_93750[0] == 5 || Global_93750[0] == 21) || Global_93750[0] == 19) || Global_93750[0] == 25) || Global_93750[0] == 4)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if ((((Global_93750[1] == 4 || Global_93750[1] == 35) || Global_93750[1] == 34) || Global_93750[1] == 33) || Global_93750[1] == 32)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_93750[2] == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	if (iParam0 != 0)
	{
		if (func_126(0))
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (func_126(1))
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_76886 == 50)
		{
			if (!func_131(60f))
			{
				return 1;
			}
		}
		if (((func_126(2) || Global_93750[2] == 59) || Global_93750[2] == 72) || Global_93750[2] == 60)
		{
			return 1;
		}
	}
	if (iParam0 != 3)
	{
		if ((func_126(3) || Global_93750[3] == 82) || Global_93750[3] == 83)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (func_130(62))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_93750[0] == 19 || Global_93750[0] == 25)
			{
				return 1;
			}
			break;
		
		case 1:
			if ((((((Global_93750[1] == 32 || Global_93750[1] == 41) || Global_93750[1] == 33) || Global_93750[1] == 34) || Global_93750[1] == 35) || Global_93750[1] == 36) || Global_93750[1] == 25)
			{
				return 1;
			}
			break;
		
		case 2:
			if (((Global_93750[2] == 48 || Global_93750[2] == 68) || Global_93750[2] == 55) || Global_93750[2] == 71)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (Global_76886 == 52)
	{
		if (!func_131(60f))
		{
			return 1;
		}
	}
	if (func_184() == 89)
	{
		return 1;
	}
	if (iParam0 != 0)
	{
		if (Global_93750[0] == 7)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_93750[1] == 27)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_93750[2] == 51)
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (iParam0 != 1)
	{
		if (Global_93750[1] == 31)
		{
			return 1;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_93750[0] == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			return Global_2439138.f_75.f_227[iParam0];
		}
		else
		{
			return Global_111638.f_7256.f_227[iParam0];
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92729[iParam0])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0]] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(float fParam0)
{
	if (Global_76887 < 0)
	{
		return 0;
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	if (iVar0 < (Global_76887 + round((fParam0 * 1000f))))
	{
		return 0;
	}
	return 1;
}

int func_132(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[35], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[36], 3))
	{
		*uParam0 = 125;
		return 1;
	}
	*uParam0 = 141;
	return 0;
}

int func_133(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[35], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[36], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_94(39))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_130(15))
	{
		*uParam0 = 122;
		return 1;
	}
	iVar0[0] = 122;
	fVar4[0] = 25f;
	iVar0[1] = 123;
	fVar4[1] = 25f;
	if (!func_88(131))
	{
		if (func_134(0))
		{
			iVar0[2] = 124;
			fVar4[2] = 25f;
		}
		else
		{
			iVar0[2] = 141;
			fVar4[2] = 0f;
		}
	}
	else
	{
		iVar0[2] = 141;
		fVar4[2] = 0f;
	}
	return func_113(11, &iVar0, &fVar4, uParam0);
}

int func_134(int iParam0)
{
	if (func_31(iParam0))
	{
		return 0;
	}
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	if (func_157(iVar0))
	{
		if (!func_135(iParam0))
		{
			return 0;
		}
	}
	if (!func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_135(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_136(iVar0);
}

int func_136(int iParam0)
{
	return func_137(iParam0, 1);
}

int func_137(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_138(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_139(func_150(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_139(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_149(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_145(iParam0) - func_145(iParam1));
		iVar5 = (func_144(iParam0) - func_144(iParam1));
		iVar6 = (func_143(iParam0) - func_143(iParam1));
		iVar7 = (func_142(iParam0) - func_142(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_145(iParam1) - func_145(iParam0));
		iVar5 = (func_144(iParam1) - func_144(iParam0));
		iVar6 = (func_143(iParam1) - func_143(iParam0));
		iVar7 = (func_142(iParam1) - func_142(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_141(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_140(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_140(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_141(int iParam0, int iParam1)
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

int func_142(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_146(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_147(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 15;
}

int func_149(int iParam0, int iParam1)
{
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	func_156(&uVar0, unk_0x4460E481B9E33ADA());
	func_155(&uVar0, unk_0x8D199E381D262EEF());
	func_154(&uVar0, unk_0xD8A54335F18763BA());
	func_153(&uVar0, unk_0x972A296334C9D57B());
	func_152(&uVar0, unk_0x118229AD063C3C1D());
	func_151(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_151(var uParam0, int iParam1)
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

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_141(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_157(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_144(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_145(iParam0);
	if (iVar5 < 1 || iVar5 > func_141(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[35], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[36], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_134(2))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_94(39))
	{
		iVar0[0] = 116;
		fVar8[0] = 15f;
		iVar0[1] = 117;
		fVar8[1] = 12,5f;
		iVar0[4] = 141;
		fVar8[4] = 0f;
	}
	else
	{
		iVar0[0] = 141;
		fVar8[0] = 0f;
		iVar0[1] = 141;
		fVar8[1] = 0f;
		iVar0[4] = 141;
		fVar8[4] = 0f;
	}
	iVar0[2] = 112;
	fVar8[2] = 15f;
	iVar0[3] = 113;
	fVar8[3] = 15f;
	iVar0[5] = 114;
	fVar8[5] = 15f;
	iVar0[6] = 115;
	fVar8[6] = 15f;
	return func_113(9, &iVar0, &fVar8, uParam0);
}

int func_159(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[35], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[36], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_134(0))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_94(14))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_88(131))
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0[0] = 107;
	fVar5[0] = 25f;
	iVar0[1] = 108;
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3816[0][12][(32 / 32)], (32 % 32)))
	{
		fVar5[1] = (25f * 2f);
	}
	else
	{
		fVar5[1] = 25f;
	}
	iVar0[2] = 109;
	fVar5[2] = 25f;
	iVar0[3] = 110;
	fVar5[3] = 25f;
	return func_113(8, &iVar0, &fVar5, uParam0);
}

int func_160(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[35], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[36], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_76886 == 62)
	{
		if (func_131(60f))
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (!func_88(130))
	{
		if (!func_31(2))
		{
			*uParam0 = 141;
			return 0;
		}
		iVar0[0] = 100;
		fVar7[0] = 16,6f;
		iVar0[1] = 101;
		fVar7[1] = 16,6f;
		iVar0[2] = 102;
		fVar7[2] = 16,6f;
		iVar0[3] = 104;
		fVar7[3] = 16,6f;
		iVar0[4] = 105;
		fVar7[4] = 16,6f;
		iVar14 = unk_0xD8A54335F18763BA();
		if (iVar14 > 20 || iVar14 < 6)
		{
			iVar0[5] = 106;
			fVar7[5] = 16,6f;
		}
		else
		{
			iVar0[5] = 141;
			fVar7[5] = 0f;
		}
	}
	else
	{
		if (!func_31(2))
		{
			if (func_130(15))
			{
				*uParam0 = 118;
				return 1;
			}
			iVar0[0] = 118;
			fVar7[0] = 20f;
		}
		else
		{
			iVar15 = unk_0xD8A54335F18763BA();
			if (iVar15 > 20 || iVar15 < 6)
			{
				iVar0[0] = 106;
				fVar7[0] = 16,6f;
			}
			else
			{
				iVar0[0] = 141;
				fVar7[0] = 0f;
			}
		}
		iVar0[1] = 119;
		fVar7[1] = 20f;
		iVar0[2] = 120;
		fVar7[2] = 20f;
		iVar0[3] = 121;
		fVar7[3] = 20f;
		iVar0[4] = 141;
		fVar7[4] = 0f;
		iVar0[5] = 141;
		fVar7[5] = 0f;
	}
	return func_113(10, &iVar0, &fVar7, uParam0);
}

int func_161(var uParam0)
{
	if (func_130(0) || Global_76886 == 0)
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_96854 == 196)
	{
		if (unk_0x991B1F0980C62628() || func_89())
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (func_88(126))
	{
		*uParam0 = 98;
		return 1;
	}
	iVar0[0] = 94;
	fVar5[0] = 25f;
	iVar0[1] = 95;
	fVar5[1] = 25f;
	iVar0[2] = 96;
	fVar5[2] = 25f;
	iVar0[3] = 97;
	fVar5[3] = 25f;
	return func_113(5, &iVar0, &fVar5, uParam0);
}

int func_162(var uParam0)
{
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 61;
		fVar6[0] = 10f;
		iVar1[1] = 64;
		fVar6[1] = 10f;
		iVar1[2] = 65;
		fVar6[2] = 70f;
		iVar1[3] = 141;
		fVar6[3] = 10f;
		return func_113(2, &iVar1, &fVar6, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar11[0] = 73;
		fVar18[0] = 25f;
		iVar11[1] = 74;
		fVar18[1] = 25f;
		iVar11[2] = 141;
		fVar18[2] = 0f;
		iVar11[3] = 141;
		fVar18[3] = 0f;
		iVar11[4] = 63;
		fVar18[4] = 10f;
		iVar11[5] = 66;
		fVar18[5] = 20f;
		return func_113(2, &iVar11, &fVar18, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_163()
{
	if (Global_38796[11] == 1)
	{
		return 4;
	}
	if (!func_94(21))
	{
		return 0;
	}
	if (!func_88(130))
	{
		return 1;
	}
	if (!func_88(131))
	{
		return 2;
	}
	if (!func_94(22))
	{
		return 1;
	}
	if (!func_94(49))
	{
		return 3;
	}
	if (!func_94(28))
	{
		return 1;
	}
	return 3;
}

int func_164(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 40;
		fVar7[0] = 10f;
		iVar1[1] = 36;
		fVar7[1] = 10f;
		iVar1[2] = 28;
		fVar7[2] = 30f;
		iVar1[3] = 42;
		fVar7[3] = 30f;
		iVar1[4] = 141;
		fVar7[4] = 20f;
		return func_113(1, &iVar1, &fVar7, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar13[0] = 44;
		fVar18[0] = 30f;
		iVar13[1] = 45;
		fVar18[1] = 30f;
		iVar13[2] = 42;
		fVar18[2] = 30f;
		iVar13[3] = 141;
		fVar18[3] = 10f;
		return func_113(1, &iVar13, &fVar18, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_165(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 17;
		fVar6[0] = 30f;
		iVar1[1] = 10;
		fVar6[1] = 30f;
		iVar1[2] = 141;
		fVar6[2] = 10f;
		iVar1[3] = 5;
		fVar6[3] = 30f;
		return func_113(0, &iVar1, &fVar6, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar11[0] = 20;
		fVar21[0] = 15f;
		iVar11[1] = 21;
		fVar21[1] = 15f;
		iVar11[2] = 22;
		fVar21[2] = 15f;
		iVar11[3] = 23;
		fVar21[3] = 15f;
		iVar11[4] = 24;
		fVar21[4] = 15f;
		iVar11[5] = 4;
		fVar21[5] = 10f;
		iVar11[6] = 2;
		fVar21[6] = 15f;
		iVar11[7] = 3;
		fVar21[7] = 15f;
		iVar11[8] = 4;
		fVar21[8] = 15f;
		return func_113(0, &iVar11, &fVar21, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_166(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_169(uParam1);
			break;
		
		case 1:
			return func_168(uParam1);
			break;
		
		case 2:
			return func_167(uParam1);
			break;
		
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_167(var uParam0)
{
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 48;
		fVar10[0] = 20f;
		iVar1[1] = 55;
		fVar10[1] = 20f;
		iVar1[2] = 141;
		fVar10[2] = 25f;
		iVar1[3] = 141;
		fVar10[3] = 0f;
		iVar1[4] = 56;
		fVar10[4] = (7,5f / 3f);
		iVar1[5] = 57;
		fVar10[5] = (7,5f / 3f);
		if (!func_94(20))
		{
			iVar1[6] = 58;
			fVar10[6] = 7,5f;
		}
		else
		{
			iVar1[6] = 141;
			fVar10[6] = 0f;
		}
		iVar1[7] = 59;
		fVar10[7] = 10f;
		return func_113(2, &iVar1, &fVar10, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar19[0] = 73;
		fVar27[0] = 25f;
		iVar19[1] = 74;
		fVar27[1] = 25f;
		iVar19[2] = 141;
		fVar27[2] = 0f;
		iVar19[3] = 141;
		fVar27[3] = 0f;
		iVar19[4] = 68;
		fVar27[4] = 20f;
		iVar19[5] = 71;
		fVar27[5] = 20f;
		iVar19[6] = 72;
		fVar27[6] = 10f;
		return func_113(2, &iVar19, &fVar27, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_168(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 38;
		fVar9[0] = 10f;
		iVar1[1] = 37;
		fVar9[1] = 10f;
		iVar1[2] = 39;
		fVar9[2] = 10f;
		iVar1[3] = 40;
		fVar9[3] = 10f;
		iVar1[4] = 29;
		fVar9[4] = 10f;
		iVar1[5] = 36;
		fVar9[5] = 10f;
		if (!func_130(52))
		{
			iVar1[6] = 27;
			fVar9[6] = 10f;
		}
		else
		{
			iVar1[6] = 141;
			fVar9[6] = 0f;
		}
		return func_113(1, &iVar1, &fVar9, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar17[0] = 44;
		fVar22[0] = 30f;
		iVar17[1] = 45;
		fVar22[1] = 30f;
		iVar17[2] = 29;
		fVar22[2] = 30f;
		iVar17[3] = 141;
		fVar22[3] = 10f;
		return func_113(1, &iVar17, &fVar22, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_169(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 9;
		fVar11[0] = 10f;
		iVar1[1] = 10;
		fVar11[1] = 10f;
		iVar1[2] = 11;
		fVar11[2] = 15f;
		iVar1[3] = 16;
		fVar11[3] = 40f;
		if (!func_94(20))
		{
			iVar1[4] = 0;
			fVar11[4] = 10f;
			iVar1[5] = 12;
			fVar11[5] = (15f / 4f);
			iVar1[6] = 13;
			fVar11[6] = (15f / 4f);
			iVar1[7] = 14;
			fVar11[7] = (15f / 4f);
			iVar1[8] = 15;
			fVar11[8] = (15f / 4f);
		}
		else
		{
			iVar1[4] = 141;
			fVar11[4] = 0f;
			iVar1[5] = 141;
			fVar11[5] = 0f;
			iVar1[6] = 141;
			fVar11[6] = 0f;
			iVar1[7] = 141;
			fVar11[7] = 0f;
			iVar1[8] = 141;
			fVar11[8] = 0f;
		}
		return func_113(0, &iVar1, &fVar11, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar21[0] = 20;
		fVar31[0] = 15f;
		iVar21[1] = 21;
		fVar31[1] = 15f;
		iVar21[2] = 22;
		fVar31[2] = 15f;
		iVar21[3] = 23;
		fVar31[3] = 15f;
		iVar21[4] = 24;
		fVar31[4] = 15f;
		iVar21[5] = 4;
		fVar31[5] = 10f;
		iVar21[6] = 2;
		fVar31[6] = 15f;
		iVar21[7] = 3;
		fVar31[7] = 15f;
		iVar21[8] = 4;
		fVar31[8] = 15f;
		return func_113(0, &iVar21, &fVar31, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_175(uParam1);
			break;
		
		case 1:
			return func_174(uParam1);
			break;
		
		case 2:
			return func_172(uParam1);
			break;
		
		case 3:
			return func_171(uParam1);
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_171(var uParam0)
{
	if (Global_76886 == 49)
	{
		if (!func_131((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar6[0] = 25f;
		if (!func_130(20))
		{
			iVar1[1] = 82;
			fVar6[1] = 25f;
		}
		else
		{
			iVar1[1] = 141;
			fVar6[1] = 0f;
		}
		iVar1[2] = 141;
		fVar6[2] = 12,5f;
		return func_113(3, &iVar1, &fVar6, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar11[0] = 84;
		fVar15[0] = 25f;
		if (!func_130(20))
		{
			iVar11[1] = 82;
			fVar15[1] = 25f;
		}
		else
		{
			iVar11[1] = 141;
			fVar15[1] = 0f;
		}
		iVar11[2] = 141;
		fVar15[2] = 12,5f;
		return func_113(3, &iVar11, &fVar15, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_172(var uParam0)
{
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar9[0] = 10f;
		iVar1[1] = 52;
		fVar9[1] = 10f;
		iVar1[2] = 53;
		fVar9[2] = 10f;
		iVar1[3] = 54;
		fVar9[3] = 20f;
		iVar1[4] = 55;
		fVar9[4] = 15f;
		iVar1[5] = 141;
		fVar9[5] = 10f;
		if (!func_94(19))
		{
			if (func_173())
			{
				iVar1[6] = 49;
				fVar9[6] = 10f;
			}
			else
			{
				iVar1[6] = 141;
				fVar9[6] = 0f;
			}
		}
		else
		{
			iVar1[6] = 50;
			fVar9[6] = 10f;
		}
		return func_113(2, &iVar1, &fVar9, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar17[0] = 73;
		fVar26[0] = 25f;
		iVar17[1] = 74;
		fVar26[1] = 25f;
		iVar17[2] = 141;
		fVar26[2] = 0f;
		iVar17[3] = 141;
		fVar26[3] = 0f;
		iVar17[4] = 69;
		fVar26[5] = 10f;
		iVar17[5] = 71;
		fVar26[5] = 15f;
		iVar17[6] = 70;
		fVar26[6] = 20f;
		iVar17[7] = 67;
		fVar26[7] = 10f;
		return func_113(2, &iVar17, &fVar26, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_173()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -773,7231f, 168,8327f, 65f, -772,2901f, 136,8156f, 68f, 22f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_174(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar12[0] = 15f;
		iVar1[1] = 38;
		fVar12[1] = 10f;
		iVar1[2] = 29;
		fVar12[2] = 10f;
		if (!func_130(52))
		{
			iVar1[3] = 27;
			fVar12[3] = 10f;
		}
		else
		{
			iVar1[3] = 141;
			fVar12[3] = 0f;
		}
		iVar1[4] = 31;
		fVar12[4] = 10f;
		iVar1[5] = 33;
		fVar12[5] = 20f;
		iVar1[6] = 34;
		fVar12[6] = (10f / 2f);
		iVar1[7] = 35;
		fVar12[7] = (10f / 2f);
		iVar1[8] = 43;
		fVar12[8] = 10f;
		iVar1[9] = 141;
		fVar12[9] = 5f;
		return func_113(1, &iVar1, &fVar12, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar23[0] = 44;
		fVar27[0] = 33,33333f;
		iVar23[1] = 45;
		fVar27[1] = 33,33333f;
		iVar23[2] = 46;
		fVar27[2] = 33,33333f;
		return func_113(1, &iVar23, &fVar27, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_175(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		if (!func_94(20))
		{
			if (!func_130(52))
			{
				iVar1[0] = 7;
				fVar7[0] = 20f;
			}
			else
			{
				iVar1[0] = 141;
				fVar7[0] = 0f;
			}
			iVar1[1] = 0;
			fVar7[1] = 10f;
		}
		else
		{
			iVar1[0] = 141;
			fVar7[0] = 0f;
			iVar1[1] = 141;
			fVar7[1] = 0f;
		}
		iVar1[2] = 141;
		fVar7[2] = 20f;
		iVar1[3] = 5;
		fVar7[3] = 40f;
		iVar1[4] = 8;
		fVar7[4] = 10f;
		return func_113(0, &iVar1, &fVar7, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar13[0] = 20;
		fVar23[0] = 15f;
		iVar13[1] = 21;
		fVar23[1] = 15f;
		iVar13[2] = 22;
		fVar23[2] = 15f;
		iVar13[3] = 23;
		fVar23[3] = 15f;
		iVar13[4] = 24;
		fVar23[4] = 15f;
		iVar13[5] = 4;
		fVar23[5] = 10f;
		iVar13[6] = 2;
		fVar23[6] = 15f;
		iVar13[7] = 3;
		fVar23[7] = 15f;
		iVar13[8] = 4;
		fVar23[8] = 15f;
		return func_113(0, &iVar13, &fVar23, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_176(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_181(uParam1);
			break;
		
		case 1:
			return func_180(uParam1);
			break;
		
		case 2:
			return func_179(uParam1);
			break;
		
		case 3:
			return func_178(uParam1);
			break;
		
		case 4:
			return func_177(uParam1);
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_177(var uParam0)
{
	if (Global_76886 == 19)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 87;
		fVar10[0] = 12,5f;
		iVar1[1] = 88;
		fVar10[1] = 12,5f;
		iVar1[2] = 90;
		fVar10[2] = 12,5f;
		iVar1[3] = 91;
		fVar10[3] = 12,5f;
		if (!func_130(17))
		{
			iVar1[4] = 89;
			fVar10[4] = 12,5f;
		}
		else
		{
			iVar1[4] = 141;
			fVar10[4] = 0f;
		}
		iVar1[5] = 92;
		fVar10[5] = 12,5f;
		iVar1[6] = 93;
		fVar10[6] = 12f;
		iVar1[7] = 141;
		fVar10[7] = 0,5f;
		return func_113(4, &iVar1, &fVar10, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar19[0] = 87;
		fVar28[0] = 12,5f;
		iVar19[1] = 88;
		fVar28[1] = 12,5f;
		iVar19[2] = 90;
		fVar28[2] = 12,5f;
		iVar19[3] = 91;
		fVar28[3] = 12,5f;
		iVar19[4] = 89;
		fVar28[4] = 12,5f;
		iVar19[5] = 92;
		fVar28[5] = 12,5f;
		iVar19[6] = 93;
		fVar28[6] = 12f;
		iVar19[7] = 141;
		fVar28[7] = 0,5f;
		return func_113(4, &iVar19, &fVar28, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_178(var uParam0)
{
	if (Global_76886 == 49)
	{
		if (!func_131((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar5[0] = 20f;
		iVar1[1] = 81;
		fVar5[1] = 20f;
		iVar1[2] = 141;
		fVar5[2] = 10f;
		return func_113(3, &iVar1, &fVar5, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar9[0] = 84;
		fVar14[0] = 20f;
		iVar9[1] = 81;
		fVar14[1] = 20f;
		iVar9[2] = 141;
		fVar14[2] = 20f;
		return func_113(3, &iVar9, &fVar14, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_179(var uParam0)
{
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar7[0] = 10f;
		iVar1[1] = 48;
		fVar7[1] = 20f;
		if (!func_94(19))
		{
			if (func_173())
			{
				iVar1[2] = 49;
				fVar7[2] = 20f;
			}
			else
			{
				iVar1[2] = 141;
				fVar7[2] = 0f;
			}
		}
		else
		{
			iVar1[2] = 50;
			fVar7[2] = 20f;
		}
		iVar1[3] = 141;
		fVar7[3] = 10f;
		if (!func_130(21))
		{
			iVar1[4] = 51;
			fVar7[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar7[4] = 0f;
		}
		return func_113(2, &iVar1, &fVar7, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar13[0] = 73;
		fVar20[0] = 25f;
		iVar13[1] = 74;
		fVar20[1] = 25f;
		iVar13[2] = 141;
		fVar20[2] = 0f;
		iVar13[3] = 141;
		fVar20[3] = 0f;
		iVar13[4] = 68;
		fVar20[4] = 20f;
		iVar13[5] = 69;
		fVar20[5] = 20f;
		return func_113(2, &iVar13, &fVar20, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_180(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar8[0] = 15f;
		iVar1[1] = 32;
		fVar8[1] = 15f;
		if (!func_130(52))
		{
			iVar1[2] = 27;
			fVar8[2] = 15f;
		}
		else
		{
			iVar1[2] = 141;
			fVar8[2] = 0f;
		}
		iVar1[3] = 41;
		fVar8[3] = 10f;
		iVar1[4] = 141;
		fVar8[4] = 20f;
		iVar1[5] = 33;
		fVar8[5] = 15f;
		return func_113(1, &iVar1, &fVar8, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar15[0] = 44;
		fVar19[0] = 33,33333f;
		iVar15[1] = 45;
		fVar19[1] = 33,33333f;
		iVar15[2] = 46;
		fVar19[2] = 33,33333f;
		return func_113(1, &iVar15, &fVar19, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_181(var uParam0)
{
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 18;
		fVar7[0] = 60f;
		iVar1[1] = 5;
		fVar7[1] = 10f;
		iVar1[2] = 141;
		fVar7[2] = 10f;
		iVar1[3] = 6;
		fVar7[3] = 10f;
		if (!func_94(20))
		{
			iVar1[4] = 0;
			fVar7[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar7[4] = 0f;
		}
		return func_113(0, &iVar1, &fVar7, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_76886 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar13[0] = 20;
		fVar23[0] = 15f;
		iVar13[1] = 21;
		fVar23[1] = 15f;
		iVar13[2] = 22;
		fVar23[2] = 15f;
		iVar13[3] = 23;
		fVar23[3] = 15f;
		iVar13[4] = 24;
		fVar23[4] = 15f;
		iVar13[5] = 4;
		fVar23[5] = 10f;
		iVar13[6] = 2;
		fVar23[6] = 15f;
		iVar13[7] = 3;
		fVar23[7] = 15f;
		iVar13[8] = 4;
		fVar23[8] = 15f;
		return func_113(0, &iVar13, &fVar23, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	iVar3 = 145;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			vVar0 = { vVar0 + Vector(71,1531f, 179,5117f, -812,0607f) };
			break;
		
		case 5:
		case 6:
		case 7:
			vVar0 = { vVar0 + Vector(30,116f, -1435,997f, -14,3064f) };
			break;
		
		case 10:
		case 8:
		case 9:
		case 11:
		case 12:
			vVar0 = { vVar0 + Vector(32,4374f, 3819,144f, 1974,613f) };
			if (iParam0 == 8)
			{
				iVar3 = 0;
			}
			else if (iParam0 == 9)
			{
				iVar3 = 2;
			}
			else if (iParam1 == 124)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 145;
			}
			break;
		
		case 13:
			vVar0 = { vVar0 + Vector(9,6346f, -1517,601f, -1152,571f) };
			break;
	}
	if (iVar3 == 145)
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (Global_95677[iVar4])
		{
			iVar5 = Global_95677[iVar4].f_5;
			fVar6 = Global_95677[iVar4].f_10.f_4;
			iVar7 = Global_95677[iVar4].f_10.f_6;
			iVar8 = Global_89532[iVar5].f_10;
			vVar9 = { func_183(iVar8, 0) };
			fVar12 = vdist2(vVar0, vVar9);
			if (!unk_0xEAE0D21A50E6C7F4(iVar7, iVar3))
			{
				if (fVar12 < (fVar6 * fVar6))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31146[iVar0][iParam1];
}

int func_184()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_96854;
	}
	if (func_89())
	{
		return Global_96854;
	}
	return 318;
}

int func_185(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = -1;
	switch (iParam0)
	{
		case 0:
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_76886 == 44)
			{
				if (func_131(60f))
				{
					*uParam2 = 44;
					*uParam1 = 141;
					return 1;
				}
			}
			break;
		
		case 1:
			if (func_163() == 0)
			{
				if (func_94(20))
				{
					*uParam2 = 20;
					*uParam1 = 141;
					return 1;
				}
			}
			if (func_130(18))
			{
				*uParam2 = 18;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 34;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (Global_76886 == 44)
			{
				if (func_131(60f))
				{
					*uParam2 = 44;
					*uParam1 = 29;
					return 1;
				}
			}
			break;
		
		case 2:
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 53;
				return 1;
			}
			if (func_130(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_76886 == 50)
			{
				if (func_131(60f))
				{
					*uParam2 = 50;
					*uParam1 = 53;
					return 1;
				}
			}
			break;
		
		case 3:
			if (Global_76886 == 44)
			{
				*uParam2 = 44;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 5:
			if (Global_76886 == 0)
			{
				if (!func_131(60f))
				{
					*uParam2 = 0;
					*uParam1 = 96;
					return 1;
				}
			}
			if (func_130(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 6:
		case 7:
			if (Global_76886 == 43)
			{
				if (func_131(60f))
				{
					if (Global_111638.f_18509[7] != 99 && Global_111638.f_18509[6] != 99)
					{
						*uParam2 = 43;
						*uParam1 = 99;
						return 1;
					}
				}
			}
			if (!func_94(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			if (func_94(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 10:
			if (Global_76886 == 62)
			{
				if (func_131(60f))
				{
					*uParam2 = 62;
					*uParam1 = 141;
					return 1;
				}
			}
			if (Global_76886 == 14)
			{
				if (func_131(60f))
				{
					*uParam2 = 14;
					*uParam1 = 141;
					return 1;
				}
			}
			if (func_130(63))
			{
				*uParam2 = 63;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(64))
			{
				*uParam2 = 64;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 9:
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 11:
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 13:
			if (func_130(71))
			{
				*uParam2 = 71;
				*uParam1 = 140;
				return 1;
			}
			break;
	}
	if (func_186(iParam0))
	{
		*uParam2 = 94;
		*uParam1 = 140;
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != 16 && iParam0 != 15)
	{
		iVar0 = 145;
		iVar1 = 0;
		switch (iParam0)
		{
			case 6:
			case 7:
				iVar0 = 19;
				iVar1 = 8;
				break;
			
			case 0:
				iVar0 = 14;
				iVar1 = 16;
				break;
			
			case 2:
				iVar0 = 17;
				iVar1 = 32;
				break;
			
			case 1:
				iVar0 = 15;
				iVar1 = 0;
				break;
			
			default:
				return 0;
				break;
		}
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_89496)
			{
				if (Global_89496[iVar2] != -1)
				{
					uVar3 = Global_76891.f_109[Global_89496[iVar2]];
					iVar4 = uVar3;
					if (func_33(Global_89532[iVar4].f_12, iVar1))
					{
						return 1;
					}
				}
				iVar2++;
			}
			if (func_18(func_19(func_22()), func_19(iVar0)) < 9)
			{
				fVar5 = func_188(func_22(), iVar0);
				switch (func_187(func_22(), iVar0))
				{
					case 0:
						if (fVar5 <= (1f * 60f))
						{
							return 1;
						}
						break;
					
					case 1:
						if (fVar5 <= (5f * 60f))
						{
							return 1;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar6 = unk_0x1C0640BA9A7327B3();
		iVar7 = 0;
		while (iVar7 < Global_111638.f_7683.f_136)
		{
			if (Global_111638.f_7683[iVar7].f_6 == iVar0)
			{
				iVar8 = (Global_111638.f_7683[iVar7].f_4 - iVar6);
				if (iVar8 < 150000)
				{
					return 1;
				}
			}
			iVar7++;
		}
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	iVar2 = func_18(iVar0, iVar1);
	if (iVar2 < 9)
	{
		return Global_111638.f_18098.f_175[iVar2].f_8;
	}
	return 1;
}

float func_188(int iParam0, int iParam1)
{
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	iVar2 = func_18(iVar0, iVar1);
	if (iVar2 < 9)
	{
		if (func_45(&(Global_111638.f_18098.f_175[iVar2].f_5)))
		{
			return func_41(&(Global_111638.f_18098.f_175[iVar2].f_5));
		}
	}
	return 0f;
}

void func_189(int iParam0, int iParam1)
{
	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_191(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_190(iParam0);
			}
		}
	}
}

void func_190(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_191(int iParam0)
{
	if (!func_199())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_198(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_196(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 1);
	if ((unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (unk_0x8A22C4C08282BF26(1832807115) == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_193(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_24(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_192())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0,015f)
					{
						iVar14 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar15 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_190(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_192()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_22())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_193(int iParam0)
{
	iVar0 = func_22();
	if (func_194(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_29(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_194(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_195(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case 516990260:
					case -845961253:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_195(int iParam0)
{
	return iParam0;
}

void func_196(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_150();
	iVar1 = func_144(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_197(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_197(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_197(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else if (unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_197(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_197(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(-1802680602) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (unk_0x8A22C4C08282BF26(-1802680602) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x8A22C4C08282BF26(1723330028) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_197(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_197(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[43].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_197(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[93].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_197(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[8].f_6) == 0 && unk_0x8A22C4C08282BF26(Global_89532[10].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_197(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[47].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x8A22C4C08282BF26(Global_89532[48].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x8A22C4C08282BF26(Global_89532[39].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_197(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_197(int iParam0)
{
	Var0 = { func_198(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

struct<7> func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = -1844444717;
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = -1844444717;
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = -1844444717;
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = -1844444717;
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = -1844444717;
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = -1844444717;
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = -1663512092;
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = 145369505;
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = 868499217;
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = -1148826190;
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = 868499217;
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = -1148826190;
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = 868499217;
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = -1148826190;
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = 868499217;
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = -1148826190;
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = 868499217;
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = -1148826190;
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = 868499217;
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = -1148826190;
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = 868499217;
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = -1148826190;
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = 1780022985;
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = 1780022985;
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = 1780022985;
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = 1780022985;
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = -1922281023;
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = -1922281023;
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = -1922281023;
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = -1922281023;
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = -1922281023;
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = -1922281023;
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = 543652229;
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = 543652229;
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = 543652229;
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = 543652229;
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = 159994461;
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = -1686014385;
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = 30769481;
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = -1454760130;
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = 1245831483;
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = -1454760130;
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = 1245831483;
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = -1568354151;
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = 1019527301;
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = 520341586;
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = 1413743677;
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = 703855057;
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = 308207762;
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = 132154435;
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = 67910261;
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = -607040053;
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = -550347177;
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = 270330101;
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = -550347177;
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = -822900180;
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = -822900180;
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = -822900180;
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = -822900180;
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = 486670049;
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = 245182344;
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = -681066206;
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = 551491569;
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = 933053701;
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = 426403179;
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = 1173348778;
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = -1428622127;
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = -1428622127;
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = -1428622127;
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = -353187150;
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = -1666470363;
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = 1145337974;
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = -1647153464;
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = -1647153464;
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = -2069558801;
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = -190780785;
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = -664582244;
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = -1116041313;
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = 668467214;
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = -1306074314;
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = -1375589668;
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = -1375589668;
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = -1032171637;
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = -52575179;
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = 338220432;
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = 1075555701;
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = -1032171637;
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = -52575179;
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = -1032171637;
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = -52575179;
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = -1652821467;
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = 1013329911;
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = -502195954;
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = -2051651622;
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = 464151082;
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = -1081024910;
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = -1081024910;
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = 1099436502;
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = -1627599682;
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = 1099436502;
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = -1627599682;
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = 1173348778;
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = -2045308299;
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = -42303174;
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = 913904359;
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = -495720969;
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = 668467214;
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = 1342464176;
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = 1436076651;
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = 1413743677;
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = -815851463;
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = -684382235;
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = 1378348636;
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = -2076287065;
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = -374527357;
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = -1517873911;
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = -90456267;
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = -1207991715;
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = -1207991715;
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = -566611162;
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = -551602996;
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = 1104171198;
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = -1425071302;
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = -1679881977;
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = -1045015371;
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = -1033001619;
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = -1023447729;
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = 73386408;
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = -1152174184;
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = 993120320;
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = 993120320;
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = 1425919976;
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = 9467943;
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = 1956494919;
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = -1501157055;
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = -1501157055;
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = -1765048490;
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = -403433025;
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = 1308911070;
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = -403433025;
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = 1308911070;
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = -403433025;
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = 1308911070;
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = -582278602;
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = 1343686600;
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = -26664553;
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = 914592203;
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = 97297972;
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = -8873588;
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = 97297972;
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = -8873588;
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = 97297972;
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = -8873588;
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = 97297972;
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = -8873588;
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = 97297972;
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = -8873588;
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = 97297972;
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = -8873588;
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = 97297972;
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = -8873588;
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = 97297972;
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = -8873588;
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = 97297972;
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = -8873588;
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = 97297972;
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = -8873588;
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = 97297972;
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = -8873588;
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = 452874391;
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = 452874391;
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = 546378757;
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = -1249591818;
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = 546378757;
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = -1249591818;
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = 1878909644;
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = 1709395619;
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = -1184592117;
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = -1156020871;
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = 2059227086;
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = 1417577297;
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = 2059227086;
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = 1417577297;
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = -1428622127;
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = 73386408;
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = -1152174184;
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = 73386408;
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = -1152174184;
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = 1755793225;
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = 239858268;
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = 1742849246;
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = -44475594;
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = 1183182250;
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = -44475594;
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = 1183182250;
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = -44475594;
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = 1183182250;
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = -44475594;
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = 1183182250;
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = -982531572;
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = -1049302886;
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = 1653418708;
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = 650392296;
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = -267139712;
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = 650392296;
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = -267139712;
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = 1127922797;
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = 73386408;
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = -1152174184;
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = -1468417022;
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_199()
{
	if ((func_201() == -1 || func_201() == 999) && !func_200() == 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	return Global_30769;
}

int func_201()
{
	return Global_30768;
}

int func_202(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4)
{
	switch (iParam1)
	{
		case 16:
			if (*uParam3 == 0)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (!unk_0x25F7A4D42AF2AB93())
				{
					unk_0x9E5E60D8C63FD9D1();
				}
				else if (!unk_0x7F8A39872A07D2CE(sParam2, "scr_fam_door_smoke"))
				{
					if (unk_0xEC560E589DF8370E(iParam0))
					{
					}
					else
					{
						if (!unk_0xC844350D5D58C99A(iParam0))
						{
							return 0;
						}
						vVar0 = { 0f, 0f, 0,05f };
						vVar3 = { 0f, 0f, 0f };
						*uParam3 = unk_0xC1879030EB463216(sParam2, iParam0, vVar0, vVar3, 1f, 0, 0, 0);
					}
				}
				else
				{
					vVar0 = { -806,8f, 174f, 76,9f };
					vVar3 = { 0f, 0f, 0f };
					*uParam3 = unk_0xB055A4268B938F30(sParam2, vVar0, vVar3, 1f, 0, 0, 0, 0);
				}
				return 0;
			}
			else
			{
				if (unk_0x83A8177D302E1A7E(*uParam3))
				{
				}
				return 1;
			}
			break;
			return 0;
			break;
		
		case 91:
			if (*uParam3 == 0)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (!unk_0x25F7A4D42AF2AB93())
				{
					unk_0x9E5E60D8C63FD9D1();
				}
				else
				{
					vVar6 = { 0f, 0f, 0f };
					vVar9 = { 0f, 0f, 0f };
					*uParam3 = unk_0xAD0C28B6B04D50A9(sParam2, unk_0x940C1429253D3B1B(iParam0), vVar6, vVar9, 60309, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
		
		case 120:
			if (*uParam3 == 0)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (!unk_0x25F7A4D42AF2AB93())
				{
					unk_0x9E5E60D8C63FD9D1();
				}
				else
				{
					if (!unk_0xC844350D5D58C99A(iParam0))
					{
						return 0;
					}
					vVar12 = { 0f, 0f, 0f };
					vVar15 = { 0f, 0f, 0f };
					*uParam3 = unk_0xC1879030EB463216(sParam2, iParam0, vVar12, vVar15, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
	}
	fParam4 = fParam4;
	*uParam3 = 0;
	return 0;
}

int func_203(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam1))
		{
			iVar0 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam2))
			{
				iVar0 = unk_0x4880526EC51D1C27(sParam2);
			}
			iVar1 = unk_0x4880526EC51D1C27(sParam3);
			iVar2 = (iVar0 - iVar1);
			StringCopy(&Var3, "", 64);
			if (!unk_0xEA6BC48857E0AC4C(sParam2))
			{
				StringCopy(&Var3, unk_0xA739D71DFFCCC22C(sParam2, 0, iVar2), 64);
			}
			cVar19 = { Var3 };
			StringConCat(&cVar19, sParam4, 64);
			if (unk_0x1A5AE8A9B1D42A10(*uParam0))
			{
				if (!unk_0xB4AE0788C1587752(sParam1))
				{
					unk_0x3F423BF5B8125A50(sParam1);
					return 0;
				}
				if (!unk_0xB4ECF989E2C1DAC8(*uParam0, sParam1, &cVar19, 3))
				{
					if (!unk_0x69DF961355195C3C(*uParam5))
					{
						return 0;
					}
					if (iParam6 < 11)
					{
					}
					if (unk_0xBDEB2DEEF1D23A18(*uParam0))
					{
						unk_0x15AFB6CBDE990FB6(*uParam0, 1, 1);
					}
					fVar35 = 8f;
					fVar36 = -8f;
					iVar37 = 5;
					fVar38 = 1000f;
					if (((unk_0x134B62B726CEC8E6(*uParam0) == 2133258022 || unk_0x134B62B726CEC8E6(*uParam0) == 685944827) || unk_0x134B62B726CEC8E6(*uParam0) == -1832227997) || unk_0x134B62B726CEC8E6(*uParam0) == 488156118)
					{
						fVar35 = 1000f;
						fVar36 = -1000f;
					}
					unk_0xE14EC663EED44AD5(*uParam0, *uParam5, &cVar19, sParam1, fVar35, fVar36, iVar37, fVar38);
					if (fVar35 == 1000f)
					{
						unk_0x295ACC5727E47CB7(*uParam0);
					}
					return 1;
				}
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
		unk_0xEEEE2E5FA6F78DF0(uParam0);
		return 0;
	}
	return 0;
}

void func_204(var uParam0, int iParam1, int iParam2)
{
	fVar0 = 0f;
	fVar1 = 0f;
	vVar2 = { 0f, 0f, 0f };
	fVar5 = 0,938f;
	fVar6 = -0,24f;
	vVar7 = { -0,09f, -0,45f, -0,069f };
	fVar10 = 0,998f;
	fVar11 = -1f;
	vVar12 = { -0,33f, -0,54f, -0,09f };
	fVar15 = 0,818f;
	fVar16 = -0,03f;
	vVar17 = { -0,18f, -0,42f, -0,229f };
	switch (iParam2)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					fVar0 = fVar5;
					fVar1 = fVar6;
					vVar2 = { vVar7 };
					break;
				
				case 1:
					fVar0 = fVar10;
					fVar1 = fVar11;
					vVar2 = { vVar12 };
					break;
				
				case 2:
					fVar0 = fVar15;
					fVar1 = fVar16;
					vVar2 = { vVar17 };
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					fVar0 = 1,118f;
					fVar1 = 0,39f;
					vVar2 = { 0,425f, -0,28f, 0,2f };
					break;
				
				case 1:
					fVar0 = (3,141593f * 0,3464f);
					fVar1 = -0,15f;
					vVar2 = { -0,06f, -0,6f, 0,2f };
					break;
			}
			break;
		
		case 18:
			fVar0 = (3,141593f * 0,5f);
			fVar1 = 0f;
			vVar2 = { 0f, 0f, 0,25f };
			break;
		
		case 20:
			fVar0 = 0f;
			fVar1 = 0,1f;
			vVar2 = { 0,1f, 0,1f, 0f };
			break;
		
		case 26:
		case 46:
			fVar0 = (3,141593f * -0,4163f);
			fVar1 = 0f;
			vVar2 = { 0f, -0,6f, 0,7f };
			break;
		
		case 42:
		case 43:
			fVar0 = (3,141593f * 0,5f);
			fVar1 = (3,141593f * -0,5f);
			vVar2 = { 0,39f, 0f, -0,75f };
			break;
		
		case 29:
		case 30:
		case 44:
			fVar0 = (3,141593f * 0,5f);
			fVar1 = 0f;
			vVar2 = { 0f, 0,15f, 0f };
			break;
		
		case 54:
		case 70:
			fVar0 = (3,141593f * 0,4332f);
			fVar1 = 0f;
			vVar2 = { 0f, -1f, -0,3f };
			break;
		
		case 64:
		case 55:
		case 71:
			fVar0 = (3,141593f * 0,4132f);
			fVar1 = 0f;
			vVar2 = { 0f, 0f, 0f };
			break;
		
		case 94:
			fVar0 = (3,141593f * 0,5f);
			fVar1 = 0f;
			vVar2 = { 0f, 0f, -0,6f };
			break;
		
		case 95:
			fVar0 = 0f;
			fVar1 = 0f;
			vVar2 = { 0f, 0f, 0f };
			break;
		
		case 112:
			fVar0 = 0f;
			fVar1 = 0f;
			vVar2 = { 0f, -0,4f, 0f };
			break;
		
		case 113:
			fVar0 = 0f;
			fVar1 = 0f;
			vVar2 = { -0,25f, -0,5f, 0f };
			break;
		
		default:
			fVar0 = 0f;
			fVar1 = 0f;
			vVar2 = { 0f, 0f, 0f };
			break;
	}
	unk_0x421DB1A94AA7699D(uParam0, fVar0, fVar1, vVar2);
}

int func_205(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { 0f, 0f, 0f };
	iVar13 = 0;
	vVar14 = { 0f, 0f, 0f };
	vVar17 = { 0f, 0f, 0f };
	iVar20 = 0;
	iVar21 = 0;
	if (vVar4.x == vVar14.x)
	{
		if (vVar17.x == vVar14.x)
		{
		}
	}
	switch (iParam2)
	{
		case 0:
		case 24:
			if (iParam2 == 0)
			{
				iVar21 = 1;
			}
			switch (iParam1)
			{
				case 0:
					iVar0 = 451260528;
					vVar1 = { -797,77f, 180,96f, 71,83f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, 1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 0;
					break;
				
				case 1:
					iVar0 = 451260528;
					vVar1 = { -797,46f, 179,88f, 71,83f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, 1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 0;
					break;
				
				case 2:
					iVar0 = 451260528;
					vVar1 = { -796,65f, 181,23f, 71,83f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, -1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			iVar21 = 1;
			switch (iParam1)
			{
				case 0:
					iVar0 = 451260528;
					vVar1 = { -797,774f, 180,96f, 71,836f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, -1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
				
				case 1:
					iVar0 = 451260528;
					vVar1 = { -796,655f, 181,225f, 71,836f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, -1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
				
				case 2:
					iVar0 = 451260528;
					vVar1 = { -797,461f, 179,875f, 71,836f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0f, 0f, -1f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			iVar20 = 1;
			break;
		
		case 26:
		case 46:
		case 54:
		case 70:
			iVar21 = 1;
			iVar0 = -1498352975;
			vVar1 = { -784f, 188,2f, 71,8f };
			vVar4 = { 0f, 0f, 0f };
			if (iParam2 == 54 || iParam2 == 70)
			{
				vVar7 = { -0,09f, -1,57f, 1f };
				vVar10 = { 0f, 0f, 180f };
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 9:
					return 0;
					break;
				
				case 11:
					iVar0 = 826023884;
					vVar1 = { 1977,433f, 3819,045f, 32,453f };
					vVar4 = { 0f, 0f, 0f };
					vVar7 = { 0,05f, 0f, -0,6f };
					vVar10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (!unk_0xC844350D5D58C99A(*uParam3))
	{
		*uParam3 = unk_0x4B72871A3BE7B474(vVar1, 10f, iVar0, 1, 0, 1);
	}
	else if (unk_0x134B62B726CEC8E6(*uParam3) != iVar0)
	{
		if (unk_0x50B5F6F3C29E9380(iParam0, *uParam3))
		{
			unk_0x15AFB6CBDE990FB6(iParam0, 1, 1);
		}
		if (unk_0x50B5F6F3C29E9380(*uParam3, iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*uParam3, 1, 1);
		}
		*uParam3 = 0;
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(*uParam3))
	{
		return 0;
	}
	else
	{
		if (iVar20 == 0)
		{
			if (!unk_0x50B5F6F3C29E9380(iParam0, *uParam3))
			{
				iVar22 = 0;
				iVar23 = 1;
				iVar24 = 0;
				unk_0x9F528B1B53FBC5D9(iParam0, *uParam3, iVar13, vVar7, vVar10, iVar21, iVar22, iVar23, iVar24, 2, 1);
				unk_0x1E9649458B15960F(iParam0, false);
				if (func_206(*uParam3))
				{
					unk_0x1E9649458B15960F(*uParam3, true);
				}
				unk_0xB0703A3FDD659128(*uParam3, iParam0, 0);
				return 0;
			}
		}
		else if (iVar20 == 1)
		{
			vVar25 = { unk_0x68F4C0EC296D3901(*uParam3, 1) };
			vVar28 = { unk_0x835730A2D89F6093(*uParam3, 2) };
			vVar31 = { unk_0x68F4C0EC296D3901(iParam0, 1) + vVar7 };
			vVar34 = { unk_0x835730A2D89F6093(iParam0, 2) + vVar10 };
			if (vdist(vVar25, vVar31) > 0,1f || (vdist(vVar28, vVar34) > 0,1f && vdist(vVar28, vVar34) < 360f))
			{
				unk_0xA47B46945FF6DE74(*uParam3, unk_0x68F4C0EC296D3901(iParam0, 1) + vVar7, 1, 0, 0, 1);
				unk_0xC023D1C4BF532815(*uParam3, unk_0x835730A2D89F6093(iParam0, 2) + vVar10, 2, 1);
				if (func_206(*uParam3))
				{
					unk_0x1E9649458B15960F(*uParam3, true);
				}
				unk_0xEF190091B5B9F5EB(*uParam3, 0);
				unk_0x20641932E5104B25(*uParam3, false, 0);
				unk_0xB0703A3FDD659128(*uParam3, iParam0, 0);
				unk_0xB0703A3FDD659128(iParam0, *uParam3, 0);
			}
			else if (iParam2 == 2 || iParam2 == 3)
			{
				if (iParam1 == 2)
				{
					iLocal_43 = 1;
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == -1877459292 || unk_0x134B62B726CEC8E6(iParam0) == 451260528)
	{
		return 0;
	}
	return 1;
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		if (!iLocal_54)
		{
			unk_0x3124890FDA752DE4(vLocal_185, 25f, -1738103333, 0);
			iLocal_54 = 1;
		}
	}
	else if (iLocal_54)
	{
		unk_0x77ADAEFF81EAE1E4(vLocal_185, 25f, -1738103333, 1);
		iLocal_54 = 0;
	}
}

int func_208(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<16> Param5, char* sParam21, var uParam22)
{
	uVar0 = 6;
	uVar97 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar97, &iVar194, &fVar195, &fVar196, &iVar197) && func_104(iParam1, iParam2, &uVar198, &fVar201))
	{
		iVar202 = 1;
		iVar203 = 16;
		iVar204 = 1000f;
		iVar205 = 0;
		func_212(iParam1, iParam2, &iVar205);
		if (func_211(iVar197, 8))
		{
			func_210(&iVar202, 4);
		}
		if (!unk_0x69DF961355195C3C(*uParam22))
		{
			return 0;
		}
		if (!unk_0xB4ECF989E2C1DAC8(iParam0, sParam3, sParam4, 2) || unk_0xA45992A6CE82FB43(*uParam22) <= 0,001f)
		{
			func_209(iParam0, *uParam22, &uVar0, &uVar97, iVar194, sParam3, sParam4, Param5, sParam21, fVar195, fVar196, iVar202, iVar203, iVar204, iVar205);
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, char* sParam23, float fParam24, float fParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	iVar0 = -1;
	if (!unk_0xEA6BC48857E0AC4C(&uParam7))
	{
		iVar1 = unk_0x4880526EC51D1C27(&uParam7);
		iVar2 = unk_0x4880526EC51D1C27(sParam23);
		iVar3 = (iVar1 - iVar2);
		StringCopy(&cVar4, unk_0xA739D71DFFCCC22C(&uParam7, 0, iVar3), 64);
		iVar20 = 0;
		while (iVar20 < iParam4 + 1)
		{
			iVar21 = iVar3;
			iVar22 = unk_0x4880526EC51D1C27(uParam3[iVar20]);
			if (iVar21 > iVar22)
			{
				iVar21 = iVar22;
			}
			StringCopy(&cVar23, unk_0xA739D71DFFCCC22C(uParam3[iVar20], 0, iVar21), 64);
			if (unk_0x7F8A39872A07D2CE(&cVar4, &cVar23))
			{
				iVar0 = iVar20;
			}
			iVar20++;
		}
	}
	else
	{
		return;
	}
	if (iVar0 == -1)
	{
		return;
	}
	Var39 = { *uParam2[iVar0] };
	Var55 = { *uParam3[iVar0] };
	if (!unk_0xEA6BC48857E0AC4C(&Var39))
	{
		unk_0x3F423BF5B8125A50(&Var39);
		if (!unk_0xB4AE0788C1587752(&Var39))
		{
			unk_0x3F423BF5B8125A50(&Var39);
		}
		else
		{
			if (func_211(iParam27, 1))
			{
				unk_0x5E678B691C852774(iParam0, 16);
				unk_0xC978532B427F303B(iParam0, 0);
				unk_0x11AD11297DC58CC7(iParam0, 1);
			}
			if (!func_211(iParam27, 64))
			{
				func_210(&iParam27, 64);
			}
			unk_0x915804B434753CBD(iParam0, iParam1, &Var39, &Var55, fParam24, fParam25, iParam26, iParam27, iParam28, iParam29);
			unk_0xC46BC31D2529AD8C(iParam0, 1);
			unk_0x11AD11297DC58CC7(iParam0, 1);
			*sParam5 = { Var39 };
			*sParam6 = { Var55 };
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 18:
		case 16:
			switch (iParam0)
			{
				case 0:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 38:
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 56:
		case 57:
			switch (iParam0)
			{
				case 0:
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
		case 60:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
		case 95:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 256;
					return 1;
					break;
			}
			break;
		
		case 122:
		case 123:
			switch (iParam0)
			{
				case 11:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					*iParam2 = 4;
					return 1;
					break;
				
				case 11:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 128:
		case 130:
			switch (iParam0)
			{
				case 13:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
	}
	*iParam2 = 0;
	return 0;
}

int func_213(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	*uParam5 = 4f;
	*uParam6 = -4f;
	if (func_214(iParam0, iParam1, &Var0, &Var16, uParam7, &uVar32))
	{
		switch (iParam1)
		{
			case 0:
			case 24:
				*uParam2[0] = { Var0 };
				*uParam2[1] = { Var0 };
				*uParam2[2] = { Var0 };
				if (iParam0 != 2)
				{
					*uParam3[0] = { Var16 };
					StringConCat(uParam3[0], "base", 64);
					*uParam3[1] = { Var16 };
					StringConCat(uParam3[1], "idle_a", 64);
					*uParam3[2] = { Var16 };
					StringConCat(uParam3[2], "idle_b", 64);
				}
				else
				{
					StringCopy(uParam3[0], "base", 64);
					StringConCat(uParam3[0], &Var16, 64);
					StringCopy(uParam3[1], "idle_a", 64);
					StringConCat(uParam3[1], &Var16, 64);
					StringCopy(uParam3[2], "idle_b", 64);
					StringConCat(uParam3[2], &Var16, 64);
				}
				*uParam4 = 2;
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 2:
			case 3:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "eat_takeout", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "eating_disorder", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "getting_fit", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "your_boyfriend", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0], "_Amanda", 64);
						StringConCat(uParam3[1], "_Amanda", 64);
						StringConCat(uParam3[2], "_Amanda", 64);
						StringConCat(uParam3[3], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0], "_Jimmy", 64);
						StringConCat(uParam3[1], "_Jimmy", 64);
						StringConCat(uParam3[2], "_Jimmy", 64);
						StringConCat(uParam3[3], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0], "_Tracy", 64);
						StringConCat(uParam3[1], "_Tracy", 64);
						StringConCat(uParam3[2], "_Tracy", 64);
						StringConCat(uParam3[3], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 4:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IsThisTheBest", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "ShouldntYouGuys", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "watching_this", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0], "_Amanda", 64);
						StringConCat(uParam3[1], "_Amanda", 64);
						StringConCat(uParam3[2], "_Amanda", 64);
						StringConCat(uParam3[3], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0], "_Jimmy", 64);
						StringConCat(uParam3[1], "_Jimmy", 64);
						StringConCat(uParam3[2], "_Jimmy", 64);
						StringConCat(uParam3[3], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0], "_Tracy", 64);
						StringConCat(uParam3[1], "_Tracy", 64);
						StringConCat(uParam3[2], "_Tracy", 64);
						StringConCat(uParam3[3], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 18:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@SLEEPING", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@BASE", 64);
				StringCopy(uParam3[1], "Base", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_a", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_b", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 16:
				StringCopy(uParam2[0], "TIMETABLE@JIMMY@IG_1@BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				StringCopy(uParam2[1], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[1], "Thats_Some_Good_Shit", 64);
				StringCopy(uParam2[2], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[2], "Whole_Chamber_Dog", 64);
				StringCopy(uParam2[3], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[3], "Hydrotropic_Bud_Or_Something", 64);
				StringCopy(uParam2[4], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[4], "Dont_Dudge_Me_Dad", 64);
				*uParam4 = 4;
				break;
			
			case 9:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Body_High2", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "Grow_This_Strain", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "Helps_My_Glands", 64);
				*uParam2[4] = { Var0 };
				StringCopy(uParam3[4], "Bring_Me_Some_Food", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 25:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "MICS3_15_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IDLE_A", 64);
				switch (iParam0)
				{
					case 0:
						StringConCat(uParam3[0], "_Jimmy", 64);
						StringConCat(uParam3[1], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0], "_Tracy", 64);
						StringConCat(uParam3[1], "_Tracy", 64);
						break;
				}
				*uParam4 = 1;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 32:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "@IDLE_B", 64);
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "@IDLE_B", 64);
				StringCopy(uParam3[5], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 33:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "@IDLE_B", 64);
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "@IDLE_B", 64);
				StringCopy(uParam3[5], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 34:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "@IDLE_B", 64);
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "@IDLE_B", 64);
				StringCopy(uParam3[5], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 35:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "@IDLE_B", 64);
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "@IDLE_B", 64);
				StringCopy(uParam3[5], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 42:
			case 43:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam2[5] = { Var0 };
				StringCopy(uParam3[5], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 38:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "IDLE_B", 64);
				StringCopy(uParam3[4], "Idle_d", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 50:
			case 69:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_4_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_4_IDLE", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 52:
			case 67:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam2[4] = { Var0 };
				StringCopy(uParam3[4], "idle_d", 64);
				*uParam2[5] = { Var0 };
				StringCopy(uParam3[5], "idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 74:
				StringCopy(uParam2[0], "TIMETABLE@REUNITED@IG_7", 64);
				StringCopy(uParam3[0], "AmandaBase_Amanda", 64);
				*uParam4 = 0;
				StringCopy(uParam2[1], "", 64);
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 53:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "amanda_gets_drunk_loop1", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "amanda_gets_drunk_loop2", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "amanda_gets_drunk_loop3", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 59:
			case 72:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_11_IDLE_OhReallyWow", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_11_IDLE_UhHuh", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "IG_11_IDLE_UmHumYesIKnow", 64);
				*uParam2[4] = { Var0 };
				StringCopy(uParam3[4], "IG_11_IDLE_YouRSoBad", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 76:
			case 78:
			case 85:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 77:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_9_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_9_IDLE_A", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_9_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 79:
			case 86:
			case 80:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				if (!Global_3)
				{
					*uParam2[4] = { Var0 };
					StringConCat(uParam2[4], "@IDLE_B", 64);
					StringCopy(uParam3[4], "idle_d", 64);
					*uParam2[5] = { Var0 };
					StringConCat(uParam2[5], "@IDLE_B", 64);
					StringCopy(uParam3[5], "idle_e", 64);
					*uParam4 = 5;
				}
				break;
			
			case 81:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_2_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_2_IDLE_A", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_2_IDLE_B", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "IG_2_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 82:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_8_BASE", 64);
				*uParam4 = 0;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 89:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "idle_a_gardener", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_b_gardener", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_c_gardener", 64);
				*uParam2[3] = { Var0 };
				*uParam3[3] = { Var16 };
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 93:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Idle_Cough", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Smoke_Idle", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 94:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 96:
			case 98:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 97:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 107:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "BASE", 64);
				StringCopy(uParam3[0], "ON_CHAIR_Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "IDLE_A", 64);
				StringCopy(uParam3[1], "ON_CHAIR_A", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "IDLE_A", 64);
				StringCopy(uParam3[2], "ON_CHAIR_B", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "IDLE_B", 64);
				StringCopy(uParam3[3], "ON_CHAIR_C", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "IDLE_B", 64);
				StringCopy(uParam3[4], "ON_CHAIR_D", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "IDLE_C", 64);
				StringCopy(uParam3[5], "ON_CHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 108:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "BASE", 64);
				StringCopy(uParam3[0], "ON_CLUBCHAIR_Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "IDLE_A", 64);
				StringCopy(uParam3[1], "ON_CLUBCHAIR_A", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "IDLE_A", 64);
				StringCopy(uParam3[2], "ON_CLUBCHAIR_B", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "IDLE_B", 64);
				StringCopy(uParam3[3], "ON_CLUBCHAIR_C", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "IDLE_B", 64);
				StringCopy(uParam3[4], "ON_CLUBCHAIR_D", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "IDLE_C", 64);
				StringCopy(uParam3[5], "ON_CLUBCHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 109:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "BASE", 64);
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "_Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "IDLE_A", 64);
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "_A", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "IDLE_A", 64);
				*uParam3[2] = { Var16 };
				StringConCat(uParam3[2], "_B", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "IDLE_A", 64);
				*uParam3[3] = { Var16 };
				StringConCat(uParam3[3], "_C", 64);
				*uParam2[4] = { Var0 };
				StringConCat(uParam2[4], "IDLE_B", 64);
				*uParam3[4] = { Var16 };
				StringConCat(uParam3[4], "_D", 64);
				*uParam2[5] = { Var0 };
				StringConCat(uParam2[5], "IDLE_B", 64);
				*uParam3[5] = { Var16 };
				StringConCat(uParam3[5], "_E", 64);
				*uParam4 = 5;
				break;
			
			case 118:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_1_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_1_IDLE_A", 64);
				*uParam4 = 1;
				*uParam5 = 1,5f;
				*uParam6 = -1,5f;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 101:
			case 119:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_2_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_2_IDLE_A", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_2_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 121:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_4_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_4_IDLE_A", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_4_IDLE_B", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "IG_4_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 105:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "BASE", 64);
				*uParam2[1] = { Var0 };
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "IDLE_A", 64);
				*uParam2[2] = { Var0 };
				*uParam3[2] = { Var16 };
				StringConCat(uParam3[2], "IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 106:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_6_BASE", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_6_IDLE_A", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_6_IDLE_B", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "IG_6_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 112:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 113:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "BaseLoop", 64);
				*uParam2[1] = { Var0 };
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "StruggleLoop", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 115:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "_BASE", 64);
				*uParam2[1] = { Var0 };
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "_IDLE_01", 64);
				*uParam2[2] = { Var0 };
				*uParam3[2] = { Var16 };
				StringConCat(uParam3[2], "_IDLE_02", 64);
				*uParam2[3] = { Var0 };
				*uParam3[3] = { Var16 };
				StringConCat(uParam3[3], "_IDLE_03", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 122:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Clean_Up", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2], "", 64);
				StringCopy(uParam2[3], "", 64);
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 123:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "IDLE_A", 64);
				StringCopy(uParam3[1], "IDLE_B", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "IDLE_A", 64);
				StringCopy(uParam3[2], "IDLE_B", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "IDLE_A", 64);
				StringCopy(uParam3[3], "IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 135:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 17:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 28:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "IG_14_BASE_TRACY", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "IG_14_IDLE_A_WhatRUDoingHere_TRACY", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "IG_14_IDLE_B_ReallyLoveUDad_TRACY", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "IG_14_IDLE_C_YouGotAnyBlowDad_TRACY", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 29:
			case 30:
			case 44:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Idle_a", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "Idle_b", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "Idle_c", 64);
				*uParam4 = 2;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 45:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "FAMR_IG_5_IAmAboutToCrackThis", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "FAMR_IG_5_IAmTotallyOnTop", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "FAMR_IG_5_IAmTryingtoConcentrate", 64);
				*uParam2[4] = { Var0 };
				StringCopy(uParam3[4], "FAMR_IG_5_ThisCollegeStuff", 64);
				*uParam4 = 4;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 90:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringCopy(uParam3[1], "idle_a", 64);
				*uParam2[2] = { Var0 };
				StringCopy(uParam3[2], "idle_b", 64);
				*uParam2[3] = { Var0 };
				StringCopy(uParam3[3], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 116:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "TheDesertIsSoBeautiful", 64);
				*uParam2[2] = { Var0 };
				*uParam3[2] = { Var16 };
				StringConCat(uParam3[2], "TheDontKnowWhy", 64);
				*uParam2[3] = { Var0 };
				*uParam3[3] = { Var16 };
				StringConCat(uParam3[3], "ThereAreJustSomeMoments", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0], "_TREVOR", 64);
						StringConCat(uParam3[1], "_TREVOR", 64);
						StringConCat(uParam3[2], "_TREVOR", 64);
						StringConCat(uParam3[3], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0], "_PATRICIA", 64);
						StringConCat(uParam3[1], "_PATRICIA", 64);
						StringConCat(uParam3[2], "_PATRICIA", 64);
						StringConCat(uParam3[3], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 117:
				*uParam2[0] = { Var0 };
				*uParam3[0] = { Var16 };
				StringConCat(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				*uParam3[1] = { Var16 };
				StringConCat(uParam3[1], "Making_Me_Blush", 64);
				*uParam2[2] = { Var0 };
				*uParam3[2] = { Var16 };
				StringConCat(uParam3[2], "Met_You_20_Years_Ago", 64);
				*uParam2[3] = { Var0 };
				*uParam3[3] = { Var16 };
				StringConCat(uParam3[3], "You_Blinked", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0], "_TREVOR", 64);
						StringConCat(uParam3[1], "_TREVOR", 64);
						StringConCat(uParam3[2], "_TREVOR", 64);
						StringConCat(uParam3[3], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0], "_PATRICIA", 64);
						StringConCat(uParam3[1], "_PATRICIA", 64);
						StringConCat(uParam3[2], "_PATRICIA", 64);
						StringConCat(uParam3[3], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 124:
				*uParam2[0] = { Var0 };
				StringCopy(uParam3[0], "PAT_IG_3", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "BASE", 64);
				StringCopy(uParam3[1], "BASE", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "ALT_1", 64);
				StringCopy(uParam3[2], "ALT_1", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "ALT_2", 64);
				StringCopy(uParam3[3], "ALT_2", 64);
				switch (iParam0)
				{
					case 11:
						StringConCat(uParam3[0], "_PATRICIA", 64);
						StringConCat(uParam3[1], "_PATRICIA", 64);
						StringConCat(uParam3[2], "_PATRICIA", 64);
						StringConCat(uParam3[3], "_PATRICIA", 64);
						break;
					
					case 8:
						StringConCat(uParam3[0], "_MICHAEL", 64);
						StringConCat(uParam3[1], "_MICHAEL", 64);
						StringConCat(uParam3[2], "_MICHAEL", 64);
						StringConCat(uParam3[3], "_MICHAEL", 64);
						break;
				}
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 126:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			case 127:
				*uParam2[0] = { Var0 };
				StringConCat(uParam2[0], "@BASE", 64);
				StringCopy(uParam3[0], "Base", 64);
				*uParam2[1] = { Var0 };
				StringConCat(uParam2[1], "@IDLE_A", 64);
				StringCopy(uParam3[1], "Idle_a", 64);
				*uParam2[2] = { Var0 };
				StringConCat(uParam2[2], "@IDLE_A", 64);
				StringCopy(uParam3[2], "Idle_b", 64);
				*uParam2[3] = { Var0 };
				StringConCat(uParam2[3], "@IDLE_A", 64);
				StringCopy(uParam3[3], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4], "", 64);
				StringCopy(uParam2[5], "", 64);
				break;
			
			default:
				*uParam4 = -1;
				return 0;
				break;
			}
	}
	return 1;
}

int func_214(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*uParam4 |= 262146;
			*uParam4 = (*uParam4 - 1);
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam3, "jimmy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam3, "tracy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 2:
					StringCopy(sParam3, "_amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 2:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			*uParam4 |= 262146;
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 5:
		case 21:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 7:
		case 22:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 33816576;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 34340864;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 42:
			return func_214(iParam0, 43, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 44:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_214(iParam0, 26, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 3:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262146;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 49:
			return func_214(iParam0, 140, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*uParam4 |= 1;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 786434;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*uParam4 |= 266240;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 62:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 1;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 79:
		case 86:
		case 80:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					if (iParam1 == 82)
					{
						*uParam5 = 3;
					}
					if (iParam1 == 83)
					{
						*uParam5 = 2;
					}
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*uParam4 |= 262144;
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262146;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_215(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
				
				case 7:
					func_215(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 101:
		case 119:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam4 = 263176;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*uParam5 = 3;
					*uParam4 |= 33816576;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*uParam4 |= 266240;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 = 267272;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*uParam4 |= 786434;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 8:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 266240;
					return 1;
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 14:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 138:
		case 137:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		
		case 140:
		case 141:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*uParam4 = -1;
	*uParam5 = 5;
	return 0;
}

int func_215(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)
{
	if (iParam0 != 141)
	{
	}
	StringCopy(sParam1, sParam2, 64);
	StringCopy(sParam3, sParam4, 64);
	*uParam5 = 1;
	return 1;
}

int func_216(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	return func_215(iParam0, sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@BASE", sParam2, "BASE", uParam3);
}

int func_217(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, char* sParam7, char* sParam8, var uParam9, int iParam10, var uParam11, bool bParam12)
{
	switch (*uParam9)
	{
		case 0:
			StringCopy(sParam7, "", 64);
			StringCopy(sParam7, "", 64);
			if (func_214(iParam1, iParam2, &Var0, &Var16, &iVar32, &iVar33))
			{
			}
			if (iVar33 != 2)
			{
				unk_0x3F423BF5B8125A50(&Var0);
				if (!unk_0xB4AE0788C1587752(&Var0))
				{
					return 0;
				}
				if (func_211(iVar32, 1))
				{
					func_218(&iVar32, 1);
				}
				unk_0xC6EB89C59F2AF6B8(iParam0, &Var0, &Var16, 8f, -1,5f, -1, iVar32, 0, 0, 0, 0);
				*sParam7 = { Var0 };
				*sParam8 = { Var16 };
				*uParam9 = 1;
			}
			else if (func_243(iParam0, iParam1, iParam2, sParam7, sParam8, vParam3, fParam6))
			{
				*uParam9 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB4ECF989E2C1DAC8(iParam0, sParam7, sParam8, 3))
			{
				fVar34 = unk_0x8CA9406E01C7EE58(iParam0, sParam7, sParam8);
				if (fVar34 >= 1f)
				{
					unk_0xA3BF0AA5A2608191(iParam0);
				}
				if (unk_0xC844350D5D58C99A(*iParam10))
				{
					sVar35 = "hangup";
					if (unk_0xDC2A248C2CB7B3DB(sParam7, sParam8, sVar35, &fVar36, &uVar37))
					{
					}
					else
					{
						fVar36 = -1f;
						if (unk_0x7F8A39872A07D2CE(sParam7, "TIMETABLE@MAID@IG_8@"))
						{
							if (unk_0x7F8A39872A07D2CE(sParam8, "IG_8_IDLE_A"))
							{
								fVar36 = 0,85f;
							}
						}
						if (fVar36 < 0f)
						{
							fVar36 = 0,5f;
						}
					}
					if (fVar34 < fVar36)
					{
					}
					else
					{
						if (unk_0xD59B17D2DFF98E26(*iParam10))
						{
							unk_0x15AFB6CBDE990FB6(*iParam10, 1, 1);
						}
						if (bParam12)
						{
							*uParam11 = 0;
							unk_0xF690C84DADBB3551(iParam10);
						}
					}
				}
			}
			else
			{
				if (unk_0xC844350D5D58C99A(*iParam10))
				{
					if (unk_0xD59B17D2DFF98E26(*iParam10))
					{
						unk_0x15AFB6CBDE990FB6(*iParam10, 1, 1);
					}
					if (bParam12)
					{
						*uParam11 = 0;
						unk_0xF690C84DADBB3551(iParam10);
					}
				}
				StringCopy(sParam7, "", 64);
				StringCopy(sParam8, "", 64);
				*uParam9 = 2;
			}
			break;
		
		case 2:
			if (bParam12)
			{
				if (unk_0xC844350D5D58C99A(*iParam10))
				{
				}
			}
			func_239(iParam1, 138);
			*uParam9 = 0;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_219(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9)
{
	if (Global_93750[iParam1] != iParam2)
	{
		if (!unk_0x0A059E0DB9253280(iParam0))
		{
			return 0;
		}
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) > (7f * 7f))
		{
			return 0;
		}
		if (unk_0x7DECE00E09F41C95(iParam0))
		{
			return 0;
		}
		if (!unk_0xEA6BC48857E0AC4C(sParam4))
		{
			func_83(iParam2, &uVar0, &uVar1, &uVar2);
			if (!func_33(uVar2, func_34()))
			{
				return 0;
			}
			if (func_82(uVar1, 64))
			{
				if (!unk_0xEA6BC48857E0AC4C(sParam4))
				{
					if (func_61(sParam3, sParam4, uParam6, iParam9, uParam5, 0))
					{
						func_48(uParam7);
						Global_93750[iParam1] = iParam2;
						return 1;
					}
				}
			}
			else
			{
				StringCopy(&Var3, sParam4, 16);
				if (func_53(sParam3, &Var3, uParam5))
				{
					if (!unk_0xEA6BC48857E0AC4C(&Var3))
					{
						if (func_61(sParam3, &Var3, uParam6, iParam9, uParam5, 0))
						{
							func_48(uParam7);
							Global_93750[iParam1] = iParam2;
							return 1;
						}
					}
				}
			}
			return 0;
		}
		Global_93750[iParam1] = iParam2;
		*iParam8 = Global_93750[iParam1];
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, char* sParam7, char* sParam8, var uParam9, int iParam10, int iParam11, var uParam12)
{
	if (func_104(iParam1, iParam2, &vVar0, &fVar3))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(iParam0, 1), vParam3 + vVar0) > (4f * 4f))
		{
			if (!unk_0xD1960163A3042274(iParam0, 713668775) == 1)
			{
				unk_0x96167B03C5A77156(iParam0, vParam3 + vVar0, 1f, -1, 0,25f, 0, (fParam6 + fVar3));
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					StringCopy(sParam7, "", 64);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					StringCopy(sParam8, "", 64);
				}
				if (unk_0x69DF961355195C3C(*uParam9))
				{
					unk_0xB46854F2D1C7DFA9(*uParam9);
				}
				*uParam9 = -1;
			}
		}
		else if (!unk_0xD1960163A3042274(iParam0, 713668775) == 1)
		{
			if (unk_0xC844350D5D58C99A(iParam10))
			{
				if (unk_0x50B5F6F3C29E9380(iParam10, iParam0))
				{
					if (!unk_0x4FC40AB0ECCE6E18(iParam10))
					{
						unk_0x4A4806F9D471E491(iParam10, true, 0);
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iParam11))
			{
				if (unk_0x50B5F6F3C29E9380(iParam11, iParam0))
				{
					if (!unk_0x4FC40AB0ECCE6E18(iParam11))
					{
						unk_0x4A4806F9D471E491(iParam11, true, 0);
					}
				}
			}
			if (func_103(iParam1, &fVar4))
			{
				unk_0x7EB60BF335619074(iParam0, fVar4);
			}
			return 1;
		}
		if (unk_0xC844350D5D58C99A(iParam10))
		{
			if (unk_0x50B5F6F3C29E9380(iParam10, iParam0))
			{
				if (unk_0x4FC40AB0ECCE6E18(iParam10))
				{
					unk_0x4A4806F9D471E491(iParam10, false, 0);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iParam11))
		{
			if (unk_0x50B5F6F3C29E9380(iParam11, iParam0))
			{
				if (unk_0x4FC40AB0ECCE6E18(iParam11))
				{
					unk_0x4A4806F9D471E491(iParam11, false, 0);
				}
			}
		}
		unk_0x7EB60BF335619074(iParam0, 0,3f);
		return 0;
	}
	uParam12 = uParam12;
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, vector3 vParam5, float fParam8)
{
	uVar0 = 6;
	uVar97 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar97, &iVar194, &fVar195, &fVar196, &iVar197))
	{
		if (func_104(iParam1, iParam2, &vVar198, &fVar201))
		{
			func_212(iParam1, iParam2, &iVar202);
			bVar203 = false;
			if (!bVar203)
			{
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (unk_0xB4ECF989E2C1DAC8(iParam0, sParam3, sParam4, 1))
					{
						fVar204 = unk_0x8CA9406E01C7EE58(iParam0, sParam3, sParam4);
						if (fVar204 >= 0,99f)
						{
							func_222(iParam0, &uVar0, &uVar97, iVar194, vParam5 + vVar198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, fVar195, fVar196, -1, iVar197, 0, 2, iVar202);
						}
						bVar203 = true;
					}
				}
			}
			if (!bVar203)
			{
				func_222(iParam0, &uVar0, &uVar97, iVar194, vParam5 + vVar198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, fVar195, fVar196, -1, iVar197, 0, 2, iVar202);
			}
		}
		if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			return unk_0xB4ECF989E2C1DAC8(iParam0, sParam3, sParam4, 3);
		}
		return 0;
	}
	StringCopy(sParam3, "", 64);
	StringCopy(sParam4, "", 64);
	return 0;
}

void func_222(int iParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4, vector3 vParam7, char* sParam10, char* sParam11, float fParam12, float fParam13, int iParam14, int iParam15, float fParam16, int iParam17, int iParam18)
{
	iVar0 = iParam3;
	if (!unk_0xEA6BC48857E0AC4C(sParam10) && !unk_0xEA6BC48857E0AC4C(sParam11))
	{
		iVar1 = 0;
		while (iVar1 < iParam3 + 1)
		{
			if (unk_0x7F8A39872A07D2CE(sParam10, uParam1[iVar1]) && unk_0x7F8A39872A07D2CE(sParam11, uParam2[iVar1]))
			{
				if (iVar1 != 0)
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam1 - 1))
					{
						if (iVar2 + 1 < *uParam1)
						{
							*uParam1[iVar2] = { *(uParam1[iVar2 + 1]) };
							*uParam2[iVar2] = { *(uParam2[iVar2 + 1]) };
						}
						else
						{
							StringCopy(uParam1[iVar2], "", 64);
							StringCopy(uParam2[iVar2], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
			}
			iVar1++;
		}
	}
	iVar3 = unk_0x09AC81E49EA267F7(0, iVar0 + 1);
	Var4 = { *uParam1[iVar3] };
	Var20 = { *uParam2[iVar3] };
	if (!unk_0xEA6BC48857E0AC4C(&Var4))
	{
		unk_0x3F423BF5B8125A50(&Var4);
		if (!unk_0xB4AE0788C1587752(&Var4))
		{
			unk_0x3F423BF5B8125A50(&Var4);
		}
		else
		{
			if (func_211(iParam15, 1))
			{
				func_218(&iParam15, 1);
			}
			if (func_211(iParam15, 2))
			{
			}
			else
			{
				func_210(&iParam15, 2);
			}
			if (func_211(iParam15, 262144))
			{
				unk_0x5E678B691C852774(iParam0, 16);
				unk_0xC978532B427F303B(iParam0, 0);
				unk_0x11AD11297DC58CC7(iParam0, 1);
			}
			unk_0x3E8E48829F3C7624(iParam0, &Var4, &Var20, vParam4, vParam7, fParam12, fParam13, iParam14, iParam15, fParam16, iParam17, iParam18);
			unk_0xC46BC31D2529AD8C(iParam0, 1);
			unk_0x11AD11297DC58CC7(iParam0, 1);
			*sParam10 = { Var4 };
			*sParam11 = { Var20 };
		}
	}
}

int func_223(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, char* sParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, char[4] cParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, char[4] cParam38, float fParam39, bool bParam40, int iParam41)
{
	if (iParam41 == 0)
	{
		iParam41 = iParam0;
	}
	if (vdist2(unk_0x68F4C0EC296D3901(iParam41, 0), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > 100f)
	{
		return 1;
	}
	if (!unk_0xEA6BC48857E0AC4C(&sParam5))
	{
		fVar0 = -1f;
		if (unk_0xB4ECF989E2C1DAC8(iParam0, &sParam5, &cParam21, 1))
		{
			fVar0 = unk_0x8CA9406E01C7EE58(iParam0, &sParam5, &cParam21);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, &sParam5, &cParam21, 2))
		{
			if (unk_0x69DF961355195C3C(*uParam37))
			{
				fVar0 = unk_0xA45992A6CE82FB43(*uParam37);
			}
		}
		if (fVar0 >= 0f)
		{
			if (func_225(&sParam5, &cParam21, cParam38, &fVar1, &fVar2))
			{
				if (fVar0 >= fVar1 && fVar0 <= fVar2)
				{
					if (bParam40)
					{
						if (func_202(iParam41, iParam1, sParam2, uParam3, fParam39))
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (func_224(iParam41, iParam1, sParam2, uParam4, fParam39))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (bParam40 && unk_0x83A8177D302E1A7E(*uParam3))
				{
					unk_0xF7E25143642732EA(*uParam3, 0);
				}
			}
		}
	}
	*uParam4 = 0;
	*uParam3 = 0;
	return 0;
}

int func_224(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 16:
			if (!*uParam3)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (!unk_0x25F7A4D42AF2AB93())
				{
					unk_0x9E5E60D8C63FD9D1();
				}
				else if (!unk_0x7F8A39872A07D2CE(sParam2, "scr_fam_door_smoke"))
				{
					if (unk_0xEC560E589DF8370E(iParam0))
					{
						vVar0 = { 0f, 0f, 0f };
						vVar3 = { 0f, 0f, 0f };
						if (unk_0x97A0DB46CA749F31(sParam2, unk_0x940C1429253D3B1B(iParam0), vVar0, vVar3, 31086, 1f, 0, 0, 0))
						{
							*uParam3 = 1;
						}
					}
				}
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 38:
			if (!*uParam3)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (!unk_0x25F7A4D42AF2AB93())
				{
					unk_0x9E5E60D8C63FD9D1();
				}
				else
				{
					vVar6 = { 0f, 0f, 0f };
					vVar9 = { 0f, 0f, 0f };
					fVar12 = 1f;
					if (unk_0x97A0DB46CA749F31(sParam2, unk_0x940C1429253D3B1B(iParam0), vVar6, vVar9, 31086, fVar12, 0, 0, 0))
					{
						*uParam3 = 1;
						return 1;
					}
				}
			}
			return 0;
			break;
	}
	uParam4 = uParam4;
	return 0;
}

int func_225(char* sParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	if (unk_0xDC2A248C2CB7B3DB(sParam0, sParam1, sParam2, uParam3, uParam4))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sParam2, "exhale"))
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, "TIMETABLE@TRACY@IG_7@BASE") && unk_0x7F8A39872A07D2CE(sParam1, "BASE"))
		{
			*uParam3 = -1f;
			*uParam4 = -1f;
			return 0;
		}
		if (unk_0x7F8A39872A07D2CE(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x7F8A39872A07D2CE(sParam1, "IDLE_A"))
		{
			*uParam3 = 0,058f;
			*uParam4 = 0,195f;
			return 1;
		}
		if (unk_0x7F8A39872A07D2CE(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x7F8A39872A07D2CE(sParam1, "IDLE_B"))
		{
			*uParam3 = 0,298f;
			*uParam4 = 0,357f;
			return 1;
		}
		if (unk_0x7F8A39872A07D2CE(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x7F8A39872A07D2CE(sParam1, "IDLE_C"))
		{
			*uParam3 = 0,298f;
			*uParam4 = 0,357f;
			return 1;
		}
		if (unk_0x7F8A39872A07D2CE(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_B") && unk_0x7F8A39872A07D2CE(sParam1, "IDLE_D"))
		{
			*uParam3 = 0,298f;
			*uParam4 = 0,357f;
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_229(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_228(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_227();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2] = 0;
	Global_42357[iVar2].f_1 = iParam0;
	Global_42357[iVar2].f_2 = iParam1;
	Global_42357[iVar2].f_3 = iParam1;
	Global_42357[iVar2].f_4 = 0;
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_227()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_228(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_229(int iParam0)
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

int func_230(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	if (func_214(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &uVar33) && func_104(iParam1, iParam2, &vVar34, &fVar37))
	{
		unk_0x3F423BF5B8125A50(&sVar0);
		if (!unk_0xB4AE0788C1587752(&sVar0))
		{
			unk_0x3F423BF5B8125A50(&sVar0);
			return 0;
		}
		else
		{
			if (!unk_0xB4ECF989E2C1DAC8(iParam0, &sVar0, &cVar16, 3))
			{
				func_212(iParam1, iParam2, &iVar38);
				if (func_211(iVar32, 262144))
				{
					unk_0x5E678B691C852774(iParam0, 8208);
					unk_0xC978532B427F303B(iParam0, 0);
					unk_0x11AD11297DC58CC7(iParam0, 1);
				}
				unk_0x3E8E48829F3C7624(iParam0, &sVar0, &cVar16, vParam3 + vVar34, 0f, 0f, (fParam6 + fVar37), fParam7, fParam8, -1, iVar32, 0f, 2, iVar38);
				unk_0xC46BC31D2529AD8C(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, var uParam7, int iParam8, bool bParam9, char* sParam10, char* sParam11, float fParam12, float fParam13)
{
	if (func_214(iParam1, iParam2, &Var0, &Var16, &uVar32, &uVar33) && func_104(iParam1, iParam2, &vVar34, &fVar37))
	{
		unk_0x3F423BF5B8125A50(&Var0);
		if (!unk_0xB4AE0788C1587752(&Var0))
		{
			unk_0x3F423BF5B8125A50(&Var0);
			StringCopy(sParam10, "", 64);
			StringCopy(sParam11, "", 64);
			return 0;
		}
		else
		{
			iVar38 = 5;
			iVar39 = 16;
			fVar40 = 1000f;
			iVar41 = 0;
			func_212(iParam1, iParam2, &iVar41);
			if (!unk_0x69DF961355195C3C(*uParam7))
			{
				*uParam7 = unk_0xE9744DB7B8CA6965(vParam3 + vVar34, 0f, 0f, (fParam6 + fVar37), 2);
				unk_0xC90224D9E95E5E3A(*uParam7, iParam8);
				unk_0xEFC3DF9D33E248D8(*uParam7, bParam9);
				unk_0x5E4E98C6D98C9C57(*uParam7, 1f);
				if (func_211(iVar39, 1))
				{
					unk_0x5E678B691C852774(iParam0, 8208);
					unk_0xC978532B427F303B(iParam0, 0);
					unk_0x11AD11297DC58CC7(iParam0, 1);
				}
				unk_0x915804B434753CBD(iParam0, *uParam7, &Var0, &Var16, fParam12, fParam13, iVar38, iVar39, fVar40, iVar41);
				unk_0xC46BC31D2529AD8C(iParam0, 1);
				*sParam10 = { Var0 };
				*sParam11 = { Var16 };
				return 0;
			}
			if (!unk_0xB4ECF989E2C1DAC8(iParam0, &Var0, &Var16, 2))
			{
				if (func_211(iVar39, 1))
				{
					unk_0x5E678B691C852774(iParam0, 8208);
					unk_0xC978532B427F303B(iParam0, 0);
					unk_0x11AD11297DC58CC7(iParam0, 1);
				}
				unk_0x915804B434753CBD(iParam0, *uParam7, &Var0, &Var16, fParam12, fParam13, iVar38, iVar39, fVar40, iVar41);
				unk_0xC46BC31D2529AD8C(iParam0, 1);
				unk_0xC90224D9E95E5E3A(*uParam7, iParam8);
				unk_0xEFC3DF9D33E248D8(*uParam7, bParam9);
				*sParam10 = { Var0 };
				*sParam11 = { Var16 };
				return 0;
			}
			return 1;
		}
	}
	StringCopy(sParam10, "", 64);
	StringCopy(sParam11, "", 64);
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, var uParam7, var uParam8, char* sParam9, char* sParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, var uParam15, var uParam16, var uParam17, float fParam18, int iParam19)
{
	switch (*uParam7)
	{
		case 0:
			if (unk_0x69DF961355195C3C(*uParam8))
			{
				if (func_234(iParam0, iParam2, vParam3, fParam6))
				{
					if (unk_0xEA6BC48857E0AC4C(sParam9))
					{
						func_231(iParam0, iParam1, iParam2, vParam3, fParam6, uParam8, 1, 0, sParam9, sParam10, 1090519040, -1056964608);
						return 0;
					}
					if (unk_0xEA6BC48857E0AC4C(sParam12) && unk_0xEA6BC48857E0AC4C(sParam14))
					{
						unk_0xC90224D9E95E5E3A(*uParam8, 0);
						unk_0xEFC3DF9D33E248D8(*uParam8, true);
						*uParam7 = 1;
						return 0;
					}
					func_83(iParam2, &uVar0, &uVar1, &uVar2);
					if (!func_33(uVar2, func_34()))
					{
					}
					else if (func_82(uVar1, 64))
					{
						bVar3 = false;
						if (!unk_0xEA6BC48857E0AC4C(sParam14))
						{
							if (func_61(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
							{
								func_48(uParam17);
								bVar3 = true;
							}
						}
						else if (iParam2 == 129)
						{
							bVar3 = true;
						}
						if (fParam18 != 0f)
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							unk_0xC90224D9E95E5E3A(*uParam8, 0);
							unk_0xEFC3DF9D33E248D8(*uParam8, true);
							*uParam7 = 1;
							return 0;
						}
					}
					else
					{
						StringCopy(&Var4, sParam14, 16);
						if (func_53(sParam12, &Var4, uParam15))
						{
							if (!unk_0xEA6BC48857E0AC4C(&Var4))
							{
								if (func_61(sParam12, &Var4, uParam16, iParam19, uParam15, 0))
								{
									func_48(uParam17);
									unk_0xC90224D9E95E5E3A(*uParam8, 0);
									unk_0xEFC3DF9D33E248D8(*uParam8, true);
									*uParam7 = 1;
									return 0;
								}
							}
						}
					}
				}
				if (!unk_0xA9B1C27B21B1396A(*uParam8))
				{
					*uParam7 = 1;
					return 0;
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam13))
				{
					if (!func_45(uParam17))
					{
						func_44(uParam17);
					}
					StringCopy(&Var8, sParam13, 16);
					if (func_53(sParam12, &Var8, uParam15))
					{
						func_52(iParam0, iParam2, uParam16, sParam12, uParam15, uParam17, &uVar12, 10f, &Var8, 0);
					}
				}
			}
			fVar13 = 8f;
			fVar14 = -8f;
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				fVar13 = 8f;
				fVar14 = -4f;
			}
			if (!func_231(iParam0, iParam1, iParam2, vParam3, fParam6, uParam8, 1, 0, sParam9, sParam10, fVar13, fVar14))
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xEA6BC48857E0AC4C(sParam9))
			{
				func_214(iParam1, iParam2, sParam9, &sVar15, &uVar31, &uVar32);
				unk_0x3F423BF5B8125A50(sParam9);
				if (!unk_0xB4AE0788C1587752(sParam9))
				{
					return 0;
				}
			}
			if (!unk_0x69DF961355195C3C(*uParam8))
			{
				vVar33 = { 0f, 0f, 0f };
				fVar36 = 0f;
				if (func_104(iParam1, iParam2, &vVar33, &fVar36))
				{
					*uParam8 = unk_0xE9744DB7B8CA6965(vParam3 + vVar33, 0f, 0f, (fParam6 + fVar36), 2);
				}
			}
			sVar37 = func_233(iParam0, iParam1, iParam2);
			fVar38 = 8f;
			fVar39 = -1,5f;
			iVar40 = 1;
			iVar41 = 16;
			if (iParam2 == 47)
			{
				fVar38 = 1000f;
			}
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				fVar38 = 4f;
			}
			if (iParam11 == 141)
			{
				iVar40 |= 2;
			}
			else if (((((iParam2 == 132 || iParam2 == 133) || iParam2 == 134) || iParam2 == 73) || iParam2 == 120) || iParam2 == 129)
			{
				fVar39 = -1,5f;
			}
			else
			{
				fVar39 = -1000f;
			}
			if (iParam2 == 56)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1,5f;
				}
			}
			else if (iParam2 == 57)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1,5f;
				}
			}
			else if (iParam2 == 58)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1,5f;
				}
			}
			unk_0x915804B434753CBD(iParam0, *uParam8, sParam9, sVar37, fVar38, fVar39, iVar40, iVar41, 1148846080, 0);
			unk_0xC46BC31D2529AD8C(iParam0, 1);
			unk_0x57E0CF9BF653D99A(*uParam8, 0f);
			unk_0xC90224D9E95E5E3A(*uParam8, 0);
			if (iParam2 == 73)
			{
				unk_0xEFC3DF9D33E248D8(*uParam8, false);
			}
			else
			{
				unk_0xEFC3DF9D33E248D8(*uParam8, true);
			}
			StringCopy(sParam10, sVar37, 64);
			unk_0x4E885A246A9D983A(iParam0, 185, 1);
			*uParam7 = 2;
			return 0;
			break;
		
		case 2:
			if (unk_0xD1960163A3042274(iParam0, 1785177548) == 1)
			{
				*uParam7 = 3;
				if (fParam18 != 0f)
				{
					*uParam7 = 33;
				}
			}
			break;
		
		case 3:
		case 33:
			if (func_214(iParam1, iParam2, &sVar42, &cVar58, &uVar74, &uVar75))
			{
				StringCopy(&cVar58, func_233(iParam0, iParam1, iParam2), 64);
			}
			if (fParam18 != 0f && *uParam7 != 3)
			{
				if (unk_0x69DF961355195C3C(*uParam8) && unk_0xA45992A6CE82FB43(*uParam8) >= fParam18)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam14))
					{
						if (func_61(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
						{
							func_48(uParam17);
							*uParam7 = 3;
						}
					}
				}
			}
			if (unk_0xDC2A248C2CB7B3DB(&sVar42, &cVar58, "WalkInterruptible", &fVar76, &fVar77))
			{
			}
			else
			{
				fVar76 = 0,95f;
				fVar77 = 1f;
				if (iParam2 == 21)
				{
					fVar76 = 0,44f;
					fVar77 = 1f;
				}
				if (iParam2 == 56)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0,78f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 57)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0,73f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 58)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0,8f;
						fVar77 = 1f;
					}
				}
				if (iParam2 == 120)
				{
					fVar76 = 0,8f;
					fVar77 = 1f;
				}
				if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
				{
					fVar76 = 0,75f;
					fVar77 = 1f;
				}
				if (iParam2 == 73)
				{
					fVar76 = 5f;
					fVar77 = 1f;
				}
			}
			if (!unk_0x69DF961355195C3C(*uParam8) || (unk_0x69DF961355195C3C(*uParam8) && unk_0xA45992A6CE82FB43(*uParam8) >= fVar76))
			{
				func_48(uParam17);
				if (iParam11 == 141)
				{
					unk_0x80AA372E04ED318D(iParam0, unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 1,5f, 0f), 1f, 20000, 40000f, 0,5f);
					unk_0xBD453909DC26A85D(iParam0, -668482597, 0, 0, 0);
					unk_0xF895E10BF4C72645(iParam0, 0, 0);
					*uParam7 = 4;
				}
				else
				{
					if (iParam11 == 137 || iParam11 == 138)
					{
						if (unk_0x69DF961355195C3C(*uParam8))
						{
							unk_0xB46854F2D1C7DFA9(*uParam8);
						}
						*uParam8 = -1;
					}
					func_48(uParam17);
					*uParam7 = 0;
					func_239(iParam1, iParam11);
					return 0;
				}
			}
			break;
		
		case 4:
			*uParam7 = 0;
			func_239(iParam1, 138);
			break;
		
		case 5:
			if (iParam11 == 137 || iParam11 == 138)
			{
				if (unk_0x69DF961355195C3C(*uParam8))
				{
					unk_0xB46854F2D1C7DFA9(*uParam8);
				}
				*uParam8 = -1;
			}
			func_48(uParam17);
			*uParam7 = 0;
			func_239(iParam1, iParam11);
			return 0;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_233(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return "JIM_IG_2_P2_Lagging";
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return "IG_2_Exit";
					break;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					return "EXIT_JIMMY";
					break;
				
				case 1:
					return "EXIT_TRACY";
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 2:
					return "IG_2_P2_ItsNotWastingTime_AMANDA";
					break;
				
				case 0:
					return "IG_2_P2_ItsNotWastingTime_JIMMY";
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 2:
					return "IG2_P3_ItsNotABigDeal_AMANDA";
					break;
				
				case 0:
					return "IG2_P3_ItsNotABigDeal_JIMMY";
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 2:
					return "IG_3_WhenURPregnant_AMANDA";
					break;
				
				case 1:
					return "IG_3_WhenURPregnant_TRACY";
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					return "IG_9_IAmOnToYou_AMANDA";
					break;
				
				case 3:
					return "IG_9_IAmOnToYou_MAID";
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam1)
			{
				case 2:
					return "IG_7_EXIT";
					break;
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 2:
					return "Ugh_kale_Amanda";
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 13:
					return "Pineapple_EXIT_LOOP_FLOYD";
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam1)
			{
				case 2:
					return "IG_6_EXIT";
					break;
			}
			break;
		
		case 37:
			if (iParam2 == 37)
			{
				iVar0 = unk_0x134B62B726CEC8E6(iParam0);
				if (iVar0 == func_79(15))
				{
					return "EXIT_TRACY";
				}
				else if (iVar0 == 587703123)
				{
					return "EXIT_BOY";
				}
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 10:
					return "ENTER";
					break;
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 10:
					return "IG_3_IDLE_A";
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam1)
			{
				case 13:
					return "base";
					break;
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	iParam2 = iParam2;
	return "null";
}

int func_234(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	switch (iParam1)
	{
		case 5:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (15f * 15f))
				{
					return 1;
				}
			}
			else if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (7,5f * 7,5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 37:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (8,5f * 8,5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 56:
		case 57:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (5f * 5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 58:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (5f * 5f))
			{
				return 1;
			}
			vVar0 = { -0,42f, 0,68f, 1f };
			vVar3 = { 4,5f, 2,75f, 1f };
			fVar6 = -22f;
			if (func_236(unk_0x16F2683693E537C9(), vParam2 + vVar0, vVar3, (fParam5 + fVar6), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 47:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (3f * 3f))
			{
				return 1;
			}
			vVar7 = { 10,8751f, 2,6168f, 1,47f };
			vVar10 = { 7,5f, 3f, 1,5f };
			fVar13 = -21f;
			if (func_236(unk_0x16F2683693E537C9(), vParam2 + vVar7, vVar10, (fParam5 + fVar13), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 52:
		case 67:
		case 74:
			Var14 = { func_198(38) };
			Var21 = { func_198(39) };
			if (!unk_0x76395FF5E8D5E643(Var14.f_5) || !unk_0x76395FF5E8D5E643(Var21.f_5))
			{
				return 0;
			}
			else
			{
				fVar28 = unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var14.f_5));
				fVar29 = unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var21.f_5));
				if (fVar28 >= 0,1f || fVar29 >= 0,1f)
				{
					return 0;
				}
			}
			vVar30 = { -0,72f, 0,52f, 1f };
			vVar33 = { 3f, 3f, 1f };
			fVar36 = -22f;
			if (func_236(unk_0x16F2683693E537C9(), vParam2 + vVar30, vVar33, (fParam5 + fVar36), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 73:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 129:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 61:
		case 63:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			func_235(3, &iVar37, &vVar38, &iVar41, &iVar42, &cVar43, &iVar59);
			if (iVar41 != 226)
			{
			}
			else if (!unk_0x76395FF5E8D5E643(iVar42))
			{
				unk_0x8010B3127F058F0F(iVar42, iVar37, vVar38, 1, 1, 0);
			}
			else
			{
				fVar60 = unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(iVar42));
				if (fVar60 >= 0,5f)
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 102:
		case 120:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 132:
		case 134:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 133:
			vVar61 = { 0f, 0f, 1f };
			vVar64 = { 2f, 2f, 1f };
			fVar67 = 0f;
			if (func_236(unk_0x16F2683693E537C9(), vParam2 + vVar61, vVar64, (fParam5 + fVar67), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_235(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = -794543736;
			*uParam2 = { -806,8f, 174f, 76,9f };
			StringCopy(sParam5, "V_Michael_1_Son", 64);
			*iParam3 = 226;
			*iParam4 = 1850241841;
			*iParam6 = 0;
			break;
		
		case 1:
			*iParam1 = 1204471037;
			*uParam2 = { -802,7f, 176,2f, 76,9f };
			StringCopy(sParam5, "V_Michael_1_Daught", 64);
			*iParam3 = 226;
			*iParam4 = -378388578;
			*iParam6 = 0;
			break;
		
		case 2:
			*iParam1 = -384976104;
			*uParam2 = { -805f, 171,9f, 76,9f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = -1223666875;
			*iParam6 = 0;
			break;
		
		case 3:
			*iParam1 = -384976104;
			*uParam2 = { -809,281f, 177,855f, 76,89f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = 1893421006;
			*iParam6 = 0;
			break;
		
		case 4:
			*iParam1 = -1444496707;
			*uParam2 = { -804,1f, 185,8f, 72,7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 5:
			*iParam1 = -659810237;
			*uParam2 = { -802,8f, 186,3f, 72,7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 6:
			*iParam1 = -1454760130;
			*uParam2 = { -796,5657f, 177,2214f, 73,0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 41;
			*iParam4 = 776026812;
			*iParam6 = 1;
			break;
		
		case 7:
			*iParam1 = 1245831483;
			*uParam2 = { -794,5051f, 178,0124f, 73,0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 42;
			*iParam4 = 698422331;
			*iParam6 = 1;
			break;
		
		case 8:
			*iParam1 = 159994461;
			*uParam2 = { -817f, 179f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 38;
			*iParam4 = -2097039789;
			*iParam6 = 1;
			break;
		
		case 9:
			*iParam1 = -1686014385;
			*uParam2 = { -816f, 178f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 39;
			*iParam4 = -2127416656;
			*iParam6 = 1;
			break;
		
		case 10:
			*iParam1 = 1575804630;
			*uParam2 = { -1150,158f, -1518,768f, 10,781f };
			StringCopy(sParam5, "rm_bathroom", 64);
			*iParam3 = 226;
			*iParam4 = 2007032394;
			*iParam6 = 0;
			break;
		
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			StringCopy(sParam5, "NULL", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 0;
			break;
	}
}

int func_236(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10)
{
	vVar0.x = (vParam1.x - (cos(fParam7) * vParam4.x));
	vVar0.y = (vParam1.y - (sin(fParam7) * vParam4.x));
	vVar0.z = (vParam1.z - vParam4.z);
	vVar3.x = (vParam1.x + (cos(fParam7) * vParam4.x));
	vVar3.y = (vParam1.y + (sin(fParam7) * vParam4.x));
	vVar3.z = (vParam1.z + vParam4.z);
	if (unk_0x3D1053F9EB43B7AD(iParam0, vVar0, vVar3, (vParam4.y * 2f), iParam8, iParam9, iParam10))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, vector3 vParam5, float fParam8, var uParam9, int iParam10, bool bParam11)
{
	uVar97 = 6;
	if (func_213(iParam1, iParam2, &Var0, &uVar97, &iVar194, &fVar196, &fVar197, &uVar198) && func_104(iParam1, iParam2, &vVar199, &fVar202))
	{
		iVar203 = 1;
		iVar204 = 16;
		iVar205 = 1000f;
		iVar206 = 0;
		func_212(iParam1, iParam2, &iVar206);
		if (func_211(uVar198, 8))
		{
			func_210(&iVar203, 4);
		}
		if (!unk_0x69DF961355195C3C(*uParam9))
		{
			if (iParam2 == 127)
			{
				fVar196 = 1000f;
				iVar205 = fVar196;
			}
			else if (iParam2 == 53)
			{
				fVar196 = 2f;
				iVar205 = fVar196;
			}
			else if (iParam2 == 18)
			{
				fVar196 = 1000f;
				iVar205 = fVar196;
				fVar197 = -1000f;
			}
			else if (iParam2 == 117)
			{
				fVar196 = 1000f;
				iVar205 = fVar196;
				fVar197 = -1000f;
			}
			else if (iParam2 == 115)
			{
				fVar196 = 1000f;
				iVar205 = fVar196;
				fVar197 = -1000f;
			}
			else
			{
				fVar196 = 4f;
				iVar205 = 1000f;
			}
			unk_0x3F423BF5B8125A50(&(Var0[0]));
			if (!unk_0xB4AE0788C1587752(&(Var0[0])))
			{
				return 0;
			}
			if (*uParam9 > 0)
			{
				*uParam9 = -1;
			}
			*uParam9 = unk_0xE9744DB7B8CA6965(vParam5 + vVar199, 0f, 0f, (fParam8 + fVar202), 2);
			unk_0xC90224D9E95E5E3A(*uParam9, iParam10);
			unk_0xEFC3DF9D33E248D8(*uParam9, bParam11);
			uVar195 = func_238(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, fVar196, fVar197, iVar203, iVar204, iVar205, iVar206);
			return uVar195;
		}
		if (!unk_0xB4ECF989E2C1DAC8(iParam0, sParam3, sParam4, 2))
		{
			if (!func_238(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, fVar196, -1000f, iVar203, iVar204, iVar205, iVar206))
			{
				unk_0xEFC3DF9D33E248D8(*uParam9, true);
				return 0;
			}
			unk_0xC90224D9E95E5E3A(*uParam9, iParam10);
			unk_0xEFC3DF9D33E248D8(*uParam9, bParam11);
		}
		if (bParam11)
		{
			if (unk_0xA45992A6CE82FB43(*uParam9) >= 0,999f)
			{
				func_238(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, 1000f, -1000f, iVar203, iVar204, 1000f, iVar206);
			}
		}
		return 1;
	}
	return 0;
}

int func_238(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	iVar0 = iParam4;
	if (!unk_0xEA6BC48857E0AC4C(sParam5) && !unk_0xEA6BC48857E0AC4C(sParam6))
	{
		if (iVar0 <= 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < iParam4 + 1)
			{
				if (unk_0x7F8A39872A07D2CE(sParam5, uParam2[iVar1]) && unk_0x7F8A39872A07D2CE(sParam6, uParam3[iVar1]))
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam2 - 1))
					{
						if (iVar2 + 1 < *uParam2)
						{
							*uParam2[iVar2] = { *(uParam2[iVar2 + 1]) };
							*uParam3[iVar2] = { *(uParam3[iVar2 + 1]) };
						}
						else
						{
							StringCopy(uParam2[iVar2], "", 64);
							StringCopy(uParam3[iVar2], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
				iVar1++;
			}
		}
	}
	iVar3 = unk_0x09AC81E49EA267F7(0, iVar0 + 1);
	Var4 = { *uParam2[iVar3] };
	Var20 = { *uParam3[iVar3] };
	if (!unk_0xEA6BC48857E0AC4C(&Var4))
	{
		unk_0x3F423BF5B8125A50(&Var4);
		if (!unk_0xB4AE0788C1587752(&Var4))
		{
			unk_0x3F423BF5B8125A50(&Var4);
		}
		else
		{
			if (func_211(iParam9, 1))
			{
				unk_0x5E678B691C852774(iParam0, 16);
				unk_0xC978532B427F303B(iParam0, 0);
				unk_0x11AD11297DC58CC7(iParam0, 1);
			}
			unk_0x57E0CF9BF653D99A(iParam1, 0f);
			unk_0x915804B434753CBD(iParam0, iParam1, &Var4, &Var20, fParam7, fParam8, iParam9, iParam10, iParam11, iParam12);
			unk_0xC46BC31D2529AD8C(iParam0, 1);
			unk_0x11AD11297DC58CC7(iParam0, 1);
			unk_0xC90224D9E95E5E3A(iParam1, 0);
			*sParam5 = { Var4 };
			*sParam6 = { Var20 };
			return 1;
		}
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	func_241(iParam0);
	Global_93750[iParam0] = iParam1;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					func_240(3, iParam1);
					break;
				
				case 3:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					func_240(0, iParam1);
					break;
				
				case 0:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					func_240(0, iParam1);
					break;
				
				case 0:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_240(7, iParam1);
					break;
				
				case 7:
					func_240(6, iParam1);
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					func_240(11, iParam1);
					break;
				
				case 11:
					func_240(9, iParam1);
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					func_240(11, iParam1);
					break;
				
				case 11:
					func_240(9, iParam1);
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					func_240(8, iParam1);
					break;
				
				case 8:
					func_240(11, iParam1);
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_240(14, iParam1);
					break;
				
				case 14:
					func_240(13, iParam1);
					break;
			}
			break;
	}
}

void func_240(int iParam0, int iParam1)
{
	func_241(iParam0);
	Global_93750[iParam0] = iParam1;
}

void func_241(int iParam0)
{
	switch (Global_93750[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		
		default:
			Global_111638.f_18509[iParam0] = Global_93750[iParam0];
			break;
	}
}

int func_242(int iParam0, int iParam1, int iParam2)
{
	if (func_214(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &uVar33))
	{
		unk_0x3F423BF5B8125A50(&sVar0);
		if (!unk_0xB4AE0788C1587752(&sVar0))
		{
			unk_0x3F423BF5B8125A50(&sVar0);
			return 0;
		}
		else
		{
			if (!unk_0xB4ECF989E2C1DAC8(iParam0, &sVar0, &cVar16, 3))
			{
				unk_0xC6EB89C59F2AF6B8(iParam0, &sVar0, &cVar16, 8f, -8f, -1, iVar32, 0, 0, 0, 0);
				unk_0xC46BC31D2529AD8C(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, vector3 vParam5, float fParam8)
{
	vParam5 = { vParam5 };
	fParam8 = fParam8;
	if (!unk_0xEA6BC48857E0AC4C(sParam3) && !unk_0xEA6BC48857E0AC4C(sParam4))
	{
		if (unk_0xB4ECF989E2C1DAC8(iParam0, sParam3, sParam4, 3))
		{
			fVar0 = unk_0x8CA9406E01C7EE58(iParam0, sParam3, sParam4);
			if (fVar0 <= 0,99f)
			{
				return 1;
			}
		}
		StringCopy(sParam3, "", 64);
		StringCopy(sParam4, "", 64);
	}
	if (unk_0x7DECE00E09F41C95(iParam0))
	{
		if (func_244(iParam1, iParam2, &Var1, &Var17, -1))
		{
			unk_0x3F423BF5B8125A50(&Var1);
			if (unk_0xB4AE0788C1587752(&Var1))
			{
				if (!unk_0xB4ECF989E2C1DAC8(iParam0, &Var1, &Var17, 3))
				{
					if (func_214(iParam1, iParam2, &sVar33, &cVar49, &iVar65, &uVar66))
					{
						if (func_211(iVar65, 1))
						{
							func_218(&iVar65, 1);
						}
						if (func_211(iVar65, 262144))
						{
							unk_0x5E678B691C852774(iParam0, 16);
							unk_0xC978532B427F303B(iParam0, 0);
						}
						func_212(iParam1, iParam2, &iVar67);
						fVar68 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar68 = -1,5f;
						}
						if (iParam2 == 60)
						{
							if (func_211(iVar65, 33554432))
							{
							}
							else
							{
								func_210(&iVar65, 33554432);
							}
							fVar68 = -4f;
						}
						unk_0xC6EB89C59F2AF6B8(iParam0, &Var1, &Var17, 8f, fVar68, -1, iVar65, 0f, 0, iVar67, 0);
						*sParam3 = { Var1 };
						*sParam4 = { Var17 };
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		return 0;
	}
	return 0;
}

int func_244(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	StringCopy(sParam2, "null", 64);
	StringCopy(sParam3, "null", 64);
	StringCopy(&Var0, "", 16);
	if (iParam4 == -1)
	{
		iParam4 = func_245(iParam1, &Var0);
		if (iParam4 == -1)
		{
			sVar7 = func_83(iParam1, &uVar4, &uVar5, &uVar6);
			if (!unk_0x7F8A39872A07D2CE(&Var0, sVar7))
			{
				return 0;
			}
		}
	}
	switch (iParam1)
	{
		case 100:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_A_FascistPricks", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_B_RoutineProcedureMyAss", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_C_ThoseFederalChumps", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorDidYouHearAbout", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorTrevorYouWouldnt", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorYouAreReallyGonnaWant", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "ChefIsCookingUp", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "IfYouWantToBorrow", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "OneMoreHit", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_Midwife", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_ComeHere", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_BackedUp", 64);
							break;
						
						case 4:
							return 0;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Thats_Some_Good_Shit", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Whole_Chamber_Dog", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Hydrotropic_Bud_Or_Something", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Dont_Dudge_Me_Dad", 64);
							break;
						
						case 5:
							return 0;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
						case 4:
						case 7:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_Masterbation", 64);
							break;
						
						case 2:
						case 5:
						case 8:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_RollsFlapping", 64);
							break;
						
						case 3:
						case 6:
						case 9:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_GetKnocked", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Body_High2", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Grow_This_Strain", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Helps_My_Glands", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Bring_Me_Some_Food", 64);
							break;
						
						case 5:
							StringCopy(sParam2, "", 64);
							StringCopy(sParam3, "", 64);
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Good_To_See_You", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "I_Dont_Tell_You", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Its_The_Big_Man", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_worry_lines", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_old_hag", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_years_wasted", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_buzzed", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_only_you", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_pinot", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_YouRCreepingMeOut", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_NotNowMichael", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_IWasTryingToForget", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_OhShit", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_A", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_B", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_D", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_C", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_F", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_D", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_I", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Im_Youre_Daughter", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Get_Out_Of_The", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Fucking_Old_Geezer", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Youll_Melt_Out_Here", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Of_Course_I_Go", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Go_Stick_Youre_Head", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Youre_All_The_Fucking", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							return 1;
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_ParentingAtItsFinest", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_IWishAll_A", 64);
							break;
						
						case 4:
							return 1;
							break;
						
						case 5:
							return 1;
							break;
						
						case 6:
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 83:
			switch (iParam0)
			{
				case 3:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_A_WhenWasYourLastTime", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_B_BoyU", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_C_ImSoStressedOut", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_ThatsJustTheTv", 64);
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 1;
							break;
						
						case 4:
							return 1;
							break;
						
						case 5:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_NoTheCondoIsFine", 64);
							break;
						
						case 6:
							return 1;
							break;
						
						case 7:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_IAmNotBeingJealous", 64);
							break;
						
						case 8:
							return 1;
							break;
						
						case 9:
							return 1;
							break;
						
						case 10:
							return 1;
							break;
						
						case 11:
							return 1;
							break;
						
						case 12:
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, char* sParam1)
{
	MemCopy(sParam1, {Global_20424}, 4);
	func_83(iParam0, &uVar0, &uVar1, &uVar2);
	if (func_82(uVar1, 64))
	{
		StringConCat(sParam1, "A", 16);
		return unk_0xEC633BF839C8977E(sParam1);
	}
	iVar3 = unk_0x4880526EC51D1C27(sParam1);
	if (iVar3 <= 0)
	{
		return -1;
	}
	StringCopy(&cVar4, unk_0xA739D71DFFCCC22C(sParam1, (iVar3 - 1), iVar3), 16);
	StringConCat(sParam1, "_1A", 16);
	switch (unk_0x12AB0310C2281427(&cVar4))
	{
		case -902917054:
			return 1;
			break;
		
		case 14385563:
			return 2;
			break;
		
		case -289776295:
			return 3;
			break;
		
		case 592496261:
			return 4;
			break;
	}
	return unk_0xEC633BF839C8977E(sParam1);
}

int func_246(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 21:
		case 24:
		case 16:
		case 38:
		case 40:
		case 36:
		case 39:
		case 33:
		case 45:
		case 61:
		case 63:
		case 53:
		case 52:
		case 67:
		case 81:
		case 76:
		case 77:
		case 78:
		case 85:
		case 79:
		case 86:
		case 80:
		case 87:
		case 89:
		case 90:
		case 91:
		case 104:
		case 105:
		case 101:
		case 100:
		case 119:
		case 120:
		case 113:
		case 114:
		case 112:
		case 109:
		case 123:
		case 122:
		case 126:
		case 136:
			if (func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 0, sParam6))
			{
				func_247(iParam0, *uParam2, iParam7);
				return 1;
			}
			return 0;
			break;
		
		case 6:
		case 31:
			if (func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 1, sParam6))
			{
				func_247(iParam0, *uParam2, iParam7);
				return 1;
			}
			return 0;
			break;
	}
	return func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 0, sParam6);
}

int func_247(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0x8AA6DC470ABA63A2(uParam1))
	{
		switch (iParam0)
		{
			case 61:
			case 63:
				unk_0x6F6BA3FE885E6C91(uParam1, "MichaelInRoom", uParam2);
				return 1;
				break;
			
			case 87:
				unk_0x6F6BA3FE885E6C91(uParam1, "Blow", uParam2);
				return 1;
				break;
			}
	}
	return 1;
}

int func_248(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, char* sParam6)
{
	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != -1)
			{
				unk_0x55D0A2DB35045A35(*uParam1);
				unk_0x43A06902454A1172(*uParam1);
				*uParam1 = -1;
			}
			if (!unk_0xEA6BC48857E0AC4C(sParam2))
			{
				if (unk_0x64F604CF561734A9(sParam2, 0, -1))
				{
					StringCopy(sParam6, sParam2, 64);
					*uParam0 = 1;
				}
			}
			else
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xC844350D5D58C99A(iParam4))
			{
				if (unk_0xEA6BC48857E0AC4C(sParam3))
				{
					*uParam0 = 4;
					return 0;
				}
				return 0;
			}
			switch (iParam5)
			{
				case 0:
					*uParam1 = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(*uParam1, sParam3, iParam4, 0, 0, 0);
					break;
				
				case 1:
					*uParam1 = unk_0xD68EA767274B7444();
					unk_0xEB819BD1E585E9CB(*uParam1, sParam3, unk_0x68F4C0EC296D3901(iParam4, 1), 0, 0, 0, 0);
					break;
				
				default:
					return 0;
					break;
			}
			*uParam0 = 2;
			break;
		
		case 2:
			if (*uParam1 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(*uParam1))
				{
				}
				else
				{
					*uParam0 = 0;
					return 1;
				}
			}
			else
			{
				*uParam0 = 0;
				return 1;
			}
			if (iParam5 != 1)
			{
				if (unk_0xEC560E589DF8370E(iParam4))
				{
					iVar0 = unk_0x940C1429253D3B1B(iParam4);
					if (unk_0x7DECE00E09F41C95(iVar0))
					{
						*uParam0 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xEC560E589DF8370E(iParam4))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam4);
				if (!unk_0x7DECE00E09F41C95(iVar1))
				{
					*uParam0 = 0;
				}
			}
			break;
		
		case 4:
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_76432++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_301(iVar10, iParam1, iParam2, -1) };
		if (!func_300(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		func_292(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == -1692214353)
			{
				iVar5 = func_290(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_290(iParam0, 9);
			if (iVar10 == 225514697)
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == -1692214353)
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == -1686040670)
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_289(iParam0, 1);
			if (!func_288(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_289(iParam0, 0);
			if (!func_287(iVar10, 14, iVar8, -1) && !func_286(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == -1692214353)
			{
				iVar9 = func_289(iParam0, 2);
			}
		}
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76477 };
		}
		else
		{
			uVar11 = { func_282(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76434[1] = { func_301(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76494 };
						}
						else
						{
							uVar28 = { func_279(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76434[1] = { func_301(iVar10, 14, uVar28[iVar1], -1) };
							func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
							func_292(14);
							if (Global_76432 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_262(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == -1692214353 && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_261(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_260(iVar0)));
						}
						else
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
						}
						func_292(iVar0);
						if (Global_76432 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_262(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_301(iVar10, iVar0, func_259(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == -1692214353)
						{
							if (func_258(iParam0, iVar10, &iVar4, 1))
							{
								func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_282(iVar10, 0) };
						func_249(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_301(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_256(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_249(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_301(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_256(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_249(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_301(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_249(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_301(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_249(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_301(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_249(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_279(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_301(iVar10, 14, uVar69[iVar1], -1) };
			func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			func_292(14);
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_262(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		func_292(iParam1);
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_262(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_260(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_260(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_260(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_262(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_253(iVar10, iParam1, iParam2);
		}
	}
	if (Global_76432 == 1)
	{
		if (func_258(iParam0, iVar10, &iVar4, 0))
		{
			func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_250(iParam0, iVar10, &iVar4))
		{
			func_249(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_252(iParam1);
	if (Global_111638.f_2358.f_539[iVar0].f_63 != -99)
	{
		if (!func_251(iParam0, Global_111638.f_2358.f_539[iVar0].f_64, Global_111638.f_2358.f_539[iVar0].f_63))
		{
			*iParam2 = Global_111638.f_2358.f_539[iVar0].f_62;
			Global_111638.f_2358.f_539[iVar0].f_63 = -99;
			Global_111638.f_2358.f_539[iVar0].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_76434[1] = { func_301(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_282(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_251(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_279(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_251(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_76434[2] = { func_301(iVar0, 14, iVar4, -1) };
									if (Global_76434[2].f_12 == iVar3)
									{
										if (func_251(iParam0, 14, iVar4))
										{
											if (!func_256(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_76434[2])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_290(iParam0, iVar2);
						Global_76434[2] = { func_301(iVar0, iVar2, iVar1, -1) };
						if (!func_256(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_76434[2])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_279(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_251(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1].f_12) == Global_76434[1].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_76434[1].f_12) == Global_76434[1].f_4 || Global_76434[1].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_76434[1].f_3 == unk_0x36C584991B4C183F(iParam0, func_260(iParam1)) && Global_76434[1].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_260(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 0;
			break;
		
		case -1692214353:
			return 1;
			break;
		
		case -1686040670:
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_253(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 225514697)
	{
		iVar0 = 5;
	}
	else if (iParam0 == -1692214353)
	{
		iVar0 = 2;
	}
	else if (iParam0 == -1686040670)
	{
		iVar0 = 4;
	}
	if (func_255(iParam0, 12, iVar0))
	{
		if (func_254(iParam0, iParam1, iParam2))
		{
			iVar1 = func_252(iParam0);
			if (iParam1 == 3)
			{
				Global_111638.f_2358.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111638.f_2358.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_255(int iParam0, int iParam1, int iParam2)
{
	Global_76434[1] = { func_301(iParam0, iParam1, iParam2, -1) };
	return unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 2);
}

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_279(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_257(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == 225514697)
	{
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_286(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_286(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_286(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_252(iParam1);
	if (Global_111638.f_2358.f_539[iVar0].f_60 != -99)
	{
		if (!func_251(iParam0, Global_111638.f_2358.f_539[iVar0].f_61, Global_111638.f_2358.f_539[iVar0].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_111638.f_2358.f_539[iVar0].f_59;
			Global_111638.f_2358.f_539[iVar0].f_60 = -99;
			Global_111638.f_2358.f_539[iVar0].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_251(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_251(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_289(iParam0, iParam2);
			}
		}
		else
		{
			return func_290(iParam0, iParam1);
		}
	}
	return -99;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = -99;
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_252(iParam0);
		Global_111638.f_2358.f_539[iVar0].f_60 = iParam2;
		Global_111638.f_2358.f_539[iVar0].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_290(iParam0, 1);
				iVar0 = func_269(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_290(iParam0, 2);
				iVar0 = func_269(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_261(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_268(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_267(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 225514697:
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_266(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_266(iParam0, 3, 135, 150))
									{
										iVar0 = func_265(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case -1692214353:
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_266(iParam0, 3, 209, 222))
									{
										iVar0 = func_265(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_266(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_265(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_265(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_265(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_265(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_266(iParam0, 3, 176, 191) && !func_266(iParam0, 3, 227, 242))
									{
										iVar0 = func_265(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_290(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_290(iParam0, 11);
								iVar5 = func_264(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_290(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_263(-1692214353, iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_290(iParam0, 8);
								iVar8 = func_290(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_264(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_264(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_290(iParam0, 11);
								iVar0 = func_264(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case -1686040670:
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	switch (iParam0)
	{
		case 225514697:
			break;
		
		case -1692214353:
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case -1686040670:
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_264(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_265(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_265(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_255(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_290(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case 225514697:
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case -1692214353:
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case -1686040670:
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = -99;
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_252(iParam0);
		Global_111638.f_2358.f_539[iVar0].f_63 = iParam2;
		Global_111638.f_2358.f_539[iVar0].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 225514697:
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case -1692214353:
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case -1686040670:
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x4E885A246A9D983A(iParam0, 34, 0);
			unk_0x4E885A246A9D983A(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0)
		{
			iVar0 = func_275(iParam0, iParam2, iParam3, iParam1);
			if (func_271(unk_0x134B62B726CEC8E6(iParam0), 14, iVar0, unk_0xD1BC07002824FE76(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 34, 1);
				unk_0x4E885A246A9D983A(iParam0, 36, 1);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 34, 0);
				unk_0x4E885A246A9D983A(iParam0, 36, 0);
			}
		}
	}
}

int func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_274(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_273(iParam0, func_260(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_260(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xC578687D5A643830(iVar38, &Var21);
			if (!unk_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_278(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_277(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_277(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_276(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_278(iParam3);
}

int func_276(int iParam0, int iParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_274(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_260(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_273(iParam0, func_260(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

struct<10> func_279(int iParam0, int iParam1)
{
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_281(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_281(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_281(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_281(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_281(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_281(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_281(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_281(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_281(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_281(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_281(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_281(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_281(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_281(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_281(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_281(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_281(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_281(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_281(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_281(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_281(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_281(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_281(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_281(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_281(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_281(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_281(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_281(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == 225514697)
		{
			iVar0 = 0;
		}
		else if (iParam1 == -1692214353)
		{
			iVar0 = 1;
		}
		else if (iParam1 == -1686040670)
		{
			iVar0 = 2;
		}
		else if (iParam1 == 1885233650)
		{
			iVar0 = 3;
		}
		else if (iParam1 == -1667301416)
		{
			iVar0 = 4;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_277(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_282(int iParam0, int iParam1)
{
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_285(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_285(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_285(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_285(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_285(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_285(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_285(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_285(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_283(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == 225514697)
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1692214353)
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1686040670)
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == 1885233650)
	{
		iVar0 = 3;
	}
	else if (iParam1 == -1667301416)
	{
		iVar0 = 4;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						unk_0x65C0659496B1CC14(&Var19);
						unk_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_284(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_284(vVar16.z)] = func_277(iParam1, vVar16.x, func_284(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_284(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_286(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 14, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_272(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 1, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_272(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 14, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_272(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 1, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_272(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 1, 3);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 1, 4);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_288(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case -1692214353:
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case -1686040670:
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case 1885233650:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 3);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 4);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_278(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_275(iParam0, iVar0, iVar1, iParam1);
}

int func_290(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_260(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_291(iParam0, iVar1, iVar2, iParam1);
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_260(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_292(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1) && !unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6))
	{
		func_299(iParam0, Global_76434[1].f_5, Global_76434[1].f_2, 2, Global_76434[1].f_1, 1, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1) && unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_293(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_293(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_293(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_293(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_298(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_297(iVar2, iVar0, 0);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_294(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_295(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_295(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_296();
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

int func_296()
{
	return Global_1312745;
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_295(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_298(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

int func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_300(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_301(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_364();
	if (iParam0 == 225514697)
	{
		func_346(iParam1, iParam2);
	}
	else if (iParam0 == -1692214353)
	{
		func_327(iParam1, iParam2);
	}
	else if (iParam0 == -1686040670)
	{
		func_302(iParam1, iParam2);
	}
	return Global_76434[0];
}

void func_302(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_326(iParam1);
			break;
		
		case 2:
			func_325(iParam1);
			break;
		
		case 3:
			func_322(iParam1);
			break;
		
		case 4:
			func_321(iParam1);
			break;
		
		case 6:
			func_320(iParam1);
			break;
		
		case 5:
			func_319(iParam1);
			break;
		
		case 8:
			func_318(iParam1);
			break;
		
		case 9:
			func_317(iParam1);
			break;
		
		case 10:
			func_316(iParam1);
			break;
		
		case 1:
			func_315(iParam1);
			break;
		
		case 7:
			func_314(iParam1);
			break;
		
		case 11:
			func_313(iParam1);
			break;
		
		case 12:
			func_312(iParam1);
			break;
		
		case 13:
			func_311(iParam1);
			break;
		
		case 14:
			func_303(iParam1);
			break;
	}
}

void func_303(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_309(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_24(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_308(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_308(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_308(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_299(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_299(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_299(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_24(14))
			{
				return;
			}
			iVar0 = func_297(func_307(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_297(func_306(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_305(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_297(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_305(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_306(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_307(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_298(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_297(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_304(&(Global_76434[0]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_304(&(Global_76434[0]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x4F79808059300187(iVar38, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_304(&(Global_76434[0]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x1A5A491D253EA7BA(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var41);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_304(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_260(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xC578687D5A643830(iVar58, &Var41);
			if (!unk_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_304(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_311(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_312(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_314(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_315(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_316(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_310(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_317(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_310(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_318(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_319(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_320(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_310(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_321(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_310(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_322(int iParam0)
{
	if (iParam0 < 136)
	{
		func_324(iParam0);
	}
	else
	{
		func_323(iParam0);
	}
	if (Global_76434[0].f_2 == -1)
	{
		func_310(3, iParam0, 242, -1);
	}
}

void func_323(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_324(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_325(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_326(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_310(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_345(iParam1);
			break;
		
		case 2:
			func_344(iParam1);
			break;
		
		case 3:
			func_340(iParam1);
			break;
		
		case 4:
			func_339(iParam1);
			break;
		
		case 6:
			func_338(iParam1);
			break;
		
		case 5:
			func_337(iParam1);
			break;
		
		case 8:
			func_336(iParam1);
			break;
		
		case 9:
			func_335(iParam1);
			break;
		
		case 10:
			func_334(iParam1);
			break;
		
		case 1:
			func_333(iParam1);
			break;
		
		case 7:
			func_332(iParam1);
			break;
		
		case 11:
			func_331(iParam1);
			break;
		
		case 12:
			func_330(iParam1);
			break;
		
		case 13:
			func_329(iParam1);
			break;
		
		case 14:
			func_328(iParam1);
			break;
	}
}

void func_328(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_329(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_330(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_331(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_310(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_332(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_333(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_334(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_335(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_336(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_337(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_338(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_310(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_339(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_310(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_340(int iParam0)
{
	if (iParam0 < 107)
	{
		func_343(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_342(iParam0);
	}
	else
	{
		func_341(iParam0);
	}
	if (Global_76434[0].f_2 == -1)
	{
		func_310(3, iParam0, 318, -1);
	}
}

void func_341(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_342(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_343(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_344(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_345(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_310(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_363(iParam1);
			break;
		
		case 2:
			func_362(iParam1);
			break;
		
		case 3:
			func_359(iParam1);
			break;
		
		case 4:
			func_358(iParam1);
			break;
		
		case 6:
			func_357(iParam1);
			break;
		
		case 5:
			func_356(iParam1);
			break;
		
		case 8:
			func_355(iParam1);
			break;
		
		case 9:
			func_354(iParam1);
			break;
		
		case 10:
			func_353(iParam1);
			break;
		
		case 1:
			func_352(iParam1);
			break;
		
		case 7:
			func_351(iParam1);
			break;
		
		case 11:
			func_350(iParam1);
			break;
		
		case 12:
			func_349(iParam1);
			break;
		
		case 13:
			func_348(iParam1);
			break;
		
		case 14:
			func_347(iParam1);
			break;
	}
}

void func_347(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_310(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_348(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_349(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_350(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_351(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_352(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_353(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_310(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_354(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_355(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_356(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_357(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_310(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_358(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_359(int iParam0)
{
	if (iParam0 < 60)
	{
		func_361(iParam0);
	}
	else
	{
		func_360(iParam0);
	}
	if (Global_76434[0].f_2 == -1)
	{
		func_310(3, iParam0, 181, -1);
	}
}

void func_360(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_361(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_362(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_310(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_363(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_310(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_364()
{
	Global_76434[0].f_1 = -1;
	Global_76434[0].f_2 = -1;
	Global_76434[0].f_5 = -1;
	Global_76434[0].f_3 = -1;
	Global_76434[0].f_4 = -1;
	Global_76434[0].f_7 = 0;
	Global_76434[0].f_6 = 0;
	Global_76434[0].f_13 = -1;
	Global_76434[0].f_12 = 0;
	Global_76434[0] = 0;
	StringCopy(&(Global_76434[0].f_8), "NO_LABEL", 16);
}

int func_365(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			return 14;
			break;
		
		case 1:
			return 15;
			break;
		
		case 2:
			return 17;
			break;
		
		case 5:
			return 44;
			break;
		
		case 6:
			return 19;
			break;
		
		case 7:
			return 37;
			break;
		
		case 10:
			return 20;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 2;
			break;
		
		case 11:
			return 40;
			break;
		
		case 12:
			*iParam1 = -527186490;
			return 145;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 24;
			break;
		
		case 3:
			*iParam1 = -527186490;
			return 145;
			break;
		
		case 4:
			*iParam1 = 1240094341;
			return 145;
			break;
		
		case 15:
			return func_21();
			break;
	}
	return 145;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 11;
			break;
		
		case 4:
			return 12;
			break;
		
		case 5:
			return 15;
			break;
	}
	return 16;
}

int func_367(int iParam0)
{
	iVar0 = func_366(iParam0);
	if (func_387(&(uLocal_55[iParam0]), iVar0, vLocal_185 + vLocal_189[iParam0], func_140((fLocal_188 + uLocal_205[iParam0]), 0f, 360f), &uLocal_508, &(iLocal_510[iParam0]), &uLocal_528, iParam0 + 1, Global_93749))
	{
		func_370(iParam0, &uVar1);
		func_369(iParam0);
		if (iVar0 == 10)
		{
			if (Global_93750[iVar0] == 120)
			{
				func_368(&iLocal_175, uLocal_55[iParam0], iVar0, Global_93750[iVar0], vLocal_185, fLocal_188, iLocal_176, iLocal_177, &vLocal_178, &vLocal_181);
			}
			else if (Global_111638.f_18509[iVar0] == 120)
			{
				if (unk_0xC844350D5D58C99A(iLocal_175))
				{
				}
			}
			else if (unk_0xC844350D5D58C99A(iLocal_175))
			{
				unk_0xF690C84DADBB3551(&iLocal_175);
			}
		}
		if (Global_93750[iVar0] == 141 || Global_93750[iVar0] == 140)
		{
			return 0;
		}
		if (!unk_0xEB6A8945D1AC98A1(uLocal_55[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		iLocal_504 = 1;
	}
	return 0;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, int iParam9, var uParam10, var uParam11)
{
	if (iParam8 != 0)
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 1) };
			unk_0x523BCC9DC80CD82F(iParam8);
			if (unk_0xB87F6CF6E5628C67(iParam8))
			{
				if (iParam8 == -257549932)
				{
					*iParam0 = unk_0x4B72871A3BE7B474(vVar0, 2,5f, iParam8, 1, 0, 1);
				}
				else
				{
					if (unk_0xEB6A8945D1AC98A1(iParam1))
					{
						return;
					}
					if (iParam8 == -257549932 || iParam8 == -680040094)
					{
						unk_0x3124890FDA752DE4(vVar0, 1,5f, iParam8, 0);
					}
					*iParam0 = unk_0x7707E48765093646(iParam8, vVar0, 1, true, 0);
					unk_0xE3430088DE1D3440(*iParam0, 0);
				}
				if (!unk_0xC844350D5D58C99A(*iParam0))
				{
					return;
				}
				if (iParam9 != -1)
				{
					if (!unk_0xEB6A8945D1AC98A1(iParam1))
					{
						if (iParam8 != unk_0x6B7EC7B5B6B57364(453432689))
						{
							unk_0x9F528B1B53FBC5D9(*iParam0, iParam1, unk_0x4A089F2B762B8D33(iParam1, iParam9), *uParam10, *uParam11, 1, 0, 1, 0, 2, 1);
						}
						else
						{
							unk_0x6E98E642DF854766(*iParam0, iParam1, unk_0x4A089F2B762B8D33(iParam1, iParam9), unk_0xF653B9B22DA806A9(*iParam0, "Gun_GripR"), *uParam10, 0f, 0f, 0f, *uParam11, -1f, 1, 1, 0, 1, 2);
						}
					}
				}
				else
				{
					if (func_104(iParam2, iParam3, &vVar3, &fVar6))
					{
						unk_0xA47B46945FF6DE74(*iParam0, vVar3 + vParam4 + *uParam10, 1, 0, 0, 1);
						unk_0xC023D1C4BF532815(*iParam0, Vector((fVar6 + fParam7), 0f, 0f) + *uParam11, 2, 1);
					}
					unk_0x1E9649458B15960F(*iParam0, true);
				}
				unk_0x71199B01895C6202(iParam8);
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
			}
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_369(int iParam0)
{
	iVar0 = func_366(iParam0);
	func_368(&(uLocal_75[iParam0]), uLocal_55[iParam0], iVar0, Global_93750[iVar0], vLocal_185, fLocal_188, iLocal_81[iParam0], iLocal_87[iParam0], &(vLocal_93[iParam0]), &(vLocal_109[iParam0]));
	func_368(&(uLocal_125[iParam0]), uLocal_55[iParam0], iVar0, Global_93750[iVar0], vLocal_185, fLocal_188, iLocal_131[iParam0], iLocal_137[iParam0], &(vLocal_143[iParam0]), &(vLocal_159[iParam0]));
}

void func_370(int iParam0, var uParam1)
{
	*uParam1 = func_386(iParam0);
	if (*uParam1 < 1)
	{
		iVar0 = func_366(iParam0);
		func_371(&(uLocal_61[*uParam1]), iVar0, vLocal_185, fLocal_188, 0);
	}
}

void func_371(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		iVar0 = Global_93750[iParam1];
		if (func_385(iParam1, iVar0, &vVar1, &fVar4, &iVar5, &iVar6, bParam6))
		{
			if (!Global_3)
			{
				fVar7 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), vParam2 + vVar1);
				if (fVar7 < (15f * 15f) && !unk_0xD1BF3090E1F8300E(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0)))
				{
					return;
				}
				Var8.f_11 = 12;
				Var8.f_31 = 49;
				Var8.f_81 = 2;
				if (iVar5 != 3)
				{
					func_384(iVar5, &Var8, 1);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar106 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0x134B62B726CEC8E6(iVar106) == Var8)
					{
						*iParam0 = iVar106;
						unk_0x120A395B0ECB8EA5(*iParam0, 1);
						return;
					}
				}
				if (fVar7 < (35f * 35f))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam2 + vVar1, 10f))
					{
						if (unk_0x6FAACDB2BF63CD65(Var8, vParam2 + vVar1, 0))
						{
							if (!unk_0xD1BF3090E1F8300E(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0)))
							{
								return;
							}
						}
					}
				}
				else if (unk_0x8E28E832BEAC3DCE(vParam2 + vVar1, 4f))
				{
					if (unk_0x6FAACDB2BF63CD65(Var8, vParam2 + vVar1, 0))
					{
						if (!unk_0xD1BF3090E1F8300E(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0)))
						{
							return;
						}
					}
				}
				if (func_383(vParam2 + vVar1, 6f))
				{
					return;
				}
				if (unk_0x7AABDE381A013256(vParam2 + vVar1 - Vector(4f, 4f, 4f), vParam2 + vVar1 + Vector(4f, 4f, 4f), 0, 1, 0, 0, 0, 0, 0))
				{
					return;
				}
			}
			if (iVar5 != 145)
			{
				if (!func_381(iParam0, iVar5, vParam2 + vVar1, iVar6))
				{
					if (func_372(iParam0, iVar5, vParam2 + vVar1, func_140((fParam5 + fVar4), 0f, 360f), 1, iVar6))
					{
						unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(*iParam0), 15);
						unk_0x120A395B0ECB8EA5(*iParam0, 1);
						if (iParam1 == 2)
						{
							unk_0x821D9A7077DBCDBC(*iParam0, 1);
						}
						if (Global_3)
						{
							unk_0x71EDC33E5A423750(*iParam0, 3);
						}
					}
				}
				else
				{
					unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(*iParam0), 15);
					unk_0x120A395B0ECB8EA5(*iParam0, 1);
					if (iParam1 == 2)
					{
						unk_0x821D9A7077DBCDBC(*iParam0, 1);
					}
					if (Global_3)
					{
						unk_0x71EDC33E5A423750(*iParam0, 3);
					}
				}
			}
			else
			{
				iVar107 = 0;
				if (iVar107 != 0)
				{
					unk_0x523BCC9DC80CD82F(iVar107);
					if (unk_0xB87F6CF6E5628C67(iVar107))
					{
						if (unk_0x8E28E832BEAC3DCE(vParam2 + vVar1, 2,5f))
						{
							return;
						}
						if (func_383(vParam2 + vVar1, 6f))
						{
							return;
						}
						if (unk_0xC844350D5D58C99A(*iParam0))
						{
							unk_0xA954465BA6FDEFE2(iParam0);
						}
						*iParam0 = unk_0x122AAB0B1D6F55AD(iVar107, vParam2 + vVar1, func_140((fParam5 + fVar4), 0f, 360f), 0, 0, 0);
						unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
						unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(*iParam0), 15);
						unk_0x120A395B0ECB8EA5(*iParam0, 1);
						if (iVar107 == 2046537925)
						{
							unk_0x4551D324905984CB(*iParam0, 0);
							unk_0xA485C14FF45FDB92(*iParam0, 1);
							unk_0xF3F7BF451A720FDF(*iParam0, 1);
						}
						unk_0x71199B01895C6202(iVar107);
					}
				}
			}
		}
	}
}

int func_372(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, int iParam7)
{
	if (!func_29(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_384(iParam1, &Var0, iParam7);
		if (unk_0xC844350D5D58C99A(*uParam0))
		{
			if (unk_0x134B62B726CEC8E6(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_111638.f_2358.f_539.f_3618[0][0] == Var0) || (iParam1 == 15 && Global_111638.f_2358.f_539.f_3618[0][1] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_3618[0][iVar98]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_3618[0][iVar98]))
			{
				*uParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_3618[0][iVar98], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*uParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*uParam0, 0);
				unk_0x626D5ADA3EFAE431(*uParam0, 0);
				unk_0x44A200C9B6E1CEA6(*uParam0, 1);
				unk_0xD458AC1C1D29C3B4(*uParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*uParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*uParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0xC002508A277213DE(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_5, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_6);
				unk_0x58A0C35FA7CA6162(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_7, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_8);
				unk_0xCCD53AC1B5D5E456(*uParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					unk_0xD3421E391490133B(*uParam0, iVar99 + 1, !Global_111638.f_2358.f_539.f_3618[0][iVar98].f_11[iVar99]);
					iVar99++;
				}
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_24)
				{
					if (unk_0x587993B327460A82(*uParam0, 0))
					{
						if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_24)
						{
							unk_0x429C172A00A5F89B(*uParam0, 1);
						}
						else
						{
							unk_0x821D9A7077DBCDBC(*uParam0, 1);
						}
					}
				}
				unk_0x55A3C4ED4728EA42(*uParam0, &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_27));
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26 >= 0 && Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26 < unk_0xBCB9B04D4DA658DF())
				{
					unk_0xA22B35B584F0580A(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26);
				}
				unk_0x9F0DB8A295EA8513(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_84, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_85, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_86);
				unk_0xA22F71BBC8173C39(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_88);
				unk_0x8BF0BEF985EB6D43(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_87);
				unk_0x85654A532F20966B(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_93, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_94, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_95);
				unk_0x7726E33AC3B60544(*uParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 28));
				unk_0x7726E33AC3B60544(*uParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 29));
				unk_0x7726E33AC3B60544(*uParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 30));
				unk_0x7726E33AC3B60544(*uParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 31));
				if (unk_0x579935D850368851(*uParam0) > 1 && Global_111638.f_2358.f_539.f_3618[0][iVar98].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_89);
				}
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*uParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
						{
							if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90);
						}
					}
				}
				func_376(uParam0, &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_31), &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_81));
				unk_0x0947AEED9914905B(*uParam0, Var0.f_96);
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_3618[0][iVar98]);
				}
				func_375(*uParam0);
				return 1;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var0);
			if (unk_0xB87F6CF6E5628C67(Var0))
			{
				*uParam0 = unk_0x122AAB0B1D6F55AD(Var0, vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*uParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*uParam0, 0);
				unk_0x626D5ADA3EFAE431(*uParam0, 0);
				unk_0x44A200C9B6E1CEA6(*uParam0, 1);
				func_373(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_375(*uParam0);
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_373(var uParam0, struct<98> Param1)
{
	if (Param1.f_9)
	{
		unk_0xC6A6B4DDD6DC073A(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0xC002508A277213DE(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x58A0C35FA7CA6162(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0xCCD53AC1B5D5E456(*uParam0, Param1.f_2);
	unk_0xD458AC1C1D29C3B4(*uParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0xD3421E391490133B(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0x587993B327460A82(*uParam0, 0))
		{
			unk_0x429C172A00A5F89B(*uParam0, 1);
		}
	}
	if (func_374(&uVar2, &iVar1) && Param1.f_97)
	{
		unk_0x55A3C4ED4728EA42(*uParam0, &uVar2);
		unk_0xA22B35B584F0580A(*uParam0, iVar1);
	}
	else if (!unk_0xEA6BC48857E0AC4C(&(Param1.f_27)))
	{
		unk_0x55A3C4ED4728EA42(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xBCB9B04D4DA658DF())
		{
			unk_0xA22B35B584F0580A(*uParam0, Param1.f_26);
		}
	}
	unk_0x9F0DB8A295EA8513(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0xA22F71BBC8173C39(*uParam0, Param1.f_88);
	unk_0x8BF0BEF985EB6D43(*uParam0, Param1.f_87);
	unk_0x85654A532F20966B(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0x7726E33AC3B60544(*uParam0, 2, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 28));
	unk_0x7726E33AC3B60544(*uParam0, 3, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 29));
	unk_0x7726E33AC3B60544(*uParam0, 0, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 30));
	unk_0x7726E33AC3B60544(*uParam0, 1, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 31));
	if (unk_0x579935D850368851(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0x446EA2500F021666(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*uParam0)))
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0x920DACD685EA4957(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0x920DACD685EA4957(*uParam0, Param1.f_90);
			}
		}
	}
	func_376(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0x0947AEED9914905B(*uParam0, Param1.f_96);
}

int func_374(var uParam0, var uParam1)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*uParam1 = Global_111638.f_20113.f_271;
		return 1;
	}
	return 0;
}

void func_375(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			Global_96105[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_376(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_380(unk_0x134B62B726CEC8E6(*uParam0), 1) && unk_0x0ECB5CA5140957AD(*uParam0, 24) != func_379(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*uParam0, 24, func_379(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_378(uParam0);
	if (func_377(*uParam0))
	{
		unk_0xD5A0214B20BCBAD8(*uParam0, 1);
		unk_0x44A200C9B6E1CEA6(*uParam0, 1);
	}
	return 1;
}

int func_377(int iParam0)
{
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_378(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case -1700874274:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 4) == 0)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 13);
			}
			break;
	}
}

int func_379(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 38);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

int func_381(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_384(iParam1, &Var0, iParam5);
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar98 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_382(iVar98, Var0))
		{
			*uParam0 = iVar98;
			return 1;
		}
	}
	iVar99 = unk_0x728870EB733D12A1();
	if (func_382(iVar99, Var0))
	{
		*uParam0 = iVar99;
		return 1;
	}
	iVar100 = unk_0x6E7D01E16ABEFABB(vParam2, 20f, Var0, 6);
	if (func_382(iVar100, Var0))
	{
		*uParam0 = iVar100;
		return 1;
	}
	return 0;
}

int func_382(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x134B62B726CEC8E6(iParam0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_383(vector3 vParam0, float fParam3)
{
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x728870EB733D12A1();
	if (!unk_0x437347B10A200C4B(iVar0, 0))
	{
		if (unk_0x0A059E0DB9253280(iVar0))
		{
			return 1;
		}
		vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 1) };
		fVar4 = vdist2(vParam0, vVar1);
		if (fVar4 < (fParam3 * fParam3))
		{
			iVar5 = unk_0x09AC81E49EA267F7(1, 10);
			vVar6 = { 0f, 0f, 0f };
			fVar9 = 0f;
			iVar10 = 0;
			iVar11 = 1;
			if (unk_0x4A13F7D4B1E239A0(vParam0, iVar5, &vVar6, &fVar9, &iVar10, iVar11, 1077936128, 0))
			{
				vVar12 = { 2f, 2f, 2f };
				if (unk_0x8E28E832BEAC3DCE(vVar6, vmag(vVar12)))
				{
					return 1;
				}
				if (unk_0x7AABDE381A013256(vVar6 - vVar12, vVar6 + vVar12, 0, 1, 1, 0, 0, 0, 0))
				{
					return 1;
				}
				unk_0xA47B46945FF6DE74(iVar0, vVar6, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(iVar0, fVar9);
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_384(int iParam0, var uParam1, int iParam2)
{
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = -1177863319;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 1127861609;
			}
			else
			{
				iVar0 = 1127861609;
			}
			switch (iVar0)
			{
				case -1177863319:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case 1127861609:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = -1177863319;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 788045382;
			}
			else
			{
				iVar0 = -1177863319;
			}
			switch (iVar0)
			{
				case -1177863319:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case 788045382:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = 873639469;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 55628203;
			}
			else
			{
				iVar0 = 873639469;
			}
			switch (iVar0)
			{
				case 873639469:
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case 55628203:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = -810318068;
			}
			else if (iParam2 == 3)
			{
				iVar0 = -685276541;
			}
			else
			{
				iVar0 = -810318068;
			}
			switch (iVar0)
			{
				case -810318068:
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case -685276541:
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = -1216765807;
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = -511601230;
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = -1903012613;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 788045382;
			}
			else
			{
				iVar0 = -1903012613;
			}
			switch (iVar0)
			{
				case -1903012613:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case 788045382:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_385(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	vVar0 = { -812,0607f, 179,5117f, 71,1531f };
	fVar3 = 222,8314f;
	*uParam5 = 0;
	if (bParam6)
	{
		switch (iParam0)
		{
			case 1:
				*uParam2 = { Vector(68,3336f, 156,3374f, -826,3746f) - vVar0 };
				*uParam3 = (81,6041f - fVar3);
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
				break;
			
			case 2:
				*uParam2 = { Vector(69,9654f, 159,461f, -816,9271f) - vVar0 };
				*uParam3 = (105,9127f - fVar3);
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
				break;
			}
	}
	switch (iParam1)
	{
		case 7:
		case 27:
			iVar4 = unk_0x09AC81E49EA267F7(0, 100);
			if (iVar4 < 5)
			{
				*uParam2 = { -44,279f, -1,958f, -0,5f };
				*uParam3 = 135,72f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			else if (iVar4 < 35)
			{
				*uParam2 = { -16,8f, -21,3f, -0,5f };
				*uParam3 = -130,944f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			*uParam2 = { -3,779f, -18,458f, -0,5f };
			*uParam3 = -100,944f;
			*uParam5 = 1;
			*uParam4 = 15;
			return 1;
			break;
		
		case 22:
			iVar5 = unk_0x09AC81E49EA267F7(0, 100);
			if (iVar5 < 5)
			{
				*uParam2 = { -44,279f, -1,958f, -0,5f };
				*uParam3 = 135,72f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			else if (iVar5 < 35)
			{
				*uParam2 = { -16,8f, -21,3f, -0,5f };
				*uParam3 = -130,944f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			*uParam2 = { -3,779f, -18,458f, -0,5f };
			*uParam3 = -100,944f;
			*uParam5 = 2;
			*uParam4 = 14;
			return 1;
			break;
		
		case 23:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			break;
		
		case 51:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				iVar6 = unk_0x09AC81E49EA267F7(0, 100);
				if (iVar6 < 5)
				{
					*uParam2 = { Vector(65,8745f, 167,3424f, -857,7297f) - vVar0 };
					*uParam3 = (354,6213f - fVar3);
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				else if (iVar6 < 35)
				{
					*uParam2 = { *uParam2 + Vector(0f, -9,4f, -3,4f) };
					*uParam3 = (*uParam3 + (-65f + unk_0x79833B02DBD2A244(-1f, 1f)));
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				*uParam2 = { *uParam2 + Vector(0f, -0,3f, -8,5541f) - Vector(1,2923f, 2,834f, 2,3978f) - Vector(0f, -1,3721f, -5,6492f) };
				*uParam3 = (*uParam3 + (((42f + unk_0x79833B02DBD2A244(-1f, 1f)) - (259,72f - 242,5119f)) + 90f));
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
			}
			break;
		
		default:
			*uParam4 = 145;
			return 0;
			break;
	}
	*uParam4 = 145;
	return 0;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
			break;
	}
	return 2;
}

int func_387(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((((func_638(0) || func_638(0)) || func_638(2)) || (unk_0xD4A2BF1975E2C50F() && Global_111628)) || func_637())
	{
		if (Global_93750[iParam1] != 141)
		{
			func_241(iParam1);
			Global_93750[iParam1] = 141;
		}
	}
	iVar0 = 0;
	iVar1 = func_365(iParam1, &iVar0);
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		if (Global_93750[iParam1] == 141 || Global_93750[iParam1] == 140)
		{
			if (func_636(iParam0, iParam1, uParam8, iParam9, iParam10))
			{
				return 0;
			}
			return 0;
		}
		bVar2 = false;
		if (Global_93750[iParam1] != 123)
		{
			if (!func_631(iParam1, vParam2, *uParam6, uParam7))
			{
				wait(0);
				return 0;
			}
		}
		if (Global_76886 == 0 && (iVar1 == 44 && Global_93750[5] == 96))
		{
		}
		else if (func_383(vParam2, 4f))
		{
			wait(0);
			return 0;
		}
		if (func_630(Global_93750[iParam1], &sVar3))
		{
			unk_0x3F423BF5B8125A50(&sVar3);
			if (!unk_0xB4AE0788C1587752(&sVar3))
			{
				bVar2 = true;
			}
		}
		if (iVar1 != 145)
		{
			bVar19 = false;
			if (func_29(iVar1))
			{
				func_629(iVar1);
				if (!func_628(iVar1))
				{
					bVar19 = true;
				}
			}
			else
			{
				func_627(iVar1);
				if (!func_626(iVar1))
				{
					bVar19 = true;
				}
			}
			if ((!bVar2 && !bVar19) && !func_625())
			{
				if (func_29(iVar1))
				{
					if (func_415(iParam0, iVar1, vParam2, fParam5, 1, 0, 0))
					{
						func_100(iParam0, iParam10);
						func_411(*iParam0, iParam1, Global_93750[iParam1]);
						func_98(*iParam0, iParam1, iParam10, 0);
						unk_0x120A395B0ECB8EA5(*iParam0, 1);
						func_57(uParam8, iParam9, *iParam0, func_410(iParam1), 0, 1);
						iVar20 = func_409(iVar1);
						Global_96222[iVar20] = *iParam0;
						func_395(*iParam0, 0);
						Global_111638.f_2358.f_539.f_2300[iVar1] = { unk_0x68F4C0EC296D3901(*iParam0, 1) };
						Global_111638.f_2358.f_539.f_2310[iVar1] = unk_0xD9522BA9E27E1349(*iParam0);
						*uParam7 = unk_0x4D570FEF9D230CE7(*iParam0);
					}
				}
				else if (func_393(iParam0, iVar1, vParam2, fParam5, 1))
				{
					func_100(iParam0, iParam10);
					func_411(*iParam0, iParam1, Global_93750[iParam1]);
					func_98(*iParam0, iParam1, iParam10, 0);
					unk_0x120A395B0ECB8EA5(*iParam0, 1);
					func_57(uParam8, iParam9, *iParam0, func_410(iParam1), 0, 1);
					*uParam7 = unk_0x4D570FEF9D230CE7(*iParam0);
				}
			}
		}
		else if (iVar0 != 0)
		{
			unk_0x523BCC9DC80CD82F(iVar0);
			if (unk_0xB87F6CF6E5628C67(iVar0) && !bVar2)
			{
				*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam5, 0, false);
				unk_0x71199B01895C6202(iVar0);
				func_100(iParam0, iParam10);
				func_411(*iParam0, iParam1, Global_93750[iParam1]);
				func_98(*iParam0, iParam1, iParam10, 0);
				unk_0x120A395B0ECB8EA5(*iParam0, 1);
				func_57(uParam8, iParam9, *iParam0, func_410(iParam1), 0, 1);
			}
		}
	}
	else
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			fVar21 = (unk_0xFF085400D959E27C() + 5f);
			switch (Global_93750[iParam1])
			{
				case 6:
				case 8:
				case 38:
				case 39:
				case 40:
				case 30:
				case 1:
				case 136:
				case 125:
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(*iParam0, 1)) < (fVar21 * fVar21))
					{
						unk_0x9501364A300048C6();
					}
					break;
				
				default:
					break;
				}
		}
		if (iParam1 == 12)
		{
			if (!unk_0xD1BF3090E1F8300E(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)))
			{
				unk_0x4A4806F9D471E491(*iParam0, false, 0);
				return 0;
			}
		}
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			if (!unk_0xDA4D31F0799BFE61(*iParam0))
			{
				return 0;
			}
		}
		else if (Global_93750[iParam1] != 141)
		{
			iVar22 = -1;
			switch (iParam1)
			{
				case 0:
					iVar22 = 24;
					break;
				
				case 1:
					iVar22 = 25;
					break;
				
				case 2:
					iVar22 = 26;
					break;
				
				case 5:
					iVar22 = 29;
					break;
				
				case 10:
					iVar22 = 30;
					break;
				
				case 11:
					iVar22 = 31;
					break;
				
				case 13:
					iVar22 = 32;
					break;
			}
			if ((iVar1 != 145 && iVar22 != -1) && unk_0xB87D13D0C064E9D1(*iParam0, unk_0x16F2683693E537C9(), 1))
			{
				iVar23 = func_391(*iParam0);
				if (iVar23 != 0)
				{
					if (!func_390(-1789721694))
					{
						func_389(75, unk_0x68F4C0EC296D3901(*iParam0, 0), 250f, -1);
						if (func_6(-1789721694, iVar22, -1, 6, func_34(), iVar1, 60000, 10000, 75, iVar23, -1, 262208, 1))
						{
							func_241(iParam1);
							Global_93750[iParam1] = 141;
							return 0;
						}
					}
				}
			}
			else
			{
				func_241(iParam1);
				Global_93750[iParam1] = 141;
				return 0;
			}
		}
		if (iVar1 != 145)
		{
			Global_41983[iVar1] = unk_0x1C0640BA9A7327B3() + 20000;
		}
		fVar24 = (100f * 1,25f);
		fVar25 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(*iParam0, 0));
		if (fVar25 > (fVar24 * fVar24))
		{
			if (Global_93750[iParam1] != 141)
			{
				func_241(iParam1);
				Global_93750[iParam1] = 141;
			}
		}
		if (fVar25 < 100f && !func_388(*iParam0, unk_0x16F2683693E537C9()))
		{
			if (Global_93750[iParam1] != 138)
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 1))
				{
					if (iVar1 == 2)
					{
						iVar26 = unk_0x36C584991B4C183F(*iParam0, 4);
						if (iVar26 == 25)
						{
							while (((!func_249(*iParam0, 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(*iParam0, 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								wait(0);
							}
						}
					}
					func_241(iParam1);
					Global_93750[iParam1] = 138;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0x9DD8618CA5BF832D(*iParam0, 124, true);
			unk_0x9DD8618CA5BF832D(*iParam0, 62, true);
			if (unk_0xD1960163A3042274(*iParam0, 713668775) != 0 || unk_0xD1960163A3042274(*iParam0, 713668775) != 1)
			{
				if (func_103(iParam1, &fVar27))
				{
					unk_0x7EB60BF335619074(*iParam0, fVar27);
				}
			}
			*uParam7 = unk_0x4D570FEF9D230CE7(*iParam0);
			if (Global_98465 == *iParam0)
			{
				if (Global_93750[iParam1] != 140)
				{
					if (!func_89())
					{
						Global_98465 = 0;
					}
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x405E212DDE472467(iParam0, 0) && unk_0x405E212DDE472467(iParam1, 0))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0);
				iVar1 = unk_0x6937EA2286828455(iParam1, 0);
				if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_389(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (iParam0 == iParam5)
	{
		return;
	}
	if (iParam0 == 76)
	{
		return;
	}
	if (iParam5 == 76)
	{
		return;
	}
	Global_41432[iParam0] = { vParam1 };
	Global_41432[iParam0].f_3 = fParam4;
	Global_41432[iParam0].f_4 = iParam5;
}

int func_390(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
		if (!unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) || unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			switch (func_392(vVar0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}

int func_392(vector3 vParam0, bool bParam3)
{
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_93947[iVar0].f_7 != 263)
		{
			if (!bParam3 || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar0], 0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_93947[iVar0].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_393(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	if (!func_29(iParam1))
	{
		iVar0 = func_79(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam5, 0, false);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == 1706635382)
			{
				if (unk_0x36C584991B4C183F(*iParam0, 3) == 0)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 5, 2, 0, 0);
				}
			}
			func_394(*iParam0, iParam1);
			if (bParam6)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_394(var uParam0, int iParam1)
{
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_395(int iParam0, bool bParam1)
{
	func_408(iParam0);
	func_401(iParam0, bParam1);
	func_400(iParam0);
	func_399(iParam0);
	func_398(iParam0);
	func_397(iParam0);
	func_396(iParam0);
}

void func_396(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_397(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2318[iVar0] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_398(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() == 8)
			{
				return;
			}
		}
		Global_111638.f_2358.f_539.f_2300[iVar0] = { unk_0x68F4C0EC296D3901(iParam0, 1) };
		Global_111638.f_2358.f_539.f_2310[iVar0] = unk_0xD9522BA9E27E1349(iParam0);
		Global_111638.f_2358.f_539.f_2314[iVar0] = unk_0xB0A50BC6EDB99CA9(iParam0);
		if (Global_111638.f_2358.f_539.f_2300[iVar0] >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0] <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_2 >= 2500f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_2 = 2000f;
		}
	}
}

void func_399(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_400(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_290[iVar0] = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_401(int iParam0, bool bParam1)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_402(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xCDC520E5E48E63D9(-922941372, iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xCDC520E5E48E63D9(-753526687, iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xCDC520E5E48E63D9(-502936933, iVar3, 1);
			}
		}
	}
}

void func_402(int iParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_407(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_407(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_405(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_405(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_404(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar9))
					{
						if (unk_0x31D5E073B6F93CDC(iVar9, iVar1, &Var50))
						{
							if (!func_403(Var50.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var50.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_404(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_405(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_406(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_403(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_406(int iParam0, var uParam1)
{
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_407(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_408(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2296[iVar0] = func_150();
	}
}

int func_409(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		
		case 1:
			return "TRACEY";
			break;
		
		case 2:
			return "AMANDA";
			break;
		
		case 3:
			return "MAID";
			break;
		
		case 4:
			return "GARDENER";
			break;
		
		case 5:
			return "DENISE";
			break;
		
		case 6:
			return "LAMAR";
			break;
		
		case 7:
			return "STRETCH";
			break;
		
		case 10:
			return "NERVOUSRON";
			break;
		
		case 8:
			return "MICHAEL";
			break;
		
		case 9:
			return "TREVOR";
			break;
		
		case 11:
			return "PATRICIA";
			break;
		
		case 12:
			return "TREVORMOM";
			break;
		
		case 13:
			return "FLOYD";
			break;
		
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 138:
		case 140:
			return 0;
			break;
		
		case 0:
		case 2:
		case 3:
		case 1:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 85);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 41);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
			}
			break;
		
		case 5:
		case 8:
		case 10:
			func_412(iParam0, 131);
			return 1;
			break;
		
		case 21:
			func_412(iParam0, 133);
			return 1;
			break;
		
		case 18:
		case 6:
		case 16:
		case 9:
		case 17:
		case 11:
		case 24:
			func_412(iParam0, 131);
			return 1;
			break;
		
		case 7:
		case 22:
		case 23:
		case 20:
			func_412(iParam0, 132);
			return 1;
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 28:
			func_412(iParam0, 37);
			return 1;
			break;
		
		case 43:
		case 42:
		case 34:
		case 38:
			func_412(iParam0, 42);
			return 1;
			break;
		
		case 29:
		case 30:
		case 35:
		case 44:
		case 45:
			func_412(iParam0, 40);
			return 1;
			break;
		
		case 39:
		case 40:
			func_412(iParam0, 38);
			return 1;
			break;
		
		case 31:
			func_412(iParam0, 43);
			return 1;
			break;
		
		case 26:
		case 46:
			func_412(iParam0, 39);
			return 1;
			break;
		
		case 41:
		case 37:
		case 27:
		case 36:
			func_412(iParam0, 34);
			return 1;
			break;
		
		case 33:
		case 32:
			func_412(iParam0, 41);
			return 1;
			break;
		
		case 54:
		case 70:
			func_412(iParam0, 87);
			return 1;
			break;
		
		case 48:
		case 68:
			func_412(iParam0, 84);
			return 1;
			break;
		
		case 65:
		case 64:
			func_412(iParam0, 85);
			return 1;
			break;
		
		case 66:
			func_412(iParam0, 86);
			return 1;
			break;
		
		case 49:
		case 59:
		case 72:
		case 60:
		case 73:
			func_412(iParam0, 80);
			return 1;
			break;
		
		case 47:
		case 58:
			switch (iParam1)
			{
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 51:
		case 52:
		case 67:
			func_412(iParam0, 82);
			return 1;
			break;
		
		case 53:
			func_412(iParam0, 83);
			return 1;
			break;
		
		case 61:
		case 62:
		case 55:
			func_412(iParam0, 85);
			return 1;
			break;
		
		case 63:
		case 71:
			func_412(iParam0, 86);
			return 1;
			break;
		
		case 50:
		case 69:
		case 57:
		case 56:
			switch (iParam1)
			{
				case 0:
					unk_0x78ED16BE998AECC7(iParam0);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 37);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 79);
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 35);
					return 1;
					break;
				
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
			}
			break;
		
		case 19:
			func_412(iParam0, 134);
			return 1;
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 134);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 42);
					return 1;
					break;
			}
			break;
		
		case 95:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 0, 0, false);
			return 1;
			break;
		
		case 97:
		case 94:
		case 96:
		case 98:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			return 1;
			break;
		
		case 113:
			func_249(iParam0, 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		
		case 115:
			func_249(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		
		case 126:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 128:
		case 129:
			func_412(iParam0, 159);
			return 1;
			break;
		
		case 127:
		case 135:
			func_412(iParam0, 161);
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 4:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 8, 1, 0, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 0, 0, 1, false);
			return 1;
			break;
		
		case 10:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 0, 0, 0, false);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 0, 0, false);
			if (iParam2 != 101)
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 2);
			}
			else
			{
				unk_0x9A28E8CB86CD4694(iParam0, 2, 0, 0, false);
			}
			return 1;
			break;
		
		case 8:
		case 9:
			if (iParam2 == 108)
			{
				iVar0 = 12;
				iVar1 = 32;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3816[0][iVar0][(iVar1 / 32)], (iVar1 % 32)))
				{
					func_249(iParam0, 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			return 1;
			break;
		
		case 6:
			return 1;
			break;
	}
	unk_0x78ED16BE998AECC7(iParam0);
	return 0;
}

void func_412(int iParam0, int iParam1)
{
	if (func_414(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_413(iParam0, iVar0);
		func_413(iParam0, iVar1);
		func_413(iParam0, iVar2);
		func_413(iParam0, iVar3);
		func_413(iParam0, iVar4);
		func_413(iParam0, iVar5);
		func_413(iParam0, iVar6);
		func_413(iParam0, iVar7);
		func_413(iParam0, iVar8);
		func_413(iParam0, iVar9);
		func_413(iParam0, iVar10);
		func_413(iParam0, iVar11);
		if (func_211(uVar12, 1))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
		}
		if (func_211(uVar12, 2))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 0, 0, false);
		}
		if (func_211(uVar12, 4))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 1, 0, false);
		}
	}
}

void func_413(int iParam0, int iParam1)
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (func_106(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

int func_414(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 4);
			return 1;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 79:
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 2);
			return 1;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 4);
			return 1;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 2);
			return 1;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

int func_415(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (func_29(iParam1))
	{
		iVar0 = func_26(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam5, 0, false);
			func_624(*iParam0, iParam1, bParam7);
			unk_0x1160BAA065E2C9E5(*iParam0, 0, 0);
			func_617(*iParam0);
			func_606(*iParam0, 1, 0);
			func_605(*iParam0);
			func_602(*iParam0);
			func_417(*iParam0, bParam8);
			func_416(*iParam0);
			if (bParam6)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_416(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96113[iVar0]) && Global_96113[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xC844350D5D58C99A(Global_96113[iVar0]))
		{
			Global_96113[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_417(int iParam0, bool bParam1)
{
	iVar0 = func_25(iParam0);
	if (func_601(iVar0))
	{
		func_600(iVar0, 0);
		func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_421(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_419(iParam0))
		{
			func_600(iVar0, 0);
			func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_421(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[120] && !Global_111638.f_9080.f_99.f_58[122])
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_111638.f_9080.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_111638.f_9080.f_99.f_58[123])
			{
				Global_111638.f_9080.f_99.f_58[123] = 0;
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (func_251(iParam0, 3, 169))
					{
						func_249(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 20))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 20))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 21))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 21))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 22))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 22))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 10))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 50))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 59))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 22))
			{
				func_249(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 14))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_251(iParam0, 12, 13))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 13))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 14))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 14))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 15))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 15))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 4))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 3))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 82))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 76))
			{
				func_249(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 1))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 15))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_251(iParam0, 3, 71))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 18))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 18))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 19))
			{
				if (!func_418(unk_0x134B62B726CEC8E6(iParam0), 12, 19))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 7))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 88))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 17))
			{
				func_249(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_418(int iParam0, int iParam1, int iParam2)
{
	Global_76434[1] = { func_301(iParam0, iParam1, iParam2, -1) };
	return unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1);
}

bool func_419(int iParam0)
{
	iVar1 = unk_0x134B62B726CEC8E6(iParam0);
	iVar0 = func_290(iParam0, 4);
	return func_420(iVar1, 4, iVar0);
}

int func_420(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_421(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_25(iParam0);
		if (func_29(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_259(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_599(iVar0);
					func_432(iParam0, &(Global_111638.f_2358.f_539[iVar0]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_428(iParam0, &Var2, 1, -1);
			Global_98469[iVar0] = { Var2 };
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				func_423();
			}
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("clothes_shop_sp") || (unk_0x8A22C4C08282BF26(-1787151295) == 0 && unk_0x8A22C4C08282BF26(-1241028203) == 0))
			{
				if (iParam1 || ((((((!func_24(0) && !func_24(1)) && !func_24(2)) && !func_24(3)) && !func_24(4)) && !func_24(9)) && !func_24(10)))
				{
					Global_111638.f_2358.f_539[iVar0] = { Var2 };
					Global_111638.f_2358.f_539.f_2391[iVar0] = func_422(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111638.f_2358.f_539.f_204[iVar67][iVar0] = func_290(iParam0, func_284(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111638.f_2358.f_539.f_204[iVar67][iVar0] = func_290(iParam0, func_284(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_111638.f_9080.f_99.f_58[121])
						{
							Global_111638.f_9080.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_422(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0xD2C792E5A65B6BF1(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x0F84621831DD8D8A(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0xB0D40A53430D217C(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0xFEDCD54A497F3495(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_423()
{
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_29(func_22())) || !func_425())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_428(unk_0x16F2683693E537C9(), &Var0, 1, -1);
	func_424(1306, Var0[0], -1, 1);
	func_424(1307, Var0[1], -1, 1);
	func_424(1308, Var0[2], -1, 1);
	func_424(1309, Var0[3], -1, 1);
	func_424(1310, Var0[4], -1, 1);
	func_424(1311, Var0[5], -1, 1);
	func_424(1312, Var0[6], -1, 1);
	func_424(1313, Var0[7], -1, 1);
	func_424(1314, Var0[8], -1, 1);
	func_424(1315, Var0[9], -1, 1);
	func_424(1316, Var0[10], -1, 1);
	func_424(1317, Var0[11], -1, 1);
	func_424(1318, Var0.f_13[0], -1, 1);
	func_424(1319, Var0.f_13[1], -1, 1);
	func_424(1320, Var0.f_13[2], -1, 1);
	func_424(1321, Var0.f_13[3], -1, 1);
	func_424(1322, Var0.f_13[4], -1, 1);
	func_424(1323, Var0.f_13[5], -1, 1);
	func_424(1324, Var0.f_13[6], -1, 1);
	func_424(1325, Var0.f_13[7], -1, 1);
	func_424(1326, Var0.f_13[8], -1, 1);
	func_424(1327, Var0.f_13[9], -1, 1);
	func_424(1328, Var0.f_13[10], -1, 1);
	func_424(1329, Var0.f_13[11], -1, 1);
	func_424(1330, Var0.f_26[0], -1, 1);
	func_424(1331, Var0.f_26[1], -1, 1);
	func_424(1332, Var0.f_26[2], -1, 1);
	func_424(1333, Var0.f_26[3], -1, 1);
	func_424(1334, Var0.f_26[4], -1, 1);
	func_424(1335, Var0.f_26[5], -1, 1);
	func_424(1336, Var0.f_26[6], -1, 1);
	func_424(1337, Var0.f_26[7], -1, 1);
	func_424(1338, Var0.f_26[8], -1, 1);
	func_424(1339, Var0.f_26[9], -1, 1);
	func_424(1340, Var0.f_26[10], -1, 1);
	func_424(1341, Var0.f_26[11], -1, 1);
	func_424(1342, Var0.f_39[0], -1, 1);
	func_424(1343, Var0.f_39[1], -1, 1);
	func_424(1344, Var0.f_39[2], -1, 1);
	func_424(1345, Var0.f_39[3], -1, 1);
	func_424(1346, Var0.f_39[4], -1, 1);
	func_424(1347, Var0.f_39[5], -1, 1);
	func_424(1348, Var0.f_39[6], -1, 1);
	func_424(1349, Var0.f_39[7], -1, 1);
	func_424(1350, Var0.f_39[8], -1, 1);
	func_424(1351, Var0.f_49[0], -1, 1);
	func_424(1352, Var0.f_49[1], -1, 1);
	func_424(1353, Var0.f_49[2], -1, 1);
	func_424(1354, Var0.f_49[3], -1, 1);
	func_424(1355, Var0.f_49[4], -1, 1);
	func_424(1356, Var0.f_49[5], -1, 1);
	func_424(1357, Var0.f_49[6], -1, 1);
	func_424(1358, Var0.f_49[7], -1, 1);
	func_424(1359, Var0.f_49[8], -1, 1);
	func_424(1360, func_22(), -1, 1);
	unk_0xD8B681091EBE4064(-1373240669, 1, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_424(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_296();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_425()
{
	if (func_427() && func_426(0))
	{
		return 1;
	}
	return 0;
}

var func_426(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_427()
{
	return func_426(func_296() + 1);
}

void func_428(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_431(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_430(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_29(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_429(161, iParam3))
			{
				uParam1->f_59 = func_297(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_297(752, iParam3, 0);
			}
			uParam1->f_60 = func_297(753, iParam3, 0);
			uParam1->f_61 = func_297(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_429(161, iParam3))
			{
				uParam1->f_59 = func_297(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_297(752, iParam3, 0);
			}
		}
	}
}

int func_429(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_295(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_430(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != -1)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_431(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_432(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0) || iParam5)
	{
		iVar0 = func_25(iParam0);
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD2C792E5A65B6BF1(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x0F84621831DD8D8A(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0xB0D40A53430D217C(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0xFEDCD54A497F3495(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x9A28E8CB86CD4694(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_29(iVar0))
		{
			Global_111638.f_2358.f_539[iVar0].f_59 = uParam1->f_59;
			Global_111638.f_2358.f_539[iVar0].f_60 = uParam1->f_60;
			Global_111638.f_2358.f_539[iVar0].f_61 = uParam1->f_61;
			if (func_258(iParam0, iVar1, &iVar2, 0))
			{
				func_249(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111638.f_2358.f_539[iVar0].f_62 = uParam1->f_62;
			Global_111638.f_2358.f_539[iVar0].f_63 = uParam1->f_63;
			Global_111638.f_2358.f_539[iVar0].f_64 = uParam1->f_64;
			if (func_250(iParam0, iVar1, &iVar2))
			{
				func_249(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			bVar4 = func_597(iParam0);
			func_294(753, uParam1->f_60, Global_76431, 1, 0);
			func_294(754, uParam1->f_61, Global_76431, 1, 0);
			iVar5 = func_291(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == 1885233650)
				{
					iVar6 = func_595(iVar5);
				}
				else if (iVar1 == -1667301416)
				{
					iVar6 = func_593(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_435(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_291(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_435(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_275(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_435(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == 1885233650)
			{
				iVar9 = func_595(iVar9);
			}
			else
			{
				iVar9 = func_593(iVar9);
			}
			func_294(752, iVar9, Global_76431, 1, 0);
			func_294(2051, iVar9, Global_76431, 1, 0);
			func_433(161, 1, -1, 1);
		}
		if (iVar1 == 1885233650 || iVar1 == -1667301416)
		{
			iVar10 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
			iVar11 = unk_0xD1BC07002824FE76(iParam0, 1, unk_0x98F1B512A2CC07C5(iParam0, 1), unk_0x22286A85EDEAEC56(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
				{
					unk_0x30BBA34DD235D7FE(&Var12);
					if (iVar10 == 1551873674)
					{
						unk_0x4F79808059300187(-518535904, &Var12);
					}
					else
					{
						unk_0x4F79808059300187(530896308, &Var12);
					}
					unk_0x9A28E8CB86CD4694(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			}
		}
	}
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_434())
	{
		iVar0 = Global_2583656[iParam0][func_295(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_434()
{
	return 1;
	return 0;
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!unk_0x8CD06866876216F2())
	{
		if ((Global_1312811 != 4 && Global_1312811 != 5) && Global_1312811 != 7)
		{
			return 0;
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x16F2683693E537C9() && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76431;
	}
	Global_76432++;
	iVar5 = unk_0x134B62B726CEC8E6(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
		if (!func_300(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76432 > 1)
		{
		}
		else
		{
			func_558(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76477 };
		}
		else
		{
			uVar15 = { func_282(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76434[1] = { func_560(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_260(iVar0)));
					}
					else
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
					{
						func_558(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76434[1] = { func_560(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76494 };
							}
							else
							{
								uVar32 = { func_279(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76434[1] = { func_560(iVar5, 14, uVar32[iVar1], -1) };
								func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
								if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
								{
									func_558(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_260(iVar0)));
								}
								else
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_260(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
								}
							}
							else
							{
								func_435(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
							{
								func_558(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_560(iVar5, iVar0, func_557(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 3))
				{
					uVar42 = { func_282(iVar5, 0) };
					func_435(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_556();
			if (iVar59 != -1)
			{
				func_553(iVar59, 0, iParam10);
			}
			func_551(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_279(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_560(iVar5, 14, uVar60[iVar1], -1) };
			func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
			{
				func_558(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76432 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_549(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_435(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_270(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			func_558(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76434[1].f_12 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
				if (unk_0x1A5A491D253EA7BA(iVar70, 66092876, 0))
				{
					func_435(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76434[1].f_12 == 0)
		{
			func_543(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_435(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_435(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_260(iParam1);
		if (unk_0x36C584991B4C183F(iParam0, iVar71) != Global_76434[1].f_3 || unk_0xDADA8E1DD0D0D9D9(iParam0, iVar71) != Global_76434[1].f_4)
		{
			iVar72 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
			iVar73 = unk_0x4F4B24509D6989D0(iParam0, 7, unk_0x36C584991B4C183F(iParam0, 7), unk_0xDADA8E1DD0D0D9D9(iParam0, 7));
			if (((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x1A5A491D253EA7BA(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar73, -2095729091, 0)))
			{
				unk_0x64F9F278AB9DCA2C(iParam0, 7, 0, 0, unk_0xAA973E78065E07A0(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar72, -2095729091, 0)))
			{
				if (iVar5 == 1885233650)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 15, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 2, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, -1996375172, 11))
				{
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 0);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 1);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 2);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 3);
				}
				iVar75 = func_290(iParam0, 11);
				iVar76 = func_290(iParam0, 8);
				iVar77 = func_290(iParam0, 4);
				iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
				if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
				{
					if (iVar5 == 1885233650)
					{
						iVar74 = func_272(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == -1667301416)
					{
						iVar74 = func_272(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x1A5A491D253EA7BA(iVar74, 320460654, 0) || unk_0x1A5A491D253EA7BA(iVar74, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1420825402, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_290(iParam0, 8);
					}
				}
				iVar78 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
				if (unk_0x1A5A491D253EA7BA(iVar78, -356646862, 0))
				{
					iVar79 = func_542(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_549(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar79 = 11;
							iVar74 = func_272(iVar5, iParam2, 11, 4);
							if (!unk_0x1A5A491D253EA7BA(iVar74, -530089825, 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_541(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == -1667301416 && iParam2 >= 256) && unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar75 = func_290(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_272(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0))
					{
						iVar81 = func_539(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
						if (iVar81 != -99)
						{
							func_435(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_538(iVar5, iParam2, -1))
				{
					if (iVar5 == 1885233650)
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_272(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == -1667301416)
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_272(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_538(iVar5, iVar75, -1))
					{
						if ((iVar5 == -1667301416 && iVar75 >= 256) && (unk_0x1A5A491D253EA7BA(iVar74, -1200513218, 0) || unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0)))
						{
						}
						else if ((iVar5 == -1667301416 && iVar75 >= 256) && ((((((((unk_0x1A5A491D253EA7BA(iVar74, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar74, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 1830529185, 0)))
						{
						}
						else
						{
							iVar82 = func_537(iParam0, iParam2);
							iVar83 = func_539(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
							if (iVar83 != -99)
							{
								func_435(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								func_435(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == 1885233650)
								{
									iVar84 = func_536(iVar5, 11, -1);
									Global_76434[1] = { func_560(iVar5, 11, iVar84, -1) };
									iVar83 = func_539(iVar5, iVar84, iParam2, Global_76434[1].f_4);
									if (iVar83 == -99 || unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_435(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76434[1] = { func_560(iVar5, 11, iVar75, -1) };
						iVar85 = Global_76434[1].f_3;
						Global_76434[1] = { func_560(iVar5, 11, iParam2, -1) };
						iVar86 = Global_76434[1].f_3;
						if (iVar85 != iVar86)
						{
							iVar88 = func_537(iParam0, iParam2);
							Global_76434[1] = { func_560(iVar5, 8, iVar76, -1) };
							iVar87 = Global_76434[1].f_4;
							iVar89 = func_535(iVar5, iVar76, iVar87);
							if (iVar88 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								iVar90 = iVar88;
							}
							else if (iVar89 == -99)
							{
								iVar90 = iVar76;
								if (iVar5 == 1885233650)
								{
									iVar91 = func_272(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_534(iVar91) == 6) || unk_0x1A5A491D253EA7BA(iVar91, -1237899132, 0))
									{
										iVar89 = func_536(iVar5, 11, -1);
										Global_76434[1] = { func_560(iVar5, 11, iVar89, -1) };
										iVar90 = func_539(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								if (iVar5 == -1667301416 && (iVar76 == 32 || iVar76 == 33))
								{
									if (!unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar89 = func_536(iVar5, 11, -1);
										Global_76434[1] = { func_560(iVar5, 11, iVar89, -1) };
										iVar90 = func_539(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								iVar92 = -1;
								if (iVar5 == 1885233650)
								{
									iVar92 = func_272(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == -1667301416)
								{
									iVar92 = func_272(iVar5, iVar76, 8, 4);
								}
								if (unk_0x1A5A491D253EA7BA(iVar92, -316495692, 0))
								{
									iVar89 = func_536(iVar5, 11, -1);
									Global_76434[1] = { func_560(iVar5, 11, iVar89, -1) };
									iVar90 = func_539(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								}
							}
							else
							{
								iVar90 = func_539(iVar5, iVar89, iParam2, iVar87);
								if (iVar5 == 1885233650)
								{
									if (unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_533(iVar5, func_290(iParam0, 4), iVar89))
										{
											iVar90 = 240;
										}
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_272(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_533(iVar5, func_290(iParam0, 4), iVar89))
										{
											iVar90 = 48;
										}
									}
								}
							}
							if (iVar90 != -99)
							{
								func_435(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == 1885233650)
							{
								iVar89 = func_536(iVar5, 11, -1);
								Global_76434[1] = { func_560(iVar5, 11, iVar89, -1) };
								iVar90 = func_539(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								if (iVar90 == -99)
								{
									iVar90 = 240;
								}
								func_435(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == -1667301416)
							{
								func_435(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_530(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, unk_0xAA973E78065E07A0(iParam0, 10));
				}
			}
			func_551(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_542(iVar5, func_557(iParam0, 8, -1), iParam2, func_557(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_297(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_297(2158, iParam10, 0);
				}
				unk_0xBF2343612F661793(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar93 = -99;
					if (iVar5 == 1885233650)
					{
						iVar93 = func_595(iParam2);
					}
					else if (iVar5 == -1667301416)
					{
						iVar93 = func_593(iParam2);
					}
					if (iVar93 != -99 && iParam2 != iVar93)
					{
						iParam2 = iVar93;
					}
				}
				func_478(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar94 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar94, -356646862, 0))
			{
				iVar95 = func_290(iParam0, 11);
				iVar96 = func_290(iParam0, 4);
				iVar97 = func_542(iVar5, iParam2, iVar95, iVar96);
				if (iVar97 == -99)
				{
					iVar97 = func_549(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar94)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar97 = 11;
						iVar98 = func_272(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar98, -530089825, 0))
						{
							iVar97 = -99;
						}
						break;
				}
				if (iVar97 != -99)
				{
					iVar99 = 0;
					while (iVar99 < 18)
					{
						if (func_541(iVar5, iVar97, iVar99) == iVar94)
						{
							iVar11 = iVar99;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar99++;
					}
				}
			}
			func_551(iParam0, iParam1, iParam2, iParam6, 0);
			iVar100 = func_290(iParam0, 11);
			if (func_538(iVar5, iVar100, -1))
			{
				iVar101 = func_535(iVar5, iParam2, Global_76434[1].f_4);
				func_530(iVar5, iVar101);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_542(iVar5, iParam2, func_290(iParam0, 11), func_290(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar102 = func_290(iParam0, 7);
				if (!func_475(iVar5, iVar102, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x64F9F278AB9DCA2C(iParam0, func_260(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == 1885233650 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)) || ((iVar5 == -1667301416 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)))
			{
				iVar103 = func_297(2098, iParam10, 0);
				iVar104 = func_297(2099, iParam10, 0);
				iVar105 = func_297(2100, iParam10, 0);
				fVar106 = func_474(135, iParam10);
				if (iVar5 == 1885233650)
				{
					unk_0x466ED20F52F36C02(iParam0, 0, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x466ED20F52F36C02(iParam0, 21, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				iVar107 = 0;
				while (iVar107 < 20)
				{
					unk_0x8173BC90AE40BF1F(iParam0, iVar107, 0f);
					iVar107++;
				}
			}
			else
			{
				func_458(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar108 = func_290(iParam0, 11);
			iVar109 = func_290(iParam0, 8);
			if (iVar5 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(func_272(iVar5, iVar108, 11, 3), -1719338724, 0))
				{
					if (!func_533(iVar5, iParam2, func_535(iVar5, iVar109, 0)))
					{
						func_435(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == -1667301416)
			{
				if (unk_0x1A5A491D253EA7BA(func_272(iVar5, iVar108, 11, 4), -1719338724, 0))
				{
					if (!func_533(iVar5, iParam2, func_535(iVar5, iVar109, 0)))
					{
						func_435(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_560(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_542(iVar5, func_290(iParam0, 8), func_290(iParam0, 11), iParam2);
			}
			iVar110 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar110, -356646862, 0))
			{
				iVar111 = func_542(iVar5, iVar109, iVar108, iParam2);
				if (iVar111 == -99)
				{
					iVar111 = func_549(iParam0, iVar5, 11, iVar108, 3, 0);
				}
				switch (iVar110)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar111 = 11;
						iVar112 = func_272(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar112, -530089825, 0))
						{
							iVar111 = -99;
						}
						break;
				}
				if (iVar111 != -99)
				{
					iVar113 = 0;
					while (iVar113 < 18)
					{
						if (func_541(iVar5, iVar111, iVar113) == iVar110)
						{
							iVar11 = iVar113;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar113++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_260(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_260(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_260(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_435(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_542(iVar5, iVar3, func_290(iParam0, 11), func_290(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_435(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_457(iParam0))
				{
					iVar114 = func_455(iParam0, iVar5, iParam1, iParam2);
					if (iVar114 > 0)
					{
						iVar114 = (iVar114 + unk_0xDADA8E1DD0D0D9D9(iParam0, 9));
						if (!func_454(iParam0, 9, iVar114))
						{
							func_435(iParam0, 9, iVar114, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_435(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
					if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
					{
						func_435(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar115 = func_297(2040, -1, 0);
				if (unk_0x36C584991B4C183F(iParam0, 5) != 0)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 5, func_448(iParam0, iVar115), func_447(iParam0, iVar115), func_446(iParam0, iVar115));
				}
				if (iParam0 == unk_0x16F2683693E537C9())
				{
					unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_448(unk_0x16F2683693E537C9(), iVar115), func_447(unk_0x16F2683693E537C9(), iVar115), 0);
					unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_446(unk_0x16F2683693E537C9(), iVar115));
					func_445(unk_0xD803B885F5E47A62(), iVar115);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == 1885233650 && iParam2 >= 92) || (iVar5 == -1667301416 && iParam2 >= 55))
				{
					if (unk_0x1A5A491D253EA7BA(Global_2621444, -319568873, 0))
					{
						func_435(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == -1667301416 && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar116 = func_557(iParam0, 4, -1);
					iVar117 = iParam2;
				}
				else
				{
					iVar116 = iParam2;
					iVar117 = func_557(iParam0, 11, -1);
				}
				if (func_444(iVar5, 11, iVar117, -1))
				{
					if (!func_443(iVar5, 4, iVar116, -1))
					{
						if (func_442(iVar5, 4, iVar116, &uVar118))
						{
							func_435(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_443(iVar5, 4, iVar116, -1))
				{
					if (func_441(iVar5, 4, iVar116, &uVar118))
					{
						func_435(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar119 = unk_0x36C584991B4C183F(iParam0, 6);
				iVar120 = unk_0xDADA8E1DD0D0D9D9(iParam0, 6);
				iVar121 = unk_0x4F4B24509D6989D0(iParam0, 6, iVar119, iVar120);
				iVar122 = unk_0x36C584991B4C183F(iParam0, 4);
				iVar123 = unk_0xDADA8E1DD0D0D9D9(iParam0, 4);
				iVar124 = unk_0x4F4B24509D6989D0(iParam0, 4, iVar122, iVar123);
				iVar125 = func_290(iParam0, 4);
				iVar126 = func_290(iParam0, 6);
				if (func_440(iVar5, iVar121))
				{
					if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_439(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_277(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_435(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_277(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_435(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_438(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_277(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_435(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_277(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_435(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
				if (func_440(iVar5, iVar124))
				{
					if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_438(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_277(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_435(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_277(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_435(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_439(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_277(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_435(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_277(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_435(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_543(iParam0);
				iVar132 = unk_0x36C584991B4C183F(iParam0, 1);
				iVar133 = unk_0xDADA8E1DD0D0D9D9(iParam0, 1);
				iVar134 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar132, iVar133);
				if (unk_0x1A5A491D253EA7BA(iVar134, 838607662, 0))
				{
					iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_435(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_549(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_435(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_436(iParam0, &uVar4))
		{
			func_435(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_435(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_435(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_435(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar135 = func_541(iVar5, func_557(iParam0, 3, -1), iVar11);
		if (iVar135 != -1)
		{
			if (iVar5 == 1885233650)
			{
				iVar10 = func_277(iVar5, iVar135, 3, 3);
			}
			else if (iVar5 == -1667301416)
			{
				iVar10 = func_277(iVar5, iVar135, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_435(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_436(int iParam0, var uParam1)
{
	*uParam1 = func_557(unk_0x16F2683693E537C9(), 2, -1);
	if (func_297(753, Global_76431, 0) != -99 && func_425())
	{
		if (func_437() == 4)
		{
			return 1;
		}
		if (func_297(753, Global_76431, 0) == 0 && func_297(754, Global_76431, 0) == 0)
		{
			if (func_429(161, Global_76431))
			{
				if (func_297(2051, Global_76431, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_297(752, Global_76431, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_297(753, Global_76431, 0);
		iVar1 = func_297(754, Global_76431, 0);
		if (!func_454(iParam0, iVar1, iVar0))
		{
			if (func_429(161, Global_76431))
			{
				*uParam1 = func_297(2051, Global_76431, 0);
			}
			else
			{
				*uParam1 = func_297(752, Global_76431, 0);
			}
			func_294(753, -99, Global_76431, 1, 0);
			func_294(754, 2, Global_76431, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_437()
{
	return Global_1312811;
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_272(iParam0, iParam1, 6, 3);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
			{
				if ((unk_0x1A5A491D253EA7BA(iParam2, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iParam2, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_272(iParam0, iParam1, 6, 4);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_439(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_272(iParam0, iParam1, 4, 3);
				iVar1 = func_534(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || (unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 713391749, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 434101562, 0))
				{
					if ((((((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_272(iParam0, iParam1, 4, 4);
				iVar1 = func_534(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
				{
					if ((((unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1207283343, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1052059919, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_440(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1885233650:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_441(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_272(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_277(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_272(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_277(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_443(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 4, 4);
						}
						if (unk_0x1A5A491D253EA7BA(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_444(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 11, 4);
						}
						return unk_0x1A5A491D253EA7BA(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_445(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xF1C520A9D38679DE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_446(int iParam0, int iParam1)
{
	return 0;
}

int func_447(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_448(int iParam0, int iParam1)
{
	bVar0 = unk_0x36C584991B4C183F(iParam0, 9) != false;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_449(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == -1667301416)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == 1885233650)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_449(int iParam0, int iParam1)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
	if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	if (unk_0x1A5A491D253EA7BA(iVar4, 240476421, 8))
	{
		if (iVar2 == 1885233650)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_453(iParam0, iParam1) + 15;
			}
		}
		return func_453(iParam0, iParam1);
	}
	if (func_452(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
		if (unk_0x1A5A491D253EA7BA(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == 1885233650)
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1882920022, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -317649054, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
			{
				return func_453(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1536649085, 0) && !unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			iVar6 = func_451(iVar5, 0);
			if (iVar2 == 1885233650)
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_534(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_534(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 248194463, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 396458410, 0))
		{
			iVar7 = func_450(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_534(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -779835469, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
			}
			else
			{