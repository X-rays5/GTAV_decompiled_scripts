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
	fLocal_46 = -1f;
	vLocal_117 = { -1109,213f, 4914,744f, 216,101f };
	vLocal_120 = { -1034,6f, 4918,6f, 205,9f };
	vLocal_123 = { -1066,963f, 4873,13f, 207,3281f };
	vLocal_126 = { -1112,946f, 4986,957f, 241,133f };
	fLocal_129 = 72,3125f;
	vLocal_130 = { -1138,386f, 4872,04f, 207,5488f };
	vLocal_133 = { -1091,959f, 4983,27f, 241,1698f };
	fLocal_136 = 57,8125f;
	vLocal_137 = { -1171,648f, 4888,658f, 211,0756f };
	vLocal_140 = { -1137,907f, 4926,572f, 240,999f };
	fLocal_143 = 17,9375f;
	vLocal_144 = { -1177,981f, 4903,231f, 212,477f };
	vLocal_147 = { -1153,398f, 4902,631f, 241,155f };
	fLocal_150 = 17,9375f;
	vLocal_151 = { -1175,693f, 4904,839f, 207,5207f };
	vLocal_154 = { -1142,08f, 4985,32f, 241,2887f };
	fLocal_157 = 36,375f;
	vLocal_158 = { -1106,212f, 4860,086f, 206,1207f };
	vLocal_161 = { -1105,016f, 4873,854f, 241,1453f };
	fLocal_164 = 11,5625f;
	vLocal_165 = { -1044,268f, 4916,587f, 209,8365f };
	vLocal_168 = { -1063,605f, 4972,88f, 241,1299f };
	fLocal_171 = 12,875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (unk_0x2EBF608FFE6CA406(26))
	{
		func_196();
	}
	if (unk_0x8F7DE34FFB67592B())
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		if (unk_0x338D6FF72D84D90F() || iLocal_173)
		{
			unk_0x51B096AAC60548C1(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (Global_111638.f_24990.f_5 >= iLocal_192 && !func_195())
						{
							iLocal_50 = 2;
						}
						func_192();
						func_189();
					}
					break;
				
				case 1:
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (timera() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_188();
							}
							else if (iLocal_187 == 2)
							{
								func_159();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_174)
						{
							func_144(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						func_116();
					}
					unk_0x1BA7FCEAFCE8D46E(Global_40554[9], 0, 0, 1);
					unk_0x1BA7FCEAFCE8D46E(Global_40554[10], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0x51B096AAC60548C1(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_196[iVar0]))
						{
							if (unk_0xE4EDC4B0E92C078B(uLocal_229[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0x46BC6F5F089F3AFF(iLocal_196[iVar0]))
							{
								if (unk_0xE4EDC4B0E92C078B(uLocal_229[iVar0]))
								{
									unk_0x142CC44DB769B57E(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0x12DE711B1C681E9E(iLocal_196[iVar0], unk_0x16F2683693E537C9(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_115())
								{
									if (iLocal_191 < unk_0x1C0640BA9A7327B3())
									{
										iVar1 = unk_0x09AC81E49EA267F7(0, 3);
										if (iVar1 == 0)
										{
											func_100(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_99(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_99(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_100(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_63();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						iLocal_249 = func_62();
						if (!unk_0x83D8570832F172A7(iLocal_249))
						{
							break;
						}
						func_61(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_32(&uLocal_254, &uLocal_260, &iLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0x51732B934211201A(iLocal_410);
						unk_0x5C47E2DDD9F51FC0(iLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0xC844350D5D58C99A(iLocal_196[iVar0]))
							{
								unk_0xEBA53F35D0085654(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0xC844350D5D58C99A(iLocal_221[iVar0]))
							{
								unk_0xF690C84DADBB3551(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x9F4FE516EAACCFC5(iLocal_246))
						{
							unk_0xE3BB8E05FCEB3FBE(iLocal_246, false);
						}
						if (unk_0xC844350D5D58C99A(iLocal_215))
						{
							unk_0xF690C84DADBB3551(&iLocal_215);
						}
						if (unk_0xC844350D5D58C99A(iLocal_215))
						{
							unk_0xF690C84DADBB3551(&iLocal_215);
						}
						if (bLocal_172)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_177)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0);
		unk_0x65C5EBCA17A891FC(1);
		unk_0x2C84016B4A95F6BA(0);
		func_2(1);
		Global_94002 = 1;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(1);
		unk_0x65C5EBCA17A891FC(0);
		unk_0x2C84016B4A95F6BA(1);
		func_2(0);
		Global_94002 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		unk_0x82A772610883F395("DeathFailOut", 0, 0);
		unk_0x5D96D8530B3D0904(&iLocal_48, 1);
		func_13(1, 2, 0);
		unk_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 1) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_13(0, 2, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_48, 1);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&iLocal_48, 2);
		if (!unk_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				unk_0x9A82EEAF6CA12AEE(0,2f);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(0,075f);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		unk_0x0674E58A79778E99(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0) || iParam1)
		{
			unk_0x82A772610883F395(sVar0, 0, 0);
			unk_0x5D96D8530B3D0904(&iLocal_48, 0);
			func_13(1, 1, 0);
			unk_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 0) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_13(0, 1, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_48, 0);
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
		if (func_20(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_19(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_17(14) || Global_110589))
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

bool func_17(int iParam0)
{
	return Global_41431 == iParam0;
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

void func_22()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_31(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_5())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_31(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !func_25(unk_0xD803B885F5E47A62(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "WastedSounds", 1);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x31A33F7BCB08CB80(true);
			break;
		
		case 1:
			if (func_57() || unk_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "Bed", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0,2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "TextHit", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_33(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					unk_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x31A33F7BCB08CB80(false);
				unk_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x67E5ECB8FD7F5018(1);
				func_14(0, 1);
				func_12(0, 1);
				unk_0x8910D3D58E0132B8("DEATH_SCENE");
				unk_0x31A33F7BCB08CB80(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x31A33F7BCB08CB80(false);
			return 1;
			break;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(2500);
				unk_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(true);
			}
			unk_0x9A82EEAF6CA12AEE(0,2f);
			if (func_53(iParam5, 4))
			{
				if (unk_0xAE317D00A5A55DF6("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(6);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_52(sParam3);
			unk_0x3CAEA85DA607305E(100);
			unk_0x1200CC973A2399C8(true);
			unk_0x7A8BB56B212464AC();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_134);
					unk_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				unk_0x5EEBDFEE72949D59(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xBD706C594F6DCD4A();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_134);
					unk_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x757EF87A33649210()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				unk_0x53491B90E4FD0E56(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0,1f)
			{
				func_46(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

void func_37(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0xB8E3620B82AD47D7(2)))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_53(uParam0->f_1, 4096));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x91E3F625EF57450D(2);
					break;
				
				case 2:
					bVar4 = !unk_0x91E3F625EF57450D(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_13, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_42(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6]))
					{
						func_52(uParam0->f_2[iVar6]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								unk_0x1200CC973A2399C8(true);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(false);
								unk_0x3CAEA85DA607305E(-1);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_44(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_34(iParam0);
	}
}

bool func_49(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0) && !unk_0xEAE0D21A50E6C7F4(iLocal_48, 1))
	{
		settimera(0);
		func_14(1, 0);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x790015DC92C918E2();
	}
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x95235C19032FCE7D();
	if (IntToFloat(timera()) > (1500f * 0,2f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 1))
		{
			func_12(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0,075f) || unk_0x757EF87A33649210())
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x1C0640BA9A7327B3() + 1000;
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0);
				func_3(1);
				unk_0x7BBABEC524CBF883(0);
				unk_0x86E4B20DE8E91A57(0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)
{
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 3))
			{
				unk_0x21387C9EECC2B220(1);
				unk_0x5D96D8530B3D0904(&iLocal_48, 3);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 3))
		{
			unk_0x21387C9EECC2B220(0);
			unk_0x0674E58A79778E99(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_34(iParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1);
}

int func_62()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_176)
	{
		unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_111638.f_24990.f_5 = 1000;
		unk_0x63D66B3917B1F596(64);
		Global_111638.f_20559.f_472 = 54;
		iLocal_399 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
		func_98(1);
		while (!unk_0x83D8570832F172A7(iLocal_399))
		{
			wait(0);
		}
		unk_0x7E60C62A7CE58FC8(iLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0x7A8BB56B212464AC();
		while (!func_97())
		{
			wait(0);
		}
		func_96();
		settimera(0);
		unk_0x4D7F4CC43D4D0DE3(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0x6567AE843FADBA94(iLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (timera() > 9500)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_399, "SHARD_ANIM_OUT");
			unk_0x3CAEA85DA607305E(1);
			unk_0x7C19E5E4784BD7CF(0,33f);
			unk_0x7E60D21B163E9D56();
			iLocal_178 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (unk_0x83D8570832F172A7(iLocal_399))
		{
			unk_0xE17FDF9E3068281B(&iLocal_399);
			func_98(0);
		}
		while (unk_0x0EB28750412C3A5A(func_95(unk_0xD803B885F5E47A62()), vLocal_117, 1) < 209f && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			wait(0);
		}
		func_64(18);
		func_196();
	}
}

void func_64(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_111627, 1), 64);
		if (func_67(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_111624, (unk_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		unk_0x0674E58A79778E99(&Global_111634, 0);
	}
	func_66(&Global_30827);
	Global_111628 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_111627 = iParam0;
}

void func_66(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

int func_67(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_68(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_69(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_79(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_78(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_77(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_74(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 15;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_84(var uParam0, int iParam1)
{
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_90()
{
	func_88(&uVar0, unk_0x4460E481B9E33ADA());
	func_87(&uVar0, unk_0x8D199E381D262EEF());
	func_86(&uVar0, unk_0xD8A54335F18763BA());
	func_84(&uVar0, unk_0x972A296334C9D57B());
	func_85(&uVar0, unk_0x118229AD063C3C1D());
	func_83(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_92()
{
	if ((Global_111627 == func_93() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar16 = func_94(Var0);
	return uVar16;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

Vector3 func_95(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_96()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_106())
	{
		return 0;
	}
	if (func_104(unk_0xD803B885F5E47A62()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			unk_0x8225571BCEE038F8("THUNDER", 20f);
			if (!unk_0x39B7A3CCD2467CAB())
			{
				unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
			}
			unk_0x523BCC9DC80CD82F(1268862154);
			unk_0x523BCC9DC80CD82F(-2132435154);
			unk_0x523BCC9DC80CD82F(-2022916910);
			unk_0x523BCC9DC80CD82F(-1322183878);
			unk_0x523BCC9DC80CD82F(-1513883840);
			unk_0x523BCC9DC80CD82F(-1249748547);
			while ((((((!func_143() || !unk_0xB87F6CF6E5628C67(1268862154)) || !unk_0xB87F6CF6E5628C67(-2132435154)) || !unk_0xB87F6CF6E5628C67(-2022916910)) || !unk_0xB87F6CF6E5628C67(-1322183878)) || !unk_0xB87F6CF6E5628C67(-1513883840)) || !unk_0xB87F6CF6E5628C67(-1249748547))
			{
				wait(0);
			}
			iLocal_576 = func_136(unk_0x16F2683693E537C9(), -1074790547, 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xC844350D5D58C99A(iLocal_576))
			{
				unk_0x29E8331978B73E7F(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x29E8331978B73E7F(0, "Rifle_Mag1^1", 3, unk_0xE8213142E3A84F79(-1101075946), 0);
			if (func_143() && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "TREVOR", 0, 0, 0);
				unk_0x29E8331978B73E7F(iLocal_196[11], "Cult_Master", 2, 1268862154, 0);
				unk_0x29E8331978B73E7F(iLocal_196[12], "Rear_Cult", 2, 1268862154, 0);
				unk_0x29E8331978B73E7F(iLocal_196[13], "Left_Old_Cult", 2, 1268862154, 0);
				unk_0x29E8331978B73E7F(iLocal_196[14], "Carbine_Cult", 2, -2132435154, 0);
				unk_0x29E8331978B73E7F(iLocal_196[15], "Shotgun_Cult", 2, -2132435154, 0);
				unk_0x4C902758BEA97C68(0);
			}
			wait(0);
			if (!bLocal_172 && Global_111638.f_24990.f_5 != 1000)
			{
				func_135();
			}
			if (unk_0xC844350D5D58C99A(iLocal_196[0]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_196[0]));
			}
			if (unk_0xC844350D5D58C99A(iLocal_196[1]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_196[1]));
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_246))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_246, false);
			}
			if (unk_0xC844350D5D58C99A(iLocal_215))
			{
				unk_0xF690C84DADBB3551(&iLocal_215);
			}
			if (unk_0xC844350D5D58C99A(iLocal_215))
			{
				unk_0xF690C84DADBB3551(&iLocal_215);
			}
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			if (unk_0xE4EDC4B0E92C078B(iLocal_228))
			{
				unk_0x142CC44DB769B57E(&iLocal_228);
			}
			func_23(1, 1, 1, 0, 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			unk_0xA37A90C62806D848(1);
			unk_0x8BCB70EB440DED83(false);
			unk_0xBFE31971E49FA500(false);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 1);
			}
			unk_0x536F1BE96C726C4B(vLocal_117, 100f, 1, 0, 0, false);
			unk_0x7D6CA5F52B3748BF(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x51B096AAC60548C1(0f);
			unk_0x15EA7F4313456B1D(3, 0);
			unk_0x15EA7F4313456B1D(5, 0);
			iLocal_248 = unk_0x6D4BB7C3AA077590(-1173,509f, 4924,365f, 222,21f, 277,2293f, 2, 0, 2, 1);
			unk_0x523BCC9DC80CD82F(1430544400);
			while (!unk_0xB87F6CF6E5628C67(1430544400))
			{
				wait(0);
			}
			iLocal_190 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0xEABED1927EFB48CA(0))
			{
				if (unk_0x3148AE92ED70DC30("CULT_MASTER", 0))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("CULT_MASTER", 0));
					}
				}
				if (unk_0x3148AE92ED70DC30("REAR_CULT", 0))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("REAR_CULT", 0));
					}
				}
				if (unk_0x3148AE92ED70DC30("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x3148AE92ED70DC30("CARBINE_CULT", 0))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("CARBINE_CULT", 0));
					}
				}
				if (unk_0x3148AE92ED70DC30("SHOTGUN_CULT", 0))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x3148AE92ED70DC30("TREVOR", 0))
				{
					unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1173,531f, 4924,357f, 222,2101f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 188,9369f);
					unk_0xA1B2E0ACC3ED5113(unk_0x16F2683693E537C9(), -1173,509f, 4924,365f, 222,21f, -1, 0, 0f, 1, 0, iLocal_248, 0);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
				}
				if (unk_0x3148AE92ED70DC30("Trevors_weapon", 0))
				{
					unk_0x96C150704BF4D0C6(iLocal_576, unk_0x16F2683693E537C9());
				}
				unk_0x2FB9A57162E54BAB(91,3878f);
				unk_0xEF6276132B396452(4,4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x8BCB70EB440DED83(true);
				unk_0xBFE31971E49FA500(true);
				vLocal_51[0] = { -1044,632f, 4918,149f, 211,3315f };
				fLocal_100[0] = 254,8275f;
				vLocal_51[1] = { -1054,92f, 4915,155f, 210,8241f };
				fLocal_100[1] = 270,2025f;
				vLocal_51[2] = { -1051,859f, 4903,902f, 209,6199f };
				fLocal_100[2] = 299,8404f;
				vLocal_51[3] = { -1068,246f, 4899,532f, 213,2755f };
				fLocal_100[3] = 298,4257f;
				vLocal_51[4] = { -1083,322f, 4899,532f, 213,2755f };
				fLocal_100[4] = 283,5311f;
				vLocal_51[5] = { -1084,058f, 4933,805f, 228,2246f };
				fLocal_100[5] = 87,5233f;
				vLocal_51[6] = { -1081,976f, 4937,339f, 232,3275f };
				fLocal_100[6] = 109,6546f;
				vLocal_51[7] = { -1092,075f, 4939,958f, 217,3385f };
				fLocal_100[7] = 210,2433f;
				vLocal_51[8] = { -1101,798f, 4930,33f, 217,3544f };
				fLocal_100[8] = 203,732f;
				vLocal_51[9] = { -1070,675f, 4869,301f, 220,2917f };
				fLocal_100[9] = 39,1109f;
				vLocal_51[10] = { -1115,703f, 4878,439f, 225,8085f };
				fLocal_100[10] = 25,8472f;
				unk_0xF63400DBE3303D26("rghCult", &iLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0x36F2404464202779(26, 1430544400, vLocal_51[iVar1], fLocal_100[iVar1], 1, true);
						unk_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						unk_0x262EF6C6306BEA6C(iLocal_196[iVar1], -1074790547, -1, true, true);
						unk_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 0);
						unk_0x083F03A847B640E9(iLocal_196[iVar1], 2);
						unk_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						unk_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						unk_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						unk_0xD458AC1C1D29C3B4(iLocal_196[iVar1], 150, 0);
						unk_0x29CD9554726C7577(iLocal_196[iVar1], unk_0x09AC81E49EA267F7(40, 60));
						unk_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], unk_0x16F2683693E537C9(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0x36F2404464202779(26, 1268862154, vLocal_51[iVar1], fLocal_100[iVar1], 1, true);
						unk_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						unk_0x262EF6C6306BEA6C(iLocal_196[iVar1], 2017895192, -1, true, true);
						unk_0xAFF39FB306F8E232(iLocal_196[iVar1], 50, 1);
						unk_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 2);
						unk_0x083F03A847B640E9(iLocal_196[iVar1], 1);
						unk_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						unk_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						unk_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						unk_0x29CD9554726C7577(iLocal_196[iVar1], unk_0x09AC81E49EA267F7(40, 60));
						unk_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], unk_0x16F2683693E537C9(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0xEB6A8945D1AC98A1(iLocal_196[iVar1]) && !unk_0xEB6A8945D1AC98A1(iLocal_196[11])) && !unk_0xEB6A8945D1AC98A1(iLocal_196[12])) && !unk_0xEB6A8945D1AC98A1(iLocal_196[13])) && !unk_0xEB6A8945D1AC98A1(iLocal_196[14])) && !unk_0xEB6A8945D1AC98A1(iLocal_196[15]))
						{
							unk_0x262EF6C6306BEA6C(iLocal_196[11], 453432689, -1, true, true);
							unk_0x262EF6C6306BEA6C(iLocal_196[12], -1074790547, -1, true, true);
							unk_0x262EF6C6306BEA6C(iLocal_196[13], -1074790547, -1, true, true);
							unk_0x262EF6C6306BEA6C(iLocal_196[14], -2084633992, -1, true, true);
							unk_0x262EF6C6306BEA6C(iLocal_196[15], 487013001, -1, true, true);
							unk_0xAFF39FB306F8E232(iLocal_196[iVar1], 0, 1);
							unk_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 3);
							unk_0x083F03A847B640E9(iLocal_196[iVar1], 0);
							unk_0x298903DD96203C2C(iLocal_196[iVar1], 0);
							unk_0x9FC2699ACD081EC0(iLocal_196[iVar1], 1f, 1f);
							unk_0xDD353D0E9C789D0E(&uLocal_247);
							unk_0xE20F700AC2AFCA92(0, -1159,33f, 4924,412f, 221,6576f, unk_0x16F2683693E537C9(), 2f, 1, 0,5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 6000, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(uLocal_247);
							unk_0x78ADC381772E3D54(iLocal_196[15], uLocal_247);
							unk_0xF82EA857DA10E0CD(&uLocal_247);
							unk_0xDD353D0E9C789D0E(&uLocal_247);
							unk_0xE20F700AC2AFCA92(0, -1163,279f, 4932,933f, 222,541f, unk_0x16F2683693E537C9(), 1f, 1, 0,5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x5DA3F35E3BFDEE66(0, unk_0x16F2683693E537C9(), 5000, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 7500, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(uLocal_247);
							unk_0x78ADC381772E3D54(iLocal_196[14], uLocal_247);
							unk_0xF82EA857DA10E0CD(&uLocal_247);
							unk_0xDD353D0E9C789D0E(&uLocal_247);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 2500, 0);
							unk_0x5DA3F35E3BFDEE66(0, unk_0x16F2683693E537C9(), 5000, 0);
							unk_0xE20F700AC2AFCA92(0, -1156,175f, 4926,073f, 221,3447f, unk_0x16F2683693E537C9(), 2f, 1, 0,5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 6500, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(uLocal_247);
							unk_0x78ADC381772E3D54(iLocal_196[13], uLocal_247);
							unk_0xF82EA857DA10E0CD(&uLocal_247);
							unk_0xDD353D0E9C789D0E(&uLocal_247);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 3000, 0);
							unk_0xE20F700AC2AFCA92(0, -1157,962f, 4922,196f, 221,309f, unk_0x16F2683693E537C9(), 2f, 1, 0,5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 5500, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(uLocal_247);
							unk_0x78ADC381772E3D54(iLocal_196[12], uLocal_247);
							unk_0xF82EA857DA10E0CD(&uLocal_247);
							unk_0xDD353D0E9C789D0E(&uLocal_247);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x5DA3F35E3BFDEE66(0, unk_0x16F2683693E537C9(), 10000, 0);
							unk_0xE20F700AC2AFCA92(0, -1161,475f, 4916,061f, 220,5658f, unk_0x16F2683693E537C9(), 2f, 1, 0,5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 4500, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(uLocal_247);
							unk_0x78ADC381772E3D54(iLocal_196[11], uLocal_247);
							unk_0xF82EA857DA10E0CD(&uLocal_247);
							unk_0xFADC0A217229F6B5(iLocal_196[iVar1], 1);
							unk_0x9DD8618CA5BF832D(iLocal_196[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0x36F2404464202779(26, 1268862154, vLocal_51[iVar1], fLocal_100[iVar1], 1, true);
						unk_0xC743BD39A24D0583(iLocal_196[iVar1], 0);
						unk_0x262EF6C6306BEA6C(iLocal_196[iVar1], 453432689, -1, true, true);
						unk_0xAFF39FB306F8E232(iLocal_196[iVar1], 50, 1);
						unk_0x3CC33E4E9CE523F4(iLocal_196[iVar1], 2);
						unk_0x083F03A847B640E9(iLocal_196[iVar1], 0);
						unk_0x23CBFFA16CA5CF45(iLocal_196[iVar1], 50f, 20);
						unk_0xB35CCEC0D4946813(iLocal_196[iVar1], 1);
						unk_0x298903DD96203C2C(iLocal_196[iVar1], 5);
						unk_0x967762C930C0C5FD(iLocal_196[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_196[iVar1], 100f);
						unk_0x29CD9554726C7577(iLocal_196[iVar1], unk_0x09AC81E49EA267F7(40, 60));
						unk_0x6C3AE6E278DB3D0E(iLocal_196[iVar1], unk_0x16F2683693E537C9(), 0, 16);
					}
					unk_0x6DF7BF67E86AAE86(iLocal_196[iVar1], iLocal_410);
					unk_0xD8F6A53F4799FAFE(iLocal_196[iVar1], func_134(unk_0x68F4C0EC296D3901(iLocal_196[iVar1], 1), func_95(unk_0xD803B885F5E47A62())));
					unk_0x11AD11297DC58CC7(iLocal_196[iVar1], 1);
					unk_0x4E885A246A9D983A(iLocal_196[iVar1], 42, true);
					uLocal_229[iVar1] = func_132(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_411, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
				func_99(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0x5D96D8530B3D0904(&iVar0, 1);
				unk_0x5D96D8530B3D0904(&iVar0, 3);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				if (!bLocal_172)
				{
					iLocal_216[0] = unk_0x2D7B5CDDF12654D2(-831529621, -1074,165f, 4897,468f, 213,2754f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, -1249748547);
					iLocal_216[1] = unk_0x2D7B5CDDF12654D2(-831529621, -1094,671f, 4892,789f, 215,0707f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, -1249748547);
					iLocal_216[2] = unk_0x2D7B5CDDF12654D2(-831529621, -1113,95f, 4904,385f, 217,6001f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, -1249748547);
					iLocal_216[3] = unk_0x2D7B5CDDF12654D2(-831529621, -1145,273f, 4907,894f, 219,9734f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, -1249748547);
				}
				iLocal_216[0] = iLocal_216[0];
				iLocal_216[1] = iLocal_216[1];
				iLocal_216[2] = iLocal_216[2];
				iLocal_216[3] = iLocal_216[3];
				iLocal_221[0] = unk_0x7707E48765093646(-1322183878, -1158,69f, 4915,709f, 220,2644f, 1, true, false);
				iLocal_221[1] = unk_0x7707E48765093646(-2022916910, -1156,246f, 4918,6f, 220,5432f, 1, true, false);
				iLocal_221[2] = unk_0x7707E48765093646(-1322183878, -1145,802f, 4931,816f, 219,9683f, 1, true, false);
				iLocal_221[3] = unk_0x7707E48765093646(-1322183878, -1133,369f, 4919,067f, 218,8385f, 1, true, false);
				iLocal_221[4] = unk_0x7707E48765093646(-1513883840, -1132,025f, 4921,483f, 218,8244f, 1, true, false);
				iLocal_221[5] = unk_0x7707E48765093646(-2022916910, -1112,66f, 4929,268f, 217,1752f, 1, true, false);
				unk_0xC023D1C4BF532815(iLocal_221[0], 12,24288f, -0,014582f, 27,06056f, 2, 1);
				unk_0xC023D1C4BF532815(iLocal_221[1], 7,733739f, 9,432779f, -2,865618f, 2, 1);
				unk_0xC023D1C4BF532815(iLocal_221[2], 3,735082f, 4,551246f, 86,30917f, 2, 1);
				unk_0xC023D1C4BF532815(iLocal_221[3], 0,240341f, 1,095195f, 36,59031f, 2, 1);
				unk_0xC023D1C4BF532815(iLocal_221[4], 7,6772f, 1,232743f, 93,27483f, 2, 1);
				unk_0xC023D1C4BF532815(iLocal_221[5], 3,367802f, -5,14387f, 97,30567f, 2, 1);
				if (func_131() < 50)
				{
					unk_0x2D35FFDA547292C4(unk_0xD803B885F5E47A62(), 0,5f, 1, 0);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_121(Global_111627))
		{
			func_118(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_121(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), -1);
					Global_111638.f_24990.f_2++;
					unk_0x5D96D8530B3D0904(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 1))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), -1);
					Global_111638.f_24990.f_3++;
					unk_0x5D96D8530B3D0904(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_119(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_120(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_122()
{
	switch (func_123(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_125(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41431);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_129();
}

void func_129()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)), 1);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	}
}

int func_130()
{
	return Global_111627;
}

int func_131()
{
	switch (func_15())
	{
		case 0:
			unk_0x6FB46C25CCB7E6D5(-589476696, &uVar0, -1);
			break;
		
		case 1:
			unk_0x6FB46C25CCB7E6D5(353703542, &uVar0, -1);
			break;
		
		case 2:
			unk_0x6FB46C25CCB7E6D5(126871459, &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_133(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_134(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_135()
{
	Global_31006 = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x440C646F2F11A2A1(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == -1569615261)
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			iVar3 = unk_0xD2AEDBB0268DF71A(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x6DCAF294E20A0072(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x9AEFFB8166364079(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0x68F4C0EC296D3901(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				if (func_139(func_140(iVar2, iVar8)))
				{
					iVar9 = unk_0xE8213142E3A84F79(func_140(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	iVar1 = unk_0x5ACD4E66C7BF0F49(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				unk_0x3599C729CF725E87(iVar1, func_140(iVar2, iVar8));
				func_137(iVar1, func_140(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x440C646F2F11A2A1(iParam0, iVar2, 0))
		{
			unk_0x8E9786E049F1EAD7(iVar1, unk_0x7DD9FDEA5DFB355E(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_137(int iParam0, int iParam1)
{
	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		unk_0x3599C729CF725E87(iParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == -684126074 || iParam0 == -966439566) || iParam0 == -1686714580) || iParam0 == 1215999497) || iParam0 == 663170192) || iParam0 == 1319990579) || iParam0 == -660892072) || iParam0 == 930927479) || iParam0 == -690308418) || iParam0 == -1828795171) || iParam0 == -1562927653) || iParam0 == 1077065191) || iParam0 == 663517359) || iParam0 == 2008591151) || iParam0 == -2052698631) || iParam0 == -1470645128) || iParam0 == -2144080721) || iParam0 == 1929467122) || iParam0 == -2052698631) || iParam0 == -971770235) || iParam0 == -287703709) || iParam0 == 1351683121) || iParam0 == -1755194916) || iParam0 == 2112683568) || iParam0 == 1062111910) || iParam0 == 146278587) || iParam0 == -494162961) || iParam0 == 2062808965) || iParam0 == 1530822070) || iParam0 == -409758110) || iParam0 == 384708672) || iParam0 == -1802258419) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_141(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, var uParam1)
{
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143()
{
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
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
	if (func_155(&Global_4270065))
	{
		if (func_153(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4270065, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_147(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4270064 - 0,5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_156(int iParam0)
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

void func_157()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0,6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0x838CC054A9235BEC(Global_40554[10], fLocal_183, 0, 1);
		unk_0x1BA7FCEAFCE8D46E(Global_40554[10], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0,6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0x838CC054A9235BEC(Global_40554[9], fLocal_182, 0, 1);
		unk_0x1BA7FCEAFCE8D46E(Global_40554[9], 4, 0, 1);
	}
}

void func_158()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0,6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0x838CC054A9235BEC(Global_40554[10], fLocal_183, 0, 1);
		unk_0x1BA7FCEAFCE8D46E(Global_40554[10], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0,6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0x838CC054A9235BEC(Global_40554[9], fLocal_182, 0, 1);
		unk_0x1BA7FCEAFCE8D46E(Global_40554[9], 4, 0, 1);
	}
}

void func_159()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(1268862154);
			unk_0x523BCC9DC80CD82F(-1448063107);
			unk_0x3F423BF5B8125A50("random@altruist_cult");
			unk_0x13896FDECC859926("AC_DELIVERED");
			unk_0x6D0C93EE4FBA9307(-1074790547, 31, 0);
			if ((((unk_0xB87F6CF6E5628C67(1268862154) && unk_0xB87F6CF6E5628C67(-1448063107)) && unk_0xB4AE0788C1587752("random@altruist_cult")) && unk_0x13896FDECC859926("AC_DELIVERED")) && unk_0x1787731C4D1D6B19(-1074790547))
			{
				if (Global_111638.f_24990.f_5 < 2)
				{
					if (Global_111638.f_24990.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0,75f;
					fLocal_184 = 0,999f;
				}
				else if (Global_111638.f_24990.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0,98f;
					fLocal_184 = 0,98f;
					unk_0x523BCC9DC80CD82F(-2022916910);
					unk_0x523BCC9DC80CD82F(-1322183878);
					unk_0x523BCC9DC80CD82F(-1513883840);
					unk_0x523BCC9DC80CD82F(-1249748547);
					if (!unk_0x39B7A3CCD2467CAB())
					{
						unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_228))
				{
					unk_0x142CC44DB769B57E(&iLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x8BCB70EB440DED83(false);
				unk_0xBFE31971E49FA500(false);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 1);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_213 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xDF1306B443CD3D15(iLocal_213, 0))
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0x728870EB733D12A1();
					if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]) && !unk_0xEB6A8945D1AC98A1(uLocal_193[1]))
					{
						unk_0xA3BF0AA5A2608191(uLocal_193[0]);
						unk_0x0A94A109271BE75A(uLocal_193[0]);
						unk_0xA3BF0AA5A2608191(uLocal_193[1]);
						unk_0x0A94A109271BE75A(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_213))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_213))
				{
					unk_0x73270B3C9CC833FD(iLocal_213, true, 0);
				}
				if (unk_0x5A91F08DF773C39D(iLocal_213, vLocal_120, 13f, 13f, 13f, 0, true, 0))
				{
					unk_0xA47B46945FF6DE74(iLocal_213, -1028,415f, 4924,863f, 205,9386f, 0, false, 0, 1);
					if (!unk_0x437347B10A200C4B(iLocal_213, 0))
					{
						unk_0xD8F6A53F4799FAFE(iLocal_213, 149,8882f);
						unk_0xB9FD7450C0DAB575(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x536F1BE96C726C4B(vLocal_120, 12f, 1, 0, 0, false);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1035,625f, 4915,152f, 205,5761f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 128,2065f);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]) && !unk_0xEB6A8945D1AC98A1(uLocal_193[1]))
			{
				unk_0xA47B46945FF6DE74(uLocal_193[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(uLocal_193[0], 128,2065f);
				unk_0xA47B46945FF6DE74(uLocal_193[1], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 1f, 0f), 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(uLocal_193[1], 128,2065f);
			}
			iLocal_196[0] = unk_0x36F2404464202779(26, 1268862154, -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, true);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_111638.f_24990.f_5 >= 2)
			{
				iLocal_196[1] = unk_0x36F2404464202779(26, 1268862154, -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, true);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0x11AD11297DC58CC7(iLocal_196[0], 1);
			iLocal_215 = unk_0x5ACD4E66C7BF0F49(-1074790547, -1, unk_0x68F4C0EC296D3901(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x9F528B1B53FBC5D9(iLocal_215, iLocal_196[0], unk_0x4A089F2B762B8D33(iLocal_196[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1);
			if (Global_111638.f_24990.f_5 < 2)
			{
				iLocal_214 = unk_0x7707E48765093646(-1448063107, vLocal_117, 1, true, false);
				unk_0x9F528B1B53FBC5D9(iLocal_214, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_111638.f_24990.f_5 >= 2)
			{
				unk_0x262EF6C6306BEA6C(iLocal_196[1], -1074790547, -1, true, true);
			}
			iLocal_246 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_188 = unk_0xE9744DB7B8CA6965(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x915804B434753CBD(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111638.f_24990.f_5 >= 2)
			{
				unk_0x915804B434753CBD(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x93E9ED66DAB9FBE3(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]) && !unk_0xEB6A8945D1AC98A1(uLocal_193[1]))
			{
				unk_0x915804B434753CBD(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x915804B434753CBD(uLocal_193[1], iLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[0]))
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[1]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[1]))
				{
					func_182(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[0]))
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[1]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[1]))
				{
					func_182(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_111638.f_24990.f_5 < 2)
			{
				func_135();
				if (unk_0xC844350D5D58C99A(iLocal_196[0]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_196[0]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_196[1]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_196[1]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_214))
				{
					unk_0xF690C84DADBB3551(&iLocal_214);
				}
				if (unk_0xC844350D5D58C99A(iLocal_215))
				{
					unk_0xF690C84DADBB3551(&iLocal_215);
				}
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
				unk_0xE3BB8E05FCEB3FBE(iLocal_246, false);
				func_23(0, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x8BCB70EB440DED83(true);
				unk_0xBFE31971E49FA500(true);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0);
				unk_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			unk_0xC92DB9682A650680("AC_DONE");
			Global_111638.f_24990.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_161(func_181(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_180();
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
					func_179(99, 1);
					func_178(-656546900, iParam3);
					break;
				
				case 1:
					func_178(-2098183071, iParam3);
					break;
				
				case 2:
					func_178(1578119842, iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
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
							func_178(-1190521599, iParam3);
							break;
						
						case 1:
							func_178(490143716, iParam3);
							break;
						
						case 2:
							func_178(121069433, iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(219506691, iParam3);
							break;
						
						case 1:
							func_178(1871505786, iParam3);
							break;
						
						case 2:
							func_178(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(27639974, iParam3);
							break;
						
						case 1:
							func_178(422258364, iParam3);
							break;
						
						case 2:
							func_178(316202960, iParam3);
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
							func_178(1806738963, iParam3);
							break;
						
						case 1:
							func_178(1576781520, iParam3);
							break;
						
						case 2:
							func_178(671882196, iParam3);
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
									func_178(408653638, iParam3);
									break;
								
								case 1:
									func_178(-424799277, iParam3);
									break;
								
								case 2:
									func_178(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_178(2038531975, iParam3);
									break;
								
								case 1:
									func_178(-572903575, iParam3);
									break;
								
								case 2:
									func_178(-953947924, iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_178(-445823242, iParam3);
									break;
								
								case 1:
									func_178(-1386757215, iParam3);
									break;
								
								case 2:
									func_178(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_178(-1744069936, iParam3);
									break;
								
								case 1:
									func_178(799609312, iParam3);
									break;
								
								case 2:
									func_178(181688102, iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(iVar1);
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
					func_178(-330339780, iParam3);
					break;
				
				case 1:
					func_178(1697564429, iParam3);
					break;
				
				case 2:
					func_178(1674823841, iParam3);
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
	func_163(iParam0);
	if (Global_41431 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
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

void func_164(int iParam0)
{
	if (iParam0 == 8)
	{
		func_169(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_169(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_169(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_169(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_167(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_167(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_167(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_167(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_166()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_166()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_165(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_165(int iParam0)
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

int func_166()
{
	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_168(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_170(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

bool func_171(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_173(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_172(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_172(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_172(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_172(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_172(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_172(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_166()].f_6174.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_168(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_175(iParam0, iParam1);
	uVar2 = func_174(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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

int func_176(bool bParam0)
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
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_177(int iParam0, int iParam1)
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

void func_178(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)
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

void func_180()
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

int func_181(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

void func_182(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_183(iParam3), 0);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_19671 = 0;
	func_185();
}

void func_185()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_186(int iParam0)
{
	Global_21816 = iParam0;
}

int func_187()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(1268862154);
			unk_0x523BCC9DC80CD82F(-1448063107);
			unk_0x3F423BF5B8125A50("random@altruist_cult");
			unk_0x13896FDECC859926("AC_DELIVERED");
			unk_0x6D0C93EE4FBA9307(-1074790547, 31, 0);
			if ((((unk_0xB87F6CF6E5628C67(1268862154) && unk_0xB87F6CF6E5628C67(-1448063107)) && unk_0xB4AE0788C1587752("random@altruist_cult")) && unk_0x13896FDECC859926("AC_DELIVERED")) && unk_0x1787731C4D1D6B19(-1074790547))
			{
				if (Global_111638.f_24990.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0,8f;
					fLocal_184 = 0,968f;
				}
				else if (Global_111638.f_24990.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0,77f;
					fLocal_184 = 0,999f;
				}
				else if (Global_111638.f_24990.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0,77f;
					fLocal_184 = 0,999f;
				}
				else if (Global_111638.f_24990.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0,98f;
					fLocal_184 = 0,98f;
					unk_0x523BCC9DC80CD82F(-2022916910);
					unk_0x523BCC9DC80CD82F(-1322183878);
					unk_0x523BCC9DC80CD82F(-1513883840);
					unk_0x523BCC9DC80CD82F(-1249748547);
					if (!unk_0x39B7A3CCD2467CAB())
					{
						unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_228))
				{
					unk_0x142CC44DB769B57E(&iLocal_228);
				}
				func_23(1, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x8BCB70EB440DED83(false);
				unk_0xBFE31971E49FA500(false);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 1);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_213 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xDF1306B443CD3D15(iLocal_213, 0))
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0x728870EB733D12A1();
					if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
					{
						unk_0xA3BF0AA5A2608191(uLocal_193[0]);
						unk_0x0A94A109271BE75A(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_213))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_213))
				{
					unk_0x73270B3C9CC833FD(iLocal_213, true, 0);
				}
				if (unk_0x5A91F08DF773C39D(iLocal_213, vLocal_120, 13f, 13f, 13f, 0, true, 0))
				{
					unk_0xA47B46945FF6DE74(iLocal_213, -1028,415f, 4924,863f, 205,9386f, 0, false, 0, 1);
					if (!unk_0x437347B10A200C4B(iLocal_213, 0))
					{
						unk_0xD8F6A53F4799FAFE(iLocal_213, 149,8882f);
						unk_0xB9FD7450C0DAB575(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x536F1BE96C726C4B(vLocal_120, 12f, 1, 0, 0, false);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1035,625f, 4915,152f, 205,5761f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 128,2065f);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				unk_0xA47B46945FF6DE74(uLocal_193[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(uLocal_193[0], 128,2065f);
			}
			iLocal_196[0] = unk_0x36F2404464202779(26, 1268862154, -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, true);
			func_99(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_111638.f_24990.f_5 >= 3)
			{
				iLocal_196[1] = unk_0x36F2404464202779(26, 1268862154, -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, true);
				func_99(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_411, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			func_99(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
			{
				func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			settimerb(0);
			unk_0x11AD11297DC58CC7(iLocal_196[0], 1);
			iLocal_214 = unk_0x7707E48765093646(-1448063107, vLocal_117, 1, true, false);
			iLocal_215 = unk_0x5ACD4E66C7BF0F49(-1074790547, -1, unk_0x68F4C0EC296D3901(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x9F528B1B53FBC5D9(iLocal_215, iLocal_196[0], unk_0x4A089F2B762B8D33(iLocal_196[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1);
			if (Global_111638.f_24990.f_5 < 3)
			{
				if (Global_111638.f_24990.f_5 == 0)
				{
					unk_0x9F528B1B53FBC5D9(iLocal_214, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x9F528B1B53FBC5D9(iLocal_214, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_111638.f_24990.f_5 >= 3)
			{
				unk_0x262EF6C6306BEA6C(iLocal_196[1], -1074790547, -1, true, true);
			}
			iLocal_246 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_188 = unk_0xE9744DB7B8CA6965(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x915804B434753CBD(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111638.f_24990.f_5 >= 3)
			{
				unk_0x915804B434753CBD(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x93E9ED66DAB9FBE3(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				unk_0x915804B434753CBD(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[0]))
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_111638.f_24990.f_5 == 1 || Global_111638.f_24990.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_193[0]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_193[0]))
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_111638.f_24990.f_5 == 1 || Global_111638.f_24990.f_5 == 2)
			{
				if ((unk_0xA45992A6CE82FB43(iLocal_188) > 0,9742857f && !iLocal_181) && unk_0x6C3F127AAF415E69() == 4)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
					unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_111638.f_24990.f_5 < 3)
			{
				if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
				{
					func_135();
					if (unk_0xC844350D5D58C99A(iLocal_196[0]))
					{
						unk_0xEBA53F35D0085654(&(iLocal_196[0]));
					}
					if (unk_0xC844350D5D58C99A(iLocal_196[1]))
					{
						unk_0xEBA53F35D0085654(&(iLocal_196[1]));
					}
				}
				else
				{
					settimerb(0);
					if (unk_0xC844350D5D58C99A(iLocal_196[0]))
					{
						unk_0x4A4806F9D471E491(iLocal_196[0], false, 0);
					}
					if (unk_0xC844350D5D58C99A(iLocal_196[1]))
					{
						unk_0x4A4806F9D471E491(iLocal_196[1], false, 0);
					}
					if (unk_0xC844350D5D58C99A(uLocal_193[0]))
					{
						unk_0x4A4806F9D471E491(uLocal_193[0], false, 0);
					}
					iLocal_189++;
				}
				if (unk_0xC844350D5D58C99A(iLocal_214))
				{
					unk_0xF690C84DADBB3551(&iLocal_214);
				}
				if (unk_0xC844350D5D58C99A(iLocal_215))
				{
					unk_0xF690C84DADBB3551(&iLocal_215);
				}
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				if (Global_111638.f_24990.f_5 == 0)
				{
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
					unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x7F8A39872A07D2CE(sLocal_408, "cult_p4_cam"))
				{
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
				}
				unk_0xE3BB8E05FCEB3FBE(iLocal_246, false);
				func_23(0, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x8BCB70EB440DED83(true);
				unk_0xBFE31971E49FA500(true);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0);
				unk_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_111638.f_24990.f_5 != 1 && Global_111638.f_24990.f_5 != 2)
			{
				unk_0xC92DB9682A650680("AC_DONE");
				Global_111638.f_24990.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || timerb() > 7000)
			{
				func_135();
				if (unk_0xC844350D5D58C99A(iLocal_196[0]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_196[0]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_196[1]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_196[1]));
				}
				unk_0xC92DB9682A650680("AC_DONE");
				Global_111638.f_24990.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (unk_0x7AEFFBD77F2CF1EC(func_190()))
			{
				unk_0xF5BDC0FED0F08D25(func_190(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0x9B50A0F7FCCD175C(func_190(), 0);
					if (unk_0x5A91F08DF773C39D(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, true, 0))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
							{
								unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10,5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0x9B50A0F7FCCD175C(func_190(), 0);
					uLocal_193[1] = unk_0x9B50A0F7FCCD175C(func_190(), 1);
					if (unk_0x5A91F08DF773C39D(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, true, 0) && unk_0x5A91F08DF773C39D(uLocal_193[1], vLocal_120, 5f, 5f, 5f, 0, true, 0))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
							{
								unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10,5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_190()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

bool func_191()
{
	return Global_31005;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x7D6CA5F52B3748BF(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x0EB28750412C3A5A(func_95(unk_0xD803B885F5E47A62()), vLocal_117, 1) < 209f)
		{
			wait(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x256517DE1B6755D4(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				unk_0x0E2400AB9174FA81(5, 2017343592, 1862763509);
			}
			else if (func_193())
			{
				unk_0x0E2400AB9174FA81(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x256517DE1B6755D4(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()) && unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())))
				{
					unk_0x0E2400AB9174FA81(5, 2017343592, 1862763509);
				}
			}
			else if (func_193())
			{
				unk_0x0E2400AB9174FA81(5, 2017343592, 1862763509);
			}
			else if (unk_0x256517DE1B6755D4(2017343592, 1862763509) != 1)
			{
				unk_0x0E2400AB9174FA81(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_194())
	{
		if (iLocal_179)
		{
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 3))
			{
				unk_0xC92DB9682A650680("AC_START");
			}
			unk_0x51B096AAC60548C1(0f);
			unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0xBF75E4DF4C367CD9(Global_40554[9].f_2, 6f, Global_40554[9].f_5, 0))
			{
				unk_0x6DA3AC47D5DB9EED(Global_40554[9].f_5, Global_40554[9].f_2, 0, 0f, 0);
			}
			if (unk_0xBF75E4DF4C367CD9(Global_40554[10].f_2, 6f, Global_40554[10].f_5, 0))
			{
				unk_0x6DA3AC47D5DB9EED(Global_40554[10].f_5, Global_40554[10].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0x7E369B13C7215476())
		{
			unk_0xC92DB9682A650680("AC_END");
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_157();
		}
		iLocal_179 = 1;
	}
}

int func_193()
{
	if ((((((unk_0x53129655DBEDC6EA(vLocal_123, vLocal_126, fLocal_129, 1) || unk_0x53129655DBEDC6EA(vLocal_130, vLocal_133, fLocal_136, 1)) || unk_0x53129655DBEDC6EA(vLocal_137, vLocal_140, fLocal_143, 1)) || unk_0x53129655DBEDC6EA(vLocal_144, vLocal_147, fLocal_150, 1)) || unk_0x53129655DBEDC6EA(vLocal_151, vLocal_154, fLocal_157, 1)) || unk_0x53129655DBEDC6EA(vLocal_158, vLocal_161, fLocal_164, 1)) || unk_0x53129655DBEDC6EA(vLocal_165, vLocal_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if ((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_123, vLocal_126, fLocal_129, 0, 1, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_130, vLocal_133, fLocal_136, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_137, vLocal_140, fLocal_143, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_144, vLocal_147, fLocal_150, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_151, vLocal_154, fLocal_157, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_158, vLocal_161, fLocal_164, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_165, vLocal_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	unk_0x0E2400AB9174FA81(255, 2017343592, 1862763509);
	if (Global_111638.f_24990.f_5 >= iLocal_192 && Global_111638.f_24990.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_197(&iLocal_249);
			Global_94001 = 0;
			Global_94002 = 0;
			Global_94003 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0x2C84016B4A95F6BA(1);
			unk_0x65C5EBCA17A891FC(0);
			unk_0x4DB69487E1A9EE2A(0);
			func_3(0);
			unk_0x51B096AAC60548C1(1f);
			unk_0x15EA7F4313456B1D(3, 1);
			unk_0x15EA7F4313456B1D(5, 1);
			unk_0x96D521DDDB9AD218();
			iLocal_179 = 0;
			func_96();
			Global_111638.f_24990.f_5 = (iLocal_192 - 1);
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else
	{
		unk_0xB547E3FFEB27073E();
		func_197(&iLocal_249);
		Global_94001 = 0;
		Global_94002 = 0;
		Global_94003 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0x2C84016B4A95F6BA(1);
		unk_0x65C5EBCA17A891FC(0);
		unk_0x4DB69487E1A9EE2A(0);
		func_3(0);
		if (unk_0x83D8570832F172A7(iLocal_399))
		{
			unk_0xE17FDF9E3068281B(&iLocal_399);
			func_98(0);
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x15EA7F4313456B1D(3, 1);
		unk_0x15EA7F4313456B1D(5, 1);
		unk_0x96D521DDDB9AD218();
		iLocal_179 = 0;
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_197(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

