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
	fLocal_119 = 0f;
	vLocal_90 = { ScriptParam_0.f_1[0] };
	vLocal_90 = { vLocal_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_113(1);
	}
	iLocal_85 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
	iLocal_95 = 0;
	func_111(&Global_110289, 0);
	func_110();
	if (func_109(uLocal_94, 1))
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
	if (!func_109(uLocal_94, 8))
	{
		if (!func_107(iLocal_100))
		{
			if (func_106(0, iLocal_99))
			{
				func_113(0);
			}
			else
			{
				func_113(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_106(0, iLocal_99))
		{
			func_113(1);
		}
	}
	if (func_109(uLocal_94, 8388608))
	{
		func_113(1);
	}
	if (func_109(uLocal_94, 524288) && (func_105() && !func_104()))
	{
		func_113(1);
	}
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1 && !func_109(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_103(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_102(10);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_86))
	{
		if (func_101() && !Global_110685)
		{
			func_100(1);
		}
		else if (Global_110685)
		{
		}
	}
	while (true)
	{
		if ((!func_99() && !func_98()) && !func_97())
		{
			func_113(1);
		}
		iLocal_85 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
		if (func_109(uLocal_94, 1048576))
		{
			if (unk_0x437347B10A200C4B(iLocal_85, 0))
			{
				func_113(1);
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
					if (func_107(iLocal_100) || (func_109(uLocal_94, 16) && !func_109(uLocal_94, 524288)))
					{
						unk_0x523BCC9DC80CD82F(iLocal_118);
						iLocal_98 = -1;
						func_96();
						func_102(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_103(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_102(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_95() && unk_0xB87F6CF6E5628C67(iLocal_118))
					{
						iLocal_103 = iLocal_103;
						func_102(3);
					}
					else
					{
						func_96();
					}
					break;
				
				case 3:
					if (unk_0x8FE4F98FD4BE2689())
					{
						func_113(1);
						return;
					}
					if (!func_107(iLocal_100))
					{
						if (!func_109(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x7F8A39872A07D2CE(&(Global_98744.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_113(0);
								break;
							}
						}
					}
					if (!unk_0xC844350D5D58C99A(iLocal_86) && (((fLocal_93 > (10f * 10f) && !unk_0x8E28E832BEAC3DCE(ScriptParam_0.f_1[0], 5f)) || fLocal_93 > (80f * 80f)) || (!unk_0xC844350D5D58C99A(iLocal_86) && unk_0x757EF87A33649210())))
					{
						unk_0x28F5E4DA506AC0CA(ScriptParam_0.f_1[0], 8f, 0, 0, 0, 0, false, 0);
						iLocal_86 = unk_0x122AAB0B1D6F55AD(iLocal_118, ScriptParam_0.f_1[0], fLocal_119, 1, 1, 0);
						func_94();
						unk_0x44A200C9B6E1CEA6(iLocal_86, true);
						bVar2 = false;
						if (func_93() && !bVar2)
						{
							unk_0x71EDC33E5A423750(iLocal_86, 2);
							func_91(&uLocal_94, 32);
						}
					}
					else if (func_109(uLocal_94, 32))
					{
						if (!func_93())
						{
							if (!unk_0x437347B10A200C4B(iLocal_86, 0))
							{
								unk_0x71EDC33E5A423750(iLocal_86, 1);
							}
							func_111(&uLocal_94, 32);
						}
					}
					if (!func_109(uLocal_94, 4))
					{
						func_90();
						func_89(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
					{
						if (iLocal_105 != 263)
						{
							if (func_88(6) && !func_87(iLocal_105))
							{
							}
							else
							{
								func_103(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_102(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_109(uLocal_94, 64);
						func_111(&uLocal_94, 128);
						if (!func_86(3) && !Global_98778)
						{
							if (func_109(uLocal_94, 2097152))
							{
								if ((!func_109(uLocal_94, 1) || !unk_0xC844350D5D58C99A(func_85())) && !Global_98778)
								{
									func_102(10);
									break;
								}
							}
						}
						if (func_109(uLocal_94, 524288) && (func_105() && !func_104()))
						{
							func_113(1);
						}
						if (func_84())
						{
							func_113(1);
						}
						if ((!func_76(6) || Global_110685) || func_75())
						{
							bVar3 = false;
						}
						if (func_109(uLocal_94, 1))
						{
							if (!func_74())
							{
								func_91(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_73(1))
						{
							bVar3 = false;
						}
						if (Global_76622)
						{
							bVar3 = false;
						}
						if (func_72())
						{
							bVar3 = false;
						}
						if (unk_0x991B1F0980C62628())
						{
							bVar3 = false;
						}
						if (func_71() || func_70(8, -1))
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
						if (func_69(0) || func_68())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (unk_0xC844350D5D58C99A(iLocal_86))
							{
								if (!unk_0x5A91F08DF773C39D(iLocal_86, vLocal_90, fLocal_117, fLocal_117, fLocal_117, false, true, 0))
								{
									func_102(7);
								}
							}
							if (unk_0x437347B10A200C4B(iLocal_86, 0))
							{
								func_91(&uLocal_94, 128);
								bVar3 = false;
							}
							else if (!unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
							{
								func_91(&uLocal_94, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
								if (bVar3)
								{
									if (iLocal_86 == iVar4)
									{
										if (!unk_0x5A91F08DF773C39D(iLocal_85, ScriptParam_0.f_1[0], 4f, 4f, 2f, false, true, 0))
										{
											func_91(&uLocal_94, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_91(&uLocal_94, 128);
										bVar3 = false;
									}
								}
							}
							if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x558EC149EB2BC0A2(0, 51);
								if (func_67(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_66(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_91(&uLocal_94, 2048);
									}
									else if (!func_109(uLocal_94, 2048) || !unk_0xFEBC1E4EC9E001F0())
									{
										func_65(&iLocal_96);
										func_111(&uLocal_94, 2048);
									}
									if (func_63(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_65(&iLocal_96);
										func_111(&uLocal_94, 2048);
										unk_0x92DCE5C81176D2B4(&Local_69);
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
										func_102(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_65(&iLocal_96);
									func_111(&uLocal_94, 2048);
									unk_0x92DCE5C81176D2B4(&Local_69);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
									func_102(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_65(&iLocal_96);
								func_111(&uLocal_94, 2048);
								unk_0xA37A90C62806D848(0);
							}
						}
					}
					func_55();
					break;
				
				case 5:
					unk_0x558EC149EB2BC0A2(0, 51);
					if (unk_0x1FBF08B001C4788A(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_65(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_109(uLocal_94, 1))
						{
							if (func_88(6) || func_88(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_52(&iLocal_98, 6, iLocal_100, 0, 0);
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
							func_51();
							if (Global_42596)
							{
								func_42(unk_0x16F2683693E537C9());
							}
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 56);
							iLocal_52 = func_25();
							func_91(&uLocal_94, 2);
							func_102(6);
							func_21(&iLocal_107);
							if (iLocal_99 != -1)
							{
								func_20(iLocal_99);
								func_17(func_19(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_102(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_109(uLocal_94, 256))
					{
						if (unk_0xD0BB2359EC70FC37() || unk_0x0F1CCD77290EE12F())
						{
							unk_0x558EC149EB2BC0A2(0, 51);
						}
						else if (unk_0x757EF87A33649210())
						{
							func_91(&uLocal_94, 256);
						}
					}
					if (func_109(Global_110289, 262144))
					{
						func_111(&Global_110289, 262144);
						func_15();
					}
					if (func_109(uLocal_94, 2097152))
					{
						if (!func_86(3) && !unk_0x1727A44C562FBED2(iLocal_52))
						{
							func_102(10);
						}
					}
					if (!unk_0x1727A44C562FBED2(iLocal_52))
					{
						unk_0x11E0F00830F70E15(round((func_11(&iLocal_107) * 1000f)), iLocal_99, 0);
						func_10(&iLocal_107);
						func_111(&uLocal_94, 256);
						func_9();
						if (unk_0xC844350D5D58C99A(iLocal_86))
						{
							if (!unk_0x437347B10A200C4B(iLocal_86, 0))
							{
								unk_0x046C362CF15F1935(&iLocal_86);
								iLocal_86 = 0;
							}
						}
						if (bVar0)
						{
							func_111(&uLocal_94, 2);
						}
						else if (func_109(uLocal_94, 2))
						{
							if (func_109(Global_110289, 0))
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_111(&uLocal_94, 2);
							}
							else
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_111(&uLocal_94, 2);
							}
						}
						func_102(0);
						if (iLocal_99 != -1)
						{
							if (func_109(Global_110289, 0))
							{
								unk_0x353729B0A07DC11A(func_19(iLocal_99), 0, Global_98781, 0);
								func_7(func_19(iLocal_99), 0, Global_98781, 1, 0);
							}
							else
							{
								unk_0x353729B0A07DC11A(func_19(iLocal_99), 0, Global_98781, 0);
								func_7(func_19(iLocal_99), 0, Global_98781, 0, 0);
							}
						}
						func_4();
						func_111(&Global_110289, 0);
						if (func_109(uLocal_94, 16777216))
						{
							func_113(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_106(0, iLocal_99))
								{
									func_113(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_102(0);
					break;
				
				case 10:
					func_113(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_103(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_102(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_103(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_65(&iLocal_96);
					}
					if (!unk_0xEA6BC48857E0AC4C(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
					func_102(4);
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
									if (func_107(iLocal_100) && func_106(0, iLocal_99))
									{
										func_110();
										if (iLocal_105 != 263)
										{
											func_103(iLocal_105, 1, 0);
										}
										func_102(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_103(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_102(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_110();
									if (iLocal_105 != 263)
									{
										func_103(iLocal_105, 1, 0);
									}
									func_102(0);
								}
							}
						}
						else
						{
							func_103(iLocal_105, 1, 0);
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
}

void func_3()
{
}

void func_4()
{
	iVar0 = unk_0xAE06CCC36C49929C(26379945, 1697,183f, 3279,226f, 41,7283f, 1,5897f, 0f, 146,8519f, 50f, 1, 2);
	iVar1 = unk_0xAE06CCC36C49929C(26379945, 1697,755f, 3280,423f, 41,7708f, -9,1434f, 0f, 168,0244f, 50f, 0, 2);
	unk_0xF1E4C781086FABC1(iVar1, iVar0, 3650, 1, 1);
	unk_0x0185A047F396C3B9(0);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
		{
			iLocal_86 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			unk_0x71EDC33E5A423750(iLocal_86, 1);
			unk_0x3E5CE368CD085FFA(iLocal_86, 1);
			unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
		}
	}
	unk_0x73270B3C9CC833FD(iLocal_86, true, 1);
	func_5(&iLocal_120);
	if (unk_0xC844350D5D58C99A(iLocal_120))
	{
		unk_0x046C362CF15F1935(&iLocal_120);
	}
	while (unk_0xFA06B985B30FB0FC(iVar0) || unk_0xFA06B985B30FB0FC(iVar1))
	{
		unk_0x3FC8DBCC154CA56B();
		wait(0);
	}
	unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
	if (unk_0x9F4FE516EAACCFC5(iVar0))
	{
		unk_0x9A8DDC7C522F5BF5(iVar0, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(iVar1))
	{
		unk_0x9A8DDC7C522F5BF5(iVar1, 0);
	}
}

void func_5(var uParam0)
{
	iVar0 = *uParam0;
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!func_6(iVar0))
		{
			unk_0x20641932E5104B25(iVar0, true, 0);
			unk_0x4A4806F9D471E491(iVar0, true, 0);
			unk_0x1E9649458B15960F(iVar0, false);
		}
	}
}

int func_6(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_8(int iParam0)
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

void func_9()
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

void func_10(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		unk_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

char* func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()
{
	if (func_1(sLocal_101))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (unk_0xBCFF5481C5F58C19("airfield"))
	{
		unk_0x81CF20E10AAD5FD5("airfield");
	}
	iVar0 = unk_0x728870EB733D12A1();
	if (((((unk_0xC844350D5D58C99A(iVar0) && iVar0 != iLocal_86) && !unk_0x437347B10A200C4B(iVar0, 0)) && unk_0x134B62B726CEC8E6(iVar0) != -2122757008) && unk_0xBBA8A868118C90ED(iVar0, -1, 0)) && unk_0x134B62B726CEC8E6(iVar0) != -50547061)
	{
		iVar1 = unk_0x83C1D4B63BBD91F6(1694,736f, 3276,483f, 41,2979f, 5f, -2122757008, 16384);
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			unk_0x73270B3C9CC833FD(iVar1, true, 0);
		}
		func_27(1689,662f, 3274,546f, 40,00918f, 1696,669f, 3271,265f, 42,80674f, 7,25f, 1673,428f, 3267,02f, 40,0898f, 108,5236f, 1, 1, 1, 0, 0);
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			unk_0x046C362CF15F1935(&iVar1);
		}
		if (func_26(&iLocal_120))
		{
		}
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		unk_0x71EDC33E5A423750(iVar0, 1);
	}
	iVar2 = start_new_script(&Local_53, iLocal_97);
	unk_0x5E8C29AE121DF1C7(&Local_53);
	return iVar2;
}

int func_26(int iParam0)
{
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iVar0, unk_0x16F2683693E537C9(), vLocal_45, 0, 1, 0))
			{
				unk_0xBA486C69AC1FDE77(iVar0);
				unk_0x20641932E5104B25(iVar0, false, 0);
				unk_0x4A4806F9D471E491(iVar0, false, 0);
				unk_0x1E9649458B15960F(iVar0, true);
				unk_0x73270B3C9CC833FD(iVar0, true, 1);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_28(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_28(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (bParam18)
			{
				func_41(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar10 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_38(iVar0, vParam0, vParam3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, -956048545))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, -1, 0) != 0)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam3 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(vParam11))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0))
					{
						iVar13 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar7);
						if (unk_0xAFB8495D36825275(iVar13))
						{
							vParam11.x = (vParam11.x + 3f);
							vParam11.y = (vParam11.y + 3f);
						}
						if (((iVar13 == -1403128555 || iVar13 == 117401876) || iVar13 == -1237253773) || iVar13 == -845961253)
						{
							vParam11 = { vParam11 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar13 == 1663218586 || iVar13 == -498054846)
						{
							vParam11 = { vParam11 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((vVar7.x - vVar4.x) > vParam11.x)
						{
							bVar2 = false;
						}
						else if ((vVar7.y - vVar4.y) > vParam11.y)
						{
							bVar2 = false;
						}
						else if ((vVar7.z - vVar4.z) > vParam11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam7, 5f, 0, 0, 0, 0, false, 0);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam10);
						unk_0xA47B46945FF6DE74(iVar0, vParam7, 1, false, 0, 1);
						unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							unk_0x05CA0E7946B27A19(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 1))
						{
							unk_0x73270B3C9CC833FD(iVar0, true, 1);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, true), 1, false, 0, 1);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x10F452EDECF82313(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, true, 0);
			}
			iVar14 = unk_0xA30B8362589C124A(iVar0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
			{
				unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
			}
			iVar15 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xA30B8362589C124A(iVar0, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xA30B8362589C124A(iVar0, 1, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
				iVar14 = unk_0xA30B8362589C124A(iVar0, 2, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], 0))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_33()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_36(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_35(unk_0x16F2683693E537C9());
			if (func_34(iVar0) && (!func_88(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_34(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1798[iParam0];
}

int func_38(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_40(vParam1 - vParam4) };
		vVar3 = { vVar0 };
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = { vParam1 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar9 = { vParam1 + vVar0 * FtoV((fParam7 / 2f)) };
		vVar12 = { vParam4 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar15 = { vParam4 + vVar0 * FtoV((fParam7 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var31, &Var34);
		vVar18[0] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var31, Var31.f_1, 0f) };
		vVar18[1] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var31, Var34.f_1, 0f) };
		vVar18[2] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var34, Var31.f_1, 0f) };
		vVar18[3] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_39(vVar18[0], vVar18[1], vVar6, vVar9) || func_39(vVar18[0], vVar18[1], vVar9, vVar15)) || func_39(vVar18[0], vVar18[1], vVar12, vVar15)) || func_39(vVar18[0], vVar18[1], vVar6, vVar12)) || func_39(vVar18[1], vVar18[3], vVar6, vVar9)) || func_39(vVar18[1], vVar18[3], vVar9, vVar15)) || func_39(vVar18[1], vVar18[3], vVar12, vVar15)) || func_39(vVar18[1], vVar18[3], vVar6, vVar12)) || func_39(vVar18[3], vVar18[2], vVar6, vVar9)) || func_39(vVar18[3], vVar18[2], vVar9, vVar15)) || func_39(vVar18[3], vVar18[2], vVar12, vVar15)) || func_39(vVar18[3], vVar18[2], vVar6, vVar12)) || func_39(vVar18[2], vVar18[0], vVar6, vVar9)) || func_39(vVar18[2], vVar18[0], vVar9, vVar15)) || func_39(vVar18[2], vVar18[0], vVar12, vVar15)) || func_39(vVar18[2], vVar18[0], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_39(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
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

void func_41(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 200)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

void func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_50(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_45(1, iVar1, 1);
		return;
	}
	iVar2 = func_44(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_43(iVar2);
}

void func_43(int iParam0)
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

int func_44(int iParam0)
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	func_46(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_48(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_47();
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

int func_47()
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

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (func_49(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0)
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

void func_51()
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

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_54(0))
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
		if (!func_107(iParam2))
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
			func_53(iParam0, iParam4);
		}
	}
	return 2;
}

void func_53(var uParam0, int iParam1)
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

int func_54(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_55()
{
	if (((!unk_0xC844350D5D58C99A(iLocal_86) || unk_0x437347B10A200C4B(iLocal_86, 0)) || !unk_0xDF1306B443CD3D15(iLocal_86, 1)) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xC844350D5D58C99A(iLocal_86) && unk_0xDF1306B443CD3D15(iLocal_86, 0))
		{
			unk_0x71EDC33E5A423750(iLocal_86, 2);
		}
		func_100(0);
		if (func_1(sLocal_101))
		{
			unk_0xA37A90C62806D848(1);
		}
		return;
	}
	if (fLocal_93 < (fLocal_117 * fLocal_117))
	{
		unk_0x71EDC33E5A423750(iLocal_86, 1);
		func_62(sLocal_101);
		func_56(0);
	}
	else if (func_1(sLocal_101))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_56(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_57(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_60())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_58())
	{
		Global_19486.f_1 = 3;
	}
}

int func_58()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_60()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_61()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_62(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_63(int iParam0, bool bParam1)
{
	iVar0 = func_64(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_69(0))
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

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_64(*iParam0);
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

void func_66(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_65(iParam0);
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

int func_67(int iParam0)
{
	return 0;
	return 1;
}

var func_68()
{
	return Global_73825;
}

int func_69(int iParam0)
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

bool func_70(int iParam0, int iParam1)
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

bool func_71()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_72()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_73(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_74()
{
	return 1;
}

bool func_75()
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

int func_76(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_79()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_83()) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_83() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_70(8, -1)) || func_72()) || func_78()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_70(8, -1) || func_81()) || func_80()) || func_78()) || func_77())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_83()) || Global_30770) || func_82()) || func_70(8, -1)) || func_80()) || func_79()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_83()) || func_80()) || Global_110685) || Global_30770) || func_82()) || Global_42596) || func_70(8, -1)) || func_79()) || func_78()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_78()) || func_81()) || func_80()) || func_72())
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

var func_77()
{
	return Global_98783.f_1;
}

int func_78()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_79()
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

bool func_80()
{
	return Global_98796.f_346 > 0;
}

bool func_81()
{
	return Global_98796.f_345 > 0;
}

var func_82()
{
	return Global_1312877;
}

int func_83()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_84()
{
	if (unk_0x8A22C4C08282BF26(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_85()
{
	return Global_94576;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_88(6) || func_88(7))
			{
				return 1;
			}
			else
			{
				return func_86(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_107(5))
			{
				if (func_76(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_87(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19);
}

bool func_88(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90()
{
}

void func_91(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_93()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	iLocal_48++;
}

int func_95()
{
	return 1;
}

void func_96()
{
}

int func_97()
{
	return 0;
}

int func_98()
{
	return 1;
}

int func_99()
{
	return 1;
}

void func_100(int iParam0)
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

int func_101()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	fVar3 = vdist2(vVar0, vLocal_90);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (unk_0x8E28E832BEAC3DCE(vLocal_90, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_102(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_103(int iParam0, bool bParam1, bool bParam2)
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

int func_104()
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

int func_105()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
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

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_41431);
}

int func_108(int iParam0, int iParam1)
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

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_110()
{
	StringCopy(&Local_53, "stunt_plane_races", 64);
	iLocal_118 = -2122757008;
	fLocal_119 = 154,8464f;
	fLocal_102 = 209f;
	iLocal_105 = 95;
	unk_0x28F5E4DA506AC0CA(vLocal_114, 10f, 0, 0, 0, 0, false, 0);
	iLocal_99 = 10;
	sLocal_101 = "PLAY_STUNT";
	fLocal_117 = 6f;
	iLocal_97 = 35000;
}

void func_111(var uParam0, int iParam1)
{
	func_112(uParam0, iParam1);
}

void func_112(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_103(iLocal_105, 0, 0);
		}
	}
	func_65(&iLocal_96);
	if (func_109(uLocal_94, 2))
	{
		func_4();
		func_111(&uLocal_94, 2);
		func_8(&iLocal_98);
	}
	iLocal_98 = -1;
	func_114();
	unk_0x10FAF14A60A0DBE1();
}

void func_114()
{
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		if (!unk_0x437347B10A200C4B(iLocal_86, 0))
		{
			unk_0x73270B3C9CC833FD(iLocal_86, true, 1);
			unk_0x046C362CF15F1935(&iLocal_86);
			unk_0xA954465BA6FDEFE2(&iLocal_86);
		}
	}
	func_111(&uLocal_94, 4);
	func_115();
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

void func_115()
{
}

