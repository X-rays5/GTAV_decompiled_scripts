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
	iLocal_187 = -1;
	iLocal_189 = -1;
	sLocal_191 = "";
	if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("appCovertOps")) > 1)
	{
		func_249(0, 0);
	}
	func_201();
	while (func_200())
	{
		func_196();
		func_181();
		func_179();
		func_43();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_186, 3))
		{
			func_37();
			func_11();
		}
		else
		{
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	if (((!unk_0xEAE0D21A50E6C7F4(iLocal_186, 7) && !unk_0xEAE0D21A50E6C7F4(iLocal_186, 6)) && iLocal_324 == 1) && !func_10())
	{
		if (!func_9())
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_8("WVM_LAUNCH_TUT", 9000);
				unk_0x5D96D8530B3D0904(&iLocal_186, 6);
				func_2();
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iLocal_186, 6);
		}
	}
}

void func_2()
{
	if (!func_5(15478, -1, -1))
	{
		func_3(15478, 1, -1, 1);
	}
	else if (!func_5(15479, -1, -1))
	{
		func_3(15479, 1, -1, 1);
	}
	else
	{
		func_3(15480, 1, -1, 1);
	}
}

int func_3(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_4();
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

int func_4()
{
	return Global_1312745;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
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

int func_7(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_4();
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

void func_8(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_9()
{
	if ((func_5(15478, -1, -1) && func_5(15479, -1, -1)) && func_5(15480, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (iLocal_189 != -1)
	{
		func_12(iLocal_189);
	}
}

void func_12(int iParam0)
{
	if (func_13(&uLocal_330, "GNRCAUD", func_36(iParam0), 8, 0, 0, 0))
	{
		iLocal_189 = -1;
	}
}

bool func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_14(sParam2, iParam3, 0);
}

int func_14(char* sParam0, int iParam1, bool bParam2)
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
					func_34();
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
		if (func_33(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_32();
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
				func_24();
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
				if (func_23())
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
			if (func_22())
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
			func_21();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_20();
		func_15();
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
		func_34();
	}
	return 0;
}

void func_15()
{
	if (!func_16())
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

int func_16()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_19())
	{
		return 0;
	}
	if (func_17(unk_0xD803B885F5E47A62()))
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

bool func_17(int iParam0)
{
	return func_18(iParam0, 20);
}

bool func_18(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_19()
{
	return -1;
}

void func_20()
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

void func_21()
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

int func_22()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_23()
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

void func_24()
{
	if (func_31(14))
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
		Global_19486 = func_25();
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

var func_25()
{
	func_26();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_26()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_29(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_28(unk_0x16F2683693E537C9());
			if (func_27(iVar0) && (!func_31(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_27(Global_111638.f_2358.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_31(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_32()
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

bool func_33(int iParam0, int iParam1)
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

void func_34()
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

void func_35(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GNRC_WVMPCT1";
		
		case 1:
			return "GNRC_WVMPCT2";
		
		default:
	}
	return "GNRC_WVMPCT1";
}

void func_37()
{
	if ((!unk_0xEAE0D21A50E6C7F4(iLocal_186, 4) && !func_10()) && iLocal_324 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_186, 5))
		{
			if (!func_5(15378, -1, -1))
			{
				bVar0 = true;
				iLocal_188 = 9000;
				iLocal_189 = 0;
				func_3(15378, 1, -1, 1);
			}
		}
		else if (!func_5(15379, -1, -1))
		{
			bVar0 = true;
			iLocal_188 = 9000;
			iLocal_189 = 1;
			func_3(15379, 1, -1, 1);
		}
	}
	if (bVar0)
	{
		unk_0x5D96D8530B3D0904(&iLocal_186, 4);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_186, 4))
	{
		if (!func_42(&uLocal_328))
		{
			func_41(&uLocal_328, 0, 0);
		}
		else if (func_40(&uLocal_328, iLocal_188, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_186, 4);
			iLocal_188 = 0;
			func_39(&uLocal_328);
			if (func_38())
			{
				unk_0x5D96D8530B3D0904(&iLocal_186, 3);
			}
		}
	}
}

int func_38()
{
	if ((func_5(15378, -1, -1) || unk_0xEAE0D21A50E6C7F4(iLocal_186, 5)) && func_5(15379, -1, -1))
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_40(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_41(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_41(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_42(var uParam0)
{
	return uParam0->f_1;
}

void func_43()
{
	func_177();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_186, 0))
	{
		if (unk_0xC95D7AEEDEF4946B(uLocal_496) && unk_0xC95D7AEEDEF4946B(uLocal_497))
		{
			iVar0 = unk_0xA52833FE33F41C53(uLocal_496);
			iVar1 = unk_0xA52833FE33F41C53(uLocal_497);
			switch (iVar0)
			{
				case 102:
					unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
					func_176();
					break;
				
				case 101:
					func_60();
					break;
				
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					func_44(iVar0);
					break;
			}
			iLocal_324 = iVar1;
			unk_0x0674E58A79778E99(&iLocal_186, 0);
		}
	}
}

void func_44(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_48("WVM_MIS_TI", func_51(), "OR_OVRLY_OK", "", -1, 0);
		unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	else
	{
		func_46(iParam0);
		func_48("WVM_MIS_TI", "SVM_MIS_L", "WHOUSE_CONF", "WHOUSE_CANC", -1, 1);
		unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Are_You_Sure", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	func_45();
}

void func_45()
{
	sLocal_191 = "";
}

void func_46(int iParam0)
{
	if (iLocal_187 != func_47(iParam0))
	{
		iLocal_187 = func_47(iParam0);
	}
}

int func_47(int iParam0)
{
	return iParam0;
}

void func_48(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x7E60C62A7CE58FC8(iLocal_495, "SHOW_OVERLAY");
	func_50(sParam0);
	unk_0x7ACC3006A87F8B39(sParam1);
	if (iParam4 != -1)
	{
		unk_0x6D99DF8263D35CE5(iParam4);
	}
	unk_0x779B34565F4D71B1();
	func_50(sParam2);
	func_50(sParam3);
	unk_0x7E60D21B163E9D56();
	unk_0x5D96D8530B3D0904(&iLocal_186, 1);
	func_49(iParam5);
}

void func_49(int iParam0)
{
	if (iLocal_325 != iParam0)
	{
		iLocal_325 = iParam0;
	}
}

void func_50(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

char* func_51()
{
	return sLocal_191;
}

int func_52(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		func_59("SVM_MIS_FL");
		return 0;
	}
	if (!func_57(iParam0))
	{
		func_59("WVM_MIS_FNA");
		return 0;
	}
	if (func_56(unk_0xD803B885F5E47A62()))
	{
		func_59("WVM_MIS_FL2");
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		func_59("SVM_MIS_FL");
		return 0;
	}
	if (iParam0 == 7 && !func_53(6))
	{
		func_59("WVM_MIS_FDB");
		return 0;
	}
	return 1;
}

bool func_53(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(func_54(5463, -1, 0), iParam0);
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_55(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_55(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_4();
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

int func_56(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_18(iParam0, 9);
	}
	return 0;
}

bool func_57(int iParam0)
{
	return iLocal_190 >= func_58(iParam0);
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_21135;
		
		case 1:
			return Global_262145.f_21136;
		
		case 2:
			return Global_262145.f_21137;
		
		case 3:
			return Global_262145.f_21138;
		
		case 4:
			return Global_262145.f_21139;
		
		case 5:
			return Global_262145.f_21140;
		
		case 6:
			return Global_262145.f_21141;
		
		case 7:
			return Global_262145.f_21142;
		
		default:
	}
	return -1;
}

void func_59(char* sParam0)
{
	sLocal_191 = sParam0;
}

void func_60()
{
	switch (func_175())
	{
		case 1:
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Launch", "DLC_GR_MOC_Computer_Sounds", 1);
			func_61(&(Global_2450632.f_680), iLocal_187, 1);
			func_249(0, 0);
			break;
		
		case 0:
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable_OK", "DLC_GR_MOC_Computer_Sounds", 1);
			break;
	}
	func_176();
}

int func_61(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_174(iParam2);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 < func_173(iParam2))
	{
		iVar1 = func_171(iVar0, iParam2);
		if (iVar1 != -1)
		{
			func_169(&(Global_794709.f_4[iVar1]));
			func_168();
			switch (iParam2)
			{
				case 0:
					func_167(222);
					break;
				
				case 1:
					func_167(228);
					break;
				
				case 2:
					func_166(unk_0xD803B885F5E47A62(), 0);
					if (func_164(Global_794709.f_107189[iVar1].f_1))
					{
						func_167(235);
					}
					else
					{
						func_167(233);
					}
					func_161(func_163(unk_0xD803B885F5E47A62()));
					break;
			}
			func_160(Global_794709.f_4[iVar1].f_71);
			func_158();
			func_157();
			func_156();
			func_155();
			func_154();
			if (func_150() <= 3)
			{
				func_149();
			}
			func_148();
			unk_0xFCC7D1ED80D1900C("FMMC_PLYLOAD");
			unk_0x9A681BEC95A1B92E(5);
			func_146(func_147(), 0, 0, 0);
			func_63(uParam0, 0, 0, 0f, 0f, 0f, &uVar2, 0f, 0f, 0f, 1, 0, &uVar2, &iVar5, iVar5, 0, 0, 1, 0, 0, 0, 0);
			unk_0xBFE31971E49FA500(false);
			func_62();
			Global_1590535[unk_0xD803B885F5E47A62()].f_98 = 8;
			return 1;
		}
	}
	return 0;
}

void func_62()
{
	unk_0x0674E58A79778E99(&Global_2450632, 15);
}

void func_63(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, vector3 vParam7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21)
{
	func_138(uParam0, iParam1, 1, iParam14, 1);
	if (func_136(unk_0xD803B885F5E47A62(), 0))
	{
		if (bParam11)
		{
			if (!unk_0x991B1F0980C62628())
			{
				if (!func_135() || bParam15)
				{
					func_125(0);
				}
			}
			return;
		}
	}
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	}
	vVar3 = { vParam7 };
	fVar6 = -1f;
	if (func_124(iParam1))
	{
		*uParam6 = { func_123(iParam1, iParam2) };
		vVar3 = { func_122(iParam1, iParam2) };
		fVar6 = func_121(iParam1, iParam2);
	}
	if (!func_120(*uParam6))
	{
		vVar0 = { *uParam6 };
	}
	if (func_120(vVar0))
	{
		if (!bParam10)
		{
			vVar0 = { vParam3 };
			if (unk_0xD1BF3090E1F8300E(vVar0.x, vVar0.y, (vVar0.z + 1f)))
			{
			}
			else
			{
				vVar0.z = (vVar0.z + 4f);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_120(vVar0))
		{
			if (func_136(unk_0xD803B885F5E47A62(), 0))
			{
				if (unk_0xC844350D5D58C99A(func_117()) && !unk_0x437347B10A200C4B(func_117(), 0))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(func_117(), true) };
					vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(func_117()) };
					if (func_116(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 1, 0))
					{
						vVar0 = { unk_0xF1EE614CA05DDE75() };
						vVar3 = { unk_0x9382F04ED9CDA21A(2) };
					}
				}
				else
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
				}
			}
			else
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
			}
			if ((func_115(unk_0xD803B885F5E47A62()) || func_113(unk_0xD803B885F5E47A62())) && func_112())
			{
				vVar0.z = (vVar0.z + 1,5f);
			}
			else if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
			{
				if (func_115(unk_0xD803B885F5E47A62()))
				{
					vVar0.z = (vVar0.z + 0,4f);
				}
				else
				{
					vVar0.z = (vVar0.z + 1,5f);
				}
			}
			else
			{
				vVar0.z = (vVar0.z + 4f);
			}
		}
	}
	if (bParam19)
	{
		vVar0 = { 1124,745f, 263,6554f, -48,8552f };
		vVar3 = { -22,4617f, 0f, -75,8431f };
		fVar6 = 50f;
	}
	else if (func_111(Global_4456448.f_194990) || iParam18)
	{
		if (func_110(unk_0xD803B885F5E47A62()))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
			vVar0.z = (vVar0.z + 0,4f);
			fVar6 = unk_0x1265A70A2DDA35AB();
		}
		else
		{
			vVar0 = { -194,2056f, -1853,75f, 70,3345f };
			vVar3 = { -10,0011f, 0f, 131,0271f };
			fVar6 = 42,6052f;
		}
	}
	else if (func_109(Global_4456448.f_194990) || iParam17)
	{
		vVar0 = { 347,2638f, 4867,324f, -59,2679f };
		vVar3 = { 1,2933f, 0,0747f, -34,6934f };
		fVar6 = 50f;
	}
	else if (iParam20 || func_108(Global_4456448.f_194990))
	{
		vVar0 = { 2709,332f, -366,5988f, -52,2786f };
		vVar3 = { -19,962f, 0f, -121,3927f };
		fVar6 = 56,6574f;
	}
	else if (bParam21)
	{
		iVar7 = func_107(unk_0xD803B885F5E47A62());
		vVar0 = { unk_0x8A5E176FF719A014(func_106(iVar7), func_105(iVar7), 3,5688f, 7,9792f, 4,1641f) };
		vVar3 = { -21,6791f, 0f, (func_105(iVar7) + 40,237f) };
		fVar6 = 70f;
	}
	if (func_135() && !bParam15)
	{
		vVar0 = { -213,5595f, 316,9778f, 96,9244f };
		vVar3 = { -1,0483f, 0f, -127,3989f };
		fVar6 = 25,5102f;
	}
	if (iParam1 == 0 && bParam11)
	{
		func_98();
		func_97(&vVar8, 144, Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
		if (!func_120(vVar8))
		{
			vVar0 = { vVar8 };
		}
		func_91(&vVar8, 144, Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
		vVar3 = { vVar8 };
	}
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x608A456FDD8A83D8(*uParam0, vVar0);
	unk_0x5F3CBA6EB9341C90(*uParam0, vVar3, 2);
	if (fVar6 > 0f)
	{
		unk_0x5818C8D5303DCCF8(*uParam0, fVar6);
	}
	else
	{
		unk_0x5818C8D5303DCCF8(*uParam0, 40f);
	}
	if (func_135() && !bParam15)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_90(unk_0xD803B885F5E47A62()))
			{
				func_78(unk_0xD803B885F5E47A62(), 0, 4, 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -209,434f, 305,016f, 95,9464f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 12,5f);
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), -209,867f, 306,969f, 95,9464f, 1f, 20000, 40000f, 0,1f);
				unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, false, 0, 0);
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
			}
		}
		unk_0x28F5E4DA506AC0CA(-209,434f, 305,016f, 95,9464f, 30f, 0, 0, 0, 0, false, 0);
		func_77(1);
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (!func_135() || bParam15)
		{
			func_125(0);
		}
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (!func_76() && !func_75())
	{
		func_72(0);
	}
	if (func_70())
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x991B1F0980C62628())
	{
		*uParam12 = { vVar0 };
		*uParam13 = 1;
	}
	else
	{
		func_69(vVar0);
	}
	unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 1);
	func_64(func_135(), ((iParam16 || iParam17) || iParam18));
}

void func_64(bool bParam0, bool bParam1)
{
	if (func_136(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	if (!bParam1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, 1);
			}
		}
	}
	if (!bParam0)
	{
		if (unk_0x8CD06866876216F2())
		{
			if (func_66())
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			if (func_65())
			{
				func_78(unk_0xD803B885F5E47A62(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_78(unk_0xD803B885F5E47A62(), 0, 319492, 0);
			}
		}
		else
		{
			func_78(unk_0xD803B885F5E47A62(), 0, 57348, 0);
		}
	}
}

bool func_65()
{
	return Global_2451426.f_6190;
}

int func_66()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_68(iVar0, 1) && !func_67(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_69(vector3 vParam0)
{
	if (!func_70())
	{
		return;
	}
	unk_0xF49D1BC9EF1C3EF4(vParam0, 0f, 0f, 0f);
	unk_0x448D99BAB1554268(1);
}

int func_70()
{
	if (func_136(unk_0xD803B885F5E47A62(), 0))
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_740 != func_19())
		{
			if (func_71(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 0, 1))
			{
				if (func_116(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_71(int iParam0, bool bParam1, bool bParam2)
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

void func_72(int iParam0)
{
	if (func_73())
	{
		return;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return;
	}
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		unk_0x82E51BCA72537B6C(iParam0);
	}
}

int func_73()
{
	if (func_74())
	{
		return Global_2460590;
	}
	return 0;
}

int func_74()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

bool func_75()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 9);
}

bool func_76()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 6);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 27);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 27);
	}
}

