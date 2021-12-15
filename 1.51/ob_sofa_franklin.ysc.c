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
	iLocal_52 = 1;
	vLocal_301 = { 0f, 0f, 0f };
	vLocal_304 = { 0f, 0f, 0f };
	iLocal_309 = 1;
	sLocal_335 = "safe@franklin@ig_13";
	vLocal_339 = { -11,3259f, -1441,471f, 30,5788f };
	vLocal_342 = { -0,025f, 0,13f, 0f };
	vLocal_345 = { -0,025f, 0,12f, 0f };
	vLocal_348 = { 0f, 90f, 0f };
	vLocal_351 = { -10,1f, -1440,7f, 31,1f };
	vLocal_354 = { -4f, 0f, 121,2f };
	fLocal_357 = 31f;
	vLocal_358 = { -12,1f, -1440,7f, 31,3f };
	vLocal_361 = { -5,3f, 0f, -117,8f };
	fLocal_364 = 40f;
	vLocal_365 = { -10,1f, -1438,5f, 31,5f };
	vLocal_368 = { 0,3f, 0f, 159f };
	fLocal_371 = 50f;
	vLocal_372 = { -9,4f, -1439,6f, 30,9f };
	vLocal_375 = { 2,3f, 0f, 142,8f };
	fLocal_378 = 25,9f;
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_111();
	}
	if (func_108(9))
	{
		func_111();
	}
	if (func_107() && !func_106())
	{
		func_111();
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		func_111();
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		func_111();
	}
	vLocal_336 = { ScriptParam_0.f_1[0] };
	vLocal_336 = { -11,3888f, -1441,325f, 30,1f };
	iLocal_55 = -1630172026;
	while (true)
	{
		wait(0);
		if ((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_100() == 1) && !unk_0x991B1F0980C62628()) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
		{
			if (unk_0x0EB28750412C3A5A(vLocal_336, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 3f)
			{
				if (iLocal_51)
				{
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
				}
				switch (iLocal_307)
				{
					case 0:
						if (func_94())
						{
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							func_22();
							func_1();
						}
						break;
					
					case 2:
						break;
					}
			}
		}
		else
		{
			func_111();
		}
	}
}

void func_1()
{
	iVar0 = 10;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_55)
		{
			case -257549932:
			case -1630172026:
				func_2();
				break;
			
			case 1022578470:
			case 469594741:
				if (unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) < (unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9()) - iVar0))
				{
					unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), (unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) + iVar0), 0);
				}
				else
				{
					unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9()), 0);
				}
				break;
			}
	}
}

void func_2()
{
	if (iLocal_54 > 0)
	{
		if (!iLocal_44)
		{
			iLocal_53 = unk_0x1C0640BA9A7327B3() + 5000;
			iLocal_44 = 1;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_53)
		{
			func_3();
			iLocal_44 = 0;
			iLocal_54 = 0;
		}
	}
}

void func_3()
{
	if (func_100() == 0)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 10);
		func_21(&uLocal_123, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		if (!unk_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
		{
			unk_0x8BC9595FD2792B5D("SAFEHOUSE_STONED_MICHAEL");
		}
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "M_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "M_WD2", 4, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "M_WD3", 4, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "M_WD4", 4, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "M_WD5", 4, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "M_WD6", 4, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "M_WD7", 4, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "M_WD8", 4, 0, 0, 0);
				break;
			
			case 8:
				func_4(&uLocal_123, "WEEDAUD", "M_WD9", 4, 0, 0, 0);
				break;
			
			case 9:
				func_4(&uLocal_123, "WEEDAUD", "M_WD10", 4, 0, 0, 0);
				break;
		}
	}
	else if (func_100() == 1)
	{
		unk_0xD251FFCFFF3A13CC(0);
		iVar0 = unk_0x09AC81E49EA267F7(0, 11);
		func_21(&uLocal_123, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "F_WD1", 3, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "F_WD2", 3, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "F_WD3", 3, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "F_WD4", 3, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "F_WD5", 3, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "F_WD6", 3, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "F_WD7", 3, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "F_WD8", 3, 0, 0, 0);
				break;
			
			case 8:
				func_4(&uLocal_123, "WEEDAUD", "F_WD9", 3, 0, 0, 0);
				break;
			
			case 9:
				func_4(&uLocal_123, "WEEDAUD", "F_WD10", 3, 0, 0, 0);
				break;
			
			case 10:
				func_4(&uLocal_123, "WEEDAUD", "F_WD11", 3, 0, 0, 0);
				break;
		}
	}
	else
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 8);
		func_21(&uLocal_123, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_4(&uLocal_123, "WEEDAUD", "T_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_4(&uLocal_123, "WEEDAUD", "T_WD3", 4, 0, 0, 0);
				break;
			
			case 2:
				func_4(&uLocal_123, "WEEDAUD", "T_WD4", 4, 0, 0, 0);
				break;
			
			case 3:
				func_4(&uLocal_123, "WEEDAUD", "T_WD5", 4, 0, 0, 0);
				break;
			
			case 4:
				func_4(&uLocal_123, "WEEDAUD", "T_WD6", 4, 0, 0, 0);
				break;
			
			case 5:
				func_4(&uLocal_123, "WEEDAUD", "T_WD8", 4, 0, 0, 0);
				break;
			
			case 6:
				func_4(&uLocal_123, "WEEDAUD", "T_WD9", 4, 0, 0, 0);
				break;
			
			case 7:
				func_4(&uLocal_123, "WEEDAUD", "T_WD10", 4, 0, 0, 0);
				break;
			}
	}
}

int func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_17();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_11();
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0xD803B885F5E47A62()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_16(14))
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
		Global_19486 = func_100();
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

