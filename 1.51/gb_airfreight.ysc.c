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
	fLocal_90 = 3f;
	fLocal_91 = 0f;
	fLocal_92 = 2f;
	fLocal_93 = 100f;
	iLocal_101 = -1;
	fLocal_103 = 0,5f;
	iLocal_190 = 3600000;
	iLocal_192 = -1;
	if (unk_0x8CD06866876216F2())
	{
		if (func_1203(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (!func_1033(ScriptParam_0))
			{
				func_974(0, 1);
				func_926();
			}
		}
		else
		{
			func_926();
		}
	}
	else
	{
		func_974(0, 1);
		func_926();
	}
	while (true)
	{
		func_925();
		if (func_922(1))
		{
			func_974(0, 1);
			func_926();
		}
		if (func_914())
		{
			func_974(0, 1);
			func_926();
		}
		if (func_913() && func_912())
		{
			if (!func_911())
			{
				if (func_908())
				{
					func_882(170, unk_0x68F4C0EC296D3901(func_907(), true), &uLocal_197, 1140457472, 700f, iLocal_198);
				}
				else
				{
					func_882(170, unk_0x68F4C0EC296D3901(func_881(), true), &uLocal_197, 1140457472, 700f, iLocal_198);
				}
			}
		}
		func_860();
		switch (func_859(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_858() == 1)
				{
					if (func_856())
					{
						func_855(unk_0x57270EE11514DC67(), 1);
					}
				}
				break;
			
			case 1:
				if (func_858() == 1)
				{
					func_93();
				}
				else if (func_858() == 3)
				{
					func_855(unk_0x57270EE11514DC67(), 3);
				}
				break;
			
			case 3:
				func_926();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_92())
			{
				func_91(3);
			}
			switch (func_858())
			{
				case 0:
					if (func_64())
					{
						func_91(1);
					}
					break;
				
				case 1:
					func_10();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar2 = iVar0;
			iVar1 = unk_0x4B2BFE4A3BC248ED(iVar2);
			if (func_1203(iVar1, 0, 1))
			{
				if (func_9(iVar2, 1))
				{
					bVar3 = true;
					iVar4 = iVar1;
				}
				if (!func_8(18))
				{
					if (func_5(iVar1, func_7(), 1))
					{
						if (func_9(iVar2, 6))
						{
							func_4(18);
						}
					}
				}
				if (!func_8(17))
				{
					if (func_9(iVar2, 5))
					{
						func_4(17);
					}
				}
				if (!func_8(9))
				{
					if (func_9(iVar2, 2))
					{
						func_4(9);
					}
				}
				if (!func_8(21))
				{
					if (func_9(iVar2, 7))
					{
						func_4(21);
					}
				}
				if (func_913())
				{
					if (!func_8(6))
					{
						if (func_9(iVar2, 4))
						{
							func_4(6);
							func_4(17);
						}
					}
				}
				if (func_912())
				{
					if (!func_8(7))
					{
						if (func_9(iVar2, 3))
						{
							func_4(7);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		if (!func_8(2))
		{
			Local_234.f_8 = iVar4;
			func_4(2);
		}
		if (!func_8(12))
		{
			func_4(12);
		}
	}
	else if (func_8(2))
	{
		Local_234.f_9 = Local_234.f_8;
		Local_234.f_8 = func_3();
		func_2(2);
	}
}

void func_2(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Local_234.f_1), iParam0);
}

int func_3()
{
	return -1;
}

void func_4(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_234.f_1), iParam0);
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_3())
	{
		if (!bParam2)
		{
			if (func_6(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (iParam0 != func_3())
		{
			if (Global_1628237[iParam0].f_11 != func_3())
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

int func_7()
{
	return Local_234.f_7;
}

bool func_8(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_234.f_1, iParam0);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(vLocal_348[iParam0].f_1, iParam1);
}

void func_10()
{
	switch (func_63())
	{
		case 0:
			func_62(1);
			unk_0xCB466C2A425A9168(&(Local_234.f_112), &(Local_234.f_113));
			break;
		
		case 1:
			if (func_61() == 0)
			{
				if (!func_60(&(Local_234.f_2)))
				{
					func_59(&(Local_234.f_2), 0, 0);
				}
				else
				{
					if (func_57())
					{
						if (func_51())
						{
							func_50(4);
						}
					}
					if (func_8(10))
					{
						func_50(2);
					}
					if (func_48(&(Local_234.f_2), func_49(), 0))
					{
						func_50(1);
					}
				}
				func_46();
				func_42();
				func_40();
				func_35();
				func_28();
				func_24();
				func_23();
				func_17();
				func_16();
			}
			else
			{
				func_62(2);
			}
			break;
		
		case 2:
			func_15();
			if (!func_60(&(Local_234.f_20)) && !unk_0x437347B10A200C4B(func_881(), 0))
			{
				func_59(&(Local_234.f_20), 0, 0);
			}
			else if (func_13())
			{
				if (func_12())
				{
					func_62(3);
				}
				else
				{
					if (!func_12())
					{
					}
					if (!func_11())
					{
					}
				}
			}
			break;
		
		case 3:
			func_91(3);
			break;
	}
}

int func_11()
{
	if (func_8(6) || func_8(17))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar2 = iVar0;
			if (!func_9(iVar2, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (func_11())
	{
		return 1;
	}
	if (func_60(&(Local_234.f_20)))
	{
		if (func_48(&(Local_234.f_20), func_14() + 5000, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return Global_262145.f_14977;
}

void func_15()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_234.f_31[iVar0].f_9)
		{
			Local_234.f_31[iVar0].f_9 = 0;
		}
		iVar0++;
	}
}

void func_16()
{
	if (!func_8(10))
	{
		if (!unk_0x40B8C182D63932FC(func_7()))
		{
			func_4(10);
		}
	}
}

void func_17()
{
	if (func_22())
	{
		if (func_21(2))
		{
			if (func_18(func_20(2), func_19(), 1))
			{
				if (Local_234.f_31[2].f_9 == 1)
				{
					Local_234.f_31[2].f_9 = 0;
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()
{
	if (func_22())
	{
		return unk_0xB177666FAB6F4417(Local_234.f_100);
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0))
	{
		return unk_0x1B50683925F00106(Local_234.f_31[iParam0]);
	}
	return 0;
}

bool func_21(int iParam0)
{
	return unk_0xE5DBF9B6126856CA(Local_234.f_31[iParam0]);
}

bool func_22()
{
	return unk_0xE5DBF9B6126856CA(Local_234.f_100);
}

void func_23()
{
	if (func_913() && func_912())
	{
		if (!func_8(14))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_21(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)) && !unk_0x437347B10A200C4B(func_20(iVar0), 0))
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_4(14);
			}
		}
	}
}

void func_24()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_234.f_31[iVar0].f_10)
			{
				case 0:
					if (func_21(iVar0))
					{
						Local_234.f_31[iVar0].f_10 = 1;
					}
					break;
				
				case 1:
					if (func_21(iVar0))
					{
						if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
						{
							if (func_27())
							{
								Local_234.f_31[iVar0].f_9 = 1;
								if (iVar0 == 2)
								{
									if ((func_22() && unk_0xDF1306B443CD3D15(func_19(), 0)) && func_8(19))
									{
										Local_234.f_31[iVar0].f_10 = 3;
									}
									else
									{
										Local_234.f_31[iVar0].f_10 = 2;
									}
								}
								else
								{
									Local_234.f_31[iVar0].f_10 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (iVar0 == 2)
					{
						if (func_21(iVar0))
						{
							if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
							{
								if ((func_22() && unk_0xDF1306B443CD3D15(func_19(), 0)) && func_8(19))
								{
									Local_234.f_31[iVar0].f_10 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (func_21(iVar0))
					{
						if (func_22())
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!func_25())
								{
									if (!unk_0xDF1306B443CD3D15(func_19(), 0) || unk_0x437347B10A200C4B(func_19(), 0))
									{
										if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
										{
											Local_234.f_31[iVar0].f_10 = 2;
										}
									}
								}
								else if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
								{
									Local_234.f_31[iVar0].f_10 = 2;
								}
							}
						}
						else if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
						{
							Local_234.f_31[iVar0].f_10 = 2;
						}
					}
					break;
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (unk_0xE5DBF9B6126856CA(Local_234.f_100))
	{
		if (unk_0xA30B8362589C124A(func_19(), -1, 0) != 0)
		{
			if (func_26(unk_0xA30B8362589C124A(func_19(), -1, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
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

bool func_27()
{
	return func_8(9);
}

void func_28()
{
	if (func_913() && func_912())
	{
		if (func_34() > func_33())
		{
			if (unk_0x50B5F6F3C29E9380(func_31(), func_907()))
			{
				if (iLocal_212 == 0)
				{
					iLocal_212 = 1;
				}
			}
			else if (iLocal_212)
			{
				if (unk_0xE934758D273C899A(func_907()))
				{
					if (func_30(vLocal_213))
					{
						vLocal_213 = { unk_0x68F4C0EC296D3901(func_907(), false) };
					}
				}
				else if (!func_30(vLocal_213))
				{
					iVar1 = (Local_234.f_13 / 5);
					vLocal_216 = { unk_0x68F4C0EC296D3901(func_907(), false) };
					fVar0 = unk_0x0EB28750412C3A5A(vLocal_213, vLocal_216, true);
					if (fVar0 > 0f && fVar0 < (IntToFloat(func_29()) * 0,1f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 5);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,1f) && fVar0 < (IntToFloat(func_29()) * 0,2f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 10);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,2f) && fVar0 < (IntToFloat(func_29()) * 0,3f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 20);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,3f) && fVar0 < (IntToFloat(func_29()) * 0,4f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 30);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,4f) && fVar0 < (IntToFloat(func_29()) * 0,5f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 40);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,5f) && fVar0 < (IntToFloat(func_29()) * 0,6f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 50);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,6f) && fVar0 < (IntToFloat(func_29()) * 0,7f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 60);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,7f) && fVar0 < (IntToFloat(func_29()) * 0,8f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 70);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,8f) && fVar0 < (IntToFloat(func_29()) * 0,9f))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 80);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0,9f) && fVar0 < IntToFloat(func_29()))
					{
						Local_234.f_13 = (Local_234.f_13 - (iVar1 / 100) * 90);
					}
					else if (fVar0 >= IntToFloat(func_29()))
					{
						Local_234.f_13 = (Local_234.f_13 - iVar1);
					}
					if (Local_234.f_13 < func_33())
					{
						Local_234.f_13 = func_33();
					}
					vLocal_213 = { 0f, 0f, 0f };
					vLocal_216 = { 0f, 0f, 0f };
					fVar0 = 0f;
					iLocal_212 = 0;
				}
			}
		}
	}
}

int func_29()
{
	return Global_262145.f_14985;
}

int func_30(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_913())
	{
		return unk_0xB177666FAB6F4417(func_32());
	}
	return 0;
}

var func_32()
{
	return Local_234.f_14;
}

int func_33()
{
	return Global_262145.f_14992;
}

int func_34()
{
	return Local_234.f_13;
}

void func_35()
{
	if (func_913())
	{
		if (func_912())
		{
			if (!func_8(5))
			{
				if (func_38(func_907(), func_39(), 1) < func_37())
				{
					if (func_36())
					{
						func_4(5);
					}
				}
			}
		}
	}
}

int func_36()
{
	if (unk_0xE934758D273C899A(func_907()))
	{
		return 0;
	}
	if (unk_0x9C66D99E63E8E24C(func_907()) > 5f)
	{
		return 0;
	}
	if (unk_0x70EED0761B82965E(func_907()))
	{
		return 0;
	}
	if (unk_0x50B5F6F3C29E9380(func_31(), func_907()))
	{
		return 0;
	}
	return 1;
}

float func_37()
{
	return Local_234.f_111;
}

float func_38(int iParam0, vector3 vParam1, bool bParam4)
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

Vector3 func_39()
{
	return Local_234.f_108;
}

void func_40()
{
	if (!func_8(19))
	{
		if ((func_913() && !func_911()) && unk_0xDF1306B443CD3D15(func_31(), 0))
		{
			if (func_41(func_31(), func_907(), 0) < 200f)
			{
				func_4(19);
			}
		}
	}
}

float func_41(int iParam0, int iParam1, bool bParam2)
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

void func_42()
{
	if (func_913() && func_912())
	{
		if (unk_0x50B5F6F3C29E9380(func_31(), func_907()))
		{
			if (!func_8(11))
			{
				func_45(1);
				func_4(11);
			}
			if (!func_8(3))
			{
				func_4(3);
			}
			if (func_8(16))
			{
				func_45(0);
				func_2(16);
			}
		}
		else
		{
			if (func_8(11))
			{
				if (!func_8(16))
				{
					func_4(16);
				}
			}
			if (func_8(3))
			{
				func_2(3);
			}
		}
		if (func_60(&(Local_234.f_28)))
		{
			if (func_48(&(Local_234.f_28), func_44(), 0))
			{
				func_43(&(Local_234.f_28));
			}
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_44()
{
	return Global_262145.f_14975;
}

void func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_234.f_30++;
		}
	}
	if (!func_60(&(Local_234.f_28)))
	{
		func_59(&(Local_234.f_28), 0, 0);
	}
	else
	{
		func_43(&(Local_234.f_28));
		func_59(&(Local_234.f_28), 0, 0);
	}
}

void func_46()
{
	if (!func_8(4))
	{
		if (func_913() && func_912())
		{
			if (func_47())
			{
				func_4(4);
			}
		}
	}
}

bool func_47()
{
	return func_8(18);
}

int func_48(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_59(uParam0, bParam2, 0);
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

int func_49()
{
	return Global_262145.f_14971;
}

void func_50(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_234.f_5 = iParam0;
}

int func_51()
{
	if (Local_234.f_6 == 0)
	{
		if (func_56())
		{
			Local_234.f_6 = 1;
			return 1;
		}
		if (func_11())
		{
			if (Local_234.f_10 == func_3())
			{
				iVar1 = unk_0xE2FE83579C59CF99(func_881(), &uVar0);
				iVar2 = func_52();
				if (iVar1 != func_3())
				{
					if (!func_5(iVar1, func_7(), 1))
					{
						Local_234.f_10 = iVar1;
					}
					else
					{
						Local_234.f_10 = iVar2;
					}
				}
				else if (iVar2 != func_3())
				{
					Local_234.f_10 = iVar2;
				}
			}
			Local_234.f_6 = 2;
			return 1;
		}
		if (func_8(7))
		{
			Local_234.f_6 = 3;
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	iVar0 = -1;
	iVar3 = func_3();
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar4)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar4));
			if (!func_53(iVar2))
			{
				if (unk_0x437347B10A200C4B(func_881(), 0))
				{
					if (unk_0x6992BDA3F5A14B9E(iVar2, func_881(), &iVar1))
					{
						if (iVar1 > iVar0)
						{
							iVar0 = iVar1;
							iVar3 = iVar2;
						}
					}
				}
				else if (unk_0x08E69DAA97BC8A31(iVar2, func_881(), &iVar1))
				{
					if (iVar1 > iVar0)
					{
						iVar0 = iVar1;
						iVar3 = iVar2;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar3 == func_3())
	{
	}
	return iVar3;
}

int func_53(int iParam0)
{
	if (func_55(iParam0) || func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 == func_7();
}

int func_55(int iParam0)
{
	return func_5(iParam0, func_7(), 0);
}

bool func_56()
{
	return func_8(5);
}

int func_57()
{
	if (func_56())
	{
		return 1;
	}
	if (func_11())
	{
		return 1;
	}
	if (func_58())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return func_8(7);
}

void func_59(var uParam0, bool bParam1, bool bParam2)
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

bool func_60(var uParam0)
{
	return uParam0->f_1;
}

int func_61()
{
	return Local_234.f_5;
}

void func_62(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_234.f_4 = iParam0;
}

int func_63()
{
	return Local_234.f_4;
}

int func_64()
{
	if (func_84())
	{
		if (func_66())
		{
			unk_0x71199B01895C6202(Local_234.f_19);
			unk_0x71199B01895C6202(Local_234.f_27);
			Local_234.f_7 = unk_0xD803B885F5E47A62();
			Local_234.f_8 = func_3();
			Local_234.f_9 = func_3();
			Local_234.f_10 = func_3();
			Local_234.f_13 = func_65();
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return Global_262145.f_14991;
}

int func_66()
{
	if (!func_79())
	{
		return 0;
	}
	if (!func_76())
	{
		return 0;
	}
	if (!func_71())
	{
		return 0;
	}
	if (!func_67())
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_21(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_68(int iParam0)
{
	if (!func_21(iParam0))
	{
		if (func_70(Local_234.f_31[iParam0].f_5))
		{
			if (unk_0xA3FA8B6D2780D661(1))
			{
				if (func_69(&(Local_234.f_31[iParam0]), 26, Local_234.f_31[iParam0].f_5, Local_234.f_31[iParam0].f_1, Local_234.f_31[iParam0].f_4, 1, 1, 1))
				{
					unk_0xE2F0767314863BD8(func_20(iParam0), 1, 0);
					unk_0x11AD11297DC58CC7(func_20(iParam0), true);
					unk_0x1365063FA6365BE8(func_20(iParam0), true);
					if (iParam0 == 3)
					{
						unk_0x262EF6C6306BEA6C(func_20(iParam0), Local_234.f_31[iParam0].f_12, 99999999, false, true);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(func_20(iParam0), Local_234.f_31[iParam0].f_12, 99999999, true, true);
					}
					unk_0x3CC33E4E9CE523F4(func_20(iParam0), 1);
					unk_0x4E885A246A9D983A(func_20(iParam0), 42, true);
					unk_0xB8AFFA077E15E999(func_20(iParam0), 1);
					unk_0xAFF39FB306F8E232(func_20(iParam0), 43, true);
					unk_0xAFF39FB306F8E232(func_20(iParam0), 44, true);
					unk_0x26A6B1686E33113F(func_20(iParam0), 1);
					unk_0xED253B8DDB3FFB77(func_20(iParam0), Local_234.f_23, 10f, 0, 0);
					unk_0x6DF7BF67E86AAE86(func_20(iParam0), Global_1575003);
					if (iParam0 == 3)
					{
						unk_0x509B8296EBA9B408(func_20(iParam0), "WORLD_HUMAN_WELDING", 0, 0);
					}
				}
			}
		}
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, bool bParam9)
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

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_71()
{
	if (!func_22())
	{
		if (func_70(Local_234.f_100.f_5))
		{
			if (unk_0xE75B31D140F2F10B(1))
			{
				if (func_73(&(Local_234.f_100), Local_234.f_100.f_5, Local_234.f_100.f_1, Local_234.f_100.f_4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xBA2CB24C70C8E726(func_72(), 1, 1);
					if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB7E567188872123E(func_19(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xF1D385D359D58F72("MPBitset", 3))
					{
						if (unk_0x30F813723591D02E(func_19(), "MPBitset"))
						{
							iVar0 = unk_0x1E2DFB0EF4BB4566(func_19(), "MPBitset");
						}
						unk_0x5D96D8530B3D0904(&iVar0, 10);
						unk_0x5D96D8530B3D0904(&iVar0, 11);
						unk_0xB7E567188872123E(func_19(), "MPBitset", iVar0);
					}
					unk_0x56FDC9ADE35F7DB0(func_19(), false, 1, 0);
					unk_0x120A395B0ECB8EA5(func_19(), true);
					unk_0xEF190091B5B9F5EB(func_19(), 1);
					unk_0xAC0C6241732E36F6(func_19());
					unk_0xB9FD7450C0DAB575(func_19(), 1084227584);
					unk_0x79E38224B223335B(func_19(), 1);
					unk_0xA6B2C9FCA24AAC6F(func_19(), 1);
					unk_0x50782A20AFA26A7D(func_19(), true, 0);
					unk_0xE793BC58855FBB31(1, -1090665087, func_19(), 0);
					unk_0x5980AF2A1EC56A46(func_19(), 0);
				}
			}
		}
	}
	if (!func_22())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_22())
	{
		return unk_0xA5FBBC2F619A4DE2(Local_234.f_100);
	}
	return -1;
}

int func_73(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
			func_74(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_74(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_75(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
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

int func_75(int iParam0, vector3 vParam1, int iParam4)
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

int func_76()
{
	if (!func_912())
	{
		if (func_70(Local_234.f_27))
		{
			if (unk_0x081C8BC5094A7B76(1))
			{
				if (func_78(&(Local_234.f_22), Local_234.f_27, Local_234.f_23, 1, 1, 0, 1, 0, 0, 0))
				{
					unk_0xBA2CB24C70C8E726(func_907(), 1, 1);
					unk_0x120A395B0ECB8EA5(func_907(), false);
					unk_0xEF190091B5B9F5EB(func_907(), 1);
					unk_0xAC0C6241732E36F6(func_907());
					unk_0xD8F6A53F4799FAFE(func_907(), Local_234.f_26);
					unk_0xD458AC1C1D29C3B4(func_907(), func_77(), 0);
					unk_0x25BD67336EA4AECE(func_907(), 1200);
					unk_0x4A13379C8009DF6F(Local_234.f_22, 1);
				}
			}
		}
	}
	if (!func_912())
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	return Global_262145.f_14987;
}

int func_78(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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

int func_79()
{
	if (!func_913())
	{
		if (func_70(Local_234.f_19))
		{
			if (unk_0xE75B31D140F2F10B(1))
			{
				if (func_73(&(Local_234.f_14), Local_234.f_19, Local_234.f_15, Local_234.f_18, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xBA2CB24C70C8E726(func_881(), 1, 1);
					if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB7E567188872123E(func_31(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xF1D385D359D58F72("MPBitset", 3))
					{
						if (unk_0x30F813723591D02E(func_31(), "MPBitset"))
						{
							iVar0 = unk_0x1E2DFB0EF4BB4566(func_31(), "MPBitset");
						}
						unk_0x5D96D8530B3D0904(&iVar0, 10);
						unk_0x5D96D8530B3D0904(&iVar0, 11);
						unk_0xB7E567188872123E(func_31(), "MPBitset", iVar0);
					}
					unk_0xC002508A277213DE(func_31(), 40, 12);
					unk_0x58A0C35FA7CA6162(func_31(), 0, 12);
					unk_0x149017A9F302A237(func_31(), 0);
					unk_0x0674D459BB0558AA(func_31(), 0);
					unk_0x56FDC9ADE35F7DB0(func_31(), false, 1, 0);
					unk_0x120A395B0ECB8EA5(func_31(), true);
					unk_0xEF190091B5B9F5EB(func_31(), 1);
					unk_0xAC0C6241732E36F6(func_31());
					unk_0xB9FD7450C0DAB575(func_31(), 1084227584);
					unk_0x79E38224B223335B(func_31(), 1);
					unk_0xA6B2C9FCA24AAC6F(func_31(), 1);
					unk_0x5980AF2A1EC56A46(func_31(), 0);
					unk_0x4D647C1236C18D14(func_31(), false);
					unk_0xBBBF14C3EA856B1A(func_31(), 1);
					unk_0xD5F6E31F4ECF0980(func_31(), 1);
					unk_0x0F94CA38DF58080C(func_31(), func_83());
					unk_0xD458AC1C1D29C3B4(func_31(), func_82(), 0);
					unk_0x722454E43E496678(func_31(), func_82());
					unk_0x5DAB50E08C3C504A(func_31(), to_float(func_82()));
					unk_0xDC544F7DF5E5164D(func_31(), to_float(func_82()));
					unk_0xA4C7B5E63E8F6EB3(func_31(), to_float(func_82()));
					unk_0x00DB73D97F9E5DCD(func_31(), to_float(func_82()));
					unk_0xF38DA70CA19BFE1E(func_31(), to_float(func_82()));
					unk_0x09C4C5C870748A1F(func_31(), 0);
					if (func_81())
					{
						unk_0x50782A20AFA26A7D(func_31(), true, 0);
					}
					else
					{
						unk_0x50782A20AFA26A7D(func_31(), false, 0);
					}
					unk_0x3F169EF6AE57D03F(func_31(), 0);
					if ((IntToFloat(func_82()) * 0,9f) > 900f)
					{
						unk_0xD6BF10DC484743B1(func_31(), (IntToFloat(func_82()) * 0,9f));
					}
					func_80(func_31());
				}
			}
		}
	}
	if (!func_913())
	{
		return 0;
	}
	return 1;
}

void func_80(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x60A2E7213232AA6E(iParam0, 0);
	}
}

bool func_81()
{
	return Global_262145.f_14976;
}

int func_82()
{
	return Global_262145.f_14984;
}

var func_83()
{
	return Global_262145.f_14988;
}

int func_84()
{
	if (!func_8(1))
	{
		if (func_89())
		{
			Local_234.f_11 = iLocal_193[unk_0x09AC81E49EA267F7(0, 3)];
			Local_234.f_12 = unk_0x09AC81E49EA267F7(0, 3);
			if (func_88() > -1)
			{
				Local_234.f_11 = func_88();
				if (Global_2537071.f_5902 != Local_234.f_11)
				{
					Global_2537071.f_5903 = -1;
					Global_2537071.f_5902 = Local_234.f_11;
				}
				if (Global_2537071.f_5903 == -1)
				{
					Local_234.f_12 = 0;
					Global_2537071.f_5903 = 0;
				}
				else if (Global_2537071.f_5903 == 0)
				{
					Local_234.f_12 = 1;
					Global_2537071.f_5903 = 1;
				}
				else if (Global_2537071.f_5903 == 1)
				{
					Local_234.f_12 = 2;
					Global_2537071.f_5903 = 2;
				}
				else
				{
					Local_234.f_12 = 0;
					Global_2537071.f_5903 = 0;
				}
			}
			if (!func_87() || func_88() > -1)
			{
				switch (Local_234.f_11)
				{
					case 0:
						Local_234.f_15 = { 189,9142f, -2513,33f, 4,9961f };
						Local_234.f_18 = 269,0188f;
						Local_234.f_23 = { 1042,862f, -2873,798f, 18,0165f };
						Local_234.f_26 = 89,5995f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 1042,85f, -2873,894f, 20,8386f };
						Local_234.f_31[0].f_4 = 353,3989f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 1052,66f, -2866,365f, 18,0336f };
						Local_234.f_31[1].f_4 = 45,1981f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 1061,598f, -2885,226f, 18,018f };
						Local_234.f_31[2].f_4 = 41,5981f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 1046,898f, -2873,773f, 18,018f };
						Local_234.f_31[3].f_4 = 104,5985f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 1057,638f, -2890,931f, 18,018f };
						Local_234.f_100.f_4 = 46,9998f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 1:
						Local_234.f_15 = { 47,3589f, -325,5841f, 43,1512f };
						Local_234.f_18 = 158,5709f;
						Local_234.f_23 = { -181,4615f, -1069,324f, 41,1378f };
						Local_234.f_26 = 140,5992f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { -182,4058f, -1069,914f, 43,96f };
						Local_234.f_31[0].f_4 = 167,799f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { -180,9027f, -1084,14f, 41,1747f };
						Local_234.f_31[1].f_4 = 150,5984f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { -171,2542f, -1084,216f, 41,1393f };
						Local_234.f_31[2].f_4 = 343,398f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { -178,9076f, -1066,203f, 41,1393f };
						Local_234.f_31[3].f_4 = 145,3985f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { -159,393f, -1085,093f, 41,139f };
						Local_234.f_100.f_4 = 27,197f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 2:
						Local_234.f_15 = { -1678,679f, 488,4541f, 127,8763f };
						Local_234.f_18 = 294,2007f;
						Local_234.f_23 = { -601,9863f, 313,6457f, 88,2f };
						Local_234.f_26 = 244,7996f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { -602,1668f, 313,48f, 91,0222f };
						Local_234.f_31[0].f_4 = 214,4477f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { -593,0814f, 320,082f, 88,2015f };
						Local_234.f_31[1].f_4 = 303,5987f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { -582,2228f, 297,6816f, 93,0922f };
						Local_234.f_31[2].f_4 = 62,5994f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { -605,6559f, 315,3309f, 88,2015f };
						Local_234.f_31[3].f_4 = 246,6474f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { -574,594f, 284,302f, 93,092f };
						Local_234.f_100.f_4 = 59,246f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 3:
						Local_234.f_15 = { -1014,687f, -1927,288f, 18,7639f };
						Local_234.f_18 = 44,0083f;
						Local_234.f_23 = { -1538,633f, -3183,779f, 12,9435f };
						Local_234.f_26 = 296,5988f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { -1538,567f, -3183,617f, 15,7656f };
						Local_234.f_31[0].f_4 = 5,3979f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { -1523,649f, -3198,947f, 13,6499f };
						Local_234.f_31[1].f_4 = 359,998f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { -1536,221f, -3200,823f, 12,9449f };
						Local_234.f_31[2].f_4 = 359,998f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { -1541,995f, -3185,51f, 12,9449f };
						Local_234.f_31[3].f_4 = 308,5976f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { -1544,632f, -3201,68f, 12,945f };
						Local_234.f_100.f_4 = 306,3984f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 4:
						Local_234.f_15 = { 1882,029f, -1045,27f, 78,2375f };
						Local_234.f_18 = 170,8719f;
						Local_234.f_23 = { 1203,167f, -1506,968f, 33,691f };
						Local_234.f_26 = 21,999f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 1202,172f, -1506,194f, 36,513f };
						Local_234.f_31[0].f_4 = 160,799f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 1201,206f, -1503,156f, 33,693f };
						Local_234.f_31[1].f_4 = 136,998f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 1208,337f, -1501,759f, 33,693f };
						Local_234.f_31[2].f_4 = 108,799f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 1204,782f, -1510,913f, 33,693f };
						Local_234.f_31[3].f_4 = 24,999f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 1199,658f, -1494,233f, 33,693f };
						Local_234.f_100.f_4 = 127,4f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 5:
						Local_234.f_15 = { -2039,003f, -265,5846f, 22,3858f };
						Local_234.f_18 = 143,0463f;
						Local_234.f_23 = { -3100,435f, 444,906f, 1,374f };
						Local_234.f_26 = 308,598f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { -3100,591f, 444,925f, 4,196f };
						Local_234.f_31[0].f_4 = 260,397f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { -3097,096f, 444,617f, 1,369f };
						Local_234.f_31[1].f_4 = 200,796f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { -3081,263f, 446,521f, 3,209f };
						Local_234.f_31[2].f_4 = 116,995f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { -3103,644f, 442,422f, 1,384f };
						Local_234.f_31[3].f_4 = 312,795f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { -3076,92f, 465,435f, 1,335f };
						Local_234.f_100.f_4 = 198,799f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 6:
						Local_234.f_15 = { 728,02f, -1408,043f, 25,4891f };
						Local_234.f_18 = 90,1806f;
						Local_234.f_23 = { 1381,42f, -762,7927f, 65,8711f };
						Local_234.f_26 = 92,8485f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 1381,338f, -763,0068f, 69,6918f };
						Local_234.f_31[0].f_4 = 4,94f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 1400,973f, -752,1135f, 66,2362f };
						Local_234.f_31[1].f_4 = 90,9655f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 1379,128f, -775,2779f, 66,2889f };
						Local_234.f_31[2].f_4 = 78,6381f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 1385,204f, -762,8477f, 65,683f };
						Local_234.f_31[3].f_4 = 92,0539f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 1361,352f, -758,7062f, 66,6214f };
						Local_234.f_100.f_4 = 326,148f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 7:
						Local_234.f_15 = { 1253,498f, 1840,716f, 79,9641f };
						Local_234.f_18 = 46,8947f;
						Local_234.f_23 = { 2774,083f, 2808,028f, 40,491f };
						Local_234.f_26 = 109,598f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 2773,714f, 2807,965f, 43,313f };
						Local_234.f_31[0].f_4 = 63,597f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 2772,637f, 2804,956f, 40,331f };
						Local_234.f_31[1].f_4 = 261,997f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 2778,04f, 2814,614f, 40,518f };
						Local_234.f_31[2].f_4 = 311,397f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 2778,008f, 2809,422f, 40,531f };
						Local_234.f_31[3].f_4 = 117,198f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 2795,438f, 2821,497f, 40,935f };
						Local_234.f_100.f_4 = 250,8f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 8:
						Local_234.f_15 = { -346,9132f, 1154,042f, 324,6277f };
						Local_234.f_18 = 16,8176f;
						Local_234.f_23 = { 672,3871f, 1285,626f, 362,1034f };
						Local_234.f_26 = 267,9326f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 672,4152f, 1285,745f, 365,9242f };
						Local_234.f_31[0].f_4 = 158,9035f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 661,6746f, 1280,377f, 359,296f };
						Local_234.f_31[1].f_4 = 265,7611f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 684,5181f, 1285,442f, 359,296f };
						Local_234.f_31[2].f_4 = 172,8322f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 668,6322f, 1285,944f, 362,1047f };
						Local_234.f_31[3].f_4 = 268,138f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 698,5234f, 1281,729f, 359,296f };
						Local_234.f_100.f_4 = 179,1677f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
					
					case 9:
						Local_234.f_15 = { 2272,492f, 4843,567f, 39,515f };
						Local_234.f_18 = 225,5383f;
						Local_234.f_23 = { 1641,274f, 3792,706f, 33,7837f };
						Local_234.f_26 = 124,0543f;
						Local_234.f_108 = { func_86() };
						Local_234.f_111 = 15f;
						Local_234.f_31[0].f_1 = { 1640,446f, 3792,24f, 37,6044f };
						Local_234.f_31[0].f_4 = 130,5668f;
						Local_234.f_31[0].f_5 = 2047212121;
						Local_234.f_31[0].f_8 = 0;
						Local_234.f_31[0].f_9 = 0;
						Local_234.f_31[0].f_12 = func_85();
						Local_234.f_31[1].f_1 = { 1651,009f, 3802,024f, 37,6556f };
						Local_234.f_31[1].f_4 = 171,5231f;
						Local_234.f_31[1].f_5 = 2047212121;
						Local_234.f_31[1].f_8 = 0;
						Local_234.f_31[1].f_9 = 0;
						Local_234.f_31[1].f_12 = func_85();
						Local_234.f_31[2].f_1 = { 1653,848f, 3788,61f, 33,9115f };
						Local_234.f_31[2].f_4 = 227,4158f;
						Local_234.f_31[2].f_5 = 2047212121;
						Local_234.f_31[2].f_8 = 0;
						Local_234.f_31[2].f_9 = 0;
						Local_234.f_31[2].f_12 = func_85();
						Local_234.f_31[3].f_1 = { 1644,477f, 3794,678f, 33,7998f };
						Local_234.f_31[3].f_4 = 119,3968f;
						Local_234.f_31[3].f_5 = 2047212121;
						Local_234.f_31[3].f_8 = 0;
						Local_234.f_31[3].f_9 = 0;
						Local_234.f_31[3].f_12 = func_85();
						Local_234.f_100.f_1 = { 1653,295f, 3761,657f, 33,7487f };
						Local_234.f_100.f_4 = 36,6346f;
						Local_234.f_100.f_5 = 788747387;
						Local_234.f_100.f_6 = 0;
						Local_234.f_100.f_7 = 0;
						break;
				}
				Global_2537071.f_5902 = Local_234.f_11;
				if ((!func_30(Local_234.f_15) && !func_30(Local_234.f_23)) && !func_30(Local_234.f_108))
				{
					func_4(1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 4);
	switch (iVar0)
	{
		case 0:
			return 736523883;
		
		case 1:
			return -2084633992;
		
		case 2:
			return 2144741730;
		
		case 3:
			return 487013001;
		
		default:
	}
	return -2084633992;
}

