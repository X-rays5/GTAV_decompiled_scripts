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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_118 = true;
	iLocal_119 = 6;
	iLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	iLocal_159 = 1;
	vLocal_90 = { ScriptParam_0.f_1[0] };
	vLocal_90 = { vLocal_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_151(1);
	}
	iLocal_85 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_149(&Global_110289, 0);
	func_143();
	unk_0xDF8BDD00CF1D4043(1);
	if (func_142(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37199)
	{
		wait(0);
	}
	if (!func_142(uLocal_94, 8))
	{
		if (!func_140(iLocal_100))
		{
			if (func_139(0, iLocal_99))
			{
				func_151(0);
			}
			else
			{
				func_151(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_139(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_142(uLocal_94, 8388608))
	{
		func_151(1);
	}
	if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
	{
		func_151(1);
	}
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1 && !func_142(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_135(10);
	}
	while (true)
	{
		if (!func_142(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xE82754C349C7B581(ScriptParam_0.f_1[0], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0].f_2 = fVar1;
					func_134(&uLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
		if (func_142(uLocal_94, 1048576))
		{
			if (unk_0x437347B10A200C4B(iLocal_85, 0))
			{
				func_151(1);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_85) && !unk_0x437347B10A200C4B(iLocal_85, 0))
		{
			vLocal_87 = { unk_0x68F4C0EC296D3901(iLocal_85, true) };
			fLocal_93 = vdist2(vLocal_87, ScriptParam_0.f_1[0]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0] };
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_140(iLocal_100) || (func_142(uLocal_94, 16) && !func_142(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_130();
						func_135(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_136(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_135(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_128() && fLocal_93 > ((fLocal_117 * 1,5f) * (fLocal_117 * 1,5f)))
					{
						iLocal_103 = iLocal_103;
						func_135(3);
					}
					else
					{
						func_130();
					}
					break;
				
				case 3:
					if (unk_0x8FE4F98FD4BE2689())
					{
						func_151(1);
						return;
					}
					if (!func_140(iLocal_100))
					{
						if (!func_142(uLocal_94, 8))
						{
							bVar2 = true;
							if (unk_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_151(0);
								break;
							}
						}
					}
					if (!func_142(uLocal_94, 4))
					{
						func_117();
						func_134(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
					{
						if (iLocal_105 != 263)
						{
							if (func_116(6) && !func_115(iLocal_105))
							{
							}
							else
							{
								func_136(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_135(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_142(uLocal_94, 64);
						func_149(&uLocal_94, 128);
						if (!func_114(3) && !Global_98778)
						{
							if (func_142(uLocal_94, 2097152))
							{
								if ((!func_142(uLocal_94, 1) || !unk_0xC844350D5D58C99A(func_113())) && !Global_98778)
								{
									func_135(10);
									break;
								}
							}
						}
						if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
						{
							func_151(1);
						}
						if (func_112())
						{
							func_151(1);
						}
						if ((!func_104(6) || Global_110685) || func_103())
						{
							bVar3 = false;
						}
						if (!bLocal_118)
						{
							func_101(&uLocal_94, 128);
							bVar3 = false;
						}
						if (func_142(uLocal_94, 1))
						{
							if (!func_100())
							{
								func_101(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_99(1))
						{
							bVar3 = false;
						}
						if (Global_76622)
						{
							bVar3 = false;
						}
						if (func_98())
						{
							bVar3 = false;
						}
						if (unk_0x991B1F0980C62628())
						{
							bVar3 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
						{
							bVar3 = false;
						}
						if (!unk_0x04B2EAD6D5301B36(unk_0xD803B885F5E47A62()))
						{
							bVar3 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x5A91F08DF773C39D(iLocal_85, ScriptParam_0.f_1[0], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
							{
								bVar3 = false;
							}
							iVar4 = unk_0xD8A54335F18763BA();
							if (iLocal_119 > iLocal_120)
							{
								if (iVar4 < iLocal_119 && iVar4 >= iLocal_120)
								{
									func_101(&uLocal_94, 128);
									bVar3 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_142(uLocal_94, 134217728))
										{
											func_93("MG_NA_TIME", iLocal_119, iLocal_120);
											func_101(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_149(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_119 || iVar4 >= iLocal_120)
							{
								func_101(&uLocal_94, 128);
								bVar3 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_142(uLocal_94, 134217728))
									{
										func_93("MG_NA_TIME", iLocal_119, iLocal_120);
										func_101(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_149(&uLocal_94, 134217728);
								}
							}
							if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x558EC149EB2BC0A2(0, 51);
								if (func_92(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_91(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_101(&uLocal_94, 2048);
									}
									else if (!func_142(uLocal_94, 2048) || !unk_0xFEBC1E4EC9E001F0())
									{
										func_90(&iLocal_96);
										func_149(&uLocal_94, 2048);
									}
									if (func_88(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_90(&iLocal_96);
										func_149(&uLocal_94, 2048);
										unk_0x92DCE5C81176D2B4(&Local_69);
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
										func_135(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_90(&iLocal_96);
									func_149(&uLocal_94, 2048);
									unk_0x92DCE5C81176D2B4(&Local_69);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
									func_135(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_90(&iLocal_96);
								func_149(&uLocal_94, 2048);
								unk_0xA37A90C62806D848(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x558EC149EB2BC0A2(0, 51);
					if (unk_0x1FBF08B001C4788A(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_90(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_142(uLocal_94, 1))
						{
							if (func_116(6) || func_116(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x437347B10A200C4B(iLocal_86, 0))
							{
								unk_0x046C362CF15F1935(&iLocal_86);
							}
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							}
							func_46();
							if (Global_42596)
							{
								func_37(unk_0x16F2683693E537C9());
							}
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 56);
							iLocal_52 = func_36();
							func_101(&uLocal_94, 2);
							func_135(6);
							func_32(&iLocal_107);
							if (iLocal_99 != -1)
							{
								func_31(iLocal_99);
								func_29(func_30(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_135(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_142(Global_110289, 262144))
					{
						func_149(&Global_110289, 262144);
						func_27();
					}
					if (func_142(uLocal_94, 2097152))
					{
						if (!func_114(3) && !unk_0x1727A44C562FBED2(iLocal_52))
						{
							func_135(10);
						}
					}
					if (!unk_0x1727A44C562FBED2(iLocal_52))
					{
						unk_0x11E0F00830F70E15(round((func_23(&iLocal_107) * 1000f)), iLocal_99, 0);
						func_22(&iLocal_107);
						func_149(&uLocal_94, 256);
						func_21();
						if (bVar0)
						{
							func_149(&uLocal_94, 2);
						}
						else if (func_142(uLocal_94, 2))
						{
							if (func_142(Global_110289, 0))
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_149(&uLocal_94, 2);
							}
							else
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_149(&uLocal_94, 2);
							}
						}
						func_135(0);
						if (iLocal_99 != -1)
						{
							if (func_142(Global_110289, 0))
							{
								unk_0x353729B0A07DC11A(func_30(iLocal_99), 0, Global_98781, 0);
								func_19(func_30(iLocal_99), 0, Global_98781, 1, 0);
							}
							else
							{
								unk_0x353729B0A07DC11A(func_30(iLocal_99), 0, Global_98781, 0);
								func_19(func_30(iLocal_99), 0, Global_98781, 0, 0);
							}
						}
						func_5();
						func_149(&Global_110289, 0);
						if (func_142(uLocal_94, 16777216))
						{
							func_151(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_139(0, iLocal_99))
								{
									func_151(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_135(0);
					break;
				
				case 10:
					func_151(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_136(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_135(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_136(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_90(&iLocal_96);
					}
					if (!unk_0xEA6BC48857E0AC4C(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
					func_135(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_140(iLocal_100) && func_139(0, iLocal_99))
									{
										func_143();
										if (iLocal_105 != 263)
										{
											func_136(iLocal_105, 1, 0);
										}
										func_135(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_136(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_135(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_143();
									if (iLocal_105 != 263)
									{
										func_136(iLocal_105, 1, 0);
									}
									func_135(0);
								}
							}
						}
						else
						{
							func_136(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		wait(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_2()
{
	func_3(&(Local_329.f_71));
	func_3(&(Local_329.f_77));
	func_3(&(Local_329.f_99));
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_aa_smoke@male@idle_a");
	unk_0x8D17794CE3273D70("random@street_race");
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	switch (iLocal_124)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		if (unk_0xDA8F5DDC86FE3C26(sVar0))
		{
			if (unk_0x8ED9A0095B69A728(sVar0))
			{
				unk_0x2723524E448F4BDD(sVar0, false);
			}
		}
	}
}

void func_3(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x71199B01895C6202((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_142(Global_111638.f_19011, 1))
	{
		func_149(&(Global_111638.f_19011), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_8()
{
	if (Global_111638.f_19011.f_18 < Global_111638.f_19011.f_19[iLocal_124] || Global_111638.f_19011.f_19[iLocal_124] == 0)
	{
		Global_111638.f_19011.f_19[iLocal_124] = Global_111638.f_19011.f_18;
		Global_111638.f_19011.f_18 = 999;
	}
	if (iLocal_124 == Global_111638.f_19011.f_1 || Global_111638.f_19011.f_1 == -1)
	{
		if (Global_111638.f_19011.f_1 != 5)
		{
			Global_111638.f_19011.f_1++;
			switch (Global_111638.f_19011.f_1)
			{
				case 1:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					break;
				
				case 2:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					break;
				
				case 3:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					break;
				
				case 4:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					break;
				
				case 5:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					func_17(74, 1);
					func_136(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_136(70, 1, 0);
			func_17(70, 1);
			func_136(71, 1, 0);
			func_17(71, 1);
			func_136(73, 1, 0);
			func_17(73, 1);
			func_136(74, 1, 0);
			func_17(74, 1);
			func_136(75, 1, 0);
			func_17(75, 1);
			func_136(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_111638.f_19011.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
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

void func_11(int iParam0, bool bParam1)
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

void func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_16();
	}
}

void func_16()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 20);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 20);
}

void func_18()
{
	unk_0xB547E3FFEB27073E();
	unk_0x008B42B5123B79DB();
	switch (iLocal_124)
	{
		case 0:
			unk_0x842F1AEB2FCC00B7(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1);
			break;
		
		case 1:
			unk_0x842F1AEB2FCC00B7(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x842F1AEB2FCC00B7(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x842F1AEB2FCC00B7(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x842F1AEB2FCC00B7(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		return;
	}
	if (unk_0xF166B8FB0B765CF2(sParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	unk_0x73B08BBDEAC9B885(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_21()
{
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_22(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_23(int iParam0)
{
	if (func_26(iParam0))
	{
		if (func_25(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_24(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_24(bool bParam0)
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

bool func_25(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_26(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		unk_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
{
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(8, &uVar0, 1, 1);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_32(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_35(iParam0);
	}
	else
	{
		func_33(iParam0);
	}
}

void func_33(int iParam0)
{
	func_34(iParam0, 0f);
}

void func_34(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_24(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_35(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_33(iParam0);
	}
}

int func_36()
{
	unk_0xA37A90C62806D848(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_124;
	Var0.f_1 = { vLocal_121 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_329[iVar18];
		Var0.f_10[iVar18] = Local_329[iVar18].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	unk_0x82A772610883F395("SwitchSceneNeutral", 0, 1);
	wait(400);
	iVar19 = start_new_script_with_args(&Local_53, &Var0, 18, iLocal_97);
	unk_0x5E8C29AE121DF1C7(&Local_53);
	return iVar19;
}

void func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0].f_1 == 0)
	{
		if (Global_42357[iParam0].f_1 == unk_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0] = 13;
	Global_42357[iParam0].f_1 = 0;
	Global_42357[iParam0].f_2 = 0;
	Global_42357[iParam0].f_3 = 0;
	Global_42357[iParam0].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_39(int iParam0)
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

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()
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

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
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

int func_45(int iParam0)
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

void func_46()
{
	if (Global_8161[0][0].f_259 == 2)
	{
		Global_8161[0][0].f_259 = 0;
	}
	if (Global_8161[1][0].f_259 == 2)
	{
		Global_8161[1][0].f_259 = 0;
	}
	if (Global_8161[2][0].f_259 == 2)
	{
		Global_8161[2][0].f_259 = 0;
	}
	unk_0x0674E58A79778E99(&Global_7356, 25);
	unk_0x5D96D8530B3D0904(&Global_7357, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_49(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	fVar0 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_121);
	if (fVar0 < 62500f)
	{
		func_80();
		func_77();
		if (iLocal_159)
		{
			if (fVar0 < 64f)
			{
				func_76();
				iLocal_159 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_160)
	{
		if (func_52())
		{
			iLocal_160 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_48++;
}

int func_52()
{
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xC844350D5D58C99A(Local_329[iVar0]) || !unk_0xC844350D5D58C99A(Local_329[iVar0].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xC844350D5D58C99A(Local_329.f_83) || !unk_0xC844350D5D58C99A(Local_329.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_124)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	if (!func_26(&iLocal_147))
	{
		func_35(&iLocal_147);
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_157) && !unk_0x437347B10A200C4B(iLocal_157, 0))
	{
		if (unk_0x65636D4556D82155(iLocal_157))
		{
			return;
		}
	}
	if (func_23(&iLocal_147) >= 8f)
	{
		iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x437347B10A200C4B(Local_329[(iVar0 - 1)], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&iLocal_147);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					func_74();
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
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_73();
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
				func_66();
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
				if (func_65())
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
			if (func_64())
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
			func_63();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_62();
		func_57();
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
		func_74();
	}
	return 0;
}

void func_57()
{
	if (!func_58())
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

int func_58()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_61())
	{
		return 0;
	}
	if (func_59(unk_0xD803B885F5E47A62()))
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

bool func_59(int iParam0)
{
	return func_60(iParam0, 20);
}

bool func_60(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_61()
{
	return -1;
}

void func_62()
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

void func_63()
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

int func_64()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()
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

void func_66()
{
	if (func_116(14))
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
		Global_19486 = func_67();
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

var func_67()
{
	func_68();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_68()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_71(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_70(unk_0x16F2683693E537C9());
			if (func_69(iVar0) && (!func_116(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_69(Global_111638.f_2358.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1798[iParam0];
}

void func_73()
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

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_76()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0x437347B10A200C4B(Local_329.f_83, 0))
	{
		iVar0 = unk_0xD8A54335F18763BA();
		if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
		{
			iLocal_159 = 0;
			return;
		}
		unk_0xC0B0B9E466C0ED17(Local_329.f_83, 0f, 0f, 0,75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_77()
{
	iVar0 = unk_0xD8A54335F18763BA();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
	{
		iLocal_328 = 0;
		return;
	}
	if (!unk_0x437347B10A200C4B(iLocal_157, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_328)
		{
			case 0:
				if (vdist2(unk_0x68F4C0EC296D3901(iLocal_157, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 64f && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_161 = 0;
					iLocal_162 = 0;
					iLocal_328 = 1;
				}
				break;
			
			case 1:
				unk_0xDD353D0E9C789D0E(&uVar1);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x75ABDC5F81978924(uVar1);
				unk_0x78ADC381772E3D54(iLocal_157, uVar1);
				unk_0xF82EA857DA10E0CD(&uVar1);
				iLocal_328 = 2;
				break;
			
			case 2:
				if ((unk_0xD1960163A3042274(iLocal_157, 242628503) != 1 || unk_0x7069CC4DE1EA3FAA(iLocal_157, unk_0x16F2683693E537C9(), 20f)) && !unk_0x25037C66EB32B076())
				{
					unk_0xF96A174EE26D7588(iLocal_157, unk_0x16F2683693E537C9(), -1);
					if (!iLocal_162)
					{
						func_78(iLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_78(iLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x65636D4556D82155(iLocal_157))
				{
					func_33(&iLocal_144);
					unk_0xC6EB89C59F2AF6B8(iLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_328 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0x68F4C0EC296D3901(iLocal_157, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 225f)
				{
					unk_0xDD353D0E9C789D0E(&uVar2);
					unk_0xE655C47E46F9A7E4(0, Local_329.f_83.f_9, 1000);
					unk_0xC6EB89C59F2AF6B8(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uVar2);
					unk_0x78ADC381772E3D54(iLocal_157, uVar2);
					unk_0xF82EA857DA10E0CD(&uVar2);
					iLocal_328 = 0;
				}
				if (func_26(&iLocal_144))
				{
					if (func_23(&iLocal_144) >= 5f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_328 = 1;
					}
					else if (func_23(&iLocal_144) >= 10f && !iLocal_162)
					{
						iLocal_162 = 1;
						iLocal_328 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_78(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_79(iParam3), 0);
}

int func_79(int iParam0)
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

void func_80()
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xC844350D5D58C99A(Local_329[iVar2].f_1) && unk_0xC844350D5D58C99A(Local_329[iVar2]))
		{
			if (func_85(Local_329[iVar2], 1, 0, 0, 0) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_329[iVar2].f_1, 1))
			{
				func_83();
				func_82(iLocal_105);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_329[iVar2]))
			{
				if (func_26(&(vLocal_125[iVar2])))
				{
					if (func_23(&(vLocal_125[iVar2])) > fLocal_150[iVar2])
					{
						if (unk_0xDF1306B443CD3D15(Local_329[iVar2].f_1, 0) && unk_0xC42A92762C58E1B9(Local_329[iVar2], Local_329[iVar2].f_1, 0))
						{
							iVar0 = unk_0x09AC81E49EA267F7(250, 500);
							iVar1 = unk_0x09AC81E49EA267F7(250, 500);
							unk_0xDD353D0E9C789D0E(&uVar3);
							unk_0xD1F0F33C375B8446(0, Local_329[iVar2].f_1, 1, iVar0);
							unk_0xD1F0F33C375B8446(0, Local_329[iVar2].f_1, 31, iVar1);
							unk_0x75ABDC5F81978924(uVar3);
							if (!unk_0xEB6A8945D1AC98A1(Local_329[iVar2]))
							{
								unk_0x78ADC381772E3D54(Local_329[iVar2], uVar3);
							}
							unk_0xF82EA857DA10E0CD(&uVar3);
						}
						func_33(&(vLocal_125[iVar2]));
						fLocal_150[iVar2] = unk_0x79833B02DBD2A244(0f, 3f);
					}
				}
				else
				{
					func_35(&(vLocal_125[iVar2]));
				}
			}
			if (!unk_0x437347B10A200C4B(Local_329[iVar2], 0))
			{
				if ((unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_329[iVar2]) && !unk_0x869EFD0BC0868856(Local_329[iVar2])) && !unk_0xA48EBBEA418ADC94(Local_329[iVar2]))
				{
					Local_329[iVar2].f_11 = 1;
				}
				else if (Local_329[iVar2].f_11)
				{
					unk_0xDD353D0E9C789D0E(&uVar3);
					unk_0xE655C47E46F9A7E4(0, Local_329[iVar2].f_9, 1000);
					unk_0xC6EB89C59F2AF6B8(0, Local_329[iVar2].f_12, Local_329[iVar2].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uVar3);
					unk_0x78ADC381772E3D54(Local_329[iVar2], uVar3);
					unk_0xF82EA857DA10E0CD(&uVar3);
					Local_329[iVar2].f_11 = 0;
				}
				if (unk_0x869EFD0BC0868856(Local_329[iVar2]) || unk_0xA48EBBEA418ADC94(Local_329[iVar2]))
				{
					if (!Local_329[iVar2].f_10 && (unk_0x869EFD0BC0868856(Local_329[iVar2]) || unk_0xA48EBBEA418ADC94(Local_329[iVar2])))
					{
						Local_329.f_101++;
					}
					Local_329[iVar2].f_10 = 1;
				}
				else if (Local_329[iVar2].f_10)
				{
					unk_0xDD353D0E9C789D0E(&uVar3);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1000);
					unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE655C47E46F9A7E4(0, Local_329[iVar2].f_9, 1000);
					unk_0xC6EB89C59F2AF6B8(0, Local_329[iVar2].f_12, Local_329[iVar2].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uVar3);
					unk_0x78ADC381772E3D54(Local_329[iVar2], uVar3);
					unk_0xF82EA857DA10E0CD(&uVar3);
					Local_329[iVar2].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xC844350D5D58C99A(Local_329.f_83.f_1) && unk_0xC844350D5D58C99A(Local_329.f_83))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_329.f_83.f_1, 0))
		{
			iLocal_86 = Local_329.f_83.f_1;
		}
		if (func_85(Local_329.f_83, 1, 0, 0, 0))
		{
			func_83();
			func_82(iLocal_105);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
		if (!unk_0xEB6A8945D1AC98A1(Local_329.f_83))
		{
			if (func_26(&iLocal_141))
			{
				if (func_23(&iLocal_141) > fLocal_156)
				{
					if (unk_0xDF1306B443CD3D15(Local_329.f_83.f_1, 0) && unk_0xC42A92762C58E1B9(Local_329.f_83, Local_329.f_83.f_1, 0))
					{
						iVar0 = unk_0x09AC81E49EA267F7(250, 500);
						iVar1 = unk_0x09AC81E49EA267F7(250, 500);
						unk_0xDD353D0E9C789D0E(&uVar3);
						unk_0xD1F0F33C375B8446(0, Local_329.f_83.f_1, 1, iVar0);
						unk_0xD1F0F33C375B8446(0, Local_329.f_83.f_1, 31, iVar1);
						unk_0x75ABDC5F81978924(uVar3);
						if (!unk_0xEB6A8945D1AC98A1(Local_329.f_83))
						{
							unk_0x78ADC381772E3D54(Local_329.f_83, uVar3);
						}
						unk_0xF82EA857DA10E0CD(&uVar3);
					}
					func_33(&iLocal_141);
					fLocal_156 = unk_0x79833B02DBD2A244(0f, 3f);
				}
			}
			else
			{
				func_35(&iLocal_141);
			}
		}
		if (!unk_0x437347B10A200C4B(Local_329.f_83, 0))
		{
			if ((unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_329.f_83) && !unk_0x869EFD0BC0868856(Local_329.f_83)) && !unk_0xA48EBBEA418ADC94(Local_329.f_83))
			{
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11)
			{
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0xE655C47E46F9A7E4(0, Local_329.f_83.f_9, 1000);
				unk_0xC6EB89C59F2AF6B8(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(Local_329.f_83, uVar3);
				unk_0xF82EA857DA10E0CD(&uVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (unk_0x869EFD0BC0868856(Local_329.f_83) || unk_0xA48EBBEA418ADC94(Local_329.f_83))
			{
				if (!Local_329.f_83.f_10)
				{
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10)
			{
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1000);
				unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xE655C47E46F9A7E4(0, Local_329.f_83.f_9, 1000);
				unk_0xC6EB89C59F2AF6B8(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(Local_329.f_83, uVar3);
				unk_0xF82EA857DA10E0CD(&uVar3);
				iLocal_328 = 4;
				func_33(&iLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

char* func_81()
{
	iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_82(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_136(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_90(&iLocal_96);
		iLocal_95 = 9;
	}
}

void func_83()
{
	unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(iVar0[iVar12]) && !unk_0xEB6A8945D1AC98A1(iVar0[iVar12]))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
			{
				unk_0xF3268524E9BE6D6E(iVar0[iVar12], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&uVar11);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), unk_0x09AC81E49EA267F7(300, 900));
				unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 0);
				unk_0x75ABDC5F81978924(uVar11);
				unk_0x78ADC381772E3D54(iVar0[iVar12], uVar11);
				unk_0xF82EA857DA10E0CD(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_111638.f_19011.f_1)
	{
		case 0:
			func_84(0);
			break;
		
		case 1:
			func_84(0);
			break;
		
		case 3:
			func_84(0);
			break;
		
		case 4:
			func_84(0);
			break;
		
		case 5:
			func_84(0);
			break;
		
		case 2:
			func_84(0);
			break;
	}
}

void func_84(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = unk_0x16F2683693E537C9();
	if (Local_329.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			if (bParam1)
			{
				if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x4734A6196B611C3B(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x1B3D109B39CC2C89(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
				{
					if (func_86(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x405E212DDE472467(iParam0, 0))
			{
				if (unk_0xB87D13D0C064E9D1(unk_0x6937EA2286828455(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xE9FDA1035CFEA94F(iParam0))
			{
				return 1;
			}
			if (unk_0x03A10A5707B2BB1F(iVar0, 4))
			{
				if (unk_0x168558745A6AC21E(iVar0))
				{
					if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xD3DCEC81D13AAFB1(vVar1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x723EE7F83DF1497D((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return 1;
			}
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x681F21BF9F7B449B(-1, vVar1, 25f) && !unk_0x681F21BF9F7B449B(11, vVar1, 25f)) && !unk_0x681F21BF9F7B449B(13, vVar1, 25f))
			{
				return 1;
			}
			unk_0xE910A68AA670B4AA(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_86(int iParam0, bool bParam1)
{
	return func_87(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_87(int iParam0, int iParam1, bool bParam2)
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

int func_88(int iParam0, bool bParam1)
{
	iVar0 = func_89(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_95(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_89(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_90(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

int func_92(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_93(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, -1);
}

var func_94()
{
	return Global_73825;
}

int func_95(int iParam0)
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

bool func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_98()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_100()
{
	return 1;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_103()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == -1569615261) || iVar0 == -1833087301) || iVar0 == -72657034)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return ((((bVar1 && unk_0x06F8112AA79C53D9(0, 69)) || (bVar1 && unk_0x06F8112AA79C53D9(0, 70))) || (bVar1 && unk_0x06F8112AA79C53D9(0, 68))) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
	}
	return (((((bVar1 && unk_0x06F8112AA79C53D9(0, 24)) || (bVar1 && unk_0x06F8112AA79C53D9(0, 25))) || (bVar1 && unk_0x06F8112AA79C53D9(0, 47))) || unk_0x05569C69D7945F99(unk_0x16F2683693E537C9())) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
}

int func_104(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_67();
				if (!func_69(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_111()) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_111()) || Global_30770) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_111()) || func_108()) || Global_110685) || Global_30770) || func_110()) || Global_42596) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_111()) || Global_110685) || Global_30770) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_105()
{
	return Global_98783.f_1;
}

int func_106()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_107()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return Global_98796.f_346 > 0;
}

bool func_109()
{
	return Global_98796.f_345 > 0;
}

var func_110()
{
	return Global_1312877;
}

int func_111()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0x8A22C4C08282BF26(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_94576;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_116(6) || func_116(7))
			{
				return 1;
			}
			else
			{
				return func_114(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_140(5))
			{
				if (func_104(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19);
}

bool func_116(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_117()
{
	iVar0 = unk_0xD8A54335F18763BA();
	if ((iVar0 <= iLocal_119 && iVar0 >= iLocal_120) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
	{
		return;
	}
	if (bLocal_158)
	{
		func_127();
		func_126();
		switch (iLocal_124)
		{
			case 0:
				func_125(-1930,38f, 4441,9f, 38,12f, 260,86f, -1933,442f, 4440,866f, 37,2504f, 184,125f);
				func_125(-1931,24f, 4440,26f, 38,05f, 257,2117f, -1932,795f, 4438,275f, 37,402f, 78,7749f);
				func_125(-1935,01f, 4442,57f, 37,48f, 263,59f, -1934,964f, 4438,306f, 37,1741f, 297,2304f);
				func_125(-1935,5f, 4440,32f, 37,48f, 258,09f, -1937,251f, 4438,761f, 36,9256f, 23,8377f);
				func_125(-1939,63f, 4440,46f, 37,25f, 253,32f, -1938,319f, 4439,913f, 36,7166f, 250,6112f);
				func_124(-1939,564f, 4443,306f, 36,3803f, 262,3551f, -1936,208f, 4444,125f, 36,8594f, 123,8187f);
				break;
			
			case 1:
				func_125(-520,2097f, 2010,816f, 203,6035f, 17,0169f, -517,2971f, 2008,383f, 204,0454f, 2,9896f);
				func_125(-516,9937f, 2013,98f, 203,5907f, 19,3803f, -517,1741f, 2010,813f, 203,8412f, 125,7555f);
				func_125(-518,3414f, 2005,449f, 204,1878f, 20,7231f, -519,0882f, 2013,649f, 203,3304f, 195,7951f);
				func_125(-514,8247f, 2008,574f, 204,3629f, 20,2278f, -514,2933f, 2004,923f, 204,5935f, 126,8655f);
				func_124(-516,1545f, 1999,374f, 204,7715f, 18,7907f, -515,4201f, 2003,622f, 204,5549f, 1,757f);
				break;
			
			case 3:
				func_125(-225,41f, 4227,53f, 44,45f, 82,7f, -231,9795f, 4226,31f, 43,8587f, 353,3938f);
				func_125(-233,16f, 4225,81f, 44,29f, 76,66f, -231,3181f, 4229,25f, 43,8681f, 179,3787f);
				func_125(-233,33f, 4228,89f, 44,35f, 80,88f, -229,4769f, 4226,102f, 43,8909f, 311,8915f);
				func_125(-229,58f, 4225,21f, 44,34f, 75,78f, -227,6066f, 4228,867f, 43,9069f, 186,6535f);
				func_125(-228,85f, 4227,71f, 44,57f, 83,38f, -226,7015f, 4226,683f, 43,8597f, 28,0083f);
				func_124(-225,6736f, 4224,503f, 43,8435f, 77,7579f, -227,2893f, 4224,699f, 43,8335f, 36,55f);
				break;
			
			case 4:
				func_125(1608,91f, 3845,06f, 33,94f, 307,24f, 1610,476f, 3839,163f, 32,9854f, 29,8332f);
				func_125(1606,2f, 3838,41f, 33,62f, 307,44f, 1612,908f, 3841,492f, 32,9721f, 78,3f);
				func_125(1610,47f, 3842,26f, 33,61f, 311,44f, 1608,097f, 3842,676f, 33,3217f, 198,5355f);
				func_125(1604,49f, 3840,42f, 34,18f, 308,19f, 1608,427f, 3837,368f, 32,9989f, 9,9463f);
				func_124(1603,405f, 3836,324f, 33,1144f, 305,055f, 1605,788f, 3840,236f, 33,2826f, 288,7775f);
				break;
			
			case 5:
				func_125(2046,772f, 2130,442f, 91,9486f, 233,1493f, 2036,123f, 2133,981f, 92,615f, 260,0519f);
				func_125(2045,344f, 2126,352f, 91,9358f, 236,3633f, 2044,422f, 2128,961f, 92,088f, 47,8797f);
				func_125(2036,512f, 2137,807f, 92,6507f, 237,2446f, 2041,778f, 2131,354f, 92,4544f, 226,7534f);
				func_125(2041,739f, 2134,324f, 92,4013f, 232,956f, 2039,603f, 2132,563f, 92,6648f, 61,0834f);
				func_125(2039,775f, 2130,025f, 92,5324f, 241,6337f, 2038,744f, 2134,523f, 92,6235f, 128,98f);
				func_124(2030,898f, 2134,197f, 92,5014f, 249,4471f, 2036,58f, 2135,382f, 92,605f, 233,2111f);
				break;
			
			case 2:
				func_125(2992,58f, 2786,28f, 43,21f, 26,81f, 2998,772f, 2777,392f, 42,1008f, 29,7228f);
				func_125(2995,76f, 2787,72f, 43,26f, 33,42f, 2993,12f, 2779,783f, 42,3128f, 286,9825f);
				func_125(2994,91f, 2779,79f, 42,73f, 11,43f, 2999,253f, 2783,97f, 42,5421f, 108,7426f);
				func_125(2999,44f, 2781,11f, 43,11f, 23,89f, 2997,582f, 2787,476f, 42,6953f, 157,4885f);
				func_125(3000,06f, 2775,26f, 42,47f, 17,16f, 2994,719f, 2784,905f, 42,6444f, 213,8879f);
				func_124(2995,525f, 2775,522f, 41,98f, 4,3249f, 2993,511f, 2776,948f, 42,0941f, 305,3785f);
				break;
		}
		switch (iLocal_124)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0xDA8F5DDC86FE3C26(sVar1))
			{
				if (!unk_0x8ED9A0095B69A728(sVar1))
				{
					unk_0x2723524E448F4BDD(sVar1, true);
				}
			}
		}
	}
	func_118();
}

void func_118()
{
	if (fLocal_110 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329)
		{
			if (!func_123(Local_329[iVar5].f_2))
			{
				Local_329[iVar5].f_1 = unk_0x122AAB0B1D6F55AD(func_122(0), Local_329[iVar5].f_2, Local_329[iVar5].f_5, 1, 1, 0);
				unk_0xB9FD7450C0DAB575(Local_329[iVar5].f_1, 1084227584);
				unk_0x44A200C9B6E1CEA6(Local_329[iVar5].f_1, true);
				if (func_123(Local_329[iVar5].f_6))
				{
					Local_329[iVar5] = unk_0x852A19533F896693(Local_329[iVar5].f_1, 4, func_121(), -1, 1, true);
					unk_0x56FDC9ADE35F7DB0(Local_329[iVar5].f_1, true, 0, 0);
				}
				else
				{
					Local_329[iVar5] = unk_0x36F2404464202779(4, func_121(), Local_329[iVar5].f_6, Local_329[iVar5].f_9, 1, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_329[iVar5].f_12 = sVar3;
					Local_329[iVar5].f_13 = sVar4;
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x78A77CDD64392938(0, unk_0x09AC81E49EA267F7(100, 500));
					unk_0xC6EB89C59F2AF6B8(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0x79833B02DBD2A244(0, 1065353216), 0, 0, 0);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(Local_329[iVar5], uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
				}
				unk_0xCC095276B3DD380E(Local_329[iVar5], 1);
				unk_0x83F619A03CDDE284(Local_329[iVar5], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = unk_0x122AAB0B1D6F55AD(func_122(1), Local_329.f_83.f_2, Local_329.f_83.f_5, 1, 1, 0);
		unk_0xB9FD7450C0DAB575(Local_329.f_83.f_1, 1084227584);
		unk_0x44A200C9B6E1CEA6(Local_329.f_83.f_1, true);
		if (func_123(Local_329.f_83.f_6))
		{
			Local_329.f_83 = unk_0x852A19533F896693(Local_329.f_83.f_1, 4, func_121(), -1, 1, true);
			unk_0x56FDC9ADE35F7DB0(Local_329.f_83.f_1, true, 0, 0);
		}
		else
		{
			Local_329.f_83 = unk_0x36F2404464202779(4, func_121(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, true);
			iVar1 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = sVar4;
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x93D47DFD0AE94949(0, func_120((unk_0x09AC81E49EA267F7(0, 65535) % 1000), 1, 1000));
			unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0x79833B02DBD2A244(0, 1065353216), 0, 0, 0);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(Local_329.f_83, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
	}
	else if (fLocal_110 < 225f)
	{
	}
	iLocal_157 = Local_329.f_83;
	if (!unk_0x437347B10A200C4B(Local_329[0], 0))
	{
		func_119(&uLocal_163, 1, Local_329[0], "MALE1", 0, 1);
	}
	if (!unk_0x437347B10A200C4B(Local_329[1], 0))
	{
		func_119(&uLocal_163, 2, Local_329[1], "MALE2", 0, 1);
	}
	if (!unk_0x437347B10A200C4B(Local_329[2], 0))
	{
		func_119(&uLocal_163, 3, Local_329[3], "MALE3", 0, 1);
	}
	if (!func_26(&iLocal_147))
	{
		func_35(&iLocal_147);
	}
	else
	{
		func_33(&iLocal_147);
	}
}

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_121()
{
	return 1694362237;
}

int func_122(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71)
	{
		if (unk_0x4DAC2AD66FE0E696(Local_329.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, iVar0);
	if (Local_329.f_71[iVar0] == 0)
	{
		if (Local_329.f_71[0] == 0)
		{
			switch (iLocal_124)
			{
				case 0:
					return 788045382;
					break;
				
				case 1:
					return 914654722;
					break;
				
				case 3:
					return 788045382;
					break;
				
				case 4:
					return 788045382;
					break;
				
				case 5:
					return 914654722;
					break;
				
				case 2:
					return 788045382;
					break;
			}
		}
		else
		{
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[iVar0];
}

int func_123(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_124(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	if (func_123(Local_329.f_83.f_2))
	{
		Local_329.f_83.f_2 = { vParam0 };
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = { vParam4 };
		Local_329.f_83.f_9 = fParam7;
	}
}

void func_125(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		if (!bVar1 && func_123(Local_329[iVar0].f_2))
		{
			Local_329[iVar0].f_2 = { vParam0 };
			Local_329[iVar0].f_5 = fParam3;
			Local_329[iVar0].f_6 = { vParam4 };
			Local_329[iVar0].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_126()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		Local_329[iVar0].f_2 = { 0f, 0f, 0f };
		Local_329[iVar0].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = { 0f, 0f, 0f };
	Local_329.f_83.f_5 = 0f;
}

void func_127()
{
	switch (iLocal_124)
	{
		case 0:
			unk_0xB5376EA942202450(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1, false, 1);
			unk_0x28F5E4DA506AC0CA(-227,43f, 3888,9f, 36,41f, 50f, 1, 0, 0, 0, false, 0);
			unk_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0xB5376EA942202450(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 0, false, 1);
			break;
		
		case 3:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0xB5376EA942202450(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1, false, 1);
			unk_0x10F452EDECF82313(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 0, 0, 0, 0, 0, 0);
			unk_0xB5376EA942202450(-196,58f, 4217,64f, 50,083f, -202,574f, 4210,926f, 40,0262f, 10f, 1, false, 1);
			unk_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", 0);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", 0);
			unk_0xCD7D80FD792F9954("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", 1);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0xB5376EA942202450(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 100f, 1, false, 1);
			unk_0x10F452EDECF82313(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x2723524E448F4BDD("QUARRY", false);
			unk_0xB5376EA942202450(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1, false, 1);
			unk_0x10F452EDECF82313(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 0, 0, 0, 0, 0, 0);
			break;
	}
}

bool func_128()
{
	return ((((((((func_129(&(Local_329.f_71)) && func_129(&(Local_329.f_77))) && func_129(&(Local_329.f_99))) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_aa_smoke@male@idle_a")) && unk_0xB4AE0788C1587752("random@street_race")) && unk_0xB4AE0788C1587752("gestures@m@standing@casual"));
}

int func_129(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_130()
{
	func_132(&(Local_329.f_77), 1694362237);
	func_132(&(Local_329.f_99), 1694362237);
	switch (iLocal_124)
	{
		case 0:
			func_132(&(Local_329.f_71), 788045382);
			func_132(&(Local_329.f_71), -2128233223);
			break;
		
		case 1:
			func_132(&(Local_329.f_71), 914654722);
			func_132(&(Local_329.f_71), 850565707);
			func_132(&(Local_329.f_71), -808457413);
			func_132(&(Local_329.f_71), -394074634);
			func_132(&(Local_329.f_71), 1126868326);
			break;
		
		case 3:
			func_132(&(Local_329.f_71), 788045382);
			func_132(&(Local_329.f_71), -2128233223);
			break;
		
		case 4:
			func_132(&(Local_329.f_71), 788045382);
			func_132(&(Local_329.f_71), -2128233223);
			break;
		
		case 5:
			func_132(&(Local_329.f_71), 914654722);
			func_132(&(Local_329.f_71), 1126868326);
			func_132(&(Local_329.f_71), 850565707);
			func_132(&(Local_329.f_71), -599568815);
			func_132(&(Local_329.f_71), -1207771834);
			break;
		
		case 2:
			func_132(&(Local_329.f_71), 788045382);
			func_132(&(Local_329.f_71), -2128233223);
			break;
	}
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_aa_smoke@male@idle_a");
	unk_0x3F423BF5B8125A50("random@street_race");
	unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	if (iLocal_124 == 0)
	{
		unk_0x523BCC9DC80CD82F(-253064476);
		unk_0x523BCC9DC80CD82F(1512136012);
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x36187931D29E5BBE(1, &cVar0);
	func_131(&(Local_329.f_77));
	func_131(&(Local_329.f_71));
	func_131(&(Local_329.f_99));
}

void func_131(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_132(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_133(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_133(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_136(int iParam0, bool bParam1, bool bParam2)
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

int func_137()
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

int func_138()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_41431);
}

int func_141(int iParam0, int iParam1)
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

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143()
{
	StringCopy(&Local_53, "Offroad_Races", 64);
	unk_0xDF8BDD00CF1D4043(1);
	fLocal_117 = (6f + 4f);
	iLocal_99 = 4;
	func_101(&uLocal_94, 4194304);
	iLocal_97 = 35000;
	iLocal_86 = 0;
	iLocal_119 = 0;
	iLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_147(vLocal_90, &vLocal_121);
	iLocal_105 = func_146(iLocal_124);
	fLocal_102 = (to_float(func_145(iLocal_105)) + 5f);
	if (func_139(0, iLocal_99))
	{
		bLocal_158 = true;
	}
	else
	{
		func_82(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_111638.f_19011.f_1)
	{
		if (func_115(func_146(iLocal_124)))
		{
		}
		iLocal_105 = 263;
		func_82(iLocal_105);
	}
	if (!func_115(func_146(iLocal_124)) && unk_0x0F1CCD77290EE12F())
	{
		if (iLocal_105 != 263)
		{
			if (func_144(iLocal_105, 1))
			{
				iLocal_105 = 263;
			}
		}
		func_82(iLocal_105);
	}
	if (iLocal_124 == 2)
	{
		iLocal_119 = 20;
		iLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5)
	{
		sLocal_101 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_101 = "PLAY_OFFROAD_M";
	}
}

bool func_144(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_147(vector3 vParam0, var uParam3)
{
	iVar0 = 0;
	vVar1[0] = { func_148(0) };
	vVar1[1] = { func_148(1) };
	vVar1[3] = { func_148(3) };
	vVar1[4] = { func_148(4) };
	vVar1[5] = { func_148(5) };
	vVar1[2] = { func_148(2) };
	vVar1[6] = { func_148(6) };
	fVar23 = vdist2(vParam0, vVar1[0]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = vdist2(vParam0, vVar1[iVar24]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { vVar1[iVar0] };
	return iVar0;
}

Vector3 func_148(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939,483f, 4443,953f, 37,3474f;
		
		case 1:
			return -516,9256f, 2008,014f, 204,0998f;
		
		case 3:
			return -223,6755f, 4224,644f, 43,7304f;
		
		case 4:
			return 1606,578f, 3841,188f, 33,2931f;
		
		case 5:
			return 2037,664f, 2137,386f, 92,7095f;
		
		case 2:
			return 2996,776f, 2774,085f, 43,26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_149(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

void func_150(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 0, 0);
		}
	}
	func_90(&iLocal_96);
	if (func_142(uLocal_94, 2))
	{
		func_5();
		func_149(&uLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_152();
	unk_0x10FAF14A60A0DBE1();
}

void func_152()
{
	func_149(&uLocal_94, 4);
	func_153();
	if (unk_0x1727A44C562FBED2(iLocal_52))
	{
		unk_0x4000D538E4D54254(iLocal_52, 3);
	}
	if (!unk_0x2EBF5002C6B6A06C(&Local_69))
	{
		if (unk_0x4880526EC51D1C27(&Local_69) != 0)
		{
			unk_0x5E8C29AE121DF1C7(&Local_69);
		}
	}
}

void func_153()
{
}