bool func_16(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_21(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_22()
{
	vVar0 = { 1,5f, 1,5f, 1,5f };
	fVar3 = 0f;
	switch (iLocal_308)
	{
		case 0:
			if (((func_89(vLocal_336, vVar0) && !func_88()) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_339, 90f)) && func_87())
			{
				func_86("TV_HLP0");
				if (!unk_0x562F77A7F33D2E46("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					unk_0x8BC9595FD2792B5D("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				iLocal_308 = 1;
			}
			break;
		
		case 1:
			if (func_85(1, 0, 1))
			{
				if (func_89(vLocal_336, vVar0))
				{
					if (((!unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && !unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) && unk_0x06F8112AA79C53D9(2, 51)) && func_87())
					{
						if (func_84("TV_HLP0"))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x679C321F8CAA2CFA(vLocal_339, 3f, 0);
						if (unk_0x6C3F127AAF415E69() != 4)
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
						}
						else
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
						}
						iLocal_51 = 1;
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
						func_75(1, 1, 1, 0, 0, 0);
						unk_0xD251FFCFFF3A13CC(1);
						unk_0x6787351639998696("SOFA ACTIVITY");
						iLocal_326 = 1;
						iLocal_308 = 2;
					}
				}
				else
				{
					if (func_84("TV_HLP0"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x6C3F127AAF415E69() != 4)
			{
				iLocal_327 = unk_0x92B061D59B9B540A(26379945, 0);
				if (Global_30828[0].f_2)
				{
					unk_0x86F44313DFA8F00C(iLocal_327, vLocal_358, vLocal_361, fLocal_364, 0, 1, 1, 2);
					if (!unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
					{
						unk_0x8BC9595FD2792B5D("TV_FRANKLINS_HOUSE_SOCEN");
					}
				}
				else
				{
					unk_0x86F44313DFA8F00C(iLocal_327, vLocal_351, vLocal_354, fLocal_357, 0, 1, 1, 2);
				}
			}
			else
			{
				unk_0x5CAFA5DD13658DFE(0);
			}
			if (func_73(iLocal_327))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_327, true);
				unk_0x91F5B0244AAE6222(iLocal_327, "HAND_SHAKE", (0,2f / 3f));
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "enter", 1000f, -4f, 0, 0, 1148846080, 0);
			if (func_73(iLocal_327))
			{
				unk_0x57E0CF9BF653D99A(iLocal_330, 0,278f);
			}
			else
			{
				unk_0x57E0CF9BF653D99A(iLocal_330, 0f);
			}
			if (unk_0xB818A4F8553577BC(iLocal_330))
			{
				unk_0xEFC3DF9D33E248D8(iLocal_330, false);
			}
			unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
			iLocal_308 = 3;
			break;
		
		case 3:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (func_73(iLocal_327))
			{
				if (Global_30828[0].f_2)
				{
					func_69(iLocal_327, vLocal_361);
				}
				else
				{
					func_69(iLocal_327, vLocal_354);
				}
			}
			if (!unk_0x69DF961355195C3C(iLocal_330))
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				if (!Global_30828[0].f_2)
				{
					func_67();
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "base", 4f, -8f, 64, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "base_remote", sLocal_335, 4f, -8f, 64, 1148846080);
					unk_0xC90224D9E95E5E3A(iLocal_330, true);
				}
				else
				{
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_enter", 4f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_enter_remote", sLocal_335, 4f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_330))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_330, false);
					}
				}
				Global_30813 = 1;
				iLocal_308 = 4;
			}
			break;
		
		case 4:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!Global_30828[0].f_2)
			{
				func_86("TV_HLP3");
				if (func_73(iLocal_327))
				{
					unk_0x91F5B0244AAE6222(iLocal_327, "HAND_SHAKE", (0,2f / 3f));
				}
				iLocal_308 = 5;
			}
			else
			{
				if (func_84("TV_HLP3"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,2f)
				{
					if (!func_84("TV_HLP4"))
					{
						func_86("TV_HLP4");
					}
					if (func_73(iLocal_327))
					{
						unk_0x91F5B0244AAE6222(iLocal_327, "HAND_SHAKE", (0,2f / 3f));
					}
					iLocal_308 = 6;
				}
			}
			break;
		
		case 5:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_64();
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, vLocal_354);
			}
			if (!func_84("TV_HLP3"))
			{
				func_86("TV_HLP3");
			}
			if (unk_0xBFC0798A6E3417F9(2, 51))
			{
				if (!iLocal_324)
				{
					if (unk_0x6FB46C25CCB7E6D5(-1019679016, &iLocal_333, -1))
					{
						unk_0xCDC520E5E48E63D9(-1019679016, iLocal_333 + 1, 1);
						iLocal_324 = 1;
					}
				}
				if (!unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
				{
					unk_0x8BC9595FD2792B5D("TV_FRANKLINS_HOUSE_SOCEN");
				}
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_enter", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_enter_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_308 = 6;
			}
			else if (unk_0xBFC0798A6E3417F9(2, 222))
			{
				func_63();
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "exit", 8f, -8f, 0, 0, 1148846080, 0);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_308 = 12;
			}
			break;
		
		case 6:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,6f)
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_base", 4f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_base_remote", sLocal_335, 4f, -8f, 0, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_330, true);
				if (func_73(iLocal_327))
				{
					unk_0x86F44313DFA8F00C(iLocal_327, vLocal_358, vLocal_361, fLocal_364, 0, 1, 1, 2);
					unk_0x91F5B0244AAE6222(iLocal_327, "HAND_SHAKE", (0,2f / 3f));
				}
				iLocal_308 = 7;
			}
			else if (!Global_30828[0].f_2)
			{
				if (func_73(iLocal_327))
				{
					func_69(iLocal_327, vLocal_354);
				}
				if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,5f)
				{
					func_59(0, 0, 1, 0, 0);
					func_86("TV_HLP4");
					if (!unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
					{
						unk_0x8BC9595FD2792B5D("TV_FRANKLINS_HOUSE_SOCEN");
					}
				}
			}
			break;
		
		case 7:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_64();
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, vLocal_361);
			}
			func_58(0, 1);
			unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			if (!func_57())
			{
				unk_0xD251FFCFFF3A13CC(1);
			}
			if (unk_0xBFC0798A6E3417F9(2, 51))
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_318 = 1;
				iLocal_308 = 9;
			}
			else if (unk_0xBFC0798A6E3417F9(2, 222))
			{
				func_63();
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_308 = 11;
			}
			else if (func_56(0))
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_idle_a", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_idle_a_remote", sLocal_335, 8f, -8f, 0, 1148846080);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_319 = 1;
				iLocal_308 = 8;
			}
			break;
		
		case 8:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (func_73(iLocal_327))
			{
				func_69(iLocal_327, vLocal_361);
			}
			unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			if (unk_0x69DF961355195C3C(iLocal_330))
			{
				if (iLocal_319)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_330);
					if (fVar3 > 0,3f)
					{
						if (unk_0x04639A879AC88653() == 0)
						{
							unk_0x188BA9B758DB0D5E(1);
						}
						else
						{
							unk_0x188BA9B758DB0D5E(0);
						}
						iLocal_319 = 0;
					}
				}
			}
			else
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_base", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_330, true);
				iLocal_308 = 7;
			}
			break;
		
		case 9:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0xA45992A6CE82FB43(iLocal_330) < 0,9f)
			{
				if (iLocal_318)
				{
					if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,5f)
					{
						func_55(0);
						if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
						{
							unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_SOCEN");
						}
						if (func_84("TV_HLP4"))
						{
							unk_0xA37A90C62806D848(1);
						}
						iLocal_318 = 0;
					}
				}
			}
			else
			{
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "base", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_330, true);
				if (func_73(iLocal_327))
				{
					unk_0x86F44313DFA8F00C(iLocal_327, vLocal_351, vLocal_354, fLocal_357, 0, 1, 1, 2);
				}
				iLocal_308 = 4;
			}
			break;
		
		case 10:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (Global_30828[0].f_2)
			{
				if (func_73(iLocal_327))
				{
					func_69(iLocal_327, vLocal_361);
				}
				unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			}
			else if (func_73(iLocal_327))
			{
				func_69(iLocal_327, vLocal_375);
			}
			switch (iLocal_309)
			{
				case 0:
					if (func_84("TV_HLP4") || func_84("TV_HLP3"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_exit", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_exit_remote", sLocal_335, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_330))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_330, false);
					}
					iLocal_309 = 1;
					break;
				
				case 1:
					if (func_84("TV_HLP4") || func_84("TV_HLP3"))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (!unk_0x69DF961355195C3C(iLocal_330) || iLocal_314)
					{
						iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "blunt_enter", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_54(), iLocal_330, "blunt_enter_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
						unk_0xE14EC663EED44AD5(func_52(), iLocal_330, "blunt_enter_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						if (!Global_30828[0].f_2)
						{
							if (func_73(iLocal_327))
							{
								unk_0x86F44313DFA8F00C(iLocal_327, vLocal_372, vLocal_375, fLocal_378, 0, 1, 1, 2);
							}
						}
						if (unk_0xB818A4F8553577BC(iLocal_330))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_330, false);
						}
						iLocal_314 = 0;
						iLocal_309 = 2;
					}
					break;
				
				case 2:
					if (unk_0x69DF961355195C3C(iLocal_330))
					{
						if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,55f)
						{
							if (func_57())
							{
								func_50();
							}
						}
						func_49(0);
					}
					else
					{
						iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
						bLocal_320 = func_48();
						if (bLocal_320)
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "blunt_idle_a", 8f, -8f, 0, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_54(), iLocal_330, "blunt_idle_a_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
							unk_0xE14EC663EED44AD5(func_52(), iLocal_330, "blunt_idle_a_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						}
						else
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "blunt_idle_b", 8f, -8f, 0, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_54(), iLocal_330, "blunt_idle_b_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
							unk_0xE14EC663EED44AD5(func_52(), iLocal_330, "blunt_idle_b_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						}
						if (unk_0xB818A4F8553577BC(iLocal_330))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_330, false);
						}
						func_47();
						iLocal_309 = 3;
					}
					break;
				
				case 3:
					if (unk_0x69DF961355195C3C(iLocal_330))
					{
						func_45();
						if (bLocal_320)
						{
							func_49(1);
						}
						else
						{
							func_49(2);
						}
						if (iLocal_315)
						{
							if (!iLocal_316)
							{
								fVar3 = unk_0xA45992A6CE82FB43(iLocal_330);
								if (iLocal_331 == 0)
								{
									if (unk_0xDC2A248C2CB7B3DB(func_44(), "blunt_idle_a", func_43(), &fVar4, &fVar5))
									{
										if (fVar3 >= fVar4 && fVar3 <= fVar5)
										{
											iLocal_316 = 1;
										}
									}
								}
								else if (unk_0xDC2A248C2CB7B3DB(func_44(), "blunt_idle_b", func_43(), &fVar4, &fVar5))
								{
									if (fVar3 >= fVar4 && fVar3 <= fVar5)
									{
										iLocal_316 = 1;
									}
								}
							}
							else
							{
								iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
								unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "blunt_interrupt", 8f, -8f, 0, 0, 1148846080, 0);
								unk_0xE14EC663EED44AD5(func_54(), iLocal_330, "blunt_interrupt_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
								unk_0xE14EC663EED44AD5(func_52(), iLocal_330, "blunt_interrupt_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
								if (unk_0xB818A4F8553577BC(iLocal_330))
								{
									unk_0xEFC3DF9D33E248D8(iLocal_330, false);
								}
								if (!iLocal_323)
								{
									if (func_73(iLocal_327))
									{
										func_24(unk_0x16F2683693E537C9(), iLocal_327, 1);
									}
									else
									{
										func_24(unk_0x16F2683693E537C9(), 0, 1);
									}
									iLocal_54++;
									iLocal_323 = 1;
								}
								iLocal_315 = 0;
								iLocal_308 = 12;
							}
						}
					}
					else
					{
						func_47();
						iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "blunt_exit", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_54(), iLocal_330, "blunt_exit_joint", sLocal_335, 1000f, -1000f, 0, 1148846080);
						unk_0xE14EC663EED44AD5(func_52(), iLocal_330, "blunt_exit_lighter", sLocal_335, 8f, -8f, 0, 1148846080);
						if (unk_0xB818A4F8553577BC(iLocal_330))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_330, false);
						}
						if (!iLocal_323)
						{
							if (func_73(iLocal_327))
							{
								func_24(unk_0x16F2683693E537C9(), iLocal_327, 1);
							}
							else
							{
								func_24(unk_0x16F2683693E537C9(), 0, 1);
							}
							iLocal_54++;
							iLocal_323 = 1;
						}
						if (Global_30828[0].f_2)
						{
							iLocal_309 = 4;
						}
						else
						{
							iLocal_309 = 5;
						}
					}
					break;
				
				case 4:
					if (!unk_0x69DF961355195C3C(iLocal_330))
					{
						iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_enter", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_enter_remote", sLocal_335, 8f, -8f, 0, 1148846080);
						if (unk_0xB818A4F8553577BC(iLocal_330))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_330, false);
						}
						iLocal_309 = 5;
					}
					else
					{
						func_49(3);
					}
					break;
				
				case 5:
					if (!unk_0x69DF961355195C3C(iLocal_330))
					{
						func_47();
						iLocal_323 = 0;
						iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
						if (Global_30828[0].f_2)
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "tv_base", 8f, -8f, 64, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "tv_base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
							unk_0xC90224D9E95E5E3A(iLocal_330, true);
							func_86("TV_HLP4");
							iLocal_308 = 7;
						}
						else
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "base", 8f, -8f, 64, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_66(), iLocal_330, "base_remote", sLocal_335, 8f, -8f, 64, 1148846080);
							if (func_73(iLocal_327))
							{
								unk_0x86F44313DFA8F00C(iLocal_327, vLocal_351, vLocal_354, fLocal_357, 0, 1, 1, 2);
							}
							unk_0xC90224D9E95E5E3A(iLocal_330, true);
							func_86("TV_HLP3");
							iLocal_308 = 5;
						}
					}
					else
					{
						func_49(3);
					}
					break;
			}
			break;
		
		case 11:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x69DF961355195C3C(iLocal_330))
			{
				func_63();
				iLocal_330 = unk_0xE9744DB7B8CA6965(func_72(), func_71(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_330, sLocal_335, "exit", 8f, -8f, 0, 0, 1148846080, 0);
				if (unk_0xB818A4F8553577BC(iLocal_330))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_330, false);
				}
				iLocal_308 = 12;
			}
			break;
		
		case 12:
			func_74();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
			{
				unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_SOCEN");
			}
			if (unk_0xA45992A6CE82FB43(iLocal_330) > 0,95f)
			{
				iLocal_308 = 13;
			}
			else
			{
				func_49(3);
				func_45();
				if (!iLocal_317)
				{
					if (func_73(iLocal_327))
					{
						unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
					}
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
					iLocal_317 = 1;
				}
				if (iLocal_315)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_330);
					if (unk_0xDC2A248C2CB7B3DB(func_44(), "exit", "WalkInterruptible", &fVar6, &fVar7) || unk_0xDC2A248C2CB7B3DB(func_44(), "exit_drunk", "WalkInterruptible", &fVar6, &fVar7))
					{
						if (fVar3 >= fVar6 && fVar3 <= fVar7)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							iLocal_308 = 13;
						}
					}
				}
			}
			break;
		
		case 13:
			unk_0xB38702A5025BB490("chop");
			if (!iLocal_317 && func_73(iLocal_327))
			{
				unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			if (unk_0x6FB46C25CCB7E6D5(-1256798071, &iLocal_334, -1))
			{
				unk_0xCDC520E5E48E63D9(-1256798071, iLocal_334 + 1, 1);
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			iLocal_51 = 0;
			if (Global_30828[0].f_2)
			{
				func_23(0);
			}
			if (iLocal_326)
			{
				unk_0xA68C4874B560B1C0();
				iLocal_326 = 0;
			}
			Global_30813 = 0;
			iLocal_315 = 0;
			iLocal_316 = 0;
			iLocal_323 = 0;
			iLocal_324 = 0;
			iLocal_317 = 0;
			func_75(0, 1, 1, 0, 0, 0);
			iLocal_308 = 0;
			break;
	}
}

