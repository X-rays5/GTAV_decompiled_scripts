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
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409,1539f, -1626,677f, 28,2928f };
	vLocal_49 = { 409,2747f, -1623,022f, 28,29278f };
	fLocal_52 = 202,6928f;
	vLocal_53 = { 415,6071f, -1647,604f, 28,2928f };
	fLocal_56 = 85,7173f;
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_32();
	}
	if (unk_0x8A22C4C08282BF26(-359250475) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vLocal_46 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
		if (vdist2(vLocal_46, vLocal_43) > fLocal_42)
		{
			func_32();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x523BCC9DC80CD82F(413312110);
				if (((unk_0xB87F6CF6E5628C67(413312110) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_32();
				break;
		}
		wait(0);
	}
}

int func_1()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	}
	if (!unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iLocal_38, 1) };
	}
	else
	{
		vVar3 = { 408,5002f, -1624,583f, 29,2928f };
	}
	if ((vdist2(vVar0, vVar3) > 10000f || unk_0x437347B10A200C4B(iLocal_38, 0)) || func_27())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_38, vLocal_57, 1f, 1f, 1f, 0, true, 0))
				{
					unk_0xF82EA857DA10E0CD(&uVar7);
					unk_0xDD353D0E9C789D0E(&uVar7);
					unk_0xE655C47E46F9A7E4(0, fLocal_60, 0);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uVar7);
					unk_0x78ADC381772E3D54(iLocal_38, uVar7);
					unk_0xF82EA857DA10E0CD(&uVar7);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (unk_0x4F1B602325013CC2(iLocal_38) == 1)
				{
					if (!unk_0xC844350D5D58C99A(iLocal_39))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0x8CA9406E01C7EE58(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0,157f)
							{
								iLocal_39 = unk_0x7707E48765093646(413312110, 1f, 1f, 1f, 1, true, false);
								unk_0x9F528B1B53FBC5D9(iLocal_39, iLocal_38, unk_0x4A089F2B762B8D33(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x4F1B602325013CC2(iLocal_38) == 2)
				{
					iVar6 = (unk_0x09AC81E49EA267F7(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0xF82EA857DA10E0CD(&uVar7);
					unk_0xDD353D0E9C789D0E(&uVar7);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x75ABDC5F81978924(uVar7);
					unk_0x78ADC381772E3D54(iLocal_38, uVar7);
					unk_0xF82EA857DA10E0CD(&uVar7);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (vdist2(vVar0, vVar3) < 25f)
			{
				if (unk_0xA4FD7964FEE91ED8(0) != 4)
				{
					if (func_4(&uLocal_63, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						settimera(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (timera() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0x4F1B602325013CC2(iLocal_38) == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				unk_0xF690C84DADBB3551(&iLocal_39);
				unk_0x0C8C0C840C2D1AD2(iLocal_38, unk_0x16F2683693E537C9(), -1, 0, 2);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0xC844350D5D58C99A(iLocal_39))
		{
			if (unk_0xD1960163A3042274(iLocal_38, 993674639) == 1)
			{
				unk_0xF690C84DADBB3551(&iLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_23();
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
		func_25();
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
	if (func_22(14))
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
		Global_19486 = func_16();
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

var func_16()
{
	func_17();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_17()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_20(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_19(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_22(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111638.f_2358.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_38) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_39, 1, 1);
			}
			unk_0x5CEB4DB888A62073(false);
			if (unk_0xD1960163A3042274(iLocal_38, 1805844857) != 1)
			{
				unk_0xFADC0A217229F6B5(iLocal_38, 1);
				unk_0xF3268524E9BE6D6E(iLocal_38, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_28()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	}
	unk_0xE51E576EA6B739AC(vVar0, fLocal_41, 1, 1, &iVar3, 0, 1, -1);
	if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0))
	{
		iVar4 = unk_0x134B62B726CEC8E6(iVar3);
		if (iVar4 == -892841148)
		{
			iLocal_38 = iVar3;
			unk_0x73270B3C9CC833FD(iLocal_38, true, 0);
			unk_0x6D80F1AEBA734886(iLocal_38, 0);
			unk_0x25C5402CC10F76CD(iLocal_38, false);
			unk_0x5F2AA9E2843E9403(iLocal_38, "TONYA");
			unk_0x6DF7BF67E86AAE86(iLocal_38, 1862763509);
			func_31(&uLocal_63, 3, iLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(vLocal_57))
			{
				if (unk_0xD1960163A3042274(iLocal_38, 713668775) != 1)
				{
					unk_0x96167B03C5A77156(iLocal_38, vLocal_57, 1f, -1, 0,25f, 0, fLocal_60);
					unk_0xFADC0A217229F6B5(iLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_38, 1) };
		if (func_29(vLocal_57))
		{
			fLocal_61 = vdist(vVar0, vLocal_49);
			fLocal_62 = vdist(vVar0, vLocal_53);
			if (fLocal_61 < fLocal_62)
			{
				vLocal_57 = { vLocal_49 };
				fLocal_60 = fLocal_52;
			}
			else
			{
				vLocal_57 = { vLocal_53 };
				fLocal_60 = fLocal_56;
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 407,4285f, -1626,572f, 27,29278f, 412,8245f, -1620,167f, 33,29278f, 6f, 0, true, 0))
				{
					vLocal_57 = { vLocal_53 };
					fLocal_60 = fLocal_56;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_32()
{
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x71199B01895C6202(413312110);
	if (unk_0xC844350D5D58C99A(iLocal_38))
	{
		if (unk_0x03068588A1FCED1A(iLocal_38))
		{
			unk_0xEBA53F35D0085654(&iLocal_38);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_38);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

