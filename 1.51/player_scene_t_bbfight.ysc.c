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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_113 = 318;
	iLocal_279 = 1;
	StringCopy(&Local_489, "", 16);
	StringCopy(&Local_493, "", 16);
	StringCopy(&Local_497, "", 16);
	fLocal_501 = 0f;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_68();
	}
	wait(0);
	func_57();
	func_56();
	func_52();
	while (iLocal_279 && func_48(5, 0))
	{
		if (func_46())
		{
			func_68();
		}
		if (!unk_0x991B1F0980C62628())
		{
			if (iLocal_113 == 258 && func_45(13) == 2)
			{
				func_68();
			}
		}
		wait(0);
		switch (iLocal_112)
		{
			case 0:
				if (func_43())
				{
					iLocal_112 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_112 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_68();
}

void func_1()
{
	iLocal_279 = 0;
}

int func_2()
{
	func_28(&iLocal_280, &iLocal_283);
	if (unk_0x69DF961355195C3C(Global_96074))
	{
		fVar0 = unk_0xA45992A6CE82FB43(Global_96074);
		iVar1 = func_27();
		if (func_26(iVar1))
		{
			if (!unk_0xEA6BC48857E0AC4C(&Local_497))
			{
				if (!iLocal_502)
				{
					if (fVar0 < fLocal_501)
					{
					}
					else
					{
						if (!unk_0xEA6BC48857E0AC4C(&Local_489))
						{
							func_20(&uLocal_114, func_21(), unk_0x16F2683693E537C9(), &Local_489, 0, 1);
						}
						if (!unk_0xEA6BC48857E0AC4C(&Local_493))
						{
							func_20(&uLocal_114, 4, iLocal_280[0], &Local_493, 0, 1);
						}
						if (func_3(&uLocal_114, "PRSAUD", &Local_497, 3, 0, 0, 0))
						{
							iLocal_502 = 1;
						}
					}
				}
			}
		}
	}
	if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_299) > 100f)
	{
		return 1;
	}
	return 0;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x5CEB4DB888A62073(false);
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
					func_18();
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
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_16();
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
				func_14();
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
				if (func_13())
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
			if (func_12())
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
			func_11();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_10();
		func_5();
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
		func_18();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
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

int func_6()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_9())
	{
		return 0;
	}
	if (func_7(unk_0xD803B885F5E47A62()))
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

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_9()
{
	return -1;
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_11()
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

int func_12()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
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

void func_14()
{
	if (func_15(14))
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
		Global_19486 = func_27();
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

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16()
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

bool func_17(int iParam0, int iParam1)
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

void func_18()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_21()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_22()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_24(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_23(unk_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111638.f_2358.f_539.f_4321))
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

int func_23(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

var func_27()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_28(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			switch ((*iParam1)[iVar0])
			{
				case 100:
					if (unk_0x69DF961355195C3C(Global_96073))
					{
						unk_0x915804B434753CBD((*iParam0)[iVar0], Global_96073, &cLocal_371, &(Local_387[iVar0]), 8f, -1000f, 0, 0, 1148846080, 0);
						(*iParam1)[iVar0] = 101;
					}
					else if (unk_0x69DF961355195C3C(Global_96074))
					{
						unk_0x11BEEB2AE29A6102(Global_96074);
						(*iParam1)[iVar0] = 101;
					}
					break;
				
				case 101:
					if (unk_0x69DF961355195C3C(Global_96074))
					{
						unk_0x915804B434753CBD((*iParam0)[iVar0], Global_96074, &cLocal_371, &(Local_420[iVar0]), 8f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3F423BF5B8125A50(&cLocal_371);
						(*iParam1)[iVar0] = 102;
					}
					break;
				
				case 102:
					if (unk_0xB4AE0788C1587752(&cLocal_371) && unk_0xB4ECF989E2C1DAC8((*iParam0)[iVar0], &cLocal_371, &(Local_420[iVar0]), 2))
					{
						sVar1 = "victim_fall";
						fVar2 = -1f;
						fVar3 = -1f;
						if (unk_0xDC2A248C2CB7B3DB(&cLocal_371, &(Local_420[iVar0]), sVar1, &fVar2, &fVar3))
						{
							if (fVar2 < unk_0xA45992A6CE82FB43(Global_96074))
							{
								if (!unk_0x4580010DFDF4D53F((*iParam0)[iVar0]))
								{
									unk_0xA3BF0AA5A2608191((*iParam0)[iVar0]);
									unk_0x4DE99A51D4CFC5F7((*iParam0)[iVar0], 1000, 3000, 4, unk_0x08D89CE2E20AE305((*iParam0)[iVar0]), 100f, 0f, 0f, 0f, 0f, 0f, 0f);
									unk_0x4E885A246A9D983A((*iParam0)[iVar0], 137, true);
								}
							}
						}
						if (iLocal_113 == 165)
						{
							if (!unk_0xEA6BC48857E0AC4C(&(Local_453[iVar0])))
							{
								sVar4 = "AMB@WORLD_HUMAN_CLIPBOARD@MALE@BASE";
								unk_0x3F423BF5B8125A50(sVar4);
								if (0,95f < unk_0xA45992A6CE82FB43(Global_96074))
								{
									if (unk_0xB4AE0788C1587752(sVar4))
									{
										unk_0x509B8296EBA9B408((*iParam0)[iVar0], &(Local_453[iVar0]), 0, 0);
										unk_0xF895E10BF4C72645((*iParam0)[iVar0], 0, 0);
										wait(0);
										iLocal_486[iVar0] = -1;
										(*iParam1)[iVar0] = 5;
										break;
									}
								}
							}
						}
						if (iLocal_113 == 259)
						{
							if (0,95f < unk_0xA45992A6CE82FB43(Global_96074))
							{
								unk_0x786028C6BB27BD7A((*iParam0)[iVar0], unk_0x16F2683693E537C9(), 0f, -1f, 0f, 0);
								unk_0xF895E10BF4C72645((*iParam0)[iVar0], 0, 0);
								wait(0);
								(*iParam1)[iVar0] = 10;
								break;
							}
						}
						if (iLocal_113 == 246 && iVar0 == 0)
						{
							if (0,95f < unk_0xA45992A6CE82FB43(Global_96074))
							{
								unk_0x786028C6BB27BD7A((*iParam0)[iVar0], unk_0x16F2683693E537C9(), 0f, -1f, 0f, 0);
								unk_0xF895E10BF4C72645((*iParam0)[iVar0], 0, 0);
								wait(0);
								if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
								{
									unk_0x786028C6BB27BD7A(unk_0x16F2683693E537C9(), (*iParam0)[iVar0], 0f, -1f, 0f, 0);
									wait(0);
								}
								(*iParam1)[iVar0] = 10;
								break;
							}
						}
					}
					else
					{
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 200:
					if (unk_0x69DF961355195C3C(Global_96073))
					{
						unk_0xC6EB89C59F2AF6B8((*iParam0)[iVar0], &cLocal_371, &(Local_387[iVar0]), 8f, -1000f, -1, 0, 0, 0, 0, 0);
						(*iParam1)[iVar0] = 201;
					}
					else if (unk_0x69DF961355195C3C(Global_96074))
					{
						(*iParam1)[iVar0] = 201;
					}
					break;
				
				case 201:
					if (unk_0x69DF961355195C3C(Global_96074))
					{
						unk_0xC6EB89C59F2AF6B8((*iParam0)[iVar0], &cLocal_371, &(Local_420[iVar0]), 8f, -1,5f, -1, 32768, 0, 0, 0, 0);
						unk_0x0C8C0C840C2D1AD2((*iParam0)[iVar0], unk_0x16F2683693E537C9(), -1, 0, 2);
						unk_0x3F423BF5B8125A50(&cLocal_371);
						(*iParam1)[iVar0] = 202;
					}
					break;
				
				case 202:
					if (unk_0xB4AE0788C1587752(&cLocal_371) && unk_0xB4ECF989E2C1DAC8((*iParam0)[iVar0], &cLocal_371, &(Local_420[iVar0]), 1))
					{
						sVar5 = "victim_fall";
						fVar6 = -1f;
						fVar7 = -1f;
						if (unk_0xDC2A248C2CB7B3DB(&cLocal_371, &(Local_420[iVar0]), sVar5, &fVar6, &fVar7))
						{
							if (fVar6 < unk_0x8CA9406E01C7EE58((*iParam0)[iVar0], &cLocal_371, &(Local_420[iVar0])))
							{
								if (!unk_0x4580010DFDF4D53F((*iParam0)[iVar0]))
								{
									unk_0xA3BF0AA5A2608191((*iParam0)[iVar0]);
									unk_0x4DE99A51D4CFC5F7((*iParam0)[iVar0], 1000, 3000, 4, unk_0x08D89CE2E20AE305((*iParam0)[iVar0]), 100f, 0f, 0f, 0f, 0f, 0f, 0f);
									unk_0x4E885A246A9D983A((*iParam0)[iVar0], 137, true);
								}
							}
						}
						if (iLocal_113 == 108 || iLocal_113 == 109)
						{
							if (unk_0x8CA9406E01C7EE58((*iParam0)[iVar0], &cLocal_371, &(Local_420[iVar0])) > 0,954f)
							{
								if (iLocal_113 == 108)
								{
									vLocal_303[iVar0] = { Vector(224,5948f, 1213,466f, 199,6328f) - vLocal_299 };
								}
								else if (iLocal_113 == 109)
								{
									vLocal_303[iVar0] = { Vector(5,9049f, -717,1404f, -1908,287f) - vLocal_299 };
								}
								unk_0x96167B03C5A77156((*iParam0)[iVar0], vLocal_299 + vLocal_303[iVar0], 1f, -1, 1048576000, 0, 1193033728);
								unk_0xBD453909DC26A85D((*iParam0)[iVar0], -668482597, false, 0, 0);
								unk_0xBC43ED9FE28DB191((*iParam0)[iVar0]);
								wait(0);
								(*iParam1)[iVar0] = 1;
							}
						}
					}
					else
					{
						if (iLocal_113 == 108)
						{
							vLocal_303[iVar0] = { Vector(224,5948f, 1213,466f, 199,6328f) - vLocal_299 };
						}
						else if (iLocal_113 == 109)
						{
							vLocal_303[iVar0] = { Vector(5,9049f, -717,1404f, -1908,287f) - vLocal_299 };
						}
						unk_0xBC43ED9FE28DB191((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 0:
					vVar8 = { unk_0x68F4C0EC296D3901((*iParam0)[iVar0], true) };
					vVar11 = { vLocal_299 + vLocal_303[iVar0] + Vector(1f, 0f, 0f) };
					fVar14 = vdist(vVar8, vVar11);
					if (func_32((*iParam0)[iVar0]))
					{
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (fVar14 >= 1f)
					{
						(*iParam1)[iVar0] = 1;
						break;
					}
					fVar15 = unk_0xD9522BA9E27E1349((*iParam0)[iVar0]);
					fVar16 = (fLocal_302 + fLocal_310[iVar0]);
					if (fVar16 < 0f)
					{
						fVar16 = (fVar16 + 360f);
					}
					else if (fVar16 > 360f)
					{
						fVar16 = (fVar16 - 360f);
					}
					fVar17 = unk_0x755FF954DAE327E1((fVar15 - fVar16));
					if (fVar17 > 45f)
					{
						if (!unk_0xD1960163A3042274((*iParam0)[iVar0], 1920390111) == 1)
						{
							unk_0xE655C47E46F9A7E4((*iParam0)[iVar0], fVar16, 0);
						}
						break;
					}
					if (!unk_0xEA6BC48857E0AC4C(&(Local_453[iVar0])))
					{
						iLocal_486[iVar0] = -1;
						(*iParam1)[iVar0] = 5;
						break;
					}
					break;
				
				case 1:
					vVar18 = { unk_0x68F4C0EC296D3901((*iParam0)[iVar0], true) };
					vVar21 = { vLocal_299 + vLocal_303[iVar0] + Vector(1f, 0f, 0f) };
					fVar24 = vdist(vVar18, vVar21);
					if (fVar24 <= 0,5f)
					{
						(*iParam1)[iVar0] = 0;
						break;
					}
					if (func_32((*iParam0)[iVar0]))
					{
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (!unk_0xD1960163A3042274((*iParam0)[iVar0], 713668775) == 1 && !unk_0xD1960163A3042274((*iParam0)[iVar0], 713668775) == 0)
					{
						unk_0x96167B03C5A77156((*iParam0)[iVar0], vVar21, 0,5f, -1, 1048576000, 0, 1193033728);
						break;
					}
					break;
				
				case 10:
					if (unk_0xD1960163A3042274((*iParam0)[iVar0], -71340211) == 7 || unk_0xD1960163A3042274((*iParam0)[iVar0], -71340211) == 1)
					{
						iVar25 = 0;
						while (iVar25 < *iParam0)
						{
							if (iVar0 != iVar25)
							{
								if ((*iParam1)[iVar25] < 10)
								{
									(*iParam1)[iVar25] = 10;
								}
							}
							iVar25++;
						}
						unk_0x0E2400AB9174FA81(5, iLocal_289, 1862763509);
						unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_289);
						unk_0x56C0C4D6CBE5EDC5((*iParam0)[iVar0], 25f, -1, 0);
						unk_0xFADC0A217229F6B5((*iParam0)[iVar0], true);
						unk_0xE910A68AA670B4AA((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 11;
					}
					break;
				
				case 11:
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_299) > 50f && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901((*iParam0)[iVar0], true)) > 50f)
					{
						unk_0x0E2400AB9174FA81(2, iLocal_289, 1862763509);
						unk_0x0E2400AB9174FA81(2, 1862763509, iLocal_289);
						unk_0xA3BF0AA5A2608191((*iParam0)[iVar0]);
						unk_0x96167B03C5A77156((*iParam0)[iVar0], vLocal_299 + vLocal_303[iVar0], 0,5f, -1, 1048576000, 0, 1193033728);
						(*iParam1)[iVar0] = 1;
					}
					if (func_29((*iParam0)[iVar0], 15f))
					{
						unk_0x0E2400AB9174FA81(2, iLocal_289, 1862763509);
						unk_0x0E2400AB9174FA81(2, 1862763509, iLocal_289);
						unk_0xA3BF0AA5A2608191((*iParam0)[iVar0]);
						unk_0x96167B03C5A77156((*iParam0)[iVar0], vLocal_299 + vLocal_303[iVar0], 0,5f, -1, 1048576000, 0, 1193033728);
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 5:
					if (func_32((*iParam0)[iVar0]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_290[iVar0]))
						{
							unk_0xF690C84DADBB3551(&(iLocal_290[iVar0]));
							unk_0xEEEE2E5FA6F78DF0(&(iLocal_290[iVar0]));
						}
						unk_0xA3BF0AA5A2608191((*iParam0)[iVar0]);
						unk_0x2ECF845953E95D1B((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (!unk_0xC7441A1068F3F171((*iParam0)[iVar0]))
					{
						if (unk_0x7F8A39872A07D2CE(&(Local_453[iVar0]), "any"))
						{
							if (unk_0x4742C50E93110B10(vLocal_299 + vLocal_303[iVar0], 20f, 1))
							{
								unk_0x4A35AD9FC803369E((*iParam0)[iVar0], vLocal_299 + vLocal_303[iVar0], 20f, 0);
								iLocal_486[iVar0] = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							iVar26 = 1;
							if (iLocal_113 == 165)
							{
								iVar26 = 0;
							}
							unk_0x509B8296EBA9B408((*iParam0)[iVar0], &(Local_453[iVar0]), 0, iVar26);
							iLocal_486[iVar0] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_290[iVar0]))
					{
						if (iLocal_486[iVar0] > 0)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_486[iVar0] + 1000)
							{
								unk_0xF690C84DADBB3551(&(iLocal_290[iVar0]));
								unk_0xEEEE2E5FA6F78DF0(&(iLocal_290[iVar0]));
							}
						}
					}
					break;
				
				default:
					break;
			}
		}
		else if (unk_0xC844350D5D58C99A((*iParam0)[iVar0]))
		{
			if ((*iParam1)[iVar0] != -1)
			{
				iVar27 = 0;
				while (iVar27 < *iParam0)
				{
					if (iVar0 != iVar27)
					{
						if ((*iParam1)[iVar27] != -1 && (*iParam1)[iVar27] < 10)
						{
							(*iParam1)[iVar27] = 10;
						}
					}
					iVar27++;
				}
				(*iParam1)[iVar0] = -1;
			}
			if (unk_0xC844350D5D58C99A(iLocal_290[iVar0]))
			{
				if (iLocal_486[iVar0] > 0)
				{
					unk_0xF690C84DADBB3551(&(iLocal_290[iVar0]));
					unk_0xEEEE2E5FA6F78DF0(&(iLocal_290[iVar0]));
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_29(int iParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
		{
			if (Global_31146[iVar0].f_16 == 9)
			{
			}
			else
			{
				vVar1 = { func_31(iVar0, 0) };
				if (vdist2(unk_0x68F4C0EC296D3901(iParam0, true), vVar1) < (fParam1 * fParam1))
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 19))
				{
					iVar5 = 3;
					iVar4 = 0;
					while (iVar4 < iVar5)
					{
						vVar6 = { func_31(iVar0, iVar4) };
						if (!func_30(vVar6))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(iParam0, true), vVar6) < (fParam1 * fParam1))
							{
								return 1;
							}
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_31(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31146[iVar0][iParam1];
}

int func_32(int iParam0)
{
	if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	if (unk_0x4734A6196B611C3B(iParam0, unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (func_35(iParam0, 1, 0, 0, 0))
	{
		return 1;
	}
	if (unk_0x681F21BF9F7B449B(-1, unk_0x68F4C0EC296D3901(iParam0, true), 15f))
	{
		return 1;
	}
	if (unk_0xFA4CE147B4D9AEE0(iParam0, 73))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_280)
	{
		if (iParam0 != iLocal_280[iVar0])
		{
			if (iLocal_283[iVar0] < 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_34(vLocal_317[iVar1], 0f, 0f, 0f, 0))
		{
			if (func_33(unk_0x16F2683693E537C9(), vLocal_299 + vLocal_313[iVar1], vLocal_317[iVar1], (fLocal_302 + fLocal_321[iVar1]), 0, 1, 0))
			{
				fVar2 = 50f;
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), fVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_33(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, bool bParam9, int iParam10)
{
	vVar0.x = (vParam1.x - (cos(fParam7) * vParam4.x));
	vVar0.y = (vParam1.y - (sin(fParam7) * vParam4.x));
	vVar0.z = (vParam1.z - vParam4.z);
	vVar3.x = (vParam1.x + (cos(fParam7) * vParam4.x));
	vVar3.y = (vParam1.y + (sin(fParam7) * vParam4.x));
	vVar3.z = (vParam1.z + vParam4.z);
	if (unk_0x3D1053F9EB43B7AD(iParam0, vVar0, vVar3, (vParam4.y * 2f), iParam8, bParam9, iParam10))
	{
		return 1;
	}
	return 0;
}

bool func_34(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_42(unk_0x16F2683693E537C9()) && func_42(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == 883325847)
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_41(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_36(iParam0, fVar1, bParam3, bParam4))
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
				if (func_41(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_36(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
				if (func_37(iParam0, fParam1))
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
			if (func_37(iParam0, fParam1))
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

int func_37(int iParam0, float fParam1)
{
	if ((((unk_0x68E45B0EC23881A7(iParam0, -1813897027, fParam1, &vVar1, &uVar0, 0) || unk_0x68E45B0EC23881A7(iParam0, -37975472, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, -1600701090, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 741814745, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 615608432, fParam1, &vVar1, &uVar0, 0))
	{
		if (func_38(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_40(vParam1 - unk_0x68F4C0EC296D3901(iParam0, true)) };
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
		vVar3 = { func_40(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_39(vVar3, vVar0);
	if (fVar6 <= cos((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_39(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_40(vector3 vParam0)
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

int func_41(int iParam0, bool bParam1, float fParam2, float fParam3)
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

int func_42(int iParam0)
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

int func_43()
{
	func_28(&iLocal_280, &iLocal_283);
	if (!func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (!unk_0x991B1F0980C62628() || unk_0x19EC8D83154D7CC1() == 3)
	{
		return 0;
	}
	if (unk_0x00A15D69BCAA5267() > 8)
	{
		if (unk_0x00A15D69BCAA5267() != 11)
		{
			return 0;
		}
		if (unk_0x00A15D69BCAA5267() == 11)
		{
			if (unk_0x94EFC97F8A693855() > 0)
			{
				if (unk_0x192DE42720995A6E() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_45(int iParam0)
{
	return Global_111638.f_24899[iParam0];
}

int func_46()
{
	if (Global_3)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((func_15(0) || func_15(3)) || func_15(2))
	{
		if (!unk_0x991B1F0980C62628() && !func_47())
		{
			return 1;
		}
	}
	if (func_17(8, -1))
	{
		return 1;
	}
	if (Global_2439138.f_74)
	{
		return 1;
	}
	if (Global_96222.f_44 == 1)
	{
		if (Global_96222.f_46 == 0)
		{
			return 1;
		}
	}
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() <= 2 && unk_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_47()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() <= 2 && unk_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_50(iParam0, func_51()))
		{
			return 0;
		}
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, false) };
			fVar3 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0))
				{
					if (!unk_0x0A059E0DB9253280(iParam1))
					{
						return 0;
					}
				}
				else if (!unk_0x8E28E832BEAC3DCE(vVar0, 1,5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_49(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_49(var uParam0)
{
	return uParam0;
}

bool func_50(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_51()
{
	func_22();
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

void func_52()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_55();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 3)
	{
		func_55();
		return;
	}
	func_53();
	if (Global_98467 > 0)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_53()
{
	func_54((Global_98467 - 1));
}

void func_54(int iParam0)
{
	Global_98467 = iParam0;
}

void func_55()
{
	func_54(0);
}

void func_56()
{
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_280)
		{
			if (iLocal_286[iVar0] != 0)
			{
				unk_0x523BCC9DC80CD82F(iLocal_286[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_286[iVar0]))
				{
					bVar2 = false;
					unk_0x523BCC9DC80CD82F(iLocal_286[iVar0]);
				}
			}
			if (iLocal_293[iVar0] != 0)
			{
				unk_0x523BCC9DC80CD82F(iLocal_293[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_293[iVar0]))
				{
					bVar2 = false;
					unk_0x523BCC9DC80CD82F(iLocal_293[iVar0]);
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		wait(0);
	}
	unk_0xF63400DBE3303D26("FIGHTERS", &iLocal_289);
	iVar0 = 0;
	while (iVar0 < iLocal_280)
	{
		if (iLocal_286[iVar0] != 0)
		{
			iLocal_280[iVar0] = unk_0x36F2404464202779(26, iLocal_286[iVar0], vLocal_299 + vLocal_303[iVar0], 0f, 1, true);
			unk_0xD8F6A53F4799FAFE(iLocal_280[iVar0], (fLocal_302 + fLocal_310[iVar0]));
			unk_0xC743BD39A24D0583(iLocal_280[iVar0], 0);
			if (iLocal_286[iVar0] == 189425762)
			{
				if (unk_0x36C584991B4C183F(iLocal_280[iVar0], 3) == 0)
				{
					if (unk_0x36C584991B4C183F(iLocal_280[iVar0], 10) != 1)
					{
						unk_0x64F9F278AB9DCA2C(iLocal_280[iVar0], 10, 1, 0, 0);
					}
				}
				else if (unk_0x36C584991B4C183F(iLocal_280[iVar0], 10) == 1)
				{
					if (unk_0x36C584991B4C183F(iLocal_280[iVar0], 10) != 0)
					{
						unk_0x64F9F278AB9DCA2C(iLocal_280[iVar0], 10, 0, 0, 0);
					}
				}
			}
			unk_0x6DF7BF67E86AAE86(iLocal_280[iVar0], iLocal_289);
			unk_0x93D47DFD0AE94949(iLocal_280[iVar0], -1);
			if (iLocal_113 == 285)
			{
				unk_0x722454E43E496678(iLocal_280[iVar0], 105);
				unk_0xD458AC1C1D29C3B4(iLocal_280[iVar0], 105, 0);
			}
		}
		if (iLocal_293[iVar0] != 0)
		{
			iLocal_290[iVar0] = unk_0x7707E48765093646(iLocal_293[iVar0], vLocal_299 + vLocal_303[iVar0], 1, true, false);
			unk_0xD8F6A53F4799FAFE(iLocal_290[iVar0], (fLocal_302 + fLocal_310[iVar0]));
			unk_0x9F528B1B53FBC5D9(iLocal_290[iVar0], iLocal_280[iVar0], unk_0x4A089F2B762B8D33(iLocal_280[iVar0], iLocal_296[iVar0]), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		iVar0++;
	}
	unk_0x0E2400AB9174FA81(2, iLocal_289, 1862763509);
	unk_0x0E2400AB9174FA81(2, 1862763509, iLocal_289);
}

void func_57()
{
	iLocal_113 = Global_98147;
	func_61(iLocal_113, &vLocal_299, &fLocal_302, &cVar0);
	func_59(iLocal_113, &sLocal_323, &cLocal_339, &cLocal_355, &uVar8, &uVar9);
	vLocal_313[0] = { 0f, 0f, 0f };
	vLocal_317[0] = { 0f, 0f, 0f };
	fLocal_321[0] = 0f;
	switch (iLocal_113)
	{
		case 108:
			vLocal_303[0] = { -0,88f, 0,8016f, -1f };
			fLocal_310[0] = -150f;
			iLocal_286[0] = -277793362;
			iLocal_283[0] = 200;
			StringCopy(&cLocal_371, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(&(Local_387[0]), "Ranger_Nervous_Loop", 64);
			StringCopy(&(Local_420[0]), "PARKBENCH_SMOKE_RANGER_EXIT_RANGER", 64);
			StringCopy(&(Local_453[0]), "any", 64);
			break;
		
		case 109:
			vLocal_303[0] = { -1,1832f, -0,3745f, -1f };
			fLocal_310[0] = -147f;
			iLocal_286[0] = 189425762;
			iLocal_283[0] = 200;
			StringCopy(&cLocal_371, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(&(Local_387[0]), "Ranger_Nervous_Loop", 64);
			StringCopy(&(Local_420[0]), "PARKBENCH_SMOKE_RANGER_EXIT_RANGER", 64);
			StringCopy(&(Local_453[0]), "any", 64);
			break;
		
		case 157:
			vLocal_303[0] = { -0,8296f, 1,1365f, -0,9999f };
			fLocal_310[0] = -176,3014f;
			iLocal_286[0] = -1613485779;
			iLocal_283[0] = 100;
			StringCopy(&cLocal_371, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(&(Local_387[0]), "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_BOUNCER", 64);
			StringCopy(&(Local_420[0]), "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_BOUNCER", 64);
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 166:
			vLocal_303[0] = { Vector(36,037f, -476,663f, -1050,724f) - vLocal_299 };
			fLocal_310[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_286[0] = -681004504;
			iLocal_283[0] = 100;
			StringCopy(&cLocal_371, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(&(Local_387[0]), "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_GUARD", 64);
			StringCopy(&(Local_420[0]), "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_GUARD", 64);
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_CLIPBOARD", 64);
			break;
		
		case 165:
			vLocal_303[0] = { 0,1366f, -1,2192f, -1f };
			fLocal_310[0] = 85,6329f;
			iLocal_286[0] = 815693290;
			iLocal_283[0] = 100;
			StringCopy(&cLocal_371, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(&(Local_387[0]), "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_STAFF", 64);
			StringCopy(&(Local_420[0]), "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_STAFF", 64);
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_CLIPBOARD", 64);
			iLocal_293[0] = 1027109416;
			iLocal_296[0] = 60309;
			StringCopy(&Local_489, "MICHAEL", 16);
			StringCopy(&Local_493, "PREMPLOYEE", 16);
			Local_497 = { func_58("MICS3_IG_2", 3) };
			fLocal_501 = 0,2f;
			break;
		
		case 246:
			vLocal_303[0] = { Vector(4,6f, -1570,924f, -1194,77f) - vLocal_299 + Vector(-1f, 0f, 0f) };
			fLocal_310[0] = (0,61f - fLocal_302);
			vLocal_303[1] = { -1,3617f, 6,7273f, -1f };
			fLocal_310[1] = -3,6142f;
			iLocal_286[0] = 1264920838;
			iLocal_286[1] = 1264920838;
			iLocal_283[0] = 100;
			iLocal_283[1] = 100;
			StringCopy(&cLocal_371, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(&(Local_387[0]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_BB1", 64);
			StringCopy(&(Local_387[1]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_BB2", 64);
			StringCopy(&(Local_420[0]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_BB1", 64);
			StringCopy(&(Local_420[1]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_BB2", 64);
			StringCopy(&(Local_453[0]), "any", 64);
			StringCopy(&(Local_453[1]), "WORLD_HUMAN_MUSCLE_FREE_WEIGHTS", 64);
			break;
		
		case 256:
			vLocal_303[0] = { -4,7f, -0,2f, 0f };
			fLocal_310[0] = 143f;
			iLocal_286[0] = 2120901815;
			iLocal_283[0] = 0;
			iLocal_283[1] = 0;
			vLocal_313[0] = { -3,65f, -1,2f, 1,5f };
			vLocal_317[0] = { 2,5f, 1,25f, 2f };
			fLocal_321[0] = -12f;
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 257:
			vLocal_303[0] = { Vector(7,1578f, -978,6192f, -1666,374f) - vLocal_299 };
			fLocal_310[0] = -149,0587f;
			iLocal_286[0] = 2120901815;
			iLocal_283[0] = 0;
			iLocal_283[1] = 0;
			vLocal_313[0] = { 0,4f, -4,1f, 1,8f };
			vLocal_317[0] = { 2,5f, 1,5f, 2f };
			fLocal_321[0] = 57f;
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 258:
			vLocal_303[0] = { 1,5f, 5,7035f, 0f };
			vLocal_303[1] = { 4,2393f, 4,1781f, 0f };
			fLocal_310[0] = 145,8f;
			fLocal_310[1] = 130,32f;
			iLocal_286[0] = 1328415626;
			iLocal_286[1] = 1328415626;
			iLocal_283[0] = 0;
			iLocal_283[1] = 0;
			vLocal_313[0] = { 2,1f, 4,3f, 2f };
			vLocal_317[0] = { 2,5f, 1,75f, 2f };
			fLocal_321[0] = 33f;
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_GUARD_STAND", 64);
			StringCopy(&(Local_453[1]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 259:
			vLocal_303[0] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_303[1] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			fLocal_310[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_310[1] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_286[0] = 803106487;
			iLocal_283[0] = 100;
			iLocal_283[1] = 100;
			StringCopy(&cLocal_371, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(&(Local_387[0]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_DMAN1", 64);
			StringCopy(&(Local_387[1]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_DMAN2", 64);
			StringCopy(&(Local_420[0]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_DMAN1", 64);
			StringCopy(&(Local_420[1]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_DMAN2", 64);
			StringCopy(&(Local_453[0]), "", 64);
			StringCopy(&(Local_453[1]), "", 64);
			break;
		
		case 285:
			vLocal_303[0] = { -3,264f, -3,7895f, 14,1815f };
			fLocal_310[0] = 0f;
			iLocal_286[0] = 1330042375;
			iLocal_283[0] = 100;
			StringCopy(&cLocal_371, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(&(Local_387[0]), "HOLD_LOOP_victim", 64);
			StringCopy(&(Local_420[0]), "THROW_EXIT_victim", 64);
			StringCopy(&(Local_453[0]), "", 64);
			StringCopy(&Local_489, "TREVOR", 16);
			StringCopy(&Local_493, "DropGuy", 16);
			StringCopy(&Local_497, "TRVS_IG_29G", 16);
			fLocal_501 = 0,75f;
			break;
		
		case 260:
			vLocal_303[0] = { 0,219f, 5,8091f, 0,6f };
			vLocal_303[1] = { 2,4f, 4,6336f, 0,6f };
			fLocal_310[0] = -164,16f;
			fLocal_310[1] = 166,32f;
			iLocal_286[0] = 2120901815;
			iLocal_286[1] = 2120901815;
			iLocal_283[0] = 0;
			iLocal_283[1] = 0;
			vLocal_313[0] = { 4f, 8f, 2f };
			vLocal_317[0] = { 10,5f, 5,5f, 2f };
			fLocal_321[0] = 0f;
			break;
		
		case 261:
			vLocal_303[0] = { 3,2998f, -1,8338f, 0,1366f };
			vLocal_303[1] = { 2,0737f, -3,6041f, 0,1348f };
			fLocal_310[0] = -169,9514f;
			fLocal_310[1] = 156,719f;
			iLocal_283[0] = 0;
			iLocal_283[1] = 0;
			iLocal_286[0] = -1613485779;
			iLocal_286[1] = -1613485779;
			vLocal_313[0] = { 3f, -3f, 2f };
			vLocal_317[0] = { 4,5f, 2,5f, 2f };
			fLocal_321[0] = 9f;
			break;
		
		case 239:
			vLocal_303[0] = { Vector(113,05f, 354,39f, -52,2f) - vLocal_299 + Vector(-1f, 0f, 0f) };
			vLocal_303[1] = { Vector(113,05f, 354,08f, -53,18f) - vLocal_299 + Vector(-1f, 0f, 0f) };
			fLocal_310[0] = -100f;
			fLocal_310[1] = -100f;
			iLocal_286[0] = 2120901815;
			iLocal_286[1] = 2120901815;
			vLocal_313[0] = { 1,6187f, -0,82f, 1f };
			vLocal_317[0] = { (2,5f + 0,5f), 8f, 2f };
			fLocal_321[0] = 6f;
			iLocal_283[0] = 100;
			iLocal_283[1] = 100;
			StringCopy(&cLocal_371, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(&(Local_387[0]), "001215_02_TRVS_12_ESCORTED_OUT_IDLE_GUARD1", 64);
			StringCopy(&(Local_387[1]), "001215_02_TRVS_12_ESCORTED_OUT_IDLE_GUARD2", 64);
			StringCopy(&(Local_420[0]), "001215_02_TRVS_12_ESCORTED_OUT_EXIT_GUARD1", 64);
			StringCopy(&(Local_420[1]), "001215_02_TRVS_12_ESCORTED_OUT_EXIT_GUARD2", 64);
			StringCopy(&(Local_453[0]), "WORLD_HUMAN_GUARD_STAND", 64);
			StringCopy(&(Local_453[1]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		default:
			vLocal_303[0] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_303[1] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			fLocal_310[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_310[1] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_286[0] = 1264920838;
			iLocal_286[1] = 1264920838;
			vLocal_313[0] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_317[0] = { 1f, 1f, 1f };
			fLocal_321[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			break;
	}
}

struct<4> func_58(char* sParam0, int iParam1)
{
	StringCopy(&Var0, sParam0, 16);
	switch (unk_0x09AC81E49EA267F7(0, iParam1))
	{
		case 0:
			StringConCat(&Var0, "a", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "b", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "c", 16);
			break;
		
		default:
			StringConCat(&Var0, "X", 16);
			break;
	}
	return Var0;
}

int func_59(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 1;
			break;
		
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 1;
			break;
		
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 1;
			break;
		
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 1;
			break;
		
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 1;
			break;
		
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 1;
			break;
		
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 1;
			break;
		
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 1;
			break;
		
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 1;
			break;
		
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 1;
			break;
		
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 1;
			break;
		
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 1;
			break;
		
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 1;
			break;
		
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 1;
			break;
		
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 1;
			break;
		
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 1;
			break;
		
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 1;
			break;
		
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 1;
			break;
		
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 1;
			break;
		
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 1;
			break;
		
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 1;
			break;
		
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 1;
			break;
		
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 1;
			break;
		
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 1;
			break;
		
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 1;
			break;
		
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 1;
			break;
		
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 1;
			break;
		
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 1;
			break;
		
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 1;
			break;
		
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 1;
			break;
		
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 1;
			break;
		
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 1;
			break;
		
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 1;
			break;
		
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 1;
			break;
		
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 1;
			break;
		
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 1;
			break;
		
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 1;
			break;
		
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 1;
			break;
		
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 1;
			break;
		
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 1;
			break;
		
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 1;
			break;
		
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 1;
			break;
		
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 1;
			break;
		
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 305:
			func_60(iParam0, sParam1, sParam2, sParam3);
			return 1;
			break;
		
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_60(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_61(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (func_63(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_62(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0].f_3 };
					*uParam2 = Global_93947[iVar0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0].f_3 };
					*uParam2 = Global_93947[0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_96855[0].f_4 };
				*uParam2 = Global_96855[0].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_96855[1].f_4 };
				*uParam2 = Global_96855[1].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_96855[2].f_4 };
				*uParam2 = Global_96855[2].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_97183[iParam0] };
		return 1;
	}
	return 0;
}

bool func_62(var uParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0] };
	if (func_34(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], 0))
		{
			vVar6 = { Global_93947[iVar5].f_3 };
			fVar9 = vdist(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

int func_63(int iParam0, var uParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_62(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_93947[iVar3].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_93947[0].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_96855[0].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_96855[1].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_96855[2].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_67(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_67(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_67(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_63(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_63(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_63(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = { -803,734f, 168,148f, 76,3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_66(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122,69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60,31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41,654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172,697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181,8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20,353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48,53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32,7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84,8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90,5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105,0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54,347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34,621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150,6148f + 0,0095f);
			*uParam1 = (*uParam1 + 0,0004f);
			*uParam1 = (*uParam1 + 0,0015f);
			*uParam1 = (*uParam1 + 0,0002f);
			*uParam1 = (*uParam1 + -0,0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84,6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249,0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143,4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63,4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82,254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152,965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10,099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158,5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99,18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218,4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125,6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142,373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34,878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172,419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107,439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68,812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4,693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78,65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74,7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48,36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144,178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99,72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76,3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80,6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9,1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161,0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226,5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33,128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147,192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59,082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26,087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37,27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13,8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86,3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144,622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61,2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_64(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222,8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112,841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103,8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28,0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0,0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30,185f;
			*uParam1 = (*uParam1 + 0,003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14,98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179,653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95,4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16,0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86,613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111,688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143,7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143,792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4,6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172,2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12,5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1,5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107,981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172,9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67,608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74,1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1,0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152,203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310,879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130,879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35,604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119,3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121,9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95,588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230,78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165,7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1,2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117,03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49,0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84,96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59,3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43,82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_63(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14,749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96,0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43,6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70,4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117,356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83,8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350,3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4,124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13,7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27,746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42,8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2,6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30,24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144,274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68,8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56,2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106,6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26,3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83,3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277,613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4,7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155,68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5,8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70,1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158,979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67,1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47,054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171,253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10,247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32,488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29,093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229,6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11,5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_63(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_63(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34,661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_63(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_63(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_63(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116,742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100,46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122,5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar8 = { -7,4998f, 7,4995f, -0,5258f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar11 = { 10,6345f, 0,7246f, 1,2508f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar14 = { -3,4271f, -13,6787f, -1,4107f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar17 = { -19,6582f, 7,896f, 0,1334f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87,7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103,2841f + 88,7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327,7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_64(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13,904f, 1,193f, 0,7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_64(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1,1731f, 0,809f) };
						*uParam3 = (*uParam3 + (456,7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71,8356f, 180,5483f, -796,9911f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((16f - 222,8314f) + 360f);
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
					*uParam3 = 163,0716f;
					return 1;
					break;
				
				case 1:
					if (func_64(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_64(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0,5f, -1,2f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = (((16f + 90f) - 222,8314f) + 360f);
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
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,1937f, -9,0309f, 4,5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,4577f, -9,6399f, 4,5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,799f, -9,41f, 4,5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_64(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0,4395f, -11,0022f, 0,0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5,5001f, -12,4406f, 4,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,5f, -9,1f, 4,6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0,849f, 1,575f, 0f };
					*uParam3 = 272,857f;
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
					*uParam3 = 158f;
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
					*uParam3 = 339f;
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
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
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
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,488f, -9,098f, 5,4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9,04f, 5,71f, 1,44f };
					*uParam3 = 159,3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,25f, -9,53f, 4,588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11,0022f, -0,4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0,5f, 0,5f), unk_0x79833B02DBD2A244(-0,5f, 0,5f)) };
					*uParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
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
					*uParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71,8266f, 180,4725f, -796,7593f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((26,087f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72,6876f, 173,987f, -805,173f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((13f - 222,8314f) + 360f);
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
					*uParam3 = ((-28,7112f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27,9648f, 8,3766f, 0,7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0,6f, -6,5f, 10,3f) + Vector(0,1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0,3142f, -10,9926f, 0,0747f };
					*uParam3 = 304,1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,3f, -6,5f, 4,6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_64(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12,7165f, 4,7109f, (4,6f + 1f) };
					*uParam3 = 310,6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,0529f, -8,9175f, 1,6907f };
					*uParam3 = 102,156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,4799f, -7,5315f, 0,682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,352f, -3,356f, 5,7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,3003f, -10,3127f, 4,5874f };
					*uParam3 = 262,789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,76f, -5,95f, 4,59f };
					*uParam3 = 177,6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,6691f, -7,6405f, 0,6817f };
					*uParam3 = 159,156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1,228f, 4,044f, 0,7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,2365f, -7,6073f, 6,2761f };
					*uParam3 = 157,0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,161f, -7,562f, 2,17f };
					*uParam3 = 78f;
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
					*uParam3 = 144,6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,6257f, -9,4927f, 5,5876f };
					*uParam3 = 257,4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_64(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8,4451f, 3,1568f, 1,47f };
					*uParam3 = 159f;
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
					*uParam3 = 88,5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
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
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1,3278f, 1,534f, 0f };
					*uParam3 = 159,72f;
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
					*uParam3 = 338,5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15,2374f, 8,723f, 1,4495f };
					*uParam3 = 205,677f;
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
					*uParam3 = 39f;
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
					*uParam3 = 94,2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5,2891f, 2,0403f, -2,8213f) + Vector((0,03f - 0,05f), 0f, 0f) };
					*uParam3 = 336f;
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
					*uParam3 = 311,4f;
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
					*uParam3 = 306,6f;
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
					*uParam3 = 337,4f;
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
					*uParam3 = 277,317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_64(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
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
					*uParam3 = 172,714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75,7407f, 181,264f, -814,246f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-158f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76,7233f, 181,114f, -812,896f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-164f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7,394f, 5,368f, 1,451f };
					*uParam3 = 235,0656f;
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
					*uParam3 = 157,44f;
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
					*uParam3 = 87,3368f;
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
					*uParam3 = 262,32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_64(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16,319f, -1,375f, 0,6817f };
					*uParam3 = 334,126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0,39f, 3,27f, 0f };
					*uParam3 = 154,126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,0213f, 6,9622f, 1,39f };
					*uParam3 = 142,889f;
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
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9019f, -23,8349f, -2,1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9937f, -24,9005f, -2,18f };
					*uParam3 = 314,2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31,7401f, -1,0943f, 0,6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27,1728f, -3,75f, -1,626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14,7722f, -10,9336f, -0,537f };
					*uParam3 = 110,8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17,2536f, 2,451f, -0,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23,9716f, -20,3533f, -3,18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,1416f, -2,0799f, -0,0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,2746f, -4,1995f, -0,0144f };
					*uParam3 = 69f;
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
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5,5235f, 2,9133f, 0,7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30,7131f, -1454,676f, -42,2059f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (84,7009f - 188,5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30,6803f, -1455,848f, -40,7478f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (90,6417f - 188,5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2,0126f, 0,3422f, -0,0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,2931f, 1,4476f, 1,0127f };
					*uParam3 = 61,7525f;
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
					*uParam3 = 119,008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3,467f, 0,074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,1014f, -5,4089f, -0,013f };
					*uParam3 = 123,753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,802f, -6,3295f, -0,01f };
					*uParam3 = 42,757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2,156f, -4,9564f, 1,4886f };
					*uParam3 = 136,309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7,2656f, 3,022f, -0,9061f };
					*uParam3 = 92,8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0,5066f, 1,6992f, 0,0168f };
					*uParam3 = 115,77f;
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
					*uParam3 = 114,3391f;
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
					*uParam3 = 252,2687f;
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
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0,6331f, 1,2093f, -0,0086f };
					*uParam3 = 137,1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3,887f, -0,166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3,5179f, 9,1355f, -1f };
					*uParam3 = 141,79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0,15f, -1,9326f, -6,013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121,6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,2823f, 2,2595f, -1,0742f };
					*uParam3 = (170,2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,077f, -5,1446f, 0,9904f };
					*uParam3 = 107,1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12,903f, -6,623f, -0,0406f };
					*uParam3 = 63,48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,5514f, 5,393f, -0,0998f };
					*uParam3 = 327,483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0,9794f, -0,3043f, 0f };
					*uParam3 = 179,7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11,9759f, 1f, -1,0728f };
					*uParam3 = 238,9422f;
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
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0,6532f, 0,9556f, -0,0087f };
					*uParam3 = 121,0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0,18f, -4,173f, 0,9981f };
					*uParam3 = 216,61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,5937f, 0,3521f, 1f };
					*uParam3 = 119,4f;
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
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					if (func_65())
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
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
					*uParam3 = (102f - 90,6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2,8352f, 0,0552f, 0f };
					*uParam3 = 334,44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_64(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
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
					*uParam3 = 42,6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9,6327f + 1f), -1518,736f, -1148,466f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5,24f, 6,217f, 0,998f };
					*uParam3 = 315,72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,6447f, 0,7635f, 1,0507f };
					*uParam3 = 296,683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3,968f, -1,04f, 0f };
					*uParam3 = 214,92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4,617f, -1,1314f, 0f };
					*uParam3 = 39,4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0;
}

int func_65()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*uParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_66(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_66(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*uParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*uParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*uParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*uParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*uParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*uParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*uParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*uParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*uParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*uParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*uParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*uParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*uParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*uParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*uParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*uParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*uParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*uParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*uParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*uParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*uParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*uParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*uParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*uParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*uParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*uParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*uParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*uParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*uParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*uParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*uParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*uParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*uParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*uParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_67(int iParam0)
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_68()
{
	iVar0 = 0;
	while (iVar0 < iLocal_286)
	{
		if (iLocal_286[iVar0] != 0)
		{
			unk_0x71199B01895C6202(iLocal_286[iVar0]);
		}
		iVar0++;
	}
	unk_0x51732B934211201A(iLocal_289);
	unk_0x21387C9EECC2B220(0);
	unk_0x10FAF14A60A0DBE1();
}