void func_23(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_5 = 0;
		if (Global_30828[iParam0].f_2 && Global_30828[iParam0].f_7 == 0)
		{
			Global_30828[iParam0].f_7 = 1;
		}
		Global_30828[iParam0].f_8 = 0;
	}
}

void func_24(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	if ((func_42(iParam0) + iParam2) > 10)
	{
		iParam2 = (10 - func_42(iParam0));
	}
	iVar0 = 20000;
	if (unk_0x8CD06866876216F2())
	{
		iVar0 *= 3;
	}
	if (!func_40(iParam0))
	{
		func_38(iParam0, iVar0, 0);
		func_35(iVar0, iVar0, 0,3f, func_36(), iParam1, 0);
		iVar1 = func_34(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_33(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2].f_4 = (Global_42383[iVar2].f_4 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_34(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_33(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4].f_4 = (Global_42383[iVar4].f_4 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= unk_0x1C0640BA9A7327B3())
		{
			func_35(iVar0, iVar0, 0,3f, func_36(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_30(iParam0, iVar0);
		}
	}
	Global_42569 = 0,25f;
	StringCopy(&Global_42570, "STONED", 16);
	iVar5 = func_34(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_33(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_25(1, iVar5, 4, iParam0, iParam2);
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_26(iParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_28(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_27();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0] = iParam0;
	Global_42464[iVar0].f_1 = iParam1;
	Global_42464[iVar0].f_2 = iParam2;
	Global_42464[iVar0].f_3 = iParam3;
	Global_42464[iVar0].f_4 = iParam4;
	Global_42464[iVar0].f_5 = iParam5;
}

int func_27()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_29(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0].f_2)
		{
			if (iParam0 == Global_42464[iVar0])
			{
				if (iParam1 == Global_42464[iVar0].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_34(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_32(iParam0);
		if (!iVar1 == -1)
		{
			Global_42357[iVar1].f_3 = (Global_42357[iVar1].f_3 + iParam1);
			Global_42357[iVar1].f_2 = (Global_42357[iVar1].f_2 + iParam1);
		}
		return;
	}
	func_31(1, iVar0, 2, iParam1);
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_26(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

int func_32(int iParam0)
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

int func_33(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_34(int iParam0)
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

void func_35(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	if (Global_3)
	{
		return;
	}
	if (Global_42562)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x174D27C2C2F899E5())
	{
		unk_0x0525F87A0751EA62("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xD5B49A7E47E6726F())
	{
		unk_0xF5AC1996BA944009("DRUNK_SHAKE", (fParam3 * Global_42561));
	}
	if (unk_0x9F4FE516EAACCFC5(iParam4))
	{
		unk_0x91F5B0244AAE6222(iParam4, "DRUNK_SHAKE", fParam3);
		Global_42563 = iParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_42564 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42564 = -1;
		}
	}
	Global_42565 = iParam1;
	Global_42566 = fParam2;
	Global_42568 = fParam3;
	Global_42567 = fParam3;
}

float func_36()
{
	fVar0 = 0,1f;
	iVar1 = func_37(unk_0x16F2683693E537C9());
	iVar2 = func_42(unk_0x16F2683693E537C9());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0,1f;
		}
		else
		{
			fVar0 = (to_float(iVar1) / to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0,1f;
	}
	else
	{
		fVar0 = (to_float(iVar2) / to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_33(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_32(iParam0);
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
	iVar2 = func_39();
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

int func_39()
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

int func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_41(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_33(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_4;
}

char* func_43()
{
	sVar0 = "ScriptEvent";
	return sVar0;
}

char* func_44()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		
		case -693032058:
			sVar0 = "safe@michael@ig_3";
			break;
		
		case -1620762220:
			sVar0 = "safe@franklin@ig_9";
			break;
		
		case -1630172026:
			sVar0 = "safe@franklin@ig_13";
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (!Global_76622)
			{
				if (bLocal_50)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		
		case 948080762:
			sVar0 = "safe@trevor@ig_8";
			break;
		
		case 1022578470:
			sVar0 = "safe@trevor@ig_7";
			break;
		
		case 2057223314:
			if (bLocal_50)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		
		case 469594741:
			sVar0 = "safe@michael@ig_2";
			break;
		
		case -35679191:
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

void func_45()
{
	if (!iLocal_315)
	{
		func_46(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_315 = 1;
		}
	}
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_47()
{
	iLocal_310 = 0;
	iLocal_311 = 0;
	iLocal_325 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
}

int func_48()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!iLocal_311 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,25f)
			{
				unk_0xE81656B429E5C4B5("scr_sh_lighter_sparks", func_52(), 0f, 0f, 0,05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_311 = 1;
			}
			if (!iLocal_310 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,255f)
			{
				iLocal_329 = unk_0xC1879030EB463216("scr_sh_lighter_flame", func_52(), 0f, 0f, 0,05f, 0f, 0f, 0f, 1f, 0, 0, 0);
				iLocal_310 = 1;
			}
			if (unk_0x83A8177D302E1A7E(iLocal_329) && unk_0xA45992A6CE82FB43(iLocal_330) > 0,45f)
			{
				unk_0xF7E25143642732EA(iLocal_329, 0);
			}
			if (!iLocal_325 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,346f)
			{
				iLocal_328 = unk_0xC1879030EB463216("scr_sh_cig_smoke", func_54(), -0,09f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
				iLocal_325 = 1;
			}
			if (!iLocal_312 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,82f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_342, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_312 = 1;
			}
			if (!iLocal_313 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,876f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_345, vLocal_348, 31086, 1f, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_313 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,42f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_345, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_313 = 1;
			}
			if (!iLocal_312 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,7f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_342, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_312 = 1;
			}
			break;
		
		case 2:
			if (!iLocal_313 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,48f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_345, vLocal_348, 31086, 1f, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
		
		case 3:
			if (unk_0x83A8177D302E1A7E(iLocal_328) && unk_0xA45992A6CE82FB43(iLocal_330) > 0,27f)
			{
				unk_0xF7E25143642732EA(iLocal_328, 0);
			}
			if (!iLocal_312 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,45f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_342, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_312 = 1;
			}
			if (!iLocal_313 && unk_0xA45992A6CE82FB43(iLocal_330) > 0,45f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_345, vLocal_348, 31086, 1f, 0, 0, 0);
				iLocal_313 = 1;
			}
			break;
	}
}

void func_50()
{
	Global_19671 = 0;
	func_51();
}

void func_51()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_52()
{
	switch (iLocal_55)
	{
		case -257549932:
		case -693032058:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -680040094, 0, 0, 1);
			break;
		
		case -1630172026:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 2f, -680040094, 0, 0, 1);
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, 488156118, 0, 0, 1);
			break;
		
		case -35679191:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, 21833643, 0, 0, 1);
			break;
		
		case 2057223314:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -1296774200, 0, 0, 1);
			break;
	}
	return iVar0;
}

Vector3 func_53()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				vVar0 = { 9,95f, 528,9f, 173,6282f };
			}
			else
			{
				vVar0 = { -807,5781f, 171,357f, 75,7407f };
			}
			break;
		
		case -693032058:
			vVar0 = { -805,881f, 173,8548f, 71,8347f };
			break;
		
		case -1620762220:
			vVar0 = { -9,66f, -1429,48f, 31,21f };
			break;
		
		case -1630172026:
			vVar0 = { -10,6378f, -1441,314f, 30,1015f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				vVar0 = { -1154,343f, -1522,6f, 9,6327f };
			}
			else
			{
				vVar0 = { -800,4056f, 183,4856f, 71,6055f };
			}
			break;
		
		case 948080762:
			vVar0 = { 1972,142f, 3813,243f, 32,4271f };
			break;
		
		case 1022578470:
			vVar0 = { -1145,91f, -1514,944f, 9,6327f };
			break;
		
		case 2057223314:
			vVar0 = { 1976,94f, 3821,242f, 33,3266f };
			break;
		
		case 469594741:
			vVar0 = { -804,2254f, 184,3325f, 72,6042f };
			break;
		
		case -35679191:
			vVar0 = { -8,8011f, 515,7225f, 173,6282f };
			break;
	}
	return vVar0;
}

int func_54()
{
	switch (iLocal_55)
	{
		case -693032058:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -693032058, 0, 0, 1);
			break;
		
		case -1620762220:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 2,5f, -1620762220, 0, 0, 1);
			break;
		
		case 788975200:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, 788975200, 0, 0, 1);
			break;
		
		case -1533900808:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -1533900808, 0, 0, 1);
			break;
		
		case 1384562503:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, 1384562503, 0, 0, 1);
			break;
		
		case -1630172026:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -1630172026, 0, 0, 1);
			break;
		
		case 2057223314:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 3f, -1620762220, 0, 0, 1);
			break;
		
		case 469594741:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, 469594741, 0, 0, 1);
			break;
		
		case -35679191:
			iVar0 = unk_0x4B72871A3BE7B474(func_53(), 5f, -35679191, 0, 0, 1);
			break;
	}
	return iVar0;
}

void func_55(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

int func_56(int iParam0)
{
	iVar0 = 64;
	iVar1 = (unk_0x0DED1C1B8250FA57(2, 218) - 127);
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			settimera(0);
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_56(0))
		{
			if (!iLocal_36)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x04639A879AC88653() == 0)
				{
					unk_0x188BA9B758DB0D5E(1);
				}
				else
				{
					unk_0x188BA9B758DB0D5E(0);
				}
				iLocal_36 = 1;
			}
		}
		else if (iLocal_36)
		{
			iLocal_36 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0DED1C1B8250FA57(2, 219) - 127);
		if (!iLocal_37)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 - 0,5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_38 = unk_0x1C0640BA9A7327B3();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 + 0,5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_38 = unk_0x1C0640BA9A7327B3();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_39 = 1;
			}
			else if (iLocal_39)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_39 = 0;
				}
			}
		}
		if (iLocal_37)
		{
			if (iVar1 == 0 || unk_0x1C0640BA9A7327B3() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_62(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_61(iParam0))
		{
			unk_0x188BA9B758DB0D5E(-1);
			unk_0xACBA63CD73292795(iParam1, func_60(iParam2), iParam4);
			unk_0x188BA9B758DB0D5E(iParam1);
		}
	}
	StringCopy(&Global_30906, unk_0xBB0808A181D4745C(), 24);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_6)
		{
			return 1;
		}
	}
	return 0;
}

