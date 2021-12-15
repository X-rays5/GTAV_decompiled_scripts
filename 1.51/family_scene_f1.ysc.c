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
	iLocal_53 = 1;
	if (unk_0x2EBF608FFE6CA406(66))
	{
		func_54();
	}
	wait(0);
	func_53(ScriptParam_0);
	func_51();
	while (iLocal_53)
	{
		wait(0);
		iLocal_53 = 0;
		if (func_45(1, vLocal_82, 1,5f))
		{
			func_36(&uLocal_113, &uLocal_114, &uLocal_117, &uLocal_118, vLocal_82, "v_franklinshouse");
			if (func_35(126))
			{
				func_1(2, &uLocal_48, vLocal_82, 30f, 22,5f, 7,5f, &uLocal_66);
			}
			iLocal_53 = 1;
		}
	}
	func_54();
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

bool func_33(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
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

int func_35(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, char* sParam7)
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!*uParam0)
	{
		if (!func_44(uParam1))
		{
			*uParam0 = 1;
		}
		else if (func_41(uParam1, 1f))
		{
			*uParam0 = 1;
		}
	}
	else if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		*uParam2 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
		if (!unk_0xEA6BC48857E0AC4C(sParam7))
		{
			if (!unk_0x31609A585163CBAC(*uParam3))
			{
				*uParam3 = unk_0x0D1736C2E221BCEA(vParam4, sParam7);
			}
		}
		func_38(uParam1);
		*uParam0 = 0;
	}
	if (unk_0x31609A585163CBAC(*uParam2) && unk_0xBD307E66C0669BFC(*uParam2))
	{
		if (*uParam2 == *uParam3)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
			{
				return;
			}
			unk_0x38C3A68D7861DCFD(0, 47, 1);
			unk_0x38C3A68D7861DCFD(0, 38, 1);
			unk_0x38C3A68D7861DCFD(0, 22, 1);
			unk_0x38C3A68D7861DCFD(0, 46, 1);
			unk_0x38C3A68D7861DCFD(0, 25, 1);
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 141, 1);
			unk_0x38C3A68D7861DCFD(0, 142, 1);
			unk_0x38C3A68D7861DCFD(0, 143, 1);
			unk_0x38C3A68D7861DCFD(0, 142, 1);
			if (unk_0x6C3F127AAF415E69() == 4)
			{
				unk_0x38C3A68D7861DCFD(0, 21, 1);
			}
			unk_0x38C3A68D7861DCFD(0, 69, 1);
			unk_0x38C3A68D7861DCFD(0, 70, 1);
			unk_0x38C3A68D7861DCFD(0, 68, 1);
			unk_0x38C3A68D7861DCFD(0, 92, 1);
			unk_0x38C3A68D7861DCFD(0, 99, 1);
			unk_0x38C3A68D7861DCFD(0, 115, 1);
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			unk_0x38C3A68D7861DCFD(0, 99, 1);
			unk_0x38C3A68D7861DCFD(0, 100, 1);
			if (unk_0x7FEE810EE9E768EB(0, 37))
			{
				if (!Global_111638.f_18509.f_17)
				{
					func_37("FAM_WEAPDIS", -1);
					Global_111638.f_18509.f_17 = 1;
				}
				*uParam2 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					if (!unk_0x31609A585163CBAC(*uParam3))
					{
						*uParam3 = unk_0x0D1736C2E221BCEA(vParam4, sParam7);
					}
				}
				func_38(uParam1);
				*uParam0 = 0;
			}
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
			{
				if (iVar0 != -1569615261 && iVar0 != 966099553)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, 1);
				}
			}
			if (unk_0xC4AEA6B98479242E(unk_0x16F2683693E537C9(), &iVar0))
			{
				if (iVar0 != -1569615261 && iVar0 != 966099553)
				{
					unk_0x40B4CC38578A6E32(unk_0x16F2683693E537C9(), -1569615261);
				}
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam7))
		{
			vVar1 = { unk_0x9CC20386CF817594(*uParam2, 0f, 0f, 0f) };
			if (vdist2(vParam4, vVar1) < (5f * 5f))
			{
				if (!unk_0x31609A585163CBAC(*uParam3))
				{
					*uParam3 = *uParam2;
				}
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

void func_38(var uParam0)
{
	func_39(uParam0, 0f);
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_40(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(uParam0, 1);
	unk_0x0674E58A79778E99(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_40(bool bParam0)
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

int func_41(var uParam0, float fParam1)
{
	if (func_44(uParam0))
	{
		if (func_42(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_42(var uParam0)
{
	if (func_44(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_40(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_43(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_44(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_45(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vParam1, 1) >= (100f * fParam4))
	{
		return 0;
	}
	if (Global_98794)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (((func_48(0) || func_48(3)) || func_48(2)) || func_48(14))
	{
		if (unk_0x991B1F0980C62628())
		{
			if (unk_0x19EC8D83154D7CC1() != 3)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_47())
	{
		if (unk_0x991B1F0980C62628())
		{
			if (unk_0x19EC8D83154D7CC1() != 3)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2C1AA3A291786CDC())
	{
		return 0;
	}
	if (unk_0xD4A2BF1975E2C50F() && Global_111628)
	{
		return 0;
	}
	if (!func_31(iParam0))
	{
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27], 1))
	{
		return 0;
	}
	return 1;
}

int func_47()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_49(int iParam0)
{
	return func_50(iParam0, Global_41431);
}

int func_50(int iParam0, int iParam1)
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

void func_51()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_119[iVar0] = 0;
		iVar0++;
	}
	func_52(&uLocal_124, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
}

void func_52(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_53(struct<4> Param0)
{
	vLocal_82 = { Param0 };
	uLocal_85 = Param0.f_3;
}

void func_54()
{
	func_60(&uLocal_289, &uLocal_66, &uLocal_54, &uLocal_68, &uLocal_70, &uLocal_56, &uLocal_58, &uLocal_92, &uLocal_94, &uLocal_96);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_59(iVar0);
		if (iVar1 < 15)
		{
			if (Global_93750[iVar1] != 141)
			{
				func_58(iVar1);
				Global_93750[iVar1] = 141;
			}
			func_55(iVar1);
		}
		iVar0++;
	}
	unk_0x21387C9EECC2B220(0);
	unk_0x10FAF14A60A0DBE1();
}

void func_55(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_57(iParam0, &iVar0);
	if (iVar1 != 145)
	{
		if (func_29(iVar1))
		{
			iVar0 = func_26(iVar1);
		}
		else
		{
			iVar0 = func_56(iVar1);
		}
	}
	unk_0x71199B01895C6202(iVar0);
}

int func_56(int iParam0)
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

int func_57(int iParam0, int iParam1)
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

void func_58(int iParam0)
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

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
			break;
		
		case 1:
			return 15;
			break;
	}
	return 16;
}

void func_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x69DF961355195C3C((*uParam0)[iVar0]))
		{
			unk_0xB46854F2D1C7DFA9((*uParam0)[iVar0]);
		}
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_86((*uParam1)[iVar0], "familyVeh", iVar0))
		{
			unk_0xA954465BA6FDEFE2(uParam1[iVar0]);
		}
		if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]) && unk_0x9C77D2D0559097F0((*uParam1)[iVar0], 1))
		{
			unk_0x046C362CF15F1935(uParam1[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_85(4, (*uParam2)[iVar0]))
		{
			func_84(4, (*uParam2)[iVar0], 0);
		}
		if (*uParam2)[iVar0] != unk_0x16F2683693E537C9()
		{
			if (func_86((*uParam2)[iVar0], "familyPed", iVar0))
			{
				unk_0xEBA53F35D0085654(uParam2[iVar0]);
			}
			func_83(uParam2[iVar0]);
		}
		if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]))
		{
			if (unk_0xD59B17D2DFF98E26((*uParam3)[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6((*uParam3)[iVar0], 1, 1);
			}
		}
		if (func_86((*uParam3)[iVar0], "familyProp", iVar0))
		{
			unk_0xF690C84DADBB3551(uParam3[iVar0]);
		}
		if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]) && unk_0x9C77D2D0559097F0((*uParam3)[iVar0], 1))
		{
			unk_0xEEEE2E5FA6F78DF0(uParam3[iVar0]);
		}
		if (func_86((*uParam5)[iVar0], "familyExtraPed", iVar0))
		{
			unk_0xEBA53F35D0085654(uParam5[iVar0]);
		}
		if (unk_0xC844350D5D58C99A((*uParam5)[iVar0]) && unk_0x9C77D2D0559097F0((*uParam5)[iVar0], 1))
		{
			unk_0x6DAD7906B73F064D(uParam5[iVar0]);
		}
		if ((*uParam4)[iVar0] != 0)
		{
			unk_0x71199B01895C6202((*uParam4)[iVar0]);
		}
		if ((*uParam6)[iVar0] != 0)
		{
			unk_0x71199B01895C6202((*uParam6)[iVar0]);
		}
		func_82(uParam7[iVar0], uParam8[iVar0], uParam9[iVar0]);
		iVar0++;
	}
	iVar17 = 0;
	while (iVar17 < 139)
	{
		StringCopy(&Var1, "", 64);
		if (func_81(iVar17, &Var1))
		{
			unk_0x8D17794CE3273D70(&Var1);
		}
		iVar17++;
	}
	func_78();
	func_74();
	func_61(-181320640);
	func_61(1418815087);
	func_61(2087297077);
	func_61(313472619);
	func_61(2038672434);
	func_61(1666308520);
	func_61(1894462438);
	func_61(1728635625);
	func_61(975196153);
	func_61(-710274964);
	func_61(1289879258);
	func_61(1621076324);
	func_61(1005256598);
	func_61(1127548000);
	func_61(-1291788156);
	func_61(1993031175);
	Global_93767 = 8;
	Global_93768 = -1;
}

int func_61(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_73(iVar0);
				func_65(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			func_65(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			func_64(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			func_63(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			func_62(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_62(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0] = { Global_111638.f_7683.f_765[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1)] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_63(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0] = { Global_111638.f_7683.f_651[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1)] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_3(0);
	func_3(1);
	func_3(2);
}

void func_64(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16] = { Global_111638.f_7683.f_199[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1)] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_65(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15] == iParam0)
		{
			func_66(Global_111638.f_7683.f_137[iVar15].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16] = { Global_111638.f_7683.f_137[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1)] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_66(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (func_72(iParam0, Global_19486) == 1)
		{
			func_71(iParam0, Global_19486, 0);
			if (func_70(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_67(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_67(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_69(iParam0, iVar0, 0);
			func_68(iParam0, iVar0, 0);
		}
	}
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

int func_70(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_19[iParam1] = iParam2;
	}
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_73(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	uVar1 = Global_111638.f_7683[iParam0].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[iVar0] = { Global_111638.f_7683[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1)] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(uVar1, iVar0))
		{
			func_3(iVar0);
		}
		iVar0++;
	}
}

void func_74()
{
	if (func_77(4))
	{
		func_76(4, 0);
		func_75(4);
	}
	if (func_77(5))
	{
		func_76(5, 0);
		func_75(5);
	}
	if (func_77(0))
	{
		func_76(0, 0);
		func_75(0);
	}
}

void func_75(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

void func_76(int iParam0, int iParam1)
{
	Global_30828[iParam0].f_10 = iParam1;
}

int func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = 226;
	iVar5 = 825812850;
	iVar22 = 0;
	iVar23 = 0;
	while (iVar23 < 11)
	{
		func_80(iVar23, &iVar0, &vVar1, &iVar4, &iVar5, &cVar6, &iVar22);
		if (unk_0xBF75E4DF4C367CD9(vVar1, 10f, iVar0, 0))
		{
			uVar24 = unk_0x4B72871A3BE7B474(vVar1, 10f, iVar0, 0, 0, 1);
			if (unk_0xC844350D5D58C99A(uVar24))
			{
				if (iVar5 == 825812850)
				{
					unk_0xC023D1C4BF532815(iVar24, 0f, 0f, 21f, 2, 1);
				}
				unk_0xEEEE2E5FA6F78DF0(&iVar24);
			}
		}
		if (iVar4 != 226)
		{
		}
		else if (!unk_0x76395FF5E8D5E643(iVar5))
		{
		}
		else
		{
			unk_0x1BA7FCEAFCE8D46E(iVar5, 3, 1, 1);
			unk_0x838CC054A9235BEC(iVar5, 0f, 1, 1);
			if (((iVar23 != 6 && iVar23 != 7) && iVar23 != 8) && iVar23 != 9)
			{
				unk_0xA4A8625CC710BC1F(iVar5);
			}
		}
		iVar23++;
	}
	func_79(4, 0);
	return 0;
}

void func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_40554[iParam0].f_1), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_40554[iParam0].f_1), 6);
	}
}

void func_80(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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

int func_81(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_12", 64);
			return 1;
			break;
		
		case 2:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		
		case 3:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		
		case 4:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_10", 64);
			return 1;
			break;
		
		case 18:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@BASE", 64);
			return 1;
			break;
		
		case 5:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		
		case 21:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		
		case 9:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
			return 1;
			break;
		
		case 11:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_5@BASE", 64);
			return 1;
			break;
		
		case 12:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_2@", 64);
			return 1;
			break;
		
		case 13:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_7@", 64);
			return 1;
			break;
		
		case 14:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_8@", 64);
			return 1;
			break;
		
		case 15:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_11@", 64);
			return 1;
			break;
		
		case 16:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_1@BASE", 64);
			return 1;
			break;
		
		case 17:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_4@BASE", 64);
			return 1;
			break;
		
		case 20:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_2", 64);
			return 1;
			break;
		
		case 24:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			return 1;
			break;
		
		case 19:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			return 1;
			break;
		
		case 25:
			StringCopy(sParam1, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
			return 1;
			break;
		
		case 26:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_3@BASE", 64);
			return 1;
			break;
		
		case 32:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_5@BASE", 64);
			return 1;
			break;
		
		case 33:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_8@BASE", 64);
			return 1;
			break;
		
		case 38:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_7@BASE", 64);
			return 1;
			break;
		
		case 34:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_2@IDLE_A", 64);
			return 1;
			break;
		
		case 35:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_15@BASE", 64);
			return 1;
			break;
		
		case 37:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_4@", 64);
			return 1;
			break;
		
		case 36:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_1@BASE", 64);
			return 1;
			break;
		
		case 28:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_14@", 64);
			return 1;
			break;
		
		case 43:
			StringCopy(sParam1, "TIMETABLE@TRACY@SLEEP@", 64);
			return 1;
			break;
		
		case 44:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 29:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 30:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 45:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_5", 64);
			return 1;
			break;
		
		case 47:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_9", 64);
			return 1;
			break;
		
		case 48:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		
		case 68:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		
		case 50:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		
		case 69:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		
		case 51:
			StringCopy(sParam1, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
			return 1;
			break;
		
		case 52:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		
		case 67:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		
		case 53:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
			return 1;
			break;
		
		case 54:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		
		case 70:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		
		case 64:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 55:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 71:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 56:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_2_P2", 64);
			return 1;
			break;
		
		case 57:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 58:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_3", 64);
			return 1;
			break;
		
		case 59:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 72:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 60:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 61:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 63:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 62:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 65:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			return 1;
			break;
		
		case 66:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			return 1;
			break;
		
		case 73:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_6", 64);
			return 1;
			break;
		
		case 74:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_7", 64);
			return 1;
			break;
		
		case 76:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 78:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 85:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 77:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
			return 1;
		
		case 79:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 81:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_2@", 64);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		
		case 89:
			StringCopy(sParam1, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
			return 1;
			break;
		
		case 90:
			StringCopy(sParam1, "TIMETABLE@GARDENER@LAWNMOW@", 64);
			return 1;
			break;
		
		case 91:
			StringCopy(sParam1, "TIMETABLE@GARDENER@FILLING_CAN", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_1", 64);
			return 1;
			break;
		
		case 95:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_2", 64);
			return 1;
			break;
		
		case 96:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		
		case 97:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_4", 64);
			break;
		
		case 100:
			StringCopy(sParam1, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
			return 1;
			break;
		
		case 101:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		
		case 119:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		
		case 102:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		
		case 104:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
			return 1;
			break;
		
		case 106:
			StringCopy(sParam1, "TIMETABLE@RON@IG_6", 64);
			return 1;
			break;
		
		case 107:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CHAIRIDLE_A", 64);
			return 1;
			break;
		
		case 108:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CLUBCHAIRBASE", 64);
			return 1;
			break;
		
		case 109:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_SOFABASE", 64);
			return 1;
			break;
		
		case 110:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
			return 1;
			break;
		
		case 111:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
			return 1;
			break;
		
		case 116:
			StringCopy(sParam1, "TIMETABLE@TREVOR@IG_1", 64);
			return 1;
			break;
		
		case 117:
			StringCopy(sParam1, "TIMETABLE@TREVOR@TRV_IG_2", 64);
			return 1;
			break;
		
		case 112:
			StringCopy(sParam1, "TIMETABLE@TREVOR@SMOKING_METH@BASE", 64);
			return 1;
			break;
		
		case 113:
			StringCopy(sParam1, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
			return 1;
			break;
		
		case 115:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			return 1;
			break;
		
		case 118:
			StringCopy(sParam1, "TIMETABLE@RON@IG_1", 64);
			return 1;
			break;
		
		case 120:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3", 64);
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
			return 1;
			break;
		
		case 123:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_2@BASE", 64);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
			return 1;
			break;
		
		case 126:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CLEAN_KITCHEN@BASE", 64);
			return 1;
			break;
		
		case 127:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED@BASE", 64);
			return 1;
			break;
		
		case 130:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CALLING", 64);
			return 1;
			break;
		
		case 131:
			StringCopy(sParam1, "TIMETABLE@FLOYD@ENDING_CALL", 64);
			return 1;
			break;
		
		case 132:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 133:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 134:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 135:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

int func_82(var uParam0, var uParam1, char* sParam2)
{
	unk_0xE96F19797E59AB06();
	if ((*uParam0 == 0 && *uParam1 == -1) && unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (*uParam0 != 0)
	{
		unk_0xE96F19797E59AB06();
		*uParam0 = 0;
	}
	if (*uParam1 != -1)
	{
		unk_0x55D0A2DB35045A35(*uParam1);
		*uParam1 = -1;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		unk_0x42740B44BA8D7B43(sParam2);
		if (unk_0x7F8A39872A07D2CE(sParam2, "AFT_SON_PORN"))
		{
			unk_0x7352ACF3368DF65F("DisableReplayScriptStreamRecording", 0);
		}
	}
	StringCopy(sParam2, "", 64);
	return 1;
}

void func_83(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(*uParam0))
	{
		if (unk_0xD1960163A3042274(*uParam0, -2017877118) != 0)
		{
			unk_0xFADC0A217229F6B5(*uParam0, 1);
		}
	}
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0x9C77D2D0559097F0(*uParam0, 1))
		{
			unk_0x6DAD7906B73F064D(uParam0);
		}
	}
	else
	{
		unk_0x6DAD7906B73F064D(uParam0);
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0].f_25[(iVar0 - 1)] = Global_40554[iParam0].f_25[iVar0];
			Global_40554[iParam0].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			Global_40554[iParam0].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0].f_24 = (Global_40554[iParam0].f_24 - 1);
	}
}

int func_85(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0, char* sParam1, int iParam2)
{
	if (!unk_0xC844350D5D58C99A(uParam0))
	{
		return 0;
	}
	if (unk_0x3E653638C7A26115() == 64 && unk_0x134B62B726CEC8E6(iParam0) != -257549932)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x9C77D2D0559097F0(iParam0, 1))
		{
			unk_0x73270B3C9CC833FD(iParam0, 1, 0);
		}
		return 1;
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!unk_0x9C77D2D0559097F0(iParam0, 1))
		{
			return 0;
		}
		if (unk_0x134B62B726CEC8E6(iParam0) == -257549932)
		{
			return 0;
		}
	}
	if (Global_98794)
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 1;
	}
	if (func_87() || unk_0x2C1AA3A291786CDC())
	{
		if (unk_0x0A059E0DB9253280(iParam0))
		{
			return 0;
		}
		return 1;
	}
	sParam1 = sParam1;
	iParam2 = iParam2;
	return 0;
}

int func_87()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

