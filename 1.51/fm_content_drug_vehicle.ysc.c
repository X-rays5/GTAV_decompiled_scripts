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
	fLocal_87 = 0f;
	fLocal_94 = 0f;
	fLocal_95 = 0f;
	fLocal_96 = 0f;
	fLocal_159 = 0,62f;
	fLocal_160 = 0,51f;
	fLocal_161 = 0,55f;
	fLocal_162 = 25f;
	iLocal_1119 = -1;
	iLocal_1120 = -1;
	iLocal_1126 = -1;
	iLocal_1127 = -1;
	iLocal_1128 = -1;
	fLocal_1133 = -1f;
	fLocal_1134 = 99999f;
	fLocal_1135 = 99999f;
	vLocal_1137 = { 5000f, 8500f, 0f };
	StringCopy(&Local_1148, unk_0xBB0808A181D4745C(), 64);
	Local_1148 = { Local_1148 };
	Local_682 = { Local_682 };
	func_1810(0);
	if (unk_0x8CD06866876216F2())
	{
		if (bLocal_1106)
		{
			if (!func_1802(ScriptParam_0))
			{
				func_1671(0, 1);
				func_1640();
			}
		}
		else
		{
			func_1640();
		}
	}
	else
	{
		func_1671(0, 1);
		func_1640();
	}
	func_1638(&(Local_1164.f_145));
	func_1578();
	while (true)
	{
		func_1577();
		if (func_1569())
		{
			func_1671(0, 1);
			func_1640();
		}
		if (func_1568())
		{
			func_1671(0, 1);
			func_1640();
		}
		func_1810(1);
		switch (func_1567())
		{
			case 0:
				if (func_1566() == 1)
				{
					if (func_1401())
					{
						func_1400(1);
					}
				}
				else if (func_1566() == 3)
				{
					func_1400(3);
				}
				break;
			
			case 1:
				func_1358();
				func_697();
				func_696();
				if (func_1566() != 1)
				{
					func_1400(func_1566());
				}
				break;
			
			case 2:
				func_1358();
				func_696();
				func_545();
				if (func_1566() > 2)
				{
					func_1671(func_539(), 0);
					func_1400(3);
				}
				break;
			
			case 3:
				func_1640();
				break;
		}
		if (bLocal_1108)
		{
			switch (func_1566())
			{
				case 0:
					if (func_412())
					{
						func_411(1);
					}
					break;
				
				case 1:
					if (func_410() == 0)
					{
						func_8();
					}
					else
					{
						func_411(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_411(3);
					}
					break;
				
				case 3:
					func_1640();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_896.f_155++;
	if (Local_896.f_155 >= Local_220.f_28)
	{
		Local_896.f_155 = 0;
	}
}

int func_2()
{
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_1164.f_113), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar1], iVar2);
}

int func_5()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 18))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0, int iParam1)
{
	return func_4(&(Local_1164.f_2.f_5[iParam0]), iParam1);
}

int func_7()
{
	return Local_220.f_10;
}

void func_8()
{
	if (Local_407.f_3 != 0)
	{
		Call_Loc(Local_407.f_3);
	}
	func_379();
	func_132();
	func_117();
	func_40();
	func_34();
	func_32();
	func_21();
	func_18();
	func_9();
}

void func_9()
{
	if (func_17() == -1)
	{
		return;
	}
	if (Local_407.f_38 == 0)
	{
		return;
	}
	Call_Loc(Local_407.f_38);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(6) && Local_407.f_38.f_1 != 0)
	{
		Call_Loc(Local_407.f_38.f_1);
		if (StackVal)
		{
			func_16(&(Local_1164.f_132), 0, 0);
			func_14(6);
		}
	}
	if (!func_13(&(Local_1164.f_132)))
	{
		func_12(&(Local_1164.f_132), 0, 0);
	}
	else if (func_13(&(Local_1164.f_132)))
	{
		if (func_11(&(Local_1164.f_132), func_17(), 0))
		{
			func_10(1);
		}
	}
}

void func_10(int iParam0)
{
	if (!bLocal_1108)
	{
		return;
	}
	Local_1164.f_104 = iParam0;
}

int func_11(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_12(uParam0, bParam2, 0);
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

void func_12(var uParam0, bool bParam1, bool bParam2)
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

bool func_13(var uParam0)
{
	return uParam0->f_1;
}

void func_14(int iParam0)
{
	if (func_15(&(Local_1164.f_113), iParam0))
	{
	}
}

int func_15(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar1], iVar2))
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	if (Local_220.f_108 != -1)
	{
		return Local_220.f_108 * 60 * 1000;
	}
	return Local_220.f_108;
}

void func_18()
{
	if (func_20() != -1)
	{
		while ((func_20() < iLocal_1121 && iVar0 < Local_692[func_20()].f_14) && Local_692[func_20()].f_1[iVar0] != -1)
		{
			Call_Loc(Local_692[func_20()].f_1[iVar0].f_1);
			if (StackVal)
			{
				Call_Loc(Local_692[func_20()].f_13);
				Local_1164.f_112 = func_20();
				func_19(Local_692[func_20()].f_1[iVar0]);
				Call_Loc(Local_692[func_20()].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_19(var uParam0)
{
	if (!bLocal_1108)
	{
		return;
	}
	Local_1164.f_111 = uParam0;
}

int func_20()
{
	return Local_1164.f_111;
}

void func_21()
{
	if (Local_407.f_37 == 0)
	{
		return;
	}
	Call_Loc(Local_407.f_37);
	vVar0 = { StackVal, StackVal, StackVal };
	if (func_31(vVar0))
	{
		return;
	}
	if (func_11(&(Local_1164.f_134), func_30(), 0))
	{
		if (!func_29(Local_1164.f_139, vVar0, 1056964608, 0))
		{
			func_23(func_24(1, 1), unk_0xF35A91B88CC1915F(), vVar0);
			func_22(&(Local_1164.f_134));
		}
		Local_1164.f_139 = { vVar0 };
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_23(int iParam0, int iParam1, vector3 vParam2)
{
	Var0 = -1370208168;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = { vParam2 };
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 6, iParam0);
	}
}

int func_24(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_28(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_25(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_25(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
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

int func_29(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_30()
{
	return 5000;
}

int func_31(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		Stack.Push(iVar1);
		Call_Loc(Local_407.f_271);
		if (StackVal)
		{
			func_33(iVar1, 0);
		}
		iVar0++;
	}
}

void func_33(int iParam0, int iParam1)
{
	if (func_15(&(Local_1164.f_87[iParam0]), iParam1))
	{
	}
}

void func_34()
{
	if (!func_39())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_35(&(Local_1164.f_83), &(Local_1164.f_83.f_3)))
		{
			func_14(2);
		}
	}
}

int func_35(var uParam0, int iParam1)
{
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_38(iVar3))
		{
			iVar0[iVar2] = iVar3;
			iVar2++;
		}
		iVar3++;
	}
	if (iVar2 < func_7())
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < func_7())
	{
		if (func_37())
		{
			if (iVar3 > 0)
			{
				(*uParam0)[iVar3] = (*uParam0)[(iVar3 - 1)];
			}
			else
			{
				iVar4 = unk_0x09AC81E49EA267F7(0, iVar2);
				(*uParam0)[iVar3] = iVar0[iVar4];
				if (iVar0[iVar4] < 32)
				{
					unk_0x5D96D8530B3D0904(iParam1, iVar0[iVar4]);
				}
				if (iVar3 < (func_7() - 1))
				{
					func_36(&(iVar0[iVar4]), &(iVar0[(iVar2 - 1)]));
					iVar2 = (iVar2 - 1);
				}
			}
			iVar3++;
			return 1;
		}

void func_36(var uParam0, var uParam1)
{
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_37()
{
	return 0;
}

int func_38(int iParam0)
{
	return 0;
}

int func_39()
{
	return 0;
}

void func_40()
{
	iVar5 = 0;
	while (iVar5 < Local_220.f_28)
	{
		func_115(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_407.f_73.f_109 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_73.f_109);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6)
			{
				if (!bVar2)
				{
					func_114(iVar5, 6);
				}
				else if (bVar3)
				{
					func_114(iVar5, 6);
				}
				else if (func_113(iVar5, iVar0))
				{
					func_114(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_112(iVar5))
				{
					func_114(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_111(iVar5))
					{
						func_114(iVar5, 2);
					}
				}
				else
				{
					func_110(&(Local_1164.f_24[iVar5]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_101(iVar5))
					{
						if (func_59(iVar5))
						{
							func_114(iVar5, 3);
							func_58(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_55(iVar5);
						func_51(iVar5, iVar0, 1);
						if (func_50(iVar5))
						{
							func_114(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_49(iVar5, 16);
				if (!func_48(7))
				{
					func_43(iVar5, 1);
				}
				if (func_42(iVar5))
				{
					func_110(&(Local_1164.f_24[iVar5]));
					func_114(iVar5, 1);
				}
				if (func_410() == 0)
				{
					if (func_41(iVar5, 0))
					{
						func_10(9);
					}
				}
				break;
			
			case 4:
				if (!func_41(iVar5, 21) && !unk_0x62FA787159F264AC(iVar0))
				{
					func_114(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_896.f_155;
	func_115(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_51(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_41(int iParam0, int iParam1)
{
	return func_4(&(Local_220.f_28.f_1[iParam0]), iParam1);
}

int func_42(int iParam0)
{
	if (func_410() != 0)
	{
		return 0;
	}
	if (func_41(iParam0, 18))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_99);
		return StackVal;
	}
	return 0;
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 != func_47())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (func_46(iVar0))
		{
			if (iParam0 == func_45(iVar0) && !func_6(iVar0, 4))
			{
				func_44(iVar0, 3);
				func_44(iVar0, 19);
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, int iParam1)
{
	if (func_15(&(Local_1164.f_2.f_5[iParam0]), iParam1))
	{
	}
}

int func_45(int iParam0)
{
	return Local_1164.f_2.f_11[iParam0];
}

bool func_46(int iParam0)
{
	return Local_1164.f_2.f_11[iParam0] != -1;
}

int func_47()
{
	return Local_220.f_10.f_5[0].f_11;
}

bool func_48(int iParam0)
{
	return func_4(&(Local_220.f_8), iParam0);
}

void func_49(int iParam0, int iParam1)
{
	if (func_15(&(Local_1164.f_24[iParam0].f_3), iParam1))
	{
	}
}

int func_50(int iParam0)
{
	if (Local_407.f_73.f_98 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_98);
		return StackVal;
	}
	return 0;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (func_54(iParam0) == -1)
	{
		return;
	}
	if (func_53(Local_896[iParam0].f_1[func_54(iParam0)]) != iParam2)
	{
		return;
	}
	if (Local_896[iParam0].f_1[func_54(iParam0)].f_9 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_896[iParam0].f_1[func_54(iParam0)].f_9);
	}
	while ((func_54(iParam0) < Local_896[iParam0] && iVar0 < Local_896[iParam0].f_1[func_54(iParam0)].f_10) && Local_896[iParam0].f_1[func_54(iParam0)].f_1[iVar0] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_896[iParam0].f_1[func_54(iParam0)].f_1[iVar0].f_1);
		if (StackVal)
		{
			if (Local_896[iParam0].f_1[func_54(iParam0)].f_7 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_896[iParam0].f_1[func_54(iParam0)].f_7);
			}
			func_52(iParam0, Local_896[iParam0].f_1[func_54(iParam0)].f_1[iVar0]);
			if (Local_896[iParam0].f_1[func_54(iParam0)].f_6 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_896[iParam0].f_1[func_54(iParam0)].f_6);
			}
			return;
		}
		iVar0++;
	}
}

void func_52(int iParam0, var uParam1)
{
	if (!bLocal_1108)
	{
		return;
	}
	Local_1164.f_24[iParam0].f_2 = uParam1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	return Local_1164.f_24[iParam0].f_2;
}

void func_55(int iParam0)
{
	if (func_56(iParam0))
	{
		return;
	}
	iVar0 = Local_220.f_28.f_1[iParam0].f_14;
	iVar1 = 0;
	while (iVar1 < Local_896[iParam0].f_73)
	{
		if (Local_896[iParam0].f_67[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_896[iParam0].f_67[iVar1]);
			if (StackVal)
			{
				unk_0x5D96D8530B3D0904(&(Local_1164.f_82), iVar0);
			}
		}
		iVar1++;
	}
}

bool func_56(int iParam0)
{
	return func_57(Local_220.f_28.f_1[iParam0].f_14);
}

bool func_57(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_1164.f_82, iParam0);
}

void func_58(int iParam0)
{
}

int func_59(int iParam0)
{
	func_100(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_103);
	iVar0 = StackVal;
	if (func_99(iVar0))
	{
		iVar1 = Local_220.f_28.f_1[iParam0].f_8;
		if (iVar1 != -1)
		{
			if (func_98(Local_1164.f_69[iVar1]))
			{
				if (func_97(&(Local_1164.f_24[iParam0]), Local_1164.f_69[iVar1], 26, iVar0, Local_220.f_28.f_1[iParam0].f_9, 1, 1, 1))
				{
					func_77(iParam0);
					unk_0x71199B01895C6202(iVar0);
					func_76();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_104);
			vVar2 = { StackVal, StackVal, StackVal };
			if (!func_31(vVar2))
			{
				if (!func_74(iParam0) || func_61(vVar2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_1164.f_24[iParam0]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(vVar2);
					Stack.Push(iParam0);
					Call_Loc(Local_407.f_73.f_105);
					if (func_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_77(iParam0);
						func_76();
						unk_0x71199B01895C6202(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_60(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, bParam9);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam7)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_61(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_67(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_62(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_62(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_28(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_64(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_28(iVar1, 1, 1))
		{
			if (!func_25(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_63(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_64(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x0EB28750412C3A5A(func_64(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

int func_63(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_64(int iParam0)
{
	iVar0 = iParam0;
	if ((func_66() && Global_1590535[iVar0].f_847) && !func_31(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_65(iParam0);
}

Vector3 func_65(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

bool func_66()
{
	return Global_2450632.f_17;
}

int func_67(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_28(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_63(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam9) && bParam6) && func_68(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_65(iVar1), vParam0, 1) < fParam3)
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

int func_68(int iParam0)
{
	if (func_73(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_72(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_69(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_70())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70()
{
	return -1;
}

int func_71(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_70();
}

struct<13> func_72(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_73(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_72(iParam0) };
		Global_2513231 = { func_72(iParam1) };
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

int func_74(int iParam0)
{
	if (func_41(iParam0, 18) && func_75(iParam0, 16))
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
{
	return func_4(&(Local_1164.f_24[iParam0].f_3), iParam1);
}

void func_76()
{
	if (Local_1164.f_126 != -1)
	{
		Local_1164.f_136 = { 0f, 0f, 0f };
		Local_1164.f_142 = 0f;
		Local_1164.f_129 = 0;
		Local_1164.f_109 = -1;
		Local_1164.f_126 = -1;
	}
}

void func_77(int iParam0)
{
	iVar0 = unk_0x1B50683925F00106(Local_1164.f_24[iParam0]);
	bVar1 = func_41(iParam0, 14);
	func_92(iParam0, iVar0);
	if (bVar1)
	{
		func_90(iParam0, iVar0);
	}
	else
	{
		func_83(iParam0, iVar0);
	}
	if (Local_407.f_73.f_107 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_407.f_73.f_107);
	}
	if (func_41(iParam0, 4))
	{
		unk_0x1E9649458B15960F(iVar0, true);
		func_78(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (Local_220.f_28.f_1[iParam1].f_8 != -1)
		{
			if (bParam5)
			{
				vVar0 = { unk_0x64430C979F516F7A(iParam0, 31086, 0f, -5f, 0f) };
				vVar3 = { unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f) };
				unk_0xECC26BBDC0AD318B(vVar0, vVar3, 25, 1, 205991906, 0, 1, 1, -1082130432);
				unk_0xECC26BBDC0AD318B(vVar3, vVar0, 25, 1, -494615257, 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				unk_0x4E885A246A9D983A(iParam0, 227, bParam2);
			}
			unk_0x4E885A246A9D983A(iParam0, 115, bParam3);
		}
		else
		{
			vVar6 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
			func_81(vVar6, &vVar9, &vVar12, 0);
			unk_0xECC26BBDC0AD318B(vVar9, vVar12, 300, 1, 205991906, 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0x4E885A246A9D983A(iParam0, 227, bParam2);
			}
			unk_0x4E885A246A9D983A(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_79(iParam0, -1, 0);
		}
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_80(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_80(iVar0, iParam0);
	}
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9F3FF84D9E7E76F7(uParam1, 0, 0,727f, 0,625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0x9F3FF84D9E7E76F7(uParam1, 0, 0,727f, 0,518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0x9F3FF84D9E7E76F7(uParam1, 0, 0,727f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0x9F3FF84D9E7E76F7(uParam1, 0, 0,806f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0x9F3FF84D9E7E76F7(uParam1, 1, 0,379f, 0,324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0x9F3FF84D9E7E76F7(uParam1, 1, 0,379f, 0,534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0x9F3FF84D9E7E76F7(uParam1, 2, 0,628f, 0,277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0x9F3FF84D9E7E76F7(uParam1, 2, 0,609f, 0,344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0x9F3FF84D9E7E76F7(uParam1, 4, 0,719f, 0,802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0x9F3FF84D9E7E76F7(uParam1, 4, 0,775f, 0,68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0x9F3FF84D9E7E76F7(uParam1, 4, 0,775f, 0,561f, "ShotgunLargeMonolithic");
			break;
	}
}

void func_81(vector3 vParam0, var uParam3, var uParam4, bool bParam5)
{
	fVar0 = 0,1f;
	iVar1 = unk_0x09AC81E49EA267F7(0, 6);
	fVar2 = 0,5f;
	fVar3 = 0,1f;
	fVar4 = 0,4f;
	if (bParam5)
	{
		iVar5 = unk_0x09AC81E49EA267F7(0, 5);
		fVar2 = (to_float(iVar5) / 10f);
		if (func_82())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0x09AC81E49EA267F7(0, 2);
		fVar3 = (to_float(iVar5) / 15f);
		if (func_82())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0x09AC81E49EA267F7(0, 6);
		fVar4 = (to_float(iVar5) / 10f);
		if (func_82())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		
		case 1:
			*uParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		
		case 2:
			*uParam3 = { (vParam0.x - fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		
		case 3:
			*uParam3 = { (vParam0.x - fVar0), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			break;
		
		case 4:
			*uParam3 = { (vParam0.x - fVar0), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			break;
		
		case 5:
			*uParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
	}
}

int func_82()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0, int iParam1)
{
	unk_0x11AD11297DC58CC7(iParam1, 1);
	unk_0xFADC0A217229F6B5(iParam1, 1);
	unk_0x8685456FA9090367(iParam1, 0);
	if (func_41(iParam0, 11))
	{
		unk_0x4E885A246A9D983A(iParam1, 146, false);
		unk_0x33DBB4DC5BA9E882(iParam1, 1);
	}
	else
	{
		unk_0x4E885A246A9D983A(iParam1, 146, true);
		unk_0x33DBB4DC5BA9E882(iParam1, 0);
	}
	unk_0xAFF39FB306F8E232(iParam1, 43, 1);
	unk_0x3CC33E4E9CE523F4(iParam1, Local_220.f_28.f_1[iParam0].f_15);
	unk_0x083F03A847B640E9(iParam1, func_89());
	unk_0x298903DD96203C2C(iParam1, func_88(iParam0));
	unk_0x29CD9554726C7577(iParam1, func_87());
	unk_0xAFF39FB306F8E232(iParam1, 24, 0);
	unk_0x722454E43E496678(iParam1, func_86());
	unk_0xD458AC1C1D29C3B4(iParam1, func_86(), 0);
	unk_0x1365063FA6365BE8(iParam1, true);
	func_84(iParam0, iParam1);
}

void func_84(int iParam0, int iParam1)
{
	iVar1 = Local_220.f_28.f_1[iParam0].f_14;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		iVar3 = Local_220.f_28.f_42[iVar1].f_1[iVar2];
		if (iVar3 != -1)
		{
			if (func_85(iVar3, 4))
			{
				unk_0x17EAEF3CBDBACF1B(iParam1, Local_220.f_144[iVar3].f_2, Local_220.f_144[iVar3].f_5, Local_220.f_144[iVar3].f_8, 0, 0);
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0 && Local_220.f_28.f_1[iParam0].f_19 != -1f)
	{
		unk_0xED253B8DDB3FFB77(iParam1, unk_0x68F4C0EC296D3901(iParam1, 0), Local_220.f_28.f_1[iParam0].f_19, 0, 0);
	}
}

bool func_85(int iParam0, int iParam1)
{
	return func_4(&(Local_220.f_144[iParam0]), iParam1);
}

int func_86()
{
	switch (Local_1164.f_108)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		default:
	}
	return 200;
}

int func_87()
{
	switch (Local_1164.f_108)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		default:
	}
	return 60;
}

int func_88(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_106);
	Stack.Push(StackVal == -1312131151);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_106);
	if (StackVal || StackVal == 1834241177)
	{
		return 2;
	}
	switch (Local_1164.f_108)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		default:
	}
	return 10;
}

int func_89()
{
	switch (Local_1164.f_108)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_90(int iParam0, int iParam1)
{
	unk_0x66ADF7B538DC60DC(iParam1, 1f);
	unk_0x7D9DF2375774CFE5(iParam1, 1f);
	unk_0x67415F01577A142E(iParam1, 17, 5f);
	unk_0xFADC0A217229F6B5(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 2, 1);
	unk_0x4E885A246A9D983A(iParam1, 272, true);
	unk_0x35126F52AFE6E6CA(iParam1, 1);
	unk_0x4E885A246A9D983A(iParam1, 42, true);
	unk_0x67415F01577A142E(iParam1, 27, 0f);
	unk_0x298903DD96203C2C(iParam1, 5);
	if (func_91(iParam0))
	{
		unk_0xAFF39FB306F8E232(iParam1, 52, 1);
		unk_0xAFF39FB306F8E232(iParam1, 53, 1);
	}
	unk_0x722454E43E496678(iParam1, 200);
	unk_0xD458AC1C1D29C3B4(iParam1, 200, 0);
}

int func_91(int iParam0)
{
	if (func_41(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	if (Local_220.f_28.f_1[iParam0].f_12 != -1)
	{
		unk_0x271603AF9C0C7EB3(unk_0xA5FBBC2F619A4DE2(Local_1164.f_24[iParam0]), true);
	}
	if (!func_96(iParam1))
	{
		unk_0x4E885A246A9D983A(iParam1, 324, true);
	}
	if (func_41(iParam0, 10))
	{
		unk_0xBA2CB24C70C8E726(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_106);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == -1569615261)
		{
			unk_0xE3A2D2E900FEFBE7(iParam1, 1);
		}
		else
		{
			unk_0x262EF6C6306BEA6C(iParam1, iVar0, 9999999, func_94(iParam0), true);
		}
	}
	unk_0xB8AFFA077E15E999(iParam1, 1);
	unk_0x26A6B1686E33113F(iParam1, 1);
	iVar1 = func_93(iParam0);
	if (iVar1 != -1533126372)
	{
		unk_0x6DF7BF67E86AAE86(iParam1, iVar1);
	}
}

var func_93(int iParam0)
{
	return Local_220.f_28.f_42[Local_220.f_28.f_1[iParam0].f_14];
}

int func_94(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push(!unk_0xEA6BC48857E0AC4C(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_1);
	if (StackVal && unk_0x7F8A39872A07D2CE(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_95(iParam0) == 22)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	return Local_896[iParam0].f_1[Local_1164.f_24[iParam0].f_2];
}

int func_96(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((unk_0x0A5D59F37DC7E974(iParam0) == 6 || unk_0x0A5D59F37DC7E974(iParam0) == 29) || unk_0x0A5D59F37DC7E974(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0;
}

bool func_99(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_100(int iParam0, var uParam1)
{
	if (Local_1164.f_126 == -1)
	{
		Local_1164.f_109 = iParam0;
		Local_1164.f_126 = uParam1;
	}
}

int func_101(int iParam0)
{
	if (!func_109(0, iParam0))
	{
		return 0;
	}
	if (Local_220.f_28.f_1[iParam0].f_8 != -1)
	{
		if (!func_107(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]))
		{
			return 0;
		}
	}
	if (Local_220.f_28.f_1[iParam0].f_12 != -1)
	{
		if (!func_102(Local_220.f_28.f_1[iParam0].f_12) || !func_11(&(Local_1164.f_130), 2000, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_102(int iParam0)
{
	if (iParam0 == 28)
	{
		return func_106(&(Global_1680879.f_54), iParam0);
	}
	if (iParam0 != -1)
	{
		func_103(iParam0);
		return (func_106(&(Global_1680879.f_54), iParam0) && unk_0xBD307E66C0669BFC(Global_1680879[iParam0]));
	}
	return 0;
}

void func_103(int iParam0)
{
	iVar0 = iParam0;
	if (Global_1680879[iVar0] == 0)
	{
		Global_1680879[iVar0] = unk_0x0D1736C2E221BCEA(func_105(iParam0), func_104(iParam0));
	}
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_105(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984,1552f, -95,3662f, 75,9326f;
		
		case 0:
			return 443,2281f, -984,0744f, 29,6896f;
		
		case 2:
			return -1216,762f, -333,0008f, 36,8508f;
		
		case 3:
			return 145,4168f, -1039,277f, 28,4379f;
		
		case 4:
			return 309,7465f, -277,6442f, 53,2346f;
		
		case 5:
			return -355,4359f, -48,5326f, 48,1064f;
		
		case 6:
			return -109,4503f, 6467,768f, 30,4388f;
		
		case 7:
			return 1179,745f, 2706,985f, 37,1578f;
		
		case 8:
			return -2962,591f, 478,238f, 14,7669f;
		
		case 9:
			return -556,5089f, 286,3181f, 81,1763f;
		
		case 10:
			return -76,6618f, 6222,191f, 32,2412f;
		
		case 11:
			return -100,7106f, 6205,7f, 30,0499f;
		
		case 12:
			return -125,6972f, 6172,923f, 30,0499f;
		
		case 13:
			return -162,4785f, 6155,384f, 30,0499f;
		
		case 14:
			return 2449,785f, 4983,825f, 45,8106f;
		
		case 15:
			return -1426,362f, 6754,506f, 11,7821f;
		
		case 16:
			return -583,2097f, -1599,302f, 26,3052f;
		
		case 17:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853,625f, 3687,826f, 33,2671f;
		
		case 22:
			return -447,5651f, 6013,988f, 30,7164f;
		
		case 23:
			return -28,1023f, -688,8687f, 34,4437f;
		
		case 24:
			return -40,2938f, -1097,321f, 25,4223f;
		
		case 27:
			return -1074,853f, -250,3996f, 36,7388f;
		
		case 25:
			return 982,233f, -2160,382f, 28,4761f;
		
		case 26:
			return -630,4205f, -236,7843f, 37,057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078,561f, -1678,615f, 3,5752f;
		
		case 30:
			return 479,88f, -1318,57f, 28,2f;
		
		case 31:
			return 1392,512f, 3603,185f, 38,5f;
		
		case 32:
			return 105,4557f, -745,4835f, 44,7548f;
		
		case 33:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 34:
			return 1087,195f, -1988,445f, 28,649f;
		
		case 35:
			return -583,1606f, -282,3967f, 35,394f;
		
		case 36:
			return 3053,565f, -4653,67f, 5,0773f;
		
		case 37:
			return 3058,002f, -4700,8f, 5,0773f;
		
		case 38:
			return 3080,619f, -4772,69f, 5,0773f;
		
		case 39:
			return 3088,469f, -4708,33f, 20,567f;
		
		case 40:
			return 3085,222f, -4690,66f, 26,2522f;
		
		case 41:
			return 3092,459f, -4711,389f, 26,2657f;
		
		case 42:
			return 2329,242f, 2571,494f, 45,6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_106(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iVar1);
}

int func_107(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_108(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0;
}

int func_108(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	if (Local_1164.f_109 == -1)
	{
		return 1;
	}
	if (Local_1164.f_109 == iParam0)
	{
		if (Local_1164.f_126 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(*iParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*iParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_111(int iParam0)
{
	return 1;
}

int func_112(int iParam0)
{
	if (Local_407.f_73.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_102);
		return StackVal;
	}
	return 1;
}

int func_113(int iParam0, int iParam1)
{
	return 0;
}

void func_114(int iParam0, int iParam1)
{
	if (!bLocal_1108)
	{
		return;
	}
	Local_1164.f_24[iParam0].f_1 = iParam1;
}

void func_115(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_116(iParam0);
	*bParam1 = unk_0xE5DBF9B6126856CA(Local_1164.f_24[iParam0]);
	if (*bParam1)
	{
		*iParam3 = unk_0x1B50683925F00106(Local_1164.f_24[iParam0]);
		*bParam2 = unk_0xEB6A8945D1AC98A1(*iParam3);
	}
}

int func_116(int iParam0)
{
	return Local_1164.f_24[iParam0].f_1;
}

void func_117()
{
	iVar4 = 0;
	while (iVar4 < Local_220.f_92)
	{
		bVar3 = unk_0xE5DBF9B6126856CA(Local_1164.f_76[iVar4]);
		if (bVar3)
		{
			iVar0 = unk_0xA5FBBC2F619A4DE2(Local_1164.f_76[iVar4]);
			bVar2 = unk_0x437347B10A200C4B(iVar0, 0);
		}
		if (func_131(iVar4) > 1 && func_131(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_130(iVar4, 3);
				}
				else if (func_129(iVar4))
				{
					func_130(iVar4, 3);
				}
			}
			else
			{
				func_130(iVar4, 3);
			}
		}
		switch (func_131(iVar4))
		{
			case 0:
				if (func_128(iVar4))
				{
					func_130(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_127(iVar4)) && func_118(iVar4))
				{
					func_130(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_118(int iParam0)
{
	if (!unk_0xE5DBF9B6126856CA(Local_1164.f_76[iParam0]))
	{
		if (func_31(Local_220.f_92.f_1[iParam0].f_3))
		{
			return 0;
		}
		iVar1 = Local_220.f_92.f_1[iParam0].f_2;
		if (!func_99(iVar1))
		{
			return 0;
		}
		if (func_125(&(Local_1164.f_76[iParam0]), iVar1, Local_220.f_92.f_1[iParam0].f_3, 1, 1, 0, func_126(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]);
			unk_0xC023D1C4BF532815(iVar0, Local_220.f_92.f_1[iParam0].f_7, 2, 1);
			func_122(iParam0, iVar0);
			unk_0x71199B01895C6202(iVar1);
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_76[iParam0]))
	{
		if (func_121(iParam0))
		{
			iVar0 = unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]);
			return func_119(iParam0, iVar0);
		}
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	Stack.Push(Local_407.f_216.f_13 != 0);
	Stack.Push(iParam0);
	Stack.Push(&iVar0);
	Stack.Push(&vVar1);
	Stack.Push(&vVar4);
	Stack.Push(&iVar7);
	Stack.Push(&cVar8);
	Call_Loc(Local_407.f_216.f_13);
	if (StackVal && StackVal)
	{
		if (unk_0xEA6BC48857E0AC4C(&cVar8))
		{
			StringCopy(&cVar8, "chassis_dummy", 24);
		}
		if (unk_0xC844350D5D58C99A(iParam1) && unk_0xE5DBF9B6126856CA(iVar0))
		{
			if (func_120(iVar0))
			{
				iVar14 = unk_0xA5FBBC2F619A4DE2(iVar0);
				if (!unk_0x50B5F6F3C29E9380(iParam1, iVar14))
				{
					unk_0x9F528B1B53FBC5D9(iParam1, iVar14, unk_0xF653B9B22DA806A9(iVar14, &cVar8), vVar1, vVar4, iVar7, 1, 1, 0, 2, 1);
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			if (!unk_0xC844350D5D58C99A(iParam1))
			{
			}
			if (!unk_0xE5DBF9B6126856CA(iVar0))
			{
			}
		}
		return 0;
	}
	return 1;
}

int func_120(int iParam0)
{
	if (unk_0x526BC32A660C89E6(iParam0) || (!unk_0x83F012E6200426DB(iParam0) && unk_0xBFF81ED3B99522C7()))
	{
		if (func_98(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_121(int iParam0)
{
	return func_126(iParam0, 25);
}

void func_122(int iParam0, int iParam1)
{
	unk_0xDE0AF66AD14CC2DF(unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]), 300);
	unk_0xAA6B3A4292417750(iParam1, func_126(iParam0, 17), func_126(iParam0, 18), func_126(iParam0, 19), func_126(iParam0, 20), func_126(iParam0, 21), 0, 0, 0);
	func_123(iParam0, 0);
	if (!func_126(iParam0, 1))
	{
		unk_0x06C218569D523F79(unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]));
	}
	if (func_126(iParam0, 2))
	{
		unk_0xC9FB9DE28AB7B041(Local_1164.f_76[iParam0], 1, 1);
	}
	if (func_126(iParam0, 3))
	{
		unk_0x20641932E5104B25(iParam1, false, 0);
	}
	if (func_126(iParam0, 4))
	{
		unk_0x393891152A43449C(iParam1, 1);
	}
	if (func_126(iParam0, 5))
	{
		unk_0xE3430088DE1D3440(iParam1, 0);
	}
	if (func_126(iParam0, 6))
	{
		unk_0xEF190091B5B9F5EB(iParam1, 1);
	}
	if (func_126(iParam0, 7))
	{
		unk_0xDFC6BA855748EB10(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_126(iParam0, 15))
	{
		unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]), 1200);
	}
	if (func_126(iParam0, 8))
	{
		unk_0x1E9649458B15960F(iParam1, true);
	}
	if (func_126(iParam0, 9))
	{
		unk_0xC3BED1CE092AB15D(unk_0x09AD4CE7DA179533(Local_1164.f_76[iParam0]), 1);
	}
	if (func_126(iParam0, 16))
	{
		unk_0xA47B46945FF6DE74(iParam1, Local_220.f_92.f_1[iParam0].f_3, 1, false, 0, 1);
	}
	if (func_126(iParam0, 10))
	{
		unk_0xE121AE1BBF90E186(iParam1, true);
	}
	if (func_126(iParam0, 11))
	{
		unk_0xECEAF0B298DAC1FE(iParam1, 1);
	}
	if (func_126(iParam0, 12))
	{
		unk_0x271603AF9C0C7EB3(iParam1, true);
	}
	if (func_126(iParam0, 13))
	{
		unk_0x4A4806F9D471E491(iParam1, false, 0);
	}
	if (func_126(iParam0, 14))
	{
		Stack.Push(Local_407.f_216.f_12 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_407.f_216.f_12);
		if (StackVal && StackVal)
		{
			unk_0x8085E1E74C8DE850(&uVar0, iParam1);
			unk_0x837C600ECEE8ABA2(&uVar0, 1);
			unk_0xA9FA59945480834A(&uVar0, &uVar6);
		}
	}
	if (Local_407.f_216.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_407.f_216.f_17);
	}
}

void func_123(int iParam0, int iParam1)
{
	if (func_124(&(Local_1164.f_76[iParam0].f_2), iParam1))
	{
	}
}

int func_124(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar1], iVar2))
	{
		unk_0x0674E58A79778E99(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_125(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x081C8BC5094A7B76(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam6, bParam5, bParam7));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam8);
		if (bParam10)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), true);
		}
		if (bParam11)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), false, 0);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_126(int iParam0, int iParam1)
{
	return func_4(&(Local_220.f_92.f_1[iParam0]), iParam1);
}

int func_127(int iParam0)
{
	return 1;
}

int func_128(int iParam0)
{
	if (Local_407.f_216.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_216.f_11);
		return StackVal;
	}
	return 1;
}

int func_129(int iParam0)
{
	Stack.Push(Local_407.f_216.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_216.f_14);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0, int iParam1)
{
	Local_1164.f_76[iParam0].f_1 = iParam1;
}

int func_131(int iParam0)
{
	return Local_1164.f_76[iParam0].f_1;
}

void func_132()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_220.f_75)
	{
		bVar5 = unk_0xE5DBF9B6126856CA(Local_1164.f_69[iVar0]);
		if (bVar5)
		{
			iVar2 = unk_0xB177666FAB6F4417(Local_1164.f_69[iVar0]);
			bVar4 = func_107(Local_1164.f_69[iVar0]);
			bVar6 = func_377(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_376(iVar0, 2);
			}
		}
		if (func_375(iVar0) > 2)
		{
			if (func_375(iVar0) != 5 && func_375(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_374(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_374(iVar0, 5);
				}
				else if (func_373(iVar0, iVar2))
				{
					func_374(iVar0, 5);
				}
			}
		}
		if (Local_407.f_188.f_25 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_407.f_188.f_25);
		}
		func_368(iVar0);
		switch (func_375(iVar0))
		{
			case 0:
				if (func_367(iVar0))
				{
					func_374(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_366(iVar0))
					{
						func_374(iVar0, 2);
					}
				}
				else
				{
					func_110(&(Local_1164.f_69[iVar0]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_365(iVar0))
					{
						if (func_138(iVar0))
						{
							func_374(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar4)
				{
				}
				break;
			
			case 5:
				if (!func_48(7))
				{
					func_43(iVar0, 2);
				}
				if (func_137(iVar0, 11))
				{
					func_10(10);
				}
				if (func_137(iVar0, 27))
				{
					if (bVar5)
					{
						func_110(&(Local_1164.f_69[iVar0]));
					}
				}
				if (func_136(iVar0))
				{
					func_110(&(Local_1164.f_69[iVar0]));
					func_374(iVar0, 1);
				}
				break;
			
			case 3:
				break;
			
			case 6:
				if (bVar5 && func_135(iVar0, iVar2))
				{
					func_110(&(Local_1164.f_69[iVar0]));
				}
				break;
			
			case 7:
				break;
		}
		if (bVar6)
		{
			func_134(iVar0, 17);
		}
		else
		{
			func_133(iVar0, 17);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (func_124(&(Local_1164.f_69[iParam0].f_2), iParam1))
	{
	}
}

void func_134(int iParam0, int iParam1)
{
	if (func_15(&(Local_1164.f_69[iParam0].f_2), iParam1))
	{
	}
}

int func_135(int iParam0, int iParam1)
{
	if (func_137(iParam0, 27) || func_137(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (func_410() != 0)
	{
		return 0;
	}
	if (func_137(iParam0, 1))
	{
		if (Local_407.f_188.f_18 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_188.f_18);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_137(int iParam0, int iParam1)
{
	return func_4(&(Local_220.f_75.f_1[iParam0]), iParam1);
}

int func_138(int iParam0)
{
	func_100(1, iParam0);
	iVar0 = Local_220.f_75.f_1[iParam0].f_3;
	if (!func_99(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_31(Local_1164.f_136))
	{
		if (func_137(iParam0, 0))
		{
		}
		else if (func_137(iParam0, 23))
		{
			if (!func_243(iParam0, &(Local_1164.f_136), &(Local_1164.f_142)))
			{
				bVar1 = false;
			}
		}
		else if (func_137(iParam0, 22))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_1164.f_136));
			Stack.Push(&(Local_1164.f_142));
			Call_Loc(Local_407.f_188.f_20);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_137(iParam0, 28))
		{
			if (!func_239(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_137(iParam0, 33))
		{
			if (!func_233(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_1164.f_136 = { Local_220.f_75.f_1[iParam0].f_4 };
			Local_1164.f_142 = Local_220.f_75.f_1[iParam0].f_7;
		}
	}
	if (bVar1)
	{
		func_212(Local_1164.f_136, 30f, 0);
		unk_0x536F1BE96C726C4B(Local_1164.f_136, 30f, 0, 0, 0, true);
		if (func_209(&(Local_1164.f_69[iParam0]), iVar0, Local_1164.f_136, Local_1164.f_142, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar2 = unk_0xB177666FAB6F4417(Local_1164.f_69[iParam0]);
			func_139(iParam0, iVar2);
			func_76();
			return 1;
		}
	}
	return 0;
}

void func_139(int iParam0, int iParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam1);
	if (Local_407.f_188.f_23 != 0)
	{
		Var1.f_9 = 49;
		Var1.f_59 = 2;
		Var1.f_78 = -1;
		Var1.f_79 = -1;
		Var1.f_96 = -1;
		Var1.f_97 = 1;
		Var1.f_99 = 132;
		Var1.f_100 = -1;
		Stack.Push(iParam0);
		Stack.Push(&Var1);
		Call_Loc(Local_407.f_188.f_23);
		if (StackVal)
		{
			func_148(iParam1, &Var1, 0, 1, func_137(iParam0, 0));
		}
	}
	unk_0xE121AE1BBF90E186(iParam1, func_137(iParam0, 21));
	unk_0x271603AF9C0C7EB3(iParam1, func_137(iParam0, 13));
	unk_0xC4B4C89FC0D48108(iParam1, func_137(iParam0, 17));
	unk_0xF3F7BF451A720FDF(iParam1, func_137(iParam0, 17));
	unk_0xA485C14FF45FDB92(iParam1, func_137(iParam0, 25));
	if (func_137(iParam0, 18))
	{
		unk_0x71EDC33E5A423750(iParam1, 7);
	}
	if (func_137(iParam0, 22))
	{
		unk_0x08841CDB215AE18F(iParam1, Local_1164.f_136, 0, 0, 1);
	}
	if (func_137(iParam0, 26))
	{
		unk_0x453A018B4CABC718(iParam1, 2, 2);
		unk_0x453A018B4CABC718(iParam1, 3, 2);
		unk_0x8B07ECBFF00D7FF9(iParam1, 0);
	}
	if (func_137(iParam0, 7))
	{
		unk_0xD458AC1C1D29C3B4(iParam1, 1000, 0);
		unk_0xA22F71BBC8173C39(iParam1, false);
		unk_0xD5A0214B20BCBAD8(iParam1, 1);
		unk_0x3F169EF6AE57D03F(iParam1, 0);
		if (func_147(iVar0))
		{
			unk_0x09C4C5C870748A1F(iParam1, 0);
			unk_0x0F94CA38DF58080C(iParam1, func_146(iVar0));
		}
		if (unk_0xC41A9202669A24C4(iVar0))
		{
			unk_0x9BAC3470A92767CB(iParam1, 0);
			unk_0x238274410BB56EE5(iParam1, 0f);
		}
		func_144(iParam1, iVar0);
		func_143(iParam1, 1);
		unk_0x5072321D4A2E8A10(iParam1, 0);
		unk_0x50782A20AFA26A7D(iParam1, func_137(iParam0, 24), 0);
		func_142(iParam0, iParam1);
	}
	if (func_137(iParam0, 30))
	{
		unk_0x1E9649458B15960F(iParam1, true);
	}
	if (func_137(iParam0, 0))
	{
	}
	else
	{
		if (unk_0xC41A9202669A24C4(iVar0))
		{
			unk_0xB58CA658A628ED02(iParam1, 2);
		}
		if (unk_0xA7082C42B8809BF2(iVar0))
		{
			unk_0xB078AFA7242F1F7B(iParam1, 1);
		}
	}
	if (func_137(iParam0, 0) || func_137(iParam0, 33))
	{
		if (unk_0xAFB8495D36825275(iVar0))
		{
			unk_0x873BCADC75FF6D20(iParam1);
			unk_0x56FDC9ADE35F7DB0(iParam1, true, 1, 0);
			unk_0xAC0C6241732E36F6(iParam1);
			unk_0xEF190091B5B9F5EB(iParam1, 1);
		}
	}
	unk_0xA6B2C9FCA24AAC6F(iParam1, 1);
	unk_0x443C9A6DC182DDD5(iParam1, 1);
	unk_0x79E38224B223335B(iParam1, 1);
	unk_0x25BD67336EA4AECE(iParam1, 1200);
	unk_0x71199B01895C6202(iVar0);
	unk_0xF8BBEE601D3667D7(iParam1, 1);
	func_140(iParam1);
	unk_0x4A13379C8009DF6F(Local_1164.f_69[iParam0], 1);
	if (Local_407.f_188.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_407.f_188.f_22);
	}
}

void func_140(int iParam0)
{
	func_141(iParam0);
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		unk_0x5D96D8530B3D0904(&iVar0, 10);
		unk_0x5D96D8530B3D0904(&iVar0, 11);
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

void func_141(int iParam0)
{
	if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0x30F813723591D02E(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0xB7E567188872123E(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_142(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("FMCVehicle", 2))
	{
		unk_0xA1093ABB024EC9BD(iParam1, "FMCVehicle", 1);
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 13);
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, 13);
		}
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

void func_144(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1649536104:
		case -312295511:
			unk_0xD8110893D0BDC749(iParam0, 0);
			break;
	}
	func_145(iParam0);
}

void func_145(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x60A2E7213232AA6E(iParam0, 0);
	}
}

float func_146(int iParam0)
{
	switch (iParam0)
	{
		case -1924433270:
			return 1f;
		
		default:
	}
	return 0,2f;
}

bool func_147(int iParam0)
{
	return func_146(iParam0) != 1f;
}

void func_148(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if ((unk_0x8CD06866876216F2() && unk_0xAFE0D3608EDA7039(iParam0)) || !unk_0x8CD06866876216F2())
		{
			if (unk_0xD803B885F5E47A62() != func_70())
			{
				uParam1->f_100 = unk_0xD803B885F5E47A62();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_196(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x29B31C96D81CCB42(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x0BB648AB646638F4(iParam0, uParam1->f_79);
			}
			if (func_195(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0x0947AEED9914905B(iParam0, uParam1->f_80);
			unk_0x149017A9F302A237(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x0674D459BB0558AA(iParam0, uParam1->f_99);
			}
			if (func_194(iParam0))
			{
				func_188(iParam0, func_191(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x2BCBD8AFBF4C2021(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x58D0AB20C3845D07(iParam0, uParam1->f_98);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 0))
			{
				func_162(iParam0, &(uParam1->f_81));
			}
			if ((!func_153(4) && !bParam4) && !unk_0xA14BB9332558B949())
			{
				func_151(iParam0);
			}
			if (func_150(unk_0x134B62B726CEC8E6(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						break;
					
					case 1:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 0, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 1, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0x7AFDC9F56E7BB635(iParam0, 16);
							if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
							{
								unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
							}
							else
							{
								unk_0xEE6A1776A67F70C1(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 1) && unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 2))
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0xF1D385D359D58F72("Player_Vehicle", 3))
					{
						unk_0xB7E567188872123E(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 1) && unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 2))
					{
						if (unk_0xF1D385D359D58F72("Veh_Modded_By_Player", 3))
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()));
						}
					}
					else if (unk_0xF1D385D359D58F72("Veh_Modded_By_Player", 3))
					{
						if (func_149(uParam1->f_81) && unk_0x60F025D317CE2512(&(uParam1->f_81)))
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", unk_0xE86C2816EDC6CAF0(unk_0xE7A1FE6C75BB88BA(&(uParam1->f_81))));
						}
						else
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1653666139:
		case 1945374990:
		case 219613597:
		case 444994115:
		case -27326686:
		case -801550069:
		case 668439077:
		case -688189648:
		case 540101442:
		case 628003514:
		case 1637620610:
		case -1812949672:
		case 679453769:
		case -1694081890:
		case -1375060657:
		case -1106120762:
		case 1537277726:
		case -755532233:
		case -1374500452:
		case 1909700336:
		case -2042350822:
		case -1293924613:
		case -1478704292:
		case 1239571361:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 1721676810:
		case 840387324:
		case -715746948:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 2139203625:
		case -1890996696:
		case 2038858402:
			return 1;
			break;
	}
	return 0;
}

void func_151(int iParam0)
{
	if (Global_262145.f_19684)
	{
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			if (unk_0xECE0BE5313FD8BDA(iParam0))
			{
				vVar0.x = unk_0x134B62B726CEC8E6(iParam0);
				vVar0.y = unk_0x12AB0310C2281427(unk_0x7888A5D2621AAF2D(iParam0));
				if (unk_0xF1D385D359D58F72("RandomID", 3))
				{
					if (!unk_0x30F813723591D02E(iParam0, "RandomID"))
					{
						vVar0.z = unk_0x09AC81E49EA267F7(0, 65535);
						unk_0xB7E567188872123E(iParam0, "RandomID", vVar0.z);
					}
					else
					{
						vVar0.z = unk_0x1E2DFB0EF4BB4566(iParam0, "RandomID");
					}
				}
				func_152(vVar0);
			}
		}
	}
}

void func_152(vector3 vParam0)
{
	vVar0.x = -582258758;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = vParam0.x;
	vVar0.f_2.f_1 = vParam0.y;
	vVar0.f_2.f_2 = vParam0.z;
	unk_0xFB061A86A7AC749F(1, &vVar0, 5, func_24(1, 1));
}

int func_153(int iParam0)
{
	if (func_161())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_160(iVar0) == iParam0)
			{
				if (func_154(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_154(int iParam0)
{
	return func_155(iParam0, 6, 1);
}

int func_155(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_159() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_156(func_158(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_157(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_159()
{
	return Global_30768;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
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
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_161()
{
	return Global_98796.f_346 > 0;
}

int func_162(int iParam0, var uParam1)
{
	if (!func_172(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x990F85C762AD7FB5(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_170(iParam0))
		{
			iVar1 = unk_0xE7A1FE6C75BB88BA(uParam1);
			if (func_165(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_163(iParam0))
	{
	}
	return 0;
}

int func_163(int iParam0)
{
	iVar0 = 0;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x990F85C762AD7FB5(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x8CD06866876216F2())
			{
				iVar1 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iVar1 = unk_0x1C0640BA9A7327B3();
			}
			iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x7AD884DD1BBC40C0(iParam0);
				func_164(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_164(int iParam0)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 16))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 16);
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

int func_165(int iParam0, int iParam1)
{
	func_169();
	if (Global_1312467.f_18 != 0 || unk_0x46514FD149D4885F(*iParam0))
	{
		Global_1676268.f_11 = unk_0x5D542E6B2AF6BF09(*iParam0);
		if (Global_1676268.f_11 < 0f)
		{
			Global_1676268.f_11 = 0f;
		}
	}
	func_167(*iParam0, &Global_1676268, &(Global_1676268.f_1), &(Global_1676268.f_4), &(Global_1676268.f_7), &(Global_1676268.f_10));
	Global_1676268.f_1.f_2 = (Global_1676268.f_1.f_2 - Global_1676268.f_11);
	if (Global_1676268.f_4.f_2 < 0f)
	{
		Global_1676268.f_12 = 1;
	}
	Global_1676268.f_13 = 200;
	if (unk_0x134B62B726CEC8E6(*iParam0) == 1581459400 || unk_0x134B62B726CEC8E6(*iParam0) == 1561920505)
	{
		Global_1676268.f_13 = 255;
	}
	if (Global_1676268.f_12)
	{
		if (func_166(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13))
		{
			if (unk_0x8CD06866876216F2())
			{
				Global_1315731 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				Global_1315731 = unk_0x1C0640BA9A7327B3();
			}
			return 1;
		}
	}
	else
	{
		Global_1676268.f_14 = { Global_1676268.f_1 };
		Global_1676268.f_14 = (Global_1676268.f_14 * -1f);
		Global_1676268.f_17 = { Global_1676268.f_4 };
		Global_1676268.f_17 = (Global_1676268.f_17 * -1f);
		Global_1676268.f_20 = { Global_1676268.f_7 };
		Global_1676268.f_20.f_1 = (Global_1676268.f_20.f_1 * -1f);
		Global_1676268.f_20.f_2 = (Global_1676268.f_20.f_2 * -1f);
		if (!unk_0x92C2290AA46758D3(*iParam0, 0))
		{
			Global_1676268.f_23 = unk_0x990F85C762AD7FB5(*iParam0, 0);
		}
		else
		{
			Global_1676268.f_23 = 3;
		}
		Global_1676268.f_24 = unk_0x990F85C762AD7FB5(*iParam0, 1);
		if (!unk_0x92C2290AA46758D3(*iParam0, 1))
		{
			Global_1676268.f_24 = unk_0x990F85C762AD7FB5(*iParam0, 1);
		}
		else
		{
			Global_1676268.f_24 = 3;
		}
		if (((Global_1676268.f_23 == 0 && func_166(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13)) || Global_1676268.f_23 != 0) && ((Global_1676268.f_24 == 0 && func_166(iParam0, iParam1, Global_1676268, Global_1676268.f_14, Global_1676268.f_17, Global_1676268.f_20, Global_1676268.f_10, 1, Global_1676268.f_13)) || Global_1676268.f_24 != 0))
		{
			if (unk_0x8CD06866876216F2())
			{
				Global_1315731 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				Global_1315731 = unk_0x1C0640BA9A7327B3();
			}
			return 1;
		}
	}
	return 0;
}

bool func_166(var uParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12, int iParam13, var uParam14)
{
	return unk_0xA12D050F82517F80(*uParam0, unk_0x9539D44F3E4492F6(iParam1), uParam2, vParam3, vParam6, vParam9, uParam12, iParam13, uParam14);
}

int func_167(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
	if (((!func_168(Global_1676294, 0f, 0f, 0f, 0) && !func_168(Global_1676297, 0f, 0f, 0f, 0)) && !func_168(Global_1676300, 0f, 0f, 0f, 0)) && !Global_1676303 == 0f)
	{
		*uParam2 = { Global_1676294 };
		*uParam3 = { Global_1676297 };
		*uParam4 = { Global_1676300 };
		*uParam5 = Global_1676303;
		return 1;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 80636076:
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1995326987:
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1216765807:
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1672195559:
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case -1809822327:
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1903012613:
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2140431165:
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case -808831384:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 142944341:
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1041692462:
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -114291515:
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -891462355:
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case 1126868326:
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -16948145:
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 850565707:
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -344943009:
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case 1069929536:
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case -1435919434:
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -682211828:
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case -304802106:
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 736902334:
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -1696146015:
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 11251904:
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case 2072687711:
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 2006918058:
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case -789894171:
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1311154784:
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 330661258:
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1045541610:
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 108773431:
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case 2006142190:
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -1130810103:
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1770332643:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1670998136:
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 1177543287:
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -394074634:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case -566387422:
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -685276541:
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1883002148:
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1291952903:
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -5153954:
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -591610296:
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 55628203:
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -391594584:
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -89291282:
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1137532101:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1909141499:
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 499169875:
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 2016857647:
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1800170043:
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case -1775728740:
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1543762099:
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 884422927:
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 301427732:
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case 37348240:
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 418536135:
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case -1289722222:
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 886934177:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1177863319:
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -624529134:
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1051415893:
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case 544021352:
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case 1269098716:
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2124201592:
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case 914654722:
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2064372143:
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -310465116:
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -433375717:
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case -634879114:
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 1032823388:
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1461482751:
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1348744438:
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -511601230:
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -808457413:
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -909201658:
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -377465520:
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1830407356:
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2095439403:
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case 1507916787:
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,515f;
			break;
		
		case -1450650718:
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case -1883869285:
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1150599089:
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1651067813:
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1645267888:
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1934452204:
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1737773231:
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -667151410:
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1207771834:
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2045594037:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -14495224:
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 2136773105:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 627094268:
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -893578776:
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case -227741703:
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1685021548:
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case -599568815:
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1189015600:
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 989381445:
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1255452397:
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case -746882698:
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case 1221512915:
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1349725314:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 873639469:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1337041428:
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case -1477580979:
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1545842587:
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2098947590:
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1723137093:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 970598228:
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case 1123216662:
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 384071873:
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 699456151:
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case -1311240698:
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case -1894894188:
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1008861746:
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 464687292:
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1531094468:
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1762279763:
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 338562499:
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -140902153:
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -825837129:
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1622444098:
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case 523724515:
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1777363799:
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 65402552:
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case -1122289213:
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1193103848:
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 758895617:
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 92612664:
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1488164764:
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 767087018:
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 486987393:
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1403128555:
			*uParam2 = { -1,24f, 0,42f, -0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,035f };
			*uParam5 = 0,3f;
			break;
		
		case -1297672541:
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case -142942670:
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case 408192225:
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1836027715:
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case 117401876:
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case 841808271:
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case 75131841:
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case 1373123368:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case -1205801634:
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case -431692672:
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1237253773:
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1078682497:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1011753235:
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -159126838:
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case 1265391242:
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case -1089039904:
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -589178377:
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 729783779:
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -326143852:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case 723973206:
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case 1923400478:
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case 1039032026:
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case 941800958:
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1753414259:
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case 296357396:
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2107990196:
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1372848492:
		case 410882957:
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case 640818791:
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case -1566741232:
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1987142870:
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -498054846:
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1581459400:
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case -1479664699:
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 349605904:
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 784565758:
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1663218586:
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -1353081087:
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -2119578145:
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1790546981:
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1013450936:
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case -1361687965:
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 525509695:
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1896491931:
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2040426790:
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 2006667053:
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -2039755226:
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 223258115:
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case -1797613329:
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -899509638:
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case 16646064:
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case -1126264336:
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1119641113:
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -831834716:
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 2068293287:
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1878062887:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 634118882:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 470404958:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 666166960:
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 906642318:
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 704435172:
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -2030171296:
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -604842630:
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1660945322:
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1943285540:
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1485523546:
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case 1489967196:
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case -888242983:
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case 1922255844:
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case 1102544804:
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 972671128:
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 633712403:
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -295689028:
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case -602287871:
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1274868363:
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1757836725:
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1426219628:
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -1829802492:
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 2123327359:
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 234062309:
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1475773103:
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1930048799:
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case 1203490606:
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -432008408:
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1549126457:
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 683047626:
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1232836011:
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -777172681:
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1887331236:
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -2115793025:
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -1404136503:
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 822018448:
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case 2035069708:
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case -255678177:
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -1606187161:
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case 1873600305:
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -405626514:
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -1009268949:
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -570033273:
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -609625092:
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case -1558399629:
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1026149675:
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case -618617997:
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -1289178744:
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -1842748181:
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case -2022483795:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -239841468:
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 1790834270:
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 196747873:
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 627535535:
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -757735410:
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case -2048333973:
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -482719877:
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1034187331:
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1093792632:
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -1758137366:
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 941494461:
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 777714999:
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1886268224:
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 1074745671:
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 1180875963:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 272929391:
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 989294410:
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case -1405937764:
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case 719660200:
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -982130927:
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 159274291:
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 223240013:
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -32236122:
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 433954513:
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 884483972:
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case -1210451983:
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case 1356124575:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1504306544:
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1939284556:
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 917809321:
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 177270108:
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 387748548:
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1392481335:
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -998177792:
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -1242608589:
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case 1841130506:
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 2049897956:
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case -2118308144:
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1483171323:
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 886810209:
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -1693015116:
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -692292317:
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case -1435527158:
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -212993243:
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1561920505:
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case -1848994066:
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1741861769:
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1104234922:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1871995513:
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1352136073:
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -313185164:
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 600450546:
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -410205223:
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 867799010:
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1529242755:
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 903794909:
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1532697517:
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 15219735:
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 661493923:
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 838982985:
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -391595372:
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case -121446169:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 1909189272:
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case 1617472902:
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1267543371:
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 931280609:
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1046206681:
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1259134696:
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1031562256:
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case -376434238:
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -986944621:
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1134706562:
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2120700196:
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -214906006:
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -988501280:
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case 1254014755:
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 219613597:
			*uParam2 = { -1,5f, 0,833f, 0,391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 1945374990:
			*uParam2 = { -1,125f, 2,691f, 0,318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1653666139:
			*uParam2 = { -1,5f, 1,853f, 0,779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,38f;
			break;
		
		case 500482303:
			*uParam2 = { -1f, 0,195f, 0,105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 2044532910:
			*uParam2 = { -1,73f, 0,159f, 0,61f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -638562243:
			*uParam2 = { -1f, -0,188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -420911112:
			*uParam2 = { -1,213f, 1,546f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 321186144:
			*uParam2 = { -1f, 0,036f, 0,096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -54332285:
			*uParam2 = { -1f, 0,249f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 2069146067:
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case -1988428699:
			*uParam2 = { -1,73f, 3,397f, 0,724f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 668439077:
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case -1694081890:
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case -2042350822:
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case 2139203625:
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1890996696:
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 2038858402:
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -801550069:
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 679453769:
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1909700336:
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1566607184:
			*uParam2 = { -1f, 0,167f, 0,159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1591739866:
			*uParam2 = { -1,5f, 1,066f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case 1279262537:
			*uParam2 = { -1f, 0,111f, 0,123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -688189648:
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1375060657:
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1293924613:
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2096690334:
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1009171724:
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1924800695:
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1744505657:
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 444994115:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1637620610:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -755532233:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 628003514:
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1537277726:
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1239571361:
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -331467772:
			*uParam2 = { -1f, -0,091f, 0,207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1721676810:
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 840387324:
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -715746948:
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -507495760:
			*uParam2 = { -1f, -0,105f, 0,262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2061049099:
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 373261600:
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1742022738:
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1168952148:
			*uParam2 = { -1f, 0,415f, 0,394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1456744817:
			*uParam2 = { -1f, 0,171f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -49115651:
			*uParam2 = { -1f, 0f, 0,163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 540101442:
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1106120762:
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1478704292:
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1349095620:
			*uParam2 = { -1f, 0,687f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 686471183:
			*uParam2 = { -1,045f, 0,15f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 310284501:
			*uParam2 = { -1f, 0,12f, 0,334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1323778901:
			*uParam2 = { -1f, 0,372f, 0,439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 722226637:
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case 1934384720:
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case -362150785:
			*uParam2 = { -1f, 0,27f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1854776567:
			*uParam2 = { -1f, 0,195f, -0,063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -208911803:
			*uParam2 = { -1f, 0,213f, 0,213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -664141241:
			*uParam2 = { -1f, 0,576f, -0,123f };
			*uParam3 = { 0,997f, -0,105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -941272559:
			*uParam2 = { -1f, -0,207f, 0,042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -882629065:
			*uParam2 = { -1f, 0,012f, 0,147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1620126302:
			*uParam2 = { -1f, 0,216f, 0,216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -1829436850:
			*uParam2 = { -1f, 0,24f, 0,255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -447711397:
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1416466158:
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -1804415708:
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -324618589:
			*uParam2 = { -1f, 0,357f, 0,256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 1044193113:
			*uParam2 = { -1f, 0,426f, 0,339f };
			*uParam3 = { 1f, 0,06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1862507111:
			*uParam2 = { -1f, 0,108f, 0,234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -682108547:
			*uParam2 = { -1f, 0,273f, -0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 833469436:
			*uParam2 = { -1f, 0,35f, 0,456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 83136452:
			*uParam2 = { 0f, 1,9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1118611807:
			*uParam2 = { -1f, 0,104f, 0,339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 987469656:
			*uParam2 = { -1f, 0,104f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -834353991:
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1456336509:
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 872704284:
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 409049982:
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 394110044:
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case 1693751655:
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 2031587082:
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 960812448:
			*uParam2 = { -1f, 0,0965f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1756021720:
			*uParam2 = { 0f, 2,019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1132721664:
			*uParam2 = { -1,5f, 0,42f, -0,2f };
			*uParam3 = { 1f, -0,0997f, 0,0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1284356689:
			*uParam2 = { -1,202f, 0,034f, 0,6635f };
			*uParam3 = { 1f, -0,002f, 0f };
			*uParam4 = { 0f, -0,7398f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2122646867:
			*uParam2 = { -1,5f, 0,379f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case 1717532765:
			*uParam2 = { -1,76f, 0,105f, 0,009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case -2098954619:
			*uParam2 = { 0f, 1,252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case -913589546:
			*uParam2 = { 0f, 2,135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,205f;
			break;
		
		case 1802742206:
			*uParam2 = { 0f, 2,352f, 0,3f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,135f;
			break;
		
		case 67753863:
			*uParam2 = { -1f, 0,252f, 0,203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,21f;
			break;
		
		case -1810806490:
			*uParam2 = { 0f, 1,654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -631322662:
			*uParam2 = { -1,08f, 0,28f, -0,093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -838099166:
			*uParam2 = { -1,64f, 0,7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1728685474:
			*uParam2 = { -1f, -0,021f, 0,273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -1358197432:
			*uParam2 = { -1f, 0,156f, 0,099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1107404867:
			*uParam2 = { -1,5f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
	}
	return 1;
}

bool func_168(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_169()
{
	Global_1676268 = 0;
	Global_1676268.f_1 = { 0f, 0f, 0f };
	Global_1676268.f_4 = { 0f, 0f, 0f };
	Global_1676268.f_7 = { 0f, 0f, 0f };
	Global_1676268.f_10 = 0f;
	Global_1676268.f_11 = 0f;
	Global_1676268.f_12 = 0;
	Global_1676268.f_13 = 0;
	Global_1676268.f_14 = { 0f, 0f, 0f };
	Global_1676268.f_17 = { 0f, 0f, 0f };
	Global_1676268.f_20 = { 0f, 0f, 0f };
	Global_1676268.f_23 = 0;
	Global_1676268.f_24 = 0;
}

int func_170(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x92C2290AA46758D3(iParam0, 0) || func_171(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				return unk_0xEAE0D21A50E6C7F4(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_172(int iParam0, var uParam1)
{
	if (unk_0x83F946529771616E(uParam1, 13) && unk_0x60F025D317CE2512(uParam1))
	{
		iVar0 = unk_0xE7A1FE6C75BB88BA(uParam1);
	}
	else
	{
		iVar0 = func_70();
	}
	bVar1 = false;
	if (iVar0 == unk_0xD803B885F5E47A62())
	{
		if (func_183(15, 0))
		{
			bVar1 = true;
		}
		else if (func_179(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0)) || !unk_0xAFE0D3608EDA7039(iParam0)) || !unk_0x05449BDA851F5199(0, -1, 1)) || !((unk_0x83F946529771616E(uParam1, 13) && unk_0x080E9D045AEE5605()) && unk_0xF2EC2A39FF9E838D(uParam1))) || iVar0 == func_70()) || !func_28(iVar0, 0, 0)) || !bVar1) || func_173(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 1;
	}
	if (func_175(unk_0xD803B885F5E47A62()) == 3)
	{
		if (func_174(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1676293)
	{
		return 1;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 788045382:
		case -1453280962:
		case -2128233223:
		case -1269889662:
		case 699456151:
		case -1311240698:
		case -349601129:
		case 743478836:
		case 301427732:
		case -1661854193:
		case 534258863:
		case -827162039:
		case -312295511:
		case -1860900134:
		case 2071877360:
		case -591651781:
		case -401643538:
		case 349315417:
		case -915704871:
		case 237764926:
		case -631760477:
		case -1106353882:
		case -777172681:
		case 86520421:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case -1071380347:
		case 741090084:
		case -27326686:
		case -1812949672:
		case -1374500452:
		case -1232836011:
		case 2067820283:
		case 482197771:
		case 819197656:
		case 6774487:
		case 1491277511:
		case -440768424:
		case -1523428744:
		case -674927303:
		case -1590337689:
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case 408825843:
		case 740289177:
		case 1492612435:
		case 1181339704:
			return 1;
			break;
		
		case 65402552:
		case 1026149675:
			if (unk_0x0ECB5CA5140957AD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case 384071873:
			if (unk_0x0ECB5CA5140957AD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case 1234311532:
			return 1;
			break;
		
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1489874736:
			return 1;
			break;
		
		case -1988428699:
			return 1;
			break;
		
		case -286046740:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 916547552:
		case -48031959:
		case -907477130:
			return 1;
			break;
		
		case -2098954619:
			if ((unk_0x0ECB5CA5140957AD(iParam0, 7) == 0 || unk_0x0ECB5CA5140957AD(iParam0, 7) == 1) || unk_0x0ECB5CA5140957AD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case 67753863:
			if ((unk_0x0ECB5CA5140957AD(iParam0, 45) == 4 || unk_0x0ECB5CA5140957AD(iParam0, 45) == 5) || unk_0x0ECB5CA5140957AD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_175(int iParam0)
{
	if (func_178(iParam0) == 233)
	{
		return func_176(iParam0);
	}
	return -1;
}

int func_176(int iParam0)
{
	if (func_177(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (func_177(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

bool func_179(bool bParam0)
{
	return func_180(unk_0xD803B885F5E47A62(), bParam0);
}

int func_180(int iParam0, bool bParam1)
{
	return func_181(iParam0, bParam1, 1);
}

int func_181(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_182(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_70() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 != func_70())
	{
		if (Global_1628237[iParam0].f_11 != func_70())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_185(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_184(iVar1));
}

int func_184(int iParam0)
{
	return (iParam0 % 32);
}

int func_185(int iParam0)
{
	iVar0 = func_156(func_186(iParam0), -1, 0);
	return iVar0;
}

int func_186(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_187(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_187(int iParam0)
{
	return (iParam0 / 32);
}

void func_188(int iParam0, int iParam1)
{
	iVar1 = func_190(iParam1);
	func_189(iVar1, &iVar0);
	unk_0x0674D459BB0558AA(iParam0, iVar0);
}

bool func_189(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x8CD06866876216F2() && func_192()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

int func_192()
{
	if (unk_0x1963B11DE70153E0())
	{
		if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xC2F420D189FDB329())
		{
			Var0 = { func_193() };
			if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_193()
{
	unk_0xB6D2E6F743DD2459(&Var0, 13);
	return Var0;
}

int func_194(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -1812949672:
			return 1;
			break;
	}
	return 0;
}

bool func_195(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case -312295511:
			*uParam1 = 1f;
			break;
		
		case 682434785:
			*uParam1 = 1f;
			break;
		
		case -1912017790:
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0,2f;
			break;
		
		case -32878452:
			*uParam1 = 0,15f;
			break;
		
		case -1007528109:
			*uParam1 = 0,3f;
			break;
		
		case -42959138:
			*uParam1 = 0,5f;
			break;
		
		case -1763555241:
			*uParam1 = 0,3f;
			break;
		
		case -749299473:
			*uParam1 = 0,4f;
			break;
		
		case 1565978651:
			*uParam1 = 0,3f;
			break;
		
		case 1036591958:
			*uParam1 = 0,4f;
			break;
		
		case -1386191424:
			*uParam1 = 0,4f;
			break;
		
		case -975345305:
			*uParam1 = 0,4f;
			break;
		
		case -392675425:
			*uParam1 = 0,3f;
			break;
		
		case -1700874274:
			*uParam1 = 0,5f;
			break;
		
		case 1043222410:
			*uParam1 = 0,15f;
			break;
		
		case -1435527158:
			*uParam1 = 0,6f;
			break;
		
		case 668439077:
			*uParam1 = 1f;
			break;
		
		case -1694081890:
			*uParam1 = 1f;
			break;
		
		case -2042350822:
			*uParam1 = 1f;
			break;
		
		case 2139203625:
			*uParam1 = 1f;
			break;
		
		case -1890996696:
			*uParam1 = 1f;
			break;
		
		case 2038858402:
			*uParam1 = 1f;
			break;
		
		case -801550069:
			*uParam1 = 1f;
			break;
		
		case 679453769:
			*uParam1 = 1f;
			break;
		
		case 1909700336:
			*uParam1 = 1f;
			break;
		
		case -27326686:
			*uParam1 = 1f;
			break;
		
		case -1812949672:
			*uParam1 = 1f;
			break;
		
		case -1374500452:
			*uParam1 = 1f;
			break;
		
		case -688189648:
			*uParam1 = 1f;
			break;
		
		case -1375060657:
			*uParam1 = 1f;
			break;
		
		case -1293924613:
			*uParam1 = 1f;
			break;
		
		case 1009171724:
			*uParam1 = 1f;
			break;
		
		case -1924800695:
			*uParam1 = 1f;
			break;
		
		case -1744505657:
			*uParam1 = 1f;
			break;
		
		case 444994115:
			*uParam1 = 1f;
			break;
		
		case 1637620610:
			*uParam1 = 1f;
			break;
		
		case -755532233:
			*uParam1 = 1f;
			break;
		
		case 628003514:
			*uParam1 = 1f;
			break;
		
		case 1537277726:
			*uParam1 = 1f;
			break;
		
		case 1239571361:
			*uParam1 = 1f;
			break;
		
		case 1721676810:
			*uParam1 = 1f;
			break;
		
		case 840387324:
			*uParam1 = 1f;
			break;
		
		case -715746948:
			*uParam1 = 1f;
			break;
		
		case -1146969353:
			*uParam1 = 1f;
			break;
		
		case 1542143200:
			*uParam1 = 1f;
			break;
		
		case -579747861:
			*uParam1 = 1f;
			break;
		
		case -2061049099:
			*uParam1 = 1f;
			break;
		
		case 373261600:
			*uParam1 = 1f;
			break;
		
		case 1742022738:
			*uParam1 = 1f;
			break;
		
		case 540101442:
			*uParam1 = 1f;
			break;
		
		case -1106120762:
			*uParam1 = 1f;
			break;
		
		case -1478704292:
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_196(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_207(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			iVar0 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_206(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_206(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_206(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_206(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_206(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 10) != 0)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0);
			if (unk_0x0ECB5CA5140957AD(iParam0, 5) != -1)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 1);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_205(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_204())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_203(uParam1->f_66))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_65);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_70);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x7726E33AC3B60544(iParam0, 2, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		unk_0x7726E33AC3B60544(iParam0, 3, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		unk_0x7726E33AC3B60544(iParam0, 0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		unk_0x7726E33AC3B60544(iParam0, 1, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (unk_0x579935D850368851(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_202(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_202(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x429C172A00A5F89B(iParam0, 1);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_197(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_206(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == 819197656 || unk_0x134B62B726CEC8E6(iParam0) == -777172681) || unk_0x134B62B726CEC8E6(iParam0) == -1232836011)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0) == -1)
			{
				unk_0xD3421E391490133B(iParam0, 1, false);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_66) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					unk_0xB58CA658A628ED02(iParam0, 2);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 3);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 4);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_197(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_201(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_200(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_200(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_199(iParam0);
	if (func_198(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, 1);
	}
	return 1;
}

int func_198(int iParam0)
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

void func_199(var uParam0)
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

int func_200(int iParam0, int iParam1)
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

int func_201(int iParam0, int iParam1)
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

void func_202(int iParam0, int iParam1)
{
	if (unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 24);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 24);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == -1558399629 || unk_0x134B62B726CEC8E6(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 24);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

bool func_204()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_205(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_207(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_208(unk_0xD803B885F5E47A62(), -1))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (func_175(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_174(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_209(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, iParam5, iParam7, iParam6, iParam14);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				unk_0x271603AF9C0C7EB3(iVar1, true);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam10);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam8)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam9);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam12)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_210(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_210(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_211(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1].f_5 == iParam5 && Global_2405072.f_2912[1].f_4 == iParam4) && vdist(Global_2405072.f_2912[1], vParam0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0] = { Global_2405072.f_2912[iVar0 + 1] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1] = { vParam0 };
		Global_2405072.f_2912[1].f_3 = iParam3;
		Global_2405072.f_2912[1].f_4 = iParam4;
		Global_2405072.f_2912[1].f_5 = iParam5;
	}
}

int func_211(int iParam0, vector3 vParam1, int iParam4)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0][iVar1].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0][iVar1].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417897.f_461[iVar0][iVar1].f_2;
				}
				if (vdist(Global_2417897.f_461[iVar0][iVar1], vVar2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_212(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_229(&(Global_75441.f_555[0]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0], iParam4) <= fParam3)
			{
				func_213(iVar0);
			}
		}
		iVar0++;
	}
}

void func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_229(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				unk_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_228(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_217(0, Global_75441.f_555[0].f_12) || !func_217(1, Global_75441.f_555[0].f_12)))
			{
				func_216(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_214(iParam0, 0);
		}
	}
}

void func_214(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_228(iParam0, 0))
		{
			func_215(iParam0, 1, 0);
			func_215(iParam0, 2, 0);
			func_215(iParam0, 3, 0);
			func_215(iParam0, 4, 0);
			func_215(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_215(iParam0, 0, 0);
	}
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

void func_216(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_217(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_227(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_218(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_218(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !unk_0x8CD06866876216F2()) || (iParam0 == 237764926 && !unk_0x8CD06866876216F2())) || (iParam0 == 349315417 && !unk_0x8CD06866876216F2())) || iParam0 == -613725916) || (iParam0 == -401643538 && !unk_0x8CD06866876216F2()))
	{
		if (!func_226())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_225() && !func_224()) && !func_223()) && !func_222()) && !func_226())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_223())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_221(iParam0))
		{
			return 0;
		}
	}
	if (!func_219(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0)
{
	if (!func_220())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_220()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_221(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_222()
{
	return 0;
}

int func_223()
{
	return 1;
}

int func_224()
{
	return 1;
}

int func_225()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_226()
{
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(1571103992, iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(var uParam0)
{
	return *uParam0;
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

int func_229(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_230(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_230(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_230(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_230(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_230(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_230(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_230(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_230(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_230(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = -186537451;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = -1008861746;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = 356391690;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = 771711535;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = -1323100960;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = 1917016601;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = -823509173;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_226())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_226())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = -1269889662;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_168(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_168(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_168(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_230(int iParam0, int iParam1)
{
	if (func_232(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_231(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_231(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_232(int iParam0)
{
	return iParam0 < 3;
}

int func_233(int iParam0)
{
	if (func_236(iParam0, &vVar4, &vVar1, &uVar0))
	{
		if (func_235(iParam0, vVar4, vVar1, uVar0))
		{
			Local_1164.f_136 = { vVar4 };
			Local_1164.f_142 = func_234(vVar4, vVar1);
			return 1;
		}
	}
	return 0;
}

float func_234(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_235(int iParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!func_61(vParam1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0xE82754C349C7B581(vParam1, &fVar0, 1, 0))
	{
		if (vParam1.z < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = unk_0x1B5F75EF87755C4E(vParam1.x, vParam1.y);
		if (vParam1.z < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0, var uParam1, var uParam2, var uParam3)
{
	fVar0 = 200f;
	if (func_137(iParam0, 0))
	{
	}
	else
	{
		*uParam2 = { Local_220.f_75.f_1[iParam0].f_4 };
	}
	*uParam1 = { func_238(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(Local_1164.f_129) * 30f))), (fVar0 * cos((to_float(Local_1164.f_129) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_237());
	Local_1164.f_129++;
	if (Local_1164.f_129 >= 12)
	{
		Local_1164.f_129 = 0;
	}
	return 1;
}

float func_237()
{
	return 60f;
}

Vector3 func_238(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

int func_239(int iParam0)
{
	if (func_241(iParam0, &vVar1, &vVar4, &fVar10, &uVar0))
	{
		if (unk_0x913A58CA04510D94(vVar4, vVar1, fVar10, &vVar7))
		{
			if (func_240(iParam0, vVar7, vVar4, uVar0))
			{
				Local_1164.f_136 = { vVar7 };
				Local_1164.f_142 = func_234(vVar7, vVar4);
				return 1;
			}
		}
	}
	return 0;
}

int func_240(int iParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!func_61(vParam1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_241(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_137(iParam0, 0))
	{
	}
	else
	{
		*uParam1 = { Local_220.f_75.f_1[iParam0].f_4 };
		*uParam2 = { Local_220.f_75.f_1[iParam0].f_4 };
	}
	if (Local_1164.f_129 > 0)
	{
		func_242(uParam1);
	}
	if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 160f;
	}
	else
	{
		*uParam3 = 80f;
	}
	return 1;
}

void func_242(var uParam0)
{
	if (Local_1164.f_129 < 5)
	{
		switch (Local_1164.f_129)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_1164.f_129 = 0;
	}
	Local_1164.f_129++;
}

bool func_243(int iParam0, var uParam1, var uParam2)
{
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_188.f_21);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_244(Local_220.f_75.f_1[iParam0].f_4, Local_220.f_75.f_1[iParam0].f_4, Local_220.f_75.f_1[iParam0].f_3, 0, uParam1, uParam2, &Var0);
}

int func_244(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!unk_0x00A15D69BCAA5267() > 7 && !unk_0x00A15D69BCAA5267() == 5)
		{
			return 0;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return 0;
	}
	if (!func_364(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_605) < func_363(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_362();
			func_361();
		}
		return 0;
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) < func_363(0))
			{
				return 0;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) > func_363(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_355(vParam0))
		{
			if (func_354(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (vdist(Global_2405072.f_688, vParam0) > 50f)
		{
			return 0;
		}
	}
	unk_0x10FEEAFF01E32639((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = unk_0x6794171A1021C2D8();
		Global_2405072.f_669 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_673 = unk_0x6794171A1021C2D8();
		Global_2405072.f_688 = { vParam0 };
		Global_2405072.f_674 = unk_0x6794171A1021C2D8();
		Global_2405072.f_670 = 2;
		func_353();
		func_362();
		if (!uParam10->f_27 || (((((func_352(vParam0, 1, 1133903872) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_333(vParam0, iParam6);
		}
		if (func_318(vParam0))
		{
			func_333(vParam0, iParam6);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (unk_0xD1B4D22E0BA9B0C8((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405072.f_676 = { vParam0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_61(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_316(vParam0, *uParam9, iParam6, unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_676 = { vParam0 };
					Global_2405072.f_679 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = -1008861746;
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { vParam3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1] = { uParam10->f_15[iVar1] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_264(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_262(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = unk_0x6794171A1021C2D8();
				Global_2405072.f_671 = unk_0x6794171A1021C2D8();
				Global_2405072.f_670 = 3;
			}
			break;
		
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_261(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = unk_0x6794171A1021C2D8();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_259(Global_2405072.f_676, 0);
						func_258(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_672) > 3000)
			{
				func_258(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_692) < 10000)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_691))
					{
						if (unk_0x9E6C7E283363593B(Global_2405072.f_691))
						{
							if (!unk_0x6FE31D882B028E10(Global_2405072.f_691))
							{
								if (func_257(Global_2405072.f_676, Global_2405072.f_679, iParam6, unk_0xD803B885F5E47A62(), 0) || func_246(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_259(Global_2405072.f_676, 0);
									func_258(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_259(Global_2405072.f_676, 0);
								func_258(-1);
							}
						}
					}
					else
					{
						func_258(-1);
					}
				}
				else
				{
					func_258(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405072.f_676 = { vParam0 };
			Global_2405072.f_679 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = -1008861746;
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3,5f;
			Var64.f_10 = uParam10->f_5;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_6;
			Var64.f_11 = uParam10->f_7;
			Var64.f_6 = uParam10->f_8;
			Var64.f_7 = uParam10->f_9;
			Var64 = { vParam3 };
			Var64.f_34 = iParam6;
			Var64.f_31 = uParam10->f_13;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_14;
			Var64.f_56 = uParam10->f_25;
			Var64.f_57 = uParam10->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1] = { uParam10->f_15[iVar1] };
				Var64.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var64.f_49 = uParam10->f_29;
			func_264(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
			Global_2405072.f_670 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { vParam0 };
	Global_2405072.f_673 = unk_0x6794171A1021C2D8();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam8 = { Global_2405072.f_676 };
		*uParam9 = Global_2405072.f_679;
		func_245(1);
		return 1;
	}
	return 0;
}

void func_245(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_353();
	func_362();
	if (bParam0)
	{
		func_361();
	}
}

int func_246(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam9 == 0)
		{
			if (func_28(iVar1, bParam5, bParam6))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_63(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam10) && bParam7) && func_68(iVar1))
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
										if (func_256(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_247(func_65(iVar1), vParam0, fParam3, iParam4, fVar2))
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

int func_247(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	if (vdist(vParam0, vParam3) < func_255(iParam7, 1008981770))
	{
		func_248(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_248(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vVar0 = { 0f, 1f, 0f };
	func_254(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_249(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = unk_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_249(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_252(iParam0);
		if (iVar0 != 0)
		{
			func_250(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_250(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_251(iParam0, &Global_1315812);
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

void func_251(int iParam0, var uParam1)
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

int func_252(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_253(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_253(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_254(var uParam0, vector3 vParam1)
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

float func_255(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_249(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (sqrt(((((vVar6.x * 0,5f) * (vVar6.x * 0,5f)) + ((vVar6.y * 0,5f) * (vVar6.y * 0,5f))) + ((vVar6.z * 0,5f) * (vVar6.z * 0,5f)))) + fParam1);
	return fVar9;
}

int func_256(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	if (func_247(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_249(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_254(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_254(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (unk_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0,5f), 0f, 0f };
	func_254(&vVar26, 0f, 0f, fParam3);
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
		if (func_247(vVar1[iVar0], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_256(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_257(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_28(iVar1, 0, 1) && func_28(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_247(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_247(func_65(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_247(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_28(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_247(func_65(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

void func_258(int iParam0)
{
	if (Global_2405072.f_675 < 20 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_259(vector3 vParam0, int iParam3)
{
	if (iParam3 == 0 && func_260(vParam0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && vmag(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam3] };
		Global_2405072.f_2728[iParam3] = { vParam0 };
		func_259(vVar0, iParam3 + 1);
	}
}

int func_260(vector3 vParam0, float fParam3)
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

int func_261(vector3 vParam0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	else
	{
		func_362();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && unk_0xBFF81ED3B99522C7())
			{
				func_248(vParam0, fParam3, iParam4, &vVar0, &vVar3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = unk_0x755FF954DAE327E1((vVar0.z - vVar3.z));
					vVar0.z = (vVar0.z + ((fVar8 * 0,5f) - 2f));
					vVar3.z = (vVar3.z + (fVar8 * 0,5f));
				}
				Global_2405072.f_680[iVar7] = unk_0x3CED806443E1AA85(vVar0, vVar3, fParam6);
				Global_2405072.f_684[iVar7] = unk_0x0D0A574C76D769AC();
				Global_2405072.f_691 = Global_2405072.f_680[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_262(vector3 vParam0, var uParam3, int iParam4, var uParam5)
{
	*uParam5 = func_263(&vParam0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xFB061A86A7AC749F(1, &Var0, 8, func_24(1, 1));
}

int func_263(var uParam0, var uParam1, var uParam2)
{
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	return iVar16;
}

void func_264(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_313(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_265(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_265(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_309(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_304(uParam0, 1))
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
	if (func_252(uParam2->f_34) != 0)
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
					if (!func_297(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_294(vVar1))
									{
										vVar1 = { func_289(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_288(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_284(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_304(&vVar1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_283(vVar1, fVar4, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_309(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_282(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_61(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_61(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_246(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_274(vVar1, uParam2->f_54, &fVar25);
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
																													func_273(vVar1, fVar4, iVar16);
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
																									if (func_284(vVar1, uParam2))
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
							func_271(0, uParam2);
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
						func_270(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, iVar13, iVar14, bVar11);
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
						if (func_309(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_304(&vVar31, bVar35))
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
				func_266(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_266(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*uParam0[iVar2], vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_267(*uParam0[iVar2], 5f, unk_0xD803B885F5E47A62(), 0, 0))
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

int func_267(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_269(vParam0, fParam3, iParam4, iParam5, 0) || func_268(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_268(vector3 vParam0, int iParam3, int iParam4)
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
					if (func_247(vParam0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_28(iVar2, 0, 1) && func_28(iParam3, 0, 1))
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

int func_269(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_28(iVar1, 0, 1) && func_28(iParam4, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_28(iVar1, 0, 1) && func_28(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (vdist(func_65(iVar1), vParam0) < 1f)
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
				else if (func_28(iVar1, 0, 1))
				{
					if (vdist(func_65(iVar1), vParam0) < 1f)
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

void func_270(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, iParam11, iParam12);
		*uParam5 = { func_289(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_294(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_271(int iParam0, var uParam1)
{
	if (!func_284(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_272(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_271(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_271(iParam0 + 1, uParam1);
	}
}

void func_272(int iParam0)
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

void func_273(vector3 vParam0, float fParam3, int iParam4)
{
	vVar0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { vParam0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_273(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_274(vector3 vParam0, float fParam3, float fParam4)
{
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_275(iVar5))
		{
			vVar1 = { func_65(iVar5) };
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

int func_275(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		if (!func_280(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_277(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_276(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
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
					if (!func_277(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_68(iParam0))
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

int func_276(int iParam0, int iParam1, int iParam2)
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

int func_277(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_278(iParam0))
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

bool func_278(int iParam0)
{
	return func_279(iParam0);
}

bool func_279(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_280(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_281())
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

bool func_281()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_282(vector3 vParam0, float fParam3, int iParam4)
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
		if (func_256(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
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
		if (func_256(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_257(vParam0, fParam3, iParam4, iParam5, iParam6) || func_316(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_284(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_287(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_285(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_285(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_286(&vParam3, &vParam6);
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

void func_286(var uParam0, var uParam1)
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

bool func_287(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
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

int func_288(vector3 vParam0, float fParam3)
{
	if (func_277(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_247(vParam0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
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
					if (func_247(vParam0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0,5f))
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
					if (func_247(vParam0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0,5f))
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
					if (func_247(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0,5f))
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
					if (func_247(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0,5f))
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

Vector3 func_289(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_292(vParam0, *fParam3, vParam6))
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
			if (unk_0xAFB8495D36825275(iParam11) && func_291(vParam0))
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
					fVar14 = func_290(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_290(iParam11, 1,5f);
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
		if (!func_292(vParam0, *fParam3, vParam6))
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
					fVar14 = func_290(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_290(iParam11, 1,5f);
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

float func_290(int iParam0, float fParam1)
{
	func_249(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_291(vector3 vParam0)
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

int func_292(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vVar0 = { 0f, 1f, 0f };
	func_254(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_293(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_293(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_294(vector3 vParam0)
{
	iVar1 = func_296(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_295(vParam0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_295(vParam0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_295(vector3 vParam0, var uParam3)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_296(struct<2> Param0, var uParam2)
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

int func_297(var uParam0, bool bParam1)
{
	if (func_303(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = unk_0x79833B02DBD2A244(0,01f, 360f);
			func_302(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_298(vVar1, &uVar0) || func_303(vVar1))
			{
				vVar1 = { *uParam0 };
				func_302(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_298(vector3 vParam0, var uParam3)
{
	if (func_301())
	{
		return 0;
	}
	iVar1 = func_300();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_299(vParam0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_299(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_287(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_285(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_300()
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

bool func_301()
{
	return Global_1676377.f_474;
}

void func_302(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_254(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_254(&vVar0, 0f, 0f, fParam7);
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

int func_303(vector3 vParam0)
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

bool func_304(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_287(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_285(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
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
				*uParam0 = { func_305(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_305(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_302(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_308(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_306(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_287(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_285(vVar1, vParam3, vParam6, 0, 0))
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

void func_306(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_307(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
	fVar9 = (vmag(vVar3) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_293(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_293(vVar6, vVar3) >= 0f)
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
		vVar6 = { func_307(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0,5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_307(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		fVar9 = (vmag(vVar29) * sin(unk_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_293(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_293(vVar6, vVar29) >= 0f)
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

Vector3 func_307(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_308(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_309(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_355(vParam0))
	{
		if (func_312(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_310(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_260(*uParam3, 1056964608))
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
				func_302(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_310(var uParam0, bool bParam1, bool bParam2)
{
	if (func_298(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_311(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_298(vVar2, &uVar1) || func_303(vVar2))
			{
				vVar2 = { *uParam0 };
				func_311(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

void func_311(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_305(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_305(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_305(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_302(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_308(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_306(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_312(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_299(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
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
							func_311(&vVar1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_312(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_311(&vVar1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
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

int func_313(var uParam0, var uParam1, var uParam2)
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
			if (func_309(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_304(uParam0, 1))
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
		func_314(*uParam0);
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
							if ((uParam2->f_12 && !func_283(vVar2, fVar5, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_309(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_282(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_61(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_61(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_246(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar12 = func_274(vVar2, uParam2->f_54, &fVar13);
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
																		func_273(vVar2, fVar5, iVar6);
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
					func_271(0, uParam2);
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

void func_314(vector3 vParam0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_315(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_315(vector3 vParam0, float fParam3, float fParam4)
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

int func_316(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_317(vParam0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_256(vParam0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_28(iVar2, 0, 1) && func_28(iParam5, 0, 1))
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

int func_317(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	fVar0 = func_255(iParam3, 1008981770);
	fVar1 = func_255(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_318(vector3 vParam0)
{
	if (Global_2537071.f_883 && func_319(vParam0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_319(vector3 vParam0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_332(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_320(iVar1))
			{
				if (func_332(Global_1676377.f_488[iVar0], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	iVar0 = func_331(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_70())
	{
		if (Global_1590535[iVar1].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	if (func_330(unk_0xD803B885F5E47A62(), 0) || (func_327(unk_0xD803B885F5E47A62()) && func_325(func_326(unk_0xD803B885F5E47A62())) == 12))
	{
		return 1;
	}
	if (func_324(unk_0xD803B885F5E47A62()) || (func_327(unk_0xD803B885F5E47A62()) && func_325(func_326(unk_0xD803B885F5E47A62())) == 8))
	{
		return 1;
	}
	if (func_323(unk_0xD803B885F5E47A62()) || (func_327(unk_0xD803B885F5E47A62()) && func_325(func_326(unk_0xD803B885F5E47A62())) == 5))
	{
		return 1;
	}
	if (func_322(unk_0xD803B885F5E47A62()) || (func_327(unk_0xD803B885F5E47A62()) && func_325(func_326(unk_0xD803B885F5E47A62())) == 10))
	{
		return 1;
	}
	if (func_321(unk_0xD803B885F5E47A62()) || (func_327(unk_0xD803B885F5E47A62()) && func_325(func_326(unk_0xD803B885F5E47A62())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_70())
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_70())
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)
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

int func_326(int iParam0)
{
	if (iParam0 != func_70() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 != func_70() && func_28(iParam0, 1, 1))
	{
		if (func_329(iParam0) && !func_328(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	if (iParam0 != func_70() && func_28(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 != func_70() && func_28(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_330(int iParam0, bool bParam1)
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
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_70())
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_332(vector3 vParam0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_299(vParam0, &(Global_2409984[iVar0]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_333(vector3 vParam0, int iParam3)
{
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_351())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_350(vParam0);
		if (iVar1 > -1)
		{
			func_361();
			switch (iVar1)
			{
				case 0:
					func_349(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_349(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_349(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_349(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_349(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_349(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_349(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_349(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_349(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_349(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_349(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_349(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_349(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_349(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_349(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_349(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_349(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_349(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_349(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_349(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_349(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_349(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_349(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_349(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_349(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_349(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_349(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_349(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_349(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_349(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_349(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_349(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_349(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_349(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_349(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_349(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_349(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_349(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_349(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_349(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_349(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_349(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_349(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_349(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_349(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_349(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_349(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_349(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_349(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_349(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_349(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_349(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_349(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_347(78);
					break;
				
				case 11:
					func_347(79);
					break;
				
				case 12:
					func_347(82);
					break;
				
				case 13:
					func_347(81);
					break;
				
				case 14:
					func_347(73);
					break;
				
				case 15:
					func_349(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_349(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_349(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_349(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_347(75);
					break;
				
				case 17:
					func_347(76);
					break;
				
				case 18:
					func_347(77);
					break;
				
				case 19:
					func_349(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_349(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_349(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_349(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_347(80);
					break;
				
				case 21:
				case 25:
					func_347(87);
					break;
				
				case 22:
				case 26:
					func_347(88);
					break;
				
				case 23:
				case 27:
					func_347(89);
					break;
				
				case 24:
				case 28:
					func_347(90);
					break;
				
				case 29:
				case 30:
					if (func_346(iParam3))
					{
						func_347(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
					}
					break;
				
				case 31:
					func_349(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_349(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_349(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_349(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_349(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_349(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_349(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_349(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_349(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_349(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_349(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_349(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_349(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_349(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_349(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_349(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_349(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_349(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_349(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_349(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_349(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_349(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_349(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_349(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_349(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_349(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_349(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_349(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_349(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_349(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_349(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_349(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_349(-194,254f, -2018,756f, 26,62f, 75f);
					func_349(-186,956f, -2031,369f, 26,62f, 338f);
					func_349(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_349(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_349(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_349(-233,372f, -2089,601f, 26,62f, 304f);
					func_349(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_349(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_349(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_349(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_349(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_349(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_349(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_349(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_349(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_349(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_349(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_349(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_349(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_349(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_349(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_349(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_343(vParam0, &iVar2, &iVar6) || (func_319(vParam0, &(iVar2[0])) && (unk_0xC41A9202669A24C4(iParam3) || unk_0xAFB8495D36825275(iParam3))))
		{
			func_361();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_342(iVar2[iVar0], -1))
				{
					if (func_346(iParam3))
					{
						func_347(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_341(unk_0x16F2683693E537C9()) || func_340(unk_0x16F2683693E537C9())) && unk_0xC41A9202669A24C4(iParam3)) || unk_0xAFB8495D36825275(iParam3))
					{
						if (func_339(iParam3))
						{
							func_338(iVar2[iVar0]);
						}
						else if (func_337(iParam3))
						{
							func_336(iVar2[iVar0]);
							func_338(iVar2[iVar0]);
						}
						else
						{
							func_336(iVar2[iVar0]);
							func_338(iVar2[iVar0]);
						}
					}
					else
					{
						func_334(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_347(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_334(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_349(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_349(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_349(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_349(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_349(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_349(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_349(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_349(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_349(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_349(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_349(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_349(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_349(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_349(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_349(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_349(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_349(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_349(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_349(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_349(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_349(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_349(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_349(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_349(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_349(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_349(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_349(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_349(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_349(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_349(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_349(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_349(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_349(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_349(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_349(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_349(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_349(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_349(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_349(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_349(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_349(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_349(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_349(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_349(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_349(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_349(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_349(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_349(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_349(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_349(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_349(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_349(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_349(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_349(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_349(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_349(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_349(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_349(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_349(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_349(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_349(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_349(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_349(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_349(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_349(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_349(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_349(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_349(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_349(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_349(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_349(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_349(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_349(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_349(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_349(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_349(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_349(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_349(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_349(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_349(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_349(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_349(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_349(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_349(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_349(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_349(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_349(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_349(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_349(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_349(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_349(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_349(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_349(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_349(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_349(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_349(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_349(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_349(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_349(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_349(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_349(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_349(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_349(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_349(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_349(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_349(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_349(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_349(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_349(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_349(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_349(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_349(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_349(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_349(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_349(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_349(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_349(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_349(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_349(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_349(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_349(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_349(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_349(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_349(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_349(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_349(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_349(142,7427f, -2536,147f, 5f, 205,0002f);
			func_349(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_349(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_349(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_349(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_349(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_349(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_349(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_349(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_349(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_349(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_349(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_349(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_349(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_349(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_349(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_349(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_349(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_349(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_349(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_349(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_349(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_349(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_349(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_349(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_349(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_349(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_349(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_349(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_349(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_349(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_349(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_349(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_349(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_349(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_349(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_349(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_349(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_349(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_349(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_349(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_349(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_349(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_349(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_349(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_349(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_349(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_349(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_349(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_349(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_349(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_349(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_349(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_349(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_349(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_349(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_349(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_349(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_349(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_349(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_349(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_349(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_349(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_349(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_349(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_349(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_349(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_349(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_349(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_349(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_349(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_349(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_349(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_349(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_349(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_349(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_349(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_349(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_349(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_349(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_349(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_349(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_349(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_349(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_349(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_349(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_349(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_349(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_349(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_349(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_349(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_349(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_349(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_349(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_349(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_349(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_349(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_349(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_349(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_349(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_349(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_349(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_349(-1823,414f, 3092,762f, 31,843f, 330f);
			func_349(-1819,045f, 3100,435f, 31,845f, 330f);
			func_349(-1833,313f, 3075,722f, 31,838f, 330f);
			func_349(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_349(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_349(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_349(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_349(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_349(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_349(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_349(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_349(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_349(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_349(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_349(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_349(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_349(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_349(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_349(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_349(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_349(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_349(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_349(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_349(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_349(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_349(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_349(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_349(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_349(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_349(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_349(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_349(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_349(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_349(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_349(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_349(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_349(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_349(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_349(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_349(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_349(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_349(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_349(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_349(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_349(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_349(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_349(1231,279f, 2910,881f, 43,3085f, 12f);
				func_349(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_349(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_349(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_349(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_349(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_349(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_349(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_349(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_349(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_349(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_349(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_349(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_349(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_349(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_349(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_349(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_349(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_349(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_349(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_349(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_349(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_349(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_349(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_349(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_349(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_349(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_349(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_349(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_349(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_349(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_349(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_349(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_349(3,855f, 2672,388f, 78,437f, 319,2f);
				func_349(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_349(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_349(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_349(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_349(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_349(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_349(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_349(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_349(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_349(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_349(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_349(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_349(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_349(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_349(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_349(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_349(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_349(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_349(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_349(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_349(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_349(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_349(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_349(102,851f, 2688,009f, 51,732f, 224f);
				func_349(109,815f, 2681,012f, 51,112f, 224f);
				func_349(116,355f, 2674,26f, 50,529f, 224f);
				func_349(125,138f, 2665,98f, 49,8f, 224f);
				func_349(132,228f, 2659,865f, 49,26f, 228,4f);
				func_349(139,354f, 2653,536f, 48,737f, 228,4f);
				func_349(88,512f, 2702,995f, 53,042f, 224,199f);
				func_349(81,565f, 2710,357f, 53,67f, 224,199f);
				func_349(75,156f, 2716,981f, 54,223f, 224,199f);
				func_349(68,442f, 2723,806f, 54,775f, 226,199f);
				func_349(61,449f, 2730,606f, 55,308f, 226,199f);
				func_349(53,702f, 2738,167f, 55,855f, 226,199f);
				func_349(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_349(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_349(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_349(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_349(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_349(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_349(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_349(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_349(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_349(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_349(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_349(2714,633f, 3918,283f, 42,938f, 16f);
				func_349(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_349(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_349(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_349(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_349(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_349(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_349(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_349(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_349(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_349(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_349(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_349(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_349(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_349(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_349(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_349(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_349(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_349(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_349(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_349(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_349(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_349(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_349(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_349(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_349(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_349(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_349(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_349(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_349(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_349(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_349(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_349(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_349(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_349(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_349(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_349(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_349(3374,923f, 5520,177f, 20,3207f, 86f);
				func_349(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_349(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_349(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_349(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_349(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_349(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_349(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_349(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_349(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_349(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_349(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_349(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_349(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_349(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_349(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_349(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_349(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_349(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_349(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_349(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_349(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_349(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_349(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_349(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_349(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_349(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(43,848f, 6845,657f, 13,379f, 247,2f);
				func_349(50,379f, 6861,146f, 15,105f, 247,2f);
				func_349(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_349(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_349(55,806f, 6875,081f, 14,824f, 247,2f);
				func_349(11,616f, 6877,079f, 11,466f, 247,2f);
				func_349(18,954f, 6891,633f, 11,37f, 247,2f);
				func_349(26,68f, 6907,587f, 11,869f, 247,2f);
				func_349(7,479f, 6907,895f, 12,024f, 247,2f);
				func_349(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_349(35,591f, 6836,608f, 13,288f, 274,4f);
				func_349(36,028f, 6830,135f, 13,801f, 270,8f);
				func_349(35,114f, 6823,884f, 14,527f, 260,8f);
				func_349(48,779f, 6838,693f, 14,337f, 273,6f);
				func_349(56,738f, 6821,8f, 15,244f, 244,8f);
				func_349(48,377f, 6825,895f, 14,656f, 249,8f);
				func_349(49,11f, 6831,439f, 13,991f, 274,8f);
				func_349(53,544f, 6818,275f, 16,342f, 243f);
				func_349(46,162f, 6821,945f, 15,483f, 249,8f);
				func_349(60,129f, 6836,8f, 15,605f, 269,6f);
				func_349(40,88f, 6802,952f, 20,113f, 242,6f);
				func_349(48,203f, 6799,134f, 20,897f, 244,4f);
				func_349(70,449f, 6809,271f, 16,846f, 243f);
				func_349(61,436f, 6814,266f, 16,71f, 244,2f);
				func_349(56,142f, 6793,458f, 19,806f, 242,6f);
				func_349(65,759f, 6791,12f, 18,433f, 276,4f);
				func_349(77,305f, 6805,391f, 18,558f, 245,6f);
				func_349(85,893f, 6800,243f, 18,535f, 249,8f);
				func_349(56,85f, 6780,582f, 18,822f, 297,999f);
				func_349(65,636f, 6784,669f, 18,789f, 293,799f);
				func_349(74,121f, 6788,498f, 18,739f, 293,799f);
				func_349(97,779f, 6796,32f, 19,02f, 276,799f);
				func_349(106,76f, 6796,983f, 18,914f, 272,599f);
				func_349(112,387f, 6802,858f, 18,994f, 210,599f);
				func_349(117,58f, 6802,644f, 18,663f, 209,399f);
				func_349(122,481f, 6802,693f, 18,468f, 209,399f);
				func_349(127,182f, 6802,686f, 18,218f, 209,399f);
				func_349(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_349(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_349(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_349(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_349(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_349(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_349(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_349(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_349(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_349(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_349(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_349(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_349(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_349(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_349(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_349(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_349(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_349(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_349(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_349(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_349(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_349(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_349(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_349(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_349(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_349(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_349(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_349(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_349(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_349(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_349(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_349(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_349(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_349(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_349(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_349(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_349(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_349(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_349(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_349(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_349(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_349(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_349(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_349(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_349(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_349(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_349(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_349(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_349(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_349(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_349(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_349(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_349(30,027f, 3292,351f, 38,604f, 140,199f);
				func_349(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_349(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_349(23,897f, 3283,152f, 39,381f, 145,399f);
				func_349(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_349(18,723f, 3274,025f, 40,054f, 155,799f);
				func_349(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_349(36,958f, 3298,847f, 38,001f, 127,799f);
				func_349(54,165f, 3311,582f, 36,517f, 303,799f);
				func_349(61,607f, 3317,105f, 35,916f, 306,999f);
				func_349(68,994f, 3323,129f, 35,364f, 308,199f);
				func_349(76,266f, 3329,467f, 34,805f, 311,399f);
				func_349(82,757f, 3335,915f, 34,344f, 316,598f);
				func_349(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_349(14,664f, 3263,688f, 40,931f, 160,398f);
				func_349(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_349(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_349(89,575f, 3343,311f, 33,932f, 318,398f);
				func_349(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_349(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_349(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_349(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_349(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_349(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_349(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_349(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_349(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_349(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_349(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_349(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_349(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_349(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_349(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_349(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_349(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_349(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_349(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_349(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_349(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_349(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_349(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_349(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_349(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_349(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_349(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_349(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_349(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_349(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_349(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_349(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_349(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_349(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_349(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_349(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_349(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_349(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_349(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_349(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_349(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_349(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_349(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_349(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_349(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_349(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_349(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_349(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_349(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_349(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_349(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_349(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_349(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_349(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_349(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_349(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_349(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_349(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_349(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_349(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_349(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_349(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_349(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_349(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_349(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_349(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_349(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_349(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_349(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_349(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_349(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_349(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_349(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_349(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_349(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_349(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_349(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_349(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_349(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_349(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_335(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_335(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_335(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_335(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_335(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_335(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_335(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_335(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_335(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_335(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_335(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_335(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_335(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_335(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_335(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_335(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_335(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_335(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_335(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_335(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_335(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_335(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_335(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_335(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_335(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_335(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_335(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_335(vector3 vParam0, float fParam3, int iParam4, bool bParam5)
{
	if (!iParam4 == 0)
	{
		func_249(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		vVar7 = { 0f, fVar6, 0f };
		vVar10 = { unk_0x8A5E176FF719A014(vParam0, fParam3, vVar7) };
		func_349(vVar10, fParam3);
	}
	else
	{
		func_349(vParam0, fParam3);
	}
}

void func_336(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_349(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_349(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_349(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_349(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_349(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_349(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_349(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_349(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_349(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_349(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_349(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_349(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_349(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_349(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_349(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_349(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_349(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_349(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_349(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_349(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_349(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_349(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_349(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_349(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_349(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_349(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_349(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_349(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_349(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_349(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_349(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_349(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_349(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_349(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_349(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_349(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_349(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_349(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_349(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_349(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_349(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_349(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_349(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_349(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_349(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_349(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_349(-1356,991f, -3242,228f, 12,945f, 330f);
			func_349(-1369,313f, -3234,758f, 12,945f, 330f);
			func_349(-1381,751f, -3227,408f, 12,945f, 330f);
			func_349(-1394,302f, -3220,021f, 12,945f, 330f);
			func_349(-1354,339f, -3223,129f, 12,945f, 330f);
			func_349(-1366,302f, -3215,809f, 12,945f, 330f);
			func_349(-1378,492f, -3208,645f, 12,945f, 330f);
			func_349(-1350,322f, -3203,405f, 12,945f, 330f);
			func_349(-1362,684f, -3196,451f, 12,945f, 330f);
			func_349(-1347,089f, -3182,69f, 12,945f, 330f);
			func_349(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_349(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_349(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_349(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_349(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_349(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_349(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_349(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_349(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_349(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_349(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_349(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_349(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_349(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_349(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_349(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_349(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_349(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_349(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_349(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_349(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_349(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_349(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_349(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_349(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_349(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_349(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_349(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_349(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_349(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_349(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_349(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_349(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_349(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_349(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_349(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_349(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_349(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_349(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_349(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_349(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_349(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_349(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_349(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_349(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_349(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_349(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_349(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_349(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_349(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_349(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_349(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_349(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_349(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_349(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_349(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_349(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_349(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_349(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_349(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_349(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_349(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_349(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_349(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_349(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_349(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_349(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_349(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_349(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_349(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_349(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_349(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_349(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_349(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_349(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_349(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_349(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_349(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_349(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_349(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_349(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_349(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_349(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_349(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_349(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_349(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_349(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_349(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_349(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_349(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_349(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_349(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_349(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_349(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_349(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_349(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_349(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_349(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_349(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_349(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_349(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_349(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_349(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_349(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_349(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_349(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_349(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_349(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_349(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_349(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_349(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_349(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_349(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_349(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_349(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_349(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_349(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_349(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_349(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_349(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_349(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_349(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_349(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_349(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_349(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_349(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_349(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_349(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_349(-2484,323f, 3249,294f, 31,828f, 151f);
			func_349(-2495,313f, 3255,746f, 31,828f, 151f);
			func_349(-2472,644f, 3242,684f, 31,828f, 151f);
			func_349(-2506,313f, 3262,27f, 31,823f, 151f);
			func_349(-2461,494f, 3235,93f, 31,828f, 151f);
			func_349(-2505,602f, 3238,049f, 31,828f, 151f);
			func_349(-2481,937f, 3224,8f, 31,828f, 151f);
			func_349(-2516,813f, 3244,266f, 31,823f, 151f);
			func_349(-2470,03f, 3217,899f, 31,828f, 151f);
			func_349(-2493,933f, 3231,308f, 31,828f, 151f);
			func_349(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_349(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_349(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_349(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_349(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_349(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_349(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_349(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_349(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_349(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_349(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_349(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_349(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_349(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_349(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_349(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_349(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_349(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_349(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_349(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_349(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_349(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_349(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_349(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_349(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_349(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_349(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_349(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_349(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_349(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_349(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_349(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_349(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_349(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_349(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_349(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
		case -1984275979:
		case -392675425:
		case -975345305:
		case -1386191424:
		case 788747387:
		case 744705981:
		case -1660661558:
		case 710198397:
		case -1671539132:
		case -1845487887:
		case -644710429:
		case 1824333165:
		case 970356638:
		case -2122757008:
		case -1673356438:
		case 1077420264:
		case 1341619767:
		case -1281684762:
		case -1523619738:
		case -1007528109:
		case 1565978651:
		case 1036591958:
		case -1700874274:
			return 1;
		
		default:
	}
	return 0;
}

void func_338(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_349(-947,712f, -3367,704f, 12,944f, 60f);
			func_349(-904,692f, -3293,072f, 12,944f, 60f);
			func_349(-863,71f, -3221,978f, 12,944f, 60f);
			func_349(-966,418f, -3162,773f, 12,944f, 60f);
			func_349(-1007,435f, -3233,93f, 12,944f, 60f);
			func_349(-1050,455f, -3308,559f, 12,944f, 60f);
			func_349(-1145,673f, -3253,456f, 12,944f, 60f);
			func_349(-1098,386f, -3181,428f, 12,944f, 60f);
			func_349(-1060,474f, -3108,903f, 12,944f, 60f);
			func_349(-1155,391f, -3053,632f, 12,944f, 60f);
			func_349(-1196,114f, -3125,146f, 12,948f, 60f);
			func_349(-1235,552f, -3201,86f, 12,944f, 60f);
			func_349(-1344,446f, -3139,177f, 12,944f, 60f);
			func_349(-1301,308f, -3064,341f, 12,944f, 60f);
			func_349(-1260,135f, -2992,912f, 12,944f, 60f);
			func_349(-1364,244f, -2932,9f, 12,98f, 60f);
			func_349(-1405,284f, -3004,108f, 12,96f, 60f);
			func_349(-1448,29f, -3078,72f, 12,95f, 60f);
			func_349(-1535,732f, -3028,318f, 12,945f, 60f);
			func_349(-1492,639f, -2953,558f, 12,945f, 60f);
			func_349(-1451,506f, -2882,2f, 12,944f, 60f);
			func_349(-1553,927f, -2823,12f, 13,002f, 60f);
			func_349(-1595,097f, -2894,571f, 12,944f, 60f);
			func_349(-1637,836f, -2968,714f, 12,945f, 60f);
			func_349(-1740,971f, -2911,484f, 12,944f, 330f);
			func_349(-1696,293f, -2833,978f, 12,944f, 330f);
			func_349(-1651,502f, -2756,273f, 12,945f, 330f);
			func_349(-1588,258f, -2647,575f, 12,944f, 330f);
			func_349(-1536,862f, -2681,378f, 12,945f, 330f);
			func_349(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_349(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_349(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_349(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_349(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_349(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_349(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_349(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_349(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_349(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_349(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_349(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_349(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_349(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_349(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_349(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_349(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_349(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_349(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_349(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_349(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_349(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_349(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_349(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_349(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_349(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_349(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_349(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_349(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_349(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_349(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 970385471:
		case -901163259:
		case -1746576111:
		case 837858166:
		case 1043222410:
		case -42959138:
		case -749299473:
		case -50547061:
		case 1621617168:
		case -1214505995:
		case -82626025:
		case 621481054:
		case -1214293858:
		case -1295027632:
		case -339587598:
		case 1075432268:
		case -1600252419:
		case 1981688531:
		case 1044954915:
		case 165154707:
		case -32878452:
		case 447548909:
			return 1;
		
		default:
	}
	return 0;
}

int func_340(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, 1), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, 1), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_343(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049922[iVar0].f_3[iVar1], Global_1049922[iVar0].f_3[iVar1].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_320(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_344(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	iVar0 = func_345(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_70())
	{
		if (Global_1590535[iVar1].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	if ((unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0)) || unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_347(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_349(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_349(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_349(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_349(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case 79:
			func_349(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_349(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_349(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_349(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_349(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_349(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_349(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_349(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_349(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_349(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_349(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_349(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_349(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_349(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_349(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_349(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_349(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_349(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_349(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_349(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_349(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_349(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_349(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_349(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_349(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_349(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_349(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_349(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_349(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_349(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_349(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_349(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_348())
			{
				func_349(-1608,297f, -556,875f, 33,406f, 310f);
				func_349(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_349(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_349(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_349(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_349(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_349(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_349(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_349(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_349(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_349(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_349(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_348())
			{
				func_349(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_349(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_349(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_349(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_349(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_349(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_349(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_349(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_349(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_349(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_349(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_349(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_348())
			{
				func_349(-102,737f, -597,379f, 35,053f, 160,999f);
				func_349(-97,793f, -589,568f, 35,082f, 134,799f);
				func_349(-110,357f, -619,402f, 35,055f, 160,599f);
				func_349(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_349(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_349(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_349(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_349(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_349(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_349(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_349(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_349(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_348())
			{
				func_349(-59,349f, -779,238f, 43,134f, 228,398f);
				func_349(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_349(-65,212f, -772,66f, 43,151f, 219,398f);
				func_349(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_349(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_349(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_349(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_349(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_349(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_349(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_349(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_349(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_349(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_349(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_349(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_349(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_349(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_349(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_349(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_349(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_349(-1464,5f, -927,9f, 9f, 296,7991f);
			func_349(-1466f, -926,1f, 9f, 296,7991f);
			func_349(-1467,9f, -924,7f, 9f, 296,7991f);
			func_349(-1469,7f, -923,7f, 9f, 296,7991f);
			func_349(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_349(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_349(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_349(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_349(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_349(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_349(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_349(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_349(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_349(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_349(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_349(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_349(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_349(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_349(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_349(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_349(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_349(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_349(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_349(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_349(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_349(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_349(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_349(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_349(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_349(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_349(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_349(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_349(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_349(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_349(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_349(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_349(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_349(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_349(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_349(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_349(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_349(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_349(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_349(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_349(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_349(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_349(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_349(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_349(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_349(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_349(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_349(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_349(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_349(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_349(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_349(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_349(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_349(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_349(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_349(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_349(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_349(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_349(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_349(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_349(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_349(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_349(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_349(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_349(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_349(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_349(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_349(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_349(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_349(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_349(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_349(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_349(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_349(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_349(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_349(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_349(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_349(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_349(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_349(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_349(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_349(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_349(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_349(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_348()
{
	return Global_2450632.f_15;
}

void func_349(vector3 vParam0, float fParam3)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (vmag(vParam0) <= 0,01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746] = { vParam0 };
		Global_2405072.f_1747[Global_2405072.f_1746].f_3 = fParam3;
		Global_2405072.f_1746++;
	}
}

int func_350(vector3 vParam0)
{
	if (vdist(Global_2405072.f_2895, vParam0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.z = ((Global_2412235[iVar0].f_2 + Global_2412235[iVar0].f_3.f_2) * 0,5f);
		}
		if (func_295(vParam0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_351()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_352(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_320(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_353()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_354(var uParam0, bool bParam1)
{
	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = ((Global_2412191[iVar0].f_2 + Global_2412191[iVar0].f_3.f_2) * 0,5f);
		}
		if (func_295(vVar1, &(Global_2412191[iVar0])))
		{
			if (bParam1)
			{
				func_306(&vVar1, Global_2412191[iVar0], Global_2412191[iVar0].f_3, Global_2412191[iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_355(vector3 vParam0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_359(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_358(vParam0, 1008981770))
			{
				if (!func_312(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_312(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_357(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_356(&(Global_2405072.f_45[iVar0])) };
					if (!func_312(&vVar1, 0, 0, 0, 1))
					{
						if (!func_312(&vParam0, 0, 0, 0, 1))
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

Vector3 func_356(var uParam0)
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

int func_357(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_299(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_358(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_299(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_359(int iParam0, bool bParam1)
{
	if (func_159() != 0)
	{
		return func_360(iParam0) != 0;
	}
	return func_277(iParam0, bParam1, 0);
}

int func_360(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

void func_361()
{
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_362()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1727A44C562FBED2(Global_2405072.f_684[iVar0]))
		{
			if (unk_0x0D0A574C76D769AC() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_680[iVar0]))
					{
						unk_0xBD63401BCCEC233B(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_363(bool bParam0)
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

int func_364(int iParam0)
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

int func_365(int iParam0)
{
	if (!func_109(1, iParam0))
	{
		return 0;
	}
	if (Local_220.f_75.f_1[iParam0].f_9 != -1)
	{
		if (!func_102(Local_220.f_75.f_1[iParam0].f_9) || !func_11(&(Local_1164.f_130), 2000, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_366(int iParam0)
{
	return 1;
}

int func_367(int iParam0)
{
	if (Local_407.f_188.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_11);
		return StackVal;
	}
	return 1;
}

void func_368(int iParam0)
{
	if (!func_137(iParam0, 13))
	{
		return;
	}
	if (func_375(iParam0) > 2 && func_375(iParam0) < 5)
	{
		if (func_369(iParam0))
		{
			func_134(iParam0, 2);
		}
		else
		{
			func_133(iParam0, 2);
		}
	}
}

bool func_369(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[iParam0]))
	{
		iVar0 = unk_0xB177666FAB6F4417(Local_1164.f_69[iParam0]);
		iVar1 = func_372(iVar0);
		if (iVar1 != func_70() && unk_0xFB75B0F82CA525F6(iVar1))
		{
			iVar2 = unk_0x7B9C1F53FE442D06(iVar1);
			return func_371(iVar2, 2);
		}
	}
	return func_370(iParam0, 2);
}

bool func_370(int iParam0, int iParam1)
{
	return func_4(&(Local_1164.f_69[iParam0].f_2), iParam1);
}

bool func_371(int iParam0, int iParam1)
{
	return func_4(&(Local_1311[iParam0].f_1), iParam1);
}

int func_372(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0) && !unk_0xBBA8A868118C90ED(iParam0, -1, 0))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (!unk_0xEB6A8945D1AC98A1(iVar0))
		{
			iVar1 = unk_0x83FACCC48B68F9D1(iVar0);
			if (iVar1 != func_70() && func_28(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_70();
}

int func_373(int iParam0, int iParam1)
{
	return 0;
}

void func_374(int iParam0, int iParam1)
{
	Local_1164.f_69[iParam0].f_1 = iParam1;
}

int func_375(int iParam0)
{
	return Local_1164.f_69[iParam0].f_1;
}

int func_376(int iParam0, int iParam1)
{
	if (iParam1 != func_47())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (iParam0 == func_45(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_377(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_378(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_70()) && func_28(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_378(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xD1960163A3042274(iVar0, 451360105) == 1 || unk_0xD1960163A3042274(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x68F4C0EC296D3901(iParam0, 0), unk_0x68F4C0EC296D3901(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_379()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_389(iVar0);
		func_385(iVar0);
		iVar0++;
	}
	func_380();
}

void func_380()
{
	if (Local_220.f_10 <= 0)
	{
		return;
	}
	if (!func_384())
	{
		return;
	}
	if (func_383())
	{
		if (func_382())
		{
			func_10(4);
		}
	}
	else if (func_381())
	{
		func_10(4);
	}
}

int func_381()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_382()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_383()
{
	return func_48(0);
}

int func_384()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_385(int iParam0)
{
	if (func_6(iParam0, 29) && func_388(iParam0))
	{
		if (func_387(iParam0))
		{
			func_386(iParam0, 29);
		}
	}
}

void func_386(int iParam0, int iParam1)
{
	if (func_124(&(Local_1164.f_2.f_5[iParam0]), iParam1))
	{
	}
}

int func_387(int iParam0)
{
	if (func_388(iParam0))
	{
		iVar0 = func_45(iParam0);
		return (Local_1164.f_69[iVar0].f_1 == 5 || func_6(iParam0, 49));
	}
	return 1;
}

bool func_388(int iParam0)
{
	return (func_46(iParam0) && func_47() == 2);
}

void func_389(int iParam0)
{
	if (Local_220.f_10.f_5[iParam0].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_11);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_99(Local_220.f_10.f_5[iParam0].f_2))
				{
					if (unk_0x4CC720B42A6F53CA(1))
					{
						if (func_390(iParam0))
						{
							func_44(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

int func_390(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_1164.f_2[iParam0]))
	{
		vVar0 = { func_408(iParam0) };
		fVar3 = Local_220.f_10.f_5[iParam0].f_6;
		vVar4 = { Local_220.f_10.f_5[iParam0].f_7 };
		if (func_31(vVar0))
		{
			return 0;
		}
		Local_1164.f_2[iParam0] = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(-1863327941, vVar0, !func_407(iParam0, 0), Local_220.f_10.f_5[iParam0].f_2));
		unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), fVar3);
		if (!func_31(vVar4))
		{
			unk_0xC023D1C4BF532815(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), vVar4, 2, 1);
		}
		func_402(iParam0, vVar0);
		if (Local_407.f_54.f_14 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_54.f_14);
		}
	}
	if (Local_1164.f_2.f_20 != func_401())
	{
		Local_1164.f_2.f_20 = func_401();
	}
	if (unk_0xE9F78D191AD5EDBA(Local_1164.f_2[iParam0]))
	{
		if (func_391(&(Local_1164.f_2.f_15[iParam0]), func_400(iParam0), iParam0, Local_1164.f_2.f_20, Local_1164.f_145, func_399(iParam0), func_398(iParam0)))
		{
			Local_1164.f_2.f_13[iParam0] = unk_0xDD0E7998AE8AD485();
			return 1;
		}
	}
	return 0;
}

int func_391(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, var uParam6, var uParam7)
{
	if (iParam1 == func_70())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1681961.f_4713, 31))
	{
		iVar1 = (Global_1681961.f_4714 - 1);
		if (unk_0xF4CCC8CB6DE7F1AE() == iVar1)
		{
			return 0;
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1681961.f_4713), 31);
		}
	}
	if (Global_1681961.f_4714 == 0)
	{
		Global_1681961.f_4714 = unk_0xF4CCC8CB6DE7F1AE();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1681961.f_4715[iVar0] = -1;
			iVar0++;
		}
	}
	uVar2 = func_397(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar2;
	if (func_395(*uParam0))
	{
		if (Global_1681961.f_4714 == unk_0xF4CCC8CB6DE7F1AE())
		{
			unk_0x5D96D8530B3D0904(&(Global_1681961.f_4713), iParam2);
			unk_0x5D96D8530B3D0904(&(Global_1681961.f_4713), 31);
			Global_1681961.f_4714++;
			return 0;
		}
		else
		{
			func_394(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1681961.f_4715[iParam2] == -1)
	{
		Global_1681961.f_4715[iParam2] = uVar2;
	}
	if (!func_13(&(Global_1681961.f_4540)) || func_11(&(Global_1681961.f_4540), 1500, 0))
	{
		bVar3 = true;
		func_16(&(Global_1681961.f_4540), 0, 0);
	}
	if (!bVar3)
	{
		if (unk_0xF4CCC8CB6DE7F1AE() == Global_1681961.f_4542)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		func_392(*uParam0, uParam3, uParam6, Param4, uParam7);
		Global_1681961.f_4542 = unk_0xF4CCC8CB6DE7F1AE();
	}
	return 0;
}

void func_392(struct<2> Param0, var uParam2, var uParam3, struct<2> Param4, var uParam6)
{
	if (!func_393(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1000;
	Var0 = 26071989;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0 };
	Var0.f_4 = uParam2;
	Var0.f_8 = uParam3;
	Var0.f_5 = uParam6;
	Var0.f_6 = { Param4 };
	iVar9 = func_24(1, 1);
	if (!iVar9 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 9, iVar9);
	}
}

int func_393(struct<2> Param0)
{
	if (Param0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

void func_394(var uParam0, var uParam1, char* sParam2)
{
}

int func_395(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0].f_1.f_1 != -1 && func_396(Global_2419327.f_199.f_1[iVar0].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_396(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_397(int iParam0, int iParam1)
{
	iVar0 = unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(iParam0));
	if (Global_1681961.f_4715[iParam1] != -1)
	{
		return Global_1681961.f_4715[iParam1];
	}
	iVar1 = 0;
	while (iVar1 < 31)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1681961.f_4713, iVar1))
		{
			unk_0x5D96D8530B3D0904(&(Global_1681961.f_4713), iVar1);
			return (iVar0 + iVar1);
		}
		iVar1++;
	}
	return -1;
}

int func_398(int iParam0)
{
	return 0;
}

int func_399(int iParam0)
{
	return 1;
}

int func_400(int iParam0)
{
	return iLocal_1110;
}

int func_401()
{
	return 24;
}

void func_402(int iParam0, vector3 vParam1)
{
	func_406(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), Local_1164.f_2.f_15[iParam0].f_1);
	if (func_46(iParam0))
	{
		func_44(iParam0, 29);
		if (iParam0 != func_405(func_45(iParam0)))
		{
			func_44(iParam0, 50);
		}
	}
	else
	{
		func_44(iParam0, 39);
	}
	unk_0xF4F945BB00F6E31C(Local_1164.f_2[iParam0], 1);
	unk_0x25BD67336EA4AECE(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1200);
	unk_0xD458AC1C1D29C3B4(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 50, 0);
	unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), true);
	unk_0xAA6B3A4292417750(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0xE8832A9E16A57A1F(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), 1, 1);
	unk_0x120A395B0ECB8EA5(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), true);
	unk_0xC6C861E67FF442D8(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1);
	unk_0xEDD4DD1B0A096072(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1);
	if (func_404(iParam0))
	{
		unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), true);
	}
	else
	{
		func_44(iParam0, 28);
	}
	if (!func_407(iParam0, 1))
	{
		unk_0x06C218569D523F79(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]));
	}
	if (func_407(iParam0, 2))
	{
		unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), vParam1, 1, false, 0, 1);
	}
	if (func_407(iParam0, 3))
	{
		unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]));
		unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1);
	}
	if (func_407(iParam0, 4))
	{
		unk_0xEF190091B5B9F5EB(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), 1);
	}
	if ((func_407(iParam0, 6) || func_407(iParam0, 7)) || func_46(iParam0))
	{
		unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), false, 0);
	}
	if (func_407(iParam0, 8))
	{
		unk_0x271603AF9C0C7EB3(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), true);
		func_44(iParam0, 23);
	}
	else
	{
		func_44(iParam0, 40);
	}
	if (func_407(iParam0, 9))
	{
		func_403(iParam0, 1, 0);
	}
}

void func_403(int iParam0, int iParam1, int iParam2)
{
	unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), iParam1, iParam2);
}

bool func_404(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return 0;
	}
	return !func_407(iParam0, 5);
}

int func_405(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (Local_1164.f_2.f_11[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_406(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		unk_0xB7E567188872123E(iParam0, "FMDeliverableID", iParam1);
	}
}

bool func_407(int iParam0, int iParam1)
{
	return func_4(&(Local_220.f_10.f_5[iParam0]), iParam1);
}

Vector3 func_408(int iParam0)
{
	if (func_388(iParam0))
	{
		return Local_220.f_75.f_1[func_45(iParam0)].f_4 + func_409(iParam0, Local_220.f_75.f_1[func_45(iParam0)].f_3);
	}
	else if (!func_31(Local_220.f_10.f_5[iParam0].f_3))
	{
		return Local_220.f_10.f_5[iParam0].f_3;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_54.f_12);
	return StackVal, StackVal, StackVal;
}

Vector3 func_409(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1924433270:
		case -114627507:
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0,1f;
				
				case 1:
					return -1f, -2f, -0,1f;
				
				case 2:
					return 1f, -2f, -0,1f;
				
				case 3:
					return -1f, -2f, -0,1f;
				
				default:
			}
			break;
		
		case 931280609:
		case -431692672:
		case -674927303:
			switch (iParam0)
			{
				case 0:
					return 0,5f, 0f, -0,1f;
				
				case 1:
					return -0,5f, 0f, -0,1f;
				
				case 2:
					return 0,5f, 0f, -0,1f;
				
				case 3:
					return -0,5f, 0f, -0,1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0,1f;
		
		case 1:
			return -1f, 0f, -0,1f;
		
		case 2:
			return 1f, 0f, -0,1f;
		
		case 3:
			return -1f, 0f, -0,1f;
		
		default:
	}
	return 0f, -1f, -0,1f;
}

int func_410()
{
	return Local_1164.f_104;
}

void func_411(int iParam0)
{
	Local_1164.f_103 = iParam0;
}

int func_412()
{
	if (!func_534(func_538(), func_537()))
	{
		return 0;
	}
	if (!func_423())
	{
		return 0;
	}
	func_422();
	func_421();
	Local_1164.f_121 = unk_0x88D20249AE06D0D5(func_420(), -1, 0);
	func_418();
	func_417();
	func_415();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1164.f_83[iVar0] = -1;
		iVar0++;
	}
	Local_1164.f_124 = unk_0x09AC81E49EA267F7(0, 99999999);
	Local_1164.f_110 = func_414();
	unk_0xCB466C2A425A9168(&(Local_1164.f_118), &(Local_1164.f_119));
	Global_1628237[iLocal_1110].f_549 = Local_1164.f_118;
	Global_1628237[iLocal_1110].f_550 = Local_1164.f_119;
	Local_1164.f_125 = unk_0xDD0E7998AE8AD485();
	if (!func_413())
	{
		return 0;
	}
	Call_Loc(Local_407.f_1);
	return StackVal;
}

int func_413()
{
	return 1;
}

int func_414()
{
	return -1;
}

void func_415()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		Local_1164.f_24[iVar0].f_15 = func_416(iVar0);
		iVar0++;
	}
}

int func_416(int iParam0)
{
	if (Local_220.f_28.f_1[iParam0].f_16 == -1)
	{
		Local_220.f_28.f_1[iParam0].f_16 = 1500;
	}
	return unk_0x09AC81E49EA267F7(0, Local_220.f_28.f_1[iParam0].f_16);
}

void func_417()
{
	Local_1164.f_108 = 2;
}

void func_418()
{
	if (func_419())
	{
		if (func_35(&(Local_1164.f_2.f_11), &(Local_1164.f_83.f_3)))
		{
			func_14(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_220.f_10)
		{
			Local_1164.f_2.f_11[iVar0] = Local_220.f_10.f_5[iVar0].f_10;
			iVar0++;
		}
	}
}

int func_419()
{
	return 0;
}

char* func_420()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_421()
{
}

void func_422()
{
}

int func_423()
{
	func_532();
	func_438();
	if (!func_424())
	{
		return 0;
	}
	Stack.Push(Local_407 != 0);
	Call_Loc(Local_407);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_424()
{
	if (func_437(12))
	{
		return 1;
	}
	if (!func_435())
	{
		return 0;
	}
	func_434();
	func_426();
	if (Local_407.f_8 != 0)
	{
		Call_Loc(Local_407.f_8);
	}
	func_425(12);
	return 1;
}

void func_425(int iParam0)
{
	if (func_15(&uLocal_1123, iParam0))
	{
	}
}

void func_426()
{
	Local_220.f_116[0] = { Local_220.f_75.f_1[0].f_4 };
	Local_220.f_116[0].f_3 = 200f;
	Local_220.f_116[0].f_6 = 0;
	Local_220.f_163 = 1;
	Local_220.f_163.f_1[0] = { Local_220.f_116[0] };
	Local_220.f_163.f_1[0].f_3 = 50f;
	Local_220.f_28.f_42[0].f_1[0] = 0;
	Local_220.f_75.f_1[0].f_3 = func_433();
	Local_220.f_92 = 1;
	Local_220.f_92.f_1[0].f_2 = func_431();
	Local_220.f_92.f_1[0].f_3 = { Local_220.f_75.f_1[0].f_4 + Vector(2f, 0f, 0f) };
	func_430(0, 25);
	func_430(0, 10);
	Local_220.f_108 = Global_262145.f_28847;
	Local_220.f_108.f_1 = 2;
	Local_220.f_114 = 1;
	Local_220.f_114.f_1 = 1;
	switch (func_429())
	{
		case 0:
			Local_220.f_144[0].f_2 = { -89,94799f, 6390,055f, 29,93431f };
			Local_220.f_144[0].f_5 = { -101,9842f, 6401,841f, 35,45411f };
			Local_220.f_144[0].f_8 = 7f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -89,94799f, 6390,055f, 29,93431f };
			Local_220.f_144[1].f_5 = { -101,9842f, 6401,841f, 35,45411f };
			Local_220.f_144[1].f_8 = 7f;
			func_428(1, 4);
			break;
		
		case 1:
			Local_220.f_144[0].f_2 = { 1672,032f, 4976,064f, 40,31322f };
			Local_220.f_144[0].f_5 = { 1661,465f, 4966,073f, 46,48217f };
			Local_220.f_144[0].f_8 = 7f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1672,032f, 4976,064f, 40,31322f };
			Local_220.f_144[1].f_5 = { 1661,465f, 4966,073f, 46,48217f };
			Local_220.f_144[1].f_8 = 7f;
			func_428(1, 4);
			break;
		
		case 2:
			Local_220.f_144[0].f_2 = { 2642,568f, 4250,916f, 42,78306f };
			Local_220.f_144[0].f_5 = { 2654,981f, 4258,502f, 46,76313f };
			Local_220.f_144[0].f_8 = 12f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 2642,568f, 4250,916f, 42,78306f };
			Local_220.f_144[1].f_5 = { 2654,981f, 4258,502f, 46,76313f };
			Local_220.f_144[1].f_8 = 12f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(2635,748f, 4246,718f, 43,797f, 5f, 0) };
			Local_220.f_129[0].f_4 = { func_427(2635,748f, 4246,718f, 43,797f, 5f, 1) };
			break;
		
		case 3:
			Local_220.f_144[0].f_2 = { 1442,678f, 3664,649f, 32,11233f };
			Local_220.f_144[0].f_5 = { 1426,806f, 3658,941f, 36,31281f };
			Local_220.f_144[0].f_8 = 12f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1442,678f, 3664,649f, 32,11233f };
			Local_220.f_144[1].f_5 = { 1426,806f, 3658,941f, 36,31281f };
			Local_220.f_144[1].f_8 = 12f;
			func_428(1, 4);
			break;
		
		case 4:
			Local_220.f_144[0].f_2 = { 854,9217f, 2854,431f, 55,28899f };
			Local_220.f_144[0].f_5 = { 864,2344f, 2845,936f, 59,53458f };
			Local_220.f_144[0].f_8 = 15f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 854,9217f, 2854,431f, 55,28899f };
			Local_220.f_144[1].f_5 = { 864,2344f, 2845,936f, 59,53458f };
			Local_220.f_144[1].f_8 = 15f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(853,628f, 2851,239f, 56,736f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(853,628f, 2851,239f, 56,736f, 10f, 1) };
			break;
		
		case 5:
			Local_220.f_144[0].f_2 = { -1895,457f, 2053,534f, 138,0014f };
			Local_220.f_144[0].f_5 = { -1906,918f, 2058,629f, 142,7384f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -1895,457f, 2053,534f, 138,0014f };
			Local_220.f_144[1].f_5 = { -1906,918f, 2058,629f, 142,7384f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-1902,063f, 2054,95f, 139,695f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-1902,063f, 2054,95f, 139,695f, 10f, 1) };
			Local_220.f_129[1] = 1;
			Local_220.f_129[1].f_1 = { -1898,637f, 2057,72f, 138,8846f };
			Local_220.f_129[1].f_4 = { -1906,704f, 2050,338f, 141,7384f };
			break;
		
		case 6:
			Local_220.f_144[0].f_2 = { 2316,228f, 2539,87f, 43,66768f };
			Local_220.f_144[0].f_5 = { 2300,958f, 2543,843f, 48,66581f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 2316,228f, 2539,87f, 43,66768f };
			Local_220.f_144[1].f_5 = { 2300,958f, 2543,843f, 48,66581f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 1;
			Local_220.f_129[0].f_1 = { 2314,457f, 2543,487f, 44,66768f };
			Local_220.f_129[0].f_4 = { 2303,023f, 2534,618f, 48,70819f };
			break;
		
		case 7:
			Local_220.f_144[0].f_2 = { -2229,237f, 4223,524f, 43,87252f };
			Local_220.f_144[0].f_5 = { -2222,944f, 4234,329f, 48,98861f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -2229,237f, 4223,524f, 43,87252f };
			Local_220.f_144[1].f_5 = { -2222,944f, 4234,329f, 48,98861f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			break;
		
		case 8:
			Local_220.f_144[0].f_2 = { -2952,996f, 413,3346f, 12,21769f };
			Local_220.f_144[0].f_5 = { -2955,707f, 396,0999f, 17,02168f };
			Local_220.f_144[0].f_8 = 14f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -2952,996f, 413,3346f, 12,21769f };
			Local_220.f_144[1].f_5 = { -2955,707f, 396,0999f, 17,02168f };
			Local_220.f_144[1].f_8 = 14f;
			func_428(1, 4);
			break;
		
		case 9:
			Local_220.f_144[0].f_2 = { 1913,303f, 575,9149f, 173,3727f };
			Local_220.f_144[0].f_5 = { 1908,431f, 564,9188f, 177,7685f };
			Local_220.f_144[0].f_8 = 14f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1913,303f, 575,9149f, 173,3727f };
			Local_220.f_144[1].f_5 = { 1908,431f, 564,9188f, 177,7685f };
			Local_220.f_144[1].f_8 = 14f;
			func_428(1, 4);
			Local_220.f_129[0] = 1;
			Local_220.f_129[0].f_1 = { 1903,082f, 579,7206f, 173,846f };
			Local_220.f_129[0].f_4 = { 1915,253f, 568,5648f, 177,4879f };
			break;
		
		case 10:
			Local_220.f_144[0].f_2 = { -286,343f, 2532,834f, 71,66188f };
			Local_220.f_144[0].f_5 = { -286,2969f, 2518,545f, 76,56492f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -286,343f, 2532,834f, 71,66188f };
			Local_220.f_144[1].f_5 = { -286,2969f, 2518,545f, 76,56492f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-289,54f, 2529,112f, 73,64f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-289,54f, 2529,112f, 73,64f, 10f, 1) };
			break;
		
		case 11:
			Local_220.f_144[0].f_2 = { 774,7211f, 4181,103f, 38,67973f };
			Local_220.f_144[0].f_5 = { 761,7006f, 4181,494f, 42,70111f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 774,7211f, 4181,103f, 38,67973f };
			Local_220.f_144[1].f_5 = { 761,7006f, 4181,494f, 42,70111f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(774,058f, 4180,667f, 39,709f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(774,058f, 4180,667f, 39,709f, 10f, 1) };
			break;
		
		case 12:
			Local_220.f_144[0].f_2 = { 3334,186f, 5164,316f, 15,29747f };
			Local_220.f_144[0].f_5 = { 3327,577f, 5151,516f, 20,30672f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 3334,186f, 5164,316f, 15,29747f };
			Local_220.f_144[1].f_5 = { 3327,577f, 5151,516f, 20,30672f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(3332,725f, 5159,237f, 17,31f, 15f, 0) };
			Local_220.f_129[0].f_4 = { func_427(3332,725f, 5159,237f, 17,31f, 15f, 1) };
			Local_220.f_129[1] = 1;
			Local_220.f_129[1].f_1 = { 3326,429f, 5169,909f, 16,36385f };
			Local_220.f_129[1].f_4 = { 3341,392f, 5150,877f, 20,59692f };
			break;
		
		case 13:
			Local_220.f_144[0].f_2 = { -1509,941f, 1490,981f, 113,0596f };
			Local_220.f_144[0].f_5 = { -1507,78f, 1476,924f, 119,4414f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -1509,941f, 1490,981f, 113,0596f };
			Local_220.f_144[1].f_5 = { -1507,78f, 1476,924f, 119,4414f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-1513,447f, 1483,326f, 115,403f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-1513,447f, 1483,326f, 115,403f, 10f, 1) };
			Local_220.f_129[1] = 1;
			Local_220.f_129[1].f_1 = { -1507,401f, 1477,776f, 114,384f };
			Local_220.f_129[1].f_4 = { -1517,647f, 1494,842f, 118,0883f };
			break;
		
		case 14:
			Local_220.f_144[0].f_2 = { 2480,107f, 3430,863f, 47,00473f };
			Local_220.f_144[0].f_5 = { 2470,806f, 3419,803f, 51,86774f };
			Local_220.f_144[0].f_8 = 18f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 2480,107f, 3430,863f, 47,00473f };
			Local_220.f_144[1].f_5 = { 2470,806f, 3419,803f, 51,86774f };
			Local_220.f_144[1].f_8 = 18f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(2478,137f, 3430,027f, 49,199f, 15f, 0) };
			Local_220.f_129[0].f_4 = { func_427(2478,137f, 3430,027f, 49,199f, 15f, 1) };
			break;
		
		case 15:
			Local_220.f_144[0].f_2 = { 1448,436f, -2230,151f, 58,11971f };
			Local_220.f_144[0].f_5 = { 1448,577f, -2243,75f, 63,47067f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1448,436f, -2230,151f, 58,11971f };
			Local_220.f_144[1].f_5 = { 1448,577f, -2243,75f, 63,47067f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			break;
		
		case 16:
			Local_220.f_144[0].f_2 = { 161,9844f, -2654,405f, 2,995953f };
			Local_220.f_144[0].f_5 = { 162,0097f, -2638,408f, 7,995954f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 161,9844f, -2654,405f, 2,995953f };
			Local_220.f_144[1].f_5 = { 162,0097f, -2638,408f, 7,995954f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			break;
		
		case 17:
			Local_220.f_144[0].f_2 = { 233,6544f, 21,62724f, 80,96111f };
			Local_220.f_144[0].f_5 = { 246,9707f, 16,96839f, 86,09335f };
			Local_220.f_144[0].f_8 = 17f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 233,6544f, 21,62724f, 80,96111f };
			Local_220.f_144[1].f_5 = { 246,9707f, 16,96839f, 86,09335f };
			Local_220.f_144[1].f_8 = 17f;
			func_428(1, 4);
			break;
		
		case 18:
			Local_220.f_144[0].f_2 = { -1369,613f, -324,7527f, 36,23611f };
			Local_220.f_144[0].f_5 = { -1381,688f, -332,4623f, 41,52411f };
			Local_220.f_144[0].f_8 = 17f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -1369,613f, -324,7527f, 36,23611f };
			Local_220.f_144[1].f_5 = { -1381,688f, -332,4623f, 41,52411f };
			Local_220.f_144[1].f_8 = 17f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-1371,887f, -330,325f, 38,109f, 15f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-1371,887f, -330,325f, 38,109f, 15f, 1) };
			Local_220.f_129[1] = 1;
			Local_220.f_129[1].f_1 = { -1381,143f, -326,4775f, 37,44429f };
			Local_220.f_129[1].f_4 = { -1360,506f, -338,3701f, 41,61538f };
			break;
		
		case 19:
			Local_220.f_144[0].f_2 = { -936,981f, 311,8687f, 68,24571f };
			Local_220.f_144[0].f_5 = { -936,9298f, 301,7548f, 73,01892f };
			Local_220.f_144[0].f_8 = 17f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -936,981f, 311,8687f, 68,24571f };
			Local_220.f_144[1].f_5 = { -936,9298f, 301,7548f, 73,01892f };
			Local_220.f_144[1].f_8 = 17f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-935,653f, 307,596f, 70,201f, 15f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-935,653f, 307,596f, 70,201f, 15f, 1) };
			break;
		
		case 20:
			Local_220.f_144[0].f_2 = { -966,7675f, -1104,979f, -0,828153f };
			Local_220.f_144[0].f_5 = { -955,9435f, -1099,313f, 4,150311f };
			Local_220.f_144[0].f_8 = 17f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -966,7675f, -1104,979f, -0,828153f };
			Local_220.f_144[1].f_5 = { -955,9435f, -1099,313f, 4,150311f };
			Local_220.f_144[1].f_8 = 17f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(-935,653f, 307,596f, 70,201f, 15f, 0) };
			Local_220.f_129[0].f_4 = { func_427(-935,653f, 307,596f, 70,201f, 15f, 1) };
			break;
		
		case 21:
			Local_220.f_144[0].f_2 = { 1035,474f, -775,108f, 55,2463f };
			Local_220.f_144[0].f_5 = { 1046,138f, -771,8412f, 60,02283f };
			Local_220.f_144[0].f_8 = 15f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1035,474f, -775,108f, 55,2463f };
			Local_220.f_144[1].f_5 = { 1046,138f, -771,8412f, 60,02283f };
			Local_220.f_144[1].f_8 = 15f;
			func_428(1, 4);
			break;
		
		case 22:
			Local_220.f_144[0].f_2 = { 332,7197f, -2130,238f, 11,72283f };
			Local_220.f_144[0].f_5 = { 343,36f, -2120,357f, 17,73294f };
			Local_220.f_144[0].f_8 = 10f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 332,7197f, -2130,238f, 11,72283f };
			Local_220.f_144[1].f_5 = { 343,36f, -2120,357f, 17,73294f };
			Local_220.f_144[1].f_8 = 10f;
			func_428(1, 4);
			Local_220.f_129[0] = 0;
			Local_220.f_129[0].f_1 = { func_427(337,423f, -2128,308f, 14,163f, 10f, 0) };
			Local_220.f_129[0].f_4 = { func_427(337,423f, -2128,308f, 14,163f, 10f, 1) };
			break;
		
		case 23:
			Local_220.f_144[0].f_2 = { -25,66252f, -1489,863f, 27,5778f };
			Local_220.f_144[0].f_5 = { -36,81079f, -1502,809f, 38,66498f };
			Local_220.f_144[0].f_8 = 14f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -25,66252f, -1489,863f, 27,5778f };
			Local_220.f_144[1].f_5 = { -36,81079f, -1502,809f, 38,66498f };
			Local_220.f_144[1].f_8 = 14f;
			func_428(1, 4);
			break;
		
		case 24:
			Local_220.f_144[0].f_2 = { -361,8607f, -58,32554f, 51,42815f };
			Local_220.f_144[0].f_5 = { -354,5931f, -68,44684f, 57,42815f };
			Local_220.f_144[0].f_8 = 15f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -361,8607f, -58,32554f, 51,42815f };
			Local_220.f_144[1].f_5 = { -354,5931f, -68,44684f, 57,42815f };
			Local_220.f_144[1].f_8 = 15f;
			func_428(1, 4);
			break;
		
		case 25:
			Local_220.f_144[0].f_2 = { 469,9873f, -1239,682f, 26,73165f };
			Local_220.f_144[0].f_5 = { 472,3422f, -1228,147f, 32,8737f };
			Local_220.f_144[0].f_8 = 15f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 469,9873f, -1239,682f, 26,73165f };
			Local_220.f_144[1].f_5 = { 472,3422f, -1228,147f, 32,8737f };
			Local_220.f_144[1].f_8 = 15f;
			func_428(1, 4);
			break;
		
		case 26:
			Local_220.f_144[0].f_2 = { 1391,073f, -1542,141f, 53,70922f };
			Local_220.f_144[0].f_5 = { 1390,762f, -1524,762f, 60,32267f };
			Local_220.f_144[0].f_8 = 15f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 1391,073f, -1542,141f, 53,70922f };
			Local_220.f_144[1].f_5 = { 1390,762f, -1524,762f, 60,32267f };
			Local_220.f_144[1].f_8 = 15f;
			func_428(1, 4);
			break;
		
		case 27:
			Local_220.f_144[0].f_2 = { 38,65834f, -884,3711f, 27,24351f };
			Local_220.f_144[0].f_5 = { 26,81384f, -879,8863f, 33,2672f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 38,65834f, -884,3711f, 27,24351f };
			Local_220.f_144[1].f_5 = { 26,81384f, -879,8863f, 33,2672f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			break;
		
		case 28:
			Local_220.f_144[0].f_2 = { -1002,924f, -2526,459f, 10,83078f };
			Local_220.f_144[0].f_5 = { -997,7781f, -2535,955f, 16,83078f };
			Local_220.f_144[0].f_8 = 14f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { -1002,924f, -2526,459f, 10,83078f };
			Local_220.f_144[1].f_5 = { -997,7781f, -2535,955f, 16,83078f };
			Local_220.f_144[1].f_8 = 14f;
			func_428(1, 4);
			Local_220.f_129[0] = 1;
			Local_220.f_129[0].f_1 = { -995,9657f, -2539,312f, 11,97358f };
			Local_220.f_129[0].f_4 = { -1004,581f, -2528,937f, 15,83078f };
			break;
		
		case 29:
			Local_220.f_144[0].f_2 = { 2683,179f, 1562,67f, 21,51309f };
			Local_220.f_144[0].f_5 = { 2670,715f, 1562,556f, 29,60288f };
			Local_220.f_144[0].f_8 = 16f;
			func_428(0, 0);
			Local_220.f_144[1].f_2 = { 2683,179f, 1562,67f, 21,51309f };
			Local_220.f_144[1].f_5 = { 2670,715f, 1562,556f, 29,60288f };
			Local_220.f_144[1].f_8 = 16f;
			func_428(1, 4);
			break;
	}
}

Vector3 func_427(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		return vParam0 + Vector(fParam3, fParam3, fParam3);
	}
	return vParam0 - Vector(fParam3, fParam3, fParam3);
}

void func_428(int iParam0, int iParam1)
{
	if (func_15(&(Local_220.f_144[iParam0]), iParam1))
	{
	}
}

int func_429()
{
	return Local_1164.f_143.f_1;
}

void func_430(int iParam0, int iParam1)
{
	if (func_15(&(Local_220.f_92.f_1[iParam0]), iParam1))
	{
	}
}

int func_431()
{
	switch (Local_220.f_75.f_1[0].f_3)
	{
		case -2119578145:
			switch (func_432())
			{
				case 0:
					return 652625140;
				
				case 1:
					return -808314695;
				
				case 2:
					return 1009806427;
				
				default:
			}
			break;
		
		case -808457413:
			switch (func_432())
			{
				case 0:
					return 652625140;
				
				case 1:
					return -808314695;
				
				case 2:
					return -752487763;
				
				default:
			}
			break;
		
		case 970598228:
			switch (func_432())
			{
				case 0:
					return 652625140;
				
				case 1:
					return -808314695;
				
				case 2:
					return 1009806427;
				
				default:
			}
			break;
		
		case 2016857647:
			switch (func_432())
			{
				case 0:
					return -1026035001;
				
				case 1:
					return 528555233;
				
				case 2:
					return 1009806427;
				
				default:
			}
			break;
		
		case 409049982:
			switch (func_432())
			{
				case 0:
					return -1026035001;
				
				case 1:
					return -808314695;
				
				case 2:
					return -752487763;
				
				default:
			}
			break;
	}
	return 0;
}

int func_432()
{
	return Local_1164.f_122;
}

int func_433()
{
	switch (Local_1164.f_123)
	{
		case 0:
			return -2119578145;
		
		case 1:
			return -808457413;
		
		case 2:
			return 970598228;
		
		case 3:
			return 2016857647;
		
		case 4:
			return 409049982;
		
		default:
	}
	return 0;
}

void func_434()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (-1 != Local_220.f_10.f_5[iVar0].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (Local_220.f_28.f_1[iVar0].f_10 != -1)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Local_220.f_170[Local_220.f_28.f_1[iVar0].f_10])))
			{
			}
		}
		if (-1 != Local_220.f_28.f_1[iVar0].f_8)
		{
		}
		if (-1 != Local_220.f_28.f_1[iVar0].f_8)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_75)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_92)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_116)
	{
		iVar0++;
	}
}

int func_435()
{
	switch (func_429())
	{
		case 0:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -97,6922f, 6398,02f, 30,4528f };
			Local_220.f_28.f_1[0].f_6 = 224,7997f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -91,9373f, 6397,541f, 30,6395f };
			Local_220.f_28.f_1[1].f_6 = 142,5995f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -95,2155f, 6395,659f, 30,452f };
			Local_220.f_75.f_1[0].f_7 = 224,7997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 1:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1669,066f, 4972,725f, 41,2851f };
			Local_220.f_28.f_1[0].f_6 = 129,7997f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_CLIPBOARD", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1666,057f, 4966,523f, 41,2385f };
			Local_220.f_28.f_1[1].f_6 = 46,1994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1665,939f, 4970,212f, 41,2591f };
			Local_220.f_75.f_1[0].f_7 = 129,7997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 2:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 2647,825f, 4252,255f, 43,7752f };
			Local_220.f_28.f_1[0].f_6 = 278,7993f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 2649,159f, 4252,323f, 43,7695f };
			Local_220.f_28.f_1[1].f_6 = 87,3988f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 2647,317f, 4255,757f, 43,7764f };
			Local_220.f_75.f_1[0].f_7 = 121,5996f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 3:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1436,201f, 3666,007f, 33,1209f };
			Local_220.f_28.f_1[0].f_6 = 214,1987f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1430,508f, 3661,281f, 33,3264f };
			Local_220.f_28.f_1[1].f_6 = 299,1983f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1434,347f, 3662,849f, 33,1201f };
			Local_220.f_75.f_1[0].f_7 = 293,7999f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 4:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 861,486f, 2848,65f, 56,444f };
			Local_220.f_28.f_1[0].f_6 = 80,6f;
			Local_220.f_28.f_1[0].f_7 = 324215364;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 855,697f, 2853,605f, 56,709f };
			Local_220.f_28.f_1[1].f_6 = 222,8f;
			Local_220.f_28.f_1[1].f_7 = 453432689;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 857,869f, 2849,551f, 56,575f };
			Local_220.f_75.f_1[0].f_7 = 80,6f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 5:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -1896,857f, 2054,889f, 139,9683f };
			Local_220.f_28.f_1[0].f_6 = 79,7996f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -1902,724f, 2051,985f, 139,7039f };
			Local_220.f_28.f_1[1].f_6 = 349,5993f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_CLIPBOARD", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -1901,913f, 2055,253f, 139,6933f };
			Local_220.f_75.f_1[0].f_7 = 343,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 6:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 2307,854f, 2539,586f, 45,7104f };
			Local_220.f_28.f_1[0].f_6 = 316,8f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 2315,623f, 2540,087f, 45,6677f };
			Local_220.f_28.f_1[1].f_6 = 82,7994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 2310,338f, 2542,258f, 45,6677f };
			Local_220.f_75.f_1[0].f_7 = 316,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 7:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -2229,24f, 4229,438f, 45,7707f };
			Local_220.f_28.f_1[0].f_6 = 163,9998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -2226,648f, 4224,902f, 46,0058f };
			Local_220.f_28.f_1[1].f_6 = 338,799f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -2230,174f, 4225,861f, 45,7994f };
			Local_220.f_75.f_1[0].f_7 = 163,9998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 8:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -2950,016f, 405,3059f, 14,0967f };
			Local_220.f_28.f_1[0].f_6 = 147,5995f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -2950,676f, 404,1714f, 14,0535f };
			Local_220.f_28.f_1[1].f_6 = 333,9988f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -2952,948f, 408,6126f, 14,1516f };
			Local_220.f_75.f_1[0].f_7 = 0f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 9:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1912,293f, 572,0425f, 174,6946f };
			Local_220.f_28.f_1[0].f_6 = 75,5999f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1910,68f, 576,1117f, 174,8203f };
			Local_220.f_28.f_1[1].f_6 = 166,5996f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1909,135f, 573,2956f, 174,8217f };
			Local_220.f_75.f_1[0].f_7 = 67,9999f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 10:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -288,5898f, 2527,691f, 73,5753f };
			Local_220.f_28.f_1[0].f_6 = 224,3995f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -287,8767f, 2526,482f, 73,591f };
			Local_220.f_28.f_1[1].f_6 = 43,7993f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -292,1817f, 2525,068f, 73,6532f };
			Local_220.f_75.f_1[0].f_7 = 89,3998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 11:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 766,9975f, 4180,013f, 39,7092f };
			Local_220.f_28.f_1[0].f_6 = 199,8f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_CLIPBOARD", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 774,0271f, 4181,124f, 39,7092f };
			Local_220.f_28.f_1[1].f_6 = 87,5999f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 768,2521f, 4176,665f, 39,71f };
			Local_220.f_75.f_1[0].f_7 = 199,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 12:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 3331,676f, 5156,57f, 17,3025f };
			Local_220.f_28.f_1[0].f_6 = 331,8f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 3332,878f, 5163,645f, 17,2794f };
			Local_220.f_28.f_1[1].f_6 = 151,5995f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 3333,365f, 5159,849f, 17,3031f };
			Local_220.f_75.f_1[0].f_7 = 331,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 13:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -1509,074f, 1484,926f, 115,6317f };
			Local_220.f_28.f_1[0].f_6 = 189,9993f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -1508,838f, 1483,321f, 115,7968f };
			Local_220.f_28.f_1[1].f_6 = 11,5991f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -1513,606f, 1483,649f, 115,3705f };
			Local_220.f_75.f_1[0].f_7 = 92,1997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 14:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 2477,078f, 3424,631f, 48,8816f };
			Local_220.f_28.f_1[0].f_6 = 317,8f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 2477,981f, 3429,964f, 49,2091f };
			Local_220.f_28.f_1[1].f_6 = 147,3994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 2479,418f, 3427,102f, 48,8933f };
			Local_220.f_75.f_1[0].f_7 = 317,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 15:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1448,486f, -2234,274f, 59,959f };
			Local_220.f_28.f_1[0].f_6 = 181,1996f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1448,33f, -2235,854f, 60,1128f };
			Local_220.f_28.f_1[1].f_6 = 2,3993f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1451,42f, -2233,088f, 60,2259f };
			Local_220.f_75.f_1[0].f_7 = 35,1999f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 16:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 164,129f, -2649,536f, 4,996f };
			Local_220.f_28.f_1[0].f_6 = 205,7997f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 160,3552f, -2652,698f, 4,996f };
			Local_220.f_28.f_1[1].f_6 = -0,2007f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 165,5644f, -2652,463f, 4,996f };
			Local_220.f_75.f_1[0].f_7 = 205,7997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 17:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 237,6193f, 25,5141f, 82,5936f };
			Local_220.f_28.f_1[0].f_6 = 160,1998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 234,0898f, 20,8284f, 82,5308f };
			Local_220.f_28.f_1[1].f_6 = 255,7994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 236,3487f, 22,5351f, 82,5743f };
			Local_220.f_75.f_1[0].f_7 = 160,1998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 18:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -1375,289f, -330,0093f, 38,2794f };
			Local_220.f_28.f_1[0].f_6 = 271,1997f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -1370,359f, -324,8496f, 38,2809f };
			Local_220.f_28.f_1[1].f_6 = 122,9995f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -1371,957f, -329,9002f, 38,1307f };
			Local_220.f_75.f_1[0].f_7 = 271,1997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 19:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -935,5189f, 305,1255f, 70,1446f };
			Local_220.f_28.f_1[0].f_6 = 1,2f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -938,2308f, 311,5183f, 70,2582f };
			Local_220.f_28.f_1[1].f_6 = 193,399f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -935,6755f, 308,411f, 70,2197f };
			Local_220.f_75.f_1[0].f_7 = 1,2f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 20:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -962,1614f, -1098,799f, 1,1503f };
			Local_220.f_28.f_1[0].f_6 = 193,5998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_CLIPBOARD", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -963,353f, -1104,19f, 1,1503f };
			Local_220.f_28.f_1[1].f_6 = 316,5994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -961,3957f, -1102,007f, 1,1503f };
			Local_220.f_75.f_1[0].f_7 = 193,5998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 21:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1039,206f, -777,382f, 57,0187f };
			Local_220.f_28.f_1[0].f_6 = 18f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1039,729f, -773,9086f, 57,0183f };
			Local_220.f_28.f_1[1].f_6 = 283,1996f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1038,375f, -774,2705f, 57,014f };
			Local_220.f_75.f_1[0].f_7 = 13,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 22:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 341,31f, -2123,868f, 14,5471f };
			Local_220.f_28.f_1[0].f_6 = 142,7997f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 335,0284f, -2123,47f, 14,4369f };
			Local_220.f_28.f_1[1].f_6 = 242,1994f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING_POT", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 339,4617f, -2126,446f, 14,3374f };
			Local_220.f_75.f_1[0].f_7 = 142,7997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 23:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -28,9927f, -1496,947f, 29,3703f };
			Local_220.f_28.f_1[0].f_6 = 327,9998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -28,8313f, -1500,908f, 29,6289f };
			Local_220.f_28.f_1[1].f_6 = 56,7996f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -27,3763f, -1494,304f, 29,3621f };
			Local_220.f_75.f_1[0].f_7 = 327,9998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 24:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -358,6656f, -63,3636f, 53,4281f };
			Local_220.f_28.f_1[0].f_6 = 218,3995f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -357,8047f, -64,4234f, 53,4281f };
			Local_220.f_28.f_1[1].f_6 = 39,1992f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -355,7981f, -60,7046f, 53,4282f };
			Local_220.f_75.f_1[0].f_7 = 351,6f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 25:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 470,6023f, -1235,39f, 28,8894f };
			Local_220.f_28.f_1[0].f_6 = 361,9994f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 470,787f, -1233,972f, 28,859f };
			Local_220.f_28.f_1[1].f_6 = 182,7988f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 472,4747f, -1237,58f, 28,7487f };
			Local_220.f_75.f_1[0].f_7 = 142,9998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 26:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 1391,402f, -1533,309f, 56,3022f };
			Local_220.f_28.f_1[0].f_6 = 9,3993f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 1391,504f, -1531,99f, 56,2736f };
			Local_220.f_28.f_1[1].f_6 = 168,7988f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 1395,489f, -1533,557f, 56,5724f };
			Local_220.f_75.f_1[0].f_7 = 223,1997f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 27:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 33,9189f, -886,0068f, 29,2071f };
			Local_220.f_28.f_1[0].f_6 = 345,9998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 33,695f, -882,5641f, 29,2554f };
			Local_220.f_28.f_1[1].f_6 = 79,5988f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_DRINKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 35,097f, -882,8452f, 29,2553f };
			Local_220.f_75.f_1[0].f_7 = 338,8f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 28:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { -998,7402f, -2527,484f, 12,8308f };
			Local_220.f_28.f_1[0].f_6 = 116,5998f;
			Local_220.f_28.f_1[0].f_7 = 453432689;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { -1001,071f, -2530,02f, 12,8308f };
			Local_220.f_28.f_1[1].f_6 = 215,7996f;
			Local_220.f_28.f_1[1].f_7 = 324215364;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_GUARD_STAND", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { -1001,537f, -2528,857f, 12,8308f };
			Local_220.f_75.f_1[0].f_7 = 116,5998f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
		
		case 29:
			Local_220.f_28.f_1[0].f_2 = -48477765;
			Local_220.f_28.f_1[0].f_3 = { 2676,396f, 1565,767f, 23,501f };
			Local_220.f_28.f_1[0].f_6 = 37,7999f;
			Local_220.f_28.f_1[0].f_7 = 324215364;
			Local_220.f_28.f_1[0].f_10 = 0;
			StringCopy(&(Local_220.f_170[0]), "WORLD_HUMAN_STAND_MOBILE", 32);
			Local_220.f_28.f_1[1].f_2 = -48477765;
			Local_220.f_28.f_1[1].f_3 = { 2671,897f, 1562,597f, 23,6967f };
			Local_220.f_28.f_1[1].f_6 = 267,3996f;
			Local_220.f_28.f_1[1].f_7 = 453432689;
			Local_220.f_28.f_1[1].f_10 = 1;
			StringCopy(&(Local_220.f_170[1]), "WORLD_HUMAN_SMOKING", 32);
			Local_220.f_75.f_1[0].f_3 = -2119578145;
			Local_220.f_75.f_1[0].f_4 = { 2674,505f, 1568,294f, 23,5007f };
			Local_220.f_75.f_1[0].f_7 = 37,7999f;
			func_436(0, 7);
			Local_220.f_10.f_5[0].f_10 = 0;
			Local_220.f_10.f_5[0].f_2 = -1964997422;
			Local_220.f_10 = 1;
			Local_220.f_28 = 2;
			Local_220.f_75 = 1;
			Local_220.f_92 = 0;
			break;
	}
	return 1;
}

void func_436(int iParam0, int iParam1)
{
	if (func_15(&(Local_220.f_75.f_1[iParam0]), iParam1))
	{
	}
}

bool func_437(int iParam0)
{
	return func_4(&uLocal_1123, iParam0);
}

void func_438()
{
	if (func_437(21))
	{
		return;
	}
	func_439();
	func_425(21);
}

void func_439()
{
	Local_407.f_6 = 151316;
	Local_407.f_6.f_1 = 149044;
	Local_407.f_1 = 149035;
	Local_407.f_2 = 149026;
	Local_407.f_8 = 148991;
	Local_407.f_3.f_1 = 148101;
	Local_407.f_18 = 148086;
	Local_407.f_18.f_1 = 148071;
	Local_407.f_73 = 147854;
	Local_407.f_73.f_13.f_2 = 147809;
	Local_407.f_73.f_76 = 147493;
	Local_407.f_188.f_23 = 144931;
	Local_407.f_188.f_22 = 144901;
	Local_407.f_188.f_27 = 144565;
	Local_407.f_37 = 144511;
	Local_407.f_38 = 144502;
	Local_407.f_38.f_1 = 144488;
	Local_407.f_252.f_2 = 144480;
	Local_407.f_252.f_3 = 144468;
	Local_407.f_252.f_1 = 144459;
	Local_407.f_54 = 144414;
	Local_407.f_54.f_1 = 144392;
	Local_407.f_54.f_2 = 144370;
	Local_407.f_54.f_7 = 144358;
	Local_407.f_54.f_3 = 144333;
	Local_407.f_54.f_4 = 144333;
	Local_407.f_54.f_15 = 144314;
	Local_407.f_269 = 144158;
	Local_407.f_216.f_13 = 143588;
	Local_407.f_216.f_14 = 143538;
	Local_407.f_263.f_3 = 143445;
	Local_407.f_263.f_4 = 143377;
	Local_407.f_263.f_5 = 143301;
	Local_407.f_257.f_1 = 143263;
	Local_407.f_257 = 143178;
}

char* func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_441())
			{
				case 0:
					return "RE_HLP_DRUGV_1";
					break;
			}
			break;
	}
	return "";
}

int func_441()
{
	return func_442(iLocal_1113);
}

var func_442(int iParam0)
{
	return Local_1311[iParam0].f_22;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_1054[0].f_4 == unk_0xD803B885F5E47A62();
		
		default:
	}
	return 0;
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_432())
			{
				case 0:
					return "RE_TXT_DV_0";
				
				case 1:
					return "RE_TXT_DV_1";
				
				case 2:
					return "RE_TXT_DV_2";
				
				default:
			}
			break;
	}
	return "";
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_432())
			{
				case 0:
					return 70;
				
				case 1:
					return 72;
				
				case 2:
					return 71;
				
				default:
			}
			break;
	}
	return 137;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_441())
			{
				case 0:
					if (Local_1054[0].f_4 == unk_0xD803B885F5E47A62())
					{
						if (func_11(&uLocal_212, 5000, 0))
						{
							return 1;
						}
					}
					else if (func_13(&uLocal_212))
					{
						func_22(&uLocal_212);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_6(0, 4) || func_6(0, 3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_448(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = Local_1164.f_69[0];
			*uParam2 = { func_450() };
			*uParam3 = { func_449() };
			*uParam4 = 1;
			StringCopy(sParam5, "chassis_dummy", 24);
			return 1;
			break;
	}
	return 0;
}

Vector3 func_449()
{
	switch (Local_220.f_75.f_1[0].f_3)
	{
		case -2119578145:
		case -808457413:
		case 970598228:
		case 2016857647:
		case 409049982:
			switch (func_432())
			{
				case 2:
					return 0f, 0f, 90f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_450()
{
	switch (Local_220.f_75.f_1[0].f_3)
	{
		case -2119578145:
			switch (func_432())
			{
				case 0:
					return 0f, -1,7f, 0,07f;
				
				case 1:
					return 0f, -2f, 0,06f;
				
				case 2:
					return 0f, -2f, 0,07f;
				
				default:
			}
			break;
		
		case -808457413:
			switch (func_432())
			{
				case 0:
					return 0f, -2f, 0,18f;
				
				case 1:
					return 0f, -2f, 0,2f;
				
				case 2:
					return 0f, -2f, 0,18f;
				
				default:
			}
			break;
		
		case 970598228:
			switch (func_432())
			{
				case 0:
					return 0f, -1,9f, 0,12f;
				
				case 1:
					return 0f, -1,8f, 0,12f;
				
				case 2:
					return 0f, -1,9f, 0,12f;
				
				default:
			}
			break;
		
		case 2016857647:
			switch (func_432())
			{
				case 0:
					return 0f, -1,5f, 0,02f;
				
				case 1:
					return 0f, -1,625f, 0,15f;
				
				case 2:
					return 0f, -1,575f, 0,05f;
				
				default:
			}
			break;
		
		case 409049982:
			switch (func_432())
			{
				case 0:
					return 0f, -1,5f, 0,05f;
				
				case 1:
					return 0f, -1,475f, 0,02f;
				
				case 2:
					return 0f, -1,5f, 0,05f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_451(int iParam0)
{
	switch (func_432())
	{
		case 0:
			switch (func_441())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 752;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (func_441())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 753;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (func_441())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 754;
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

void func_452(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_425(11);
	}
}

float func_453(var uParam0)
{
	return func_454();
}

float func_454()
{
	return 0,5f;
}

char* func_455(var uParam0)
{
	return "RE_BLIP_DRUGV";
}

int func_456(var uParam0)
{
	return func_457();
}

int func_457()
{
	return 9;
}

int func_458(var uParam0)
{
	return func_459();
}

int func_459()
{
	return 143;
}

int func_460(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_218[0]))
	{
		return 0;
	}
	if (Local_1054[iParam0].f_4 == unk_0xD803B885F5E47A62())
	{
		return 0;
	}
	return 1;
}

int func_461(var uParam0)
{
	return 0;
}

char* func_462(var uParam0)
{
	return "RE_BLIP_DRUGV";
}

void func_463(var uParam0)
{
}

bool func_464()
{
	return func_6(0, 1);
}

int func_465()
{
	return 1;
}

Vector3 func_466()
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[0]))
	{
		return unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_1164.f_69[0]), 0);
	}
	return Local_220.f_163.f_1[0];
}

void func_467(var uParam0, int iParam1)
{
	if (!func_6(0, 1))
	{
		if (!unk_0x1150BCE24B1630AC(iParam1, 5))
		{
			if (unk_0xF409BCB95E61D4DB(iParam1, 5) < 0,8f && unk_0xAFE0D3608EDA7039(iParam1))
			{
				func_470(iParam1, 5, 0, 1, 5, 1065353216);
			}
		}
	}
	else if (!unk_0x1150BCE24B1630AC(iParam1, 5))
	{
		if (!func_13(&uLocal_214) && unk_0xF409BCB95E61D4DB(iParam1, 5) > 0,1f)
		{
			func_12(&uLocal_214, 0, 0);
		}
		else if (func_11(&uLocal_214, 2000, 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam1, 0) && unk_0xAFE0D3608EDA7039(iParam1))
			{
				if (func_468(iParam1, 5, 0, 1065353216))
				{
					func_22(&uLocal_214);
				}
			}
		}
	}
}

int func_468(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (unk_0xF409BCB95E61D4DB(iParam0, iParam1) > 0,01f)
	{
		fVar0 = unk_0xF409BCB95E61D4DB(iParam0, iParam1);
		fVar1 = (unk_0x6117725E0134737F() / (fParam3 * (1f - fVar0)));
		unk_0xF50D17A63556B8D4(iParam0, iParam1, iParam2, func_469(0f, (fVar0 - fVar1)));
	}
	else
	{
		unk_0x152BCACCF710B36E(iParam0, iParam1, 1);
		unk_0x2EA10555AEBEA739(iParam0, iParam1, 1, 1, 0);
		return 1;
	}
	return 0;
}

float func_469(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	unk_0x611DFA9294B339CA(iParam0, iParam1, iParam2, iParam3);
	unk_0xF50D17A63556B8D4(iParam0, iParam1, iParam4, fParam5);
}

void func_471(var uParam0, int iParam1)
{
	unk_0x6EEAA5C21760E9DB(iParam1, false);
	func_470(iParam1, 5, 0, 1, 5, 1065353216);
}

int func_472(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (Local_220.f_75.f_1[iParam0].f_3)
			{
				case -2119578145:
					switch (func_432())
					{
						case 0:
							StringCopy(&(uParam1->f_1), "27IZA535", 16);
							uParam1->f_5 = 88;
							uParam1->f_6 = 0;
							uParam1->f_7 = 88;
							uParam1->f_8 = 0;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 1;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							return 1;
							break;
						
						case 1:
							StringCopy(&(uParam1->f_1), "27IZA535", 16);
							uParam1->f_5 = 30;
							uParam1->f_6 = 112;
							uParam1->f_7 = 36;
							uParam1->f_8 = 0;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 1;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 1);
							return 1;
							break;
						
						case 2:
							StringCopy(&(uParam1->f_1), "27IZA535", 16);
							uParam1->f_5 = 53;
							uParam1->f_6 = 5;
							uParam1->f_7 = 59;
							uParam1->f_8 = 0;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 1;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 2);
							return 1;
							break;
					}
					break;
				
				case -808457413:
					switch (func_432())
					{
						case 0:
							StringCopy(&(uParam1->f_1), "87JFC263", 16);
							*uParam1 = 3;
							uParam1->f_5 = 112;
							uParam1->f_6 = 112;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 3;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[1] = 2;
							uParam1->f_9[2] = 2;
							uParam1->f_9[4] = 2;
							uParam1->f_9[7] = 2;
							uParam1->f_9[10] = 1;
							uParam1->f_9[48] = 1;
							return 1;
							break;
						
						case 1:
							StringCopy(&(uParam1->f_1), "87JFC263", 16);
							*uParam1 = 3;
							uParam1->f_5 = 104;
							uParam1->f_6 = 112;
							uParam1->f_7 = 104;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 3;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[1] = 1;
							uParam1->f_9[2] = 1;
							uParam1->f_9[4] = 1;
							uParam1->f_9[7] = 3;
							uParam1->f_9[10] = 1;
							return 1;
							break;
						
						case 2:
							StringCopy(&(uParam1->f_1), "87JFC263", 16);
							*uParam1 = 3;
							uParam1->f_5 = 95;
							uParam1->f_6 = 112;
							uParam1->f_7 = 97;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 3;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[1] = 2;
							uParam1->f_9[2] = 2;
							uParam1->f_9[4] = 2;
							uParam1->f_9[7] = 2;
							uParam1->f_9[10] = 1;
							uParam1->f_9[48] = 3;
							return 1;
							break;
					}
					break;
				
				case 970598228:
					switch (func_432())
					{
						case 0:
							StringCopy(&(uParam1->f_1), "47YNI062", 16);
							uParam1->f_5 = 65;
							uParam1->f_6 = 112;
							uParam1->f_7 = 87;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[0] = 2;
							uParam1->f_9[1] = 2;
							uParam1->f_9[2] = 1;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 1;
							uParam1->f_9[5] = 1;
							uParam1->f_9[7] = 4;
							uParam1->f_9[10] = 1;
							return 1;
							break;
						
						case 1:
							StringCopy(&(uParam1->f_1), "47YNI062", 16);
							uParam1->f_5 = 38;
							uParam1->f_6 = 0;
							uParam1->f_7 = 37;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[0] = 1;
							uParam1->f_9[1] = 1;
							uParam1->f_9[2] = 1;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 1;
							uParam1->f_9[5] = 1;
							uParam1->f_9[7] = 1;
							uParam1->f_9[10] = 1;
							return 1;
							break;
						
						case 2:
							StringCopy(&(uParam1->f_1), "09KES296", 16);
							uParam1->f_5 = 137;
							uParam1->f_6 = 112;
							uParam1->f_7 = 3;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 26);
							uParam1->f_9[0] = 3;
							uParam1->f_9[1] = 2;
							uParam1->f_9[2] = 1;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 1;
							uParam1->f_9[5] = 1;
							uParam1->f_9[7] = 1;
							uParam1->f_9[10] = 1;
							return 1;
							break;
					}
					break;
				
				case 2016857647:
					switch (func_432())
					{
						case 0:
							StringCopy(&(uParam1->f_1), "60SKJ517", 16);
							uParam1->f_5 = 51;
							uParam1->f_6 = 4;
							uParam1->f_7 = 66;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							uParam1->f_9[0] = 3;
							uParam1->f_9[1] = 2;
							uParam1->f_9[2] = 2;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 2;
							uParam1->f_9[5] = 1;
							uParam1->f_9[6] = 1;
							uParam1->f_9[10] = 1;
							uParam1->f_9[48] = 1;
							return 1;
							break;
						
						case 1:
							StringCopy(&(uParam1->f_1), "60SKJ517", 16);
							uParam1->f_5 = 111;
							uParam1->f_6 = 0;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							uParam1->f_9[0] = 2;
							uParam1->f_9[1] = 1;
							uParam1->f_9[2] = 1;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 1;
							uParam1->f_9[5] = 1;
							uParam1->f_9[6] = 1;
							uParam1->f_9[10] = 1;
							uParam1->f_9[48] = 1;
							return 1;
							break;
						
						case 2:
							StringCopy(&(uParam1->f_1), "60SKJ517", 16);
							uParam1->f_5 = 0;
							uParam1->f_6 = 28;
							uParam1->f_7 = 10;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							uParam1->f_9[0] = 4;
							uParam1->f_9[1] = 3;
							uParam1->f_9[2] = 3;
							uParam1->f_9[3] = 1;
							uParam1->f_9[4] = 2;
							uParam1->f_9[5] = 1;
							uParam1->f_9[6] = 1;
							uParam1->f_9[10] = 1;
							uParam1->f_9[48] = 1;
							return 1;
							break;
					}
					break;
				
				case 409049982:
					switch (func_432())
					{
						case 0:
							StringCopy(&(uParam1->f_1), "06UYZ390", 16);
							uParam1->f_5 = 145;
							uParam1->f_6 = 88;
							uParam1->f_7 = 74;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
							uParam1->f_9[0] = 8;
							uParam1->f_9[1] = 8;
							uParam1->f_9[2] = 8;
							uParam1->f_9[3] = 4;
							uParam1->f_9[4] = 4;
							uParam1->f_9[5] = 3;
							uParam1->f_9[6] = 2;
							uParam1->f_9[7] = 9;
							uParam1->f_9[8] = 8;
							uParam1->f_9[27] = 2;
							uParam1->f_9[46] = 1;
							uParam1->f_9[48] = 3;
							return 1;
							break;
						
						case 1:
							StringCopy(&(uParam1->f_1), "06UYZ390", 16);
							uParam1->f_5 = 61;
							uParam1->f_6 = 5;
							uParam1->f_7 = 63;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
							uParam1->f_9[0] = 8;
							uParam1->f_9[1] = 8;
							uParam1->f_9[2] = 8;
							uParam1->f_9[3] = 4;
							uParam1->f_9[4] = 4;
							uParam1->f_9[5] = 3;
							uParam1->f_9[6] = 2;
							uParam1->f_9[7] = 9;
							uParam1->f_9[8] = 8;
							uParam1->f_9[27] = 2;
							uParam1->f_9[46] = 1;
							uParam1->f_9[48] = 1;
							return 1;
							break;
						
						case 2:
							StringCopy(&(uParam1->f_1), "06UYZ390", 16);
							uParam1->f_5 = 27;
							uParam1->f_6 = 112;
							uParam1->f_7 = 36;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							uParam1->f_99 = 132;
							uParam1->f_98 = 0;
							uParam1->f_69 = 5;
							uParam1->f_62 = 255;
							uParam1->f_63 = 255;
							uParam1->f_64 = 255;
							uParam1->f_74 = 255;
							uParam1->f_76 = 255;
							unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
							uParam1->f_9[0] = 8;
							uParam1->f_9[1] = 8;
							uParam1->f_9[2] = 8;
							uParam1->f_9[3] = 4;
							uParam1->f_9[4] = 4;
							uParam1->f_9[5] = 3;
							uParam1->f_9[6] = 2;
							uParam1->f_9[7] = 9;
							uParam1->f_9[8] = 8;
							uParam1->f_9[27] = 2;
							uParam1->f_9[46] = 1;
							uParam1->f_9[48] = 5;
							return 1;
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_473(int iParam0)
{
	func_479(iParam0, 147778);
	func_479(iParam0, 147631);
	func_479(iParam0, 147607);
	func_479(iParam0, 147583);
	func_479(iParam0, 147551);
}

int func_474(int iParam0)
{
	func_49(iParam0, 26);
	if (func_75(iParam0, 25))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	if (func_75(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)
{
	if (func_75(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	iVar1 = Local_220.f_28.f_1[iParam0].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_220.f_28.f_42[iVar1].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_478(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_478(int iParam0)
{
	return func_106(&(Local_1164.f_90), iParam0);
}

void func_479(int iParam0, int iParam1)
{
	Local_896[iParam0].f_67[Local_896[iParam0].f_73] = iParam1;
	Local_896[iParam0].f_73++;
}

int func_480(int iParam0)
{
	func_49(iParam0, 27);
	if (func_75(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_481(var uParam0, int iParam1)
{
	unk_0x2ECF845953E95D1B(iParam1);
	unk_0x1365063FA6365BE8(iParam1, true);
	unk_0x11AD11297DC58CC7(iParam1, 0);
	unk_0xAFF39FB306F8E232(iParam1, 5, 1);
	unk_0xAFF39FB306F8E232(iParam1, 17, 0);
}

void func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			func_485(iParam0, 0, 9);
			func_483(iParam0, 0, 1, 148018);
			func_485(iParam0, 1, 7);
			break;
	}
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Local_896[iParam0].f_1[iParam1].f_10;
	uVar1 = iParam2;
	Local_896[iParam0].f_1[iParam1].f_1[iVar0] = uVar1;
	Local_896[iParam0].f_1[iParam1].f_1[iVar0].f_1 = iParam3;
	Local_896[iParam0].f_1[iParam1].f_10++;
}

bool func_484(int iParam0, var uParam1)
{
	return func_56(iParam0);
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	Local_896[iParam0].f_1[iParam1] = iParam2;
	Local_896[iParam0]++;
}

var func_486()
{
	return Global_262145.f_28846;
}

var func_487()
{
	return Global_262145.f_28845;
}

void func_488()
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[0]) && func_496(unk_0xB177666FAB6F4417(Local_1164.f_69[0])))
	{
		if (func_492())
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_1164.f_69[0]), 0))
			{
				if (!unk_0x0B6A547B830D3C18(unk_0xB177666FAB6F4417(Local_1164.f_69[0]), unk_0xD803B885F5E47A62()))
				{
					unk_0xF1259063ADD6A7AF(unk_0xB177666FAB6F4417(Local_1164.f_69[0]), unk_0xD803B885F5E47A62(), 1);
				}
			}
			else if (func_490(unk_0xB177666FAB6F4417(Local_1164.f_69[0]), 1093140480, 1, 1056964608, 0, 1, 0))
			{
				if (!func_489(unk_0x16F2683693E537C9(), 451360105, 1))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_1164.f_69[0]), 0);
				}
			}
		}
		else if (unk_0x0B6A547B830D3C18(unk_0xB177666FAB6F4417(Local_1164.f_69[0]), unk_0xD803B885F5E47A62()))
		{
			unk_0xF1259063ADD6A7AF(unk_0xB177666FAB6F4417(Local_1164.f_69[0]), unk_0xD803B885F5E47A62(), 0);
		}
	}
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || (unk_0xD1960163A3042274(iParam0, iParam1) == 0 && iParam2))
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_491(iParam0);
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

void func_491(int iParam0)
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

int func_492()
{
	if (((func_495() && !func_494()) || func_493(unk_0xD803B885F5E47A62(), 21)) || func_493(unk_0xD803B885F5E47A62(), 25))
	{
		return 1;
	}
	return 0;
}

bool func_493(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

bool func_494()
{
	return Global_1312418.f_1;
}

var func_495()
{
	return Global_1312418;
}

int func_496(int iParam0)
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

void func_497()
{
	func_498(21);
}

void func_498(int iParam0)
{
	if (func_15(&(Local_220.f_8), iParam0))
	{
	}
}

int func_499()
{
	return 1;
}

int func_500()
{
	return 1;
}

void func_501()
{
	func_525(0, 4, 151308);
	func_523(0, 1, 151242);
	func_502(1, 2, 3, 4, 5, 151059, 149391, 151059, 151059, 1);
	func_525(5, 44, 151308);
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_525(iVar0, 25, iParam5);
	func_503(iVar0, iParam4);
	func_503(iVar0, iVar1);
	func_503(iVar0, iVar4);
	func_503(iVar0, iVar5);
	func_503(iVar0, iVar2);
	func_525(iVar1, 27, iParam6);
	func_503(iVar1, iParam4);
	func_503(iVar1, iVar4);
	func_503(iVar1, iVar5);
	func_503(iVar1, iVar2);
	func_525(iVar2, 28, iParam7);
	func_503(iVar2, iParam4);
	func_503(iVar2, iVar4);
	func_503(iVar2, iVar5);
	func_525(iVar3, 26, iParam8);
	func_503(iVar3, iParam4);
	func_503(iVar3, iVar1);
	func_503(iVar3, iVar4);
	func_503(iVar3, iVar5);
	func_503(iVar3, iVar2);
}

void func_503(int iParam0, int iParam1)
{
	iVar0 = Local_783[iParam0].f_14;
	uVar1 = iParam1;
	Local_783[iParam0].f_1[iVar0] = uVar1;
	Local_783[iParam0].f_14++;
}

void func_504()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		func_517("BBOT_LOSECOPS", 0);
		return;
	}
	switch (Local_1164.f_122)
	{
		case 0:
			switch (func_441())
			{
				case 0:
					StringCopy(&Var0, "FMC_LOC_GRTCHP", 16);
					break;
			}
			break;
		
		case 1:
			switch (func_441())
			{
				case 0:
					StringCopy(&Var0, "FMC_LOC_LAMESA", 16);
					break;
			}
			break;
		
		case 2:
			switch (func_441())
			{
				case 0:
					StringCopy(&Var0, "FMC_LOC_STRAWB", 16);
					break;
			}
			break;
	}
	func_505("RE_DELIVER_VEH", &Var0, 12, 0);
}

void func_505(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_506(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_506(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_516(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_510();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_509();
	func_508(bParam2);
	func_507();
	return 1;
}

void func_507()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_508(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_509()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

void func_510()
{
	func_512();
	func_511(0);
}

void func_511(bool bParam0)
{
	bVar0 = unk_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_512()
{
	if (!func_515())
	{
	}
	if (func_514())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_513();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_513()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			unk_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_514()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_515()
{
	if (!func_514())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_513();
	return unk_0xB165082A56EE6E7F();
}

bool func_516(char* sParam0, char* sParam1)
{
	if (!func_514())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_517(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_518(sParam0))
	{
		return;
	}
	func_510();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_509();
	func_508(bParam1);
	func_507();
}

bool func_518(char* sParam0)
{
	if (!func_514())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_519(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_519(char* sParam0)
{
	if (!func_514())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_520()
{
	if (func_522())
	{
		func_521();
	}
}

void func_521()
{
	if (!func_514())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_510();
}

int func_522()
{
	if (!func_514())
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return 0;
	}
	return 1;
}

void func_523(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_783[iParam0].f_14;
	uVar1 = iParam1;
	Local_783[iParam0].f_1[iVar0] = uVar1;
	Local_783[iParam0].f_1[iVar0].f_1 = iParam2;
	Local_783[iParam0].f_14++;
}

int func_524()
{
	if (func_371(unk_0xFB04705FDFDCE640(), 1))
	{
		return 1;
	}
	return func_6(0, 1);
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	Local_783[iParam0] = iParam1;
	Local_783[iParam0].f_15 = iParam2;
	iLocal_1122++;
}

void func_526()
{
}

void func_527()
{
	func_531(0, 4);
	func_530(0, 1);
	func_531(1, 25);
	func_530(1, 2);
	func_528(1, 3, 151458);
	func_531(2, 27);
	func_528(2, 3, 151458);
	func_531(3, 44);
}

void func_528(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_692[iParam0].f_14;
	uVar1 = iParam1;
	Local_692[iParam0].f_1[iVar0] = uVar1;
	Local_692[iParam0].f_1[iVar0].f_1 = iParam2;
	Local_692[iParam0].f_14++;
}

int func_529()
{
	switch (func_410())
	{
		case 3:
		case 4:
		case 1:
			return 1;
		
		default:
	}
	if (func_6(0, 4) || func_6(0, 3))
	{
		return 1;
	}
	return 0;
}

void func_530(int iParam0, int iParam1)
{
	iVar0 = Local_692[iParam0].f_14;
	uVar1 = iParam1;
	Local_692[iParam0].f_1[iVar0] = uVar1;
	Local_692[iParam0].f_14++;
}

void func_531(int iParam0, int iParam1)
{
	Local_692[iParam0] = iParam1;
	iLocal_1121++;
}

void func_532()
{
	iVar0 = func_533();
	if (Local_1311[iLocal_1112].f_22 != iVar0)
	{
		Local_1311[iLocal_1112].f_22 = iVar0;
	}
}

int func_533()
{
	return 0;
}

int func_534(var uParam0, var uParam1)
{
	Local_1164.f_143 = uParam0;
	Local_1164.f_143.f_1 = uParam1;
	Local_1164.f_122 = func_535();
	Local_1164.f_123 = unk_0x09AC81E49EA267F7(0, 5);
	return 1;
}

int func_535()
{
	switch (Local_1164.f_143.f_1)
	{
		case 0:
		case 1:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 16:
		case 17:
		case 19:
		case 24:
		case 28:
		case 29:
			return unk_0x09AC81E49EA267F7(0, 3);
		
		case 2:
		case 3:
		case 4:
		case 10:
		case 14:
			return func_536(func_82(), 2, 1);
		
		case 15:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 25:
		case 26:
		case 27:
			return 0;
		
		default:
	}
	return -1;
}

int func_536(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_537()
{
	iVar0 = unk_0xF35A91B88CC1915F();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0].f_6;
	}
	return -1;
}

int func_538()
{
	iVar0 = unk_0xF35A91B88CC1915F();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0].f_5;
	}
	return -1;
}

int func_539()
{
	if (func_437(11))
	{
		return 1;
	}
	if (func_383())
	{
		return func_544(iLocal_1110);
	}
	return func_540(iLocal_1110);
}

int func_540(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 4) || !func_541(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_541(int iParam0, int iParam1)
{
	if (func_542(iParam0, 1))
	{
		return Local_1164.f_2.f_9[iParam1] == unk_0xE86C2816EDC6CAF0(func_71(iParam0));
	}
	return Local_1164.f_2.f_9[iParam1] == unk_0xE86C2816EDC6CAF0(iParam0);
}

bool func_542(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_543(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_70();
}

int func_543(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (Global_1628237[iParam0].f_11 != func_70())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_544(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_541(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_545()
{
	func_689();
	func_613();
	func_549();
	func_546();
}

void func_546()
{
	if (!func_437(30))
	{
		if (Local_407.f_45 != 0)
		{
			Call_Loc(Local_407.f_45);
			func_547(StackVal);
		}
		func_425(30);
	}
}

void func_547(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		return;
	}
	func_548(iParam0);
}

void func_548(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_35[iVar0]), iVar1);
}

void func_549()
{
	if (func_371(iLocal_1113, 0))
	{
		return;
	}
	if (func_437(11))
	{
		if (Local_407.f_18 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_407.f_18);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_407.f_18.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_407.f_18.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	if (Local_407.f_18.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Call_Loc(Local_407.f_18.f_5);
		iVar0 = round((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Call_Loc(Local_407.f_18.f_5);
		iVar1 = round((StackVal * StackVal));
	}
	if (iVar0 > 0)
	{
		func_600(iVar0);
		if (Local_220.f_114)
		{
			Global_2462880 = iVar0;
			func_16(&Global_2461144, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_220.f_114.f_1)
		{
			func_599();
		}
		func_551(0, iLocal_1111, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	Local_1079.f_4 = (Local_1079.f_4 + iVar0);
	Local_1079.f_5 = (Local_1079.f_5 + iVar1);
	func_550(0);
}

void func_550(int iParam0)
{
	if (func_15(&(Local_1311[iLocal_1112].f_1), iParam0))
	{
	}
}

int func_551(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_552(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_552(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_562(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_558(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_553(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_553(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vVar0 = { func_556(iParam0, 1) };
	if (iParam0 == func_555(unk_0x16F2683693E537C9()))
	{
		func_554(1);
	}
	func_558(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_554(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_555(int iParam0)
{
	return iParam0;
}

Vector3 func_556(int iParam0, bool bParam1)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_557(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar6 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0,18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0,18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_557(int iParam0)
{
	return iParam0;
}

void func_558(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { vParam0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_561(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_560();
			Global_2439138.f_1290[iVar1].f_10 = func_559();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_559()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_560()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_561(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0,402f;
		*uParam4 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0,212f;
		*uParam4 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam3 = (fVar2 + 0,212f);
	*uParam4 = (fVar3 + 0,286f);
	return fVar1;
}

var func_562(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_563(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_563(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_598(unk_0xD803B885F5E47A62()) || func_597(unk_0xD803B885F5E47A62()))
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
	else if (func_595() || func_593(unk_0xD803B885F5E47A62()))
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
	if (func_592(sParam2))
	{
	}
	if (func_591())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_589(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_588(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_586(0, &iVar1);
					break;
				
				case 3:
					func_586(1, &iVar1);
					break;
				
				case 1:
					func_584(&iVar1);
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
			func_582(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_573((func_581(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_582(1165, iVar1, -1);
				}
				func_568(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_564((func_566(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_564((func_566(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_564(int iParam0)
{
	if (func_591())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_565(-1804740956, iParam0);
	}
}

void func_565(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_566(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_28(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_567(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_567(-1804740956);
		}
	}
	return 0;
}

int func_567(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_568(int iParam0)
{
	Var0 = { func_72(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_571(func_572(&Var0));
			if (iVar13 == 0)
			{
				func_570(&Global_1387915, iParam0);
				func_569(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_570(&Global_1387916, iParam0);
				func_569(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_570(&Global_1387917, iParam0);
				func_569(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_570(&Global_1387918, iParam0);
				func_569(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_570(&Global_1387919, iParam0);
				func_569(1894078811, Global_1387919);
			}
		}
	}
}

void func_569(int iParam0, int iParam1)
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

void func_570(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_571(int iParam0)
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

int func_572(var uParam0)
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

void func_573(int iParam0, int iParam1, int iParam2)
{
	if (func_591())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_157(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_157(-1)])
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
		if (func_364(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_579(iParam0, 1);
		}
		func_578(639, iParam0, -1, 1);
		func_577(640, func_579(iParam0, 1), -1, 1, 0);
		Global_1388060[func_157(-1)] = iParam0;
		func_574(-1109644434, 7, 0);
	}
}

void func_574(int iParam0, int iParam1, int iParam2)
{
	if (func_576(iParam1, iParam2))
	{
		iVar0 = func_575();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_575()
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

int func_576(int iParam0, var uParam1)
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

void func_577(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_157(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_578(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_157(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_157(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_157(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_157(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_157(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_157(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_157(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_157(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_157(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_157(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_157(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_157(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_157(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_157(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_157(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_157(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_157(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_157(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_157(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_157(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_157(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_157(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_157(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_157(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_157(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_157(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_157(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_157(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_157(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_157(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_157(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_157(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_157(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_157(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_157(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_157(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_157(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_157(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_157(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_157(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_157(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_157(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_157(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_157(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_157(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_157(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_157(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_157(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_157(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_157(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_157(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_157(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_157(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_157(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_157(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_157(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_157(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_157(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_157(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_157(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_157(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_157(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_157(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_157(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_157(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_157(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_157(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_157(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_157(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_157(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_157(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_157(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_157(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_157(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_157(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_157(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_157(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_157(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_157(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_157(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_157(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_157(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_157(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_157(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_157(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_157(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_157(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_157(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_157(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_157(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_157(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_157(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_157(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_157(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_157(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_157(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_157(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_157(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_157(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_157(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_157(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_157(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_157(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_157(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_157(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_157(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_579(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_580(iParam0, 0);
}

int func_580(int iParam0, int iParam1)
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

int func_581(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_157(-1)];
			}
			else if (func_364(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_157(-1)];
	}
	return 0;
}

void func_582(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_156(iParam0, func_157(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_583(iParam0))
	{
		func_577(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_578(iParam0, iVar0, iParam2, 1);
	}
}

int func_583(int iParam0)
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

void func_584(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_276(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_73(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_585(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_585(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_585(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_586(bool bParam0, int iParam1)
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
				if (func_28(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_73(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_28(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_587(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_73(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_585(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_585(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_587(int iParam0, int iParam1)
{
	return vdist(func_65(iParam0), func_65(iParam1));
	return 0f;
}

int func_588(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_585(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_589(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_581(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_581(unk_0xD803B885F5E47A62());
		}
	}
	if (func_590(8000, 0, 0) > 0)
	{
		if (func_590(8000, 0, 0) < (iParam0 + func_581(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_590(8000, 0, 0) - func_581(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_590(int iParam0, bool bParam1, int iParam2)
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

int func_591()
{
	return 1;
}

int func_592(char* sParam0)
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

int func_593(int iParam0)
{
	return func_594(func_178(iParam0));
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_595()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_66();
	}
	return func_596(Global_4456448.f_194990);
}

int func_596(int iParam0)
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

bool func_597(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_598(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_599()
{
	Global_2462221 = 1;
}

void func_600(int iParam0)
{
	if (func_220())
	{
		func_601(-1027218631, iParam0, &uVar0, 0, 1, 0);
	}
	else
	{
		unk_0x9AC21D04D5646532(iParam0, "FM Event Completion", &uVar1);
	}
}

void func_601(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_220())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_602(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_602(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_602(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_602(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_602(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_27()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_609(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_608(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_603(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_603(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_604(iParam0);
	}
}

void func_604(int iParam0)
{
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_607(iParam0))
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
		func_605(&(Global_4263954[iParam0]));
	}
}

void func_605(var uParam0)
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
	func_606(&(uParam0->f_14));
	func_606(&(uParam0->f_14.f_13));
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

void func_606(var uParam0)
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

int func_607(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_608(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_609(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_220())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_610(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_610(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_612(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_611();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_611()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_612(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_613()
{
	if (!func_437(8))
	{
		if (func_661(0, 1, 1) && func_660())
		{
			func_614();
			func_425(8);
		}
	}
}

void func_614()
{
	if (func_437(11))
	{
		switch (func_441())
		{
			case 0:
				func_615(25, "RE_SHRD_TWIN", "RE_SHRD_SDVCRK", 1, 15000, 2, 1, 0);
				break;
			}
	}
}

int func_615(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_659(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_657(&(Var0.f_69), iParam7);
	}
	return func_616(&Var0);
}

int func_616(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_630(uParam0, uParam0->f_17);
	func_627(uParam0);
	if (func_66())
	{
		func_627(uParam0);
	}
	if (func_626(uParam0->f_1))
	{
		func_619();
		if (Global_2439138.f_2723[0].f_2 == 0)
		{
			Global_2439138.f_2723[0] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0].f_1 == 13 || Global_2439138.f_2723[0].f_1 == 53) || Global_2439138.f_2723[0].f_1 == 54) || Global_2439138.f_2723[0].f_1 == 58)
		{
			Global_2439138.f_2723[0].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1] = { Global_2439138.f_2723[iVar0] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_619();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_657(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_618(uParam0->f_69, 128))
			{
				if (func_617(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_657(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_617(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_618(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_619()
{
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_620();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_620()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_624(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_621(&(Global_2439138.f_3047.f_1));
}

void func_621(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (unk_0x757EF87A33649210() && !func_623(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_622(0);
}

void func_622(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_623(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_624(var uParam0)
{
	func_625(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_625(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_626(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_627(var uParam0)
{
	if (func_629(uParam0->f_1))
	{
		uParam0->f_72 = func_628();
	}
}

int func_628()
{
	return 21;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_630(var uParam0, int iParam1)
{
	if (func_629(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_70() || !func_28(iParam1, 0, 1))
	{
		return;
	}
	if (func_617(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_631(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_631(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_280(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_280(unk_0xD803B885F5E47A62()) || (func_656() && func_655())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_654();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_28(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_652(iParam1, iParam0, 0);
							}
							else
							{
								return func_643(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_643(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_652(iParam1, iParam0, 0);
				}
				else
				{
					return func_632(0, -1, 0);
				}
			}
			else
			{
				return func_632(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_652(iParam1, iParam0, 0);
		}
		else
		{
			return func_643(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_643(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_632(bool bParam0, int iParam1, bool bParam2)
{
	return func_633(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_633(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_642() || (func_641() && func_639())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_638(iParam2, iVar0);
		}
		else
		{
			return func_638(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_276(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_637(1);
				}
				else
				{
					return func_637(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_634(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_634(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_637(1);
	}
	return func_637(0);
}

int func_634(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_636(iParam0, iParam1, iParam3);
	if (func_635(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_635(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_636(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_276(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_637(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_636(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_639()
{
	if (func_640())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_640()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_641()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_642()
{
	if (func_640() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_643(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_649())
			{
				iVar3 = func_648(iParam0);
				if (!iVar3 == -1)
				{
					return func_646(iVar3);
				}
			}
			if ((func_645(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_276(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_637(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_644(1);
			}
			else
			{
				return func_633(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_637(1);
			}
			else
			{
				return func_633(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_648(iParam0);
	if (!iVar4 == -1)
	{
		return func_646(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_644(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_645(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_646(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_647(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_647(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_648(int iParam0)
{
	if (!iParam0 == func_70())
	{
		if (func_542(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_71(iParam0)];
		}
	}
	return -1;
}

int func_649()
{
	if (((func_348() || func_651()) || func_66()) || func_650())
	{
		return 1;
	}
	return 0;
}

var func_650()
{
	return Global_2450632.f_19;
}

var func_651()
{
	return Global_2450632.f_16;
}

int func_652(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_649())
	{
		iVar2 = func_648(iParam1);
		if (!iVar2 == -1)
		{
			return func_646(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_70())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_633(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_653(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_276(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_644(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_654()
{
	return Global_2359302.f_2;
}

bool func_655()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_656()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

void func_657(var uParam0, int iParam1)
{
	func_658(uParam0, iParam1);
}

void func_658(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_659(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_70();
	uParam1->f_18 = func_70();
	uParam1->f_19 = func_70();
	uParam1->f_20 = func_70();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_660()
{
	return 1;
}

bool func_661(bool bParam0, int iParam1, bool bParam2)
{
	return (!func_492() && func_662(iParam1, bParam0, bParam2));
}

int func_662(var uParam0, bool bParam1, bool bParam2)
{
	if (func_688(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_493(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_493(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_687(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_686())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_685(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_684())
	{
		return 0;
	}
	if (func_680(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_679(unk_0xD803B885F5E47A62()) != func_70() && func_679(unk_0xD803B885F5E47A62()) == func_71(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_677(func_678()) && !func_675(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_674())
	{
		return 0;
	}
	if (func_673())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_278(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_671())
	{
		return 0;
	}
	if (func_493(unk_0xD803B885F5E47A62(), 0) || func_493(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_493(unk_0xD803B885F5E47A62(), 12) || func_493(unk_0xD803B885F5E47A62(), 14)) || func_493(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_670(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!func_669() && !Global_2513487)
		{
			return 0;
		}
	}
	if (func_668(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_161())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_667(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_666())
	{
		return 0;
	}
	if (func_664(unk_0xD803B885F5E47A62()) && Global_1590184.f_171)
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (func_663(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (Global_2536130)
	{
		return 0;
	}
	if (Global_1694139)
	{
		return 0;
	}
	return 1;
}

int func_663(int iParam0)
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

int func_664(int iParam0)
{
	if (func_665(Global_1590535[iParam0].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_666()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_667(int iParam0)
{
	if (!func_28(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

bool func_668(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 11);
}

bool func_669()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_670(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_70())
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

int func_671()
{
	if (func_672() == 0)
	{
		return 1;
	}
	return 0;
}

int func_672()
{
	return Global_1312467.f_18;
}

bool func_673()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

bool func_674()
{
	return Global_1312877;
}

int func_675(int iParam0)
{
	if (func_676(iParam0) == 236 || func_676(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_676(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_678()
{
	return Global_2439138.f_2723[0].f_1;
}

int func_679(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_680(int iParam0)
{
	if (func_683(iParam0))
	{
		return 1;
	}
	if (func_681(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_681(int iParam0)
{
	return func_682(iParam0, 20);
}

bool func_682(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_683(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

bool func_684()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 5;
}

int func_685(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_686()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

int func_687(int iParam0)
{
	if (func_277(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_688(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_5, iParam1);
}

void func_689()
{
	if (func_693())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_692(iVar0, iLocal_1113, 16))
		{
			if (Local_1164.f_2.f_15[iVar0].f_1 != -1)
			{
				func_691(Local_1164.f_2.f_15[iVar0]);
			}
			func_690(iVar0, 16);
		}
		iVar0++;
	}
}

void func_690(int iParam0, int iParam1)
{
	if (func_15(&(Local_1311[iLocal_1112].f_3[iParam0]), iParam1))
	{
	}
}

void func_691(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1681961.f_4558[iVar0].f_1 == -1)
		{
			Global_1681961.f_4558[iVar0] = { Param0 };
			unk_0x5D96D8530B3D0904(&Global_1681961, 1);
			return;
		}
		iVar0++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1681961, 1))
	{
		unk_0x5D96D8530B3D0904(&Global_1681961, 1);
	}
}

bool func_692(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1311[iParam1].f_3[iParam0]), iParam2);
}

bool func_693()
{
	return func_694(unk_0xD803B885F5E47A62());
}

int func_694(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_695(Global_1628237[iParam0].f_579.f_12) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_579, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_695(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_70());
}

void func_696()
{
}

void func_697()
{
	func_1356();
	func_1352();
	func_1350();
	func_1316();
	if (Local_407.f_3.f_1 != 0)
	{
		Call_Loc(Local_407.f_3.f_1);
	}
	func_1229();
	func_1183();
	func_1166();
	func_1065();
	func_1060();
	func_1042();
	func_1011();
	func_949();
	func_914();
	func_913();
	func_893();
	func_889();
	func_756();
	func_753();
	func_734();
	func_709();
	func_702();
	func_698();
}

void func_698()
{
	if (func_701() != -1)
	{
		while ((func_701() < iLocal_1122 && iVar0 < Local_783[func_701()].f_14) && Local_783[func_701()].f_1[iVar0] != -1)
		{
			if (func_700(func_701(), iVar0))
			{
				Call_Loc(Local_783[func_701()].f_13);
				func_699(Local_783[func_701()].f_1[iVar0]);
				Call_Loc(Local_783[func_701()].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_699(var uParam0)
{
	Local_1311[iLocal_1112] = uParam0;
}

bool func_700(int iParam0, int iParam1)
{
	if (Local_783[iParam0].f_1[iParam1].f_1 != 0)
	{
		Call_Loc(Local_783[iParam0].f_1[iParam1].f_1);
		return StackVal;
	}
	return (Local_783[iParam0].f_1[iParam1] == func_20() || Local_783[iParam0].f_1[iParam1] == Local_1164.f_112);
}

int func_701()
{
	return Local_1311[iLocal_1112];
}

void func_702()
{
	if (!func_708())
	{
		return;
	}
	if (!func_707())
	{
		unk_0x38C3A68D7861DCFD(0, 22, 1);
		unk_0x9DD8618CA5BF832D(iLocal_1111, 102, true);
		unk_0x9DD8618CA5BF832D(iLocal_1111, 362, true);
	}
	fVar0 = func_706();
	if (fVar0 != -1f)
	{
		unk_0xCAF7AE54F764D5AA(iLocal_1111, fVar0);
	}
	fVar0 = func_705();
	if (fVar0 != -1f)
	{
		unk_0x7EB60BF335619074(iLocal_1111, fVar0);
	}
	if (func_704())
	{
		unk_0x37806EBF326ECEE9(iLocal_1111, func_703());
	}
}

Vector3 func_703()
{
	if (Local_407.f_10.f_5 != 0)
	{
		Call_Loc(Local_407.f_10.f_5);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_704()
{
	if (Local_407.f_10.f_4 != 0)
	{
		Call_Loc(Local_407.f_10.f_4);
		return StackVal;
	}
	return 0;
}

float func_705()
{
	if (Local_407.f_10.f_3 != 0)
	{
		Call_Loc(Local_407.f_10.f_3);
		return StackVal;
	}
	return 0,3f;
}

float func_706()
{
	if (Local_407.f_10.f_2 != 0)
	{
		Call_Loc(Local_407.f_10.f_2);
		return StackVal;
	}
	if (unk_0x504A57ECC0B1E81C(iLocal_1111) > 1f)
	{
		return 1,85f;
	}
	return -1f;
}

int func_707()
{
	if (Local_407.f_10.f_1 != 0)
	{
		Call_Loc(Local_407.f_10.f_1);
		return StackVal;
	}
	return 0;
}

int func_708()
{
	if (Local_407.f_10 != 0)
	{
		Call_Loc(Local_407.f_10);
		return StackVal;
	}
	return 0;
}

void func_709()
{
	if (!func_48(19) || !func_733(iLocal_1110))
	{
		return;
	}
	switch (func_732())
	{
		case 0:
			if (!func_437(33))
			{
				func_425(33);
			}
			break;
		
		case 9:
			if (func_437(33))
			{
				if ((iLocal_1085 == -1569615261 || unk_0x654E7ACE881E41FE(iLocal_1085) == -728555052) && unk_0x440C646F2F11A2A1(iLocal_1111, iLocal_1085, 0))
				{
					unk_0x5745EA6329A91E29(iLocal_1111, iLocal_1085, true);
				}
				else
				{
					func_711(2);
				}
				func_710(33);
			}
			break;
		
		case 99:
			unk_0xCAE036C45E7FC720(iLocal_1111, &iVar0, 0);
			if (iLocal_1085 != iVar0)
			{
				iLocal_1085 = iVar0;
			}
			break;
	}
}

void func_710(int iParam0)
{
	if (func_124(&uLocal_1123, iParam0))
	{
	}
}

void func_711(int iParam0)
{
	if (func_673())
	{
		iParam0 = 5;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_730();
			break;
		
		case 2:
			if ((unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), func_729(), 0) && func_729() != -1569615261) && func_729() != -72657034)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), func_729(), true);
				if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), func_729()) == 0 && func_729() != 940833800)
				{
					func_714(func_729());
				}
				if (Global_1312416 == 0 || func_729() == 0)
				{
					if (func_729() == 940833800)
					{
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), func_729(), true);
						Global_1312416 = func_729();
					}
					else
					{
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 1), false);
						Global_1312416 = unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 1);
					}
				}
				if ((!func_713(func_729()) && !func_712(func_729())) && func_729() != 0)
				{
					unk_0x9F3F2BAC54CC46D4(unk_0x16F2683693E537C9());
				}
			}
			else
			{
				unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
				if (iVar0 != 0)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, true);
				}
			}
			break;
		
		case 3:
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), func_729(), 0))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), func_729(), true);
				Global_1312416 = func_729();
			}
			break;
		
		case 4:
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), func_729(), 0))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), func_729(), true);
				Global_1312416 = func_729();
			}
			break;
		
		case 5:
			if (!Global_1662006)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				Global_1312416 = -1569615261;
			}
			break;
		
		case 6:
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 0), true);
			Global_1312416 = unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 0);
			break;
	}
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 615608432:
		case -37975472:
		case -1813897027:
		case 741814745:
		case -1420407917:
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
		case -1786099057:
		case 1737195953:
		case 1317494643:
		case 1141786504:
		case -2067956739:
		case -102323637:
		case -1834847097:
		case -656458692:
		case -102973651:
		case -581044007:
		case -538741184:
		case -853065399:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
		
		default:
	}
	return 0;
}

void func_714(int iParam0)
{
	if (func_728(Global_4456448.f_232883))
	{
		if (func_713(iParam0))
		{
			return;
		}
	}
	iVar0 = func_727(iParam0);
	if (((iVar0 == 0 || iVar0 == 29) || iVar0 == 33) || iVar0 == 31)
	{
		return;
	}
	iVar1 = iVar0;
	while (iVar1 >= 0)
	{
		iVar2 = func_726(iVar1, 0);
		if (func_715(iVar2, -1))
		{
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iVar2, 0))
			{
				if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar2) > 0)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar2, true);
					return;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	iVar1 = iVar0;
	while (iVar1 <= 85)
	{
		iVar3 = func_726(iVar1, 0);
		if (func_715(iVar3, -1))
		{
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iVar3, 0))
			{
				if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar3) > 0)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar3, true);
					return;
				}
			}
		}
		iVar1++;
	}
}

bool func_715(int iParam0, int iParam1)
{
	if (func_723() == 0)
	{
		return 0;
	}
	if (func_722())
	{
		return 0;
	}
	iVar0 = func_721(iParam0);
	if (iVar0 != 414 && func_720(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	iVar1 = func_717(iParam0, iParam1);
	iVar2 = func_716(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, func_184(iVar2));
}

int func_716(int iParam0)
{
	return func_727(iParam0);
}

int func_717(int iParam0, int iParam1)
{
	iVar0 = func_156(func_718(iParam0), iParam1, 0);
	return iVar0;
}

int func_718(int iParam0)
{
	iVar0 = func_716(iParam0);
	iVar1 = func_187(iVar0);
	if ((func_159() == 0 || func_719() == 0) || (func_159() == 999 && func_719() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2419;
				break;
		}
	}
	return 11511;
}

int func_719()
{
	return Global_30769;
}

int func_720(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_157(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 17;
			break;
		
		case 1593441988:
			return 19;
			break;
		
		case 584646201:
			return 23;
			break;
		
		case -1716589765:
			return 21;
			break;
		
		case 736523883:
			return 27;
			break;
		
		case 324215364:
			return 25;
			break;
		
		case -1074790547:
			return 31;
			break;
		
		case -2084633992:
			return 33;
			break;
		
		case -1357824103:
			return 35;
			break;
		
		case -1660422300:
			return 37;
			break;
		
		case 2144741730:
			return 39;
			break;
		
		case 487013001:
			return 43;
			break;
		
		case 2017895192:
			return 45;
			break;
		
		case -494615257:
			return 49;
			break;
		
		case 205991906:
			return 55;
			break;
		
		case 100416529:
			return 53;
			break;
		
		case -1568386805:
			return 59;
			break;
		
		case -1312131151:
			return 61;
			break;
		
		case 1119849093:
			return 63;
			break;
		
		case -1813897027:
			return 65;
			break;
		
		case -37975472:
			return 67;
			break;
		
		case 741814745:
			return 69;
			break;
		
		case 615608432:
			return 71;
			break;
		
		case 883325847:
			return 74;
			break;
		
		case -72657034:
			return 73;
			break;
		
		case -1716189206:
			return 1;
			break;
		
		case 1737195953:
			return 3;
			break;
		
		case 1317494643:
			return 11;
			break;
		
		case -1786099057:
			return 13;
			break;
		
		case -2067956739:
			return 5;
			break;
		
		case 1141786504:
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case -270015777:
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case -1654528753:
			return 47;
			break;
		
		case -102323637:
			return 142;
			break;
		
		case -1063057011:
			return 282;
			break;
		
		case -1076751822:
			return 144;
			break;
		
		case -771403250:
			return 280;
			break;
		
		case 2132975508:
			return 284;
			break;
		
		case 1627465347:
			return 286;
			break;
		
		case 137902532:
			return 309;
			break;
		
		case -1834847097:
			return 307;
			break;
		
		case -1466123874:
			return 313;
			break;
		
		case 2138347493:
			return 311;
			break;
		
		case 1198879012:
			return 301;
			break;
		
		case 984333226:
			return 325;
			break;
		
		case -952879014:
			return 327;
			break;
		
		case -1420407917:
			return 331;
			break;
		
		case 1672152130:
			return 333;
			break;
		
		case -102973651:
			return 329;
			break;
		
		case 171789620:
			return 335;
			break;
		
		case -656458692:
			return 337;
			break;
		
		case -598887786:
			return 339;
			break;
		
		case -581044007:
			return 341;
			break;
		
		case -619010992:
			return 343;
			break;
		
		case -275439685:
			return 348;
			break;
		
		case 1649403952:
			return 346;
			break;
		
		case -1951375401:
			return 350;
			break;
		
		case -1045183535:
			return 353;
			break;
		
		case -538741184:
			return 355;
			break;
		
		case 317205821:
			return 360;
			break;
		
		case -1121678507:
			return 366;
			break;
		
		case 125959754:
			return 364;
			break;
		
		case -853065399:
			return 362;
			break;
		
		case -1169823560:
			return 368;
			break;
		
		case -1810795771:
			return 370;
			break;
		
		case 419712736:
			return 9;
			break;
		
		case 961495388:
			return 31;
			break;
		
		case -86904375:
			return 33;
			break;
		
		case -608341376:
			return 39;
			break;
		
		case 177293209:
			return 55;
			break;
		
		case -1075685676:
			return 17;
			break;
		
		case 2024373456:
			return 27;
			break;
		
		case -2066285827:
			return 47;
			break;
		
		case 1785463520:
			return 327;
			break;
		
		case 1432025498:
			return 43;
			break;
		
		case -879347409:
			return 353;
			break;
		
		case -2009644972:
			return 144;
			break;
		
		case -1768145561:
			return 282;
			break;
		
		case -1746263880:
			return 394;
			break;
		
		case -1355376991:
			return 402;
			break;
		
		case 1198256469:
			return 404;
			break;
		
		case -1238556825:
			return 406;
			break;
		
		case 940833800:
			return 400;
			break;
		
		case -1853920116:
			return 410;
			break;
		
		case 727643628:
			return 408;
			break;
	}
	return 414;
}

bool func_722()
{
	return Global_1312856;
}

int func_723()
{
	if (func_725() && func_724(0))
	{
		return 1;
	}
	return 0;
}

var func_724(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_725()
{
	return func_724(func_27() + 1);
}

int func_726(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return -1075685676;
			
			case 5:
				return 2024373456;
			
			case 8:
				return 961495388;
			
			case 9:
				return -86904375;
			
			case 13:
				return -608341376;
			
			case 21:
				return 177293209;
			
			default:
		}
		switch (iParam0)
		{
			case 22:
				return 1432025498;
			
			case 46:
				return -1768145561;
			
			case 47:
				return -2009644972;
			
			case 56:
				return 1785463520;
			
			case 70:
				return -879347409;
			
			case 48:
				return -2066285827;
			}
		
		default:
	}
	switch (iParam0)
	{
		case 34:
			return -1716189206;
			break;
		
		case 1:
			return 453432689;
			break;
		
		case 2:
			return 1593441988;
			break;
		
		case 3:
			return 584646201;
			break;
		
		case 5:
			return 736523883;
			break;
		
		case 7:
			return 324215364;
			break;
		
		case 8:
			return -1074790547;
			break;
		
		case 9:
			return -2084633992;
			break;
		
		case 11:
			return -1357824103;
			break;
		
		case 12:
			return -1660422300;
			break;
		
		case 13:
			return 2144741730;
			break;
		
		case 15:
			return 741814745;
			break;
		
		case 16:
			return -1813897027;
			break;
		
		case 17:
			return -37975472;
			break;
		
		case 60:
			return -1420407917;
			break;
		
		case 18:
			return 856002082;
			break;
		
		case 20:
			return 100416529;
			break;
		
		case 21:
			return 205991906;
			break;
		
		case 56:
			return -952879014;
			break;
		
		case 22:
			return 487013001;
			break;
		
		case 24:
			return -494615257;
			break;
		
		case 25:
			return 2017895192;
			break;
		
		case 55:
			return 984333226;
			break;
		
		case 26:
			return -1568386805;
			break;
		
		case 27:
			return -1312131151;
			break;
		
		case 28:
			return 1119849093;
			break;
		
		case 61:
			return 1672152130;
			break;
		
		case 31:
			return 911657153;
			break;
		
		case 33:
			return -72657034;
			break;
		
		case 35:
			return 1737195953;
			break;
		
		case 43:
			return 883325847;
			break;
		
		case 45:
			return -102323637;
			break;
		
		case 46:
			return -1063057011;
			break;
		
		case 47:
			return -1076751822;
			break;
		
		case 48:
			return 2132975508;
			break;
		
		case 49:
			return -771403250;
			break;
		
		case 23:
			return -1654528753;
			break;
		
		case 50:
			return 1627465347;
			break;
		
		case 51:
			return -1834847097;
			break;
		
		case 52:
			return 137902532;
			break;
		
		case 57:
			return 1198879012;
			break;
		
		case 53:
			return -1466123874;
			break;
		
		case 54:
			return 2138347493;
			break;
		
		case 58:
			return -102973651;
			break;
		
		case 59:
			return 1834241177;
			break;
		
		case 64:
			return 171789620;
			break;
		
		case 62:
			return -656458692;
			break;
		
		case 63:
			return -598887786;
			break;
		
		case 65:
			return -581044007;
			break;
		
		case 68:
			return -619010992;
			break;
		
		case 66:
			return -275439685;
			break;
		
		case 67:
			return 1649403952;
			break;
		
		case 69:
			return -1951375401;
			break;
		
		case 70:
			return -1045183535;
			break;
		
		case 71:
			return -538741184;
			break;
		
		case 36:
			return 1317494643;
			break;
		
		case 4:
			return -1716589765;
			break;
		
		case 6:
			return -270015777;
			break;
		
		case 41:
			return 615608432;
			break;
		
		case 39:
			return 1141786504;
			break;
		
		case 38:
			return -2067956739;
			break;
		
		case 37:
			return -1786099057;
			break;
		
		case 72:
			return 317205821;
			break;
		
		case 73:
			return -1121678507;
			break;
		
		case 74:
			return 125959754;
			break;
		
		case 75:
			return -853065399;
			break;
		
		case 76:
			return -1169823560;
			break;
		
		case 77:
			return -1810795771;
			break;
		
		case 78:
			return 419712736;
			break;
		
		case 79:
			return -1746263880;
			break;
		
		case 80:
			return 940833800;
			break;
		
		case 81:
			return -1355376991;
			break;
		
		case 82:
			return 1198256469;
			break;
		
		case 83:
			return -1238556825;
			break;
		
		case 84:
			return -1853920116;
			break;
		
		case 85:
			return 727643628;
			break;
	}
	return -1569615261;
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

bool func_728(int iParam0)
{
	return iParam0 == 47;
}

int func_729()
{
	return Global_1312416;
}

void func_730()
{
	iVar0 = func_731();
	if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iVar0, 0))
	{
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, true);
	}
}

int func_731()
{
	iVar0 = -1569615261;
	iVar1 = 0;
	if (func_156(255, -1, 0) > iVar1)
	{
		iVar0 = 453432689;
		iVar1 = func_156(255, -1, 0);
	}
	if (func_156(285, -1, 0) > iVar1)
	{
		iVar0 = 584646201;
		iVar1 = func_156(285, -1, 0);
	}
	if (func_156(265, -1, 0) > iVar1)
	{
		iVar0 = 1593441988;
		iVar1 = func_156(265, -1, 0);
	}
	if (func_156(295, -1, 0) > iVar1)
	{
		iVar0 = 324215364;
		iVar1 = func_156(295, -1, 0);
	}
	if (func_156(305, -1, 0) > iVar1)
	{
		iVar0 = 736523883;
		iVar1 = func_156(305, -1, 0);
	}
	if (func_156(388, -1, 0) > iVar1)
	{
		iVar0 = 2017895192;
		iVar1 = func_156(388, -1, 0);
	}
	if (func_156(416, -1, 0) > iVar1)
	{
		iVar0 = 911657153;
		iVar1 = func_156(416, -1, 0);
	}
	if (func_156(467, -1, 0) > iVar1)
	{
		iVar0 = -1813897027;
		iVar1 = func_156(467, -1, 0);
	}
	if (func_156(476, -1, 0) > iVar1)
	{
		iVar0 = -37975472;
		iVar1 = func_156(476, -1, 0);
	}
	if (func_156(484, -1, 0) > iVar1)
	{
		iVar0 = 741814745;
		iVar1 = func_156(484, -1, 0);
	}
	if (func_156(493, -1, 0) > iVar1)
	{
		iVar0 = 615608432;
		iVar1 = func_156(493, -1, 0);
	}
	if (func_156(197, -1, 0) > iVar1)
	{
		iVar0 = -1716189206;
		iVar1 = func_156(197, -1, 0);
	}
	if (func_156(205, -1, 0) > iVar1)
	{
		iVar0 = 1737195953;
		iVar1 = func_156(205, -1, 0);
	}
	if (func_156(212, -1, 0) > iVar1)
	{
		iVar0 = -2067956739;
		iVar1 = func_156(212, -1, 0);
	}
	if (func_156(233, -1, 0) > iVar1)
	{
		iVar0 = 1317494643;
		iVar1 = func_156(233, -1, 0);
	}
	if (func_156(240, -1, 0) > iVar1)
	{
		iVar0 = -1786099057;
		iVar1 = func_156(240, -1, 0);
	}
	if (func_156(247, -1, 0) > iVar1)
	{
		iVar0 = 1141786504;
		iVar1 = func_156(247, -1, 0);
	}
	if (func_156(1734, -1, 0) > iVar1)
	{
		iVar0 = -102323637;
		iVar1 = func_156(1734, -1, 0);
	}
	if (func_156(275, -1, 0) > iVar1)
	{
		iVar0 = -1716589765;
		iVar1 = func_156(275, -1, 0);
	}
	if (func_156(315, -1, 0) > iVar1)
	{
		iVar0 = -270015777;
		iVar1 = func_156(315, -1, 0);
	}
	if (func_156(325, -1, 0) > iVar1)
	{
		iVar0 = -1074790547;
		iVar1 = func_156(325, -1, 0);
	}
	if (func_156(334, -1, 0) > iVar1)
	{
		iVar0 = -2084633992;
		iVar1 = func_156(334, -1, 0);
	}
	if (func_156(9492, -1, 0) > iVar1)
	{
		iVar0 = -1063057011;
		iVar1 = func_156(9492, -1, 0);
	}
	if (func_156(1744, -1, 0) > iVar1)
	{
		iVar0 = -1076751822;
		iVar1 = func_156(1744, -1, 0);
	}
	if (func_156(9503, -1, 0) > iVar1)
	{
		iVar0 = 2132975508;
		iVar1 = func_156(9503, -1, 0);
	}
	if (func_156(9483, -1, 0) > iVar1)
	{
		iVar0 = -771403250;
		iVar1 = func_156(9483, -1, 0);
	}
	if (func_156(343, -1, 0) > iVar1)
	{
		iVar0 = -1357824103;
		iVar1 = func_156(343, -1, 0);
	}
	if (func_156(352, -1, 0) > iVar1)
	{
		iVar0 = -1660422300;
		iVar1 = func_156(352, -1, 0);
	}
	if (func_156(361, -1, 0) > iVar1)
	{
		iVar0 = 2144741730;
		iVar1 = func_156(361, -1, 0);
	}
	if (func_156(370, -1, 0) > iVar1)
	{
		iVar0 = -572349828;
		iVar1 = func_156(370, -1, 0);
	}
	if (func_156(379, -1, 0) > iVar1)
	{
		iVar0 = 487013001;
		iVar1 = func_156(379, -1, 0);
	}
	if (func_156(398, -1, 0) > iVar1)
	{
		iVar0 = -1654528753;
		iVar1 = func_156(398, -1, 0);
	}
	if (func_156(407, -1, 0) > iVar1)
	{
		iVar0 = -494615257;
		iVar1 = func_156(407, -1, 0);
	}
	if (func_156(426, -1, 0) > iVar1)
	{
		iVar0 = 100416529;
		iVar1 = func_156(426, -1, 0);
	}
	if (func_156(435, -1, 0) > iVar1)
	{
		iVar0 = 205991906;
		iVar1 = func_156(435, -1, 0);
	}
	if (func_156(444, -1, 0) > iVar1)
	{
		iVar0 = -1568386805;
		iVar1 = func_156(444, -1, 0);
	}
	if (func_156(451, -1, 0) > iVar1)
	{
		iVar0 = -1312131151;
		iVar1 = func_156(451, -1, 0);
	}
	if (func_156(460, -1, 0) > iVar1)
	{
		iVar0 = 1119849093;
		iVar1 = func_156(460, -1, 0);
	}
	if (func_156(9795, -1, 0) > iVar1)
	{
		iVar0 = 137902532;
		iVar1 = func_156(9795, -1, 0);
	}
	if (func_156(9785, -1, 0) > iVar1)
	{
		iVar0 = -1834847097;
		iVar1 = func_156(9785, -1, 0);
	}
	if (func_156(9805, -1, 0) > iVar1)
	{
		iVar0 = 2138347493;
		iVar1 = func_156(9805, -1, 0);
	}
	if (func_156(9815, -1, 0) > iVar1)
	{
		iVar0 = -1466123874;
		iVar1 = func_156(9815, -1, 0);
	}
	if (func_156(9919, -1, 0) > iVar1)
	{
		iVar0 = -1420407917;
		iVar1 = func_156(9919, -1, 0);
	}
	if (func_156(9911, -1, 0) > iVar1)
	{
		iVar0 = -102973651;
		iVar1 = func_156(9911, -1, 0);
	}
	if (func_156(9927, -1, 0) > iVar1)
	{
		iVar0 = 1672152130;
		iVar1 = func_156(9927, -1, 0);
	}
	if (func_156(9492, -1, 0) > iVar1)
	{
		iVar0 = -1063057011;
		iVar1 = func_156(9492, -1, 0);
	}
	if (func_156(9512, -1, 0) > iVar1)
	{
		iVar0 = 1627465347;
		iVar1 = func_156(9512, -1, 0);
	}
	if (func_156(9893, -1, 0) > iVar1)
	{
		iVar0 = 984333226;
		iVar1 = func_156(9893, -1, 0);
	}
	if (func_156(9903, -1, 0) > iVar1)
	{
		iVar0 = -952879014;
		iVar1 = func_156(9903, -1, 0);
	}
	if (func_156(9937, -1, 0) > iVar1)
	{
		iVar0 = 171789620;
		iVar1 = func_156(9937, -1, 0);
	}
	if (func_156(9954, -1, 0) > iVar1)
	{
		iVar0 = -598887786;
		iVar1 = func_156(9954, -1, 0);
	}
	if (func_156(9945, -1, 0) > iVar1)
	{
		iVar0 = -656458692;
		iVar1 = func_156(9945, -1, 0);
	}
	if (func_156(9962, -1, 0) > iVar1)
	{
		iVar0 = -581044007;
		iVar1 = func_156(9962, -1, 0);
	}
	if (func_156(9972, -1, 0) > iVar1)
	{
		iVar0 = -619010992;
		iVar1 = func_156(9972, -1, 0);
	}
	if (func_156(10008, -1, 0) > iVar1)
	{
		iVar0 = -1951375401;
		iVar1 = func_156(10008, -1, 0);
	}
	if (func_156(10036, -1, 0) > iVar1)
	{
		iVar0 = -538741184;
		iVar1 = func_156(10036, -1, 0);
	}
	if (func_156(10028, -1, 0) > iVar1)
	{
		iVar0 = -1045183535;
		iVar1 = func_156(10028, -1, 0);
	}
	if (func_156(10000, -1, 0) > iVar1)
	{
		iVar0 = -275439685;
		iVar1 = func_156(10000, -1, 0);
	}
	if (func_156(9990, -1, 0) > iVar1)
	{
		iVar0 = 1649403952;
		iVar1 = func_156(9990, -1, 0);
	}
	if (func_156(10079, -1, 0) > iVar1)
	{
		iVar0 = 317205821;
		iVar1 = func_156(10079, -1, 0);
	}
	if (func_156(10087, -1, 0) > iVar1)
	{
		iVar0 = -853065399;
		iVar1 = func_156(10087, -1, 0);
	}
	if (func_156(10095, -1, 0) > iVar1)
	{
		iVar0 = 125959754;
		iVar1 = func_156(10095, -1, 0);
	}
	if (func_156(10105, -1, 0) > iVar1)
	{
		iVar0 = -1121678507;
		iVar1 = func_156(10105, -1, 0);
	}
	if (func_156(10113, -1, 0) > iVar1)
	{
		iVar0 = -1169823560;
		iVar1 = func_156(10113, -1, 0);
	}
	if (func_156(10121, -1, 0) > iVar1)
	{
		iVar0 = -1810795771;
		iVar1 = func_156(10121, -1, 0);
	}
	if (func_156(226, -1, 0) > iVar1)
	{
		iVar0 = 419712736;
		iVar1 = func_156(226, -1, 0);
	}
	if (func_156(10567, -1, 0) > iVar1)
	{
		iVar0 = -1075685676;
		iVar1 = func_156(10567, -1, 0);
	}
	if (func_156(10577, -1, 0) > iVar1)
	{
		iVar0 = 2024373456;
		iVar1 = func_156(10577, -1, 0);
	}
	if (func_156(10557, -1, 0) > iVar1)
	{
		iVar0 = 177293209;
		iVar1 = func_156(10557, -1, 0);
	}
	if (func_156(10547, -1, 0) > iVar1)
	{
		iVar0 = -608341376;
		iVar1 = func_156(10547, -1, 0);
	}
	if (func_156(10527, -1, 0) > iVar1)
	{
		iVar0 = 961495388;
		iVar1 = func_156(10527, -1, 0);
	}
	if (func_156(10537, -1, 0) > iVar1)
	{
		iVar0 = -86904375;
		iVar1 = func_156(10537, -1, 0);
	}
	if (func_156(10587, -1, 0) > iVar1)
	{
		iVar0 = -2066285827;
		iVar1 = func_156(10587, -1, 0);
	}
	if (func_156(10607, -1, 0) > iVar1)
	{
		iVar0 = 1785463520;
		iVar1 = func_156(10607, -1, 0);
	}
	if (func_156(10597, -1, 0) > iVar1)
	{
		iVar0 = 1432025498;
		iVar1 = func_156(10597, -1, 0);
	}
	if (func_156(10617, -1, 0) > iVar1)
	{
		iVar0 = -879347409;
		iVar1 = func_156(10617, -1, 0);
	}
	if (func_156(10637, -1, 0) > iVar1)
	{
		iVar0 = -2009644972;
		iVar1 = func_156(10637, -1, 0);
	}
	if (func_156(10647, -1, 0) > iVar1)
	{
		iVar0 = -1768145561;
		iVar1 = func_156(10647, -1, 0);
	}
	if (func_156(10627, -1, 0) > iVar1)
	{
		iVar0 = -1746263880;
		iVar1 = func_156(10627, -1, 0);
	}
	if (func_156(11459, -1, 0) > iVar1)
	{
		iVar0 = -1853920116;
		iVar1 = func_156(11459, -1, 0);
	}
	if (func_156(11449, -1, 0) > iVar1)
	{
		iVar0 = 727643628;
		iVar1 = func_156(11449, -1, 0);
	}
	return iVar0;
}

int func_732()
{
	return Global_2425662[unk_0xD803B885F5E47A62()].f_222;
}

int func_733(int iParam0)
{
	return 0;
}

void func_734()
{
	if (func_680(iLocal_1110))
	{
		return;
	}
	if (func_410() != 0)
	{
		return;
	}
	if (!bLocal_1107)
	{
		return;
	}
	if (func_437(25))
	{
		func_752();
	}
	if (func_751(0))
	{
		func_752();
		if (func_733(iLocal_1110))
		{
			return;
		}
	}
	if (func_750(iLocal_1110, 0, 1, 0))
	{
		func_752();
		if (func_733(iLocal_1110))
		{
			return;
		}
	}
	iVar0 = 0;
	if (func_748(func_749()))
	{
		func_550(3);
	}
	else if (!func_748(func_747()))
	{
		if (func_371(iLocal_1113, 3))
		{
			func_746(3);
			iVar0 = 1;
		}
	}
	func_735(iVar0);
}

void func_735(int iParam0)
{
	if (func_745(iParam0))
	{
		func_738();
	}
	if (func_736(func_737()))
	{
		unk_0x38C3A68D7861DCFD(0, 357, 1);
		if (unk_0xB9132A06AE472728(2, 51) || unk_0x9A01369A10646AFE(2, 51))
		{
			func_752();
			unk_0xA37A90C62806D848(1);
		}
	}
}

int func_736(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_737()
{
	return "FMH_LEFTRANGE";
}

void func_738()
{
	if (!bLocal_1117)
	{
		func_744();
		return;
	}
	if (!func_740())
	{
		return;
	}
	if (!func_371(iLocal_1113, 8))
	{
		func_739(func_737(), -1);
		func_550(8);
	}
}

void func_739(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_740()
{
	if ((((((((((!func_743() && !func_742()) && !unk_0x798A3F1296751F46()) && !unk_0x0178C60FEA5C5A75()) && bLocal_1107) && !func_741()) && func_437(9)) && !unk_0xFEBC1E4EC9E001F0()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x7BCE0E6DD4A1F749())
	{
		return 1;
	}
	return 0;
}

bool func_741()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

bool func_742()
{
	return Global_73825;
}

bool func_743()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_744()
{
	if (func_736(func_737()))
	{
		unk_0xA37A90C62806D848(1);
	}
}

int func_745(var uParam0)
{
	return 0;
}

void func_746(int iParam0)
{
	if (func_124(&(Local_1311[iLocal_1112].f_1), iParam0))
	{
	}
}

float func_747()
{
	return 250f;
}

bool func_748(float fParam0)
{
	Call_Loc(Local_407.f_37);
	vVar0 = { StackVal, StackVal, StackVal };
	if (func_31(vVar0))
	{
		return 0;
	}
	return vdist2(vLocal_1114, vVar0) <= (fParam0 * fParam0);
}

float func_749()
{
	return 200f;
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if ((((iParam1 || !func_6(iVar0, 4)) && (iParam2 || !func_692(iVar0, unk_0x7B9C1F53FE442D06(iParam0), 1))) && (iParam3 || !func_692(iVar0, unk_0x7B9C1F53FE442D06(iParam0), 12))) && func_692(iVar0, unk_0x7B9C1F53FE442D06(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_751(bool bParam0)
{
	if (unk_0x405E212DDE472467(iLocal_1111, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iLocal_1111, 0);
		iVar1 = unk_0xD6DF381716822EFE(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = func_378(iVar0, (iVar2 - 1), 0, 0);
			if (unk_0xC844350D5D58C99A(iVar3) && unk_0x34BFC6F0CB887BC2(iVar3))
			{
				iVar4 = unk_0x83FACCC48B68F9D1(iVar3);
				if (func_733(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_1111)
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
			iVar2++;
		}
	}
	return 0;
}

void func_752()
{
}

void func_753()
{
	if (func_733(iLocal_1110))
	{
		if (!func_755())
		{
			func_754(1);
		}
	}
}

void func_754(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 9))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_1734), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 9))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_1734), 9);
	}
}

bool func_755()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 9);
}

void func_756()
{
	if (func_437(10) && !unk_0xEA6BC48857E0AC4C(&(Local_220.f_110)))
	{
		func_757(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, &(Local_220.f_110));
	}
}

void func_757(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	if (func_879(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_877() || iParam2 == 28)
	{
		if (func_830(iParam1, iParam2, uParam3, Global_1574185, 0, func_875(), sParam7))
		{
			func_829(1);
			if ((!func_828() && !func_827()) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
			{
				if (func_826())
				{
					func_824();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_823(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_822(iParam1, 0, 0);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_28(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
									if (!func_25(iVar35, 0))
									{
										if ((func_821(iVar35) || Global_2425662[iVar35].f_236 != -1) || func_820(iVar35))
										{
											iVar44 = iVar35;
											if (func_543(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_817(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_814(unk_0xD803B885F5E47A62(), 0) && func_178(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_813())
							{
								if (func_28(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
								}
								else
								{
									iVar35 = func_70();
								}
							}
							else
							{
								iVar35 = uParam0[iVar52]->f_1;
							}
							if ((func_812(iVar35) && func_807(iVar35, iParam2)) && func_28(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44].f_211.f_6;
								Var38 = { func_802(iVar35) };
								if (iVar35 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar35), 64);
								*uParam4[iVar52] = { func_72(iVar35) };
								iVar37 = func_796(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if (uParam0[iVar52]->f_22 != -1f)
								{
									fVar45 = uParam0[iVar52]->f_22;
								}
								if (uParam0[iVar52]->f_31 != -1)
								{
									iVar46 = uParam0[iVar52]->f_31;
								}
								if (uParam0[iVar52]->f_41 != -1)
								{
									iVar47 = uParam0[iVar52]->f_41;
								}
								iVar43 = uParam0[iVar52]->f_9;
								if ((uParam0[iVar52]->f_9 != -1 || uParam0[iVar52]->f_22 != -1f) || uParam0[iVar52]->f_31 != -1)
								{
									if (!func_813())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_791(&iVar43, &fVar45, uParam0[iVar52]->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_790(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = uParam0[iVar52]->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_789(iVar35, 0);
								if (bVar34)
								{
									if (func_542(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44].f_1 = iVar53;
								if (uParam0[iVar52]->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, uParam0[iVar52]->f_39, 16);
								}
								if (func_788(iParam5))
								{
									func_787(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								else
								{
									func_787(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x117658E336116132(iVar52);
							if (func_28(iVar35, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar49, iVar35))
							{
								iVar35 = unk_0x117658E336116132(iVar52);
							}
							else
							{
								iVar35 = func_70();
							}
							if (func_812(iVar35))
							{
								if (func_28(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44].f_211.f_6;
									Var38 = { func_802(iVar35) };
									*uParam4[iVar52] = { func_72(iVar35) };
									iVar37 = func_796(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									iVar51 = func_789(iVar35, 1);
									if (bVar34)
									{
										if (func_542(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44].f_1 = iVar53;
									func_769(iVar35, unk_0x6E524813889AECF8(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_766(uParam3, iParam1, iParam2);
						}
						func_22(&(uParam3->f_21));
						func_765();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_764(uParam3, iParam1);
							func_763(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_764(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_760(uParam3))
						{
							Global_1574406 = 1;
						}
						func_758(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(7);
						unk_0xEF45C43067063F18(*iParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_765();
			func_823(0);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_758(var uParam0)
{
	if (!func_13(&(uParam0->f_21)))
	{
		func_12(&(uParam0->f_21), 0, 0);
	}
	else if (func_11(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_759(0);
	}
}

void func_759(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_760(var uParam0)
{
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x117658E336116132(uParam0->f_37);
	if (iVar15 != func_70() && func_28(iVar15, 0, 1))
	{
		Var2 = { func_72(iVar15) };
		iVar1 = func_762(uParam0, uParam0->f_37);
		if (func_149(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_761(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_761(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_761(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_761(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_761(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_761(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_761(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

var func_762(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1];
}

void func_763(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_764(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_35);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_765()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_766(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_70())
		{
			if (func_28(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0].f_1 != -1)
				{
					iVar1 = func_768(uParam0->f_38[iVar0], 0, iParam2);
					func_767(iParam1, uParam0->f_38[iVar0].f_1, iVar1, Global_1590535[iVar0].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_767(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_768(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_769(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	if (iParam4 >= func_786() && iParam4 < func_785())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_784("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_784(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_784("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(-1);
			func_784("");
			if (uParam3->f_108 == 6)
			{
				func_784("");
			}
			else
			{
				func_784(&sParam5);
			}
			func_774(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_773(uParam3))
			{
				func_772("DPAD_FRIEND");
			}
			else if (func_771(uParam3))
			{
				func_772("DPAD_FRIEND");
			}
			else if (func_770(uParam3))
			{
				func_772("DPAD_CREW");
			}
			else
			{
				func_772("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_770(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_771(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_772(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_773(var uParam0)
{
	if (func_771(uParam0) && func_770(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_774(var uParam0, int iParam1)
{
	if (func_783(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_778(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam1].f_413, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_775())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_36);
	}
}

int func_775()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_776() || func_348())
		{
			return 1;
		}
	}
	return 0;
}

bool func_776()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_348();
	}
	return func_777(Global_4456448.f_194990);
}

int func_777(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_778(int iParam0)
{
	if ((func_28(iParam0, 0, 1) && func_779()) && func_180(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_779()
{
	if (func_782(unk_0xD803B885F5E47A62()) || func_781())
	{
		if (!func_780(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_780(int iParam0)
{
	if (func_676(iParam0) == 236 || func_676(iParam0) == 150)
	{
		return func_683(iParam0);
	}
	return 0;
}

int func_781()
{
	switch (func_178(unk_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_782(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

int func_783(int iParam0)
{
	if (func_775())
	{
		if (func_28(iParam0, 0, 1))
		{
			return func_543(iParam0);
		}
	}
	if ((func_28(iParam0, 0, 1) && func_779()) && func_182(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_784(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_785()
{
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_786()
{
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_787(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	if (iParam3 >= func_786() && iParam3 < func_785())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_784("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_772(sParam16);
				}
				else
				{
					func_784(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_784("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(-1);
				}
				if (func_813())
				{
					func_784("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_104));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_772(&(uParam2->f_104));
					}
					else
					{
						func_784("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 6);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != -1)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_784("");
				}
				if (uParam2->f_108 == 6)
				{
					func_784("");
				}
				else
				{
					func_784(&sParam4);
				}
				func_774(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_784("");
					func_784("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_773(uParam2))
				{
					func_772("DPAD_FRIEND");
				}
				else if (func_771(uParam2))
				{
					func_772("DPAD_FRIEND");
				}
				else if (func_770(uParam2))
				{
					func_772("DPAD_CREW");
				}
				else
				{
					func_772("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_788(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_789(int iParam0, bool bParam1)
{
	iVar0 = 116;
	if ((!bParam1 && func_782(iParam0)) && !func_681(iParam0))
	{
		iVar0 = func_628();
	}
	iVar1 = func_648(iParam0);
	if (!iVar1 == -1)
	{
		return func_646(iVar1);
	}
	return iVar0;
}

char* func_790(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_791(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_795(iParam3))
	{
		*fParam1 = (func_792(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_788(iParam3))
	{
		*fParam1 = (func_792(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_792(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_794(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_793(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_793(float fParam0)
{
	return (fParam0 / 1,609344f);
}

float func_794(float fParam0)
{
	return (fParam0 / 0,3048f);
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_796(int iParam0)
{
	iVar0 = func_799(iParam0);
	if (iVar0 == -1)
	{
		func_797(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_797(int iParam0, bool bParam1)
{
	if (!func_28(iParam0, 0, 1))
	{
		return;
	}
	if (func_799(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_798(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_798(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_799(int iParam0)
{
	if (!func_28(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_800(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_800(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_801(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_801(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_70();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_802(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		Global_2513218 = { func_72(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_149(Global_2513218))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_806(&Global_2513218))
		{
			Global_2513148 = { func_804(iParam0) };
			func_803(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_803(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_804(int iParam0)
{
	if (func_805(iParam0))
	{
		return Global_1312909[unk_0xD803B885F5E47A62()];
	}
	Var0 = { func_72(iParam0) };
	unk_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

int func_805(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_806(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_807(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_811(iParam0) || func_810(iParam0)) || func_809(iParam0))
		{
			return 0;
		}
	}
	if (!func_808(iParam0))
	{
		return 0;
	}
	if ((!func_821(iParam0) && Global_2425662[iParam0].f_236 == -1) && !func_820(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_808(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_142, 22);
}

bool func_809(int iParam0)
{
	if (func_811(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 8);
}

int func_810(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 9));
	}
	return 0;
}

bool func_811(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 2);
}

int func_812(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	if (func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_813()
{
	switch (func_178(unk_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_676(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_681(unk_0xD803B885F5E47A62()))
	{
		switch (func_178(unk_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_780(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_814(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_815(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_815(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_816(iParam0, 0);
	return 0;
}

int func_816(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_28(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_25(iVar1, 0))
			{
				if ((func_821(iVar1) || Global_2425662[iVar1].f_236 != -1) || func_820(iVar1))
				{
					if (func_818(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_818(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_70())
	{
		if (!bParam2)
		{
			if (func_819(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_70())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_819(int iParam0, int iParam1)
{
	if (iParam1 != func_70())
	{
		if (iParam0 != func_70())
		{
			if (Global_1628237[iParam0].f_11 != func_70())
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

bool func_820(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_821(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		if (func_28(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_178(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_822(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_823(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_824()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
	{
		if (func_741())
		{
			func_825();
		}
	}
}

void func_825()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_657(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

int func_826()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0) && func_741())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1) && func_741())
	{
		return 1;
	}
	return 0;
}

int func_827()
{
	if (func_741())
	{
		if (func_617(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_828()
{
	if (func_741())
	{
		if (func_629(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_829(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_830(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_874(iParam1);
	fVar7 = func_873();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_872())
		{
			if (func_871() > 0 && Global_1574187)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar7);
				unk_0x3584F71E5CA29322(18);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_861())
		{
			func_860(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_860(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_13(&(uParam2->f_19)))
	{
		if (func_871() == 1)
		{
			func_859(bVar6, iParam0, 0);
			func_12(&(uParam2->f_19), 0, 0);
			func_860(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_13(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_11(&(uParam2->f_19), 10000, 0) || (func_871() == 0 && !bParam5))
		{
			func_860(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_858();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(18);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_858();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (func_859(bVar6, iParam0, 0))
				{
					func_822(iParam0, 0, 0);
					sVar4 = func_856(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_854(iParam1) };
					if (bParam4)
					{
						func_851(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_844(iParam0, func_848(uParam2), func_845(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_838(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar9 = sParam6;
						}
						func_836(iParam0, sVar9, func_837(), -1);
					}
					else if (func_775())
					{
						uParam2->f_34 = Global_1574186;
						func_851(iParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_831(iParam1);
						uParam2->f_34 = Global_1574186;
						func_851(iParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_831(iParam1);
						func_851(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_831(int iParam0)
{
	iVar0 = -1;
	if (func_835())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_834(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_833(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_832(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_595())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_832(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_833(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_834(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_835()
{
	return Global_4456448.f_1 == 0;
}

void func_836(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_772(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_772("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_837()
{
	switch (func_178(unk_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_838(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_178(unk_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_840())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_179(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_179(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_839(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_840()
{
	return (func_843() && func_841(func_842()));
}

int func_841(int iParam0)
{
	return func_182(iParam0, 1);
}

int func_842()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35;
}

bool func_843()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 148;
}

void func_844(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_772(sParam1);
		}
		else if (func_676(unk_0xD803B885F5E47A62()) == 133)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_772("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_845(var uParam0)
{
	iVar0 = func_676(unk_0xD803B885F5E47A62());
	if (func_847())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_846())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_846()
{
	if (func_676(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_847()
{
	return Global_1590408;
}

char* func_848(var uParam0)
{
	iVar0 = func_676(unk_0xD803B885F5E47A62());
	if (func_847())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_850() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_850() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_846())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_849() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_849()
{
	return Global_2537071.f_5048;
}

int func_850()
{
	if (func_676(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_851(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_784(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_772(sParam1);
		}
		if (func_872() && iParam6)
		{
			if (func_853())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_772(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_852(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_66())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_852(int iParam0)
{
	if (func_834(iParam0) || func_833(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_853()
{
	return Global_1574187;
}

struct<4> func_854(int iParam0)
{
	StringCopy(&Var0, "", 16);
	if (func_855(unk_0xD803B885F5E47A62()) || func_832(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_775() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_855(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

char* func_856(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0 == 20 && (!func_775() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_857();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_857()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_858()
{
	Global_42351 = 1;
}

bool func_859(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_860(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_765();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_13(&(uParam1->f_19)))
		{
			func_22(&(uParam1->f_19));
			unk_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_33, 0))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_33), 0);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_861()
{
	if (func_743())
	{
		return 0;
	}
	if (func_684())
	{
		return 0;
	}
	if (!func_869())
	{
		return 0;
	}
	if (!func_671())
	{
		return 0;
	}
	if (func_868(8, -1))
	{
		return 0;
	}
	if (func_871() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_673())
	{
		return 0;
	}
	else if (!func_277(unk_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0] > 0)
	{
		return 0;
	}
	if (((func_867(1) || func_865(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_864() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_280(unk_0xD803B885F5E47A62()) && !func_864())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_863(0))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_862(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_862(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6);
}

bool func_863(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, iParam0);
}

bool func_864()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 0));
}

int func_865(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_866(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0, 25) || unk_0x06F8112AA79C53D9(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 19) || (!bParam0 && unk_0x7FEE810EE9E768EB(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0, 166) || unk_0x06F8112AA79C53D9(0, 167)) || unk_0x06F8112AA79C53D9(0, 168)) || unk_0x06F8112AA79C53D9(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0, 166) || unk_0x7FEE810EE9E768EB(0, 167)) || unk_0x7FEE810EE9E768EB(0, 168)) || unk_0x7FEE810EE9E768EB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_866(int iParam0)
{
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_867(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_868(int iParam0, int iParam1)
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

int func_869()
{
	if (func_870())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_870()
{
	return Global_1312440;
}

int func_871()
{
	return Global_1377170.f_68;
}

int func_872()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_873()
{
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_874(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_875()
{
	if (func_876(unk_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_876(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_25(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

int func_877()
{
	if (func_875())
	{
		return 1;
	}
	if (func_809(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_847())
	{
		return 1;
	}
	if (func_782(unk_0xD803B885F5E47A62()))
	{
		switch (func_676(unk_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_878(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_878(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_878(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_878(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 4);
}

int func_879(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_782(unk_0xD803B885F5E47A62()) && !func_681(unk_0xD803B885F5E47A62())) && !func_780(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_177(unk_0xD803B885F5E47A62(), 0) && func_681(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_880(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_880(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_782(iParam0) && !func_811(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_681(iParam0);
	uVar3 = func_495();
	uVar4 = func_884();
	if ((bVar1 && (func_683(iParam0) || func_883(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_882(iParam0)) && !func_881(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_881(int iParam0)
{
	return func_682(iParam0, 19);
}

int func_882(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_682(iParam0, 9);
	}
	return 0;
}

int func_883(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_884()
{
	if ((func_682(unk_0xD803B885F5E47A62(), 21) || func_682(unk_0xD803B885F5E47A62(), 22)) || func_888())
	{
		return 1;
	}
	if (func_886())
	{
		func_885(22);
		return 1;
	}
	return 0;
}

void func_885(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

int func_886()
{
	if (func_177(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_495() && !func_494()) || func_493(unk_0xD803B885F5E47A62(), 21)) || func_493(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_887(27);
		}
	}
	return 0;
}

void func_887(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

int func_888()
{
	return func_720(358, -1);
}

void func_889()
{
	if (Local_407.f_252 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_163)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_407.f_252);
		if (StackVal)
		{
			if (func_892(iVar0))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_216[iVar0]))
				{
					iLocal_216[iVar0] = unk_0x3F3860E60C44719E(Local_220.f_163.f_1[iVar0], Local_220.f_163.f_1[iVar0].f_3);
					func_891(&(iLocal_216[iVar0]), Local_220.f_163.f_1[iVar0].f_4);
					unk_0x7F010F50CE03A8AF(iLocal_216[iVar0], 85);
				}
			}
			if (!unk_0xE4EDC4B0E92C078B(iLocal_218[iVar0]))
			{
				Stack.Push(Local_407.f_252.f_4 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_407.f_252.f_4);
				if (StackVal && unk_0xE5DBF9B6126856CA(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_407.f_252.f_4);
					iLocal_218[iVar0] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(StackVal));
				}
				else
				{
					iLocal_218[iVar0] = unk_0x6CC513A908911CF0(Local_220.f_163.f_1[iVar0]);
				}
				unk_0xBC8E0A7390523199(iLocal_218[iVar0], func_459());
				func_891(&(iLocal_218[iVar0]), func_457());
				unk_0x516E63E474722206(iLocal_218[iVar0], func_454());
				if (Local_407.f_252.f_3 != 0)
				{
					Stack.Push(iLocal_218[iVar0]);
					Stack.Push(iVar0);
					Call_Loc(Local_407.f_252.f_3);
					unk_0xDC5B2F9D0CCE3A10(StackVal, StackVal);
				}
				if (!func_437(29))
				{
					unk_0x4A51D2E4732BD556();
					func_425(29);
				}
			}
			else if (unk_0x8FBD6436A27198B4(iLocal_218[iVar0]) != func_890(func_457()))
			{
				func_891(&(iLocal_218[iVar0]), func_457());
			}
			if (Local_407.f_252.f_2 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_407.f_252.f_2);
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_216[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_216[iVar0]));
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_218[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_218[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_891(var uParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_890(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_892(int iParam0)
{
	if (Local_407.f_252.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_252.f_1);
		return StackVal;
	}
	return 1;
}

void func_893()
{
	iVar0 = iLocal_1111;
	if (unk_0xEB6A8945D1AC98A1(iVar0))
	{
		return;
	}
	bVar3 = (unk_0xC7BC967711A8A063(iVar0) || func_912(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_220.f_144)
	{
		bVar2 = false;
		if ((func_31(Local_220.f_144[iVar1].f_2) || func_31(Local_220.f_144[iVar1].f_5)) || Local_220.f_144[iVar1].f_8 == 0f)
		{
			Jump @608; //curOff = 116
		}
		else
		{
			vVar4 = { Local_220.f_144[iVar1].f_2 };
			vVar7 = { Local_220.f_144[iVar1].f_5 };
			fVar10 = Local_220.f_144[iVar1].f_8;
		}
		if (((((func_85(iVar1, 0) || func_85(iVar1, 1)) || func_85(iVar1, 2)) || func_85(iVar1, 6)) || func_85(iVar1, 7)) || func_85(iVar1, 8))
		{
			if (unk_0x3D1053F9EB43B7AD(iVar0, vVar4, vVar7, fVar10, 0, true, 0))
			{
				Stack.Push(func_85(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_550(1);
				}
				Stack.Push(func_85(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_911(iVar1, 1);
					func_908(iVar1, 1);
					bVar2 = true;
					if (!func_48(14))
					{
						func_752();
					}
				}
				Stack.Push(func_85(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_85(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_911(iVar1, 1);
					bVar2 = true;
					if (!func_48(14))
					{
						func_752();
					}
				}
				Stack.Push(func_85(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_911(iVar1, 1);
					bVar2 = true;
					func_904(iVar1);
				}
				Stack.Push(func_85(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_911(iVar1, 1);
					bVar2 = true;
					func_901(iVar1);
				}
			}
			if (!bVar2)
			{
				func_911(iVar1, 0);
			}
			if (func_85(iVar1, 1) || func_85(iVar1, 2))
			{
				if (func_900(iVar1))
				{
					func_894(iVar1, bVar2);
				}
			}
		}
		if (func_85(iVar1, 3))
		{
			func_908(iVar1, 1);
		}
		iVar1++;
	}
}

void func_894(int iParam0, bool bParam1)
{
	if (func_478(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_85(iParam0, 5))
		{
			func_895();
		}
		if (!func_13(&(Local_1164.f_90.f_4[iParam0])))
		{
			func_12(&(Local_1164.f_90.f_4[iParam0]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_1164.f_90.f_4[iParam0]));
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_250);
			if (func_11(StackVal, StackVal, 0))
			{
				func_908(iParam0, 1);
			}
		}
	}
	else
	{
		func_22(&(Local_1164.f_90.f_4[iParam0]));
	}
}

int func_895()
{
	iVar0 = func_899();
	if (iVar0 != -1)
	{
		func_896(unk_0x1B50683925F00106(Local_1164.f_24[iVar0]), func_898(iVar0), 35);
		return 1;
	}
	return 0;
}

void func_896(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_897(iParam2), 1);
}

int func_897(int iParam0)
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

char* func_898(int iParam0)
{
	return "PROVOKE_TRESPASS";
}

int func_899()
{
	iVar1 = -1;
	fVar6 = 999999,9f;
	vVar2 = { vLocal_1114 };
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_24[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_1164.f_24[iVar0]))
			{
				if (!unk_0xEA6BC48857E0AC4C(func_898(iVar0)))
				{
					if (!unk_0x28072FDD60CE3A6E(unk_0x1B50683925F00106(Local_1164.f_24[iVar0]), 1))
					{
						fVar5 = vdist(vVar2, unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_1164.f_24[iVar0]), 0));
						if (fVar5 < fVar6)
						{
							fVar6 = fVar5;
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_900(int iParam0)
{
	if (Local_1101[iParam0].f_1 != -1 && func_441() != Local_1101[iParam0].f_1)
	{
		return 0;
	}
	return 1;
}

void func_901(int iParam0)
{
	if (func_902())
	{
	}
}

int func_902()
{
	if (unk_0x405E212DDE472467(iLocal_1111, 0))
	{
		return func_903();
	}
	else if (bLocal_1107)
	{
		unk_0xDA55CDFB97015579(vLocal_1114, 72, 1f, 1, 0, 1065353216, 0);
		unk_0xD458AC1C1D29C3B4(iLocal_1111, 0, 0);
		return 1;
	}
	return 0;
}

int func_903()
{
	iVar0 = unk_0x3C66DF04E6EA3587(iLocal_1111);
	if (unk_0xAFE0D3608EDA7039(iVar0))
	{
		if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0)))
		{
			unk_0xED2FE8C1F8C4F31C(iVar0, 1, 0, 0);
			return 1;
		}
		else
		{
			unk_0xCCB891029A74A633(iVar0, 1, 0, -1);
			return 1;
		}
	}
	return 0;
}

void func_904(int iParam0)
{
	Stack.Push(&(Local_1311[iLocal_1112].f_23.f_4[iParam0].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_250);
	if (!func_11(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_250);
		iVar0 = (StackVal - func_907(&(Local_1311[iLocal_1112].f_23.f_4[iParam0].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			func_906(&(Local_1101[iParam0]));
			if (func_905(&(Local_1101[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (func_905(&(Local_1101[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_902())
	{
	}
}

int func_905(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(*uParam0, sParam1, sParam2, iParam3);
		return 1;
	}
	return 0;
}

void func_906(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0x55D0A2DB35045A35(*uParam0);
		unk_0x43A06902454A1172(*uParam0);
		*uParam0 = -1;
	}
}

int func_907(var uParam0, bool bParam1, bool bParam2)
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

void func_908(int iParam0, bool bParam1)
{
	if (!func_900(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_106(&(Local_1311[iLocal_1112].f_23), iParam0))
		{
			func_910(&(Local_1311[iLocal_1112].f_23), iParam0);
		}
	}
	else if (func_106(&(Local_1311[iLocal_1112].f_23), iParam0))
	{
		func_909(&(Local_1311[iLocal_1112].f_23), iParam0);
	}
}

void func_909(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	unk_0x0674E58A79778E99(uParam0[iVar0], iVar1);
}

void func_910(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	unk_0x5D96D8530B3D0904(uParam0[iVar0], iVar1);
}

void func_911(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_106(&(Local_1311[iLocal_1112].f_23.f_2), iParam0))
		{
			func_910(&(Local_1311[iLocal_1112].f_23.f_2), iParam0);
		}
	}
	else
	{
		if (func_106(&(Local_1311[iLocal_1112].f_23.f_2), iParam0))
		{
			func_909(&(Local_1311[iLocal_1112].f_23.f_2), iParam0);
		}
		if (func_85(iParam0, 6))
		{
			if (Local_1101[iParam0] != -1)
			{
				func_906(&(Local_1101[iParam0]));
			}
			if (func_13(&(Local_1311[iLocal_1112].f_23.f_4[iParam0].f_2)))
			{
				func_22(&(Local_1311[iLocal_1112].f_23.f_4[iParam0].f_2));
			}
		}
	}
}

int func_912(int iParam0)
{
	if (unk_0x405E212DDE472467(iParam0, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0);
		if (unk_0x134B62B726CEC8E6(iVar0) == 2069146067)
		{
			return 1;
		}
		if (unk_0xE934758D273C899A(iVar0) && unk_0xEE9925602B29903C(iVar0) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_913()
{
}

void func_914()
{
	if (!func_947())
	{
		func_915();
		return;
	}
	if (!func_660())
	{
		func_521();
		return;
	}
	Call_Loc(Local_783[func_701()].f_15);
}

void func_915()
{
	func_521();
	func_916(1, 1, 1);
}

void func_916(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_945();
	}
	func_943();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < func_7())
		{
			if (uLocal_1142[iVar0] != func_414())
			{
				if (unk_0x8CD06866876216F2())
				{
					if (unk_0x81A93C8315C28F58(uLocal_1142[iVar0]))
					{
						func_917(unk_0x4B2BFE4A3BC248ED(uLocal_1142[iVar0]), 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam1)
	{
	}
}

void func_917(int iParam0, int iParam1)
{
	uVar0 = func_942(iParam0);
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_1054.f_6, iParam0) || iParam1)
			{
				if (func_941(iParam0))
				{
					func_940(iParam0, func_890(func_631(iLocal_1110, -2, 0, 0, 0)), 0, 0);
				}
				if (func_939(iParam0))
				{
					func_938(iParam0, 0);
				}
				if (func_937(iParam0))
				{
					func_936(iParam0, 0, 1, 0);
				}
				if (func_935(iParam0))
				{
					if (func_933(iParam0))
					{
						func_932(iParam0, 0, 1);
					}
				}
				if (func_931(iParam0))
				{
					func_927(iParam0, func_929(uVar0), 0, 0);
				}
				if (func_926(iParam0))
				{
					func_925(iParam0, 1f, 0, 0);
				}
				if (func_941(iParam0))
				{
					func_940(iParam0, 1, 0, 0);
				}
				if (func_923(iParam0))
				{
					func_918(iParam0, 0, 0);
				}
				unk_0x0674E58A79778E99(&(Local_1054.f_6), iParam0);
			}
		}
	}
}

void func_918(int iParam0, bool bParam1, bool bParam2)
{
	if (func_920(iParam0))
	{
		return;
	}
	func_919(&(Global_2416079.f_720[iParam0]), &(Global_2416079.f_1083[iParam0]), &(Global_2416079.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_919(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x5D96D8530B3D0904(iParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x0674E58A79778E99(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0;
}

int func_920(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 1;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_921())
	{
		return 1;
	}
	return 0;
}

int func_921()
{
	switch (func_159())
	{
		case 0:
			return func_922();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_922()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_923(int iParam0)
{
	return func_924(&(Global_2416079.f_720[iParam0]));
}

int func_924(var uParam0)
{
	if (unk_0x1727A44C562FBED2(*uParam0))
	{
		if (!*uParam0 == unk_0x0D0A574C76D769AC())
		{
			return 0;
		}
	}
	return 1;
}

void func_925(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_920(iParam0))
	{
		return;
	}
	if (func_919(&(Global_2416079.f_753[iParam0]), &(Global_2416079.f_1116[iParam0]), &(Global_2416079.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[iParam0] = fParam1;
		}
	}
}

bool func_926(int iParam0)
{
	return func_924(&(Global_2416079.f_753[iParam0]));
}

void func_927(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_920(iParam0))
	{
		return;
	}
	if (func_919(&(Global_2416079.f_588[iParam0]), &(Global_2416079.f_951[iParam0]), &(Global_2416079.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_928();
		}
	}
}

void func_928()
{
	Global_2416079.f_1614 = 1;
}

int func_929(int iParam0)
{
	if (Local_407.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_1);
		return StackVal;
	}
	if (Local_220.f_10.f_1 != -1)
	{
		return Local_220.f_10.f_1;
	}
	return func_930();
}

int func_930()
{
	return 478;
}

bool func_931(int iParam0)
{
	return func_924(&(Global_2416079.f_588[iParam0]));
}

void func_932(int iParam0, bool bParam1, bool bParam2)
{
	if (func_920(iParam0))
	{
		return;
	}
	func_919(&(Global_2416079.f_918[iParam0]), &(Global_2416079.f_1281[iParam0]), &(Global_2416079.f_398), bParam1, iParam0, bParam2, &uVar0);
}

bool func_933(int iParam0)
{
	return func_934(Global_2416079.f_918[iParam0], &(Global_2416079.f_398), iParam0);
}

int func_934(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		if (unk_0x1727A44C562FBED2(uParam0))
		{
			return 1;
		}
		else
		{
			unk_0x0674E58A79778E99(iParam1, iParam2);
		}
	}
	return 0;
}

bool func_935(int iParam0)
{
	return func_924(&(Global_2416079.f_918[iParam0]));
}

void func_936(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_920(iParam0))
	{
		return;
	}
	if (func_919(&(Global_2416079.f_819[iParam0]), &(Global_2416079.f_1182[iParam0]), &(Global_2416079.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_938(iParam0, bParam2);
	}
}

bool func_937(int iParam0)
{
	return func_924(&(Global_2416079.f_819[iParam0]));
}

void func_938(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_2416079.f_368), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2416079.f_368), iParam0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_2416079[iParam0]))
	{
		if (bParam1)
		{
			unk_0x6ABCCE651368DB93(Global_2416079[iParam0], false);
		}
		else
		{
			unk_0x6ABCCE651368DB93(Global_2416079[iParam0], true);
		}
	}
}

bool func_939(int iParam0)
{
	return func_924(&(Global_2416079.f_885[iParam0]));
}

void func_940(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_920(iParam0))
	{
		return;
	}
	if (func_919(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = iParam1;
		}
	}
}

bool func_941(int iParam0)
{
	return func_924(&(Global_2416079.f_621[iParam0]));
}

int func_942(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1054[iVar0].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_943()
{
	func_944();
}

void func_944()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_1147))
	{
		unk_0x142CC44DB769B57E(&iLocal_1147);
	}
}

void func_945()
{
	iVar0 = 0;
	while (iVar0 < Local_1054)
	{
		func_946(iVar0);
		iVar0++;
	}
}

void func_946(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(Local_1054[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(Local_1054[iParam0]));
	}
}

int func_947()
{
	if (((((bLocal_1117 && func_437(7)) && !func_437(8)) && func_437(31)) && func_410() == 0) && !func_948())
	{
		return 1;
	}
	return 0;
}

bool func_948()
{
	Call_Loc(Local_407.f_17);
	return StackVal;
}

void func_949()
{
	func_1004();
	func_998();
	if (bLocal_1118)
	{
		func_992();
		func_987();
		func_983();
	}
	if (func_980())
	{
		func_950();
	}
}

void func_950()
{
	if (func_979())
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_977(iVar0))
			{
				func_951(iVar0);
			}
			iVar0++;
		}
	}
}

void func_951(int iParam0)
{
	StringCopy(&Var0, func_976(iParam0), 16);
	if (func_953(func_975(iParam0), &Var0, func_974(iParam0), func_973(iParam0), 1, 0, 0, 1, 0, 1))
	{
		func_952(iParam0);
	}
}

void func_952(int iParam0)
{
	func_910(&uLocal_1099, iParam0);
}

int func_953(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_955(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_954(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_954(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_955(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_967();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
	}
	if (func_966() == 0)
	{
		func_964();
		return 0;
	}
	func_963(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872]), sParam1, 64);
	Global_111638.f_14136[Global_21872].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872].f_25 = iParam7;
	Global_111638.f_14136[Global_21872].f_26 = uParam8;
	Global_111638.f_14136[Global_21872].f_29 = uParam9;
	Global_111638.f_14136[Global_21872].f_30 = uParam12;
	Global_111638.f_14136[Global_21872].f_31 = uParam11;
	Global_111638.f_14136[Global_21872].f_28 = 0;
	Global_111638.f_14136[Global_21872].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872].f_83), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872].f_99[0] = 1;
		Global_111638.f_14136[Global_21872].f_99[1] = 1;
		Global_111638.f_14136[Global_21872].f_99[2] = 1;
		Global_8062 = 4;
		func_962(0);
		func_962(2);
		func_962(1);
	}
	else
	{
		func_967();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_962(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_962(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_962(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_962(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0].f_17 = 1;
			Global_111638.f_14046[1].f_17 = 1;
			Global_111638.f_14046[2].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_967();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_674())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_961(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_958(1);
			func_961(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_956(uParam0, sParam1);
	return 1;
}

void func_956(var uParam0, char* sParam1)
{
	if (!func_957())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_957()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_70())
	{
		return 0;
	}
	if (func_681(unk_0xD803B885F5E47A62()))
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

void func_958(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_960(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_772(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_959(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_959(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_772(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_772(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_772(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_772(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_772(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

bool func_960(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_961(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

void func_962(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_963(int iParam0)
{
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0].f_18 = iVar0;
	Global_111638.f_14136[iParam0].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0].f_18.f_5 = iVar5;
}

void func_964()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_965(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_965(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_966()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0 || Global_111638.f_14136[iVar2].f_24 == 1)
		{
			if (!func_965(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872].f_99[0] = 0;
	Global_111638.f_14136[Global_21872].f_99[1] = 0;
	Global_111638.f_14136[Global_21872].f_99[2] = 0;
	return 1;
}

void func_967()
{
	if (func_960(14))
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
		Global_19486 = func_968();
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

var func_968()
{
	func_969();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_969()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_971(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_970(unk_0x16F2683693E537C9());
			if (func_232(iVar0) && (!func_960(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_232(Global_111638.f_2358.f_539.f_4321))
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

int func_970(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_971(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_971(int iParam0)
{
	if (func_232(iParam0))
	{
		return func_972(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_972(int iParam0)
{
	return Global_1798[iParam0];
}

int func_973(int iParam0)
{
	if (Local_407.f_263.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_263.f_2);
		return StackVal;
	}
	return 0;
}

int func_974(int iParam0)
{
	if (Local_407.f_263.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_263.f_1);
		return StackVal;
	}
	return 1;
}

int func_975(int iParam0)
{
	if (Local_407.f_263.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_263.f_4);
		return StackVal;
	}
	return 136;
}

char* func_976(int iParam0)
{
	if (Local_407.f_263.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_263.f_5);
		return StackVal;
	}
	return "";
}

int func_977(int iParam0)
{
	Stack.Push((!func_978(iParam0) && Local_407.f_263.f_3 != 0));
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_263.f_3);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_978(int iParam0)
{
	return func_106(&uLocal_1099, iParam0);
}

bool func_979()
{
	Stack.Push(Local_407.f_263 != 0);
	Call_Loc(Local_407.f_263);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return bLocal_1107;
}

int func_980()
{
	if (((((((!bLocal_1117 || func_742()) || func_982()) || unk_0x798A3F1296751F46()) || func_981(iLocal_1110)) || func_664(iLocal_1110)) || !unk_0xE1DBBD6CE209517C(iLocal_1110)) || unk_0x433E615D274A2FC6(iLocal_1110))
	{
		return 0;
	}
	return 1;
}

int func_981(int iParam0)
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

var func_982()
{
	return Global_2460715;
}

void func_983()
{
	if (!func_740())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_986(iVar0))
		{
			Stack.Push(Local_407.f_257.f_1 != 0);
			Stack.Push(iVar0);
			Call_Loc(Local_407.f_257.f_1);
			if (StackVal && StackVal)
			{
				if (func_985(iVar0))
				{
					if (Local_407.f_257.f_3 != 0)
					{
						Stack.Push(iVar0);
						Call_Loc(Local_407.f_257.f_3);
					}
					Stack.Push(iVar0);
					Call_Loc(Local_407.f_257.f_5);
					if (StackVal)
					{
						func_984(iVar0);
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_984(int iParam0)
{
	if (!func_106(&uLocal_1097, iParam0))
	{
		func_910(&uLocal_1097, iParam0);
	}
}

int func_985(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_257.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_407.f_257 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_257);
				func_739(StackVal, -1);
				return 1;
			}
			break;
		
		case 3:
			if (Local_407.f_257.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_257.f_4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_986(int iParam0)
{
	return func_106(&uLocal_1097, iParam0);
}

void func_987()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (Local_1054.f_9 != -1)
		{
			if (Local_1054.f_9 == iVar0 && Local_1054[iVar0].f_4 != iLocal_1110)
			{
				Local_1054.f_9 = func_942(iLocal_1110);
				if (!func_692(iVar0, iLocal_1113, 6) && !func_6(iVar0, 29))
				{
				}
			}
		}
		else if (Local_1054[iVar0].f_4 == iLocal_1110)
		{
			if (!func_692(iVar0, iLocal_1113, 6) && !func_6(iVar0, 4))
			{
				if (!func_48(16))
				{
					Local_1054.f_9 = iVar0;
					func_988(iLocal_1119, iLocal_1110, func_991(), 0, func_48(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_988(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	Var0.f_2 = 590034952;
	Var0.f_10 = iParam1;
	Var0.f_11 = iParam2;
	Var0.f_3 = iParam0;
	Var0.f_12 = iParam5;
	Var0.f_13 = iParam6;
	Var0.f_4 = func_990(bParam3);
	Var0.f_5 = to_float(unk_0xDD0E7998AE8AD485());
	if (bParam4)
	{
	}
	iVar14 = 0;
	while (iVar14 < 32)
	{
		iVar16 = iVar14;
		if (func_28(iVar16, 0, 1))
		{
			if (bParam4)
			{
				unk_0x5D96D8530B3D0904(&iVar15, iVar14);
			}
			else if (func_69(iParam2, iVar16))
			{
				unk_0x5D96D8530B3D0904(&iVar15, iVar14);
			}
			else if (iParam1 == iVar16)
			{
				unk_0x5D96D8530B3D0904(&iVar15, iVar14);
			}
		}
		iVar14++;
	}
	if (iVar15 != 0)
	{
		func_989(Var0, iVar15);
	}
}

void func_989(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_990(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_991()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

void func_992()
{
	if (!func_660())
	{
		return;
	}
	func_993();
}

void func_993()
{
	if (Local_220.f_108 == -1 || Local_220.f_108.f_1 == 1)
	{
		return;
	}
	if (!func_13(&(Local_1164.f_132)))
	{
		return;
	}
	iVar0 = (func_17() - func_907(&(Local_1164.f_132), 0, 0));
	if (Local_220.f_108.f_1 == 2 && iVar0 > 300000)
	{
		return;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 30000)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 6;
	}
	func_995(iVar0, "SMHUD_TIMEREM", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	if (func_994(Local_1164.f_132, (func_17() - 5000), 0) && !func_994(Local_1164.f_132, (func_17() - 4000), 0))
	{
		if (!func_437(22))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			func_425(22);
		}
	}
	else if (func_437(22))
	{
		func_710(22);
	}
}

int func_994(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_995(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_997(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_996(7, iVar0);
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

void func_996(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_997(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_998()
{
	if (func_1002())
	{
		func_999(1);
	}
	else
	{
		func_999(0);
	}
}

void func_999(bool bParam0)
{
	if (bParam0)
	{
		if (!func_437(32))
		{
			func_1001(0, 13, 1, 1, 0, 1, 1, 0, 0);
			func_425(32);
		}
	}
	else if (func_437(32))
	{
		func_1000(0);
		func_710(32);
	}
}

void func_1000(int iParam0)
{
	if (func_364(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0xD803B885F5E47A62();
		unk_0x0674E58A79778E99(&(Global_2425662[iVar0].f_229), Global_1373155[iParam0]);
		unk_0x0674E58A79778E99(&(Global_2425662[iVar0].f_229), 17);
		unk_0x0674E58A79778E99(&(Global_2425662[iVar0].f_229), 18);
		unk_0x0674E58A79778E99(&(Global_2425662[iVar0].f_229), 19);
		unk_0x0674E58A79778E99(&(Global_2425662[iVar0].f_229), 20);
		if (Global_2425662[iVar0].f_229 == 0)
		{
			Global_2425662[iVar0].f_228 = 0;
		}
	}
	Global_1373132[iParam0] = 0;
	Global_1373171[iParam0] = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_232 = 0;
}

void func_1001(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	Global_1373155[iParam0] = iParam1;
	Global_1373179[iParam0] = iParam4;
	Global_1373187[iParam0] = iParam5;
	if (bParam6)
	{
		Global_2425662[unk_0xD803B885F5E47A62()].f_232 = 1;
	}
	else
	{
		Global_2425662[unk_0xD803B885F5E47A62()].f_232 = 0;
	}
	if (bParam7)
	{
	}
	if (func_364(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0xD803B885F5E47A62();
		unk_0x5D96D8530B3D0904(&(Global_2425662[iVar0].f_229), iParam1);
		Global_2425662[iVar0].f_228 = 1;
	}
	if (iParam2 == 1)
	{
		Global_1373163[iParam0] = 1;
	}
	else
	{
		Global_1373163[iParam0] = 0;
	}
	Global_1373132[iParam0] = 1;
	Global_1373171[iParam0] = iParam3;
	if (bParam8)
	{
		if (iParam1 == 12)
		{
			Global_2425662[unk_0xD803B885F5E47A62()].f_233 = 1;
		}
	}
}

int func_1002()
{
	if ((((bLocal_1118 && func_48(18)) && func_1003(iLocal_1110, 1)) && func_387(func_942(iLocal_1110))) && !unk_0x405E212DDE472467(iLocal_1111, 0))
	{
		return 1;
	}
	return 0;
}

int func_1003(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1054[iVar0].f_4 == iParam0)
		{
			if (bParam1)
			{
				if (func_692(iVar0, iLocal_1113, 6) || func_6(iVar0, 4))
				{
					return 0;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1004()
{
	func_1005();
}

void func_1005()
{
	if (func_1567() > 0)
	{
		if (!func_437(9))
		{
			if (func_1009())
			{
				if (func_11(&uLocal_1145, 1350, 0) && !func_1008())
				{
					func_1007();
					func_425(9);
				}
			}
		}
		else if (!func_437(10))
		{
			if (func_1006(86))
			{
				func_425(10);
			}
		}
	}
}

bool func_1006(int iParam0)
{
	return Global_2439138.f_2723[0].f_1 == iParam0;
}

void func_1007()
{
}

bool func_1008()
{
	return Global_1681929;
}

int func_1009()
{
	if ((((bLocal_1107 && !unk_0x798A3F1296751F46()) && !func_743()) && bLocal_1117) && func_1010())
	{
		return 1;
	}
	return 0;
}

int func_1010()
{
	if ((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37())
	{
		return 1;
	}
	return 0;
}

void func_1011()
{
	func_1022();
	func_1019();
	func_1013();
	func_1012();
}

void func_1012()
{
}

void func_1013()
{
	if (func_1018())
	{
		if (unk_0x179932739160BA96(iLocal_1110) < func_1017())
		{
			func_1015(iLocal_1110, func_1017(), 0, 0);
		}
		unk_0x1E69CBC4A01168BD(iLocal_1110);
		unk_0xB61FC7262CB2E7A1(iLocal_1110);
		func_425(17);
	}
	else if (func_437(17))
	{
		if (func_1014())
		{
			if (unk_0x179932739160BA96(iLocal_1110) > 0)
			{
				unk_0x67F91979413C5D76(iLocal_1110, 0, 0);
			}
		}
		func_710(17);
	}
}

int func_1014()
{
	if (Local_407.f_26.f_8 != 0)
	{
		Call_Loc(Local_407.f_26.f_8);
		return StackVal;
	}
	return 0;
}

void func_1015(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 != func_70() && func_28(iParam0, 1, 1))
	{
		func_1016(iLocal_1119, func_612(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_1016(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	Var0 = 1059615374;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = unk_0xDD0E7998AE8AD485();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iParam1);
	}
}

int func_1017()
{
	Call_Loc(Local_407.f_26);
	return StackVal;
}

int func_1018()
{
	if (Local_407.f_26.f_7 != 0)
	{
		Call_Loc(Local_407.f_26.f_7);
		return StackVal;
	}
	return 0;
}

void func_1019()
{
	if (func_1021())
	{
		if (unk_0x1BECA41447430F5E(iLocal_1110) < func_1020())
		{
			unk_0xE801AB3C8990A86C(func_1020());
			func_425(18);
		}
	}
	else if (func_437(18))
	{
		if (unk_0x1BECA41447430F5E(iLocal_1110) > 0)
		{
			unk_0xE801AB3C8990A86C(0);
		}
		func_710(18);
	}
}

int func_1020()
{
	if (Local_407.f_26.f_1 != 0)
	{
		Call_Loc(Local_407.f_26.f_1);
		return StackVal;
	}
	return Local_220.f_105.f_1;
}

int func_1021()
{
	if (Local_407.f_26.f_6 != 0)
	{
		Call_Loc(Local_407.f_26.f_6);
		return StackVal;
	}
	return 0;
}

void func_1022()
{
	if (func_437(15))
	{
		if (!func_1041(Local_1073.f_2))
		{
			if (func_1025(Local_1073, Local_1073.f_1))
			{
				if (Local_1073 > func_1017())
				{
					unk_0x34D79252800B23FF(Local_1073);
				}
				else if (unk_0x02A813E6E0380440() != func_1017())
				{
					unk_0x34D79252800B23FF(func_1017());
					func_710(13);
				}
				if (Global_1590535[iLocal_1110].f_751)
				{
					func_1024();
				}
				unk_0x67F91979413C5D76(iLocal_1110, Local_1073, 0);
				unk_0x56EA5D248F36A081(iLocal_1110, 0);
				Stack.Push(Local_407.f_26.f_9 != 0);
				Call_Loc(Local_407.f_26.f_9);
				if (StackVal && StackVal)
				{
					unk_0x0952F7603629A4C0(104, iLocal_1111, -1f);
					unk_0x188F83604901D6BC(iLocal_1111, vLocal_1114, 20f, -472287501);
				}
				func_1023();
				func_710(15);
			}
			else
			{
				func_1023();
				func_710(15);
			}
		}
	}
}

void func_1023()
{
	Local_1073 = 0;
	Local_1073.f_2 = 0;
	Local_1073.f_1 = 0;
	func_22(&(Local_1073.f_3));
}

void func_1024()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 1))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 6))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 6);
	}
	unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 0);
	unk_0x0674E58A79778E99(&(Global_2537071.f_4555), 2);
	Global_1590535[unk_0xD803B885F5E47A62()].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		unk_0x34D79252800B23FF(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

int func_1025(int iParam0, bool bParam1)
{
	if (func_1017() <= 0)
	{
		return 0;
	}
	if (func_1027(iLocal_1110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0x179932739160BA96(iLocal_1110) == iParam0)
	{
		return 0;
	}
	if (func_1026() && !bParam1)
	{
		return 0;
	}
	Stack.Push(Local_407.f_26.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_407.f_26.f_3);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_1026()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		if (func_542(unk_0xD803B885F5E47A62(), 1))
		{
			iVar0 = func_71(unk_0xD803B885F5E47A62());
			if (iVar0 != func_70())
			{
				if (Global_1590535[iVar0].f_751)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1027(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_1040(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1039(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1038(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1037(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1036(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1035(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_324(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1034(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_1033(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_330(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_1032(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_1031(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_1030(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_1029(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_1028(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1028(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_1029(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_1030(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_1031(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_1032(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_1033(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1034(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1035(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_1036(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_1037(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_1038(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_1039(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_1040(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_325(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_1041(var uParam0)
{
	Stack.Push(Local_407.f_26.f_10 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_26.f_10);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_1073.f_2 == 0 || func_11(&(Local_1073.f_3), Local_1073.f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_1042()
{
	func_1059();
	func_1043();
}

void func_1043()
{
	if ((bLocal_1118 && (func_1058() == 27 || func_1058() == 28)) && Local_1086.f_9 == func_1057())
	{
		if (func_1052())
		{
			func_1046();
		}
	}
	else
	{
		func_1044();
	}
	Local_1086.f_9 = func_1057();
}

void func_1044()
{
	if (unk_0xE4EDC4B0E92C078B(Local_1086.f_1[func_1045()].f_1))
	{
		unk_0x142CC44DB769B57E(&(Local_1086.f_1[func_1045()].f_1));
	}
}

int func_1045()
{
	return Local_1311[iLocal_1112].f_16;
}

void func_1046()
{
	fVar0 = 0,5f;
	if (unk_0x405E212DDE472467(iLocal_1111, 0))
	{
		fVar0 = 1,5f;
	}
	func_1047(func_1048(), (fVar0 * 1,8f), (fVar0 * 1,8f), 2,5f, 12, 0,7f);
}

void func_1047(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)
{
	unk_0xA402F6C87C08815C(iParam6, &iVar0, &iVar1, &iVar2, &uVar3);
	vParam0.z = (vParam0.z - fParam7);
	unk_0x922D0EFFF8F2403B(1, vParam0, 0f, 0f, 0f, 0f, 0f, 0f, vParam3, iVar0, iVar1, iVar2, 150, 0, 0, 2, 0, 0, 0, false);
}

Vector3 func_1048()
{
	return func_1049(func_1057());
}

Vector3 func_1049(int iParam0)
{
	if (bLocal_1107 && unk_0x405E212DDE472467(iLocal_1111, 0))
	{
		return func_1051(iParam0);
	}
	return func_1050(iParam0);
}

Vector3 func_1050(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0];
	}
	return 0f, 0f, 0f;
}

Vector3 func_1051(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0].f_3;
	}
	return 0f, 0f, 0f;
}

int func_1052()
{
	if (!unk_0xE4EDC4B0E92C078B(Local_1086.f_1[func_1045()].f_1))
	{
		Local_1086.f_1[func_1045()].f_1 = unk_0x6CC513A908911CF0(func_1048());
		unk_0x4F505BE81426535E(Local_1086.f_1[func_1045()].f_1, 1);
		unk_0x2A065371C9D96655(Local_1086.f_1[func_1045()].f_1, 12);
		unk_0x661342B9651D16E2(Local_1086.f_1[func_1045()].f_1, func_1054());
		if (Local_1086.f_1[func_1045()].f_2 && !Local_1086.f_1[func_1045()].f_3)
		{
			func_1053(&(Local_1086.f_1[func_1045()].f_1), 0);
			Local_1086.f_1[func_1045()].f_3 = 1;
		}
		return 0;
	}
	return 1;
}

void func_1053(var uParam0, bool bParam1)
{
	unk_0xF412DD40DE84CE72(*uParam0, 1);
	unk_0xF91C863A82DF022A(*uParam0, 250);
	unk_0x0EC848EFF66DF45A(*uParam0, 7000);
	if (bParam1)
	{
		unk_0x4A51D2E4732BD556();
	}
}

int func_1054()
{
	if (func_1058() == 27)
	{
		return 1;
	}
	else if (func_1058() == 28 && func_1055(iLocal_1110))
	{
		return 1;
	}
	return 0;
}

int func_1055(int iParam0)
{
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (func_1056(iVar0, 0) != -1)
	{
		return 0;
	}
	iVar1 = unk_0x6937EA2286828455(iVar0, 0);
	if (!unk_0xDF1306B443CD3D15(iVar1, 0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < unk_0xD6DF381716822EFE(iVar1))
	{
		if (iVar3 == -1)
		{
		}
		else if (!unk_0xBBA8A868118C90ED(iVar1, iVar3, 0))
		{
			iVar2 = unk_0xA30B8362589C124A(iVar1, iVar3, 0);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (func_1003(unk_0x83FACCC48B68F9D1(iVar2), 1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_1056(int iParam0, int iParam1)
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

int func_1057()
{
	if (Local_407.f_269.f_1 != 0)
	{
		Call_Loc(Local_407.f_269.f_1);
		return StackVal;
	}
	if (iLocal_1112 != -1)
	{
		return Local_1086.f_1[Local_1311[iLocal_1112].f_16];
	}
	return 0;
}

int func_1058()
{
	return Local_783[func_701()];
}

void func_1059()
{
	if (!bLocal_1107 || func_31(func_1048()))
	{
		return;
	}
	Local_1086.f_10 = vdist(vLocal_1114, func_1048());
}

void func_1060()
{
	fLocal_1133 = vdist(vLocal_1114, Local_220.f_116[Local_1164.f_127]);
	if (func_1058() == 4)
	{
		func_1064();
		if (func_1062())
		{
			func_550(1);
		}
	}
	else if (func_1061())
	{
		func_746(1);
	}
}

int func_1061()
{
	return 0;
}

int func_1062()
{
	if (func_371(iLocal_1113, 1))
	{
		return 1;
	}
	if (Local_220.f_116[Local_1164.f_127].f_3 == -1f)
	{
		return 1;
	}
	if (func_1063())
	{
		if (fLocal_1133 != -1f)
		{
			if (fLocal_1133 <= Local_220.f_116[Local_1164.f_127].f_3)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1063()
{
	return 1;
}

void func_1064()
{
}

void func_1065()
{
	iVar5 = 0;
	while (iVar5 < Local_220.f_28)
	{
		bVar2 = false;
		bVar3 = false;
		func_115(iVar5, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (unk_0x405E212DDE472467(iVar0, 1))
				{
					func_1165(iVar5, 1);
				}
				else
				{
					func_1164(iVar5, 1);
				}
				if (unk_0x405E212DDE472467(iVar0, 0))
				{
					func_1165(iVar5, 0);
				}
				else
				{
					func_1164(iVar5, 0);
				}
			}
			if (Local_407.f_73.f_108 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_407.f_73.f_108);
			}
			func_1102(iVar5, iVar0, bVar3);
			if (!bVar3)
			{
			}
		}
		switch (iVar1)
		{
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_1098(iVar5, iVar0);
						func_1095(iVar5, iVar0);
						func_1094(iVar5, iVar0, 1);
						if (!func_56(iVar5))
						{
							func_1088(iVar5, iVar0);
							func_1083(iVar5, iVar0, &bVar4);
							func_1079(iVar5, iVar0);
							func_1077(iVar5, iVar0);
							func_1068(iVar5, iVar0);
						}
					}
				}
				break;
			
			case 4:
				func_1067(iVar5, iVar0);
				break;
			
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				break;
			
			case 5:
				if (bVar2)
				{
					if (func_41(iVar5, 20) && func_120(Local_1164.f_24[iVar5]))
					{
						func_1066(&(Local_1164.f_24[iVar5]));
					}
				}
				break;
		}
		iVar5++;
	}
	if (!bVar4)
	{
		if (func_13(&(Local_896.f_153)))
		{
			func_22(&(Local_896.f_153));
		}
	}
	iVar5 = Local_896.f_155;
	func_115(iVar5, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_1094(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

void func_1066(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(*iParam0))
	{
		if (!unk_0x526BC32A660C89E6(*iParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*iParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*iParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

void func_1067(int iParam0, int iParam1)
{
	if ((unk_0x62FA787159F264AC(iParam1) && !unk_0x2EAFA036429F20FC(iParam1)) && func_120(Local_1164.f_24[iParam0]))
	{
		if (func_41(iParam0, 19))
		{
			unk_0x327AAEE25F323797(iParam1);
			unk_0xFADC0A217229F6B5(iParam1, 0);
		}
		unk_0xE121AE1BBF90E186(iParam1, true);
		unk_0x4AE2D6991D4E4082(iParam1, 1, 1);
	}
}

void func_1068(int iParam0, int iParam1)
{
	if (!func_1076(iParam0))
	{
		return;
	}
	if (!func_75(iParam0, 3))
	{
		if (func_1073(iParam1, func_1075(iParam0), func_1074(iParam0)))
		{
			if (func_11(&(Local_896[iParam0].f_74), func_1072(iParam0), 0))
			{
				func_1071(iParam0, 1);
				if (Local_407.f_73.f_76.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_407.f_73.f_76.f_1.f_5);
				}
			}
		}
		else if (func_13(&(Local_896[iParam0].f_74)))
		{
			func_22(&(Local_896[iParam0].f_74));
		}
	}
	else if (func_1070(iParam0))
	{
		if (!func_1073(iParam1, func_1075(iParam0), func_1074(iParam0)))
		{
			func_1069(iParam0, 1);
			if (Local_407.f_73.f_76.f_1.f_5 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_407.f_73.f_76.f_1.f_5);
			}
		}
	}
}

void func_1069(int iParam0, int iParam1)
{
	if (func_124(&(Local_1311[iLocal_1113].f_7[iParam0]), iParam1))
	{
	}
}

int func_1070(int iParam0)
{
	if (Local_407.f_73.f_76.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_76.f_1.f_4);
		return StackVal;
	}
	return 0;
}

void func_1071(int iParam0, int iParam1)
{
	if (func_15(&(Local_1311[iLocal_1113].f_7[iParam0]), iParam1))
	{
	}
}

int func_1072(int iParam0)
{
	if (Local_407.f_73.f_76.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_76.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_1073(int iParam0, float fParam1, bool bParam2)
{
	if (vdist2(unk_0x68F4C0EC296D3901(iParam0, 0), vLocal_1114) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return unk_0xF649DD3BF44195C7(iLocal_1111, iParam0, 287);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1074(int iParam0)
{
	if (Local_407.f_73.f_76.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_76.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_1075(int iParam0)
{
	if (Local_407.f_73.f_76.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_76.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

bool func_1076(int iParam0)
{
	if (Local_407.f_73.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_76.f_1);
		return StackVal;
	}
	return func_75(iParam0, 28);
}

void func_1077(int iParam0, int iParam1)
{
	if (!func_1078(iParam0))
	{
		return;
	}
	if (!bLocal_1107)
	{
		return;
	}
	if (unk_0x869EFD0BC0868856(iParam1) && unk_0x1B3D109B39CC2C89(iParam1, iLocal_1111))
	{
		func_1071(iParam0, 23);
	}
}

bool func_1078(int iParam0)
{
	return func_75(iParam0, 26);
}

void func_1079(int iParam0, int iParam1)
{
	if (!func_1082(iParam0))
	{
		return;
	}
	if (!bLocal_1107)
	{
		return;
	}
	if (func_1080(iParam1, func_1081(), 1))
	{
		func_1071(iParam0, 0);
	}
}

int func_1080(int iParam0, float fParam1, int iParam2)
{
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0) || (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && iParam2))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		vVar3 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
		if (vdist2(vVar0, vVar3) < (fParam1 * fParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_1081()
{
	return 20f;
}

bool func_1082(int iParam0)
{
	return (func_75(iParam0, 27) && !func_75(iParam0, 0));
}

void func_1083(int iParam0, int iParam1, var uParam2)
{
	if (!func_1087(iParam0))
	{
		return;
	}
	if (func_1086(iParam1))
	{
		*uParam2 = 1;
		if (!func_13(&(Local_896.f_153)))
		{
			func_12(&(Local_896.f_153), 0, 0);
			if (Local_407.f_73.f_111 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_407.f_73.f_111);
			}
		}
		else if (func_11(&(Local_896.f_153), func_1084(iParam0), 0))
		{
			func_1071(iParam0, 20);
			if (Local_407.f_73.f_112 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_407.f_73.f_112);
			}
		}
	}
}

int func_1084(int iParam0)
{
	if (Local_407.f_73.f_110 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(func_1085());
		Call_Loc(Local_407.f_73.f_110);
	}
	return 1000;
}

bool func_1085()
{
	return (unk_0xCAE036C45E7FC720(iLocal_1111, &iVar0, 0) && iVar0 != -1569615261);
}

int func_1086(int iParam0)
{
	if (bLocal_1107)
	{
		if (!unk_0xE9B814896D415EDD(iLocal_1111))
		{
			if (unk_0x332CFAED7923FABD(iParam0, iLocal_1111, -1082130432, -1082130432, -1082130432, -1082130432) && unk_0xF649DD3BF44195C7(iParam0, iLocal_1111, 287))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1087(int iParam0)
{
	Stack.Push(Local_407.f_73.f_83.f_6 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_83.f_6);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return func_41(iParam0, 12);
}

void func_1088(int iParam0, int iParam1)
{
	if (!func_1093(Local_1164.f_132, 2000, 0) || func_41(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 125))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 126))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 84))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 97))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 116))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 94))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 124))
	{
		bVar0 = true;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam1, 23))
	{
		bVar0 = true;
	}
	if (func_1093(Local_1069[Local_220.f_28.f_1[iParam0].f_14], func_1092(iParam0), 0) && !func_1090(func_1091(iParam0)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_1089(iParam0))
		{
			func_1071(iParam0, 19);
		}
	}
}

int func_1089(int iParam0)
{
	if (func_1092(iParam0) > 0)
	{
		if (func_11(&(Local_1069[func_1091(iParam0)]), func_1092(iParam0), 0))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1090(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		if (Local_220.f_28.f_1[iVar0].f_14 == iParam0)
		{
			if (func_116(iVar0) < 6)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1091(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_14;
}

int func_1092(int iParam0)
{
	return Local_220.f_28.f_42[Local_220.f_28.f_1[iParam0].f_14].f_3;
}

int func_1093(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_13(&iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_1094(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_54(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_53(Local_896[iParam0].f_1[iVar0]) != iParam2)
	{
		return;
	}
	if (Local_896[iParam0].f_1[iVar0].f_8 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_896[iParam0].f_1[iVar0].f_8);
	}
}

void func_1095(int iParam0, int iParam1)
{
	func_1096(iParam0, iParam1);
}

void func_1096(int iParam0, var uParam1)
{
	if (!func_1097(iParam0, iLocal_1113, 24))
	{
		if (Local_220.f_28.f_42[Local_220.f_28.f_1[iParam0].f_14] == Global_1575000)
		{
			unk_0x2512FC806A3FD114(uParam1, 1, 1);
			func_1071(iParam0, 24);
		}
	}
}

bool func_1097(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1311[iParam1].f_7[iParam0]), iParam2);
}

void func_1098(int iParam0, int iParam1)
{
	if (func_41(iParam0, 2))
	{
		if (func_1058() == 8)
		{
			func_1100(0, iParam0, iParam1);
		}
		func_1099();
	}
}

void func_1099()
{
	iLocal_1072++;
}

void func_1100(int iParam0, int iParam1, int iParam2)
{
	unk_0xA402F6C87C08815C(6, &iVar0, &iVar1, &iVar2, &uVar3);
	switch (iParam0)
	{
		case 0:
			if (func_48(8))
			{
				func_1101(iParam2, iVar0, iVar1, iVar2, 0,5f, 0, 0);
			}
			break;
		
		case 1:
			if (func_48(10))
			{
				func_1101(iParam2, iVar0, iVar1, iVar2, 0,5f, 0, 0);
			}
			break;
		
		case 2:
			if (func_48(9))
			{
				func_1101(iParam2, iVar0, iVar1, iVar2, 0,5f, 0, (Local_220.f_92.f_1[iParam1].f_7.f_1 > 170f && Local_220.f_92.f_1[iParam1].f_7.f_1 < 190f));
			}
			break;
	}
}

void func_1101(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	if (unk_0xEC560E589DF8370E(iParam0))
	{
		iVar11 = unk_0x940C1429253D3B1B(iParam0);
		if (!unk_0xEB6A8945D1AC98A1(iVar11))
		{
			if (unk_0x405E212DDE472467(iVar11, 0) && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(iVar11, 0))))
			{
				iParam0 = unk_0x6937EA2286828455(iVar11, 0);
			}
		}
	}
	fVar9 = 0,5f;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	unk_0xA6B02C1DB14DDA13(iVar10, &vVar0, &vVar3);
	fVar12 = ((vVar3.z - vVar0.z) / 2f);
	fVar13 = (vVar3.z - fVar12);
	if (fVar9 <= (fVar13 + 0,1f))
	{
		fVar9 = ((fVar13 + fParam4) - 0,1f);
	}
	switch (iVar10)
	{
		case -1757836725:
		case -674927303:
		case 931280609:
		case -2022483795:
		case 1074745671:
		case 15219735:
		case -986944621:
			fVar9 = (fVar9 + 0,25f);
			break;
		
		case 2071877360:
			fVar9 = (fVar9 + 0,75f);
			break;
	}
	fVar9 = (fVar9 + fParam5);
	fVar14 = 0f;
	if (bParam6)
	{
		vVar6 = { unk_0x68F4C0EC296D3901(iParam0, 1) - Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
		fVar14 = 180f;
	}
	else
	{
		vVar6 = { unk_0x68F4C0EC296D3901(iParam0, 1) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
	}
	if (iVar10 == 1475688080)
	{
		vVar6 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iParam0, 1), unk_0xD9522BA9E27E1349(iParam0), -1,45f, 0,5f, 0f) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
	}
	unk_0x922D0EFFF8F2403B(2, vVar6, 0f, 0f, 0f, 180f, fVar14, 0f, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_1102(int iParam0, int iParam1, bool bParam2)
{
	if (func_1162(iParam0, bParam2))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_896[iParam0].f_59.f_6, 2) && unk_0xE4EDC4B0E92C078B(Local_896[iParam0].f_59))
		{
			unk_0x142CC44DB769B57E(&(Local_896[iParam0].f_59));
		}
		func_1157(Local_1164.f_24[iParam0], &(Local_896[iParam0].f_59), func_1161(iParam0), 0, 0, 0, func_1160(iParam0), 1, -1, 0);
	}
	else if ((bLocal_1117 && func_1155(iParam0, bParam2)) && !unk_0xEAE0D21A50E6C7F4(Local_896[iParam0].f_59.f_6, 2))
	{
		iVar0 = func_1154(iParam0);
		iVar1 = func_1152(iParam0);
		fVar2 = func_1151(iParam0);
		if (!unk_0xE4EDC4B0E92C078B(Local_896[iParam0].f_59))
		{
			if (unk_0x3C583F939C836C5C(iParam1))
			{
				func_1150(&(Local_896[iParam0].f_59));
			}
			Stack.Push(Local_407.f_73.f_83.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_83.f_8);
			bVar3 = (StackVal && StackVal);
			func_1149(&(Local_896[iParam0].f_59), iParam1, iVar1, iVar0, func_1160(iParam0), fVar2, 0, 0, 0, bVar3);
			unk_0x2A065371C9D96655(Local_896[iParam0].f_59, 11);
		}
		else
		{
			if (func_1148(iParam0))
			{
				unk_0x436F3596830D7DC3(Local_896[iParam0].f_59, round(unk_0x085953070423354C(iParam1)));
			}
			if (func_1087(iParam0))
			{
				unk_0x029222ED35E8A217(Local_896[iParam0].f_59, true);
			}
			if (iVar1 != -1 && iVar1 != unk_0x301901B13DC3365B(Local_896[iParam0].f_59))
			{
				unk_0xBC8E0A7390523199(Local_896[iParam0].f_59, iVar1);
				unk_0x516E63E474722206(Local_896[iParam0].f_59, fVar2);
			}
			if (func_890(iVar0) != unk_0x8FBD6436A27198B4(Local_896[iParam0].f_59))
			{
				func_891(&(Local_896[iParam0].f_59), iVar0);
			}
			if (func_41(iParam0, 13))
			{
				if (func_1147(iParam0, &iVar4, &fVar5, &fVar6))
				{
					func_1103(Local_896[iParam0].f_59, iVar4, fVar5, fVar6);
				}
			}
			Stack.Push(Local_407.f_73.f_83.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_83.f_5);
			if (StackVal && StackVal)
			{
				if (!unk_0xE14836FE7BA140D5(Local_896[iParam0].f_59))
				{
					func_1053(&(Local_896[iParam0].f_59), 0);
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_896[iParam0].f_59.f_6, 2))
	{
		func_1150(&(Local_896[iParam0].f_59));
	}
	else if (unk_0xE4EDC4B0E92C078B(Local_896[iParam0].f_59))
	{
		unk_0x142CC44DB769B57E(&(Local_896[iParam0].f_59));
	}
}

void func_1103(int iParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x7F010F50CE03A8AF(iParam0, func_1104(iParam0, iParam1, fParam2, fParam3));
}

int func_1104(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (!func_1146(Global_2439138) && !func_642())
	{
		fVar0 = func_1106(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_1105();
		}
		return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_1105()
{
	if (func_359(Global_2439138, 1))
	{
		return 50;
	}
	return 0;
}

float func_1106(int iParam0, float fParam1, float fParam2)
{
	iVar0 = Global_2439138;
	vVar2 = { func_1145(iParam0) };
	vVar2.z = 0f;
	if (Global_1319111 || func_1142())
	{
		if (func_1141(iVar0))
		{
			vVar5 = { func_1109(iVar0) };
		}
		else if (func_1108(iVar0))
		{
			vVar5 = { func_1107(iVar0) };
		}
	}
	else
	{
		vVar5 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar0), 0) };
	}
	vVar5.z = 0f;
	fVar1 = vmag(vVar5 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_1107(int iParam0)
{
	if (func_1108(iParam0))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			return unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_1108(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			iVar0 = unk_0x9539D44F3E4492F6(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x5A91F08DF773C39D(iVar0, 2056,204f, 2954,807f, -70,69892f, 110f, 90f, 15f, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_1109(int iParam0)
{
	if (iParam0 == func_70())
	{
	}
	if (func_323(iParam0))
	{
		iVar0 = func_1140(iParam0);
		if (iVar0 != func_70())
		{
			if (!func_1139(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_661[iVar0][1]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_661[iVar0][1], 0);
				}
				else
				{
					return Global_2425662[func_1140(iParam0)].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_1135(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1];
				}
			}
		}
	}
	else if (func_321(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_305))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_305, 0);
		}
	}
	else if (func_1037(iParam0) && !func_1134(iParam0))
	{
		iVar2 = Global_2425662[iParam0].f_310.f_8;
		if (iVar2 != func_70())
		{
			iVar3 = func_1135(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3];
			}
		}
	}
	else if (func_1035(iParam0) && !func_1133(iParam0))
	{
		if (func_1141(iParam0) && func_1132())
		{
			return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
		}
		iVar4 = Global_2425662[iParam0].f_310.f_8;
		if (iVar4 != func_70())
		{
			if (func_1131(iVar4))
			{
				iVar5 = func_1128(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5];
				}
			}
		}
	}
	else if (func_324(iParam0))
	{
		iVar6 = func_1127(iParam0);
		if (iVar6 != func_70())
		{
			if (!func_1126(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_758[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_758[iVar6], 0);
				}
				else
				{
					return Global_2425662[func_1127(iParam0)].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_1128(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7];
				}
			}
		}
	}
	else if (func_322(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_307, 0);
		}
	}
	else if (func_1034(iParam0) && !func_1125(iParam0))
	{
		iVar8 = Global_2425662[iParam0].f_310.f_8;
		if (iVar8 != func_70())
		{
			if (func_1124(iVar8))
			{
				iVar9 = func_1120(iVar8);
				if (iVar9 != -1)
				{
					return func_1119(iVar9);
				}
			}
		}
	}
	else if (func_1033(iParam0) && !func_1118(iParam0))
	{
		iVar10 = Global_2425662[iParam0].f_310.f_8;
		if (iVar10 != func_70())
		{
			if (func_1117(iVar10))
			{
				iVar11 = func_1113(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11];
				}
			}
		}
	}
	else if (func_330(iParam0, 0))
	{
		iVar12 = func_1112(iParam0);
		if (iVar12 != func_70())
		{
			if (!func_1111(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_791[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_791[iVar12], 0);
				}
				else
				{
					return Global_1628237[func_1112(iParam0)].f_600;
				}
			}
			else
			{
				iVar13 = func_1113(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13];
				}
			}
		}
	}
	else if (func_1032(iParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	if (func_1034(iParam0))
	{
		return func_1119(Global_2425662[iParam0].f_310.f_5);
	}
	if (func_1110(iParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
}

int func_1110(int iParam0)
{
	if ((func_1031(iParam0) || func_1029(iParam0)) || func_1030(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1111(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (iParam0 == func_70())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1113(int iParam0)
{
	if (iParam0 != func_70())
	{
		iVar0 = func_1116(iParam0);
		if (iVar0 != 0)
		{
			return func_1114(iVar0);
		}
	}
	return -1;
}

int func_1114(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_325(iVar0) == 11)
		{
			if (func_1115(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1115(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_1116(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1590535[iParam0].f_274.f_281;
	}
	return 0;
}

int func_1117(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (Global_1590535[iParam0].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1118(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_1033(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1119(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750,5f, -1322,3f, 26,2802f;
		
		case 103:
			return 331,9f, -974,9f, 30f;
		
		case 104:
			return -146f, -1270f, 28,3088f;
		
		case 105:
			return -17,7f, 225,7f, 106,7566f;
		
		case 106:
			return 894,4f, -2106,4f, 29,4768f;
		
		case 107:
			return -668f, -2431,5f, 12,9444f;
		
		case 108:
			return 213,4f, -3166,6f, 4,7903f;
		
		case 109:
			return 366,6f, 237,6f, 104,9f;
		
		case 110:
			return -1275,3f, -666,8f, 25,6332f;
		
		case 111:
			return -1188,8f, -1156,9f, 4,6582f;
		
		default:
	}
	return Global_1676377.f_488[iParam0];
}

int func_1120(int iParam0)
{
	if (iParam0 != func_70())
	{
		iVar0 = func_1123(iParam0);
		if (iVar0 != 0)
		{
			return func_1121(iVar0);
		}
	}
	return -1;
}

int func_1121(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_325(iVar0) == 11)
		{
			if (func_1122(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_1123(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1590535[iParam0].f_274.f_322;
	}
	return 0;
}

int func_1124(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_1125(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_1034(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1126(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_1127(int iParam0)
{
	if (iParam0 == func_70())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1128(int iParam0)
{
	if (iParam0 == func_70())
	{
		return -1;
	}
	iVar0 = func_1130(iParam0);
	if (!iVar0 == 0)
	{
		return func_1129(iVar0);
	}
	return -1;
}

int func_1129(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_325(iVar0) == 9)
		{
			if (func_345(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1130(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_271;
}

int func_1131(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

int func_1132()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return 1;
	}
	return 0;
}

int func_1133(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	if (func_1035(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_1134(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	if (func_1037(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_1135(int iParam0)
{
	if (iParam0 == func_70())
	{
		return -1;
	}
	iVar0 = func_1138(iParam0);
	if (!iVar0 == 0)
	{
		return func_1136(iVar0);
	}
	return -1;
}

int func_1136(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_1137(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_1138(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

int func_1139(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_1140(int iParam0)
{
	if (iParam0 == func_70())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1141(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (func_28(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_28(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_1142()
{
	if ((func_669() || func_1144()) || func_1143(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_1143(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1627020[iParam0].f_29, 20);
}

bool func_1144()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687686, 1);
}

Vector3 func_1145(int iParam0)
{
	switch (unk_0xDC7D2B8A563DB482(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x63EC65B0F6B7C26F(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, 0);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(iParam0);
}

int func_1146(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 9) && !(unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 6) && unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 7))) || ((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 6) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 7)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

int func_1147(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (Local_407.f_73.f_83.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_407.f_73.f_83.f_10);
		return StackVal;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

int func_1148(int iParam0)
{
	return 0;
}

void func_1149(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	*uParam0 = unk_0x5C3B41825F6AC5A0(iParam1);
	if (iParam2 != -1)
	{
		unk_0xBC8E0A7390523199(*uParam0, iParam2);
	}
	func_891(uParam0, iParam3);
	unk_0x661342B9651D16E2(*uParam0, iParam6);
	unk_0x6ABCCE651368DB93(*uParam0, bParam7);
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		unk_0xDC5B2F9D0CCE3A10(*uParam0, sParam4);
	}
	if (bParam9)
	{
		unk_0xF2D30B8ACAF12A39(*uParam0, 1);
		unk_0x641365D0262562E9(*uParam0, 0);
	}
	if (bParam8)
	{
		func_1053(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		unk_0x516E63E474722206(*uParam0, fParam5);
	}
}

void func_1150(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = true;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

float func_1151(int iParam0)
{
	if (Local_407.f_73.f_83.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_83.f_3);
		return StackVal;
	}
	switch (func_1058())
	{
		case 8:
			if (func_41(iParam0, 2))
			{
				return 1f;
			}
			break;
	}
	return 1f;
}

int func_1152(int iParam0)
{
	if (Local_407.f_73.f_83.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_83.f_1);
		return StackVal;
	}
	switch (func_1058())
	{
		case 8:
			if (func_41(iParam0, 2))
			{
				return 432;
			}
			break;
		
		case 33:
		case 34:
		case 35:
			if (func_1153(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_1153(int iParam0)
{
	return -1;
}

int func_1154(int iParam0)
{
	if (Local_407.f_73.f_83.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_83.f_2);
		return StackVal;
	}
	switch (func_1058())
	{
		case 8:
			if (func_41(iParam0, 2))
			{
				return 6;
			}
			break;
		
		case 33:
		case 34:
		case 35:
			if (func_1153(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	return 6;
}

int func_1155(int iParam0, bool bParam1)
{
	Stack.Push(Local_407.f_73.f_83 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_83);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (!bParam1)
	{
		switch (func_1058())
		{
			case 8:
				if (func_41(iParam0, 2))
				{
					return 1;
				}
				break;
			
			case 33:
			case 34:
			case 35:
				if (func_1153(iParam0) == func_1156())
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_1156()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1054[iVar0].f_4 == iLocal_1110 || func_692(iVar0, iLocal_1113, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1157(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_1159())
		{
			Global_2439138 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_1158(unk_0x1B50683925F00106(iParam0), iParam1, 1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1158(unk_0x1B50683925F00106(iParam0), iParam1, -1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam1))
	{
		func_1150(iParam1);
	}
}

int func_1158(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA29E145196B9739D(iParam0, 1);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 7);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1159()
{
	return Global_1312854;
}

char* func_1160(int iParam0)
{
	if (Local_407.f_73.f_83.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_83.f_7);
		return StackVal;
	}
	if (func_41(iParam0, 9))
	{
		return "PB_COP";
	}
	if (func_41(iParam0, 3))
	{
		return "PB_CIV";
	}
	switch (func_1058())
	{
		case 8:
			if (func_41(iParam0, 2))
			{
				return "PB_TARGET";
			}
			break;
	}
	return "PB_ENEMY";
}

float func_1161(int iParam0)
{
	if (func_41(iParam0, 14))
	{
		return 300f;
	}
	return -1f;
}

int func_1162(int iParam0, bool bParam1)
{
	if (!func_371(iLocal_1113, 2) && func_1163())
	{
		return 0;
	}
	if (func_371(iLocal_1113, 2) && func_1146(iLocal_1110))
	{
		return 0;
	}
	if (func_41(iParam0, 3) || func_1097(iParam0, iLocal_1113, 24))
	{
		return 0;
	}
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_1155(iParam0, bParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1163()
{
	return Global_1676377.f_460 != -1;
}

void func_1164(int iParam0, int iParam1)
{
	if (func_124(&(Local_896[iParam0].f_57), iParam1))
	{
	}
}

void func_1165(int iParam0, int iParam1)
{
	if (func_15(&(Local_896[iParam0].f_57), iParam1))
	{
	}
}

void func_1166()
{
	iVar3 = 0;
	while (iVar3 < Local_220.f_92)
	{
		bVar1 = unk_0xE5DBF9B6126856CA(Local_1164.f_76[iVar3]);
		if (bVar1)
		{
			iVar0 = unk_0xB177666FAB6F4417(Local_1164.f_76[iVar3]);
			bVar2 = unk_0x437347B10A200C4B(iVar0, 0);
			func_1180(iVar3, iVar0);
			func_1174(iVar3, iVar0, bVar2);
			switch (func_131(iVar3))
			{
				case 2:
					func_1170(iVar3, iVar0);
					if (!bVar2)
					{
						func_1169(iVar3, iVar0);
					}
					break;
				
				case 3:
					if (func_1168(iVar3))
					{
						if (func_120(Local_1164.f_76[iVar3]))
						{
							func_1066(&(Local_1164.f_76[iVar3]));
						}
					}
					else if (func_1167(iVar3))
					{
						if (func_120(Local_1164.f_76[iVar3]))
						{
							func_110(&(Local_1164.f_76[iVar3]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_1167(int iParam0)
{
	return 0;
}

int func_1168(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1169(int iParam0, int iParam1)
{
	if (func_126(iParam0, 0))
	{
		if (func_1058() == 8)
		{
			func_1100(2, iParam0, iParam1);
		}
		func_1099();
	}
}

void func_1170(int iParam0, int iParam1)
{
	if (!func_1172(iParam0))
	{
		return;
	}
	if (func_120(Local_1164.f_76[iParam0]))
	{
		unk_0xE121AE1BBF90E186(iParam1, false);
		func_1171(iParam0, 10);
	}
}

void func_1171(int iParam0, int iParam1)
{
	if (func_15(&(Local_1311[iLocal_1113].f_12[iParam0]), iParam1))
	{
	}
}

int func_1172(int iParam0)
{
	if (func_1173(iParam0, iLocal_1113, 10))
	{
		return 0;
	}
	Stack.Push(Local_407.f_216.f_15 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_216.f_15);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_1173(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1311[iParam1].f_12[iParam0]), iParam2);
}

void func_1174(int iParam0, int iParam1, bool bParam2)
{
	if (bLocal_1117 && func_1179(iParam0, bParam2))
	{
		iVar0 = func_1178(iParam0);
		iVar1 = func_1177(iParam0);
		fVar2 = func_1176(iParam0);
		if (!unk_0xE4EDC4B0E92C078B(uLocal_1067[iParam0]))
		{
			Stack.Push(Local_407.f_216.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_216.f_8);
			bVar3 = (StackVal && StackVal);
			func_1149(&(uLocal_1067[iParam0]), iParam1, iVar1, iVar0, func_1175(iParam0), fVar2, 0, 0, 0, bVar3);
			unk_0x2A065371C9D96655(uLocal_1067[iParam0], 12);
		}
		else
		{
			if (iVar1 != unk_0x301901B13DC3365B(uLocal_1067[iParam0]))
			{
				unk_0xBC8E0A7390523199(uLocal_1067[iParam0], iVar1);
				unk_0x516E63E474722206(uLocal_1067[iParam0], fVar2);
			}
			if (func_890(iVar0) != unk_0x8FBD6436A27198B4(uLocal_1067[iParam0]))
			{
				func_891(&(uLocal_1067[iParam0]), iVar0);
			}
			if (func_126(iParam0, 23))
			{
				func_1103(uLocal_1067[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_407.f_216.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_216.f_5);
			if (StackVal && StackVal)
			{
				if (!unk_0xE14836FE7BA140D5(uLocal_1067[iParam0]))
				{
					func_1053(&(uLocal_1067[iParam0]), 0);
				}
			}
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(uLocal_1067[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_1067[iParam0]));
	}
}

char* func_1175(int iParam0)
{
	if (Local_407.f_216.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_216.f_7);
		return StackVal;
	}
	if (func_1058() == 8 && func_126(iParam0, 0))
	{
		return "PB_TARGET";
	}
	return "BLIP_OBJ";
}

float func_1176(int iParam0)
{
	if (Local_407.f_216.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_216.f_3);
		return StackVal;
	}
	if (func_1058() == 8 && func_126(iParam0, 0))
	{
		return 1f;
	}
	return 1f;
}

int func_1177(int iParam0)
{
	if (Local_407.f_216.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_216.f_1);
		return StackVal;
	}
	if (func_1058() == 8 && func_126(iParam0, 0))
	{
		return 432;
	}
	return 32;
}

int func_1178(int iParam0)
{
	if (Local_407.f_216.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_83.f_2);
		return StackVal;
	}
	if (func_1058() == 8 && func_126(iParam0, 0))
	{
		return 6;
	}
	return 6;
}

int func_1179(int iParam0, bool bParam1)
{
	Stack.Push(Local_407.f_216 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_216);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_1058() == 8 && func_126(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1180(int iParam0, int iParam1)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	if (func_120(Local_1164.f_76[iParam0]))
	{
		unk_0xAA6B3A4292417750(iParam1, false, false, false, false, false, 0, 0, 0);
		unk_0xE121AE1BBF90E186(iParam1, false);
		unk_0x98868AF51859FC75(iParam1, 1);
		unk_0xD458AC1C1D29C3B4(iParam1, 0, 0);
		unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(iParam1, 1), 6, 1f, 1, 0, 1065353216, 0);
		func_1171(iParam0, 11);
	}
}

int func_1181(int iParam0)
{
	if (func_1173(iParam0, iLocal_1113, 11) || func_1182(iParam0, 9))
	{
		return 0;
	}
	Stack.Push(Local_407.f_216.f_16 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_216.f_16);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_1182(int iParam0, int iParam1)
{
	return func_4(&(Local_1164.f_76[iParam0].f_2), iParam1);
}

void func_1183()
{
	iVar1 = -1;
	fLocal_1134 = 99999f;
	iVar0 = 0;
	while (iVar0 < Local_220.f_75)
	{
		func_1227(iVar0);
		bVar5 = unk_0xE5DBF9B6126856CA(Local_1164.f_69[iVar0]);
		if (bVar5)
		{
			iVar2 = unk_0xB177666FAB6F4417(Local_1164.f_69[iVar0]);
			bVar3 = func_107(Local_1164.f_69[iVar0]);
			bVar4 = func_1226(iLocal_1111, iVar2);
			if (bVar3)
			{
				iVar1 = func_376(iVar0, 2);
			}
			if (bVar4)
			{
				func_1225(iVar0, 4);
			}
			if (Local_407.f_188.f_24 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(iVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_407.f_188.f_24);
			}
		}
		else
		{
			iVar2 = -1;
			bVar3 = false;
			bVar4 = false;
			iVar1 = -1;
		}
		func_1214(iVar0, iVar2, bVar3);
		if (bVar5)
		{
			func_1213(iVar0, iVar2);
			func_1211(iVar0, iVar2);
			func_1210(iVar0, iVar2);
			switch (func_375(iVar0))
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 4:
					if (bVar5)
					{
						func_1209(iVar0, iVar2);
						func_1207(iVar0, iVar2);
						func_1206(iVar0, iVar2, iVar1);
						func_1205(iVar0, iVar2);
						func_1203(iVar0, iVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_1202(iVar0, iVar2);
							func_1201(iVar0, iVar2);
							func_1194(iVar0, iVar2);
							func_1192(iVar0, iVar2);
							func_1190(iVar0, iVar2);
							func_1189(iVar0, iVar2);
							func_1187(iVar0, iVar2);
						}
					}
					break;
				
				case 5:
					break;
				
				case 3:
					func_1184(iVar0, iVar2);
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				}
		}
		iVar0++;
	}
	fLocal_1135 = fLocal_1134;
	fLocal_1134 = fLocal_1135;
}

void func_1184(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_69[iParam0]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = 20f;
		Var4.f_4 = 100f;
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 0;
		if (func_244(unk_0x68F4C0EC296D3901(iParam1, 1), 0f, 0f, 0f, unk_0x134B62B726CEC8E6(iParam1), 1, &vVar0, &fVar3, &Var4))
		{
			unk_0xBA2CB24C70C8E726(iParam1, 1, 1);
			unk_0x08841CDB215AE18F(iParam1, vVar0, 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(iParam1, fVar3);
			unk_0xB9FD7450C0DAB575(iParam1, 1084227584);
			func_1185(iParam0, 1, Local_1164.f_125);
		}
	}
}

void func_1185(int iParam0, int iParam1, var uParam2)
{
	Var0 = 982668033;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar5 = func_1186(1);
	if (iVar5 != 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 5, iVar5);
	}
}

var func_1186(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_28(iVar2, 0, 0))
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

void func_1187(int iParam0, int iParam1)
{
	if (!func_1188(iParam0, iLocal_1113, 15))
	{
		if (func_137(iParam0, 34))
		{
			unk_0x31E9FAFB4BF9DB41(iLocal_1111, iParam1, 0, 1);
		}
		func_1225(iParam0, 15);
	}
}

bool func_1188(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1311[iParam1].f_17[iParam0]), iParam2);
}

void func_1189(int iParam0, int iParam1)
{
	if (Local_407.f_188.f_27 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_407.f_188.f_27);
	}
}

void func_1190(int iParam0, int iParam1)
{
	if (func_137(iParam0, 10) && func_1058() == 8)
	{
		func_1100(1, iParam0, iParam1);
	}
	else if (func_137(iParam0, 7) && func_48(17))
	{
		if (func_370(iParam0, 17))
		{
			func_1191(iParam1);
		}
	}
}

void func_1191(int iParam0)
{
	unk_0xA402F6C87C08815C(18, &iVar0, &iVar1, &iVar2, &uVar3);
	func_1101(iParam0, iVar0, iVar1, iVar2, 0,5f, 0, 0);
}

void func_1192(int iParam0, int iParam1)
{
	Stack.Push(!func_137(iParam0, 17));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_407.f_188.f_16);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (func_120(Local_1164.f_69[iParam0]))
	{
		func_1193(iParam0, iParam1);
	}
}

void func_1193(int iParam0, int iParam1)
{
	if (func_137(iParam0, 18))
	{
		unk_0x71EDC33E5A423750(iParam1, 7);
	}
	else
	{
		unk_0x71EDC33E5A423750(iParam1, 1);
	}
	unk_0xC4B4C89FC0D48108(iParam1, false);
	unk_0xF1259063ADD6A7AF(iParam1, iLocal_1110, 0);
	unk_0x79E38224B223335B(iParam1, 1);
	if (!func_137(iParam0, 20))
	{
		unk_0xF3F7BF451A720FDF(iParam1, false);
	}
}

void func_1194(int iParam0, int iParam1)
{
	if (!func_137(iParam0, 2) || !func_1197(iParam0, iParam1))
	{
		return;
	}
	if (func_120(Local_1164.f_69[iParam0]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = func_1196();
		Var4.f_4 = func_1195();
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 1;
		if (func_244(unk_0x68F4C0EC296D3901(iParam1, 1), 0f, 0f, 0f, unk_0x134B62B726CEC8E6(iParam1), 1, &vVar0, &fVar3, &Var4))
		{
			unk_0xBA2CB24C70C8E726(iParam1, 1, 1);
			unk_0x08841CDB215AE18F(iParam1, vVar0, 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(iParam1, fVar3);
			unk_0xB9FD7450C0DAB575(iParam1, 1084227584);
			if (Local_407.f_188.f_19 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_188.f_19);
			}
		}
	}
}

float func_1195()
{
	return 150f;
}

float func_1196()
{
	return 20f;
}

int func_1197(int iParam0, int iParam1)
{
	Stack.Push(Local_407.f_188.f_17 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_188.f_17);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (func_1198(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1198(int iParam0)
{
	return (((unk_0x7B5606C651AB51B5(iParam0, 0, func_1200()) || unk_0x7B5606C651AB51B5(iParam0, 1, func_1200())) || unk_0x7B5606C651AB51B5(iParam0, 3, func_1199())) || unk_0x7B5606C651AB51B5(iParam0, 2, func_1200()));
}

int func_1199()
{
	return 15000;
}

int func_1200()
{
	return 10000;
}

void func_1201(int iParam0, int iParam1)
{
	Stack.Push(Local_407.f_188.f_15 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_188.f_15);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = vdist(vLocal_1114, unk_0x68F4C0EC296D3901(iParam1, 0));
	if (fVar0 < fLocal_1134)
	{
		fLocal_1134 = fVar0;
		iLocal_1128 = iLocal_1128;
		iLocal_1128 = iParam0;
	}
}

void func_1202(int iParam0, int iParam1)
{
	if (func_137(iParam0, 10))
	{
		func_1099();
	}
}

void func_1203(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1204(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (func_120(Local_1164.f_69[iParam0]))
	{
		unk_0xE121AE1BBF90E186(iParam1, false);
		func_1225(iParam0, 1);
	}
}

int func_1204(int iParam0, int iParam1, var uParam2)
{
	if (func_1188(iParam0, iLocal_1113, 1))
	{
		return 0;
	}
	if ((func_137(iParam0, 7) && uParam2) || ((iParam1 != -1 && func_6(iParam1, 7)) && func_6(iParam1, 1)))
	{
		return 1;
	}
	Stack.Push(Local_407.f_188.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_188.f_14);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_1205(int iParam0, int iParam1)
{
	if ((!func_137(iParam0, 19) || func_370(iParam0, 13)) || func_1188(iParam0, iLocal_1113, 11))
	{
		return;
	}
	if (unk_0x2709213DA9C091FF(iParam1))
	{
		if (func_120(Local_1164.f_69[iParam0]))
		{
			unk_0xEA4D2DD5C96D55DA(iParam1, 5f, 5f, 0);
			func_1225(iParam0, 11);
		}
	}
}

void func_1206(int iParam0, int iParam1, int iParam2)
{
	if ((!func_137(iParam0, 14) && !func_137(iParam0, 15)) || func_410() == 0)
	{
		return;
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		if (func_137(iParam0, 7))
		{
			if ((iParam2 != -1 && !func_6(iParam2, 4)) && !func_6(iParam2, 3))
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (func_120(Local_1164.f_69[iParam0]))
			{
				unk_0xE121AE1BBF90E186(iParam1, false);
				if (func_137(iParam0, 14))
				{
					unk_0x5DAB50E08C3C504A(iParam1, -1000f);
				}
				if (func_137(iParam0, 15))
				{
					if (unk_0xAFB8495D36825275(Local_220.f_75.f_1[iParam0].f_3))
					{
						unk_0xCCB891029A74A633(iParam1, 1, 0, -1);
					}
					else
					{
						unk_0xED2FE8C1F8C4F31C(iParam1, 1, 0, 0);
					}
				}
			}
		}
	}
}

void func_1207(int iParam0, int iParam1)
{
	if ((!func_137(iParam0, 8) || func_370(iParam0, 3)) || func_1188(iParam0, iLocal_1113, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_1164.f_69[iVar0];
	if (unk_0xE5DBF9B6126856CA(iVar1) && func_107(iVar1))
	{
		iVar2 = unk_0xB177666FAB6F4417(iVar1);
		if (func_1208(unk_0x134B62B726CEC8E6(iParam1)))
		{
			if (!unk_0x6CFEA4CFD9C496C8(iParam1))
			{
				unk_0xC74DAD25331A5425(iParam1, iVar2, 1f);
			}
			else
			{
				func_1225(iParam0, 3);
			}
		}
		else if (!unk_0x20906E1D6BDC7044(iParam1))
		{
			unk_0x9F528B1B53FBC5D9(iParam1, iVar2, unk_0xF653B9B22DA806A9(iVar2, "chassis_dummy"), 0f, -5,5f, 0,7f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			func_1225(iParam0, 3);
		}
	}
}

int func_1208(int iParam0)
{
	if ((((iParam0 == 1518533038 || iParam0 == 387748548) || iParam0 == -2137348917) || iParam0 == -1649536104) || iParam0 == 177270108)
	{
		return 1;
	}
	return 0;
}

void func_1209(int iParam0, int iParam1)
{
	if (iParam0 != Local_220.f_75.f_16 || func_842() != iLocal_1110)
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0) };
	fVar3 = 500f;
	if (vdist2(vVar0, vLocal_1137) > (550f * 550f))
	{
		if (iLocal_1127 != -1)
		{
			unk_0x21A3781D74AD1492(iLocal_1127, 0);
		}
		vLocal_1137 = { vVar0 };
		iLocal_1127 = unk_0x7CEE3725B1B88603(vLocal_1137, fVar3, 1f, 0,02f, 0, 1);
	}
}

void func_1210(int iParam0, int iParam1)
{
	if (bLocal_1107 && Local_1086.f_10 <= 10f)
	{
		if (unk_0x405E212DDE472467(iLocal_1111, 0))
		{
			if (iParam1 == unk_0x6937EA2286828455(iLocal_1111, 0) && iLocal_1126 != iParam0)
			{
				iLocal_1126 = iParam0;
			}
		}
	}
	else if ((iLocal_1126 != -1 && !Global_1681961.f_4551) && !unk_0xF929B1A0A409FF93())
	{
		iLocal_1126 = -1;
	}
	if (iParam0 == iLocal_1126)
	{
		if (Global_1681961.f_4551 && unk_0xF929B1A0A409FF93())
		{
			func_1185(iParam0, 0, Local_1164.f_125);
			iLocal_1126 = -1;
		}
	}
}

void func_1211(int iParam0, int iParam1)
{
	if (!func_137(iParam0, 16))
	{
		return;
	}
	if (!func_370(iParam0, 6) && !func_1188(iParam0, iLocal_1113, 5))
	{
		if (Local_407.f_188.f_13 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_188.f_13);
			fVar0 = StackVal;
			Stack.Push(fVar0 != -1f);
			Stack.Push(iParam1);
			Stack.Push(fVar0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_188.f_12);
			if (StackVal && func_1212(StackVal, StackVal, StackVal))
			{
				func_1225(iParam0, 5);
			}
		}
	}
}

int func_1212(int iParam0, float fParam1, bool bParam2)
{
	if (vdist2(unk_0x68F4C0EC296D3901(iParam0, 0), vLocal_1114) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return unk_0xF649DD3BF44195C7(iLocal_1111, iParam0, 287);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_1213(int iParam0, int iParam1)
{
	if (!func_137(iParam0, 13))
	{
		return;
	}
	if (!func_370(iParam0, 2))
	{
		if (!func_370(iParam0, 0) && !func_1188(iParam0, iLocal_1113, 0))
		{
			if (func_120(Local_1164.f_69[iParam0]))
			{
				unk_0x271603AF9C0C7EB3(iParam1, false);
				unk_0xF4F945BB00F6E31C(Local_1164.f_69[iParam0], 1);
				func_1225(iParam0, 0);
			}
		}
	}
}

void func_1214(int iParam0, int iParam1, bool bParam2)
{
	if (bLocal_1117 && func_1221(iParam0, bParam2))
	{
		iVar0 = func_1220(iParam0);
		iVar1 = func_1219(iParam0);
		fVar2 = func_1218(iParam0);
		if (!unk_0xE4EDC4B0E92C078B(uLocal_1052[iParam0]))
		{
			Stack.Push(Local_407.f_188.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_188.f_8);
			bVar3 = (StackVal && StackVal);
			bVar4 = func_1217(iParam0);
			func_1149(&(uLocal_1052[iParam0]), iParam1, iVar1, iVar0, func_1216(iParam0), fVar2, 0, bVar4, 0, bVar3);
		}
		else
		{
			if (func_1215(iParam0))
			{
				unk_0x436F3596830D7DC3(uLocal_1052[iParam0], round(unk_0x085953070423354C(iParam1)));
			}
			if (iVar1 != unk_0x301901B13DC3365B(uLocal_1052[iParam0]))
			{
				unk_0xBC8E0A7390523199(uLocal_1052[iParam0], iVar1);
				unk_0x516E63E474722206(uLocal_1052[iParam0], fVar2);
			}
			if (func_890(iVar0) != unk_0x8FBD6436A27198B4(uLocal_1052[iParam0]))
			{
				func_891(&(uLocal_1052[iParam0]), iVar0);
			}
			if (func_137(iParam0, 12))
			{
				func_1103(uLocal_1052[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_407.f_188.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_188.f_5);
			if (StackVal && StackVal)
			{
				if (!unk_0xE14836FE7BA140D5(uLocal_1052[iParam0]))
				{
					func_1053(&(uLocal_1052[iParam0]), 0);
				}
			}
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(uLocal_1052[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_1052[iParam0]));
	}
}

int func_1215(int iParam0)
{
	switch (func_1219(iParam0))
	{
		case 460:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1216(int iParam0)
{
	if (Local_407.f_188.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_7);
		return StackVal;
	}
	if (func_1058() == 8 && func_137(iParam0, 10))
	{
		return "PB_TARGET";
	}
	return "BLIP_VEH";
}

int func_1217(int iParam0)
{
	if (Local_407.f_188.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_9);
		return StackVal;
	}
	return 0;
}

float func_1218(int iParam0)
{
	if (Local_407.f_188.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_3);
		return StackVal;
	}
	if (func_1058() == 8 && func_137(iParam0, 10))
	{
		return 1f;
	}
	return 1f;
}

int func_1219(int iParam0)
{
	if (Local_407.f_188.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_1);
		return StackVal;
	}
	switch (func_1058())
	{
		case 8:
			if (func_137(iParam0, 10))
			{
				return 432;
			}
			break;
	}
	return 225;
}

int func_1220(int iParam0)
{
	if (Local_407.f_188.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188.f_2);
		return StackVal;
	}
	if (func_1058() == 8 && func_137(iParam0, 10))
	{
		return 6;
	}
	return 9;
}

int func_1221(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Stack.Push(Local_407.f_188 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_188);
		if (StackVal && StackVal)
		{
			return 1;
		}
		switch (func_1058())
		{
			case 8:
				if (func_137(iParam0, 10))
				{
					return 1;
				}
				break;
			
			case 32:
				if ((func_1224(func_376(iParam0, 2)) != -1 && !func_1223(func_376(iParam0, 2))) && !func_1222(func_376(iParam0, 2), 1))
				{
					return 1;
				}
				break;
			
			case 36:
				if (func_1224(func_376(iParam0, 2)) != -1 && !func_1222(func_376(iParam0, 2), 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_1222(int iParam0, int iParam1)
{
	if ((func_6(iParam0, 4) || func_6(iParam0, 3)) || (iParam1 && func_692(iParam0, iLocal_1113, 6)))
	{
		return 1;
	}
	return 0;
}

bool func_1223(int iParam0)
{
	return Local_1054[iParam0].f_4 != func_70();
}

int func_1224(int iParam0)
{
	return -1;
}

void func_1225(int iParam0, int iParam1)
{
	if (func_15(&(Local_1311[iLocal_1113].f_17[iParam0]), iParam1))
	{
	}
}

int func_1226(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1227(int iParam0)
{
	func_1228(iParam0, 4);
}

void func_1228(int iParam0, int iParam1)
{
	if (func_124(&(Local_1311[iLocal_1113].f_17[iParam0]), iParam1))
	{
	}
}

void func_1229()
{
	iVar0 = func_1315(iLocal_1110);
	iVar5 = 0;
	while (iVar5 < Local_220.f_10)
	{
		func_1313(iVar5);
		bVar1 = unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar5]);
		if (bVar1)
		{
			iVar4 = unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iVar5]);
			bVar2 = unk_0x437347B10A200C4B(iVar4, 0);
			if (Local_407.f_54.f_18 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar4);
				Stack.Push(bVar2);
				Call_Loc(Local_407.f_54.f_18);
			}
			if (!bVar2)
			{
				func_1308(iVar5, iVar4);
				func_1299(iVar5, iVar4, &bVar3);
				func_1296(iVar5, iVar4);
			}
			func_1295(iVar5);
			func_1290(iVar5, iVar0);
			func_1281(iVar5);
		}
		else
		{
			Local_1054[iVar5].f_1 = 99999f;
			Local_1054[iVar5].f_2 = 99999f;
			Local_1054[iVar5].f_3 = 99999f;
		}
		func_1273(iVar5, bVar1);
		iVar5++;
	}
	if (bVar3)
	{
		if (!func_1272())
		{
			if (Local_407.f_54.f_16 != 0)
			{
				Stack.Push(iVar5);
				Call_Loc(Local_407.f_54.f_16);
			}
		}
		func_1269(1, func_1271(iLocal_1119));
		func_1264(1);
	}
	else
	{
		func_1269(0, func_1271(iLocal_1119));
		func_1264(0);
	}
	if (func_1315(iLocal_1110) > 0)
	{
		func_1257(1);
	}
	else
	{
		func_1257(0);
	}
	if (iVar0 > 0)
	{
		func_1256();
	}
	func_1253();
	func_1231();
	iLocal_1136++;
	if (iLocal_1136 >= func_7())
	{
		iLocal_1136 = 0;
		func_1230();
	}
}

void func_1230()
{
	if (func_11(&(Local_1054.f_10), 5000, 0) && Local_1054.f_12)
	{
		func_22(&(Local_1054.f_10));
		Local_1054.f_12 = 0;
	}
}

void func_1231()
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iLocal_1136]))
	{
		iVar4 = unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iLocal_1136]);
		bVar3 = unk_0x437347B10A200C4B(iVar4, 0);
		vVar0 = { unk_0x68F4C0EC296D3901(iVar4, 0) };
		if (!bVar3)
		{
			func_1251(iLocal_1136, vVar0);
			if (func_11(&(Local_1054.f_10), 5000, 0))
			{
				if (iLocal_1136 == 0)
				{
					Local_1054.f_12 = 1;
				}
				func_1232(iLocal_1136, iVar4, vVar0);
			}
		}
	}
}

void func_1232(int iParam0, int iParam1, vector3 vParam2)
{
	iVar0 = func_1249(vParam2, 6, -1, 0, 1, -1);
	vVar1 = { func_1238(iVar0, 0) };
	iVar4 = unk_0x0D1736C2E221BCEA(vVar1, func_1234(iVar0));
	iVar5 = unk_0x4D570FEF9D230CE7(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (func_1233(iVar0, &vVar1, &fVar6))
		{
			unk_0xA47B46945FF6DE74(iParam1, vVar1, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iParam1, fVar6);
		}
	}
}

bool func_1233(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0);
}

char* func_1234(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1235(Global_100839);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
	}
	return "";
}

char* func_1235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1236() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_1236()
{
	return func_1237(unk_0xD803B885F5E47A62());
}

int func_1237(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

Vector3 func_1238(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_1248(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_70())
			{
				if (func_1247(Global_1590374))
				{
					return func_1240(2, 2);
				}
				else if (func_1239(Global_1590374))
				{
					return func_1240(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_1239(int iParam0)
{
	if (iParam0 != func_70())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1240(int iParam0, int iParam1)
{
	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_70())
	{
		if (iParam1 == 3)
		{
			if (func_1241(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_1241(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_1241(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

int func_1241(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_1246(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1246(iParam1, &vVar6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_1244(iParam0) };
	}
	else
	{
		Var12 = { func_1243(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_1242(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_1242(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_1242(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_1244(int iParam0)
{
	return func_1245(iParam0);
}

struct<6> func_1245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_1246(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_1247(int iParam0)
{
	if (iParam0 != func_70())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_1236() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_1249(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_160(iVar0))
		{
			if (!bParam5 || func_1250(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_1238(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

int func_1250(int iParam0)
{
	return func_155(iParam0, 0, 0);
}

void func_1251(int iParam0, vector3 vParam1)
{
	Local_1054[iParam0].f_1 = unk_0x0EB28750412C3A5A(vParam1, vLocal_1114, func_1252(iParam0));
	Local_1054[iParam0].f_2 = unk_0x0EB28750412C3A5A(vParam1, func_1048(), func_1252(iParam0));
	Local_1054[iParam0].f_3 = unk_0x0EB28750412C3A5A(vParam1, Local_220.f_10.f_5[iParam0].f_3, func_1252(iParam0));
}

int func_1252(int iParam0)
{
	if (Local_407.f_54.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_13);
	}
	return 1;
}

void func_1253()
{
	if (func_1003(iLocal_1110, 1) && func_1255())
	{
		if (func_740())
		{
			if (!func_437(35))
			{
				func_739(func_1254(), -1);
				func_425(35);
			}
		}
	}
	else
	{
		if (func_437(35))
		{
			func_710(35);
		}
		if (func_736(func_1254()))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

char* func_1254()
{
	return "BHH_HELD";
}

int func_1255()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar0]))
		{
			if (iLocal_1140[iVar0] != iLocal_1113)
			{
				if (!unk_0xD59B17D2DFF98E26(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iVar0])))
				{
					if (Local_1054[iVar0].f_1 < 2f)
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

void func_1256()
{
}

void func_1257(bool bParam0)
{
	if (bParam0)
	{
		if (func_1263() == 0)
		{
			func_1261(func_1057(), Local_1164.f_145);
		}
	}
	else
	{
		func_1258();
	}
}

void func_1258()
{
	if (Global_1681961.f_4706.f_2 != 0)
	{
	}
	else
	{
		return;
	}
	func_1260();
	func_1259();
}

void func_1259()
{
	Global_1681961.f_4706.f_2 = 0;
	Global_1681961.f_4706 = -1;
	Global_1681961.f_4706.f_1 = -1000;
}

void func_1260()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0].f_1 = -1;
		iVar0++;
	}
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_579), 0);
	func_1259();
}

void func_1261(int iParam0, struct<2> Param1)
{
	func_1262(iParam0, Param1);
}

void func_1262(int iParam0, struct<2> Param1)
{
	if (iParam0 == 0 || !func_393(Param1))
	{
		return;
	}
	if (Global_1681961.f_4706.f_2 != iParam0)
	{
		Global_1681961.f_4706.f_2 = iParam0;
		Global_1681961.f_4706 = { Param1 };
	}
}

int func_1263()
{
	return Global_1681961.f_4706.f_2;
}

void func_1264(bool bParam0)
{
	if (bParam0 != func_1268(iLocal_1110))
	{
		func_1265(iLocal_1120, bParam0);
	}
}

void func_1265(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1266(unk_0xD803B885F5E47A62(), iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1703159[unk_0xD803B885F5E47A62()].f_12), iParam0);
		}
	}
	else if (func_1266(unk_0xD803B885F5E47A62(), iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_1703159[unk_0xD803B885F5E47A62()].f_12), iParam0);
	}
}

bool func_1266(int iParam0, int iParam1)
{
	if (!func_1267(iParam0))
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1703159[iParam0].f_12, iParam1);
}

int func_1267(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_1268(int iParam0)
{
	return func_1266(iParam0, iLocal_1120);
}

void func_1269(bool bParam0, int iParam1)
{
	iVar0 = func_1270(iParam1);
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1573343, iVar0))
		{
			unk_0x5D96D8530B3D0904(&Global_1573343, iVar0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1573343, iVar0))
	{
		unk_0x0674E58A79778E99(&Global_1573343, iVar0);
	}
}

int func_1270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_1271(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		default:
	}
	return -1;
}

bool func_1272()
{
	return Global_1573342;
}

void func_1273(int iParam0, bool bParam1)
{
	if (!func_1280(iParam0))
	{
		return;
	}
	if (bParam1 && func_120(Local_1164.f_2[iParam0]))
	{
		func_1066(&(Local_1164.f_2[iParam0]));
	}
	func_1275(iParam0);
	func_1274(iParam0);
}

void func_1274(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_2.f_18[iParam0]) && func_120(Local_1164.f_2.f_18[iParam0]))
	{
		func_1066(&(Local_1164.f_2.f_18[iParam0]));
		func_110(&(Local_1164.f_2.f_18[iParam0]));
	}
}

void func_1275(int iParam0)
{
	if (!func_6(iParam0, 4) || !func_1277(iParam0))
	{
		return;
	}
	iVar0 = func_1276(iParam0);
	if (unk_0xD59B17D2DFF98E26(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0))))
	{
		unk_0x15AFB6CBDE990FB6(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0)), 1, 1);
	}
	if (func_48(11))
	{
		if (!unk_0x2EAFA036429F20FC(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0))))
		{
			unk_0x4AE2D6991D4E4082(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0)), 1, 1);
		}
		if (!unk_0x4FC40AB0ECCE6E18(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0))))
		{
			func_1066(&iVar0);
		}
	}
	else if (func_48(12))
	{
		func_110(&iVar0);
	}
	else
	{
		func_1066(&iVar0);
	}
}

int func_1276(int iParam0)
{
	if (!func_46(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_45(iParam0);
	switch (func_47())
	{
		case 2:
			return Local_1164.f_69[iVar1];
		
		case 1:
			return Local_1164.f_24[iVar1];
		
		default:
	}
	return uVar0;
}

int func_1277(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!unk_0xE5DBF9B6126856CA(func_1276(iParam0)))
	{
		return 0;
	}
	if ((func_6(iParam0, 35) || func_6(iParam0, 36)) || func_6(iParam0, 37))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(func_1276(iParam0)), 0))
	{
		return 0;
	}
	switch (func_47())
	{
		case 2:
			if (func_1278(func_1279(iParam0), 0, 1))
			{
				return 0;
			}
			break;
	}
	if (!func_120(func_1276(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1278(int iParam0, bool bParam1, bool bParam2)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBBA8A868118C90ED(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xA30B8362589C124A(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0x34BFC6F0CB887BC2(iVar2))
						{
							if (!bParam2 && func_69(unk_0x83FACCC48B68F9D1(iVar2), unk_0xD803B885F5E47A62()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (!bParam2 && func_69(unk_0x83FACCC48B68F9D1(iVar2), unk_0xD803B885F5E47A62()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1279(int iParam0)
{
	iVar1 = func_1276(iParam0);
	if (unk_0xE5DBF9B6126856CA(iVar1))
	{
		return unk_0xB177666FAB6F4417(iVar1);
	}
	return uVar0;
}

int func_1280(int iParam0)
{
	if ((((func_6(iParam0, 19) || (func_6(iParam0, 3) && func_11(&(Local_1164.f_2.f_2[iParam0]), 6000, 0))) || func_6(iParam0, 4)) || func_6(iParam0, 25)) || func_6(iParam0, 33))
	{
		return (func_6(iParam0, 4) || func_6(iParam0, 3));
	}
	return 0;
}

void func_1281(int iParam0)
{
	if (func_1289(iParam0))
	{
		func_1282(iParam0);
	}
	else
	{
		func_946(iParam0);
	}
}

void func_1282(int iParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(Local_1054[iParam0]))
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iParam0]))
		{
			Local_1054[iParam0] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]));
			if (func_1288(func_929(iParam0)))
			{
				unk_0xBC8E0A7390523199(Local_1054[iParam0], func_929(iParam0));
			}
			unk_0x516E63E474722206(Local_1054[iParam0], func_1287(iParam0));
			unk_0x61755AC17D8F538E(Local_1054[iParam0], func_1285(iParam0, 0));
			unk_0xDC5B2F9D0CCE3A10(Local_1054[iParam0], func_1284(iParam0));
			unk_0x2A065371C9D96655(Local_1054[iParam0], 12);
			if (func_1283(iParam0))
			{
				unk_0xF2D30B8ACAF12A39(Local_1054[iParam0], 1);
			}
			if (!func_692(iParam0, iLocal_1113, 46))
			{
				func_1053(&(Local_1054[iParam0]), 1);
				func_690(iParam0, 46);
			}
		}
	}
	else
	{
		unk_0x61755AC17D8F538E(Local_1054[iParam0], func_1285(iParam0, 0));
		if (unk_0x301901B13DC3365B(Local_1054[iParam0]) != func_929(iParam0) && func_1288(func_929(iParam0)))
		{
			unk_0xBC8E0A7390523199(Local_1054[iParam0], func_929(iParam0));
			unk_0xDC5B2F9D0CCE3A10(Local_1054[iParam0], func_1284(iParam0));
		}
		if (unk_0x8FBD6436A27198B4(Local_1054[iParam0]) != func_1285(iParam0, 0))
		{
			unk_0x61755AC17D8F538E(Local_1054[iParam0], func_1285(iParam0, 0));
		}
	}
}

bool func_1283(int iParam0)
{
	if (Local_407.f_54.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_8);
		return StackVal;
	}
	return Local_220.f_10.f_1.f_3;
}

char* func_1284(int iParam0)
{
	if (Local_407.f_54.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_7);
		return StackVal;
	}
	return "FMC_BLIP_ME";
}

int func_1285(int iParam0, bool bParam1)
{
	if (Local_407.f_54.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_2);
		return func_890(StackVal);
	}
	if (!bParam1)
	{
		if (func_692(iParam0, iLocal_1113, 12))
		{
			return 1;
		}
	}
	else if (func_1058() == 26 && func_692(iParam0, iLocal_1113, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_1054[iParam0].f_4 != func_70())
	{
		return func_890(func_1286(Local_1054[iParam0].f_4));
	}
	if (func_388(iParam0))
	{
		if (!func_48(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1286(int iParam0)
{
	iVar0 = func_648(iParam0);
	if (iVar0 != -1)
	{
		return func_646(iVar0);
	}
	return 1;
}

var func_1287(int iParam0)
{
	if (Local_407.f_54.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_3);
		return StackVal;
	}
	return Local_220.f_10.f_1.f_2;
}

int func_1288(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_1289(int iParam0)
{
	if (!bLocal_1118)
	{
		return 0;
	}
	if (func_1222(iParam0, 0))
	{
		return 0;
	}
	if (Local_1054[iParam0].f_4 != func_70() && func_47() != 1)
	{
		return 0;
	}
	if (func_407(iParam0, 10) && !func_6(iParam0, 7))
	{
		return 0;
	}
	if (func_692(iParam0, iLocal_1113, 14))
	{
		return 0;
	}
	if (func_6(iParam0, 23) && func_1146(iLocal_1110))
	{
		return 0;
	}
	if (func_6(iParam0, 29) && func_6(iParam0, 50))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_54);
	return StackVal;
}

void func_1290(int iParam0, int iParam1)
{
	if (Local_1054[iParam0].f_4 == iLocal_1110)
	{
		if (iParam1 != 5)
		{
			if (!func_1294(Local_1164.f_2.f_15[iParam0]))
			{
				func_1293(Local_1164.f_2.f_15[iParam0]);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1681961.f_4551 && !func_1292(iLocal_1110)) && !func_693())
		{
			if (func_1294(Local_1164.f_2.f_15[iParam0]))
			{
				func_1291(Local_1164.f_2.f_15[iParam0]);
			}
		}
	}
}

void func_1291(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_695(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]) && func_396(Param0, Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]))
		{
			Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1315(unk_0xD803B885F5E47A62()) <= 0)
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_579), 0);
		func_1259();
	}
}

int func_1292(int iParam0)
{
	if (iParam0 != func_70() && (func_28(iParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 1);
		return bVar0;
	}
	return 0;
}

void func_1293(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_695(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]))
		{
			Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_579), 0);
	func_394(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1294(struct<2> Param0)
{
	if (!func_695(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_695(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]) && func_396(Param0, Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1295(int iParam0)
{
	if (iLocal_1140[iParam0] != func_414())
	{
		if (uLocal_1142[iParam0] != iLocal_1140[iParam0])
		{
			uLocal_1142[iParam0] = iLocal_1140[iParam0];
		}
	}
}

void func_1296(int iParam0, int iParam1)
{
	if (func_6(iParam0, 29) || !func_1298(iParam0))
	{
		return;
	}
	func_1297(iParam1);
}

void func_1297(int iParam0)
{
	if (unk_0x4FC40AB0ECCE6E18(iParam0))
	{
		fVar0 = 0,3f;
		if (unk_0x70EED0761B82965E(iParam0))
		{
			fVar1 = 0,5f;
			fVar0 = 1f;
		}
		unk_0xA402F6C87C08815C(18, &iVar2, &iVar3, &iVar4, &uVar5);
		func_1101(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0);
	}
}

int func_1298(int iParam0)
{
	return 0;
}

void func_1299(int iParam0, int iParam1, var uParam2)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		iVar0 = unk_0x0FF5573D0492BF97(iParam1);
		if (iVar0 != -1)
		{
			if (unk_0xEC560E589DF8370E(iVar0))
			{
				iVar1 = unk_0x940C1429253D3B1B(iVar0);
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iVar2 = unk_0x83FACCC48B68F9D1(iVar1);
					if (iVar2 == iLocal_1110)
					{
						if (unk_0x526BC32A660C89E6(Local_1164.f_2[iParam0]))
						{
							unk_0xD4B53761A1784AAE(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), false);
							unk_0xE121AE1BBF90E186(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), true);
							unk_0x1E9649458B15960F(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), false);
							func_690(iParam0, 1);
							if (func_1307(iParam0))
							{
								unk_0x4A4806F9D471E491(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iParam0]), true, 0);
							}
							if (!func_6(iParam0, 1))
							{
								func_690(iParam0, 18);
							}
							*uParam2 = 1;
							func_752();
						}
					}
					else if (!unk_0xFB75B0F82CA525F6(iVar2))
					{
						func_690(iParam0, 12);
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar1))
				{
					if (unk_0x16102BEDC7435774(iVar1))
					{
						if (unk_0xBFDE4EE64C4BF2D6(iVar1, iLocal_1078))
						{
							func_690(iParam0, 1);
							if (!func_6(iParam0, 1))
							{
								func_690(iParam0, 18);
							}
							*uParam2 = 1;
							func_752();
						}
					}
				}
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					if (unk_0x6937EA2286828455(iVar1, 0) == iLocal_1144)
					{
						func_690(iParam0, 14);
					}
				}
			}
			else if (unk_0xE2F1E99DD161A861(iVar0))
			{
				iVar3 = unk_0x96A5FE5834B81CE7(iVar0);
				if (unk_0xDF1306B443CD3D15(iVar3, 0) && !func_1306())
				{
					func_690(iParam0, 21);
					if (unk_0x405E212DDE472467(iLocal_1111, 0))
					{
						if (unk_0x6937EA2286828455(iLocal_1111, 0) == iVar3)
						{
							if (func_1056(iLocal_1111, 0) == -1)
							{
								func_690(iParam0, 1);
								if (!func_6(iParam0, 1))
								{
									func_690(iParam0, 18);
									func_752();
								}
								*uParam2 = 1;
								func_752();
							}
							func_690(iParam0, 14);
						}
						else
						{
							func_1303(iLocal_1144, iVar3, iParam0);
						}
					}
				}
				else if (func_410() == 0)
				{
					func_1300(iParam0);
				}
			}
		}
	}
}

void func_1300(int iParam0)
{
	if (func_120(Local_1164.f_2[iParam0]))
	{
		unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1, 1);
		unk_0xCDCD90141EA7E6EE(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1, 0);
		unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), true, 0);
		func_1302(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]));
		func_690(iParam0, 45);
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), 1) };
		vVar3 = { unk_0x550B1459B4642A86(vVar0, 1067030938, 1069547520) };
		if (vVar3.x == vVar0.x && vVar3.y == vVar0.y)
		{
			iVar6 = func_45(iParam0);
			if (iVar6 != -1)
			{
				iVar7 = Local_1164.f_69[iVar6];
				if (unk_0xE5DBF9B6126856CA(iVar7))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(iVar7), 0) };
				}
			}
		}
		fVar8 = func_1301(unk_0x134B62B726CEC8E6(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0])));
		vVar3.z = (vVar3.z + (fVar8 * 0,5f));
		unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_1164.f_2[iParam0]), vVar3, 1, false, 0, 1);
	}
}

float func_1301(int iParam0)
{
	func_249(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	return unk_0x755FF954DAE327E1((vVar0.z - vVar3.z));
}

void func_1302(int iParam0)
{
	unk_0x272295383B6513AB(iParam0, 1);
	unk_0xAC0C6241732E36F6(iParam0);
	unk_0x448BFD41F705C0B9(iParam0, 1);
}

void func_1303(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam0);
		iVar1 = func_1056(iLocal_1111, 0);
		if (func_1305(iVar0))
		{
			if (iVar1 == -1)
			{
				if (unk_0x50B5F6F3C29E9380(iParam1, iParam0))
				{
					if (unk_0xE2F1E99DD161A861(iParam1))
					{
						if (unk_0xBBA8A868118C90ED(iParam1, -1, 0) || unk_0x134B62B726CEC8E6(iParam1) == func_1304())
						{
							func_690(iParam2, 1);
							if (!func_6(iParam2, 1))
							{
								func_690(iParam2, 18);
								func_752();
							}
						}
					}
				}
			}
		}
	}
}

int func_1304()
{
	return -877478386;
	return -1100548694;
}

int func_1305(int iParam0)
{
	if (iParam0 == -50547061)
	{
		return 1;
	}
	if (iParam0 == 1621617168)
	{
		return 1;
	}
	if (iParam0 == 1394036463)
	{
		return 1;
	}
	if (iParam0 == 2025593404)
	{
		return 1;
	}
	return 0;
}

int func_1306()
{
	return 0;
}

int func_1307(int iParam0)
{
	return 0;
}

void func_1308(int iParam0, int iParam1)
{
	if ((!func_46(iParam0) || func_6(iParam0, 39)) || func_692(iParam0, iLocal_1113, 36))
	{
		return;
	}
	iVar0 = func_1312(iParam0);
	if (unk_0xE5DBF9B6126856CA(iVar0) && func_120(iVar0))
	{
		iVar1 = unk_0xA5FBBC2F619A4DE2(iVar0);
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (func_1310(iParam1, iVar1, func_1311(iParam0, unk_0x134B62B726CEC8E6(iVar1)), 0f, 0f, 90f, 0, 0))
			{
				func_1309(iVar1);
				func_690(iParam0, 36);
			}
		}
	}
}

void func_1309(int iParam0)
{
	switch (func_47())
	{
		case 2:
			iVar0 = unk_0x96A5FE5834B81CE7(iParam0);
			unk_0xBEDE255174F746AE(iVar0, 1);
			break;
	}
}

int func_1310(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9)
{
	if (!unk_0x50B5F6F3C29E9380(iParam0, iParam1))
	{
		switch (func_47())
		{
			case 2:
				unk_0x9F528B1B53FBC5D9(iParam0, iParam1, unk_0xF653B9B22DA806A9(iParam1, "chassis_dummy"), vParam2, vParam5, iParam8, 0, iParam9, 0, 2, 1);
				break;
			
			case 1:
				unk_0xAE5CC8F2D4925511(unk_0x486F67509A82DB2D(iParam0), unk_0x940C1429253D3B1B(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1311(int iParam0, int iParam1)
{
	switch (func_47())
	{
		case 2:
			switch (iParam1)
			{
				case -1924433270:
				case -114627507:
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0,1f;
						
						case 1:
							return -1f, -2f, -0,1f;
						
						case 2:
							return 1f, -2f, -0,1f;
						
						case 3:
							return -1f, -2f, -0,1f;
						
						default:
					}
					break;
				
				case 931280609:
				case -431692672:
				case -674927303:
					switch (iParam0)
					{
						case 0:
							return 0,5f, 0f, -0,1f;
						
						case 1:
							return -0,5f, 0f, -0,1f;
						
						case 2:
							return 0,5f, 0f, -0,1f;
						
						case 3:
							return -0,5f, 0f, -0,1f;
						
						default:
					}
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0,1f;
				
				case 1:
					return -1f, 0f, -0,1f;
				
				case 2:
					return 1f, 0f, -0,1f;
				
				case 3:
					return -1f, 0f, -0,1f;
				
				default:
			}
			return 0f, -1f, -0,1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_1312(int iParam0)
{
	switch (func_47())
	{
		case 2:
			return Local_1164.f_69[func_45(iParam0)];
		
		case 1:
			return Local_1164.f_24[func_45(iParam0)];
		
		default:
	}
	return uVar0;
}

void func_1313(int iParam0)
{
	func_1314(iParam0, 1);
	func_1314(iParam0, 21);
	func_1314(iParam0, 14);
}

void func_1314(int iParam0, int iParam1)
{
	if (func_124(&(Local_1311[iLocal_1112].f_3[iParam0]), iParam1))
	{
	}
}

int func_1315(int iParam0)
{
	if (iParam0 != func_70())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_695(Global_1628237[iParam0].f_579.f_1[iVar0]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_1316()
{
	iVar3 = 0;
	while (iVar3 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar0 = unk_0xB98DB26FBF676FA1(1, iVar3);
		switch (iVar0)
		{
			case 174:
				if (!unk_0x218F818E64020C17(1, iVar3, &iVar1, 2))
				{
					return;
				}
				switch (iVar1)
				{
					case -1872730803:
						func_1349(iVar3);
						break;
					
					case -1717006654:
						func_1340(iVar3);
						break;
					
					case 1059615374:
						func_1339(iVar3);
						break;
					
					case -251935260:
						func_1338(iVar3);
						break;
					
					case 24120320:
						func_1328(iVar3);
						break;
				}
				break;
			
			case 185:
				func_1317(iVar3);
				break;
		}
		iVar3++;
	}
}

void func_1317(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var1, 13))
	{
		if (unk_0xC844350D5D58C99A(Var1))
		{
			if (unk_0xEC560E589DF8370E(Var1))
			{
				iVar15 = unk_0x940C1429253D3B1B(Var1);
				iVar16 = func_1017();
				if (unk_0x02A813E6E0380440() < iVar16)
				{
					if (func_96(iVar15))
					{
						if (func_1323(iVar15))
						{
							if ((unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1)) && iLocal_1111 == unk_0x940C1429253D3B1B(Var1.f_1))
							{
								func_1015(iLocal_1110, iVar16, 1, 0);
							}
						}
					}
				}
				iVar17 = 0;
				while (iVar17 < Local_220.f_28.f_1)
				{
					if (unk_0xE5DBF9B6126856CA(Local_1164.f_24[iVar17]))
					{
						if (Var1 == unk_0xA5FBBC2F619A4DE2(Local_1164.f_24[iVar17]))
						{
							if (unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1))
							{
								iVar18 = unk_0x940C1429253D3B1B(Var1.f_1);
								if (unk_0x34BFC6F0CB887BC2(iVar18))
								{
									func_1071(iVar17, 21);
									iVar14 = unk_0x83FACCC48B68F9D1(iVar18);
									if (Local_407.f_73.f_113 != 0)
									{
										Stack.Push(iVar17);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_407.f_73.f_113);
									}
									if (iVar14 == iLocal_1110)
									{
										func_752();
										if (Var1.f_5 && func_1322(iVar17))
										{
											Local_1079.f_3++;
										}
									}
									if (unk_0x40B8C182D63932FC(iVar14))
									{
									}
								}
							}
						}
					}
					iVar17++;
				}
				func_1321(Var1, iVar15, iVar14);
			}
			else if (unk_0xE2F1E99DD161A861(Var1))
			{
				iVar19 = func_1017();
				if (unk_0x02A813E6E0380440() < iVar19)
				{
					iVar20 = unk_0xA30B8362589C124A(unk_0x96A5FE5834B81CE7(Var1), -1, 0);
					iVar21 = unk_0xA30B8362589C124A(unk_0x96A5FE5834B81CE7(Var1), 0, 0);
					if (func_1319(Var1, iVar20, iVar21))
					{
						if (func_1323(iVar20))
						{
							if ((unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1)) && iLocal_1111 == unk_0x940C1429253D3B1B(Var1.f_1))
							{
								func_1015(iLocal_1110, iVar19, 1, 0);
							}
						}
					}
				}
				iVar22 = 0;
				while (iVar22 < Local_220.f_75.f_1)
				{
					if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[iVar22]))
					{
						if (Var1 == unk_0xA5FBBC2F619A4DE2(Local_1164.f_69[iVar22]))
						{
							if (unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1))
							{
								if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var1.f_1)))
								{
									iVar14 = unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var1.f_1));
									if (Local_407.f_188.f_26 != 0)
									{
										Stack.Push(iVar22);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_407.f_188.f_26);
									}
									if (iVar14 == iLocal_1110)
									{
										func_752();
									}
									iVar23 = func_1318(iVar22);
									if (iVar23 != -1)
									{
										func_1071(iVar23, 22);
										if (unk_0x40B8C182D63932FC(iVar14))
										{
										}
									}
								}
							}
						}
					}
					iVar22++;
				}
				iVar24 = unk_0xA30B8362589C124A(unk_0x96A5FE5834B81CE7(Var1), -1, 0);
				if (unk_0xC844350D5D58C99A(iVar24))
				{
					func_1321(Var1, iVar24, iVar14);
				}
			}
			else if (unk_0x6BC06B42AD71CD8B(Var1))
			{
				iVar0 = 0;
				while (iVar0 < Local_220.f_10.f_5)
				{
					if (!func_6(iVar0, 4) && unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar0]))
					{
						if (Var1 == unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iVar0]))
						{
							if ((unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1)) && unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var1.f_1)))
							{
								iVar14 = unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var1.f_1));
								if (Var1.f_5)
								{
								}
							}
							if (Var1.f_5)
							{
								if (bLocal_1108)
								{
									func_44(iVar0, 3);
									func_44(iVar0, 19);
								}
								else
								{
									func_690(iVar0, 9);
									if (Local_407.f_54.f_17 != 0)
									{
										Stack.Push(iVar0);
										Call_Loc(Local_407.f_54.f_17);
									}
								}
							}
						}
					}
					iVar0++;
				}
				iVar25 = 0;
				while (iVar25 < Local_220.f_92.f_1)
				{
					if (unk_0xE5DBF9B6126856CA(Local_1164.f_76[iVar25]))
					{
						if (Var1 == unk_0xA5FBBC2F619A4DE2(Local_1164.f_76[iVar25]))
						{
							if (unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1))
							{
								if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var1.f_1)))
								{
									iVar14 = unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var1.f_1));
									if (iVar14 == iLocal_1110)
									{
										func_752();
									}
									if (Local_407.f_216.f_18 != 0)
									{
										Stack.Push(iVar25);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_407.f_216.f_18);
									}
								}
							}
						}
					}
					iVar25++;
				}
			}
		}
	}
}

int func_1318(int iParam0)
{
	if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_1164.f_69[iParam0]), -1, 0))
	{
		return -1;
	}
	iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_1164.f_69[iParam0]), -1, 0);
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_220.f_28.f_1)
		{
			if (unk_0xE5DBF9B6126856CA(Local_1164.f_24[iVar1]) && iVar0 == unk_0x1B50683925F00106(Local_1164.f_24[iVar1]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

int func_1319(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam1) && unk_0x34BFC6F0CB887BC2(iParam1))
	{
		return 0;
	}
	if (unk_0xC844350D5D58C99A(iParam2) && unk_0x34BFC6F0CB887BC2(iParam2))
	{
		return 0;
	}
	if (func_1320(unk_0x134B62B726CEC8E6(iParam0)) && unk_0x61BFE09D45304863(iParam0) != 7)
	{
		return 1;
	}
	if (func_96(iParam1))
	{
		return 1;
	}
	if (func_96(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_1320(int iParam0)
{
	if (((((((((((((((iParam0 == 2046537925 || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -1973172295) || iParam0 == 456714581) || iParam0 == 353883353) || iParam0 == -1205689942) || iParam0 == 1127131465) || iParam0 == -1647941228) || iParam0 == -1683328900) || iParam0 == 1922257928) || iParam0 == -823509173) || iParam0 == 1074326203) || iParam0 == 630371791) || iParam0 == 321739290) || iParam0 == 67388999)
	{
		return 1;
	}
	return 0;
}

void func_1321(struct<13> Param0, int iParam13, int iParam14)
{
	if (unk_0x34BFC6F0CB887BC2(iParam13))
	{
		iVar0 = unk_0x83FACCC48B68F9D1(iParam13);
		if (unk_0x40B8C182D63932FC(iVar0))
		{
			if (unk_0xC844350D5D58C99A(Param0.f_1) && unk_0xEC560E589DF8370E(Param0.f_1))
			{
				iVar1 = unk_0x940C1429253D3B1B(Param0.f_1);
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iParam14 = unk_0x83FACCC48B68F9D1(iVar1);
					if (Local_407.f_10.f_6 != 0)
					{
						Stack.Push(iVar0);
						Stack.Push(Param0);
						Stack.Push(iParam14);
						Call_Loc(Local_407.f_10.f_6);
					}
					if (iParam14 == iLocal_1110)
					{
						if (func_48(15))
						{
							if (unk_0xFB75B0F82CA525F6(iVar0))
							{
								if (func_733(iVar0))
								{
									func_752();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_1322(int iParam0)
{
	if (Local_407.f_46 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_46);
		return StackVal;
	}
	return 1;
}

int func_1323(int iParam0)
{
	if (!func_1324() || !func_661(0, 0, 1))
	{
		return 0;
	}
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xAF6690C489CC6203(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1324()
{
	if (func_371(iLocal_1113, 3))
	{
		func_1325(iLocal_1120, 1);
		iVar0 = 1;
	}
	else
	{
		func_1325(iLocal_1120, 0);
		iVar0 = 0;
	}
	return iVar0;
}

void func_1325(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1326(unk_0xD803B885F5E47A62(), iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1703159[unk_0xD803B885F5E47A62()].f_11), iParam0);
		}
	}
	else if (func_1326(unk_0xD803B885F5E47A62(), iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_1703159[unk_0xD803B885F5E47A62()].f_11), iParam0);
	}
}

bool func_1326(int iParam0, int iParam1)
{
	if (!func_1327(iParam0))
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1703159[iParam0].f_11, iParam1);
}

int func_1327(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_11 != 0;
	}
	return 0;
}

void func_1328(int iParam0)
{
	if (Global_1391799.f_791 || !unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!func_1324())
	{
		return;
	}
	switch (vVar0.z)
	{
		case 0:
			if (vVar0.y == iLocal_1110)
			{
				func_1337("FMC_TIC_HAXSPu");
			}
			else
			{
				func_1329("FMC_TIC_HAXSPr", vVar0.y, 0, 0, 0, 1, 0);
			}
			break;
		
		case 1:
			if (vVar0.y == iLocal_1110)
			{
				func_1337("FMC_TIC_HAXLAPu");
			}
			else
			{
				func_1329("FMC_TIC_HAXLAPr", vVar0.y, 0, 0, 0, 1, 0);
			}
			break;
	}
}

int func_1329(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = -1;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != -1 && unk_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				unk_0x3A820E495A7BA3E5(func_652(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_631(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_631(iParam1, -2, 1, 0, 0));
		}
		unk_0xD06AC7C87A34A6AD(func_1335(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_72(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1334(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_1330(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_1330(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_1333() || !unk_0xA14BB9332558B949()) || !func_25(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_1331(iParam2);
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

int func_1331(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_1332(iVar0);
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

void func_1332(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_1333()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_1334(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_1335(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_1336(&cVar0);
}

var func_1336(char[4] cParam0)
{
	return cParam0;
}

int func_1337(char* sParam0)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_1330(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1338(int iParam0)
{
	if (!bLocal_1108)
	{
		return;
	}
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != iLocal_1119 || Var0.f_6 != unk_0xF35A91B88CC1915F())
		{
			return;
		}
		Local_1164.f_24[Var0.f_3].f_6 = Var0.f_2;
	}
}

void func_1339(int iParam0)
{
	if (!unk_0x218F818E64020C17(1, iParam0, &Var0, 7) || iLocal_1119 != Var0.f_2)
	{
		return;
	}
	Local_1073 = Var0.f_3;
	Local_1073.f_2 = Var0.f_5;
	Local_1073.f_1 = Var0.f_6;
	func_425(15);
}

void func_1340(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 26))
	{
		iVar26 = 0;
		while (iVar26 < 5)
		{
			if (Var0.f_20[iVar26] > 0)
			{
			}
			else
			{
				iVar27 = (iVar27 + func_1346(Var0.f_14[iVar26], Var0.f_2[iVar26].f_1, Var0.f_1));
			}
			iVar26++;
		}
		if (iVar27 > 0)
		{
			func_1344(Var0.f_1);
			func_1341(iVar27, Var0.f_1);
		}
	}
}

void func_1341(int iParam0, int iParam1)
{
	if (func_1342(iParam1))
	{
		Local_1311[iLocal_1112].f_15 = (Local_1311[iLocal_1112].f_15 + iParam0);
	}
}

bool func_1342(int iParam0)
{
	return ((iParam0 == iLocal_1110 && !func_1343(1)) || func_71(iParam0) == iLocal_1110);
}

bool func_1343(bool bParam0)
{
	return func_542(unk_0xD803B885F5E47A62(), bParam0);
}

void func_1344(int iParam0)
{
	if (!func_863(26))
	{
		if (!func_1345())
		{
		}
	}
	if (func_28(iParam0, 0, 1))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1749), iParam0);
		Global_2537071.f_1750[iParam0] = iLocal_1119;
	}
}

int func_1345()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (func_6(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1346(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (iParam0 == Local_1164.f_2.f_20)
		{
			if (iParam1 == Local_1164.f_2.f_15[iVar0].f_1)
			{
				iVar1++;
				if (bLocal_1108)
				{
					if (func_542(iParam2, 1))
					{
						Local_1164.f_2.f_9[iVar0] = unk_0xE86C2816EDC6CAF0(func_71(iParam2));
					}
					else
					{
						Local_1164.f_2.f_9[iVar0] = unk_0xE86C2816EDC6CAF0(iParam2);
					}
				}
				if (iParam2 == iLocal_1110)
				{
					func_690(iVar0, 6);
				}
				if (Local_407.f_54.f_15 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(iParam2 == iLocal_1110);
					Call_Loc(Local_407.f_54.f_15);
				}
				if (Local_407.f_18.f_6 != 0)
				{
					Stack.Push(iParam2 == iLocal_1110);
					Call_Loc(Local_407.f_18.f_6);
					func_1348(StackVal);
				}
				if (Local_407.f_18.f_7 != 0)
				{
					Stack.Push(iParam2 == iLocal_1110);
					Call_Loc(Local_407.f_18.f_7);
					func_1347(StackVal);
				}
				Jump @241; //curOff = 223
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1347(var uParam0)
{
}

void func_1348(var uParam0)
{
}

void func_1349(int iParam0)
{
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 10))
	{
		if (Var0.f_6 > 0)
		{
			return;
		}
		iVar10 = func_1346(Var0.f_5, Var0.f_2.f_1, Var0.f_1);
		if (iVar10 > 0)
		{
			func_1344(Var0.f_1);
			func_1341(iVar10, Var0.f_1);
		}
	}
}

void func_1350()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar0]) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_1164.f_2[iVar0]), 0))
		{
			if (func_661(0, 0, 1) && !func_692(iVar0, iLocal_1113, 47))
			{
				unk_0xD3DD9662CCFC031F(Local_220.f_10.f_5[0].f_2, func_1351());
				unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_1164.f_2[iVar0]), 0, 1);
				unk_0xD61D1D8400A3832C(Local_220.f_10.f_5[0].f_2, 1);
				func_425(6);
			}
			else
			{
				if (func_437(6))
				{
					unk_0xD3DD9662CCFC031F(Local_220.f_10.f_5[0].f_2, -1);
					func_710(6);
				}
				unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_1164.f_2[iVar0]), 1, 1);
				if (func_692(iVar0, iLocal_1113, 1) && func_387(iVar0))
				{
					if (unk_0x526BC32A660C89E6(Local_1164.f_2[iVar0]))
					{
						unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_1164.f_2[iVar0]), 1, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1351()
{
	return 1;
}

void func_1352()
{
	if ((!func_437(31) && bLocal_1117) && func_410() == 0)
	{
		func_1353();
		func_425(31);
	}
}

void func_1353()
{
	func_1355();
	Local_1079.f_1 = unk_0xDD0E7998AE8AD485();
	func_1354();
}

void func_1354()
{
}

void func_1355()
{
}

void func_1356()
{
	func_1357();
}

void func_1357()
{
	iLocal_1072 = 0;
}

void func_1358()
{
	Var3 = 1;
	Var3.f_1 = 1;
	Var6 = 2;
	Var6.f_1 = 1;
	Var6.f_1.f_2 = 1;
	uVar11 = 1;
	bVar13 = true;
	iVar1 = iVar1;
	iLocal_1144 = func_1399();
	iVar2 = 0;
	while (iVar2 < Local_220.f_10)
	{
		iLocal_1140[iVar2] = func_414();
		Local_1054[iVar2].f_4 = func_70();
		func_1314(iVar2, 33);
		func_1314(iVar2, 12);
		iVar2++;
	}
	if (bLocal_1108)
	{
		func_14(4);
	}
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (bLocal_1108)
		{
		}
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar15 = unk_0xF4FB3A22FC4991C8(iVar0);
			iVar14 = unk_0x4B2BFE4A3BC248ED(iVar15);
			iVar1 = iVar14;
			if (func_28(iVar14, 0, 1))
			{
				iVar16 = 0;
				iVar2 = 0;
				while (iVar2 < Local_220.f_10)
				{
					if (func_692(iVar2, iVar15, 1))
					{
						iLocal_1140[iVar2] = iVar15;
						iLocal_1140[iVar2] = iLocal_1140[iVar2];
						Local_1054[iVar2].f_4 = iVar14;
						if (iLocal_1110 != iVar14)
						{
							if (func_69(iLocal_1110, iVar14) && !func_48(21))
							{
								func_690(iVar2, 33);
							}
							else
							{
								func_690(iVar2, 12);
							}
						}
						if (!func_692(iVar2, iLocal_1113, 14))
						{
							iVar16 = 1;
						}
					}
					iVar2++;
				}
				func_1391(iVar14, iVar16);
				if (bLocal_1108)
				{
					iVar2 = 0;
					while (iVar2 < Local_220.f_10)
					{
						func_1388(iVar2, iVar0, iVar15);
						func_1386(&Var3, iVar2, iVar15);
						iVar2++;
					}
					func_1383(iVar0, iVar15);
					iVar2 = 0;
					while (iVar2 < Local_220.f_75)
					{
						func_1380(iVar2, iVar0, iVar15);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_220.f_28)
					{
						func_1377(iVar2, iVar0, iVar15);
						func_1375(&Var6, iVar2, iVar15);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_220.f_92)
					{
						func_1371(iVar2, iVar0, iVar15);
						iVar2++;
					}
					if (!func_371(iVar15, 0))
					{
						bVar13 = false;
					}
					if (!func_371(iVar15, 4))
					{
						func_1370(4);
					}
					iVar17 = 0;
					while (iVar17 < Local_220.f_144)
					{
						if (func_1369(iVar0, iVar17))
						{
							func_1368(&uVar11, iVar17);
						}
						iVar17++;
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_1054.f_7 != iLocal_1110)
	{
		if (!unk_0xFB75B0F82CA525F6(Local_1054.f_7))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_1054.f_8, Local_1054.f_7))
			{
				unk_0x5D96D8530B3D0904(&(Local_1054.f_8), Local_1054.f_7);
				func_917(Local_1054.f_7, 1);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_1054.f_8, Local_1054.f_7))
		{
			unk_0x0674E58A79778E99(&(Local_1054.f_8), Local_1054.f_7);
		}
	}
	Local_1054.f_7++;
	if (Local_1054.f_7 >= 31)
	{
		Local_1054.f_7 = 0;
	}
	if (bLocal_1108)
	{
		func_1366(&Var3);
		func_1363(&Var6);
		func_1359(&uVar11);
		if (bVar13)
		{
			if (!func_3(0))
			{
				func_14(0);
			}
		}
		else if (func_3(0))
		{
			func_1370(0);
		}
	}
}

void func_1359(var uParam0)
{
	if (!func_1362(&(Local_1164.f_90), uParam0))
	{
		func_1360(uParam0, &(Local_1164.f_90));
	}
}

void func_1360(var uParam0, var uParam1)
{
	iVar0 = func_1361(*uParam0, *uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		(*uParam1)[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
}

int func_1361(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1362(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != (*uParam1)[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_1363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_106(uParam0[iVar0], iVar1))
			{
				func_49(iVar0, func_1365(iVar1));
			}
			else
			{
				func_1364(iVar0, func_1365(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_1364(int iParam0, var uParam1)
{
	if (func_124(&(Local_1164.f_24[iParam0].f_3), uParam1))
	{
	}
}

int func_1365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 7;
		
		case 2:
			return 13;
		
		default:
	}
	return 29;
}

void func_1366(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (func_106(uParam0[iVar0], iVar1))
			{
				func_44(iVar0, func_1367(iVar1));
			}
			else
			{
				func_386(iVar0, func_1367(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_1367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 44;
		
		default:
	}
	return 51;
}

void func_1368(var uParam0, int iParam1)
{
	if (!func_106(uParam0, iParam1))
	{
		func_910(uParam0, iParam1);
	}
}

bool func_1369(int iParam0, int iParam1)
{
	return func_106(&(Local_1311[iParam0].f_23), iParam1);
}

void func_1370(int iParam0)
{
	if (func_124(&(Local_1164.f_113), iParam0))
	{
	}
}

void func_1371(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = iVar0;
		iVar2 = func_1374(iVar1);
		if (iVar2 != 11)
		{
			if (func_1173(iParam0, iParam2, iVar1))
			{
				func_1372(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1372(int iParam0, int iParam1, var uParam2)
{
	if (!func_1182(iParam1, iParam0))
	{
		func_1373(iParam1, iParam0);
	}
}

void func_1373(int iParam0, var uParam1)
{
	if (func_15(&(Local_1164.f_76[iParam0].f_2), uParam1))
	{
	}
}

int func_1374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 11:
			return 9;
		
		default:
	}
	return 11;
}

void func_1375(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = func_1376(iVar1);
		if (iVar2 != 25)
		{
			if (!func_106(uParam0[iParam1], iVar0) && func_1097(iParam1, iParam2, iVar2))
			{
				func_910(uParam0[iParam1], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 7;
		
		case 2:
			return 13;
		
		default:
	}
	return 25;
}

void func_1377(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar1 = iVar0;
		iVar2 = func_1379(iVar1);
		if (iVar2 != 29)
		{
			if (func_1097(iParam0, iParam2, iVar1))
			{
				func_1378(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1378(int iParam0, int iParam1, var uParam2)
{
	if (!func_75(iParam1, iParam0))
	{
		func_49(iParam1, iParam0);
	}
}

int func_1379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 3:
			return 2;
		
		case 2:
			return 4;
		
		case 12:
			return 10;
		
		case 14:
			return 14;
		
		case 16:
			return 15;
		
		case 17:
			return 17;
		
		case 19:
			return 21;
		
		case 20:
			return 22;
		
		case 21:
			return 23;
		
		case 22:
			return 24;
		
		case 23:
			return 25;
		
		case 1:
			return 3;
		
		default:
	}
	return 29;
}

void func_1380(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = iVar0;
		iVar2 = func_1382(iVar1);
		if (iVar2 != 18)
		{
			if (func_1188(iParam0, iParam2, iVar1))
			{
				func_1381(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1381(int iParam0, int iParam1, var uParam2)
{
	if (!func_370(iParam1, iParam0))
	{
		func_134(iParam1, iParam0);
	}
}

int func_1382(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 5;
		
		case 3:
			return 3;
		
		case 5:
			return 6;
		
		case 6:
			return 8;
		
		case 11:
			return 13;
		
		case 12:
			return 14;
		
		case 13:
			return 15;
		
		default:
	}
	return 18;
}

void func_1383(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		if (func_371(iParam1, iVar1))
		{
			iVar2 = func_1385(iVar1);
			if (iVar2 != 7)
			{
				func_1384(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_1384(int iParam0, var uParam1)
{
	if (!func_3(iParam0))
	{
		func_14(iParam0);
	}
}

int func_1385(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 7:
			return 5;
		
		default:
	}
	return 7;
}

void func_1386(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = func_1387(iVar1);
		if (iVar2 != 48)
		{
			if (!func_106(uParam0[iParam1], iVar0) && func_692(iParam1, iParam2, iVar2))
			{
				func_910(uParam0[iParam1], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		
		default:
	}
	return 48;
}

void func_1388(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = func_1390(iVar1);
		if (iVar2 != 51)
		{
			if (func_692(iParam0, iParam2, iVar1))
			{
				func_1389(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1389(int iParam0, int iParam1, var uParam2)
{
	if (!func_6(iParam1, iParam0))
	{
		func_44(iParam1, iParam0);
	}
}

int func_1390(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 10;
		
		case 16:
			return 18;
		
		case 29:
			return 37;
		
		case 31:
			return 40;
		
		case 11:
			return 14;
		
		case 18:
			return 1;
		
		case 22:
			return 31;
		
		case 7:
			return 30;
		
		case 23:
			return 28;
		
		case 24:
			return 32;
		
		case 17:
			return 25;
		
		case 25:
			return 33;
		
		case 5:
			return 13;
		
		case 13:
			return 15;
		
		case 15:
			return 17;
		
		case 42:
			return 46;
		
		case 19:
			return 26;
		
		case 20:
			return 27;
		
		case 26:
			return 34;
		
		case 30:
			return 38;
		
		case 34:
			return 42;
		
		case 37:
			return 43;
		
		case 40:
			return 45;
		
		case 43:
			return 47;
		
		case 44:
			return 48;
		
		case 4:
			return 12;
		
		case 10:
			return 11;
		
		case 36:
			return 39;
		
		case 45:
			return 49;
		
		case 6:
			return 4;
		
		case 9:
			return 3;
		
		default:
	}
	return 51;
}

void func_1391(int iParam0, int iParam1)
{
	if (iParam1 && func_1397(iParam0))
	{
		func_1392(iParam0, !func_69(iLocal_1110, iParam0));
	}
	else
	{
		func_917(iParam0, 0);
	}
}

void func_1392(int iParam0, bool bParam1)
{
	iVar0 = func_942(iParam0);
	if (!unk_0xEAE0D21A50E6C7F4(Local_1054.f_6, iParam0))
	{
		if (iParam0 != func_70())
		{
			if (func_28(iParam0, 1, 1))
			{
				func_1396(iParam0, 0, 1);
				func_938(iParam0, 1);
				if (!func_1395(iParam0))
				{
					func_936(iParam0, 1, 1, 1);
				}
				func_927(iParam0, func_929(iVar0), 1, 1);
				func_925(iParam0, func_1394(iVar0), 1, 1);
				func_940(iParam0, func_1285(iVar0, 0), 1, 0);
				if (func_935(iParam0))
				{
					if (!func_933(iParam0))
					{
						func_932(iParam0, 1, 1);
					}
				}
				func_918(iParam0, 0, 1);
				unk_0x5D96D8530B3D0904(&(Local_1054.f_6), iParam0);
			}
		}
	}
	else if (func_1393(iParam0) != func_929(iVar0))
	{
		func_927(iParam0, func_929(iVar0), 1, 1);
		func_925(iParam0, func_1394(iVar0), 1, 1);
		func_940(iParam0, func_1285(iVar0, 0), 1, 0);
	}
}

int func_1393(int iParam0)
{
	return Global_2416079.f_423[iParam0];
}

float func_1394(int iParam0)
{
	if (Local_407.f_54.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_54.f_4);
		return StackVal;
	}
	return 1,1f;
}

bool func_1395(int iParam0)
{
	return func_934(Global_2416079.f_819[iParam0], &(Global_2416079.f_367), iParam0);
}

void func_1396(int iParam0, bool bParam1, bool bParam2)
{
	if (func_920(iParam0))
	{
		return;
	}
	func_919(&(Global_2416079.f_786[iParam0]), &(Global_2416079.f_1149[iParam0]), &(Global_2416079.f_394), bParam1, iParam0, bParam2, &uVar0);
}

int func_1397(int iParam0)
{
	if (!func_1398())
	{
		return 0;
	}
	if (!func_437(7))
	{
		return 0;
	}
	if (func_1567() > 2)
	{
		return 0;
	}
	if (func_47() == 1)
	{
		return 0;
	}
	if (iParam0 == iLocal_1110)
	{
		return 0;
	}
	if (!func_28(iParam0, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1398()
{
	return Global_2416079.f_1607;
}

int func_1399()
{
	if (bLocal_1107)
	{
		if (unk_0x405E212DDE472467(iLocal_1111, 0))
		{
			iVar0 = unk_0x6937EA2286828455(iLocal_1111, 0);
		}
	}
	return iVar0;
}

void func_1400(int iParam0)
{
	Local_1311[iLocal_1112].f_20 = iParam0;
}

int func_1401()
{
	if (!func_423())
	{
		return 0;
	}
	func_1541();
	func_1515();
	func_1422();
	func_1421();
	func_1420();
	func_1419();
	func_1404(1);
	func_1403();
	if (!func_1402())
	{
		return 0;
	}
	Call_Loc(Local_407.f_2);
	return StackVal;
}

int func_1402()
{
	return 1;
}

void func_1403()
{
	func_425(7);
}

void func_1404(bool bParam0)
{
	func_1417(bParam0);
	if (func_48(1))
	{
		if (bParam0)
		{
			func_1416(8);
		}
		else
		{
			func_1415(8);
		}
	}
	if (func_48(2))
	{
		if (bParam0)
		{
			func_1414();
		}
		else
		{
			func_1413();
		}
	}
	if (func_48(3))
	{
		func_1412(bParam0);
	}
	if (func_48(4))
	{
		func_1410(bParam0);
		func_1409(bParam0);
	}
	if (func_48(5))
	{
		if (bParam0)
		{
			func_1408(2);
		}
		else
		{
			func_1407(2);
		}
	}
	if (func_48(6))
	{
		unk_0x4E885A246A9D983A(iLocal_1111, 432, bParam0);
	}
	func_1406(!bParam0);
	func_1405(bParam0);
	if (Local_407.f_9 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_407.f_9);
	}
}

void func_1405(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!unk_0x3F29E86D5527FF98(Local_1164.f_2[iVar0]))
				{
					unk_0x4A13379C8009DF6F(Local_1164.f_2[iVar0], 1);
				}
			}
			else if (unk_0x3F29E86D5527FF98(Local_1164.f_2[iVar0]))
			{
				unk_0x4A13379C8009DF6F(Local_1164.f_2[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_1406(bool bParam0)
{
	Global_2461974 = bParam0;
}

void func_1407(int iParam0)
{
	unk_0x0674E58A79778E99(&Global_1573979, iParam0);
}

void func_1408(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_1573979, iParam0);
}

void func_1409(bool bParam0)
{
	if (Global_2537071.f_6565 != bParam0)
	{
		Global_2537071.f_6565 = bParam0;
	}
}

void func_1410(bool bParam0)
{
	Global_30775 = bParam0;
	if (bParam0)
	{
		func_1411(7, iLocal_1111, 0);
		func_1411(8, iLocal_1111, 0);
		func_1411(20, iLocal_1111, 0);
		func_1411(21, iLocal_1111, 0);
	}
}

void func_1411(int iParam0, int iParam1, bool bParam2)
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

void func_1412(bool bParam0)
{
	if (!bParam0 == Global_2405072.f_45.f_314)
	{
		Global_2405072.f_45.f_314 = bParam0;
	}
}

void func_1413()
{
	if (Global_1671757)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 0))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 1))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 5))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 5);
		}
		if (unk_0x76395FF5E8D5E643(-355737150))
		{
			unk_0x1BA7FCEAFCE8D46E(-355737150, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-580979506))
		{
			unk_0x1BA7FCEAFCE8D46E(-580979506, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1426452475))
		{
			unk_0x1BA7FCEAFCE8D46E(-1426452475, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(745417724))
		{
			unk_0x1BA7FCEAFCE8D46E(745417724, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1305304906))
		{
			unk_0x1BA7FCEAFCE8D46E(-1305304906, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1543175077))
		{
			unk_0x1BA7FCEAFCE8D46E(-1543175077, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-811770997))
		{
			unk_0x1BA7FCEAFCE8D46E(-811770997, 1, 0, 0);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

void func_1414()
{
	Global_1671757 = 1;
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 0))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 0);
		unk_0x5D96D8530B3D0904(&Global_1671758, 0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 1))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 1);
		unk_0x5D96D8530B3D0904(&Global_1671758, 1);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 5))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 5);
		unk_0x5D96D8530B3D0904(&Global_1671758, 5);
	}
	if (unk_0x76395FF5E8D5E643(-355737150))
	{
		unk_0x1BA7FCEAFCE8D46E(-355737150, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-580979506))
	{
		unk_0x1BA7FCEAFCE8D46E(-580979506, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1426452475))
	{
		unk_0x1BA7FCEAFCE8D46E(-1426452475, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(745417724))
	{
		unk_0x1BA7FCEAFCE8D46E(745417724, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1305304906))
	{
		unk_0x1BA7FCEAFCE8D46E(-1305304906, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1543175077))
	{
		unk_0x1BA7FCEAFCE8D46E(-1543175077, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-811770997))
	{
		unk_0x1BA7FCEAFCE8D46E(-811770997, 0, 0, 0);
	}
}

void func_1415(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1416(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1417(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_220.f_129)
		{
			func_1418(bParam0, iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = (Local_220.f_129 - 1);
		while (iVar0 >= 0)
		{
			func_1418(bParam0, iVar0);
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_1418(bool bParam0, int iParam1)
{
	if (!func_31(Local_220.f_129[iParam1].f_1) && !func_31(Local_220.f_129[iParam1].f_4))
	{
		if (iParam1 >= 10)
		{
			return;
		}
		switch (Local_220.f_129[iParam1])
		{
			case 0:
				if (bParam0)
				{
					if (iLocal_1132 < 2)
					{
						iLocal_1129[iLocal_1132] = unk_0x7D6CA5F52B3748BF(Local_220.f_129[iParam1].f_1, Local_220.f_129[iParam1].f_4, 0, 1, 1, 1);
						iLocal_1132++;
					}
				}
				else if (iLocal_1132 < 2)
				{
					if (iLocal_1129[iLocal_1132] != -1)
					{
						unk_0x2952D66A502EA873(iLocal_1129[iLocal_1132], 0);
						iLocal_1129[iLocal_1132] = -1;
						iLocal_1132 = (iLocal_1132 - 1);
					}
				}
				break;
			
			case 1:
				unk_0xE342F209E49C5314(Local_220.f_129[iParam1].f_1, Local_220.f_129[iParam1].f_4, !bParam0, 0);
				break;
			
			case 2:
				if (bParam0)
				{
					if (iLocal_1132 < 2)
					{
						iLocal_1129[iLocal_1132] = unk_0xA35B38143859ECFA(Local_220.f_129[iParam1].f_1, Local_220.f_129[iParam1].f_4, 1f, 0,25f, 1, 1);
						iLocal_1132++;
					}
				}
				else if (iLocal_1129[iLocal_1132] != -1)
				{
					if (unk_0xE747DBC9E7A85AD6(iLocal_1129[iLocal_1132]))
					{
						unk_0xC192404B7F867164(iLocal_1129[iLocal_1132], 1);
						iLocal_1129[iLocal_1132] = -1;
						iLocal_1132 = (iLocal_1132 - 1);
					}
				}
				break;
			}
	}
}

void func_1419()
{
	unk_0x0BEC04ECA8485A3A(Local_220.f_28);
	unk_0x28E5F00F131890E3(Local_220.f_75);
	unk_0x3A4967AE7C71F999(Local_220.f_92);
}

void func_1420()
{
}

void func_1421()
{
	if (Local_407.f_269 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1086.f_1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_407.f_269);
		Local_1086.f_1[iVar0] = StackVal;
		iVar0++;
	}
	Local_1086 = iVar0;
}

void func_1422()
{
	if (Local_220.f_28 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		if (func_41(iVar0, 14))
		{
			func_1509(iVar0);
		}
		else
		{
			Stack.Push(iVar0);
			Call_Loc(Local_407.f_73);
		}
		func_1423(iVar0);
		Stack.Push(iVar0);
		Call_Loc(Local_407.f_73.f_76);
		iVar0++;
	}
}

void func_1423(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_896[iParam0])
	{
		iVar3 = Local_896[iParam0].f_1[iVar0];
		if (iVar3 != -1)
		{
			if (Local_896[iParam0].f_1[iVar0].f_8 == 0)
			{
				func_1425(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_896[iParam0].f_1[iVar0].f_10)
			{
				if (Local_896[iParam0].f_1[iVar0].f_1[iVar1].f_1 == 0)
				{
					iVar2 = Local_896[iParam0].f_1[iVar0].f_1[iVar1];
					func_1424(iParam0, iVar3, Local_896[iParam0].f_1[iVar2], &(Local_896[iParam0].f_1[iVar0].f_1[iVar1].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1424(int iParam0, int iParam1, var uParam2, var uParam3)
{
}

void func_1425(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 9:
			iVar0 = 259453;
			break;
		
		case 11:
			iVar0 = 259353;
			break;
		
		case 12:
			iVar0 = 259306;
			break;
		
		case 16:
			iVar0 = 259055;
			break;
		
		case 14:
			iVar0 = 258971;
			break;
		
		case 10:
			iVar0 = 258845;
			break;
		
		case 7:
			iVar0 = 258754;
			break;
		
		case 19:
			iVar0 = 258675;
			break;
		
		case 20:
			iVar0 = 258563;
			break;
		
		case 21:
			iVar0 = 258451;
			break;
		
		case 13:
			iVar0 = 256703;
			iVar1 = 256110;
			break;
		
		case 6:
			iVar0 = 255830;
			break;
		
		case 27:
			iVar0 = 255625;
			break;
		
		case 29:
			iVar0 = 255222;
			break;
		
		case 40:
			iVar0 = 255125;
			break;
		
		case 22:
			iVar0 = 255117;
			break;
		
		case 42:
			iVar0 = 254887;
			break;
		
		case 24:
			iVar0 = 254592;
			break;
		
		case 1:
			iVar0 = 254296;
			break;
		
		case 2:
			iVar0 = 253800;
			break;
		
		case 41:
			iVar0 = 253329;
			break;
		
		case 17:
			iVar0 = 252904;
			break;
	}
	if (iVar0 != 0)
	{
		func_1426(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_1426(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Local_896[iParam0].f_1[iParam1].f_8 = iParam2;
	Local_896[iParam0].f_1[iParam1].f_9 = iParam3;
}

void func_1427(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, 1306903184, 1) && func_120(Local_1164.f_24[iParam0]))
	{
		vVar0 = { func_1431(iParam0) };
		unk_0x67E0EAF9D59392C7(iParam1, vVar0, 2f, func_1430(iParam0), 1, func_1429(iParam0), 50f, 0, 10f, func_1428(iParam0), 100f, 10f);
	}
}

int func_1428(int iParam0)
{
	if (Local_407.f_73.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_72.f_3);
		return StackVal;
	}
	return 25;
}

int func_1429(int iParam0)
{
	if (Local_407.f_73.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_72.f_2);
		return StackVal;
	}
	return 1076642364;
}

int func_1430(int iParam0)
{
	if (Local_407.f_73.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_72.f_1);
		return StackVal;
	}
	if (Local_220.f_28.f_1[iParam0].f_8 != -1)
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]), 0))
		{
			return unk_0xB177666FAB6F4417(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]);
		}
	}
	return 0;
}

Vector3 func_1431(int iParam0)
{
	if (Local_407.f_73.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_72);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_1432(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_1433(int iParam0, int iParam1)
{
	if (!unk_0x16102BEDC7435774(iParam1))
	{
		if (func_1436(iParam0, iParam1))
		{
			if (!unk_0xAFE0D3608EDA7039(iParam1))
			{
				unk_0x0C8A454B494DAA0D(iParam1);
			}
			else
			{
				unk_0x2ECF845953E95D1B(iParam1);
				unk_0xA3BF0AA5A2608191(iParam1);
				unk_0x4E885A246A9D983A(iParam1, 268, true);
				unk_0xE25C96A9C36BE5D2(iParam1, iLocal_1078);
				unk_0x18E279963C2FCEF4(iLocal_1078, 2f, 0f, 0f);
				unk_0x7C27693C5112825F(iLocal_1078, 36f);
			}
		}
		else if (Local_407.f_73.f_70.f_1 != 0)
		{
			if (!unk_0x405E212DDE472467(iParam1, 0))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_70.f_1);
				switch (StackVal)
				{
					case 1:
						func_1507(iParam0, iParam1);
						break;
					
					case 2:
						func_1501(iParam0, iParam1);
						break;
					}
				}
		}
	}
	else if (unk_0xBFDE4EE64C4BF2D6(iParam1, iLocal_1078))
	{
		Stack.Push((func_1435(iLocal_1111, iParam1, 1) > func_1434(iParam0) || !bLocal_1107));
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_70);
		if (StackVal || !StackVal)
		{
			if (!unk_0xAFE0D3608EDA7039(iParam1))
			{
				unk_0x0C8A454B494DAA0D(iParam1);
			}
			else
			{
				unk_0x0A94A109271BE75A(iParam1);
			}
		}
	}
}

float func_1434(int iParam0)
{
	return 35f;
}

float func_1435(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 1) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

int func_1436(var uParam0, int iParam1)
{
	if (!bLocal_1107)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_70);
	if (!StackVal)
	{
		return 0;
	}
	unk_0xF5BDC0FED0F08D25(iLocal_1078, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return 0;
	}
	if (func_1435(iLocal_1111, iParam1, 1) > func_1437(uParam0))
	{
		return 0;
	}
	return 1;
}

float func_1437(var uParam0)
{
	return 7,5f;
}

void func_1438(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_24[iParam0]))
	{
		if (Local_407.f_73.f_65 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_65);
			iVar0 = StackVal;
			iVar1 = 1;
		}
		else if (unk_0x405E212DDE472467(iParam1, 0))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam1);
			iVar1 = 0;
		}
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xC42A92762C58E1B9(iParam1, iVar0, 0))
				{
					if (unk_0x8CB4A13C7BDA2B13(iVar0) != 8)
					{
						iVar2 = iLocal_1111;
						if (Local_407.f_73.f_65.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_407.f_73.f_65.f_1);
							iVar2 = StackVal;
						}
						if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0)))
						{
							unk_0x9AFA0796FDCABCD5(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_1441(iParam0, 0), 10f, -1f, round(func_1440(iParam0)), func_1439(iParam0), -1082130432, 0);
						}
						else if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar0)))
						{
							unk_0xB078AFA7242F1F7B(iVar0, 0);
							unk_0x5B54B463A4225B9F(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_1441(iParam0, 1), 786469, -1f, 7);
						}
						else
						{
							unk_0x89258193691A7600(iParam1, iVar0, iVar2, 8, func_1441(iParam0, 0), 786468, 1000f, 1000f, 1);
						}
					}
				}
				else if ((iVar1 && unk_0xD1960163A3042274(iParam1, -1794415470) != 1) && unk_0xD1960163A3042274(iParam1, -1794415470) != 0)
				{
					unk_0x5B1D360B9C6F0A09(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_1439(int iParam0)
{
	if (Local_407.f_73.f_65.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_65.f_4);
		return StackVal;
	}
	return 80;
}

float func_1440(int iParam0)
{
	if (Local_407.f_73.f_65.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_65.f_3);
		return StackVal;
	}
	return 80f;
}

float func_1441(int iParam0, bool bParam1)
{
	if (Local_407.f_73.f_65.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_65.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

void func_1442(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_24[iParam0]))
	{
		if (func_1445(iParam0, &iVar0))
		{
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xC42A92762C58E1B9(iParam1, iVar0, 0))
				{
					if (unk_0x8CB4A13C7BDA2B13(iVar0) != 1)
					{
						unk_0x60274E99F9B27DEA(iParam1, iVar0, 0, 1, func_1444(iParam0), func_1443(iParam0), -1f, -1f, 0);
					}
				}
				else if (unk_0xD1960163A3042274(iParam1, -1794415470) != 1 && unk_0xD1960163A3042274(iParam1, -1794415470) != 0)
				{
					unk_0x5B1D360B9C6F0A09(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_1443(int iParam0)
{
	if (Local_407.f_73.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_62.f_2);
		return StackVal;
	}
	return 22713;
}

float func_1444(int iParam0)
{
	if (Local_407.f_73.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_62.f_1);
		return StackVal;
	}
	return 10f;
}

int func_1445(int iParam0, var uParam1)
{
	if (Local_407.f_73.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_62);
		iVar0 = StackVal;
		if (unk_0xE5DBF9B6126856CA(iVar0) && unk_0xE2F1E99DD161A861(unk_0xA5FBBC2F619A4DE2(iVar0)))
		{
			*uParam1 = unk_0xB177666FAB6F4417(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_1446(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, -251125078, 1) && func_120(Local_1164.f_24[iParam0]))
	{
		func_1450(iParam0, iParam1);
		vVar0 = { func_1449(iParam0) };
		unk_0xEEB67C3D0A71A47B(iParam1, vVar0, func_1448(iParam0), func_1447(iParam0), 0, 0);
	}
}

int func_1447(int iParam0)
{
	if (Local_407.f_73.f_58.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_58.f_2);
		return StackVal;
	}
	return -1;
}

float func_1448(int iParam0)
{
	if (Local_407.f_73.f_58.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_58.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_1449(int iParam0)
{
	if (Local_407.f_73.f_58 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_58);
		return StackVal, StackVal, StackVal;
	}
	return unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_1164.f_24[iParam0]), 0);
}

void func_1450(int iParam0, int iParam1)
{
	if (Local_407.f_73.f_58.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_407.f_73.f_58.f_3);
		return;
	}
	unk_0x11AD11297DC58CC7(iParam1, 1);
	unk_0xAFF39FB306F8E232(iParam1, 5, 0);
	unk_0xAFF39FB306F8E232(iParam1, 17, 1);
	unk_0xBAFED2F6486F771A(iParam1, 1024, true);
	unk_0xBAFED2F6486F771A(iParam1, 32768, false);
}

void func_1451(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, -1519143300, 1) && func_120(Local_1164.f_24[iParam0]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_407.f_73.f_53.f_4);
		unk_0xF9B5DB58254657F1(iParam1, func_1455(iParam0), func_1454(iParam0), func_1453(iParam0), func_1452(iParam0));
	}
}

int func_1452(int iParam0)
{
	if (Local_407.f_73.f_53.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_53.f_3);
		return StackVal;
	}
	return 0;
}

int func_1453(int iParam0)
{
	if (Local_407.f_73.f_53.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_53.f_2);
		return StackVal;
	}
	return -1;
}

int func_1454(int iParam0)
{
	if (Local_407.f_73.f_53.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_53.f_1);
		return StackVal;
	}
	return 0;
}

int func_1455(int iParam0)
{
	if (Local_407.f_73.f_53 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_53);
		return StackVal;
	}
	return -1;
}

void func_1456(var uParam0, var uParam1)
{
}

void func_1457(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, 1920390111, 1) && func_120(Local_1164.f_24[iParam0]))
	{
		unk_0xE655C47E46F9A7E4(iParam1, func_1458(iParam0), 0);
	}
}

var func_1458(int iParam0)
{
	if (Local_407.f_73.f_49 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_49);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_105);
	return StackVal;
}

void func_1459(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_24[iParam0]))
	{
		if (Local_220.f_28.f_1[iParam0].f_8 != -1)
		{
			if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]))
			{
				iVar0 = unk_0xB177666FAB6F4417(Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8]);
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (!func_1432(iParam1, -1794415470, 1) || unk_0x8B157DA177FBCF50(iParam1) != iVar0)
					{
						unk_0xA3BF0AA5A2608191(iParam1);
						unk_0x5B1D360B9C6F0A09(iParam1, iVar0, -1, Local_220.f_28.f_1[iParam0].f_9, func_1463(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!func_1432(iParam1, 713668775, 1))
		{
			vVar1 = { func_1462(iParam0) };
			unk_0xAFF39FB306F8E232(iParam1, 1, 0);
			unk_0xAFF39FB306F8E232(iParam1, 3, 1);
			unk_0x96167B03C5A77156(iParam1, vVar1, func_1463(iParam0), func_1461(), 1048576000, 4096, func_1460(iParam0));
		}
	}
}

float func_1460(int iParam0)
{
	if (Local_407.f_73.f_44.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_44.f_4);
		return StackVal;
	}
	return 0f;
}

int func_1461()
{
	if (Local_407.f_73.f_44.f_3 != 0)
	{
		Call_Loc(Local_407.f_73.f_44.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_1462(int iParam0)
{
	if (Local_407.f_73.f_44.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_44.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

float func_1463(int iParam0)
{
	if (Local_407.f_73.f_44.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_44.f_2);
		return StackVal;
	}
	return 1f;
}

void func_1464(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_24[iParam0]))
	{
		iVar0 = -1824940423;
		if (func_1465(iParam0))
		{
			iVar0 = 713668775;
		}
		if (!func_1432(iParam1, iVar0, 1))
		{
			vVar1 = { func_1462(iParam0) };
			unk_0xAFF39FB306F8E232(iParam1, 1, 0);
			unk_0xAFF39FB306F8E232(iParam1, 3, 1);
			switch (iVar0)
			{
				case 713668775:
					unk_0x96167B03C5A77156(iParam1, vVar1, func_1463(iParam0), func_1461(), 1048576000, 4096, func_1460(iParam0));
					break;
				
				case -1824940423:
					unk_0xB87AD42E3FA06BDE(iParam1, vVar1, func_1463(iParam0), 0, 0, 786603, -1082130432);
					break;
				}
			}
	}
}

int func_1465(int iParam0)
{
	if (Local_407.f_73.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_44);
		return StackVal;
	}
	return 0;
}

void func_1466(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, 780511057, 1))
	{
		if (func_1469(iParam0, &iVar0))
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					func_1468(iParam0, iParam1);
					unk_0x6C3AE6E278DB3D0E(iParam1, iVar0, func_1467(iParam0), 16);
				}
			}
		}
	}
}

int func_1467(int iParam0)
{
	if (func_41(iParam0, 14))
	{
		return 67108864;
	}
	if (Local_407.f_73.f_42.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_42.f_1);
	}
	return 0;
}

void func_1468(int iParam0, int iParam1)
{
	if (func_41(iParam0, 23))
	{
		if (unk_0x40B4CC38578A6E32(iParam1, 1186503822))
		{
			unk_0xAFF39FB306F8E232(iParam1, 52, 1);
			unk_0xAFF39FB306F8E232(iParam1, 53, 1);
			unk_0xAA714ADDDC372E0F(iParam1, -1857128337);
			unk_0xAFF39FB306F8E232(iParam1, 89, 1);
		}
	}
}

int func_1469(var uParam0, var uParam1)
{
	if (Local_407.f_73.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_407.f_73.f_42);
		iVar0 = StackVal;
		if (unk_0xE5DBF9B6126856CA(iVar0) && unk_0xEC560E589DF8370E(unk_0xA5FBBC2F619A4DE2(iVar0)))
		{
			*uParam1 = unk_0x1B50683925F00106(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_1470(int iParam0, int iParam1)
{
	vVar0 = { func_1476(iParam0, -1) };
	fVar3 = func_1475(iParam1, vVar0, 0);
	if (Local_407.f_73.f_20.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar3);
		Call_Loc(Local_407.f_73.f_20.f_19);
	}
	if (func_41(iParam0, 16))
	{
		if (!func_13(&(Local_1164.f_24[iParam0].f_20)))
		{
			func_12(&(Local_1164.f_24[iParam0].f_20), 0, 0);
		}
		if (func_11(&(Local_1164.f_24[iParam0].f_20), 60000, 0))
		{
			if (Local_407.f_73.f_20.f_21 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_407.f_73.f_20.f_21);
			}
		}
	}
	if (fVar3 <= func_1474(iParam0) || func_1472(iParam0))
	{
		if (Local_407.f_73.f_20.f_20 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_407.f_73.f_20.f_20);
		}
		if (func_41(iParam0, 16))
		{
			func_22(&(Local_1164.f_24[iParam0].f_20));
		}
		Local_1164.f_24[iParam0].f_5++;
		if (Local_1164.f_24[iParam0].f_5 >= func_1471(iParam0))
		{
			Local_1164.f_24[iParam0].f_5 = 0;
			func_49(iParam0, 9);
			func_14(3);
		}
	}
}

int func_1471(int iParam0)
{
	if (Local_407.f_73.f_20.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_1);
		return StackVal;
	}
	return 0;
}

int func_1472(int iParam0)
{
	iVar0 = unk_0x1B50683925F00106(Local_1164.f_24[iParam0]);
	vVar1 = { func_1476(iParam0, -1) };
	if (func_1473(iVar0, vVar1, func_1474(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_1473(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, 1), vParam1) <= (fParam4 * fParam4);
}

float func_1474(int iParam0)
{
	if (Local_407.f_73.f_20.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_4);
		return StackVal;
	}
	return 10f;
}

float func_1475(int iParam0, vector3 vParam1, int iParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

Vector3 func_1476(int iParam0, int iParam1)
{
	iVar0 = Local_1164.f_24[iParam0].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_407.f_73.f_20.f_2 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_407.f_73.f_20.f_2);
		vVar1 = { StackVal, StackVal, StackVal };
	}
	return vVar1;
}

void func_1477(int iParam0, int iParam1)
{
	bVar0 = func_1496(iParam0);
	iVar1 = func_1495(iParam0);
	if (bVar0 || unk_0xE5DBF9B6126856CA(iVar1))
	{
		if (bVar0)
		{
			unk_0xAFF39FB306F8E232(iParam1, 1, 0);
			unk_0xAFF39FB306F8E232(iParam1, 3, 1);
		}
		else
		{
			iVar2 = unk_0xB177666FAB6F4417(iVar1);
		}
		if (bVar0 || !unk_0x437347B10A200C4B(iVar2, 0))
		{
			if ((func_1494() && !bVar0) && !unk_0xC42A92762C58E1B9(iParam1, iVar2, 0))
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					if (!func_1432(iParam1, -1794415470, 1) || unk_0x8B157DA177FBCF50(iParam1) != iVar2)
					{
						Stack.Push(iParam1);
						Call_Loc(Local_407.f_73.f_4.f_5);
						Stack.Push(iParam1);
						Stack.Push(iVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_407.f_73.f_4.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_407.f_73.f_4.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_407.f_73.f_4.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_407.f_73.f_4.f_4);
						unk_0x5B1D360B9C6F0A09(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(iParam1))
			{
				if (!func_1432(iParam1, -1273030092, 1))
				{
					if (func_120(Local_1164.f_24[iParam0]))
					{
						vVar3 = { func_1476(iParam0, -1) };
						unk_0x9AFA0796FDCABCD5(iParam1, iVar2, 0, 0, vVar3, 4, func_1493(iParam0), 10f, -1f, round(func_1492()), func_1491(), -1f, 128);
						if (Local_1164.f_24[iParam0].f_6 != Local_1164.f_24[iParam0].f_5)
						{
							func_1490(Local_1164.f_24[iParam0].f_5, iParam0);
						}
					}
				}
				else if (Local_1164.f_24[iParam0].f_6 != Local_1164.f_24[iParam0].f_5)
				{
					if (func_120(Local_1164.f_24[iParam0]))
					{
						unk_0xA3BF0AA5A2608191(iParam1);
					}
				}
			}
			else if (unk_0xC8676198F2355F9F(iParam1))
			{
				if (unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(iVar1)) != 4)
				{
					if (func_120(Local_1164.f_24[iParam0]))
					{
						fVar6 = 20f;
						vVar7 = { func_1476(iParam0, -1) };
						unk_0xB078AFA7242F1F7B(iVar2, 0);
						unk_0x5B54B463A4225B9F(iParam1, iVar2, 0, 0, vVar7, 4, fVar6, 786469, -1f, 7);
					}
				}
			}
			else if (!func_1432(iParam1, func_1489(iParam0), 1))
			{
				if (func_120(Local_1164.f_24[iParam0]) && (bVar0 || func_120(iVar1)))
				{
					vVar10 = { func_1476(iParam0, -1) };
					fVar13 = func_1488(iParam0);
					iVar14 = func_1487(iParam0);
					if (!bVar0)
					{
						func_1486(iVar2);
					}
					if (func_1485(iParam0))
					{
						unk_0x67E0EAF9D59392C7(iParam1, vVar10, func_1484(iParam0), iVar2, 1, func_1483(iParam0), -1082130432, 0, iVar14, func_1482(iParam0), fVar13, func_1481(iParam0));
					}
					else
					{
						unk_0xE9362E4D600DD12A(iParam1, iVar2, vVar10, fVar13, func_1480(iParam0), unk_0x134B62B726CEC8E6(iVar2), func_1483(iParam0), func_1481(iParam0), iVar14);
					}
					if (Local_1164.f_24[iParam0].f_6 != Local_1164.f_24[iParam0].f_5)
					{
						func_1490(Local_1164.f_24[iParam0].f_5, iParam0);
					}
					if (func_1479(iParam0) != -1f)
					{
						if (!func_75(iParam0, 14) && !func_1097(iParam0, iLocal_1113, 14))
						{
							unk_0x1AEF7184B203A58D(iVar2, func_1479(iParam0));
							func_1071(iParam0, 14);
						}
					}
				}
			}
			else if (Local_1164.f_24[iParam0].f_6 != Local_1164.f_24[iParam0].f_5)
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					unk_0xA3BF0AA5A2608191(iParam1);
				}
			}
			if ((!func_75(iParam0, 10) && !func_1097(iParam0, iLocal_1113, 12)) && func_1478(iParam0))
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					unk_0xA3BF0AA5A2608191(iParam1);
					func_1071(iParam0, 12);
				}
			}
		}
	}
}

int func_1478(int iParam0)
{
	if (Local_407.f_73.f_20.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_18);
		return StackVal;
	}
	return 0;
}

float func_1479(int iParam0)
{
	if (Local_407.f_73.f_20.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_14);
		return StackVal;
	}
	return -1f;
}

int func_1480(int iParam0)
{
	if (Local_407.f_73.f_20.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_7);
		return StackVal;
	}
	return 0;
}

float func_1481(int iParam0)
{
	if (Local_407.f_73.f_20.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_5);
		return StackVal;
	}
	return 5f;
}

int func_1482(int iParam0)
{
	if (Local_407.f_73.f_20.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_11);
		return StackVal;
	}
	return 24;
}

int func_1483(int iParam0)
{
	if (Local_407.f_73.f_20.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_1484(int iParam0)
{
	if (Local_407.f_73.f_20.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_10);
		return StackVal;
	}
	return 0f;
}

int func_1485(int iParam0)
{
	if (Local_407.f_73.f_20.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_6);
		return StackVal;
	}
	return 0;
}

void func_1486(int iParam0)
{
	if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iParam0)))
	{
		unk_0xB078AFA7242F1F7B(iParam0, 0);
	}
	if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (unk_0xE934758D273C899A(iParam0))
		{
			unk_0xB58CA658A628ED02(iParam0, 1);
		}
	}
	unk_0x56FDC9ADE35F7DB0(iParam0, true, 1, 0);
}

float func_1487(int iParam0)
{
	if (Local_407.f_73.f_20.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_9);
		return StackVal;
	}
	return 0f;
}

float func_1488(int iParam0)
{
	if (Local_407.f_73.f_20.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_3);
		return StackVal;
	}
	return 35f;
}

int func_1489(int iParam0)
{
	if (func_1485(iParam0))
	{
		return 1306903184;
	}
	return -1817882002;
}

void func_1490(var uParam0, int iParam1)
{
	Var0 = -251935260;
	Var0.f_1 = iLocal_1110;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = unk_0xF4CCC8CB6DE7F1AE();
	Var0.f_5 = iLocal_1119;
	Var0.f_6 = unk_0xF35A91B88CC1915F();
	iVar7 = func_1186(1);
	if (iVar7 != 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iVar7);
	}
}

int func_1491()
{
	if (Local_407.f_73.f_20.f_17 != 0)
	{
		Call_Loc(Local_407.f_73.f_20.f_17);
		return StackVal;
	}
	return 80;
}

float func_1492()
{
	if (Local_407.f_73.f_20.f_16 != 0)
	{
		Call_Loc(Local_407.f_73.f_20.f_16);
		return StackVal;
	}
	return 80f;
}

float func_1493(int iParam0)
{
	if (Local_407.f_73.f_20.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20.f_15);
		return StackVal;
	}
	return 30f;
}

int func_1494()
{
	if (Local_407.f_73.f_20.f_13 != 0)
	{
		Call_Loc(Local_407.f_73.f_20.f_13);
		return StackVal;
	}
	return 0;
}

int func_1495(int iParam0)
{
	if (Local_407.f_73.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_20);
		return StackVal;
	}
	if (Local_220.f_28.f_1[iParam0].f_8 != -1)
	{
		return Local_1164.f_69[Local_220.f_28.f_1[iParam0].f_8];
	}
	return 0;
}

int func_1496(var uParam0)
{
	if (Local_407.f_73.f_20.f_12 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_407.f_73.f_20.f_12);
		return StackVal;
	}
	return 0;
}

void func_1497(int iParam0, int iParam1)
{
	if (Local_407.f_73.f_18 != 0)
	{
		if (!func_1432(iParam1, 167901368, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_18);
			iVar0 = StackVal;
			if (unk_0xE5DBF9B6126856CA(iVar0) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(iVar0), 0))
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					Stack.Push(iParam1);
					Stack.Push(unk_0xA5FBBC2F619A4DE2(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_407.f_73.f_18.f_1);
					unk_0x2C4A1A0F54A166E8(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_1498(int iParam0, int iParam1)
{
	if (Local_407.f_73.f_17 != 0)
	{
		if (!func_1432(iParam1, 1630799643, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_17);
			iVar0 = StackVal;
			if (unk_0xE5DBF9B6126856CA(iVar0) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(iVar0), 0))
			{
				if (func_120(Local_1164.f_24[iParam0]))
				{
					unk_0xAFF39FB306F8E232(iParam1, 30, 1);
					unk_0x9BE7E7B6B488CC55(iParam1, unk_0xA5FBBC2F619A4DE2(iVar0), -1, 0);
				}
			}
		}
	}
}

void func_1499(int iParam0, int iParam1)
{
	if (Local_407.f_73.f_16 != 0)
	{
		if (!func_1432(iParam1, 1237250926, 1))
		{
			if (func_120(Local_1164.f_24[iParam0]))
			{
				unk_0xAFF39FB306F8E232(iParam1, 30, 1);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_16);
				unk_0x731C6942D48648D6(StackVal, StackVal, StackVal, StackVal, -1, 0, 0);
			}
		}
	}
}

void func_1500(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, 1120685857, 1))
	{
		if (func_120(Local_1164.f_24[iParam0]))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_407.f_73.f_13.f_2);
			func_1468(iParam0, iParam1);
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_13);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_13.f_1);
			unk_0xA6EE5A339B240656(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_1501(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, -2017877118, 1))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_10);
		unk_0x3F423BF5B8125A50(StackVal);
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_10);
		if (unk_0xB4AE0788C1587752(StackVal))
		{
			if (func_120(Local_1164.f_24[iParam0]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_10);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_10.f_1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_10.f_2);
				unk_0xC6EB89C59F2AF6B8(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 0);
			}
		}
	}
}

void func_1502(int iParam0, int iParam1)
{
	if (func_1503(iParam0, 0))
	{
		if (func_120(Local_1164.f_24[iParam0]))
		{
			if (!func_1432(iParam1, -828834893, 1))
			{
				unk_0x75CDA8644CD3B5F5(iParam1, 0, 0);
			}
		}
	}
}

bool func_1503(int iParam0, int iParam1)
{
	return func_4(&(Local_896[iParam0].f_57), iParam1);
}

void func_1504(int iParam0, int iParam1)
{
	if (!func_1503(iParam0, 0))
	{
		if (func_120(Local_1164.f_24[iParam0]))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_4);
			iVar0 = StackVal;
			if (func_41(iParam0, 14))
			{
				iVar0 = Local_220.f_28.f_1[iParam0].f_8;
			}
			if (iVar0 != -1)
			{
				if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[iVar0]))
				{
					iVar1 = unk_0xB177666FAB6F4417(Local_1164.f_69[iVar0]);
					if (unk_0xDF1306B443CD3D15(iVar1, 0))
					{
						if (!func_1432(iParam1, -1794415470, 1) || unk_0x8B157DA177FBCF50(iParam1) != iVar1)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_407.f_73.f_4.f_2);
							uVar2 = StackVal;
							if (func_41(iParam0, 14))
							{
								uVar2 = Local_220.f_28.f_1[iParam0].f_9;
							}
							else
							{
								Stack.Push(iParam1);
								Call_Loc(Local_407.f_73.f_4.f_5);
							}
							Stack.Push(iParam1);
							Stack.Push(iVar1);
							Stack.Push(iParam0);
							Call_Loc(Local_407.f_73.f_4.f_1);
							Stack.Push(uVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_407.f_73.f_4.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_407.f_73.f_4.f_4);
							unk_0x5B1D360B9C6F0A09(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
}

void func_1505(int iParam0, int iParam1)
{
	if (func_120(Local_1164.f_24[iParam0]))
	{
		if (!func_1432(iParam1, 474215631, 1))
		{
			unk_0x8BE3D040D15AEA1D(iParam1, -1);
		}
	}
}

void func_1506(int iParam0, int iParam1)
{
	if (!func_1432(iParam1, -251125078, 1))
	{
		if (func_120(Local_1164.f_24[iParam0]))
		{
			unk_0xCAC78D14D05349E7(iParam1, 0);
			unk_0xEEB67C3D0A71A47B(iParam1, unk_0x68F4C0EC296D3901(iParam1, 0), 10000f, 999999, 0, 0);
			unk_0xBAFED2F6486F771A(iParam1, 256, true);
			unk_0xBAFED2F6486F771A(iParam1, 2, false);
			unk_0xBAFED2F6486F771A(iParam1, 65536, true);
		}
	}
}

void func_1507(int iParam0, int iParam1)
{
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_1);
	if (!unk_0xEA6BC48857E0AC4C(StackVal))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_1);
		if (func_1508(StackVal))
		{
			if (!func_1432(iParam1, -1098463898, 1) && func_120(Local_1164.f_24[iParam0]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_1.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_407.f_73.f_1.f_2);
				unk_0x0B7C52F2BC1DC8EB(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 1);
			}
		}
		else if (!func_1432(iParam1, 993674639, 1) && func_120(Local_1164.f_24[iParam0]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_407.f_73.f_1);
			unk_0x509B8296EBA9B408(StackVal, StackVal, 0, 0);
		}
	}
}

bool func_1508(char* sParam0)
{
	return (((((unk_0x7F8A39872A07D2CE(sParam0, "PROP_HUMAN_SEAT_SUNLOUNGER") || unk_0x7F8A39872A07D2CE(sParam0, "WORLD_HUMAN_SEAT_LEDGE")) || unk_0x7F8A39872A07D2CE(sParam0, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || unk_0x7F8A39872A07D2CE(sParam0, "WORLD_HUMAN_SEAT_STEPS")) || unk_0x7F8A39872A07D2CE(sParam0, "WORLD_HUMAN_SEAT_WALL")) || unk_0x7F8A39872A07D2CE(sParam0, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_1509(int iParam0)
{
	bVar0 = (unk_0xAFB8495D36825275(Local_220.f_75.f_1[Local_220.f_28.f_1[iParam0].f_8].f_3) || unk_0xC41A9202669A24C4(Local_220.f_75.f_1[Local_220.f_28.f_1[iParam0].f_8].f_3));
	if (Local_220.f_28.f_1[iParam0].f_9 == -1)
	{
		if (bVar0)
		{
			func_1514(iParam0);
		}
		else
		{
			func_1513(iParam0);
		}
	}
	else if (bVar0)
	{
		func_1512(iParam0);
	}
	else
	{
		func_1510(iParam0);
	}
}

void func_1510(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1511(iParam0, 0, 1);
	func_1511(iParam0, 0, 2);
	func_1511(iParam0, 0, 3);
	func_485(iParam0, 1, 7);
	func_1511(iParam0, 1, 0);
	func_1511(iParam0, 1, 2);
	func_1511(iParam0, 1, 3);
	func_485(iParam0, 2, 14);
	func_1511(iParam0, 2, 0);
	func_1511(iParam0, 2, 1);
	func_1511(iParam0, 2, 3);
	func_485(iParam0, 3, 16);
	func_1511(iParam0, 3, 0);
	func_1511(iParam0, 3, 1);
	func_1511(iParam0, 3, 2);
}

void func_1511(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_896[iParam0].f_1[iParam1].f_10;
	uVar1 = iParam2;
	Local_896[iParam0].f_1[iParam1].f_1[iVar0] = uVar1;
	Local_896[iParam0].f_1[iParam1].f_10++;
}

void func_1512(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1511(iParam0, 0, 1);
	func_485(iParam0, 1, 7);
	func_1511(iParam0, 1, 0);
}

void func_1513(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1511(iParam0, 0, 2);
	func_1511(iParam0, 0, 1);
	func_1511(iParam0, 0, 3);
	func_1511(iParam0, 0, 4);
	func_485(iParam0, 2, 7);
	func_1511(iParam0, 2, 0);
	func_1511(iParam0, 2, 1);
	func_1511(iParam0, 2, 3);
	func_1511(iParam0, 2, 4);
	func_485(iParam0, 1, 17);
	func_1511(iParam0, 1, 0);
	func_1511(iParam0, 1, 2);
	func_1511(iParam0, 1, 3);
	func_1511(iParam0, 1, 4);
	func_485(iParam0, 3, 14);
	func_1511(iParam0, 3, 0);
	func_1511(iParam0, 3, 2);
	func_1511(iParam0, 3, 1);
	func_1511(iParam0, 3, 4);
	func_485(iParam0, 4, 16);
	func_1511(iParam0, 4, 0);
	func_1511(iParam0, 4, 2);
	func_1511(iParam0, 4, 1);
	func_1511(iParam0, 4, 3);
}

void func_1514(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1511(iParam0, 0, 2);
	func_1511(iParam0, 0, 1);
	func_485(iParam0, 2, 7);
	func_1511(iParam0, 2, 0);
	func_1511(iParam0, 2, 1);
	func_485(iParam0, 1, 17);
	func_1511(iParam0, 1, 0);
	func_1511(iParam0, 1, 2);
}

void func_1515()
{
	Call_Loc(Local_407.f_6.f_1);
	func_1516();
}

void func_1516()
{
	iVar0 = 0;
	while (iVar0 < iLocal_1122)
	{
		iVar1 = Local_783[iVar0];
		if (iVar1 != -1)
		{
			if (Local_783[iVar0].f_1[0].f_1 == 0)
			{
				iVar2 = 0;
				while (iVar2 < Local_783[iVar0].f_14)
				{
					iVar3 = Local_783[iVar0].f_1[iVar2];
					func_1525(iVar1, Local_783[iVar3], &(Local_783[iVar0].f_1[iVar2].f_1));
					iVar2++;
				}
			}
			if (Local_783[iVar0].f_13 == 0)
			{
				func_1521(iVar0, iVar1);
			}
			if (Local_783[iVar0].f_12 == 0)
			{
				func_1517(iVar0, iVar1);
			}
			if (Local_783[iVar0].f_15 == 0)
			{
				Local_783[iVar0].f_15 = 151308;
			}
		}
		iVar0++;
	}
}

void func_1517(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 260733;
			break;
		
		case 30:
			iVar0 = 260720;
			break;
	}
	if (iVar0 != 0)
	{
		func_1518(iParam0, iVar0);
	}
	else
	{
		Local_783[iParam0].f_12 = 151308;
	}
}

void func_1518(int iParam0, int iParam1)
{
	Local_783[iParam0].f_12 = iParam1;
}

void func_1519()
{
	func_746(4);
}

void func_1520()
{
	func_746(1);
}

void func_1521(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 260853;
			break;
		
		case 30:
			iVar0 = 260840;
			break;
	}
	if (iVar0 != 0)
	{
		func_1522(iParam0, iVar0);
	}
	else
	{
		Local_783[iParam0].f_13 = 151308;
	}
}

void func_1522(int iParam0, int iParam1)
{
	Local_783[iParam0].f_13 = iParam1;
}

void func_1523()
{
	func_746(4);
}

void func_1524()
{
	func_944();
}

void func_1525(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 25:
		case 27:
		case 28:
		case 26:
			switch (iParam1)
			{
				case 25:
					*uParam2 = 261660;
					break;
				
				case 27:
					*uParam2 = 261636;
					break;
				
				case 28:
					*uParam2 = 261616;
					break;
				
				case 26:
					*uParam2 = 261519;
					break;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
		case 36:
			switch (iParam1)
			{
				case 32:
					*uParam2 = 261397;
					break;
				
				case 33:
					*uParam2 = 261388;
					break;
				
				case 34:
					*uParam2 = 261379;
					break;
				
				case 35:
					*uParam2 = 261370;
					break;
				
				case 37:
					*uParam2 = 261361;
					break;
				
				case 36:
					*uParam2 = 261152;
					break;
			}
			break;
		
		case 42:
			*uParam2 = 261136;
			break;
	}
}

bool func_1526()
{
	return func_371(iLocal_1113, 7);
}

int func_1527()
{
	if ((!func_1003(iLocal_1110, 1) && !func_750(iLocal_1110, 0, 1, 0)) && func_1528(0))
	{
		return 1;
	}
	return 0;
}

int func_1528(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 6))
		{
			if (!func_6(iVar0, 3))
			{
				if (!func_6(iVar0, 4) || iParam0)
				{
					if (func_1529(iVar0))
					{
						iVar1++;
					}
				}
				else
				{
					iVar2++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	if (iVar1 > 0 && iVar1 == (func_7() - iVar2))
	{
		return 1;
	}
	return 0;
}

bool func_1529(int iParam0)
{
	return Local_1054[iParam0].f_4 != func_70();
}

int func_1530()
{
	return 0;
}

int func_1531()
{
	return 0;
}

int func_1532()
{
	return 0;
}

int func_1533()
{
	return 0;
}

int func_1534()
{
	if ((!func_1003(iLocal_1110, 1) && !func_750(iLocal_1110, 0, 1, 0)) || func_1222(func_1156(), 1))
	{
		if (!func_1528(0) && !func_1535(0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1535(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_1222(iVar0, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1536()
{
	if (func_1539())
	{
		return 0;
	}
	if (!func_1537())
	{
		return 0;
	}
	if (func_750(iLocal_1110, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1537()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_692(iVar0, iLocal_1113, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1538()
{
	if (func_1539())
	{
		return 0;
	}
	return 1;
}

int func_1539()
{
	if (func_1003(iLocal_1110, 1))
	{
		return 1;
	}
	return 0;
}

int func_1540()
{
	if (func_1539())
	{
		return 0;
	}
	if (func_1528(0))
	{
		return 0;
	}
	if (func_750(iLocal_1110, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1541()
{
	Call_Loc(Local_407.f_6);
	func_1542();
}

void func_1542()
{
	iVar0 = 0;
	while (iVar0 < iLocal_1121)
	{
		iVar1 = Local_692[iVar0];
		if (iVar1 != -1)
		{
			if (Local_692[iVar0].f_1[0].f_1 == 0)
			{
				func_1551(iVar1, &(Local_692[iVar0].f_1[0].f_1));
			}
			if (Local_692[iVar0].f_13 == 0)
			{
				func_1547(iVar0, iVar1);
			}
			if (Local_692[iVar0].f_12 == 0)
			{
				func_1543(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_1543(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			break;
		
		case 44:
			iVar0 = 261961;
			break;
		
		case 30:
			iVar0 = 261953;
			break;
	}
	if (iVar0 != 0)
	{
		func_1544(iParam0, iVar0);
	}
	else
	{
		Local_692[iParam0].f_12 = 151308;
	}
}

void func_1544(int iParam0, int iParam1)
{
	Local_692[iParam0].f_12 = iParam1;
}

void func_1545()
{
}

void func_1546()
{
	if (func_539())
	{
		func_425(11);
		func_10(3);
	}
	else
	{
		func_10(4);
	}
}

void func_1547(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 262102;
			break;
		
		case 30:
			iVar0 = 262089;
			break;
	}
	if (iVar0 != 0)
	{
		func_1548(iParam0, iVar0);
	}
	else
	{
		Local_692[iParam0].f_13 = 151308;
	}
}

void func_1548(int iParam0, int iParam1)
{
	Local_692[iParam0].f_13 = iParam1;
}

void func_1549()
{
	func_1370(4);
}

void func_1550()
{
	func_1370(1);
}

void func_1551(int iParam0, var uParam1)
{
	*uParam1 = 262569;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 262450;
			break;
		
		case 25:
			*uParam1 = 262386;
			break;
		
		case 27:
			*uParam1 = 262365;
			break;
		
		case 8:
			*uParam1 = 262340;
			break;
		
		case 32:
			*uParam1 = 262261;
			break;
		
		case 30:
			*uParam1 = 262248;
			break;
	}
}

bool func_1552()
{
	return func_3(4);
}

int func_1553()
{
	if (func_381())
	{
		return 1;
	}
	else if (func_1554())
	{
		return 1;
	}
	return 0;
}

int func_1554()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_10)
	{
		if (!func_6(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1555()
{
	return func_1556();
}

bool func_1556()
{
	return iLocal_1072 == 0;
}

int func_1557()
{
	if (func_1535(0))
	{
		return 1;
	}
	return 0;
}

int func_1558()
{
	if (func_1559())
	{
		return 1;
	}
	return 0;
}

int func_1559()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1560()
{
	if (func_1564())
	{
		return 1;
	}
	if (func_1562())
	{
		return 1;
	}
	if (func_1561())
	{
		return 1;
	}
	return 0;
}

int func_1561()
{
	return 0;
}

int func_1562()
{
	iVar0 = Local_220.f_116[func_1563()].f_6;
	if (iVar0 != -1)
	{
		if (func_57(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1563()
{
	return Local_1164.f_127;
}

bool func_1564()
{
	return func_3(1);
}

int func_1565()
{
	return 0;
}

int func_1566()
{
	return Local_1164.f_103;
}

int func_1567()
{
	return Local_1311[iLocal_1112].f_20;
}

int func_1568()
{
	return 0;
}

int func_1569()
{
	func_1574(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_1573())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_1572())
	{
		return 1;
	}
	if (func_1571(159))
	{
		if (!func_1570())
		{
			return 1;
		}
	}
	if (func_1571(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_921() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_921()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1570()
{
	return Global_2450632.f_598;
}

int func_1571(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1572()
{
	return Global_2460680;
}

bool func_1573()
{
	return Global_2450632.f_593;
}

void func_1574(var uParam0)
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
					func_1575(iVar0);
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

void func_1575(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_1576(iVar4, &bVar5))
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

int func_1576(int iParam0, var uParam1)
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

void func_1577()
{
	wait(0);
}

void func_1578()
{
	Local_407.f_6 = 265248;
	Local_407.f_6.f_1 = 265187;
	Local_407.f_2 = 265178;
	Local_407.f_1 = 265169;
	Local_407.f_17 = 262569;
	Local_407.f_26.f_2 = 265160;
	Local_407.f_26 = 265148;
	Local_407.f_18 = 265139;
	Local_407.f_18.f_1 = 265130;
	Local_407.f_18.f_2 = 265121;
	Local_407.f_18.f_3 = 265112;
	Local_407.f_18.f_4 = 265100;
	Local_407.f_18.f_5 = 265091;
	Local_407.f_38 = 265082;
	Local_407.f_37 = 265059;
	Local_407.f_54.f_11 = 265050;
	Local_407.f_54.f_12 = 265039;
	Local_407.f_54 = 264993;
	Local_407.f_73.f_103 = 264973;
	Local_407.f_73.f_104 = 264910;
	Local_407.f_73.f_105 = 264849;
	Local_407.f_73.f_106 = 264829;
	Local_407.f_73.f_99 = 264820;
	Local_407.f_73.f_99.f_1 = 264798;
	Local_407.f_73.f_99.f_2 = 264778;
	Local_407.f_73 = 264770;
	Local_407.f_73.f_76 = 264688;
	Local_407.f_73.f_1 = 264625;
	Local_407.f_73.f_1.f_1 = 264607;
	Local_407.f_73.f_1.f_2 = 264589;
	Local_407.f_73.f_4 = 264569;
	Local_407.f_73.f_4.f_1 = 264560;
	Local_407.f_73.f_4.f_2 = 264551;
	Local_407.f_73.f_4.f_3 = 264542;
	Local_407.f_73.f_4.f_4 = 264517;
	Local_407.f_73.f_4.f_5 = 264503;
	Local_407.f_73.f_10 = 264491;
	Local_407.f_73.f_10.f_1 = 264479;
	Local_407.f_73.f_10.f_2 = 264470;
	Local_407.f_73.f_13 = 264400;
	Local_407.f_73.f_13.f_1 = 264387;
	Local_407.f_73.f_13.f_2 = 264185;
	Local_407.f_73.f_18.f_1 = 264172;
	Local_407.f_73.f_53.f_4 = 264152;
	Local_407.f_73.f_70 = 264143;
	Local_407.f_188.f_12 = 264134;
	Local_407.f_188.f_20 = 264125;
	Local_407.f_188.f_21 = 263979;
	Local_407.f_188.f_16 = 263970;
	Local_407.f_235.f_11 = 263961;
	Local_407.f_235.f_12 = 263946;
	Local_407.f_235 = 263937;
	Local_407.f_249 = 212074;
	Local_407.f_250 = 263894;
	Local_407.f_250.f_1 = 263885;
	Local_407.f_252 = 263860;
	Local_407.f_257.f_2 = 263851;
	Local_407.f_257.f_5 = 263842;
	Local_407.f_271 = 263833;
}

int func_1579(var uParam0)
{
	return 1;
}

int func_1580(var uParam0)
{
	return 1;
}

int func_1581(var uParam0)
{
	return 0;
}

int func_1582(var uParam0)
{
	if (func_6(0, 1))
	{
		return 0;
	}
	return func_1324();
}

int func_1583(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

int func_1584(int iParam0)
{
	if (func_85(iParam0, 2))
	{
		return 3000;
	}
	if (func_85(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

int func_1585(var uParam0)
{
	return 1;
}

bool func_1586(var uParam0)
{
	return func_1058() == 42;
}

int func_1587()
{
	return 1;
}

int func_1588(var uParam0, var uParam1)
{
	return 0;
}

struct<30> func_1589(var uParam0)
{
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_1 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 1;
	Var0.f_10 = 0;
	Var0.f_12 = 1;
	Var0.f_4 = 150f;
	Var0 = 0f;
	Var0.f_27 = 0;
	return Var0;
}

int func_1590(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_1591(var uParam0)
{
	return 0;
}

int func_1592(var uParam0)
{
	return 1;
}

void func_1593(var uParam0, int iParam1)
{
	unk_0x5745EA6329A91E29(iParam1, -1569615261, true);
}

int func_1594()
{
	return -957453492;
}

void func_1595(var uParam0, int iParam1)
{
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push(unk_0xEA6BC48857E0AC4C(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	Stack.Push((StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_1);
	if (StackVal || unk_0x7F8A39872A07D2CE(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	unk_0x2ECF845953E95D1B(iParam1);
}

float func_1596(var uParam0)
{
	return 299,9f;
}

Vector3 func_1597(int iParam0)
{
	if (unk_0xE5DBF9B6126856CA(Local_1164.f_24[iParam0]))
	{
		if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_1164.f_24[iParam0]), 0))
		{
			return unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_1164.f_24[iParam0]), 1);
		}
	}
	return 0f, 0f, 0f;
}

int func_1598(var uParam0)
{
	return 1;
}

char* func_1599(var uParam0)
{
	return "";
}

char* func_1600(var uParam0)
{
	return "";
}

void func_1601(int iParam0)
{
	unk_0xA3BF0AA5A2608191(iParam0);
}

int func_1602(int iParam0)
{
	if (func_41(iParam0, 14))
	{
		return 9;
	}
	return 1;
}

float func_1603(var uParam0)
{
	return 3f;
}

int func_1604(var uParam0)
{
	return -1;
}

int func_1605(var uParam0)
{
	return -1;
}

var func_1606(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_8;
}

var func_1607(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_105);
	return StackVal;
}

Vector3 func_1608(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_407.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

char* func_1609(int iParam0)
{
	if (Local_220.f_28.f_1[iParam0].f_10 != -1)
	{
		return func_1610(&(Local_220.f_170[Local_220.f_28.f_1[iParam0].f_10]));
	}
	return "";
}

var func_1610(var uParam0)
{
	return uParam0;
}

void func_1611(int iParam0)
{
	func_479(iParam0, 147778);
	func_479(iParam0, 147631);
	func_479(iParam0, 147583);
	func_479(iParam0, 264746);
	func_479(iParam0, 147607);
}

int func_1612(int iParam0)
{
	if (func_75(iParam0, 24))
	{
		return 1;
	}
	return 0;
}

void func_1613(var uParam0)
{
}

var func_1614(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_6;
}

Vector3 func_1615(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_3;
}

int func_1616(var uParam0)
{
	return 1;
}

var func_1617(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_7;
}

var func_1618(int iParam0)
{
	Stack.Push(func_75(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_99.f_2);
		return StackVal;
	}
	return Local_220.f_28.f_1[iParam0].f_6;
}

Vector3 func_1619(int iParam0)
{
	Stack.Push(func_75(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_407.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_407.f_73.f_99.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_220.f_28.f_1[iParam0].f_3;
}

var func_1620(int iParam0)
{
	return Local_220.f_28.f_1[iParam0].f_2;
}

int func_1621(var uParam0)
{
	switch (func_1058())
	{
		case 25:
		case 27:
		case 28:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_1622(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_1623(var uParam0)
{
	return 1;
}

Vector3 func_1624()
{
	return Local_220.f_116[0];
	return 0f, 0f, 0f;
}

int func_1625()
{
	return 1;
}

float func_1626()
{
	return 1f;
}

int func_1627()
{
	return 600000;
}

int func_1628()
{
	return 0;
}

int func_1629()
{
	return 0;
}

int func_1630()
{
	return 0;
}

int func_1631()
{
	return 0;
}

var func_1632()
{
	return Local_220.f_105;
}

int func_1633()
{
	return 1;
}

int func_1634()
{
	return 1;
}

int func_1635()
{
	return 1;
}

void func_1636()
{
	func_525(0, 4, 151308);
	func_503(0, 1);
	func_502(1, 2, 4, 5, 3, 151308, 151308, 151308, 151308, 1);
	func_525(3, 44, 151308);
}

void func_1637()
{
	func_531(0, 4);
	func_528(0, 1, 262450);
	func_531(1, 25);
	func_528(1, 2, 262386);
	func_531(2, 27);
	func_528(2, 3, 262365);
	func_531(3, 44);
	func_1544(3, 261961);
}

void func_1638(var uParam0)
{
	Global_1681961.f_4713 = 0;
	Global_1681961.f_4714 = 0;
	if (unk_0xBFF81ED3B99522C7())
	{
		*uParam0 = { func_1639() };
	}
}

struct<2> func_1639()
{
	Var0 = -1;
	Var0.f_1 = -1000;
	Var0 = unk_0x7CF4675EC2B8ED0B();
	Var0.f_1 = unk_0xF35A91B88CC1915F();
	return Var0;
}

void func_1640()
{
	bVar0 = func_410() != false;
	bVar1 = unk_0x8CD06866876216F2();
	if (func_1670())
	{
		func_1660(0, 0, 0);
	}
	func_999(0);
	unk_0xD3DD9662CCFC031F(Local_220.f_10.f_5[0].f_2, -1);
	func_1269(0, func_1271(iLocal_1119));
	func_1658(bVar0);
	if (bVar1)
	{
		func_1654(Local_1164.f_145);
		func_1653();
		if (func_733(iLocal_1110))
		{
			func_754(0);
		}
	}
	func_916(1, 1, 1);
	func_521();
	func_1649();
	func_1648();
	func_1404(0);
	if (bVar0)
	{
		func_1647();
		func_1646();
		func_1644();
		func_1642();
		if (unk_0x8CD06866876216F2())
		{
			func_689();
		}
	}
	if (Local_407.f_5 != 0)
	{
		Call_Loc(Local_407.f_5);
	}
	func_1641();
	func_1264(0);
	unk_0x10FAF14A60A0DBE1();
}

void func_1641()
{
}

void func_1642()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_92)
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_76[iVar0]))
		{
			if (func_126(iVar0, 26))
			{
				unk_0x4AE2D6991D4E4082(unk_0xA5FBBC2F619A4DE2(Local_1164.f_76[iVar0]), 0, 1);
			}
			if (func_1643(iVar0))
			{
				if (func_120(Local_1164.f_76[iVar0]))
				{
					func_1066(&(Local_1164.f_76[iVar0]));
				}
			}
			else
			{
				func_110(&(Local_1164.f_76[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_1643(int iParam0)
{
	return 0;
}

void func_1644()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_75)
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_69[iVar0]))
		{
			if (func_137(iVar0, 32) && !func_1278(unk_0xB177666FAB6F4417(Local_1164.f_69[iVar0]), 0, 1))
			{
				unk_0x4AE2D6991D4E4082(unk_0xA5FBBC2F619A4DE2(Local_1164.f_69[iVar0]), 0, 1);
			}
			if (unk_0xB177666FAB6F4417(Local_1164.f_69[iVar0]) == unk_0x4EF27AB24893425F())
			{
				unk_0xA39FCF645CF99428();
			}
			if (func_1645(iVar0))
			{
				if (unk_0x526BC32A660C89E6(Local_1164.f_69[iVar0]))
				{
					func_1066(&(Local_1164.f_69[iVar0]));
				}
			}
			else
			{
				func_110(&(Local_1164.f_69[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_1645(int iParam0)
{
	bVar0 = !func_1278(unk_0xB177666FAB6F4417(Local_1164.f_69[iParam0]), 0, 1);
	if (func_370(iParam0, 2) && bVar0)
	{
		return 1;
	}
	return 0;
}

void func_1646()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_28)
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_24[iVar0]))
		{
			iVar1 = unk_0x1B50683925F00106(Local_1164.f_24[iVar0]);
			if (!unk_0x437347B10A200C4B(iVar1, 0))
			{
				if (unk_0x526BC32A660C89E6(Local_1164.f_24[iVar0]))
				{
					if (unk_0x0A5D59F37DC7E974(iVar1) == 6)
					{
						unk_0x11AD11297DC58CC7(iVar1, 0);
						if (unk_0xACCBB8E1BDF4D6BE(iVar1))
						{
							unk_0x2ECF845953E95D1B(iVar1);
						}
						unk_0xA3BF0AA5A2608191(iVar1);
						unk_0xFADC0A217229F6B5(iVar1, 0);
					}
				}
				unk_0x0A94A109271BE75A(iVar1);
			}
			if (Local_407.f_73.f_114 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_407.f_73.f_114);
			}
			func_110(&(Local_1164.f_24[iVar0]));
		}
		iVar0++;
	}
}

void func_1647()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_1164.f_2[iVar0]))
			{
				func_1066(&(Local_1164.f_2[iVar0]));
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_1164.f_2.f_18[iVar0]))
		{
			if (func_120(Local_1164.f_2.f_18[iVar0]))
			{
				func_1066(&(Local_1164.f_2.f_18[iVar0]));
			}
			func_110(&(Local_1164.f_2.f_18[iVar0]));
		}
		iVar0++;
	}
}

void func_1648()
{
	iVar0 = 0;
	while (iVar0 < Local_220.f_144)
	{
		func_906(&(Local_1101[iVar0]));
		iVar0++;
	}
}

void func_1649()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_978(iVar0))
		{
			StringCopy(&Var1, func_976(iVar0), 16);
			if (func_974(iVar0) == 2)
			{
				func_1652(&Var1, 0);
			}
			func_1650(&Var1);
		}
		iVar0++;
	}
}

void func_1650(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 2)
				{
				}
				else
				{
					func_967();
					Global_111638.f_14136[iVar0].f_99[Global_19486] = 0;
					if (func_1651(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0].f_24 = 0;
						Global_111638.f_14136[iVar0].f_28 = 0;
						Global_111638.f_14136[iVar0].f_29 = 0;
					}
					unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1651(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1652(char* sParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0].f_24 = 1;
				if (Global_111638.f_14136[iVar0].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0].f_99[0] == 1)
					{
						Global_111638.f_14046[0].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[1] == 1)
					{
						Global_111638.f_14046[1].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[2] == 1)
					{
						Global_111638.f_14046[2].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[3] == 1)
					{
						Global_111638.f_14046[3].f_17 = 0;
					}
					Global_111638.f_14136[iVar0].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1653()
{
	vVar0 = { func_1048() };
	unk_0x28F5E4DA506AC0CA(vVar0, 80f, 0, 0, 1, 1, true, 0);
}

void func_1654(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_695(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]))
		{
			if (func_395(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]))
			{
				Var1 = { func_1656(Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0]) };
				if (func_1655(Var1, Param0))
				{
					Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0].f_1 = -1;
				}
			}
			else
			{
				Global_1628237[unk_0xD803B885F5E47A62()].f_579.f_1[iVar0].f_1 = -1;
			}
		}
		iVar0++;
	}
	if (func_1315(unk_0xD803B885F5E47A62()) <= 0)
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_579), 0);
		func_1259();
	}
}

int func_1655(struct<2> Param0, struct<2> Param2)
{
	if (!func_393(Param0))
	{
		return 0;
	}
	if (Param0 == Param2 && Param0.f_1 == Param2.f_1)
	{
		return 1;
	}
	return 0;
}

struct<2> func_1656(struct<2> Param0)
{
	iVar0 = func_1657(Param0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		Var1 = -1;
		Var1.f_1 = -1000;
		return Var1;
	}
	return Global_2419327.f_199.f_1[iVar0].f_11;
}

int func_1657(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_396(Param0, Global_2419327.f_199.f_1[iVar0].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1658(bool bParam0)
{
	if (bParam0)
	{
	}
	else
	{
		func_1659();
	}
}

void func_1659()
{
}

void func_1660(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_1661(iLocal_1110, 0, iParam1, iParam2);
		func_425(26);
	}
	else
	{
		func_1661(iLocal_1110, 1, iParam1, iParam2);
		func_710(26);
	}
}

void func_1661(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_1669())
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
		iVar0 = uParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_671())
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
				else if (bVar14 || (!func_25(unk_0xD803B885F5E47A62(), 0) && !func_281()))
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
					func_1666(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_1665(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_1664();
					func_1663();
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
				if (!func_1665(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_1662(Global_4456448.f_232883))
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

bool func_1662(int iParam0)
{
	return iParam0 == 17;
}

void func_1663()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_1664()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_1665(int iParam0)
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

void func_1666(int iParam0, int iParam1, int iParam2)
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
				func_1668();
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
		if (func_25(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_1667(-2008016205, iParam0);
	}
}

void func_1667(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_1668()
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

int func_1669()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_1670()
{
	return func_437(26);
}

void func_1671(bool bParam0, bool bParam1)
{
	if (!func_437(31))
	{
		return;
	}
	if (!func_437(0))
	{
		func_1673(bParam0, bParam1);
		Local_1079.f_2 = (unk_0xDD0E7998AE8AD485() - Local_1079.f_1);
		func_1672();
		func_425(0);
	}
}

void func_1672()
{
}

void func_1673(bool bParam0, bool bParam1)
{
	Global_1674356.f_2 = Local_1164.f_118;
	Global_1674356.f_3 = Local_1164.f_119;
	uVar0 = func_1797(func_410(), bParam0, bParam1);
	Local_1079 = uVar0;
	func_1674(bParam0, uVar0, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_1674(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_676(unk_0xD803B885F5E47A62());
		Global_1674635.f_4 = func_1796();
		Global_1674635.f_5 = func_1795();
		if (func_883(unk_0xD803B885F5E47A62()) || func_683(unk_0xD803B885F5E47A62()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1789(bParam9);
		Global_1674635.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674635.f_9 = func_990(bParam0);
		Global_1674635.f_10 = uParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_1786();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_542(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_990(func_179(1));
		}
		Global_1674635.f_24 = func_1785(unk_0xD803B885F5E47A62());
		Global_1674635.f_28 = func_1124(unk_0xD803B885F5E47A62());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1783(iVar0);
	}
	else
	{
		iVar0 = func_178(unk_0xD803B885F5E47A62());
	}
	if (func_1782(iVar0))
	{
		Global_1674374.f_2 = func_1796();
		Global_1674374.f_3 = func_1795();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = unk_0xDD0E7998AE8AD485();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = uParam1;
		Global_1674374.f_19 = func_1776(iVar0, bParam0, func_1781(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_1775(func_991(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1774(func_991(), iParam2);
		}
		func_1772(iVar0);
	}
	else if (func_1771(iVar0))
	{
		Global_1674428.f_2 = func_1796();
		Global_1674428.f_3 = func_1795();
		Global_1674428.f_10 = unk_0xDD0E7998AE8AD485();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = uParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1769(iVar0);
	}
	else if (func_1768(iVar0))
	{
		Global_1674491.f_2 = func_1796();
		Global_1674491.f_3 = func_1795();
		Global_1674491.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = uParam1;
		Global_1674491.f_7 = func_1786();
		Global_1674491.f_42 = func_1766(func_27(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_1138(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_990((func_1765(iVar1) || func_1764(iVar1)));
		Global_1674491.f_30 = func_990(func_1763(iVar1));
		Global_1674491.f_32 = func_990(func_1762(iVar1));
		Global_1674491.f_33 = func_990(func_1761(iVar1));
		Global_1674491.f_34 = func_990(func_1760(iVar1));
		Global_1674491.f_35 = func_990(func_1759(0, iVar1) == 1);
		Global_1674491.f_36 = func_990(func_1758(iVar1));
		Global_1674491.f_37 = func_990(func_1239(iVar1));
		Global_1674491.f_38 = func_990(func_1757(iVar1));
		Global_1674491.f_39 = func_990(func_1753(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_990(func_1753(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_990(func_1753(iVar1, iVar2, 1));
		if (func_1752(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_1751(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_1749(iVar0);
	}
	else if (func_1748(iVar0))
	{
		Global_1674535.f_2 = func_1796();
		Global_1674535.f_3 = func_1795();
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674535.f_10 = func_990(bParam0);
		Global_1674535.f_11 = uParam1;
		Global_1674535.f_17 = func_1747(func_842());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_1746();
		Global_1674535.f_29 = func_156(6107, -1, 0);
		Global_1674535.f_30 = func_156(6103, -1, 0);
		Global_1674535.f_31 = func_156(6104, -1, 0);
		Global_1674535.f_32 = func_156(6106, -1, 0);
		Global_1674535.f_33 = func_156(6105, -1, 0);
		Global_1674535.f_34 = func_156(6108, -1, 0);
		Global_1674535.f_36 = func_990(func_179(1));
		Global_1674535.f_37 = func_1743();
		func_1733();
		func_1731(iVar0);
	}
	else if (func_594(iVar0))
	{
		Global_1674589.f_2 = func_1796();
		Global_1674589.f_3 = func_1795();
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674589.f_10 = func_990(bParam0);
		Global_1674589.f_11 = uParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_156(6157, -1, 0);
		Global_1674589.f_25 = func_156(6162, -1, 0);
		Global_1674589.f_26 = func_156(6163, -1, 0);
		Global_1674589.f_27 = func_990((((func_1730() || func_1729()) || func_1728()) || func_1131(unk_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_156(6164, -1, 0);
		Global_1674589.f_29 = func_990(func_1727());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_1796();
		Global_1674589.f_42 = func_990(func_179(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_1725(iVar0);
	}
	else if (func_1722(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_1796();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_1795();
		}
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1789(0);
		Global_1674725.f_7 = func_1786();
		Global_1674725.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674725.f_10 = func_990(bParam0);
		Global_1674725.f_11 = uParam1;
		if (func_991() != -1)
		{
			Global_1674725.f_17 = func_1721(func_991());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_1124(unk_0xD803B885F5E47A62());
		Global_1674725.f_29 = func_990(func_1720(unk_0xD803B885F5E47A62()));
		Global_1674725.f_30 = func_990(func_1719(unk_0xD803B885F5E47A62()));
		Global_1674725.f_31 = func_1718(unk_0xD803B885F5E47A62());
		if (func_542(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_990(func_179(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_1716(iVar0);
	}
	else if (func_1715(iVar0))
	{
		Global_1674671.f_2 = func_1796();
		Global_1674671.f_3 = func_1795();
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1789(0);
		Global_1674671.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674671.f_10 = func_990(bParam0);
		Global_1674671.f_11 = uParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_1124(unk_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_1714(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_1698(unk_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_1718(unk_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_990(func_1697(unk_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_990(func_1696(unk_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_990(func_1695(unk_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_990(func_1694(unk_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_1693(unk_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_1692(unk_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_1691(unk_0xD803B885F5E47A62());
		if (func_542(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_990(func_179(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_1689(iVar0);
	}
	else if (func_1688(iVar0))
	{
		Global_1674809.f_2 = func_1796();
		Global_1674809.f_3 = func_1795();
		Global_1674809.f_4 = func_1687(func_991());
		Global_1674809.f_5 = func_1686(func_991());
		if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_1786();
		Global_1674809.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674809.f_10 = func_990(bParam0);
		Global_1674809.f_11 = uParam1;
		if (func_842() != -1)
		{
			Global_1674809.f_17 = func_1721(func_842());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_1685(unk_0xD803B885F5E47A62());
		Global_1674809.f_27 = func_990(func_1684(unk_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_1681(21, -1);
		Global_1674809.f_29 = func_990(func_1680(unk_0xD803B885F5E47A62()));
		func_1678(iVar0);
	}
	else if (func_1677(iVar0))
	{
		Global_1674884.f_6 = func_1687(func_991());
		Global_1674884.f_7 = func_1686(func_991());
		if (func_542(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_990(func_179(1));
		}
		Global_1674884.f_10 = func_1786();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (unk_0xDD0E7998AE8AD485() - Global_1702973);
		Global_1674884.f_14 = uParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_1675(iVar0);
	}
	else
	{
		Global_1674356.f_6 = unk_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = uParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_882(unk_0xD803B885F5E47A62()) || func_881(unk_0xD803B885F5E47A62())) || func_681(unk_0xD803B885F5E47A62()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_1675(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_1674884);
	func_1676();
}

void func_1676()
{
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

int func_1677(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

void func_1678(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_1679();
}

void func_1679()
{
	Global_1674809 = { Var0 };
}

int func_1680(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_1681(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_1683(iParam0);
		if (iVar1 == 0 && func_156(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_1682(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1124(unk_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1)][iVar0];
	}
	return 0;
}

bool func_1682(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_156(7207, iParam0, 0) != 0;
}

int func_1683(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_1684(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_1685(int iParam0)
{
	if (func_178(iParam0) == 243)
	{
		return func_176(iParam0);
	}
	return -1;
}

int func_1686(int iParam0)
{
	if (iParam0 == func_70())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_1687(int iParam0)
{
	if (iParam0 == func_70())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

int func_1688(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

void func_1689(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_1674671);
	func_1690();
}

void func_1690()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

int func_1691(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 12);
	}
	return 0;
}

int func_1692(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_1693(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 11);
	}
	return 0;
}

bool func_1694(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 4);
}

bool func_1695(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 3);
}

bool func_1696(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 2);
}

bool func_1697(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 1);
}

int func_1698(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_70() || !func_1713(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_1708(iParam0, iParam2);
		
		case 1:
			return func_1706(iParam0, iParam2);
		
		case 3:
			return func_1705(iParam0);
		
		case 2:
			return func_1700(iParam0, iParam2);
		
		case 4:
			return func_1699(iParam0);
		
		default:
	}
	return 0;
}

bool func_1699(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 6);
}

int func_1700(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_1704(iParam0);
		
		case 11:
			return func_1703(iParam0);
		
		case 12:
			return func_1702(iParam0);
		
		case 13:
			return func_1701(iParam0);
		
		default:
	}
	return 0;
}

bool func_1701(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_1702(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_1703(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_1704(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

bool func_1705(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_1706(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_1707(iParam0);
		
		case 6:
			return func_1697(iParam0);
		
		case 7:
			return func_1696(iParam0);
		
		case 8:
			return func_1695(iParam0);
		
		case 9:
			return func_1694(iParam0);
		
		default:
	}
	return 0;
}

bool func_1707(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 0);
}

int func_1708(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1712(iParam0);
		
		case 1:
			return func_1711(iParam0);
		
		case 2:
			return func_1710(iParam0);
		
		case 3:
			return func_1709(iParam0);
		
		case 4:
			return func_1718(iParam0);
		
		default:
	}
	return 0;
}

bool func_1709(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 10);
}

bool func_1710(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 9);
}

bool func_1711(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 8);
}

bool func_1712(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 7);
}

bool func_1713(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_1714(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_1698(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_1698(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_1698(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_1698(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_1715(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_1716(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_1674725);
	func_1717();
}

void func_1717()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_1718(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 31);
}

bool func_1719(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 0);
}

bool func_1720(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

var func_1721(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_1722(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_1723(func_1724(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_1723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_1724(int iParam0)
{
	if (func_178(iParam0) == 237 || func_178(iParam0) == 250)
	{
		return func_176(iParam0);
	}
	return -1;
}

void func_1725(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_1674589);
	func_1726();
}

void func_1726()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_1727()
{
	return func_156(6156, -1, 0) != 0;
}

bool func_1728()
{
	return func_156(6164, -1, 0) == 3;
}

bool func_1729()
{
	return func_156(6164, -1, 0) == 2;
}

bool func_1730()
{
	return func_156(6164, -1, 0) == 1;
}

void func_1731(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_1674535);
	func_1732();
}

void func_1732()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_1733()
{
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_1736(12));
		func_1735(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1].f_66 != 0 && func_218(Global_1323615[iVar1].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_1734(Global_1323615[iVar1].f_66))
					{
						if (Global_1323615[iVar1].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_1734(int iParam0)
{
	switch (iParam0)
	{
		case 788747387:
		case -82626025:
		case -1600252419:
		case 970385471:
		case -50547061:
		case 1621617168:
		case -1984275979:
		case -42959138:
		case -1845487887:
		case 710198397:
		case -1671539132:
		case -339587598:
		case 1075432268:
		case 744705981:
		case -1660661558:
		case 837858166:
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case -1281684762:
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case -1295027632:
		case -1214293858:
		case 1077420264:
		case -901163259:
		case 165154707:
		case 1824333165:
		case 1341619767:
		case 970356638:
		case -1214505995:
		case -644710429:
		case 621481054:
		case -2122757008:
		case -1746576111:
		case 1981688531:
		case -1673356438:
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

void func_1735(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_1736(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_1683(iParam0);
		return func_1742(iVar0);
	}
	return (func_1737(iParam0, -1) * iParam0);
}

int func_1737(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_1738(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_665(iParam1))
			{
				return 0;
			}
			else if (func_342(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_1738(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1739(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_1739(unk_0xD803B885F5E47A62(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_1739(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_70())
	{
		if (!func_1741(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_1590373)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373].f_195, 24) || func_1740(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 24);
}

int func_1740(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_1741(int iParam0)
{
	if (iParam0 != func_70())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_1742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_1743()
{
	uVar0 = func_1745();
	if (!func_1744())
	{
		if (func_991() != func_70())
		{
			uVar0 = func_1785(func_991()) + 1;
		}
	}
	return uVar0;
}

bool func_1744()
{
	return func_543(unk_0xD803B885F5E47A62());
}

int func_1745()
{
	return func_1785(unk_0xD803B885F5E47A62()) + 1;
}

int func_1746()
{
	return func_156(6113, -1, 0);
}

int func_1747(int iParam0)
{
	if (func_542(iParam0, 1))
	{
		return Global_1628237[iParam0].f_11.f_451;
	}
	return -1;
}

int func_1748(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

void func_1749(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_1674491);
	func_1750();
}

void func_1750()
{
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_1751(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_1752(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 13);
}

int func_1753(int iParam0, int iParam1, int iParam2)
{
	if (func_1756(iParam0, iParam1))
	{
		iVar0 = func_1754(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_1754(int iParam0, int iParam1)
{
	if (func_1755(iParam1) && iParam0 != func_70())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1755(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1756(int iParam0, int iParam1)
{
	if (func_1755(iParam1) && iParam0 != func_70())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1757(int iParam0)
{
	if (iParam0 != func_70())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 12) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 13)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1758(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1759(int iParam0, int iParam1)
{
	if (iParam1 == func_70())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 0))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 3))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 6))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 9))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 12))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 15))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 18))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 21))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 1))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 4))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 7))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 10))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 13))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 16))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 19))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 22))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 2))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 5))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 8))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 11))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 14))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 17))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 20))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 23))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam1].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_1760(int iParam0)
{
	if (iParam0 != func_70())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 6) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1761(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 8);
}

bool func_1762(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 7);
}

bool func_1763(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 9);
}

bool func_1764(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_1765(int iParam0)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 10);
}

int func_1766(int iParam0, int iParam1)
{
	return func_156(func_1767(iParam1), iParam0, 0);
}

int func_1767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_1768(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_1769(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_1674428);
	func_1770();
}

void func_1770()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

int func_1771(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_1772(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_1674374);
	func_1773();
}

void func_1773()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_1774(int iParam0, int iParam1)
{
	bVar0 = func_1753(iParam0, iParam1, 2);
	bVar1 = func_1753(iParam0, iParam1, 1);
	bVar2 = func_1753(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1775(int iParam0, int iParam1)
{
	if (iParam0 == func_70())
	{
		return 0;
	}
	if (func_1755(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1776(int iParam0, bool bParam1, bool bParam2)
{
	if (func_1780(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_1779(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_816(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_1782(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF9647457141B11A7(func_1687(func_991()), func_1686(func_991()), func_1796(), func_1795(), iVar1, iVar0);
	}
	func_1778(iVar0);
	func_1777(iVar0);
	return iVar0;
}

void func_1777(int iParam0)
{
	iVar0 = func_156(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_490 = iVar0;
	func_577(3968, iVar0, -1, 1, 0);
}

void func_1778(int iParam0)
{
	iVar0 = unk_0xD803B885F5E47A62();
	Global_1628237[iVar0].f_11.f_489 = (Global_1628237[iVar0].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
}

int func_1779(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_1780(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_1781(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_882(unk_0xD803B885F5E47A62()) || func_681(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_1782(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[unk_0xD803B885F5E47A62()] == 148 && func_182(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_1783(int iParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_1674635);
	func_1784();
}

void func_1784()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_1785(int iParam0)
{
	if (func_71(iParam0) == func_70())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_1786()
{
	if (func_1788())
	{
		return 4;
	}
	else if (func_1744())
	{
		if (func_1787(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_179(1))
	{
		iVar0 = func_1747(unk_0xD803B885F5E47A62());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1343(1))
	{
		if (func_1787(func_991()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_1787(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

bool func_1788()
{
	return func_841(unk_0xD803B885F5E47A62());
}

int func_1789(bool bParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_676(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_178(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1794(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_1792(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1791(unk_0xD803B885F5E47A62());
			if (func_1723(func_1724(unk_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1791(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1790(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1790(unk_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1790(int iParam0)
{
	if (func_178(unk_0xD803B885F5E47A62()) == 238 || func_178(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_1628237[iParam0].f_11.f_499;
	}
	return -1;
}

int func_1791(int iParam0)
{
	if (func_178(unk_0xD803B885F5E47A62()) == 237 || func_178(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_1628237[iParam0].f_11.f_498;
	}
	return -1;
}

int func_1792(int iParam0)
{
	return func_1793(iParam0, 150);
}

int func_1793(int iParam0, int iParam1)
{
	if (func_676(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_1794(int iParam0)
{
	return func_1793(iParam0, 236);
}

int func_1795()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_1796()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_1797(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 14:
			return 0;
		
		case 2:
			return 8;
		
		case 1:
			return 7;
		
		case 12:
			return 6;
		
		case 0:
			return 4;
		
		default:
	}
	if (func_1801() && func_1800())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_1798())
		{
			return 11;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

bool func_1798()
{
	if (!func_383())
	{
		return 0;
	}
	if (func_1554() && func_1799(iLocal_1110) < func_7())
	{
		return 1;
	}
	return (func_544(iLocal_1110) && !func_1554());
}

int func_1799(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_541(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1800()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 33))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1801()
{
	return func_7() > 0;
}

int func_1802(struct<21> Param0)
{
	func_1808(func_1809(Param0), Param0);
	func_1806(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1164.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_1164.f_115[iVar0] = -1;
		Local_1164.f_105[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_1140[iVar0] = func_414();
		uLocal_1142[iVar0] = func_414();
		Local_1054[iVar0].f_4 = func_70();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_164[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_88[iVar0] = -1;
		iVar0++;
	}
	Global_2535833.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_1129)
	{
		iLocal_1129[iVar0] = -1;
		iVar0++;
	}
	unk_0x9752E7BAEABA939E(&Local_1164, 147);
	unk_0x35B62793EAE9ADDF(&Local_1311, 1153);
	unk_0x256D93AFAE851A7A(0);
	iLocal_1119 = func_1805(Param0);
	iLocal_1120 = unk_0xF35A91B88CC1915F();
	iLocal_1120 = iLocal_1120;
	func_1804();
	func_1803();
	iLocal_1078 = unk_0x5D08BBCCCC2F43A4(iLocal_1110);
	return 1;
}

void func_1803()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x0E2400AB9174FA81(5, Global_1574967[iVar0], -347613984);
		unk_0x0E2400AB9174FA81(5, -347613984, Global_1574967[iVar0]);
		iVar0++;
	}
}

void func_1804()
{
}

int func_1805(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 15;
		
		case 155:
			return 8;
		
		case 149:
			return 14;
		
		case 153:
			return 122;
		
		case 156:
			return 1;
		
		case 154:
			return 5;
		
		case 157:
			return 6;
		
		case 150:
			return 11;
		
		case 158:
			return 0;
		
		case 159:
			return 2;
		
		case 151:
			return 13;
		
		case 160:
			return 3;
		
		case 152:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		default:
	}
	return 256;
}

int func_1806(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1807();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1159())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_1807();
					}
					else
					{
						return 0;
					}
				}
				if (func_1573())
				{
					if (!bParam2)
					{
						func_1807();
					}
					else
					{
						return 0;
					}
				}
				if (func_1571(157))
				{
					if (!bParam2)
					{
						func_1807();
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
					func_1807();
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
				func_1807();
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
			func_1807();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1807()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_1808(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_1807();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_1809(int iParam0)
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

void func_1810(bool bParam0)
{
	iLocal_1110 = unk_0xD803B885F5E47A62();
	iLocal_1111 = unk_0x16F2683693E537C9();
	vLocal_1114 = { unk_0x68F4C0EC296D3901(iLocal_1111, 0) };
	bLocal_1106 = func_28(iLocal_1110, 0, 1);
	if (bParam0)
	{
		bLocal_1108 = unk_0xBFF81ED3B99522C7();
		iLocal_1112 = unk_0x57270EE11514DC67();
		iLocal_1113 = unk_0xFB04705FDFDCE640();
		bLocal_1109 = unk_0x81A93C8315C28F58(iLocal_1113);
	}
	if (bLocal_1106)
	{
		bLocal_1107 = unk_0xE1DBBD6CE209517C(iLocal_1110);
	}
	else
	{
		bLocal_1107 = false;
	}
	bLocal_1108 = bLocal_1108;
	iLocal_1112 = iLocal_1112;
	iLocal_1113 = iLocal_1113;
	vLocal_1114 = { vLocal_1114 };
	bLocal_1109 = bLocal_1109;
	bLocal_1117 = func_661(1, 0, 1);
	bLocal_1118 = func_947();
}