void func_63()
{
	if (func_73(iLocal_327))
	{
		unk_0x86F44313DFA8F00C(iLocal_327, vLocal_365, vLocal_368, fLocal_371, 0, 1, 1, 2);
	}
	if (func_84("TV_HLP4") || func_84("TV_HLP3"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
	}
}

void func_64()
{
	if (unk_0xBFC0798A6E3417F9(2, 224))
	{
		func_65(202, 1);
		if (func_84("TV_HLP4") || func_84("TV_HLP3"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (Global_30828[0].f_2)
		{
			iLocal_309 = 0;
		}
		else
		{
			iLocal_314 = 1;
			iLocal_309 = 1;
		}
		if (unk_0x6FB46C25CCB7E6D5(-457571384, &iLocal_332, -1))
		{
			unk_0xCDC520E5E48E63D9(-457571384, iLocal_332 + 1, 1);
		}
		iLocal_308 = 10;
	}
}

void func_65(int iParam0, int iParam1)
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

int func_66()
{
	iVar0 = unk_0x4B72871A3BE7B474(func_53(), 10f, 542291840, 0, 0, 1);
	return iVar0;
}

void func_67()
{
	unk_0xACBA63CD73292795(0, func_60(1), 0);
	if (func_68(22))
	{
		unk_0xACBA63CD73292795(1, func_60(12), 0);
	}
	else
	{
		unk_0xACBA63CD73292795(1, func_60(2), 0);
	}
}

int func_68(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_69(int iParam0, vector3 vParam1)
{
	if (unk_0x9F4FE516EAACCFC5(iParam0))
	{
		vVar0 = { unk_0x17D61C69BA58F815(iParam0, 2) };
		vVar3 = { vParam1 };
		if (unk_0x91E3F625EF57450D(2))
		{
			fVar9 = unk_0x4F3973434662D795(2, 240);
			fVar10 = unk_0x4F3973434662D795(2, 239);
			fVar11 = ((fVar9 - 0,5f) * (-6,5f * 2f));
			fVar12 = ((fVar10 - 0,5f) * (-12,5f * 2f));
			vVar3.x = (vVar3.x + fVar11);
			vVar3.z = (vVar3.z + fVar12);
			while (vVar3.z < -180f)
			{
				vVar3.z = (vVar3.z + 360f);
			}
			while (vVar3.z > 180f)
			{
				vVar3.z = (vVar3.z - 360f);
			}
			while (vVar3.x < -180f)
			{
				vVar3.x = (vVar3.x + 360f);
			}
			while (vVar3.x > 180f)
			{
				vVar3.x = (vVar3.x - 360f);
			}
			fVar13 = (vVar3.z - vVar0.z);
			fVar14 = func_70(fVar13, -180f, 180f);
			vVar6 = { vVar0 + vVar3 - vVar0 * Vector(0,25f, 0,25f, 0,25f) };
			vVar6.z = (vVar0.z + (fVar14 * 0,25f));
		}
		else
		{
			func_46(&uVar15, &uVar16, &iVar17, &iVar18, 0);
			if ((iVar17 < 32 && iVar17 > -32) && (iVar18 < 32 && iVar18 > -32))
			{
				if (iVar17 < 32 && iVar17 > -32)
				{
					iVar17 = 0;
				}
				else if (iVar17 < 0)
				{
					iVar17 = (iVar17 - 32);
				}
				else
				{
					iVar17 += 32;
				}
				if (iVar18 < 32 && iVar18 > -32)
				{
					iVar18 = 0;
				}
				else if (iVar18 < 0)
				{
					iVar18 = (iVar18 - 32);
				}
				else
				{
					iVar18 += 32;
				}
			}
			iVar17 = (iVar17 * -1);
			iVar18 = (iVar18 * -1);
			if (unk_0x89DF0B812BA6383B())
			{
				iVar18 = (iVar18 * -1);
			}
			vVar3.x = (vVar3.x + (IntToFloat(iVar18) * 0,05f));
			vVar3.z = (vVar3.z + (IntToFloat(iVar17) * 0,1f));
			while (vVar3.z < -180f)
			{
				vVar3.z = (vVar3.z + 360f);
			}
			while (vVar3.z > 180f)
			{
				vVar3.z = (vVar3.z - 360f);
			}
			while (vVar0.z < -180f)
			{
				vVar0.z = (vVar0.z + 360f);
			}
			while (vVar0.z > 180f)
			{
				vVar0.z = (vVar0.z - 360f);
			}
			fVar19 = (vVar3.z - vVar0.z);
			fVar20 = func_70(fVar19, -180f, 180f);
			vVar6 = { vVar0 + vVar3 - vVar0 * Vector(0,25f, 0,25f, 0,25f) };
			vVar6.z = (vVar0.z + (fVar20 * 0,25f));
		}
		while (vVar6.z < -180f)
		{
			vVar6.z = (vVar6.z + 360f);
		}
		while (vVar6.z > 180f)
		{
			vVar6.z = (vVar6.z - 360f);
		}
		unk_0x5F3CBA6EB9341C90(iParam0, vVar6, 2);
	}
}

float func_70(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fVar1 = to_float(floor(((fParam0 - fParam1) / fVar0)));
	return (fParam0 - (fVar1 * fVar0));
}

Vector3 func_71()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
			{
				vVar0 = { 0f, 0f, -68,75494f };
			}
			else
			{
				vVar0 = { 0f, 0f, -179,9088f };
			}
			break;
		
		case -693032058:
			vVar0 = { 0f, 0f, 21,1994f };
			break;
		
		case -1620762220:
			vVar0 = { 0f, 0f, -128,34f };
			break;
		
		case -1630172026:
			vVar0 = { 0f, 0f, 0,5729f };
			break;
		
		case 948080762:
			vVar0 = { 0f, 0f, 2,8647f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				vVar0 = { 0f, 0f, 34,9504f };
			}
			else
			{
				vVar0 = { 0f, 0f, 21,1994f };
			}
			break;
		
		case 1022578470:
			vVar0 = { 0f, 0f, 72,76564f };
			break;
		
		case 2057223314:
			vVar0 = { 0f, 0f, -9,1673f };
			break;
		
		case 469594741:
			vVar0 = { 0f, 0f, 21,1994f };
			break;
		
		case -35679191:
			vVar0 = { 0f, 0f, -29,793f };
			break;
	}
	return vVar0;
}

Vector3 func_72()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
			{
				vVar0 = { -806,82f, 170,03f, 75,74f };
			}
			else
			{
				vVar0 = { 10,22f, 527,73f, 174,11f };
			}
			break;
		
		case -693032058:
			vVar0 = { -805,17f, 173,99f, 72,69f };
			break;
		
		case -1620762220:
			vVar0 = { -9,66f, -1429,48f, 31,21f };
			break;
		
		case -1630172026:
			vVar0 = { -10,07f, -1440,64f, 30,36f };
			break;
		
		case 948080762:
			vVar0 = { 1972,852f, 3812,42f, 33,28f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				vVar0 = { -1153,829f, -1523,314f, 10,56f };
			}
			else
			{
				vVar0 = { -800,68f, 184,18f, 72,55f };
			}
			break;
		
		case 1022578470:
			vVar0 = { -1146,284f, -1514,13f, 10,8468f };
			break;
		
		case 2057223314:
			vVar0 = { 1976,75f, 3822,76f, 33,28f };
			break;
		
		case 469594741:
			vVar0 = { -804,87f, 185,69f, 72,75f };
			break;
		
		case -35679191:
			vVar0 = { -9,1f, 516,83f, 173,62f };
			break;
	}
	return vVar0;
}

