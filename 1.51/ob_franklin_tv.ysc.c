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
	vLocal_312 = { 1,3376f, 525,3682f, 174,5992f };
	sLocal_322 = "safe@franklin@ig_14";
	vLocal_323 = { 2,58f, 527,82f, 173,65f };
	vLocal_326 = { 0f, 0f, 13f };
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_56();
	}
	if (func_49() == 1)
	{
		bLocal_49 = true;
	}
	if ((func_46(9) || (func_45() && !func_44())) || unk_0x1EE04CEA36EF313B())
	{
		func_56();
	}
	vLocal_309 = { ScriptParam_0.f_1[0] };
	vLocal_309 = { 2,1801f, 526,4401f, 173,6278f };
	while (true)
	{
		wait(0);
		if (((((bLocal_49 && !func_43()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && !unk_0x991B1F0980C62628()) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
		{
			if (unk_0x0EB28750412C3A5A(vLocal_309, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 3f)
			{
				switch (iLocal_307)
				{
					case 0:
						if (func_40())
						{
							iLocal_307 = 1;
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
		}
		else
		{
			func_56();
		}
	}
}

void func_1()
{
	vVar0 = { 1,5f, 1,5f, 1,5f };
	fVar3 = 0f;
	switch (iLocal_308)
	{
		case 0:
			if ((func_35(vLocal_309, vVar0) && !func_34()) && !func_33("FAM_WEAPDIS"))
			{
				if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_312, 90f) || iLocal_317)
				{
					func_32("TV_HLP0");
					if (!unk_0x562F77A7F33D2E46("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
					{
						unk_0x8BC9595FD2792B5D("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
					}
					iLocal_308 = 1;
				}
			}
			break;
		
		case 1:
			if (func_31(1, 0, 1))
			{
				if (func_35(vLocal_309, vVar0) && unk_0xBF75E4DF4C367CD9(vLocal_309, 3f, 542291840, 0))
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if ((!unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && !unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) && unk_0x06F8112AA79C53D9(0, 51))
						{
							if (func_33("TV_HLP0"))
							{
								unk_0xA37A90C62806D848(1);
							}
							unk_0xD251FFCFFF3A13CC(1);
							unk_0x679C321F8CAA2CFA(vLocal_312, 3f, 0);
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
							func_21(1, 1, 1, 0, 0, 0);
							func_20();
							iLocal_308 = 2;
						}
					}
				}
				else
				{
					if (func_33("TV_HLP0"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_317 = 0;
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_19();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
			if (Global_30828[1].f_2)
			{
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "enter_no_remote", 8f, -4f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "enter_no_remote_remote", sLocal_322, 8f, -4f, 0, 1148846080);
			}
			else
			{
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "enter", 8f, -4f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "enter_remote", sLocal_322, 8f, -4f, 0, 1148846080);
			}
			if (unk_0xB818A4F8553577BC(iLocal_319))
			{
				unk_0xEFC3DF9D33E248D8(iLocal_319, false);
			}
			if (unk_0x6C3F127AAF415E69() != 4)
			{
				iLocal_321 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
				if (Global_30828[1].f_2)
				{
					unk_0x93E9ED66DAB9FBE3(iLocal_321, iLocal_319, "enter_no_remote_cam", sLocal_322);
				}
				else
				{
					unk_0x93E9ED66DAB9FBE3(iLocal_321, iLocal_319, "enter_cam", sLocal_322);
				}
				unk_0x91F5B0244AAE6222(iLocal_321, "HAND_SHAKE", 0,2f);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				unk_0x91F5B0244AAE6222(iLocal_321, "HAND_SHAKE", 0,2f);
			}
			else
			{
				unk_0x5CAFA5DD13658DFE(0);
			}
			iLocal_308 = 3;
			break;
		
		case 3:
			func_19();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!Global_30828[1].f_2)
			{
				if (unk_0xA45992A6CE82FB43(iLocal_319) > 0,691f)
				{
					func_16();
					func_12(1, 0, 1, 0, 0);
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_319) > 0,9f)
			{
				iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "base", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "base_remote", sLocal_322, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_319, true);
				func_32("TV_HLP7");
				if (!unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_VINEWOOD"))
				{
					unk_0x8BC9595FD2792B5D("TV_FRANKLINS_HOUSE_VINEWOOD");
				}
				iLocal_308 = 5;
			}
			break;
		
		case 5:
			func_19();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!func_8())
			{
				if (!func_33("TV_HLP3"))
				{
					func_32("TV_HLP7");
				}
				func_7(0, 1);
				if (unk_0xBFC0798A6E3417F9(2, 51))
				{
					iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "exit", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "exit_remote", sLocal_322, 8f, -8f, 0, 1148846080);
					if (func_6(iLocal_321))
					{
						unk_0x93E9ED66DAB9FBE3(iLocal_321, iLocal_319, "exit_cam", sLocal_322);
					}
					if (unk_0xB818A4F8553577BC(iLocal_319))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_319, false);
					}
					iLocal_308 = 7;
				}
				else if (func_5(0))
				{
					iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "idle_a", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "idle_a_remote", sLocal_322, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_319))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_319, false);
					}
					iLocal_316 = 1;
					iLocal_308 = 6;
					unk_0x0FB033EB6C6ED01F(2);
					unk_0x554A390AA8A21EE8(2);
				}
			}
			else
			{
				iLocal_308 = 7;
			}
			break;
		
		case 6:
			func_19();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x69DF961355195C3C(iLocal_319))
			{
				if (iLocal_316)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_319);
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
						iLocal_316 = 0;
					}
				}
			}
			else
			{
				iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "base", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "base_remote", sLocal_322, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_319, true);
				iLocal_308 = 5;
			}
			break;
		
		case 7:
			func_19();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_VINEWOOD"))
			{
				unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_VINEWOOD");
			}
			if (!unk_0x69DF961355195C3C(iLocal_319))
			{
				iLocal_308 = 8;
			}
			else
			{
				func_3();
				if (iLocal_315)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_319);
					if (unk_0xDC2A248C2CB7B3DB(sLocal_322, "exit", "WalkInterruptible", &fVar4, &fVar5))
					{
						if (fVar3 >= fVar4 && fVar3 <= fVar5)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							iLocal_308 = 8;
						}
					}
				}
			}
			break;
		
		case 8:
			if (unk_0x6FB46C25CCB7E6D5(-1019679016, &iLocal_320, -1))
			{
				unk_0xCDC520E5E48E63D9(-1019679016, iLocal_320 + 1, 1);
			}
			unk_0xB38702A5025BB490("chop");
			if (func_6(iLocal_321))
			{
				unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			iLocal_51 = 0;
			iLocal_315 = 0;
			iLocal_317 = 1;
			if (Global_30828[1].f_2)
			{
				func_2(1);
			}
			if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_VINEWOOD"))
			{
				unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_VINEWOOD");
			}
			Global_30813 = 0;
			func_21(0, 1, 1, 0, 0, 0);
			iLocal_308 = 0;
			break;
	}
}

