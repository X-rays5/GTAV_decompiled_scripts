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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	if (!func_183(&iLocal_179))
	{
		func_182(&iLocal_179);
	}
	bVar2 = false;
	while (!bVar0)
	{
		wait(0);
		if (func_173())
		{
			func_170();
		}
		if ((unk_0x1C0640BA9A7327B3() % 1000) > 50)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if ((!func_169(unk_0xA30EC016B12C03E4()) && func_154(unk_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) || func_152(unk_0xD803B885F5E47A62()))
		{
			if (func_151(unk_0xA30EC016B12C03E4()))
			{
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28 != -1)
				{
					iVar1 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28;
					bVar0 = true;
					func_150(&iLocal_179);
				}
				else if (bVar2)
				{
				}
			}
			else if (func_152(unk_0xD803B885F5E47A62()))
			{
				bVar0 = true;
				func_150(&iLocal_179);
			}
			else if (bVar2)
			{
			}
		}
		if (!bVar0 && func_149(&iLocal_179) >= 25f)
		{
			func_170();
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		func_140();
	}
	else
	{
		func_170();
	}
	iLocal_199 = unk_0x57270EE11514DC67();
	Local_214.f_6 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_29;
	if (func_138(unk_0xD803B885F5E47A62()))
	{
		Local_214.f_6 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6 + 32;
	}
	func_136(&(Local_214.f_5));
	func_135(&(Local_214.f_5));
	func_134(&uLocal_87);
	func_132(0, -1, 0);
	func_131(&vLocal_210);
	iLocal_82 = 0;
	func_130(&uLocal_200, &uLocal_204);
	Local_221.f_13 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_29;
	if (func_129(iVar1, 91))
	{
		iLocal_313 = 0;
	}
	else if (func_129(iVar1, 97))
	{
		iLocal_313 = 1;
	}
	else if (func_152(unk_0xD803B885F5E47A62()))
	{
		Local_221.f_13 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6 + 32;
		iLocal_313 = 2;
	}
	func_126(&Local_323, iLocal_313);
	func_125(&uLocal_87, &Local_323);
	Global_4456448.f_197232 = 1;
	Global_4456448.f_197233 = uLocal_204[iLocal_198];
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_214.f_5, iVar3))
		{
			func_124(&uLocal_87, iVar3, 3f);
		}
		iVar3++;
	}
	while (true)
	{
		wait(0);
		if (func_173())
		{
			func_170();
		}
		if (!func_169(unk_0xA30EC016B12C03E4()))
		{
			if ((((!func_154(unk_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && !func_151(unk_0xA30EC016B12C03E4())) && !unk_0x433E615D274A2FC6(unk_0xA30EC016B12C03E4())) && !func_152(unk_0xD803B885F5E47A62())) && Local_369[unk_0x57270EE11514DC67()].f_4 < 6)
			{
				if (func_123(&(Local_369[unk_0x57270EE11514DC67()]), 6))
				{
					if ((unk_0x1C0640BA9A7327B3() % 3000) > 50)
					{
					}
				}
			}
		}
		switch (Local_369[unk_0x57270EE11514DC67()].f_2)
		{
			case 0:
				if (func_122() == 1)
				{
					Local_369[unk_0x57270EE11514DC67()].f_2 = 1;
				}
				else if (func_122() == 4)
				{
					Local_369[unk_0x57270EE11514DC67()].f_2 = 3;
				}
				break;
			
			case 1:
				if (func_122() == 1)
				{
					func_25(&Local_221, &uLocal_236, &uLocal_87);
				}
				else if (func_122() == 4)
				{
					Local_369[unk_0x57270EE11514DC67()].f_2 = 3;
				}
				break;
			
			case 3:
				if (func_24(&(Local_243.f_8)))
				{
					Local_369[unk_0x57270EE11514DC67()].f_2 = 4;
				}
				break;
			
			case 2:
				Local_369[unk_0x57270EE11514DC67()].f_2 = 4;
			
			case 4:
				func_170();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_122())
			{
				case 0:
					Local_243.f_4 = 1;
					break;
				
				case 1:
					func_2();
					if (func_1())
					{
						Local_243.f_4 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	return 0;
}

void func_2()
{
	func_3();
	switch (Local_243.f_7)
	{
		case 0:
			break;
		
		case 4:
			break;
		
		case 6:
			break;
	}
}

void func_3()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < unk_0xDFB2BAED99ED0A2E(1))
	{
		switch (unk_0xB98DB26FBF676FA1(1, iVar2))
		{
			case 174:
				Local_104 = 589125870;
				if (func_23(iVar2, &Local_104, 1))
				{
					switch (Local_104)
					{
						case 575251425:
							iVar0 = Local_104.f_3;
							iVar1 = Local_104.f_4;
							break;
						
						case -844166385:
							if (func_22(Local_104.f_2, 1))
							{
								if (iLocal_366[Local_104.f_3] <= Local_323[Local_104.f_3].f_11)
								{
									func_21(Local_104.f_4, Local_104.f_3, 1);
								}
								else
								{
									func_21(Local_104.f_4, Local_104.f_3, 0);
								}
							}
							break;
						}
				}
				break;
		}
		iVar2++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iLocal_366[iVar4] = func_20(&Local_369, iVar4);
		bVar6 = false;
		bVar7 = false;
		iVar3 = 0;
		while (iVar3 < unk_0x54EABC0DD106045B())
		{
			iVar5 = unk_0xF4FB3A22FC4991C8(iVar3);
			if (unk_0x81A93C8315C28F58(iVar5))
			{
				if ((func_19(&(Local_369[iVar3]), 1) && func_19(&(Local_369[iVar3]), 7)) && Local_369[iVar3].f_1 == iVar4)
				{
					bVar7 = true;
				}
				if (iLocal_366[iVar4] > Local_323[iVar4].f_11)
				{
					if (!bVar6)
					{
						if (Local_369[iVar3].f_1 == iVar4 && func_19(&(Local_369[iVar3]), 1))
						{
							func_18(1764980958, unk_0x4B2BFE4A3BC248ED(iVar5), iVar4);
							bVar6 = true;
						}
					}
				}
			}
			iVar3++;
		}
		func_17(&(Local_243.f_3), iVar4, bVar7);
		func_17(&(Local_243.f_1), iVar4, iLocal_366[iVar4] < Local_323[iVar4].f_11);
		func_17(&(Local_243.f_2), iVar4, iLocal_366[iVar4] >= Local_323[iVar4].f_10);
		if (iLocal_366[iVar4] > 0)
		{
			if (!func_183(&iLocal_320))
			{
				func_16(&iLocal_320, 1f);
			}
			else if (func_14(&iLocal_320) >= 1f)
			{
				func_11(&iLocal_320);
				iVar8 = -1;
				bVar9 = false;
				iVar3 = 0;
				while (iVar3 < unk_0x54EABC0DD106045B())
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar3)))
					{
						if (Local_369[iVar3].f_1 == iVar4 && func_19(&(Local_369[iVar3]), 1))
						{
							iVar8 = iVar3;
							if (func_19(&(Local_369[iVar3]), 0))
							{
								bVar9 = true;
							}
						}
						else
						{
							switch (iVar4)
							{
								case 0:
									if (unk_0xEAE0D21A50E6C7F4(Local_243.f_5, iVar3))
									{
										unk_0x0674E58A79778E99(&(Local_243.f_5), iVar3);
									}
									break;
								
								case 1:
									if (unk_0xEAE0D21A50E6C7F4(Local_243.f_6, iVar3))
									{
										unk_0x0674E58A79778E99(&(Local_243.f_6), iVar3);
									}
									break;
								}
							}
					}
					iVar3++;
				}
				if (!bVar9)
				{
					if (!func_10(iVar4, &Local_243, iVar8))
					{
					}
				}
			}
		}
		if (iVar4 == iVar0)
		{
			if (iLocal_366[iVar4] >= Local_323[iVar4].f_10)
			{
				func_9(&Local_110, iLocal_313, iVar4);
				iVar10 = func_7(&Local_369, Local_110, iVar4);
				iVar11 = 0;
				iVar12 = Local_323[iVar4].f_11;
				iVar13 = unk_0x09AC81E49EA267F7(0, 65535);
				iVar3 = 0;
				while (iVar3 < unk_0x54EABC0DD106045B())
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar3)))
					{
						iVar14 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar3));
						if (func_19(&(Local_369[iVar3]), 1) && Local_369[iVar3].f_1 == iVar4)
						{
							if (iVar11 <= iVar12)
							{
								bVar15 = false;
								if (iVar14 == iVar1)
								{
									bVar15 = true;
									if (iVar10 == -1)
									{
										iVar10 = iVar14;
									}
								}
								bVar16 = false;
								if (iVar10 == iVar14)
								{
									bVar16 = true;
								}
								func_4(iVar13, iVar14, iVar4, 0, bVar15, bVar16);
								iVar11++;
							}
						}
					}
					iVar3++;
				}
			}
		}
		iVar4++;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	Var0 = -849785785;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	func_6(&(Var0.f_2), 4, bParam3);
	func_6(&(Var0.f_2), 2, bParam4);
	func_6(&(Var0.f_2), 5, bParam5);
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_5 = iParam0;
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_5(iParam1));
}