int func_73(int iParam0)
{
	if (unk_0x6C3F127AAF415E69() != 4 && unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	Global_22211.f_6 = 1;
}

void func_75(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_83(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_82(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_83(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_82(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_80(unk_0xD803B885F5E47A62())) && !func_77(unk_0xD803B885F5E47A62(), 0)) && !func_76()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_80(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_76()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_78(-1, 0) == 8;
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

int func_78(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0)
{
	if (func_77(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
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

bool func_81()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_83(int iParam0)
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

bool func_84(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
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

void func_86(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_87()
{
	switch (iLocal_55)
	{
		case -693032058:
			if (unk_0xBF75E4DF4C367CD9(-805,17f, 173,98f, 72,69f, 0,1f, -693032058, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,17f, 173,98f, 72,69f, 0,1f, -693032058, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-805,13f, 173,86f, 72,68f, 0,1f, -680040094, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,13f, 173,86f, 72,68f, 0,1f, -680040094, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-805,09f, 173,83f, 72,68f, 0,1f, 996113921, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,13f, 173,86f, 72,68f, 0,1f, 996113921, 0, 0, 1), true);
						if (unk_0xBF75E4DF4C367CD9(-804,45f, 172,78f, 72,33f, 0,1f, 542291840, 0))
						{
							unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-804,45f, 172,78f, 72,33f, 0,1f, 542291840, 0, 0, 1), true);
							return 1;
						}
					}
				}
			}
			break;
		
		case -1620762220:
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				return 1;
			}
			break;
		
		case -35679191:
			if (unk_0xC844350D5D58C99A(iLocal_56) && unk_0xBF75E4DF4C367CD9(-8,9f, 517,01f, 174f, 1f, 21833643, 0))
			{
				return 1;
			}
			break;
		
		case -1630172026:
			if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, -1630172026, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, -1630172026, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, -680040094, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, -680040094, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, 996113921, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, 996113921, 0, 0, 1), true);
						return 1;
					}
				}
			}
			break;
		
		case 788975200:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 788975200, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 788975200, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,57f, 0,5f, 788975200, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,57f, 0,5f, 788975200, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case -1533900808:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, -1533900808, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, -1533900808, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case 1384562503:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 1384562503, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 1384562503, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case 2057223314:
			if (unk_0xBF75E4DF4C367CD9(1976,92f, 3821,21f, 33,32f, 0,5f, -1620762220, 0))
			{
				return 1;
			}
			break;
		
		case 469594741:
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				unk_0x1E9649458B15960F(iLocal_56, true);
				return 1;
			}
			break;
	}
	return 0;
}

