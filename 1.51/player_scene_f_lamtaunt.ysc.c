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
	iLocal_71 = 318;
	iLocal_261 = 1;
	iLocal_276 = -1;
	StringCopy(&Local_507, "", 16);
	fLocal_511 = 0f;
	sLocal_513 = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	fLocal_514 = 0,94f;
	iLocal_515 = -1;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_159();
	}
	wait(0);
	func_148();
	func_146();
	func_142();
	while (iLocal_261 && func_138(2, 0))
	{
		wait(0);
		switch (iLocal_70)
		{
			case 0:
				if (func_137())
				{
					iLocal_70 = 1;
				}
				break;
			
			case 1:
				if (func_136())
				{
					iLocal_70 = 2;
				}
				break;
			
			case 2:
				if (func_134())
				{
					func_133(&uLocal_72, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_133(&uLocal_72, 2, Global_98465, "LAMAR", 0, 1);
					iLocal_70 = 3;
				}
				break;
			
			case 3:
				if (func_2())
				{
					iLocal_70 = 4;
				}
				break;
			
			case 4:
				func_1();
				break;
		}
	}
	func_159();
}

void func_1()
{
	iLocal_261 = 0;
}

int func_2()
{
	iVar0 = 0;
	while (iVar0 < iLocal_262)
	{
		func_126(&(iLocal_262[iVar0]), iVar0);
		iVar0++;
	}
	func_126(&Global_98465, iLocal_262);
	func_3(Global_98465);
	return 0;
}

void func_3(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!iLocal_517 && unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			iVar0 = func_125(iParam0);
			iVar1 = func_122(iVar0);
			iVar2 = func_121(iVar1);
			if (iVar2 != -1)
			{
				iVar3 = func_119(iParam0);
				if (iVar3 != 0)
				{
					if (!func_118(iVar2) || func_110(iVar2) == 6)
					{
						func_109(75, unk_0x68F4C0EC296D3901(iParam0, false), 250f, -1);
						if (func_41(Global_94478, iVar0, 2, 0, iVar3, iVar2, 75))
						{
							iLocal_517 = 1;
						}
					}
				}
			}
		}
		return;
	}
	func_6(iParam0, 138, &uLocal_72, "FMFAUD", &uLocal_237, &iLocal_258, 3);
	fVar4 = vdist2(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
	if (fVar4 > (8f * 8f))
	{
		iLocal_515 = -1;
	}
	else if (unk_0x7DECE00E09F41C95(iParam0))
	{
		iLocal_515 = -1;
	}
	else
	{
		if (iLocal_515 <= 0)
		{
			iLocal_515 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_515 > 0)
		{
			if (iLocal_516 == 0)
			{
				if (iLocal_515 + 15000 < unk_0x1C0640BA9A7327B3())
				{
					func_4(iParam0, "FRIEND_FOLLOWED_BY_PLAYER", 24);
					iLocal_515 = -1;
					iLocal_516++;
				}
			}
			else if (iLocal_515 + 10000 < unk_0x1C0640BA9A7327B3())
			{
				func_4(iParam0, "HIT_BY_PLAYER", 24);
				iLocal_515 = -1;
				iLocal_516++;
			}
		}
	}
}

