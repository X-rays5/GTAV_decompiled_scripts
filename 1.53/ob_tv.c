#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
#endregion

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0xED06FD5709A59F02(2))
	{
		func_68();
	}
	if (unk_0xAE06B9E39EBDE049(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_67();
		if (unk_0xAE06B9E39EBDE049(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_66() && !func_65())) && !func_64(iLocal_43))
			{
				func_68();
			}
			if ((unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() != 3) && unk_0x69222D599BA78994() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0x4E3A4DABBC3BA0D5(iScriptParam_0, 0))
			{
				func_68();
			}
			if (unk_0xED07D558B3EDDF8A(iScriptParam_0))
			{
				if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
				{
					func_62();
					if (unk_0x4F5F2FB7AE0EB7AB(iScriptParam_0) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_43 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_41 = unk_0x451CA5F5FD323FAF(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x3F704F9EED6AC9D7(uLocal_41))
									{
										unk_0x31FB4AAD80E34916(uLocal_41, 9);
									}
									unk_0xD39E529EBE5DB04F();
								}
							}
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x12E529EE55608299("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xA0E955FEBF04F874(0);
								Global_31028[iLocal_43 /*11*/].f_2 = 0;
								Global_31028[iLocal_43 /*11*/].f_6 = 1;
								Global_31028[iLocal_43 /*11*/] = unk_0x344C570D6F8700DF(0, 2);
								Global_31028[iLocal_43 /*11*/].f_1 = 0;
								Global_31028[iLocal_43 /*11*/].f_4 = 0;
								Global_31028[iLocal_43 /*11*/].f_7 = 0;
								Global_31028[iLocal_43 /*11*/].f_8 = 0;
								Global_31028[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (unk_0xE96CFCC1D1F0B96C(iLocal_37) && unk_0x1D92A4A6F3D3A021(iLocal_37, 1119092736))
							{
								if (func_44() || Global_31028[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_42);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_43))
							{
								func_43(&iLocal_42);
								if (func_42("TV_HLP1"))
								{
									unk_0xD289B55B6AADBA10(1);
								}
							}
							if (unk_0xAE06B9E39EBDE049(iLocal_37))
							{
								if (!unk_0xDC79F755CB11603C(iLocal_37))
								{
									unk_0x80250B8368A4E611(iLocal_37, 1, 0);
								}
							}
							if (unk_0xAE06B9E39EBDE049(iLocal_39))
							{
								if (!unk_0xDC79F755CB11603C(iLocal_39))
								{
									unk_0x80250B8368A4E611(iLocal_39, 1, 0);
								}
							}
							if (unk_0xAE06B9E39EBDE049(iLocal_38))
							{
								if (unk_0xDC79F755CB11603C(iLocal_38))
								{
									unk_0x80250B8368A4E611(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xF005CCA4263DF67F(&cLocal_46, "NULL"))
							{
								unk_0x309C0E6FCCD30F19(&cLocal_46, 0);
							}
							unk_0x380CAF1041F2471B(0);
							SYSTEM::WAIT(0);
							if (unk_0xAE06B9E39EBDE049(iLocal_40))
							{
								unk_0x5A61AA1565E133F1(iLocal_40);
							}
							if (!func_64(iLocal_43))
							{
								if ((Global_31028[iLocal_43 /*11*/] == 3 || Global_31028[iLocal_43 /*11*/] == 2) || Global_31028[iLocal_43 /*11*/] == -1)
								{
									Global_31028[iLocal_43 /*11*/] = unk_0x344C570D6F8700DF(0, 2);
								}
								unk_0x1E55C69CBB6AE781(Global_31028[iLocal_43 /*11*/]);
								unk_0x5A6DFE9EDCAD0031(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_31028[iLocal_43 /*11*/];
								iLocal_45 = Global_31028[iLocal_43 /*11*/].f_1;
								unk_0xA8EF09ADA254E0B8(iLocal_44, func_41(iLocal_45), Global_31028[iLocal_43 /*11*/].f_9);
								unk_0x1E55C69CBB6AE781(iLocal_44);
								if (Global_31028[iLocal_43 /*11*/].f_7)
								{
									Global_31028[iLocal_43 /*11*/].f_5 = 0;
									Global_31028[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_31028[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_31028[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_31028[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_31028[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0x48542159A3D5E7ED() == -1)
								{
									unk_0x1E55C69CBB6AE781(Global_31028[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_31028[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_43(&iLocal_42);
							}
							Global_31028[iLocal_43 /*11*/].f_5 = 0;
							Global_31028[iLocal_43 /*11*/].f_4 = 0;
							Global_31028[iLocal_43 /*11*/].f_1 = 0;
							Global_31028[iLocal_43 /*11*/].f_2 = 0;
							Global_31028[iLocal_43 /*11*/].f_7 = 0;
							Global_31028[iLocal_43 /*11*/].f_8 = 0;
							Global_31028[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0xD39E529EBE5DB04F();
		}
	}
	func_68();
	unk_0xD39E529EBE5DB04F();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_31028[iLocal_43 /*11*/] = unk_0x48542159A3D5E7ED();
	}
	fLocal_30 = unk_0x4784099208B7C904();
	unk_0x1E55C69CBB6AE781(-1);
	func_4();
	if (unk_0x7B70881748D166CD(joaat("family5")) == 0)
	{
		if (!unk_0xF005CCA4263DF67F(&cLocal_46, "NULL"))
		{
			unk_0x309C0E6FCCD30F19(&cLocal_46, 1);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	func_3();
	func_52();
	if (unk_0xAE06B9E39EBDE049(iLocal_38))
	{
		if (!unk_0xDC79F755CB11603C(iLocal_38))
		{
			unk_0x80250B8368A4E611(iLocal_38, 1, 0);
		}
	}
	unk_0xCF0935ECFEB675B9(0);
	func_2();
}

void func_2()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (iLocal_87 == 1)
		{
			unk_0x9733E261CA52F1AD();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0xCA1F114B668562E5(iLocal_35);
		if (unk_0xAE06B9E39EBDE049(iLocal_37))
		{
			if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x80250B8368A4E611(iLocal_37, 0, 0);
				if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x8DDE075026DB7EFD(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x8DDE075026DB7EFD(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_39))
	{
		unk_0x80250B8368A4E611(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x3ED9330214992278(0, 0, 3000, 1, 0, 0);
		if (unk_0xC516FEEB950FFD58(uLocal_78))
		{
			unk_0x856549C07003344B(uLocal_78, 0);
		}
		unk_0xB8B0F7C8C1548C5B(uLocal_78, 0);
		unk_0x4C4FC7841A5FB983(0);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), 0);
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0x439AF5D920F78274(unk_0x9B0761B4C3EB8BC7(), Local_31, 1, 0, 2);
			if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
				}
			}
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 1, 0);
		}
		if (!unk_0xF005CCA4263DF67F(&cLocal_62, "NULL"))
		{
			if (unk_0x306BF588BD8151E8(&cLocal_62))
			{
				unk_0xFA07F8BEBDAAFBA8(&cLocal_62);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_39))
		{
			unk_0x80250B8368A4E611(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0xCF0935ECFEB675B9(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_14(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_13())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_14(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_10(unk_0x460153A63B9477BC())) && !func_7(unk_0x460153A63B9477BC(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_10(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_6()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312763;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_43))
	{
		if (((((((func_31(&uLocal_26) >= 1f && unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x518D695E2DBA9DB8(iLocal_37) == unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7())) && !func_30(8, -1)) && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && unk_0xC21B6E3EB2C43175(unk_0x9B0761B4C3EB8BC7(), Local_31, 90f)) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) && !unk_0x9CC4D06F5338CA6B())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				func_28(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, 1))
			{
				func_43(&iLocal_42);
				func_55(&uLocal_26);
				Global_31028[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x39F82CCA08464EF6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4CC25B68A91D144(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_2();
			func_43(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x26A60F42A1132477(2, 222);
		if (unk_0x1BD7199394D7F19A(2, 222))
		{
			func_43(&iLocal_42);
			func_28(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x779660A9E5364C4D(2, 200, 1);
		if (unk_0xDC79F755CB11603C(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
			}
		}
		unk_0xA86915034F55A3BF();
		unk_0x88ADE0F0FB8084E8(unk_0x9B0761B4C3EB8BC7());
		func_23(1, 1);
		unk_0x26A60F42A1132477(2, 222);
		func_17(0);
		if (unk_0x1BD7199394D7F19A(2, 222) || (unk_0xC1F43F8D0D5EB664(2) && unk_0x275A6259432E6B3C(2, 200)))
		{
			func_43(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_13())
	{
		Global_19681.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_20()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x39F82CCA08464EF6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4CC25B68A91D144(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x48542159A3D5E7ED() == 0)
				{
					unk_0x1E55C69CBB6AE781(1);
				}
				else
				{
					unk_0x1E55C69CBB6AE781(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0EEB12E4AD6BD29B(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x4784099208B7C904();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x5A6DFE9EDCAD0031(fVar2);
				iLocal_24 = unk_0x578C4EF320340AF7();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x4784099208B7C904();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x5A6DFE9EDCAD0031(fVar2);
				iLocal_24 = unk_0x578C4EF320340AF7();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x39F82CCA08464EF6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xC4CC25B68A91D144(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x578C4EF320340AF7() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x0EEB12E4AD6BD29B(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x45DEF9871BA3107A("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x4A5E99F2490D786A(uLocal_78, 100f);
		unk_0x856549C07003344B(uLocal_78, 1);
		unk_0x3ED9330214992278(1, 0, 3000, 1, 0, 0);
		if (unk_0xAE06B9E39EBDE049(iLocal_39))
		{
			unk_0x80250B8368A4E611(iLocal_39, 0, 0);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), 1);
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x439AF5D920F78274(unk_0x9B0761B4C3EB8BC7(), Local_31, -1, 0, 2);
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 0, 0);
		}
		if (!unk_0xF005CCA4263DF67F(&cLocal_62, "NULL"))
		{
			if (!unk_0x306BF588BD8151E8(&cLocal_62))
			{
				unk_0x17E478571720218F(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0xCF0935ECFEB675B9(1);
		iLocal_85 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
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
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = unk_0x354AD085195C5FA6();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x7BCC91F3C1CF24E8(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (iLocal_87 == 0)
		{
			unk_0xD3B15675F54B6FA9("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

float func_31(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_32(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7()) / 1000f);
}

bool func_33(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0xCA1F114B668562E5(iLocal_35);
	unk_0x9D15035C6653D1B1(4);
	unk_0xD8D551845E3EA730(1);
	unk_0xAE7F89ECF2B49642(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xCA1F114B668562E5(unk_0xC48A590C39E17456());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x8940B46482DD0A7D(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_31028[iLocal_43 /*11*/].f_7 = 0;
	Global_31028[iLocal_43 /*11*/] = unk_0x48542159A3D5E7ED();
	fLocal_30 = unk_0x4784099208B7C904();
	if (unk_0x306BF588BD8151E8(&cLocal_62))
	{
		unk_0xFA07F8BEBDAAFBA8(&cLocal_62);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	func_43(&iLocal_42);
	unk_0x1E55C69CBB6AE781(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x460153A63B9477BC()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x6000E4684CB4330B(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_41(int iParam0)
{
	char* sVar0;
	
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

bool func_42(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()
{
	if (func_31(&uLocal_26) < 1f)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if ((!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xC21B6E3EB2C43175(unk_0x9B0761B4C3EB8BC7(), Local_31, 90f)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x518D695E2DBA9DB8(iLocal_37) != unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_95883)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_31028[iLocal_43 /*11*/].f_8)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_28(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_42, 1))
	{
		func_43(&iLocal_42);
		func_55(&uLocal_26);
		Global_31028[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x39F82CCA08464EF6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xC4CC25B68A91D144(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = iParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					unk_0xFB6CC2C6970D6917(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	unk_0x3C2CA88D6219BB12(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_50(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_49() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_49()
{
	return Global_30968;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
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
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_52()
{
	SYSTEM::WAIT(0);
	if (unk_0xA9A353D835A7867C("tvscreen"))
	{
		unk_0x07FF72DF7F314523("tvscreen");
		iLocal_35 = -1;
		unk_0xCA1F114B668562E5(unk_0xC48A590C39E17456());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_54();
	}
	if (unk_0xA9A353D835A7867C("tvscreen"))
	{
		unk_0x07FF72DF7F314523("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!unk_0xAE06B9E39EBDE049(iLocal_37))
	{
		func_68();
	}
	iVar0 = unk_0x36FE6D3220816ADA(iLocal_37);
	unk_0x3FF471D4A18A5ED5("tvscreen", 0);
	unk_0xC7DE5B846819A9B2(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x561503C7E871BCEC(iVar0))
		{
			if (!unk_0xAE06B9E39EBDE049(iLocal_37))
			{
				func_68();
			}
			if (!unk_0xED07D558B3EDDF8A(iLocal_37))
			{
				func_68();
			}
			if (!unk_0xA9A353D835A7867C("tvscreen"))
			{
				unk_0x3FF471D4A18A5ED5("tvscreen", 0);
			}
			if (!unk_0x561503C7E871BCEC(iVar0))
			{
				unk_0xC7DE5B846819A9B2(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_35 = unk_0x2BC38EC678978375("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_37))
	{
		if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x6E52E47D436A2C77(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xE922BAA80E8F9324(iLocal_37, uLocal_34);
	unk_0x6A8F948698B360B4(iLocal_37, 1);
	unk_0x80250B8368A4E611(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x6E52E47D436A2C77(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xE922BAA80E8F9324(iLocal_39, uLocal_34);
	unk_0x6A8F948698B360B4(iLocal_39, 1);
	unk_0x80250B8368A4E611(iLocal_39, 0, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0, 0f);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(uParam0, 1);
	unk_0xD2459066EA58CE43(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0x3E4D3CCC220BDFB1(iLocal_37, 1) };
	uLocal_34 = unk_0xEF7858F25585F853(iLocal_37);
	func_61();
	if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_38 = unk_0x6E52E47D436A2C77(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xE922BAA80E8F9324(iLocal_38, uLocal_34);
	unk_0x80250B8368A4E611(iLocal_38, 1, 0);
	unk_0x6A8F948698B360B4(iLocal_38, 1);
}

void func_61()
{
	unk_0xA8EF09ADA254E0B8(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0xA8EF09ADA254E0B8(1, func_41(12), 0);
	}
	else
	{
		unk_0xA8EF09ADA254E0B8(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_31028[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_40))
			{
				unk_0x0312E5501F93E5AB(iLocal_40, 0);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_37))
			{
				unk_0x0312E5501F93E5AB(iLocal_37, 0);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_39))
			{
				unk_0x0312E5501F93E5AB(iLocal_39, 0);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_38))
			{
				unk_0x0312E5501F93E5AB(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_40))
		{
			unk_0x0312E5501F93E5AB(iLocal_40, 1);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_37))
		{
			unk_0x0312E5501F93E5AB(iLocal_37, 1);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_39))
		{
			unk_0x0312E5501F93E5AB(iLocal_39, 1);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_38))
		{
			unk_0x0312E5501F93E5AB(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_31028[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0xC047A11F7A99E6B4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_43 == -1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	func_43(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_31028[iLocal_43 /*11*/].f_6 = 0;
		Global_31028[iLocal_43 /*11*/].f_7 = 0;
		Global_31028[iLocal_43 /*11*/].f_8 = 0;
		Global_31028[iLocal_43 /*11*/].f_4 = 0;
		Global_31028[iLocal_43 /*11*/].f_5 = 0;
		Global_31028[iLocal_43 /*11*/].f_2 = 0;
		Global_31028[iLocal_43 /*11*/] = -1;
		Global_31028[iLocal_43 /*11*/].f_1 = 0;
		Global_31028[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	SYSTEM::WAIT(0);
	func_69();
	if (unk_0x306BF588BD8151E8(&cLocal_62))
	{
		unk_0xFA07F8BEBDAAFBA8(&cLocal_62);
	}
	unk_0x2AFDD4ABD49FB5E4();
	func_2();
	unk_0xD39E529EBE5DB04F();
}

void func_69()
{
	func_52();
	if (unk_0xAE06B9E39EBDE049(iLocal_37))
	{
		if (unk_0x36FE6D3220816ADA(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x315F7D8C33F0AB37(&iLocal_37);
			unk_0x74528AC0906CBABE(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_39))
	{
		unk_0x315F7D8C33F0AB37(&iLocal_39);
		unk_0x74528AC0906CBABE(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_38))
	{
		unk_0x315F7D8C33F0AB37(&iLocal_38);
		unk_0x74528AC0906CBABE(joaat("prop_tt_screenstatic"));
	}
}