var func_5(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_6(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x5D96D8530B3D0904(iParam0, iParam1);
		}
	}
	else if (bVar0)
	{
		unk_0x0674E58A79778E99(iParam0, iParam1);
	}
}

int func_7(var uParam0, struct<13>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, int iParam61)
{
	iVar0 = -1;
	fVar1 = 0f;
	iVar4 = 0;
	while (iVar4 < unk_0x54EABC0DD106045B())
	{
		iVar5 = unk_0xF4FB3A22FC4991C8(iVar4);
		if (unk_0x81A93C8315C28F58(iVar5))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar4));
			if (uParam0[iVar4]->f_1 == iParam61 && func_19(uParam0[iVar4], 1))
			{
				iVar3 = unk_0x9539D44F3E4492F6(iVar2);
				if (func_8(iVar3))
				{
					if (func_8(iVar3))
					{
						if (iVar0 == -1)
						{
							iVar0 = iVar4;
							fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iVar3, true), Param1[0], true);
						}
						else
						{
							fVar6 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iVar3, true), Param1[0], true);
							if (fVar6 < fVar1)
							{
								fVar1 = fVar6;
								iVar0 = iVar4;
							}
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 >= 0)
	{
		iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
	}
	return iVar2;
}

int func_8(int iParam0)
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

void func_9(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1119,064f, -3156,995f, -36,56f };
					uParam0->f_56 = { 0,8f, 0,8f, 0,8f };
					*uParam0[0] = { 1117,34f, -3156,68f, -37,0669f };
					uParam0[0]->f_4 = { 1119,88f, -3157,026f, -36,3397f };
					uParam0[0]->f_7 = { 1f, 1f, 1f };
					uParam0[0]->f_10 = "";
					uParam0[0]->f_11 = "darts_ig_idle_guy1";
					uParam0[0]->f_12 = "";
					*uParam0[1] = { 1117,34f, -3157,38f, -38,0669f };
					uParam0[1]->f_4 = { 1119,88f, -3157,026f, -36,3397f };
					uParam0[1]->f_4 = { 1f, 1f, 1f };
					uParam0[1]->f_10 = "";
					uParam0[1]->f_11 = "darts_ig_idle_guy1";
					uParam0[1]->f_12 = "";
					break;
				
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1116,5f, -3153,27f, -36,56f };
					uParam0->f_56 = { 1,2f, 1,2f, 1,2f };
					*uParam0[0] = { 1115,92f, -3153,15f, -37,036f };
					uParam0[0]->f_4 = { 1116,51f, -3153,28f, -37,569f };
					uParam0[0]->f_7 = { 0,5f, 0,5f, 1f };
					uParam0[0]->f_10 = "";
					uParam0[0]->f_11 = "base";
					uParam0[0]->f_12 = "";
					*uParam0[1] = { 1117,11f, -3153,4f, -37,036f };
					uParam0[1]->f_4 = { 1116,51f, -3153,28f, -37,569f };
					uParam0[1]->f_7 = { 0,5f, 0,5f, 1f };
					uParam0[1]->f_10 = "";
					uParam0[1]->f_11 = "base";
					uParam0[1]->f_12 = "";
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1000,851f, -3163,978f, -34,0646f };
					uParam0->f_56 = { 0,8f, 0,8f, 0,8f };
					*uParam0[0] = { 1000,59f, -3165,35f, -35,054f };
					uParam0[0]->f_4 = { 1000,93f, -3162,82f, -33,4827f };
					uParam0[0]->f_7 = { 1f, 1f, 1f };
					uParam0[0]->f_10 = "";
					uParam0[0]->f_11 = "darts_ig_idle_guy1";
					uParam0[0]->f_12 = "";
					*uParam0[1] = { 1001,28f, -3165,35f, -35,054f };
					uParam0[1]->f_4 = { 1000,93f, -3162,82f, -33,4827f };
					uParam0[1]->f_10 = "";
					uParam0[1]->f_11 = "darts_ig_idle_guy1";
					uParam0[1]->f_12 = "";
					break;
				
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1003,23f, -3165,73f, -34,0646f };
					uParam0->f_56 = { 1,2f, 1,2f, 1,2f };
					*uParam0[0] = { 1003,35f, -3165,14f, -34,0646f };
					uParam0[0]->f_4 = { 1003,23f, -3165,74f, -34,5976f };
					uParam0[0]->f_7 = { 0,5f, 0,5f, 1f };
					uParam0[0]->f_10 = "";
					uParam0[0]->f_11 = "base";
					uParam0[0]->f_12 = "";
					*uParam0[1] = { 1003,11f, -3166,33f, -34,0646f };
					uParam0[1]->f_4 = { 1003,23f, -3165,74f, -34,5976f };
					uParam0[1]->f_7 = { 0,5f, 0,5f, 1f };
					uParam0[1]->f_10 = "";
					uParam0[1]->f_11 = "base";
					uParam0[1]->f_12 = "";
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 2708,47f, -358,8301f, -55,0523f };
					uParam0->f_56 = { 0,8f, 0,8f, 0,8f };
					*uParam0[0] = { 2708,21f, -360,2018f, -56,0417f };
					uParam0[0]->f_4 = { 2708,55f, -357,6718f, -54,4704f };
					uParam0[0]->f_7 = { 1f, 1f, 1f };
					uParam0[0]->f_10 = "";
					uParam0[0]->f_11 = "darts_ig_idle_guy1";
					uParam0[0]->f_12 = "";
					*uParam0[1] = { 2708,9f, -360,2018f, -56,0417f };
					uParam0[1]->f_4 = { 2708,55f, -357,6718f, -54,4704f };
					uParam0[1]->f_7 = { 1f, 1f, 1f };
					uParam0[1]->f_10 = "";
					uParam0[1]->f_11 = "darts_ig_idle_guy1";
					uParam0[1]->f_12 = "";
					break;
			}
			break;
	}
}