Vector3 func_86()
{
	switch (Local_234.f_11)
	{
		case 0:
			switch (Local_234.f_12)
			{
				case 0:
					return 1531,415f, 1684,644f, 109,006f;
				
				case 1:
					return 2073,5f, 2325,21f, 93,3021f;
				
				case 2:
					return 2452,845f, 1500,187f, 34,6955f;
				
				default:
			}
			break;
		
		case 1:
			switch (Local_234.f_12)
			{
				case 0:
					return 2777,029f, 2852,221f, 34,7472f;
				
				case 1:
					return 2386,253f, 3152,772f, 46,239f;
				
				case 2:
					return 1503,5f, 3761,3f, 33f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_234.f_12)
			{
				case 0:
					return 1662,926f, 6443,836f, 27,9099f;
				
				case 1:
					return 1987,6f, 5003,8f, 41,5f;
				
				case 2:
					return -470,0827f, 6314,478f, 12,7855f;
				
				default:
			}
			break;
		
		case 3:
			switch (Local_234.f_12)
			{
				case 0:
					return 762,7951f, 4181,884f, 39,5877f;
				
				case 1:
					return 1419,2f, 4368,2f, 42,9f;
				
				case 2:
					return 1713,144f, 4774,958f, 46,583f;
				
				default:
			}
			break;
		
		case 4:
			switch (Local_234.f_12)
			{
				case 0:
					return 369,589f, 3506,247f, 33,3387f;
				
				case 1:
					return 28,005f, 3057,184f, 39,7648f;
				
				case 2:
					return 197,4874f, 3056,602f, 41,7043f;
				
				default:
			}
			break;
		
		case 5:
			switch (Local_234.f_12)
			{
				case 0:
					return -934,4654f, 5533,987f, 5,8178f;
				
				case 1:
					return 353,4302f, 4441,722f, 62,0202f;
				
				case 2:
					return 116,9429f, 3634,013f, 38,7549f;
				
				default:
			}
			break;
		
		case 6:
			switch (Local_234.f_12)
			{
				case 0:
					return 3279,945f, 5162,452f, 18,0005f;
				
				case 1:
					return 2261,117f, 5603,044f, 53,0163f;
				
				case 2:
					return 2939,061f, 4535,25f, 47,6496f;
				
				default:
			}
			break;
		
		case 7:
			switch (Local_234.f_12)
			{
				case 0:
					return -809,7571f, -2664,963f, 12,812f;
				
				case 1:
					return -1211,795f, -2048,009f, 13,4178f;
				
				case 2:
					return 179,3704f, -2168,603f, 10,4103f;
				
				default:
			}
			break;
		
		case 8:
			switch (Local_234.f_12)
			{
				case 0:
					return 130,4951f, 6663,956f, 30,7705f;
				
				case 1:
					return -193,6152f, 6219,429f, 30,4893f;
				
				case 2:
					return 195,7f, 6412,5f, 30,2f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_234.f_12)
			{
				case 0:
					return -1567,759f, 845,0679f, 183,0854f;
				
				case 1:
					return -817,536f, 865,8911f, 202,0182f;
				
				case 2:
					return -921,0893f, -725,2122f, 18,9176f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_87()
{
	if (Global_2537071.f_5902 == Local_234.f_11)
	{
		return 1;
	}
	return 0;
}

int func_88()
{
	return Global_2537071.f_5124.f_339;
}

int func_89()
{
	fVar2[0] = 9999,9f;
	fVar2[1] = 9999,9f;
	fVar2[2] = 9999,9f;
	if (func_1203(unk_0xD803B885F5E47A62(), 1, 1))
	{
		vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		iVar0 = 0;
		while (iVar0 < 11)
		{
			fVar1 = unk_0x0EB28750412C3A5A(vVar6, func_90(iVar0), false);
			if (fVar1 < fVar2[0])
			{
				fVar2[2] = fVar2[1];
				iLocal_193[2] = iLocal_193[1];
				fVar2[1] = fVar2[0];
				iLocal_193[1] = iLocal_193[0];
				fVar2[0] = fVar1;
				iLocal_193[0] = iVar0;
			}
			else if (fVar1 > fVar2[0] && fVar1 < fVar2[1])
			{
				fVar2[2] = fVar2[1];
				iLocal_193[2] = iLocal_193[1];
				fVar2[1] = fVar1;
				iLocal_193[1] = iVar0;
			}
			else if (fVar1 > fVar2[1] && fVar1 < fVar2[2])
			{
				fVar2[2] = fVar1;
				iLocal_193[2] = iVar0;
			}
			iVar0++;
		}
	}
	if ((iLocal_193[0] != -1 && iLocal_193[1] != -1) && iLocal_193[2] != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 189,9142f, -2513,33f, 4,9961f;
		
		case 1:
			return 47,3589f, -325,5841f, 43,1512f;
		
		case 2:
			return -1678,679f, 488,4541f, 127,8763f;
		
		case 3:
			return -1014,687f, -1927,288f, 18,7639f;
		
		case 4:
			return 1882,029f, -1045,27f, 78,2375f;
		
		case 5:
			return -2039,003f, -265,5846f, 22,3858f;
		
		case 6:
			return 728,02f, -1408,043f, 25,4891f;
		
		case 7:
			return 1253,498f, 1840,716f, 79,9641f;
		
		case 8:
			return -346,9132f, 1154,042f, 324,6277f;
		
		case 9:
			return 2272,492f, 4843,567f, 39,515f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_91(int iParam0)
{
	Local_234 = iParam0;
}

int func_92()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

void func_93()
{
	switch (func_63())
	{
		case 0:
			break;
		
		case 1:
			if (!func_854(2))
			{
				func_831(170, func_908(), -1, 0);
				func_830(2);
			}
			else if (!func_854(3))
			{
				if (func_48(&(Local_234.f_2), 10000, 0))
				{
					func_830(3);
				}
			}
			func_715();
			func_714();
			func_713();
			func_712();
			func_709();
			func_706();
			func_703();
			func_701();
			func_700();
			func_699(1);
			func_695();
			func_692();
			if ((!func_688() && !func_687()) && !func_686(170))
			{
				if (func_61() == 0)
				{
					if (func_647(1, 1, 1, 0))
					{
						if (!func_854(4))
						{
							func_561(-1, 0, 0, -1, 0, 0);
							func_830(4);
						}
						func_544();
						func_537();
						func_514();
						func_512();
						func_508();
						func_500();
						switch (func_499(unk_0x57270EE11514DC67()))
						{
							case 0:
								if (func_908())
								{
									if (!func_854(6))
									{
										func_497();
										func_495(1);
										func_494(1);
										func_493(1);
										func_830(6);
									}
									func_468(0);
									func_460(0);
									func_435(0);
									if (!func_9(unk_0xFB04705FDFDCE640(), 6))
									{
										if (func_434())
										{
											func_433(6);
										}
									}
								}
								else if (func_432())
								{
									func_468(0);
									func_460(0);
									func_435(0);
								}
								else if (!func_432())
								{
									if (func_431() || func_430())
									{
										func_468(3);
										func_460(10);
									}
								}
								if (func_8(2))
								{
									func_429(1);
								}
								break;
							
							case 1:
								if (func_908())
								{
									if (func_428())
									{
										if (func_434())
										{
											if (!func_9(unk_0xFB04705FDFDCE640(), 6))
											{
												func_433(6);
											}
											if (!func_854(5))
											{
												func_830(5);
											}
											func_460(7);
										}
									}
									else if (!func_854(5))
									{
										if (func_434())
										{
											if (!func_9(unk_0xFB04705FDFDCE640(), 6))
											{
												func_433(6);
											}
											func_830(5);
										}
									}
								}
								else if (!func_432())
								{
									if (func_431() || func_430())
									{
										func_468(3);
										func_460(10);
									}
								}
								if (func_8(11))
								{
									func_429(2);
								}
								break;
							
							case 2:
								if (func_908() || func_432())
								{
									func_435(1);
									if (func_428())
									{
										func_460(8);
										if (func_38(unk_0x16F2683693E537C9(), func_39(), 0) < 100f)
										{
											func_460(12);
										}
									}
									else
									{
										func_460(9);
									}
									if (func_8(15))
									{
										func_460(11);
									}
								}
								else
								{
									func_468(3);
									func_460(10);
								}
								break;
							}
						}
				}
			}
			else
			{
				func_421();
				func_420();
				if (func_913())
				{
					if (!unk_0x0B6A547B830D3C18(func_31(), unk_0xD803B885F5E47A62()))
					{
						unk_0xF1259063ADD6A7AF(func_31(), unk_0xD803B885F5E47A62(), 1);
					}
				}
			}
			break;
		
		case 2:
			if (func_419(unk_0xD803B885F5E47A62()))
			{
				func_495(0);
			}
			if (Global_2537071.f_5912 == 1)
			{
				Global_2537071.f_5912 = 0;
			}
			func_391();
			func_380();
			func_500();
			func_421();
			func_94();
			break;
		
		case 3:
			break;
	}
}

void func_94()
{
	if (func_61() != 0)
	{
		if (func_647(1, 1, 1, 0))
		{
			if ((!func_688() && !func_687()) && !func_686(171))
			{
				if (func_378())
				{
					switch (func_61())
					{
						case 2:
							func_468(11);
							break;
						
						case 3:
							break;
						
						case 1:
							if (func_908())
							{
								func_468(2);
							}
							else
							{
								func_468(8);
							}
							break;
						
						case 4:
							if (Local_234.f_6 != 0)
							{
								switch (Local_234.f_6)
								{
									case 1:
										if (func_908() || func_432())
										{
											if (!func_432())
											{
												bVar0 = true;
												func_377();
											}
											func_468(1);
										}
										else
										{
											func_468(10);
										}
										break;
									
									case 2:
										if (func_908() || func_432())
										{
											func_468(2);
										}
										else if (func_376())
										{
											bVar0 = true;
											func_468(4);
											func_377();
										}
										else if (func_375())
										{
											func_468(5);
											func_377();
										}
										else if (func_374())
										{
											if (func_372(func_373(), 1))
											{
												func_468(7);
											}
											else
											{
												func_468(6);
											}
										}
										else
										{
											func_468(8);
										}
										break;
									
									case 3:
										if (func_908() || func_432())
										{
											func_468(2);
										}
										else if (func_371(unk_0xD803B885F5E47A62()))
										{
											func_468(9);
										}
										else
										{
											func_468(8);
										}
										break;
									
									case 4:
										if (func_908())
										{
											bVar0 = true;
											func_468(12);
										}
										else
										{
											func_468(13);
										}
										break;
									}
							}
							break;
						}
				}
				if (!func_854(1))
				{
					iVar1 = unk_0xD803B885F5E47A62();
					func_369(0, iVar1);
					if (bVar0)
					{
						if (Local_234.f_6 == 1)
						{
							if (func_908())
							{
								iLocal_135 = (iLocal_135 + func_34());
							}
						}
						else if (Local_234.f_6 == 2)
						{
							if (func_376())
							{
								iLocal_135 = (iLocal_135 + func_65());
							}
						}
					}
					func_136(170, bVar0, &iLocal_135, 0);
					func_974(bVar0, 0);
					func_830(1);
				}
			}
		}
	}
	if (func_95(&uLocal_158, 0, 0))
	{
		func_433(0);
	}
}

int func_95(var uParam0, bool bParam1, int iParam2)
{
	func_135(29);
	if ((*uParam0 > 0 && !func_134()) && func_127(unk_0xD803B885F5E47A62()) != 0)
	{
		if (!func_124())
		{
			func_123();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_60(&(uParam0->f_3)))
			{
				func_59(&(uParam0->f_3), 0, 0);
			}
			else if (func_48(&(uParam0->f_3), 1000, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 0);
					func_59(&(uParam0->f_5), 0, 0);
				}
				func_59(&(uParam0->f_1), 0, 0);
				func_122(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_60(&(uParam0->f_5)))
			{
				if (func_48(&(uParam0->f_5), 3000, 0))
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
				func_111(iParam2);
				func_122(uParam0, 2);
			}
			break;
		
		case 2:
			func_111(0);
			if (func_48(&(uParam0->f_1), 15000, 0))
			{
				if (func_96(func_97(0)))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_122(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_48(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
				unk_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
				func_122(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
			unk_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_96(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_97(int iParam0)
{
	if (((func_109(unk_0xD803B885F5E47A62()) || func_106(unk_0xD803B885F5E47A62())) || func_101()) || iParam0)
	{
		if (func_106(unk_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_98(func_100()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_98(int iParam0)
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
	return func_99(iParam0, 0);
	return 0;
}

int func_99(int iParam0, int iParam1)
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

int func_100()
{
	return Global_1650640;
}

var func_101()
{
	return (func_105() && func_102(func_104()));
}

bool func_102(int iParam0)
{
	return func_103(iParam0, 1);
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 != func_3())
	{
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35;
}

bool func_105()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 148;
}

bool func_106(int iParam0)
{
	return func_99(func_107(iParam0), 0);
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

bool func_109(int iParam0)
{
	return func_110(func_107(iParam0));
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[unk_0xD803B885F5E47A62()] == 148 && func_103(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_35, 1))
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

void func_111(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0))
	{
		if (((((((((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_1203(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !unk_0x757EF87A33649210()) && !func_121(unk_0xD803B885F5E47A62(), 22)) && func_127(unk_0xD803B885F5E47A62()) != 0) && !func_119(func_120())) && !func_109(unk_0xD803B885F5E47A62())) && !func_118(func_107(unk_0xD803B885F5E47A62()))) && !func_117(func_107(unk_0xD803B885F5E47A62())))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 1);
			func_116(func_97(iParam0), -1);
			func_112(1);
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_112(int iParam0)
{
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_113(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_134())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_113(bool bParam0)
{
	return func_114(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_114(int iParam0, bool bParam1)
{
	return func_115(iParam0, bParam1, 1);
}

int func_115(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_103(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_3() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_116(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_118(int iParam0)
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

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_120()
{
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_121(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_123()
{
	Global_2462222 = 1;
}

int func_124()
{
	if (((((((func_107(unk_0xD803B885F5E47A62()) == 170 || func_107(unk_0xD803B885F5E47A62()) == 219) || func_107(unk_0xD803B885F5E47A62()) == 221) || func_107(unk_0xD803B885F5E47A62()) == 220) || func_107(unk_0xD803B885F5E47A62()) == 216) || func_107(unk_0xD803B885F5E47A62()) == 215) || func_107(unk_0xD803B885F5E47A62()) == 214) || func_107(unk_0xD803B885F5E47A62()) == 218)
	{
		return 1;
	}
	if (func_125(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_133(iParam0) && !func_132(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_371(iParam0);
	uVar3 = func_131();
	bVar4 = func_688();
	if ((bVar1 && (func_130(iParam0) || func_129(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_419(iParam0)) && !func_128(iParam0)))
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

bool func_128(int iParam0)
{
	return func_121(iParam0, 19);
}

int func_129(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_130(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

bool func_131()
{
	return Global_1312418;
}

bool func_132(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_1, 2);
}

int func_133(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

bool func_134()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

void func_135(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

void func_136(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_367(iParam0, &fVar2, &fVar3);
	if (iParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + iParam2->f_1);
		iVar0 = (iVar0 + *iParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_366(iParam0, iParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (iParam2->f_10 / iParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && iParam2->f_21 == 1) && !iParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(iParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = (iVar0 + func_365(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(iParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * iParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(iParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(iParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * iParam2->f_2));
	}
	if (iParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + iParam2->f_18);
	}
	if (iParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + iParam2->f_19);
	}
	if (func_363(iParam0))
	{
		if (bParam1)
		{
			if (func_362(unk_0xD803B885F5E47A62()) > 0)
			{
				func_361();
			}
			else
			{
				func_360();
			}
		}
		else
		{
			func_359();
		}
	}
	func_343(iParam0, bParam1, iParam2, &iVar0, &iVar4);
	func_341(iParam0, iParam2, &iVar0, &iVar5);
	func_315(iParam0, iParam2, &iVar0, &iVar5);
	func_312(iParam0, iParam2, &iVar0, &iVar5, &iVar7);
	func_295(iParam0, iParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	iVar8 = func_104();
	if (iVar8 != func_3() && iParam0 != 148)
	{
		if (func_372(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_5(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_248(&iVar0, 1);
			}
		}
	}
	func_243(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_242();
		func_192(0, unk_0x16F2683693E537C9(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674356.f_9 = iVar0;
		func_165(iParam0, iVar0, iVar7, iVar4, iVar5, iParam2);
		func_164(iParam0, iVar0);
		if (func_163(iParam0))
		{
			if (func_162(iParam0) > -1)
			{
				func_161(func_162(iParam0), iVar0);
			}
		}
		Global_2462880 = iVar0;
		func_160(&Global_2461144, 0, 0);
	}
	if (func_419(unk_0xD803B885F5E47A62()) || func_371(unk_0xD803B885F5E47A62()))
	{
		func_147(iParam0);
	}
	if (func_110(iParam0))
	{
		Global_1674374.f_13 = iVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_118(iParam0))
	{
		Global_1674428.f_13 = iVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_146(iParam0))
	{
		Global_1674491.f_12 = iVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_145(iParam0))
	{
		Global_1674535.f_12 = iVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_144(iParam0))
	{
		Global_1674589.f_12 = iVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_117(iParam0))
	{
		if (func_143(iParam0))
		{
			Global_1674671.f_12 = iVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_139(iParam0))
		{
			Global_1674725.f_12 = iVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_138(iParam0))
	{
		Global_1674809.f_12 = iVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_137(iParam0))
	{
		Global_1674884.f_16 = iVar0;
		Global_1674884.f_17 = iVar1;
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_140(func_141(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
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

int func_141(int iParam0)
{
	if (func_107(iParam0) == 237 || func_107(iParam0) == 250)
	{
		return func_142(iParam0);
	}
	return -1;
}

int func_142(int iParam0)
{
	if (func_108(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_143(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_145(int iParam0)
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

int func_146(int iParam0)
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

void func_147(int iParam0)
{
	if (func_159(unk_0xD803B885F5E47A62()) && func_158())
	{
		if (func_157(iParam0))
		{
			func_150(10146, -1);
		}
		else if (func_149(iParam0))
		{
			func_150(10148, -1);
		}
		else if (func_99(iParam0, 1))
		{
			func_150(10149, -1);
		}
		else if (func_148(iParam0))
		{
			func_150(10150, -1);
		}
	}
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_150(int iParam0, int iParam1)
{
	iVar0 = func_154(iParam0, func_155(iParam1), 0);
	iVar0++;
	if (!func_153(iParam0))
	{
		func_152(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_151(iParam0, iVar0, iParam1, 1);
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_155(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_155(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_155(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_155(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_155(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_155(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_155(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_155(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_155(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_155(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_155(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_155(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_155(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_155(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_155(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_155(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_155(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_155(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_155(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_155(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_155(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_155(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_155(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_155(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_155(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_155(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_155(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_155(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_155(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_155(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_155(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_155(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_155(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_155(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_155(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_155(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_155(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_155(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_155(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_155(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_155(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_155(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_155(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_155(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_155(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_155(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_155(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_155(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_155(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_155(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_155(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_155(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_155(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_155(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_155(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_155(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_155(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_155(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_155(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_155(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_155(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_155(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_155(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_155(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_155(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_155(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_155(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_155(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_155(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_155(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_155(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_155(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_155(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_155(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_155(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_155(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_155(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_155(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_155(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_155(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_155(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_155(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_155(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_155(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_155(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_155(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_155(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_155(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_155(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_155(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_153(int iParam0)
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

int func_154(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_155(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_156();
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

int func_156()
{
	return Global_1312745;
}

int func_157(int iParam0)
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

bool func_158()
{
	return func_102(unk_0xD803B885F5E47A62());
}

bool func_159(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_123, 14);
}

void func_160(var uParam0, bool bParam1, bool bParam2)
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

void func_161(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_163(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_164(int iParam0, int iParam1)
{
	if (func_159(unk_0xD803B885F5E47A62()) && func_158())
	{
		if (func_157(iParam0) && iParam1 > 0)
		{
			func_152(10147, (func_154(10147, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	iVar5 = func_191();
	if (iVar5 != func_3())
	{
		func_190(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_189(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_188())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_158())
			{
				if (!func_188())
				{
					Var7 = { func_187() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_186(Var7)), func_185(Var7), iParam4);
				}
			}
			else if (func_188())
			{
				func_173(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_171())
			{
				if (!func_188())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_186(func_170(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_188())
			{
				func_173(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_171())
			{
				if (!func_188())
				{
					iVar2 = func_166(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x13A30CD1AD15553C(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_188())
			{
				func_173(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x3CF6953686BFBF61(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_188())
			{
				func_173(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x53D560AAF6BF3D4E(iParam1);
			}
			break;
		
		case 237:
			if (func_171())
			{
				if (!func_188())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_188())
			{
				func_173(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_188())
			{
				func_173(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA106C1682C790290(iParam1);
			}
			break;
		
		case 249:
			if (func_188())
			{
				func_173(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x546613D1293DBF87(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_188())
			{
				func_173(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x163F1C05711ACF77(iParam1);
			}
			break;
		
		case 243:
			if (func_188())
			{
				func_173(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_188())
				{
					func_173(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_188())
			{
				func_173(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_188())
			{
				func_173(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x0C06D61FE6218C43(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_166(int iParam0, int iParam1)
{
	fVar0 = func_169(iParam0, iParam1);
	fVar1 = (to_float(func_167(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_167(int iParam0, int iParam1)
{
	return (func_168(iParam0) * iParam1);
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		
		case 0:
			return Global_262145.f_22307;
		
		case 1:
			return Global_262145.f_22308;
		
		case 2:
			return Global_262145.f_22309;
		
		case 3:
			return Global_262145.f_22310;
		
		case 4:
			return Global_262145.f_22311;
		
		case 5:
			return Global_262145.f_22312;
		
		case 6:
			return Global_262145.f_22313;
		
		case 7:
			return Global_262145.f_22314;
		
		default:
	}
	return 0;
}

float func_169(int iParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = to_float(Global_262145.f_22315);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = to_float(Global_262145.f_22317);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_170(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

bool func_171()
{
	return func_172(unk_0xD803B885F5E47A62());
}

int func_172(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1628237[iParam0].f_11 != func_3())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

void func_173(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_188())
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
				func_174(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_174(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_174(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_174(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_188())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_156()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_181(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_180(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_175(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_176(iParam0);
	}
}

void func_176(int iParam0)
{
	bVar0 = false;
	if (!func_188())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_179(iParam0))
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
		func_177(&(Global_4263954[iParam0]));
	}
}

void func_177(var uParam0)
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
	func_178(&(uParam0->f_14));
	func_178(&(uParam0->f_14.f_13));
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

void func_178(var uParam0)
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

int func_179(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_188())
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
				func_182(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_182(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_184(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_183();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_183()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_184(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_187()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_193;
}

int func_188()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_189(bool bParam0)
{
	return func_372(unk_0xD803B885F5E47A62(), bParam0);
}

void func_190(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[iParam0].f_11.f_8[0];
	*uParam2 = Global_1628237[iParam0].f_11.f_8[1];
}

int func_191()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_193(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_203(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_199(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_194(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_194(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vVar0 = { func_197(iParam0, 1) };
	if (iParam0 == func_196(unk_0x16F2683693E537C9()))
	{
		func_195(1);
	}
	func_199(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_195(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_196(int iParam0)
{
	return iParam0;
}

Vector3 func_197(int iParam0, bool bParam1)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_198(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
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

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_202(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_201();
			Global_2439138.f_1290[iVar1].f_10 = func_200();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_200()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_201()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_202(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, true);
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

var func_203(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_204(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_204(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_241(unk_0xD803B885F5E47A62()) || func_240(unk_0xD803B885F5E47A62()))
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
	else if (func_237() || func_236(unk_0xD803B885F5E47A62()))
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
	if (func_235(sParam2))
	{
	}
	if (func_234())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_232(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_231(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_228(0, &iVar1);
					break;
				
				case 3:
					func_228(1, &iVar1);
					break;
				
				case 1:
					func_224(&iVar1);
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
			func_223(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_215((func_222(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_223(1165, iVar1, -1);
				}
				func_209(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_205((func_207(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_205((func_207(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_205(int iParam0)
{
	if (func_234())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_206(-1804740956, iParam0);
	}
}

void func_206(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_207(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1203(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_208(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_208(-1804740956);
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_209(int iParam0)
{
	Var0 = { func_214(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_212(func_213(&Var0));
			if (iVar13 == 0)
			{
				func_211(&Global_1387915, iParam0);
				func_210(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_211(&Global_1387916, iParam0);
				func_210(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_211(&Global_1387917, iParam0);
				func_210(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_211(&Global_1387918, iParam0);
				func_210(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_211(&Global_1387919, iParam0);
				func_210(1894078811, Global_1387919);
			}
		}
	}
}

void func_210(int iParam0, int iParam1)
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

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_212(int iParam0)
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

int func_213(var uParam0)
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

struct<13> func_214(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	if (func_234())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_155(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_155(-1)])
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
		if (func_221(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_219(iParam0, 1);
		}
		func_151(639, iParam0, -1, 1);
		func_152(640, func_219(iParam0, 1), -1, 1, 0);
		Global_1388060[func_155(-1)] = iParam0;
		func_216(-1109644434, 7, 0);
	}
}

void func_216(int iParam0, int iParam1, int iParam2)
{
	if (func_218(iParam1, iParam2))
	{
		iVar0 = func_217();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_217()
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

int func_218(int iParam0, var uParam1)
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

int func_219(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_220(iParam0, 0);
}

int func_220(int iParam0, int iParam1)
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

int func_221(int iParam0)
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

int func_222(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_155(-1)];
			}
			else if (func_221(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_155(-1)];
	}
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_154(iParam0, func_155(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_153(iParam0))
	{
		func_152(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_151(iParam0, iVar0, iParam2, 1);
	}
}

void func_224(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_227(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_226(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_225(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_225(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_225(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_226(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_214(iParam0) };
		Global_2513231 = { func_214(iParam1) };
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

int func_227(int iParam0, int iParam1, int iParam2)
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

void func_228(bool bParam0, int iParam1)
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
				if (func_1203(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_226(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_1203(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_229(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_226(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_225(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_225(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_229(int iParam0, int iParam1)
{
	return vdist(func_230(iParam0), func_230(iParam1));
	return 0f;
}

Vector3 func_230(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_231(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_225(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_232(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_222(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_222(unk_0xD803B885F5E47A62());
		}
	}
	if (func_233(8000, 0, 0) > 0)
	{
		if (func_233(8000, 0, 0) < (iParam0 + func_222(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_233(8000, 0, 0) - func_222(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_233(int iParam0, bool bParam1, int iParam2)
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

int func_234()
{
	return 1;
}

int func_235(char* sParam0)
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

int func_236(int iParam0)
{
	return func_144(func_107(iParam0));
}

bool func_237()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_239();
	}
	return func_238(Global_4456448.f_194990);
}

int func_238(int iParam0)
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

bool func_239()
{
	return Global_2450632.f_17;
}

bool func_240(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_241(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_242()
{
	Global_2462221 = 1;
}

void func_243(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_247(7))
	{
		return;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_245(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_2537071.f_5124.f_265, unk_0x2B6E0A53779D29EA()));
	if (func_244(iParam0) != -1)
	{
		if (iVar2 > func_244(iParam0))
		{
			iVar2 = func_244(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_244(int iParam0)
{
	if (func_99(iParam0, 0) || func_149(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_157(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		
		case 191:
			return Global_262145.f_18485;
		
		case 190:
			return Global_262145.f_18484;
		
		case 227:
			return Global_262145.f_21043;
		
		case 226:
			return Global_262145.f_21031;
		
		case 225:
			return Global_262145.f_21051;
		
		case 230:
			return Global_262145.f_22303;
		
		case 229:
			return Global_262145.f_22207;
		
		case 233:
			return Global_262145.f_22779;
		
		case 237:
			return Global_262145.f_23942;
		
		case 238:
			return Global_262145.f_24053;
		
		case 249:
			return Global_262145.f_24069;
		
		case 243:
			return Global_262145.f_26301;
		
		default:
	}
	return -1;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14995;
		
		case 171:
			return Global_262145.f_15054;
		
		case 172:
			return Global_262145.f_15072;
		
		case 173:
			return Global_262145.f_15013;
		
		case 166:
			return Global_262145.f_15028;
		
		case 167:
			return Global_262145.f_15119;
		
		case 169:
			return Global_262145.f_15091;
		
		case 168:
			return Global_262145.f_15084;
		
		case 179:
			return Global_262145.f_18366;
		
		case 180:
			return Global_262145.f_18144;
		
		case 182:
			return Global_262145.f_18144;
		
		case 183:
			return Global_262145.f_18144;
		
		case 185:
			return Global_262145.f_18144;
		
		case 186:
			return Global_262145.f_18144;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return Global_262145.f_18020;
		
		case 191:
			return Global_262145.f_18111;
		
		case 192:
			return Global_262145.f_17905;
		
		case 193:
			return Global_262145.f_18366;
		
		case 194:
			return Global_262145.f_18366;
		
		case 195:
			return Global_262145.f_18144;
		
		case 197:
			return Global_262145.f_18144;
		
		case 198:
			return Global_262145.f_18144;
		
		case 199:
			return Global_262145.f_18366;
		
		case 200:
			return Global_262145.f_18366;
		
		case 201:
			return Global_262145.f_18366;
		
		case 205:
			return Global_262145.f_18366;
		
		case 207:
			return Global_262145.f_18144;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return Global_262145.f_18144;
		
		case 210:
			return Global_262145.f_18366;
		
		case 211:
			return Global_262145.f_18366;
		
		case 214:
			return Global_262145.f_19216;
		
		case 215:
			return Global_262145.f_19218;
		
		case 216:
			return Global_262145.f_19220;
		
		case 217:
			return Global_262145.f_19222;
		
		case 218:
			return Global_262145.f_19224;
		
		case 219:
			return Global_262145.f_19226;
		
		case 220:
			return Global_262145.f_19228;
		
		case 221:
			return Global_262145.f_19230;
		
		case 225:
			if (!func_171())
			{
				return Global_262145.f_21053;
			}
			break;
		
		case 226:
			if (!func_171())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 227:
			if (!func_171())
			{
				return Global_262145.f_21045;
			}
			break;
		
		case 229:
			if (!func_171())
			{
				return Global_262145.f_22209;
			}
			break;
		
		case 230:
			if (!func_171())
			{
				return Global_262145.f_22305;
			}
			break;
		
		case 233:
			if (!func_171())
			{
				return Global_262145.f_22778;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_171())
			{
				return Global_262145.f_23944;
			}
			break;
		
		case 238:
			if (!func_171())
			{
				return Global_262145.f_24055;
			}
			break;
		
		case 249:
			if (!func_171())
			{
				return Global_262145.f_24071;
			}
			break;
		
		case 243:
			if (!func_171())
			{
				return Global_262145.f_26304;
			}
			break;
		
		case 158:
			if (!func_171())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14994;
		
		case 171:
			return Global_262145.f_15053;
		
		case 172:
			return Global_262145.f_15071;
		
		case 173:
			return Global_262145.f_15012;
		
		case 166:
			return Global_262145.f_15027;
		
		case 179:
			return Global_262145.f_18365;
		
		case 180:
			return Global_262145.f_18143;
		
		case 182:
			return Global_262145.f_18143;
		
		case 183:
			return Global_262145.f_18143;
		
		case 185:
			return Global_262145.f_18143;
		
		case 186:
			return Global_262145.f_18143;
		
		case 189:
			return Global_262145.f_18365;
		
		case 193:
			return Global_262145.f_18365;
		
		case 194:
			return Global_262145.f_18365;
		
		case 195:
			return Global_262145.f_18143;
		
		case 197:
			return Global_262145.f_18143;
		
		case 198:
			return Global_262145.f_18143;
		
		case 199:
			return Global_262145.f_18365;
		
		case 200:
			return Global_262145.f_18365;
		
		case 201:
			return Global_262145.f_18365;
		
		case 205:
			return Global_262145.f_18365;
		
		case 207:
			return Global_262145.f_18143;
		
		case 208:
			return Global_262145.f_18143;
		
		case 209:
			return Global_262145.f_18143;
		
		case 210:
			return Global_262145.f_18365;
		
		case 211:
			return Global_262145.f_18365;
		
		case 190:
			if (func_113(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_113(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_113(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19215;
		
		case 215:
			return Global_262145.f_19217;
		
		case 216:
			return Global_262145.f_19219;
		
		case 217:
			return Global_262145.f_19221;
		
		case 218:
			return Global_262145.f_19223;
		
		case 219:
			return Global_262145.f_19225;
		
		case 220:
			return Global_262145.f_19227;
		
		case 221:
			return Global_262145.f_19229;
		
		case 225:
			if (func_113(0))
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 226:
			if (func_113(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 227:
			if (func_113(0))
			{
				return Global_262145.f_21044;
			}
			break;
		
		case 229:
			if (func_113(0))
			{
				return Global_262145.f_22208;
			}
			break;
		
		case 230:
			if (func_113(0))
			{
				return Global_262145.f_22304;
			}
			break;
		
		case 233:
			if (func_113(0))
			{
				return Global_262145.f_22780;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_113(0))
			{
				return Global_262145.f_23943;
			}
			break;
		
		case 238:
			if (func_113(0))
			{
				return Global_262145.f_24054;
			}
			break;
		
		case 249:
			if (func_113(0))
			{
				return Global_262145.f_24070;
			}
			break;
		
		case 243:
			return Global_262145.f_26300;
		
		case 158:
			if (func_113(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, iParam0);
}

void func_248(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_171())
		{
			if (func_189(0))
			{
				if (!func_113(0))
				{
					if (unk_0x40B8C182D63932FC(func_191()))
					{
						if (func_294() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_294());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_292(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_253("GB_BCUT_TICK1", func_191(), iVar0, 0, 0, 1);
						}
						func_252(20);
						func_249(func_191(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	if (func_1203(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_251(iParam0);
		func_250(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_184(iParam0));
	}
}

void func_250(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_251(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_252(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_253(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = -1;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_262(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_260(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_254(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_254(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_259() || !unk_0xA14BB9332558B949()) || !func_257(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_255(iParam2);
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

int func_255(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_256(iVar0);
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

void func_256(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_257(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_258(-1, 0) == 8;
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

int func_258(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_156();
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

bool func_259()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

var func_260(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_261(&cVar0);
}

var func_261(char[4] cParam0)
{
	return cParam0;
}

int func_262(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_290(iParam0) && !bParam4)
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
	if (((func_290(unk_0xD803B885F5E47A62()) || (func_289() && func_288())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_287();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_1203(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_285(iParam1, iParam0, 0);
							}
							else
							{
								return func_274(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_274(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_285(iParam1, iParam0, 0);
				}
				else
				{
					return func_263(0, -1, 0);
				}
			}
			else
			{
				return func_263(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_285(iParam1, iParam0, 0);
		}
		else
		{
			return func_274(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_274(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_263(bool bParam0, int iParam1, bool bParam2)
{
	return func_264(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_264(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_273() || (func_272() && func_270())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_269(iParam2, iVar0);
		}
		else
		{
			return func_269(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_227(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_268(1);
				}
				else
				{
					return func_268(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_265(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_265(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_268(1);
	}
	return func_268(0);
}

int func_265(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_267(iParam0, iParam1, iParam3);
	if (func_266(Global_4456448.f_194990, 1))
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

int func_266(int iParam0, bool bParam1)
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

int func_267(int iParam0, int iParam1, int iParam2)
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
			if (!func_227(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_268(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_269(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_267(iParam1, iParam0, 4);
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

bool func_270()
{
	if (func_271())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_271()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_272()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_273()
{
	if (func_271() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_281())
			{
				iVar3 = func_279(iParam0);
				if (!iVar3 == -1)
				{
					return func_277(iVar3);
				}
			}
			if ((func_276(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_227(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_268(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_275(1);
			}
			else
			{
				return func_264(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_268(1);
			}
			else
			{
				return func_264(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_279(iParam0);
	if (!iVar4 == -1)
	{
		return func_277(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_275(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_276(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_277(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_278(iParam0);
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

var func_278(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_279(int iParam0)
{
	if (!iParam0 == func_3())
	{
		if (func_372(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_280(iParam0)];
		}
	}
	return -1;
}

int func_280(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_3();
}

int func_281()
{
	if (((func_284() || func_283()) || func_239()) || func_282())
	{
		return 1;
	}
	return 0;
}

var func_282()
{
	return Global_2450632.f_19;
}

var func_283()
{
	return Global_2450632.f_16;
}

bool func_284()
{
	return Global_2450632.f_15;
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_281())
	{
		iVar2 = func_279(iParam1);
		if (!iVar2 == -1)
		{
			return func_277(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_3())
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
			iVar0 = func_264(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_286(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_227(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_275(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_286(int iParam0)
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

int func_287()
{
	return Global_2359302.f_2;
}

bool func_288()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_289()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_290(int iParam0)
{
	if (func_257(iParam0, 0))
	{
		return 1;
	}
	if (func_291())
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

bool func_291()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

void func_292(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_293(1);
	}
	else
	{
		iVar1 = func_293(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_293(bool bParam0)
{
	if (bParam0)
	{
		return round((0,05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_294()
{
	return Global_262145.f_12389;
}

void func_295(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar18 = func_113(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_171())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_191();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590535[iVar11].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[iVar11].f_854.f_2;
			}
			else
			{
				iVar2 = func_311(Global_1590535[iVar11].f_854, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0,9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_310(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_309("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1674671.f_49 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_308(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_306(*uParam3);
				}
				iVar6 = func_305(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_252(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x54EABC0DD106045B())
						{
							iVar22 = iVar21;
							if (unk_0x81A93C8315C28F58(iVar22))
							{
								iVar23 = unk_0x4B2BFE4A3BC248ED(iVar22);
								if (func_304(iVar23))
								{
									func_296(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_252(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_296(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_298(iParam0);
	func_297(iParam0, uVar0, iParam1, iParam2);
}

void func_297(int iParam0, var uParam1, var uParam2, var uParam3)
{
	Var0 = -601653676;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_251(iParam0);
	func_250(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_3())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_184(iParam0));
		}
	}
}

int func_298(int iParam0)
{
	iVar0 = func_303();
	iVar0 = func_301(iParam0, iVar0);
	iVar1 = Global_1628237[func_191()].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_300())
	{
		iVar0 = func_300();
	}
	if (iVar0 > func_299())
	{
		iVar0 = func_299();
	}
	return iVar0;
}

int func_299()
{
	return Global_262145.f_14956;
}

int func_300()
{
	return Global_262145.f_16131;
}

int func_301(int iParam0, int iParam1)
{
	iVar0 = (func_362(iParam0) * func_302());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_302()
{
	return Global_262145.f_16130;
}

var func_303()
{
	return Global_262145.f_12381;
}

int func_304(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_5(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_121(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (!func_257(iVar2, 0) && !func_5(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_257(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_306(int iParam0)
{
	func_307(iParam0, 7236);
}

void func_307(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_154(iParam1, -1, 0);
	func_152(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_308(int iParam0)
{
	func_307(iParam0, 7231);
}

int func_309(char* sParam0, int iParam1)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_254(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_310(int iParam0)
{
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_311(struct<5> Param0, int iParam5)
{
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam5) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_312(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	*uParam4 = 0;
	bVar16 = func_113(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_171())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_191();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_167(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_166(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_314(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_309("SMTICK_RONCUT", func_314(*iParam2));
				}
				*iParam2 = (*iParam2 - func_314(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_313(iVar2, iVar9);
				iVar6 = func_305(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22321));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_252(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_304(iVar20))
								{
									func_296(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_252(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_313(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_307(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_307(iParam1, 6117);
	}
}

int func_314(int iParam0)
{
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > to_float(Global_262145.f_22290))
	{
		fVar1 = to_float(Global_262145.f_22290);
	}
	return round(fVar1);
}

void func_315(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar17 = func_113(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_171())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_191();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_170(iVar15);
			iVar0 = (func_340(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_336(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_330(iVar16, iVar2);
				if (func_326(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_316(5);
				}
				iVar6 = func_305(&uVar5);
				iVar7 = round(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_252(108);
					}
					else
					{
						func_252(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_304(iVar20))
								{
									func_296(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_252(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_318(Global_262145.f_20572))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_318(Global_262145.f_20574))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_318(Global_262145.f_20576))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_318(Global_262145.f_20578))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_318(Global_262145.f_20580))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_318(Global_262145.f_20582))
				{
					func_309("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_318(Global_262145.f_20585))
				{
					func_309("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_318(Global_262145.f_20588))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_318(Global_262145.f_20590))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_318(Global_262145.f_20592))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_318(Global_262145.f_20594))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_318(Global_262145.f_20596))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_318(Global_262145.f_20598))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_318(Global_262145.f_20600))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_318(Global_262145.f_20602))
				{
					func_317("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_317(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam3);
	}
	unk_0x6B012227B3921E18(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_2513218 = { func_214(unk_0xD803B885F5E47A62()) };
		if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0D020422A92A2236(iVar2, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_254(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_323(15417, -1, -1))
			{
				func_322(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_323(15418, -1, -1))
			{
				func_322(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_323(15425, -1, -1))
			{
				func_322(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_323(15405, -1, -1))
			{
				func_322(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_323(15393, -1, -1))
			{
				func_322(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_323(15409, -1, -1))
			{
				func_322(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_323(15396, -1, -1))
			{
				func_322(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_323(15412, -1, -1))
			{
				func_322(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_323(15403, -1, -1))
			{
				func_322(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_323(15389, -1, -1))
			{
				func_322(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_323(15398, -1, -1))
			{
				func_322(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_323(15400, -1, -1))
			{
				func_322(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_323(15408, -1, -1))
			{
				func_322(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_323(15411, -1, -1))
			{
				func_322(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_323(15397, -1, -1))
			{
				func_322(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_323(15413, -1, -1))
			{
				func_322(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_323(15391, -1, -1))
			{
				func_322(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_323(15388, -1, -1))
			{
				func_322(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_323(15401, -1, -1))
			{
				func_322(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_323(15394, -1, -1))
			{
				func_322(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_323(15406, -1, -1))
			{
				func_322(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_323(15395, -1, -1))
			{
				func_322(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_323(15410, -1, -1))
			{
				func_322(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_323(15407, -1, -1))
			{
				func_322(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_323(15414, -1, -1))
			{
				func_322(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_323(15415, -1, -1))
			{
				func_322(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_323(15399, -1, -1))
			{
				func_322(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_323(15404, -1, -1))
			{
				func_322(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_323(15392, -1, -1))
			{
				func_322(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_323(15390, -1, -1))
			{
				func_322(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_323(15402, -1, -1))
			{
				func_322(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_323(15416, -1, -1))
			{
				func_322(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_321(209, -1))
			{
				func_319(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_323(15426, -1, -1))
			{
				func_322(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_323(15422, -1, -1))
			{
				func_322(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_323(15423, -1, -1))
			{
				func_322(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_323(15421, -1, -1))
			{
				func_322(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_323(15427, -1, -1))
			{
				func_322(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_323(15419, -1, -1))
			{
				func_322(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_323(15420, -1, -1))
			{
				func_322(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_320())
	{
		iVar0 = Global_2583656[iParam0][func_155(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_320()
{
	return 1;
	return 0;
}

int func_321(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_155(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_322(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_156();
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

int func_323(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_156();
	}
	iVar1 = func_325(iParam0, iParam1);
	uVar2 = func_324(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_324(int iParam0)
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

int func_325(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_156();
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

int func_326(int iParam0)
{
	iVar0 = func_328(iParam0);
	return func_154(func_327(iVar0), -1, 0);
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_328(int iParam0)
{
	if (func_329(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_329(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_330(int iParam0, int iParam1)
{
	iVar0 = func_328(iParam0);
	iVar1 = func_327(iVar0);
	iVar2 = (func_154(iVar1, -1, 0) + iParam1);
	func_152(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_333(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar0] != 0)
			{
				iVar1 = func_327(iVar0);
				iVar3 = (iVar3 + func_154(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_332(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_331(9357, iVar5, -1, 1);
	}
}

var func_331(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_156();
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

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_156();
	}
	iVar0 = 0;
	iVar1 = func_335(iParam0, iParam1);
	iVar2 = func_334(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_334(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_335(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_156();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_336(int iParam0, int iParam1, int iParam2)
{
	iVar1 = func_185(iParam1);
	if (func_329(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_337(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_337(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	if (func_339(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (func_329(iParam1) && iParam0 != func_3())
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

int func_339(int iParam0, int iParam1)
{
	if (func_329(iParam1) && iParam0 != func_3())
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

int func_340(int iParam0, int iParam1)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_329(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_341(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_158())
			{
				Var0 = { func_187() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = to_float(uParam1->f_10);
					fVar3 = to_float(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = ceil(fVar6);
				}
				iVar7 = func_336(unk_0xD803B885F5E47A62(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (to_float(iVar7) * Global_262145.f_18595);
					iVar7 = round(fVar8);
				}
				else
				{
					fVar9 = (to_float(iVar7) * Global_262145.f_18594);
					iVar7 = round(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_305(&uVar10);
				iVar12 = round(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = ceil((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_252(86);
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (func_113(0))
			{
				Var15 = { func_342(func_191()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = to_float(uParam1->f_10);
					fVar18 = to_float(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = ceil(fVar21);
				}
				iVar22 = func_336(func_191(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = ceil((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = ceil((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = ceil((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_342(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_193;
}

void func_343(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	if (iParam0 == 167)
	{
		if (func_172(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_358();
			}
			func_357();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_172(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_349(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_348(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_305(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_252(44);
					}
				}
				func_346(*iParam3);
				func_345();
				Global_2537071.f_5124.f_381 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_304(iVar9))
						{
							func_296(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_172(unk_0xD803B885F5E47A62()))
		{
			func_344();
		}
	}
}

void func_344()
{
	iVar0 = Global_2586255[func_156()];
	iVar0++;
	func_151(3667, iVar0, -1, 1);
}

void func_345()
{
	iVar0 = Global_2586261[func_156()];
	iVar0++;
	func_151(3666, iVar0, -1, 1);
}

void func_346(int iParam0)
{
	iVar0 = Global_2586264[func_156()];
	iVar0 = (iVar0 + iParam0);
	func_151(3668, iVar0, -1, 1);
	if (func_333(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_347(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_331(7666, iVar2, -1, 1);
	}
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
			break;
		
		case 2:
			return Global_262145.f_16275;
			break;
		
		case 3:
			return Global_262145.f_16276;
			break;
		
		case 4:
			return Global_262145.f_16277;
			break;
		
		case 5:
			return Global_262145.f_16278;
			break;
		
		case 6:
			return Global_262145.f_16279;
			break;
		
		case 7:
			return Global_262145.f_16280;
			break;
		
		case 8:
			return Global_262145.f_16281;
			break;
		
		case 9:
			return Global_262145.f_16282;
			break;
		
		case 10:
			return Global_262145.f_16283;
			break;
		
		case 11:
			return Global_262145.f_16284;
			break;
		
		case 12:
			return Global_262145.f_16285;
			break;
		
		case 13:
			return Global_262145.f_16286;
			break;
		
		case 14:
			return Global_262145.f_16287;
			break;
		
		case 15:
			return Global_262145.f_16288;
			break;
		
		case 16:
			return Global_262145.f_16289;
			break;
		
		case 17:
			return Global_262145.f_16290;
			break;
		
		case 18:
			return Global_262145.f_16291;
			break;
		
		case 19:
			return Global_262145.f_16292;
			break;
		
		case 20:
			return Global_262145.f_16293;
			break;
		
		case 21:
			return Global_262145.f_16294;
			break;
		
		case 22:
			return Global_262145.f_16295;
			break;
		
		case 23:
			return Global_262145.f_16296;
			break;
		
		case 24:
			return Global_262145.f_16297;
			break;
	}
	return 0;
}

var func_348(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_349(int iParam0)
{
	if (func_356(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_355(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_354(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_350(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_350(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_354(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_350(int iParam0)
{
	if (func_353(iParam0))
	{
		iVar0 = func_351(func_352(iParam0));
		return func_154(iVar0, -1, 0);
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_352(int iParam0)
{
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_353(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_357()
{
	iVar0 = Global_2586252[func_156()];
	iVar0++;
	Global_2586252[func_156()] = iVar0;
	func_151(3665, iVar0, -1, 1);
}

void func_358()
{
	iVar0 = Global_2586249[func_156()];
	iVar1 = Global_2586258[func_156()];
	iVar0++;
	iVar1++;
	Global_2586249[func_156()] = iVar0;
	Global_2586258[func_156()] = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_128 = iVar1;
	func_151(3663, iVar0, -1, 1);
	func_151(3664, iVar1, -1, 1);
}

void func_359()
{
	if (func_171())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_360()
{
	if (func_171())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_361()
{
	if (func_171())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_362(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_28;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_189(1) && !func_113(1))
			{
				if (func_364(func_191()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_364(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_365(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15051;
		
		case 172:
			return Global_262145.f_15067;
		
		case 173:
			return Global_262145.f_15010;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18289;
		
		case 180:
			return Global_262145.f_18164;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18172;
		
		case 185:
			return Global_262145.f_18181;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18377;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18394;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18241;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18425;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18303;
		
		case 205:
			return Global_262145.f_18412;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18270;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18407;
		
		case 211:
			return Global_262145.f_18371;
		
		case 214:
			return Global_262145.f_18965;
		
		case 215:
			return Global_262145.f_18975;
		
		case 216:
			return Global_262145.f_18985;
		
		case 217:
			return Global_262145.f_18994;
		
		case 218:
			return Global_262145.f_19003;
		
		case 219:
			return Global_262145.f_19019;
		
		case 241:
			return Global_262145.f_24090;
		
		case 242:
			return Global_262145.f_24086;
		
		case 248:
			return Global_262145.f_24089;
		
		case 244:
			return Global_262145.f_24087;
		
		case 239:
			return Global_262145.f_24091;
		
		case 240:
			return Global_262145.f_24092;
		
		case 243:
			return Global_262145.f_26299;
		
		default:
	}
	return 0;
}

int func_366(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14993;
		
		case 171:
			return Global_262145.f_15052;
		
		case 172:
			return Global_262145.f_15068;
		
		case 173:
			return Global_262145.f_15011;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17090;
		
		case 168:
			return Global_262145.f_17089;
		
		case 179:
			return Global_262145.f_18290;
		
		case 180:
			return Global_262145.f_18165;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18173;
		
		case 185:
			return Global_262145.f_18182;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18378;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18395;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18242;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18426;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18304;
		
		case 205:
			return Global_262145.f_18413;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18271;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18408;
		
		case 211:
			return Global_262145.f_18372;
		
		case 214:
			return Global_262145.f_18966;
		
		case 215:
			return Global_262145.f_18976;
		
		case 216:
			return Global_262145.f_18986;
		
		case 217:
			return Global_262145.f_18995;
		
		case 218:
			return Global_262145.f_19004;
		
		case 219:
			return Global_262145.f_19020;
		
		case 178:
			if (func_171())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		
		case 188:
			if (func_171())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		
		case 225:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_21050;
			}
			break;
		
		case 226:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 227:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 229:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_22206;
			}
			break;
		
		case 230:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_22302;
			}
			break;
		
		case 233:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_22775;
			}
			break;
		
		case 241:
			return Global_262145.f_24097;
		
		case 242:
			return Global_262145.f_24093;
		
		case 244:
			return Global_262145.f_24094;
		
		case 248:
			return Global_262145.f_24096;
		
		case 239:
			return Global_262145.f_24098;
		
		case 240:
			return Global_262145.f_24099;
		
		case 237:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_23941;
			}
			break;
		
		case 238:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_24052;
			}
			break;
		
		case 249:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 243:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_158())
			{
				return Global_262145.f_26302;
			}
			break;
		
		case 158:
			if (func_171() && !func_158())
			{
				if (func_364(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_158())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_367(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_368(iParam0))
	{
		if (!func_171())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_372(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_110(iParam0))
		{
			*uParam1 = (Global_262145.f_18141 / 100f);
			*uParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24100;
			*uParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24101;
			*uParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24103;
			*uParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24104;
			*uParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24105;
			*uParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24106;
			*uParam2 = Global_262145.f_24106;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_110(iParam0))
	{
		*uParam1 = (Global_262145.f_18142 / 100f);
		*uParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24107;
		*uParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24108;
		*uParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24110;
		*uParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24111;
		*uParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24112;
		*uParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24113;
		*uParam2 = Global_262145.f_24113;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_104();
	if (iVar0 != func_3())
	{
		if (func_5(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_369(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_370(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_1203(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			Global_2537071.f_5124.f_383 = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_370(int iParam0, int iParam1)
{
	if (iParam0 != func_3() && iParam1 != func_3())
	{
		iVar0 = func_280(iParam0);
		if (iVar0 != func_3())
		{
			return iVar0 == func_280(iParam1);
		}
	}
	return 0;
}

bool func_371(int iParam0)
{
	return func_121(iParam0, 20);
}

bool func_372(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_172(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_3();
}

int func_373()
{
	return Local_234.f_10;
}

int func_374()
{
	if (func_373() != func_3())
	{
		if (!func_376() && !func_375())
		{
			return 1;
		}
	}
	return 0;
}

int func_375()
{
	if (func_189(1))
	{
		if (func_373() != func_3())
		{
			if (func_5(func_373(), func_191(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_376()
{
	if (unk_0xD803B885F5E47A62() == func_373())
	{
		return 1;
	}
	return 0;
}

void func_377()
{
	if (!func_854(15))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
		func_830(15);
	}
}

int func_378()
{
	if ((func_1203(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x0178C60FEA5C5A75()) && func_379())
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (unk_0x0F1CCD77290EE12F() && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 99)
	{
		return 1;
	}
	return 0;
}

void func_380()
{
	if (func_913())
	{
		if (func_912())
		{
			if (unk_0x526BC32A660C89E6(func_32()) && unk_0x526BC32A660C89E6(func_390()))
			{
				if (unk_0x4A39EE31BC35EB83(func_31(), func_907()) && unk_0x50B5F6F3C29E9380(func_31(), func_907()))
				{
					unk_0x485AD45ED008282E(func_31(), func_907());
					unk_0x0E85A9945FE5842A(func_31(), func_907());
				}
			}
		}
		if (func_389())
		{
			if (func_60(&(Local_234.f_20)))
			{
				iLocal_192 = (func_14() - func_388(&(Local_234.f_20), 0, 0));
				if (iLocal_192 <= 0)
				{
					if (unk_0x526BC32A660C89E6(func_32()))
					{
						unk_0x98868AF51859FC75(func_31(), 1);
						unk_0x6EEAA5C21760E9DB(func_31(), true);
						unk_0xCCB891029A74A633(func_31(), 1, 0, -1);
						func_433(5);
					}
				}
				if (func_647(1, 1, 1, 0))
				{
					if (!func_688() && !func_687())
					{
						if (iLocal_192 >= 0)
						{
							if (func_18(unk_0x16F2683693E537C9(), func_31(), 1) || (func_432() && func_18(func_287(), func_31(), 1)))
							{
								if ((!func_387() && func_908()) || func_432())
								{
									func_435(2);
									func_384(iLocal_192, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
									func_383();
								}
							}
						}
						else if (func_18(unk_0x16F2683693E537C9(), func_31(), 1) || (func_432() && func_18(func_287(), func_31(), 1)))
						{
							if ((!func_387() && func_908()) || func_432())
							{
								func_384(0, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								func_383();
							}
						}
						if (func_18(unk_0x16F2683693E537C9(), func_31(), 1) || (func_432() && func_18(func_287(), func_31(), 1)))
						{
							if (iLocal_211 == 0)
							{
								if (func_381())
								{
									if (!func_60(&uLocal_221))
									{
										func_59(&uLocal_221, 0, 0);
									}
									else if (func_48(&uLocal_221, 1000, 0))
									{
										iLocal_191 = unk_0xD68EA767274B7444();
										unk_0xCEAA091B490F8407(iLocal_191, "Explosion_Countdown", func_881(), "GTAO_FM_Events_Soundset", false, 25);
										unk_0x6F6BA3FE885E6C91(iLocal_191, "Time", to_float((iLocal_192 / 1000) + 1));
										iLocal_211 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iLocal_211)
		{
			if (!unk_0x8AA6DC470ABA63A2(iLocal_191))
			{
				unk_0x55D0A2DB35045A35(iLocal_191);
				unk_0x43A06902454A1172(iLocal_191);
			}
			iLocal_211 = 0;
		}
	}
}

int func_381()
{
	if (func_134())
	{
		if (func_382(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_382(int iParam0)
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

void func_383()
{
	Global_1378678.f_1130 = 1;
}

void func_384(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_386(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_385(7, iVar0);
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

void func_385(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_386(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_387()
{
	if (func_686(170))
	{
		return 1;
	}
	if (func_688())
	{
		return 1;
	}
	if (!func_647(1, 1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_388(var uParam0, bool bParam1, bool bParam2)
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

int func_389()
{
	if (func_8(6))
	{
		return 0;
	}
	if (func_8(17))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(func_31(), 0))
	{
		return 0;
	}
	return 1;
}

var func_390()
{
	return Local_234.f_22;
}

void func_391()
{
	if (func_387())
	{
		if (func_418())
		{
			func_420();
		}
		return;
	}
	sVar0 = 0;
	switch (func_63())
	{
		case 1:
			switch (func_499(unk_0x57270EE11514DC67()))
			{
				case 0:
					if (func_908() || func_432())
					{
						if (!func_416("GB_AIRF_OT_00"))
						{
							func_415("GB_AIRF_OT_00", 0);
						}
					}
					break;
				
				case 1:
					if (func_908() || func_432())
					{
						if (func_414())
						{
							if ((func_428() || func_413()) && func_434())
							{
								if (!func_416("GB_AIRF_OT_04"))
								{
									func_420();
									func_415("GB_AIRF_OT_04", 0);
								}
							}
							else if (func_428() || func_413())
							{
								if (!func_416("GB_AIRF_OT_01"))
								{
									func_420();
									func_415("GB_AIRF_OT_01", 0);
								}
							}
							else if (func_414())
							{
								if (!func_411("GB_AIRF_OT_02", func_412()))
								{
									func_420();
									func_410("GB_AIRF_OT_02", func_412(), 1, 0);
								}
							}
						}
						else if (!func_416("GB_AIRF_OT_00"))
						{
							func_415("GB_AIRF_OT_00", 0);
						}
					}
					else if (func_430() || func_431())
					{
						sVar0 = func_404(func_7());
						if (!unk_0xEA6BC48857E0AC4C(sVar0))
						{
							if (!func_403("GB_AIRF_OT_07", sVar0))
							{
								func_420();
								func_393("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
				
				case 2:
					if (func_908() || func_432())
					{
						if (func_428() || func_413())
						{
							if (func_392())
							{
								if (!func_416("GB_AIRF_OT_05"))
								{
									func_420();
									func_415("GB_AIRF_OT_05", 0);
								}
							}
							else if (!func_416("GB_AIRF_OT_04"))
							{
								func_420();
								func_415("GB_AIRF_OT_04", 0);
							}
						}
						else if (func_414())
						{
							if (!func_411("GB_AIRF_OT_06", func_412()))
							{
								func_420();
								func_410("GB_AIRF_OT_06", func_412(), 1, 0);
							}
						}
						else if (!func_416("GB_AIRF_OT_00"))
						{
							func_415("GB_AIRF_OT_00", 0);
						}
					}
					else
					{
						sVar0 = func_404(func_7());
						if (!unk_0xEA6BC48857E0AC4C(sVar0))
						{
							if (!func_403("GB_AIRF_OT_07", sVar0))
							{
								func_420();
								func_393("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (func_913())
			{
				if (func_389())
				{
					if (func_908() || func_432())
					{
						if (func_18(unk_0x16F2683693E537C9(), func_31(), 0) || (func_432() && func_18(func_287(), func_31(), 0)))
						{
							if (!func_416("GB_AIR_OT_08"))
							{
								func_415("GB_AIR_OT_08", 0);
							}
						}
						else
						{
							func_420();
						}
					}
					else
					{
						func_420();
					}
				}
				else
				{
					func_420();
				}
			}
			else
			{
				func_420();
			}
			break;
	}
}

bool func_392()
{
	return func_8(3);
}

int func_393(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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
	if (unk_0x7724E025FD444F45(sParam1) > 63)
	{
		return 0;
	}
	if (func_403(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_397();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_396();
	func_395(bParam2);
	func_394();
	return 1;
}

void func_394()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_395(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_396()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

void func_397()
{
	func_399();
	func_398(0);
}

void func_398(bool bParam0)
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

void func_399()
{
	if (!func_402())
	{
	}
	if (func_401())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_400();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_400()
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

int func_401()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_402()
{
	if (!func_401())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_400();
	return unk_0xB165082A56EE6E7F();
}

bool func_403(char* sParam0, char* sParam1)
{
	if (!func_401())
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

char* func_404(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_409(&(Global_1628237[iParam0].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120)
	{
		sVar0 = func_407(iParam0, 0);
		return sVar0;
	}
	if (((func_121(iParam0, 28) || func_121(unk_0xD803B885F5E47A62(), 28)) || func_406(iParam0)) && !func_405(iParam0))
	{
		return func_407(iParam0, 0);
	}
	iVar1 = func_280(iParam0);
	if (iVar1 != func_3())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, -1, 1))
			{
				return func_407(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_3())
	{
		sVar0 = func_409(&(Global_1628237[iVar1].f_11.f_104));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_407(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_405(int iParam0)
{
	Var0 = { func_214(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	if (iParam0 != func_3())
	{
		Var0 = { func_214(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_407(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_114(iParam0, 1))
		{
			return func_408();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_408()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

var func_409(var uParam0)
{
	return uParam0;
}

void func_410(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_393(sParam0, unk_0x6E524813889AECF8(iParam1), bParam3, 1);
}

bool func_411(char* sParam0, int iParam1)
{
	return func_403(sParam0, unk_0x6E524813889AECF8(iParam1));
}

int func_412()
{
	return Local_234.f_8;
}

int func_413()
{
	if (func_432())
	{
		iVar0 = unk_0x83FACCC48B68F9D1(func_287());
		if (func_412() == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_414()
{
	return func_412() != func_3();
}

void func_415(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_416(sParam0))
	{
		return;
	}
	func_397();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_396();
	func_395(bParam1);
	func_394();
}

bool func_416(char* sParam0)
{
	if (!func_401())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_417(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_417(char* sParam0)
{
	if (!func_401())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

int func_418()
{
	if (!func_401())
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return 0;
	}
	return 1;
}

int func_419(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_121(iParam0, 9);
	}
	return 0;
}

void func_420()
{
	if (!func_401())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_397();
}

void func_421()
{
	func_426();
	func_424();
	func_422();
}

void func_422()
{
	if (func_423())
	{
		unk_0x142CC44DB769B57E(&iLocal_171);
	}
}

bool func_423()
{
	return unk_0xE4EDC4B0E92C078B(iLocal_171);
}

void func_424()
{
	if (func_912())
	{
		if (func_425())
		{
			unk_0x142CC44DB769B57E(&iLocal_170);
		}
	}
}

bool func_425()
{
	return unk_0xE4EDC4B0E92C078B(iLocal_170);
}

void func_426()
{
	if (func_913())
	{
		if (func_427())
		{
			unk_0x142CC44DB769B57E(&iLocal_169);
		}
	}
}

bool func_427()
{
	return unk_0xE4EDC4B0E92C078B(iLocal_169);
}

bool func_428()
{
	return func_412() == unk_0xD803B885F5E47A62();
}

void func_429(int iParam0)
{
	vLocal_348[unk_0x57270EE11514DC67()].f_2 = iParam0;
}

bool func_430()
{
	return func_8(4);
}

int func_431()
{
	if (func_912() && func_414())
	{
		if (func_41(unk_0x9539D44F3E4492F6(func_412()), func_907(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

int func_432()
{
	if (func_290(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(func_287()))
		{
			if (unk_0x34BFC6F0CB887BC2(func_287()))
			{
				iVar0 = unk_0x83FACCC48B68F9D1(func_287());
				if (func_53(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_433(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(vLocal_348[unk_0x57270EE11514DC67()].f_1), iParam0);
}

int func_434()
{
	if (func_912())
	{
		if (func_41(unk_0x16F2683693E537C9(), func_907(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

void func_435(int iParam0)
{
	if (func_459())
	{
		switch (iParam0)
		{
			case 0:
				if (!func_854(7))
				{
					if (func_436(82, "GB_AIRF_TXT_01", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_830(7);
					}
				}
				break;
			
			case 1:
				if (!func_854(8))
				{
					if (func_436(82, "GB_AIRF_TXT_02", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_830(8);
					}
				}
				break;
			
			case 2:
				if (!func_854(9))
				{
					if (func_436(82, "GB_AIRF_TXT_03", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_830(9);
					}
				}
				break;
			}
	}
}

int func_436(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_438(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_437(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_437(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_438(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_452();
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
	if (func_451() == 0)
	{
		func_449();
		return 0;
	}
	func_448(Global_21872);
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
		func_447(0);
		func_447(2);
		func_447(1);
	}
	else
	{
		func_452();
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
					func_447(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_447(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_447(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_447(3);
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
		func_452();
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
			if (!func_446())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_445(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_441(1);
			func_445(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_439(uParam0, sParam1);
	return 1;
}

void func_439(var uParam0, char* sParam1)
{
	if (!func_440())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_440()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_3())
	{
		return 0;
	}
	if (func_371(unk_0xD803B885F5E47A62()))
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

void func_441(int iParam0)
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
		if (func_444(14))
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
								func_443(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_443(&(Global_7363[iVar1]));
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
								func_443(&(Global_7363[iVar1]));
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
								func_443(&(Global_7363[iVar1]));
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
								func_443(&(Global_7363[iVar1]));
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
								func_443(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_442(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

void func_442(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_443(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_443(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_443(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_443(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_443(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_443(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_444(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_445(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_446()
{
	return Global_1312877;
}

void func_447(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_448(int iParam0)
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

void func_449()
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
		if (!func_450(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_450(struct<6> Param0, struct<6> Param6)
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

int func_451()
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
			if (!func_450(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
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

void func_452()
{
	if (func_444(14))
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
		Global_19486 = func_453();
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

var func_453()
{
	func_454();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_454()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_457(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_456(unk_0x16F2683693E537C9());
			if (func_455(iVar0) && (!func_444(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_455(Global_111638.f_2358.f_539.f_4321))
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

bool func_455(int iParam0)
{
	return iParam0 < 3;
}

int func_456(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_457(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_457(int iParam0)
{
	if (func_455(iParam0))
	{
		return func_458(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_458(int iParam0)
{
	return Global_1798[iParam0];
}

int func_459()
{
	if (func_1203(unk_0xD803B885F5E47A62(), 1, 1))
	{
		return 1;
	}
	return 1;
}

void func_460(int iParam0)
{
	if (func_466())
	{
		if (!func_465(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					if (func_464())
					{
						func_116("GB_AIRF_HT_00", -1);
					}
					else
					{
						func_116("GB_AIRF_HT_01", -1);
					}
					func_112(1);
					func_463(iParam0);
					break;
				
				case 7:
					func_116("GB_AIRF_HT_03", -1);
					func_112(1);
					func_463(iParam0);
					break;
				
				case 8:
					func_116("GB_AIRF_HT_04", -1);
					func_112(1);
					func_463(iParam0);
					break;
				
				case 9:
					if (func_414())
					{
						func_462("GB_AIRF_HT_05", unk_0x6E524813889AECF8(func_412()), func_262(func_412(), -2, 0, 0, 0), -1);
						func_112(1);
						func_463(iParam0);
					}
					break;
				
				case 11:
					func_463(iParam0);
					break;
				
				case 12:
					func_116("GB_AIRF_HT_06", -1);
					func_112(1);
					func_463(iParam0);
					break;
				
				case 10:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						func_461("GB_AIRF_HT_02", sVar0, func_262(func_7(), -2, 0, 0, 0), -1);
						func_112(1);
						func_463(iParam0);
					}
					break;
				}
			}
	}
}

void func_461(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_462(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_463(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_166, iParam0);
}

bool func_464()
{
	return unk_0xD803B885F5E47A62() == func_7();
}

bool func_465(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_166, iParam0);
}

int func_466()
{
	if ((((!func_467() && !unk_0x798A3F1296751F46()) && !unk_0x0178C60FEA5C5A75()) && func_1203(unk_0xD803B885F5E47A62(), 1, 1)) && !func_134())
	{
		return 1;
	}
	return 0;
}

bool func_467()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_468(int iParam0)
{
	if (func_492())
	{
		if (!func_491(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					unk_0xA37A90C62806D848(1);
					func_490(86, "GB_AIRF_BMT_00", "GB_AIRF_BMS_00", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 1:
					unk_0xA37A90C62806D848(1);
					func_490(87, "GB_WINNER", "GB_AIRF_BMS_01", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 2:
					unk_0xA37A90C62806D848(1);
					func_490(89, "GB_WORK_OVER", "GB_AIRF_BMS_02", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 12:
					unk_0xA37A90C62806D848(1);
					func_490(87, "GB_WORK_OVER", "GB_AIRF_BMS_13", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 3:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						unk_0xA37A90C62806D848(1);
						func_487(86, "GB_AIRF_BMT_00", "GB_AIRF_BMS_03", sVar0, func_262(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
						func_489(iParam0);
					}
					break;
				
				case 4:
					unk_0xA37A90C62806D848(1);
					func_490(87, "GB_WINNER", "GB_AIRF_BMS_04", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 5:
					unk_0xA37A90C62806D848(1);
					func_490(87, "GB_WINNER", "GB_AIRF_BMS_05", 1, -1, 2, 1, 0);
					func_489(iParam0);
					break;
				
				case 6:
					if (func_373() != func_3())
					{
						unk_0xA37A90C62806D848(1);
						func_469(88, func_373(), -1, "GB_AIRF_BMS_06", "GB_WORK_OVER", 1, -1, 2, 0);
						func_489(iParam0);
					}
					break;
				
				case 7:
					if (func_373() != func_3())
					{
						sVar0 = func_404(func_373());
						if (!unk_0xEA6BC48857E0AC4C(sVar0))
						{
							unk_0xA37A90C62806D848(1);
							func_487(86, "GB_WORK_OVER", "GB_AIRF_BMS_07", sVar0, func_262(func_373(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
							func_489(iParam0);
						}
					}
					break;
				
				case 8:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						unk_0xA37A90C62806D848(1);
						func_487(86, "GB_WORK_OVER", "GB_AIRF_BMS_08", sVar0, func_262(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
						func_489(iParam0);
					}
					break;
				
				case 9:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						unk_0xA37A90C62806D848(1);
						func_487(86, "GB_WINNER", "GB_AIRF_BMS_09", sVar0, func_262(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
						func_489(iParam0);
					}
					break;
				
				case 10:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						unk_0xA37A90C62806D848(1);
						func_487(86, "GB_WORK_OVER", "GB_AIRF_BMS_10", sVar0, func_262(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
						func_489(iParam0);
					}
					break;
				
				case 13:
					sVar0 = func_404(func_7());
					if (!unk_0xEA6BC48857E0AC4C(sVar0))
					{
						unk_0xA37A90C62806D848(1);
						func_487(86, "GB_WORK_OVER", "GB_AIRF_BMS_14", sVar0, func_262(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
						func_489(iParam0);
					}
					break;
				
				case 11:
					unk_0xA37A90C62806D848(1);
					if (func_908())
					{
						func_490(87, "GB_WORK_OVER", "GB_AIRF_BMS_11", 1, -1, 2, 1, 0);
						func_489(iParam0);
					}
					else
					{
						func_490(87, "GB_WORK_OVER", "GB_AIRF_BMS_12", 1, -1, 2, 1, 0);
						func_489(iParam0);
					}
					break;
				}
			}
	}
}

int func_469(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_486(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_484(&(Var0.f_69), iParam8);
	}
	return func_470(&Var0);
}

int func_470(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_483(uParam0, uParam0->f_17);
	func_480(uParam0);
	if (func_239())
	{
		func_480(uParam0);
	}
	if (func_479(uParam0->f_1))
	{
		func_472();
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
				func_472();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_484(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_471(uParam0->f_69, 128))
			{
				if (func_382(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_484(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_471(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_472()
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
	func_473();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_473()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_477(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_474(&(Global_2439138.f_3047.f_1));
}

void func_474(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_476(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_475(0);
}

void func_475(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_476(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_477(var uParam0)
{
	func_478(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_478(var uParam0)
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

int func_479(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_480(var uParam0)
{
	if (func_482(uParam0->f_1))
	{
		uParam0->f_72 = func_481();
	}
}

int func_481()
{
	return 21;
}

int func_482(int iParam0)
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

void func_483(var uParam0, int iParam1)
{
	if (func_482(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_3() || !func_1203(iParam1, 0, 1))
	{
		return;
	}
	if (func_382(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_262(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_484(var uParam0, int iParam1)
{
	func_485(uParam0, iParam1);
}

void func_485(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_486(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_3();
	uParam1->f_18 = func_3();
	uParam1->f_19 = func_3();
	uParam1->f_20 = func_3();
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

int func_487(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = func_3();
	iVar1 = func_3();
	iVar2 = func_3();
	return func_488(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_488(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_486(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_484(&(Var0.f_69), 4);
	return func_470(&Var0);
}

void func_489(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_167, iParam0);
}

int func_490(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_486(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_484(&(Var0.f_69), iParam7);
	}
	return func_470(&Var0);
}

bool func_491(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_167, iParam0);
}

int func_492()
{
	if ((func_1203(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x798A3F1296751F46()) && !func_467())
	{
		return 1;
	}
	return 0;
}

void func_493(int iParam0)
{
	Global_1315689 = iParam0;
}

void func_494(bool bParam0)
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

void func_495(bool bParam0)
{
	if (bParam0)
	{
		if (!func_121(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_127(unk_0xD803B885F5E47A62()) != 0)
			{
				func_135(9);
			}
		}
	}
	else if (func_121(unk_0xD803B885F5E47A62(), 9))
	{
		func_496(9);
	}
}

void func_496(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_4), iParam0);
}

void func_497()
{
	if (!func_498(unk_0xD803B885F5E47A62()))
	{
		func_135(25);
	}
}

bool func_498(int iParam0)
{
	return func_121(iParam0, 25);
}

int func_499(int iParam0)
{
	return vLocal_348[iParam0].f_2;
}

void func_500()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_233, 3))
	{
		if (iLocal_190 > 35000)
		{
			if (func_908())
			{
				if (!func_56())
				{
					if (Local_234.f_6 == 0)
					{
						if (func_8(12))
						{
							func_505(1);
						}
						if (func_434())
						{
							func_505(2);
						}
					}
					else if (func_389())
					{
						if (func_504())
						{
							func_505(3);
						}
						else
						{
							func_501();
						}
					}
					else
					{
						func_501();
					}
				}
				else if (Local_234.f_6 != 0)
				{
					if (func_389())
					{
						if (func_504())
						{
							func_505(3);
						}
						else
						{
							func_501();
						}
					}
					else
					{
						func_501();
					}
				}
			}
		}
		else if ((func_908() || func_371(unk_0xD803B885F5E47A62())) || func_854(11))
		{
			switch (iLocal_232)
			{
				case 0:
					if ((func_499(unk_0x57270EE11514DC67()) == 0 || func_499(unk_0x57270EE11514DC67()) == 1) || func_499(unk_0x57270EE11514DC67()) == 2)
					{
						if (iLocal_190 <= 35000 && iLocal_190 >= 29000)
						{
							if (unk_0x13896FDECC859926("APT_PRE_COUNTDOWN_STOP"))
							{
								unk_0xC92DB9682A650680("APT_PRE_COUNTDOWN_STOP");
								iLocal_232 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_233, 1))
					{
						if (iLocal_190 <= 30000)
						{
							if (unk_0x13896FDECC859926("APT_COUNTDOWN_30S"))
							{
								unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
								unk_0xBEF52C1D400C0A44(0);
								unk_0xC92DB9682A650680("APT_COUNTDOWN_30S");
								unk_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL");
								unk_0x5D96D8530B3D0904(&iLocal_233, 1);
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(iLocal_233, 2))
					{
						if (iLocal_190 <= 27000)
						{
							unk_0xBEF52C1D400C0A44(1);
							unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
							unk_0x5D96D8530B3D0904(&iLocal_233, 2);
							iLocal_232 = 2;
						}
					}
					break;
				
				case 2:
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_233, 3))
					{
						if (iLocal_190 <= 0)
						{
							unk_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S");
							if (unk_0x13896FDECC859926("APT_FADE_IN_RADIO"))
							{
								unk_0xC92DB9682A650680("APT_FADE_IN_RADIO");
								unk_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S_KILL");
								unk_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL");
								unk_0x5D96D8530B3D0904(&iLocal_233, 3);
							}
						}
						else if (Local_234.f_5 != 0)
						{
							if (unk_0x13896FDECC859926("APT_FADE_IN_RADIO"))
							{
								unk_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S");
								unk_0xC92DB9682A650680("APT_COUNTDOWN_30S_KILL");
								unk_0xC92DB9682A650680("APT_FADE_IN_RADIO");
								unk_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL");
								unk_0x5D96D8530B3D0904(&iLocal_233, 3);
							}
						}
					}
					break;
				}
			}
	}
}

void func_501()
{
	if (!func_503(7))
	{
		if (func_503(0))
		{
			if (Local_234.f_6 == 1)
			{
				func_505(4);
			}
			else
			{
				func_505(5);
			}
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		}
		func_502(7);
	}
}

void func_502(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_168, iParam0);
}

bool func_503(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_168, iParam0);
}

int func_504()
{
	if (func_913() && func_26(func_31()))
	{
		if (func_18(unk_0x16F2683693E537C9(), func_31(), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_505(int iParam0)
{
	func_507();
	if (!func_503(iParam0))
	{
		unk_0xC92DB9682A650680(func_506(iParam0));
		func_502(iParam0);
	}
}

char* func_506(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIRFREIGHT_START";
		
		case 2:
			return "EXEC1_AIRFREIGHT_DELIVERING_SMA";
		
		case 3:
			return "EXEC1_AIRFREIGHT_SELF_DESTRUCT_SMA";
		
		case 4:
			return "EXEC1_AIRFREIGHT_STOP";
		
		case 5:
			return "EXEC1_AIRFREIGHT_FAIL";
		
		case 6:
			return "EXEC1_AIRFREIGHT_ATTACKERS_START";
		
		default:
	}
	return "";
}

void func_507()
{
	if (!func_503(0))
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
		func_502(0);
	}
}

void func_508()
{
	if (func_913())
	{
		if (!func_911())
		{
			if (func_908())
			{
				if (func_1203(unk_0xD803B885F5E47A62(), 1, 1) && func_18(unk_0x16F2683693E537C9(), func_31(), 0))
				{
					if (unk_0xA30B8362589C124A(func_31(), -1, 0) == unk_0x16F2683693E537C9())
					{
						if (!func_9(unk_0xFB04705FDFDCE640(), 1))
						{
							func_433(1);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 417, true);
							if (Global_2537071.f_5912 == 0)
							{
								Global_2537071.f_5912 = 1;
							}
						}
					}
					if (func_219(func_511(unk_0xD803B885F5E47A62(), 1), 0) >= func_510(1))
					{
						unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), true);
					}
				}
				else
				{
					if (func_9(unk_0xFB04705FDFDCE640(), 1))
					{
						func_509(1);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 417, false);
					}
					if (Global_2537071.f_5912 == 1)
					{
						Global_2537071.f_5912 = 0;
					}
				}
			}
		}
	}
}

void func_509(int iParam0)
{
	unk_0x0674E58A79778E99(&(vLocal_348[unk_0x57270EE11514DC67()].f_1), iParam0);
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2865 > -1)
			{
				return Global_262145.f_2865;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2866 > -1)
			{
				return Global_262145.f_2866;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2867 > -1)
			{
				return Global_262145.f_2867;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case 79:
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
			break;
		
		case 1185:
			return 11;
			break;
	}
	return 0;
}

int func_511(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_222(iParam0);
}

void func_512()
{
	if (func_912())
	{
		if (!func_854(10))
		{
			if (!func_8(11))
			{
				if (func_41(unk_0x16F2683693E537C9(), func_907(), 1) <= 150f)
				{
					func_830(10);
				}
			}
		}
		else if (func_41(unk_0x16F2683693E537C9(), func_907(), 1) > 150f || func_8(11))
		{
			func_513(10);
		}
	}
}

void func_513(int iParam0)
{
	unk_0x0674E58A79778E99(&iLocal_165, iParam0);
}

void func_514()
{
	if (func_536())
	{
		if (func_912() && !func_535())
		{
			if (func_499(unk_0x57270EE11514DC67()) == 1)
			{
				if (func_854(10))
				{
					if (iLocal_198 == 0 || func_534())
					{
						iVar0 = unk_0x09AC81E49EA267F7(0, 2);
						func_528(10, 0, 0, 0, 0);
						func_519(vLocal_200[iVar0], fLocal_207[iVar0], fLocal_210, 1, 15f, 0, 0, 15f, 1, 1, 0, 1, -1082130432);
						func_518(unk_0x68F4C0EC296D3901(func_907(), true), 1, 0);
						iLocal_198 = 1;
					}
				}
				else if (iLocal_198)
				{
					func_517();
					func_515();
					iLocal_198 = 0;
				}
			}
			else if (iLocal_198)
			{
				func_517();
				func_515();
				iLocal_198 = 0;
			}
		}
	}
}

void func_515()
{
	if (Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
	{
		func_516();
	}
}

void func_516()
{
	if (unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_517()
{
	if (Global_2405072.f_487.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_518(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

void func_519(vector3 vParam0, var uParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	if (vmag(vParam0) == 0f)
	{
		return;
	}
	if (!unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		Global_2413899.f_6 = unk_0x0D0A574C76D769AC();
	}
	Var0.f_6 = Global_2413899.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_520(unk_0xD803B885F5E47A62()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413899 = { Var0 };
}

int func_520(int iParam0)
{
	if (((func_522(iParam0, 1) || func_133(iParam0)) || func_108(iParam0, 0)) || func_521(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)
{
	if (!func_1203(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

bool func_522(int iParam0, bool bParam1)
{
	if (func_527() != 0)
	{
		return func_526(iParam0) != 0;
	}
	return func_523(iParam0, bParam1, 0);
}

int func_523(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_524(iParam0))
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

bool func_524(int iParam0)
{
	return func_525(iParam0);
}

bool func_525(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_526(int iParam0)
{
	if (func_1203(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_527()
{
	return Global_30768;
}

void func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_3())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16].f_404, 0) && func_529())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_529()
{
	if ((((((func_107(unk_0xD803B885F5E47A62()) == 229 || func_107(unk_0xD803B885F5E47A62()) == 191) || func_533()) || func_532()) || func_531(unk_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_530(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_530(int iParam0)
{
	if (func_130(iParam0))
	{
		return 1;
	}
	if (func_371(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)
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

var func_532()
{
	return Global_1574405;
}

int func_533()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_534()
{
	if (!func_1203(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (iLocal_199 == 0)
		{
			iLocal_199 = 1;
		}
	}
	else if (func_379())
	{
		if (iLocal_199 == 1)
		{
			iLocal_199 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_535()
{
	return unk_0x437347B10A200C4B(func_907(), 0);
}

int func_536()
{
	if (Local_234.f_11 == 3)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	if (!func_908() && !func_432())
	{
		if (func_430())
		{
			if (!func_854(5))
			{
				if (func_854(13))
				{
					func_497();
					func_830(5);
				}
				if (func_854(12))
				{
					func_497();
					func_830(5);
				}
				if (func_854(14))
				{
					func_497();
					func_830(5);
				}
				if (func_41(unk_0x16F2683693E537C9(), func_881(), 1) <= 100f)
				{
					func_497();
					func_830(5);
				}
			}
			if (!func_371(unk_0xD803B885F5E47A62()))
			{
				if (!func_854(11))
				{
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && unk_0xE5DBF9B6126856CA(Local_234.f_14))
					{
						if (func_41(unk_0x16F2683693E537C9(), func_881(), 0) < 500f)
						{
							func_830(11);
							func_135(19);
							func_493(1);
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && unk_0xE5DBF9B6126856CA(Local_234.f_14))
				{
					if (func_41(unk_0x16F2683693E537C9(), func_881(), 0) > 700f)
					{
						func_513(11);
						func_496(19);
						func_493(0);
					}
				}
				if (func_854(13))
				{
					func_538(0);
				}
				if (func_854(12))
				{
					func_538(0);
				}
				if (func_854(14))
				{
					func_538(0);
				}
			}
		}
	}
}

void func_538(int iParam0)
{
	if (!func_371(unk_0xD803B885F5E47A62()))
	{
		if (iParam0 || func_127(unk_0xD803B885F5E47A62()) != 0)
		{
			func_135(20);
			func_539(func_541());
			if (func_133(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 8))
				{
					unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_1), 8);
				}
			}
		}
	}
}

void func_539(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_540()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_540()
{
	iVar0 = 0;
	return iVar0;
}

int func_541()
{
	iVar0 = func_107(unk_0xD803B885F5E47A62());
	if (func_543(iVar0) == 0)
	{
		return -1;
	}
	if (func_149(iVar0))
	{
		return 65;
	}
	if (func_157(iVar0))
	{
		return 66;
	}
	if (func_542(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_544()
{
	if (func_908() || func_432())
	{
		func_391();
		func_559();
		func_547();
		func_545();
	}
	else
	{
		switch (func_127(unk_0xD803B885F5E47A62()))
		{
			case 0:
				func_420();
				break;
			
			case 1:
			case 2:
				func_547();
				break;
			
			case 3:
				func_547();
				func_545();
				func_391();
				func_559();
				break;
			}
	}
}

void func_545()
{
	if (func_908() || func_432())
	{
		if (func_913() && !func_414())
		{
			func_546(func_881(), iLocal_184, iLocal_185, iLocal_186);
		}
		if (func_912() && !func_392())
		{
			func_546(func_907(), iLocal_181, iLocal_182, iLocal_183);
		}
		if (func_8(11))
		{
			unk_0x922D0EFFF8F2403B(1, func_39(), 0f, 0f, 0f, 0f, 0f, 0f, 20f, 20f, 2f, iLocal_187, iLocal_188, iLocal_189, 100, 0, 0, 2, 0, 0, 0, false);
		}
	}
	else if (func_913() && func_430())
	{
		func_546(func_881(), iLocal_178, iLocal_179, iLocal_180);
	}
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3)
{
	fVar6 = 0,5f;
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar0, &vVar3);
	fVar7 = ((vVar3.z - vVar0.z) / 2f);
	fVar8 = (vVar3.z - fVar7);
	if (fVar6 <= (fVar8 + 0,1f))
	{
		fVar6 = (fVar8 + 0,4f);
	}
	unk_0x922D0EFFF8F2403B(2, unk_0x68F4C0EC296D3901(iParam0, true) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_547()
{
	if (func_387())
	{
		return;
	}
	switch (func_499(unk_0x57270EE11514DC67()))
	{
		case 0:
			if (func_908() || func_432())
			{
				func_553();
				if (!func_414())
				{
					func_552(1);
				}
			}
			else if (func_431() || func_430())
			{
				func_552(0);
			}
			break;
		
		case 1:
			if (func_908() || func_432())
			{
				func_553();
				func_551(1);
			}
			else if (func_431() || func_430())
			{
				func_552(0);
			}
			break;
		
		case 2:
			if (func_908() || func_432())
			{
				func_553();
				if (func_392())
				{
					func_424();
					func_548();
				}
				else if (func_428() || func_413())
				{
					func_422();
					func_551(1);
				}
			}
			else
			{
				func_552(0);
			}
			break;
	}
}

void func_548()
{
	if (!func_423())
	{
		iLocal_171 = unk_0x6CC513A908911CF0(Local_234.f_108);
		func_549(&iLocal_171, 12);
	}
}

void func_549(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_550(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

int func_550(int iParam0)
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

void func_551(bool bParam0)
{
	if (func_912())
	{
		if (!func_425())
		{
			iLocal_170 = unk_0x5C3B41825F6AC5A0(func_907());
			if (bParam0)
			{
				unk_0xBC8E0A7390523199(iLocal_170, 68);
				func_549(&iLocal_170, 18);
			}
			else
			{
				func_549(&iLocal_170, 6);
			}
			unk_0xDC5B2F9D0CCE3A10(iLocal_170, "GB_AIRF_CONTAINER");
			unk_0x2A065371C9D96655(iLocal_170, 10);
			unk_0x6ABCCE651368DB93(iLocal_170, false);
		}
	}
}

void func_552(bool bParam0)
{
	if (func_913())
	{
		if (!func_427())
		{
			iLocal_169 = unk_0x5C3B41825F6AC5A0(func_881());
			unk_0xBC8E0A7390523199(iLocal_169, 481);
			unk_0xDC5B2F9D0CCE3A10(iLocal_169, "GB_AIRF_CARGOBOB");
			unk_0x2A065371C9D96655(iLocal_169, 10);
			unk_0x6ABCCE651368DB93(iLocal_169, false);
			if (bParam0)
			{
				func_549(&iLocal_169, 9);
			}
			else
			{
				func_549(&iLocal_169, 6);
			}
			if (!func_854(17))
			{
				unk_0x0EC848EFF66DF45A(iLocal_169, 7000);
				func_830(17);
			}
		}
		else if (unk_0x301901B13DC3365B(iLocal_169) != 481)
		{
			unk_0xBC8E0A7390523199(iLocal_169, 481);
		}
	}
}

void func_553()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xE4EDC4B0E92C078B(uLocal_172[iVar0]))
		{
			if (func_21(iVar0))
			{
				if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)) && !unk_0x437347B10A200C4B(func_20(iVar0), 0))
				{
					if (Local_234.f_31[iVar0].f_9 == 1 && func_41(unk_0x16F2683693E537C9(), func_20(iVar0), 0) <= 100f)
					{
						uLocal_172[iVar0] = func_558(func_20(iVar0), 1, 145);
						unk_0xBC8E0A7390523199(uLocal_172[iVar0], 270);
						func_549(&(uLocal_172[iVar0]), 6);
					}
				}
			}
		}
		else if (func_21(iVar0))
		{
			if (((unk_0xEB6A8945D1AC98A1(func_20(iVar0)) || unk_0x437347B10A200C4B(func_20(iVar0), 0)) || Local_234.f_31[iVar0].f_9 == 0) || func_41(unk_0x16F2683693E537C9(), func_20(iVar0), 0) > 100f)
			{
				unk_0x142CC44DB769B57E(&(uLocal_172[iVar0]));
			}
		}
		else
		{
			unk_0x142CC44DB769B57E(&(uLocal_172[iVar0]));
		}
		iVar0++;
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_177))
	{
		if (func_22() && !func_557())
		{
			if (func_21(2))
			{
				if (func_18(func_20(2), func_19(), 1))
				{
					iLocal_177 = func_554(func_72(), 1, 0);
					unk_0xBC8E0A7390523199(iLocal_177, 353);
					func_549(&iLocal_177, 6);
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(iLocal_177))
		{
			unk_0x142CC44DB769B57E(&iLocal_177);
		}
	}
	else
	{
		if (!func_22())
		{
			unk_0x142CC44DB769B57E(&iLocal_177);
		}
		if (func_22() && (!func_26(func_19()) || !unk_0xDF1306B443CD3D15(func_19(), 0)))
		{
			unk_0x142CC44DB769B57E(&iLocal_177);
		}
	}
}

int func_554(int iParam0, bool bParam1, bool bParam2)
{
	return func_555(iParam0, !bParam1, bParam2);
}

int func_555(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_556(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_556(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_556(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_556(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_557()
{
	return unk_0x437347B10A200C4B(func_72(), 0);
}

int func_558(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_555(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

void func_559()
{
	if (func_387())
	{
		return;
	}
	if (func_60(&(Local_234.f_2)))
	{
		iLocal_190 = (func_49() - func_388(&(Local_234.f_2), 0, 0));
		if (iLocal_190 < func_49())
		{
			if (iLocal_190 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			if (((func_908() || func_432()) || func_430()) || func_431())
			{
				func_383();
				if (iLocal_190 > 0)
				{
					func_384(iLocal_190, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_384(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				if ((func_908() || func_432()) && func_8(12))
				{
					func_560(Local_234.f_13, "GB_AIRF_CONT_VAL", -1, 1, 5, 0, "HUD_CASH", 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
	}
}

void func_560(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (func_235(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_386(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_385(3, iVar0);
		Global_1378678.f_2764[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = iParam3;
		Global_1378678.f_2764.f_172[iVar0] = iParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

void func_561(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam5)
	{
		iVar0 = func_646(unk_0xD803B885F5E47A62());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_191() != func_3())
		{
			Global_1674635.f_2 = func_645(func_191());
			Global_1674635.f_3 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = unk_0xDD0E7998AE8AD485();
		Global_1674635.f_28 = func_643(unk_0xD803B885F5E47A62());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_642(func_113(1));
		}
	}
	else
	{
		iVar0 = func_107(unk_0xD803B885F5E47A62());
	}
	if (iParam2 || func_110(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_157(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_641(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_99(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_148(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_191() != func_3())
		{
			Global_1674374.f_4 = func_645(func_191());
			Global_1674374.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = unk_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_185(iParam1);
			Global_1674374.f_41 = func_640();
			Global_1674374.f_42 = func_340(unk_0xD803B885F5E47A62(), iParam1);
			Global_1674374.f_44 = func_639(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_171() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_146(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_638(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_142(unk_0xD803B885F5E47A62()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674491.f_1 = 2;
				break;
			
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_191() != func_3())
		{
			Global_1674491.f_4 = func_645(func_191());
			Global_1674491.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_118(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_191() != func_3())
		{
			Global_1674428.f_4 = func_645(func_191());
			Global_1674428.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_145(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_191() != func_3())
		{
			Global_1674535.f_4 = func_645(func_191());
			Global_1674535.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_636(func_156(), 5);
		Global_1674535.f_28 = func_642(func_635(unk_0xD803B885F5E47A62()));
		Global_1674535.f_29 = func_154(6107, -1, 0);
		Global_1674535.f_30 = func_154(6103, -1, 0);
		Global_1674535.f_31 = func_154(6104, -1, 0);
		Global_1674535.f_32 = func_154(6106, -1, 0);
		Global_1674535.f_33 = func_154(6105, -1, 0);
		Global_1674535.f_34 = func_154(6108, -1, 0);
		Global_1674535.f_7 = func_633();
		Global_1674535.f_51 = func_642(bParam4);
	}
	else if (func_144(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_191() != func_3())
		{
			Global_1674589.f_4 = func_645(func_191());
			Global_1674589.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_154(6157, -1, 0);
		Global_1674589.f_25 = func_154(6162, -1, 0);
		Global_1674589.f_26 = func_154(6163, -1, 0);
		Global_1674589.f_27 = func_642((((func_632() || func_631()) || func_630()) || func_629(unk_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_154(6164, -1, 0);
		Global_1674589.f_29 = func_642(func_628());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_633();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_140(func_141(unk_0xD803B885F5E47A62()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_633();
		if (func_191() != func_3())
		{
			Global_1674725.f_4 = func_645(func_191());
			Global_1674725.f_5 = func_644(func_191());
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_191() != -1)
		{
			Global_1674725.f_17 = func_627(func_191());
		}
		Global_1674725.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674725.f_28 = func_643(unk_0xD803B885F5E47A62());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_642(func_113(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_633();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_191() != func_3())
		{
			Global_1674671.f_4 = func_645(func_191());
			Global_1674671.f_5 = func_644(func_191());
		}
		Global_1674671.f_28 = func_643(unk_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_626(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_610(unk_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_609(unk_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_642(func_608(unk_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_642(func_607(unk_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_642(func_606(unk_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_642(func_605(unk_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_604(unk_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_603(unk_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_602(unk_0xD803B885F5E47A62());
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_642(func_113(1));
		}
		if (func_104() != func_3())
		{
			func_190(func_104(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674671.f_28 = func_643(unk_0xD803B885F5E47A62());
	}
	else if (func_138(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_142(unk_0xD803B885F5E47A62());
		Global_1674809.f_2 = func_601();
		Global_1674809.f_3 = func_600();
		Global_1674809.f_4 = func_645(func_191());
		Global_1674809.f_5 = func_644(func_191());
		Global_1674809.f_7 = func_633();
		Global_1674809.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_191() != -1)
		{
			Global_1674809.f_17 = func_627(func_191());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_642(func_599(unk_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_597(21, -1);
	}
	else if (func_137(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_645(func_191());
		Global_1674884.f_7 = func_644(func_191());
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_642(func_113(1));
		}
		if (func_191() != -1)
		{
			Global_1674884.f_9 = func_627(func_191());
		}
		Global_1674884.f_10 = func_633();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_191() != func_3())
		{
			Global_1674356 = func_645(func_191());
			Global_1674356.f_1 = func_644(func_191());
		}
		Global_1674356.f_5 = unk_0xDD0E7998AE8AD485();
		Global_1674356.f_13 = func_596();
		Global_1674356.f_15 = 0;
		if (func_189(1))
		{
			if (func_104() == func_191())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_595())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_594() || func_593()) || func_592()) || func_591()) || func_590()) || func_589(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_587(func_588(-1881846085)))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_570(func_586(1147287684)))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_569(unk_0xD803B885F5E47A62()) || func_568(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_567(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_566(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_565(0, unk_0xD803B885F5E47A62()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_564(unk_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_564(unk_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_563(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_562(unk_0xD803B885F5E47A62(), iVar2);
				if (func_337(unk_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_337(unk_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_337(unk_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_562(int iParam0, int iParam1)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_329(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

int func_563(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_564(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != func_3())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_565(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_565(int iParam0, int iParam1)
{
	if (iParam1 == func_3())
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

bool func_566(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 7);
}

bool func_567(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 8);
}

bool func_568(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_569(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 10);
}

int func_570(int iParam0)
{
	if (func_597(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_584(11));
		func_583(iVar1, &iVar0, 1);
		iVar2 = func_597(func_572(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_154(func_571(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_571(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_572(int iParam0)
{
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_584(iVar0) && iParam0 < func_573(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_582(iParam0);
		return func_581(iVar0);
	}
	return (func_574(iParam0, -1) * iParam0 + 1);
}

int func_574(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_577(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_576(iParam1))
			{
				return 0;
			}
			else if (func_575(iParam1, -1))
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

int func_575(int iParam0, int iParam1)
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

int func_576(int iParam0)
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

int func_577(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_578(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_578(unk_0xD803B885F5E47A62(), 0))
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

bool func_578(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_3())
	{
		if (!func_580(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_1590373)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373].f_195, 24) || func_579(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 24);
}

int func_579(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_580(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_582(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_583(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_584(int iParam0)
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
		iVar0 = func_582(iParam0);
		return func_585(iVar0);
	}
	return (func_574(iParam0, -1) * iParam0);
}

int func_585(int iParam0)
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

int func_586(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1180875963:
			return 0;
			break;
		
		case 682434785:
			return 1;
			break;
		
		case -1912017790:
			return 2;
			break;
		
		case -1649536104:
			return 3;
			break;
		
		case 989294410:
			return 4;
			break;
		
		case -827162039:
			return 5;
			break;
		
		case -312295511:
			return 5;
			break;
		
		case 941494461:
			return 6;
			break;
		
		case -1590337689:
			return 7;
			break;
	}
	return -1;
}

int func_587(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_583(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_154(func_571(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_589(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1590535[iParam0].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_590()
{
	return func_154(6542, -1, 0) != 0;
}

bool func_591()
{
	return func_154(6163, -1, 0) != 0;
}

bool func_592()
{
	return func_154(5380, -1, 0) != 0;
}

bool func_593()
{
	return func_154(3828, -1, 0) != 0;
}

bool func_594()
{
	return func_154(3223, -1, 0) != 0;
}

bool func_595()
{
	return func_154(5379, -1, 0) != 0;
}

int func_596()
{
	iVar0 = func_191();
	if (iVar0 != func_3())
	{
		return Global_1628237[iVar0].f_11.f_98;
	}
	return 0;
}

int func_597(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_156();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_582(iParam0);
		if (iVar1 == 0 && func_154(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_598(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_643(unk_0xD803B885F5E47A62()) && iVar1 == 1)
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

bool func_598(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_154(7207, iParam0, 0) != 0;
}

int func_599(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_600()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_601()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_602(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 12);
	}
	return 0;
}

int func_603(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_604(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 11);
	}
	return 0;
}

bool func_605(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 4);
}

bool func_606(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 3);
}

bool func_607(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 2);
}

bool func_608(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 1);
}

bool func_609(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 31);
}

int func_610(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_3() || !func_625(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_620(iParam0, iParam2);
		
		case 1:
			return func_618(iParam0, iParam2);
		
		case 3:
			return func_617(iParam0);
		
		case 2:
			return func_612(iParam0, iParam2);
		
		case 4:
			return func_611(iParam0);
		
		default:
	}
	return 0;
}

bool func_611(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 6);
}

int func_612(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_616(iParam0);
		
		case 11:
			return func_615(iParam0);
		
		case 12:
			return func_614(iParam0);
		
		case 13:
			return func_613(iParam0);
		
		default:
	}
	return 0;
}

bool func_613(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_614(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_615(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_616(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

bool func_617(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_618(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_619(iParam0);
		
		case 6:
			return func_608(iParam0);
		
		case 7:
			return func_607(iParam0);
		
		case 8:
			return func_606(iParam0);
		
		case 9:
			return func_605(iParam0);
		
		default:
	}
	return 0;
}

bool func_619(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 0);
}

int func_620(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_624(iParam0);
		
		case 1:
			return func_623(iParam0);
		
		case 2:
			return func_622(iParam0);
		
		case 3:
			return func_621(iParam0);
		
		case 4:
			return func_609(iParam0);
		
		default:
	}
	return 0;
}

bool func_621(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 10);
}

bool func_622(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 9);
}

bool func_623(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 8);
}

bool func_624(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_4, 7);
}

bool func_625(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_626(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_610(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_610(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_610(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_610(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_627(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

bool func_628()
{
	return func_154(6156, -1, 0) != 0;
}

int func_629(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

bool func_630()
{
	return func_154(6164, -1, 0) == 3;
}

bool func_631()
{
	return func_154(6164, -1, 0) == 2;
}

bool func_632()
{
	return func_154(6164, -1, 0) == 1;
}

int func_633()
{
	if (func_158())
	{
		return 4;
	}
	else if (func_171())
	{
		if (func_364(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_113(1))
	{
		iVar0 = func_634(unk_0xD803B885F5E47A62());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_189(1))
	{
		if (func_364(func_191()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_634(int iParam0)
{
	if (func_372(iParam0, 1))
	{
		return Global_1628237[iParam0].f_11.f_451;
	}
	return -1;
}

int func_635(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_636(int iParam0, int iParam1)
{
	return func_154(func_637(iParam1), iParam0, 0);
}

int func_637(int iParam0)
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

int func_638(int iParam0)
{
	if (func_107(iParam0) == 225 || func_107(iParam0) == 226)
	{
		return func_142(iParam0);
	}
	return -1;
}

int func_639(int iParam0, int iParam1)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_329(iParam1))
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

var func_640()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_339(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_641(int iParam0)
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

int func_642(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_643(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_644(int iParam0)
{
	if (iParam0 == func_3())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_645(int iParam0)
{
	if (iParam0 == func_3())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

int func_646(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_647(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_685(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_684(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_684(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			return 0;
		}
	}
	if (!func_683(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_682(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_681())
	{
		return 0;
	}
	if (func_680())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (func_679())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_524(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_677())
	{
		return 0;
	}
	if (func_684(unk_0xD803B885F5E47A62(), 0) || func_684(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_684(unk_0xD803B885F5E47A62(), 12) || func_684(unk_0xD803B885F5E47A62(), 14)) || func_684(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_670(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_656())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_655())
		{
			return 0;
		}
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_521(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_654())
	{
		return 0;
	}
	if (func_653(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_652(unk_0xD803B885F5E47A62()) && func_651(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_650())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_649(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_531(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_371(unk_0xD803B885F5E47A62()))
	{
		if (func_648(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_648(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_649(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_650()
{
	return Global_1676377.f_4303 != -1;
}

int func_651(int iParam0)
{
	if (iParam0 != func_3() && func_1203(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_652(int iParam0)
{
	if (iParam0 != func_3() && func_1203(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_653(int iParam0)
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

int func_654()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_655()
{
	return Global_98796.f_346 > 0;
}

int func_656()
{
	iVar0 = func_107(unk_0xD803B885F5E47A62());
	if (((func_576(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28) || func_669(unk_0xD803B885F5E47A62())) || func_668(unk_0xD803B885F5E47A62())) || func_667(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_666(unk_0xD803B885F5E47A62()))
	{
		if (func_157(iVar0) || func_641(iVar0))
		{
			return 1;
		}
	}
	if (func_125(unk_0xD803B885F5E47A62()))
	{
		if (func_641(iVar0))
		{
			return 1;
		}
	}
	if (func_665(unk_0xD803B885F5E47A62()))
	{
		if (func_146(iVar0))
		{
			return 1;
		}
	}
	if (func_664(unk_0xD803B885F5E47A62()))
	{
		if (func_145(iVar0))
		{
			return 1;
		}
	}
	if (func_663(unk_0xD803B885F5E47A62()))
	{
		if (func_144(iVar0))
		{
			return 1;
		}
	}
	if (func_662(unk_0xD803B885F5E47A62()))
	{
		if (func_661(iVar0))
		{
			return 1;
		}
	}
	if (func_660(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_542(iVar0))
		{
			if (func_658(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_657(unk_0xD803B885F5E47A62()))
	{
		if (func_137(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_657(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_658(int iParam0)
{
	if (func_659(iParam0) != func_3())
	{
		return func_659(iParam0) == func_280(iParam0);
	}
	return 0;
}

int func_659(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_660(int iParam0, bool bParam1)
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
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_3())
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_662(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_664(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_665(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	if (func_575(Global_1590535[iParam0].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_667(int iParam0)
{
	if (func_577(Global_1590535[iParam0].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_668(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_670(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_669(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_125(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_668(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_665(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_664(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_663(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_676(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_662(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_675(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_660(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_674(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_657(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_673(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_672(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_671(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_671(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_672(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_673(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_674(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_675(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_676(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_3())
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_677()
{
	if (func_678() == 0)
	{
		return 1;
	}
	return 0;
}

int func_678()
{
	return Global_1312467.f_18;
}

bool func_679()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

bool func_680()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 5;
}

bool func_681()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

int func_682(int iParam0)
{
	if (func_523(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_683(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_142, 22);
}

bool func_684(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

bool func_685(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_5, iParam1);
}

int func_686(int iParam0)
{
	if (!func_171() && !func_372(unk_0xD803B885F5E47A62(), 1))
	{
		if (!func_419(unk_0xD803B885F5E47A62()))
		{
			if (func_688())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_687()
{
	return 0;
}

int func_688()
{
	if ((func_121(unk_0xD803B885F5E47A62(), 21) || func_121(unk_0xD803B885F5E47A62(), 22)) || func_691())
	{
		return 1;
	}
	if (func_689())
	{
		func_135(22);
		return 1;
	}
	return 0;
}

int func_689()
{
	if (func_108(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_131() && !func_690()) || func_684(unk_0xD803B885F5E47A62(), 21)) || func_684(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_496(27);
		}
	}
	return 0;
}

bool func_690()
{
	return Global_1312418.f_1;
}

bool func_691()
{
	return func_321(358, -1);
}

void func_692()
{
	if (unk_0xE5DBF9B6126856CA(Local_234.f_14))
	{
		if (unk_0xAFE0D3608EDA7039(func_881()))
		{
			if ((unk_0x2709213DA9C091FF(func_31()) && !func_8(21)) && !func_9(unk_0xFB04705FDFDCE640(), 7))
			{
				unk_0xEA4D2DD5C96D55DA(func_31(), func_694(), func_693(), 0);
				func_433(7);
			}
		}
	}
}

float func_693()
{
	return 5f;
}

float func_694()
{
	return 5f;
}

void func_695()
{
	if (func_430() && func_8(11))
	{
		if (func_698())
		{
			if (!unk_0x83A8177D302E1A7E(Local_223))
			{
				unk_0x8F8ADC4754FE74DA(func_697());
				Local_223 = unk_0xB055A4268B938F30(func_696(), Local_234.f_108, 0f, 0f, 0f, 2f, 0, 0, 0, 1);
				unk_0x02D205CBD211ED4F(Local_223, 0,8f, 0,18f, 0,19f, 1);
			}
		}
	}
}

char* func_696()
{
	return "scr_lowrider_flare";
}

char* func_697()
{
	return "scr_lowrider";
}

int func_698()
{
	unk_0x1EEAD36B05B81FC1(func_697());
	if (unk_0x436E3527A86BCA33(func_697()))
	{
		return 1;
	}
	return 0;
}

void func_699(bool bParam0)
{
	if (bParam0)
	{
		if (!func_854(16))
		{
			if (unk_0xE5DBF9B6126856CA(Local_234.f_14))
			{
				unk_0x4A13379C8009DF6F(Local_234.f_14, 1);
				func_830(16);
			}
		}
	}
	else if (func_854(16))
	{
		if (unk_0xE5DBF9B6126856CA(Local_234.f_14))
		{
			unk_0x4A13379C8009DF6F(Local_234.f_14, 0);
			func_513(16);
		}
	}
}

void func_700()
{
	if (unk_0xE5DBF9B6126856CA(Local_234.f_22))
	{
		if (unk_0x526BC32A660C89E6(Local_234.f_22))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0xA5FBBC2F619A4DE2(Local_234.f_22)))
			{
				unk_0x120A395B0ECB8EA5(unk_0xA5FBBC2F619A4DE2(Local_234.f_22), true);
			}
			else
			{
				unk_0x120A395B0ECB8EA5(unk_0xA5FBBC2F619A4DE2(Local_234.f_22), false);
			}
		}
	}
}

void func_701()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		iVar1 = unk_0x134B62B726CEC8E6(iVar0);
		if (func_702(iVar1))
		{
			if (iVar0 != func_31())
			{
				if (unk_0xAFE0D3608EDA7039(iVar0))
				{
					unk_0x0E85A9945FE5842A(iVar0, func_907());
				}
			}
		}
	}
}

int func_702(int iParam0)
{
	if (((iParam0 == -50547061 || iParam0 == 1621617168) || iParam0 == 1394036463) || iParam0 == 2025593404)
	{
		return 1;
	}
	return 0;
}

void func_703()
{
	if (func_8(9))
	{
		return;
	}
	if (func_9(unk_0xFB04705FDFDCE640(), 2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			if (func_908())
			{
				if (func_41(unk_0x16F2683693E537C9(), func_20(iVar0), 1) < 50f && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					func_433(2);
					return;
				}
				if ((func_41(unk_0x16F2683693E537C9(), func_20(iVar0), 1) < 100f && func_504()) && unk_0xE934758D273C899A(func_31()))
				{
					func_433(2);
					return;
				}
			}
			if (func_41(unk_0x16F2683693E537C9(), func_20(iVar0), 1) < 50f && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_433(2);
				return;
			}
			if (func_704(func_20(iVar0)))
			{
				func_433(2);
				return;
			}
			if (unk_0x437347B10A200C4B(func_20(iVar0), 0) || unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
			{
				func_433(2);
				return;
			}
		}
		iVar0++;
	}
}

int func_704(int iParam0)
{
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	if (func_705())
	{
		if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar0))
		{
			if (unk_0xEC560E589DF8370E(iVar0))
			{
				iVar1 = unk_0x940C1429253D3B1B(iVar0);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (!unk_0x437347B10A200C4B(iVar1, 0))
					{
						if (unk_0x405E212DDE472467(iVar1, 0))
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

bool func_705()
{
	return Global_1574404;
}

void func_706()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			switch (Local_234.f_31[iVar0].f_10)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 2:
					if (unk_0x526BC32A660C89E6(Local_234.f_31[iVar0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
						{
							if (unk_0xD1960163A3042274(func_20(iVar0), -1794415470) == 1 || unk_0xD1960163A3042274(func_20(iVar0), -1794415470) == 0)
							{
								unk_0xA3BF0AA5A2608191(func_20(iVar0));
							}
							if (unk_0xD1960163A3042274(func_20(iVar0), 1120685857) != 1 && unk_0xD1960163A3042274(func_20(iVar0), 1120685857) != 0)
							{
								unk_0x11AD11297DC58CC7(func_20(iVar0), true);
								unk_0x298903DD96203C2C(func_20(iVar0), func_708());
								unk_0xA6EE5A339B240656(func_20(iVar0), Local_234.f_23, 299f, 0);
							}
						}
					}
					break;
				
				case 3:
					if ((func_22() && unk_0xDF1306B443CD3D15(func_19(), 0)) && !unk_0x437347B10A200C4B(func_19(), 0))
					{
						if (unk_0x526BC32A660C89E6(Local_234.f_31[iVar0]))
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!unk_0xEB6A8945D1AC98A1(func_20(iVar0)))
								{
									if (unk_0xD1960163A3042274(func_20(iVar0), -1794415470) != 1 && unk_0xD1960163A3042274(func_20(iVar0), -1794415470) != 0)
									{
										unk_0x11AD11297DC58CC7(func_20(iVar0), true);
										unk_0x5B1D360B9C6F0A09(func_20(iVar0), func_19(), 20000, -1, 2f, 1, 0);
									}
								}
							}
							else if ((((!unk_0xEB6A8945D1AC98A1(func_20(iVar0)) && func_26(func_20(iVar0))) && func_26(func_19())) && func_913()) && func_26(func_31()))
							{
								if (unk_0xD1960163A3042274(func_20(iVar0), -1273030092) != 1 && unk_0xD1960163A3042274(func_20(iVar0), -1273030092) != 0)
								{
									unk_0x11AD11297DC58CC7(func_20(iVar0), true);
									unk_0x298903DD96203C2C(func_20(iVar0), func_707());
									unk_0xAA714ADDDC372E0F(func_20(iVar0), -957453492);
									if (func_431())
									{
										iVar1 = func_31();
									}
									else
									{
										iVar1 = 0;
									}
									unk_0x9AFA0796FDCABCD5(func_20(iVar0), func_19(), iVar1, 0, Local_234.f_23, 6, 60f, 100f, -1f, 200, 25, -1f, 4096);
								}
							}
						}
						if (!func_854(18))
						{
							if (unk_0x526BC32A660C89E6(Local_234.f_100) && unk_0x526BC32A660C89E6(Local_234.f_31[iVar0]))
							{
								if (func_18(func_20(iVar0), func_19(), 0))
								{
									unk_0xE793BC58855FBB31(1, -123497569, func_19(), func_20(iVar0));
									unk_0xE793BC58855FBB31(1, -1090665087, func_19(), func_20(iVar0));
									unk_0x40B4CC38578A6E32(func_20(iVar0), 1186503822);
									func_830(18);
								}
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_707()
{
	return 5;
}

int func_708()
{
	return 75;
}

void func_709()
{
	if (func_912())
	{
		if (unk_0x526BC32A660C89E6(func_390()))
		{
			if (unk_0x7F6DC62EA9922664(func_907()) < (func_77() / 2))
			{
				unk_0xD458AC1C1D29C3B4(func_907(), func_77(), 0);
			}
		}
		if (!func_9(unk_0xFB04705FDFDCE640(), 3))
		{
			if (!unk_0xD59B17D2DFF98E26(func_907()))
			{
				if (func_711(func_907()))
				{
					func_433(3);
				}
				if (func_710(func_907(), 1))
				{
					func_433(3);
				}
			}
		}
	}
}

int func_710(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0,7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_711(int iParam0)
{
	if (!unk_0x70EED0761B82965E(iParam0))
	{
		return 0;
	}
	return unk_0xFC0E4F7E386C43F8(iParam0) >= 1f;
}

void func_712()
{
	if (func_913())
	{
		if (!func_9(unk_0xFB04705FDFDCE640(), 4))
		{
			if (func_911())
			{
				func_433(4);
			}
			if (!func_26(func_881()))
			{
				func_433(4);
			}
		}
	}
}

void func_713()
{
	if (func_913())
	{
		if (func_26(func_31()) && !func_911())
		{
			if (func_908())
			{
				if (unk_0x0B6A547B830D3C18(func_31(), unk_0xD803B885F5E47A62()))
				{
					unk_0xF1259063ADD6A7AF(func_31(), unk_0xD803B885F5E47A62(), 0);
				}
			}
			else if (!unk_0x0B6A547B830D3C18(func_31(), unk_0xD803B885F5E47A62()))
			{
				unk_0xF1259063ADD6A7AF(func_31(), unk_0xD803B885F5E47A62(), 1);
			}
		}
	}
}

void func_714()
{
	if (func_913())
	{
		if (unk_0x526BC32A660C89E6(func_32()))
		{
			if (!func_8(12))
			{
				if (unk_0xF1E4ECB802FC8389(func_31()))
				{
					unk_0xE121AE1BBF90E186(func_31(), true);
					unk_0x6EEAA5C21760E9DB(func_31(), false);
					unk_0x98868AF51859FC75(func_31(), 0);
				}
			}
			else if (!unk_0xF1E4ECB802FC8389(func_31()))
			{
				unk_0xE121AE1BBF90E186(func_31(), false);
				unk_0x6EEAA5C21760E9DB(func_31(), true);
				unk_0x98868AF51859FC75(func_31(), 1);
			}
		}
	}
}

void func_715()
{
	if (func_913())
	{
		if (unk_0x526BC32A660C89E6(func_32()) && !func_911())
		{
			if (((unk_0x7B5606C651AB51B5(func_31(), 0, func_829()) || unk_0x7B5606C651AB51B5(func_31(), 1, func_829())) || unk_0x7B5606C651AB51B5(func_31(), 3, func_829())) || unk_0x7B5606C651AB51B5(func_31(), 2, func_829()))
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
				Var4.f_4 = 150f;
				Var4.f_1 = 1;
				Var4.f_12 = 1;
				Var4.f_13 = 0;
				Var4.f_5 = 0;
				if (func_716(unk_0x68F4C0EC296D3901(func_31(), true), 0f, 0f, 0f, Local_234.f_19, 1, &vVar0, &fVar3, &Var4))
				{
					unk_0xBA2CB24C70C8E726(func_31(), 1, 1);
					unk_0x08841CDB215AE18F(func_31(), vVar0, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(func_31(), fVar3);
					unk_0xB9FD7450C0DAB575(func_31(), 1084227584);
				}
			}
		}
	}
}

int func_716(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
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
	if (!func_221(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_605) < func_828(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_827();
			func_826();
		}
		return 0;
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) < func_828(0))
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
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) > func_828(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_822(vParam0))
		{
			if (func_821(&vParam0, 1))
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
		func_820();
		func_827();
		if (!uParam10->f_27 || (((((func_819(vParam0, 1, 1133903872) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_802(vParam0, iParam6);
		}
		if (func_792(vParam0))
		{
			func_802(vParam0, iParam6);
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
				if (((uParam10->f_3 && func_788(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_786(vParam0, *uParam9, iParam6, unk_0xD803B885F5E47A62(), 0))
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
					func_740(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_737(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
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
							if (func_736(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949))
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
						func_734(Global_2405072.f_676, 0);
						func_733(-1);
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
				func_733(-1);
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
								if (func_732(Global_2405072.f_676, Global_2405072.f_679, iParam6, unk_0xD803B885F5E47A62(), 0) || func_718(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_734(Global_2405072.f_676, 0);
									func_733(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_734(Global_2405072.f_676, 0);
								func_733(-1);
							}
						}
					}
					else
					{
						func_733(-1);
					}
				}
				else
				{
					func_733(1);
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
			func_740(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
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
		func_717(1);
		return 1;
	}
	return 0;
}

void func_717(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_820();
	func_827();
	if (bParam0)
	{
		func_826();
	}
}

int func_718(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam9 == 0)
		{
			if (func_1203(iVar1, bParam5, bParam6))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_731(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam10) && bParam7) && func_729(iVar1))
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
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, false) };
										fVar8 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_728(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_719(func_230(iVar1), vParam0, fParam3, iParam4, fVar2))
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

int func_719(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	if (vdist(vParam0, vParam3) < func_727(iParam7, 1008981770))
	{
		func_720(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_720(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vVar0 = { 0f, 1f, 0f };
	func_726(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_721(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0,5f * unk_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = unk_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_721(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_724(iParam0);
		if (iVar0 != 0)
		{
			func_722(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_722(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_723(iParam0, &Global_1315812);
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

void func_723(int iParam0, var uParam1)
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

int func_724(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_725(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_725(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_726(var uParam0, vector3 vParam1)
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

float func_727(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_721(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (sqrt(((((vVar6.x * 0,5f) * (vVar6.x * 0,5f)) + ((vVar6.y * 0,5f) * (vVar6.y * 0,5f))) + ((vVar6.z * 0,5f) * (vVar6.z * 0,5f)))) + fParam1);
	return fVar9;
}

int func_728(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	if (func_719(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_721(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_726(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_726(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (unk_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0,5f), 0f, 0f };
	func_726(&vVar26, 0f, 0f, fParam3);
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
		if (func_719(vVar1[iVar0], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_728(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_729(int iParam0)
{
	if (func_226(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_214(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_730(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_730(int iParam0, int iParam1)
{
	iVar0 = func_280(iParam0);
	if (!iVar0 == func_3())
	{
		if (iVar0 == func_280(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_731(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

int func_732(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1203(iVar1, 0, 1) && func_1203(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_719(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_719(func_230(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_719(Global_2417897.f_131[iVar0], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1203(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_719(func_230(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

void func_733(int iParam0)
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

void func_734(vector3 vParam0, int iParam3)
{
	if (iParam3 == 0 && func_735(vParam0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && vmag(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam3] };
		Global_2405072.f_2728[iParam3] = { vParam0 };
		func_734(vVar0, iParam3 + 1);
	}
}

int func_735(vector3 vParam0, float fParam3)
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

int func_736(vector3 vParam0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	else
	{
		func_827();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && unk_0xBFF81ED3B99522C7())
			{
				func_720(vParam0, fParam3, iParam4, &vVar0, &vVar3, &uVar6, fParam6);
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

void func_737(vector3 vParam0, var uParam3, int iParam4, var uParam5)
{
	*uParam5 = func_739(&vParam0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xFB061A86A7AC749F(1, &Var0, 8, func_738(1, 1));
}

var func_738(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_1203(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_257(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_739(var uParam0, var uParam1, var uParam2)
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

void func_740(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_783(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_741(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_741(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_779(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_774(uParam0, 1))
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
	if (func_724(uParam2->f_34) != 0)
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
					if (!func_767(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_764(vVar1))
									{
										vVar1 = { func_759(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_758(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_754(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_774(&vVar1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_753(vVar1, fVar4, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_779(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_752(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_788(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_788(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_718(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_750(vVar1, uParam2->f_54, &fVar25);
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
																													func_749(vVar1, fVar4, iVar16);
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
																									if (func_754(vVar1, uParam2))
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
							func_747(0, uParam2);
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
						func_746(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, iVar13, iVar14, bVar11);
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
						if (func_779(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_774(&vVar31, bVar35))
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
				func_742(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_742(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*uParam0[iVar2], vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_743(*uParam0[iVar2], 5f, unk_0xD803B885F5E47A62(), 0, 0))
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

int func_743(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_745(vParam0, fParam3, iParam4, iParam5, 0) || func_744(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_744(vector3 vParam0, int iParam3, int iParam4)
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
					if (func_719(vParam0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_1203(iVar2, 0, 1) && func_1203(iParam3, 0, 1))
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

int func_745(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_1203(iVar1, 0, 1) && func_1203(iParam4, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1203(iVar1, 0, 1) && func_1203(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (vdist(func_230(iVar1), vParam0) < 1f)
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
				else if (func_1203(iVar1, 0, 1))
				{
					if (vdist(func_230(iVar1), vParam0) < 1f)
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

void func_746(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, iParam11, iParam12);
		*uParam5 = { func_759(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_764(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_747(int iParam0, var uParam1)
{
	if (!func_754(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_748(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_747(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_747(iParam0 + 1, uParam1);
	}
}

void func_748(int iParam0)
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

void func_749(vector3 vParam0, float fParam3, int iParam4)
{
	vVar0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { vParam0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_749(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_750(vector3 vParam0, float fParam3, float fParam4)
{
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_751(iVar5))
		{
			vVar1 = { func_230(iVar5) };
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

int func_751(int iParam0)
{
	if (func_1203(iParam0, 0, 1))
	{
		if (!func_290(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_523(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_227(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
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
					if (!func_523(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_729(iParam0))
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

int func_752(vector3 vParam0, float fParam3, int iParam4)
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
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, false) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_728(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
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
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, false) };
		fVar6 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_728(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_753(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_732(vParam0, fParam3, iParam4, iParam5, iParam6) || func_786(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_754(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_757(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_755(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_755(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_756(&vParam3, &vParam6);
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

void func_756(var uParam0, var uParam1)
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

bool func_757(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
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

int func_758(vector3 vParam0, float fParam3)
{
	if (func_523(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_719(vParam0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
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
					if (func_719(vParam0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0,5f))
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
					if (func_719(vParam0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0,5f))
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
					if (func_719(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0,5f))
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
					if (func_719(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0,5f))
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

Vector3 func_759(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_762(vParam0, *fParam3, vParam6))
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
			if (unk_0xAFB8495D36825275(iParam11) && func_761(vParam0))
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
					fVar14 = func_760(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_760(iParam11, 1,5f);
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
		if (!func_762(vParam0, *fParam3, vParam6))
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
					fVar14 = func_760(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_760(iParam11, 1,5f);
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

float func_760(int iParam0, float fParam1)
{
	func_721(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_761(vector3 vParam0)
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

int func_762(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vVar0 = { 0f, 1f, 0f };
	func_726(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_763(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_763(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_764(vector3 vParam0)
{
	iVar1 = func_766(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_765(vParam0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_765(vParam0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_765(vector3 vParam0, var uParam3)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_766(struct<2> Param0, var uParam2)
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

int func_767(var uParam0, bool bParam1)
{
	if (func_773(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = unk_0x79833B02DBD2A244(0,01f, 360f);
			func_772(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_768(vVar1, &uVar0) || func_773(vVar1))
			{
				vVar1 = { *uParam0 };
				func_772(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_768(vector3 vParam0, var uParam3)
{
	if (func_771())
	{
		return 0;
	}
	iVar1 = func_770();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_769(vParam0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_769(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_757(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_755(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_770()
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

bool func_771()
{
	return Global_1676377.f_474;
}

void func_772(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_726(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_726(&vVar0, 0f, 0f, fParam7);
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

int func_773(vector3 vParam0)
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

bool func_774(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_757(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_755(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
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
				*uParam0 = { func_775(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_775(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_772(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_778(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_776(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_757(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_755(vVar1, vParam3, vParam6, 0, 0))
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

void func_776(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_777(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
	fVar9 = (vmag(vVar3) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_763(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_763(vVar6, vVar3) >= 0f)
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
		vVar6 = { func_777(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0,5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_777(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		fVar9 = (vmag(vVar29) * sin(unk_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_763(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_763(vVar6, vVar29) >= 0f)
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

Vector3 func_777(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_778(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_779(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_822(vParam0))
	{
		if (func_782(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_780(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_735(*uParam3, 1056964608))
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
				func_772(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_780(var uParam0, bool bParam1, bool bParam2)
{
	if (func_768(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_781(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_768(vVar2, &uVar1) || func_773(vVar2))
			{
				vVar2 = { *uParam0 };
				func_781(&vVar2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

void func_781(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_775(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_775(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_775(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_772(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_778(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_776(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_782(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_769(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
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
							func_781(&vVar1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_782(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_781(&vVar1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
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

int func_783(var uParam0, var uParam1, var uParam2)
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
			if (func_779(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_774(uParam0, 1))
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
		func_784(*uParam0);
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
							if ((uParam2->f_12 && !func_753(vVar2, fVar5, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_779(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_752(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_788(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_788(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_718(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar12 = func_750(vVar2, uParam2->f_54, &fVar13);
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
																		func_749(vVar2, fVar5, iVar6);
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
					func_747(0, uParam2);
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

void func_784(vector3 vParam0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_785(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_785(vector3 vParam0, float fParam3, float fParam4)
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

int func_786(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_787(vParam0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_728(vParam0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_1203(iVar2, 0, 1) && func_1203(iParam5, 0, 1))
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

int func_787(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	fVar0 = func_727(iParam3, 1008981770);
	fVar1 = func_727(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_788(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_791(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_789(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_789(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_1203(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_790(unk_0xD803B885F5E47A62()), vParam0, true) <= (fVar2 + fParam3))
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
		if (func_1203(iVar1, 1, 1))
		{
			if (!func_257(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_731(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_790(iVar1), vParam0, true) <= (fVar2 + fParam3))
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
							if (unk_0x0EB28750412C3A5A(func_790(iVar1), vParam0, true) <= (fVar2 + fParam3))
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

Vector3 func_790(int iParam0)
{
	iVar0 = iParam0;
	if ((func_239() && Global_1590535[iVar0].f_847) && !func_30(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_230(iParam0);
}

int func_791(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_1203(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_731(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam9) && bParam6) && func_729(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_230(iVar1), vParam0, true) < fParam3)
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

int func_792(vector3 vParam0)
{
	if (Global_2537071.f_883 && func_793(vParam0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_793(vector3 vParam0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_801(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_794(iVar1))
			{
				if (func_801(Global_1676377.f_488[iVar0], 0) == iVar2)
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

int func_794(int iParam0)
{
	iVar0 = func_800(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_3())
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
	if (func_660(unk_0xD803B885F5E47A62(), 0) || (func_798(unk_0xD803B885F5E47A62()) && func_126(func_651(unk_0xD803B885F5E47A62())) == 12))
	{
		return 1;
	}
	if (func_676(unk_0xD803B885F5E47A62()) || (func_798(unk_0xD803B885F5E47A62()) && func_126(func_651(unk_0xD803B885F5E47A62())) == 8))
	{
		return 1;
	}
	if (func_797(unk_0xD803B885F5E47A62()) || (func_798(unk_0xD803B885F5E47A62()) && func_126(func_651(unk_0xD803B885F5E47A62())) == 5))
	{
		return 1;
	}
	if (func_796(unk_0xD803B885F5E47A62()) || (func_798(unk_0xD803B885F5E47A62()) && func_126(func_651(unk_0xD803B885F5E47A62())) == 10))
	{
		return 1;
	}
	if (func_795(unk_0xD803B885F5E47A62()) || (func_798(unk_0xD803B885F5E47A62()) && func_126(func_651(unk_0xD803B885F5E47A62())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_795(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_796(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_797(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_1203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_3())
			{
				return func_126(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_798(int iParam0)
{
	if (iParam0 != func_3() && func_1203(iParam0, 1, 1))
	{
		if (func_652(iParam0) && !func_799(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_799(int iParam0)
{
	if (iParam0 != func_3() && func_1203(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_800(int iParam0)
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

int func_801(vector3 vParam0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_769(vParam0, &(Global_2409984[iVar0]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_802(vector3 vParam0, int iParam3)
{
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_818())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_817(vParam0);
		if (iVar1 > -1)
		{
			func_826();
			switch (iVar1)
			{
				case 0:
					func_816(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_816(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_816(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_816(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_816(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_816(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_816(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_816(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_816(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_816(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_816(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_816(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_816(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_816(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_816(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_816(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_816(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_816(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_816(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_816(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_816(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_816(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_816(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_816(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_816(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_816(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_816(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_816(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_816(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_816(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_816(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_816(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_816(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_816(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_816(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_816(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_816(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_816(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_816(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_816(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_816(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_816(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_816(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_816(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_816(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_816(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_816(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_816(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_816(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_816(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_816(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_816(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_816(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_815(78);
					break;
				
				case 11:
					func_815(79);
					break;
				
				case 12:
					func_815(82);
					break;
				
				case 13:
					func_815(81);
					break;
				
				case 14:
					func_815(73);
					break;
				
				case 15:
					func_816(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_816(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_816(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_816(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_815(75);
					break;
				
				case 17:
					func_815(76);
					break;
				
				case 18:
					func_815(77);
					break;
				
				case 19:
					func_816(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_816(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_816(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_816(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_815(80);
					break;
				
				case 21:
				case 25:
					func_815(87);
					break;
				
				case 22:
				case 26:
					func_815(88);
					break;
				
				case 23:
				case 27:
					func_815(89);
					break;
				
				case 24:
				case 28:
					func_815(90);
					break;
				
				case 29:
				case 30:
					if (func_814(iParam3))
					{
						func_815(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
					}
					break;
				
				case 31:
					func_816(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_816(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_816(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_816(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_816(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_816(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_816(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_816(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_816(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_816(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_816(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_816(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_816(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_816(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_816(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_816(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_816(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_816(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_816(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_816(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_816(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_816(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_816(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_816(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_816(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_816(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_816(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_816(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_816(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_816(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_816(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_816(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_816(-194,254f, -2018,756f, 26,62f, 75f);
					func_816(-186,956f, -2031,369f, 26,62f, 338f);
					func_816(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_816(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_816(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_816(-233,372f, -2089,601f, 26,62f, 304f);
					func_816(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_816(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_816(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_816(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_816(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_816(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_816(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_816(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_816(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_816(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_816(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_816(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_816(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_816(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_816(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_816(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_811(vParam0, &iVar2, &iVar6) || (func_793(vParam0, &(iVar2[0])) && (unk_0xC41A9202669A24C4(iParam3) || unk_0xAFB8495D36825275(iParam3))))
		{
			func_826();
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
				if (!iVar6[iVar0] && func_575(iVar2[iVar0], -1))
				{
					if (func_814(iParam3))
					{
						func_815(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_810(unk_0x16F2683693E537C9()) || func_809(unk_0x16F2683693E537C9())) && unk_0xC41A9202669A24C4(iParam3)) || unk_0xAFB8495D36825275(iParam3))
					{
						if (func_808(iParam3))
						{
							func_807(iVar2[iVar0]);
						}
						else if (func_806(iParam3))
						{
							func_805(iVar2[iVar0]);
							func_807(iVar2[iVar0]);
						}
						else
						{
							func_805(iVar2[iVar0]);
							func_807(iVar2[iVar0]);
						}
					}
					else
					{
						func_803(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_815(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_803(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_816(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_816(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_816(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_816(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_816(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_816(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_816(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_816(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_816(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_816(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_816(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_816(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_816(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_816(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_816(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_816(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_816(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_816(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_816(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_816(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_816(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_816(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_816(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_816(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_816(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_816(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_816(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_816(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_816(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_816(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_816(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_816(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_816(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_816(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_816(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_816(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_816(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_816(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_816(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_816(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_816(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_816(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_816(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_816(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_816(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_816(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_816(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_816(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_816(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_816(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_816(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_816(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_816(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_816(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_816(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_816(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_816(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_816(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_816(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_816(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_816(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_816(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_816(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_816(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_816(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_816(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_816(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_816(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_816(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_816(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_816(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_816(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_816(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_816(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_816(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_816(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_816(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_816(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_816(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_816(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_816(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_816(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_816(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_816(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_816(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_816(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_816(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_816(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_816(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_816(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_816(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_816(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_816(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_816(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_816(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_816(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_816(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_816(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_816(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_816(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_816(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_816(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_816(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_816(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_816(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_816(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_816(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_816(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_816(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_816(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_816(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_816(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_816(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_816(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_816(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_816(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_816(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_816(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_816(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_816(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_816(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_816(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_816(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_816(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_816(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_816(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_816(142,7427f, -2536,147f, 5f, 205,0002f);
			func_816(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_816(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_816(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_816(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_816(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_816(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_816(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_816(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_816(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_816(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_816(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_816(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_816(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_816(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_816(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_816(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_816(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_816(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_816(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_816(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_816(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_816(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_816(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_816(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_816(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_816(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_816(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_816(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_816(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_816(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_816(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_816(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_816(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_816(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_816(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_816(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_816(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_816(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_816(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_816(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_816(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_816(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_816(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_816(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_816(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_816(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_816(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_816(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_816(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_816(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_816(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_816(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_816(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_816(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_816(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_816(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_816(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_816(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_816(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_816(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_816(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_816(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_816(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_816(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_816(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_816(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_816(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_816(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_816(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_816(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_816(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_816(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_816(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_816(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_816(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_816(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_816(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_816(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_816(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_816(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_816(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_816(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_816(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_816(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_816(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_816(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_816(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_816(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_816(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_816(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_816(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_816(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_816(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_816(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_816(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_816(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_816(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_816(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_816(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_816(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_816(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_816(-1823,414f, 3092,762f, 31,843f, 330f);
			func_816(-1819,045f, 3100,435f, 31,845f, 330f);
			func_816(-1833,313f, 3075,722f, 31,838f, 330f);
			func_816(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_816(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_816(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_816(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_816(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_816(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_816(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_816(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_816(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_816(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_816(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_816(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_816(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_816(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_816(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_816(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_816(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_816(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_816(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_816(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_816(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_816(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_816(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_816(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_816(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_816(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_816(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_816(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_816(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_816(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_816(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_816(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_816(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_816(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_816(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_816(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_816(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_816(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_816(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_816(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_816(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_816(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_816(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_816(1231,279f, 2910,881f, 43,3085f, 12f);
				func_816(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_816(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_816(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_816(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_816(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_816(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_816(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_816(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_816(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_816(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_816(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_816(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_816(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_816(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_816(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_816(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_816(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_816(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_816(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_816(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_816(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_816(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_816(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_816(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_816(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_816(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_816(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_816(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_816(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_816(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_816(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_816(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_816(3,855f, 2672,388f, 78,437f, 319,2f);
				func_816(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_816(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_816(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_816(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_816(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_816(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_816(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_816(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_816(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_816(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_816(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_816(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_816(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_816(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_816(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_816(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_816(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_816(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_816(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_816(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_816(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_816(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_816(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_816(102,851f, 2688,009f, 51,732f, 224f);
				func_816(109,815f, 2681,012f, 51,112f, 224f);
				func_816(116,355f, 2674,26f, 50,529f, 224f);
				func_816(125,138f, 2665,98f, 49,8f, 224f);
				func_816(132,228f, 2659,865f, 49,26f, 228,4f);
				func_816(139,354f, 2653,536f, 48,737f, 228,4f);
				func_816(88,512f, 2702,995f, 53,042f, 224,199f);
				func_816(81,565f, 2710,357f, 53,67f, 224,199f);
				func_816(75,156f, 2716,981f, 54,223f, 224,199f);
				func_816(68,442f, 2723,806f, 54,775f, 226,199f);
				func_816(61,449f, 2730,606f, 55,308f, 226,199f);
				func_816(53,702f, 2738,167f, 55,855f, 226,199f);
				func_816(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_816(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_816(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_816(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_816(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_816(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_816(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_816(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_816(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_816(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_816(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_816(2714,633f, 3918,283f, 42,938f, 16f);
				func_816(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_816(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_816(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_816(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_816(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_816(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_816(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_816(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_816(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_816(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_816(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_816(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_816(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_816(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_816(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_816(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_816(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_816(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_816(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_816(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_816(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_816(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_816(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_816(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_816(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_816(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_816(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_816(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_816(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_816(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_816(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_816(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_816(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_816(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_816(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_816(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_816(3374,923f, 5520,177f, 20,3207f, 86f);
				func_816(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_816(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_816(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_816(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_816(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_816(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_816(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_816(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_816(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_816(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_816(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_816(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_816(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_816(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_816(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_816(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_816(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_816(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_816(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_816(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_816(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_816(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_816(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_816(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_816(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_816(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(43,848f, 6845,657f, 13,379f, 247,2f);
				func_816(50,379f, 6861,146f, 15,105f, 247,2f);
				func_816(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_816(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_816(55,806f, 6875,081f, 14,824f, 247,2f);
				func_816(11,616f, 6877,079f, 11,466f, 247,2f);
				func_816(18,954f, 6891,633f, 11,37f, 247,2f);
				func_816(26,68f, 6907,587f, 11,869f, 247,2f);
				func_816(7,479f, 6907,895f, 12,024f, 247,2f);
				func_816(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_816(35,591f, 6836,608f, 13,288f, 274,4f);
				func_816(36,028f, 6830,135f, 13,801f, 270,8f);
				func_816(35,114f, 6823,884f, 14,527f, 260,8f);
				func_816(48,779f, 6838,693f, 14,337f, 273,6f);
				func_816(56,738f, 6821,8f, 15,244f, 244,8f);
				func_816(48,377f, 6825,895f, 14,656f, 249,8f);
				func_816(49,11f, 6831,439f, 13,991f, 274,8f);
				func_816(53,544f, 6818,275f, 16,342f, 243f);
				func_816(46,162f, 6821,945f, 15,483f, 249,8f);
				func_816(60,129f, 6836,8f, 15,605f, 269,6f);
				func_816(40,88f, 6802,952f, 20,113f, 242,6f);
				func_816(48,203f, 6799,134f, 20,897f, 244,4f);
				func_816(70,449f, 6809,271f, 16,846f, 243f);
				func_816(61,436f, 6814,266f, 16,71f, 244,2f);
				func_816(56,142f, 6793,458f, 19,806f, 242,6f);
				func_816(65,759f, 6791,12f, 18,433f, 276,4f);
				func_816(77,305f, 6805,391f, 18,558f, 245,6f);
				func_816(85,893f, 6800,243f, 18,535f, 249,8f);
				func_816(56,85f, 6780,582f, 18,822f, 297,999f);
				func_816(65,636f, 6784,669f, 18,789f, 293,799f);
				func_816(74,121f, 6788,498f, 18,739f, 293,799f);
				func_816(97,779f, 6796,32f, 19,02f, 276,799f);
				func_816(106,76f, 6796,983f, 18,914f, 272,599f);
				func_816(112,387f, 6802,858f, 18,994f, 210,599f);
				func_816(117,58f, 6802,644f, 18,663f, 209,399f);
				func_816(122,481f, 6802,693f, 18,468f, 209,399f);
				func_816(127,182f, 6802,686f, 18,218f, 209,399f);
				func_816(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_816(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_816(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_816(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_816(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_816(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_816(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_816(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_816(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_816(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_816(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_816(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_816(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_816(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_816(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_816(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_816(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_816(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_816(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_816(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_816(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_816(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_816(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_816(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_816(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_816(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_816(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_816(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_816(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_816(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_816(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_816(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_816(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_816(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_816(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_816(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_816(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_816(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_816(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_816(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_816(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_816(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_816(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_816(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_816(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_816(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_816(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_816(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_816(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_816(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_816(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_816(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_816(30,027f, 3292,351f, 38,604f, 140,199f);
				func_816(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_816(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_816(23,897f, 3283,152f, 39,381f, 145,399f);
				func_816(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_816(18,723f, 3274,025f, 40,054f, 155,799f);
				func_816(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_816(36,958f, 3298,847f, 38,001f, 127,799f);
				func_816(54,165f, 3311,582f, 36,517f, 303,799f);
				func_816(61,607f, 3317,105f, 35,916f, 306,999f);
				func_816(68,994f, 3323,129f, 35,364f, 308,199f);
				func_816(76,266f, 3329,467f, 34,805f, 311,399f);
				func_816(82,757f, 3335,915f, 34,344f, 316,598f);
				func_816(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_816(14,664f, 3263,688f, 40,931f, 160,398f);
				func_816(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_816(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_816(89,575f, 3343,311f, 33,932f, 318,398f);
				func_816(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_816(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_816(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_816(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_816(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_816(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_816(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_816(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_816(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_816(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_816(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_816(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_816(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_816(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_816(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_816(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_816(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_816(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_816(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_816(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_816(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_816(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_816(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_816(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_816(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_816(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_816(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_816(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_816(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_816(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_816(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_816(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_816(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_816(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_816(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_816(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_816(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_816(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_816(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_816(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_816(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_816(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_58 == 0)
			{
				func_816(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_816(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_816(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_816(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_816(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_816(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_816(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_816(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_816(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_816(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_816(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_816(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_816(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_816(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_816(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_816(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_816(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_816(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_816(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_816(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_816(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_816(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_816(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_816(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_816(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_816(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_816(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_816(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_816(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_816(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_816(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_816(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_816(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_816(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_816(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_816(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_816(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_816(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_804(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_804(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_804(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_804(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_804(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_804(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_804(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_804(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_804(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_804(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_804(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_804(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_804(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_804(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_804(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_804(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_804(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_804(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_804(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_804(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_804(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_804(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_804(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_804(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_804(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_804(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_804(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_804(vector3 vParam0, float fParam3, int iParam4, bool bParam5)
{
	if (!iParam4 == 0)
	{
		func_721(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		vVar7 = { 0f, fVar6, 0f };
		vVar10 = { unk_0x8A5E176FF719A014(vParam0, fParam3, vVar7) };
		func_816(vVar10, fParam3);
	}
	else
	{
		func_816(vParam0, fParam3);
	}
}

void func_805(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_816(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_816(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_816(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_816(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_816(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_816(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_816(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_816(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_816(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_816(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_816(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_816(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_816(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_816(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_816(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_816(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_816(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_816(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_816(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_816(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_816(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_816(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_816(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_816(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_816(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_816(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_816(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_816(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_816(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_816(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_816(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_816(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_816(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_816(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_816(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_816(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_816(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_816(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_816(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_816(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_816(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_816(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_816(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_816(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_816(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_816(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_816(-1356,991f, -3242,228f, 12,945f, 330f);
			func_816(-1369,313f, -3234,758f, 12,945f, 330f);
			func_816(-1381,751f, -3227,408f, 12,945f, 330f);
			func_816(-1394,302f, -3220,021f, 12,945f, 330f);
			func_816(-1354,339f, -3223,129f, 12,945f, 330f);
			func_816(-1366,302f, -3215,809f, 12,945f, 330f);
			func_816(-1378,492f, -3208,645f, 12,945f, 330f);
			func_816(-1350,322f, -3203,405f, 12,945f, 330f);
			func_816(-1362,684f, -3196,451f, 12,945f, 330f);
			func_816(-1347,089f, -3182,69f, 12,945f, 330f);
			func_816(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_816(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_816(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_816(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_816(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_816(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_816(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_816(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_816(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_816(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_816(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_816(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_816(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_816(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_816(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_816(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_816(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_816(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_816(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_816(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_816(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_816(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_816(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_816(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_816(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_816(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_816(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_816(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_816(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_816(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_816(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_816(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_816(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_816(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_816(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_816(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_816(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_816(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_816(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_816(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_816(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_816(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_816(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_816(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_816(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_816(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_816(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_816(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_816(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_816(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_816(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_816(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_816(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_816(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_816(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_816(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_816(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_816(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_816(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_816(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_816(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_816(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_816(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_816(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_816(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_816(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_816(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_816(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_816(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_816(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_816(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_816(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_816(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_816(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_816(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_816(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_816(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_816(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_816(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_816(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_816(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_816(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_816(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_816(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_816(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_816(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_816(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_816(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_816(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_816(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_816(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_816(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_816(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_816(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_816(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_816(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_816(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_816(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_816(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_816(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_816(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_816(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_816(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_816(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_816(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_816(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_816(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_816(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_816(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_816(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_816(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_816(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_816(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_816(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_816(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_816(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_816(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_816(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_816(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_816(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_816(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_816(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_816(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_816(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_816(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_816(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_816(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_816(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_816(-2484,323f, 3249,294f, 31,828f, 151f);
			func_816(-2495,313f, 3255,746f, 31,828f, 151f);
			func_816(-2472,644f, 3242,684f, 31,828f, 151f);
			func_816(-2506,313f, 3262,27f, 31,823f, 151f);
			func_816(-2461,494f, 3235,93f, 31,828f, 151f);
			func_816(-2505,602f, 3238,049f, 31,828f, 151f);
			func_816(-2481,937f, 3224,8f, 31,828f, 151f);
			func_816(-2516,813f, 3244,266f, 31,823f, 151f);
			func_816(-2470,03f, 3217,899f, 31,828f, 151f);
			func_816(-2493,933f, 3231,308f, 31,828f, 151f);
			func_816(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_816(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_816(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_816(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_816(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_816(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_816(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_816(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_816(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_816(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_816(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_816(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_816(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_816(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_816(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_816(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_816(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_816(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_816(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_816(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_816(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_816(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_816(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_816(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_816(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_816(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_816(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_816(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_816(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_816(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_816(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_816(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_816(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_816(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_816(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_816(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_806(int iParam0)
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

void func_807(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_816(-947,712f, -3367,704f, 12,944f, 60f);
			func_816(-904,692f, -3293,072f, 12,944f, 60f);
			func_816(-863,71f, -3221,978f, 12,944f, 60f);
			func_816(-966,418f, -3162,773f, 12,944f, 60f);
			func_816(-1007,435f, -3233,93f, 12,944f, 60f);
			func_816(-1050,455f, -3308,559f, 12,944f, 60f);
			func_816(-1145,673f, -3253,456f, 12,944f, 60f);
			func_816(-1098,386f, -3181,428f, 12,944f, 60f);
			func_816(-1060,474f, -3108,903f, 12,944f, 60f);
			func_816(-1155,391f, -3053,632f, 12,944f, 60f);
			func_816(-1196,114f, -3125,146f, 12,948f, 60f);
			func_816(-1235,552f, -3201,86f, 12,944f, 60f);
			func_816(-1344,446f, -3139,177f, 12,944f, 60f);
			func_816(-1301,308f, -3064,341f, 12,944f, 60f);
			func_816(-1260,135f, -2992,912f, 12,944f, 60f);
			func_816(-1364,244f, -2932,9f, 12,98f, 60f);
			func_816(-1405,284f, -3004,108f, 12,96f, 60f);
			func_816(-1448,29f, -3078,72f, 12,95f, 60f);
			func_816(-1535,732f, -3028,318f, 12,945f, 60f);
			func_816(-1492,639f, -2953,558f, 12,945f, 60f);
			func_816(-1451,506f, -2882,2f, 12,944f, 60f);
			func_816(-1553,927f, -2823,12f, 13,002f, 60f);
			func_816(-1595,097f, -2894,571f, 12,944f, 60f);
			func_816(-1637,836f, -2968,714f, 12,945f, 60f);
			func_816(-1740,971f, -2911,484f, 12,944f, 330f);
			func_816(-1696,293f, -2833,978f, 12,944f, 330f);
			func_816(-1651,502f, -2756,273f, 12,945f, 330f);
			func_816(-1588,258f, -2647,575f, 12,944f, 330f);
			func_816(-1536,862f, -2681,378f, 12,945f, 330f);
			func_816(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_816(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_816(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_816(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_816(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_816(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_816(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_816(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_816(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_816(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_816(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_816(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_816(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_816(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_816(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_816(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_816(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_816(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_816(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_816(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_816(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_816(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_816(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_816(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_816(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_816(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_816(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_816(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_816(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_816(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_816(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_808(int iParam0)
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

int func_809(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_810(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_811(struct<2> Param0, var uParam2, var uParam3, var uParam4)
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
			if (func_794(iVar0))
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
			if (func_812(iVar0))
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

int func_812(int iParam0)
{
	iVar0 = func_813(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62()].f_11;
	if (iVar1 != func_3())
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

int func_813(int iParam0)
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

int func_814(int iParam0)
{
	if ((unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0)) || unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_815(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_816(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_816(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_816(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_816(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case 79:
			func_816(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_816(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_816(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_816(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_816(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_816(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_816(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_816(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_816(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_816(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_816(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_816(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_816(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_816(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_816(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_816(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_816(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_816(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_816(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_816(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_816(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_816(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_816(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_816(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_816(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_816(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_816(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_816(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_816(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_816(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_816(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_816(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_284())
			{
				func_816(-1608,297f, -556,875f, 33,406f, 310f);
				func_816(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_816(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_816(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_816(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_816(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_816(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_816(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_816(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_816(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_816(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_816(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_284())
			{
				func_816(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_816(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_816(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_816(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_816(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_816(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_816(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_816(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_816(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_816(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_816(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_816(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_284())
			{
				func_816(-102,737f, -597,379f, 35,053f, 160,999f);
				func_816(-97,793f, -589,568f, 35,082f, 134,799f);
				func_816(-110,357f, -619,402f, 35,055f, 160,599f);
				func_816(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_816(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_816(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_816(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_816(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_816(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_816(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_816(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_816(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_284())
			{
				func_816(-59,349f, -779,238f, 43,134f, 228,398f);
				func_816(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_816(-65,212f, -772,66f, 43,151f, 219,398f);
				func_816(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_816(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_816(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_816(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_816(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_816(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_816(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_816(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_816(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_816(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_816(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_816(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_816(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_816(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_816(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_816(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_816(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_816(-1464,5f, -927,9f, 9f, 296,7991f);
			func_816(-1466f, -926,1f, 9f, 296,7991f);
			func_816(-1467,9f, -924,7f, 9f, 296,7991f);
			func_816(-1469,7f, -923,7f, 9f, 296,7991f);
			func_816(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_816(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_816(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_816(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_816(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_816(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_816(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_816(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_816(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_816(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_816(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_816(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_816(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_816(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_816(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_816(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_816(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_816(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_816(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_816(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_816(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_816(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_816(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_816(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_816(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_816(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_816(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_816(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_816(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_816(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_816(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_816(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_816(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_816(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_816(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_816(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_816(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_816(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_816(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_816(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_816(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_816(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_816(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_816(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_816(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_816(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_816(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_816(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_816(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_816(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_816(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_816(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_816(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_816(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_816(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_816(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_816(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_816(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_816(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_816(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_816(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_816(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_816(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_816(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_816(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_816(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_816(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_816(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_816(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_816(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_816(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_816(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_816(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_816(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_816(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_816(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_816(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_816(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_816(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_816(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_816(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_816(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_816(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_816(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

void func_816(vector3 vParam0, float fParam3)
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

int func_817(vector3 vParam0)
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
		if (func_765(vParam0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_818()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_819(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_794(iVar0))
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

void func_820()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_821(var uParam0, bool bParam1)
{
	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = ((Global_2412191[iVar0].f_2 + Global_2412191[iVar0].f_3.f_2) * 0,5f);
		}
		if (func_765(vVar1, &(Global_2412191[iVar0])))
		{
			if (bParam1)
			{
				func_776(&vVar1, Global_2412191[iVar0], Global_2412191[iVar0].f_3, Global_2412191[iVar0].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_822(vector3 vParam0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_522(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_825(vParam0, 1008981770))
			{
				if (!func_782(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_782(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_824(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_823(&(Global_2405072.f_45[iVar0])) };
					if (!func_782(&vVar1, 0, 0, 0, 1))
					{
						if (!func_782(&vParam0, 0, 0, 0, 1))
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

Vector3 func_823(var uParam0)
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

int func_824(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_769(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_825(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_769(vParam0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_826()
{
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_827()
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

int func_828(bool bParam0)
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

int func_829()
{
	return 10000;
}

void func_830(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_165, iParam0);
}

void func_831(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 != iParam0)
	{
		func_853(-1);
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 = iParam0;
		if (func_88() != -1)
		{
			func_852(-1);
		}
		if (func_851() != -1)
		{
			func_850(-1);
		}
		func_849(iParam2);
		func_847(iParam0);
		if (!func_846(iParam0))
		{
			fVar0 = func_845(iParam0);
			if (fVar0 != 1f)
			{
				func_842(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 1);
			}
		}
		if (!func_841(iParam0) || iParam3)
		{
			if (func_840(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x34D79252800B23FF(0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 0);
			}
			else if (unk_0x02A813E6E0380440() < 5)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0x34D79252800B23FF(5);
			}
		}
		if (func_131())
		{
			func_135(27);
		}
		if (bParam1)
		{
			if (!func_688())
			{
				func_838(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 1) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4)) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 0))
			{
				func_252(6);
			}
			func_837();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_133(unk_0xD803B885F5E47A62()) && func_419(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_1), 8);
		}
		func_833();
		if (func_832(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_833()
{
	iVar3 = func_836();
	iVar2 = func_280(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_5(iVar1, iVar2, 1) || func_834(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, iVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_834(int iParam0, int iParam1)
{
	if (func_372(iParam0, 1) && func_372(iParam1, 1))
	{
		return (func_835(iParam0) == func_280(iParam1) || func_835(iParam1) == func_280(iParam0));
	}
	return 0;
}

int func_835(int iParam0)
{
	if (func_372(iParam0, 1))
	{
		return Global_1628237[func_280(iParam0)].f_11.f_484;
	}
	return func_3();
}

int func_836()
{
	iVar0 = func_191();
	if (iVar0 != func_3())
	{
		if (func_1203(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar1].f_1, 16);
			}
		}
	}
	return 0;
}

void func_837()
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

void func_838(int iParam0)
{
	if (func_839() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_839()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_840(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_842(float fParam0)
{
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_843())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = unk_0x0D0A574C76D769AC();
}

int func_843()
{
	switch (func_527())
	{
		case 0:
			return func_844();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_844()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

float func_845(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_847(int iParam0)
{
	iVar0 = func_154(3791, -1, 0);
	iVar1 = func_848(iParam0);
	if (iVar1 != -1)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_152(3791, iVar0, -1, 1, 0);
	}
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_849(int iParam0)
{
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_1628237[iVar0].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0].f_11.f_181 = iParam0;
	}
}

void func_850(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_851()
{
	return Global_2537071.f_5124.f_340;
}

void func_852(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

void func_853(int iParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_32 = iParam0;
}

bool func_854(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_165, iParam0);
}

void func_855(int iParam0, int iParam1)
{
	vLocal_348[iParam0] = iParam1;
}

int func_856()
{
	unk_0xA402F6C87C08815C(6, &iLocal_178, &iLocal_179, &iLocal_180, &uVar0);
	unk_0xA402F6C87C08815C(18, &iLocal_181, &iLocal_182, &iLocal_183, &uVar0);
	unk_0xA402F6C87C08815C(9, &iLocal_184, &iLocal_185, &iLocal_186, &uVar0);
	unk_0xA402F6C87C08815C(12, &iLocal_187, &iLocal_188, &iLocal_189, &uVar0);
	if (Local_234.f_11 == 3)
	{
		func_857();
		vLocal_200[0] = { -1493,738f, -3245,335f, 12,9449f };
		fLocal_207[0] = 8,0591f;
		vLocal_200[1] = { -1613,85f, -3173,267f, 12,9449f };
		fLocal_207[1] = 298,6925f;
		fLocal_210 = 30f;
	}
	Global_2537071.f_5902 = Local_234.f_11;
	Local_223.f_1 = -2071229766;
	return 1;
}

void func_857()
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

int func_858()
{
	return Local_234;
}

int func_859(int iParam0)
{
	return vLocal_348[iParam0];
}

void func_860()
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x218F818E64020C17(1, iVar0, &uVar2, 2);
				if (unk_0xBFF81ED3B99522C7())
				{
				}
				break;
			
			case 185:
				func_861(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_861(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var6, 13))
	{
		if (unk_0xC844350D5D58C99A(Var6))
		{
			if (unk_0x6BC06B42AD71CD8B(Var6))
			{
				iVar0 = unk_0x486F67509A82DB2D(Var6);
				if (iVar0 == func_880())
				{
					if (!func_908())
					{
						if (!func_854(12))
						{
							if (unk_0xC844350D5D58C99A(Var6.f_1))
							{
								if (unk_0xEC560E589DF8370E(Var6.f_1))
								{
									if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var6.f_1)))
									{
										if (unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var6.f_1)) == unk_0xD803B885F5E47A62())
										{
											func_830(12);
										}
									}
								}
							}
						}
					}
					if (unk_0xBFF81ED3B99522C7())
					{
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 3)
						{
							func_879();
							return;
						}
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 2)
						{
							func_879();
							return;
						}
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 5)
						{
							func_878();
							return;
						}
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 7 || Var6.f_9)
						{
							func_867();
							return;
						}
						if (Var6.f_6 == 133987706)
						{
							func_867();
							return;
						}
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 0)
						{
							func_867();
							return;
						}
					}
				}
			}
			if (unk_0xE2F1E99DD161A861(Var6))
			{
				iVar2 = unk_0x96A5FE5834B81CE7(Var6);
				if (iVar2 == func_31())
				{
					if (unk_0xBFF81ED3B99522C7())
					{
						if (Local_234.f_10 == func_3())
						{
							if (unk_0xC844350D5D58C99A(Var6.f_1))
							{
								if (unk_0xEC560E589DF8370E(Var6.f_1))
								{
									if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var6.f_1)))
									{
										if (Var6.f_5 || func_8(6))
										{
											iVar4 = unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var6.f_1));
											if (!func_5(iVar4, func_7(), 1))
											{
												Local_234.f_10 = iVar4;
											}
											else
											{
												iVar5 = func_52();
												if (iVar5 != func_3())
												{
													Local_234.f_10 = iVar5;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!func_908())
					{
						if (!func_854(13))
						{
							if (unk_0xC844350D5D58C99A(Var6.f_1))
							{
								if (unk_0xEC560E589DF8370E(Var6.f_1))
								{
									if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var6.f_1)))
									{
										if (unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(Var6.f_1)) == unk_0xD803B885F5E47A62())
										{
											func_830(13);
										}
									}
								}
							}
						}
					}
					if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 3)
					{
						if (unk_0xC844350D5D58C99A(Var6.f_1))
						{
							if (unk_0xEC560E589DF8370E(Var6.f_1))
							{
								if (!unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var6.f_1)))
								{
									func_862(0);
								}
							}
						}
					}
					if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 5 || Var6.f_6 == -1090665087)
					{
						if (unk_0xC844350D5D58C99A(Var6.f_1))
						{
							if (unk_0xEC560E589DF8370E(Var6.f_1))
							{
								if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var6.f_1)))
								{
									func_862(1);
								}
							}
						}
					}
				}
			}
			if (unk_0xEC560E589DF8370E(Var6))
			{
				if (!func_908())
				{
					if (!func_854(14))
					{
						if (iVar3 == unk_0x940C1429253D3B1B(Var6))
						{
							if (unk_0x34BFC6F0CB887BC2(iVar3))
							{
								iVar19 = unk_0x83FACCC48B68F9D1(iVar3);
								if (func_55(iVar19) || func_54(iVar19))
								{
									func_830(14);
								}
							}
						}
					}
				}
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0xC844350D5D58C99A(Var6.f_1))
			{
				if (unk_0x6BC06B42AD71CD8B(Var6.f_1))
				{
					iVar1 = unk_0x486F67509A82DB2D(Var6.f_1);
					if (iVar1 == func_880())
					{
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 7 || Var6.f_9)
						{
							func_867();
							return;
						}
						if (Var6.f_6 == 133987706)
						{
							func_867();
							return;
						}
						if (unk_0xEAAE5E58EF8421BD(Var6.f_6) == 0)
						{
							func_867();
							return;
						}
					}
				}
			}
		}
	}
}

void func_862(bool bParam0)
{
	if (func_865())
	{
		iVar1 = unk_0x09AC81E49EA267F7(0, 100);
		if (bParam0)
		{
			fVar0 = func_864();
		}
		else
		{
			fVar0 = func_863();
		}
		if (IntToFloat(iVar1) < fVar0)
		{
			if (func_912())
			{
				if (unk_0x526BC32A660C89E6(func_32()) && unk_0x526BC32A660C89E6(func_390()))
				{
					if (unk_0x50B5F6F3C29E9380(func_31(), func_907()))
					{
						unk_0x485AD45ED008282E(func_31(), func_907());
					}
				}
			}
		}
	}
}

var func_863()
{
	return Global_262145.f_14974;
}

var func_864()
{
	return Global_262145.f_14973;
}

int func_865()
{
	if (func_866())
	{
		return 0;
	}
	if (func_60(&(Local_234.f_28)))
	{
		if (!func_48(&(Local_234.f_28), func_44(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_866()
{
	return Global_262145.f_14986;
}

void func_867()
{
	if (func_876())
	{
		Local_234.f_13 = (Local_234.f_13 - func_869(3));
		func_868();
		if (func_34() < func_33())
		{
			Local_234.f_13 = func_33();
		}
	}
}

void func_868()
{
	if (!func_60(&uLocal_219))
	{
		func_59(&uLocal_219, 0, 0);
	}
	else
	{
		func_160(&uLocal_219, 0, 0);
		func_59(&uLocal_219, 0, 0);
	}
}

int func_869(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_875();
		
		case 1:
			return func_874();
		
		case 2:
			return func_873();
		
		case 3:
			return unk_0x09AC81E49EA267F7(func_872(), func_871() + 1);
		
		default:
	}
	return func_870();
}

int func_870()
{
	return 250;
}

int func_871()
{
	return Global_262145.f_14979;
}

var func_872()
{
	return Global_262145.f_14980;
}

var func_873()
{
	return Global_262145.f_14982;
}

var func_874()
{
	return Global_262145.f_14981;
}

var func_875()
{
	return Global_262145.f_14978;
}

int func_876()
{
	if (func_34() <= func_33())
	{
		return 0;
	}
	if (func_60(&uLocal_219))
	{
		if (!func_48(&uLocal_219, func_877(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_877()
{
	return Global_262145.f_14983;
}

void func_878()
{
	if (func_876())
	{
		Local_234.f_13 = (Local_234.f_13 - func_869(1));
		func_868();
		if (func_34() < func_33())
		{
			Local_234.f_13 = func_33();
		}
	}
}

void func_879()
{
	if (func_876())
	{
		Local_234.f_13 = (Local_234.f_13 - func_869(0));
		func_868();
		if (func_34() < func_33())
		{
			Local_234.f_13 = func_33();
		}
	}
}

int func_880()
{
	if (func_912())
	{
		return unk_0x09AD4CE7DA179533(func_390());
	}
	return 0;
}

int func_881()
{
	if (func_913())
	{
		return unk_0xA5FBBC2F619A4DE2(func_32());
	}
	return 0;
}

void func_882(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	if ((((func_133(unk_0xD803B885F5E47A62()) && !func_132(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 8)) && (func_130(unk_0xD803B885F5E47A62()) || func_129(unk_0xD803B885F5E47A62()))) || func_30(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam1);
	func_905(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_419(unk_0xD803B885F5E47A62()) || func_904(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_684(unk_0xD803B885F5E47A62(), 21) || func_684(unk_0xD803B885F5E47A62(), 25)))
		{
			func_518(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1203(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam4 = 1;
			if (func_841(iParam0))
			{
				unk_0x51B096AAC60548C1(func_903(iParam0));
				if (func_840(iParam0, -1))
				{
					unk_0x34D79252800B23FF(0);
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 1);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 1);
					}
					unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 0);
				}
			}
			if (func_846(iParam0))
			{
				fVar1 = func_845(iParam0);
				if (fVar1 != 1f)
				{
					func_842(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_902(iParam0) && func_419(unk_0xD803B885F5E47A62()))
				{
					func_838(1);
					func_901(2);
				}
			}
			func_135(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_121(unk_0xD803B885F5E47A62(), 19))
			{
				func_496(19);
			}
		}
		if (*uParam4 && func_1203(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam4 = 0;
			if (func_841(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 0))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(5);
					unk_0x0674E58A79778E99(&(Global_1674347.f_3), 0);
				}
			}
			if (func_846(iParam0))
			{
				func_900();
				unk_0x0674E58A79778E99(&(Global_1674347.f_3), 1);
			}
			if (uParam7 && !func_133(unk_0xD803B885F5E47A62()))
			{
				if (func_107(unk_0xD803B885F5E47A62()) != 152)
				{
					func_884();
				}
			}
			if (func_247(2))
			{
				func_838(0);
				func_883(2);
			}
		}
	}
}

void func_883(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_884()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_898();
	func_887(1, 1, 0);
	func_885();
}

void func_885()
{
	func_886(0, 0);
}

void func_886(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_887(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_897();
	}
	if (!bParam2)
	{
		func_889(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_888(0);
	func_517();
}

void func_888(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_889(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_896())
		{
			func_895();
		}
		Global_2405072.f_706.f_518 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_893();
		func_528(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_890();
	}
}

void func_890()
{
	if (func_896() && !func_892())
	{
		func_895();
	}
	if (func_892())
	{
		func_891();
	}
	else
	{
		func_893();
		func_528(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_891()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_892()
{
	if ((Global_2405072.f_1744 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_893()
{
	if (func_896() && !func_892())
	{
		func_895();
	}
	func_894();
	Global_2405072.f_706 = 0;
}

void func_894()
{
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_895()
{
	if (func_892())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_896()
{
	if ((Global_2405072.f_1745 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_897()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_898()
{
	func_899();
	Global_2405072.f_2254 = 0;
}

void func_899()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_900()
{
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_901(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), iParam0);
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_903(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_904(int iParam0)
{
	if (func_172(iParam0))
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_905(int iParam0, float fParam1)
{
	iVar0 = func_906(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_497();
	}
}

int func_906(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_907()
{
	if (func_912())
	{
		return unk_0xA5FBBC2F619A4DE2(func_390());
	}
	return 0;
}

int func_908()
{
	if (func_464() || func_909())
	{
		return 1;
	}
	return 0;
}

int func_909()
{
	return func_910(func_7(), 0);
}

int func_910(int iParam0, bool bParam1)
{
	return func_5(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

bool func_911()
{
	return unk_0x437347B10A200C4B(func_881(), 0);
}

bool func_912()
{
	return unk_0xE5DBF9B6126856CA(func_390());
}

bool func_913()
{
	return unk_0xE5DBF9B6126856CA(func_32());
}

int func_914()
{
	func_919(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_918())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_917())
	{
		return 1;
	}
	if (func_916(159))
	{
		if (!func_915())
		{
			return 1;
		}
	}
	if (func_916(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_843() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_843()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_915()
{
	return Global_2450632.f_598;
}

int func_916(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_917()
{
	return Global_2460680;
}

bool func_918()
{
	return Global_2450632.f_593;
}

void func_919(var uParam0)
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
					func_920(iVar0);
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

void func_920(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_1203(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_921(iVar4, &bVar5))
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

int func_921(int iParam0, var uParam1)
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

int func_922(bool bParam0)
{
	if (func_924(1))
	{
		return 1;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_104() == func_3() || !func_1203(func_104(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_658(unk_0xD803B885F5E47A62()))
	{
		if (func_799(unk_0xD803B885F5E47A62()) && func_923())
		{
			return 1;
		}
	}
	return 0;
}

int func_923()
{
	switch (func_126(func_651(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_924(bool bParam0)
{
	if (!func_189(1))
	{
		bVar0 = false;
		if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 != func_3())
		{
			if (func_1203(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 4 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 8) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_543(func_107(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_252(31);
				if (func_110(func_107(unk_0xD803B885F5E47A62())))
				{
					func_252(81);
				}
				if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 != func_3() && unk_0x40B8C182D63932FC(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57))
				{
					Global_1626725 = func_262(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57, -2, 0, 0, 0);
					if (!func_102(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57))
					{
						func_252(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_925()
{
	wait(0);
}

void func_926()
{
	func_699(0);
	iVar0 = func_31();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (unk_0xAFE0D3608EDA7039(iVar0))
		{
			unk_0x046C362CF15F1935(&iVar0);
		}
	}
	iVar0 = func_19();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (unk_0xAFE0D3608EDA7039(iVar0))
		{
			unk_0x046C362CF15F1935(&iVar0);
		}
	}
	if (Local_234.f_11 == 3)
	{
		func_973();
	}
	if (Global_2537071.f_5912 == 1)
	{
		Global_2537071.f_5912 = 0;
	}
	if (func_908())
	{
		func_493(0);
	}
	if (func_419(unk_0xD803B885F5E47A62()))
	{
		func_495(0);
	}
	Global_1674356.f_2 = Local_234.f_112;
	Global_1674356.f_3 = Local_234.f_113;
	func_971(Local_234.f_30, Local_234.f_11, Local_234.f_12, -1082130432);
	func_927(1, 0);
	func_420();
	func_501();
	unk_0x10FAF14A60A0DBE1();
}

void func_927(bool bParam0, int iParam1)
{
	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 167 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 168)
	{
		func_969();
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 4);
	}
	if ((func_158() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 190 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 192)
		{
			func_951(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 164 || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 208) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 250) || Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 == 237)
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
	}
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 != -1)
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_33 = -1;
		if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_133(unk_0xD803B885F5E47A62()))
		{
			func_838(0);
		}
	}
	else if (func_949(unk_0xD803B885F5E47A62()) != -1)
	{
		func_853(-1);
	}
	func_948(func_3());
	if (func_247(16))
	{
		func_883(16);
	}
	func_945(0);
	func_849(-1);
	func_944();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_943(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_940(iVar1);
		iVar1++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 0))
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(5);
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 5))
	{
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_120();
	if ((func_98(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_939(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_157(iVar2))
	{
		func_936(-1, 1);
	}
	else if (((((func_119(iVar2) || func_935(iVar2)) || func_934(iVar2)) || func_146(iVar2)) || func_145(iVar2)) || func_144(iVar2))
	{
	}
	else
	{
		func_936(-1, 1);
	}
	func_496(19);
	func_496(20);
	func_496(21);
	func_496(22);
	func_496(27);
	func_883(3);
	func_883(4);
	func_883(7);
	func_933();
	if (func_419(unk_0xD803B885F5E47A62()))
	{
		func_495(0);
	}
	func_496(29);
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 = func_3();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_884();
	}
	if (!func_133(unk_0xD803B885F5E47A62()))
	{
		func_900();
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 6))
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 6);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 7))
	{
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 7);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 8))
	{
		func_932("IMPEXP_SELFDES", 0);
		func_930("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 8);
	}
	func_928(iVar2, 0);
}

void func_928(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_929(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_1674347.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_929(iParam0));
		unk_0x0674E58A79778E99(&(Global_1674347.f_3), 9);
	}
}

char* func_929(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_930(char* sParam0)
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
					func_452();
					Global_111638.f_14136[iVar0].f_99[Global_19486] = 0;
					if (func_931(iVar0))
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

int func_931(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_932(char* sParam0, int iParam1)
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

void func_933()
{
	if (func_498(unk_0xD803B885F5E47A62()))
	{
		func_496(25);
	}
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_935(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_936(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_120();
	}
	if (iParam0 > 0)
	{
		if (func_191() != func_3())
		{
			if (func_659(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_2514606.f_93[func_938(iParam0)] = 1;
			}
		}
		iVar0 = func_938(159);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(157);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(148);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(164);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(142);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(152);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(166);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(170);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(173);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(179);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(200);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(201);
		if (func_937(iVar0, Global_262145.f_12606, bParam1))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(182);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(183);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(185);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(186);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(180);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(195);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(197);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(198);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(207);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(208);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(209);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(214);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(215);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(216);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(217);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(218);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(219);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(220);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(221);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

int func_937(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_121(unk_0xD803B885F5E47A62(), 19) && !func_121(unk_0xD803B885F5E47A62(), 20)) && !func_121(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_60(&(Global_2514606[iParam0])))
	{
		if (func_388(&(Global_2514606[iParam0]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_939(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_120();
	}
	if (iParam0 > 0)
	{
		if (func_191() != func_3())
		{
			Global_2514606.f_93[func_938(iParam0)] = 1;
		}
		iVar0 = func_938(155);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(163);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(160);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(153);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(162);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(154);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(171);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(172);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(199);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(194);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(193);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(210);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(205);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(189);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_938(211);
		if (func_937(iVar0, Global_262145.f_12607, 0))
		{
			func_43(&(Global_2514606[iVar0]));
			func_59(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

void func_940(int iParam0)
{
	if (!func_941(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_337[iParam0], func_942(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_337[iParam0] = { func_942() };
	}
	if (!func_941(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_324[iParam0], func_942(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_324[iParam0] = { func_942() };
	}
}

bool func_941(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_942()
{
	return vVar0;
}

void func_943(int iParam0)
{
	if (!func_941(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_150[iParam0], func_942(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_150[iParam0] = { func_942() };
	}
	if (!func_941(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_125[iParam0], func_942(), 0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_125[iParam0] = { func_942() };
	}
}

void func_944()
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_3();
	if (unk_0xEAE0D21A50E6C7F4(Global_1573344, 3))
	{
		unk_0x0674E58A79778E99(&Global_1573344, 3);
	}
}

void func_945(bool bParam0)
{
	if (bParam0)
	{
		if (!func_685(unk_0xD803B885F5E47A62(), 14))
		{
			func_947(14);
		}
	}
	else if (func_685(unk_0xD803B885F5E47A62(), 14))
	{
		func_946(14);
	}
}

void func_946(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_5), iParam0);
}

void func_947(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_5), iParam0);
}

void func_948(int iParam0)
{
	if (func_172(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_484 != iParam0)
			{
				Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_484 = iParam0;
				if (iParam0 != func_3())
				{
				}
			}
		}
	}
}

int func_949(int iParam0)
{
	if (func_950(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_32;
	}
	return -1;
}

int func_950(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_951(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_339(iParam0, iParam1) && func_968(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		func_955(iVar0, bParam2, bParam3);
		func_952(iVar0, 1);
	}
}

void func_952(int iParam0, bool bParam1)
{
	if (!func_954(iParam0))
	{
		return;
	}
	func_322(func_953(iParam0), bParam1, -1, 1);
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_6 = bParam1;
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_954(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_955(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = false;
	iVar2 = func_562(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_967(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_966(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_965(iParam0, 0, bParam2);
	}
	else if (func_963(iParam0, bParam2))
	{
		iVar0 = func_962(iVar2, 0);
		iVar3 = func_639(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_961(iVar2, bParam2);
		iVar5 = func_962(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_960(iVar2) && func_959(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_967(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_958(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_957(iParam0, (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 - (func_961(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_962(iVar2, bParam2) / func_958(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_960(iVar2) && func_959(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_956(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_956(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == func_3())
	{
		return;
	}
	if (func_329(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0].f_274.f_183[iVar0].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_957(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2)
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_2 = iParam1;
	}
}

int func_958(int iParam0, int iParam1)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_329(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_959(int iParam0, int iParam1)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_329(iParam1) && func_960(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_960(int iParam0)
{
	return func_185(iParam0) == 5;
}

int func_961(int iParam0, bool bParam1)
{
	iVar1 = func_185(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_962(int iParam0, bool bParam1)
{
	iVar1 = func_185(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_337(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_959(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_963(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_323(15384, -1, -1);
	}
	return func_323(func_964(iParam0), -1, -1);
}

int func_964(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_965(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_322(15384, bParam1, -1, 1);
		return;
	}
	func_322(func_964(iParam0), bParam1, -1, 1);
}

int func_966(int iParam0, bool bParam1)
{
	iVar0 = Global_2513475[iParam0];
	iVar1 = func_562(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_960(iVar1))
	{
		if (func_959(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_967(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_968(int iParam0, int iParam1)
{
	if (func_339(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_969()
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 28);
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 29);
	func_970(24);
}

void func_970(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

void func_971(var uParam0, var uParam1, var uParam2, int iParam3)
{
	sVar0 = unk_0xBB0808A181D4745C();
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_11 = Global_1674356.f_11;
	Var1.f_12 = Global_1674356.f_12;
	Var1.f_13 = Global_1674356.f_14;
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674356.f_15;
			Var15.f_15 = Global_1674356.f_16;
			Var15.f_16 = Global_1674356.f_17;
			unk_0x28C4917D9A295449(&Var15);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674356.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0x9E59224EB51EDA45(&Var32);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674356.f_15;
			Var49.f_15 = uParam0;
			unk_0xB1DA4601C652C7C5(&Var49);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674356.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0xBC121608DEC826ED(&Var65);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674356.f_15;
			Var82.f_15 = uParam0;
			unk_0x8CE98B2741F42F3A(&Var82);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674356.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = uParam2;
			unk_0xD97D13FD5AE7CC65(&Var98);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1674356.f_15;
			unk_0x7E3D8B81F0B41A06(&Var116);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674356.f_15;
			unk_0xAB72C270A0CBFA80(&Var134);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1674356.f_15;
			unk_0x4C3BFB72890DD032(&Var153);
		}
	}
	func_972();
}

void func_972()
{
	Global_1674356 = { Var0 };
}

void func_973()
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

void func_974(bool bParam0, bool bParam1)
{
	if (!func_854(0))
	{
		uVar1 = func_1032(func_61(), bParam0, bVar0, bParam1);
		func_975(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_830(0);
	}
}

void func_975(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_646(unk_0xD803B885F5E47A62());
		Global_1674635.f_4 = func_601();
		Global_1674635.f_5 = func_600();
		if (func_129(unk_0xD803B885F5E47A62()) || func_130(unk_0xD803B885F5E47A62()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1026(bParam9);
		Global_1674635.f_8 = unk_0xDD0E7998AE8AD485();
		Global_1674635.f_9 = func_642(bParam0);
		Global_1674635.f_10 = uParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_633();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_642(func_113(1));
		}
		Global_1674635.f_24 = func_1025(unk_0xD803B885F5E47A62());
		Global_1674635.f_28 = func_643(unk_0xD803B885F5E47A62());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1023(iVar0);
	}
	else
	{
		iVar0 = func_107(unk_0xD803B885F5E47A62());
	}
	if (func_110(iVar0))
	{
		Global_1674374.f_2 = func_601();
		Global_1674374.f_3 = func_600();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = unk_0xDD0E7998AE8AD485();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = uParam1;
		Global_1674374.f_19 = func_1019(iVar0, bParam0, func_1022(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
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
			Global_1674374.f_45 = func_639(func_191(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1018(func_191(), iParam2);
		}
		func_1016(iVar0);
	}
	else if (func_118(iVar0))
	{
		Global_1674428.f_2 = func_601();
		Global_1674428.f_3 = func_600();
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
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1014(iVar0);
	}
	else if (func_146(iVar0))
	{
		Global_1674491.f_2 = func_601();
		Global_1674491.f_3 = func_600();
		Global_1674491.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = uParam1;
		Global_1674491.f_7 = func_633();
		Global_1674491.f_42 = func_636(func_156(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_170(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_642((func_569(iVar1) || func_568(iVar1)));
		Global_1674491.f_30 = func_642(func_1013(iVar1));
		Global_1674491.f_32 = func_642(func_566(iVar1));
		Global_1674491.f_33 = func_642(func_567(iVar1));
		Global_1674491.f_34 = func_642(func_1012(iVar1));
		Global_1674491.f_35 = func_642(func_565(0, iVar1) == 1);
		Global_1674491.f_36 = func_642(func_1011(iVar1));
		Global_1674491.f_37 = func_642(func_1010(iVar1));
		Global_1674491.f_38 = func_642(func_1009(iVar1));
		Global_1674491.f_39 = func_642(func_337(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_642(func_337(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_642(func_337(iVar1, iVar2, 1));
		if (func_1008(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_1007(iVar1))
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
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_1005(iVar0);
	}
	else if (func_145(iVar0))
	{
		Global_1674535.f_2 = func_601();
		Global_1674535.f_3 = func_600();
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674535.f_10 = func_642(bParam0);
		Global_1674535.f_11 = uParam1;
		Global_1674535.f_17 = func_634(func_104());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_1004();
		Global_1674535.f_29 = func_154(6107, -1, 0);
		Global_1674535.f_30 = func_154(6103, -1, 0);
		Global_1674535.f_31 = func_154(6104, -1, 0);
		Global_1674535.f_32 = func_154(6106, -1, 0);
		Global_1674535.f_33 = func_154(6105, -1, 0);
		Global_1674535.f_34 = func_154(6108, -1, 0);
		Global_1674535.f_36 = func_642(func_113(1));
		Global_1674535.f_37 = func_1002();
		func_992();
		func_990(iVar0);
	}
	else if (func_144(iVar0))
	{
		Global_1674589.f_2 = func_601();
		Global_1674589.f_3 = func_600();
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674589.f_10 = func_642(bParam0);
		Global_1674589.f_11 = uParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_154(6157, -1, 0);
		Global_1674589.f_25 = func_154(6162, -1, 0);
		Global_1674589.f_26 = func_154(6163, -1, 0);
		Global_1674589.f_27 = func_642((((func_632() || func_631()) || func_630()) || func_629(unk_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_154(6164, -1, 0);
		Global_1674589.f_29 = func_642(func_628());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_601();
		Global_1674589.f_42 = func_642(func_113(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_988(iVar0);
	}
	else if (func_139(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_601();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_600();
		}
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1026(0);
		Global_1674725.f_7 = func_633();
		Global_1674725.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674725.f_10 = func_642(bParam0);
		Global_1674725.f_11 = uParam1;
		if (func_191() != -1)
		{
			Global_1674725.f_17 = func_627(func_191());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_643(unk_0xD803B885F5E47A62());
		Global_1674725.f_29 = func_642(func_987(unk_0xD803B885F5E47A62()));
		Global_1674725.f_30 = func_642(func_986(unk_0xD803B885F5E47A62()));
		Global_1674725.f_31 = func_609(unk_0xD803B885F5E47A62());
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_642(func_113(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_984(iVar0);
	}
	else if (func_143(iVar0))
	{
		Global_1674671.f_2 = func_601();
		Global_1674671.f_3 = func_600();
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1026(0);
		Global_1674671.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674671.f_10 = func_642(bParam0);
		Global_1674671.f_11 = uParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_643(unk_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_626(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_610(unk_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_609(unk_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_642(func_608(unk_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_642(func_607(unk_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_642(func_606(unk_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_642(func_605(unk_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_604(unk_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_603(unk_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_602(unk_0xD803B885F5E47A62());
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_642(func_113(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_982(iVar0);
	}
	else if (func_138(iVar0))
	{
		Global_1674809.f_2 = func_601();
		Global_1674809.f_3 = func_600();
		Global_1674809.f_4 = func_645(func_191());
		Global_1674809.f_5 = func_644(func_191());
		if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_633();
		Global_1674809.f_9 = unk_0xDD0E7998AE8AD485();
		Global_1674809.f_10 = func_642(bParam0);
		Global_1674809.f_11 = uParam1;
		if (func_104() != -1)
		{
			Global_1674809.f_17 = func_627(func_104());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_981(unk_0xD803B885F5E47A62());
		Global_1674809.f_27 = func_642(func_599(unk_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_597(21, -1);
		Global_1674809.f_29 = func_642(func_980(unk_0xD803B885F5E47A62()));
		func_978(iVar0);
	}
	else if (func_137(iVar0))
	{
		Global_1674884.f_6 = func_645(func_191());
		Global_1674884.f_7 = func_644(func_191());
		if (func_372(unk_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_642(func_113(1));
		}
		Global_1674884.f_10 = func_633();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (unk_0xDD0E7998AE8AD485() - Global_1702973);
		Global_1674884.f_14 = uParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_976(iVar0);
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
			if ((func_419(unk_0xD803B885F5E47A62()) || func_128(unk_0xD803B885F5E47A62())) || func_371(unk_0xD803B885F5E47A62()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_976(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_1674884);
	func_977();
}

void func_977()
{
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_978(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_979();
}

void func_979()
{
	Global_1674809 = { Var0 };
}

int func_980(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_981(int iParam0)
{
	if (func_107(iParam0) == 243)
	{
		return func_142(iParam0);
	}
	return -1;
}

void func_982(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_1674671);
	func_983();
}

void func_983()
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

void func_984(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_1674725);
	func_985();
}

void func_985()
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

bool func_986(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 0);
}

bool func_987(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

void func_988(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_1674589);
	func_989();
}

void func_989()
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

void func_990(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_1674535);
	func_991();
}

void func_991()
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

void func_992()
{
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_584(12));
		func_583(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1].f_66 != 0 && func_994(Global_1323615[iVar1].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_993(Global_1323615[iVar1].f_66))
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

int func_993(int iParam0)
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

int func_994(int iParam0, bool bParam1)
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
		if (!func_1001())
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
		if ((((!func_1000() && !func_999()) && !func_998()) && !func_997()) && !func_1001())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_998())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_996(iParam0))
		{
			return 0;
		}
	}
	if (!func_995(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_995(int iParam0)
{
	if (!func_188())
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

int func_996(int iParam0)
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

int func_997()
{
	return 0;
}

int func_998()
{
	return 1;
}

int func_999()
{
	return 1;
}

int func_1000()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_1001()
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

var func_1002()
{
	uVar0 = func_1003();
	if (!func_171())
	{
		if (func_191() != func_3())
		{
			uVar0 = func_1025(func_191()) + 1;
		}
	}
	return uVar0;
}

int func_1003()
{
	return func_1025(unk_0xD803B885F5E47A62()) + 1;
}

int func_1004()
{
	return func_154(6113, -1, 0);
}

void func_1005(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_1674491);
	func_1006();
}

void func_1006()
{
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_1007(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_1008(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 13);
}

int func_1009(int iParam0)
{
	if (iParam0 != func_3())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 12) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 13)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1010(int iParam0)
{
	if (iParam0 != func_3())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1011(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1012(int iParam0)
{
	if (iParam0 != func_3())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 6) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1013(int iParam0)
{
	if (iParam0 == func_3())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 9);
}

void func_1014(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_1674428);
	func_1015();
}

void func_1015()
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

void func_1016(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_1674374);
	func_1017();
}

void func_1017()
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

int func_1018(int iParam0, int iParam1)
{
	bVar0 = func_337(iParam0, iParam1, 2);
	bVar1 = func_337(iParam0, iParam1, 1);
	bVar2 = func_337(iParam0, iParam1, 0);
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

int func_1019(int iParam0, bool bParam1, bool bParam2)
{
	if (func_157(iParam0))
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
	else if (func_641(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_99(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_110(iParam0))
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
		unk_0xF9647457141B11A7(func_645(func_191()), func_644(func_191()), func_601(), func_600(), iVar1, iVar0);
	}
	func_1021(iVar0);
	func_1020(iVar0);
	return iVar0;
}

void func_1020(int iParam0)
{
	iVar0 = func_154(3968, -1, 0);
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
	func_152(3968, iVar0, -1, 1, 0);
}

void func_1021(int iParam0)
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

int func_1022(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_419(unk_0xD803B885F5E47A62()) || func_371(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_1023(var uParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_1674635);
	func_1024();
}

void func_1024()
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

int func_1025(int iParam0)
{
	if (func_280(iParam0) == func_3())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_1026(bool bParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_646(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_107(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1031(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_1029(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1028(unk_0xD803B885F5E47A62());
			if (func_140(func_141(unk_0xD803B885F5E47A62())))
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
			iVar2 = func_1028(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1027(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1027(unk_0xD803B885F5E47A62());
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

int func_1027(int iParam0)
{
	if (func_107(unk_0xD803B885F5E47A62()) == 238 || func_107(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_1628237[iParam0].f_11.f_499;
	}
	return -1;
}

int func_1028(int iParam0)
{
	if (func_107(unk_0xD803B885F5E47A62()) == 237 || func_107(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_1628237[iParam0].f_11.f_498;
	}
	return -1;
}

int func_1029(int iParam0)
{
	return func_1030(iParam0, 150);
}

int func_1030(int iParam0, int iParam1)
{
	if (func_646(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_1031(int iParam0)
{
	return func_1030(iParam0, 236);
}

int func_1032(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_1033(struct<21> Param0)
{
	func_1201(func_1202(Param0), Param0);
	unk_0x3A4967AE7C71F999(func_1175(170, -1, -1, -1, -1, -1));
	unk_0x0BEC04ECA8485A3A(func_1147(170, -1, -1, -1));
	unk_0x28E5F00F131890E3(func_1078(170, -1, 1, -1, -1, -1));
	func_1075(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_234, 114);
	unk_0x35B62793EAE9ADDF(&vLocal_348, 97);
	unk_0x256D93AFAE851A7A(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_193[iVar0] = -1;
		iVar0++;
	}
	func_1034(0, 0, 0);
	return 1;
}

void func_1034(int iParam0, int iParam1, bool bParam2)
{
	func_1074();
	if (func_658(unk_0xD803B885F5E47A62()))
	{
		func_1036(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_910(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_1674342, 0);
				break;
			}
	}
	if (!func_171() && !func_372(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_691())
		{
			func_901(3);
		}
	}
	func_901(4);
	if (func_189(0))
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_57 = func_191();
	}
	if (func_110(iParam0))
	{
		func_1017();
		Global_1674374.f_18 = func_634(func_104());
	}
	else if (func_118(func_949(unk_0xD803B885F5E47A62())))
	{
		func_1015();
		Global_1674428.f_18 = func_634(func_104());
	}
	if (bParam2)
	{
		if (!func_688())
		{
			func_838(1);
		}
	}
	func_1035();
}

void func_1035()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0].f_1 = func_3();
		Global_1366905.f_534[iVar0].f_9 = 0;
		iVar0++;
	}
}

void func_1036(bool bParam0)
{
	func_970(33);
	func_970(34);
	func_970(35);
	func_970(36);
	func_970(37);
	func_970(38);
	func_970(39);
	func_970(40);
	func_970(43);
	func_970(41);
	func_970(54);
	func_970(42);
	func_970(47);
	func_1073(23);
	func_1073(24);
	func_970(92);
	unk_0x0674E58A79778E99(&(Global_2537071.f_1737), 2);
	func_1072();
	func_1067();
	func_1062();
	func_1057();
	func_1046();
	func_1042();
	func_1038();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1037(3))
	{
		func_1073(3);
	}
	else if (func_1037(4))
	{
		func_1073(4);
	}
	else if (func_1037(5))
	{
		func_1073(5);
	}
	else if (func_1037(6))
	{
		func_1073(6);
	}
	else if (func_1037(7))
	{
		func_1073(7);
	}
	else if (((((((((((((((((func_1037(0) || func_1037(1)) || func_1037(2)) || func_1037(8)) || func_1037(9)) || func_1037(10)) || func_1037(11)) || func_1037(12)) || func_1037(13)) || func_1037(14)) || func_1037(15)) || func_1037(16)) || func_1037(17)) || func_1037(18)) || func_1037(19)) || func_1037(20)) || func_1037(21)) || func_1037(22))
	{
		func_1073(8);
		func_1073(0);
		func_1073(1);
		func_1073(2);
		func_1073(9);
		func_1073(10);
		func_1073(11);
		func_1073(12);
		func_1073(13);
		func_1073(14);
		func_1073(15);
		func_1073(16);
		func_1073(17);
		func_1073(18);
		func_1073(19);
		func_1073(20);
		func_1073(21);
		func_1073(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1037(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_14[iVar0], iVar1);
}

void func_1038()
{
	if (func_1040())
	{
		func_1039(0);
		func_1039(1);
		func_1039(2);
		func_1039(3);
	}
}

void func_1039(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_33[iVar0]), iVar1);
}

int func_1040()
{
	if (((func_1041(0) || func_1041(1)) || func_1041(2)) || func_1041(3))
	{
		return 1;
	}
	return 0;
}

bool func_1041(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_33[iVar0], iVar1);
}

void func_1042()
{
	if (func_1044())
	{
		func_1043(4);
		func_1043(5);
		func_1043(6);
		func_1043(7);
	}
}

void func_1043(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_31[iVar0]), iVar1);
}

int func_1044()
{
	if (((func_1045(4) || func_1045(5)) || func_1045(6)) || func_1045(7))
	{
		return 1;
	}
	return 0;
}

bool func_1045(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_31[iVar0], iVar1);
}

void func_1046()
{
	if (func_1056())
	{
		func_1055(8);
		func_1055(9);
		func_1055(10);
		func_1055(12);
		func_1055(13);
		func_1055(14);
		func_1055(19);
		func_1055(20);
		func_1055(21);
		func_1055(22);
		func_1055(23);
		func_1055(24);
		func_1055(25);
		func_1055(26);
		func_1055(15);
		func_1055(16);
		func_1055(17);
		func_1055(18);
		func_1055(35);
		func_1055(45);
		func_1055(46);
		if (func_1054(11))
		{
			func_1055(11);
			iVar0 = func_154(7226, -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_152(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1054(48))
	{
		if (func_1052(151, 3))
		{
			func_1050(151, 3);
		}
		func_1055(48);
	}
	if (func_1054(49))
	{
		if (func_1052(152, 3))
		{
			func_1050(152, 3);
		}
		func_1055(49);
	}
	if (func_1054(50))
	{
		if (func_1052(153, 3))
		{
			func_1050(153, 3);
		}
		func_1055(50);
	}
	if (func_1054(51))
	{
		if (func_1052(func_1047(), 3))
		{
			func_1050(func_1047(), 3);
		}
		func_1055(51);
	}
}

int func_1047()
{
	if (func_1049())
	{
		func_1048(154, Global_19486, 1);
	}
	return 154;
}

void func_1048(int iParam0, int iParam1, int iParam2)
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

int func_1049()
{
	iVar0 = func_280(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_3()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1050(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1051(iParam0, iVar0, 0);
			func_1048(iParam0, iVar0, 0);
		}
	}
}

void func_1051(int iParam0, int iParam1, int iParam2)
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

int func_1052(int iParam0, int iParam1)
{
	if (func_1053(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1053(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

bool func_1054(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_26[iVar0], iVar1);
}

void func_1055(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_26[iVar0]), iVar1);
}

int func_1056()
{
	if (((((((((((((((((((((func_1054(8) || func_1054(9)) || func_1054(10)) || func_1054(12)) || func_1054(11)) || func_1054(13)) || func_1054(14)) || func_1054(19)) || func_1054(20)) || func_1054(21)) || func_1054(22)) || func_1054(23)) || func_1054(24)) || func_1054(25)) || func_1054(26)) || func_1054(15)) || func_1054(16)) || func_1054(17)) || func_1054(18)) || func_1054(35)) || func_1054(45)) || func_1054(46))
	{
		return 1;
	}
	return 0;
}

void func_1057()
{
	if (func_1061())
	{
		func_1060(0);
		func_1060(1);
		func_1060(2);
		func_1060(3);
		func_1060(4);
		func_1060(5);
		if (func_1059(32))
		{
			if (func_1052(func_1058(), 3))
			{
				func_1050(func_1058(), 3);
			}
			func_1060(32);
		}
	}
}

int func_1058()
{
	if (func_1049())
	{
		func_1048(12, Global_19486, 1);
	}
	return 12;
}

bool func_1059(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_23[iVar0], iVar1);
}

void func_1060(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_23[iVar0]), iVar1);
}

int func_1061()
{
	if ((((func_1059(1) || func_1059(0)) || func_1059(2)) || func_1059(4)) || func_1059(5))
	{
		return 1;
	}
	return 0;
}

void func_1062()
{
	if (func_1066())
	{
		func_1065(0);
		func_1065(1);
		func_1065(2);
		func_1065(3);
		func_1065(4);
		func_1065(5);
		func_1065(6);
		func_1065(7);
		if (func_1064(8))
		{
			func_1065(8);
		}
		if (func_1064(15))
		{
			if (func_1052(func_1063(), 3))
			{
				func_1050(func_1063(), 3);
			}
			func_1065(15);
		}
	}
}

int func_1063()
{
	if (func_1049())
	{
		func_1048(20, Global_19486, 1);
	}
	return 20;
}

bool func_1064(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_21[iVar0], iVar1);
}

void func_1065(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_21[iVar0]), iVar1);
}

int func_1066()
{
	if ((((((((func_1064(0) || func_1064(1)) || func_1064(2)) || func_1064(3)) || func_1064(4)) || func_1064(5)) || func_1064(6)) || func_1064(7)) || func_1064(8))
	{
		return 1;
	}
	return 0;
}

void func_1067()
{
	if (func_1071())
	{
		func_1070(0);
		func_1070(1);
		func_1070(2);
		func_1070(3);
		func_1070(4);
		func_1070(5);
		func_1070(6);
		func_1070(7);
		func_1070(8);
		func_1070(9);
		func_1070(10);
		func_1070(11);
		func_1070(12);
		if (func_1069(13))
		{
			if (func_1052(func_1068(), 3))
			{
				func_1050(func_1068(), 3);
			}
			func_1070(13);
		}
	}
}

int func_1068()
{
	if (func_1049())
	{
		func_1048(76, Global_19486, 1);
	}
	return 76;
}

bool func_1069(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_19[iVar0], iVar1);
}

void func_1070(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_19[iVar0]), iVar1);
}

int func_1071()
{
	if ((((((((((((func_1069(0) || func_1069(1)) || func_1069(2)) || func_1069(3)) || func_1069(4)) || func_1069(5)) || func_1069(6)) || func_1069(7)) || func_1069(8)) || func_1069(9)) || func_1069(10)) || func_1069(11)) || func_1069(12))
	{
		return 1;
	}
	return 0;
}

void func_1072()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1073(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_1074()
{
	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

int func_1075(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1077();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1076())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_1077();
					}
					else
					{
						return 0;
					}
				}
				if (func_918())
				{
					if (!bParam2)
					{
						func_1077();
					}
					else
					{
						return 0;
					}
				}
				if (func_916(157))
				{
					if (!bParam2)
					{
						func_1077();
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
					func_1077();
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
				func_1077();
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
			func_1077();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1076()
{
	return Global_1312854;
}

void func_1077()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_1078(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_1146(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_1142(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_1135(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_1120(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
		
		case 233:
			return func_1110(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_1103(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_1101(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_1100(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_1092(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_1085(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_1079(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_1079(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_1084(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_1083(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_1082(func_1025(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_1081(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1080(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1080(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1081(int iParam0, int iParam1)
{
	return func_1080(iParam0, iParam1) > 0;
}

int func_1082(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_1083(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1084(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_1085(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_1091(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_1090(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_1088(func_1025(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_1087(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1086(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1086(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1087(int iParam0, int iParam1)
{
	return func_1086(iParam0, iParam1) > 0;
}

int func_1088(int iParam0, int iParam1, int iParam2)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_3())
			{
				if (func_372(iParam2, 1))
				{
					vVar0 = { func_1089(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

Vector3 func_1089(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

int func_1090(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_1091(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_1092(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1099(iParam0))
		{
			iVar0 = (iVar0 + func_1098(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_1097(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_1096(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_1095(func_1025(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_1094(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1093(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1093(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1094(int iParam0, int iParam1)
{
	return func_1093(iParam0, iParam1) > 0;
}

int func_1095(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1096(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_1097(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_1098(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_1025(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1099(int iParam0)
{
	return 0;
}

int func_1100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_1101(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_1102(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1102(int iParam0)
{
	return 1;
}

int func_1103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_1109(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_1104(iParam0, func_1108() + 1));
	}
	return iVar0;
}

int func_1104(int iParam0, int iParam1)
{
	if (func_1107(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_1106(iParam0, iParam1);
			iVar2 = func_1105(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_1109(iParam0))
		{
			if (iVar0 > Global_262145.f_17914)
			{
				iVar0 = Global_262145.f_17914;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17913)
			{
				iVar0 = Global_262145.f_17913;
			}
			if (iVar0 > Global_262145.f_17912)
			{
				iVar0 = Global_262145.f_17912;
			}
		}
	}
	return iVar0;
}

int func_1105(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17951;
		
		case 10:
			return Global_262145.f_17976;
		
		default:
	}
	return 1;
}

int func_1106(int iParam0, int iParam1)
{
	if (func_1109(iParam0))
	{
		if (iParam1 >= Global_262145.f_17915)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17952;
		
		case 10:
			return Global_262145.f_17977;
		
		default:
	}
	return 8;
}

int func_1107(int iParam0)
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

int func_1108()
{
	if (func_191() == func_3())
	{
		return 0;
	}
	return func_1025(func_191());
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_1110(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_1119(iParam0))
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_1116(iParam0, func_1025(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_1115(iParam0, func_1025(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1114(0, iParam1) != -1)
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_1113(func_1025(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1112(iParam0))
		{
			iVar0 = (iVar0 + func_1111(iParam0));
		}
	}
	return iVar0;
}

int func_1111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1112(int iParam0)
{
	return func_1111(iParam0) > 0;
}

int func_1113(var uParam0, int iParam1)
{
	return 2;
}

int func_1114(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_154(5326, -1, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_1116(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_1119(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_1118(iParam0))
	{
		iVar0 = func_1118(iParam0);
	}
	else if (iVar0 < func_1117(iParam0))
	{
		iVar0 = func_1117(iParam0);
	}
	return iVar0;
}

int func_1117(int iParam0)
{
	return 1;
}

int func_1118(int iParam0)
{
	return 4;
}

int func_1119(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1134(iParam0))
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_1127(iParam0, func_1025(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_1126(iParam0, func_1025(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1125(0, iParam1) != -1)
		{
			if (iParam3 != func_3())
			{
				iVar0 = (iVar0 + func_1123(func_1025(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1122(iParam0))
		{
			iVar0 = (iVar0 + func_1121(iParam0));
		}
	}
	return iVar0;
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1122(int iParam0)
{
	return func_1121(iParam0) > 0;
}

int func_1123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_1124(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1124(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_1124(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_1125(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_1127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_1133(iParam0))
	{
		iVar1 = func_1132(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_1131(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_1130(iParam2))
		{
			iVar0 = func_1130(iParam2);
		}
	}
	if (iVar0 > func_1129(iParam0))
	{
		iVar0 = func_1129(iParam0);
	}
	else if (iVar0 < func_1128(iParam0))
	{
		iVar0 = func_1128(iParam0);
	}
	return iVar0;
}

int func_1128(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_1129(int iParam0)
{
	if (!func_1133(iParam0))
	{
		if (func_1134(iParam0))
		{
			if (func_1124(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_1130(int iParam0)
{
	if (iParam0 == func_3() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_1131(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_1132(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_1133(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_1134(int iParam0)
{
	if (func_1133(iParam0) || func_1131(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1135(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_1140(iParam0, func_1108() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_1139(iParam0))
		{
			iVar0 = (iVar0 + func_1140(iParam0, func_1108() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_1138(iParam0, func_1108() + 1));
	}
	if (!bParam3)
	{
		if (func_1137(iParam0))
		{
			iVar0 = (iVar0 + func_1136(iParam0));
		}
	}
	return iVar0;
}

int func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1137(int iParam0)
{
	return func_1136(iParam0) > 0;
}

int func_1138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_1140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_1141(iParam0))
	{
		if (iParam2 <= Global_262145.f_21206)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21207)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_1139(iParam0))
	{
		if (iParam1 < Global_262145.f_21166)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 14:
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

int func_1142(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_1145(iParam0, func_1108() + 1, iParam2));
	iVar0 = (iVar0 + func_1143(iParam0));
	return iVar0;
}

int func_1143(int iParam0)
{
	if (func_1144(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_1144(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1145(int iParam0, var uParam1, int iParam2)
{
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_1147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_1174(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_1171(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_1168(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_1165(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_1162(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_1161(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_1160();
		
		case 218:
			return func_1159();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_1158(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_1157(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_1154(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_1151(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_1148(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_1148(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_1081(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1149(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1149(int iParam0, var uParam1)
{
	if (func_1081(iParam0, uParam1))
	{
		return (func_1080(iParam0, uParam1) + func_1150(iParam0, uParam1));
	}
	return 0;
}

int func_1150(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_1151(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_1087(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1152(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1152(int iParam0, int iParam1)
{
	if (func_1087(iParam0, iParam1))
	{
		return (func_1086(iParam0, iParam1) + func_1153(iParam0, iParam1));
	}
	return 0;
}

int func_1153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_1154(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_1094(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1155(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1155(int iParam0, int iParam1)
{
	if (func_1094(iParam0, iParam1))
	{
		return (func_1093(iParam0, iParam1) + func_1156(iParam0, iParam1));
	}
	return 0;
}

int func_1156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_1157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_1158(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_1159()
{
	iVar0 = 32;
	return iVar0;
}

int func_1160()
{
	iVar0 = 8;
	return iVar0;
}

int func_1161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 = (iVar0 + 3);
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_1104(iParam0, func_1108() + 1));
	}
	return iVar0;
}

int func_1162(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_1112(iParam0))
		{
			iVar0 = (iVar0 + func_1163(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1163(int iParam0, var uParam1)
{
	if (func_1112(iParam0))
	{
		return (func_1111(iParam0) + func_1164(iParam0, uParam1));
	}
	return 0;
}

int func_1164(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_1165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_1122(iParam0))
		{
			iVar0 = (iVar0 + func_1166(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1166(int iParam0, int iParam1)
{
	if (func_1122(iParam0))
	{
		return (func_1121(iParam0) + func_1167(iParam0, iParam1));
	}
	return 0;
}

int func_1167(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_1168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_1137(iParam0))
		{
			iVar0 = (iVar0 + func_1169(iParam0));
		}
	}
	return iVar0;
}

int func_1169(int iParam0)
{
	if (func_1137(iParam0))
	{
		return (func_1136(iParam0) + func_1170(iParam0));
	}
	return 0;
}

int func_1170(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_1171(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_1172(iParam0));
	return iVar0;
}

int func_1172(int iParam0)
{
	if (func_1144(iParam0))
	{
		if (func_1173(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_1173(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_1175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_1200(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_1198(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_1195(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_1192(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 233:
			return func_1189(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_1187(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_1185(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_1184(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_1182(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 158:
			return func_1179(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 181:
			return func_1176(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_1176(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1178(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_1177(iParam0, iParam2));
	return iVar0;
}

int func_1177(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_1178(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_1179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1181(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_1180(iParam0, iParam2));
	return iVar0;
}

int func_1180(int iParam0, int iParam1)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_372(iParam1, 1))
			{
				vVar0 = { func_1089(iParam1) };
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

int func_1181(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_1182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1183(iParam0, iParam1, iParam3);
	if (!func_1099(iParam0))
	{
		iVar0 = (iVar0 + func_1098(iParam0, iParam2));
	}
	return iVar0;
}

int func_1183(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_1185(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1186(iParam0, iParam1);
	if (func_1102(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1186(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_1187(int iParam0, int iParam1)
{
	iVar0 = func_1188(iParam0, iParam1);
	if (!func_1109(iParam0))
	{
		iVar0 = (iVar0 + func_1104(iParam0, func_1108() + 1));
	}
	if (iParam0 == 14 || ((((func_1109(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_1104(iParam0, func_1108() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_1188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_1189(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_1191(iParam0, iParam1, iParam2, iParam4);
	if (!func_1119(iParam0))
	{
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_1116(iParam0, func_1025(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_1190(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1190(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_1191(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_1192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_1194(iParam0, iParam1, iParam2, iParam4);
	if (!func_1134(iParam0))
	{
		if (iParam3 != func_3())
		{
			iVar0 = (iVar0 + func_1127(iParam0, func_1025(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_1193(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_1194(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_1195(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1197(iParam0, iParam1, iParam2, iParam3);
	if (!func_1139(iParam0))
	{
		iVar0 = (iVar0 + func_1140(iParam0, func_1108() + 1, -1, iParam2));
	}
	if (func_1196(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_1197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_1198(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_1199(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_1199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_1200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

void func_1201(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_1077();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_1202(int iParam0)
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

int func_1203(int iParam0, bool bParam1, bool bParam2)
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