void func_2(int iParam0)
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

void func_3()
{
	if (!iLocal_315)
	{
		func_4(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_315 = 1;
		}
	}
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (unk_0x6C3F127AAF415E69() != 4 && unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_7(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_5(0))
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

int func_8()
{
	if (unk_0xBFC0798A6E3417F9(2, 222))
	{
		if ((((((func_33(func_11()) || func_33("TV_HLP0")) || func_33("TV_HLP1")) || func_33("TV_HLP2")) || func_33("TV_HLP3")) || func_33("TV_HLP4")) || func_33("TV_HLP7"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
		{
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
		}
		func_10();
		func_9();
		iLocal_315 = 0;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
	}
	iLocal_319 = unk_0xE9744DB7B8CA6965(vLocal_323, vLocal_326, 2);
	unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_319, sLocal_322, "exit", 8f, -8f, 0, 0, 1148846080, 0);
	unk_0xE14EC663EED44AD5(func_18(), iLocal_319, "exit_remote", sLocal_322, 8f, -8f, 0, 1148846080);
	if (func_6(iLocal_321))
	{
		unk_0x93E9ED66DAB9FBE3(iLocal_321, iLocal_319, "exit_cam", sLocal_322);
	}
	if (unk_0xB818A4F8553577BC(iLocal_319))
	{
		unk_0xEFC3DF9D33E248D8(iLocal_319, false);
	}
}

void func_10()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_329 == 1)
		{
			unk_0xA68C4874B560B1C0();
			iLocal_329 = 0;
		}
	}
}

