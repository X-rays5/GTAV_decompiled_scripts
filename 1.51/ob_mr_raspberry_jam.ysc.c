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
	iLocal_296 = unk_0x09AC81E49EA267F7(0, 4);
	func_76();
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_74();
	}
	if (func_71(9))
	{
		func_74();
	}
	if (func_70() && !func_69())
	{
		func_74();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_0))
	{
		iLocal_41 = iScriptParam_0;
		unk_0x1E9649458B15960F(iLocal_41, true);
		iLocal_40 = unk_0x134B62B726CEC8E6(iLocal_41);
	}
	func_68(&uLocal_108, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	while (true)
	{
		wait(0);
		if (unk_0xC844350D5D58C99A(iLocal_41))
		{
			if (((((unk_0x63D2C15453688621(iLocal_41) && !unk_0x437347B10A200C4B(iLocal_41, 0)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && func_63()) && func_62(0)) && !unk_0x991B1F0980C62628())
			{
				switch (iLocal_292)
				{
					case 0:
						if (func_60() && func_58())
						{
							iLocal_292 = 1;
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
			else
			{
				func_74();
			}
		}
		else
		{
			func_74();
		}
	}
}

void func_1()
{
	vVar0 = { func_57() };
	vVar3 = { 1,2f, 1,2f, 1,2f };
	fVar6 = 0f;
	switch (iLocal_293)
	{
		case 0:
			if (func_52(vVar0, vVar3) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_41, true), 90f))
			{
				func_76();
				if (!unk_0x562F77A7F33D2E46("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					unk_0x8BC9595FD2792B5D("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				func_50(func_51());
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (func_49(1, 0, 1))
			{
				if (func_52(vVar0, vVar3))
				{
					if ((!unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && !unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) && unk_0x06F8112AA79C53D9(2, 51))
					{
						func_76();
						func_40(1, 1, 1, 0, 0, 0);
						if (func_39(func_51()))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x679C321F8CAA2CFA(vVar0, 3f, 0);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
						iLocal_36 = 1;
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
						unk_0x1E9649458B15960F(iLocal_41, false);
						func_40(1, 1, 1, 0, 0, 0);
						iLocal_293 = 2;
					}
				}
				else
				{
					if (func_39(func_51()))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_293 = 0;
				}
			}
			break;
		
		case 2:
			func_38();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(1, 0, 1);
			iLocal_294 = unk_0xE9744DB7B8CA6965(func_37(), func_36(), 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_294, func_35(), func_34(iLocal_296), 8f, -2f, 0, 0, 1148846080, 0);
			unk_0xE14EC663EED44AD5(iLocal_41, iLocal_294, func_33(iLocal_296), func_35(), 8f, -2f, 0, 1148846080);
			if (unk_0xB818A4F8553577BC(iLocal_294))
			{
				unk_0xEFC3DF9D33E248D8(iLocal_294, false);
			}
			if (unk_0x6C3F127AAF415E69() != 4)
			{
				iLocal_295 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
				unk_0x93E9ED66DAB9FBE3(iLocal_295, iLocal_294, func_30(iLocal_296), func_35());
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			else
			{
				unk_0x5CAFA5DD13658DFE(0);
			}
			iLocal_299 = 0;
			iLocal_300 = (unk_0x1C0640BA9A7327B3() + func_29());
			iLocal_293 = 3;
			break;
		
		case 3:
			func_38();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(1, 0, 1);
			if (unk_0x69DF961355195C3C(iLocal_294))
			{
				func_27();
				if (iLocal_297)
				{
					fVar6 = unk_0xA45992A6CE82FB43(iLocal_294);
					if (unk_0xDC2A248C2CB7B3DB(func_35(), func_34(iLocal_296), "WalkInterruptible", &fVar7, &fVar8))
					{
						if (fVar6 >= fVar7 && fVar6 <= fVar8)
						{
							iLocal_293 = 5;
						}
					}
				}
				if (!iLocal_299 && unk_0x1C0640BA9A7327B3() > iLocal_300)
				{
					if (func_3(&uLocal_108, "RASPAUD", func_26(), 7, 0, 0, 0))
					{
						iLocal_299 = 1;
					}
				}
			}
			else
			{
				iLocal_293 = 5;
			}
			break;
		
		case 4:
			unk_0x38C3A68D7861DCFD(1, 0, 1);
			if (!unk_0x69DF961355195C3C(iLocal_294))
			{
				iLocal_293 = 5;
			}
			break;
		
		case 5:
			if (func_2(iLocal_295))
			{
				unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			unk_0xBFBFE6D9F51994DB();
			if (unk_0x6FB46C25CCB7E6D5(-234727160, &iLocal_301, -1))
			{
				unk_0xCDC520E5E48E63D9(-234727160, iLocal_301 + 1, 1);
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			iLocal_36 = 0;
			iLocal_296++;
			if (iLocal_296 > 3)
			{
				iLocal_296 = 0;
			}
			iLocal_297 = 0;
			if (unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) < (unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9()) - 10))
			{
				unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) + 10, 0);
			}
			func_40(0, 1, 1, 0, 0, 0);
			unk_0x1E9649458B15960F(iLocal_41, true);
			iLocal_293 = 0;
			break;
	}
}

int func_2(int iParam0)
{
	if (unk_0x6C3F127AAF415E69() != 4 && unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
					func_24();
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
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_22();
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
		func_24();
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
	if (func_21(14))
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
		Global_19486 = func_15();
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

int func_15()
{
	func_16();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_16()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_19(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_18(unk_0x16F2683693E537C9());
			if (func_17(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_17(Global_111638.f_2358.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22()
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

bool func_23(int iParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_26()
{
	switch (iLocal_296)
	{
		case 0:
			sVar0 = "SHRJ_0";
			break;
		
		case 1:
			sVar0 = "SHRJ_1";
			break;
		
		case 2:
			sVar0 = "SHRJ_2";
			break;
		
		case 3:
			sVar0 = "SHRJ_3";
			break;
	}
	return sVar0;
}

void func_27()
{
	if (iLocal_297 == 0)
	{
		func_28(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_297 = 1;
		}
	}
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

int func_29()
{
	switch (iLocal_296)
	{
		case 0:
			return 3600;
			break;
		
		case 1:
			return 4000;
			break;
		
		case 2:
			return 3000;
			break;
		
		case 3:
			return 5500;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_30(int iParam0)
{
	sVar0 = "";
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_cam";
			}
			else
			{
				sVar0 = "short_cam";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_cam";
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_cam";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_cam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_cam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_cam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_cam";
					break;
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_cam";
			break;
		
		case -35679191:
			sVar0 = func_31();
			break;
	}
	return sVar0;
}

char* func_31()
{
	func_32();
	sVar0 = "";
	vVar1 = { unk_0x07DAF5424BC6779A() };
	fVar4 = unk_0x0EB28750412C3A5A(vVar1, vLocal_273[0], true);
	fVar5 = unk_0x0EB28750412C3A5A(vVar1, vLocal_273[1], true);
	if (fVar4 < fVar5)
	{
		sVar0 = "drinking_wine_cam2";
		vLocal_286 = { -8,9f, 515,6f, 175,4f };
		vLocal_289 = { -17,1f, 0,5f, 6,5f };
	}
	else
	{
		sVar0 = "drinking_wine_cam3";
		vLocal_286 = { -10,1f, 516f, 175,3f };
		vLocal_289 = { -13,5f, 0,5f, -56f };
	}
	return sVar0;
}

void func_32()
{
	vLocal_273[0] = { -10,1749f, 517,8317f, 175,192f };
	vLocal_273[1] = { -7,694f, 516,4619f, 175,2034f };
	vLocal_273[2] = { -8,0344f, 518,4184f, 175,1866f };
	vLocal_273[3] = { -9,7451f, 515,6803f, 175,1711f };
}

char* func_33(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_bong";
			}
			else
			{
				sVar0 = "bong_short";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_bottle";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_raspjam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_raspjam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_raspjam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_raspjam";
					break;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "enter_shotglass";
			}
			else
			{
				sVar0 = "enter_glass";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_rag";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter_beer";
			}
			else
			{
				sVar0 = "enter_bottle";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_glass";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine_glass";
			break;
	}
	return sVar0;
}

char* func_34(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_FRA";
			}
			else
			{
				sVar0 = "michael_short";
			}
			break;
		
		case -693032058:
			sVar0 = "cigar_enter_michael";
			break;
		
		case -1620762220:
			sVar0 = "enter";
			break;
		
		case 788975200:
		case -1533900808:
			if (bLocal_35)
			{
				sVar0 = "enter_trevor";
			}
			else
			{
				sVar0 = "enter";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_player";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea";
					break;
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter";
			}
			else
			{
				sVar0 = "enter_michael";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_michael";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine";
			break;
	}
	return sVar0;
}

char* func_35()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
				if (bLocal_35)
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
			if (bLocal_35)
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

Vector3 func_36()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
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
			if (bLocal_35)
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

Vector3 func_37()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
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
			if (bLocal_35)
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

void func_38()
{
	Global_22211.f_6 = 1;
}

bool func_39(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_40(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_48(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_12())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_47(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_48(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_47(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_45(unk_0xD803B885F5E47A62())) && !func_42(unk_0xD803B885F5E47A62(), 0)) && !func_41()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_45(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_41()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_42(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
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

int func_44()
{
	return Global_1312745;
}

int func_45(int iParam0)
{
	if (func_42(iParam0, 0))
	{
		return 1;
	}
	if (func_46())
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

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_47(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_48(int iParam0)
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

int func_49(bool bParam0, bool bParam1, bool bParam2)
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

void func_50(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

char* func_51()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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

int func_52(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_56(0)) && !func_55())
				{
					if ((Global_95672 && Global_95673) || func_54())
					{
						return 0;
					}
					if (func_53(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_53(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_54()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_55()
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

int func_56(int iParam0)
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

Vector3 func_57()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
			if (bLocal_35)
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

int func_58()
{
	if (unk_0x64F604CF561734A9(func_59(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_59()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
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

int func_60()
{
	if (func_61())
	{
		iLocal_298 = 1;
		return 1;
	}
	return 0;
}

int func_61()
{
	sVar0 = func_35();
	unk_0x3F423BF5B8125A50(sVar0);
	while (!unk_0xB4AE0788C1587752(sVar0))
	{
		wait(0);
	}
	return 1;
}

int func_62(int iParam0)
{
	if (Global_76622)
	{
		return 1;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (iLocal_40 == 948080762)
		{
			if (func_53(unk_0x68F4C0EC296D3901(iLocal_41, false), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 469594741)
		{
			if (func_53(unk_0x68F4C0EC296D3901(iLocal_41, false), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 1022578470)
		{
			if (func_53(unk_0x68F4C0EC296D3901(iLocal_41, false), func_57(), 5f, 0))
			{
				return 1;
			}
		}
		else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x4D570FEF9D230CE7(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	switch (iLocal_40)
	{
		case -693032058:
			if (func_15() == 0)
			{
				return 1;
			}
			break;
		
		case -257549932:
			if (unk_0x8CD06866876216F2())
			{
				return 1;
			}
			if (func_15() == 1)
			{
				bLocal_34 = true;
				return 1;
			}
			if (func_15() == 0)
			{
				if (!iLocal_33)
				{
					iLocal_33 = 1;
				}
				if (unk_0x8A22C4C08282BF26(-645501366) > 0)
				{
					return 0;
				}
				if (func_67())
				{
					return 0;
				}
				if (((((Global_93750[0] == 5 || Global_93750[0] == 21) || Global_93750[0] == 20) || Global_93750[0] == 16) || Global_93750[0] == 18) || Global_93750[0] == 9)
				{
					return 0;
				}
				if (((((Global_93750[0] == 6 || Global_93750[0] == 7) || Global_93750[0] == 11) || Global_93750[0] == 17) || Global_93750[0] == 140) || Global_93750[0] == 141)
				{
					return 1;
				}
				return 1;
			}
			break;
		
		case -1620762220:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 1)
			{
				if (!iLocal_32)
				{
					iLocal_32 = 1;
				}
				return 1;
			}
			break;
		
		case -1630172026:
			if (func_15() == 1)
			{
				return 1;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (Global_76622)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_15() == 0)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_15() == 2 && func_66(20))
			{
				if (!iLocal_30)
				{
					iLocal_30 = 1;
				}
				iLocal_31 = 1;
				bLocal_35 = true;
				return 1;
			}
			break;
		
		case 948080762:
			if (func_15() == 2 || Global_76622)
			{
				return 1;
			}
			break;
		
		case 1022578470:
			if (Global_111638.f_7256.f_227[145] == 1)
			{
				if (func_15() == 2)
				{
					if (((((Global_93750[13] != 127 && Global_93750[13] != 135) && Global_93766 != 127) && Global_93766 != 135) && !func_65()) && !func_67())
					{
						return 1;
					}
				}
			}
			break;
		
		case 2057223314:
			iLocal_31 = 1;
			if ((Global_38796[78] != 1 && Global_93750[9] != 117) && Global_93750[11] != 117)
			{
				if (func_15() == 2)
				{
					bLocal_35 = true;
					return 1;
				}
				if ((func_15() == 0 && func_64(130)) && !func_64(131))
				{
					return 1;
				}
			}
			break;
		
		case 469594741:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 0)
			{
				if (Global_93750[0] != 17 && Global_93750[2] != 73)
				{
					return 1;
				}
			}
			break;
		
		case -35679191:
			if (Global_76622)
			{
				return 1;
			}
			if (func_15() == 1)
			{
				bLocal_34 = true;
				iLocal_32 = 1;
				if (!iLocal_31)
				{
					iLocal_31 = 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_67()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_69()
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

int func_70()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_71(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_72(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, Global_41431);
}

int func_73(int iParam0, int iParam1)
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

void func_74()
{
	func_76();
	unk_0xBFBFE6D9F51994DB();
	if (unk_0x562F77A7F33D2E46("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		unk_0x8910D3D58E0132B8("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (func_39(func_51()))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (iLocal_298)
	{
		unk_0x8D17794CE3273D70(func_35());
	}
	func_75();
	func_76();
	unk_0x10FAF14A60A0DBE1();
}

void func_75()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && func_49(1, 0, 1)) && iLocal_36)
		{
			func_40(0, 1, 1, 0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
}

void func_76()
{
	switch (iLocal_40)
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
			if (bLocal_35)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

