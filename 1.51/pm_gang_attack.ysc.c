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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_272 = -1;
	iLocal_273 = -1;
	StringCopy(&cLocal_274, "PMGAUD", 8);
	iLocal_276 = -1;
	iLocal_277 = -1;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_62(2);
		func_61();
	}
	func_54();
	while (true)
	{
		wait(0);
		if (func_53())
		{
			iLocal_273 = -1;
		}
		else if (iLocal_273 == -1)
		{
			iLocal_273 = unk_0x1C0640BA9A7327B3();
		}
		func_1();
	}
}

void func_1()
{
	switch (iLocal_36)
	{
		case 0:
			unk_0xD7992BEF7A9D109E("PGANG", 0);
			if (unk_0x67C1D9E5B91B2E37(0))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (unk_0xC844350D5D58C99A(Global_110348.f_225[iVar4]))
					{
						uLocal_284[iVar4] = Global_110348.f_225[iVar4];
						Global_110348.f_225[iVar4] = 0;
						unk_0x73270B3C9CC833FD(uLocal_284[iVar4], true, 1);
						if (iLocal_307 == 0)
						{
							iLocal_307 = unk_0x134B62B726CEC8E6(uLocal_284[iVar4]);
						}
						if (!unk_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
						{
							unk_0x6DF7BF67E86AAE86(uLocal_284[iVar4], iLocal_305);
							unk_0x3CC33E4E9CE523F4(uLocal_284[iVar4], 1);
							unk_0xB35CCEC0D4946813(uLocal_284[iVar4], 0);
							unk_0x298903DD96203C2C(uLocal_284[iVar4], 5);
							unk_0x26A6B1686E33113F(uLocal_284[iVar4], 1);
							func_52(uLocal_284[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_106 == 0)
							{
								unk_0x3CC33E4E9CE523F4(uLocal_284[iVar4], 2);
							}
							uLocal_298[iVar4] = func_49(uLocal_284[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (unk_0xC844350D5D58C99A(Global_110348.f_222[iVar4]))
					{
						uLocal_281[iVar4] = Global_110348.f_222[iVar4];
						Global_110348.f_222[iVar4] = 0;
						unk_0x73270B3C9CC833FD(uLocal_281[iVar4], true, 1);
						if (iLocal_306 == 0)
						{
							iLocal_306 = unk_0x134B62B726CEC8E6(uLocal_281[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_37.f_61), 16);
				func_48(&Var0, 7500, 1);
				iLocal_36++;
			}
			break;
		
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_291[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (unk_0xC844350D5D58C99A(uLocal_284[iVar4]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			}
			if (bVar6)
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					if (!iLocal_278)
					{
						func_48("LOSE_WANTED", 7500, 1);
						iLocal_278 = 1;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_106)
	{
		case 1:
			func_45();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_284[iVar4]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
			{
				unk_0x6DAD7906B73F064D(&(uLocal_284[iVar4]));
			}
			else if (func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 100f && func_5(unk_0x16F2683693E537C9(), uLocal_284[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_280 && func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_279)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_37.f_61), 16);
						func_48(&Var0, 7500, 1);
						iLocal_279 = 1;
					}
				}
			}
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_298[iVar4]))
		{
			if (!unk_0xC844350D5D58C99A(uLocal_284[iVar4]) || unk_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_298[iVar4]));
			}
		}
		iVar4++;
	}
}

int func_2()
{
	if (unk_0xD17F06053799A7CA())
	{
		return 0;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (func_53() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	func_62(2);
	func_61();
}

float func_5(int iParam0, int iParam1, bool bParam2)
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

float func_6(int iParam0, vector3 vParam1, bool bParam4)
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

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147,317f, 4795,208f, 40,08961f;
			break;
		
		case 9:
			return 1524,329f, -2108,269f, 75,7248f;
			break;
		
		case 10:
			return -1172,195f, -1577,427f, 3,38152f;
			break;
		
		case 1:
			return 898,3718f, -177,0764f, 72,68348f;
			break;
		
		case 4:
			return 1191,302f, 2672,064f, 36,73154f;
			break;
		
		case 3:
			return -1584,333f, 5193,487f, 2,95912f;
			break;
		
		case 0:
			return 408,3429f, -1623,836f, 28,29278f;
			break;
		
		case 8:
			return -1339,489f, -21,19435f, 50,34566f;
			break;
		
		case 5:
			return 336,207f, 172,4251f, 102,2055f;
			break;
		
		case 6:
			return 394,5495f, -703,3795f, 28,27281f;
			break;
		
		case 7:
			return -1413,184f, -206,0555f, 46,29474f;
			break;
		
		case 11:
			return -560,3809f, 274,5476f, 82,02014f;
			break;
		
		case 12:
			return 221,0845f, 340,7849f, 104,5883f;
			break;
		
		case 13:
			return -296,7154f, 6259,732f, 30,49339f;
			break;
		
		case 14:
			return -2201,402f, 4291f, 47,32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_110348.f_20;
}

void func_9()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_284[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0xC844350D5D58C99A(uLocal_284[iVar1]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_291[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0xCAE036C45E7FC720(uLocal_284[iVar0], &iVar3, 1);
				if (iVar3 == 615608432)
				{
					if (unk_0x440C646F2F11A2A1(uLocal_284[iVar0], 324215364, 0))
					{
						unk_0x5745EA6329A91E29(uLocal_284[iVar0], 324215364, true);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(uLocal_284[iVar0], 324215364, -1, true, true);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0].f_4);
					break;
				
				case 1:
					if (!func_38(uLocal_284[iVar0], 780511057, 1))
					{
						unk_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_38(uLocal_284[iVar0], 1805844857, 1))
					{
						unk_0xF3268524E9BE6D6E(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_273) > 3000) && !unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				func_34(unk_0x16F2683693E537C9(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_273) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar4]))
				{
					if (uLocal_291[iVar4] == 2)
					{
						func_34(uLocal_284[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0xD803B885F5E47A62()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

int func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
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

void func_21()
{
	if (func_28(14))
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
			if (func_24(iVar0) && (!func_28(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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
	return iParam0 < 3;
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
	if (func_24(iParam0))
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

bool func_28(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_33(char* sParam0)
{
	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_34(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_35(iParam2), 1);
}

int func_35(int iParam0)
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

int func_36()
{
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_284[iVar1]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar1]))
		{
			fVar3 = func_5(uLocal_284[iVar1], unk_0x16F2683693E537C9(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_37()
{
	if (func_53())
	{
		return 0;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0;
		}
	}
	return 1;
}

int func_38(int iParam0, int iParam1, bool bParam2)
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

void func_39(int iParam0, vector3 vParam1)
{
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (!func_42(vParam1))
	{
		unk_0xCAE036C45E7FC720(iParam0, &iVar1, 1);
		if (iVar0 == 615608432)
		{
			if (iVar1 != 615608432)
			{
				unk_0x5745EA6329A91E29(iParam0, 615608432, true);
			}
			if (unk_0xD1960163A3042274(iParam0, 242628503) != 1 && unk_0xD1960163A3042274(iParam0, 242628503) != 0)
			{
				unk_0xDD353D0E9C789D0E(&uVar2);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 6000));
				unk_0x8A51557EEC28BFF9(0, func_40(vParam1, 1f), 0, 0);
				unk_0x25644C31B4B6E9F3(uVar2, 1);
				unk_0x75ABDC5F81978924(uVar2);
				unk_0x78ADC381772E3D54(iParam0, uVar2);
				unk_0xF82EA857DA10E0CD(&uVar2);
			}
		}
		else if (unk_0xD1960163A3042274(iParam0, -653332088) != 1 && unk_0xD1960163A3042274(iParam0, -653332088) != 0)
		{
			unk_0xD43A968A9357B799(iParam0, vParam1, -1, -687903391);
		}
	}
	else if (unk_0xD1960163A3042274(iParam0, -982327190) != 1 && unk_0xD1960163A3042274(iParam0, -982327190) != 0)
	{
		unk_0x93D47DFD0AE94949(iParam0, -1);
	}
}

Vector3 func_40(vector3 vParam0, int iParam3)
{
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f) };
	return vParam0 + func_41(vVar0, unk_0x79833B02DBD2A244(0f, iParam3));
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_42(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0xC844350D5D58C99A(uLocal_284[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar0])) && uLocal_291[iVar0] > 0)
		{
			iLocal_280 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_110348.f_35, 134217728) || unk_0xE115347EA59F7B86(uLocal_284[iParam0], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), uLocal_284[iParam0])) || unk_0x688A90832774AB83(uLocal_284[iParam0])) || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f, 1)) || unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f, 1, 1)) || unk_0x681F21BF9F7B449B(21, unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || unk_0x681F21BF9F7B449B(10, unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || unk_0x681F21BF9F7B449B(7, unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || unk_0x681F21BF9F7B449B(0, unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || unk_0x681F21BF9F7B449B(1, unk_0x68F4C0EC296D3901(uLocal_284[iParam0], true), 15f)) || iLocal_280)
	{
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xC844350D5D58C99A(uLocal_281[iVar0]) && unk_0xDF1306B443CD3D15(uLocal_281[iVar0], 0))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (unk_0xC844350D5D58C99A(uLocal_284[iVar4]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar4]))
				{
					if (Local_37[iVar4].f_8 != -1 && Local_37[iVar4].f_8 == iVar0)
					{
						if (!unk_0xC42A92762C58E1B9(uLocal_284[iVar4], uLocal_281[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		unk_0x26F63FD28070F2CE(&cVar5, 0,05f, (0,25f + (IntToFloat(iVar0) * 0,025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_284[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_37[iVar0].f_8 == -1)
					{
						if (!unk_0x24129324CD7C13D0(uLocal_284[iVar0], 286, 1))
						{
							unk_0x4E885A246A9D983A(uLocal_284[iVar0], 286, true);
						}
					}
					else
					{
						bVar12 = false;
						if (unk_0x405E212DDE472467(uLocal_284[iVar0], 0))
						{
							iVar13 = unk_0x6937EA2286828455(uLocal_284[iVar0], 0);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_281[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_276 == -1 && func_46(uLocal_284[iVar0], 0) == -1)
								{
									iLocal_276 = iVar0;
								}
								uLocal_291[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_276 != -1)
					{
						iLocal_277 = iLocal_276;
						if (unk_0xC844350D5D58C99A(uLocal_284[iLocal_276]))
						{
							if (unk_0x405E212DDE472467(uLocal_284[iLocal_276], 0))
							{
								iVar14 = unk_0x6937EA2286828455(uLocal_284[iLocal_276], 0);
							}
						}
					}
					if ((((((((iLocal_276 == -1 || !unk_0xC844350D5D58C99A(uLocal_284[iLocal_276])) || unk_0xEB6A8945D1AC98A1(uLocal_284[iLocal_276])) || !unk_0xC844350D5D58C99A(iVar14)) || !unk_0xDF1306B443CD3D15(iVar14, 0)) || unk_0x464B3D84B739AE72(iVar14, 0, 1)) || unk_0x464B3D84B739AE72(iVar14, 1, 1)) || unk_0x464B3D84B739AE72(iVar14, 4, 1)) || unk_0x464B3D84B739AE72(iVar14, 5, 1))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (unk_0xC844350D5D58C99A(uLocal_284[iVar11]) && !unk_0xEB6A8945D1AC98A1(uLocal_284[iVar11]))
							{
								if (func_46(uLocal_284[iVar11], 0) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_276 = iVar15;
						}
					}
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar17 = 0;
				unk_0xCAE036C45E7FC720(uLocal_284[iVar0], &iVar17, 1);
				if (iVar17 == 615608432)
				{
					if (unk_0x440C646F2F11A2A1(uLocal_284[iVar0], 324215364, 0))
					{
						unk_0x5745EA6329A91E29(uLocal_284[iVar0], 324215364, true);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(uLocal_284[iVar0], 324215364, -1, true, true);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0].f_4);
					break;
				
				case 1:
					if (Local_37[iVar0].f_8 == -1)
					{
						if (!func_38(uLocal_284[iVar0], 780511057, 1))
						{
							unk_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 16);
						}
					}
					else if (uLocal_281[Local_37[iVar0].f_8] == 0 || Local_37[iVar0].f_9 == -2)
					{
					}
					else if (!unk_0xC42A92762C58E1B9(uLocal_284[iVar0], uLocal_281[Local_37[iVar0].f_8], 0))
					{
						if (func_5(uLocal_284[iVar0], uLocal_281[Local_37[iVar0].f_8], 1) > 4f)
						{
							if (!func_38(uLocal_284[iVar0], 780511057, 1))
							{
								unk_0x5BCC146C60688877(uLocal_284[iVar0], uLocal_281[Local_37[iVar0].f_8], 0f, 0f, 0f, 4f, 0);
								unk_0x6C3AE6E278DB3D0E(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 16);
							}
						}
						else if (!func_38(uLocal_284[iVar0], -1794415470, 1))
						{
							unk_0x5B1D360B9C6F0A09(uLocal_284[iVar0], uLocal_281[Local_37[iVar0].f_8], -1, Local_37[iVar0].f_9, 2f, 1, 0);
						}
					}
					else if (!func_38(uLocal_284[iVar0], 538064912, 1))
					{
						unk_0x7A3479BFA16439E6(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 1101004800);
					}
					break;
				
				case 2:
					if (unk_0x405E212DDE472467(uLocal_284[iVar0], 0))
					{
						if (iLocal_276 == iVar0)
						{
							if (func_46(uLocal_284[iVar0], 0) != -1)
							{
								if (!func_38(uLocal_284[iVar0], 355471868, 1))
								{
									unk_0x16A6C233289238AA(uLocal_284[iVar0], unk_0x6937EA2286828455(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], -1273030092, 1) || iLocal_276 != iLocal_277)
							{
								unk_0x89258193691A7600(uLocal_284[iVar0], unk_0x6937EA2286828455(uLocal_284[iVar0], 0), unk_0x16F2683693E537C9(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (unk_0xD1960163A3042274(uLocal_284[iVar0], -1273030092) == 1)
							{
								if (!unk_0x6B4464DA5794D055(uLocal_284[iVar0]))
								{
									unk_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_46(uLocal_284[iVar0], 0) == -1)
						{
							if (!func_38(uLocal_284[iVar0], -1273030092, 1) || iLocal_276 != iLocal_277)
							{
								unk_0x9412BCBFE7F69F94(uLocal_284[iVar0], unk_0x6937EA2286828455(uLocal_284[iVar0], 0), unk_0x6937EA2286828455(uLocal_284[iLocal_276], 0), -1, 40f, 786468, -1082130432, 20, 1101004800);
							}
							else if (unk_0xD1960163A3042274(uLocal_284[iVar0], -1273030092) == 1)
							{
								if (!unk_0x6B4464DA5794D055(uLocal_284[iVar0]))
								{
									unk_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar18 = unk_0xA30B8362589C124A(unk_0x6937EA2286828455(uLocal_284[iVar0], 0), -1, 0);
							if (!unk_0xC844350D5D58C99A(iVar18) || unk_0xEB6A8945D1AC98A1(iVar18))
							{
								if (!func_38(uLocal_284[iVar0], 355471868, 1))
								{
									unk_0x16A6C233289238AA(uLocal_284[iVar0], unk_0x6937EA2286828455(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], 2104565373, 1) || iLocal_276 != iLocal_277)
							{
								unk_0xFFDDE8CC59EB6D40(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar20 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_273) > 3000) && !unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				func_34(unk_0x16F2683693E537C9(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_273) > 1000)
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0x65636D4556D82155(uLocal_284[iVar19]))
				{
					if (unk_0x405E212DDE472467(uLocal_284[iVar19], 0))
					{
						func_34(uLocal_284[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

int func_46(int iParam0, int iParam1)
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

void func_47()
{
	func_62(1);
	func_61();
}

void func_48(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_49(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_50(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

int func_53()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_54()
{
	switch (func_22())
	{
		case 0:
			func_60(&uLocal_107, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_60(&uLocal_107, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_60(&uLocal_107, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			break;
	}
	unk_0x51B096AAC60548C1(0,1f);
	unk_0x15EA7F4313456B1D(3, false);
	unk_0x060F249A9A3E3F4E(0);
	iLocal_106 = func_58();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_57(&(Local_37[0]), func_8(), 0);
	func_57(&(Local_37[1]), func_8(), 1);
	func_57(&(Local_37[2]), func_8(), 2);
	func_57(&(Local_37[3]), func_8(), 3);
	func_57(&(Local_37[4]), func_8(), 4);
	func_57(&(Local_37[5]), func_8(), 5);
	StringCopy(&(Local_37.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_37.f_65), func_55(iVar0), 16);
	unk_0xF63400DBE3303D26("relGang", &iLocal_305);
	unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_305);
	unk_0x0E2400AB9174FA81(5, iLocal_305, 1862763509);
	unk_0x0E2400AB9174FA81(5, iLocal_305, -1533126372);
	switch (iVar0)
	{
		case 0:
			unk_0x0E2400AB9174FA81(5, 1862763509, 296331235);
			unk_0x0E2400AB9174FA81(1, iLocal_305, 296331235);
			unk_0x0E2400AB9174FA81(1, 296331235, iLocal_305);
			break;
		
		case 1:
			unk_0x0E2400AB9174FA81(5, 1862763509, -1033021910);
			unk_0x0E2400AB9174FA81(1, iLocal_305, -1033021910);
			unk_0x0E2400AB9174FA81(1, -1033021910, iLocal_305);
			break;
		
		case 2:
			unk_0x0E2400AB9174FA81(5, 1862763509, 1782292358);
			unk_0x0E2400AB9174FA81(1, iLocal_305, 1782292358);
			unk_0x0E2400AB9174FA81(1, 1782292358, iLocal_305);
			break;
	}
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543,6415f, 303,5388f, 82,0202f };
					uParam0->f_3 = 231,5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = 487013001;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563,5045f, 303,3635f, 82,192f };
					uParam0->f_3 = 191,6703f;
					uParam0->f_4 = { -561,9358f, 293,7914f, 84,1827f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547,9926f, 299,531f, 82,0218f };
					uParam0->f_3 = 170,2791f;
					uParam0->f_4 = { -550,0999f, 292,7203f, 87,8903f };
					uParam0->f_7 = -1074790547;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551,7525f, 301,2135f, 82,1226f };
					uParam0->f_3 = 132,7229f;
					uParam0->f_4 = { -561,2323f, 294,0457f, 87,6588f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549,7384f, 303,0894f, 82,0981f };
					uParam0->f_3 = 167,5811f;
					uParam0->f_4 = { -552,8337f, 292,7388f, 88,2295f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558,4697f, 303,0401f, 82,2333f };
					uParam0->f_3 = 161,0839f;
					uParam0->f_4 = { -561,9985f, 293,9765f, 87,8096f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231,2834f, 345,2137f, 104,3893f };
					uParam0->f_3 = 324,6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = 2017895192;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236,5094f, 339,3164f, 104,5298f };
					uParam0->f_3 = 112,7911f;
					uParam0->f_4 = { 230,1282f, 337,069f, 106,8048f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224,3295f, 348,2992f, 104,4469f };
					uParam0->f_3 = 165,7146f;
					uParam0->f_4 = { 221,6486f, 340,3152f, 106,6212f };
					uParam0->f_7 = -1074790547;
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234,1038f, 341,6698f, 104,5309f };
					uParam0->f_3 = 110,0142f;
					uParam0->f_4 = { 223,9347f, 338,3914f, 106,8137f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228,9968f, 344,3681f, 104,5384f };
					uParam0->f_3 = 153,6073f;
					uParam0->f_4 = { 224,4416f, 336,0886f, 106,1191f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221,382f, 346,3744f, 104,5675f };
					uParam0->f_3 = 165,8422f;
					uParam0->f_4 = { 219,6116f, 340,9911f, 106,4532f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325,1079f, 6263,833f, 30,4151f };
					uParam0->f_3 = 195,9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = 2017895192;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312,9843f, 6250,115f, 30,4899f };
					uParam0->f_3 = 319,1074f;
					uParam0->f_4 = { -308,3476f, 6254,857f, 32,6941f };
					uParam0->f_7 = -1074790547;
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326,1756f, 6268,338f, 30,4714f };
					uParam0->f_3 = 261,9836f;
					uParam0->f_4 = { -312,8552f, 6265,857f, 43,5835f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323,9344f, 6259,659f, 30,3539f };
					uParam0->f_3 = 292,4941f;
					uParam0->f_4 = { -313,3472f, 6263,395f, 42,7414f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318,7812f, 6259,576f, 30,5161f };
					uParam0->f_3 = 295,0701f;
					uParam0->f_4 = { -313,766f, 6261,479f, 32,6516f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314,925f, 6255,542f, 30,5164f };
					uParam0->f_3 = 309,7791f;
					uParam0->f_4 = { -310,572f, 6258,45f, 32,6648f };
					uParam0->f_7 = 487013001;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215,32f, 4275,046f, 46,475f };
					uParam0->f_3 = 16,955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = 487013001;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195,425f, 4262,31f, 47,2741f };
					uParam0->f_3 = 241,4366f;
					uParam0->f_4 = { -2185,362f, 4256,376f, 48,4082f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200,848f, 4268,19f, 47,3093f };
					uParam0->f_3 = 331,1949f;
					uParam0->f_4 = { -2196,575f, 4275,129f, 49,0669f };
					uParam0->f_7 = -1074790547;
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202,818f, 4294,149f, 47,4518f };
					uParam0->f_3 = 263,7257f;
					uParam0->f_4 = { -2192,783f, 4289,572f, 50,3251f };
					uParam0->f_7 = 615608432;
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196,271f, 4265,064f, 47,3446f };
					uParam0->f_3 = 325,4524f;
					uParam0->f_4 = { -2191,183f, 4271,747f, 49,867f };
					uParam0->f_7 = 487013001;
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204,492f, 4290,059f, 47,3773f };
					uParam0->f_3 = 269,5739f;
					uParam0->f_4 = { -2193,017f, 4292,669f, 54,873f };
					uParam0->f_7 = 324215364;
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_58()
{
	return func_59(Global_110348.f_20, Global_110348.f_29);
}

int func_59(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_284[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uLocal_284[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xF3268524E9BE6D6E(uLocal_284[iVar0], unk_0x16F2683693E537C9(), 1000f, -1, 0, 1);
			}
			unk_0x6DAD7906B73F064D(&(uLocal_284[iVar0]));
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_298[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_298[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xC844350D5D58C99A(uLocal_281[iVar0]))
		{
			unk_0x046C362CF15F1935(&(uLocal_281[iVar0]));
		}
		iVar0++;
	}
	unk_0xC05DBA7D4F88D5E5(iLocal_306, false);
	unk_0xAB8E2DDC7AF955E0(iLocal_307, false);
	unk_0x51B096AAC60548C1(1f);
	unk_0x15EA7F4313456B1D(3, true);
	unk_0x060F249A9A3E3F4E(1);
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

