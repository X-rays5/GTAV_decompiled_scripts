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
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_31();
	}
	if (unk_0x8A22C4C08282BF26(-39841511) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (unk_0x8A22C4C08282BF26(-1940466179) > 0)
	{
		wait(0);
	}
	func_30();
	while (true)
	{
		if (func_27(9) || Global_95664)
		{
			func_31();
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (func_25())
			{
				func_23();
				func_19();
				if (func_12() == 1)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		wait(1000);
	}
}

void func_1()
{
	if (func_11(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_3, iVar0))
				{
					fVar2 = vdist2(func_9(unk_0xD803B885F5E47A62()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_111612[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0x0674E58A79778E99(&(Global_111638.f_24974.f_3), iVar0);
							}
							else if ((unk_0x1C0640BA9A7327B3() - Global_111618[iVar0]) > 60000)
							{
								Global_111612[iVar0] = 0;
								Global_111618[iVar0] = unk_0x1C0640BA9A7327B3();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0x0674E58A79778E99(&(Global_111638.f_24974.f_3), iVar0);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_111638.f_24974.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_111612[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((unk_0x1C0640BA9A7327B3() - Global_111618[iVar0]) > 60000)
					{
						Global_111612[iVar0] = 0;
						Global_111618[iVar0] = unk_0x1C0640BA9A7327B3();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
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

void func_3(int iParam0)
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_5(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

bool func_7(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19);
}

Vector3 func_8(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31146[iVar0][iParam1];
}

Vector3 func_9(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
			break;
		
		case 1:
			return 87;
			break;
		
		case 2:
			return 88;
			break;
		
		case 3:
			return 89;
			break;
		
		case 4:
			return 90;
			break;
	}
	return 86;
}

bool func_11(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], iParam0);
}

int func_12()
{
	func_13();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_13()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_17(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_16(unk_0x16F2683693E537C9());
			if (func_15(iVar0) && (!func_14(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_15(Global_111638.f_2358.f_539.f_4321))
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

bool func_14(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1798[iParam0];
}

void func_19()
{
	if (func_11(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_22(iVar0);
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_2, iVar0))
			{
				fVar2 = vdist2(func_9(unk_0xD803B885F5E47A62()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_111602[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_24971.f_2), iVar0);
						}
						else if ((unk_0x1C0640BA9A7327B3() - Global_111607[iVar0]) > 60000)
						{
							Global_111602[iVar0] = 0;
							Global_111607[iVar0] = unk_0x1C0640BA9A7327B3();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_24971.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_111602[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((unk_0x1C0640BA9A7327B3() - Global_111607[iVar0]) > 60000)
				{
					Global_111602[iVar0] = 0;
					Global_111607[iVar0] = unk_0x1C0640BA9A7327B3();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_111638.f_24971)
			{
				if (iVar1 == 82)
				{
					func_21(82);
					func_20(65, 1000);
					Global_111638.f_24971 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_21(int iParam0)
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 82;
			break;
		
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
	}
	return 82;
}

void func_23()
{
	switch (iLocal_28)
	{
		case 0:
			if (unk_0xD8A54335F18763BA() < 20 && unk_0xD8A54335F18763BA() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
		
		case 1:
			if (unk_0xD8A54335F18763BA() >= 20 || unk_0xD8A54335F18763BA() < 5)
			{
				iLocal_28 = 2;
			}
			break;
		
		case 2:
			if (unk_0xD8A54335F18763BA() < 20 && unk_0xD8A54335F18763BA() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			break;
	}
}

void func_24()
{
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_25()
{
	if (func_27(9))
	{
		return 0;
	}
	if (func_26())
	{
		return 0;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		return 0;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, Global_41431);
}

int func_29(int iParam0, int iParam1)
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

void func_30()
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_111602[iVar0] = 0;
		Global_111607[iVar0] = unk_0x1C0640BA9A7327B3();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_111612[iVar0] = 0;
		iVar0++;
	}
}

void func_31()
{
	unk_0x10FAF14A60A0DBE1();
}