void func_4(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
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

int func_6(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	iVar6 = func_38();
	iVar7 = func_33(iParam0);
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
			else if (!func_32(131))
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
			else if (!func_32(130))
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
	if (iVar18 || func_31(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				func_133(uParam2, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				func_133(uParam2, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				func_133(uParam2, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
		}
		if (func_10(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			func_7(iParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}

void func_7(int iParam0)
{
	func_8(iParam0, 0f);
}

void func_8(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_9(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_9(bool bParam0)
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

int func_10(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_29(sParam0, 7))
	{
		sVar0 = "";
		switch (func_38())
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
			func_133(uParam2, 0, unk_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_12(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
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
			func_133(uParam2, 0, unk_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_12(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				func_11(1);
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

void func_11(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_28(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					func_27();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_25();
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
				func_23();
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
				if (func_22())
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
			if (func_21())
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
			func_20();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_19();
		func_14();
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
		func_27();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
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

int func_15()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_18())
	{
		return 0;
	}
	if (func_16(unk_0xD803B885F5E47A62()))
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

bool func_16(int iParam0)
{
	return func_17(iParam0, 20);
}

bool func_17(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_18()
{
	return -1;
}

void func_19()
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

void func_20()
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

int func_21()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_22()
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

void func_23()
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
		Global_19486 = func_38();
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

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_25()
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

bool func_26(int iParam0, int iParam1)
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

void func_27()
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

void func_28(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_29(char* sParam0, int iParam1)
{
	if (unk_0x01C309A4BDFCAD82(sParam0, iParam1))
	{
		return 1;
	}
	else if (!func_30() && !unk_0x1EE04CEA36EF313B())
	{
		if (!unk_0xF20C10E87A52F9A6(iParam1))
		{
			unk_0xD7992BEF7A9D109E(sParam0, iParam1);
		}
	}
	return 0;
}

int func_30()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_31(char* sParam0, char* sParam1, var uParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_29(sParam0, 7))
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

int func_32(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_33(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iVar0 == func_37(14))
	{
		return 0;
	}
	if (iVar0 == func_37(15))
	{
		return 1;
	}
	if (iVar0 == func_37(17))
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
	if (iVar0 == func_37(19))
	{
		return 6;
	}
	if (iVar0 == func_37(37))
	{
		return 7;
	}
	if (iVar0 == func_34(0))
	{
		return 8;
	}
	if (iVar0 == func_34(2))
	{
		return 9;
	}
	if (iVar0 == func_37(20))
	{
		return 10;
	}
	if (iVar0 == func_37(40))
	{
		return 11;
	}
	if (iVar0 == -527186490)
	{
		return 12;
	}
	if (iVar0 == func_37(32))
	{
		return 13;
	}
	if (iVar0 == func_37(24))
	{
		return 14;
	}
	return 16;
}

int func_34(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_38()
{
	func_39();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_39()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_34(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_40(unk_0x16F2683693E537C9());
			if (func_36(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
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

int func_40(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 3;
	iVar1 = func_122(iParam1);
	iVar2 = func_108(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_106(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (func_102(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (func_98(iVar1, iParam2, -1, &sVar8))
	{
		if (func_84(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_83();
						break;
					
					case 203:
						func_82();
						break;
					
					case 204:
						func_81();
						break;
					
					case 205:
						func_80();
						break;
					
					case 206:
						func_42();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_42()
{
	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 129, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 129, (iVar1 / 10));
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_78(iParam0) == 3)
	{
		return 0;
	}
	if (func_78(iParam0) == 4)
	{
		return 0;
	}
	return func_44(func_78(iParam0), 0, iParam1, iParam2, 0);
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_77();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_76(99, 1);
					func_75(-656546900, iParam3);
					break;
				
				case 1:
					func_75(-2098183071, iParam3);
					break;
				
				case 2:
					func_75(1578119842, iParam3);
					break;
			}
			func_60(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_55(5))
					{
						fVar0 = 0,9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_75(-1190521599, iParam3);
							break;
						
						case 1:
							func_75(490143716, iParam3);
							break;
						
						case 2:
							func_75(121069433, iParam3);
							break;
					}
					if (func_55(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(219506691, iParam3);
							break;
						
						case 1:
							func_75(1871505786, iParam3);
							break;
						
						case 2:
							func_75(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(27639974, iParam3);
							break;
						
						case 1:
							func_75(422258364, iParam3);
							break;
						
						case 2:
							func_75(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_75(1806738963, iParam3);
							break;
						
						case 1:
							func_75(1576781520, iParam3);
							break;
						
						case 2:
							func_75(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_75(408653638, iParam3);
									break;
								
								case 1:
									func_75(-424799277, iParam3);
									break;
								
								case 2:
									func_75(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_75(2038531975, iParam3);
									break;
								
								case 1:
									func_75(-572903575, iParam3);
									break;
								
								case 2:
									func_75(-953947924, iParam3);
									break;
							}
							if (func_55(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_75(-445823242, iParam3);
									break;
								
								case 1:
									func_75(-1386757215, iParam3);
									break;
								
								case 2:
									func_75(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_75(-1744069936, iParam3);
									break;
								
								case 1:
									func_75(799609312, iParam3);
									break;
								
								case 2:
									func_75(181688102, iParam3);
									break;
							}
							func_54(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_47(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_47(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_75(-330339780, iParam3);
					break;
				
				case 1:
					func_75(1697564429, iParam3);
					break;
				
				case 2:
					func_75(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_46(iParam0);
	if (Global_41431 == 15)
	{
		func_45(0);
	}
	return 1;
}

void func_45(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_46(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(52740893, iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(1153264002, iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(-1921710979, iVar0, 1);
			break;
	}
}

void func_47(int iParam0)
{
	if (iParam0 == 8)
	{
		func_53(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_53(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_53(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_53(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_50(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_50(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_50(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_50(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_50(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_50(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_49()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_49()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_48(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_49()
{
	iVar0 = 0;
	return iVar0;
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_51(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1312745;
}

int func_53(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_52();
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

void func_54(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_55(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_57(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_57(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_57(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_57(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_56(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_56(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_56(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_56(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_56(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_56(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_49()].f_6174.f_10, iParam0);
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_51(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_59(iParam0, iParam1);
	uVar2 = func_58(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_58(int iParam0)
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

int func_59(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_52();
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

int func_60(bool bParam0)
{
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(-422142831, iVar1, 1);
		func_74(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_24(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_72(&Global_4270065))
	{
		if (func_70(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_63(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_66(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4270064 - 0,5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_68(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_69(var uParam0)
{
	return uParam0->f_80;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

void func_75(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_76(int iParam0, int iParam1)
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

void func_77()
{
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_78(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x6FB46C25CCB7E6D5(52740893, &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6FB46C25CCB7E6D5(1153264002, &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6FB46C25CCB7E6D5(-1921710979, &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_80()
{
	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 128, (iVar1 / 10));
	}
}

void func_81()
{
	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 127, (iVar1 / 10));
	}
}

void func_82()
{
	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 126, (iVar1 / 10));
	}
}

void func_83()
{
	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 125, (iVar1 / 10));
	}
}

int func_84(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_86(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_85(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_85(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_86(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_23();
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
	if (func_97() == 0)
	{
		func_95();
		return 0;
	}
	func_94(Global_21872);
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
		func_93(0);
		func_93(2);
		func_93(1);
	}
	else
	{
		func_23();
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
					func_93(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_93(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_93(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_93(3);
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
		func_23();
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
			if (!func_92())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_91(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(1);
			func_91(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_87(uParam0, sParam1);
	return 1;
}

void func_87(var uParam0, char* sParam1)
{
	if (!func_15())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_88(int iParam0)
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
		if (func_24(14))
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
								func_90(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_90(&(Global_7363[iVar1]));
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
								func_90(&(Global_7363[iVar1]));
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
								func_90(&(Global_7363[iVar1]));
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
								func_90(&(Global_7363[iVar1]));
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
								func_90(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_89(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

void func_89(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_90(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_90(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_90(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_90(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_90(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_90(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_91(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_92()
{
	return Global_1312877;
}

void func_93(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_94(int iParam0)
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

void func_95()
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
		if (!func_96(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_96(struct<6> Param0, struct<6> Param6)
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

int func_97()
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
			if (!func_96(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
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

int func_98(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&Var0, "FTX_", 16);
		StringConCat(&Var0, func_101(iParam0), 16);
		StringConCat(&Var0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&Var0, "LOST", 16);
				break;
			
			case 1:
				StringConCat(&Var0, "LATE", 16);
				break;
			
			case 2:
				StringConCat(&Var0, "HOSP", 16);
				break;
			
			case 3:
				StringConCat(&Var0, "PDIED", 16);
				break;
			
			case 4:
				StringConCat(&Var0, "PBUST", 16);
				break;
			
			default:
				StringConCat(&Var0, "X", 16);
				StringIntConCat(&Var0, iParam1, 16);
				*uParam3 = { Var0 };
				return 0;
				break;
		}
		Var4[0] = { Var0 };
		StringConCat(&(Var4[0]), "a", 16);
		Var4[1] = { Var0 };
		StringConCat(&(Var4[1]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = func_100(iParam0);
			if (func_99(&(Var4[0]), iVar13))
			{
				iParam2 = 1;
			}
			else if (func_99(&(Var4[1]), iVar13))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = unk_0x09AC81E49EA267F7(0, 2);
			}
		}
		*uParam3 = { Var4[iParam2] };
		return 1;
	}
	return 0;
}

int func_99(char* sParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return 0;
	}
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
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
			return 19;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 17;
			break;
	}
	return 145;
}

char* func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_105(0))
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
		Var0.f_3 = func_104(iParam3);
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
		func_103(0);
		func_103(1);
		func_103(2);
		return 1;
	}
	return 0;
}

void func_103(int iParam0)
{
	iVar1 = 0;
	if (!func_36(iParam0))
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

int func_104(int iParam0)
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

bool func_105(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_106(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			
			case 1:
				*uParam3 = 62;
				break;
			
			case 2:
				*uParam3 = 63;
				break;
			
			case 3:
				*uParam3 = 64;
				break;
			
			case 4:
				*uParam3 = 65;
				break;
			
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_98(iParam0, iParam1, 0, &(Var0[0])) && func_98(iParam0, iParam1, 1, &(Var0[1])))
			{
				iVar9 = func_100(iParam0);
				if (func_99(&(Var0[0]), iVar9))
				{
					iParam2 = 1;
				}
				else if (func_99(&(Var0[1]), iVar9))
				{
					iParam2 = 0;
				}
				else
				{
					iParam2 = unk_0x09AC81E49EA267F7(0, 2);
				}
			}
			else
			{
				iParam2 = unk_0x09AC81E49EA267F7(0, 2);
			}
		}
		*uParam4 = func_107(iParam1, iParam2);
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam1 == 0)
				{
					return 67;
				}
				else
				{
					return 68;
				}
				break;
			
			case 1:
				if (iParam1 == 0)
				{
					return 69;
				}
				else
				{
					return 70;
				}
				break;
			
			case 2:
				if (iParam1 == 0)
				{
					return 71;
				}
				else
				{
					return 72;
				}
				break;
			
			case 3:
				if (iParam1 == 0)
				{
					return 73;
				}
				else
				{
					return 74;
				}
				break;
			
			case 4:
				if (iParam1 == 0)
				{
					return 75;
				}
				else
				{
					return 76;
				}
				break;
			}
	}
	return 75;
}

int func_108(int iParam0)
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

void func_109(int iParam0, vector3 vParam1, float fParam4, int iParam5)
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

int func_110(int iParam0)
{
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar1] == iParam0)
		{
			return func_116(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar1] == iParam0)
		{
			return func_114(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar1] == iParam0)
		{
			return func_111(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_111(int iParam0, int iParam1)
{
	Var0 = { func_113(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 6;
	}
	bVar10 = false;
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar10 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar10)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_41983[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_112()
{
	func_39();
	return Global_111638.f_2358.f_539.f_4321;
}

struct<10> func_113(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			return Global_111638.f_7683.f_765[iVar0];
		}
		iVar0++;
	}
	return Var1;
}

int func_114(int iParam0, int iParam1)
{
	Var0 = { func_115(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 6;
	}
	bVar14 = false;
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar14 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar14)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Global_41983[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<14> func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			return Global_111638.f_7683.f_651[iVar0];
		}
		iVar0++;
	}
	return Var1;
}

int func_116(int iParam0, int iParam1)
{
	Var0 = { func_117(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 1;
	}
	if (Global_41978 != -1)
	{
		if (Global_111638.f_7683[Global_41978] == iParam0)
		{
			return 0;
		}
	}
	bVar15 = false;
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar15 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar15)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Global_41983[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<15> func_117(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			return Global_111638.f_7683[iVar0];
		}
		iVar0++;
	}
	return Var1;
}

int func_118(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
		if (!unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) || unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			switch (func_120(vVar0, 1))
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

int func_120(vector3 vParam0, bool bParam3)
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
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_93947[iVar0].f_3, true);
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

int func_121(int iParam0)
{
	if (iParam0 == 0)
	{
		return 2091854273;
	}
	else if (iParam0 == 1)
	{
		return 328868333;
	}
	else if (iParam0 == 2)
	{
		return -1813399915;
	}
	else if (iParam0 == 3)
	{
		return 465306446;
	}
	else if (iParam0 == 4)
	{
		return -816460512;
	}
	else if (iParam0 == 5)
	{
		return -702667427;
	}
	return -1;
}

int func_122(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_124())
	{
		return func_123(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_124())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_123(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_124()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_125(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar2 = (func_124() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_126(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!func_138(2, *iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 1);
			unk_0xEBA53F35D0085654(iParam0);
			iLocal_270[iParam1] = -1;
			return 0;
		}
		if (unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			iLocal_270[iParam1] = -1;
			return 0;
		}
		switch (iLocal_270[iParam1])
		{
			case 0:
				if (unk_0xB4ECF989E2C1DAC8(*iParam0, &cLocal_361, &(Local_442[iParam1]), 2))
				{
					fVar1 = fLocal_514;
					fVar2 = -1f;
					fVar3 = -1f;
					if (unk_0xDC2A248C2CB7B3DB(&cLocal_361, &(Local_442[iParam1]), "WalkInterruptible", &fVar2, &fVar3))
					{
						fVar1 = fVar2;
					}
					else
					{
						fVar1 = fLocal_514;
					}
					if (unk_0xA45992A6CE82FB43(Global_96074) > fVar1)
					{
						if (func_132(vLocal_291[iParam1], 0f, 0f, 0f, 0))
						{
							vVar4 = { unk_0x68F4C0EC296D3901(*iParam0, true) };
							vLocal_291[iParam1] = { vVar4 - vLocal_277 * Vector(4f, 4f, 4f) };
							vLocal_291[iParam1].f_2 = 0f;
						}
						wait(0);
						if (unk_0xEB6A8945D1AC98A1(*iParam0))
						{
							unk_0xA3BF0AA5A2608191(*iParam0);
							unk_0x80AA372E04ED318D(*iParam0, vLocal_277 + vLocal_291[iParam1] * Vector(0,1f, 0,1f, 0,1f), 1f, -1, 40000f, 0,5f);
							unk_0xBD453909DC26A85D(*iParam0, -668482597, false, 1, 0);
							unk_0xF895E10BF4C72645(*iParam0, 0, 0);
							unk_0xE972B33144E77B35(*iParam0, 2);
						}
						wait(0);
						iLocal_270[iParam1] = 1;
						return 1;
					}
				}
				if (!unk_0x69DF961355195C3C(Global_96073) && !unk_0x69DF961355195C3C(Global_96074))
				{
					wait(0);
					if (unk_0xEB6A8945D1AC98A1(*iParam0))
					{
						unk_0xA3BF0AA5A2608191(*iParam0);
						unk_0x80AA372E04ED318D(*iParam0, vLocal_277 + vLocal_291[iParam1] * Vector(0,1f, 0,1f, 0,1f), 1f, -1, 40000f, 0,5f);
						unk_0xBD453909DC26A85D(*iParam0, -668482597, false, 1, 0);
						unk_0xF895E10BF4C72645(*iParam0, 0, 0);
						unk_0xE972B33144E77B35(*iParam0, 2);
					}
					wait(0);
					iLocal_270[iParam1] = 1;
					return 1;
				}
				break;
			
			case 1:
				if (unk_0xD1960163A3042274(*iParam0, 2106541073) != 1)
				{
					unk_0x96167B03C5A77156(*iParam0, vLocal_277 + vLocal_291[iParam1], 1f, -1, 0,25f, iVar0, 1193033728);
					iLocal_270[iParam1] = 2;
					return 1;
				}
				fVar7 = vmag(vLocal_291[iParam1] * Vector(0,05f, 0,05f, 0,05f));
				if (vdist2(unk_0x68F4C0EC296D3901(*iParam0, true), vLocal_277) >= fVar7)
				{
					if (!func_131() && !unk_0x0A059E0DB9253280(*iParam0))
					{
						unk_0x96167B03C5A77156(*iParam0, vLocal_277 + vLocal_291[iParam1], 1f, -1, 0,25f, iVar0, 1193033728);
						iLocal_270[iParam1] = 2;
						return 1;
					}
				}
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), *iParam0) || unk_0x4734A6196B611C3B(*iParam0, 0))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x869EFD0BC0868856(*iParam0) || unk_0xA48EBBEA418ADC94(*iParam0))
				{
					return 0;
				}
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), *iParam0) || unk_0x4734A6196B611C3B(*iParam0, 0))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				if (unk_0xD1960163A3042274(*iParam0, 713668775) != 1)
				{
					if (fLocal_308[iParam1] == 0f)
					{
						fLocal_308[iParam1] = (vmag(vLocal_291[iParam1]) * 0,75f);
					}
					unk_0xA371FDC12D462090(*iParam0, vLocal_277 + vLocal_291[iParam1], fLocal_308[iParam1], 1077936128, 1086324736);
					iLocal_270[iParam1] = 3;
					return 1;
				}
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), *iParam0) || unk_0x4734A6196B611C3B(*iParam0, 0))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				break;
			
			case 3:
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), *iParam0) || unk_0x4734A6196B611C3B(*iParam0, 0))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				if (unk_0x869EFD0BC0868856(*iParam0) || unk_0xA48EBBEA418ADC94(*iParam0))
				{
					return 0;
				}
				if (unk_0x035491B0E495A4C1(sLocal_513))
				{
					unk_0xCD7D80FD792F9954(sLocal_513, false);
				}
				if (vdist2(unk_0x68F4C0EC296D3901(*iParam0, true), vLocal_277 + vLocal_291[iParam1]) < (fLocal_308[iParam1] * fLocal_308[iParam1]))
				{
					if (unk_0x4742C50E93110B10(vLocal_277 + vLocal_291[iParam1], fLocal_308[iParam1], 1))
					{
						unk_0x4A35AD9FC803369E(*iParam0, vLocal_277 + vLocal_291[iParam1], fLocal_308[iParam1], 0);
						iLocal_270[iParam1] = 4;
						return 1;
					}
				}
				break;
			
			case 4:
				if (unk_0xC7441A1068F3F171(*iParam0))
				{
				}
				else
				{
					if (unk_0x869EFD0BC0868856(*iParam0) || unk_0xA48EBBEA418ADC94(*iParam0))
					{
						return 0;
					}
					vVar8 = { func_127(vLocal_277 + vLocal_291[iParam1], func_130((fLocal_308[iParam1] * 0,9f), 10f, 100f), 0f) };
					if (unk_0xD1960163A3042274(*iParam0, 1647992574) == 1)
					{
					}
					else if (unk_0xB885EF0389689E54(vVar8, 0, &vVar11, 14))
					{
						if (vdist2(unk_0x68F4C0EC296D3901(*iParam0, true), vVar11) > 100f)
						{
							unk_0x96167B03C5A77156(*iParam0, vVar11, 1f, -1, 0,25f, iVar0, 1193033728);
							iLocal_270[iParam1] = 1;
							return 1;
						}
					}
				}
				break;
			
			case 10:
				iVar14 = 0;
				while (iVar14 < 3)
				{
					if (iVar14 != iParam1)
					{
						if (iLocal_270[iVar14] == 2 || iLocal_270[iVar14] == 3)
						{
							iLocal_270[iVar14] = 10;
						}
					}
					iVar14++;
				}
				unk_0x0E2400AB9174FA81(5, iLocal_275, 1862763509);
				unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_275);
				unk_0x0E2400AB9174FA81(5, iLocal_275, Global_93748);
				unk_0x0E2400AB9174FA81(5, Global_93748, iLocal_275);
				unk_0x7C8478BF70C1E072(*iParam0, 15f, 0);
				iLocal_270[iParam1] = 11;
				return 1;
				break;
			
			case 11:
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	return 0;
}

Vector3 func_127(vector3 vParam0, int iParam3, float fParam4)
{
	fVar3 = (iParam3 * iParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { unk_0x79833B02DBD2A244(-iParam3, iParam3), unk_0x79833B02DBD2A244(-iParam3, iParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.z = unk_0x79833B02DBD2A244(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_128(vParam0, iParam3, fParam4);
}

Vector3 func_128(vector3 vParam0, int iParam3, float fParam4)
{
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_129(vVar0, unk_0x79833B02DBD2A244(0f, iParam3)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_129(vector3 vParam0, float fParam3)
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

float func_130(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_131()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_132(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_133(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_134()
{
	if (!func_135())
	{
		if (unk_0x69DF961355195C3C(Global_96074))
		{
			fVar0 = unk_0xA45992A6CE82FB43(Global_96074);
			if (!iLocal_512)
			{
				if (fVar0 < fLocal_511)
				{
				}
				else if (func_12(&uLocal_72, "PRSAUD", &Local_507, 3, 0, 0, 0))
				{
					iLocal_512 = 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_262)
	{
		func_126(&(iLocal_262[iVar1]), iVar1);
		iVar1++;
	}
	func_126(&Global_98465, iLocal_262);
	return 0;
}

int func_135()
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

int func_136()
{
	if (!func_135())
	{
		if (unk_0x69DF961355195C3C(Global_96074))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_262)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_262[iVar0]))
				{
					unk_0x915804B434753CBD(iLocal_262[iVar0], Global_96074, &cLocal_361, &(Local_442[iVar0]), 8f, -4f, 3, 0, 1148846080, 0);
					iLocal_270[iVar0] = 0;
				}
				else
				{
					iLocal_270[iVar0] = -1;
				}
				iVar0++;
			}
			unk_0x11BEEB2AE29A6102(Global_96074);
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	if (unk_0x69DF961355195C3C(Global_96073))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_262)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_262[iVar0]))
			{
				unk_0x915804B434753CBD(iLocal_262[iVar0], Global_96073, &cLocal_361, &(Local_377[iVar0]), 8f, -1000f, 0, 0, 1148846080, 0);
			}
			iVar0++;
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_133(&uLocal_72, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		if (!unk_0xEB6A8945D1AC98A1(Global_98465))
		{
			func_133(&uLocal_72, 4, Global_98465, "LAMAR", 0, 1);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_262[0]))
		{
			func_133(&uLocal_72, 5, iLocal_262[0], "GangMember1", 0, 1);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_262[1]))
		{
			func_133(&uLocal_72, 6, iLocal_262[1], "GangMember2", 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1)
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
		if (func_24(14))
		{
			return 0;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_140(iParam0, func_141()))
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
		else if (iParam1 == func_139(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_139(var uParam0)
{
	return uParam0;
}

bool func_140(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_141()
{
	func_39();
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

void func_142()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_145();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 3)
	{
		func_145();
		return;
	}
	func_143();
	if (Global_98467 > 0)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_143()
{
	func_144((Global_98467 - 1));
}

void func_144(int iParam0)
{
	Global_98467 = iParam0;
}

void func_145()
{
	func_144(0);
}

void func_146()
{
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		if (!unk_0xC844350D5D58C99A(Global_98465))
		{
			bVar2 = false;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_262)
		{
			if (iLocal_266[iVar0] != 0)
			{
				unk_0x523BCC9DC80CD82F(iLocal_266[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_266[iVar0]))
				{
					bVar2 = false;
					unk_0x523BCC9DC80CD82F(iLocal_266[iVar0]);
				}
			}
			iVar0++;
		}
		if (!unk_0xEA6BC48857E0AC4C(&cLocal_361))
		{
			unk_0x3F423BF5B8125A50(&cLocal_361);
			if (!unk_0xB4AE0788C1587752(&cLocal_361))
			{
				bVar2 = false;
				unk_0x3F423BF5B8125A50(&cLocal_361);
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		wait(0);
	}
	if (unk_0xC844350D5D58C99A(Global_98465))
	{
		if (func_37(19) == unk_0x134B62B726CEC8E6(Global_98465))
		{
			unk_0x73270B3C9CC833FD(Global_98465, true, 1);
		}
		func_147(&Global_98465, Global_93748);
		unk_0x4E885A246A9D983A(Global_98465, 132, true);
		unk_0x4E885A246A9D983A(Global_98465, 317, true);
		func_147(&Global_98465, Global_93748);
	}
	unk_0xF63400DBE3303D26("TAUNTERS", &iLocal_275);
	iVar0 = 0;
	while (iVar0 < iLocal_262)
	{
		if (iLocal_266[iVar0] != 0)
		{
			iLocal_262[iVar0] = unk_0x36F2404464202779(iLocal_276, iLocal_266[iVar0], vLocal_277 + vLocal_281[iVar0], 0f, 1, true);
			unk_0xD8F6A53F4799FAFE(iLocal_262[iVar0], (fLocal_280 + fLocal_304[iVar0]));
			unk_0xC743BD39A24D0583(iLocal_262[iVar0], 0);
			unk_0x6DF7BF67E86AAE86(iLocal_262[iVar0], iLocal_275);
			unk_0xC6EB89C59F2AF6B8(iLocal_262[iVar0], &cLocal_361, &(Local_377[iVar0]), 8f, -8f, -1, 9, 0, 0, 0, 0);
			unk_0x4E885A246A9D983A(iLocal_262[iVar0], 317, true);
			if (iLocal_276 == 6)
			{
				unk_0x262EF6C6306BEA6C(iLocal_262[iVar0], 911657153, 1000, false, true);
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1)
{
	unk_0x25C5402CC10F76CD(*uParam0, false);
	unk_0x4E885A246A9D983A(*uParam0, 20, true);
	unk_0x5E678B691C852774(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		unk_0x6DF7BF67E86AAE86(*uParam0, iParam1);
	}
}

void func_148()
{
	iLocal_71 = Global_98147;
	func_152(iLocal_71, &vLocal_277, &fLocal_280, &cVar0);
	func_150(iLocal_71, &sLocal_313, &cLocal_329, &cLocal_345, &uVar8, &uVar9);
	switch (iLocal_71)
	{
		case 218:
			vLocal_281[0] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_281[1] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_291[0] = { -77,3f, -4,1f, 1f };
			vLocal_291[1] = { vLocal_291[0] };
			vLocal_291[iLocal_262] = { 66,7f, -7,299f, 1f };
			fLocal_304[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_304[1] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_308[0] = 30f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 20f;
			fLocal_514 = 0,94f;
			iLocal_266[0] = -48477765;
			iLocal_266[1] = 228715206;
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(&(Local_377[0]), "gang_taunt_loop_thug_01", 64);
			StringCopy(&(Local_377[1]), "gang_taunt_loop_thug_02", 64);
			StringCopy(&(Local_442[0]), "gang_taunt_exit_thug_01", 64);
			StringCopy(&(Local_442[1]), "gang_taunt_exit_thug_02", 64);
			StringCopy(&Local_507, "FRAS_IG_6_P1", 16);
			fLocal_511 = 0f;
			break;
		
		case 219:
			vLocal_281[0] = { -0,2331f, 0,0497f, 0,0041f };
			vLocal_281[1] = { 0,6908f, -0,4534f, 0,0042f };
			vLocal_291[0] = { -0,6f, -144,3f, 0f };
			vLocal_291[1] = { vLocal_291[0] };
			vLocal_291[iLocal_262] = { 112,2308f, 43,129f, 3,188f };
			fLocal_304[0] = 180f;
			fLocal_304[1] = 180f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0,94f;
			iLocal_266[0] = -48477765;
			iLocal_266[1] = 228715206;
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(&(Local_377[0]), "gang_taunt_with_lamar_loop_g1", 64);
			StringCopy(&(Local_377[1]), "gang_taunt_with_lamar_loop_g2", 64);
			StringCopy(&(Local_442[0]), "gang_taunt_with_lamar_exit_g1", 64);
			StringCopy(&(Local_442[1]), "gang_taunt_with_lamar_exit_g2", 64);
			StringCopy(&Local_507, "FRAS_IG_6_P3", 16);
			fLocal_511 = 0f;
			break;
		
		case 220:
			vLocal_281[0] = { 1,7097f, -1,8585f, -0,052f };
			vLocal_281[1] = { 2,7011f, -1,5f, -0,052f };
			vLocal_291[0] = { Vector(21,5656f, -1890,595f, 59,4395f) - vLocal_277 };
			vLocal_291[1] = { vLocal_291[0] };
			vLocal_291[iLocal_262] = { Vector(-4,6336f, -54,7307f, 67,5391f) * Vector(-1f, -1f, -1f) };
			fLocal_304[0] = -0,7167f;
			fLocal_304[1] = -0,7167f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0,99f;
			iLocal_266[0] = 1581098148;
			iLocal_266[1] = 1581098148;
			iLocal_276 = 6;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(&(Local_377[0]), "fras_ig_6_p5_loop_g1", 64);
			StringCopy(&(Local_377[1]), "fras_ig_6_p5_loop_g2", 64);
			StringCopy(&(Local_442[0]), "fras_ig_6_p5_exit_g1", 64);
			StringCopy(&(Local_442[1]), "fras_ig_6_p5_exit_g2", 64);
			StringCopy(&Local_507, "FRAS_IG_6_P4", 16);
			fLocal_511 = 0,625f;
			break;
		
		case 225:
			vLocal_281[0] = { 3,8209f, 1,0394f, 0f };
			vLocal_281[1] = { 4,0994f, -0,0922f, 0f };
			vLocal_291[0] = { Vector(27,9565f, -1650,517f, 278,2831f) - vLocal_277 };
			vLocal_291[1] = { vLocal_291[0] };
			vLocal_291[iLocal_262] = { -Vector(0f, 62,7f, 54,673f) };
			fLocal_304[0] = -23,9383f;
			fLocal_304[1] = 5,0908f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0,94f;
			iLocal_266[0] = -48477765;
			iLocal_266[1] = 228715206;
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(&(Local_377[0]), "fras_ig_10_p3_loop_g1", 64);
			StringCopy(&(Local_377[1]), "fras_ig_10_p3_loop_g2", 64);
			StringCopy(&(Local_442[0]), "fras_ig_10_p3_exit_g1", 64);
			StringCopy(&(Local_442[1]), "fras_ig_10_p3_exit_g2", 64);
			Local_507 = { func_149("FRAS_IG_10", 3) };
			fLocal_511 = 0f;
			break;
		
		default:
			vLocal_281[0] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_281[1] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_291[0] = { 0f, 0f, 0f };
			vLocal_291[1] = { 0f, 0f, 0f };
			vLocal_291[iLocal_262] = { 0f, 0f, 0f };
			fLocal_304[0] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_304[1] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_308[0] = 0f;
			fLocal_308[1] = 0f;
			fLocal_308[iLocal_262] = 0f;
			fLocal_514 = -1f;
			iLocal_266[0] = -48477765;
			iLocal_266[1] = 228715206;
			iLocal_276 = -1;
			StringCopy(&Local_507, "", 16);
			fLocal_511 = 0f;
			break;
	}
	StringCopy(&(Local_377[iLocal_262]), "", 64);
	StringCopy(&(Local_377[iLocal_262]), "", 64);
}

struct<4> func_149(char* sParam0, int iParam1)
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

int func_150(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
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
			func_151(iParam0, sParam1, sParam2, sParam3);
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

void func_151(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_152(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (func_154(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_153(&iVar0);
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

bool func_153(var uParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0] };
	if (func_132(vVar1, 0f, 0f, 0f, 0))
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

int func_154(int iParam0, var uParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_153(&iVar3);
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
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_154(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_154(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_154(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_157(iParam0, &vVar0, uParam1))
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
			if (func_155(0, 25, &uVar4, &fVar7))
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
			return func_154(222, uParam1, sParam2);
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
			return func_154(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_154(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34,661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_154(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_154(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_154(303, uParam1, sParam2);
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

int func_155(int iParam0, int iParam1, var uParam2, var uParam3)
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
					if (func_155(0, iParam1, uParam2, uParam3))
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
					if (func_155(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_155(0, iParam1, uParam2, uParam3))
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
					if (func_155(0, 5, uParam2, uParam3))
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
					if (func_155(1, 32, uParam2, uParam3))
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
			return func_155(iParam0, 26, uParam2, uParam3);
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
			if (func_155(iParam0, 59, uParam2, uParam3))
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
			if (func_155(iParam0, 47, uParam2, uParam3))
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
					if (func_156())
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
					if (func_155(iParam0, 130, uParam2, uParam3))
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

int func_156()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0, var uParam1, var uParam2)
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
			return func_157(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_157(8, uParam1, uParam2);
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

char* func_158(int iParam0)
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

void func_159()
{
	iVar0 = 0;
	while (iVar0 < iLocal_266)
	{
		if (iLocal_266[iVar0] != 0)
		{
			unk_0x6DAD7906B73F064D(&(iLocal_262[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_266)
	{
		if (iLocal_266[iVar0] != 0)
		{
			unk_0x71199B01895C6202(iLocal_266[iVar0]);
		}
		iVar0++;
	}
	unk_0x51732B934211201A(iLocal_275);
	if (!unk_0x035491B0E495A4C1(sLocal_513))
	{
		unk_0xCD7D80FD792F9954(sLocal_513, true);
	}
	unk_0x21387C9EECC2B220(false);
	unk_0x10FAF14A60A0DBE1();
}