int func_10(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			if (func_17(&(uParam1->f_5), iParam2, 1))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_17(&(uParam1->f_6), iParam2, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_11(int iParam0)
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_13(bool bParam0)
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

float func_14(int iParam0)
{
	if (func_183(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_15(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_16(int iParam0, float fParam1)
{
	if (!func_183(iParam0))
	{
		func_12(iParam0, fParam1);
	}
}

int func_17(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x5D96D8530B3D0904(iParam0, iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0x0674E58A79778E99(iParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	Var0 = iParam0;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_5(iParam1));
}

bool func_19(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_3, iParam1);
}

int func_20(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		iVar2 = unk_0xF4FB3A22FC4991C8(iVar1);
		if (unk_0x81A93C8315C28F58(iVar2))
		{
			iVar3 = unk_0x4B2BFE4A3BC248ED(iVar2);
			if (unk_0x40B8C182D63932FC(iVar3))
			{
				if (iParam1 >= 0 && iParam1 <= 1)
				{
					if (iParam1 == uParam0[iVar1]->f_1)
					{
						if (func_19(uParam0[iVar1], 1))
						{
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_21(int iParam0, var uParam1, bool bParam2)
{
	Var0 = -991724954;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	func_6(&(Var0.f_2), 0, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = iParam0;
	Var0.f_3 = uParam1;
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_5(iParam0));
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x218F818E64020C17(1, iParam0, iParam1, 6))
	{
		if (func_22(iParam1->f_2, 3) == iParam2)
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

int func_24(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
	{
		if (func_121(unk_0xA30EC016B12C03E4()))
		{
			func_123(&(Local_369[unk_0x57270EE11514DC67()]), 5);
		}
	}
	func_120(&Local_369, &Local_214, uParam2, &Local_323);
	func_117(uParam2);
	switch (Local_369[unk_0x57270EE11514DC67()].f_4)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(Local_369[unk_0x57270EE11514DC67()].f_3, 2))
			{
				func_46(uParam1, uParam0, &Local_214);
			}
			if (func_45(&(Local_369[unk_0x57270EE11514DC67()].f_3), 8))
			{
				if (!func_183(&iLocal_185))
				{
					func_182(&iLocal_185);
				}
				else if (func_14(&iLocal_185) >= 4f)
				{
					func_44(&(Local_369[unk_0x57270EE11514DC67()]), 8, 0);
					func_44(&(Local_369[unk_0x57270EE11514DC67()]), 2, 0);
					func_44(&(Local_369[unk_0x57270EE11514DC67()]), 7, 0);
					func_43(&(Local_369[unk_0x57270EE11514DC67()]), -1);
					func_42(&(Local_369[unk_0x57270EE11514DC67()]));
					func_123(&(Local_369[unk_0x57270EE11514DC67()]), 0);
					func_41(&Local_214, 0);
					func_38(&iLocal_197);
					func_11(&iLocal_170);
					func_150(&iLocal_185);
				}
			}
			break;
		
		case 1:
			if (Local_369[unk_0x57270EE11514DC67()].f_1 >= 0)
			{
				if (!unk_0xEA6BC48857E0AC4C(Local_214.f_3))
				{
					if (unk_0x1FBF08B001C4788A(Local_214.f_3))
					{
						func_123(&(Local_369[unk_0x57270EE11514DC67()]), 2);
					}
					else if (unk_0x59F00CC3C33B17AD(Local_214.f_3))
					{
						unk_0x92DCE5C81176D2B4(Local_214.f_3);
					}
				}
			}
			else
			{
				if (func_183(&iLocal_185))
				{
					func_150(&iLocal_185);
				}
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 8, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 2, 0);
				func_123(&(Local_369[unk_0x57270EE11514DC67()]), 0);
			}
			break;
		
		case 2:
			if (!func_183(&iLocal_176))
			{
				func_182(&iLocal_176);
			}
			if (func_183(&iLocal_185))
			{
				func_150(&iLocal_185);
			}
			func_44(&(Local_369[unk_0x57270EE11514DC67()]), 8, 0);
			func_44(&(Local_369[unk_0x57270EE11514DC67()]), 7, 1);
			iLocal_86 = 1;
			if (!func_19(&(Local_369[unk_0x57270EE11514DC67()]), 0) && !unk_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 0, 0))
			{
				iLocal_86 = 0;
				if (func_14(&iLocal_176) >= 30f)
				{
					func_123(&(Local_369[unk_0x57270EE11514DC67()]), 4);
				}
			}
			if (iLocal_86)
			{
				if (Local_369[unk_0x57270EE11514DC67()].f_1 == 0)
				{
				}
				if (func_35(Local_214.f_3, 8344, Local_214.f_6, 0, func_19(&(Local_369[unk_0x57270EE11514DC67()]), 0), func_19(&(Local_369[unk_0x57270EE11514DC67()]), 5)))
				{
					func_150(&iLocal_170);
					func_150(&iLocal_182);
					iLocal_85 = 0;
					func_44(&(Local_369[unk_0x57270EE11514DC67()]), 3, 0);
					func_44(&(Local_369[unk_0x57270EE11514DC67()]), 6, 0);
					func_17(&iLocal_197, 2, 0);
					iLocal_86 = 0;
					func_123(&(Local_369[unk_0x57270EE11514DC67()]), 3);
				}
			}
			break;
		
		case 3:
			if (!func_183(&iLocal_182))
			{
				func_182(&iLocal_182);
				iLocal_85 = 0;
			}
			else if (func_14(&iLocal_182) >= 30f)
			{
				iLocal_85 = 1;
			}
			if (!unk_0xEA6BC48857E0AC4C(Local_214.f_3))
			{
				if (unk_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 1, 0))
				{
					iLocal_85 = 1;
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() % 1000) > 100)
			{
			}
			if (iLocal_85)
			{
				iLocal_85 = 0;
				func_150(&iLocal_182);
				func_123(&(Local_369[unk_0x57270EE11514DC67()]), 4);
			}
			break;
		
		case 4:
			if ((!unk_0xADC2AA9A68E522A1(Local_214.f_3, Local_214.f_6, 1, 0) || (unk_0x8A22C4C08282BF26(-1424690702) == 0 && Local_214.f_2 == 0)) || (unk_0x8A22C4C08282BF26(1774039768) == 0 && Local_214.f_2 == 1))
			{
				func_38(&iLocal_197);
				func_42(&(Local_369[unk_0x57270EE11514DC67()]));
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 7, 0);
				func_43(&(Local_369[unk_0x57270EE11514DC67()]), -1);
				func_11(&iLocal_170);
				func_41(&Local_214, 0);
				func_123(&(Local_369[unk_0x57270EE11514DC67()]), 0);
			}
			break;
		
		case 5:
			if (!iLocal_80)
			{
				iLocal_80 = 1;
				unk_0xA37A90C62806D848(1);
				func_34(0, 0);
			}
			break;
		
		case 6:
			func_170();
			break;
	}
	func_136(&(Local_214.f_5));
	func_26(&iLocal_197);
}

void func_26(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 2))
	{
		unk_0x857E3CE01DEA2D26();
	}
	if (func_45(iParam0, 0))
	{
		unk_0x2103752056F874E1();
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(*iParam0, 3);
	if (bVar0 != unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
	{
		if (func_8(unk_0x16F2683693E537C9()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, bVar0);
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 108, bVar0);
		}
		func_17(iParam0, 4, bVar0);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 1))
	{
		func_27(0);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 5))
	{
		unk_0x38C3A68D7861DCFD(0, 30, 1);
		unk_0x38C3A68D7861DCFD(0, 31, 1);
	}
	else
	{
		unk_0xEAB026E686C0D991(0, 30, 1);
		unk_0xEAB026E686C0D991(0, 31, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 7))
	{
		unk_0x3584F71E5CA29322(5);
		unk_0x3584F71E5CA29322(18);
		unk_0x3584F71E5CA29322(10);
	}
}

void func_27(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_32(0))
		{
			func_28(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_28(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_31())
		{
			func_30(1, 1);
		}
		else
		{
			func_30(0, 0);
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
	if (!func_29())
	{
		Global_19486.f_1 = 3;
	}
}

int func_29()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
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

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_32(int iParam0)
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

bool func_33()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_34(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0,05f;
	Global_22348 = 0,05f;
	Global_22349 = 0,225f;
	fVar2 = unk_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0,225f;
	}
}

int func_35(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Var0.f_18), 1);
	}
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(Var0.f_18), 2);
	}
	if (bParam5)
	{
		unk_0x5D96D8530B3D0904(&(Var0.f_18), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Var0.f_18), 3);
	}
	Var0.f_16 = uParam2;
	if (!unk_0xADC2AA9A68E522A1(sParam0, Var0.f_16, 1, 0))
	{
		Global_1590535[unk_0xA30EC016B12C03E4()] = -1;
		if (func_36(sParam0, iParam1, Var0, 0, 0, 1, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(char* sParam0, int iParam1, struct<17> Param2, var uParam19, var uParam20, var uParam21, var uParam22, bool bParam23, int iParam24, bool bParam25, bool bParam26, bool bParam27)
{
	if (unk_0x59F00CC3C33B17AD(sParam0))
	{
		if (iParam24 && Param2.f_16 != -1)
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18), 4);
			Global_1590535[unk_0xD803B885F5E47A62()].f_1 = Param2.f_16;
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
			if (bParam27)
			{
				unk_0x3FC8DBCC154CA56B();
			}
		}
		if (bParam23)
		{
			unk_0x7BBABEC524CBF883(0);
			if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(1000);
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
			}
		}
		unk_0x92DCE5C81176D2B4(sParam0);
		if (unk_0x1FBF08B001C4788A(sParam0))
		{
			if (bParam23)
			{
				if (!unk_0x757EF87A33649210())
				{
					return 0;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			start_new_script_with_args(sParam0, &Param2, 21, iParam1);
			unk_0x5E8C29AE121DF1C7(sParam0);
			if (!bParam26)
			{
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18), 0);
			}
			unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18), 4);
			if (bParam25)
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
				{
					func_37();
					unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_37()
{
	if (Global_2537071.f_3963 != 0)
	{
		Global_2537071.f_3963 = 5;
	}
}

void func_38(int iParam0)
{
	unk_0x0674E58A79778E99(iParam0, 2);
	unk_0x0674E58A79778E99(iParam0, 3);
	unk_0x0674E58A79778E99(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 5);
	unk_0x0674E58A79778E99(iParam0, 7);
	func_39(iParam0, 0);
	func_26(iParam0);
}

void func_39(int iParam0, int iParam1)
{
	func_40(iParam0, iParam1);
}

void func_40(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_41(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_42(var uParam0)
{
	func_44(uParam0, 0, 0);
	func_44(uParam0, 1, 0);
	func_44(uParam0, 2, 0);
	func_44(uParam0, 5, 0);
}

int func_43(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
		return 1;
	}
	return 0;
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_19(uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_3), iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0x0674E58A79778E99(&(uParam0->f_3), iParam1);
		return 1;
	}
	return 0;
}

bool func_45(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
}

void func_46(var uParam0, var uParam1, bool bParam2)
{
	func_114(uParam1);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
		{
			if (Local_369[unk_0x57270EE11514DC67()].f_1 == -1)
			{
				if (func_112(&iLocal_170))
				{
					func_108(uParam0, uParam1);
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_369[unk_0x57270EE11514DC67()].f_1 == -1)
					{
						if (!unk_0xEAE0D21A50E6C7F4(bParam2->f_5, iVar0))
						{
							func_47(Local_323[iVar0], uParam1->f_12);
						}
					}
					iVar0++;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(bParam2->f_5, Local_369[unk_0x57270EE11514DC67()].f_1))
			{
				func_47(Local_323[uParam1->f_10], uParam1->f_12);
			}
			else
			{
				func_41(bParam2, 8);
				func_47(Local_323[Local_369[unk_0x57270EE11514DC67()].f_1], 1);
			}
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
	{
		if (func_183(&iLocal_170))
		{
		}
	}
}

void func_47(struct<21> Param0, bool bParam21)
{
	func_107(&Local_188);
	if (!unk_0xEAE0D21A50E6C7F4(Local_369[unk_0x57270EE11514DC67()].f_3, 2))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), Param0.f_3, true) < 2f)
			{
				func_9(&Local_253, iLocal_313, Param0.f_2);
				Local_188.f_3 = 1;
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_253.f_53, Local_253.f_56, false, true, 0))
				{
					Local_188.f_2 = 1;
					if (Param0 == 1)
					{
						iVar0 = 0;
						while (iVar0 < Local_253.f_59)
						{
							if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_253[iVar0], Local_253[iVar0].f_7, false, true, 0))
							{
								Local_188.f_4 = 1;
								Local_188.f_8 = iVar0;
							}
							iVar0++;
						}
						iVar1 = 0;
						while (iVar1 < unk_0x54EABC0DD106045B())
						{
							iVar2 = unk_0xF4FB3A22FC4991C8(iVar1);
							if (iVar1 != unk_0x57270EE11514DC67())
							{
								if (unk_0x81A93C8315C28F58(iVar2))
								{
									if ((Local_369[iVar1].f_1 == Param0 && unk_0xEAE0D21A50E6C7F4(Local_369[iVar1].f_3, 6)) && unk_0xEAE0D21A50E6C7F4(Local_369[iVar1].f_3, 1))
									{
										Local_188.f_5 = 1;
										if (Local_188.f_8 >= 0)
										{
											if (Local_188.f_8 == 0 && unk_0xEAE0D21A50E6C7F4(Local_369[iVar1].f_3, 5))
											{
												Local_188.f_6 = 1;
											}
											else if (Local_188.f_8 == 1 && !unk_0xEAE0D21A50E6C7F4(Local_369[iVar1].f_3, 5))
											{
												Local_188.f_6 = 1;
											}
										}
									}
								}
							}
							iVar1++;
						}
						if (Local_188.f_4)
						{
							if (!Local_188.f_6)
							{
								Local_188.f_7 = 1;
								if (Local_188.f_8 == 0)
								{
									func_44(&(Local_369[unk_0x57270EE11514DC67()]), 5, 1);
								}
							}
							else
							{
								func_44(&(Local_369[unk_0x57270EE11514DC67()]), 5, 0);
								func_44(&(Local_369[unk_0x57270EE11514DC67()]), 6, 0);
							}
						}
						if (Local_214.f_4 == 0)
						{
							if (((!Local_188.f_4 && Local_188.f_5) || (Local_188.f_4 && Local_188.f_6)) && unk_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
							{
								func_104("ARMW_A_SIDE", 1);
							}
							else
							{
								func_104("ARMW_A_SIDE", 0);
							}
						}
					}
					else
					{
						Local_188.f_7 = 1;
						Local_188.f_4 = 1;
					}
				}
				else if (Param0 == 1)
				{
					func_104("ARMW_A_SIDE", 0);
				}
			}
		}
	}
	if (bParam21)
	{
		switch (Local_214.f_4)
		{
			case 0:
				if (Local_188.f_4 && Local_188.f_7)
				{
					Local_188 = false;
					func_43(&(Local_369[unk_0x57270EE11514DC67()]), Param0);
					if (unk_0xEAE0D21A50E6C7F4(Local_243.f_3, Param0))
					{
						func_104(func_103(Param0, 6), 0);
						func_104(func_103(Param0, 7), 0);
						if (!func_19(&(Local_369[iLocal_199]), 1))
						{
							func_104(func_103(Param0, 0), 1);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
					{
						func_104(func_103(Param0, 6), 0);
						func_104(func_103(Param0, 7), 1);
					}
					else
					{
						func_104(func_103(Param0, 0), 0);
						if (unk_0xBFC0798A6E3417F9(2, 51))
						{
							func_102(unk_0xA30EC016B12C03E4(), Param0, 1);
							func_44(&(Local_369[unk_0x57270EE11514DC67()]), 1, 1);
							func_44(&(Local_369[unk_0x57270EE11514DC67()]), 6, 1);
							func_17(&iLocal_197, 1, 1);
							func_17(&iLocal_197, 2, 1);
							func_17(&iLocal_197, 3, 0);
							func_17(&iLocal_197, 5, 1);
							Local_188 = true;
							if (!func_183(&iLocal_176))
							{
								func_182(&iLocal_176);
							}
							else
							{
								func_11(&iLocal_176);
							}
							func_41(&Local_214, 1);
						}
						else
						{
							func_104(func_103(Param0, 7), 0);
							func_104(func_103(Param0, 6), 1);
						}
					}
				}
				if (!Local_188.f_4)
				{
					func_104(func_103(Param0, 6), 0);
					if (Local_369[unk_0x57270EE11514DC67()].f_1 == Param0)
					{
						func_43(&(Local_369[unk_0x57270EE11514DC67()]), -1);
						Local_188 = true;
					}
				}
				break;
			
			case 1:
				bVar3 = false;
				unk_0x38C3A68D7861DCFD(0, 37, 1);
				unk_0x38C3A68D7861DCFD(0, 12, 1);
				unk_0x38C3A68D7861DCFD(0, 13, 1);
				if (Local_214.f_1 == 1)
				{
					Local_214.f_1 = 0;
					bVar3 = true;
					if (Local_214)
					{
						if (Param0 == 0)
						{
							func_41(&Local_214, 6);
						}
						else
						{
							func_41(&Local_214, 2);
						}
					}
					else
					{
						func_41(&Local_214, 8);
					}
				}
				if (!func_183(&iLocal_176))
				{
					func_182(&iLocal_176);
				}
				else if (func_14(&iLocal_176) >= 3f)
				{
					bVar3 = true;
					func_41(&Local_214, 8);
				}
				if (bVar3)
				{
					if (func_183(&iLocal_176))
					{
						func_150(&iLocal_176);
					}
				}
				break;
			
			case 2:
				unk_0x38C3A68D7861DCFD(0, 37, 1);
				unk_0x38C3A68D7861DCFD(0, 12, 1);
				unk_0x38C3A68D7861DCFD(0, 13, 1);
				fVar7 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), Local_253[0], true);
				fVar8 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), Local_253[1], true);
				if (fVar7 < fVar8)
				{
					vVar4 = { Local_253[0] };
				}
				else
				{
					vVar4 = { Local_253[1] };
				}
				fVar9 = func_101(vVar4, Local_253[0].f_4);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vVar4, 1f, 300, fVar9, 0,05f);
				}
				func_41(&Local_214, 6);
				break;
			
			case 6:
				unk_0x38C3A68D7861DCFD(0, 37, 1);
				unk_0x38C3A68D7861DCFD(0, 12, 1);
				unk_0x38C3A68D7861DCFD(0, 13, 1);
				if (func_183(&iLocal_314))
				{
					func_150(&iLocal_314);
				}
				if (!func_183(&iLocal_317))
				{
					func_16(&iLocal_317, 1f);
				}
				else if (func_14(&iLocal_317) >= 1f || !func_19(&(Local_369[unk_0x57270EE11514DC67()]), 3))
				{
					func_11(&iLocal_317);
					if (func_100(Param0, &Local_243))
					{
						if (func_44(&(Local_369[unk_0x57270EE11514DC67()]), 0, 1))
						{
							func_44(&(Local_369[unk_0x57270EE11514DC67()]), 3, 1);
						}
					}
					else if (func_44(&(Local_369[unk_0x57270EE11514DC67()]), 0, 0))
					{
					}
				}
				if (!func_183(&iLocal_173))
				{
					func_182(&iLocal_173);
				}
				else if (func_14(&iLocal_173) >= 1f)
				{
					if (!func_19(&(Local_369[unk_0x57270EE11514DC67()]), 3))
					{
						func_44(&(Local_369[unk_0x57270EE11514DC67()]), 3, 1);
					}
				}
				if ((unk_0xBFC0798A6E3417F9(2, func_99(0)) || unk_0xEAE0D21A50E6C7F4(Local_243.f_3, Param0)) && !bLocal_83)
				{
					func_41(&Local_214, 8);
				}
				func_17(&iLocal_197, 0, 1);
				func_17(&iLocal_197, 1, 0);
				func_17(&iLocal_197, 2, 1);
				func_17(&iLocal_197, 3, 1);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 1, 1);
				if (func_19(&(Local_369[unk_0x57270EE11514DC67()]), 3))
				{
					if (func_19(&(Local_369[unk_0x57270EE11514DC67()]), 0))
					{
						if ((unk_0xBFC0798A6E3417F9(2, 201) && unk_0xEAE0D21A50E6C7F4(Local_243.f_2, Param0)) && !bLocal_83)
						{
							func_41(&Local_214, 7);
						}
						if (Param0.f_2 == 0)
						{
							Local_188.f_1 = 1;
							if (func_132(0, -1, 0))
							{
								func_97();
								func_89(Param0);
								func_51(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
							}
						}
						func_104(func_103(Param0, 5), 0);
						if (unk_0xEAE0D21A50E6C7F4(Local_243.f_2, Param0))
						{
							if (Local_188.f_1)
							{
								func_104(func_103(Param0, 1), 0);
								func_104(func_103(Param0, 2), 0);
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_243.f_1, Param0))
							{
								func_104(func_103(Param0, 1), 1);
							}
							else
							{
								func_104(func_103(Param0, 2), 1);
							}
						}
						else
						{
							func_104(func_103(Param0, 1), 0);
							func_104(func_103(Param0, 2), 0);
							if (!Local_188.f_1)
							{
								func_104(func_103(Param0, 5), 0);
								func_104(func_103(Param0, 4), 1);
							}
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_243.f_1, Local_369[unk_0x57270EE11514DC67()].f_1))
						{
							func_44(&(Local_369[unk_0x57270EE11514DC67()]), 1, 1);
						}
						if (func_19(&(Local_369[unk_0x57270EE11514DC67()]), 1))
						{
							func_104(func_103(Param0, 5), 1);
						}
						else
						{
							func_104(func_103(Param0, 5), 0);
						}
					}
				}
				break;
			
			case 7:
				unk_0x38C3A68D7861DCFD(0, 37, 1);
				unk_0x38C3A68D7861DCFD(0, 12, 1);
				unk_0x38C3A68D7861DCFD(0, 13, 1);
				func_48(unk_0xA30EC016B12C03E4(), Param0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 8, 1);
				func_17(&iLocal_197, 1, 1);
				func_17(&iLocal_197, 7, 1);
				func_17(&iLocal_197, 2, 1);
				func_11(&iLocal_170);
				func_150(&iLocal_173);
				func_150(&iLocal_317);
				func_41(&Local_214, 0);
				break;
			
			case 8:
				iLocal_84 = 0;
				Local_188 = true;
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 1, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 0, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 3, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 6, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 5, 0);
				func_44(&(Local_369[unk_0x57270EE11514DC67()]), 7, 0);
				func_38(&iLocal_197);
				func_150(&iLocal_173);
				func_150(&iLocal_317);
				func_43(&(Local_369[unk_0x57270EE11514DC67()]), -1);
				func_11(&iLocal_170);
				func_107(&Local_188);
				unk_0xA37A90C62806D848(1);
				func_41(&Local_214, 0);
				break;
			}
	}
	if (!Local_188.f_4 && Local_214.f_4 == 0)
	{
		if (iLocal_84)
		{
			iLocal_84 = 0;
		}
		func_38(&iLocal_197);
	}
	if (!Local_188.f_4 && !Local_188.f_3)
	{
		func_44(&(Local_369[unk_0x57270EE11514DC67()]), 5, 0);
		if (Local_214.f_4 > 0 && Local_214.f_4 != 8)
		{
			func_41(&Local_214, 8);
		}
	}
	if (Local_188)
	{
		func_104(func_103(Param0, 7), 0);
		func_104(func_103(Param0, 0), 0);
		func_104(func_103(Param0, 1), 0);
		func_104(func_103(Param0, 2), 0);
		func_104(func_103(Param0, 4), 0);
		func_104(func_103(Param0, 5), 0);
		func_104(func_103(Param0, 6), 0);
		func_104("ARMW_A_SIDE", 0);
	}
}