void func_78(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_89())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_87())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_136(unk_0xD803B885F5E47A62(), 0) && !func_86()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_83(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_82(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_81();
					func_80();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_82(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_79(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_79(int iParam0)
{
	return iParam0 == 17;
}

void func_80()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_81()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_82(int iParam0)
{
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_85();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_136(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_84(-2008016205, iParam0);
	}
}

void func_84(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_85()
{
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_86()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_87()
{
	if (func_88() == 0)
	{
		return 1;
	}
	return 0;
}

int func_88()
{
	return Global_1312467.f_18;
}

int func_89()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_146, 27);
}

int func_91(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_92(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_92(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_92(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_92(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_92(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_92(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_92(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	Var0[0] = { func_96(iParam3, bParam4) };
	Var0[1] = { func_96(iParam0, bParam4) };
	*uParam2 = { func_94(iParam1, iParam3) };
	vVar13 = { *uParam2 - Var0[0] };
	vVar13 = { func_93(vVar13, -Var0[0].f_3.f_2) };
	vVar13 = { func_93(vVar13, Var0[1].f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(Var0[1], 0f, vVar13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_93(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_94(var uParam0, int iParam1)
{
	iVar23 = 0;
	if (func_95(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && unk_0x7BDFCCD11DDD74D6(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_95(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_96(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_97(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_92(iParam2, iParam1, &vVar0, -1, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_92(iParam2, iParam1, &vVar0, 61, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_92(iParam2, iParam1, &vVar0, 83, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_92(iParam2, iParam1, &vVar0, 77, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_92(iParam2, iParam1, &vVar0, 73, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_92(iParam2, iParam1, &vVar0, 88, 0);
			*uParam0 = { vVar0 };
			return 1;
			return 0;
	}
}

void func_98()
{
	if (func_102())
	{
		return;
	}
	func_101(4, -1);
	if (func_100())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			if (unk_0x117658E336116132(iVar0) == unk_0xD803B885F5E47A62())
			{
				if (!func_99(48))
				{
					unk_0xA550CB601D5066B5(unk_0x117658E336116132(iVar0), 0);
				}
			}
			else
			{
				unk_0xA550CB601D5066B5(unk_0x117658E336116132(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_99(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2813[iVar0], iVar1);
}

bool func_100()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_39.f_4, 0);
}

void func_101(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_102()
{
	if (func_104() != 2)
	{
		return 0;
	}
	if (!func_100() && !((Global_1670379 || Global_1312791) && func_103()))
	{
		return 0;
	}
	return 1;
}

var func_103()
{
	return Global_2450632.f_39.f_57;
}

int func_104()
{
	return Global_2450632.f_39.f_40;
}

float func_105(int iParam0)
{
	return Global_4008564[iParam0].f_7;
}

Vector3 func_106(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

var func_107(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_108(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_110(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_196, 24);
}

int func_111(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_112()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 4);
}

int func_113(int iParam0)
{
	if (iParam0 != func_19())
	{
		if (func_71(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_114(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
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

int func_115(int iParam0)
{
	if (iParam0 != func_19())
	{
		if (func_71(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_19())
			{
				return func_114(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_19())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_117()
{
	if (unk_0xC844350D5D58C99A(func_119()))
	{
		return func_119();
	}
	return func_118();
}

var func_118()
{
	return Global_2359302.f_2;
}

var func_119()
{
	return Global_2359302.f_3;
}

int func_120(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40,5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40,4324f;
				
				case 2:
					return 42,2709f;
				
				case 3:
					return 43,6444f;
				
				case 4:
					return 37,3862f;
				
				case 5:
					return 38,6952f;
				
				case 6:
					return 40,9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40,5238f;
				
				case 1:
					return 47,4321f;
				
				case 2:
					return 38,6571f;
				
				case 3:
					return 44,0641f;
				
				case 4:
					return 39,2991f;
				
				case 5:
					return 31,7484f;
				
				case 6:
					return 35,6342f;
				
				case 7:
					return 36,0072f;
				
				case 8:
					return 42,5782f;
				
				case 9:
					return 37,4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1,3773f, 0f, -88,827f;
		
		case 122:
			return -18,1605f, 2,6167f, 113,0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2,3039f, 0f, -19,6903f;
				
				case 1:
					return -5,9341f, 0f, -151,6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3,627f, 0f, 34,6935f;
				
				case 1:
					return -57,9221f, 0f, 58,3042f;
				
				case 2:
					return -15,4498f, 0f, 161,1361f;
				
				case 3:
					return -1,8386f, 0f, -135,0223f;
				
				case 4:
					return 0,5233f, 0f, -85,7377f;
				
				case 5:
					return -4,2364f, 0f, 173,6634f;
				
				case 6:
					return -3,74f, 0f, -30,7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4,1441f, 0f, 15,6909f;
				
				case 1:
					return 5,4815f, 0f, -127,6695f;
				
				case 2:
					return -4,1889f, 0f, -15,0654f;
				
				case 3:
					return 16,4433f, 0f, -60,3988f;
				
				case 4:
					return 7,8225f, 0f, 39,2409f;
				
				case 5:
					return 2,0405f, 0f, -122,3459f;
				
				case 6:
					return 7,3382f, 0f, 157,6388f;
				
				case 7:
					return 6,481f, 0f, 172,9874f;
				
				case 8:
					return 14,0573f, 0f, 5,0622f;
				
				case 9:
					return -10,1444f, 0f, -131,4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8,8196f, 0f, 57,5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297,855f, 84,6478f, 54,6519f;
		
		case 122:
			return -855,7661f, -2645,376f, 100,8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13,4678f, -1097,781f, 30,192f;
				
				case 1:
					return 816,6221f, -2160,659f, 30,3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172,111f, -1641,549f, 5,7494f;
				
				case 1:
					return 498,4758f, -226,4275f, 71,0569f;
				
				case 2:
					return -1217,632f, 364,4556f, 86,527f;
				
				case 3:
					return -2884,754f, 32,9823f, 15,1123f;
				
				case 4:
					return -948,1036f, -1260,249f, 8,228f;
				
				case 5:
					return -1614,216f, 302,0945f, 66,0158f;
				
				case 6:
					return -1380,721f, -107,9713f, 50,6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903,8763f, -192,214f, 74,6401f;
				
				case 1:
					return 1419,517f, -2216,034f, 61,8467f;
				
				case 2:
					return -83,9713f, -1331,635f, 29,8383f;
				
				case 3:
					return 364,6455f, -2441,897f, 6,2607f;
				
				case 4:
					return 1237,207f, 2715,999f, 37,6424f;
				
				case 5:
					return 1019,153f, 2680,427f, 41,2254f;
				
				case 6:
					return 269,5203f, 2617,41f, 44,7054f;
				
				case 7:
					return -194,2518f, 6295,688f, 31,0991f;
				
				case 8:
					return 1682,759f, 4954,088f, 42,6891f;
				
				case 9:
					return 2325,447f, 3145,91f, 58,4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993,697f, 3049,667f, 47,7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_125(int iParam0)
{
	if (!unk_0xED4934AFB6EC6451(func_126(0)))
	{
		unk_0x82A772610883F395(func_126(iParam0), 0, 1);
	}
}

char* func_126(int iParam0)
{
	if (iParam0 || func_99(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_134())
	{
		return "MenuMGTournamentIn";
	}
	if (func_128(Global_4456448.f_232883))
	{
		return "MenuMGRemixIn";
	}
	if (func_127(Global_4456448.f_232883) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_234216.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_127(int iParam0)
{
	return iParam0 == 998;
}

int func_128(int iParam0)
{
	if ((((func_133(iParam0) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0)
{
	return iParam0 == 64;
}

bool func_130(int iParam0)
{
	return iParam0 == 65;
}

bool func_131(int iParam0)
{
	return iParam0 == 69;
}

bool func_132(int iParam0)
{
	return iParam0 == 67;
}

bool func_133(int iParam0)
{
	return iParam0 == 68;
}

bool func_134()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 12);
}

bool func_135()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 2);
}

bool func_136(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_137(-1, 0) == 8;
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

int func_137(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_4();
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

void func_138(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (unk_0x9F4FE516EAACCFC5(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
			if (bParam4)
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
			}
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
			*uParam0 = 0;
			func_62();
			if (func_70())
			{
				unk_0x066C43E677C08D5C();
			}
			unk_0x448D99BAB1554268(0);
			if (Global_1312372 == 0 && iParam3 == 1)
			{
				func_140(1, 0);
				func_140(1, 0);
			}
			if (!func_139())
			{
				if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
				{
					if (!Global_2458936.f_7)
					{
						unk_0xBBCE9616B024A2BF();
					}
				}
				else
				{
					unk_0xBBCE9616B024A2BF();
				}
			}
		}
	}
}

bool func_139()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 0);
}

void func_140(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_145(1, 0, 1);
	}
	else
	{
		func_141(iParam1);
	}
}

void func_141(int iParam0)
{
	func_144();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_143() == 0 || unk_0x798A3F1296751F46())
	{
		func_142(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_142(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_143()
{
	return Global_1312467.f_20;
}

void func_144()
{
	Global_2462226 = 1;
}

void func_145(int iParam0, bool bParam1, bool bParam2)
{
	if (func_73())
	{
		return;
	}
	if ((func_143() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_142(0);
		unk_0x68619D16FD876EAA(1);
		if (!bParam1)
		{
			unk_0x68619D16FD876EAA(1);
		}
		if (bParam2)
		{
			unk_0x730943CECC025C36();
		}
	}
}

void func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (bParam1 && bParam2)
	{
		return;
	}
	if (bParam3)
	{
		if (!bParam1)
		{
			return;
		}
	}
	Global_2404658 = iParam0;
	if (bParam1)
	{
		Global_2404658 += 10000;
	}
	if (bParam2)
	{
		Global_2404658 += 10000;
		Global_2404658 += 20000;
	}
	if (bParam3)
	{
		Global_2404658 = (Global_2404658 + 40000);
	}
}

int func_147()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28;
}

void func_148()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 4);
}

void func_149()
{
	unk_0x5D96D8530B3D0904(&(Global_1627020[unk_0xD803B885F5E47A62()].f_29), 12);
}

int func_150()
{
	if (func_153() == func_19())
	{
		return 0;
	}
	return func_151(func_153());
}

int func_151(int iParam0)
{
	if (func_152(iParam0) == func_19())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_152(int iParam0)
{
	if (iParam0 != func_19())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_19();
}

int func_153()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

void func_154()
{
	Global_2450632.f_617 = 1;
}

void func_155()
{
	Global_2450632.f_618 = 0;
}

void func_156()
{
	unk_0x0674E58A79778E99(&Global_2450632, 7);
}

void func_157()
{
	unk_0x0674E58A79778E99(&(Global_2450632.f_2), 14);
}

void func_158()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 5);
	func_159();
}

void func_159()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 8);
}

void func_160(var uParam0)
{
	Global_2450632.f_38 = uParam0;
}

void func_161(struct<13> Param0)
{
	if (func_162(Param0))
	{
		Global_2451426.f_6437 = { Param0 };
	}
}

bool func_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

struct<13> func_163(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_164(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_165(iVar0) && Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 8:
		case 14:
		case 15:
			return 1;
		
		default:
	}
	return 0;
}

void func_166(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

void func_167(int iParam0)
{
	Global_2450632.f_7 = iParam0;
}

void func_168()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 29);
}

void func_169(char* sParam0)
{
	StringCopy(&(Global_2450632.f_759), sParam0, 24);
	if (func_170())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_170()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 5);
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_172(Global_262145.f_4990[iParam0]);
			break;
		
		case 1:
			return func_172(Global_262145.f_4999[iParam0]);
			break;
		
		case 2:
			return func_172(Global_262145.f_5008[iParam0]);
			break;
	}
	return -1;
}

int func_172(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1218)
	{
		if (iParam0 == Global_794709.f_107189[iVar0].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 16;
			break;
	}
	return -1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_54(3974, -1, 0);
		
		case 1:
			return func_54(5460, -1, 0);
		
		case 2:
			iVar1 = func_54(5659, -1, 0);
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
			return 16;
		
		default:
	}
	return -1;
}

int func_175()
{
	return iLocal_325;
}

void func_176()
{
	unk_0x7E60C62A7CE58FC8(iLocal_495, "HIDE_OVERLAY");
	unk_0x7E60D21B163E9D56();
	func_49(0);
	unk_0x0674E58A79778E99(&iLocal_186, 1);
}

void func_177()
{
	if (func_178())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_186, 0))
		{
			unk_0x7E60C62A7CE58FC8(iLocal_495, "GET_CURRENT_SELECTION");
			uLocal_496 = unk_0x7A8BB56B212464AC();
			unk_0x7E60C62A7CE58FC8(iLocal_495, "GET_CURRENT_SCREEN_ID");
			uLocal_497 = unk_0x7A8BB56B212464AC();
			unk_0x5D96D8530B3D0904(&iLocal_186, 0);
		}
	}
}

int func_178()
{
	if (unk_0xBFC0798A6E3417F9(2, 201) || unk_0xBFC0798A6E3417F9(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_179()
{
	unk_0xEAB026E686C0D991(2, 205, 1);
	if (unk_0xBFC0798A6E3417F9(2, 205))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0xEAB026E686C0D991(2, 206, 1);
	if (unk_0xBFC0798A6E3417F9(2, 206))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		unk_0xEAB026E686C0D991(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0xEAB026E686C0D991(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_RELEASE_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_RELEASE_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		unk_0xEAB026E686C0D991(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0xEAB026E686C0D991(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	unk_0xEAB026E686C0D991(2, 189, 1);
	if (unk_0xBFC0798A6E3417F9(2, 189))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0xEAB026E686C0D991(2, 190, 1);
	if (unk_0xBFC0798A6E3417F9(2, 190))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0xEAB026E686C0D991(2, 201, 1);
	if (unk_0xBFC0798A6E3417F9(2, 201))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0xEAB026E686C0D991(2, 202, 1);
	if (unk_0xBFC0798A6E3417F9(2, 202))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(202), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_324 == 0 || iLocal_324 == 1)
		{
			if (!func_180())
			{
				func_249(1, 0);
			}
		}
		if (func_180())
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
			func_176();
		}
	}
	unk_0xEAB026E686C0D991(2, 203, 1);
	if (unk_0xBFC0798A6E3417F9(2, 203))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0xEAB026E686C0D991(2, 204, 1);
	if (unk_0xBFC0798A6E3417F9(2, 204))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		unk_0x7E60C62A7CE58FC8(iLocal_495, "SET_MOUSE_INPUT");
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 239));
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 240));
		unk_0x7E60D21B163E9D56();
		unk_0xEAB026E686C0D991(2, 237, 1);
		if (unk_0xBFC0798A6E3417F9(2, 237))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0xEAB026E686C0D991(2, 238, 1);
		if (unk_0xBFC0798A6E3417F9(2, 238))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_495, "SET_INPUT_EVENT", to_float(202), -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_324 == 0 || iLocal_324 == 1)
			{
				if (!func_180())
				{
					func_249(1, 0);
				}
			}
			if (func_180())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
				func_176();
			}
		}
	}
	else
	{
		unk_0xEAB026E686C0D991(2, 195, 1);
		unk_0xEAB026E686C0D991(2, 196, 1);
		iVar0 = unk_0x0DED1C1B8250FA57(2, 195);
		iVar1 = unk_0x0DED1C1B8250FA57(2, 196);
		if (((iVar0 != 127 || iLocal_498 != 127) || iVar1 != 127) || iLocal_499 != 127)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_495, "SET_ANALOG_STICK_INPUT");
			iLocal_498 = iVar0;
			iLocal_499 = iVar1;
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(iLocal_498);
			unk_0x3CAEA85DA607305E(iLocal_499);
			unk_0x7E60D21B163E9D56();
		}
	}
	unk_0xEAB026E686C0D991(2, 197, 1);
	unk_0xEAB026E686C0D991(2, 198, 1);
	iVar2 = unk_0x0DED1C1B8250FA57(2, 197);
	iVar3 = unk_0x0DED1C1B8250FA57(2, 198);
	if (((iVar2 != 127 || iLocal_500 != 127) || iVar3 != 127) || iLocal_501 != 127)
	{
		bVar4 = (unk_0x06F8112AA79C53D9(2, 242) || unk_0x7FEE810EE9E768EB(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x06F8112AA79C53D9(2, 241) || unk_0x7FEE810EE9E768EB(2, 241));
		}
		unk_0x7E60C62A7CE58FC8(iLocal_495, "SET_ANALOG_STICK_INPUT");
		iLocal_500 = iVar2;
		iLocal_501 = iVar3;
		unk_0x1200CC973A2399C8(false);
		unk_0x3CAEA85DA607305E(iLocal_500);
		unk_0x3CAEA85DA607305E(iLocal_501);
		unk_0x1200CC973A2399C8(bVar4);
		unk_0x7E60D21B163E9D56();
	}
	if ((unk_0xBFC0798A6E3417F9(2, 204) || unk_0xD245978525608929(2, 204)) && !unk_0x91E3F625EF57450D(2))
	{
		func_249(1, 0);
	}
}

bool func_180()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_186, 1);
}

void func_181()
{
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0xEF6276132B396452(0f, 1065353216);
	unk_0x2FB9A57162E54BAB(0f);
	func_193();
	if (Global_76622)
	{
		unk_0x73591FF5CCBBB2EA(4);
		unk_0x73591FF5CCBBB2EA(5);
		unk_0x73591FF5CCBBB2EA(13);
		unk_0x73591FF5CCBBB2EA(3);
	}
	unk_0xB8E3919889462ACD();
	unk_0xEAB026E686C0D991(2, 199, 1);
	unk_0xD9ACBBA59FD5A09E(1);
	func_192(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(iLocal_495, 255, 255, 255, 255, 0);
	func_190();
	func_184(0);
	func_182(1);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		func_183();
	}
	func_101(4, -1);
	func_101(6, -1);
	func_101(7, -1);
	func_101(3, -1);
	func_101(1, -1);
	func_101(2, -1);
	func_101(11, -1);
	func_101(13, -1);
	func_101(14, -1);
	func_101(16, -1);
}

void func_183()
{
	Global_2537071.f_4532 = 0;
}

void func_184(int iParam0)
{
	if (func_189())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_188(0))
		{
			func_185(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_185(int iParam0)
{
	if (func_189())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_187())
		{
			func_186(1, 1);
		}
		else
		{
			func_186(0, 0);
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
	if (!func_22())
	{
		Global_19486.f_1 = 3;
	}
}

void func_186(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_188(0))
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

bool func_187()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_188(int iParam0)
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

bool func_189()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_190()
{
	unk_0xC2127C0F64D6A3B9();
	func_191();
}

void func_191()
{
	Global_22211.f_134 = 1;
}

void func_192(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_193()
{
	func_194(1);
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x5EEBDFEE72949D59(0);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
	}
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		if (func_195())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_195()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_196()
{
	if (!unk_0x8CD06866876216F2())
	{
		func_249(0, 0);
	}
	else if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		func_249(0, 0);
	}
	else if (func_199())
	{
		func_249(1, 0);
	}
	else if (!func_198(unk_0xD803B885F5E47A62()))
	{
		func_249(0, 0);
	}
	else if (func_197(unk_0xD803B885F5E47A62()))
	{
		func_249(0, 0);
	}
}

int func_197(int iParam0)
{
	if (iParam0 != func_19() && func_71(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_19())
	{
		if (func_71(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_71(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

bool func_199()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

bool func_200()
{
	return Global_73825;
}

void func_201()
{
	func_196();
	iLocal_495 = unk_0xB01F55A0FD1CFD49("COVERT_OPS");
	while (!unk_0x83D8570832F172A7(iLocal_495))
	{
		wait(0);
	}
	unk_0x5D96D8530B3D0904(&iLocal_186, 7);
	func_185(1);
	func_247(1);
	func_246();
	unk_0x56FCE5C6DA4AA600();
	func_245(1);
	func_78(unk_0xD803B885F5E47A62(), 0, 0, 0);
	if (unk_0x2EBF608FFE6CA406(3) || Global_2537071.f_1852)
	{
		if (Global_2537071.f_1852)
		{
		}
		func_249(0, 0);
	}
	func_245(1);
	func_206();
	func_203();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_202(1, 1, 1, 1);
	}
}

int func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_203()
{
	if (func_38())
	{
		unk_0x5D96D8530B3D0904(&iLocal_186, 3);
	}
	else
	{
		func_205(1);
		func_204(&uLocal_330, 2, 0, "AGENT14", 0, 1);
	}
}

void func_204(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_205(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

void func_206()
{
	unk_0x7E60C62A7CE58FC8(iLocal_495, "SET_PLAYER_DATA");
	unk_0x25D53D645C0957E2(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
	unk_0x7E60D21B163E9D56();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_207(iVar0);
		iVar0++;
	}
}

void func_207(int iParam0)
{
	iLocal_190 = func_243(func_4(), 5);
	iVar1 = func_171(func_47(iParam0), 1);
	iVar2 = func_58(iParam0);
	bVar3 = iLocal_190 >= iVar2;
	sVar4 = func_242(&(Global_73881[func_47(iParam0)]));
	fVar5 = 0f;
	fVar6 = 0f;
	if (bVar3)
	{
		if (iParam0 == 3)
		{
			unk_0x5D96D8530B3D0904(&iLocal_186, 5);
		}
		iVar2 = 0;
		if (iParam0 == 7)
		{
			if (!func_53(6))
			{
				iVar2 = -1;
				bVar3 = false;
			}
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_186, 7);
	}
	if (iVar1 != -1)
	{
		if (!func_239())
		{
			while (!func_235(Global_794709.f_4[iVar1].f_54))
			{
				if (!func_42(&uLocal_326))
				{
					func_41(&uLocal_326, 0, 0);
				}
				else if (func_40(&uLocal_326, 750, 0))
				{
					iVar1 = -1;
				}
				else
				{
					wait(0);
				}
			}
			func_39(&uLocal_326);
			if (iVar1 != -1)
			{
				func_208(&fVar5, &fVar6, 0, 9, 0, 0, unk_0x12AB0310C2281427(&(Global_794709.f_4[iVar1])));
			}
			if (fVar5 == 1f)
			{
				fVar5 = 0f;
			}
			if (fVar6 == 1f)
			{
				fVar6 = 0f;
			}
		}
		else
		{
			iVar1 = -1;
		}
	}
	unk_0x7E60C62A7CE58FC8(iLocal_495, "ADD_MISSION");
	unk_0x3CAEA85DA607305E(iParam0);
	if (iVar1 != -1)
	{
		unk_0x25D53D645C0957E2(&(Global_794709.f_4[iVar1].f_22));
		unk_0x7ACC3006A87F8B39("FMMC_OFFLN_HD");
		iVar0 = 0;
		while (iVar0 < 8)
		{
			unk_0xD06AC7C87A34A6AD(&(Local_192[iVar0]));
			iVar0++;
		}
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_50("");
		func_50("");
	}
	unk_0x25D53D645C0957E2(sVar4);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x1200CC973A2399C8(bVar3);
	unk_0x3CAEA85DA607305E(floor(fVar6));
	unk_0x3CAEA85DA607305E(floor(fVar5));
	unk_0x7E60D21B163E9D56();
}

void func_208(float fParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_213(iParam2, iParam3, 0, iParam4, iParam5);
	iVar1 = func_212(iParam6);
	func_209(iVar0, iVar1, -1226544455, fParam0, 1);
	func_209(iVar0, iVar1, 1769793017, fParam1, 1);
}

void func_209(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_210(0, iParam2, uParam3, bParam4);
	if (iParam0 == 0)
	{
		return;
	}
	switch (iParam0)
	{
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
		case 26:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			func_210(1, iParam2, uParam3, bParam4);
			if (iParam0 == 1)
			{
				return;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					func_210(2, iParam2, uParam3, bParam4);
					if (iParam0 == 2)
					{
						return;
					}
					switch (iParam0)
					{
						case 3:
						case 4:
						case 5:
							func_210(iParam0, iParam2, uParam3, bParam4);
							return;
						
						case 1:
						case 2:
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
						case 26:
						case 20:
						case 21:
						case 22:
						case 23:
						case 24:
						case 25:
							return;
						
						default:
					}
					return;
					return;
				
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
				case 26:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
					func_210(6, iParam2, uParam3, bParam4);
					if (iParam0 == 6)
					{
						return;
					}
					switch (iParam0)
					{
						case 7:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 24:
							func_210(iParam0, iParam2, uParam3, bParam4);
							if (iParam1 != 27)
							{
								func_210(iParam1, iParam2, uParam3, bParam4);
							}
							return;
						
						case 15:
						case 20:
						case 21:
						case 22:
						case 23:
						case 25:
							func_210(15, iParam2, uParam3, bParam4);
							if (iParam0 == 15)
							{
								if (iParam1 != 27)
								{
									func_210(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 20:
								case 21:
								case 22:
								case 23:
								case 25:
									func_210(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_210(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
							func_210(8, iParam2, uParam3, bParam4);
							if (iParam0 == 8)
							{
								if (iParam1 != 27)
								{
									func_210(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 9:
								case 10:
								case 11:
								case 12:
								case 13:
								case 14:
									func_210(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_210(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							return;
						
						default:
					}
					return;
					return;
				
				case 1:
					return;
				
				default:
			}
			break;
	}
}

void func_210(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	uVar0 = func_211(iParam0);
	uVar1 = *uParam2;
	if (!unk_0x2C74C956CB924005(uVar0, uParam1, uParam2))
	{
		if (bParam3)
		{
		}
		return;
		*uParam2 = uVar1;
	}
	else
	{
		unk_0x948D9E268AE21A43(uVar0, uParam1, uParam2);
	}
	if (bParam3)
	{
	}
}

int func_211(int iParam0)
{
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return unk_0x12AB0310C2281427(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return 190769267;
			break;
		
		case 1:
			return 953070135;
			break;
		
		case 2:
			return 1398379561;
			break;
		
		case 3:
			return -295628664;
			break;
		
		case 4:
			return -1157311665;
			break;
		
		case 5:
			return 988790432;
			break;
		
		case 6:
			return 1140746429;
			break;
		
		case 7:
			return 1882254284;
			break;
		
		case 8:
			return -1021097824;
			break;
		
		case 9:
			return 1031194139;
			break;
		
		case 10:
			return -946481156;
			break;
		
		case 11:
			return -364624190;
			break;
		
		case 12:
			return -199795525;
			break;
		
		case 13:
			return -866645446;
			break;
		
		case 14:
			return 1144300534;
			break;
		
		case 15:
			return 539878179;
			break;
		
		case 16:
			return 571975921;
			break;
		
		case 17:
			return 818280646;
			break;
		
		case 18:
			return -183978087;
			break;
		
		case 19:
			return -52527117;
			break;
		
		case 26:
			return -395434754;
			break;
		
		case 20:
			return -1110334219;
			break;
		
		case 21:
			return -1382306730;
			break;
		
		case 22:
			return 1453550531;
			break;
		
		case 23:
			break;
		
		case 24:
			return 1744317449;
			break;
		
		case 25:
			return -1679896800;
			break;
		
		case 27:
			return 2;
			break;
		
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

int func_212(int iParam0)
{
	iVar0 = unk_0x7ADF99974F87DF59(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0 + 28;
	}
	return 27;
}

int func_213(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_214(iParam3, iParam4))
			{
				return 25;
			}
			else if (iParam1 == 0)
			{
				return 15;
			}
			else if (iParam1 == 5)
			{
				return 19;
			}
			else if (iParam1 == 6)
			{
				return 18;
			}
			else if (iParam1 == 4)
			{
				return 22;
			}
			else if (iParam1 == 9)
			{
				return 23;
			}
			else if (iParam1 == 3)
			{
				return 21;
			}
			else if (iParam1 == 2)
			{
				return 20;
			}
			break;
		
		case 129:
			return 25;
			break;
		
		case 165:
			return 23;
			break;
		
		case 7:
			return 19;
			break;
		
		case 4:
			return 18;
			break;
		
		case 10:
			return 22;
			break;
		
		case 9:
			return 20;
			break;
		
		case 1:
			return 7;
		
		case 8:
			return 17;
		
		case 2:
			switch (iParam1)
			{
				case 4:
				case 5:
					return 12;
				
				case 2:
				case 3:
					return 13;
				
				case 8:
				case 9:
					return 17;
				
				case 6:
				case 7:
				case 18:
				case 19:
					return 14;
				
				case 12:
				case 13:
					if (bParam2)
					{
						return 11;
					}
					else
					{
						return 10;
					}
					break;
			}
			return 9;
		
		case 3:
			return 16;
		
		case 6:
			return 24;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_234(iParam0) || func_233(iParam0)) || func_232(iParam0)) || func_231(iParam0, 1)) || func_230(iParam0)) || func_229(iParam0)) || func_228(iParam0)) || func_227(iParam0)) || func_226(iParam0)) || func_225(iParam0)) || func_224(iParam0)) || func_223(iParam0)) || func_222(iParam0)) || func_221(iParam0)) || func_220(iParam0)) || func_219(iParam0)) || func_218(iParam0)) || func_217(iParam0)) || func_216(iParam0)) || func_215(iParam1)) || func_130(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return iParam0 == 57;
}

int func_216(int iParam0)
{
	if (Global_4456448.f_232883 == 30)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9221[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_217(int iParam0)
{
	if (Global_4456448.f_232883 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_218(int iParam0)
{
	if (Global_4456448.f_232883 == 31)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9243[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (Global_4456448.f_232883 == 34)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9232[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (Global_4456448.f_232883 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9208[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (Global_4456448.f_232883 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (Global_4456448.f_232883 == 28)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9186[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_223(int iParam0)
{
	if (Global_4456448.f_232883 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (Global_4456448.f_232883 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (Global_4456448.f_232883 == 33)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9100[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_226(int iParam0)
{
	if (Global_4456448.f_232883 == 86)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_227(int iParam0)
{
	if (Global_4456448.f_232883 == 84)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9067[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_228(int iParam0)
{
	if (Global_4456448.f_232883 == 25)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (Global_4456448.f_232883 == 85)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9045[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_230(int iParam0)
{
	if (Global_4456448.f_232883 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_232(int iParam0)
{
	if (Global_4456448.f_232883 == 18)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9006 || iParam0 == Global_262145.f_9007) || iParam0 == Global_262145.f_9008) || iParam0 == Global_262145.f_9009) || iParam0 == Global_262145.f_9010)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (Global_4456448.f_232883 == 20)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9001 || iParam0 == Global_262145.f_9002) || iParam0 == Global_262145.f_9003) || iParam0 == Global_262145.f_9004) || iParam0 == Global_262145.f_9005)
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (Global_4456448.f_232883 == 19)
	{
		return 1;
	}
	if ((((((iParam0 == Global_262145.f_8994 || iParam0 == Global_262145.f_8995) || iParam0 == Global_262145.f_8996) || iParam0 == Global_262145.f_8997) || iParam0 == Global_262145.f_8998) || iParam0 == Global_262145.f_8999) || iParam0 == Global_262145.f_9000)
	{
		return 1;
	}
	return 0;
}

bool func_235(int iParam0)
{
	bVar0 = true;
	if (iParam0 != 0)
	{
		while (!func_238(iParam0, &vVar1))
		{
			wait(0);
		}
		if (!vVar1.z)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		iVar8 = 0;
		while (iVar8 < 8)
		{
			StringCopy(&(Local_192[iVar8]), "", 64);
			iVar8++;
		}
		sVar4 = func_236(iParam0, 500);
		iVar6 = unk_0x4880526EC51D1C27(sVar4);
		while (!bVar9)
		{
			if (iVar5 >= iVar6)
			{
				bVar9 = true;
			}
			else if (iVar7 >= 8)
			{
				bVar9 = true;
			}
			else
			{
				StringCopy(&(Local_192[iVar7]), unk_0x48EB24FD5B17B101(sVar4, iVar5, iVar6, 63), 64);
				iVar5 = (iVar5 + unk_0x4880526EC51D1C27(&(Local_192[iVar7])));
				iVar7++;
			}
		}
	}
	return bVar0;
}

var func_236(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return func_237();
	}
	return unk_0x57F0ADAF7738112A(iParam0, iParam1);
}

char* func_237()
{
	return unk_0x19C9F30A7697B43C("CREATOR_NO_T");
}

int func_238(int iParam0, var uParam1)
{
	if (*uParam1 != iParam0)
	{
		if (*uParam1 != 0)
		{
			unk_0x295B8300CE227536(*uParam1);
		}
		uParam1->f_2 = 0;
		*uParam1 = iParam0;
		uParam1->f_1 = 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (uParam1->f_2)
	{
		return 1;
	}
	else
	{
		if (iParam0 == -1)
		{
			uParam1->f_2 = 1;
			return 1;
		}
		if ((!unk_0x6CB8A41B37BA577F(iParam0) && uParam1->f_1 == 0) || uParam1->f_1 == -1)
		{
			uParam1->f_1 = unk_0xD8CA360F8AD38CBF(iParam0);
		}
		else if (unk_0x2DE0ECF358B710B5(iParam0))
		{
			if (unk_0x7E9183B7E20EFA0B(iParam0))
			{
				uParam1->f_2 = 1;
				return 1;
			}
			else
			{
				uParam1->f_2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_239()
{
	if (!func_240())
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (func_241())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_241()
{
	return Global_2461181;
}

var func_242(var uParam0)
{
	return uParam0;
}

int func_243(int iParam0, int iParam1)
{
	return func_54(func_244(iParam1), iParam0, 0);
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_245(int iParam0)
{
	if (Global_73825 != iParam0)
	{
		Global_73825 = iParam0;
	}
}

void func_246()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_247(bool bParam0)
{
	if (bParam0)
	{
		func_248();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_188(0))
		{
			func_185(0);
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

void func_248()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_249(bool bParam0, int iParam1)
{
	unk_0xE17FDF9E3068281B(&iLocal_495);
	func_245(iParam1);
	func_247(0);
	func_250();
	unk_0x5FEA2B013EBED3F6(1000);
	unk_0x4D7F4CC43D4D0DE3(-1, "Logout", "DLC_GR_MOC_Computer_Sounds", 1);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_202(0, 1, 1, 1);
	}
	if (bParam0)
	{
		func_78(unk_0xD803B885F5E47A62(), 1, 0, 0);
	}
	unk_0x17D339215F817B98();
	unk_0x10FAF14A60A0DBE1();
}

void func_250()
{
	if (!Global_1312575)
	{
		return;
	}
	func_251();
}

void func_251()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