char* func_11()
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

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_15(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_14(iParam0))
		{
			unk_0x188BA9B758DB0D5E(-1);
			unk_0xACBA63CD73292795(iParam1, func_13(iParam2), iParam4);
			unk_0x188BA9B758DB0D5E(iParam1);
		}
	}
	StringCopy(&Global_30906, unk_0xBB0808A181D4745C(), 24);
}

char* func_13(int iParam0)
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

int func_14(int iParam0)
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

int func_15(int iParam0)
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

void func_16()
{
	unk_0xACBA63CD73292795(0, func_13(1), 0);
	if (func_17(22))
	{
		unk_0xACBA63CD73292795(1, func_13(12), 0);
	}
	else
	{
		unk_0xACBA63CD73292795(1, func_13(2), 0);
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_18()
{
	iVar0 = unk_0x4B72871A3BE7B474(vLocal_309, 3f, 542291840, 0, 0, 1);
	return iVar0;
}

void func_19()
{
	Global_22211.f_6 = 1;
}

void func_20()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_329 == 0)
		{
			unk_0x6787351639998696("SOFA ACTIVITY");
			iLocal_329 = 1;
		}
	}
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_30(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_29())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_30(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_26(unk_0xD803B885F5E47A62())) && !func_23(unk_0xD803B885F5E47A62(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_26(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_22()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_28(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_29()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
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

int func_31(bool bParam0, bool bParam1, bool bParam2)
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

void func_32(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_33(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_34()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_35(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_39(0)) && !func_38())
				{
					if ((Global_95672 && Global_95673) || func_37())
					{
						return 0;
					}
					if (func_36(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_36(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_37()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_38()
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

int func_39(int iParam0)
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

int func_40()
{
	if (func_42() && func_41())
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	iVar0 = unk_0x4B72871A3BE7B474(vLocal_309, 10f, 542291840, 0, 0, 1);
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	unk_0x3F423BF5B8125A50(sLocal_322);
	if (unk_0xB4AE0788C1587752(sLocal_322))
	{
		iLocal_318 = 1;
		return 1;
	}
	return 0;
}

int func_43()
{
	if (unk_0xA0F4292EA950943D("CHOICE_INT"))
	{
		if (unk_0x22A8E52414415B76())
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
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

int func_45()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_46(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_47(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, Global_41431);
}

int func_48(int iParam0, int iParam1)
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

int func_49()
{
	func_50();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_50()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_54(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_53(unk_0x16F2683693E537C9());
			if (func_52(iVar0) && (!func_51(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_52(Global_111638.f_2358.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_52(int iParam0)
{
	return iParam0 < 3;
}

int func_53(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)
{
	if (func_52(iParam0))
	{
		return func_55(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_55(int iParam0)
{
	return Global_1798[iParam0];
}

void func_56()
{
	if ((((((func_33(func_11()) || func_33("TV_HLP0")) || func_33("TV_HLP1")) || func_33("TV_HLP2")) || func_33("TV_HLP3")) || func_33("TV_HLP4")) || func_33("TV_HLP7"))
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0xBFBFE6D9F51994DB();
	unk_0xD251FFCFFF3A13CC(0);
	if (unk_0x562F77A7F33D2E46("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		unk_0x8910D3D58E0132B8("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (unk_0x562F77A7F33D2E46("TV_FRANKLINS_HOUSE_VINEWOOD"))
	{
		unk_0x8910D3D58E0132B8("TV_FRANKLINS_HOUSE_VINEWOOD");
	}
	if (iLocal_318)
	{
		unk_0x8D17794CE3273D70(sLocal_322);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_321))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_321, false);
		unk_0x9A8DDC7C522F5BF5(iLocal_321, 0);
	}
	func_10();
	if (iLocal_51)
	{
		unk_0xB38702A5025BB490("chop");
	}
	func_57();
	unk_0x10FAF14A60A0DBE1();
}

void func_57()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && func_31(1, 0, 1)) && iLocal_51)
		{
			func_21(0, 1, 1, 0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
}