int func_88()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_89(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_93(0)) && !func_92())
				{
					if ((Global_95672 && Global_95673) || func_91())
					{
						return 0;
					}
					if (func_90(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_90(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_91()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_92()
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
			if (bLocal_50)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == 225514697)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
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

int func_93(int iParam0)
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

int func_94()
{
	if ((func_99() && func_98()) && func_96())
	{
		return 1;
	}
	if (!func_99())
	{
	}
	if (!func_95())
	{
	}
	if (!func_98())
	{
	}
	if (!func_96())
	{
	}
	return 0;
}

int func_95()
{
	unk_0x9E5E60D8C63FD9D1();
	if (unk_0x25F7A4D42AF2AB93())
	{
		iLocal_322 = 1;
		return 1;
	}
	return 0;
}

int func_96()
{
	if (unk_0x64F604CF561734A9(func_97(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_97()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		
		case -1620762220:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		
		case 948080762:
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		
		case 469594741:
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		
		case -35679191:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		
		case -693032058:
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		
		case -1630172026:
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_98()
{
	iVar0 = func_66();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	unk_0x3F423BF5B8125A50(sLocal_335);
	if (!unk_0xB4AE0788C1587752(sLocal_335))
	{
		return 0;
	}
	iLocal_321 = 1;
	return 1;
}

int func_100()
{
	func_101();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_101()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_104(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_103(unk_0x16F2683693E537C9());
			if (func_102(iVar0) && (!func_16(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_102(Global_111638.f_2358.f_539.f_4321))
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

bool func_102(int iParam0)
{
	return iParam0 < 3;
}

int func_103(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)
{
	if (func_102(iParam0))
	{
		return func_105(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_105(int iParam0)
{
	return Global_1798[iParam0];
}

int func_106()
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

int func_107()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_109(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_109(int iParam0)
{
	return func_110(iParam0, Global_41431);
}

int func_110(int iParam0, int iParam1)
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

void func_111()
{
	func_116();
	if (((((func_84(func_115()) || func_84("TV_HLP0")) || func_84("TV_HLP1")) || func_84("TV_HLP2")) || func_84("TV_HLP3")) || func_84("TV_HLP4"))
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0xBFBFE6D9F51994DB();
	if (unk_0x562F77A7F33D2E46("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		unk_0x8910D3D58E0132B8("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_SOCEN"))
	{
		unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_SOCEN");
	}
	unk_0xD251FFCFFF3A13CC(0);
	if (iLocal_321)
	{
		unk_0x8D17794CE3273D70(func_44());
	}
	if (iLocal_322)
	{
		unk_0x29D7581AEF4440C2();
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_327))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_327, 0);
	}
	func_114();
	func_113(&uLocal_123, 0);
	func_113(&uLocal_123, 1);
	if (iLocal_51)
	{
		unk_0xB38702A5025BB490("chop");
	}
	func_112();
	if (iLocal_326)
	{
		unk_0xA68C4874B560B1C0();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_112()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && func_85(1, 0, 1)) && iLocal_51)
		{
			func_75(0, 1, 1, 0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
}

void func_113(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_114()
{
	iLocal_54 = 0;
}

char* func_115()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "SA_BONG2";
			}
			else
			{
				sVar0 = "SA_BONG";
			}
			break;
		
		case -693032058:
			sVar0 = "SA_CIGAR";
			break;
		
		case -1620762220:
			sVar0 = "SA_BEER";
			break;
		
		case -1630172026:
			sVar0 = "SA_SPLFF";
			break;
		
		case 788975200:
			sVar0 = "SA_WHSKY";
			break;
		
		case -1533900808:
			sVar0 = "SA_WHSKY";
			break;
		
		case 1384562503:
			sVar0 = "SA_WHSKY";
			break;
		
		case 948080762:
			sVar0 = "SA_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SA_MRJAM";
			break;
		
		case 2057223314:
			sVar0 = "SA_BEER";
			break;
		
		case 469594741:
			sVar0 = "SA_WHEAT";
			break;
		
		case -35679191:
			sVar0 = "SA_WINE";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

void func_116()
{
	switch (iLocal_55)
	{
		case -693032058:
			break;
		
		case -257549932:
			break;
		
		case -1620762220:
			break;
		
		case 788975200:
			break;
		
		case -1533900808:
			break;
		
		case 1384562503:
			break;
		
		case 948080762:
			break;
		
		case 1022578470:
			break;
		
		case 2057223314:
			if (bLocal_50)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