void func_48(int iParam0, var uParam1)
{
	Var0 = 575251425;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_49());
}

var func_49()
{
	iVar1 = unk_0x0D03A641486A2001();
	if (unk_0x81A93C8315C28F58(iVar1))
	{
		iVar2 = unk_0x4B2BFE4A3BC248ED(iVar1);
		if (func_50(iVar2, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&uVar0, iVar2);
		}
	}
	return uVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_51(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_85(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_83(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = unk_0x33D480CCE15C991A(0);
		if (func_82())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_82())
		{
			fVar62 = 1f;
		}
		iVar60 = round((to_float(iVar60) / fVar62));
		iVar61 = round((to_float(iVar61) / fVar62));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_78(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_77(29), 64);
					StringCopy(&cVar81, func_74(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_73(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_73(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_72();
					unk_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							unk_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							unk_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_22347 + 0,00390625f), ((Global_22348 + fVar57) + 0,00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_72();
					func_70((((Global_22347 + fParam5) - 0,00390625f) - func_71("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_72();
						func_70((((Global_22347 + fParam5) - 0,00390625f) - func_71("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0,00277776f);
						}
						fVar56 = 0,034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar97 + ((fVar51 - fVar97) * 0,5f)) - 0,00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_73(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar62));
				vVar38.y = (vVar38.y * (0,5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA402F6C87C08815C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0,034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_83(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_69(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_73(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_69(fVar42);
				unk_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_83(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_77(Global_22350.f_4768), func_74(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_83(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_69(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_73(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_69(fVar42);
				unk_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_83(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_77(Global_4268421.f_67), func_74(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_60(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0,034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0,0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						unk_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xA402F6C87C08815C(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0,5f)), (((fVar59 + fVar100) + (0,00277776f * IntToFloat(iVar12))) + (fVar56 * 0,5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0,0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0,0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = unk_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0,00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - ((fVar43 + fVar44) * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_83(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_68(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar28)]), func_74(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar28)]), func_74(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar42) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_56() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_58(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0,0185f;
													fVar114 = 0,004f;
													fVar115 = 0,02f;
													unk_0xD3539A877EC25E86(0f, (0,35f * 0,7f));
													unk_0x7178F32F6742C936(255, 255, 255, 150);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0,6f)), (fVar35 + (fVar113 * 0,75f)), 0,0175f, 0,035f, floor(fVar111), floor(fVar111), floor(fVar111), floor(fVar112), 0);
													unk_0x070005E852D4C0E9(&cVar107);
													unk_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_83(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_68(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[(iVar22 + iVar14)]), func_74(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_55((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_83(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_58(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_54((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_83(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0,00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar44 * 0,5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_83(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_83(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_83(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_83(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_77(Global_22350.f_4433[iVar22]), func_74(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_53(Global_22350.f_4433[iVar22])), (fVar37 * func_53(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_83(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0,034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_27(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(10);
	}
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_52(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_52(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_53(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_54(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_55(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_56()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_58(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_59(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0, 0, 0, floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(6);
	}
	else
	{
		unk_0x7BBAC160090910C3(0);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_59(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_85(bParam4, bParam8))
	{
		return;
	}
	if (func_66())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_63(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xF59058FCB716F903(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar1])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_62(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_62(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_61(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_22350.f_5052, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_16)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_62(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_61(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0,0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_61(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_62(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_63(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_64(-1, 0) == 8;
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

int func_64(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
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

int func_65()
{
	return Global_1312745;
}

int func_66()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_67())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_67()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xA402F6C87C08815C(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_69(float fParam0)
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x4B9228CE1CF0DACA(2);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_70(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_71(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_72();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_72()
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_22347 + 0,0046875f), ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_73(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_74(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_76(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_75(&uVar3);
			}
		}
		else
		{
			return func_75(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_75(var uParam0)
{
	return uParam0;
}

struct<13> func_76(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_77(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_76(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_75(&uVar0);
		}
		else
		{
			return func_75(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_78(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_81(Global_22350.f_5218, 1);
	}
	else
	{
		func_81(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_80(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_83(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_79(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_79(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_80(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_58(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_81(int iParam0, bool bParam1)
{
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_82()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_77(iParam0), 64);
	StringCopy(&cVar16, func_74(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_82())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_82())
			{
				fVar34 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(-892862129) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = round((to_float(iVar32) / fVar34));
			iVar33 = round((to_float(iVar33) / fVar34));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_84(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_84(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_84(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0,5f;
			break;
		
		case 61:
			return 0,8f;
			break;
	}
	return 1f;
}

int func_85(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_87(8, -1) && func_86() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_86()
{
	return Global_1312812;
}

bool func_87(int iParam0, int iParam1)
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

int func_88(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_89(struct<21> Param0)
{
	func_34(0, 0);
	func_96(1, 1, 0, 0, 0);
	func_95(1, 2, 1, 1, 1);
	func_94("DART_A_SET");
	func_78(0, vLocal_210[0], 0, 1, 0, 0);
	StringCopy(&Var0, "DART_A_S", 16);
	StringIntConCat(&Var0, iLocal_198, 16);
	func_78(0, &Var0, 0, 1, 0, 0);
	if (unk_0xEAE0D21A50E6C7F4(Local_243.f_1, Local_369[unk_0x57270EE11514DC67()].f_1))
	{
		func_93(201, func_103(Param0, 1), -1, 0);
	}
	else
	{
		func_93(201, func_103(Param0, 2), -1, 0);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar4 = 225;
	}
	else
	{
		iVar4 = 202;
	}
	func_93(iVar4, "DART_A_MENU_C", -1, 0);
	func_92(0, 1, 0, 0, 0);
	func_91(iLocal_82, 1, 1);
	func_90("DART_A_GNT", 0, 0);
}

void func_90(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = unk_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_91(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_93(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_94(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_97()
{
	if (!iLocal_84)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		iLocal_84 = 1;
	}
	if (unk_0xBFC0798A6E3417F9(2, 201))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 225;
	}
	else
	{
		iVar0 = 202;
	}
	if (unk_0xBFC0798A6E3417F9(2, iVar0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0xBFC0798A6E3417F9(2, 174))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_98(&iLocal_198, 5, 0, 1);
		iLocal_81 = 1;
	}
	if (unk_0xBFC0798A6E3417F9(2, 175))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_98(&iLocal_198, 5, 1, 1);
		iLocal_81 = 1;
	}
	if (iLocal_81)
	{
		Global_4456448.f_197232 = 1;
		Global_4456448.f_197233 = uLocal_204[iLocal_198];
		iLocal_81 = 0;
	}
}

void func_98(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		iVar0 = (iParam1 - 1);
	}
	else
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	if (*iParam0 < iVar1)
	{
		*iParam0 = iVar1;
	}
	switch (iParam2)
	{
		case 1:
			if (*iParam0 < iVar0)
			{
				*iParam0++;
			}
			else if (*iParam0 >= iVar0)
			{
				*iParam0 = iVar1;
			}
			break;
		
		case 0:
			if (*iParam0 > iVar1)
			{
				*iParam0 = (*iParam0 - 1);
			}
			else if (*iParam0 <= iVar0)
			{
				*iParam0 = iVar0;
			}
			break;
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x91E3F625EF57450D(2))
			{
				return 225;
			}
			else
			{
				return 202;
			}
			break;
	}
	return 202;
}

int func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_5, unk_0x57270EE11514DC67()))
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_6, unk_0x57270EE11514DC67()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_101(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_102(int iParam0, var uParam1, bool bParam2)
{
	Var0 = -844166385;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 1, bParam2);
	func_6(&(Var0.f_2), 3, 1);
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_49());
}

var func_103(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21)
{
	if (unk_0x91E3F625EF57450D(2))
	{
		switch (iParam21)
		{
			case 5:
				if (Param0 == 0)
				{
					return "DART_A_LWAITPC";
				}
				else
				{
					return "ARMW_A_LWAITPC";
				}
				break;
			
			case 2:
				if (Param0 == 0)
				{
					return "DART_A_TWO";
				}
				else
				{
					return "ARMW_A_TWOPC";
				}
				break;
			
			case 4:
				if (Param0 == 0)
				{
					return "";
				}
				else
				{
					return "ARMW_A_PWAITPC";
				}
				break;
			}
	}
	return Param0.f_12[iParam21];
}

void func_104(char* sParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (bParam1)
		{
			if (!func_106(sParam0))
			{
				func_105(sParam0);
			}
		}
		else if (func_106(sParam0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

void func_105(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_106(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_107(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
}

void func_108(var uParam0, var uParam1)
{
	Var0 = { Local_323[uParam0->f_4] };
	bVar21 = true;
	if (bLocal_83)
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if ((unk_0xFEBC1E4EC9E001F0() && !func_106(func_103(Var0, 3))) || func_109())
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if (uParam1->f_10 >= 0)
	{
		bVar21 = false;
	}
	if ((!uParam1->f_1[uParam0->f_4] && (*uParam0 >= 1 && *uParam0 <= 3)) || unk_0xEAE0D21A50E6C7F4(Local_243.f_3, uParam0->f_4))
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	switch (*uParam0)
	{
		case 0:
			func_150(&(uParam0->f_1));
			bVar22 = true;
			iVar23 = 0;
			while (iVar23 <= 1)
			{
				if ((iVar23 != uParam0->f_4 && uParam1->f_1[iVar23]) && !unk_0xEAE0D21A50E6C7F4(Local_243.f_3, iVar23))
				{
					uParam0->f_4 = iVar23;
					uParam1->f_14 = 4f;
					func_111(uParam0, 1);
					break;
				}
				else if (uParam1->f_1[uParam0->f_4])
				{
					bVar22 = false;
				}
				iVar23++;
			}
			if (!bVar22)
			{
				uParam1->f_14 = 9f;
				uParam0->f_5 = 2;
				func_111(uParam0, 1);
			}
			break;
		
		case 1:
			if (!uParam0->f_6)
			{
				func_104(func_103(Var0, 3), 1);
				uParam0->f_6 = 1;
			}
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= uParam1->f_14)
			{
				uParam0->f_5++;
				func_104(func_103(Var0, 3), 0);
				uParam0->f_6 = 0;
				func_11(&(uParam0->f_1));
				func_111(uParam0, 2);
			}
			break;
		
		case 2:
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 2f)
			{
				if (uParam0->f_5 >= 2)
				{
					func_11(&(uParam0->f_1));
					func_111(uParam0, 3);
				}
				else
				{
					func_111(uParam0, 0);
				}
			}
			break;
		
		case 3:
			if (!func_183(&(uParam0->f_1)))
			{
				func_182(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 9f)
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
		
		case 4:
			if (func_183(&(uParam0->f_1)))
			{
				func_150(&(uParam0->f_1));
			}
			if (!bVar21)
			{
				if (uParam0->f_6)
				{
					func_104(func_103(Var0, 3), 0);
					uParam0->f_6 = 0;
				}
			}
			else
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
	}
}

int func_109()
{
	if (func_110() != -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_110()
{
	return Global_2460709;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_112(int iParam0)
{
	if (func_183(iParam0))
	{
		if (func_14(iParam0) >= 1f)
		{
			func_113(iParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_113(int iParam0)
{
	if (func_183(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 2);
		}
	}
}

void func_114(var uParam0)
{
	bVar0 = true;
	bVar1 = true;
	if (((func_32(0) || unk_0x798A3F1296751F46()) || func_116()) || func_115())
	{
		bVar0 = false;
		bLocal_83 = true;
	}
	else if (bLocal_83)
	{
		func_11(&iLocal_170);
		bLocal_83 = false;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
		{
			bVar1 = !unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9());
		}
	}
	uParam0->f_12 = 1;
	if ((!func_112(&iLocal_170) || !bVar0) || !bVar1)
	{
		uParam0->f_12 = 0;
	}
	uParam0->f_11 = bVar1;
	uParam0->f_10 = Local_369[unk_0x57270EE11514DC67()].f_1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		uParam0->f_4[iVar2] = unk_0xADC2AA9A68E522A1(Local_323[iVar2].f_1, uParam0->f_13, 0, 0);
		uParam0->f_7[iVar2] = unk_0xADC2AA9A68E522A1(Local_323[iVar2].f_1, uParam0->f_13, 1, 0);
		iVar3 = 0;
		if ((unk_0xEAE0D21A50E6C7F4(Local_243.f_1, iVar2) && !unk_0xADC2AA9A68E522A1(Local_323[iVar2].f_1, uParam0->f_13, 0, 0)) && func_20(&Local_369, iVar2) > 0)
		{
			iVar3 = 1;
		}
		uParam0->f_1[iVar2] = iVar3;
		iVar2++;
	}
}

var func_115()
{
	return Global_73825;
}

int func_116()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_117(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (uParam0[iVar0]->f_2)
		{
			func_118(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_118(var uParam0)
{
	if (!func_183(&(uParam0->f_4)) && uParam0->f_2)
	{
	}
	if (func_183(&(uParam0->f_4)))
	{
		if ((func_14(&(uParam0->f_4)) < uParam0->f_7 && uParam0->f_2) && !unk_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 1, 0))
		{
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Var0.f_16 = -1;
			Var0.f_19 = -1;
			Var0.f_20 = -1;
			Var0.f_16 = uParam0->f_3;
			unk_0x5D96D8530B3D0904(&(Var0.f_18), 1);
			if (func_119())
			{
				if (unk_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 0, 0) && !unk_0xADC2AA9A68E522A1(uParam0->f_1, uParam0->f_3, 1, 0))
				{
					if (func_36(uParam0->f_1, 8344, Var0, 0, 0, 1, 1, 1))
					{
						uParam0->f_2 = 0;
					}
				}
			}
		}
		else
		{
			func_150(&(uParam0->f_4));
			uParam0->f_2 = 0;
		}
	}
}

int func_119()
{
	if (!func_169(unk_0xA30EC016B12C03E4()))
	{
		if (((!func_154(unk_0xA30EC016B12C03E4(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && !func_151(unk_0xA30EC016B12C03E4())) && !unk_0x433E615D274A2FC6(unk_0xA30EC016B12C03E4())) && !func_152(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < unk_0xDFB2BAED99ED0A2E(1))
	{
		switch (unk_0xB98DB26FBF676FA1(1, iVar11))
		{
			case 174:
				if (func_23(iVar11, &Var5, 0) && uParam0[unk_0x57270EE11514DC67()]->f_4 == 0)
				{
					switch (Var5)
					{
						case -991724954:
							if (Var5.f_3 == uParam0[unk_0x57270EE11514DC67()]->f_1 && Var5.f_4 == unk_0xA30EC016B12C03E4())
							{
								uParam1->f_1 = 1;
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = uParam3[uParam1->f_2]->f_1;
								*uParam1 = func_22(Var5.f_2, 0);
							}
							break;
						
						case 1764980958:
							if (Var5.f_3 == uParam0[unk_0x57270EE11514DC67()]->f_1 && Var5.f_4 == unk_0xA30EC016B12C03E4())
							{
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = uParam3[uParam1->f_2]->f_1;
								func_41(uParam1, 8);
							}
							break;
						
						case -849785785:
							if (Var5.f_4 == unk_0xA30EC016B12C03E4())
							{
								if (Var5.f_3 >= 0 && Var5.f_3 <= 1)
								{
									if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_5, Var5.f_3))
									{
										if (!func_22(Var5.f_2, 4))
										{
											uParam1->f_2 = Var5.f_3;
											uParam1->f_3 = uParam3[uParam1->f_2]->f_1;
											func_44(uParam0[unk_0x57270EE11514DC67()], 2, 1);
											if (func_44(uParam0[unk_0x57270EE11514DC67()], 0, func_22(Var5.f_2, 2)) && Var5.f_3 == uParam0[unk_0x57270EE11514DC67()]->f_1)
											{
											}
											func_44(uParam0[unk_0x57270EE11514DC67()], 5, func_22(Var5.f_2, 5));
											func_123(uParam0[unk_0x57270EE11514DC67()], 1);
										}
									}
								}
							}
							break;
						}
				}
				if (unk_0x218F818E64020C17(1, iVar11, &Var0, 5))
				{
					switch (Var0)
					{
						case -1352061319:
							if (Var0.f_3 == uParam1->f_6 && Var0.f_2 != unk_0xD803B885F5E47A62())
							{
								if (!(func_19(uParam0[unk_0x57270EE11514DC67()], 2) && uParam0[unk_0x57270EE11514DC67()]->f_1 == Var0.f_4))
								{
									if (func_119())
									{
										func_124(uParam2, Var0.f_4, 1092616192);
									}
								}
							}
							break;
						}
				}
				break;
		}
		iVar11++;
	}
}

bool func_121(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 14);
}

int func_122()
{
	return Local_243.f_4;
}

int func_123(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
		return 1;
	}
	return 0;
}

void func_124(var uParam0, int iParam1, float fParam2)
{
	uParam0[iParam1]->f_7 = fParam2;
	uParam0[iParam1]->f_2 = 1;
	if (!func_183(&(uParam0[iParam1]->f_4)))
	{
		func_182(&(uParam0[iParam1]->f_4));
	}
	else
	{
		func_11(&(uParam0[iParam1]->f_4));
	}
}

void func_125(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0[iVar0]->f_1 = uParam1[iVar0]->f_1;
		uParam0[iVar0]->f_7 = 10f;
		uParam0[iVar0]->f_3 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_29;
		if (func_138(unk_0xD803B885F5E47A62()))
		{
			uParam0[iVar0]->f_3 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6 + 32;
		}
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1)
{
	Var0.f_12 = 8;
	Var0 = 0;
	Var0.f_1 = "AM_Darts_Apartment";
	Var0.f_2 = 0;
	Var0.f_3 = { func_128(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 1;
	Var0.f_11 = 2;
	Var0.f_12[0] = "DART_A_PROG";
	Var0.f_12[1] = "DART_A_ONE";
	Var0.f_12[2] = "DART_A_TWO";
	Var0.f_12[3] = "DART_A_JOIN";
	Var0.f_12[4] = "";
	Var0.f_12[5] = "DART_A_LWAIT";
	Var0.f_12[6] = "DART_A_PREP";
	Var0.f_12[7] = "DART_A_MANY";
	*uParam0[0] = { Var0 };
	Var0 = 1;
	Var0.f_1 = "AM_Armwrestling_Apartment";
	Var0.f_2 = 1;
	Var0.f_3 = { func_127(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 2;
	Var0.f_11 = 2;
	Var0.f_12[0] = "ARMW_A_PROG";
	Var0.f_12[1] = "";
	Var0.f_12[2] = "ARMW_A_TWO";
	Var0.f_12[3] = "ARMW_A_JOIN";
	Var0.f_12[4] = "ARMW_A_PWAIT";
	Var0.f_12[5] = "ARMW_A_LWAIT";
	Var0.f_12[6] = "ARMW_A_PREP";
	Var0.f_12[7] = "ARMW_A_MANY";
	*uParam0[1] = { Var0 };
}

Vector3 func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1116,5f, -3153,2f, -37,5f;
		
		case 1:
			return 1003,1f, -3165,7f, -33,6f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1118,489f, -3157,188f, -37,5628f;
		
		case 1:
			return 1001f, -3164,3f, -33,6f;
		
		case 2:
			return 2708,62f, -359,1518f, -54,5877f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

void func_130(var uParam0, var uParam1)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 1;
	(*uParam0)[2] = 2;
	(*uParam1)[0] = 1;
	(*uParam1)[1] = 2;
	(*uParam1)[2] = 3;
	(*uParam1)[3] = 4;
	(*uParam1)[4] = 5;
}

void func_131(var uParam0)
{
	(*uParam0)[0] = "DART_A_GN";
	uParam0[0]->f_1 = 5;
	uParam0[0]->f_2 = 0;
}

bool func_132(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_88(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_133(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_133(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_134(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0[iVar0]->f_2 = 0;
		uParam0[iVar0]->f_7 = 10f;
		func_150(&(uParam0[iVar0]->f_4));
		iVar0++;
	}
}

void func_135(var uParam0)
{
}

void func_136(int iParam0)
{
	func_137(iParam0, 0, Global_262145.f_17725);
	func_137(iParam0, 1, Global_262145.f_17726);
	if (unk_0xA14BB9332558B949())
	{
		func_137(iParam0, 0, 1);
		func_137(iParam0, 1, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1) != bParam2)
	{
		func_17(iParam0, iParam1, bParam2);
	}
}

int func_138(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_50(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_139()
{
	return -1;
}

void func_140()
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_16 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_29;
	if (func_138(unk_0xD803B885F5E47A62()))
	{
		Var0.f_16 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6 + 32;
	}
	if (Var0 != 12)
	{
		Var0 = 12;
	}
	func_147(func_148(Var0), Var0);
	func_144(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_243, 10);
	unk_0x35B62793EAE9ADDF(&Local_369, 161);
	if (!func_141())
	{
		func_170();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
		Local_369[unk_0x57270EE11514DC67()].f_2 = 0;
	}
	else
	{
		func_170();
	}
}

int func_141()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_143())
		{
			return 0;
		}
		if (func_142(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_142(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_2450632.f_593;
}

int func_144(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_146();
			}
			else
			{
				return 0;
			}
		}
		if (!func_145())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_142(157))
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_146();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_146();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_146();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_145()
{
	return Global_1312854;
}

void func_146()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_147(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_146();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

float func_149(int iParam0)
{
	if (func_183(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_150(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_151(int iParam0)
{
	if (func_129(Global_1590535[iParam0].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_168(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_167(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_166(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_165(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_164(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_163(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_161(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_160(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_159(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_158(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_157(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_156(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_155(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_152(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_159(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_139())
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_139())
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (iParam0 != func_139())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_153(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

bool func_169(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 11);
}

void func_170()
{
	func_34(0, 0);
	func_171(1, -1);
	func_38(&iLocal_197);
	func_146();
}

void func_171(bool bParam0, int iParam1)
{
	if (!func_88(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_172(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_172(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_173()
{
	func_179(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_178())
	{
		return 1;
	}
	if (func_142(159))
	{
		if (!func_177())
		{
			return 1;
		}
	}
	if (func_142(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_174() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_174()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_174()
{
	switch (func_176())
	{
		case 0:
			return func_175();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_175()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_176()
{
	return Global_30768;
}

bool func_177()
{
	return Global_2450632.f_598;
}

bool func_178()
{
	return Global_2460680;
}

void func_179(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_180(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_180(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_50(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_181(iVar4, &bVar5))
						{
							unk_0x920D29D81E211607(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_181(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_182(int iParam0)
{
	if (!func_183(iParam0))
	{
		func_11(iParam0);
	}
}

bool func_183(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

